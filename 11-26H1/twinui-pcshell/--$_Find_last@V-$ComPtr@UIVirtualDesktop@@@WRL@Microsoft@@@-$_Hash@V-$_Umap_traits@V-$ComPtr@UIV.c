/*
 * XREFs of ??$_Find_last@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@std@@@1@AEBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@_K@Z @ 0x1801791A4
 * Callers:
 *     ??$emplace@AEAPEAUIVirtualDesktop@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIVirtualDesktop@@AEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x180494130 (--$emplace@AEAPEAUIVirtualDesktop@@AEAV-$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@In.c)
 *     ??$emplace@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@V?$_Uhash_compare@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@_N@1@AEAV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@$$QEAV?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@45@@Z @ 0x180494250 (--$emplace@AEAV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop@Multitaskin.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IVirtualDesktop>,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IVirtualDesktop>,std::hash<Microsoft::WRL::ComPtr<IVirtualDesktop>>,std::equal_to<Microsoft::WRL::ComPtr<IVirtualDesktop>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>,0>>::_Find_last<Microsoft::WRL::ComPtr<IVirtualDesktop>>(
        _QWORD *a1,
        _QWORD *a2,
        int (__fastcall ****a3)(_QWORD, GUID *, __int64 *),
        __int64 a4)
{
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // r15
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall **v14)(_QWORD, GUID *, __int64 *); // rax
  int v15; // ebp
  bool v16; // zf
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v5 = (_QWORD *)a1[1];
  v6 = a4 & a1[6];
  v7 = a1[3];
  v8 = 2 * v6;
  v10 = *(_QWORD **)(v7 + 8 * v8 + 8);
  if ( v10 != v5 )
  {
    v11 = *(_QWORD **)(v7 + 8 * v8);
    while ( 1 )
    {
      v12 = *a3;
      if ( *a3 )
      {
        v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v10[2];
        if ( !v13 )
          goto LABEL_12;
        if ( v12 == (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v13 )
          goto LABEL_18;
        v14 = *v12;
        v19 = 0LL;
        v18 = 0LL;
        if ( (*v14)(v12, &GUID_00000000_0000_0000_c000_000000000046, &v19) < 0 )
          goto LABEL_12;
        v15 = (**v13)(v13, &GUID_00000000_0000_0000_c000_000000000046, &v18);
        if ( v15 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        if ( v15 < 0 )
          goto LABEL_12;
        v16 = v19 == v18;
      }
      else
      {
        v16 = v10[2] == 0LL;
      }
      if ( v16 )
      {
LABEL_18:
        *a2 = *v10;
        a2[1] = v10;
        return a2;
      }
LABEL_12:
      if ( v10 == v11 )
      {
        *a2 = v10;
        goto LABEL_16;
      }
      v10 = (_QWORD *)v10[1];
    }
  }
  *a2 = v5;
LABEL_16:
  a2[1] = 0LL;
  return a2;
}
