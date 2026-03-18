/*
 * XREFs of ?SetRemarshalingFlags@CShadowEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023A650
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ @ 0x1402392A0 (-SetRemarshalingFlags@CFilterEffectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CShadowEffectMarshaler::SetRemarshalingFlags(
        DirectComposition::CShadowEffectMarshaler *this)
{
  int *v1; // rax
  int *v3; // rcx
  int *v4; // rdi
  char v5; // bl

  v1 = (int *)((char *)this + 16);
  if ( *((float *)this + 64) != 3.0 )
    *v1 |= 0x400u;
  if ( *((float *)this + 65) != 0.0 )
    *v1 |= 0x800u;
  v3 = (int *)((char *)this + 16);
  if ( *((float *)this + 66) == 0.0 )
    v3 = v1;
  else
    *v1 |= 0x1000u;
  if ( *((float *)this + 67) == 0.0 )
  {
    v4 = v3;
  }
  else
  {
    v4 = (int *)((char *)this + 16);
    *v3 = *v1 | 0x2000;
  }
  if ( *((float *)this + 68) == 1.0 )
    v4 = v3;
  else
    *v3 |= 0x4000u;
  v5 = 0;
  if ( *((_DWORD *)this + 69) )
    *v4 = *v3 | 0x8000;
  if ( DirectComposition::CFilterEffectMarshaler::SetRemarshalingFlags(this) || (*v4 & 0xFC00) != 0 )
    return 1;
  return v5;
}
