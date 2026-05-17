/*
 * XREFs of LdrpApplyPatchImageCommon @ 0x180123A60
 * Callers:
 *     LdrpApplyPatchImage @ 0x18007115C (LdrpApplyPatchImage.c)
 * Callees:
 *     ZwManageHotPatch @ 0x180161270 (ZwManageHotPatch.c)
 */

/*
 * Hex-Rays decompilation failed for LdrpApplyPatchImageCommon @ 0x180123A60
 * Reason: Hex-Rays returned no pseudocode for 0x180123A60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180123A60: sub     rsp, 28h
 * 0000000180123A64: mov     [rsp+28h+arg_8], 0
 * 0000000180123A6C: mov     eax, 0C0000001h
 * 0000000180123A71: test    rdx, rdx
 * 0000000180123A74: jnz     short loc_180123A8B
 * 0000000180123A76: lea     r8d, [rdx+20h]
 * 0000000180123A7A: mov     rdx, rcx
 * 0000000180123A7D: lea     ecx, [r8-19h]
 * 0000000180123A81: lea     r9, [rsp+28h+arg_8]
 * 0000000180123A86: call    ZwManageHotPatch
 * 0000000180123A8B: add     rsp, 28h
 * 0000000180123A8F: retn
 */
