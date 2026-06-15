/*
 * XREFs of ?TsSessionIdTerminate@@YAJK@Z @ 0x180044AB8
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800243E0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180017BD0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180021430 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z @ 0x18002C878 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdTerminate(__int64 a1)
{
  DWORD v1; // ebx
  unsigned int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  struct TSSession *v5; // rcx
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v9; // [rsp+38h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  CWindowsPolicyManager::Lock(a1, &v10);
  v2 = 0;
  v9 = 0LL;
  v3 = TsSessionFromSessionId(v1, 0, &v9);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v9;
    *((_DWORD *)v9 + 8) = 1;
    v6 = *((_QWORD *)v5 + 123);
    if ( v6 != *((_QWORD *)v5 + 124) )
      *((_QWORD *)v5 + 124) = v6;
    *((_DWORD *)v5 + 252) = 1065353216;
    *((_DWORD *)v5 + 268) = 0;
    *((_BYTE *)v5 + 1092) = 0;
    TsSessionUpdateAudioProtocol(v5, 0xFFFF);
  }
  else
  {
    v2 = -2147023728;
    if ( v3 != -2147023728 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x63F,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v3);
      v2 = v4;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return v2;
}
