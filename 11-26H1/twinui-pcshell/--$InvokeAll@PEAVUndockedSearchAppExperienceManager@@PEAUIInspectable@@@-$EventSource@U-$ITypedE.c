/*
 * XREFs of ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUIInspectable@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUIInspectable@@@Z @ 0x1803A6F74
 * Callers:
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18005DE08 (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804947E0 (-CurrentVirtualDesktopChanged@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopCreated@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180495210 (-VirtualDesktopCreated@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?VirtualDesktopDestroyed@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180495340 (-VirtualDesktopDestroyed@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopMoved@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@II@Z @ 0x1804954B0 (-VirtualDesktopMoved@VirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@II@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005C1B8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$InvokeDelegates@V_lambda_2d9dd9401935337ec59e5f3b42564c5b_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_2d9dd9401935337ec59e5f3b42564c5b_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1802A8B14 (--$InvokeDelegates@V_lambda_2d9dd9401935337ec59e5f3b42564c5b_@@U-$ITypedEventHandler@PEAVCortana.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,IInspectable *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // edi
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+38h] BYREF

  v9 = a3;
  v8 = a2;
  v4 = 0;
  v7 = 0LL;
  wil::AcquireSRWLockExclusive(&v10, (RTL_SRWLOCK *)(a1 + 8));
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v7, (volatile signed __int32 **)a1);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  if ( v7 )
  {
    v6[0] = &v8;
    v6[1] = &v9;
    v4 = Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_2d9dd9401935337ec59e5f3b42564c5b_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
           v6,
           (__int64)v7,
           a1);
  }
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  return v4;
}
