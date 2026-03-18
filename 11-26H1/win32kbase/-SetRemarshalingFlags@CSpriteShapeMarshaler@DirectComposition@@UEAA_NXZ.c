/*
 * XREFs of ?SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023E820
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1401950C4 (-SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  int v2; // eax

  DirectComposition::CShapeMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 9) )
    v2 |= 0x80u;
  if ( *((_QWORD *)this + 8) )
    v2 |= 0x100u;
  if ( *((_QWORD *)this + 10) )
    v2 |= 0x200u;
  if ( *((_DWORD *)this + 24) )
  {
    *((_DWORD *)this + 25) = 0;
    v2 |= 0x800u;
  }
  *((_DWORD *)this + 4) = v2 | 0xF400;
  return 1;
}
