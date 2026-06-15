/*
 * XREFs of ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEBG_KKH@Z @ 0x180019B84
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x180019B50 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014A28 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z @ 0x180019DF0 (-UpdateHostedAppState@CApplication@@QEAAJHPEAH@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180019EE0 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnHostedAppStateChanged(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  CApplicationManager *v8; // r15
  const struct _tlgProvider_t *v9; // rax
  const struct _tlgProvider_t *v10; // r10
  const unsigned __int16 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  BOOL v14; // edi
  struct CApplication *v15; // r14
  int Application; // ebx
  int v18; // [rsp+40h] [rbp-81h] BYREF
  int v19; // [rsp+44h] [rbp-7Dh] BYREF
  CApplication *v20; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v21; // [rsp+50h] [rbp-71h]
  char *v22; // [rsp+58h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-51h] BYREF
  void *v25; // [rsp+80h] [rbp-41h]
  int v26; // [rsp+88h] [rbp-39h]
  int v27; // [rsp+8Ch] [rbp-35h]
  const unsigned __int16 *v28; // [rsp+90h] [rbp-31h]
  int v29; // [rsp+98h] [rbp-29h]
  int v30; // [rsp+9Ch] [rbp-25h]
  char **v31; // [rsp+A0h] [rbp-21h]
  __int64 v32; // [rsp+A8h] [rbp-19h]
  int *v33; // [rsp+B0h] [rbp-11h]
  __int64 v34; // [rsp+B8h] [rbp-9h]
  int *v35; // [rsp+C0h] [rbp-1h]
  __int64 v36; // [rsp+C8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v21 = a4;
  v8 = g_ApplicationManager;
  v9 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  v10 = v9;
  if ( *(_DWORD *)v9 > 4u
    && (*((_DWORD *)v9 + 4) & 0x8000LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x8000LL) == *((_QWORD *)v9 + 3) )
  {
    v19 = a5;
    v18 = a4;
    v22 = (char *)a3;
    v35 = &v19;
    v36 = 4LL;
    v33 = &v18;
    v34 = 4LL;
    v31 = &v22;
    v32 = 8LL;
    if ( a2 )
    {
      v11 = a2;
      v12 = -1LL;
      do
        ++v12;
      while ( a2[v12] );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v11 = (const unsigned __int16 *)byte_180056CEC;
      v13 = 2;
    }
    v28 = v11;
    v29 = v13;
    v30 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 4;
    EventDescriptor.Keyword = 0x8000LL;
    UserData.Ptr = *((_QWORD *)v10 + 1);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v25 = &unk_18005AA12;
    v26 = 80;
    v27 = 1;
    LODWORD(v20) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*((_QWORD *)v10 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  v14 = 0;
  v15 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 32));
  v22 = (char *)v8 + 32;
  v20 = 0LL;
  v18 = 0;
  v19 = 0;
  Application = CApplicationManager::GetApplication(v8, a2, a3, v21, &v20, 1, &v18);
  if ( Application >= 0 )
  {
    Application = CApplication::UpdateHostedAppState(v20, a5, &v19);
    if ( Application >= 0 )
    {
      v14 = v19 || v18;
      v15 = v20;
    }
  }
  if ( v8 != (CApplicationManager *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v8 + 32));
  if ( Application >= 0 )
  {
    if ( v14 )
      CApplicationManager::OnApplicationInteractivityChanged(v8, v15);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA40,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
      (const char *)(unsigned int)Application);
    return (unsigned int)Application;
  }
}
