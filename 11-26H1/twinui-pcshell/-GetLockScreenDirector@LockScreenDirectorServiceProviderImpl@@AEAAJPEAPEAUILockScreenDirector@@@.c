/*
 * XREFs of ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x18001AEBC
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x18001ABB4 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 * Callees:
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x18001AB18 (-StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSe.c)
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001B324 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18001B3C8 (-reset@-$shared_object@V-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001B424 (--1-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001B494 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
        RTL_SRWLOCK *this,
        struct ILockScreenDirector **a2)
{
  PVOID Ptr; // rcx
  int v5; // ebx
  int v7[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+28h] [rbp-D8h] BYREF
  char v9; // [rsp+2Ch] [rbp-D4h]
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  const char *v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  char v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+70h] [rbp-90h]
  _BYTE v15[152]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v16; // [rsp+110h] [rbp+10h]
  int v17; // [rsp+120h] [rbp+20h]
  __int64 v18; // [rsp+128h] [rbp+28h]
  int *v19; // [rsp+130h] [rbp+30h]
  __int64 v20; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v21[3]; // [rsp+140h] [rbp+40h] BYREF
  int v22; // [rsp+158h] [rbp+58h]
  int *v23; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v8 = 0;
  v9 = 0;
  v13 = 0;
  v10 = 0;
  v11 = "LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity";
  v12 = 0LL;
  v14 = 0;
  v16 = 0LL;
  memset_0(v15, 0, sizeof(v15));
  v17 = 1;
  v18 = 0LL;
  v19 = &v8;
  v20 = 0LL;
  v21[0] = 0LL;
  v21[1] = v7;
  v21[2] = 0LL;
  v22 = 0;
  v23 = &v10;
  *(_QWORD *)v7 = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity *)v7);
  *a2 = 0LL;
  AcquireSRWLockShared(this + 18);
  if ( this[19].Ptr
    && ((*a2 = 0LL, (Ptr = this[19].Ptr) == 0LL)
      ? (v5 = 0)
      : (v5 = (*(__int64 (__fastcall **)(PVOID, GUID *, struct ILockScreenDirector **))(*(_QWORD *)Ptr + 24LL))(
                Ptr,
                &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb,
                a2)),
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v5,
      v7[0]);
    if ( this != (RTL_SRWLOCK *)-144LL )
      ReleaseSRWLockShared(this + 18);
  }
  else
  {
    wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v7);
    if ( this != (RTL_SRWLOCK *)-144LL )
      ReleaseSRWLockShared(this + 18);
    v5 = 0;
  }
  *(_QWORD *)v7 = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v21);
  wil::details::shared_object<wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v20);
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>(&v8);
  return (unsigned int)v5;
}
