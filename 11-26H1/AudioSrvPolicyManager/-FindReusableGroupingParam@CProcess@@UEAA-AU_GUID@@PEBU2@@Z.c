/*
 * XREFs of ?FindReusableGroupingParam@CProcess@@UEAA?AU_GUID@@PEBU2@@Z @ 0x1800384C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV?$function@$$A6AXPEAUIAudioSessionInfo@@PEA_N@Z@std@@@Z @ 0x180023080 (--$ForEachSession@UIAudioSessionInfo@@@CProcess@@IEAAJ$$QEAV-$function@$$A6AXPEAUIAudioSessionIn.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _GUID *__fastcall CProcess::FindReusableGroupingParam(
        CProcess *this,
        struct _GUID *__return_ptr retstr,
        const struct _GUID *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rdx
  GUID v12; // xmm0
  BOOL v14; // [rsp+20h] [rbp-29h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+28h] [rbp-21h] BYREF
  GUID v16; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v17[7]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v15 = v3;
  v9 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)&a3->Data1;
  if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)&a3->Data1 )
    v9 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)a3->Data4;
  v16 = GUID_00000000_0000_0000_0000_000000000000;
  v14 = v9 != 0;
  v17[0] = off_180053410;
  v17[1] = &v14;
  v17[2] = &v16;
  v18 = v17;
  v10 = CProcess::ForEachSession<IAudioSessionInfo>((__int64)this, (__int64)v17, v7, v8);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x113C,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v10,
      v14);
  if ( v18 )
  {
    v11 = v17;
    LOBYTE(v11) = v18 != v17;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v18 + 32LL))(v18, v11);
  }
  if ( (unsigned int)v14 > 1 )
    v12 = GUID_00000000_0000_0000_0000_000000000000;
  else
    v12 = v16;
  *retstr = v12;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
  return retstr;
}
