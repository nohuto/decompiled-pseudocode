/*
 * XREFs of ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x1800EA770
 * Callers:
 *     ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800EAC70 (-GetWeakReference@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphic.c)
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VWeakReferenceImpl@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180099F4C (--1-$MakeAllocator@VWeakReferenceImpl@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800EA824 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Detai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EADF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(
        _QWORD *a1,
        const struct std::nothrow_t *a2)
{
  void *v4; // rax
  const struct std::nothrow_t *v5; // rdx
  _DWORD *v6; // rbx
  __int64 v7; // rsi
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new[](0x20uLL, a2);
  v9 = v4;
  v6 = v4;
  if ( v4 )
  {
    v7 = *(_QWORD *)a2;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>(v4);
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v6[4] = 0x3FFFFFFF;
    *(_QWORD *)v6 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    *((_QWORD *)v6 + 3) = v7;
    v6[3] = 2;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(*a1);
    v9 = 0LL;
    *a1 = v6;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::WeakReferenceImpl>::~MakeAllocator<Microsoft::WRL::Details::WeakReferenceImpl>(
    &v9,
    v5);
  return a1;
}
