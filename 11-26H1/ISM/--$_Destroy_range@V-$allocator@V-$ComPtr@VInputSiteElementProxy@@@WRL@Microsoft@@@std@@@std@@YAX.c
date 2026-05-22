/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800666AC
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800665E4 (--$_Uninitialized_move@PEAV-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@_K1@Z @ 0x180066638 (-_Change_array@-$vector@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr.c)
 *     ??1InputSiteManager@@UEAA@XZ @ 0x180132F30 (--1InputSiteManager@@UEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180132F94 (--1_Reallocation_guard@-$vector@V-$ComPtr@VInputSiteElementProxy@@@WRL@Microsoft@@V-$allocator@V.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSiteElementProxy>>>(
        __int64 *a1,
        __int64 *a2)
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
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
