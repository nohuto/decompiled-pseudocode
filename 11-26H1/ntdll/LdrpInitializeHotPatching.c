/*
 * XREFs of LdrpInitializeHotPatching @ 0x1800CC004
 * Callers:
 *     LdrpInitializeInternal @ 0x1800CC1E8 (LdrpInitializeInternal.c)
 * Callees:
 *     ZwManageHotPatch @ 0x180161170 (ZwManageHotPatch.c)
 */

/*
 * Hex-Rays decompilation failed for LdrpInitializeHotPatching @ 0x1800CC004
 * Reason: Hex-Rays returned no pseudocode for 0x1800CC004
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800CC004: push    rbx
 * 00000001800CC006: sub     rsp, 20h
 * 00000001800CC00A: mov     [rsp+28h+arg_0], 0
 * 00000001800CC012: mov     rax, gs:60h
 * 00000001800CC01B: mov     rcx, [rax+20h]
 * 00000001800CC01F: test    dword ptr [rcx+8], 2000000h
 * 00000001800CC026: jnz     short loc_1800CC063
 * 00000001800CC028: mov     ebx, 1
 * 00000001800CC02D: lea     r9, [rsp+28h+arg_0]
 * 00000001800CC032: lea     rdx, [rsp+28h+arg_8]
 * 00000001800CC037: mov     [rsp+28h+arg_8], rbx
 * 00000001800CC03C: lea     r8d, [rbx+7]
 * 00000001800CC040: lea     ecx, [rbx+8]
 * 00000001800CC043: call    ZwManageHotPatch
 * 00000001800CC048: cmp     eax, 0C00000BBh
 * 00000001800CC04D: jz      short loc_1800CC063
 * 00000001800CC04F: cmp     eax, 0C0000002h
 * 00000001800CC054: jz      short loc_1800CC063
 * 00000001800CC056: mov     cs:LdrpIsHotPatchingEnabled, bl
 * 00000001800CC05C: add     rsp, 20h
 * 00000001800CC060: pop     rbx
 * 00000001800CC061: retn
 * 00000001800CC063: xor     bl, bl
 * 00000001800CC065: jmp     short loc_1800CC056
 */
