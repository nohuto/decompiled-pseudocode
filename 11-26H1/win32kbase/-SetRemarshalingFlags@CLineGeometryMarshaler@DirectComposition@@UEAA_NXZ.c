/*
 * XREFs of ?SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401718B0 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CLineGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CLineGeometryMarshaler *this)
{
  DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  *((_DWORD *)this + 4) |= 0x3000u;
  return 1;
}
