/*
 * XREFs of ?GetAllInputSites@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180132B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18002A8D0 (--$_Emplace_reallocate@AEBV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall InputSiteHierarchyManager::GetAllInputSites(_QWORD *a1, _QWORD *a2)
{
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  __int64 *v6; // rdx
  __int64 *v7; // r8

  (*(void (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = (_QWORD **)a1[3];
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = (__int64 *)a2[1];
    v7 = i + 3;
    if ( v6 == (__int64 *)a2[2] )
    {
      std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<InputSite> const &>(
        a2,
        (__int64)v6,
        v7);
    }
    else
    {
      *v6 = *v7;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v6);
      a2[1] += 8LL;
    }
  }
  return a2;
}
