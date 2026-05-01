/*
 * XREFs of ??1_Reallocation_guard@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@XZ @ 0x1802DDA9C
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1800B5EB0 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@AEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$_Emplace_reallocate@AEBN@?$vector@NV?$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z @ 0x180234C04 (--$_Emplace_reallocate@AEBN@-$vector@NV-$allocator@N@std@@@std@@AEAAPEANQEANAEBN@Z.c)
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x18025445C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x1802DCD10 (--$_Reallocate@$0A@@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 *     ??$_Reallocate@$0A@@?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x18030F7E8 (--$_Reallocate@$0A@@-$vector@VString@Internal@Windows@@V-$allocator@VString@Internal@Windows@@@s.c)
 *     ??$_Reallocate@$0A@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXAEA_K@Z @ 0x1804115B0 (--$_Reallocate@$0A@@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned short *>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
}
