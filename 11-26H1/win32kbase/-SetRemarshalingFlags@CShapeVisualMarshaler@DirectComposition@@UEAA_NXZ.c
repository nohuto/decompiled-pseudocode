/*
 * XREFs of ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023E250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140171570 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CShapeVisualMarshaler *this)
{
  char v2; // cl
  char result; // al

  v2 = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  result = 0;
  if ( *((_QWORD *)this + 42) )
  {
    *((_DWORD *)this + 92) |= 1u;
    v2 = 1;
  }
  *((_QWORD *)this + 45) = 0LL;
  if ( v2 || *((_QWORD *)this + 44) )
    return 1;
  return result;
}
