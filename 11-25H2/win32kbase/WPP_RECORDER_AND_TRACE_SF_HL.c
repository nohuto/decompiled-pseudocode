/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HL @ 0x1401431E4
 * Callers:
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1402014A0 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x140201F50 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x140205ED0 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_HL @ 0x1401431E4
 * Reason: Hex-Rays returned no pseudocode for 0x1401431E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401431E4: mov     [rsp+arg_0], rbx
 * 00000001401431E9: mov     [rsp+arg_8], rsi
 * 00000001401431EE: push    rdi
 * 00000001401431EF: sub     rsp, 50h
 * 00000001401431F3: movzx   ebx, [rsp+58h+arg_30]
 * 00000001401431FB: mov     rsi, r9
 * 00000001401431FE: mov     dil, r8b
 * 0000000140143201: test    dl, dl
 * 0000000140143203: jnz     short loc_140143276
 * 0000000140143205: test    dil, dil
 * 0000000140143208: jz      short loc_140143265
 * 000000014014320A: and     [rsp+58h+var_10], 0
 * 0000000140143210: lea     rax, [rsp+58h+arg_48]
 * 0000000140143218: movzx   edx, [rsp+58h+arg_20]
 * 0000000140143220: lea     r9, WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids
 * 0000000140143227: mov     [rsp+58h+var_18], 4
 * 0000000140143230: mov     r8d, 4
 * 0000000140143236: mov     [rsp+58h+var_20], rax
 * 000000014014323B: mov     rcx, rsi
 * 000000014014323E: lea     rax, [rsp+58h+arg_40]
 * 0000000140143246: mov     [rsp+58h+var_28], 2
 * 000000014014324F: mov     [rsp+58h+var_30], rax
 * 0000000140143254: mov     word ptr [rsp+58h+var_38], bx
 * 0000000140143259: call    cs:__imp_WppAutoLogTrace
 * 0000000140143260: nop     dword ptr [rax+rax+00h]
 * 0000000140143265: mov     rbx, [rsp+58h+arg_0]
 * 000000014014326A: mov     rsi, [rsp+58h+arg_8]
 * 000000014014326F: add     rsp, 50h
 * 0000000140143273: pop     rdi
 * 0000000140143274: retn
 * 0000000140143276: and     [rsp+58h+var_18], 0
 * 000000014014327C: lea     rdx, [rsp+58h+arg_48]
 * 0000000140143284: mov     rax, cs:pfnWppTraceMessage
 * 000000014014328B: lea     r8, WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids
 * 0000000140143292: mov     [rsp+58h+var_20], 4
 * 000000014014329B: mov     r9d, ebx
 * 000000014014329E: mov     [rsp+58h+var_28], rdx
 * 00000001401432A3: lea     rdx, [rsp+58h+arg_40]
 * 00000001401432AB: mov     [rsp+58h+var_30], 2
 * 00000001401432B4: mov     [rsp+58h+var_38], rdx
 * 00000001401432B9: mov     edx, 2Bh ; '+'
 * 00000001401432BE: call    _guard_dispatch_icall
 * 00000001401432C3: jmp     loc_140143205
 */
