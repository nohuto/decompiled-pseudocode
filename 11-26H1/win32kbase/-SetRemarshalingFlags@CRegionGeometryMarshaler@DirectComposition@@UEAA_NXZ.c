/*
 * XREFs of ?SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401718B0 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CRegionGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CRegionGeometryMarshaler *this)
{
  char v1; // bl

  v1 = 0;
  *((_QWORD *)this + 14) = 0LL;
  if ( DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this) || *((_QWORD *)this + 13) )
    return 1;
  return v1;
}
