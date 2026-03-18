/*
 * XREFs of ?SetRemarshalingFlags@CGaussianBlurEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402393D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CGaussianBlurEffectMarshaler *this)
{
  _DWORD *v1; // rbx
  char v2; // di

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 64) != 3.0 )
    *v1 |= 0x400u;
  v2 = 0;
  if ( *((_DWORD *)this + 65) )
    *v1 |= 0x800u;
  if ( *((_DWORD *)this + 66) )
    *v1 |= 0x1000u;
  if ( DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this) || (*v1 & 0x1C00) != 0 )
    return 1;
  return v2;
}
