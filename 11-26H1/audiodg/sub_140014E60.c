/*
 * XREFs of sub_140014E60 @ 0x140014E60
 * Callers:
 *     sub_140012F60 @ 0x140012F60 (sub_140012F60.c)
 *     sub_140013158 @ 0x140013158 (sub_140013158.c)
 *     sub_1400132C0 @ 0x1400132C0 (sub_1400132C0.c)
 *     sub_140013550 @ 0x140013550 (sub_140013550.c)
 *     sub_1400135E0 @ 0x1400135E0 (sub_1400135E0.c)
 *     sub_140013B80 @ 0x140013B80 (sub_140013B80.c)
 *     sub_140013C20 @ 0x140013C20 (sub_140013C20.c)
 *     sub_140013CA0 @ 0x140013CA0 (sub_140013CA0.c)
 *     sub_140013D10 @ 0x140013D10 (sub_140013D10.c)
 *     sub_140013D70 @ 0x140013D70 (sub_140013D70.c)
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140014ED0 @ 0x140014ED0 (sub_140014ED0.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 *     sub_14001588C @ 0x14001588C (sub_14001588C.c)
 *     sub_14002A258 @ 0x14002A258 (sub_14002A258.c)
 *     sub_14003DF40 @ 0x14003DF40 (sub_14003DF40.c)
 *     sub_14005D070 @ 0x14005D070 (sub_14005D070.c)
 *     sub_14005D0FC @ 0x14005D0FC (sub_14005D0FC.c)
 *     sub_14006770C @ 0x14006770C (sub_14006770C.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 *     sub_14006CDEC @ 0x14006CDEC (sub_14006CDEC.c)
 *     sub_14006CE88 @ 0x14006CE88 (sub_14006CE88.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for sub_140014E60 @ 0x140014E60
 * Reason: Hex-Rays returned no pseudocode for 0x140014E60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140014E60: sub     rsp, 38h
 * 0000000140014E64: mov     r8, cs:qword_1400E7328
 * 0000000140014E6B: mov     rcx, [rsp+38h+arg_20]
 * 0000000140014E70: test    r8, r8
 * 0000000140014E73: jnz     short loc_140014EAD
 * 0000000140014E75: xor     eax, eax
 * 0000000140014E77: mov     [rcx], rax
 * 0000000140014E7A: mov     r8d, eax
 * 0000000140014E7D: mov     [rcx+8], r8d
 * 0000000140014E81: xor     r8d, r8d
 * 0000000140014E84: mov     [rsp+38h+var_10], rcx
 * 0000000140014E89: mov     [rcx+0Ch], eax
 * 0000000140014E8C: mov     rcx, cs:RegHandle
 * 0000000140014E93: mov     [rsp+38h+var_18], r9d
 * 0000000140014E98: xor     r9d, r9d
 * 0000000140014E9B: call    cs:EtwEventWriteTransfer
 * 0000000140014EA2: nop     dword ptr [rax+rax+00h]
 * 0000000140014EA7: add     rsp, 38h
 * 0000000140014EAB: retn
 * 0000000140014EAD: mov     [rcx], r8
 * 0000000140014EB0: mov     eax, 2
 * 0000000140014EB5: movzx   r8d, word ptr [r8]
 * 0000000140014EB9: jmp     short loc_140014E7D
 */
