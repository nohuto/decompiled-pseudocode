/*
 * XREFs of ?OnShown@SearchAppExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x1803A34F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005C1B8 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180072790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801DD1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ??$InvokeDelegates@V_lambda_2d9dd9401935337ec59e5f3b42564c5b_@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@?$InvokeTraits@$01@WRL@Microsoft@@SAJV_lambda_2d9dd9401935337ec59e5f3b42564c5b_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@12@@Z @ 0x1802A8B14 (--$InvokeDelegates@V_lambda_2d9dd9401935337ec59e5f3b42564c5b_@@U-$ITypedEventHandler@PEAVCortana.c)
 *     Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect_&_ @ 0x180370388 (Microsoft--WRL--Details--Make__SearchAppExperienceManagerNotification--OnShown_--_2_--CCortanaSh.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SearchAppExperienceManagerNotification::OnShown(__int64 a1, const __m128i *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  RTL_SRWLOCK *v6; // rax
  volatile signed __int32 **v7; // rsi
  volatile signed __int32 *v8; // rdi
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  volatile signed __int32 *v13; // [rsp+70h] [rbp+30h] BYREF
  RTL_SRWLOCK *v14; // [rsp+78h] [rbp+38h] BYREF

  if ( *(_QWORD *)(a1 + 40) )
  {
    v3 = Microsoft::WRL::Details::Make__SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs_Windows::Foundation::Rect___(
           &v12,
           a2);
    v4 = *v3;
    *v3 = 0LL;
    v5 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(v5);
    }
    v6 = *(RTL_SRWLOCK **)(a1 + 40);
    v7 = (volatile signed __int32 **)&v6[6];
    v10 = v4;
    v9 = v6;
    v13 = 0LL;
    wil::AcquireSRWLockExclusive(&v14, v6 + 7);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v13, v7);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
    v8 = v13;
    if ( v13 )
    {
      v11[0] = &v9;
      v11[1] = &v10;
      Microsoft::WRL::InvokeTraits<2>::InvokeDelegates<_lambda_2d9dd9401935337ec59e5f3b42564c5b_,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        v11,
        (__int64)v13,
        (__int64)v7);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
