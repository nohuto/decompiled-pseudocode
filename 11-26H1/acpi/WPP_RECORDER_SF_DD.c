/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x140066898
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1400B53A4 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x140066898
 * Reason: Hex-Rays returned no pseudocode for 0x140066898
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140066898: mov     r11, rsp
 * 000000014006689B: mov     [r11+8], rbx
 * 000000014006689F: mov     [r11+10h], rsi
 * 00000001400668A3: push    rdi
 * 00000001400668A4: sub     rsp, 50h
 * 00000001400668A8: mov     rbx, rcx
 * 00000001400668AB: mov     esi, 28h ; '('
 * 00000001400668B0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001400668B7: lea     edi, [rsi-24h]
 * 00000001400668BA: test    dword ptr [rcx+2Ch], 100000h
 * 00000001400668C1: jz      short loc_140066906
 * 00000001400668C3: cmp     byte ptr [rcx+29h], 2
 * 00000001400668C7: jb      short loc_140066906
 * 00000001400668C9: mov     rax, cs:pfnWppTraceMessage
 * 00000001400668D0: lea     rdx, [r11+38h]
 * 00000001400668D4: mov     rcx, [rcx+18h]
 * 00000001400668D8: lea     r8, WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids
 * 00000001400668DF: mov     qword ptr [r11-18h], 0
 * 00000001400668E7: mov     r9d, esi
 * 00000001400668EA: mov     [r11-20h], rdi
 * 00000001400668EE: mov     [r11-28h], rdx
 * 00000001400668F2: lea     rdx, [r11+30h]
 * 00000001400668F6: mov     [r11-30h], rdi
 * 00000001400668FA: mov     [r11-38h], rdx
 * 00000001400668FE: lea     edx, [rsi+3]
 * 0000000140066901: call    _guard_dispatch_icall
 * 0000000140066906: mov     [rsp+58h+var_10], 0
 * 000000014006690F: lea     rax, [rsp+58h+arg_30]
 * 0000000140066917: mov     [rsp+58h+var_18], rdi
 * 000000014006691C: lea     r9, WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids
 * 0000000140066923: mov     [rsp+58h+var_20], rax
 * 0000000140066928: mov     edx, 2
 * 000000014006692D: lea     rax, [rsp+58h+arg_28]
 * 0000000140066935: mov     [rsp+58h+var_28], rdi
 * 000000014006693A: mov     [rsp+58h+var_30], rax
 * 000000014006693F: mov     rcx, rbx
 * 0000000140066942: mov     [rsp+58h+var_38], si
 * 0000000140066947: lea     r8d, [rdx+13h]
 * 000000014006694B: call    cs:__imp_WppAutoLogTrace
 * 0000000140066952: nop     dword ptr [rax+rax+00h]
 * 0000000140066957: mov     rbx, [rsp+58h+arg_0]
 * 000000014006695C: mov     rsi, [rsp+58h+arg_8]
 * 0000000140066961: add     rsp, 50h
 * 0000000140066965: pop     rdi
 * 0000000140066966: retn
 */
