/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EADF0
 * Callers:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18008A04C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x1800EA770 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800EAC70 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphic.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180099EEC (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
