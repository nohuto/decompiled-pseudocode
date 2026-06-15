/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x180110D5C
 * Callers:
 *     ??$_Construct_n@AEBQEAVWeakRef@WRL@Microsoft@@AEBQEAV123@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAX_KAEBQEAVWeakRef@WRL@Microsoft@@1@Z @ 0x1801108A0 (--$_Construct_n@AEBQEAVWeakRef@WRL@Microsoft@@AEBQEAV123@@-$vector@VWeakRef@WRL@Microsoft@@V-$al.c)
 * Callees:
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004665C (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<Microsoft::WRL::WeakRef>>::~_Tidy_guard<std::vector<Microsoft::WRL::WeakRef>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<Microsoft::WRL::WeakRef>::_Tidy(v1);
}
