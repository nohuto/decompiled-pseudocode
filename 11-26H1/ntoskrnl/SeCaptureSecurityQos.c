/*
 * XREFs of SeCaptureSecurityQos @ 0x1408EBC60
 * Callers:
 *     NtDuplicateToken @ 0x1408EB8C0 (NtDuplicateToken.c)
 *     NtCreateTokenEx @ 0x140A44080 (NtCreateTokenEx.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     SeValidateSecurityQos @ 0x1408EBD40 (SeValidateSecurityQos.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

/*
 * Hex-Rays decompilation failed for SeCaptureSecurityQos @ 0x1408EBC60
 * Reason: Hex-Rays returned no pseudocode for 0x1408EBC60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408EBC60: mov     [rsp+arg_0], rbx
 * 00000001408EBC65: mov     [rsp+arg_10], rsi
 * 00000001408EBC6A: mov     [rsp+arg_8], dl
 * 00000001408EBC6E: push    rdi
 * 00000001408EBC6F: push    r14
 * 00000001408EBC71: push    r15
 * 00000001408EBC73: sub     rsp, 30h
 * 00000001408EBC77: mov     r14, r9
 * 00000001408EBC7A: mov     r15, r8
 * 00000001408EBC7D: mov     sil, dl
 * 00000001408EBC80: xor     ebx, ebx
 * 00000001408EBC82: mov     [r8], bl
 * 00000001408EBC85: test    rcx, rcx
 * 00000001408EBC88: jz      short loc_1408EBD04
 * 00000001408EBC8A: test    dl, dl
 * 00000001408EBC8C: jz      short loc_1408EBC9E
 * 00000001408EBC8E: test    cl, 3
 * 00000001408EBC91: jz      short loc_1408EBC99
 * 00000001408EBC93: call    ExRaiseDatatypeMisalignment
 * 00000001408EBC99: test    sil, sil
 * 00000001408EBC9C: jnz     short loc_1408EBCDE
 * 00000001408EBC9E: mov     rdi, [rcx+28h]
 * 00000001408EBCA2: test    rdi, rdi
 * 00000001408EBCA5: jz      short loc_1408EBD04
 * 00000001408EBCA7: test    sil, sil
 * 00000001408EBCAA: jz      short loc_1408EBCB7
 * 00000001408EBCAC: test    dil, 3
 * 00000001408EBCB0: jnz     short loc_1408EBC93
 * 00000001408EBCB2: test    sil, sil
 * 00000001408EBCB5: jnz     short loc_1408EBCEC
 * 00000001408EBCB7: mov     eax, [rdi]
 * 00000001408EBCB9: cmp     eax, 0Ch
 * 00000001408EBCBC: jnz     short loc_1408EBCFD
 * 00000001408EBCBE: mov     byte ptr [r15], 1
 * 00000001408EBCC2: mov     r8d, eax; Size
 * 00000001408EBCC5: mov     rdx, rdi; Src
 * 00000001408EBCC8: mov     rcx, r14; void *
 * 00000001408EBCCB: test    sil, sil
 * 00000001408EBCCE: jz      short loc_1408EBCF6
 * 00000001408EBCD0: call    RtlCopyFromUser
 * 00000001408EBCD5: mov     dword ptr [r14], 0Ch
 * 00000001408EBCDC: jmp     short loc_1408EBD04
 * 00000001408EBCDE: add     rcx, 28h ; '('
 * 00000001408EBCE2: call    RtlReadULong64FromUser
 * 00000001408EBCE7: mov     rdi, rax
 * 00000001408EBCEA: jmp     short loc_1408EBCA2
 * 00000001408EBCEC: mov     rcx, rdi
 * 00000001408EBCEF: call    RtlReadULongFromUser
 * 00000001408EBCF4: jmp     short loc_1408EBCB9
 * 00000001408EBCF6: call    RtlCopyVolatileMemory
 * 00000001408EBCFB: jmp     short loc_1408EBCD5
 * 00000001408EBCFD: mov     eax, 0C000000Dh
 * 00000001408EBD02: jmp     short loc_1408EBD1C
 * 00000001408EBD04: jmp     short loc_1408EBD08
 * 00000001408EBD06: jmp     short loc_1408EBD1C
 * 00000001408EBD08: cmp     [r15], bl
 * 00000001408EBD0B: jz      short loc_1408EBD31
 * 00000001408EBD0D: mov     rcx, r14
 * 00000001408EBD10: call    SeValidateSecurityQos
 * 00000001408EBD15: test    eax, eax
 * 00000001408EBD17: cmovs   ebx, eax
 * 00000001408EBD1A: mov     eax, ebx
 * 00000001408EBD1C: mov     rbx, [rsp+48h+arg_0]
 * 00000001408EBD21: mov     rsi, [rsp+48h+arg_10]
 * 00000001408EBD26: add     rsp, 30h
 * 00000001408EBD2A: pop     r15
 * 00000001408EBD2C: pop     r14
 * 00000001408EBD2E: pop     rdi
 * 00000001408EBD2F: retn
 * 00000001408EBD31: xor     eax, eax
 * 00000001408EBD33: jmp     short loc_1408EBD1C
 * 0000000140B942F7: push    rbp
 * 0000000140B942F9: sub     rsp, 20h
 * 0000000140B942FD: mov     rbp, rdx
 * 0000000140B94300: xor     eax, eax
 * 0000000140B94302: cmp     [rbp+58h], al
 * 0000000140B94305: setnz   al
 * 0000000140B94308: mov     [rbp+20h], eax
 * 0000000140B9430B: mov     eax, [rbp+20h]
 * 0000000140B9430E: add     rsp, 20h
 * 0000000140B94312: pop     rbp
 * 0000000140B94313: retn
 */
