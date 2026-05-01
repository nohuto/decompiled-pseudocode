/*
 * XREFs of ??$InvokeAll@PEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVVirtualDesktop@@W4VirtualDesktopProperty@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180073154
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180495C20 (-CurrentVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ @ 0x180495FD0 (-UpdateDesktopIndex@VirtualDesktop@@AEAAJXZ.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180496150 (-VirtualDesktopNameChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?VirtualDesktopWallpaperChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x1804961A0 (-VirtualDesktopWallpaperChanged@VirtualDesktop@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_57dacf7fd65ae5979a4de013971663d7_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x180370010 (--$InvokeDelegates@V_lambda_57dacf7fd65ae5979a4de013971663d7_@@U-$ITypedEventHandler@PEAUIVirtua.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<VirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  unsigned int v4; // edi
  volatile signed __int32 *v5; // rbx
  RTL_SRWLOCK *v6; // rsi
  volatile int *v7; // rdx
  volatile signed __int32 *v8; // r8
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v10[0] = &v11;
  v10[1] = &v12;
  v4 = 0;
  v5 = 0LL;
  v6 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)a1->Ptr + 12), v7);
    v5 = v8;
  }
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v5 )
  {
    v4 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_57dacf7fd65ae5979a4de013971663d7_,Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty>,Microsoft::WRL::InvokeModeOptions<2>>(
           v10,
           v5,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  }
  return v4;
}
