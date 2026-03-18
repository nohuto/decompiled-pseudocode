/*
 * XREFs of ?SetRemarshalingFlags@CContainerShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1401950C4 (-SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CContainerShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CContainerShapeMarshaler *this)
{
  char v1; // bl

  v1 = 0;
  *((_QWORD *)this + 10) = 0LL;
  if ( DirectComposition::CShapeMarshaler::SetRemarshalingFlags(this) || *((_QWORD *)this + 9) )
    return 1;
  return v1;
}
