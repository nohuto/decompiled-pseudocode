/*
 * XREFs of NtListenPort @ 0x1407BFC20
 * Callers:
 *     DifNtListenPortWrapper @ 0x14067A170 (DifNtListenPortWrapper.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlReadUShortFromUser @ 0x14077F5CC (RtlReadUShortFromUser.c)
 *     NtReplyWaitReceivePort @ 0x1407BFF20 (NtReplyWaitReceivePort.c)
 */

/*
 * Hex-Rays decompilation failed for NtListenPort @ 0x1407BFC20
 * Reason: Hex-Rays returned no pseudocode for 0x1407BFC20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407BFC20: mov     [rsp+arg_0], rbx
 * 00000001407BFC25: mov     [rsp+arg_8], rsi
 * 00000001407BFC2A: push    rdi
 * 00000001407BFC2B: sub     rsp, 30h
 * 00000001407BFC2F: mov     rdi, rdx
 * 00000001407BFC32: mov     rsi, rcx
 * 00000001407BFC35: cmp     dword ptr cs:AlpcpMessageLogLock.___u25+8, 0
 * 00000001407BFC3C: jz      short loc_1407BFC5B
 * 00000001407BFC3E: mov     rax, gs:188h
 * 00000001407BFC47: dec     word ptr [rax+1E4h]
 * 00000001407BFC4E: nop
 * 00000001407BFC4F: call    KeLeaveCriticalRegion
 * 00000001407BFC54: mov     eax, 0C00000BBh
 * 00000001407BFC59: jmp     short loc_1407BFC8E
 * 00000001407BFC5B: mov     r9, rdi
 * 00000001407BFC5E: xor     r8d, r8d
 * 00000001407BFC61: xor     edx, edx
 * 00000001407BFC63: mov     rcx, rsi
 * 00000001407BFC66: call    NtReplyWaitReceivePort
 * 00000001407BFC6B: mov     ebx, eax
 * 00000001407BFC6D: test    eax, eax
 * 00000001407BFC6F: jnz     short loc_1407BFC88
 * 00000001407BFC71: lea     rcx, [rdi+4]
 * 00000001407BFC75: call    RtlReadUShortFromUser
 * 00000001407BFC7A: mov     ecx, 7FFFh
 * 00000001407BFC7F: and     ax, cx
 * 00000001407BFC82: cmp     ax, 0Ah
 * 00000001407BFC86: jnz     short loc_1407BFC5B
 * 00000001407BFC88: jmp     short loc_1407BFC8C
 * 00000001407BFC8A: mov     ebx, eax
 * 00000001407BFC8C: mov     eax, ebx
 * 00000001407BFC8E: mov     rbx, [rsp+38h+arg_0]
 * 00000001407BFC93: mov     rsi, [rsp+38h+arg_8]
 * 00000001407BFC98: add     rsp, 30h
 * 00000001407BFC9C: pop     rdi
 * 00000001407BFC9D: retn
 * 0000000140B9CBCA: push    rbp
 * 0000000140B9CBCC: sub     rsp, 20h
 * 0000000140B9CBD0: mov     rbp, rdx
 * 0000000140B9CBD3: mov     dword ptr [rbp+20h], 1
 * 0000000140B9CBDA: mov     eax, [rbp+20h]
 * 0000000140B9CBDD: add     rsp, 20h
 * 0000000140B9CBE1: pop     rbp
 * 0000000140B9CBE2: retn
 */
