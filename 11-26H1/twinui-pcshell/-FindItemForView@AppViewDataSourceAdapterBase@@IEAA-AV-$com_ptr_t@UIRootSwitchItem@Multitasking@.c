/*
 * XREFs of ?FindItemForView@AppViewDataSourceAdapterBase@@IEAA?AV?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1800F2498
 * Callers:
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1800F1CE8 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F23E0 (-GetSwitchItemForApplicationView@AppViewDataSourceAdapter@@UEAAJPEAUIApplicationView@@AEBU_GUID@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall AppViewDataSourceAdapterBase::FindItemForView(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v6; // rcx
  __int64 *v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx

  if ( a3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a3 + 8LL))(a3);
  v6 = *(__int64 **)(*(_QWORD *)(a1 + 96) + 8LL);
  v7 = *(__int64 **)(a1 + 96);
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      if ( v6[4] >= a3 )
        v7 = v6;
      v8 = v6 + 2;
      if ( v6[4] >= a3 )
        v8 = v6;
      v6 = (__int64 *)*v8;
    }
    while ( !*(_BYTE *)(*v8 + 25) );
  }
  if ( *((_BYTE *)v7 + 25) || a3 < v7[4] )
    v7 = *(__int64 **)(a1 + 96);
  if ( a3 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a3 + 16LL))(a3);
  if ( v7 == *(__int64 **)(a1 + 96) )
  {
    *a2 = 0LL;
  }
  else
  {
    v9 = v7[5];
    *a2 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return a2;
}
