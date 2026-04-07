/*
 * XREFs of ?End@CAnimationClock@@QEAAJXZ @ 0x180051170
 * Callers:
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x180050BAC (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004C180 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18004C1F0 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18004C314 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18004C9D8 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18004CA68 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAU_GUID@@AEAJ@EndAnimationClock@AnimationClockLoggingTelemetry@@SA?AV01@AEAU_GUID@@AEAJ@Z @ 0x1800512E0 (--$Start@AEAU_GUID@@AEAJ@EndAnimationClock@AnimationClockLoggingTelemetry@@SA-AV01@AEAU_GUID@@AE.c)
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x180051344 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     McTemplateU0ji_EtwEventWriteTransfer @ 0x1800A5DE0 (McTemplateU0ji_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationClock::End(CAnimationClock *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  volatile signed __int32 *v3; // rsi
  __int64 v4; // rcx
  unsigned int v5; // ebp
  int v6; // edi
  char *v8; // [rsp+20h] [rbp-188h]
  void **v9; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v10[272]; // [rsp+38h] [rbp-170h] BYREF
  volatile signed __int32 *v11; // [rsp+148h] [rbp-60h] BYREF
  _BYTE v12[48]; // [rsp+150h] [rbp-58h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v8 = (char *)this + 24;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v3 = (volatile signed __int32 *)((char *)this + 144);
  AnimationClockLoggingTelemetry::EndAnimationClock::Start<_GUID &,long &>((AnimationClockLoggingTelemetry::EndAnimationClock *)&v9);
  v5 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    v6 = _InterlockedDecrement(v3);
    if ( v6 < 0 )
    {
      _InterlockedIncrement(v3);
    }
    else
    {
      v5 = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0ji_EtwEventWriteTransfer(v4, &UdwmAnimationClock_End, (char *)this + 120, v6, v8);
      if ( (*((_DWORD *)this + 34) != -1 || *((_DWORD *)this + 35)) && !v6 )
        v5 = CAnimationClock::_SetTime(this, 0LL, 0LL);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v9, v5);
  v9 = &AnimationClockLoggingTelemetry::EndAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v9);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v12);
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v11);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
