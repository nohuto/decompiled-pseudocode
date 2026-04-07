/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800EAC70
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800A3224 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x1800EA770 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800EA960 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EADF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::GetWeakReference(
        __int64 a1,
        volatile int *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)a2 = 0LL;
  if ( v2 >= 0 )
  {
    v13 = a1 - 8;
    v6 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(
           &v12,
           (const struct std::nothrow_t *)&v13);
    v7 = *v6;
    *v6 = 0LL;
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v8);
    }
    if ( !v7 )
      return 2147942414LL;
    while ( 1 )
    {
      *(_DWORD *)(v7 + 16) = v2;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), (v7 >> 1) | 0x8000000000000000uLL, v2);
      v10 = v2 == v11;
      v2 = v11;
      if ( v10 )
        break;
      if ( v11 < 0 )
      {
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
          (Microsoft::WRL::Details::WeakReferenceImpl *)v7,
          (const struct std::nothrow_t *)1);
        goto LABEL_2;
      }
    }
    *(_QWORD *)a2 = v7;
  }
  else
  {
LABEL_2:
    v5 = 2 * v2;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), a2);
    *(_QWORD *)a2 = v5;
  }
  return 0LL;
}
