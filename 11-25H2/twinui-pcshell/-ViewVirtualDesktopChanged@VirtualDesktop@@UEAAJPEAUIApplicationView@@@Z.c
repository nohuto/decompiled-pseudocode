/*
 * XREFs of ?ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z @ 0x180052E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180052510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800532A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??$InvokeDelegates@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_57dacf7fd65ae5979a4de013971663d7_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1801E74E0 (--$InvokeDelegates@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@U-$ITypedEventHandler@PEAUIVirtua.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::ViewVirtualDesktopChanged(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rsi
  volatile signed __int32 *v3; // rbx
  RTL_SRWLOCK *v4; // rdi
  volatile int *v5; // rdx
  volatile signed __int32 *v6; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = this + 8;
  v9 = 3;
  v10 = this - 3;
  v8[0] = &v10;
  v8[1] = &v9;
  v3 = 0LL;
  v4 = this + 9;
  AcquireSRWLockExclusive(this + 9);
  if ( v2->Ptr )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v2->Ptr + 12), v5);
    v3 = v6;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v3 )
  {
    Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_57dacf7fd65ae5979a4de013971663d7_,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>>(
      v8,
      v3,
      v2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
  }
  return 0LL;
}
