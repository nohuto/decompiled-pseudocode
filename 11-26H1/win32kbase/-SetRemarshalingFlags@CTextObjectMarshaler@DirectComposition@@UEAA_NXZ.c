/*
 * XREFs of ?SetRemarshalingFlags@CTextObjectMarshaler@DirectComposition@@UEAA_NXZ @ 0x14023ACD0
 * Callers:
 *     ?SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238F90 (-SetRemarshalingFlags@CCompositionGlyphRunMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@UEAA_NXZ @ 0x140239000 (-SetRemarshalingFlags@CCompositionTextLineMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CTextObjectMarshaler::SetRemarshalingFlags(
        DirectComposition::CTextObjectMarshaler *this)
{
  int *v1; // rdx
  __int64 v3; // rax
  int v4; // ecx

  v1 = (int *)((char *)this + 16);
  if ( *((_QWORD *)this + 7) )
    *v1 |= 0x40u;
  v3 = *((_QWORD *)this + 8);
  v4 = *v1;
  if ( v3 )
  {
    v4 |= 0x80u;
    *v1 = v4;
  }
  if ( *((_QWORD *)this + 9) )
  {
    *v1 |= 0x100u;
    v4 = *v1;
  }
  return (v4 & 0x1C0) != 0;
}
