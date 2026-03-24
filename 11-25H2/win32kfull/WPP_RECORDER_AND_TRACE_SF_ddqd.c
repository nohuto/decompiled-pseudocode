/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddqd @ 0x14026BC2C
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_ddqd @ 0x14026BC2C
 * Reason: Hex-Rays returned no pseudocode for 0x14026BC2C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014026BC2C: mov     r11, rsp
 * 000000014026BC2F: mov     [r11+8], rbx
 * 000000014026BC33: mov     [r11+10h], rsi
 * 000000014026BC37: mov     [r11+18h], rdi
 * 000000014026BC3B: push    r14
 * 000000014026BC3D: sub     rsp, 70h
 * 000000014026BC41: mov     esi, 4
 * 000000014026BC46: mov     rdi, r9
 * 000000014026BC49: mov     bl, r8b
 * 000000014026BC4C: lea     r14d, [rsi+0Eh]
 * 000000014026BC50: test    dl, dl
 * 000000014026BC52: jz      short loc_14026BCA6
 * 000000014026BC54: and     qword ptr [r11-18h], 0
 * 000000014026BC59: lea     rdx, [r11+60h]
 * 000000014026BC5D: mov     rax, cs:pfnWppTraceMessage
 * 000000014026BC64: lea     r8, WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids
 * 000000014026BC6B: mov     [r11-20h], rsi
 * 000000014026BC6F: mov     r9d, r14d
 * 000000014026BC72: mov     [r11-28h], rdx
 * 000000014026BC76: lea     rdx, [r11+58h]
 * 000000014026BC7A: mov     qword ptr [r11-30h], 8
 * 000000014026BC82: mov     [r11-38h], rdx
 * 000000014026BC86: lea     rdx, [r11+50h]
 * 000000014026BC8A: mov     [r11-40h], rsi
 * 000000014026BC8E: mov     [r11-48h], rdx
 * 000000014026BC92: lea     rdx, [r11+48h]
 * 000000014026BC96: mov     [r11-50h], rsi
 * 000000014026BC9A: mov     [r11-58h], rdx
 * 000000014026BC9E: lea     edx, [rsi+27h]
 * 000000014026BCA1: call    _guard_dispatch_icall
 * 000000014026BCA6: test    bl, bl
 * 000000014026BCA8: jz      short loc_14026BD21
 * 000000014026BCAA: and     [rsp+78h+var_10], 0
 * 000000014026BCB0: lea     rax, [rsp+78h+arg_58]
 * 000000014026BCB8: mov     [rsp+78h+var_18], rsi
 * 000000014026BCBD: lea     r9, WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids
 * 000000014026BCC4: mov     [rsp+78h+var_20], rax
 * 000000014026BCC9: mov     edx, 5
 * 000000014026BCCE: mov     [rsp+78h+var_28], 8
 * 000000014026BCD7: lea     rax, [rsp+78h+arg_50]
 * 000000014026BCDF: mov     [rsp+78h+var_30], rax
 * 000000014026BCE4: mov     rcx, rdi
 * 000000014026BCE7: mov     [rsp+78h+var_38], rsi
 * 000000014026BCEC: lea     rax, [rsp+78h+arg_48]
 * 000000014026BCF4: mov     [rsp+78h+var_40], rax
 * 000000014026BCF9: lea     r8d, [rdx+0Ah]
 * 000000014026BCFD: lea     rax, [rsp+78h+arg_40]
 * 000000014026BD05: mov     [rsp+78h+var_48], rsi
 * 000000014026BD0A: mov     [rsp+78h+var_50], rax
 * 000000014026BD0F: mov     [rsp+78h+var_58], r14w
 * 000000014026BD15: call    cs:__imp_WppAutoLogTrace
 * 000000014026BD1C: nop     dword ptr [rax+rax+00h]
 * 000000014026BD21: lea     r11, [rsp+78h+var_8]
 * 000000014026BD26: mov     rbx, [r11+10h]
 * 000000014026BD2A: mov     rsi, [r11+18h]
 * 000000014026BD2E: mov     rdi, [r11+20h]
 * 000000014026BD32: mov     rsp, r11
 * 000000014026BD35: pop     r14
 * 000000014026BD37: retn
 */
