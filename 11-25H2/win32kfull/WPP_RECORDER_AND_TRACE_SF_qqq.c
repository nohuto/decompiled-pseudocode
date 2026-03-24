/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140145220
 * Callers:
 *     FindQMsg @ 0x140066A10 (FindQMsg.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1400677E0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     UserJobCallout @ 0x1400D8250 (UserJobCallout.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x14019612C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqq @ 0x140145220
 * Reason: Hex-Rays returned no pseudocode for 0x140145220
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140145220: mov     [rsp+arg_0], rbx
 * 0000000140145225: mov     [rsp+arg_8], rbp
 * 000000014014522A: push    rsi
 * 000000014014522B: sub     rsp, 60h
 * 000000014014522F: movzx   esi, [rsp+68h+arg_30]
 * 0000000140145237: mov     rbp, r9
 * 000000014014523A: movzx   ebx, r8b
 * 000000014014523E: test    dl, dl
 * 0000000140145240: jnz     loc_1401452D2
 * 0000000140145246: test    bl, bl
 * 0000000140145248: jz      short loc_1401452C1
 * 000000014014524A: mov     r9, [rsp+68h+arg_38]
 * 0000000140145252: lea     rax, [rsp+68h+arg_50]
 * 000000014014525A: mov     r8d, [rsp+68h+arg_28]
 * 0000000140145262: mov     rcx, rbp
 * 0000000140145265: movzx   edx, [rsp+68h+arg_20]
 * 000000014014526D: mov     [rsp+68h+var_10], 0
 * 0000000140145276: mov     [rsp+68h+var_18], 8
 * 000000014014527F: mov     [rsp+68h+var_20], rax
 * 0000000140145284: lea     rax, [rsp+68h+arg_48]
 * 000000014014528C: mov     [rsp+68h+var_28], 8
 * 0000000140145295: mov     [rsp+68h+var_30], rax
 * 000000014014529A: lea     rax, [rsp+68h+arg_40]
 * 00000001401452A2: mov     [rsp+68h+var_38], 8
 * 00000001401452AB: mov     [rsp+68h+var_40], rax
 * 00000001401452B0: mov     word ptr [rsp+68h+var_48], si
 * 00000001401452B5: call    cs:__imp_WppAutoLogTrace
 * 00000001401452BC: nop     dword ptr [rax+rax+00h]
 * 00000001401452C1: mov     rbx, [rsp+68h+arg_0]
 * 00000001401452C6: mov     rbp, [rsp+68h+arg_8]
 * 00000001401452CB: add     rsp, 60h
 * 00000001401452CF: pop     rsi
 * 00000001401452D0: retn
 * 00000001401452D2: mov     rax, cs:pfnWppTraceMessage
 * 00000001401452D9: lea     rdx, [rsp+68h+arg_50]
 * 00000001401452E1: mov     r8, [rsp+68h+arg_38]
 * 00000001401452E9: mov     r9d, esi
 * 00000001401452EC: mov     [rsp+68h+var_18], 0
 * 00000001401452F5: mov     [rsp+68h+var_20], 8
 * 00000001401452FE: mov     [rsp+68h+var_28], rdx
 * 0000000140145303: lea     rdx, [rsp+68h+arg_48]
 * 000000014014530B: mov     [rsp+68h+var_30], 8
 * 0000000140145314: mov     [rsp+68h+var_38], rdx
 * 0000000140145319: lea     rdx, [rsp+68h+arg_40]
 * 0000000140145321: mov     [rsp+68h+var_40], 8
 * 000000014014532A: mov     [rsp+68h+var_48], rdx
 * 000000014014532F: mov     edx, 2Bh ; '+'
 * 0000000140145334: call    _guard_dispatch_icall
 * 0000000140145339: jmp     loc_140145246
 */
