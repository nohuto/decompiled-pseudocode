/*
 * XREFs of PopThermalZoneRemove @ 0x1407D1F60
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x1403AA104 (KeDisableTimer2.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140510620 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyNotify @ 0x140607BF4 (PopThermalStandbyNotify.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140607C84 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalStandbyState @ 0x140609380 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x140609BCC (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060A1C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x14060A390 (PopTraceZoneCr3Mitigated.c)
 *     PopUpdateOverThrottledCount @ 0x1407D20B8 (PopUpdateOverThrottledCount.c)
 *     PopChangeCapability @ 0x140943114 (PopChangeCapability.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B2F378 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B41620 (PopThermalUpdateActiveTimeTracking.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneRemove @ 0x1407D1F60
 * Reason: Hex-Rays returned no pseudocode for 0x1407D1F60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D1F60: mov     [rsp+arg_8], rbx
 * 00000001407D1F65: push    rdi
 * 00000001407D1F66: sub     rsp, 30h
 * 00000001407D1F6A: mov     rbx, rcx
 * 00000001407D1F6D: mov     byte ptr [rcx+42h], 1
 * 00000001407D1F71: mov     rcx, [rcx+38h]; Irp
 * 00000001407D1F75: call    IoCancelIrp
 * 00000001407D1F7A: lea     rcx, [rbx+1C0h]; Object
 * 00000001407D1F81: mov     [rsp+38h+Timeout], 0; Timeout
 * 00000001407D1F8A: xor     r9d, r9d; Alertable
 * 00000001407D1F8D: xor     r8d, r8d; WaitMode
 * 00000001407D1F90: xor     edx, edx; WaitReason
 * 00000001407D1F92: call    KeWaitForSingleObject
 * 00000001407D1F97: cmp     byte ptr [rbx+91h], 0
 * 00000001407D1F9E: lea     rdi, [rbx+1F8h]
 * 00000001407D1FA5: jz      short loc_1407D1FBA
 * 00000001407D1FA7: mov     dl, [rbx+50h]
 * 00000001407D1FAA: mov     rcx, rdi
 * 00000001407D1FAD: call    PopThermalUpdatePassiveTimeTracking
 * 00000001407D1FB2: mov     rcx, rbx
 * 00000001407D1FB5: call    PopTraceThermalZonePassiveHistogram
 * 00000001407D1FBA: cmp     byte ptr [rbx+1F9h], 0
 * 00000001407D1FC1: jbe     short loc_1407D1FD6
 * 00000001407D1FC3: mov     dl, [rbx+45h]
 * 00000001407D1FC6: mov     rcx, rdi
 * 00000001407D1FC9: call    PopThermalUpdateActiveTimeTracking
 * 00000001407D1FCE: mov     rcx, rbx
 * 00000001407D1FD1: call    PopTraceThermalZoneActiveActivity
 * 00000001407D1FD6: or      edi, 0FFFFFFFFh
 * 00000001407D1FD9: cmp     byte ptr [rbx+48h], 0
 * 00000001407D1FDD: jz      short loc_1407D2041
 * 00000001407D1FDF: mov     rcx, [rbx+30h]
 * 00000001407D1FE3: xor     edx, edx
 * 00000001407D1FE5: call    PopDiagTraceThermalStandbyState
 * 00000001407D1FEA: lea     rcx, stru_140F0F620.SchedulerAssistPriorityFloor
 * 00000001407D1FF1: call    PopAcquireRwLockExclusive
 * 00000001407D1FF6: mov     ecx, dword ptr cs:stru_140F0F620.KernelShadowStackBase
 * 00000001407D1FFC: mov     rdx, rbx
 * 00000001407D1FFF: add     dword ptr cs:stru_140F0F620.KernelShadowStackInitial+4, edi
 * 00000001407D2005: call    PopTraceZoneCr3Mitigated
 * 00000001407D200A: cmp     dword ptr cs:stru_140F0F620.KernelShadowStackInitial+4, 0
 * 00000001407D2011: jnz     short loc_1407D2035
 * 00000001407D2013: mov     ecx, dword ptr cs:stru_140F0F620.KernelShadowStackBase
 * 00000001407D2019: call    PopTraceCr3Mitigated
 * 00000001407D201E: cmp     byte ptr cs:stru_140F0F620.KernelShadowStackInitial+1, 1
 * 00000001407D2025: jnz     short loc_1407D2035
 * 00000001407D2027: xor     ecx, ecx
 * 00000001407D2029: call    PopThermalStandbyNotify
 * 00000001407D202E: mov     byte ptr cs:stru_140F0F620.KernelShadowStackInitial+1, 0
 * 00000001407D2035: lea     rcx, stru_140F0F620.SchedulerAssistPriorityFloor; struct _KTHREAD *
 * 00000001407D203C: call    PopReleaseRwLock
 * 00000001407D2041: cmp     byte ptr [rbx+49h], 0
 * 00000001407D2045: jz      short loc_1407D2051
 * 00000001407D2047: xor     edx, edx
 * 00000001407D2049: mov     rcx, rbx
 * 00000001407D204C: call    PopUpdateOverThrottledCount
 * 00000001407D2051: mov     r8b, 1
 * 00000001407D2054: lea     rcx, [rbx+128h]
 * 00000001407D205B: mov     dl, r8b
 * 00000001407D205E: xor     r9d, r9d
 * 00000001407D2061: call    KeDisableTimer2
 * 00000001407D2066: or      byte ptr [rbx+41h], 80h
 * 00000001407D206A: add     dword ptr cs:unk_140F10E68, edi
 * 00000001407D2070: jnz     short loc_1407D208A
 * 00000001407D2072: call    PopAcquirePolicyLock
 * 00000001407D2077: xor     edx, edx
 * 00000001407D2079: lea     rcx, stru_140F10828.___u33+25h
 * 00000001407D2080: call    PopChangeCapability
 * 00000001407D2085: call    PopReleasePolicyLock
 * 00000001407D208A: xor     ecx, ecx
 * 00000001407D208C: call    PopThermalUpdateTelemetryClientCount
 * 00000001407D2091: mov     rcx, [rbx+418h]; P
 * 00000001407D2098: test    rcx, rcx
 * 00000001407D209B: jz      short loc_1407D20A4
 * 00000001407D209D: xor     edx, edx; Tag
 * 00000001407D209F: call    ExFreePoolWithTag
 * 00000001407D20A4: mov     rbx, [rsp+38h+arg_8]
 * 00000001407D20A9: add     rsp, 30h
 * 00000001407D20AD: pop     rdi
 * 00000001407D20AE: retn
 */
