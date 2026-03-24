/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddd @ 0x14016813C
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14024092C (xxxAppAdjustDpiCandidateRect.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A7A30 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA1EC (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qddd @ 0x14016813C
 * Reason: Hex-Rays returned no pseudocode for 0x14016813C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016813C: mov     [rsp+arg_0], rbx
 * 0000000140168141: mov     [rsp+arg_8], rbp
 * 0000000140168146: mov     [rsp+arg_10], rsi
 * 000000014016814B: push    rdi
 * 000000014016814C: sub     rsp, 70h
 * 0000000140168150: movzx   edi, [rsp+78h+arg_30]
 * 0000000140168158: mov     rsi, r9
 * 000000014016815B: mov     bl, r8b
 * 000000014016815E: mov     ebp, 4
 * 0000000140168163: test    dl, dl
 * 0000000140168165: jnz     loc_140168204
 * 000000014016816B: test    bl, bl
 * 000000014016816D: jz      short loc_1401681ED
 * 000000014016816F: and     [rsp+78h+var_10], 0
 * 0000000140168175: lea     rax, [rsp+78h+arg_58]
 * 000000014016817D: mov     r9, [rsp+78h+arg_38]
 * 0000000140168185: mov     rcx, rsi
 * 0000000140168188: mov     r8d, [rsp+78h+arg_28]
 * 0000000140168190: movzx   edx, [rsp+78h+arg_20]
 * 0000000140168198: mov     [rsp+78h+var_18], rbp
 * 000000014016819D: mov     [rsp+78h+var_20], rax
 * 00000001401681A2: lea     rax, [rsp+78h+arg_50]
 * 00000001401681AA: mov     [rsp+78h+var_28], rbp
 * 00000001401681AF: mov     [rsp+78h+var_30], rax
 * 00000001401681B4: lea     rax, [rsp+78h+arg_48]
 * 00000001401681BC: mov     [rsp+78h+var_38], rbp
 * 00000001401681C1: mov     [rsp+78h+var_40], rax
 * 00000001401681C6: lea     rax, [rsp+78h+arg_40]
 * 00000001401681CE: mov     [rsp+78h+var_48], 8
 * 00000001401681D7: mov     [rsp+78h+var_50], rax
 * 00000001401681DC: mov     word ptr [rsp+78h+var_58], di
 * 00000001401681E1: call    cs:__imp_WppAutoLogTrace
 * 00000001401681E8: nop     dword ptr [rax+rax+00h]
 * 00000001401681ED: lea     r11, [rsp+78h+var_8]
 * 00000001401681F2: mov     rbx, [r11+10h]
 * 00000001401681F6: mov     rbp, [r11+18h]
 * 00000001401681FA: mov     rsi, [r11+20h]
 * 00000001401681FE: mov     rsp, r11
 * 0000000140168201: pop     rdi
 * 0000000140168202: retn
 * 0000000140168204: and     [rsp+78h+var_18], 0
 * 000000014016820A: lea     rdx, [rsp+78h+arg_58]
 * 0000000140168212: mov     rax, cs:pfnWppTraceMessage
 * 0000000140168219: mov     r9d, edi
 * 000000014016821C: mov     r8, [rsp+78h+arg_38]
 * 0000000140168224: mov     [rsp+78h+var_20], rbp
 * 0000000140168229: mov     [rsp+78h+var_28], rdx
 * 000000014016822E: lea     rdx, [rsp+78h+arg_50]
 * 0000000140168236: mov     [rsp+78h+var_30], rbp
 * 000000014016823B: mov     [rsp+78h+var_38], rdx
 * 0000000140168240: lea     rdx, [rsp+78h+arg_48]
 * 0000000140168248: mov     [rsp+78h+var_40], rbp
 * 000000014016824D: mov     [rsp+78h+var_48], rdx
 * 0000000140168252: lea     rdx, [rsp+78h+arg_40]
 * 000000014016825A: mov     [rsp+78h+var_50], 8
 * 0000000140168263: mov     [rsp+78h+var_58], rdx
 * 0000000140168268: mov     edx, 2Bh ; '+'
 * 000000014016826D: call    _guard_dispatch_icall
 * 0000000140168272: jmp     loc_14016816B
 */
