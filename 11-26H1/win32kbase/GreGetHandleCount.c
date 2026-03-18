/*
 * XREFs of GreGetHandleCount @ 0x1401F09F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetHandleCount(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(SessionState + 88) + 8LL) + 72LL))(*(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL));
}
