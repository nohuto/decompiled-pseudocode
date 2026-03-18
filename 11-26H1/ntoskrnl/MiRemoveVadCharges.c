/*
 * XREFs of MiRemoveVadCharges @ 0x14095C7D4
 * Callers:
 *     MiFinishVadDeletion @ 0x140442CA8 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     MiIsVadLarge @ 0x1403A6ED0 (MiIsVadLarge.c)
 *     MiGetSharedVm @ 0x140449C60 (MiGetSharedVm.c)
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiFillCommitReturnInfo @ 0x1404748C0 (MiFillCommitReturnInfo.c)
 *     MiReturnFullProcessCharges @ 0x1404C9B60 (MiReturnFullProcessCharges.c)
 *     MiReleaseVadEventBlocks @ 0x14095C4CC (MiReleaseVadEventBlocks.c)
 *     MiResidentPagesForSpan @ 0x14095DF90 (MiResidentPagesForSpan.c)
 */

_QWORD *__fastcall MiRemoveVadCharges(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // r14
  BOOL v5; // ebp
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *SharedVm; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  __int64 VadFlags; // rax
  int v14; // ecx
  unsigned __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h]
  __int128 v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 0LL;
  ProcessPartition = MiGetProcessPartition(a2);
  v5 = 0;
  if ( MiIsVadLarge(a1) )
    v5 = (MiReadVadFlags(v6) & 0x1C) != 20;
  v7 = *(unsigned int *)(a1 + 52);
  v8 = *(unsigned __int8 *)(a1 + 34);
  *((_QWORD *)&v18 + 1) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v19 = *(_QWORD *)a1;
  if ( (v7 | (unsigned __int64)(v8 << 32)) < 0x7FFFFFFFDLL )
  {
    MiFillCommitReturnInfo(
      *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32),
      (__int64)&v18,
      &v17);
    v9 = v17;
    if ( (_QWORD)v17 )
    {
      MiReturnFullProcessCharges(a2, v17);
      if ( v5 )
        _InterlockedAdd64((volatile signed __int64 *)(a2 + 1392), -v9);
    }
    if ( *((_QWORD *)&v17 + 1) )
    {
      SharedVm = MiGetSharedVm(a2 + 1024);
      v12 = SharedVm[1];
      if ( v12 )
      {
        if ( v11 <= v12 )
        {
          SharedVm[1] = v12 - v11;
          v11 = 0LL;
        }
        else
        {
          v11 -= v12;
          SharedVm[1] = 0LL;
        }
      }
      if ( v11 )
        MiReturnCommit(ProcessPartition, v11, 0);
    }
    *(_DWORD *)(a1 + 52) = 0;
    *(_BYTE *)(a1 + 34) = 0;
  }
  VadFlags = MiReadVadFlags(a1);
  v14 = VadFlags & 0x1C;
  if ( v14 == 4 || v14 == 16 || v14 == 12 && (VadFlags & 0x880000) == 0x880000 )
  {
    v16 = MiResidentPagesForSpan(
            (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12,
            ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v16 )
      MiReturnResident(ProcessPartition, v16);
  }
  return MiReleaseVadEventBlocks(a1);
}
