/*
 * XREFs of ?SetRemarshalingFlags@CAffineTransform2DEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402387D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CAffineTransform2DEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CAffineTransform2DEffectMarshaler *this)
{
  char v1; // di
  _DWORD *v2; // rax
  int *v3; // r8
  int *v4; // rdx
  int *v5; // rbx

  v1 = 0;
  v2 = (_DWORD *)((char *)this + 16);
  if ( *((_DWORD *)this + 64) )
    *v2 |= 0x400u;
  if ( *((_DWORD *)this + 65) )
    *v2 |= 0x800u;
  v3 = (int *)((char *)this + 16);
  if ( *((float *)this + 66) == 1.0 )
    v3 = (int *)((char *)this + 16);
  else
    *v2 |= 0x1000u;
  if ( *((float *)this + 67) == 1.0 )
  {
    v4 = v3;
  }
  else
  {
    v4 = (int *)((char *)this + 16);
    *v3 = *v2 | 0x2000;
  }
  if ( *((float *)this + 68) == 0.0 )
    v4 = v3;
  else
    *v3 |= 0x4000u;
  if ( *((float *)this + 69) == 0.0 )
  {
    v5 = v4;
  }
  else
  {
    v5 = (int *)((char *)this + 16);
    *v4 = *v3 | 0x8000;
  }
  if ( *((float *)this + 70) == 1.0 )
    v5 = v4;
  else
    *v4 |= 0x10000u;
  if ( *((float *)this + 71) != 0.0 )
    *v5 = *v4 | 0x20000;
  if ( *((float *)this + 72) != 0.0 )
    *v5 |= 0x40000u;
  if ( DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this) || (*v5 & 0x7FC00) != 0 )
    return 1;
  return v1;
}
