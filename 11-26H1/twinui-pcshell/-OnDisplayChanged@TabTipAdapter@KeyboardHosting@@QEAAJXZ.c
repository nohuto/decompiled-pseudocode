/*
 * XREFs of ?OnDisplayChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18047AA5C
 * Callers:
 *     ?OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802168DC (-OnDisplayChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_ @ 0x1800B7AEC (_lambda_00799cc444f9312ab8cc556666836ecb_--__lambda_00799cc444f9312ab8cc556666836ecb_.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800BBBDC (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3e45aac3c8f9aabb332bebcbe850d779___ @ 0x1804770DC (Windows--Internal--ComTaskPool--QueueTask__lambda_3e45aac3c8f9aabb332bebcbe850d779___.c)
 *     ??$get_weak@UTabTipAdapter@KeyboardHosting@@@?$root_implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@impl@winrt@@IEAA?AU?$weak_ref@UTabTipAdapter@KeyboardHosting@@@2@XZ @ 0x180477A74 (--$get_weak@UTabTipAdapter@KeyboardHosting@@@-$root_implements@UTabTipAdapter@KeyboardHosting@@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnDisplayChanged(KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v11; // [rsp+38h] [rbp+18h] BYREF
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    winrt::impl::root_implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::get_weak<KeyboardHosting::TabTipAdapter>(
      (volatile signed __int64 *)this + 2,
      &v11);
    v3 = v11;
    v12 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_3e45aac3c8f9aabb332bebcbe850d779___(
           v3,
           v2,
           *((_DWORD *)this + 144),
           &v12);
    lambda_00799cc444f9312ab8cc556666836ecb_::__lambda_00799cc444f9312ab8cc556666836ecb_(&v12);
    if ( (v4 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBA0,
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
  v6 = *((_QWORD *)this + 16);
  LODWORD(v11) = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 80LL))(v6, &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (_DWORD)v11 == 3 )
    {
      v9 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((RTL_SRWLOCK *)this);
      v4 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBA9,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v9);
        return v4;
      }
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBA5,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
