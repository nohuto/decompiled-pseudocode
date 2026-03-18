/*
 * XREFs of ?IsOverlayRevokable@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801FE310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsOverlayRevokable(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx

  if ( *((_BYTE *)this + 296) )
    return 1;
  v1 = *((_QWORD *)this + 26);
  if ( !v1 )
    return 1;
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 160LL))(v1);
}
