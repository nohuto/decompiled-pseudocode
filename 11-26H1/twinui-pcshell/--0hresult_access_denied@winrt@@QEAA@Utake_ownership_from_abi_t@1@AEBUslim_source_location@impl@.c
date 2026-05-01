/*
 * XREFs of ??0hresult_access_denied@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D86E0
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D9518 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D87F0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_access_denied@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D86E0
 * Reason: Hex-Rays returned no pseudocode for 0x1802D86E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802D86E0: push    rbx
 * 00000001802D86E2: sub     rsp, 20h
 * 00000001802D86E6: mov     edx, cs:?error_access_denied@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_access_denied
 * 00000001802D86EC: mov     r9, r8
 * 00000001802D86EF: mov     rbx, rcx
 * 00000001802D86F2: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802D86F7: mov     rax, rbx
 * 00000001802D86FA: add     rsp, 20h
 * 00000001802D86FE: pop     rbx
 * 00000001802D86FF: retn
 */
