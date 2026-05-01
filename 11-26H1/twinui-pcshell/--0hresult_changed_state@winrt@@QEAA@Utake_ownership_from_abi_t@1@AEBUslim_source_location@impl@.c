/*
 * XREFs of ??0hresult_changed_state@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D8730
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D9518 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D87F0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_changed_state@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D8730
 * Reason: Hex-Rays returned no pseudocode for 0x1802D8730
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802D8730: push    rbx
 * 00000001802D8732: sub     rsp, 20h
 * 00000001802D8736: mov     edx, cs:?error_changed_state@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_changed_state
 * 00000001802D873C: mov     r9, r8
 * 00000001802D873F: mov     rbx, rcx
 * 00000001802D8742: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802D8747: mov     rax, rbx
 * 00000001802D874A: add     rsp, 20h
 * 00000001802D874E: pop     rbx
 * 00000001802D874F: retn
 */
