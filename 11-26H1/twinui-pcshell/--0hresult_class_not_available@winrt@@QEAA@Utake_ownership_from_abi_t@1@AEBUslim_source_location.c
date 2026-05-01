/*
 * XREFs of ??0hresult_class_not_available@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D8758
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D9518 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D87F0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_class_not_available@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D8758
 * Reason: Hex-Rays returned no pseudocode for 0x1802D8758
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802D8758: push    rbx
 * 00000001802D875A: sub     rsp, 20h
 * 00000001802D875E: mov     edx, cs:?error_class_not_available@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_class_not_available
 * 00000001802D8764: mov     r9, r8
 * 00000001802D8767: mov     rbx, rcx
 * 00000001802D876A: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802D876F: mov     rax, rbx
 * 00000001802D8772: add     rsp, 20h
 * 00000001802D8776: pop     rbx
 * 00000001802D8777: retn
 */
