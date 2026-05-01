/*
 * XREFs of ??0hresult_canceled@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DF9EC
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802E0750 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFAD0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_canceled@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DF9EC
 * Reason: Hex-Rays returned no pseudocode for 0x1802DF9EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802DF9EC: push    rbx
 * 00000001802DF9EE: sub     rsp, 20h
 * 00000001802DF9F2: mov     edx, cs:?error_canceled@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_canceled
 * 00000001802DF9F8: mov     r9, r8
 * 00000001802DF9FB: mov     rbx, rcx
 * 00000001802DF9FE: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802DFA03: mov     rax, rbx
 * 00000001802DFA06: add     rsp, 20h
 * 00000001802DFA0A: pop     rbx
 * 00000001802DFA0B: retn
 */
