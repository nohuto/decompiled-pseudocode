/*
 * XREFs of ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180018CB4
 * Callers:
 *     ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180018AE0 (-v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x180018F8C (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x180019154 (-StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServ.c)
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180019420 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800194C4 (-reset@-$shared_object@V-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001951C (--1-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800D1208 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1800D2ED4 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ??1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x18020C2B8 (--1LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LockScreenDirectorServiceProviderImpl::EnsureChildServices(
        HANDLE *this,
        struct ILockScreenDirector **a2)
{
  int LockScreenDirector; // eax
  unsigned int v5; // ebx
  struct ILockScreenDirector *v6; // rcx
  struct ILockScreenDirector *v7; // rcx
  struct ILockScreenDirector *v8; // rcx
  int started; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  HRESULT v13; // eax
  int v14; // eax
  int lpdwindex; // [rsp+20h] [rbp-E0h]
  struct ILockScreenDirector *v16; // [rsp+30h] [rbp-D0h] BYREF
  DWORD dwindex; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE pHandles; // [rsp+40h] [rbp-C0h] BYREF
  void **v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  char v21; // [rsp+5Ch] [rbp-A4h]
  int v22; // [rsp+80h] [rbp-80h] BYREF
  const char *v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  char v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  _BYTE v27[152]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v28; // [rsp+140h] [rbp+40h]
  int v29; // [rsp+150h] [rbp+50h]
  __int64 v30; // [rsp+158h] [rbp+58h]
  int *v31; // [rsp+160h] [rbp+60h]
  __int64 v32; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v33[3]; // [rsp+170h] [rbp+70h] BYREF
  int v34; // [rsp+188h] [rbp+88h]
  int *v35; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v20 = 0;
  v21 = 0;
  v25 = 0;
  v22 = 0;
  v23 = "LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity";
  v24 = 0LL;
  v26 = 0;
  v28 = 0LL;
  memset_0(v27, 0, sizeof(v27));
  v29 = 1;
  v30 = 0LL;
  v31 = &v20;
  v32 = 0LL;
  v33[0] = 0LL;
  v33[1] = &v19;
  v33[2] = 0LL;
  v34 = 0;
  v35 = &v22;
  v19 = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)&v19);
  *a2 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
  LockScreenDirector = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
                         (LockScreenDirectorServiceProviderImpl *)this,
                         &v16);
  v5 = LockScreenDirector;
  if ( LockScreenDirector < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)LockScreenDirector,
      lpdwindex);
    v8 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_9;
  }
  v6 = v16;
  if ( !dword_18089BD00 )
  {
    if ( v16 )
      goto LABEL_4;
    dword_18089BD00 = 1;
    if ( *((_BYTE *)this + 160)
      || (started = LockScreenDirectorServiceProviderImpl::StartDirectorThread((LockScreenDirectorServiceProviderImpl *)this),
          v5 = started,
          started >= 0) )
    {
      dwindex = 0;
      pHandles = this[17];
      v13 = CoWaitForMultipleHandles(0x18u, 0x1388u, 1u, &pHandles, &dwindex);
      v5 = v13;
      if ( v13 >= 0 )
      {
        if ( dwindex )
        {
          v12 = 137LL;
LABEL_23:
          v5 = -2147418113;
          v11 = 2147549183LL;
          goto LABEL_24;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
        v14 = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
                (LockScreenDirectorServiceProviderImpl *)this,
                &v16);
        v5 = v14;
        if ( v14 >= 0 )
        {
          v6 = v16;
          goto LABEL_3;
        }
        v11 = (unsigned int)v14;
        v12 = 138LL;
      }
      else
      {
        v11 = (unsigned int)v13;
        v12 = 136LL;
      }
    }
    else
    {
      v11 = (unsigned int)started;
      v12 = 129LL;
    }
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)v11,
      lpdwindex);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v16);
    LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::~LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)&v19);
    return v5;
  }
LABEL_3:
  if ( !v6 )
  {
    v12 = 142LL;
    goto LABEL_23;
  }
LABEL_4:
  (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v6 + 8LL))(v6);
  *a2 = v16;
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v19);
  v7 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v5 = 0;
LABEL_9:
  v19 = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v19);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v33);
  wil::details::shared_object<wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v32);
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>(&v20);
  return v5;
}
