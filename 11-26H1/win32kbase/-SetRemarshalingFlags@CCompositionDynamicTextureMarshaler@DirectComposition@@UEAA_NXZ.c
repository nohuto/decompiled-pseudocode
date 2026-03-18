/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAA_NXZ @ 0x140238F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCompositionDynamicTextureMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDynamicTextureMarshaler *this)
{
  char v1; // dl
  int v2; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 10) )
    *((_DWORD *)this + 4) |= 0x40u;
  v2 = *((_DWORD *)this + 4);
  *((_QWORD *)this + 9) = 0LL;
  if ( (v2 & 0x40) != 0 || *((_QWORD *)this + 8) )
    return 1;
  return v1;
}
