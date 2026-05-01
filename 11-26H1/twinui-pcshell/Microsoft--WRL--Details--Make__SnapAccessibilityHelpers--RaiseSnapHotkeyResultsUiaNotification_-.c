/*
 * XREFs of Microsoft::WRL::Details::Make__SnapAccessibilityHelpers::RaiseSnapHotkeyResultsUiaNotification_::_2_::DummyProvider_ @ 0x18053B470
 * Callers:
 *     _anonymous_namespace_::RaiseUiaNotificationFromString @ 0x18053BAA0 (_anonymous_namespace_--RaiseUiaNotificationFromString.c)
 *     ?RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1805BF4C8 (-RaiseSnapHotkeyResultsUiaNotification@SnapAccessibilityHelpers@@YAXAEAV-$NativeString@V-$CoTask.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x1802214C8 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawElementProviderSimple@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18053B50C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawElementProviderSimple@@VFtmBase@2.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make__SnapAccessibilityHelpers::RaiseSnapHotkeyResultsUiaNotification_::_2_::DummyProvider_(
        _QWORD *a1)
{
  _OWORD *v2; // rax
  _QWORD *v3; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v5 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,Microsoft::WRL::FtmBase>(v2);
    *v3 = off_180753428;
    v3[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
    v5 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v5);
  return a1;
}
