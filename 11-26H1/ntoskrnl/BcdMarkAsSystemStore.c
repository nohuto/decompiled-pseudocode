/*
 * XREFs of BcdMarkAsSystemStore @ 0x140897440
 * Callers:
 *     BcdSetSystemStore @ 0x1408974B4 (BcdSetSystemStore.c)
 * Callees:
 *     BiReleaseBcdSyncMutant @ 0x1409A4F38 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A513C (BiAcquireBcdSyncMutant.c)
 *     BiSetRegistryValue @ 0x1409A57C0 (BiSetRegistryValue.c)
 */

/*
 * Hex-Rays decompilation failed for BcdMarkAsSystemStore @ 0x140897440
 * Reason: Hex-Rays returned no pseudocode for 0x140897440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140897440: mov     [rsp+arg_8], rbx
 * 0000000140897445: push    rdi
 * 0000000140897446: sub     rsp, 30h
 * 000000014089744A: mov     dil, cl
 * 000000014089744D: mov     rbx, rcx
 * 0000000140897450: and     dil, 1
 * 0000000140897454: mov     cl, dil
 * 0000000140897457: call    BiAcquireBcdSyncMutant
 * 000000014089745C: test    eax, eax
 * 000000014089745E: js      short loc_14089749F
 * 0000000140897460: mov     r9d, 4
 * 0000000140897466: mov     [rsp+38h+arg_0], 1
 * 000000014089746E: lea     rax, [rsp+38h+arg_0]
 * 0000000140897473: mov     [rsp+38h+var_10], r9d
 * 0000000140897478: lea     r8, aDescription_0; "Description"
 * 000000014089747F: mov     [rsp+38h+var_18], rax
 * 0000000140897484: lea     rdx, aSystem_8; "System"
 * 000000014089748B: mov     rcx, rbx
 * 000000014089748E: call    BiSetRegistryValue
 * 0000000140897493: mov     cl, dil
 * 0000000140897496: mov     ebx, eax
 * 0000000140897498: call    BiReleaseBcdSyncMutant
 * 000000014089749D: mov     eax, ebx
 * 000000014089749F: mov     rbx, [rsp+38h+arg_8]
 * 00000001408974A4: add     rsp, 30h
 * 00000001408974A8: pop     rdi
 * 00000001408974A9: retn
 */
