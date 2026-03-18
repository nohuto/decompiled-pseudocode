/*
 * XREFs of ?SetRemarshalingFlags@CScaleTransform3DMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1401314D0 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CScaleTransform3DMarshaler::SetRemarshalingFlags(
        DirectComposition::CScaleTransform3DMarshaler *this)
{
  int *v1; // rdx
  int *v3; // rcx
  int *v4; // rbx
  char v5; // al
  char v6; // cl

  v1 = (int *)((char *)this + 16);
  if ( *((float *)this + 18) != 1.0 )
    *v1 |= 0x80u;
  if ( *((float *)this + 19) != 1.0 )
    *v1 |= 0x100u;
  v3 = (int *)((char *)this + 16);
  if ( *((float *)this + 20) == 1.0 )
    v3 = v1;
  else
    *v1 |= 0x200u;
  if ( *((float *)this + 21) == 0.0 )
  {
    v4 = v3;
  }
  else
  {
    v4 = (int *)((char *)this + 16);
    *v3 = *v1 | 0x400;
  }
  if ( *((float *)this + 22) == 0.0 )
    v4 = v3;
  else
    *v3 |= 0x800u;
  if ( *((float *)this + 23) != 0.0 )
    *v4 = *v3 | 0x1000;
  v5 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  v6 = 0;
  if ( v5 || (*v4 & 0x1F80) != 0 )
    return 1;
  return v6;
}
