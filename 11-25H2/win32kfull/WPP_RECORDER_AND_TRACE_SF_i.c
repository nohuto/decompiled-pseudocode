/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x14011AEB8
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x14011A3D8 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_i @ 0x14011AEB8
 * Reason: Hex-Rays returned no pseudocode for 0x14011AEB8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014011AEB8: mov     [rsp+arg_0], rbx
 * 000000014011AEBD: mov     [rsp+arg_8], rbp
 * 000000014011AEC2: push    rdi
 * 000000014011AEC3: sub     rsp, 40h
 * 000000014011AEC7: mov     rdi, r9
 * 000000014011AECA: mov     bl, r8b
 * 000000014011AECD: mov     ebp, 0Ch
 * 000000014011AED2: test    dl, dl
 * 000000014011AED4: jnz     short loc_14011AF2B
 * 000000014011AED6: test    bl, bl
 * 000000014011AED8: jz      short loc_14011AF1A
 * 000000014011AEDA: and     [rsp+48h+var_10], 0
 * 000000014011AEE0: lea     rax, [rsp+48h+arg_40]
 * 000000014011AEE8: mov     edx, 4
 * 000000014011AEED: mov     [rsp+48h+var_18], 8
 * 000000014011AEF6: mov     [rsp+48h+var_20], rax
 * 000000014011AEFB: lea     r9, WPP_c988c3f99a353e6ffe2381605806c7a5_Traceguids
 * 000000014011AF02: mov     rcx, rdi
 * 000000014011AF05: mov     word ptr [rsp+48h+var_28], bp
 * 000000014011AF0A: lea     r8d, [rdx+10h]
 * 000000014011AF0E: call    cs:__imp_WppAutoLogTrace
 * 000000014011AF15: nop     dword ptr [rax+rax+00h]
 * 000000014011AF1A: mov     rbx, [rsp+48h+arg_0]
 * 000000014011AF1F: mov     rbp, [rsp+48h+arg_8]
 * 000000014011AF24: add     rsp, 40h
 * 000000014011AF28: pop     rdi
 * 000000014011AF29: retn
 * 000000014011AF2B: and     [rsp+48h+var_18], 0
 * 000000014011AF31: lea     rdx, [rsp+48h+arg_40]
 * 000000014011AF39: mov     rax, cs:pfnWppTraceMessage
 * 000000014011AF40: lea     r8, WPP_c988c3f99a353e6ffe2381605806c7a5_Traceguids
 * 000000014011AF47: mov     [rsp+48h+var_20], 8
 * 000000014011AF50: mov     r9d, ebp
 * 000000014011AF53: mov     [rsp+48h+var_28], rdx
 * 000000014011AF58: mov     edx, 2Bh ; '+'
 * 000000014011AF5D: call    _guard_dispatch_icall
 * 000000014011AF62: jmp     loc_14011AED6
 */
