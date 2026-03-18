/*
 * XREFs of ?FinalRelease@CCachedVisualImage@@MEAAXXZ @ 0x18009B410
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x18009B5B8 (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

void __fastcall CCachedVisualImage::FinalRelease(CCachedVisualImage *this)
{
  std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear((char *)this + 168);
  (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 72LL))(this);
}
