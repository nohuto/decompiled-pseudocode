/*
 * XREFs of ?SetRemarshalingFlags@CBrightnessEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238B50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBrightnessEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CBrightnessEffectMarshaler *this)
{
  _DWORD *v1; // rax
  int *v2; // rbx
  bool v3; // al
  char v4; // cl

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 64) != 1.0 )
    *v1 |= 0x400u;
  if ( *((float *)this + 65) != 0.0 )
    *v1 |= 0x800u;
  v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 66) == 0.0 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x1000u;
  if ( *((float *)this + 67) != 0.0 )
    *v2 = *v1 | 0x2000;
  v3 = DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this);
  v4 = 0;
  if ( v3 || (*v2 & 0x3C00) != 0 )
    return 1;
  return v4;
}
