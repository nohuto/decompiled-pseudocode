/*
 * XREFs of ?SetRemarshalingFlags@CLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239A50
 * Callers:
 *     ?SetRemarshalingFlags@CAmbientLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402388F0 (-SetRemarshalingFlags@CAmbientLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239EE0 (-SetRemarshalingFlags@CPositionedLightMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CLightMarshaler::SetRemarshalingFlags(DirectComposition::CLightMarshaler *this)
{
  int v2; // eax
  char v3; // cl

  if ( *((_BYTE *)this + 56) != 1 )
    *((_DWORD *)this + 4) |= 0x40u;
  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  if ( (v2 & 0x40) != 0 || *((_QWORD *)this + 9) || *((_QWORD *)this + 12) )
    return 1;
  return v3;
}
