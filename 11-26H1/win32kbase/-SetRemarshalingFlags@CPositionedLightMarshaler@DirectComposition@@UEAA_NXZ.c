/*
 * XREFs of ?SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239EE0
 * Callers:
 *     ?SetRemarshalingFlags@CDistantLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239130 (-SetRemarshalingFlags@CDistantLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPointLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239D90 (-SetRemarshalingFlags@CPointLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSpotLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A7C0 (-SetRemarshalingFlags@CSpotLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239A50 (-SetRemarshalingFlags@CLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CPositionedLightMarshaler::SetRemarshalingFlags(
        DirectComposition::CPositionedLightMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_QWORD *)this + 14) )
    *v2 |= 0x80u;
  if ( DirectComposition::CLightMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x80u) != 0 )
    return 1;
  return v1;
}
