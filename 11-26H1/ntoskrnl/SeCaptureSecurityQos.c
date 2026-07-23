/*
 * XREFs of SeCaptureSecurityQos @ 0x1408F2220
 * Callers:
 *     NtDuplicateToken @ 0x1408F1E80 (NtDuplicateToken.c)
 *     NtCreateTokenEx @ 0x1409E2210 (NtCreateTokenEx.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     SeValidateSecurityQos @ 0x1408F2300 (SeValidateSecurityQos.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

/*
 * Hex-Rays decompilation failed for SeCaptureSecurityQos @ 0x1408F2220
 * Reason: Hex-Rays returned no pseudocode for 0x1408F2220
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408F2220: mov     [rsp+arg_0], rbx
 * 00000001408F2225: mov     [rsp+arg_10], rsi
 * 00000001408F222A: mov     [rsp+arg_8], dl
 * 00000001408F222E: push    rdi
 * 00000001408F222F: push    r14
 * 00000001408F2231: push    r15
 * 00000001408F2233: sub     rsp, 30h
 * 00000001408F2237: mov     r14, r9
 * 00000001408F223A: mov     r15, r8
 * 00000001408F223D: mov     sil, dl
 * 00000001408F2240: xor     ebx, ebx
 * 00000001408F2242: mov     [r8], bl
 * 00000001408F2245: test    rcx, rcx
 * 00000001408F2248: jz      short loc_1408F22C4
 * 00000001408F224A: test    dl, dl
 * 00000001408F224C: jz      short loc_1408F225E
 * 00000001408F224E: test    cl, 3
 * 00000001408F2251: jz      short loc_1408F2259
 * 00000001408F2253: call    ExRaiseDatatypeMisalignment
 * 00000001408F2259: test    sil, sil
 * 00000001408F225C: jnz     short loc_1408F229E
 * 00000001408F225E: mov     rdi, [rcx+28h]
 * 00000001408F2262: test    rdi, rdi
 * 00000001408F2265: jz      short loc_1408F22C4
 * 00000001408F2267: test    sil, sil
 * 00000001408F226A: jz      short loc_1408F2277
 * 00000001408F226C: test    dil, 3
 * 00000001408F2270: jnz     short loc_1408F2253
 * 00000001408F2272: test    sil, sil
 * 00000001408F2275: jnz     short loc_1408F22AC
 * 00000001408F2277: mov     eax, [rdi]
 * 00000001408F2279: cmp     eax, 0Ch
 * 00000001408F227C: jnz     short loc_1408F22BD
 * 00000001408F227E: mov     byte ptr [r15], 1
 * 00000001408F2282: mov     r8d, eax; Size
 * 00000001408F2285: mov     rdx, rdi; Src
 * 00000001408F2288: mov     rcx, r14; void *
 * 00000001408F228B: test    sil, sil
 * 00000001408F228E: jz      short loc_1408F22B6
 * 00000001408F2290: call    RtlCopyFromUser
 * 00000001408F2295: mov     dword ptr [r14], 0Ch
 * 00000001408F229C: jmp     short loc_1408F22C4
 * 00000001408F229E: add     rcx, 28h ; '('
 * 00000001408F22A2: call    RtlReadULong64FromUser
 * 00000001408F22A7: mov     rdi, rax
 * 00000001408F22AA: jmp     short loc_1408F2262
 * 00000001408F22AC: mov     rcx, rdi
 * 00000001408F22AF: call    RtlReadULongFromUser
 * 00000001408F22B4: jmp     short loc_1408F2279
 * 00000001408F22B6: call    RtlCopyVolatileMemory
 * 00000001408F22BB: jmp     short loc_1408F2295
 * 00000001408F22BD: mov     eax, 0C000000Dh
 * 00000001408F22C2: jmp     short loc_1408F22DC
 * 00000001408F22C4: jmp     short loc_1408F22C8
 * 00000001408F22C6: jmp     short loc_1408F22DC
 * 00000001408F22C8: cmp     [r15], bl
 * 00000001408F22CB: jz      short loc_1408F22F1
 * 00000001408F22CD: mov     rcx, r14
 * 00000001408F22D0: call    SeValidateSecurityQos
 * 00000001408F22D5: test    eax, eax
 * 00000001408F22D7: cmovs   ebx, eax
 * 00000001408F22DA: mov     eax, ebx
 * 00000001408F22DC: mov     rbx, [rsp+48h+arg_0]
 * 00000001408F22E1: mov     rsi, [rsp+48h+arg_10]
 * 00000001408F22E6: add     rsp, 30h
 * 00000001408F22EA: pop     r15
 * 00000001408F22EC: pop     r14
 * 00000001408F22EE: pop     rdi
 * 00000001408F22EF: retn
 * 00000001408F22F1: xor     eax, eax
 * 00000001408F22F3: jmp     short loc_1408F22DC
 * 0000000140B9D4E7: push    rbp
 * 0000000140B9D4E9: sub     rsp, 20h
 * 0000000140B9D4ED: mov     rbp, rdx
 * 0000000140B9D4F0: xor     eax, eax
 * 0000000140B9D4F2: cmp     [rbp+58h], al
 * 0000000140B9D4F5: setnz   al
 * 0000000140B9D4F8: mov     [rbp+20h], eax
 * 0000000140B9D4FB: mov     eax, [rbp+20h]
 * 0000000140B9D4FE: add     rsp, 20h
 * 0000000140B9D502: pop     rbp
 * 0000000140B9D503: retn
 */
