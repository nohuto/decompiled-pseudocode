/*
 * XREFs of PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4
 * Callers:
 *     PoUserShutdownCancelled @ 0x14077E5A0 (PoUserShutdownCancelled.c)
 *     PoUserShutdownInitiated @ 0x140B48F60 (PoUserShutdownInitiated.c)
 * Callees:
 *     SleepstudyHelperBlockerActiveDereference @ 0x140257DF0 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperBlockerActiveReference @ 0x140257E90 (SleepstudyHelperBlockerActiveReference.c)
 *     PpmEndHighPerfRequest @ 0x14049F728 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14049F800 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopTransitionCheckpoint @ 0x140B1D94C (PopTransitionCheckpoint.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopSwitchUpdateUserShutdownScenarioState @ 0x1407D46D4
 * Reason: Hex-Rays returned no pseudocode for 0x1407D46D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D46D4: mov     [rsp+arg_0], rbx
 * 00000001407D46D9: push    rdi
 * 00000001407D46DA: sub     rsp, 20h
 * 00000001407D46DE: mov     ebx, ecx
 * 00000001407D46E0: call    PopAcquirePolicyLock
 * 00000001407D46E5: cmp     cs:PopUserShutdownScenarioTargetState, ebx
 * 00000001407D46EB: jz      loc_1407D4821
 * 00000001407D46F1: mov     eax, cs:PopUserShutdownScenarioCurrentState
 * 00000001407D46F7: mov     cs:PopUserShutdownScenarioTargetState, ebx
 * 00000001407D46FD: mov     cs:PopUserShutdownScenarioUserInitiated, 1
 * 00000001407D4704: test    eax, 0FFFFFFFDh
 * 00000001407D4709: jz      loc_1407D4821
 * 00000001407D470F: cmp     eax, ebx
 * 00000001407D4711: jz      loc_1407D4821
 * 00000001407D4717: mov     edi, ebx
 * 00000001407D4719: mov     bl, cs:PopUserShutdownScenarioUserInitiated
 * 00000001407D471F: lea     eax, [rdi-1]
 * 00000001407D4722: mov     cs:PopUserShutdownScenarioCurrentState, eax
 * 00000001407D4728: call    PopReleasePolicyLock
 * 00000001407D472D: mov     ecx, edi
 * 00000001407D472F: sub     ecx, 1
 * 00000001407D4732: jz      short loc_1407D47A5
 * 00000001407D4734: cmp     ecx, 2
 * 00000001407D4737: jnz     loc_1407D4808
 * 00000001407D473D: xor     edx, edx
 * 00000001407D473F: lea     ecx, [rdx+7]
 * 00000001407D4742: call    PopTransitionCheckpoint
 * 00000001407D4747: mov     edx, 1
 * 00000001407D474C: lea     rcx, PopSetUserShutdownMarkerWorkItem
 * 00000001407D4753: call    PopQueueWorkItem
 * 00000001407D4758: mov     rax, cs:qword_140E67798
 * 00000001407D475F: mov     dword ptr cs:stru_140E67200.OtherOperationCount+4, 1
 * 00000001407D4769: test    rax, rax
 * 00000001407D476C: jz      short loc_1407D4773
 * 00000001407D476E: call    _guard_dispatch_icall_no_overrides
 * 00000001407D4773: mov     rcx, cs:PopUserShutdownTaskClient
 * 00000001407D477A: test    rcx, rcx
 * 00000001407D477D: jz      short loc_1407D479E
 * 00000001407D477F: mov     dl, 1
 * 00000001407D4781: call    cs:__imp_PdcTaskClientRequest
 * 00000001407D4788: nop     dword ptr [rax+rax+00h]
 * 00000001407D478D: mov     rcx, cs:PopUserShutdownWinlogonBlockerHandle; SpinLock
 * 00000001407D4794: test    rcx, rcx
 * 00000001407D4797: jz      short loc_1407D479E
 * 00000001407D4799: call    SleepstudyHelperBlockerActiveReference
 * 00000001407D479E: call    PpmBeginHighPerfRequest
 * 00000001407D47A3: jmp     short loc_1407D4808
 * 00000001407D47A5: mov     edx, 1
 * 00000001407D47AA: lea     rcx, PopClearUserShutdownMarkerWorkItem
 * 00000001407D47B1: call    PopQueueWorkItem
 * 00000001407D47B6: mov     rax, cs:qword_140E677A0
 * 00000001407D47BD: mov     dword ptr cs:stru_140E67200.OtherOperationCount+4, 0
 * 00000001407D47C7: test    rax, rax
 * 00000001407D47CA: jz      short loc_1407D47D3
 * 00000001407D47CC: mov     cl, bl
 * 00000001407D47CE: call    _guard_dispatch_icall_no_overrides
 * 00000001407D47D3: mov     rcx, cs:PopUserShutdownTaskClient
 * 00000001407D47DA: test    rcx, rcx
 * 00000001407D47DD: jz      short loc_1407D47FE
 * 00000001407D47DF: xor     edx, edx
 * 00000001407D47E1: call    cs:__imp_PdcTaskClientRequest
 * 00000001407D47E8: nop     dword ptr [rax+rax+00h]
 * 00000001407D47ED: mov     rcx, cs:PopUserShutdownWinlogonBlockerHandle; SpinLock
 * 00000001407D47F4: test    rcx, rcx
 * 00000001407D47F7: jz      short loc_1407D47FE
 * 00000001407D47F9: call    SleepstudyHelperBlockerActiveDereference
 * 00000001407D47FE: mov     ecx, 3
 * 00000001407D4803: call    PpmEndHighPerfRequest
 * 00000001407D4808: call    PopAcquirePolicyLock
 * 00000001407D480D: mov     ebx, cs:PopUserShutdownScenarioTargetState
 * 00000001407D4813: mov     cs:PopUserShutdownScenarioCurrentState, edi
 * 00000001407D4819: cmp     edi, ebx
 * 00000001407D481B: jnz     loc_1407D4717
 * 00000001407D4821: call    PopReleasePolicyLock
 * 00000001407D4826: mov     rbx, [rsp+28h+arg_0]
 * 00000001407D482B: add     rsp, 20h
 * 00000001407D482F: pop     rdi
 * 00000001407D4830: retn
 */
