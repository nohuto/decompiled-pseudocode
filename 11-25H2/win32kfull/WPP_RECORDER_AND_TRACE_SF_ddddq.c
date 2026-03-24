/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddq @ 0x1402722A4
 * Callers:
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x140233760 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ddddq @ 0x1402722A4
 * Reason: Hex-Rays returned no pseudocode for 0x1402722A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402722A4: mov     r11, rsp
 * 00000001402722A7: mov     [r11+8], rbx
 * 00000001402722AB: mov     [r11+10h], rsi
 * 00000001402722AF: mov     [r11+18h], rdi
 * 00000001402722B3: push    r14
 * 00000001402722B5: sub     rsp, 80h
 * 00000001402722BC: mov     esi, 4
 * 00000001402722C1: mov     rdi, r9
 * 00000001402722C4: mov     bl, r8b
 * 00000001402722C7: lea     r14d, [rsi+7]
 * 00000001402722CB: test    dl, dl
 * 00000001402722CD: jz      short loc_14027232D
 * 00000001402722CF: and     qword ptr [r11-18h], 0
 * 00000001402722D4: lea     rdx, [r11+68h]
 * 00000001402722D8: mov     rax, cs:pfnWppTraceMessage
 * 00000001402722DF: lea     r8, WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids
 * 00000001402722E6: mov     qword ptr [r11-20h], 8
 * 00000001402722EE: mov     r9d, r14d
 * 00000001402722F1: mov     [r11-28h], rdx
 * 00000001402722F5: lea     rdx, [r11+60h]
 * 00000001402722F9: mov     [r11-30h], rsi
 * 00000001402722FD: mov     [r11-38h], rdx
 * 0000000140272301: lea     rdx, [r11+58h]
 * 0000000140272305: mov     [r11-40h], rsi
 * 0000000140272309: mov     [r11-48h], rdx
 * 000000014027230D: lea     rdx, [r11+50h]
 * 0000000140272311: mov     [r11-50h], rsi
 * 0000000140272315: mov     [r11-58h], rdx
 * 0000000140272319: lea     rdx, [r11+48h]
 * 000000014027231D: mov     [r11-60h], rsi
 * 0000000140272321: mov     [r11-68h], rdx
 * 0000000140272325: lea     edx, [rsi+27h]
 * 0000000140272328: call    _guard_dispatch_icall
 * 000000014027232D: test    bl, bl
 * 000000014027232F: jz      loc_1402723BD
 * 0000000140272335: and     [rsp+88h+var_10], 0
 * 000000014027233B: lea     rax, [rsp+88h+arg_60]
 * 0000000140272343: mov     [rsp+88h+var_18], 8
 * 000000014027234C: lea     r9, WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids
 * 0000000140272353: mov     [rsp+88h+var_20], rax
 * 0000000140272358: mov     r8d, esi
 * 000000014027235B: mov     [rsp+88h+var_28], rsi
 * 0000000140272360: lea     rax, [rsp+88h+arg_58]
 * 0000000140272368: mov     [rsp+88h+var_30], rax
 * 000000014027236D: mov     edx, 3
 * 0000000140272372: mov     [rsp+88h+var_38], rsi
 * 0000000140272377: lea     rax, [rsp+88h+arg_50]
 * 000000014027237F: mov     [rsp+88h+var_40], rax
 * 0000000140272384: mov     rcx, rdi
 * 0000000140272387: mov     [rsp+88h+var_48], rsi
 * 000000014027238C: lea     rax, [rsp+88h+arg_48]
 * 0000000140272394: mov     [rsp+88h+var_50], rax
 * 0000000140272399: lea     rax, [rsp+88h+arg_40]
 * 00000001402723A1: mov     [rsp+88h+var_58], rsi
 * 00000001402723A6: mov     [rsp+88h+var_60], rax
 * 00000001402723AB: mov     [rsp+88h+var_68], r14w
 * 00000001402723B1: call    cs:__imp_WppAutoLogTrace
 * 00000001402723B8: nop     dword ptr [rax+rax+00h]
 * 00000001402723BD: lea     r11, [rsp+88h+var_8]
 * 00000001402723C5: mov     rbx, [r11+10h]
 * 00000001402723C9: mov     rsi, [r11+18h]
 * 00000001402723CD: mov     rdi, [r11+20h]
 * 00000001402723D1: mov     rsp, r11
 * 00000001402723D4: pop     r14
 * 00000001402723D6: retn
 */
