/*
 * XREFs of ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001AF44
 * Callers:
 *     ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18001A388 (--1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18001A9A0 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802195CC (--1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Hide@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180221798 (--1Hide@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180223694 (--1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18022C568 (--1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180238D2C (--1Cloak@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1Show@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802CD704 (--1Show@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802CDA1C (--1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1802CDBA8 (--1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18065B628 (--1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$shared_object@V?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18001AF7C (-reset@-$shared_object@V-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsP.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 288));
  wil::details::shared_object<wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(a1 + 280);
  return wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 8);
}
