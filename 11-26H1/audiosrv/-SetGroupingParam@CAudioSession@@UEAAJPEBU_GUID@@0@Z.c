/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800CF450
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  _QWORD *v6; // rsi
  _QWORD *i; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  I_RpcBindingInqLocalClientPID(0LL, &v12);
  if ( v12 == *((_DWORD *)this + 51) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 664));
    v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 664);
    v6 = (_QWORD *)*((_QWORD *)this + 89);
    for ( i = (_QWORD *)*((_QWORD *)this + 88); i != v6; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 456LL))(*i);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  }
  v8 = (*(__int64 (__fastcall **)(char *, const struct _GUID *, const struct _GUID *))(*((_QWORD *)this + 1) + 112LL))(
         (char *)this + 8,
         a2,
         a3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2BD,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
