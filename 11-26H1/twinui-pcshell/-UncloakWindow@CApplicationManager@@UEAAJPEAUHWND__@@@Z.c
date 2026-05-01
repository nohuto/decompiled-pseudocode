/*
 * XREFs of ?UncloakWindow@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1802E6850
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18001A16C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x1802C2A70 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UncloakWindow(CApplicationManager *this, HWND a2)
{
  CallerIdentity *v3; // rcx
  void **v4; // r8
  int CallingProcessHandle; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  DWORD ProcessId; // eax
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  DWORD dwProcessId; // [rsp+50h] [rbp+20h] BYREF
  HANDLE Process; // [rsp+58h] [rbp+28h] BYREF

  Process = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &Process,
    0LL);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v3, &Process, v4);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v7 = (unsigned int)CallingProcessHandle;
    v8 = 2534LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)v7);
    goto LABEL_19;
  }
  v12 = 0LL;
  if ( !(unsigned int)GetProcessUIContextInformation(Process, &v12) )
  {
    v6 = -2147024890;
    v8 = 2537LL;
LABEL_17:
    v7 = v6;
    goto LABEL_18;
  }
  if ( (_DWORD)v12 != 2 )
  {
    v6 = -2089418751;
    v8 = 2538LL;
    goto LABEL_17;
  }
  dwProcessId = 0;
  if ( !GetWindowThreadProcessId(a2, &dwProcessId) )
  {
    v6 = -2147024890;
    v8 = 2542LL;
    goto LABEL_17;
  }
  ProcessId = GetProcessId(Process);
  if ( dwProcessId != ProcessId )
  {
    v8 = 2543LL;
LABEL_16:
    v6 = -2147024809;
    goto LABEL_17;
  }
  if ( !(unsigned int)IsShellManagedWindow(a2) || GetWindow(a2, 4u) )
  {
    v8 = 2546LL;
    goto LABEL_16;
  }
  v10 = (*(__int64 (__fastcall **)(PVOID, HWND, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                       + 24LL))(
          CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
          a2,
          0LL);
  v6 = v10;
  if ( v10 < 0 )
  {
    v7 = (unsigned int)v10;
    v8 = 2549LL;
    goto LABEL_18;
  }
LABEL_19:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&Process);
  return v6;
}
