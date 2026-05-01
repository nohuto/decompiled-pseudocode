/*
 * XREFs of ?RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ @ 0x18039FBC0
 * Callers:
 *     ?RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800D7FEC (-RuntimeClassInitialize@CInsightsExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CInsightsExperienceManager::RegisterForMonitorNotification(CInsightsExperienceManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, char *); // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = *((_QWORD *)this + 34);
  v3 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  v4 = v3(
         v2,
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*v11)[3](v11, (GUID *)(-(__int64)(this != 0LL) & ((unsigned __int64)this + 24)), (char *)this + 312);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v11;
      v8 = **v11;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
      v4 = v8(v7, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, (char *)this + 304);
      v5 = v4;
      if ( v4 >= 0 )
      {
        v5 = 0;
        goto LABEL_9;
      }
      v6 = 428LL;
    }
    else
    {
      v6 = 427LL;
    }
  }
  else
  {
    v6 = 425LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
  return v5;
}
