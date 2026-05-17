/*
 * XREFs of LdrpInitializeHotPatching @ 0x1800CE894
 * Callers:
 *     LdrpInitializeInternal @ 0x1800CEA78 (LdrpInitializeInternal.c)
 * Callees:
 *     ZwManageHotPatch @ 0x180161270 (ZwManageHotPatch.c)
 */

/*
 * Hex-Rays decompilation failed for LdrpInitializeHotPatching @ 0x1800CE894
 * Reason: Hex-Rays returned no pseudocode for 0x1800CE894
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800CE894: push    rbx
 * 00000001800CE896: sub     rsp, 20h
 * 00000001800CE89A: mov     [rsp+28h+arg_0], 0
 * 00000001800CE8A2: mov     rax, gs:60h
 * 00000001800CE8AB: mov     rcx, [rax+20h]
 * 00000001800CE8AF: test    dword ptr [rcx+8], 2000000h
 * 00000001800CE8B6: jnz     short loc_1800CE8F3
 * 00000001800CE8B8: mov     ebx, 1
 * 00000001800CE8BD: lea     r9, [rsp+28h+arg_0]
 * 00000001800CE8C2: lea     rdx, [rsp+28h+arg_8]
 * 00000001800CE8C7: mov     [rsp+28h+arg_8], rbx
 * 00000001800CE8CC: lea     r8d, [rbx+7]
 * 00000001800CE8D0: lea     ecx, [rbx+8]
 * 00000001800CE8D3: call    ZwManageHotPatch
 * 00000001800CE8D8: cmp     eax, 0C00000BBh
 * 00000001800CE8DD: jz      short loc_1800CE8F3
 * 00000001800CE8DF: cmp     eax, 0C0000002h
 * 00000001800CE8E4: jz      short loc_1800CE8F3
 * 00000001800CE8E6: mov     cs:LdrpIsHotPatchingEnabled, bl
 * 00000001800CE8EC: add     rsp, 20h
 * 00000001800CE8F0: pop     rbx
 * 00000001800CE8F1: retn
 * 00000001800CE8F3: xor     bl, bl
 * 00000001800CE8F5: jmp     short loc_1800CE8E6
 */
