/*
 * XREFs of ?IsStreamCategoryDucked@CStreamClassPolicyGains@@QEAAHKH@Z @ 0x180047EC4
 * Callers:
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x18004462C (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamClassPolicyGains::IsStreamCategoryDucked(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        int a3)
{
  __int64 v4; // rsi
  char *v6; // rcx
  unsigned int v7; // edi
  _QWORD *i; // rbx
  __int64 v9; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  EnterCriticalSection(this);
  v11 = this;
  v6 = (char *)&this[1] + (a3 != 0 ? 0xC0 : 0);
  v7 = 0;
  if ( (unsigned int)v4 < 0x18 )
  {
    _mm_lfence();
    for ( i = *(_QWORD **)&v6[8 * v4]; i; i = (_QWORD *)*i )
    {
      v9 = i[1];
      if ( (***(float (__fastcall ****)(_QWORD))(v9 + 56))(*(_QWORD *)(v9 + 56)) != 0.0
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 56) + 8LL))(*(_QWORD *)(v9 + 56)) )
      {
        v7 = 1;
        break;
      }
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return v7;
}
