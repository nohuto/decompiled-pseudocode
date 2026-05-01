/*
 * XREFs of ??0hresult_access_denied@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DF9C4
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802E0750 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFAD0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_access_denied@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DF9C4
 * Reason: Hex-Rays returned no pseudocode for 0x1802DF9C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802DF9C4: push    rbx
 * 00000001802DF9C6: sub     rsp, 20h
 * 00000001802DF9CA: mov     edx, cs:?error_access_denied@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_access_denied
 * 00000001802DF9D0: mov     r9, r8
 * 00000001802DF9D3: mov     rbx, rcx
 * 00000001802DF9D6: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802DF9DB: mov     rax, rbx
 * 00000001802DF9DE: add     rsp, 20h
 * 00000001802DF9E2: pop     rbx
 * 00000001802DF9E3: retn
 */
