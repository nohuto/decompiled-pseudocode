/*
 * XREFs of WPP_RECORDER_SF_s @ 0x14003EBCC
 * Callers:
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053384 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400B687C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400C89FC (ACPIRegReadAMLRegistryEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400D74F4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x14003EBCC
 * Reason: Hex-Rays returned no pseudocode for 0x14003EBCC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003EBCC: mov     rax, rsp
 * 000000014003EBCF: mov     [rax+10h], rbx
 * 000000014003EBD3: mov     [rax+18h], rbp
 * 000000014003EBD7: mov     [rax+20h], rsi
 * 000000014003EBDB: mov     [rax+8], rcx
 * 000000014003EBDF: push    rdi
 * 000000014003EBE0: push    r12
 * 000000014003EBE2: push    r13
 * 000000014003EBE4: push    r14
 * 000000014003EBE6: push    r15
 * 000000014003EBE8: sub     rsp, 40h
 * 000000014003EBEC: mov     r14, cs:WPP_GLOBAL_Control
 * 000000014003EBF3: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014003EBF7: mov     r13d, r8d
 * 000000014003EBFA: mov     esi, r8d
 * 000000014003EBFD: lea     r8, aNull; "NULL"
 * 000000014003EC04: shr     rsi, 10h
 * 000000014003EC08: movzx   r15d, dl
 * 000000014003EC0C: lea     ebp, [rdi+6]
 * 000000014003EC0F: lea     ebx, [r13-1]
 * 000000014003EC13: movzx   r12d, r9w
 * 000000014003EC17: mov     r10d, ebx
 * 000000014003EC1A: and     ebx, 1Fh
 * 000000014003EC1D: shr     r10, 5
 * 000000014003EC21: lea     rax, [rsi+rsi*4]
 * 000000014003EC25: and     r10d, 7FFh
 * 000000014003EC2C: mov     edx, ebx
 * 000000014003EC2E: mov     rbx, [rsp+68h+arg_28]
 * 000000014003EC36: lea     r11, [r10+rax*4]
 * 000000014003EC3A: mov     eax, [r14+r11*4+2Ch]
 * 000000014003EC3F: bt      eax, edx
 * 000000014003EC42: jb      short loc_14003ECAF
 * 000000014003EC44: test    rbx, rbx
 * 000000014003EC47: jz      short loc_14003EC59
 * 000000014003EC49: inc     rdi
 * 000000014003EC4C: cmp     byte ptr [rbx+rdi], 0
 * 000000014003EC50: jnz     short loc_14003EC49
 * 000000014003EC52: lea     rbp, [rdi+1]
 * 000000014003EC56: test    rbx, rbx
 * 000000014003EC59: mov     r9, [rsp+68h+arg_20]
 * 000000014003EC61: cmovz   rbx, r8
 * 000000014003EC65: mov     [rsp+68h+var_30], 0
 * 000000014003EC6E: mov     r8d, r13d
 * 000000014003EC71: mov     [rsp+68h+var_38], rbp
 * 000000014003EC76: mov     edx, r15d
 * 000000014003EC79: mov     [rsp+68h+var_40], rbx
 * 000000014003EC7E: mov     word ptr [rsp+68h+var_48], r12w
 * 000000014003EC84: call    cs:__imp_WppAutoLogTrace
 * 000000014003EC8B: nop     dword ptr [rax+rax+00h]
 * 000000014003EC90: lea     r11, [rsp+68h+var_28]
 * 000000014003EC95: mov     rbx, [r11+38h]
 * 000000014003EC99: mov     rbp, [r11+40h]
 * 000000014003EC9D: mov     rsi, [r11+48h]
 * 000000014003ECA1: mov     rsp, r11
 * 000000014003ECA4: pop     r15
 * 000000014003ECA6: pop     r14
 * 000000014003ECA8: pop     r13
 * 000000014003ECAA: pop     r12
 * 000000014003ECAC: pop     rdi
 * 000000014003ECAD: retn
 * 000000014003ECAF: lea     r10, [rsi+rsi*4]
 * 000000014003ECB3: add     r10, r10
 * 000000014003ECB6: cmp     [r14+r10*8+29h], r15b
 * 000000014003ECBB: jb      short loc_14003EC44
 * 000000014003ECBD: test    rbx, rbx
 * 000000014003ECC0: jz      short loc_14003ECD4
 * 000000014003ECC2: mov     rax, rdi
 * 000000014003ECC5: inc     rax
 * 000000014003ECC8: cmp     byte ptr [rbx+rax], 0
 * 000000014003ECCC: jnz     short loc_14003ECC5
 * 000000014003ECCE: lea     rdx, [rax+1]
 * 000000014003ECD2: jmp     short loc_14003ECD7
 * 000000014003ECD4: mov     rdx, rbp
 * 000000014003ECD7: mov     rax, cs:pfnWppTraceMessage
 * 000000014003ECDE: test    rbx, rbx
 * 000000014003ECE1: mov     [rsp+68h+var_38], 0
 * 000000014003ECEA: mov     rcx, rbx
 * 000000014003ECED: cmovz   rcx, r8
 * 000000014003ECF1: mov     [rsp+68h+var_40], rdx
 * 000000014003ECF6: mov     r8, [rsp+68h+arg_20]
 * 000000014003ECFE: mov     r9d, r12d
 * 000000014003ED01: mov     [rsp+68h+var_48], rcx
 * 000000014003ED06: mov     edx, 2Bh ; '+'
 * 000000014003ED0B: mov     rcx, [r14+r10*8+18h]
 * 000000014003ED10: call    _guard_dispatch_icall
 * 000000014003ED15: mov     rcx, [rsp+68h+arg_0]
 * 000000014003ED1A: lea     r8, aNull; "NULL"
 * 000000014003ED21: jmp     loc_14003EC44
 */
