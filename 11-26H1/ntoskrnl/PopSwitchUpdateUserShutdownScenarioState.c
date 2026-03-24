/*
 * XREFs of PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634
 * Callers:
 *     PoUserShutdownCancelled @ 0x14077B960 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x140B46F30 (PoUserShutdownInitiated.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140256460 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140256500 (SleepstudyHelperBlockerActiveReference.c)
 *     PpmEndHighPerfRequest @ 0x1404A6098 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1404A6170 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopTransitionCheckpoint @ 0x140B1B69C (PopTransitionCheckpoint.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopSwitchUpdateUserShutdownScenarioState @ 0x1407D1634
 * Reason: Hex-Rays returned no pseudocode for 0x1407D1634
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D1634: mov     [rsp+arg_0], rbx
 * 00000001407D1639: push    rdi
 * 00000001407D163A: sub     rsp, 20h
 * 00000001407D163E: mov     ebx, ecx
 * 00000001407D1640: call    PopAcquirePolicyLock
 * 00000001407D1645: cmp     cs:PopUserShutdownScenarioTargetState, ebx
 * 00000001407D164B: jz      loc_1407D1781
 * 00000001407D1651: mov     eax, cs:PopUserShutdownScenarioCurrentState
 * 00000001407D1657: mov     cs:PopUserShutdownScenarioTargetState, ebx
 * 00000001407D165D: mov     byte ptr cs:unk_140F10F24, 1
 * 00000001407D1664: test    eax, 0FFFFFFFDh
 * 00000001407D1669: jz      loc_1407D1781
 * 00000001407D166F: cmp     eax, ebx
 * 00000001407D1671: jz      loc_1407D1781
 * 00000001407D1677: mov     edi, ebx
 * 00000001407D1679: mov     bl, byte ptr cs:unk_140F10F24
 * 00000001407D167F: lea     eax, [rdi-1]
 * 00000001407D1682: mov     cs:PopUserShutdownScenarioCurrentState, eax
 * 00000001407D1688: call    PopReleasePolicyLock
 * 00000001407D168D: mov     ecx, edi
 * 00000001407D168F: sub     ecx, 1
 * 00000001407D1692: jz      short loc_1407D1705
 * 00000001407D1694: cmp     ecx, 2
 * 00000001407D1697: jnz     loc_1407D1768
 * 00000001407D169D: xor     edx, edx
 * 00000001407D169F: lea     ecx, [rdx+7]
 * 00000001407D16A2: call    PopTransitionCheckpoint
 * 00000001407D16A7: mov     edx, 1
 * 00000001407D16AC: lea     rcx, stru_140F12D20.SchedulerAssistPriorityFloor
 * 00000001407D16B3: call    PopQueueWorkItem
 * 00000001407D16B8: mov     rax, cs:qword_140E67538
 * 00000001407D16BF: mov     dword ptr cs:stru_140E66FF0.___u57+10h, 1
 * 00000001407D16C9: test    rax, rax
 * 00000001407D16CC: jz      short loc_1407D16D3
 * 00000001407D16CE: call    _guard_dispatch_icall_no_overrides
 * 00000001407D16D3: mov     rcx, cs:qword_140F11008
 * 00000001407D16DA: test    rcx, rcx
 * 00000001407D16DD: jz      short loc_1407D16FE
 * 00000001407D16DF: mov     dl, 1
 * 00000001407D16E1: call    cs:__imp_PdcTaskClientRequest
 * 00000001407D16E8: nop     dword ptr [rax+rax+00h]
 * 00000001407D16ED: mov     rcx, cs:qword_140F10FF0; SpinLock
 * 00000001407D16F4: test    rcx, rcx
 * 00000001407D16F7: jz      short loc_1407D16FE
 * 00000001407D16F9: call    SleepstudyHelperBlockerActiveReference
 * 00000001407D16FE: call    PpmBeginHighPerfRequest
 * 00000001407D1703: jmp     short loc_1407D1768
 * 00000001407D1705: mov     edx, 1
 * 00000001407D170A: lea     rcx, stru_140F12D20.Spare35+8
 * 00000001407D1711: call    PopQueueWorkItem
 * 00000001407D1716: mov     rax, cs:qword_140E67540
 * 00000001407D171D: mov     dword ptr cs:stru_140E66FF0.___u57+10h, 0
 * 00000001407D1727: test    rax, rax
 * 00000001407D172A: jz      short loc_1407D1733
 * 00000001407D172C: mov     cl, bl
 * 00000001407D172E: call    _guard_dispatch_icall_no_overrides
 * 00000001407D1733: mov     rcx, cs:qword_140F11008
 * 00000001407D173A: test    rcx, rcx
 * 00000001407D173D: jz      short loc_1407D175E
 * 00000001407D173F: xor     edx, edx
 * 00000001407D1741: call    cs:__imp_PdcTaskClientRequest
 * 00000001407D1748: nop     dword ptr [rax+rax+00h]
 * 00000001407D174D: mov     rcx, cs:qword_140F10FF0; SpinLock
 * 00000001407D1754: test    rcx, rcx
 * 00000001407D1757: jz      short loc_1407D175E
 * 00000001407D1759: call    SleepstudyHelperBlockerActiveDereference
 * 00000001407D175E: mov     ecx, 3
 * 00000001407D1763: call    PpmEndHighPerfRequest
 * 00000001407D1768: call    PopAcquirePolicyLock
 * 00000001407D176D: mov     ebx, cs:PopUserShutdownScenarioTargetState
 * 00000001407D1773: mov     cs:PopUserShutdownScenarioCurrentState, edi
 * 00000001407D1779: cmp     edi, ebx
 * 00000001407D177B: jnz     loc_1407D1677
 * 00000001407D1781: call    PopReleasePolicyLock
 * 00000001407D1786: mov     rbx, [rsp+28h+arg_0]
 * 00000001407D178B: add     rsp, 20h
 * 00000001407D178F: pop     rdi
 * 00000001407D1790: retn
 */
