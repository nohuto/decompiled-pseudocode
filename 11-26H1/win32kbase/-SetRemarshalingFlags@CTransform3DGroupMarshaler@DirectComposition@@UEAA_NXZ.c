/*
 * XREFs of ?SetRemarshalingFlags@CTransform3DGroupMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023AD90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171A00 (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CTransform3DGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CTransform3DGroupMarshaler *this)
{
  char v1; // bl

  v1 = 0;
  *((_QWORD *)this + 11) = 0LL;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this) || *((_QWORD *)this + 10) )
    return 1;
  return v1;
}
