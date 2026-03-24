/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x1402158DC
 * Callers:
 *     _anonymous_namespace_::InitializeInputSensorPass1Worker @ 0x1400E12CC (_anonymous_namespace_--InitializeInputSensorPass1Worker.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1402150C4 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     InitializeInputSensorsOnSharedThread @ 0x140216318 (InitializeInputSensorsOnSharedThread.c)
 *     InitializeSensorExplicitly @ 0x140216570 (InitializeSensorExplicitly.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sd @ 0x1402158DC
 * Reason: Hex-Rays returned no pseudocode for 0x1402158DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402158DC: mov     rax, rsp
 * 00000001402158DF: mov     [rax+8], rbx
 * 00000001402158E3: mov     [rax+10h], rbp
 * 00000001402158E7: mov     [rax+18h], rsi
 * 00000001402158EB: mov     [rax+20h], rdi
 * 00000001402158EF: push    r14
 * 00000001402158F1: sub     rsp, 50h
 * 00000001402158F5: mov     rdi, [rsp+58h+arg_40]
 * 00000001402158FD: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 0000000140215901: movzx   ebp, [rsp+58h+arg_30]
 * 0000000140215909: mov     sil, r8b
 * 000000014021590C: lea     r8, aNull; "NULL"
 * 0000000140215913: mov     r14, r9
 * 0000000140215916: mov     r11, rcx
 * 0000000140215919: test    dl, dl
 * 000000014021591B: jz      short loc_140215991
 * 000000014021591D: mov     r10, cs:pfnWppTraceMessage
 * 0000000140215924: test    rdi, rdi
 * 0000000140215927: jz      short loc_14021593A
 * 0000000140215929: mov     rax, rbx
 * 000000014021592C: inc     rax
 * 000000014021592F: cmp     byte ptr [rdi+rax], 0
 * 0000000140215933: jnz     short loc_14021592C
 * 0000000140215935: inc     rax
 * 0000000140215938: jmp     short loc_14021593F
 * 000000014021593A: mov     eax, 5
 * 000000014021593F: lea     rdx, [rsp+58h+arg_48]
 * 0000000140215947: test    rdi, rdi
 * 000000014021594A: mov     rcx, rdi
 * 000000014021594D: mov     r9d, ebp
 * 0000000140215950: cmovz   rcx, r8
 * 0000000140215954: and     [rsp+58h+var_18], 0
 * 000000014021595A: mov     r8, [rsp+58h+arg_38]
 * 0000000140215962: mov     [rsp+58h+var_20], 4
 * 000000014021596B: mov     [rsp+58h+var_28], rdx
 * 0000000140215970: mov     edx, 2Bh ; '+'
 * 0000000140215975: mov     [rsp+58h+var_30], rax
 * 000000014021597A: mov     rax, r10
 * 000000014021597D: mov     [rsp+58h+var_38], rcx
 * 0000000140215982: mov     rcx, r11
 * 0000000140215985: call    _guard_dispatch_icall
 * 000000014021598A: lea     r8, aNull; "NULL"
 * 0000000140215991: test    sil, sil
 * 0000000140215994: jz      short loc_140215A07
 * 0000000140215996: test    rdi, rdi
 * 0000000140215999: jz      short loc_1402159A9
 * 000000014021599B: inc     rbx
 * 000000014021599E: cmp     byte ptr [rdi+rbx], 0
 * 00000001402159A2: jnz     short loc_14021599B
 * 00000001402159A4: inc     rbx
 * 00000001402159A7: jmp     short loc_1402159AE
 * 00000001402159A9: mov     ebx, 5
 * 00000001402159AE: mov     r9, [rsp+58h+arg_38]
 * 00000001402159B6: lea     rax, [rsp+58h+arg_48]
 * 00000001402159BE: movzx   edx, [rsp+58h+arg_20]
 * 00000001402159C6: test    rdi, rdi
 * 00000001402159C9: mov     rcx, r14
 * 00000001402159CC: cmovz   rdi, r8
 * 00000001402159D0: and     [rsp+58h+var_10], 0
 * 00000001402159D6: mov     r8d, [rsp+58h+arg_28]
 * 00000001402159DE: mov     [rsp+58h+var_18], 4
 * 00000001402159E7: mov     [rsp+58h+var_20], rax
 * 00000001402159EC: mov     [rsp+58h+var_28], rbx
 * 00000001402159F1: mov     [rsp+58h+var_30], rdi
 * 00000001402159F6: mov     word ptr [rsp+58h+var_38], bp
 * 00000001402159FB: call    cs:__imp_WppAutoLogTrace
 * 0000000140215A02: nop     dword ptr [rax+rax+00h]
 * 0000000140215A07: mov     rbx, [rsp+58h+arg_0]
 * 0000000140215A0C: mov     rbp, [rsp+58h+arg_8]
 * 0000000140215A11: mov     rsi, [rsp+58h+arg_10]
 * 0000000140215A16: mov     rdi, [rsp+58h+arg_18]
 * 0000000140215A1B: add     rsp, 50h
 * 0000000140215A1F: pop     r14
 * 0000000140215A21: retn
 */
