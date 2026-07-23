/*
 * XREFs of MmAllocateIndependentPagesEx @ 0x140B3F88C
 * Callers:
 *     KiAllocateProcessorStacks @ 0x1405EC974 (KiAllocateProcessorStacks.c)
 *     HvlpPreallocatePageListResources @ 0x140775CA4 (HvlpPreallocatePageListResources.c)
 *     HvlInitializeProcessor @ 0x1407943F4 (HvlInitializeProcessor.c)
 *     ExCreatePoolTagTable @ 0x14083DA48 (ExCreatePoolTagTable.c)
 *     MmAllocateIsrStack @ 0x14087C1D0 (MmAllocateIsrStack.c)
 *     HvpAllocateNonPagedBin @ 0x140A8F1BC (HvpAllocateNonPagedBin.c)
 *     MmAllocateIndependentPages @ 0x140B3F870 (MmAllocateIndependentPages.c)
 *     KeStartAllProcessors @ 0x140CCEBBC (KeStartAllProcessors.c)
 *     PspIumInitialize @ 0x140CDF4BC (PspIumInitialize.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiInitializePfn @ 0x1402B9440 (MiInitializePfn.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x1402EB3D0 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiObtainPoolCharges @ 0x140368124 (MiObtainPoolCharges.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiReturnExcessPoolCharges @ 0x1403D1EA0 (MiReturnExcessPoolCharges.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiGetNextPageColor @ 0x140442ED0 (MiGetNextPageColor.c)
 */

__int64 __fastcall MmAllocateIndependentPagesEx(unsigned __int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  BOOL v9; // r14d
  unsigned __int64 ValidPte; // rax
  int v11; // ecx
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r15d
  unsigned int NextPageColor; // ebx
  __int64 v16; // r9
  unsigned int v17; // edx
  _QWORD *v18; // rcx
  __int64 SlabPage; // rax
  __int64 Page; // r9
  int v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-58h]
  _OWORD v24[5]; // [rsp+48h] [rbp-50h] BYREF
  BOOL v25; // [rsp+A0h] [rbp+8h]
  unsigned int v26; // [rsp+B8h] [rbp+20h]

  v26 = a4;
  v6 = (a1 >> 12) + ((a1 & 0xFFF) != 0);
  v24[0] = 0LL;
  v7 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, v6, a3, a4);
  if ( !v7 )
    return 0LL;
  if ( !(unsigned int)MiObtainPoolCharges(v6, 1) )
  {
    MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v7, v6);
    return 0LL;
  }
  v9 = a3 && (dword_140E37E44 & 8) != 0 && ((MiFlags & 0x400000000LL) == 0 || (MiFlags & 0x800000000LL) != 0);
  v25 = v9;
  v23 = (__int64)(v7 << 25) >> 16;
  ValidPte = MiMakeValidPte(v7, 0LL, -1610612732);
  v11 = 0;
  v12 = ValidPte;
  if ( a2 != -1 )
    v11 = a2 + 1;
  v21 = v11;
  MiInitializePageColorBase(0LL, 3, v11, (__int64)v24);
  v13 = 0LL;
  v22 = 0LL;
  do
  {
    v14 = 0;
    NextPageColor = MiGetNextPageColor((__int64)v24);
    if ( v9 )
    {
      if ( a3 != -1 )
      {
        v17 = 0;
        if ( !v26 )
          goto LABEL_22;
        v18 = (_QWORD *)a3;
        while ( v16 != *v18 >> 12 )
        {
          ++v17;
          ++v18;
          if ( v17 >= v26 )
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
                     v21 != 0 ? 4 : 6,
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
    v9 = v25;
    *(_QWORD *)v7 = v12;
    v7 += 8LL;
    ++v22;
    --v6;
  }
  while ( v6 );
  if ( v13 )
    MiReturnExcessPoolCharges(v13, 1);
  return v23;
}
