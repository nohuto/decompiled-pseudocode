/*
 * XREFs of EngDeleteSurface @ 0x1401299D0
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140129710 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x140129880 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1401299A0 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1401299F0 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 * Callees:
 *     bDeleteSurface @ 0x14008CE40 (bDeleteSurface.c)
 */

BOOL __stdcall EngDeleteSurface(HSURF hsurf)
{
  BOOL result; // eax

  result = 1;
  if ( hsurf )
    return bDeleteSurface((unsigned int)hsurf);
  return result;
}
