/*
 * XREFs of _lambda_a425cb1f9a85c2275f94348d493772b0_::operator() @ 0x18045E814
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a425cb1f9a85c2275f94348d493772b0___::Run @ 0x1804644F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a425cb1f9a85c2275f94348d493772b0___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1801E31F0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     _anonymous_namespace_::StringifyApplicationState @ 0x18020DDD4 (_anonymous_namespace_--StringifyApplicationState.c)
 *     ?ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180255750 (-ActivateInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_a425cb1f9a85c2275f94348d493772b0_::operator()(_QWORD *a1)
{
  int v2; // eax
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+48h] [rbp+10h] BYREF
  const wchar_t *v10; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v8);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9DF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  if ( v8 && !*(_BYTE *)(a1[1] + 1013LL) )
  {
    wil::AcquireSRWLockExclusive(&v9, (RTL_SRWLOCK *)(a1[1] + 576LL));
    v3 = *(_DWORD *)(a1[1] + 564LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
    if ( *(_DWORD *)TouchKeyboardExperienceTraceLogging::Provider() > 5u )
    {
      v9 = (RTL_SRWLOCK *)anonymous_namespace_::StringifyApplicationState(v3);
      v10 = (const wchar_t *)"TouchKeyboardExperienceManager::UpdateConnectedStandbyState::AsyncTask";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v4,
        byte_1807D1BF1,
        v4,
        v5,
        &v10,
        (const WCHAR **)&v9);
    }
    if ( (unsigned int)(v3 - 1) > 2 )
      TouchKeyboardExperienceManager::ActivateInputApp((TouchKeyboardExperienceManager *)(a1[1] + 200LL));
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return 0LL;
}
