/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_HDdd @ 0x1402B0910
 * Callers:
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x14013A294 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x140255A98 (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_HDdd @ 0x1402B0910
 * Reason: Hex-Rays returned no pseudocode for 0x1402B0910
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402B0910: mov     r11, rsp
 * 00000001402B0913: mov     [r11+8], rbx
 * 00000001402B0917: mov     [r11+10h], rbp
 * 00000001402B091B: mov     [r11+18h], rsi
 * 00000001402B091F: push    rdi
 * 00000001402B0920: sub     rsp, 70h
 * 00000001402B0924: movzx   edi, [rsp+78h+arg_30]
 * 00000001402B092C: mov     rsi, r9
 * 00000001402B092F: mov     bl, r8b
 * 00000001402B0932: mov     ebp, 4
 * 00000001402B0937: test    dl, dl
 * 00000001402B0939: jz      short loc_1402B098D
 * 00000001402B093B: and     qword ptr [r11-18h], 0
 * 00000001402B0940: lea     rdx, [r11+60h]
 * 00000001402B0944: mov     rax, cs:pfnWppTraceMessage
 * 00000001402B094B: lea     r8, WPP_e82ee346f5e639e888c62409ba09f74f_Traceguids
 * 00000001402B0952: mov     [r11-20h], rbp
 * 00000001402B0956: mov     r9d, edi
 * 00000001402B0959: mov     [r11-28h], rdx
 * 00000001402B095D: lea     rdx, [r11+58h]
 * 00000001402B0961: mov     [r11-30h], rbp
 * 00000001402B0965: mov     [r11-38h], rdx
 * 00000001402B0969: lea     rdx, [r11+50h]
 * 00000001402B096D: mov     [r11-40h], rbp
 * 00000001402B0971: mov     [r11-48h], rdx
 * 00000001402B0975: lea     rdx, [r11+48h]
 * 00000001402B0979: mov     qword ptr [r11-50h], 2
 * 00000001402B0981: mov     [r11-58h], rdx
 * 00000001402B0985: lea     edx, [rbp+27h]
 * 00000001402B0988: call    _guard_dispatch_icall
 * 00000001402B098D: test    bl, bl
 * 00000001402B098F: jz      short loc_1402B0A07
 * 00000001402B0991: and     [rsp+78h+var_10], 0
 * 00000001402B0997: lea     rax, [rsp+78h+arg_58]
 * 00000001402B099F: mov     [rsp+78h+var_18], rbp
 * 00000001402B09A4: lea     r9, WPP_e82ee346f5e639e888c62409ba09f74f_Traceguids
 * 00000001402B09AB: mov     [rsp+78h+var_20], rax
 * 00000001402B09B0: mov     edx, 5
 * 00000001402B09B5: mov     [rsp+78h+var_28], rbp
 * 00000001402B09BA: lea     rax, [rsp+78h+arg_50]
 * 00000001402B09C2: mov     [rsp+78h+var_30], rax
 * 00000001402B09C7: mov     rcx, rsi
 * 00000001402B09CA: mov     [rsp+78h+var_38], rbp
 * 00000001402B09CF: lea     rax, [rsp+78h+arg_48]
 * 00000001402B09D7: mov     [rsp+78h+var_40], rax
 * 00000001402B09DC: lea     r8d, [rdx+5]
 * 00000001402B09E0: lea     rax, [rsp+78h+arg_40]
 * 00000001402B09E8: mov     [rsp+78h+var_48], 2
 * 00000001402B09F1: mov     [rsp+78h+var_50], rax
 * 00000001402B09F6: mov     [rsp+78h+var_58], di
 * 00000001402B09FB: call    cs:__imp_WppAutoLogTrace
 * 00000001402B0A02: nop     dword ptr [rax+rax+00h]
 * 00000001402B0A07: lea     r11, [rsp+78h+var_8]
 * 00000001402B0A0C: mov     rbx, [r11+10h]
 * 00000001402B0A10: mov     rbp, [r11+18h]
 * 00000001402B0A14: mov     rsi, [r11+20h]
 * 00000001402B0A18: mov     rsp, r11
 * 00000001402B0A1B: pop     rdi
 * 00000001402B0A1C: retn
 */
