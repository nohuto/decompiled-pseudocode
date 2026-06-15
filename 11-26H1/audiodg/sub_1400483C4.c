/*
 * XREFs of sub_1400483C4 @ 0x1400483C4
 * Callers:
 *     sub_14003EB60 @ 0x14003EB60 (sub_14003EB60.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for sub_1400483C4 @ 0x1400483C4
 * Reason: Hex-Rays returned no pseudocode for 0x1400483C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400483C4: sub     rsp, 28h
 * 00000001400483C8: xor     eax, eax
 * 00000001400483CA: cmp     cs:RegHandle, rax
 * 00000001400483D1: jnz     short loc_1400483F7
 * 00000001400483D3: lea     r8, RegHandle
 * 00000001400483DA: mov     r9, r8
 * 00000001400483DD: lea     rdx, sub_1400322D0
 * 00000001400483E4: lea     rcx, unk_1400C8250
 * 00000001400483EB: call    cs:EtwEventRegister
 * 00000001400483F2: nop     dword ptr [rax+rax+00h]
 * 00000001400483F7: add     rsp, 28h
 * 00000001400483FB: retn
 */
