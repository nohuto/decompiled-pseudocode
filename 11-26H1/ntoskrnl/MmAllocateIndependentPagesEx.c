/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x140B3D7BC
 * Callers:
 *     KiAllocateProcessorStacks @ 0x1405EA004 (KiAllocateProcessorStacks.c)
 *     HvlpPreallocatePageListResources @ 0x140772CA4 (HvlpPreallocatePageListResources.c)
 *     HvlInitializeProcessor @ 0x1407918C4 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x140837808 (ExCreatePoolTagTable.c)
 *     MmAllocateIsrStack @ 0x140875DEC (MmAllocateIsrStack.c)
 *     HvpAllocateNonPagedBin @ 0x140A8808C (HvpAllocateNonPagedBin.c)
 *     MmAllocateIndependentPages @ 0x140B3D7A0 (MmAllocateIndependentPages.c)
 *     KeStartAllProcessors @ 0x140CC8ACC (KeStartAllProcessors.c)
 *     PspIumInitialize @ 0x140CD913C (PspIumInitialize.c)
 * Callees:
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiInitializePfn @ 0x1402D7680 (MiInitializePfn.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140309350 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiGetSlabPage @ 0x14033A284 (MiGetSlabPage.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiObtainPoolCharges @ 0x140366384 (MiObtainPoolCharges.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     MiReturnExcessPoolCharges @ 0x1403C7FB0 (MiReturnExcessPoolCharges.c)
 *     MiWaitForFreePage @ 0x1403D1DB4 (MiWaitForFreePage.c)
 *     MiGetNextPageColor @ 0x14044ADA0 (MiGetNextPageColor.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r15
  BOOL v9; // r13d
  unsigned __int64 ValidPte; // rax
  int v11; // ecx
  unsigned __int64 v12; // rdi
  __int64 v13; // rbp
  int v14; // r14d
  unsigned int NextPageColor; // ebx
  __int64 v16; // r9
  unsigned int v17; // edx
  _QWORD *v18; // rcx
  __int64 SlabPage; // rax
  __int64 Page; // r9
  __int64 v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  _OWORD v23[4]; // [rsp+40h] [rbp-48h] BYREF
  int v24; // [rsp+90h] [rbp+8h]
  unsigned int v25; // [rsp+A8h] [rbp+20h]

  v25 = a4;
  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v23[0] = 0LL;
  v7 = MiReservePtes((__int64)&stru_140E36558.WaitBlockList, v6, a3, a4);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, (unsigned __int64 *)v7, v6);
    return 0LL;
  }
  v9 = a3 && (dword_140E37CC4 & 8) != 0 && ((MiFlags & 0x400000000LL) == 0 || (MiFlags & 0x800000000LL) != 0);
  v22 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
  v11 = 0;
  v12 = ValidPte;
  if ( a2 != -1 )
    v11 = a2 + 1;
  v24 = v11;
  MiInitializePageColorBase(0LL, 3, v11, (__int64)v23);
  v13 = 0LL;
  v21 = 0LL;
  do
  {
    v14 = 0;
    NextPageColor = MiGetNextPageColor((__int64)v23);
    if ( v9 )
    {
      if ( a3 != -1 )
      {
        v17 = 0;
        if ( !v25 )
          goto LABEL_22;
        v18 = (_QWORD *)a3;
        while ( v16 != *v18 >> 12 )
        {
          ++v17;
          ++v18;
          if ( v17 >= v25 )
            goto LABEL_22;
        }
      }
      v14 = 1;
    }
LABEL_22:
    while ( 1 )
    {
      if ( v14 )
      {
        SlabPage = MiGetSlabPage(
                     (__int64)&MiSystemPartition,
                     1,
                     NextPageColor,
                     v24 != 0 ? 4 : 6,
                     (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                     0);
        if ( SlabPage != -1 )
          break;
      }
      Page = MiGetPage((__int64)&MiSystemPartition, NextPageColor, 0x80u);
      if ( Page != -1 )
        goto LABEL_28;
      MiWaitForFreePage((__int64)&MiSystemPartition, 0);
    }
    if ( (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL) )
      ++v13;
LABEL_28:
    v12 = (Page << 12) ^ ((Page << 12) ^ v12) & 0xFFF0000000000FFFuLL;
    MiInitializePfn(48 * Page - 0x220000000000LL, v7, 4, 4);
    *(_QWORD *)v7 = v12;
    v7 += 8LL;
    ++v21;
    --v6;
  }
  while ( v6 );
  if ( v13 )
    MiReturnExcessPoolCharges(v13, 1);
  return v22;
}
