/*
 * XREFs of ??1?$MakeAllocator@VWeakReferenceImpl@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008D60C
 * Callers:
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x180030C0C (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x1800E62A0 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::WeakReferenceImpl>::~MakeAllocator<Microsoft::WRL::Details::WeakReferenceImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 1uLL);
}
