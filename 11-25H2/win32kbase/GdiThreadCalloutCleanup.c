/*
 * XREFs of GdiThreadCalloutCleanup @ 0x1400C0660
 * Callers:
 *     <none>
 * Callees:
 *     ?W32GetThreadWin32Thread@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z @ 0x1400C09B4 (-W32GetThreadWin32Thread@@YAPEAU_W32THREAD@@PEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall GdiThreadCalloutCleanup(struct _ETHREAD *a1)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  __int64 v2; // rcx

  ThreadWin32Thread = W32GetThreadWin32Thread(a1);
  v2 = -8LL;
  if ( ThreadWin32Thread )
    v2 = (__int64)ThreadWin32Thread;
  return DxDdThreadCallout(v2 + 392, 0LL);
}
