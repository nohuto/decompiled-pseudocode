/*
 * XREFs of ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x180038214
 * Callers:
 *     ??1CApplication@@MEAA@XZ @ 0x180037970 (--1CApplication@@MEAA@XZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800382D4 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800388B0 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CleanupGoodFaithExemptionTimer(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rdx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 384);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  v5 = v2;
  v3 = *((_QWORD *)this + 53);
  if ( v3 )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      v3,
      0LL,
      0LL,
      0);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64))(*(_QWORD *)ThreadPool + 32LL))(
      ThreadPool,
      *((_QWORD *)this + 53),
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 53));
    *((_DWORD *)this + 109) = 1;
    *((_QWORD *)this + 53) = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v5);
  return 0LL;
}
