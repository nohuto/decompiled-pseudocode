/*
 * XREFs of ?Activate@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1402FEBD4
 * Callers:
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z @ 0x1402FE6F4 (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z.c)
 *     ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x14030F698 (-StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGDEADLOCK_TRACKER::Activate(DXGDEADLOCK_TRACKER *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 9, 1, 0) )
  {
    *(_QWORD *)this = KeQueryUnbiasedInterruptTime();
    v2 = *((_QWORD *)this + 3);
    v3 = -10000LL * *(int *)(v2 + 4952);
    *((_DWORD *)this + 2) = *(_DWORD *)(v2 + 4952);
    if ( KeSetTimer((PKTIMER)((char *)this + 248), (LARGE_INTEGER)v3, (PKDPC)((char *)this + 312)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12708;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Status == FALSE", 12708LL, 0LL, 0LL, 0LL, 0LL);
    }
    v4 = *((_QWORD *)this + 3);
    v5 = *(int *)(v4 + 4956);
    *((_DWORD *)this + 3) = v5;
    *((_DWORD *)this + 4) = *(_DWORD *)(v4 + 4960);
    if ( KeSetTimer((PKTIMER)((char *)this + 40), (LARGE_INTEGER)(-10000 * v5), (PKDPC)((char *)this + 104)) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12715;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Status == FALSE", 12715LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
}
