/*
 * XREFs of ?SetRemarshalingFlags@CSpriteShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x140235430
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ @ 0x1401503DC (-SetRemarshalingFlags@CShapeMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CSpriteShapeMarshaler::SetRemarshalingFlags(
        DirectComposition::CSpriteShapeMarshaler *this)
{
  int v2; // eax
  int v3; // ecx

  DirectComposition::CShapeMarshaler::SetRemarshalingFlags(this);
  v2 = *((_DWORD *)this + 4);
  if ( *((_QWORD *)this + 9) )
    v2 |= 0x40u;
  v3 = v2;
  if ( *((_QWORD *)this + 8) )
  {
    v3 = v2 | 0x80;
    v2 |= 0x80u;
  }
  if ( *((_QWORD *)this + 10) )
  {
    v3 |= 0x100u;
    v2 = v3;
  }
  if ( *((_DWORD *)this + 24) )
  {
    *((_DWORD *)this + 25) = 0;
    v2 = v3 | 0x400;
  }
  *((_DWORD *)this + 4) = v2 | 0x7A00;
  return 1;
}
