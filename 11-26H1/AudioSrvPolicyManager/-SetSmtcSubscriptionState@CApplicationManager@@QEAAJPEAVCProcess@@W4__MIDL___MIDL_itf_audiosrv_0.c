/*
 * XREFs of ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x180018094
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x18002C860 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Do_call.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180017840 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180019884 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetSmtcSubscriptionState(
        struct _RTL_CRITICAL_SECTION *a1,
        __int64 a2,
        int a3,
        int a4)
{
  __int64 v5; // r15
  CApplicationManager *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // edx
  int v12; // r8d
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  v5 = a3;
  v7 = g_ApplicationManager;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = CApplicationManager::Register(v7, (struct CProcess *)a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    AudPolicyLogError("CApplicationManager::SetSmtcSubscriptionState", 637, v9);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 24));
    v15 = (struct _RTL_CRITICAL_SECTION *)(a2 + 24);
    if ( (unsigned int)v5 <= 1 && ((v12 = *(_DWORD *)(a2 + 4 * v5 + 496)) != 0 || a4) )
    {
      v13 = v12 + (a4 != 0 ? 1 : -1);
      *(_DWORD *)(a2 + 4 * v5 + 496) = v13;
      if ( !v13 || v13 == 1 && a4 )
        CApplication::OnSmtcSubscriptionChanged(*(CApplication **)(a2 + 224), v11);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v15);
    }
    else if ( a2 != -24 )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 24));
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return v10;
}
