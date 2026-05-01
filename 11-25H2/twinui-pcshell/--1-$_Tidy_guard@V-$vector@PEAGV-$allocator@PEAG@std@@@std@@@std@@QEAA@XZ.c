/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@PEAGV?$allocator@PEAG@std@@@std@@@std@@QEAA@XZ @ 0x18031FC60
 * Callers:
 *     ??$_Construct_n@AEBQEAPEAGAEBQEAPEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAX_KAEBQEAPEAG1@Z @ 0x18031F640 (--$_Construct_n@AEBQEAPEAGAEBQEAPEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAX_KAEBQEAPEAG.c)
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x180582B04 (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180227634 (--1-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pa.c)
 */

void __fastcall std::_Tidy_guard<std::vector<unsigned short *>>::~_Tidy_guard<std::vector<unsigned short *>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>>>>>>(v1);
}
