/*
 * XREFs of SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x14021F160
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x140095E98 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE_CreateHLSURFCloneWrap(
        _QWORD *a1,
        struct SFMLOGICALSURFACE *a2,
        int a3,
        int a4,
        int a5)
{
  return SFMLOGICALSURFACE::CreateHLSURFClone(a1, a2, a3, a4, a5);
}
