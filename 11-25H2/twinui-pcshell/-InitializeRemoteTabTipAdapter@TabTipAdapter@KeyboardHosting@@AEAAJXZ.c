/*
 * XREFs of ?InitializeRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800D4FB0
 * Callers:
 *     ?Initialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802A6EB4 (-Initialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z @ 0x180471A40 (-TimerRetryInitializingRemoteTabTipAdapter@TabTipAdapter@KeyboardHosting@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$shared_object@V?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180032830 (-reset@-$shared_object@V-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgR_ea_180032830.c)
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180032AD0 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflecto.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800D4F0C (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1?$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801EE4D4 (--1-$ActivityData@VTouchKeyboardExperienceTraceLogging@@U_TlgReflectorTag_Param0IsP_ea_1801EE4D4.c)
 *     ??1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18020E428 (--1InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802AD710 (-StartActivity@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x1802AEFCC (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z @ 0x1802B72E0 (-Stop@InitializeRemoteTabTipAdapter@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::InitializeRemoteTabTipAdapter(KeyboardHosting::TabTipAdapter *this)
{
  KeyboardHosting::TabTipAdapter *v1; // r14
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // r8d
  RTL_SRWLOCK *v6; // r15
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, unsigned __int64, _QWORD, _QWORD, wchar_t *, _QWORD, char *); // rdi
  int v9; // eax
  int v10; // r12d
  __int64 *v11; // rsi
  const unsigned __int16 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), KeyboardHosting::TabTipAdapter *, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // [rsp+40h] [rbp-3B8h] BYREF
  _BYTE *v19; // [rsp+48h] [rbp-3B0h]
  RTL_SRWLOCK *v20; // [rsp+50h] [rbp-3A8h] BYREF
  KeyboardHosting::TabTipAdapter *v21; // [rsp+58h] [rbp-3A0h]
  RTL_SRWLOCK *v22; // [rsp+60h] [rbp-398h]
  KeyboardHosting::TabTipAdapter *v23; // [rsp+68h] [rbp-390h]
  void **v24; // [rsp+70h] [rbp-388h] BYREF
  _BYTE v25[272]; // [rsp+78h] [rbp-380h] BYREF
  volatile signed __int32 *v26; // [rsp+188h] [rbp-270h] BYREF
  _BYTE v27[48]; // [rsp+190h] [rbp-268h] BYREF
  wchar_t v28[256]; // [rsp+1C0h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3F8h] [rbp+0h]

  v1 = this;
  v23 = this;
  v21 = this;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)&v24,
    (__int64)"InitializeRemoteTabTipAdapter");
  v24 = &TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::StartActivity((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v24);
  v19 = (char *)v1 + 391;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)v1 + 391) )
  {
    TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
      (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v24,
      L"AlreadyInitialized",
      0);
LABEL_3:
    v24 = &TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::`vftable';
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy((volatile signed __int32 **)&v24);
    wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v27);
    wil::details::shared_object<wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v26);
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<TouchKeyboardExperienceTraceLogging,_TlgReflectorTag_Param0IsProviderType>(v25);
    return 0LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)v1 + 44);
  if ( *((_DWORD *)v1 + 44) > 0x168u )
  {
    _InterlockedExchange((volatile __int32 *)v1 + 44, 0);
    v13 = *((_QWORD *)v1 + 14);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1 + 14);
    }
    TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
      (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v24,
      L"RetryCountMaxReached",
      -2147467260);
    v4 = -2147418113;
  }
  else
  {
    v18 = 0;
    v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**((_QWORD **)v1 + 10) + 24LL))(
           *((_QWORD *)v1 + 10),
           &GUID_8b1dca19_456d_4f77_b1e3_0e88328842f9,
           &v18);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FE,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v3);
    }
    else
    {
      memset_0(v28, 0, 0x1FEuLL);
      GetDesktopUniqueName(L"System\\RemoteTabTipAdapter", v28, v5);
      v6 = (RTL_SRWLOCK *)((char *)v1 + 440);
      v22 = (RTL_SRWLOCK *)((char *)v1 + 440);
      AcquireSRWLockExclusive((PSRWLOCK)v1 + 55);
      v20 = (RTL_SRWLOCK *)((char *)v1 + 440);
      v7 = *((_QWORD *)v1 + 10);
      v8 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v7 + 32LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1 + 11);
      try
      {
        v9 = v8(
               v7,
               ((unsigned __int64)v1 + 8) & -(__int64)(v1 != 0LL),
               0LL,
               v18,
               v28,
               *((_QWORD *)v1 + 19),
               (char *)v1 + 88);
      }
      catch ( ... )
      {
        LODWORD(v19) = -2147418113;
        v11 = (__int64 *)((char *)v21 + 112);
        v10 = -2147418113;
        v6 = v22;
        v1 = v23;
        goto LABEL_17;
      }
      v10 = v9;
      v11 = (__int64 *)((char *)v1 + 112);
      if ( v9 >= 0 )
      {
        *v19 = 1;
        if ( *v11 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*v11 + 96LL))(*v11);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v1 + 14);
        }
        v12 = L"Success";
        goto LABEL_11;
      }
LABEL_17:
      if ( *v11
        || (v14 = *((_QWORD *)v1 + 12),
            v15 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(KeyboardHosting::TabTipAdapter *), KeyboardHosting::TabTipAdapter *, __int64 *))(*(_QWORD *)v14 + 144LL),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11),
            v16 = v15(v14, KeyboardHosting::TabTipAdapter::TimerRetryInitializingRemoteTabTipAdapter, v1, v11),
            v4 = v16,
            v16 >= 0) )
      {
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v11 + 96LL))(*v11);
        v4 = v16;
        if ( v16 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)*v11 + 80LL))(*v11, 500000LL, 0LL);
          v4 = v16;
          if ( v16 >= 0 )
          {
            v12 = L"RetryTimerScheduled";
LABEL_11:
            TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::Stop(
              (TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v24,
              v12,
              v10);
            if ( v6 )
              ReleaseSRWLockExclusive(v6);
            goto LABEL_3;
          }
          v17 = 812LL;
        }
        else
        {
          v17 = 811LL;
        }
      }
      else
      {
        v17 = 808LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v16);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v20);
    }
  }
  TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter::~InitializeRemoteTabTipAdapter((TouchKeyboardExperienceTelemetryLogger::InitializeRemoteTabTipAdapter *)&v24);
  return v4;
}
