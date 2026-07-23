/*
 * XREFs of PopThermalZoneAdd @ 0x1407D4EA0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KeInitializeIRTimer @ 0x14044E4C8 (KeInitializeIRTimer.c)
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     PopChangeCapability @ 0x1409BEA8C (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneAdd @ 0x1407D4EA0
 * Reason: Hex-Rays returned no pseudocode for 0x1407D4EA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D4EA0: mov     [rsp+arg_8], rbx
 * 00000001407D4EA5: push    rdi
 * 00000001407D4EA6: sub     rsp, 30h
 * 00000001407D4EAA: mov     rbx, rcx
 * 00000001407D4EAD: lea     rdx, PopThermalZoneTimerCallback
 * 00000001407D4EB4: add     rcx, 128h
 * 00000001407D4EBB: mov     r8, rbx
 * 00000001407D4EBE: cmp     cs:PopThermalPollingMode, 0
 * 00000001407D4EC5: jnz     short loc_1407D4ED1
 * 00000001407D4EC7: xor     r9d, r9d
 * 00000001407D4ECA: call    KeInitializeTimer2
 * 00000001407D4ECF: jmp     short loc_1407D4EEB
 * 00000001407D4ED1: lea     r9, [rsp+38h+arg_0]
 * 00000001407D4ED6: mov     [rsp+38h+arg_0], 40008h
 * 00000001407D4EDE: mov     [rsp+38h+var_18], 2
 * 00000001407D4EE6: call    KeInitializeIRTimer
 * 00000001407D4EEB: mov     rax, [rbx+38h]
 * 00000001407D4EEF: mov     ecx, 64h ; 'd'
 * 00000001407D4EF4: mov     [rbx+50h], ecx
 * 00000001407D4EF7: xor     r8d, r8d; State
 * 00000001407D4EFA: mov     [rbx+54h], ecx
 * 00000001407D4EFD: xor     edx, edx; Type
 * 00000001407D4EFF: mov     byte ptr [rbx+40h], 6
 * 00000001407D4F03: mov     byte ptr [rbx+43h], 2
 * 00000001407D4F07: mov     word ptr [rbx+45h], 0FFFFh
 * 00000001407D4F0D: mov     dword ptr [rbx+4Ch], 3E8h
 * 00000001407D4F14: mov     dword ptr [rax+30h], 0C000009Dh
 * 00000001407D4F1B: mov     eax, cs:PopThermalZoneNextId
 * 00000001407D4F21: mov     [rbx+1F0h], eax
 * 00000001407D4F27: inc     eax
 * 00000001407D4F29: mov     [rbx+0D8h], ecx
 * 00000001407D4F2F: lea     rcx, [rbx+1C0h]; Event
 * 00000001407D4F36: mov     cs:PopThermalZoneNextId, eax
 * 00000001407D4F3C: call    KeInitializeEvent
 * 00000001407D4F41: lea     rcx, [rbx+1D8h]; Event
 * 00000001407D4F48: xor     r8d, r8d; State
 * 00000001407D4F4B: xor     edx, edx; Type
 * 00000001407D4F4D: call    KeInitializeEvent
 * 00000001407D4F52: lea     rdi, [rbx+108h]
 * 00000001407D4F59: mov     [rdi+18h], rbx
 * 00000001407D4F5D: lea     rax, PopThermalWorker
 * 00000001407D4F64: mov     [rdi+10h], rax
 * 00000001407D4F68: mov     rax, 0FFFFF78000000008h
 * 00000001407D4F72: mov     qword ptr [rdi], 0
 * 00000001407D4F79: mov     rax, [rax]
 * 00000001407D4F7C: mov     [rbx+200h], rax
 * 00000001407D4F83: mov     [rbx+208h], rax
 * 00000001407D4F8A: mov     qword ptr [rbx+1B8h], 0
 * 00000001407D4F95: mov     eax, cs:PopThermalZoneCount
 * 00000001407D4F9B: inc     eax
 * 00000001407D4F9D: mov     qword ptr [rbx+1B0h], 0
 * 00000001407D4FA8: mov     cs:PopThermalZoneCount, eax
 * 00000001407D4FAE: cmp     eax, 1
 * 00000001407D4FB1: jnz     short loc_1407D4FCB
 * 00000001407D4FB3: call    PopAcquirePolicyLock
 * 00000001407D4FB8: mov     dl, 1
 * 00000001407D4FBA: lea     rcx, PpmIdlePolicyLock.Padding+15h
 * 00000001407D4FC1: call    PopChangeCapability
 * 00000001407D4FC6: call    PopReleasePolicyLock
 * 00000001407D4FCB: mov     cl, 1
 * 00000001407D4FCD: call    PopThermalUpdateTelemetryClientCount
 * 00000001407D4FD2: mov     edx, 1; QueueType
 * 00000001407D4FD7: mov     rcx, rdi; WorkItem
 * 00000001407D4FDA: call    ExQueueWorkItem
 * 00000001407D4FDF: mov     rbx, [rsp+38h+arg_8]
 * 00000001407D4FE4: add     rsp, 30h
 * 00000001407D4FE8: pop     rdi
 * 00000001407D4FE9: retn
 */
