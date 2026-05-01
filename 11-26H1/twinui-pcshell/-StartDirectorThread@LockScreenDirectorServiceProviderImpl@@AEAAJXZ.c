/*
 * XREFs of ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x180019E78
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x18001ABB4 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 *     ?PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ @ 0x180241300 (-PerformDelayedInitialization@LockScreenDirectorServiceProviderImpl@@UEAAJXZ.c)
 * Callees:
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x180019C68 (-StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18001A16C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001B324 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?reset@?$shared_object@V?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18001B3C8 (-reset@-$shared_object@V-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001B424 (--1-$ActivityData@VLockScreenServiceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18001B494 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180072BA0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B43C0 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x18022F074 (--1LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry.c)
 *     ?reset@?$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U?$default_delete@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@wistd@@@wistd@@QEAAXPEAUINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@@Z @ 0x1802C25C0 (-reset@-$unique_ptr@UINIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@U-$default_delete@U.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1INIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@QEAA@XZ @ 0x1803E6650 (--1INIT_THREAD_DATA@LockScreenDirectorServiceProviderImpl@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::StartDirectorThread(
        LockScreenDirectorServiceProviderImpl *this)
{
  HANDLE *v2; // rax
  HANDLE *v3; // r15
  int v4; // eax
  unsigned int LastError; // ebx
  HANDLE EventW; // rax
  const char *v7; // r9
  HANDLE CurrentProcess; // rbx
  void *v9; // rdi
  HANDLE v10; // rax
  const char *v11; // r9
  const char *v12; // r9
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-E0h]
  HANDLE *v15; // [rsp+40h] [rbp-C0h] BYREF
  LockScreenDirectorServiceProviderImpl *v16; // [rsp+48h] [rbp-B8h] BYREF
  void **v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[272]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[8]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v20[48]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v17);
  v17 = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity *)&v17);
  v2 = (HANDLE *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)0x8007000ELL,
      dwDesiredAccess);
    goto LABEL_19;
  }
  *v2 = 0LL;
  v2[1] = 0LL;
  v15 = v2;
  v16 = this;
  if ( this )
    (*(void (__fastcall **)(LockScreenDirectorServiceProviderImpl *))(*(_QWORD *)this + 8LL))(this);
  v4 = CMarshaledInterface::Marshal(v3, &GUID_c853771a_f336_4cf8_9a27_1570293ab52d, this, 2LL);
  LastError = v4;
  if ( v4 >= 0 )
  {
    EventW = CreateEventW(0LL, 1, 0, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 128,
      EventW);
    if ( *((_QWORD *)this + 16) )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v3 + 1,
        0LL);
      CurrentProcess = GetCurrentProcess();
      v9 = (void *)*((_QWORD *)this + 16);
      v10 = GetCurrentProcess();
      if ( DuplicateHandle(v10, v9, CurrentProcess, v3 + 1, 0, 0, 2u) )
      {
        if ( SHCreateThread(LockScreenDirectorServiceProviderImpl::s_RunDirectorThread, v3, 8u, 0LL) )
        {
          v15 = 0LL;
          *((_BYTE *)this + 160) = 1;
          wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v17);
          LastError = 0;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0xD6,
                        (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
                        v12);
        }
        goto LABEL_17;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xD3,
                    (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
                    v11);
      if ( this )
        (*(void (__fastcall **)(LockScreenDirectorServiceProviderImpl *))(*(_QWORD *)this + 16LL))(this);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xD2,
                    (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
                    v7);
      if ( this )
        (*(void (__fastcall **)(LockScreenDirectorServiceProviderImpl *))(*(_QWORD *)this + 16LL))(this);
    }
    LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA::~INIT_THREAD_DATA((LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA *)v3);
    operator delete(v3, (const struct std::nothrow_t *)0x10);
LABEL_19:
    v17 = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::`vftable';
    wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v17);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v20);
    wil::details::shared_object<wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v19);
    wil::ActivityBase<LockScreenServiceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<LockScreenServiceLogging,_TlgReflectorTag_Param0IsProviderType>(v18);
    return LastError;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCD,
    (unsigned int)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
    (const char *)(unsigned int)v4,
    dwDesiredAccess);
LABEL_17:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  wistd::unique_ptr<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA,wistd::default_delete<LockScreenDirectorServiceProviderImpl::INIT_THREAD_DATA>>::reset(&v15);
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::~LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity *)&v17);
  return LastError;
}
