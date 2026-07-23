/*
 * XREFs of LdrpApplyPatchImageCommon @ 0x1801237CC
 * Callers:
 *     LdrpApplyPatchImage @ 0x1800915AC (LdrpApplyPatchImage.c)
 * Callees:
 *     ZwManageHotPatch @ 0x180161170 (ZwManageHotPatch.c)
 */

/*
 * Hex-Rays decompilation failed for LdrpApplyPatchImageCommon @ 0x1801237CC
 * Reason: Hex-Rays returned no pseudocode for 0x1801237CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001801237CC: sub     rsp, 28h
 * 00000001801237D0: mov     [rsp+28h+arg_8], 0
 * 00000001801237D8: mov     eax, 0C0000001h
 * 00000001801237DD: test    rdx, rdx
 * 00000001801237E0: jnz     short loc_1801237F7
 * 00000001801237E2: lea     r8d, [rdx+20h]
 * 00000001801237E6: mov     rdx, rcx
 * 00000001801237E9: lea     ecx, [r8-19h]
 * 00000001801237ED: lea     r9, [rsp+28h+arg_8]
 * 00000001801237F2: call    ZwManageHotPatch
 * 00000001801237F7: add     rsp, 28h
 * 00000001801237FB: retn
 */
