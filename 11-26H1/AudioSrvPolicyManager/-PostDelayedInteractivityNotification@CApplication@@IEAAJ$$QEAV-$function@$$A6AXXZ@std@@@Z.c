/*
 * XREFs of ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x18003914C
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180018508 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x18001A3A0 (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x180037C9C (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::PostDelayedInteractivityNotification(CApplication *this, __int64 a2)
{
  signed int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rax
  signed int LastError; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v9 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v10 = v5;
  CApplication::CleanupDelayedInteractivityNotification(this);
  if ( *((_QWORD *)this + 67)
    || (v6 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
               ThreadPool,
               CApplication::DelayedInteractivityNotificationTimerExpiredCallback,
               this),
        (*((_QWORD *)this + 67) = v6) != 0LL) )
  {
    std::function<void (void)>::operator=((__int64)this + 544, a2);
    v9 = -300000000LL;
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
      ThreadPool,
      *((_QWORD *)this + 67),
      &v9,
      0LL,
      100);
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 < 0 )
      AudPolicyLogError("CApplication::PostDelayedInteractivityNotification", 1446, v4);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return (unsigned int)v4;
}
