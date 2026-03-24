/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140229024
 * Callers:
 *     WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4 (WindowMargins--CWindowMarginProp--CalculateWindowMargins.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14025388C (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x14028373C (-xxxDetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1402AB8B4 (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z @ 0x1402DDBA8 (-RecomputeMouseOffset@MOVESIZEDATA@@QEAAXAEBUtagRECT@@AEBUtagPOINT@@@Z.c)
 *     ?RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1402DDD04 (-RecomputeMouseOffsetOld@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140229024
 * Reason: Hex-Rays returned no pseudocode for 0x140229024
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140229024: mov     r11, rsp
 * 0000000140229027: mov     [r11+8], rbx
 * 000000014022902B: mov     [r11+10h], rsi
 * 000000014022902F: mov     [r11+18h], rdi
 * 0000000140229033: mov     [r11+20h], r14
 * 0000000140229037: push    rbp
 * 0000000140229038: lea     rbp, [r11-0Fh]
 * 000000014022903C: sub     rsp, 0B0h
 * 0000000140229043: movzx   edi, [rbp+7+arg_30]
 * 0000000140229047: mov     rsi, r9
 * 000000014022904A: mov     bl, r8b
 * 000000014022904D: mov     r14d, 4
 * 0000000140229053: test    dl, dl
 * 0000000140229055: jz      loc_1402290E0
 * 000000014022905B: and     qword ptr [r11-18h], 0
 * 0000000140229060: lea     rdx, [rbp+7+arg_78]
 * 0000000140229067: mov     rax, cs:pfnWppTraceMessage
 * 000000014022906E: mov     r9d, edi
 * 0000000140229071: mov     r8, [rbp+7+arg_38]
 * 0000000140229075: mov     [r11-20h], r14
 * 0000000140229079: mov     [r11-28h], rdx
 * 000000014022907D: lea     rdx, [rbp+7+arg_70]
 * 0000000140229084: mov     [r11-30h], r14
 * 0000000140229088: mov     [r11-38h], rdx
 * 000000014022908C: lea     rdx, [rbp+7+arg_68]
 * 0000000140229090: mov     [r11-40h], r14
 * 0000000140229094: mov     [r11-48h], rdx
 * 0000000140229098: lea     rdx, [rbp+7+arg_60]
 * 000000014022909C: mov     [r11-50h], r14
 * 00000001402290A0: mov     [r11-58h], rdx
 * 00000001402290A4: lea     rdx, [rbp+7+arg_58]
 * 00000001402290A8: mov     [r11-60h], r14
 * 00000001402290AC: mov     [r11-68h], rdx
 * 00000001402290B0: lea     rdx, [rbp+7+arg_50]
 * 00000001402290B4: mov     [r11-70h], r14
 * 00000001402290B8: mov     [r11-78h], rdx
 * 00000001402290BC: lea     rdx, [rbp+7+arg_48]
 * 00000001402290C0: mov     [r11-80h], r14
 * 00000001402290C4: mov     [rsp+0B0h+var_80], rdx
 * 00000001402290C9: lea     rdx, [rbp+7+arg_40]
 * 00000001402290CD: mov     [rsp+0B0h+var_88], r14
 * 00000001402290D2: mov     [rsp+0B0h+var_90], rdx
 * 00000001402290D7: lea     edx, [r14+27h]
 * 00000001402290DB: call    _guard_dispatch_icall
 * 00000001402290E0: test    bl, bl
 * 00000001402290E2: jz      loc_140229196
 * 00000001402290E8: and     qword ptr [rsp+0B0h+var_8], 0
 * 00000001402290F1: lea     rax, [rbp+7+arg_78]
 * 00000001402290F8: mov     r9, [rbp+7+arg_38]
 * 00000001402290FC: mov     rcx, rsi
 * 00000001402290FF: mov     r8d, [rbp+7+arg_28]
 * 0000000140229103: movzx   edx, [rbp+7+arg_20]
 * 0000000140229107: mov     [rsp+0B0h+var_10], r14
 * 000000014022910F: mov     [rsp+0B0h+var_18], rax
 * 0000000140229117: lea     rax, [rbp+7+arg_70]
 * 000000014022911E: mov     [rsp+0B0h+var_20], r14
 * 0000000140229126: mov     [rsp+0B0h+var_28], rax
 * 000000014022912E: lea     rax, [rbp+7+arg_68]
 * 0000000140229132: mov     [rsp+0B0h+var_30], r14
 * 000000014022913A: mov     [rsp+0B0h+var_38], rax
 * 000000014022913F: lea     rax, [rbp+7+arg_60]
 * 0000000140229143: mov     [rsp+0B0h+var_40], r14
 * 0000000140229148: mov     [rsp+0B0h+var_48], rax
 * 000000014022914D: lea     rax, [rbp+7+arg_58]
 * 0000000140229151: mov     [rsp+0B0h+var_50], r14
 * 0000000140229156: mov     [rsp+0B0h+var_58], rax
 * 000000014022915B: lea     rax, [rbp+7+arg_50]
 * 000000014022915F: mov     [rsp+0B0h+var_60], r14
 * 0000000140229164: mov     [rsp+0B0h+var_68], rax
 * 0000000140229169: lea     rax, [rbp+7+arg_48]
 * 000000014022916D: mov     [rsp+0B0h+var_70], r14
 * 0000000140229172: mov     [rsp+0B0h+var_78], rax
 * 0000000140229177: lea     rax, [rbp+7+arg_40]
 * 000000014022917B: mov     [rsp+0B0h+var_80], r14
 * 0000000140229180: mov     [rsp+0B0h+var_88], rax
 * 0000000140229185: mov     word ptr [rsp+0B0h+var_90], di
 * 000000014022918A: call    cs:__imp_WppAutoLogTrace
 * 0000000140229191: nop     dword ptr [rax+rax+00h]
 * 0000000140229196: lea     r11, [rsp+0B0h+var_s0]
 * 000000014022919E: mov     rbx, [r11+10h]
 * 00000001402291A2: mov     rsi, [r11+18h]
 * 00000001402291A6: mov     rdi, [r11+20h]
 * 00000001402291AA: mov     r14, [r11+28h]
 * 00000001402291AE: mov     rsp, r11
 * 00000001402291B1: pop     rbp
 * 00000001402291B2: retn
 */
