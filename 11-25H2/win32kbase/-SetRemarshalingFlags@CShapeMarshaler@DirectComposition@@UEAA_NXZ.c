/*
 * XREFs of ?SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1401503DC
 * Callers:
 *     ?SetRemarshalingFlags@CContainerShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1401503B0 (-SetRemarshalingFlags@CContainerShapeMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x140235430 (-SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CShapeMarshaler::SetRemarshalingFlags(DirectComposition::CShapeMarshaler *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 7) )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    return 1;
  }
  return result;
}
