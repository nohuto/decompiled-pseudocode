/*
 * XREFs of MiDeleteVadBitmap @ 0x140AFCE30
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1404C7A8C (MiDeleteFinalPageTables.c)
 * Callees:
 *     MiDeletePagablePteRange @ 0x140363600 (MiDeletePagablePteRange.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     MiCloneTreeActive @ 0x140464760 (MiCloneTreeActive.c)
 *     MiHyperSpaceSize @ 0x140478EE8 (MiHyperSpaceSize.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiReturnFullProcessCharges @ 0x1404C3598 (MiReturnFullProcessCharges.c)
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     MiUpdateChargedWsles @ 0x140526724 (MiUpdateChargedWsles.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiDeleteVadBitmap(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rsi
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r10
  __int64 v10; // r15
  __int64 ProcessPartition; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r8
  __int128 v20; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+40h] [rbp-58h]
  __int128 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+60h] [rbp-38h]

  v1 = *(_QWORD **)(BugCheckParameter2 + 1040);
  v20 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  BugCheckParameter4 = v1[154];
  if ( BugCheckParameter4 || (result = MiCloneTreeActive(BugCheckParameter2), (_DWORD)result) )
    KeBugCheckEx(0x1Au, 0x3450uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 640), BugCheckParameter4);
  v5 = BugCheckParameter2 + 1024;
  if ( *(_QWORD *)(BugCheckParameter2 + 1040) != BugCheckParameter4 )
  {
    xHalTimerWatchdogStop();
    v6 = v1[140];
    v7 = MiHyperSpaceSize();
    v8 = 2LL;
    MiDeletePagablePteRange(v5, 2, v9, v7 + v9 - 1, 0, (__int64)&v20);
    if ( *((_QWORD *)&v21 + 1) )
      _InterlockedAdd64((volatile signed __int64 *)(BugCheckParameter2 + 648), -*((_QWORD *)&v21 + 1));
    v10 = *((_QWORD *)&v20 + 1);
    ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
    v12 = v1[142] + v6;
    v13 = 0LL;
    v14 = v1 + 196;
    v15 = ProcessPartition;
    do
    {
      v13 += *v14++;
      --v8;
    }
    while ( v8 );
    v16 = v13 + v12;
    if ( v16 )
      MiReturnFullProcessCharges(BugCheckParameter2, v16);
    v17 = v16 - v10;
    if ( v17 )
      MiReturnCommit(v15, v17, 0);
    result = *(_QWORD *)(BugCheckParameter2 + 1272);
    if ( result )
      result = HalSystemVectorDispatchEntry();
    v18 = *(_QWORD *)(BugCheckParameter2 + 1264);
    if ( v18 )
    {
      MiUpdateChargedWsles(v5, -v18);
      return MiReturnFullProcessCommitment(BugCheckParameter2, v19);
    }
  }
  return result;
}
