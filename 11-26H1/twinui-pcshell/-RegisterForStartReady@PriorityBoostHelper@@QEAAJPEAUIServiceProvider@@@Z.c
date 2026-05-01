/*
 * XREFs of ?RegisterForStartReady@PriorityBoostHelper@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800C3E5C
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801A9FBC (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PriorityBoostHelper::RegisterForStartReady(PriorityBoostHelper *this, struct IServiceProvider *a2)
{
  int v2; // ebx
  const char *v5; // r9
  _QWORD *v6; // r14
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v8; // ebx
  UINT v9; // eax
  const char *v10; // r9
  UINT v11; // eax
  __int64 v12; // rdx
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *((_DWORD *)this + 26);
  if ( GetCurrentThreadId() != v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x18,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v5);
  v6 = (_QWORD *)((char *)this + 56);
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
  v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         (char *)this + 56);
  if ( v8 < 0 )
  {
    v12 = 25LL;
    goto LABEL_8;
  }
  v9 = RegisterWindowMessageW(L"HostExperienceManager.StartReadyMessage");
  *((_DWORD *)this + 29) = v9;
  if ( !v9 )
  {
    v14 = 31LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v14,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v10);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v6 + 24LL))(
         *v6,
         v9,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         (char *)this + 96);
  if ( v8 < 0 )
  {
    v12 = 32LL;
    goto LABEL_8;
  }
  v11 = RegisterWindowMessageW(L"HostExperienceManager.ResetActivationTimeoutPolicyMessage");
  *((_DWORD *)this + 28) = v11;
  if ( !v11 )
  {
    v14 = 37LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v14,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
             v10);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v6 + 24LL))(
         *v6,
         v11,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         (char *)this + 100);
  if ( v8 < 0 )
  {
    v12 = 38LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  return 0LL;
}
