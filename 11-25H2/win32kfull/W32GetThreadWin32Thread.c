/*
 * XREFs of W32GetThreadWin32Thread @ 0x140113794
 * Callers:
 *     xxxQueryInformationThread @ 0x14002C784 (xxxQueryInformationThread.c)
 *     FreeW32Thread @ 0x14011355C (FreeW32Thread.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x14011364C (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     xxxSetInformationThread @ 0x140114240 (xxxSetInformationThread.c)
 *     ?InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x14025D994 (-InitiateShutdown@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax

  v1 = 0LL;
  ThreadWin32Thread = PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    return *(_QWORD *)ThreadWin32Thread;
  return v1;
}
