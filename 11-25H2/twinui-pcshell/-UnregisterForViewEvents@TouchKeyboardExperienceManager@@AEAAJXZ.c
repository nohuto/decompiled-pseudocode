/*
 * XREFs of ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1801D3C94
 * Callers:
 *     _lambda_764a1297a52a98304490b9424ce1b78f_::operator() @ 0x18045E3B4 (_lambda_764a1297a52a98304490b9424ce1b78f_--operator().c)
 *     ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1804677A4 (-TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180467900 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180038344 (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1801D3DB0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::UnregisterForViewEvents(TouchKeyboardExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, const char **); // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const char *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    v12 = "UnregisterForViewEvents";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (_DWORD)v2,
      (unsigned int)&unk_1807D1B49,
      v3,
      v4,
      (__int64)&v12);
  }
  if ( *((_QWORD *)this + 34) )
  {
    v12 = 0LL;
    v5 = *((_QWORD *)this + 42);
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, const char **))(*(_QWORD *)v5 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
    v7 = v6(v5, &SID_ViewEventDispatcher, &GUID_f5ef6433_2dc3_4aeb_b387_7c6cba1c012e, &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10AC,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
      return v8;
    }
    v10 = (*(__int64 (__fastcall **)(const char *, _QWORD))(*(_QWORD *)v12 + 56LL))(v12, *((_QWORD *)this + 34));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10AE,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    *((_QWORD *)this + 34) = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  }
  return 0LL;
}
