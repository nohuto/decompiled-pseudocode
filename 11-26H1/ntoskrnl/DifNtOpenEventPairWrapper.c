/*
 * XREFs of DifNtOpenEventPairWrapper @ 0x14067CEA0
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
 * Hex-Rays decompilation failed for DifNtOpenEventPairWrapper @ 0x14067CEA0
 * Reason: Hex-Rays returned no pseudocode for 0x14067CEA0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014067CEA0: mov     [rsp-28h+arg_0], rbx
 * 000000014067CEA5: mov     [rsp-28h+arg_8], rsi
 * 000000014067CEAA: mov     [rsp-28h+arg_10], rdi
 * 000000014067CEAF: push    rbp
 * 000000014067CEB0: push    r12
 * 000000014067CEB2: push    r13
 * 000000014067CEB4: push    r14
 * 000000014067CEB6: push    r15
 * 000000014067CEB8: mov     rbp, rsp
 * 000000014067CEBB: sub     rsp, 50h
 * 000000014067CEBF: xorps   xmm0, xmm0
 * 000000014067CEC2: xor     eax, eax
 * 000000014067CEC4: mov     r13, rcx
 * 000000014067CEC7: mov     [rbp+var_10], rax
 * 000000014067CECB: mov     ecx, 2ADh
 * 000000014067CED0: mov     r15, r8
 * 000000014067CED3: movups  [rbp+var_30], xmm0
 * 000000014067CED7: mov     r12d, edx
 * 000000014067CEDA: movups  [rbp+var_20], xmm0
 * 000000014067CEDE: call    DifGetAPIThunkContextById
 * 000000014067CEE3: mov     rsi, rax
 * 000000014067CEE6: test    rax, rax
 * 000000014067CEE9: jz      loc_14067CF7C
 * 000000014067CEEF: mov     eax, [rax+0Ch]
 * 000000014067CEF2: test    al, 18h
 * 000000014067CEF4: jz      short loc_14067CF00
 * 000000014067CEF6: mov     rcx, [rbp+28h]
 * 000000014067CEFA: mov     qword ptr [rbp+var_30], rcx
 * 000000014067CEFE: jmp     short loc_14067CF0D
 * 000000014067CF00: test    al, 4
 * 000000014067CF02: jz      short loc_14067CF0D
 * 000000014067CF04: call    DifGetReturnAddressForWrappers
 * 000000014067CF09: mov     qword ptr [rbp+var_30], rax
 * 000000014067CF0D: xor     r14b, r14b
 * 000000014067CF10: mov     qword ptr [rbp+var_20+8], r13
 * 000000014067CF14: cmp     cs:VfDifRunningWithoutReboot, r14b
 * 000000014067CF1B: mov     dword ptr [rbp+var_20], r12d
 * 000000014067CF1F: mov     qword ptr [rbp+var_30+8], r15
 * 000000014067CF23: jnz     short loc_14067CF31
 * 000000014067CF25: test    cs:VfOptionFlags, 800h
 * 000000014067CF2F: jz      short loc_14067CF44
 * 000000014067CF31: lea     rcx, DifRebootlessRundown; RunRef
 * 000000014067CF38: call    ExAcquireRundownProtection_0
 * 000000014067CF3D: mov     r14b, al
 * 000000014067CF40: test    al, al
 * 000000014067CF42: jz      short loc_14067CF7C
 * 000000014067CF44: lea     rdi, [rsi+20h]
 * 000000014067CF48: mov     rbx, [rdi]
 * 000000014067CF4B: jmp     short loc_14067CF66
 * 000000014067CF4D: lea     rax, [rbx-10h]
 * 000000014067CF51: test    rax, rax
 * 000000014067CF54: jz      short loc_14067CF63
 * 000000014067CF56: mov     rax, [rax+8]
 * 000000014067CF5A: lea     rcx, [rbp+var_30]
 * 000000014067CF5E: call    _guard_dispatch_icall_no_overrides
 * 000000014067CF63: mov     rbx, [rbx]
 * 000000014067CF66: cmp     rbx, rdi
 * 000000014067CF69: jnz     short loc_14067CF4D
 * 000000014067CF6B: test    r14b, r14b
 * 000000014067CF6E: jz      short loc_14067CF7C
 * 000000014067CF70: lea     rcx, DifRebootlessRundown; RunRef
 * 000000014067CF77: call    ExReleaseRundownProtection_0
 * 000000014067CF7C: mov     r8, r15
 * 000000014067CF7F: mov     edx, r12d
 * 000000014067CF82: mov     rcx, r13
 * 000000014067CF85: call    NtWaitLowEventPair
 * 000000014067CF8A: mov     dword ptr [rbp+var_10], eax
 * 000000014067CF8D: test    rsi, rsi
 * 000000014067CF90: jz      short loc_14067CFF5
 * 000000014067CF92: xor     dil, dil
 * 000000014067CF95: cmp     cs:VfDifRunningWithoutReboot, dil
 * 000000014067CF9C: jnz     short loc_14067CFAA
 * 000000014067CF9E: test    cs:VfOptionFlags, 800h
 * 000000014067CFA8: jz      short loc_14067CFBD
 * 000000014067CFAA: lea     rcx, DifRebootlessRundown; RunRef
 * 000000014067CFB1: call    ExAcquireRundownProtection_0
 * 000000014067CFB6: mov     dil, al
 * 000000014067CFB9: test    al, al
 * 000000014067CFBB: jz      short loc_14067CFF5
 * 000000014067CFBD: add     rsi, 30h ; '0'
 * 000000014067CFC1: mov     rbx, [rsi]
 * 000000014067CFC4: jmp     short loc_14067CFDF
 * 000000014067CFC6: lea     rax, [rbx-10h]
 * 000000014067CFCA: test    rax, rax
 * 000000014067CFCD: jz      short loc_14067CFDC
 * 000000014067CFCF: mov     rax, [rax+8]
 * 000000014067CFD3: lea     rcx, [rbp+var_30]
 * 000000014067CFD7: call    _guard_dispatch_icall_no_overrides
 * 000000014067CFDC: mov     rbx, [rbx]
 * 000000014067CFDF: cmp     rbx, rsi
 * 000000014067CFE2: jnz     short loc_14067CFC6
 * 000000014067CFE4: test    dil, dil
 * 000000014067CFE7: jz      short loc_14067CFF5
 * 000000014067CFE9: lea     rcx, DifRebootlessRundown; RunRef
 * 000000014067CFF0: call    ExReleaseRundownProtection_0
 * 000000014067CFF5: mov     eax, dword ptr [rbp+var_10]
 * 000000014067CFF8: lea     r11, [rsp+50h+var_s0]
 * 000000014067CFFD: mov     rbx, [r11+30h]
 * 000000014067D001: mov     rsi, [r11+38h]
 * 000000014067D005: mov     rdi, [r11+40h]
 * 000000014067D009: mov     rsp, r11
 * 000000014067D00C: pop     r15
 * 000000014067D00E: pop     r14
 * 000000014067D010: pop     r13
 * 000000014067D012: pop     r12
 * 000000014067D014: pop     rbp
 * 000000014067D015: retn
 */
