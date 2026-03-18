/*
 * XREFs of GdiThreadCallout @ 0x1400C06A0
 * Callers:
 *     <none>
 * Callees:
 *     GrepThreadCallout @ 0x1400C06D0 (GrepThreadCallout.c)
 *     ?W32GetThreadWin32Thread@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z @ 0x1400C09B4 (-W32GetThreadWin32Thread@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall GdiThreadCallout(struct _ETHREAD *a1, unsigned int a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1);
  return GrepThreadCallout(((unsigned __int64)ThreadWin32Thread + 8) & -(__int64)(ThreadWin32Thread != 0LL), a2);
}
