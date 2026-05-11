/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C83C
 * Callers:
 *     ?CloseAllPinInstances@CSidebandDevice@@UEAAJXZ @ 0x14000F7C0 (-CloseAllPinInstances@CSidebandDevice@@UEAAJXZ.c)
 *     DeviceRequestPowerUp @ 0x14003FECC (DeviceRequestPowerUp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qq @ 0x14000C83C
 * Reason: Hex-Rays returned no pseudocode for 0x14000C83C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000C83C: mov     r11, rsp
 * 000000014000C83F: mov     [r11+8], rbx
 * 000000014000C843: mov     [r11+10h], rbp
 * 000000014000C847: mov     [r11+18h], rsi
 * 000000014000C84B: push    rdi
 * 000000014000C84C: sub     rsp, 50h
 * 000000014000C850: movzx   ebx, [rsp+58h+arg_30]
 * 000000014000C858: mov     rsi, r9
 * 000000014000C85B: mov     dil, r8b
 * 000000014000C85E: mov     ebp, 8
 * 000000014000C863: test    dl, dl
 * 000000014000C865: jz      short loc_14000C8A1
 * 000000014000C867: mov     rax, cs:pfnWppTraceMessage
 * 000000014000C86E: lea     rdx, [r11+50h]
 * 000000014000C872: mov     r8, [rsp+58h+arg_38]
 * 000000014000C87A: mov     r9d, ebx
 * 000000014000C87D: mov     qword ptr [r11-18h], 0
 * 000000014000C885: mov     [r11-20h], rbp
 * 000000014000C889: mov     [r11-28h], rdx
 * 000000014000C88D: lea     rdx, [r11+48h]
 * 000000014000C891: mov     [r11-30h], rbp
 * 000000014000C895: mov     [r11-38h], rdx
 * 000000014000C899: lea     edx, [rbp+23h]
 * 000000014000C89C: call    _guard_dispatch_icall
 * 000000014000C8A1: test    dil, dil
 * 000000014000C8A4: jz      short loc_14000C8F9
 * 000000014000C8A6: mov     r9, [rsp+58h+arg_38]
 * 000000014000C8AE: lea     rax, [rsp+58h+arg_48]
 * 000000014000C8B6: mov     r8d, [rsp+58h+arg_28]
 * 000000014000C8BE: xor     edx, edx
 * 000000014000C8C0: mov     [rsp+58h+var_10], 0
 * 000000014000C8C9: mov     rcx, rsi
 * 000000014000C8CC: mov     [rsp+58h+var_18], rbp
 * 000000014000C8D1: mov     [rsp+58h+var_20], rax
 * 000000014000C8D6: lea     rax, [rsp+58h+arg_40]
 * 000000014000C8DE: mov     [rsp+58h+var_28], rbp
 * 000000014000C8E3: mov     [rsp+58h+var_30], rax
 * 000000014000C8E8: mov     [rsp+58h+var_38], bx
 * 000000014000C8ED: call    cs:__imp_WppAutoLogTrace
 * 000000014000C8F4: nop     dword ptr [rax+rax+00h]
 * 000000014000C8F9: mov     rbx, [rsp+58h+arg_0]
 * 000000014000C8FE: mov     rbp, [rsp+58h+arg_8]
 * 000000014000C903: mov     rsi, [rsp+58h+arg_10]
 * 000000014000C908: add     rsp, 50h
 * 000000014000C90C: pop     rdi
 * 000000014000C90D: retn
 */
