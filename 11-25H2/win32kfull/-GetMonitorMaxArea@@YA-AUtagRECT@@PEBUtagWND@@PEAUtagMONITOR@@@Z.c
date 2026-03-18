/*
 * XREFs of ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1401B67CC
 * Callers:
 *     ?Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z @ 0x1400261C8 (-Update@CHECKPOINT@@AEAAXPEBUtagWND@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401B681C (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

struct tagRECT *__fastcall GetMonitorMaxArea(
        struct tagRECT *__return_ptr retstr,
        const struct tagWND *a2,
        struct tagMONITOR *a3)
{
  const struct tagWND *v5; // rbx
  struct tagWND *v6; // rax

  v5 = a2;
  v6 = _HungWindowFromGhostWindow(a2);
  if ( v6 )
    v5 = v6;
  GetMonitorRectForWindow((__int64)retstr, (__int64)a3, v5);
  return retstr;
}
