/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x140066C6C
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1400545E0 (AcpiSetupNativeMethodContext.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1400661C8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400B51C0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqD @ 0x140066C6C
 * Reason: Hex-Rays returned no pseudocode for 0x140066C6C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140066C6C: mov     rax, rsp
 * 0000000140066C6F: mov     [rax+8], rbx
 * 0000000140066C73: mov     [rax+10h], rbp
 * 0000000140066C77: mov     [rax+18h], rsi
 * 0000000140066C7B: mov     [rax+20h], rdi
 * 0000000140066C7F: push    r14
 * 0000000140066C81: sub     rsp, 60h
 * 0000000140066C85: mov     esi, r8d
 * 0000000140066C88: mov     rbp, rcx
 * 0000000140066C8B: mov     ebx, r8d
 * 0000000140066C8E: mov     r14d, 8
 * 0000000140066C94: shr     rbx, 10h
 * 0000000140066C98: movzx   edi, r9w
 * 0000000140066C9C: lea     r11d, [rsi-1]
 * 0000000140066CA0: mov     edx, r11d
 * 0000000140066CA3: and     r11d, 1Fh
 * 0000000140066CA7: shr     rdx, 5
 * 0000000140066CAB: lea     rax, [rbx+rbx*4]
 * 0000000140066CAF: and     edx, 7FFh
 * 0000000140066CB5: lea     r10, [rdx+rax*4]
 * 0000000140066CB9: mov     edx, r11d
 * 0000000140066CBC: mov     r11, cs:WPP_GLOBAL_Control
 * 0000000140066CC3: mov     eax, [r11+r10*4+2Ch]
 * 0000000140066CC8: bt      eax, edx
 * 0000000140066CCB: jnb     short loc_140066D3E
 * 0000000140066CCD: lea     rcx, [rbx+rbx*4]
 * 0000000140066CD1: add     rcx, rcx
 * 0000000140066CD4: cmp     byte ptr [r11+rcx*8+29h], 2
 * 0000000140066CDA: jb      short loc_140066D3E
 * 0000000140066CDC: mov     rax, cs:pfnWppTraceMessage
 * 0000000140066CE3: lea     rdx, [rsp+68h+arg_38]
 * 0000000140066CEB: mov     rcx, [r11+rcx*8+18h]
 * 0000000140066CF0: lea     r8, WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids
 * 0000000140066CF7: mov     [rsp+68h+var_18], 0
 * 0000000140066D00: mov     r9d, edi
 * 0000000140066D03: mov     [rsp+68h+var_20], 4
 * 0000000140066D0C: mov     [rsp+68h+var_28], rdx
 * 0000000140066D11: lea     rdx, [rsp+68h+arg_30]
 * 0000000140066D19: mov     [rsp+68h+var_30], r14
 * 0000000140066D1E: mov     [rsp+68h+var_38], rdx
 * 0000000140066D23: lea     rdx, [rsp+68h+arg_28]
 * 0000000140066D2B: mov     [rsp+68h+var_40], r14
 * 0000000140066D30: mov     [rsp+68h+var_48], rdx
 * 0000000140066D35: lea     edx, [r14+23h]
 * 0000000140066D39: call    _guard_dispatch_icall
 * 0000000140066D3E: mov     [rsp+68h+var_10], 0
 * 0000000140066D47: lea     rax, [rsp+68h+arg_38]
 * 0000000140066D4F: mov     [rsp+68h+var_18], 4
 * 0000000140066D58: lea     r9, WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids
 * 0000000140066D5F: mov     [rsp+68h+var_20], rax
 * 0000000140066D64: mov     r8d, esi
 * 0000000140066D67: mov     [rsp+68h+var_28], r14
 * 0000000140066D6C: lea     rax, [rsp+68h+arg_30]
 * 0000000140066D74: mov     [rsp+68h+var_30], rax
 * 0000000140066D79: mov     edx, 2
 * 0000000140066D7E: lea     rax, [rsp+68h+arg_28]
 * 0000000140066D86: mov     [rsp+68h+var_38], r14
 * 0000000140066D8B: mov     [rsp+68h+var_40], rax
 * 0000000140066D90: mov     rcx, rbp
 * 0000000140066D93: mov     word ptr [rsp+68h+var_48], di
 * 0000000140066D98: call    cs:__imp_WppAutoLogTrace
 * 0000000140066D9F: nop     dword ptr [rax+rax+00h]
 * 0000000140066DA4: lea     r11, [rsp+68h+var_8]
 * 0000000140066DA9: mov     rbx, [r11+10h]
 * 0000000140066DAD: mov     rbp, [r11+18h]
 * 0000000140066DB1: mov     rsi, [r11+20h]
 * 0000000140066DB5: mov     rdi, [r11+28h]
 * 0000000140066DB9: mov     rsp, r11
 * 0000000140066DBC: pop     r14
 * 0000000140066DBE: retn
 */
