/*
 * XREFs of BcdMarkAsSystemStore @ 0x140891044
 * Callers:
 *     BcdSetSystemStore @ 0x1408910B8 (BcdSetSystemStore.c)
 * Callees:
 *     BiReleaseBcdSyncMutant @ 0x1409D3F58 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409D415C (BiAcquireBcdSyncMutant.c)
 *     BiSetRegistryValue @ 0x1409D47E0 (BiSetRegistryValue.c)
 */

/*
 * Hex-Rays decompilation failed for BcdMarkAsSystemStore @ 0x140891044
 * Reason: Hex-Rays returned no pseudocode for 0x140891044
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140891044: mov     [rsp+arg_8], rbx
 * 0000000140891049: push    rdi
 * 000000014089104A: sub     rsp, 30h
 * 000000014089104E: mov     dil, cl
 * 0000000140891051: mov     rbx, rcx
 * 0000000140891054: and     dil, 1
 * 0000000140891058: mov     cl, dil
 * 000000014089105B: call    BiAcquireBcdSyncMutant
 * 0000000140891060: test    eax, eax
 * 0000000140891062: js      short loc_1408910A3
 * 0000000140891064: mov     r9d, 4
 * 000000014089106A: mov     [rsp+38h+arg_0], 1
 * 0000000140891072: lea     rax, [rsp+38h+arg_0]
 * 0000000140891077: mov     [rsp+38h+var_10], r9d
 * 000000014089107C: lea     r8, aDescription_0; "Description"
 * 0000000140891083: mov     [rsp+38h+var_18], rax
 * 0000000140891088: lea     rdx, aSystem_8; "System"
 * 000000014089108F: mov     rcx, rbx
 * 0000000140891092: call    BiSetRegistryValue
 * 0000000140891097: mov     cl, dil
 * 000000014089109A: mov     ebx, eax
 * 000000014089109C: call    BiReleaseBcdSyncMutant
 * 00000001408910A1: mov     eax, ebx
 * 00000001408910A3: mov     rbx, [rsp+38h+arg_8]
 * 00000001408910A8: add     rsp, 30h
 * 00000001408910AC: pop     rdi
 * 00000001408910AD: retn
 */
