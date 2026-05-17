/*
 * XREFs of RtlReportException @ 0x18010BBF0
 * Callers:
 *     LdrpCallTlsInitializers @ 0x18004C040 (LdrpCallTlsInitializers.c)
 *     RtlReportFatalFailure @ 0x180070DE8 (RtlReportFatalFailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800C1AB0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpInitializeNode @ 0x18011A300 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x18011B0A8 (LdrpProcessDetachNode.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18011F1F4 (TppWorkerpInnerExceptionFilter.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F2F0 (RtlUnhandledExceptionFilter2.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x180138FAC (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     RtlReportExceptionEx @ 0x18013A9A0 (RtlReportExceptionEx.c)
 *     UcOnUnexpectedCodePath @ 0x180157830 (UcOnUnexpectedCodePath.c)
 *     TppReportExceptionFilter @ 0x1801593DC (TppReportExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x180159520 (TppWorkerpOuterExceptionFilter.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015C090 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015D848 (LdrpLogIntegrityContinuityTelemetry.c)
 * Callees:
 *     RtlReportExceptionHelper @ 0x180088060 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010BC94 (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpIsProcessNative @ 0x180120630 (WerpIsProcessNative.c)
 */

/*
 * Hex-Rays decompilation failed for RtlReportException @ 0x18010BBF0
 * Reason: Hex-Rays returned no pseudocode for 0x18010BBF0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018010BBF0: mov     rax, rsp
 * 000000018010BBF3: mov     [rax+8], rbx
 * 000000018010BBF7: mov     [rax+10h], rbp
 * 000000018010BBFB: mov     [rax+18h], rsi
 * 000000018010BBFF: push    rdi
 * 000000018010BC00: sub     rsp, 20h
 * 000000018010BC04: mov     qword ptr [rax+20h], 0
 * 000000018010BC0C: mov     edi, r8d
 * 000000018010BC0F: mov     rsi, rdx
 * 000000018010BC12: mov     rbp, rcx
 * 000000018010BC15: test    r8d, 0FFFFFFE0h
 * 000000018010BC1C: jz      short loc_18010BC39
 * 000000018010BC1E: mov     eax, 0C000000Dh
 * 000000018010BC23: mov     rbx, [rsp+28h+arg_0]
 * 000000018010BC28: mov     rbp, [rsp+28h+arg_8]
 * 000000018010BC2D: mov     rsi, [rsp+28h+arg_10]
 * 000000018010BC32: add     rsp, 20h
 * 000000018010BC36: pop     rdi
 * 000000018010BC37: retn
 * 000000018010BC39: call    WerpBreakIntoDebuggerIfPresent
 * 000000018010BC3E: cmp     cs:LdrpIsSecureProcess, 0
 * 000000018010BC45: jnz     short loc_18010BC7F
 * 000000018010BC47: call    WerpIsProcessNative
 * 000000018010BC4C: test    eax, eax
 * 000000018010BC4E: jnz     short loc_18010BC83
 * 000000018010BC50: neg     eax
 * 000000018010BC52: mov     r8d, edi
 * 000000018010BC55: lea     rax, [rsp+28h+arg_18]
 * 000000018010BC5A: mov     rdx, rsi
 * 000000018010BC5D: sbb     r9, r9
 * 000000018010BC60: mov     rcx, rbp
 * 000000018010BC63: and     r9, rax
 * 000000018010BC66: call    RtlReportExceptionHelper
 * 000000018010BC6B: mov     r8d, edi
 * 000000018010BC6E: mov     rdx, rsi
 * 000000018010BC71: mov     rcx, rbp
 * 000000018010BC74: mov     ebx, eax
 * 000000018010BC76: call    WerpBreakIntoDebuggerIfPresent
 * 000000018010BC7B: mov     eax, ebx
 * 000000018010BC7D: jmp     short loc_18010BC23
 * 000000018010BC7F: xor     eax, eax
 * 000000018010BC81: jmp     short loc_18010BC23
 * 000000018010BC83: mov     [rsp+28h+arg_18], 0FFFFFFFFEE1E5D00h
 * 000000018010BC8C: jmp     short loc_18010BC50
 */
