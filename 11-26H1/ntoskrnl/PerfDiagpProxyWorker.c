/*
 * XREFs of PerfDiagpProxyWorker @ 0x14081EE70
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline @ 0x1406C341C (Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14081ED8C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14081F0A4 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14081F17C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14093C97C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 *     PerfDiagpIsTracingAllowed @ 0x140B3AD7C (PerfDiagpIsTracingAllowed.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for PerfDiagpProxyWorker @ 0x14081EE70
 * Reason: Hex-Rays returned no pseudocode for 0x14081EE70
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014081EE70: test    rcx, rcx
 * 000000014081EE73: jz      locret_14081F046
 * 000000014081EE79: mov     rax, rsp
 * 000000014081EE7C: mov     [rax+10h], rbx
 * 000000014081EE80: mov     [rax+18h], rbp
 * 000000014081EE84: mov     [rax+20h], rsi
 * 000000014081EE88: push    rdi
 * 000000014081EE89: sub     rsp, 30h
 * 000000014081EE8D: mov     edi, [rcx+20h]
 * 000000014081EE90: xor     edx, edx; Tag
 * 000000014081EE92: mov     dword ptr [rax+8], 0
 * 000000014081EE99: call    ExFreePoolWithTag
 * 000000014081EE9E: mov     rax, gs:188h
 * 000000014081EEA7: lea     rbp, stru_140F03F40
 * 000000014081EEAE: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 000000014081EEB2: xor     r8d, r8d
 * 000000014081EEB5: xor     edx, edx; this
 * 000000014081EEB7: mov     rcx, rbp; struct _KTHREAD *
 * 000000014081EEBA: add     [rax+1E4h], bx
 * 000000014081EEC1: nop
 * 000000014081EEC2: call    KeAbPreAcquire
 * 000000014081EEC7: lock bts qword ptr [rbp+0], 0
 * 000000014081EECE: mov     rsi, rax
 * 000000014081EED1: jnb     short loc_14081EEE1
 * 000000014081EED3: mov     r8, rbp
 * 000000014081EED6: mov     rdx, rax
 * 000000014081EED9: mov     rcx, rbp
 * 000000014081EEDC: call    ExfAcquirePushLockExclusiveEx
 * 000000014081EEE1: test    rsi, rsi
 * 000000014081EEE4: jz      short loc_14081EEFE
 * 000000014081EEE6: mov     eax, cs:?KiAbpGlobalState@@3UKI_AB_GLOBAL_STATE@@A; KI_AB_GLOBAL_STATE KiAbpGlobalState
 * 000000014081EEEC: test    al, 1
 * 000000014081EEEE: jz      short loc_14081EEFA
 * 000000014081EEF0: mov     rcx, rsi; this
 * 000000014081EEF3: call    ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z; AutoBoost::KiAbpPostAcquire(void *)
 * 000000014081EEF8: jmp     short loc_14081EEFE
 * 000000014081EEFA: mov     byte ptr [rsi+0Ah], 1
 * 000000014081EEFE: call    PerfDiagpIsTracingAllowed
 * 000000014081EF03: mov     esi, 2
 * 000000014081EF08: test    eax, eax
 * 000000014081EF0A: jz      loc_14081F002
 * 000000014081EF10: mov     ecx, dword ptr cs:stru_140F03F40.Header.WaitListHead.Flink
 * 000000014081EF16: lea     eax, [rdi-1]
 * 000000014081EF19: cmp     ecx, eax
 * 000000014081EF1B: jz      short loc_14081EF45
 * 000000014081EF1D: cmp     edi, 3
 * 000000014081EF20: jnz     short loc_14081EF2C
 * 000000014081EF22: cmp     ecx, 1
 * 000000014081EF25: jnz     short loc_14081EF36
 * 000000014081EF27: jmp     loc_14081EFFA
 * 000000014081EF2C: lea     eax, [rdi-5]
 * 000000014081EF2F: test    eax, 0FFFFFFFDh
 * 000000014081EF34: jz      short loc_14081EF45
 * 000000014081EF36: cmp     edi, ecx
 * 000000014081EF38: jge     loc_14081F002
 * 000000014081EF3E: mov     edi, ecx
 * 000000014081EF40: jmp     loc_14081EFFA
 * 000000014081EF45: call    Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline
 * 000000014081EF4A: test    eax, eax
 * 000000014081EF4C: lea     rcx, aDiagnosticsPer; "Diagnostics\\Performance\\BootCKCLSetti"...
 * 000000014081EF53: lea     r8, aDiagnosticsPer_2; "Diagnostics\\Performance\\BootCKCLSetti"...
 * 000000014081EF5A: cmovz   r8, rcx
 * 000000014081EF5E: mov     ecx, edi
 * 000000014081EF60: sub     ecx, 1
 * 000000014081EF63: jz      loc_14081EFEE
 * 000000014081EF69: sub     ecx, 1
 * 000000014081EF6C: jz      short loc_14081EFE5
 * 000000014081EF6E: sub     ecx, 1
 * 000000014081EF71: jz      short loc_14081EFD4
 * 000000014081EF73: sub     ecx, 1
 * 000000014081EF76: jz      short loc_14081EF95
 * 000000014081EF78: sub     ecx, 1
 * 000000014081EF7B: jz      short loc_14081EFCB
 * 000000014081EF7D: sub     ecx, 1
 * 000000014081EF80: jz      short loc_14081EF95
 * 000000014081EF82: cmp     ecx, 1
 * 000000014081EF85: jnz     short loc_14081EFFA
 * 000000014081EF87: call    PerfDiagpSaveActiveDCLLogFileName
 * 000000014081EF8C: lea     rcx, aDiagnosticsPer_3; "Diagnostics\\Performance\\ShutdownCKCLS"...
 * 000000014081EF93: jmp     short loc_14081EFF1
 * 000000014081EF95: xor     edx, edx
 * 000000014081EF97: xor     ecx, ecx
 * 000000014081EF99: call    PerfDiagpInitializeLoggerInfo
 * 000000014081EF9E: mov     r8d, dword ptr cs:stru_140F03F40.StackLimit
 * 000000014081EFA5: lea     rax, [rsp+38h+arg_0]
 * 000000014081EFAA: mov     [rsp+38h+var_10], rax
 * 000000014081EFAF: lea     r9, stru_140F03F40.StackLimit
 * 000000014081EFB6: lea     rdx, stru_140F03F40.StackLimit
 * 000000014081EFBD: mov     [rsp+38h+var_18], r8d
 * 000000014081EFC2: mov     ecx, esi
 * 000000014081EFC4: call    NtTraceControl
 * 000000014081EFC9: jmp     short loc_14081EFFA
 * 000000014081EFCB: lea     rcx, aDiagnosticsPer_1; "Diagnostics\\Performance\\SecondaryLogo"...
 * 000000014081EFD2: jmp     short loc_14081EFF1
 * 000000014081EFD4: lea     rdx, aEnablekernelfl; "EnableKernelFlags"
 * 000000014081EFDB: mov     rcx, r8
 * 000000014081EFDE: call    PerfDiagpUpdatePerfDiagLoggerEnableFlags
 * 000000014081EFE3: jmp     short loc_14081EFF6
 * 000000014081EFE5: lea     rdx, aWaitingforlogo; "WaitingForLogonEnableKernelFlags"
 * 000000014081EFEC: jmp     short loc_14081EFDB
 * 000000014081EFEE: mov     rcx, r8; pszSrc
 * 000000014081EFF1: call    PerfDiagpStartPerfDiagLogger
 * 000000014081EFF6: test    eax, eax
 * 000000014081EFF8: js      short loc_14081F002
 * 000000014081EFFA: mov     dword ptr cs:stru_140F03F40.Header.WaitListHead.Flink, edi
 * 000000014081F000: jmp     short loc_14081F00C
 * 000000014081F002: mov     dword ptr cs:stru_140F03F40.Header.WaitListHead.Flink, 8
 * 000000014081F00C: lock xadd qword ptr cs:stru_140F03F40.Header, rbx
 * 000000014081F015: and     bl, 6
 * 000000014081F018: cmp     bl, sil
 * 000000014081F01B: jnz     short loc_14081F025
 * 000000014081F01D: mov     rcx, rbp
 * 000000014081F020: call    ExfTryToWakePushLock
 * 000000014081F025: mov     rcx, rbp; struct _KTHREAD *
 * 000000014081F028: call    KeAbPostRelease
 * 000000014081F02D: call    KeLeaveCriticalRegion
 * 000000014081F032: mov     rbx, [rsp+38h+arg_8]
 * 000000014081F037: mov     rbp, [rsp+38h+arg_10]
 * 000000014081F03C: mov     rsi, [rsp+38h+arg_18]
 * 000000014081F041: add     rsp, 30h
 * 000000014081F045: pop     rdi
 * 000000014081F046: retn
 */
