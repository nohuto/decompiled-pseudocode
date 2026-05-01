/*
 * XREFs of ??0hresult_class_not_registered@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA64
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802E0750 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFAD0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_class_not_registered@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA64
 * Reason: Hex-Rays returned no pseudocode for 0x1802DFA64
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802DFA64: push    rbx
 * 00000001802DFA66: sub     rsp, 20h
 * 00000001802DFA6A: mov     edx, cs:?error_class_not_registered@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_class_not_registered
 * 00000001802DFA70: mov     r9, r8
 * 00000001802DFA73: mov     rbx, rcx
 * 00000001802DFA76: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802DFA7B: mov     rax, rbx
 * 00000001802DFA7E: add     rsp, 20h
 * 00000001802DFA82: pop     rbx
 * 00000001802DFA83: retn
 */
