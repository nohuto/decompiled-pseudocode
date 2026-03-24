/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x140052490
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1400CE578 (PnpBiosResourcesToNtResources.c)
 *     PnpiGrowResourceList @ 0x1400CF46C (PnpiGrowResourceList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x140052490
 * Reason: Hex-Rays returned no pseudocode for 0x140052490
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140052490: mov     [rsp+arg_0], rbx
 * 0000000140052495: mov     [rsp+arg_8], rbp
 * 000000014005249A: mov     [rsp+arg_10], rsi
 * 000000014005249F: push    rdi
 * 00000001400524A0: push    r14
 * 00000001400524A2: push    r15
 * 00000001400524A4: sub     rsp, 50h
 * 00000001400524A8: mov     ebp, r8d
 * 00000001400524AB: mov     r14, rcx
 * 00000001400524AE: mov     ebx, r8d
 * 00000001400524B1: mov     r15d, 4
 * 00000001400524B7: shr     rbx, 10h
 * 00000001400524BB: movzx   esi, r9w
 * 00000001400524BF: lea     r11d, [rbp-1]
 * 00000001400524C3: movzx   edi, dl
 * 00000001400524C6: mov     r10d, r11d
 * 00000001400524C9: and     r11d, 1Fh
 * 00000001400524CD: shr     r10, 5
 * 00000001400524D1: lea     rax, [rbx+rbx*4]
 * 00000001400524D5: and     r10d, 7FFh
 * 00000001400524DC: lea     rax, [r10+rax*4]
 * 00000001400524E0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001400524E7: mov     eax, [r10+rax*4+2Ch]
 * 00000001400524EC: bt      eax, r11d
 * 00000001400524F0: jnb     short loc_14005254C
 * 00000001400524F2: lea     rcx, [rbx+rbx*4]
 * 00000001400524F6: add     rcx, rcx
 * 00000001400524F9: cmp     [r10+rcx*8+29h], dil
 * 00000001400524FE: jb      short loc_14005254C
 * 0000000140052500: mov     rax, cs:pfnWppTraceMessage
 * 0000000140052507: lea     rdx, [rsp+68h+arg_30]
 * 000000014005250F: mov     rcx, [r10+rcx*8+18h]
 * 0000000140052514: lea     r8, WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids
 * 000000014005251B: mov     [rsp+68h+var_28], 0
 * 0000000140052524: mov     r9d, esi
 * 0000000140052527: mov     [rsp+68h+var_30], r15
 * 000000014005252C: mov     [rsp+68h+var_38], rdx
 * 0000000140052531: lea     rdx, [rsp+68h+arg_28]
 * 0000000140052539: mov     [rsp+68h+var_40], r15
 * 000000014005253E: mov     [rsp+68h+var_48], rdx
 * 0000000140052543: lea     edx, [r15+27h]
 * 0000000140052547: call    _guard_dispatch_icall
 * 000000014005254C: mov     [rsp+68h+var_20], 0
 * 0000000140052555: lea     rax, [rsp+68h+arg_30]
 * 000000014005255D: mov     [rsp+68h+var_28], r15
 * 0000000140052562: lea     r9, WPP_b74ffc0c24b2330d806a68d91046b8f2_Traceguids
 * 0000000140052569: mov     [rsp+68h+var_30], rax
 * 000000014005256E: mov     r8d, ebp
 * 0000000140052571: lea     rax, [rsp+68h+arg_28]
 * 0000000140052579: mov     [rsp+68h+var_38], r15
 * 000000014005257E: mov     [rsp+68h+var_40], rax
 * 0000000140052583: mov     edx, edi
 * 0000000140052585: mov     rcx, r14
 * 0000000140052588: mov     word ptr [rsp+68h+var_48], si
 * 000000014005258D: call    cs:__imp_WppAutoLogTrace
 * 0000000140052594: nop     dword ptr [rax+rax+00h]
 * 0000000140052599: lea     r11, [rsp+68h+var_18]
 * 000000014005259E: mov     rbx, [r11+20h]
 * 00000001400525A2: mov     rbp, [r11+28h]
 * 00000001400525A6: mov     rsi, [r11+30h]
 * 00000001400525AA: mov     rsp, r11
 * 00000001400525AD: pop     r15
 * 00000001400525AF: pop     r14
 * 00000001400525B1: pop     rdi
 * 00000001400525B2: retn
 */
