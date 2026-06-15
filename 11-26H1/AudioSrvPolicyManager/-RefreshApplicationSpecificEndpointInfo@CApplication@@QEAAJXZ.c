/*
 * XREFs of ?RefreshApplicationSpecificEndpointInfo@CApplication@@QEAAJXZ @ 0x18003936C
 * Callers:
 *     ?ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z @ 0x18003CEF8 (-ResetAllApplicationSpecificEndpoints@CApplicationManager@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::RefreshApplicationSpecificEndpointInfo(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // rbx
  __int64 **v4; // rcx
  __int64 *i; // rax
  __int64 *j; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v8 = v2;
  v3 = (__int64 *)**((_QWORD **)this + 88);
  while ( !*((_BYTE *)v3 + 25) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3[8] + 48LL))(v3[8]);
    v4 = (__int64 **)v3[2];
    if ( *((_BYTE *)v4 + 25) )
    {
      for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25) && v3 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v3 = i;
      v3 = i;
    }
    else
    {
      v3 = (__int64 *)v3[2];
      for ( j = *v4; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v3 = j;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return 0LL;
}
