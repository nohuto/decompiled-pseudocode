/*
 * XREFs of _Init_thread_footer @ 0x180002700
 * Callers:
 *     ??0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z @ 0x180007080 (--0CallWithHangTimeout@@QEAA@W4TimeoutDuration@0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_18001A4A8);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_18001A4A8);
  return Init_thread_notify();
}
