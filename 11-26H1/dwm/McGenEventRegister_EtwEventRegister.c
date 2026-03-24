/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x140004654
 * Callers:
 *     wWinMain @ 0x140001FA0 (wWinMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x140004654
 * Reason: Hex-Rays returned no pseudocode for 0x140004654
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140004654: sub     rsp, 28h
 * 0000000140004658: xor     eax, eax
 * 000000014000465A: cmp     [r9], rax
 * 000000014000465D: jnz     short loc_140004672
 * 000000014000465F: lea     rdx, McGenControlCallbackV2
 * 0000000140004666: call    cs:__imp_EtwEventRegister
 * 000000014000466D: nop     dword ptr [rax+rax+00h]
 * 0000000140004672: add     rsp, 28h
 * 0000000140004676: retn
 */
