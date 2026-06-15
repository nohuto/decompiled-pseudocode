/*
 * XREFs of ?CastingStateChanged@CApplication@@QEAAXH@Z @ 0x180038110
 * Callers:
 *     ?ClearCastingState@CProcess@@QEAAXXZ @ 0x180021128 (-ClearCastingState@CProcess@@QEAAXXZ.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18003C1E4 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180038E68 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

void __fastcall CApplication::CastingStateChanged(CApplication *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  bool v5; // sf
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  const char *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = a2 + *((_DWORD *)this + 168) < 0;
  *((_DWORD *)this + 168) += a2;
  v6 = *((_DWORD *)this + 168);
  v12 = v2;
  if ( v5 )
  {
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x8D5,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)0x8000FFFFLL,
      (int)"Casting stream count dropped below zero.",
      v10);
    v6 = 0;
    *((_DWORD *)this + 168) = 0;
  }
  v7 = *((_DWORD *)this + 52);
  v8 = v7 | 8;
  v9 = v7 & 0xFFFFFFF7;
  if ( !v6 )
    v8 = v9;
  *((_DWORD *)this + 52) = v8;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
}
