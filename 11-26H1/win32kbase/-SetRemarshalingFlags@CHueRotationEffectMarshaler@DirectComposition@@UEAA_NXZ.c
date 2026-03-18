/*
 * XREFs of ?SetRemarshalingFlags@CHueRotationEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239520
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CHueRotationEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CHueRotationEffectMarshaler *this)
{
  _DWORD *v1; // rbx
  char v2; // al
  char v3; // cl

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 64) != 0.0 )
    *v1 |= 0x400u;
  v2 = DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*v1 & 0x400) != 0 )
    return 1;
  return v3;
}
