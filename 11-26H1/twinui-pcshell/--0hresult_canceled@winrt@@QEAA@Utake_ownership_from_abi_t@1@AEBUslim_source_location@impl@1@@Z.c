/*
 * XREFs of ??0hresult_canceled@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D8708
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D9518 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D87F0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_canceled@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D8708
 * Reason: Hex-Rays returned no pseudocode for 0x1802D8708
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802D8708: push    rbx
 * 00000001802D870A: sub     rsp, 20h
 * 00000001802D870E: mov     edx, cs:?error_canceled@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_canceled
 * 00000001802D8714: mov     r9, r8
 * 00000001802D8717: mov     rbx, rcx
 * 00000001802D871A: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802D871F: mov     rax, rbx
 * 00000001802D8722: add     rsp, 20h
 * 00000001802D8726: pop     rbx
 * 00000001802D8727: retn
 */
