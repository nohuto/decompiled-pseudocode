/*
 * XREFs of WPP_RECORDER_SF_ddi @ 0x1400682F8
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x14004BF04 (ACPIRangeValidatePciMemoryResource.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddi @ 0x1400682F8
 * Reason: Hex-Rays returned no pseudocode for 0x1400682F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400682F8: mov     r11, rsp
 * 00000001400682FB: mov     [r11+8], rbx
 * 00000001400682FF: mov     [r11+10h], rbp
 * 0000000140068303: push    rdi
 * 0000000140068304: sub     rsp, 60h
 * 0000000140068308: mov     rbx, rcx
 * 000000014006830B: mov     ebp, 0Ah
 * 0000000140068310: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140068317: lea     edi, [rbp-6]
 * 000000014006831A: test    dword ptr [rcx+2Ch], 1000h
 * 0000000140068321: jz      short loc_140068376
 * 0000000140068323: cmp     byte ptr [rcx+29h], 2
 * 0000000140068327: jb      short loc_140068376
 * 0000000140068329: mov     rax, cs:pfnWppTraceMessage
 * 0000000140068330: lea     rdx, [r11+40h]
 * 0000000140068334: mov     rcx, [rcx+18h]
 * 0000000140068338: lea     r8, WPP_1fd0c010928a3334a25fba642ba00601_Traceguids
 * 000000014006833F: mov     qword ptr [r11-18h], 0
 * 0000000140068347: mov     r9d, ebp
 * 000000014006834A: mov     qword ptr [r11-20h], 8
 * 0000000140068352: mov     [r11-28h], rdx
 * 0000000140068356: lea     rdx, [r11+38h]
 * 000000014006835A: mov     [r11-30h], rdi
 * 000000014006835E: mov     [r11-38h], rdx
 * 0000000140068362: lea     rdx, [r11+30h]
 * 0000000140068366: mov     [r11-40h], rdi
 * 000000014006836A: mov     [r11-48h], rdx
 * 000000014006836E: lea     edx, [rbp+21h]
 * 0000000140068371: call    _guard_dispatch_icall
 * 0000000140068376: mov     [rsp+68h+var_10], 0
 * 000000014006837F: lea     rax, [rsp+68h+arg_38]
 * 0000000140068387: mov     [rsp+68h+var_18], 8
 * 0000000140068390: lea     r9, WPP_1fd0c010928a3334a25fba642ba00601_Traceguids
 * 0000000140068397: mov     [rsp+68h+var_20], rax
 * 000000014006839C: mov     edx, 2
 * 00000001400683A1: mov     [rsp+68h+var_28], rdi
 * 00000001400683A6: lea     rax, [rsp+68h+arg_30]
 * 00000001400683AE: mov     [rsp+68h+var_30], rax
 * 00000001400683B3: mov     rcx, rbx
 * 00000001400683B6: lea     rax, [rsp+68h+arg_28]
 * 00000001400683BE: mov     [rsp+68h+var_38], rdi
 * 00000001400683C3: mov     [rsp+68h+var_40], rax
 * 00000001400683C8: lea     r8d, [rdx+0Bh]
 * 00000001400683CC: mov     [rsp+68h+var_48], bp
 * 00000001400683D1: call    cs:__imp_WppAutoLogTrace
 * 00000001400683D8: nop     dword ptr [rax+rax+00h]
 * 00000001400683DD: mov     rbx, [rsp+68h+arg_0]
 * 00000001400683E2: mov     rbp, [rsp+68h+arg_8]
 * 00000001400683E7: add     rsp, 60h
 * 00000001400683EB: pop     rdi
 * 00000001400683EC: retn
 */
