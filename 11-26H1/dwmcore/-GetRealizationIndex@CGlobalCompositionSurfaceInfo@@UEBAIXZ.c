/*
 * XREFs of ?GetRealizationIndex@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x1801C3940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::GetRealizationIndex(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 88LL))(v1);
  else
    return 0xFFFFFFFFLL;
}
