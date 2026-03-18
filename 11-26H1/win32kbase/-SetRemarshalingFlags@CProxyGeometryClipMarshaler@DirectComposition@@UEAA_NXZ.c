/*
 * XREFs of ?SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x140246C10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401718B0 (-SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CProxyGeometryClipMarshaler::SetRemarshalingFlags(
        DirectComposition::CProxyGeometryClipMarshaler *this)
{
  char result; // al

  result = DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(this);
  if ( *((_QWORD *)this + 12) )
  {
    *((_DWORD *)this + 4) |= 0x1000u;
    result = 1;
  }
  if ( *((_QWORD *)this + 13) )
  {
    *((_DWORD *)this + 4) |= 0x2000u;
    return 1;
  }
  return result;
}
