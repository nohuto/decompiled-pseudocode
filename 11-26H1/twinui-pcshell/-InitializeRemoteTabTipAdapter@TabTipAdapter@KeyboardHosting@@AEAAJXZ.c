/*
 * XREFs of ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800B39D8
 * Callers:
 *     ?Initialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18029ECC8 (-Initialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x180480250 (-TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180040A4C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflecto.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180040AF4 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_P.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180043774 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B3DB8 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_1800B3DB8.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B3DEC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1800B41A0 (--1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?load@?$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z @ 0x1800E680C (-load@-$_Atomic_storage@I$03@std@@QEBAIW4memory_order@2@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802A5568 (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?StartActivity@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802A57C4 (-StartActivity@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z @ 0x1802AF04C (-Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::InitializeRemoteTabTipAdapter(KeyboardHosting::TabTipAdapter *this)
{
  KeyboardHosting::TabTipAdapter *v1; // r14
  volatile __int32 *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  RTL_SRWLOCK *v7; // r15
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, unsigned __int64, _QWORD, _QWORD, wchar_t *, _QWORD, char *); // rdi
  int v10; // eax
  int v11; // r13d
  _QWORD *v12; // r12
  __int64 *v13; // rsi
  const unsigned __int16 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), KeyboardHosting::TabTipAdapter *, __int64 *); // rbx
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // [rsp+40h] [rbp-3B8h] BYREF
  _BYTE *v21; // [rsp+48h] [rbp-3B0h]
  RTL_SRWLOCK *v22; // [rsp+50h] [rbp-3A8h] BYREF
  KeyboardHosting::TabTipAdapter *v23; // [rsp+58h] [rbp-3A0h]
  RTL_SRWLOCK *v24; // [rsp+60h] [rbp-398h]
  KeyboardHosting::TabTipAdapter *v25; // [rsp+68h] [rbp-390h]
  void **v26; // [rsp+70h] [rbp-388h] BYREF
  _BYTE v27[272]; // [rsp+78h] [rbp-380h] BYREF
  volatile signed __int32 *v28; // [rsp+188h] [rbp-270h] BYREF
  _BYTE v29[48]; // [rsp+190h] [rbp-268h] BYREF
  wchar_t v30[256]; // [rsp+1C0h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+0h]

  v1 = this;
  v25 = this;
  v23 = this;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v26);
  v26 = &TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::StartActivity((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v26);
  v21 = (char *)v1 + 391;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)v1 + 391) )
  {
    TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
      (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v26,
      L"AlreadyInitialized",
      0);
    v26 = &TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::`vftable';
LABEL_3:
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v26);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v29);
    wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v28);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>(v27);
    return 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)v1 + 44);
  if ( (unsigned int)std::_Atomic_storage<unsigned int,4>::load((char *)v1 + 176, 5LL) > 0x168 )
  {
    _InterlockedExchange(v3, 0);
    v15 = *((_QWORD *)v1 + 14);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 96LL))(v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1 + 14);
    }
    TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
      (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v26,
      L"RetryCountMaxReached",
      -2147467260);
    v5 = -2147418113;
  }
  else
  {
    v20 = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**((_QWORD **)v1 + 10) + 24LL))(
           *((_QWORD *)v1 + 10),
           &GUID_8b1dca19_456d_4f77_b1e3_0e88328842f9,
           &v20);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v4);
    }
    else
    {
      memset_0(v30, 0, 0x1FEuLL);
      GetDesktopUniqueName(L"System\\RemoteTabTipAdapter", v30, v6);
      v7 = (RTL_SRWLOCK *)((char *)v1 + 440);
      v24 = (RTL_SRWLOCK *)((char *)v1 + 440);
      AcquireSRWLockExclusive((PSRWLOCK)v1 + 55);
      v22 = (RTL_SRWLOCK *)((char *)v1 + 440);
      v8 = *((_QWORD *)v1 + 10);
      v9 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1 + 11);
      try
      {
        v10 = v9(
                v8,
                ((unsigned __int64)v1 + 8) & -(__int64)(v1 != 0LL),
                0LL,
                v20,
                v30,
                *((_QWORD *)v1 + 19),
                (char *)v1 + 88);
      }
      catch ( ... )
      {
        LODWORD(v21) = -2147418113;
        v12 = (_QWORD *)((char *)v23 + 112);
        v13 = (__int64 *)((char *)v23 + 112);
        v11 = -2147418113;
        v7 = v24;
        v1 = v25;
        goto LABEL_18;
      }
      v11 = v10;
      v12 = (_QWORD *)((char *)v1 + 112);
      v13 = (__int64 *)((char *)v1 + 112);
      if ( v10 >= 0 )
      {
        *v21 = 1;
        if ( *v12 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 96LL))(*v12);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1 + 14);
        }
        v14 = L"Success";
        goto LABEL_11;
      }
LABEL_18:
      if ( *v13
        || (v16 = *((_QWORD *)v1 + 12),
            v17 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), KeyboardHosting::TabTipAdapter *, __int64 *))(*(_QWORD *)v16 + 144LL),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13),
            v18 = v17(v16, KeyboardHosting::TabTipAdapter::TimerRetryInitializingRemoteTabTipAdapter, v1, v13),
            v5 = v18,
            v18 >= 0) )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 96LL))(*v12);
        v5 = v18;
        if ( v18 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v12 + 80LL))(*v12, 500000LL, 0LL);
          v5 = v18;
          if ( v18 >= 0 )
          {
            v14 = L"RetryTimerScheduled";
LABEL_11:
            TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
              (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v26,
              v14,
              v11);
            if ( v7 )
              ReleaseSRWLockExclusive(v7);
            v26 = &TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::`vftable';
            goto LABEL_3;
          }
          v19 = 828LL;
        }
        else
        {
          v19 = 827LL;
        }
      }
      else
      {
        v19 = 824LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v18);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v22);
    }
  }
  TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::~InitializeRemoteTabTipAdapter((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v26);
  return v5;
}
