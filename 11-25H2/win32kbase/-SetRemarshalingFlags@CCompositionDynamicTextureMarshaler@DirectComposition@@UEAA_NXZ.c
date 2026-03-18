/*
 * XREFs of ?SetRemarshalingFlags@CCompositionDynamicTextureMarshaler@DirectComposition@@UEAA_NXZ @ 0x14022F430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CCompositionDynamicTextureMarshaler::SetRemarshalingFlags(
        DirectComposition::CCompositionDynamicTextureMarshaler *this)
{
  _DWORD *v1; // rdx

  v1 = (_DWORD *)((char *)this + 16);
  *((_QWORD *)this + 7) = 0LL;
  if ( *((_QWORD *)this + 9) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x40u;
  return (*v1 & 0x60) != 0;
}
