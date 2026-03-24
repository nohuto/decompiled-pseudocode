/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x14093C97C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14081EE70 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140724FD0 (ZwDeleteValueKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     RtlpGetRegistryHandle @ 0x140A11948 (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x140A11D10 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x140B46070 (RtlDeleteRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for PerfDiagpSaveActiveDCLLogFileName @ 0x14093C97C
 * Reason: Hex-Rays returned no pseudocode for 0x14093C97C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014093C97C: mov     [rsp+arg_10], rbx
 * 000000014093C981: push    rbp
 * 000000014093C982: sub     rsp, 40h
 * 000000014093C986: xor     ebp, ebp
 * 000000014093C988: mov     edx, 20Ah
 * 000000014093C98D: mov     ecx, 100h; BugCheckParameter3
 * 000000014093C992: mov     [rsp+48h+arg_0], ebp
 * 000000014093C996: mov     r8d, 64465250h
 * 000000014093C99C: call    ExAllocatePool2
 * 000000014093C9A1: mov     rbx, rax
 * 000000014093C9A4: test    rax, rax
 * 000000014093C9A7: jz      loc_14093CAC8
 * 000000014093C9AD: xor     edx, edx; Val
 * 000000014093C9AF: lea     rcx, stru_140F03F40.StackLimit; void *
 * 000000014093C9B6: mov     r8d, 0B0h; Size
 * 000000014093C9BC: call    memset_0
 * 000000014093C9C1: movups  xmm0, xmmword ptr cs:aWdicontextlog; "WdiContextLog"
 * 000000014093C9C8: mov     eax, dword ptr cs:aWdicontextlog+18h; "g"
 * 000000014093C9CE: lea     rdx, stru_140F03F40.Header.WaitListHead.Flink+4; SourceString
 * 000000014093C9D5: lea     rcx, stru_140F03F40.___u25+28h; DestinationString
 * 000000014093C9DC: mov     dword ptr cs:stru_140F03F40.KernelStack+4, 20000h
 * 000000014093C9E6: movups  xmmword ptr cs:stru_140F03F40.Header.WaitListHead.Flink+4, xmm0
 * 000000014093C9ED: mov     dword ptr cs:stru_140F03F40.QuantumTarget+4, eax
 * 000000014093C9F3: movsd   xmm0, qword ptr cs:aWdicontextlog+10h; "xtLog"
 * 000000014093C9FB: movsd   cs:stru_140F03F40.SListFaultAddress+4, xmm0
 * 000000014093CA03: call    RtlInitUnicodeString
 * 000000014093CA08: mov     eax, 208h
 * 000000014093CA0D: mov     qword ptr cs:stru_140F03F40.___u25+20h, rbx
 * 000000014093CA14: mov     word ptr cs:stru_140F03F40.___u25+1Ah, ax
 * 000000014093CA1B: lea     r9, stru_140F03F40.StackLimit
 * 000000014093CA22: lea     rax, [rsp+48h+arg_0]
 * 000000014093CA27: mov     dword ptr cs:stru_140F03F40.StackLimit, 0B0h
 * 000000014093CA31: mov     qword ptr [rsp+48h+ValueLength], rax
 * 000000014093CA36: lea     rdx, stru_140F03F40.StackLimit
 * 000000014093CA3D: mov     r8d, 0B0h
 * 000000014093CA43: mov     dword ptr [rsp+48h+ValueData], 0B0h
 * 000000014093CA4B: lea     ecx, [rbp+3]
 * 000000014093CA4E: call    NtTraceControl
 * 000000014093CA53: lea     ecx, [rbp+2]; RelativeTo
 * 000000014093CA56: test    eax, eax
 * 000000014093CA58: jns     loc_14093CAE2
 * 000000014093CA5E: xorps   xmm0, xmm0
 * 000000014093CA61: mov     [rsp+48h+KeyHandle], rbp
 * 000000014093CA66: lea     r9, [rsp+48h+KeyHandle]
 * 000000014093CA6B: mov     r8d, 1
 * 000000014093CA71: lea     rdx, aDiagnosticsPer_0; "Diagnostics\\Performance"
 * 000000014093CA78: movups  xmmword ptr [rsp+48h+DestinationString.Length], xmm0
 * 000000014093CA7D: call    RtlpGetRegistryHandle
 * 000000014093CA82: test    eax, eax
 * 000000014093CA84: jns     short loc_14093CA9C
 * 000000014093CA86: xor     edx, edx; Tag
 * 000000014093CA88: mov     rcx, rbx; P
 * 000000014093CA8B: call    ExFreePoolWithTag
 * 000000014093CA90: mov     rbx, [rsp+48h+arg_10]
 * 000000014093CA95: add     rsp, 40h
 * 000000014093CA99: pop     rbp
 * 000000014093CA9A: retn
 * 000000014093CA9C: lea     rdx, aActiveshutdown; "ActiveShutdownDCL"
 * 000000014093CAA3: lea     rcx, [rsp+48h+DestinationString]; DestinationString
 * 000000014093CAA8: call    RtlInitUnicodeString
 * 000000014093CAAD: mov     rcx, [rsp+48h+KeyHandle]; KeyHandle
 * 000000014093CAB2: lea     rdx, [rsp+48h+DestinationString]; ValueName
 * 000000014093CAB7: call    ZwDeleteValueKey
 * 000000014093CABC: mov     rcx, [rsp+48h+KeyHandle]; Handle
 * 000000014093CAC1: call    ZwClose
 * 000000014093CAC6: jmp     short loc_14093CA86
 * 000000014093CAC8: lea     r8, aActiveshutdown; "ActiveShutdownDCL"
 * 000000014093CACF: mov     ecx, 2; RelativeTo
 * 000000014093CAD4: lea     rdx, aDiagnosticsPer_0; "Diagnostics\\Performance"
 * 000000014093CADB: call    RtlDeleteRegistryValue
 * 000000014093CAE0: jmp     short loc_14093CA90
 * 000000014093CAE2: movzx   eax, word ptr cs:stru_140F03F40.___u25+18h
 * 000000014093CAE9: cmp     ax, cx
 * 000000014093CAEC: jb      loc_14093CA5E
 * 000000014093CAF2: shr     ax, 1
 * 000000014093CAF5: lea     rdx, aDiagnosticsPer_0; "Diagnostics\\Performance"
 * 000000014093CAFC: movzx   eax, ax
 * 000000014093CAFF: mov     r8d, 1
 * 000000014093CB05: mov     r9d, r8d; ValueType
 * 000000014093CB08: mov     [rbx+rax*2], bp
 * 000000014093CB0C: add     ax, r8w
 * 000000014093CB10: movzx   eax, ax
 * 000000014093CB13: lea     r8, aActiveshutdown; "ActiveShutdownDCL"
 * 000000014093CB1A: add     eax, eax
 * 000000014093CB1C: mov     [rsp+48h+ValueLength], eax; ValueLength
 * 000000014093CB20: mov     [rsp+48h+ValueData], rbx; ValueData
 * 000000014093CB25: call    RtlWriteRegistryValue
 * 000000014093CB2A: jmp     loc_14093CA86
 */
