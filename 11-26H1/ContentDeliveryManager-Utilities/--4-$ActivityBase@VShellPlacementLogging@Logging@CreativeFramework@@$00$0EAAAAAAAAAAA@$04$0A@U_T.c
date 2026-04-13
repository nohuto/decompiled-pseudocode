/*
 * XREFs of ??4?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800AE2F8
 * Callers:
 *     ??0?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800ADD54 (--0-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_T.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800219B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180059750 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18007BCE8 (--0-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsPr.c)
 *     ??4?$shared_object@V?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1800AE40C (--4-$shared_object@V-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflec.c)
 *     ?reset@?$shared_object@V?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800B2070 (-reset@-$shared_object@V-$ActivityData@VShellPlacementLogging@Logging@CreativeFrame_ea_1800B2070.c)
 */

_QWORD *__fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::operator=(
        _QWORD *a1,
        _QWORD *a2)
{
  wil::details::ThreadFailureCallbackHolder *v4; // rcx
  _DWORD *v5; // rax
  _DWORD *v6; // r14

  v4 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 36);
  if ( *((_DWORD *)v4 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v4);
  if ( a2[35] )
  {
    a1[34] = a2[34];
    wil::details::shared_object<wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a1 + 35,
      a2 + 35);
  }
  else
  {
    v5 = operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      *v5 = 1;
      wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(
        (__int64)(v5 + 2),
        (__int64)(a2 + 1));
      wil::details::shared_object<wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 35);
      a1[35] = v6;
      a1[34] = (unsigned __int64)(v6 + 2) & -(__int64)(v6 != 0LL);
      wil::details::shared_object<wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
        a2 + 35,
        a1 + 35);
      a2[34] = a1[34];
      a2[40] = a1[34] + 40LL;
    }
  }
  a1[40] = a1[34] + 40LL;
  return a1;
}
