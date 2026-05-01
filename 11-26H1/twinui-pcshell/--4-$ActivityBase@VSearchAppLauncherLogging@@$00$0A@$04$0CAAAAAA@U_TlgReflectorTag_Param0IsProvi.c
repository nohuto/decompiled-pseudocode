/*
 * XREFs of ??4?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1802040C8
 * Callers:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180203FF8 (--0-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180068EA8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??4?$shared_object@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1802041AC (--4-$shared_object@V-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Par_ea_1802041AC.c)
 *     ??$create@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x1802309FC (--$create@V-$ActivityData@VSearchAppLauncherLogging@@U_TlgReflectorTag_Param0IsProv_ea_1802309FC.c)
 */

_QWORD *__fastcall wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::operator=(
        _QWORD *a1,
        _QWORD *a2)
{
  wil::details::ThreadFailureCallbackHolder *v4; // rcx

  v4 = (wil::details::ThreadFailureCallbackHolder *)(a1 + 36);
  if ( *((_DWORD *)v4 + 6) )
    wil::details::ThreadFailureCallbackHolder::StopWatching(v4);
  if ( a2[35] )
  {
    a1[34] = a2[34];
    wil::details::shared_object<wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a1 + 35,
      a2 + 35);
  }
  else if ( (unsigned __int8)wil::details::shared_object<wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>>::create<wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>>(
                               a1 + 35,
                               a2 + 1) )
  {
    a1[34] = (a1[35] + 8LL) & -(__int64)(a1[35] != 0LL);
    wil::details::shared_object<wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SearchAppLauncherLogging,_TlgReflectorTag_Param0IsProviderType>>::operator=(
      a2 + 35,
      a1 + 35);
    a2[34] = a1[34];
    a2[40] = a1[34] + 40LL;
  }
  a1[40] = a1[34] + 40LL;
  return a1;
}
