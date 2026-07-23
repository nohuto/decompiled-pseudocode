/*
 * XREFs of MiRemoveVadCharges @ 0x140A02094
 * Callers:
 *     MiFinishVadDeletion @ 0x14043B7B8 (MiFinishVadDeletion.c)
 * Callees:
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiIsVadLarge @ 0x1403A8C30 (MiIsVadLarge.c)
 *     MiGetSharedVm @ 0x140441D90 (MiGetSharedVm.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiFillCommitReturnInfo @ 0x14046E040 (MiFillCommitReturnInfo.c)
 *     MiReturnFullProcessCharges @ 0x1404C3598 (MiReturnFullProcessCharges.c)
 *     MiReleaseVadEventBlocks @ 0x140A01D8C (MiReleaseVadEventBlocks.c)
 *     MiResidentPagesForSpan @ 0x140A03850 (MiResidentPagesForSpan.c)
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
