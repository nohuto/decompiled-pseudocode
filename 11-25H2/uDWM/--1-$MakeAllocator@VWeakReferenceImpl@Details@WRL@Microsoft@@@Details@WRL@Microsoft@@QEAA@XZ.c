/*
 * XREFs of ??1?$MakeAllocator@VWeakReferenceImpl@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180099F4C
 * Callers:
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x1800889E4 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@_ea_1800889E4.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x1800EA770 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::WeakReferenceImpl>::~MakeAllocator<Microsoft::WRL::Details::WeakReferenceImpl>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v2, a2);
}
