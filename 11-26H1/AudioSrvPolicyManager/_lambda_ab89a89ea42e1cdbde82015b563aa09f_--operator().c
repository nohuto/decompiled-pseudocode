/*
 * XREFs of _lambda_ab89a89ea42e1cdbde82015b563aa09f_::operator() @ 0x18001F690
 * Callers:
 *     ?TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA?AW4AppTypesBlockedTillConsoleUnlocked@@K@Z @ 0x18001F340 (-TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA-AW4AppTypesBlockedTillConsoleUnlocked@@K@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000C410 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     wil::init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___ @ 0x18001F790 (wil--init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1800453CC (-find@-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@st.c)
 */

__int64 __fastcall lambda_ab89a89ea42e1cdbde82015b563aa09f_::operator()(int **a1)
{
  int *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1[1];
  v7 = **a1;
  *(_QWORD *)v1 = 0LL;
  EnterCriticalSection(&stru_180068A08);
  v9 = &stru_180068A08;
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::find(
    v3,
    &v8,
    &v7);
  if ( v8 == qword_180068A38 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
    return 0LL;
  }
  *(_QWORD *)v1 = *(_QWORD *)(v8 + 24);
  LeaveCriticalSection(&stru_180068A08);
  wil::init_once_nothrow__lambda_69c3cfbf5adefb8ee9fb65f6135da2ca___(v4, 0LL);
  if ( !g_GlobalUserPresent )
    return 3LL;
  if ( g_PoBlockAudioPlayback || g_bLowPowerEpoch || g_bApmSuspended )
    return g_AppTypesBlockedTillConsoleUnlocked;
  v5 = *(_DWORD *)(*(_QWORD *)a1[1] + 1016LL);
  if ( v5 != 1 )
  {
    if ( !v5 )
      g_AppTypesBlockedTillConsoleUnlocked = 0;
    return 0LL;
  }
  result = g_AppTypesBlockedTillConsoleUnlocked;
  if ( !g_AppTypesBlockedTillConsoleUnlocked )
    return 0LL;
  return result;
}
