/*
 * XREFs of ?DialogSessionStateChanged@CApplication@@QEAAXH@Z @ 0x180038368
 * Callers:
 *     ?ClearDialogSessionState@CProcess@@QEAAXXZ @ 0x18002119C (-ClearDialogSessionState@CProcess@@QEAAXXZ.c)
 *     ?OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003C384 (-OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

void __fastcall CApplication::DialogSessionStateChanged(CApplication *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  bool v5; // sf
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = a2 + *((_DWORD *)this + 170) < 0;
  *((_DWORD *)this + 170) += a2;
  v6 = *((_DWORD *)this + 170);
  v10 = v2;
  if ( v5 )
  {
    *((_DWORD *)this + 170) = 0;
    v6 = 0;
  }
  v7 = *((_DWORD *)this + 52);
  v8 = v7 | 0x20;
  v9 = v7 & 0xFFFFFFDF;
  if ( !v6 )
    v8 = v9;
  *((_DWORD *)this + 52) = v8;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
}
