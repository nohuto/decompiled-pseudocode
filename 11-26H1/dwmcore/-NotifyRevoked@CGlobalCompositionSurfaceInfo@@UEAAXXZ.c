/*
 * XREFs of ?NotifyRevoked@CGlobalCompositionSurfaceInfo@@UEAAXXZ @ 0x180266670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyRevoked(CGlobalCompositionSurfaceInfo *this)
{
  if ( *((_BYTE *)this + 299) )
    *((_QWORD *)this + 35) = *((_QWORD *)g_pComposition + 37);
}
