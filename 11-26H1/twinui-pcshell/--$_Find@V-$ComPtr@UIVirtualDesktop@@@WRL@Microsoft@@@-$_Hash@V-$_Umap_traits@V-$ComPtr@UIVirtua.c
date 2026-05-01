/*
 * XREFs of ??$_Find@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@1@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@_K@Z @ 0x180181C58
 * Callers:
 *     ?find@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@2@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Z @ 0x180495864 (-find@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDes.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Find<Microsoft::WRL::ComPtr<IVirtualDesktop>>(
        _QWORD *a1,
        int (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rbx
  __int64 v9; // rbp
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall **v12)(_QWORD, GUID *, __int64 *); // rax
  int v13; // edi
  bool v14; // zf
  __int64 result; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1[6];
  v5 = a1[3];
  v6 = 2 * (a3 & v3);
  v8 = *(_QWORD *)(v5 + 8 * v6 + 8);
  if ( v8 != a1[1] )
  {
    v9 = *(_QWORD *)(v5 + 8 * v6);
    while ( 1 )
    {
      v10 = *a2;
      if ( *a2 )
      {
        v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v8 + 16);
        if ( !v11 )
          goto LABEL_12;
        if ( v10 == (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v11 )
          goto LABEL_14;
        v12 = *v10;
        v17 = 0LL;
        v16 = 0LL;
        if ( (*v12)(v10, &GUID_00000000_0000_0000_c000_000000000046, &v17) < 0 )
          goto LABEL_12;
        v13 = (**v11)(v11, &GUID_00000000_0000_0000_c000_000000000046, &v16);
        if ( v13 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v13 < 0 )
          goto LABEL_12;
        v14 = v17 == v16;
      }
      else
      {
        v14 = *(_QWORD *)(v8 + 16) == 0LL;
      }
      if ( v14 )
        goto LABEL_14;
LABEL_12:
      if ( v8 == v9 )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  v8 = 0LL;
LABEL_14:
  result = v8;
  if ( !v8 )
    return a1[1];
  return result;
}
