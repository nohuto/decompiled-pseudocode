/*
 * XREFs of PopThermalZoneRemove @ 0x1407D5000
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeDisableTimer2 @ 0x1403B3D14 (KeDisableTimer2.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14050A090 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyNotify @ 0x14060A7A4 (PopThermalStandbyNotify.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     PopDiagTraceThermalStandbyState @ 0x14060BF40 (PopDiagTraceThermalStandbyState.c)
 *     PopTraceCr3Mitigated @ 0x14060C78C (PopTraceCr3Mitigated.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060CD80 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceZoneCr3Mitigated @ 0x14060CF50 (PopTraceZoneCr3Mitigated.c)
 *     PopUpdateOverThrottledCount @ 0x1407D5158 (PopUpdateOverThrottledCount.c)
 *     PopChangeCapability @ 0x1409BEA8C (PopChangeCapability.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B31158 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B43630 (PopThermalUpdateActiveTimeTracking.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneRemove @ 0x1407D5000
 * Reason: Hex-Rays returned no pseudocode for 0x1407D5000
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D5000: mov     [rsp+arg_8], rbx
 * 00000001407D5005: push    rdi
 * 00000001407D5006: sub     rsp, 30h
 * 00000001407D500A: mov     rbx, rcx
 * 00000001407D500D: mov     byte ptr [rcx+42h], 1
 * 00000001407D5011: mov     rcx, [rcx+38h]; Irp
 * 00000001407D5015: call    IoCancelIrp
 * 00000001407D501A: lea     rcx, [rbx+1C0h]; Object
 * 00000001407D5021: mov     [rsp+38h+Timeout], 0; Timeout
 * 00000001407D502A: xor     r9d, r9d; Alertable
 * 00000001407D502D: xor     r8d, r8d; WaitMode
 * 00000001407D5030: xor     edx, edx; WaitReason
 * 00000001407D5032: call    KeWaitForSingleObject
 * 00000001407D5037: cmp     byte ptr [rbx+91h], 0
 * 00000001407D503E: lea     rdi, [rbx+1F8h]
 * 00000001407D5045: jz      short loc_1407D505A
 * 00000001407D5047: mov     dl, [rbx+50h]
 * 00000001407D504A: mov     rcx, rdi
 * 00000001407D504D: call    PopThermalUpdatePassiveTimeTracking
 * 00000001407D5052: mov     rcx, rbx
 * 00000001407D5055: call    PopTraceThermalZonePassiveHistogram
 * 00000001407D505A: cmp     byte ptr [rbx+1F9h], 0
 * 00000001407D5061: jbe     short loc_1407D5076
 * 00000001407D5063: mov     dl, [rbx+45h]
 * 00000001407D5066: mov     rcx, rdi
 * 00000001407D5069: call    PopThermalUpdateActiveTimeTracking
 * 00000001407D506E: mov     rcx, rbx
 * 00000001407D5071: call    PopTraceThermalZoneActiveActivity
 * 00000001407D5076: or      edi, 0FFFFFFFFh
 * 00000001407D5079: cmp     byte ptr [rbx+48h], 0
 * 00000001407D507D: jz      short loc_1407D50E1
 * 00000001407D507F: mov     rcx, [rbx+30h]
 * 00000001407D5083: xor     edx, edx
 * 00000001407D5085: call    PopDiagTraceThermalStandbyState
 * 00000001407D508A: lea     rcx, PopSystemThermalInfo
 * 00000001407D5091: call    PopAcquireRwLockExclusive
 * 00000001407D5096: mov     ecx, cs:dword_140F0FE78
 * 00000001407D509C: mov     rdx, rbx
 * 00000001407D509F: add     cs:dword_140F0FE74, edi
 * 00000001407D50A5: call    PopTraceZoneCr3Mitigated
 * 00000001407D50AA: cmp     cs:dword_140F0FE74, 0
 * 00000001407D50B1: jnz     short loc_1407D50D5
 * 00000001407D50B3: mov     ecx, cs:dword_140F0FE78
 * 00000001407D50B9: call    PopTraceCr3Mitigated
 * 00000001407D50BE: cmp     byte ptr cs:word_140F0FE70+1, 1
 * 00000001407D50C5: jnz     short loc_1407D50D5
 * 00000001407D50C7: xor     ecx, ecx
 * 00000001407D50C9: call    PopThermalStandbyNotify
 * 00000001407D50CE: mov     byte ptr cs:word_140F0FE70+1, 0
 * 00000001407D50D5: lea     rcx, PopSystemThermalInfo
 * 00000001407D50DC: call    PopReleaseRwLock
 * 00000001407D50E1: cmp     byte ptr [rbx+49h], 0
 * 00000001407D50E5: jz      short loc_1407D50F1
 * 00000001407D50E7: xor     edx, edx
 * 00000001407D50E9: mov     rcx, rbx
 * 00000001407D50EC: call    PopUpdateOverThrottledCount
 * 00000001407D50F1: mov     r8b, 1
 * 00000001407D50F4: lea     rcx, [rbx+128h]
 * 00000001407D50FB: mov     dl, r8b
 * 00000001407D50FE: xor     r9d, r9d
 * 00000001407D5101: call    KeDisableTimer2
 * 00000001407D5106: or      byte ptr [rbx+41h], 80h
 * 00000001407D510A: add     cs:PopThermalZoneCount, edi
 * 00000001407D5110: jnz     short loc_1407D512A
 * 00000001407D5112: call    PopAcquirePolicyLock
 * 00000001407D5117: xor     edx, edx
 * 00000001407D5119: lea     rcx, PpmIdlePolicyLock.Padding+15h
 * 00000001407D5120: call    PopChangeCapability
 * 00000001407D5125: call    PopReleasePolicyLock
 * 00000001407D512A: xor     ecx, ecx
 * 00000001407D512C: call    PopThermalUpdateTelemetryClientCount
 * 00000001407D5131: mov     rcx, [rbx+418h]; P
 * 00000001407D5138: test    rcx, rcx
 * 00000001407D513B: jz      short loc_1407D5144
 * 00000001407D513D: xor     edx, edx; Tag
 * 00000001407D513F: call    ExFreePoolWithTag
 * 00000001407D5144: mov     rbx, [rsp+38h+arg_8]
 * 00000001407D5149: add     rsp, 30h
 * 00000001407D514D: pop     rdi
 * 00000001407D514E: retn
 */
