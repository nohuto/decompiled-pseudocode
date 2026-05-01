/*
 * XREFs of _lambda_a469c2389bb8dc71f832d95fbc03d5e0_::operator() @ 0x18046AB78
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___::Run @ 0x1804701D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a469c2389bb8dc71f832d95fbc03d5e0___--Run.c)
 * Callees:
 *     ?Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180013178 (-Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800144F8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800B32E8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800BD788 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C34B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x1800F0FF8 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180133E4C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180191ADC (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801DE468 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1802C5D9C (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180474084 (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1804740D8 (-ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_a469c2389bb8dc71f832d95fbc03d5e0_::operator()(_QWORD *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated *v2; // r12
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rsi
  std::_Ref_count_base *v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // r14d
  int v10; // eax
  const struct _tlgProvider_t *v11; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct IUnknown ***v15; // r14
  struct IUnknown ***v16; // r13
  __int64 v17; // rdi
  int v18; // r15d
  BOOL v19; // eax
  int v20; // ecx
  const wchar_t *v22; // [rsp+40h] [rbp-69h] BYREF
  __int128 v23; // [rsp+48h] [rbp-61h]
  _QWORD *v24; // [rsp+58h] [rbp-51h]
  char v25; // [rsp+60h] [rbp-49h]
  _BYTE v26[144]; // [rsp+70h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  int v28; // [rsp+110h] [rbp+67h] BYREF
  __int64 v29; // [rsp+118h] [rbp+6Fh] BYREF
  RTL_SRWLOCK *v30; // [rsp+120h] [rbp+77h] BYREF
  PCWSTR StringRawBuffer; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (__int64)(a1 + 5),
    (__int64)v26);
  v23 = 0LL;
  v3 = (std::_Ref_count_base *)a1[4];
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    v4 = a1[3];
    *(_QWORD *)&v23 = v4;
    v5 = (std::_Ref_count_base *)a1[4];
    *((_QWORD *)&v23 + 1) = v5;
  }
  else
  {
    v5 = (std::_Ref_count_base *)*((_QWORD *)&v23 + 1);
    v4 = v23;
  }
  if ( !v4 )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v2,
      0);
LABEL_27:
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    v9 = 0;
    goto LABEL_30;
  }
  v24 = a1;
  v25 = 1;
  v29 = 0LL;
  v6 = Microsoft::WRL::WeakRef::As<IInspectable>(a1 + 1, &v29);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1526,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  if ( !v29 )
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v2,
      0);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 344LL))(*a1, 0LL);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1521,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
    goto LABEL_27;
  }
  wil::AcquireSRWLockExclusive(&v30, (RTL_SRWLOCK *)(a1[2] + 424LL));
  v8 = TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded(
         (TouchKeyboardExperienceManager *)a1[2],
         (struct KBViewInfo *)v4);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = TouchKeyboardExperienceTraceLogging::Provider();
    if ( *(_DWORD *)v11 > 5u )
    {
      v28 = *(_DWORD *)(v4 + 104);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v4 + 112), 0LL);
      v22 = (const wchar_t *)"viewInfo created";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_180808249,
        v12,
        v13,
        &v22,
        &StringRawBuffer,
        (__int64)&v28);
    }
    v14 = a1[2];
    v15 = *(struct IUnknown ****)(v14 + 432);
    v16 = *(struct IUnknown ****)(v14 + 440);
    v17 = ((char *)v16 - (char *)v15) >> 4;
    v18 = 0;
    if ( v15 != v16 )
    {
      do
      {
        v19 = SHIsSameObject(**v15, *(struct IUnknown **)v4);
        v20 = v18 + 1;
        if ( !v19 )
          v20 = v18;
        v18 = v20;
        v15 += 2;
      }
      while ( v15 != v16 );
      if ( v20 > 1 )
        TouchKeyboardExperienceTelemetryLogger::ViewInfoDuplicated();
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v30);
    TouchKeyboardExperienceTelemetryLogger::OnViewCreated::Stop(v2, v17);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1532,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 344LL))(*a1, 0LL);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1521,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
LABEL_30:
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v26);
  return v9;
}
