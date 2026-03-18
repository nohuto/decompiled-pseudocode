/*
 * XREFs of ??_GCCompositionSpotLightMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x140151080
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 */

DirectComposition::CCompositionSpotLightMarshaler *__fastcall DirectComposition::CCompositionSpotLightMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CCompositionLightMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this);
  return this;
}
