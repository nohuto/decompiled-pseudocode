/*
 * XREFs of ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18004EA88
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x18004BE30 (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004C0C4 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004C180 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18004C1F0 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C314 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18004C9D8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004CA68 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18004E9BC (-StartActivity@TriggerClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ??$?9V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x18004EC5C (--$-9V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x180058E30 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?Trigger@CAnimationTriggerProxy@@QEAAJ_K@Z @ 0x180096DFC (-Trigger@CAnimationTriggerProxy@@QEAAJ_K@Z.c)
 *     ??1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x180099B00 (--1TriggerClock@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099E1C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18009A5E8 (-CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationClock::_TriggerAnimation(CAnimationClock *this)
{
  int AnimationTriggerProxyFromSharedHandle; // edi
  __int64 v3; // rdx
  CBaseObject *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  HANDLE hObject[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct _GUID v9; // [rsp+30h] [rbp-D0h] BYREF
  void **v10; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v11[272]; // [rsp+48h] [rbp-B8h] BYREF
  volatile signed __int32 *v12; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v13[48]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v10,
    (__int64)"TriggerClock");
  v10 = &AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  v9 = *(struct _GUID *)((char *)this + 120);
  AnimationClockLoggingTelemetry::TriggerClock::StartActivity((AnimationClockLoggingTelemetry::TriggerClock *)&v10, &v9);
  AnimationTriggerProxyFromSharedHandle = 0;
  if ( (unsigned __int8)wil::operator!=<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((char *)this + 112) )
  {
    v6 = NtDCompositionCommitSynchronizationObject(*((_QWORD *)this + 14));
    if ( v6 < 0 )
    {
      v7 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xDA,
             (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
             (const char *)(unsigned int)v6,
             (int)hObject[0]);
      AnimationClockLoggingTelemetry::TriggerClock::~TriggerClock((AnimationClockLoggingTelemetry::TriggerClock *)&v10);
      return v7;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=((char *)this + 112);
  }
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    hObject[0] = 0LL;
    AnimationTriggerProxyFromSharedHandle = (*(__int64 (__fastcall **)(_QWORD, __int64, HANDLE *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 32LL)
                                                                                                 + 224LL))(
                                              *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                        + 32LL),
                                              v3,
                                              hObject);
    if ( AnimationTriggerProxyFromSharedHandle >= 0 )
    {
      *(_QWORD *)&v9.Data1 = 0LL;
      AnimationTriggerProxyFromSharedHandle = CCompositor::CreateAnimationTriggerProxyFromSharedHandle(
                                                *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                                                hObject[0],
                                                (struct CAnimationTriggerProxy **)&v9);
      v5 = *(CBaseObject **)&v9.Data1;
      if ( AnimationTriggerProxyFromSharedHandle >= 0 )
        AnimationTriggerProxyFromSharedHandle = CAnimationTriggerProxy::Trigger(
                                                  *(CAnimationTriggerProxy **)&v9.Data1,
                                                  *((_QWORD *)this + 11));
      CloseHandle(hObject[0]);
      if ( v5 )
        CBaseObject::Release(v5);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    &v10,
    AnimationTriggerProxyFromSharedHandle);
  v10 = &AnimationClockLoggingTelemetry::TriggerClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v10);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v13);
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v12);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  return (unsigned int)AnimationTriggerProxyFromSharedHandle;
}
