/*
 * XREFs of WPP_RECORDER_SF_i @ 0x14005D6F0
 * Callers:
 *     LinkNodeCrackPrt @ 0x140045E80 (LinkNodeCrackPrt.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x14004A9C0 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400B7B04 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     ACPIVerifyUSB4Presence @ 0x1400BA408 (ACPIVerifyUSB4Presence.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x14005D6F0
 * Reason: Hex-Rays returned no pseudocode for 0x14005D6F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014005D6F0: mov     rax, rsp
 * 000000014005D6F3: mov     [rax+8], rbx
 * 000000014005D6F7: mov     [rax+10h], rbp
 * 000000014005D6FB: mov     [rax+18h], rsi
 * 000000014005D6FF: mov     [rax+20h], rdi
 * 000000014005D703: push    r14
 * 000000014005D705: sub     rsp, 40h
 * 000000014005D709: mov     ebp, r8d
 * 000000014005D70C: mov     r14, rcx
 * 000000014005D70F: mov     ebx, r8d
 * 000000014005D712: shr     rbx, 10h
 * 000000014005D716: movzx   esi, r9w
 * 000000014005D71A: lea     r11d, [rbp-1]
 * 000000014005D71E: movzx   edi, dl
 * 000000014005D721: mov     r10d, r11d
 * 000000014005D724: and     r11d, 1Fh
 * 000000014005D728: shr     r10, 5
 * 000000014005D72C: lea     rax, [rbx+rbx*4]
 * 000000014005D730: and     r10d, 7FFh
 * 000000014005D737: lea     rax, [r10+rax*4]
 * 000000014005D73B: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014005D742: mov     eax, [r10+rax*4+2Ch]
 * 000000014005D747: bt      eax, r11d
 * 000000014005D74B: jnb     short loc_14005D795
 * 000000014005D74D: lea     rcx, [rbx+rbx*4]
 * 000000014005D751: add     rcx, rcx
 * 000000014005D754: cmp     [r10+rcx*8+29h], dil
 * 000000014005D759: jb      short loc_14005D795
 * 000000014005D75B: mov     rax, cs:pfnWppTraceMessage
 * 000000014005D762: lea     rdx, [rsp+48h+arg_28]
 * 000000014005D767: mov     r8, [rsp+48h+arg_20]
 * 000000014005D76C: mov     r9d, esi
 * 000000014005D76F: mov     rcx, [r10+rcx*8+18h]
 * 000000014005D774: mov     [rsp+48h+var_18], 0
 * 000000014005D77D: mov     [rsp+48h+var_20], 8
 * 000000014005D786: mov     [rsp+48h+var_28], rdx
 * 000000014005D78B: mov     edx, 2Bh ; '+'
 * 000000014005D790: call    _guard_dispatch_icall
 * 000000014005D795: mov     r9, [rsp+48h+arg_20]
 * 000000014005D79A: lea     rax, [rsp+48h+arg_28]
 * 000000014005D79F: mov     [rsp+48h+var_10], 0
 * 000000014005D7A8: mov     r8d, ebp
 * 000000014005D7AB: mov     [rsp+48h+var_18], 8
 * 000000014005D7B4: mov     edx, edi
 * 000000014005D7B6: mov     [rsp+48h+var_20], rax
 * 000000014005D7BB: mov     rcx, r14
 * 000000014005D7BE: mov     word ptr [rsp+48h+var_28], si
 * 000000014005D7C3: call    cs:__imp_WppAutoLogTrace
 * 000000014005D7CA: nop     dword ptr [rax+rax+00h]
 * 000000014005D7CF: mov     rbx, [rsp+48h+arg_0]
 * 000000014005D7D4: mov     rbp, [rsp+48h+arg_8]
 * 000000014005D7D9: mov     rsi, [rsp+48h+arg_10]
 * 000000014005D7DE: mov     rdi, [rsp+48h+arg_18]
 * 000000014005D7E3: add     rsp, 40h
 * 000000014005D7E7: pop     r14
 * 000000014005D7E9: retn
 */
