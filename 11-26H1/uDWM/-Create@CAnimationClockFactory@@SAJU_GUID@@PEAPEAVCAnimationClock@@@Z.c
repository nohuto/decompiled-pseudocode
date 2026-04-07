/*
 * XREFs of ?Create@CAnimationClockFactory@@SAJU_GUID@@PEAPEAVCAnimationClock@@@Z @ 0x18003F854
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F510 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180024438 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180024D44 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180024E00 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180024E74 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800251CC (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180025274 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x18003FB2C (-StartActivity@CreateAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ??0CAnimationClock@@QEAA@XZ @ 0x18003FC6C (--0CAnimationClock@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimationClockFactory::Create(struct _GUID *Buf1, struct CAnimationClock **a2)
{
  unsigned int v4; // edi
  CAnimationClock *v5; // rax
  struct CAnimationClock *v6; // rax
  struct _GUID v8; // [rsp+30h] [rbp-188h] BYREF
  void **v9; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v10[272]; // [rsp+48h] [rbp-170h] BYREF
  volatile signed __int32 *v11; // [rsp+158h] [rbp-60h] BYREF
  _BYTE v12[48]; // [rsp+160h] [rbp-58h] BYREF

  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)&v9,
    (__int64)"CreateAnimationClock");
  v9 = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  v8 = *Buf1;
  AnimationClockLoggingTelemetry::CreateAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::CreateAnimationClock *)&v9,
    &v8);
  v4 = 0;
  *a2 = 0LL;
  if ( !memcmp_0(Buf1, &GUID_NULL, 0x10uLL) )
  {
    v4 = -2147024809;
  }
  else
  {
    v5 = (CAnimationClock *)operator new(0x98uLL);
    *(_QWORD *)&v8.Data1 = v5;
    if ( v5 )
    {
      v6 = CAnimationClock::CAnimationClock(v5);
      *a2 = v6;
      if ( v6 )
        goto LABEL_7;
    }
    else
    {
      *a2 = 0LL;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x2AAu, 0LL);
  }
  if ( *a2 )
  {
    CBaseObject::Release(*a2);
    *a2 = 0LL;
  }
LABEL_7:
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v9, v4);
  v9 = &AnimationClockLoggingTelemetry::CreateAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v9);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v12);
  wil::details::shared_object<wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v11);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v10);
  return v4;
}
