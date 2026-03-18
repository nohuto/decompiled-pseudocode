/*
 * XREFs of ?SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023EF90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401718B0 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPathGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CPathGeometryMarshaler *this)
{
  char result; // al

  result = DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 12) )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    return 1;
  }
  return result;
}
