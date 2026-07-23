/*
 * XREFs of RtlReportException @ 0x18010B740
 * Callers:
 *     LdrpCallTlsInitializers @ 0x1800365C0 (LdrpCallTlsInitializers.c)
 *     RtlReportFatalFailure @ 0x180091238 (RtlReportFatalFailure.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800BF760 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpInitializeNode @ 0x18011A0B0 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x18011AE58 (LdrpProcessDetachNode.c)
 *     TppWorkerpInnerExceptionFilter @ 0x18011EFA4 (TppWorkerpInnerExceptionFilter.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F0A0 (RtlUnhandledExceptionFilter2.c)
 *     RtlpWnfUnexpectedCallbackExceptionFilter @ 0x180138D1C (RtlpWnfUnexpectedCallbackExceptionFilter.c)
 *     RtlReportExceptionEx @ 0x18013A710 (RtlReportExceptionEx.c)
 *     UcOnUnexpectedCodePath @ 0x180157700 (UcOnUnexpectedCodePath.c)
 *     TppReportExceptionFilter @ 0x1801592AC (TppReportExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x1801593F0 (TppWorkerpOuterExceptionFilter.c)
 *     LdrpInitializeProcessWrapperFilter @ 0x18015BF50 (LdrpInitializeProcessWrapperFilter.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015D708 (LdrpLogIntegrityContinuityTelemetry.c)
 * Callees:
 *     RtlReportExceptionHelper @ 0x18007F3E0 (RtlReportExceptionHelper.c)
 *     WerpBreakIntoDebuggerIfPresent @ 0x18010B7E4 (WerpBreakIntoDebuggerIfPresent.c)
 *     WerpIsProcessNative @ 0x1801203E0 (WerpIsProcessNative.c)
 */

/*
 * Hex-Rays decompilation failed for RtlReportException @ 0x18010B740
 * Reason: Hex-Rays returned no pseudocode for 0x18010B740
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018010B740: mov     rax, rsp
 * 000000018010B743: mov     [rax+8], rbx
 * 000000018010B747: mov     [rax+10h], rbp
 * 000000018010B74B: mov     [rax+18h], rsi
 * 000000018010B74F: push    rdi
 * 000000018010B750: sub     rsp, 20h
 * 000000018010B754: mov     qword ptr [rax+20h], 0
 * 000000018010B75C: mov     edi, r8d
 * 000000018010B75F: mov     rsi, rdx
 * 000000018010B762: mov     rbp, rcx
 * 000000018010B765: test    r8d, 0FFFFFFE0h
 * 000000018010B76C: jz      short loc_18010B789
 * 000000018010B76E: mov     eax, 0C000000Dh
 * 000000018010B773: mov     rbx, [rsp+28h+arg_0]
 * 000000018010B778: mov     rbp, [rsp+28h+arg_8]
 * 000000018010B77D: mov     rsi, [rsp+28h+arg_10]
 * 000000018010B782: add     rsp, 20h
 * 000000018010B786: pop     rdi
 * 000000018010B787: retn
 * 000000018010B789: call    WerpBreakIntoDebuggerIfPresent
 * 000000018010B78E: cmp     cs:LdrpIsSecureProcess, 0
 * 000000018010B795: jnz     short loc_18010B7CF
 * 000000018010B797: call    WerpIsProcessNative
 * 000000018010B79C: test    eax, eax
 * 000000018010B79E: jnz     short loc_18010B7D3
 * 000000018010B7A0: neg     eax
 * 000000018010B7A2: mov     r8d, edi
 * 000000018010B7A5: lea     rax, [rsp+28h+arg_18]
 * 000000018010B7AA: mov     rdx, rsi
 * 000000018010B7AD: sbb     r9, r9
 * 000000018010B7B0: mov     rcx, rbp
 * 000000018010B7B3: and     r9, rax
 * 000000018010B7B6: call    RtlReportExceptionHelper
 * 000000018010B7BB: mov     r8d, edi
 * 000000018010B7BE: mov     rdx, rsi; ContextRecord
 * 000000018010B7C1: mov     rcx, rbp; ExceptionRecord
 * 000000018010B7C4: mov     ebx, eax
 * 000000018010B7C6: call    WerpBreakIntoDebuggerIfPresent
 * 000000018010B7CB: mov     eax, ebx
 * 000000018010B7CD: jmp     short loc_18010B773
 * 000000018010B7CF: xor     eax, eax
 * 000000018010B7D1: jmp     short loc_18010B773
 * 000000018010B7D3: mov     [rsp+28h+arg_18], 0FFFFFFFFEE1E5D00h
 * 000000018010B7DC: jmp     short loc_18010B7A0
 */
