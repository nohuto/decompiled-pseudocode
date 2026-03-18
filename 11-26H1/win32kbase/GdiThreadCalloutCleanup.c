/*
 * XREFs of GdiThreadCalloutCleanup @ 0x140119FC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x14011A324 (W32GetThreadWin32Thread.c)
 */

__int64 GdiThreadCalloutCleanup()
{
  __int64 ThreadWin32Thread; // rax
  __int64 v1; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread();
  v1 = -8LL;
  if ( ThreadWin32Thread )
    v1 = ThreadWin32Thread;
  return DxDdThreadCallout(v1 + 384, 0LL);
}
