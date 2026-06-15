/*
 * XREFs of ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x18003A200
 * Callers:
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800389C0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::StartGoodFaithPLMExemptionTimer(CApplication *this)
{
  signed int v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // r10
  signed int LastError; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 384);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  v8 = v3;
  if ( !*((_QWORD *)this + 53) )
  {
    v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CApplication::GoodFaithPLMExemptionTimerExpiredCallback,
           this);
    *((_QWORD *)this + 53) = v4;
    if ( v4 )
    {
      v7 = -200000000LL;
      *((_DWORD *)this + 109) = 1;
      (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64 *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v4,
        &v7,
        0LL,
        100);
    }
    else
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 < 0 )
        AudPolicyLogError("CApplication::StartGoodFaithPLMExemptionTimer", 1252, v2);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
  return (unsigned int)v2;
}
