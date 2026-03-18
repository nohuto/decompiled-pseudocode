/*
 * XREFs of ?SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1401950C4
 * Callers:
 *     ?SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023E820 (-SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CContainerShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023E9F0 (-SetRemarshalingFlags@CContainerShapeMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CShapeMarshaler::SetRemarshalingFlags(DirectComposition::CShapeMarshaler *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  return result;
}
