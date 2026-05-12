/*
 * XREFs of TcglibGetLockingObjects @ 0x1401310E0
 * Callers:
 *     RaidGetTcgLockingObjects @ 0x140094CAC (RaidGetTcgLockingObjects.c)
 * Callees:
 *     TcglibpCheckContext @ 0x14013215C (TcglibpCheckContext.c)
 *     TcglibpCheckError @ 0x1401321A4 (TcglibpCheckError.c)
 *     TcglibpGetLockingObjectInfo @ 0x140132D48 (TcglibpGetLockingObjectInfo.c)
 */

/*
 * Hex-Rays decompilation failed for TcglibGetLockingObjects @ 0x1401310E0
 * Reason: Hex-Rays returned no pseudocode for 0x1401310E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401310E0: mov     rax, rsp
 * 00000001401310E3: mov     [rax+8], rbx
 * 00000001401310E7: mov     [rax+10h], rbp
 * 00000001401310EB: mov     [rax+18h], rsi
 * 00000001401310EF: mov     [rax+20h], rdi
 * 00000001401310F3: push    r12
 * 00000001401310F5: push    r14
 * 00000001401310F7: push    r15
 * 00000001401310F9: sub     rsp, 20h
 * 00000001401310FD: xor     ebx, ebx
 * 00000001401310FF: mov     r15, r9
 * 0000000140131102: mov     r14d, r8d
 * 0000000140131105: mov     rdi, rdx
 * 0000000140131108: mov     rbp, rcx
 * 000000014013110B: test    r8d, r8d
 * 000000014013110E: jz      short loc_14013117C
 * 0000000140131110: test    r9, r9
 * 0000000140131113: jz      short loc_14013117C
 * 0000000140131115: call    TcglibpCheckContext
 * 000000014013111A: mov     r9d, eax
 * 000000014013111D: test    eax, eax
 * 000000014013111F: jnz     short loc_140131182
 * 0000000140131121: lea     r12d, [rbx+1]
 * 0000000140131125: lock cmpxchg [rdx+1Ch], r12d
 * 000000014013112B: cmp     eax, r12d
 * 000000014013112E: jnz     short loc_140131138
 * 0000000140131130: mov     r9d, 80000011h
 * 0000000140131136: jmp     short loc_140131182
 * 0000000140131138: mov     esi, ebx
 * 000000014013113A: cmp     esi, r14d
 * 000000014013113D: jnb     short loc_140131177
 * 000000014013113F: mov     eax, esi
 * 0000000140131141: mov     r8d, esi
 * 0000000140131144: mov     rdx, rdi
 * 0000000140131147: mov     rcx, rbp
 * 000000014013114A: lea     r9, [rax+rax*4]
 * 000000014013114E: shl     r9, 4
 * 0000000140131152: add     r9, r15
 * 0000000140131155: call    TcglibpGetLockingObjectInfo
 * 000000014013115A: mov     r9d, eax
 * 000000014013115D: test    eax, eax
 * 000000014013115F: js      short loc_140131166
 * 0000000140131161: add     esi, r12d
 * 0000000140131164: jmp     short loc_14013113A
 * 0000000140131166: mov     r8d, eax
 * 0000000140131169: mov     rdx, rdi
 * 000000014013116C: mov     rcx, rbp
 * 000000014013116F: call    TcglibpCheckError
 * 0000000140131174: mov     r9d, eax
 * 0000000140131177: xchg    ebx, [rdi+1Ch]
 * 000000014013117A: jmp     short loc_140131182
 * 000000014013117C: mov     r9d, 0C000000Dh
 * 0000000140131182: mov     rbx, [rsp+38h+arg_0]
 * 0000000140131187: mov     eax, r9d
 * 000000014013118A: mov     rbp, [rsp+38h+arg_8]
 * 000000014013118F: mov     rsi, [rsp+38h+arg_10]
 * 0000000140131194: mov     rdi, [rsp+38h+arg_18]
 * 0000000140131199: add     rsp, 20h
 * 000000014013119D: pop     r15
 * 000000014013119F: pop     r14
 * 00000001401311A1: pop     r12
 * 00000001401311A3: retn
 */
