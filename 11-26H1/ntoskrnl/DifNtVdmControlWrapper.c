/*
 * XREFs of DifNtVdmControlWrapper @ 0x140690D10
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     NtWaitLowEventPair @ 0x14077D200 (NtWaitLowEventPair.c)
 */

/*
 * Hex-Rays decompilation failed for DifNtVdmControlWrapper @ 0x140690D10
 * Reason: Hex-Rays returned no pseudocode for 0x140690D10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140690D10: mov     r11, rsp
 * 0000000140690D13: mov     [r11+8], rbx
 * 0000000140690D17: mov     [r11+10h], rbp
 * 0000000140690D1B: mov     [r11+18h], rsi
 * 0000000140690D1F: push    rdi
 * 0000000140690D20: push    r14
 * 0000000140690D22: push    r15
 * 0000000140690D24: sub     rsp, 40h
 * 0000000140690D28: xor     eax, eax
 * 0000000140690D2A: xorps   xmm0, xmm0
 * 0000000140690D2D: movups  [rsp+58h+var_38], xmm0
 * 0000000140690D32: mov     r15d, ecx
 * 0000000140690D35: mov     [r11-28h], rax
 * 0000000140690D39: mov     ecx, 35Ah
 * 0000000140690D3E: mov     r14, rdx
 * 0000000140690D41: call    DifGetAPIThunkContextById
 * 0000000140690D46: mov     rsi, rax
 * 0000000140690D49: test    rax, rax
 * 0000000140690D4C: jz      loc_140690DE1
 * 0000000140690D52: mov     eax, [rax+0Ch]
 * 0000000140690D55: test    al, 18h
 * 0000000140690D57: jz      short loc_140690D65
 * 0000000140690D59: mov     rcx, [rsp+58h]
 * 0000000140690D5E: mov     qword ptr [rsp+58h+var_38], rcx
 * 0000000140690D63: jmp     short loc_140690D73
 * 0000000140690D65: test    al, 4
 * 0000000140690D67: jz      short loc_140690D73
 * 0000000140690D69: call    DifGetReturnAddressForWrappers
 * 0000000140690D6E: mov     qword ptr [rsp+58h+var_38], rax
 * 0000000140690D73: xor     bpl, bpl
 * 0000000140690D76: mov     [rsp+58h+var_28], r15d
 * 0000000140690D7B: cmp     cs:VfDifRunningWithoutReboot, bpl
 * 0000000140690D82: mov     qword ptr [rsp+58h+var_38+8], r14
 * 0000000140690D87: jnz     short loc_140690D95
 * 0000000140690D89: test    cs:VfOptionFlags, 800h
 * 0000000140690D93: jz      short loc_140690DA8
 * 0000000140690D95: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140690D9C: call    ExAcquireRundownProtection_0
 * 0000000140690DA1: mov     bpl, al
 * 0000000140690DA4: test    al, al
 * 0000000140690DA6: jz      short loc_140690DE1
 * 0000000140690DA8: lea     rdi, [rsi+20h]
 * 0000000140690DAC: mov     rbx, [rdi]
 * 0000000140690DAF: jmp     short loc_140690DCB
 * 0000000140690DB1: lea     rax, [rbx-10h]
 * 0000000140690DB5: test    rax, rax
 * 0000000140690DB8: jz      short loc_140690DC8
 * 0000000140690DBA: mov     rax, [rax+8]
 * 0000000140690DBE: lea     rcx, [rsp+58h+var_38]
 * 0000000140690DC3: call    _guard_dispatch_icall_no_overrides
 * 0000000140690DC8: mov     rbx, [rbx]
 * 0000000140690DCB: cmp     rbx, rdi
 * 0000000140690DCE: jnz     short loc_140690DB1
 * 0000000140690DD0: test    bpl, bpl
 * 0000000140690DD3: jz      short loc_140690DE1
 * 0000000140690DD5: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140690DDC: call    ExReleaseRundownProtection_0
 * 0000000140690DE1: mov     rdx, r14
 * 0000000140690DE4: mov     ecx, r15d
 * 0000000140690DE7: call    NtWaitLowEventPair
 * 0000000140690DEC: mov     [rsp+58h+var_24], eax
 * 0000000140690DF0: test    rsi, rsi
 * 0000000140690DF3: jz      short loc_140690E59
 * 0000000140690DF5: xor     dil, dil
 * 0000000140690DF8: cmp     cs:VfDifRunningWithoutReboot, dil
 * 0000000140690DFF: jnz     short loc_140690E0D
 * 0000000140690E01: test    cs:VfOptionFlags, 800h
 * 0000000140690E0B: jz      short loc_140690E20
 * 0000000140690E0D: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140690E14: call    ExAcquireRundownProtection_0
 * 0000000140690E19: mov     dil, al
 * 0000000140690E1C: test    al, al
 * 0000000140690E1E: jz      short loc_140690E59
 * 0000000140690E20: add     rsi, 30h ; '0'
 * 0000000140690E24: mov     rbx, [rsi]
 * 0000000140690E27: jmp     short loc_140690E43
 * 0000000140690E29: lea     rax, [rbx-10h]
 * 0000000140690E2D: test    rax, rax
 * 0000000140690E30: jz      short loc_140690E40
 * 0000000140690E32: mov     rax, [rax+8]
 * 0000000140690E36: lea     rcx, [rsp+58h+var_38]
 * 0000000140690E3B: call    _guard_dispatch_icall_no_overrides
 * 0000000140690E40: mov     rbx, [rbx]
 * 0000000140690E43: cmp     rbx, rsi
 * 0000000140690E46: jnz     short loc_140690E29
 * 0000000140690E48: test    dil, dil
 * 0000000140690E4B: jz      short loc_140690E59
 * 0000000140690E4D: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140690E54: call    ExReleaseRundownProtection_0
 * 0000000140690E59: mov     eax, [rsp+58h+var_24]
 * 0000000140690E5D: mov     rbx, [rsp+58h+arg_0]
 * 0000000140690E62: mov     rbp, [rsp+58h+arg_8]
 * 0000000140690E67: mov     rsi, [rsp+58h+arg_10]
 * 0000000140690E6C: add     rsp, 40h
 * 0000000140690E70: pop     r15
 * 0000000140690E72: pop     r14
 * 0000000140690E74: pop     rdi
 * 0000000140690E75: retn
 */
