/*
 * XREFs of ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18024E3B4
 * Callers:
 *     wistd::__function::__func__lambda_2aaa3fcbc81a3c042074e76849eaaaa8__void___cdecl(void)_::operator() @ 0x180478B60 (wistd--__function--__func__lambda_2aaa3fcbc81a3c042074e76849eaaaa8__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800B7AEC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BBBDC (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c5a7970b3483e4de1ddc73b2db688a0a___ @ 0x1804771FC (Windows--Internal--ComTaskPool--QueueTask__lambda_c5a7970b3483e4de1ddc73b2db688a0a___.c)
 *     ??$get_weak@UTabTipAdapter@KeyboardHosting@@@?$root_implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@impl@winrt@@IEAA?AU?$weak_ref@UTabTipAdapter@KeyboardHosting@@@2@XZ @ 0x180477A74 (--$get_weak@UTabTipAdapter@KeyboardHosting@@@-$root_implements@UTabTipAdapter@KeyboardHosting@@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDpiChanged(RTL_SRWLOCK *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  PVOID Ptr; // rcx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v11; // [rsp+38h] [rbp+18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    winrt::impl::root_implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::get_weak<KeyboardHosting::TabTipAdapter>(
      &this[2],
      &v11);
    v3 = v11;
    v12 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_c5a7970b3483e4de1ddc73b2db688a0a___(
           v3,
           v2,
           LODWORD(this[72].Ptr),
           &v12);
    lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v12);
    if ( (v4 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)v4);
      if ( v11 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
      return v4;
    }
    if ( v11 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v11);
    return 0LL;
  }
  Ptr = this[16].Ptr;
  LODWORD(v11) = 0;
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)Ptr + 72LL))(Ptr, &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (_DWORD)v11 == 3 )
    {
      v9 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
      v4 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB84,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v9);
        return v4;
      }
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB80,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
