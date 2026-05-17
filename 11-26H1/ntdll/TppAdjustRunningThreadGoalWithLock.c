/*
 * XREFs of TppAdjustRunningThreadGoalWithLock @ 0x18003FC58
 * Callers:
 *     TppWorkerFindTask @ 0x18003D370 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 *     TppWorkPost @ 0x180041770 (TppWorkPost.c)
 *     TppWorkInitialize @ 0x18004D8A0 (TppWorkInitialize.c)
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     TpSetPoolThreadCpuSets @ 0x180065170 (TpSetPoolThreadCpuSets.c)
 *     TppGetCurrentThreadNumaNode @ 0x1800668B0 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x180066A90 (TpPostTask.c)
 *     TpStartAsyncIoOperation @ 0x1800D9120 (TpStartAsyncIoOperation.c)
 * Callees:
 *     TppPoolUpdateNodeRelation @ 0x18002A708 (TppPoolUpdateNodeRelation.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TppAdjustRunningThreadGoalWithLock(__int64 a1)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  __int16 v4; // r10
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  bool v7; // cf
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  if ( !a1 || (v2 = *(_DWORD *)(a1 + 440)) == 0 )
    v2 = MEMORY[0x7FFE03C0];
  result = *(unsigned int *)(a1 + 424);
  if ( v2 != (_DWORD)result )
  {
    *(_DWORD *)(a1 + 424) = v2;
    v4 = v2 - result;
    _m_prefetchw((const void *)(a1 + 8));
    v5 = *(_QWORD *)(a1 + 8);
    v11 = v5;
    do
    {
      LODWORD(v11) = v11 & 0xFFFF0000 | (unsigned __int16)(v11 + v4);
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v5);
      v11 = v5;
    }
    while ( v6 != v5 );
    v7 = v2 < 4;
    v8 = v2 + 1;
    if ( v7 )
      v8 = 4;
    v9 = *(_QWORD *)(a1 + 56);
    v10 = v8;
    NtSetInformationWorkerFactory(v9, 8LL, &v10, 4LL);
    return TppPoolUpdateNodeRelation(a1);
  }
  return result;
}
