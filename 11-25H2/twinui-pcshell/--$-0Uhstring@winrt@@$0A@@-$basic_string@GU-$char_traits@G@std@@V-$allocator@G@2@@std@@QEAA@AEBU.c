/*
 * XREFs of ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1800642C8
 * Callers:
 *     _lambda_8ded4d93739c225b374c706a19b0781a_::operator()_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData__&_ @ 0x1800639B0 (_lambda_8ded4d93739c225b374c706a19b0781a_--operator()_std--pair_unsigned___int64_const__winrt--W.c)
 *     ?GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800656A0 (-GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x18020B22C (--$get_runtime_activation_factory_impl@$00@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUgu.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180239D80 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x1802509D0 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180633B38 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x1806347FC (-DeactivateRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@AEBI@Z @ 0x180635620 (-OnProcessDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180635918 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180647E80 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 *     ?SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUguid@6@W4SwitchSource@3456@@Z @ 0x1806493B0 (-SwitchToRemoteDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::operator() @ 0x18064AD54 (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--operator().c)
 *     ?FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@Shell@Internal@Windows@3@30@Z @ 0x18064BD60 (-FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180029F78 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  const WCHAR *v4; // rbp
  unsigned __int64 v5; // r14
  __int64 v7; // rbx
  size_t size_of; // rax
  _WORD *v9; // rax
  _WORD *v10; // rdi

  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v3 = *a2;
  if ( *a2 )
  {
    v4 = *(const WCHAR **)(v3 + 16);
    v5 = *(unsigned int *)(v3 + 4);
  }
  else
  {
    v4 = &LocaleName;
    v5 = 0LL;
  }
  a1[3] = 7LL;
  if ( v5 > 7 )
  {
    v7 = v5 | 7;
    if ( (v5 | 7) < 0xA )
      v7 = 10LL;
    size_of = std::_Get_size_of_n<2>(v7 + 1);
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    a1[3] = v7;
    *a1 = v9;
    a1[2] = v5;
    v10 = v9;
    memcpy_0(v9, v4, 2 * v5);
    v10[v5] = 0;
  }
  else
  {
    a1[2] = v5;
    memcpy_0(a1, v4, 2 * v5);
    *((_WORD *)a1 + v5) = 0;
  }
  return a1;
}
