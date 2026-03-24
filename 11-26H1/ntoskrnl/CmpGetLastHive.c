/*
 * XREFs of CmpGetLastHive @ 0x1408B13C8
 * Callers:
 *     CmpDoFlushAll @ 0x1404A2354 (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmpReferenceHive @ 0x1408C8740 (CmpReferenceHive.c)
 */

/*
 * Hex-Rays decompilation failed for CmpGetLastHive @ 0x1408B13C8
 * Reason: Hex-Rays returned no pseudocode for 0x1408B13C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408B13C8: push    rbx
 * 00000001408B13CA: sub     rsp, 20h
 * 00000001408B13CE: xor     ebx, ebx
 * 00000001408B13D0: call    CmpLockHiveListShared
 * 00000001408B13D5: mov     r8, qword ptr cs:PspSiloMonitorLock.___u33+78h
 * 00000001408B13DC: lea     rax, PspSiloMonitorLock.___u33+70h
 * 00000001408B13E3: cmp     r8, rax
 * 00000001408B13E6: jz      short loc_1408B13FB
 * 00000001408B13E8: lea     rcx, [r8-648h]
 * 00000001408B13EF: call    CmpReferenceHive
 * 00000001408B13F4: test    al, al
 * 00000001408B13F6: jz      short loc_1408B140A
 * 00000001408B13F8: mov     rbx, rcx
 * 00000001408B13FB: call    CmpUnlockHiveList
 * 00000001408B1400: mov     rax, rbx
 * 00000001408B1403: add     rsp, 20h
 * 00000001408B1407: pop     rbx
 * 00000001408B1408: retn
 * 00000001408B140A: mov     r8, [r8+8]
 * 00000001408B140E: jmp     short loc_1408B13DC
 */
