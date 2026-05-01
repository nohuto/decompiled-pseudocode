/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b_____lambda_eef5741a3b0e50908ea80cafebdfea4b___ @ 0x18039E340
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_eef5741a3b0e50908ea80cafebdfea4b___ @ 0x18039F084 (Windows--Internal--ComTaskPool--QueueTask__lambda_eef5741a3b0e50908ea80cafebdfea4b___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1801E3654 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_1801E3654.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b___::CTaskWrapper__lambda_eef5741a3b0e50908ea80cafebdfea4b_____lambda_eef5741a3b0e50908ea80cafebdfea4b___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((_QWORD *)a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 56));
  *(_QWORD *)(a1 + 56) = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  *(_QWORD *)a1 = &off_18070E978;
  return a1;
}
