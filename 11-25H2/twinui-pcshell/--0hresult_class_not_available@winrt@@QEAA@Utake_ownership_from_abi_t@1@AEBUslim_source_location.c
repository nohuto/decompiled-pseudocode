/*
 * XREFs of ??0hresult_class_not_available@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA3C
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802E0750 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFAD0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_class_not_available@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA3C
 * Reason: Hex-Rays returned no pseudocode for 0x1802DFA3C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802DFA3C: push    rbx
 * 00000001802DFA3E: sub     rsp, 20h
 * 00000001802DFA42: mov     edx, cs:?error_class_not_available@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_class_not_available
 * 00000001802DFA48: mov     r9, r8
 * 00000001802DFA4B: mov     rbx, rcx
 * 00000001802DFA4E: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802DFA53: mov     rax, rbx
 * 00000001802DFA56: add     rsp, 20h
 * 00000001802DFA5A: pop     rbx
 * 00000001802DFA5B: retn
 */
