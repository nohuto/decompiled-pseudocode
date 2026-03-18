/*
 * XREFs of GdiThreadCallout @ 0x14011A000
 * Callers:
 *     <none>
 * Callees:
 *     GrepThreadCallout @ 0x14011A030 (GrepThreadCallout.c)
 *     W32GetThreadWin32Thread @ 0x14011A324 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GdiThreadCallout(__int64 a1, unsigned int a2)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread();
  return GrepThreadCallout((ThreadWin32Thread + 8) & -(__int64)(ThreadWin32Thread != 0), a2);
}
