/*
 * XREFs of ??$InvokeDelegates@V_lambda_db50ea73e21f603477d761a745892f78_@@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_db50ea73e21f603477d761a745892f78_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x18036A3C0
 * Callers:
 *     ??$InvokeAll@PEAVCControlCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCControlCenterExperienceManager@@$$T@Z @ 0x18036A2A0 (--$InvokeAll@PEAVCControlCenterExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCo.c)
 *     ??$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVControlCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAVViewPositionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18036A334 (--$InvokeAll@PEAVCControlCenterExperienceManager@@PEAUIViewPositionChangedEventArgs@Experience@S.c)
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x18007234C (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?RemoveDelegate@?$EventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x1802FF164 (-RemoveDelegate@-$EventSource@U-$ITypedEventHandler@PEAUIVirtualDesktopCollection@Multitasking@C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_db50ea73e21f603477d761a745892f78_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ControlCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>(
        __int64 a1,
        __int64 a2,
        RTL_SRWLOCK *a3)
{
  __int64 v5; // rbx
  struct IUnknown **v6; // rdi
  _QWORD *v7; // r14
  _QWORD *v8; // r15
  int v9; // eax
  int v10; // esi
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v12, a2);
  v5 = v12;
  v6 = *(struct IUnknown ***)(v12 + 16);
  if ( v6 != *(struct IUnknown ***)(v12 + 24) )
  {
    v7 = *(_QWORD **)(a1 + 8);
    v8 = *(_QWORD **)a1;
    do
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))(*v6)->lpVtbl[1].QueryInterface)(
             *v6,
             (*v8 + 32LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*v8 >> 64),
             *v7);
      v10 = v9;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 0LL, 0LL);
        if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 )
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::RemoveDelegate(
            a3,
            *v6);
      }
      ++v6;
    }
    while ( v6 != *(struct IUnknown ***)(v5 + 24) );
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v5);
  return 0LL;
}
