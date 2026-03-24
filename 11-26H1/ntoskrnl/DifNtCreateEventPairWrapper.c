/*
 * XREFs of DifNtCreateEventPairWrapper @ 0x140670970
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
 * Hex-Rays decompilation failed for DifNtCreateEventPairWrapper @ 0x140670970
 * Reason: Hex-Rays returned no pseudocode for 0x140670970
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140670970: mov     [rsp-28h+arg_0], rbx
 * 0000000140670975: mov     [rsp-28h+arg_8], rsi
 * 000000014067097A: mov     [rsp-28h+arg_10], rdi
 * 000000014067097F: push    rbp
 * 0000000140670980: push    r12
 * 0000000140670982: push    r13
 * 0000000140670984: push    r14
 * 0000000140670986: push    r15
 * 0000000140670988: mov     rbp, rsp
 * 000000014067098B: sub     rsp, 50h
 * 000000014067098F: xorps   xmm0, xmm0
 * 0000000140670992: xor     eax, eax
 * 0000000140670994: mov     r13, rcx
 * 0000000140670997: mov     [rbp+var_10], rax
 * 000000014067099B: mov     ecx, 2ACh
 * 00000001406709A0: mov     r15, r8
 * 00000001406709A3: movups  [rbp+var_30], xmm0
 * 00000001406709A7: mov     r12d, edx
 * 00000001406709AA: movups  [rbp+var_20], xmm0
 * 00000001406709AE: call    DifGetAPIThunkContextById
 * 00000001406709B3: mov     rsi, rax
 * 00000001406709B6: test    rax, rax
 * 00000001406709B9: jz      loc_140670A4C
 * 00000001406709BF: mov     eax, [rax+0Ch]
 * 00000001406709C2: test    al, 18h
 * 00000001406709C4: jz      short loc_1406709D0
 * 00000001406709C6: mov     rcx, [rbp+28h]
 * 00000001406709CA: mov     qword ptr [rbp+var_30], rcx
 * 00000001406709CE: jmp     short loc_1406709DD
 * 00000001406709D0: test    al, 4
 * 00000001406709D2: jz      short loc_1406709DD
 * 00000001406709D4: call    DifGetReturnAddressForWrappers
 * 00000001406709D9: mov     qword ptr [rbp+var_30], rax
 * 00000001406709DD: xor     r14b, r14b
 * 00000001406709E0: mov     qword ptr [rbp+var_20+8], r13
 * 00000001406709E4: cmp     cs:VfDifRunningWithoutReboot, r14b
 * 00000001406709EB: mov     dword ptr [rbp+var_20], r12d
 * 00000001406709EF: mov     qword ptr [rbp+var_30+8], r15
 * 00000001406709F3: jnz     short loc_140670A01
 * 00000001406709F5: test    cs:VfOptionFlags, 800h
 * 00000001406709FF: jz      short loc_140670A14
 * 0000000140670A01: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140670A08: call    ExAcquireRundownProtection_0
 * 0000000140670A0D: mov     r14b, al
 * 0000000140670A10: test    al, al
 * 0000000140670A12: jz      short loc_140670A4C
 * 0000000140670A14: lea     rdi, [rsi+20h]
 * 0000000140670A18: mov     rbx, [rdi]
 * 0000000140670A1B: jmp     short loc_140670A36
 * 0000000140670A1D: lea     rax, [rbx-10h]
 * 0000000140670A21: test    rax, rax
 * 0000000140670A24: jz      short loc_140670A33
 * 0000000140670A26: mov     rax, [rax+8]
 * 0000000140670A2A: lea     rcx, [rbp+var_30]
 * 0000000140670A2E: call    _guard_dispatch_icall_no_overrides
 * 0000000140670A33: mov     rbx, [rbx]
 * 0000000140670A36: cmp     rbx, rdi
 * 0000000140670A39: jnz     short loc_140670A1D
 * 0000000140670A3B: test    r14b, r14b
 * 0000000140670A3E: jz      short loc_140670A4C
 * 0000000140670A40: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140670A47: call    ExReleaseRundownProtection_0
 * 0000000140670A4C: mov     r8, r15
 * 0000000140670A4F: mov     edx, r12d
 * 0000000140670A52: mov     rcx, r13
 * 0000000140670A55: call    NtWaitLowEventPair
 * 0000000140670A5A: mov     dword ptr [rbp+var_10], eax
 * 0000000140670A5D: test    rsi, rsi
 * 0000000140670A60: jz      short loc_140670AC5
 * 0000000140670A62: xor     dil, dil
 * 0000000140670A65: cmp     cs:VfDifRunningWithoutReboot, dil
 * 0000000140670A6C: jnz     short loc_140670A7A
 * 0000000140670A6E: test    cs:VfOptionFlags, 800h
 * 0000000140670A78: jz      short loc_140670A8D
 * 0000000140670A7A: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140670A81: call    ExAcquireRundownProtection_0
 * 0000000140670A86: mov     dil, al
 * 0000000140670A89: test    al, al
 * 0000000140670A8B: jz      short loc_140670AC5
 * 0000000140670A8D: add     rsi, 30h ; '0'
 * 0000000140670A91: mov     rbx, [rsi]
 * 0000000140670A94: jmp     short loc_140670AAF
 * 0000000140670A96: lea     rax, [rbx-10h]
 * 0000000140670A9A: test    rax, rax
 * 0000000140670A9D: jz      short loc_140670AAC
 * 0000000140670A9F: mov     rax, [rax+8]
 * 0000000140670AA3: lea     rcx, [rbp+var_30]
 * 0000000140670AA7: call    _guard_dispatch_icall_no_overrides
 * 0000000140670AAC: mov     rbx, [rbx]
 * 0000000140670AAF: cmp     rbx, rsi
 * 0000000140670AB2: jnz     short loc_140670A96
 * 0000000140670AB4: test    dil, dil
 * 0000000140670AB7: jz      short loc_140670AC5
 * 0000000140670AB9: lea     rcx, DifRebootlessRundown; RunRef
 * 0000000140670AC0: call    ExReleaseRundownProtection_0
 * 0000000140670AC5: mov     eax, dword ptr [rbp+var_10]
 * 0000000140670AC8: lea     r11, [rsp+50h+var_s0]
 * 0000000140670ACD: mov     rbx, [r11+30h]
 * 0000000140670AD1: mov     rsi, [r11+38h]
 * 0000000140670AD5: mov     rdi, [r11+40h]
 * 0000000140670AD9: mov     rsp, r11
 * 0000000140670ADC: pop     r15
 * 0000000140670ADE: pop     r14
 * 0000000140670AE0: pop     r13
 * 0000000140670AE2: pop     r12
 * 0000000140670AE4: pop     rbp
 * 0000000140670AE5: retn
 */
