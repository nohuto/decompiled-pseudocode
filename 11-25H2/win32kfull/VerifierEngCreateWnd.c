/*
 * XREFs of VerifierEngCreateWnd @ 0x1403322F0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateWnd @ 0x140302300 (EngCreateWnd.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x140331D44 (-VerifierRandomFailure@@YAHK@Z.c)
 */

WNDOBJ *__fastcall VerifierEngCreateWnd(SURFOBJ *pso, HWND hwnd, WNDOBJCHANGEPROC pfn, FLONG fl, INT iPixelFormat)
{
  if ( (unsigned int)VerifierRandomFailure((int)pso, (__int64)hwnd) )
    return 0LL;
  else
    return EngCreateWnd(pso, hwnd, pfn, fl, iPixelFormat);
}
