/*
 * XREFs of ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x140037A70
 * Callers:
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1400277A0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1400A2DC0 (NtOpenCompositionSurfaceSectionInfo.c)
 *     ?InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z @ 0x1400A30A0 (-InsertCompletedToken@CompositionSurfaceObject@@UEAAJ_K0PEAUtagCloneableFlipTokenData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurface::FindBuffer(
        CCompositionSurface *this,
        __int64 a2,
        struct CCompositionBuffer **a3)
{
  bool v3; // zf
  char *v4; // r9
  char *i; // rcx

  v3 = *((_DWORD *)this + 30) == 0;
  *a3 = 0LL;
  if ( !v3 )
  {
    v4 = (char *)this + 104;
    for ( i = (char *)*((_QWORD *)this + 13); i != v4; i = *(char **)i )
    {
      if ( *((_QWORD *)i - 1) == a2 )
      {
        *a3 = (struct CCompositionBuffer *)(i - 24);
        return 0LL;
      }
    }
  }
  return 3221226021LL;
}
