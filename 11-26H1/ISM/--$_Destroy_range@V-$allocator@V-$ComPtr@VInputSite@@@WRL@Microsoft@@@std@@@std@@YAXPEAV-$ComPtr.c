/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x18002B720
 * Callers:
 *     ??$_Uninitialized_copy_n@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAV123@_K0AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x18002AFC4 (--$_Uninitialized_copy_n@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputS.c)
 *     ??$_Assign_counted_range@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@_K@Z @ 0x18002B580 (--$_Assign_counted_range@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VInputSite.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@_K1@Z @ 0x180065798 (-_Change_array@-$vector@V-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V-$alloc.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800F6F10 (--1_Reallocation_guard@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VIn.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
