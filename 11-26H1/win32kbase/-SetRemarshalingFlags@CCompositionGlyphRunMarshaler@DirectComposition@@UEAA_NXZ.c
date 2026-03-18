/*
 * XREFs of ?SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238F90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023ACD0 (-SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@UEAA_NXZ.c)
 */

char __fastcall DirectComposition::CCompositionGlyphRunMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionGlyphRunMarshaler *this)
{
  _DWORD *v1; // rbx
  char v2; // di

  v1 = (_DWORD *)((char *)this + 16);
  v2 = 0;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x200u;
  if ( *((_QWORD *)this + 11) )
    *v1 |= 0x400u;
  if ( DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(this) || (*v1 & 0x600) != 0 )
    return 1;
  return v2;
}
