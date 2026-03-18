/*
 * XREFs of ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402C4E50
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     GreCancelSynchronizedWindowResize @ 0x140344C40 (GreCancelSynchronizedWindowResize.c)
 */

void __fastcall ResizeTimerFunc(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  FindTimer((__int64)a1, a3, 2u, 1, 0LL);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
  if ( v4 && *(struct tagWND **)(v4 + 16) == a1 )
    *(_DWORD *)(v4 + 200) |= 0x4000000u;
  GreCancelSynchronizedWindowResize(*(HWND *)a1);
}
