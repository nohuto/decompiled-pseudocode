/*
 * XREFs of ?TrackInvalidRegions@CCachedTexture@@IEBA_NXZ @ 0x1802B1FC4
 * Callers:
 *     ?MarkFullInvalid@CCachedTexture@@QEAAXXZ @ 0x1802B1DE4 (-MarkFullInvalid@CCachedTexture@@QEAAXXZ.c)
 *     ?Update@CCachedTexture@@IEAAJXZ @ 0x1802B1FF4 (-Update@CCachedTexture@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedTexture::TrackInvalidRegions(CCachedTexture *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 15) )
    return *((_BYTE *)this + 161) == 0;
  if ( !*((_BYTE *)this + 160) )
    return *((_QWORD *)this + 17) != 0LL;
  return result;
}
