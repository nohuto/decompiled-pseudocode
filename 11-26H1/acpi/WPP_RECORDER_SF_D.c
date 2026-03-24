/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1400386C0
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x14004BF04 (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIVectorBuildVectorMasks @ 0x140055B7C (ACPIVectorBuildVectorMasks.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400B6AA8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400B6D14 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1400B7244 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1400B7490 (OSReadNextRegValue.c)
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400BE450 (IrqArbpAssignIrqFromLinkNode.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400C89FC (ACPIRegReadAMLRegistryEntry.c)
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1400386C0
 * Reason: Hex-Rays returned no pseudocode for 0x1400386C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400386C0: mov     rax, rsp
 * 00000001400386C3: mov     [rax+8], rbx
 * 00000001400386C7: mov     [rax+10h], rbp
 * 00000001400386CB: mov     [rax+18h], rsi
 * 00000001400386CF: mov     [rax+20h], rdi
 * 00000001400386D3: push    r14
 * 00000001400386D5: sub     rsp, 40h
 * 00000001400386D9: mov     ebp, r8d
 * 00000001400386DC: mov     r14, rcx
 * 00000001400386DF: mov     ebx, r8d
 * 00000001400386E2: shr     rbx, 10h
 * 00000001400386E6: movzx   esi, r9w
 * 00000001400386EA: lea     r11d, [rbp-1]
 * 00000001400386EE: movzx   edi, dl
 * 00000001400386F1: mov     r10d, r11d
 * 00000001400386F4: and     r11d, 1Fh
 * 00000001400386F8: shr     r10, 5
 * 00000001400386FC: lea     rax, [rbx+rbx*4]
 * 0000000140038700: and     r10d, 7FFh
 * 0000000140038707: lea     rax, [r10+rax*4]
 * 000000014003870B: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140038712: mov     eax, [r10+rax*4+2Ch]
 * 0000000140038717: bt      eax, r11d
 * 000000014003871B: jnb     short loc_140038765
 * 000000014003871D: lea     rcx, [rbx+rbx*4]
 * 0000000140038721: add     rcx, rcx
 * 0000000140038724: cmp     [r10+rcx*8+29h], dil
 * 0000000140038729: jb      short loc_140038765
 * 000000014003872B: mov     rax, cs:pfnWppTraceMessage
 * 0000000140038732: lea     rdx, [rsp+48h+arg_28]
 * 0000000140038737: mov     r8, [rsp+48h+arg_20]
 * 000000014003873C: mov     r9d, esi
 * 000000014003873F: mov     rcx, [r10+rcx*8+18h]
 * 0000000140038744: mov     [rsp+48h+var_18], 0
 * 000000014003874D: mov     [rsp+48h+var_20], 4
 * 0000000140038756: mov     [rsp+48h+var_28], rdx
 * 000000014003875B: mov     edx, 2Bh ; '+'
 * 0000000140038760: call    _guard_dispatch_icall
 * 0000000140038765: mov     r9, [rsp+48h+arg_20]
 * 000000014003876A: lea     rax, [rsp+48h+arg_28]
 * 000000014003876F: mov     [rsp+48h+var_10], 0
 * 0000000140038778: mov     r8d, ebp
 * 000000014003877B: mov     [rsp+48h+var_18], 4
 * 0000000140038784: mov     edx, edi
 * 0000000140038786: mov     [rsp+48h+var_20], rax
 * 000000014003878B: mov     rcx, r14
 * 000000014003878E: mov     word ptr [rsp+48h+var_28], si
 * 0000000140038793: call    cs:__imp_WppAutoLogTrace
 * 000000014003879A: nop     dword ptr [rax+rax+00h]
 * 000000014003879F: mov     rbx, [rsp+48h+arg_0]
 * 00000001400387A4: mov     rbp, [rsp+48h+arg_8]
 * 00000001400387A9: mov     rsi, [rsp+48h+arg_10]
 * 00000001400387AE: mov     rdi, [rsp+48h+arg_18]
 * 00000001400387B3: add     rsp, 40h
 * 00000001400387B7: pop     r14
 * 00000001400387B9: retn
 */
