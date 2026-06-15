/*
 * XREFs of _lambda_3e1d6363a93d165472d6dbf3529801dd_::operator() @ 0x18000676C
 * Callers:
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJ_N@Z @ 0x180046A50 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ?TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z @ 0x180006A60 (-TsSessionRequiresReevaluationOfAudioInStandby@@YA_NPEBVTSSession@@@Z.c)
 *     ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x180007C84 (-TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 lambda_3e1d6363a93d165472d6dbf3529801dd_::operator()()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  int PrimaryConsoleAudioSession; // eax
  unsigned int v2; // edi
  int *v4; // rcx
  int v5; // eax
  int v6[2]; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+28h] [rbp-40h]
  int *v8; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct TSSession *v10; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+78h] [rbp+10h] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  v10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v11 = v0;
  PrimaryConsoleAudioSession = TsSessionGetPrimaryConsoleAudioSession(&v10);
  v2 = PrimaryConsoleAudioSession;
  if ( PrimaryConsoleAudioSession >= 0 )
  {
    if ( TsSessionRequiresReevaluationOfAudioInStandby(v10) )
    {
      *(_QWORD *)v6 = &off_180053150;
      v7 = *v4;
      v8 = v6;
      v5 = QueueGenericWorkItem(v6);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8E2,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v5,
          v6[0]);
    }
    if ( v0 )
      LeaveCriticalSection(v0);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E2,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)PrimaryConsoleAudioSession,
      v6[0]);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
    return v2;
  }
}
