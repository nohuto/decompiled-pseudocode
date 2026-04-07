/*
 * XREFs of ?Begin@CAnimationClock@@QEAAJK@Z @ 0x18004F5B4
 * Callers:
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180050180 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18004C0C4 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004C180 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18004C1F0 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C314 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18004C9D8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004CA68 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x18004E8F8 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     McTemplateU0jqi_EtwEventWriteTransfer @ 0x1800A5E54 (McTemplateU0jqi_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::Begin(CAnimationClock *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  char v7; // al
  struct _GUID v9; // [rsp+30h] [rbp-198h] BYREF
  void **v10; // [rsp+40h] [rbp-188h] BYREF
  _BYTE v11[272]; // [rsp+48h] [rbp-180h] BYREF
  volatile signed __int32 *v12; // [rsp+158h] [rbp-70h] BYREF
  _BYTE v13[48]; // [rsp+160h] [rbp-68h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v10,
    (__int64)"BeginAnimationClock");
  v10 = &AnimationClockLoggingTelemetry::BeginAnimationClock::`vftable';
  v9 = *(struct _GUID *)((char *)this + 120);
  AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::BeginAnimationClock *)&v10,
    &v9,
    *((_DWORD *)this + 36));
  v5 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    if ( a2 > 0x2710 )
    {
      v5 = -2147024809;
    }
    else
    {
      v6 = a2;
      if ( *((_DWORD *)this + 35) > a2 )
        v6 = *((_DWORD *)this + 35);
      *((_DWORD *)this + 35) = v6;
      v5 = 0;
      v7 = _InterlockedIncrement((volatile signed __int32 *)this + 36);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0jqi_EtwEventWriteTransfer(v6, 1, (_DWORD)this + 120, a2, v7);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v10, v5);
  v10 = &AnimationClockLoggingTelemetry::BeginAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v10);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v13);
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v12);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
