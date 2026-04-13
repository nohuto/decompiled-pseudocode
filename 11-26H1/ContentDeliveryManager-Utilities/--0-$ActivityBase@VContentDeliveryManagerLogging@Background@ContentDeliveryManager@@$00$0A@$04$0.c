/*
 * XREFs of ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18007BA90
 * Callers:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::_lambda_0f325790d88d3e0e1d8faff7704602cc_ @ 0x18007B954 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--_lambda_0f325790d88d3e0e1d8faff7704602cc_.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18004BB48 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180059750 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18007BCE8 (--0-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsPr.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // r14
  char *v5; // rsi
  __int64 v8; // rax
  bool v9; // zf

  v4 = a2 + 8;
  *(_QWORD *)a1 = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v5 = (char *)a1 + 8;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>(
    (char *)a1 + 8,
    a2 + 8);
  *((_QWORD *)a1 + 35) = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a2 + 280) = 0LL;
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 288),
    a1,
    0LL,
    a3);
  v8 = *((_QWORD *)a1 + 35);
  if ( v8 )
    v5 = (char *)(v8 + 8);
  *((_QWORD *)a1 + 34) = v5;
  *((_QWORD *)a1 + 40) = v5 + 40;
  v9 = *(_DWORD *)(a2 + 312) == 0;
  *(_QWORD *)(a2 + 272) = v4;
  if ( !v9 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 288));
  return a1;
}
