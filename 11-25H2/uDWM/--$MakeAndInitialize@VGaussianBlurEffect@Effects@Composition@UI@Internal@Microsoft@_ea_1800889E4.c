/*
 * XREFs of ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x1800889E4
 * Callers:
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@@012@@Z @ 0x18003F4C4 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18007DF3C (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@WRL@Mi.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VWeakReferenceImpl@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180099F4C (--1-$MakeAllocator@VWeakReferenceImpl@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800A3224 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x1800EA838 (--0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect,>(
        __int64 *a1,
        const struct std::nothrow_t *a2)
{
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v3; // rax
  __int64 v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // r10
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v3 = (Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *)operator new[](0x58uLL, a2);
  v10 = v3;
  if ( !v3 )
    return 2147942414LL;
  v5 = Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GaussianBlurEffect(v3);
  v10 = 0LL;
  v7 = v5;
  v11 = v5;
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 48);
    while ( v8 >= 0 )
    {
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 48), v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v8 + 16), v6);
  }
LABEL_10:
  *a1 = v7;
  Microsoft::WRL::ComPtr<Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect>::InternalRelease(&v11);
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::WeakReferenceImpl>::~MakeAllocator<Microsoft::WRL::Details::WeakReferenceImpl>(&v10);
  return 0LL;
}
