/*
 * XREFs of ?SetRemarshalingFlags@CSkewTransformMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022FF70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401314D0 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSkewTransformMarshaler::SetRemarshalingFlags(
        DirectComposition::CSkewTransformMarshaler *this)
{
  _DWORD *v1; // rdx
  int *v2; // rbx
  char v3; // al
  char v4; // cl

  v1 = (_DWORD *)((char *)this + 16);
  if ( *((float *)this + 18) != 0.0 )
    *v1 |= 0x80u;
  if ( *((float *)this + 19) != 0.0 )
    *v1 |= 0x100u;
  v2 = (int *)((char *)this + 16);
  if ( *((float *)this + 20) == 0.0 )
    v2 = (int *)((char *)this + 16);
  else
    *v1 |= 0x200u;
  if ( *((float *)this + 21) != 0.0 )
    *v2 = *v1 | 0x400;
  v3 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v4 = 0;
  if ( v3 || (*v2 & 0x780) != 0 )
    return 1;
  return v4;
}
