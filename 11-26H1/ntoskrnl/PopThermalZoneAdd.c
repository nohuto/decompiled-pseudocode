/*
 * XREFs of PopThermalZoneAdd @ 0x1407D1E00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeInitializeIRTimer @ 0x140456C5C (KeInitializeIRTimer.c)
 *     KeInitializeTimer2 @ 0x140456ED0 (KeInitializeTimer2.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140607C84 (PopThermalUpdateTelemetryClientCount.c)
 *     PopChangeCapability @ 0x140943114 (PopChangeCapability.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneAdd @ 0x1407D1E00
 * Reason: Hex-Rays returned no pseudocode for 0x1407D1E00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D1E00: mov     [rsp+arg_8], rbx
 * 00000001407D1E05: push    rdi
 * 00000001407D1E06: sub     rsp, 30h
 * 00000001407D1E0A: mov     rbx, rcx
 * 00000001407D1E0D: lea     rdx, PopThermalZoneTimerCallback
 * 00000001407D1E14: add     rcx, 128h
 * 00000001407D1E1B: mov     r8, rbx
 * 00000001407D1E1E: cmp     dword ptr cs:unk_140F10E70, 0
 * 00000001407D1E25: jnz     short loc_1407D1E31
 * 00000001407D1E27: xor     r9d, r9d
 * 00000001407D1E2A: call    KeInitializeTimer2
 * 00000001407D1E2F: jmp     short loc_1407D1E4B
 * 00000001407D1E31: lea     r9, [rsp+38h+arg_0]
 * 00000001407D1E36: mov     [rsp+38h+arg_0], 40008h
 * 00000001407D1E3E: mov     [rsp+38h+var_18], 2
 * 00000001407D1E46: call    KeInitializeIRTimer
 * 00000001407D1E4B: mov     rax, [rbx+38h]
 * 00000001407D1E4F: mov     ecx, 64h ; 'd'
 * 00000001407D1E54: mov     [rbx+50h], ecx
 * 00000001407D1E57: xor     r8d, r8d; State
 * 00000001407D1E5A: mov     [rbx+54h], ecx
 * 00000001407D1E5D: xor     edx, edx; Type
 * 00000001407D1E5F: mov     byte ptr [rbx+40h], 6
 * 00000001407D1E63: mov     byte ptr [rbx+43h], 2
 * 00000001407D1E67: mov     word ptr [rbx+45h], 0FFFFh
 * 00000001407D1E6D: mov     dword ptr [rbx+4Ch], 3E8h
 * 00000001407D1E74: mov     dword ptr [rax+30h], 0C000009Dh
 * 00000001407D1E7B: mov     eax, dword ptr cs:unk_140F10E64
 * 00000001407D1E81: mov     [rbx+1F0h], eax
 * 00000001407D1E87: inc     eax
 * 00000001407D1E89: mov     [rbx+0D8h], ecx
 * 00000001407D1E8F: lea     rcx, [rbx+1C0h]; Event
 * 00000001407D1E96: mov     dword ptr cs:unk_140F10E64, eax
 * 00000001407D1E9C: call    KeInitializeEvent
 * 00000001407D1EA1: lea     rcx, [rbx+1D8h]; Event
 * 00000001407D1EA8: xor     r8d, r8d; State
 * 00000001407D1EAB: xor     edx, edx; Type
 * 00000001407D1EAD: call    KeInitializeEvent
 * 00000001407D1EB2: lea     rdi, [rbx+108h]
 * 00000001407D1EB9: mov     [rdi+18h], rbx
 * 00000001407D1EBD: lea     rax, PopThermalWorker
 * 00000001407D1EC4: mov     [rdi+10h], rax
 * 00000001407D1EC8: mov     rax, 0FFFFF78000000008h
 * 00000001407D1ED2: mov     qword ptr [rdi], 0
 * 00000001407D1ED9: mov     rax, [rax]
 * 00000001407D1EDC: mov     [rbx+200h], rax
 * 00000001407D1EE3: mov     [rbx+208h], rax
 * 00000001407D1EEA: mov     qword ptr [rbx+1B8h], 0
 * 00000001407D1EF5: mov     eax, dword ptr cs:unk_140F10E68
 * 00000001407D1EFB: inc     eax
 * 00000001407D1EFD: mov     qword ptr [rbx+1B0h], 0
 * 00000001407D1F08: mov     dword ptr cs:unk_140F10E68, eax
 * 00000001407D1F0E: cmp     eax, 1
 * 00000001407D1F11: jnz     short loc_1407D1F2B
 * 00000001407D1F13: call    PopAcquirePolicyLock
 * 00000001407D1F18: mov     dl, 1
 * 00000001407D1F1A: lea     rcx, stru_140F10828.___u33+25h
 * 00000001407D1F21: call    PopChangeCapability
 * 00000001407D1F26: call    PopReleasePolicyLock
 * 00000001407D1F2B: mov     cl, 1
 * 00000001407D1F2D: call    PopThermalUpdateTelemetryClientCount
 * 00000001407D1F32: mov     edx, 1; QueueType
 * 00000001407D1F37: mov     rcx, rdi; WorkItem
 * 00000001407D1F3A: call    ExQueueWorkItem
 * 00000001407D1F3F: mov     rbx, [rsp+38h+arg_8]
 * 00000001407D1F44: add     rsp, 30h
 * 00000001407D1F48: pop     rdi
 * 00000001407D1F49: retn
 */
