/*
 * XREFs of ?Start@CKstBase@@AEAAJPEBG@Z @ 0x180010924
 * Callers:
 *     DwmpStartWinlogonMouseThread @ 0x18000E120 (DwmpStartWinlogonMouseThread.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005144 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18000570C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180006C64 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 */

__int64 __fastcall CKstBase::Start(HANDLE *this, const unsigned __int16 *a2)
{
  char *v3; // r14
  HANDLE *v4; // rdi
  HANDLE v5; // rbp
  DWORD LastError; // ebx
  HANDLE *v7; // rbx
  wil::details *v9; // rcx
  HANDLE Event; // rdi
  HANDLE *v11; // rbx
  DWORD v12; // eax
  const char *v13; // r9
  signed int LastErrorFailHr; // eax
  unsigned int v15; // edi
  char v16; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD lpThreadId; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+6Ch] [rbp+14h]

  v19 = HIDWORD(a2);
  lpThreadId = 0;
  v3 = (char *)CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CKstBase::RunKernelThreadStatic, this, 4u, &lpThreadId);
  v4 = this + 2;
  if ( this + 2 == (HANDLE *)&v16 )
  {
    v7 = this + 2;
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
  }
  else
  {
    v5 = *v4;
    if ( *v4 && v5 != (HANDLE)-1LL )
    {
      LastError = GetLastError();
      CloseHandle(v5);
      SetLastError(LastError);
    }
    *v4 = v3;
    v7 = this + 2;
  }
  if ( !*v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  SetThreadDescription(*v4, L"WinLogon Kernel Sensor Thread");
  SetThreadPriority(*v7, 16);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v11 = this + 5;
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this + 5,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v9);
    v11 = this + 5;
    v15 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        (const char *)(unsigned int)LastErrorFailHr);
      return v15;
    }
  }
  ResumeThread(this[2]);
  v12 = WaitForSingleObjectEx(*v11, 0xFFFFFFFF, 0);
  if ( v12 != 258 )
  {
    if ( v12 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2793LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v13);
  }
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    v11,
    0LL);
  return 0LL;
}
