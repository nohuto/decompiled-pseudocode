/*
 * XREFs of EngDeleteSurface @ 0x140121E90
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x140121D30 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x140121D60 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121FD0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z @ 0x14017D2A0 (-bDeleteSurface@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHSURF__@@@Z.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax
  __int64 SessionState; // rax

  result = 1;
  if ( hsurf )
  {
    SessionState = W32GetSessionState(hsurf);
    return bDeleteSurface(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), hsurf);
  }
  return result;
}
