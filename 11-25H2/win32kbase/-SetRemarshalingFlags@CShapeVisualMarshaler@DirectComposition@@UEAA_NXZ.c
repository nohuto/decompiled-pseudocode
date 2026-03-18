/*
 * XREFs of ?SetRemarshalingFlags@CShapeVisualMarshaler@DirectComposition@@UEAA_NXZ @ 0x140130EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ @ 0x140130F60 (-SetRemarshalingFlags@CVisualMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CShapeVisualMarshaler::SetRemarshalingFlags(
        DirectComposition::CShapeVisualMarshaler *this)
{
  bool result; // al
  _DWORD *v3; // rdx

  result = DirectComposition::CVisualMarshaler::SetRemarshalingFlags(this);
  v3 = (_DWORD *)((char *)this + 392);
  if ( *((_QWORD *)this + 46) )
  {
    *v3 |= 1u;
    result = 1;
  }
  if ( *((_DWORD *)this + 96) )
  {
    *v3 |= 2u;
    result = 1;
    *((_DWORD *)this + 97) = 0;
  }
  return result;
}
