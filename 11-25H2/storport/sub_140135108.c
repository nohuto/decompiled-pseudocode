/*
 * XREFs of sub_140135108 @ 0x140135108
 * Callers:
 *     sub_14008D024 @ 0x14008D024 (sub_14008D024.c)
 * Callees:
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140136D10 @ 0x140136D10 (sub_140136D10.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140135108 @ 0x140135108
 * Reason: Hex-Rays returned no pseudocode for 0x140135108
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140135108: mov     rax, rsp
 * 000000014013510B: mov     [rax+8], rbx
 * 000000014013510F: mov     [rax+10h], rbp
 * 0000000140135113: mov     [rax+18h], rsi
 * 0000000140135117: mov     [rax+20h], rdi
 * 000000014013511B: push    r12
 * 000000014013511D: push    r14
 * 000000014013511F: push    r15
 * 0000000140135121: sub     rsp, 20h
 * 0000000140135125: xor     ebx, ebx
 * 0000000140135127: mov     r15, r9
 * 000000014013512A: mov     r14d, r8d
 * 000000014013512D: mov     rdi, rdx
 * 0000000140135130: mov     rbp, rcx
 * 0000000140135133: test    r8d, r8d
 * 0000000140135136: jz      short loc_1401351A4
 * 0000000140135138: test    r9, r9
 * 000000014013513B: jz      short loc_1401351A4
 * 000000014013513D: call    sub_140136180
 * 0000000140135142: mov     r10d, eax
 * 0000000140135145: test    eax, eax
 * 0000000140135147: jnz     short loc_1401351AA
 * 0000000140135149: lea     r12d, [rbx+1]
 * 000000014013514D: lock cmpxchg [rdx+1Ch], r12d
 * 0000000140135153: cmp     eax, r12d
 * 0000000140135156: jnz     short loc_140135160
 * 0000000140135158: mov     r10d, 80000011h
 * 000000014013515E: jmp     short loc_1401351AA
 * 0000000140135160: mov     esi, ebx
 * 0000000140135162: cmp     esi, r14d
 * 0000000140135165: jnb     short loc_14013519F
 * 0000000140135167: mov     eax, esi
 * 0000000140135169: mov     r8d, esi
 * 000000014013516C: mov     rdx, rdi
 * 000000014013516F: mov     rcx, rbp
 * 0000000140135172: lea     r9, [rax+rax*4]
 * 0000000140135176: shl     r9, 4
 * 000000014013517A: add     r9, r15
 * 000000014013517D: call    sub_140136D10
 * 0000000140135182: mov     r10d, eax
 * 0000000140135185: test    eax, eax
 * 0000000140135187: js      short loc_14013518E
 * 0000000140135189: add     esi, r12d
 * 000000014013518C: jmp     short loc_140135162
 * 000000014013518E: mov     r8d, eax
 * 0000000140135191: mov     rdx, rdi
 * 0000000140135194: mov     rcx, rbp
 * 0000000140135197: call    sub_1401361CC
 * 000000014013519C: mov     r10d, eax
 * 000000014013519F: xchg    ebx, [rdi+1Ch]
 * 00000001401351A2: jmp     short loc_1401351AA
 * 00000001401351A4: mov     r10d, 0C000000Dh
 * 00000001401351AA: mov     rbx, [rsp+38h+arg_0]
 * 00000001401351AF: mov     eax, r10d
 * 00000001401351B2: mov     rbp, [rsp+38h+arg_8]
 * 00000001401351B7: mov     rsi, [rsp+38h+arg_10]
 * 00000001401351BC: mov     rdi, [rsp+38h+arg_18]
 * 00000001401351C1: add     rsp, 20h
 * 00000001401351C5: pop     r15
 * 00000001401351C7: pop     r14
 * 00000001401351C9: pop     r12
 * 00000001401351CB: retn
 */
