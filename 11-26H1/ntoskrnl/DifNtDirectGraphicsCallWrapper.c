/*
 * XREFs of DifNtDirectGraphicsCallWrapper @ 0x1406762F0
 * Callers:
 *     <none>
 * Callees:
 *     DifGetReturnAddressForWrappers @ 0x140260EA4 (DifGetReturnAddressForWrappers.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404C17A4 (DifGetAPIThunkContextById.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     NtWaitLowEventPair @ 0x14077D200 (NtWaitLowEventPair.c)
 */

/*
 * Hex-Rays decompilation failed for DifNtDirectGraphicsCallWrapper @ 0x1406762F0
 * Reason: Hex-Rays returned no pseudocode for 0x1406762F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406762F0: mov     rax, rsp
 * 00000001406762F3: mov     [rax+10h], rbx
 * 00000001406762F7: mov     [rax+18h], rsi
 * 00000001406762FB: mov     [rax+20h], rdi
 * 00000001406762FF: mov     [rax+8], ecx
 * 0000000140676302: push    rbp
 * 0000000140676303: push    r12
 * 0000000140676305: push    r13
 * 0000000140676307: push    r14
 * 0000000140676309: push    r15
 * 000000014067630B: mov     rbp, rsp
 * 000000014067630E: sub     rsp, 60h
 * 0000000140676312: xorps   xmm0, xmm0
 * 0000000140676315: mov     ecx, 2F0h
 * 000000014067631A: movups  [rbp+var_30], xmm0
 * 000000014067631E: mov     r15, r9
 * 0000000140676321: mov     r12d, r8d
 * 0000000140676324: movups  [rbp+var_20], xmm0
 * 0000000140676328: mov     r13, rdx
 * 000000014067632B: movups  [rbp+var_10], xmm0
 * 000000014067632F: call    DifGetAPIThunkContextById
 * 0000000140676334: mov     rsi, rax
 * 0000000140676337: test    rax, rax
 * 000000014067633A: jz      loc_1406763DB
 * 0000000140676340: mov     eax, [rax+0Ch]
 * 0000000140676343: test    al, 18h
 * 0000000140676345: jz      short loc_140676351
 * 0000000140676347: mov     rcx, [rbp+28h]
 * 000000014067634B: mov     qword ptr [rbp+var_30], rcx
 * 000000014067634F: jmp     short loc_14067635E
 * 0000000140676351: test    al, 4
 * 0000000140676353: jz      short loc_14067635E
 * 0000000140676355: call    DifGetReturnAddressForWrappers
 * 000000014067635A: mov     qword ptr [rbp+var_30], rax
 * 000000014067635E: mov     eax, [rbp+arg_0]
 * 0000000140676361: xor     r14b, r14b
 * 0000000140676364: cmp     cs:VfDifRunningWithoutReboot, r14b
 * 000000014067636B: mov     dword ptr [rbp+var_10+8], eax
 * 000000014067636E: mov     rax, [rbp+arg_20]
 * 0000000140676372: mov     qword ptr [rbp+var_30+8], rax
 * 0000000140676376: mov     qword ptr [rbp+var_10], r13
 * 000000014067637A: mov     dword ptr [rbp+var_20+8], r12d
 * 000000014067637E: mov     qword ptr [rbp+var_20], r15
 * 0000000140676382: jnz     short loc_140676390
 * 0000000140676384: test    cs:VfOptionFlags, 800h
 * 000000014067638E: jz      short loc_1406763A3
 * 0000000140676390: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140676397: call    ExAcquireRundownProtection_0
 * 000000014067639C: mov     r14b, al
 * 000000014067639F: test    al, al
 * 00000001406763A1: jz      short loc_1406763DB
 * 00000001406763A3: lea     rdi, [rsi+20h]
 * 00000001406763A7: mov     rbx, [rdi]
 * 00000001406763AA: jmp     short loc_1406763C5
 * 00000001406763AC: lea     rax, [rbx-10h]
 * 00000001406763B0: test    rax, rax
 * 00000001406763B3: jz      short loc_1406763C2
 * 00000001406763B5: mov     rax, [rax+8]
 * 00000001406763B9: lea     rcx, [rbp+var_30]
 * 00000001406763BD: call    _guard_dispatch_icall_no_overrides
 * 00000001406763C2: mov     rbx, [rbx]
 * 00000001406763C5: cmp     rbx, rdi
 * 00000001406763C8: jnz     short loc_1406763AC
 * 00000001406763CA: test    r14b, r14b
 * 00000001406763CD: jz      short loc_1406763DB
 * 00000001406763CF: lea     rcx, DifRebootlessRundown; RunRef
 * 00000001406763D6: call    ExReleaseRundownProtection_0
 * 00000001406763DB: mov     rax, [rbp+arg_20]
 * 00000001406763DF: mov     r9, r15
 * 00000001406763E2: mov     ecx, [rbp+arg_0]
 * 00000001406763E5: mov     r8d, r12d
 * 00000001406763E8: mov     rdx, r13
 * 00000001406763EB: mov     [rsp+60h+var_40], rax
 * 00000001406763F0: call    NtWaitLowEventPair
 * 00000001406763F5: mov     dword ptr [rbp+var_10+0Ch], eax
 * 00000001406763F8: test    rsi, rsi
 * 00000001406763FB: jz      short loc_140676460
 * 00000001406763FD: xor     dil, dil
 * 0000000140676400: cmp     cs:VfDifRunningWithoutReboot, dil
 * 0000000140676407: jnz     short loc_140676415
 * 0000000140676409: test    cs:VfOptionFlags, 800h
 * 0000000140676413: jz      short loc_140676428
 * 0000000140676415: lea     rcx, DifRebootlessRundown; RunRef
 * 000000014067641C: call    ExAcquireRundownProtection_0
 * 0000000140676421: mov     dil, al
 * 0000000140676424: test    al, al
 * 0000000140676426: jz      short loc_140676460
 * 0000000140676428: add     rsi, 30h ; '0'
 * 000000014067642C: mov     rbx, [rsi]
 * 000000014067642F: jmp     short loc_14067644A
 * 0000000140676431: lea     rax, [rbx-10h]
 * 0000000140676435: test    rax, rax
 * 0000000140676438: jz      short loc_140676447
 * 000000014067643A: mov     rax, [rax+8]
 * 000000014067643E: lea     rcx, [rbp+var_30]
 * 0000000140676442: call    _guard_dispatch_icall_no_overrides
 * 0000000140676447: mov     rbx, [rbx]
 * 000000014067644A: cmp     rbx, rsi
 * 000000014067644D: jnz     short loc_140676431
 * 000000014067644F: test    dil, dil
 * 0000000140676452: jz      short loc_140676460
 * 0000000140676454: lea     rcx, DifRebootlessRundown; RunRef
 * 000000014067645B: call    ExReleaseRundownProtection_0
 * 0000000140676460: mov     eax, dword ptr [rbp+var_10+0Ch]
 * 0000000140676463: lea     r11, [rsp+60h+var_s0]
 * 0000000140676468: mov     rbx, [r11+38h]
 * 000000014067646C: mov     rsi, [r11+40h]
 * 0000000140676470: mov     rdi, [r11+48h]
 * 0000000140676474: mov     rsp, r11
 * 0000000140676477: pop     r15
 * 0000000140676479: pop     r14
 * 000000014067647B: pop     r13
 * 000000014067647D: pop     r12
 * 000000014067647F: pop     rbp
 * 0000000140676480: retn
 */
