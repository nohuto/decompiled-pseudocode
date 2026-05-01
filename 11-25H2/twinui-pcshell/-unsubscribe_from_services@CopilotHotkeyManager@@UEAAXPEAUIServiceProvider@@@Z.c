/*
 * XREFs of ?unsubscribe_from_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180612070
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1802BEBF4 (-reset@-$com_ptr_t@UIImmersiveAppCrusher@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ @ 0x18060F350 (-SendPressAndHoldStopSignalIfNeeded@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAA_NXZ @ 0x1806108F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55120546@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ @ 0x1806109B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID56032693@@@details@wil@@QEAA_NXZ @ 0x180610AA8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID56032693@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CopilotHotkeyManager::unsubscribe_from_services(
        CopilotHotkeyManager *this,
        struct IServiceProvider *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 26) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF7,
        (int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        (const char *)(unsigned int)v3);
    *((_DWORD *)this + 26) = 0;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl)
    && *((_DWORD *)this + 27) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 104LL))(*((_QWORD *)this + 18));
    *((_DWORD *)this + 27) = 0;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_55120546>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_55120546>::GetImpl'::`2'::impl) )
    CopilotHotkeyManager::SendPressAndHoldStopSignalIfNeeded((CopilotHotkeyManager *)((char *)this - 16));
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID56032693>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID56032693>::GetImpl'::`2'::impl) )
  {
    if ( *((_QWORD *)this + 56) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 56LL))(*((_QWORD *)this + 54));
      *((_QWORD *)this + 56) = 0LL;
    }
    wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 54);
    if ( *((_QWORD *)this + 57) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 55) + 56LL))(*((_QWORD *)this + 55));
      *((_QWORD *)this + 57) = 0LL;
    }
    wil::com_ptr_t<IImmersiveAppCrusher,wil::err_exception_policy>::reset((__int64 *)this + 55);
  }
}
