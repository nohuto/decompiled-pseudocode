/*
 * XREFs of CmpDoLocalizeNextHive @ 0x1408B76E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x1408B7688 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

/*
 * Hex-Rays decompilation failed for CmpDoLocalizeNextHive @ 0x1408B76E0
 * Reason: Hex-Rays returned no pseudocode for 0x1408B76E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408B76E0: mov     [rsp+arg_0], rbx
 * 00000001408B76E5: mov     [rsp+arg_8], rsi
 * 00000001408B76EA: push    rdi
 * 00000001408B76EB: sub     rsp, 20h
 * 00000001408B76EF: mov     eax, cs:dword_140E022E4
 * 00000001408B76F5: xor     esi, esi
 * 00000001408B76F7: imul    r8, rax, 989680h
 * 00000001408B76FE: mov     [rdx], r8
 * 00000001408B7701: mov     [rcx], sil
 * 00000001408B7704: call    CmpAcquireShutdownRundown
 * 00000001408B7709: test    al, al
 * 00000001408B770B: jz      loc_1408B7799
 * 00000001408B7711: xor     ecx, ecx
 * 00000001408B7713: call    CmpGetNextActiveHive
 * 00000001408B7718: mov     rdi, rax
 * 00000001408B771B: test    rax, rax
 * 00000001408B771E: jz      short loc_1408B7780
 * 00000001408B7720: call    CmpLockRegistry
 * 00000001408B7725: mov     ecx, [rdi+100h]
 * 00000001408B772B: test    cl, 4
 * 00000001408B772E: jnz     short loc_1408B773A
 * 00000001408B7730: call    CmpUnlockRegistry
 * 00000001408B7735: mov     rcx, rdi
 * 00000001408B7738: jmp     short loc_1408B7713
 * 00000001408B773A: mov     rcx, rdi
 * 00000001408B773D: call    HvLockHiveFlusherShared
 * 00000001408B7742: mov     rcx, rdi
 * 00000001408B7745: call    HvLockHiveWriter
 * 00000001408B774A: lea     rcx, [rdi+0E0h]
 * 00000001408B7751: call    HvpViewMapConvertLockedPagesToCOWByPolicy
 * 00000001408B7756: mov     rcx, rdi
 * 00000001408B7759: mov     ebx, eax
 * 00000001408B775B: call    HvUnlockHiveWriter
 * 00000001408B7760: mov     rcx, rdi
 * 00000001408B7763: call    HvUnlockHiveFlusherShared
 * 00000001408B7768: test    ebx, ebx
 * 00000001408B776A: jns     short loc_1408B7730
 * 00000001408B776C: call    CmpUnlockRegistry
 * 00000001408B7771: lea     rcx, [rdi+668h]; RunRef
 * 00000001408B7778: call    ExReleaseRundownProtection_0
 * 00000001408B777D: mov     sil, 1
 * 00000001408B7780: call    CmpReleaseShutdownRundown
 * 00000001408B7785: mov     rbx, [rsp+28h+arg_0]
 * 00000001408B778A: mov     al, sil
 * 00000001408B778D: mov     rsi, [rsp+28h+arg_8]
 * 00000001408B7792: add     rsp, 20h
 * 00000001408B7796: pop     rdi
 * 00000001408B7797: retn
 * 00000001408B7799: mov     sil, 1
 * 00000001408B779C: jmp     short loc_1408B7785
 */
