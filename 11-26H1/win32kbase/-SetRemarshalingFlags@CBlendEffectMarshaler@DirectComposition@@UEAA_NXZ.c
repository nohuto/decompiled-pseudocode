/*
 * XREFs of ?SetRemarshalingFlags@CBlendEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238B00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBlendEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBlendEffectMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 64) )
    *v2 |= 0x400u;
  if ( DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this) || (*v2 & 0x400) != 0 )
    return 1;
  return v1;
}
