/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qLHH @ 0x14028E6B0
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x1401C51F8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qLHH @ 0x14028E6B0
 * Reason: Hex-Rays returned no pseudocode for 0x14028E6B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028E6B0: mov     r11, rsp
 * 000000014028E6B3: mov     [r11+8], rbx
 * 000000014028E6B7: mov     [r11+10h], rsi
 * 000000014028E6BB: mov     [r11+18h], rdi
 * 000000014028E6BF: push    r15
 * 000000014028E6C1: sub     rsp, 70h
 * 000000014028E6C5: mov     esi, 2
 * 000000014028E6CA: mov     rdi, r9
 * 000000014028E6CD: mov     bl, r8b
 * 000000014028E6D0: lea     r15d, [rsi+0Eh]
 * 000000014028E6D4: test    dl, dl
 * 000000014028E6D6: jz      short loc_14028E72E
 * 000000014028E6D8: and     qword ptr [r11-18h], 0
 * 000000014028E6DD: lea     rdx, [r11+60h]
 * 000000014028E6E1: mov     rax, cs:pfnWppTraceMessage
 * 000000014028E6E8: lea     r8, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E6EF: mov     [r11-20h], rsi
 * 000000014028E6F3: mov     r9d, r15d
 * 000000014028E6F6: mov     [r11-28h], rdx
 * 000000014028E6FA: lea     rdx, [r11+58h]
 * 000000014028E6FE: mov     [r11-30h], rsi
 * 000000014028E702: mov     [r11-38h], rdx
 * 000000014028E706: lea     rdx, [r11+50h]
 * 000000014028E70A: mov     qword ptr [r11-40h], 4
 * 000000014028E712: mov     [r11-48h], rdx
 * 000000014028E716: lea     rdx, [r11+48h]
 * 000000014028E71A: mov     qword ptr [r11-50h], 8
 * 000000014028E722: mov     [r11-58h], rdx
 * 000000014028E726: lea     edx, [rsi+29h]
 * 000000014028E729: call    _guard_dispatch_icall
 * 000000014028E72E: test    bl, bl
 * 000000014028E730: jz      short loc_14028E7AD
 * 000000014028E732: and     [rsp+78h+var_10], 0
 * 000000014028E738: lea     rax, [rsp+78h+arg_58]
 * 000000014028E740: mov     [rsp+78h+var_18], rsi
 * 000000014028E745: lea     r9, WPP_498cb4b0a6fe38d4bf1a8d41cfaba51a_Traceguids
 * 000000014028E74C: mov     [rsp+78h+var_20], rax
 * 000000014028E751: mov     edx, 5
 * 000000014028E756: mov     [rsp+78h+var_28], rsi
 * 000000014028E75B: lea     rax, [rsp+78h+arg_50]
 * 000000014028E763: mov     [rsp+78h+var_30], rax
 * 000000014028E768: mov     rcx, rdi
 * 000000014028E76B: mov     [rsp+78h+var_38], 4
 * 000000014028E774: lea     rax, [rsp+78h+arg_48]
 * 000000014028E77C: mov     [rsp+78h+var_40], rax
 * 000000014028E781: lea     r8d, [rdx+5]
 * 000000014028E785: lea     rax, [rsp+78h+arg_40]
 * 000000014028E78D: mov     [rsp+78h+var_48], 8
 * 000000014028E796: mov     [rsp+78h+var_50], rax
 * 000000014028E79B: mov     [rsp+78h+var_58], r15w
 * 000000014028E7A1: call    cs:__imp_WppAutoLogTrace
 * 000000014028E7A8: nop     dword ptr [rax+rax+00h]
 * 000000014028E7AD: lea     r11, [rsp+78h+var_8]
 * 000000014028E7B2: mov     rbx, [r11+10h]
 * 000000014028E7B6: mov     rsi, [r11+18h]
 * 000000014028E7BA: mov     rdi, [r11+20h]
 * 000000014028E7BE: mov     rsp, r11
 * 000000014028E7C1: pop     r15
 * 000000014028E7C3: retn
 */
