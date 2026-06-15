/*
 * XREFs of ?GetPreferredOutputFormat@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@@Z @ 0x18014F760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositeSystemEffect::GetPreferredOutputFormat(
        CCompositeSystemEffect *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType **a3)
{
  return CCompositeSystemEffect::GetPreferredFormat((CCompositeSystemEffect *)((char *)this - 56), a2, a3);
}
