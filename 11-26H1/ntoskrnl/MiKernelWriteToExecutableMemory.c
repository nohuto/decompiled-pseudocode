/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x1406FF57C
 * Callers:
 *     MiValidFault @ 0x1403A7338 (MiValidFault.c)
 * Callees:
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     NtWaitLowEventPair @ 0x14077D200 (NtWaitLowEventPair.c)
 *     PsForceCrashForInvalidAccess @ 0x1407FD140 (PsForceCrashForInvalidAccess.c)
 */

/*
 * Hex-Rays decompilation failed for MiKernelWriteToExecutableMemory @ 0x1406FF57C
 * Reason: Hex-Rays returned no pseudocode for 0x1406FF57C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406FF57C: mov     [rsp+arg_0], rbx
 * 00000001406FF581: mov     [rsp+arg_8], rbp
 * 00000001406FF586: mov     [rsp+arg_10], rsi
 * 00000001406FF58B: push    rdi
 * 00000001406FF58C: push    r12
 * 00000001406FF58E: push    r13
 * 00000001406FF590: push    r14
 * 00000001406FF592: push    r15
 * 00000001406FF594: sub     rsp, 20h
 * 00000001406FF598: mov     rdi, [rcx]
 * 00000001406FF59B: mov     r14, rcx
 * 00000001406FF59E: shr     rdi, 9
 * 00000001406FF5A2: mov     rcx, 7FFFFFFFF8h
 * 00000001406FF5AC: and     rdi, rcx
 * 00000001406FF5AF: mov     r15, r8
 * 00000001406FF5B2: mov     rbx, rdx
 * 00000001406FF5B5: mov     rcx, 0FFFFF68000000000h
 * 00000001406FF5BF: mov     r13, [r8+410h]
 * 00000001406FF5C6: lea     rsi, [r14+38h]
 * 00000001406FF5CA: add     rdi, rcx
 * 00000001406FF5CD: xor     r8d, r8d
 * 00000001406FF5D0: mov     dl, 11h
 * 00000001406FF5D2: mov     rcx, rsi
 * 00000001406FF5D5: mov     r12, [r13+638h]
 * 00000001406FF5DC: call    MiReleaseFaultState
 * 00000001406FF5E1: mov     rbp, rax
 * 00000001406FF5E4: call    NtWaitLowEventPair
 * 00000001406FF5E9: test    eax, eax
 * 00000001406FF5EB: jns     short loc_1406FF60A
 * 00000001406FF5ED: mov     rcx, r15; Process
 * 00000001406FF5F0: call    PsForceCrashForInvalidAccess
 * 00000001406FF5F5: mov     rdx, rbp
 * 00000001406FF5F8: mov     rcx, rsi
 * 00000001406FF5FB: mov     ebx, 0C0000723h
 * 00000001406FF600: call    MiRelockFaultState
 * 00000001406FF605: jmp     loc_1406FF6C5
 * 00000001406FF60A: mov     rdx, rbp
 * 00000001406FF60D: mov     rcx, rsi
 * 00000001406FF610: call    MiRelockFaultState
 * 00000001406FF615: mov     rax, [r13+638h]
 * 00000001406FF61C: cmp     r12, rax
 * 00000001406FF61F: jz      short loc_1406FF62B
 * 00000001406FF621: mov     ebx, 0C0000434h
 * 00000001406FF626: jmp     loc_1406FF6C5
 * 00000001406FF62B: mov     sil, 1
 * 00000001406FF62E: test    [r14+45h], sil
 * 00000001406FF632: jz      short loc_1406FF640
 * 00000001406FF634: mov     rcx, rdi
 * 00000001406FF637: call    MmIsAddressValidEx
 * 00000001406FF63C: test    al, al
 * 00000001406FF63E: jz      short loc_1406FF621
 * 00000001406FF640: mov     rdx, [rdi]
 * 00000001406FF643: mov     rax, 0FFFFF6FB7DBED000h
 * 00000001406FF64D: mov     rax, rax
 * 00000001406FF650: cmp     rdi, rax
 * 00000001406FF653: jb      short loc_1406FF6B2
 * 00000001406FF655: mov     rax, 0FFFFF6FB7DBED7F8h
 * 00000001406FF65F: mov     rax, rax
 * 00000001406FF662: cmp     rdi, rax
 * 00000001406FF665: ja      short loc_1406FF6B2
 * 00000001406FF667: mov     r8, rdx
 * 00000001406FF66A: test    sil, dl
 * 00000001406FF66D: jz      short loc_1406FF6B2
 * 00000001406FF66F: test    dl, 20h
 * 00000001406FF672: jz      short loc_1406FF679
 * 00000001406FF674: test    dl, 42h
 * 00000001406FF677: jnz     short loc_1406FF6B2
 * 00000001406FF679: call    MiPteHasShadow
 * 00000001406FF67E: test    rax, rax
 * 00000001406FF681: jz      short loc_1406FF6B2
 * 00000001406FF683: mov     rax, [rax+508h]
 * 00000001406FF68A: test    rax, rax
 * 00000001406FF68D: jz      short loc_1406FF6B2
 * 00000001406FF68F: shr     rdi, 3
 * 00000001406FF693: and     edi, 1FFh
 * 00000001406FF699: mov     rax, [rax+rdi*8]
 * 00000001406FF69D: test    al, 20h
 * 00000001406FF69F: jz      short loc_1406FF6A5
 * 00000001406FF6A1: or      r8, 20h
 * 00000001406FF6A5: mov     rdx, r8
 * 00000001406FF6A8: or      rdx, 42h
 * 00000001406FF6AC: test    al, 42h
 * 00000001406FF6AE: cmovz   rdx, r8
 * 00000001406FF6B2: xor     rdx, rbx
 * 00000001406FF6B5: mov     ebx, 0C0000434h
 * 00000001406FF6BA: and     rdx, 0FFFFFFFFFFFFFFDFh
 * 00000001406FF6BE: neg     rdx
 * 00000001406FF6C1: sbb     ecx, ecx
 * 00000001406FF6C3: and     ebx, ecx
 * 00000001406FF6C5: mov     rbp, [rsp+48h+arg_8]
 * 00000001406FF6CA: mov     eax, ebx
 * 00000001406FF6CC: mov     rbx, [rsp+48h+arg_0]
 * 00000001406FF6D1: mov     rsi, [rsp+48h+arg_10]
 * 00000001406FF6D6: add     rsp, 20h
 * 00000001406FF6DA: pop     r15
 * 00000001406FF6DC: pop     r14
 * 00000001406FF6DE: pop     r13
 * 00000001406FF6E0: pop     r12
 * 00000001406FF6E2: pop     rdi
 * 00000001406FF6E3: retn
 */
