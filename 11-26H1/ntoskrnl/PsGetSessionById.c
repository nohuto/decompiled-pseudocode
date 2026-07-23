/*
 * XREFs of PsGetSessionById @ 0x1402160B0
 * Callers:
 *     PsGetSessionObjectById @ 0x140216024 (PsGetSessionObjectById.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1407A8204 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407A8294 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventBroadcastVolumesChangedEvent @ 0x1407A840C (PiUEventBroadcastVolumesChangedEvent.c)
 *     PiUEventApplyAdditionalFilters @ 0x14095B380 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14095B760 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14095BC10 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14095C2A0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409C59E0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpNtUpdateWnfStateData @ 0x1409C6210 (ExpNtUpdateWnfStateData.c)
 *     PsGetSiloBySessionId @ 0x1409F6C94 (PsGetSiloBySessionId.c)
 *     SeQuerySessionIdTokenEx @ 0x140A73190 (SeQuerySessionIdTokenEx.c)
 *     PiUEventBroadcastDevnodesChangedEvent @ 0x140AFDED0 (PiUEventBroadcastDevnodesChangedEvent.c)
 *     PspAttachSession @ 0x140B23AC8 (PspAttachSession.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x14021621C (PspLockProcessListExclusive.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspSelectSessionAttachProcess @ 0x140A838E8 (PspSelectSessionAttachProcess.c)
 */

/*
 * Hex-Rays decompilation failed for PsGetSessionById @ 0x1402160B0
 * Reason: Hex-Rays returned no pseudocode for 0x1402160B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402160B0: mov     [rsp+arg_0], rbx
 * 00000001402160B5: mov     [rsp+arg_10], rbp
 * 00000001402160BA: mov     [rsp+arg_18], rsi
 * 00000001402160BF: push    rdi
 * 00000001402160C0: sub     rsp, 20h
 * 00000001402160C4: mov     esi, ecx
 * 00000001402160C6: xor     ebx, ebx
 * 00000001402160C8: call    PsGetCurrentServerSilo
 * 00000001402160CD: mov     rdi, gs:188h
 * 00000001402160D6: mov     rbp, rax
 * 00000001402160D9: mov     rcx, rdi
 * 00000001402160DC: call    PspLockProcessListExclusive
 * 00000001402160E1: mov     rax, qword ptr cs:NormalizationListLock.___u33+28h
 * 00000001402160E8: test    rax, rax
 * 00000001402160EB: jz      short loc_140216117
 * 00000001402160ED: cmp     esi, [rax-58h]
 * 00000001402160F0: ja      short loc_14021616E
 * 00000001402160F2: jnb     short loc_1402160FC
 * 00000001402160F4: mov     rax, [rax]
 * 00000001402160F7: test    rax, rax
 * 00000001402160FA: jnz     short loc_1402160ED
 * 00000001402160FC: test    rax, rax
 * 00000001402160FF: jz      short loc_140216117
 * 0000000140216101: lea     rcx, [rax-60h]
 * 0000000140216105: test    rbp, rbp
 * 0000000140216108: jnz     short loc_140216182
 * 000000014021610A: cmp     [rcx+8], esi
 * 000000014021610D: jnz     short loc_140216117
 * 000000014021610F: call    PspSelectSessionAttachProcess
 * 0000000140216114: mov     rbx, rax
 * 0000000140216117: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 000000014021611B: lock xadd cs:PspActiveProcessLock, rdx
 * 0000000140216124: and     dl, 6
 * 0000000140216127: cmp     dl, 2
 * 000000014021612A: jz      short loc_140216174
 * 000000014021612C: lea     rcx, PspActiveProcessLock; struct _KTHREAD *
 * 0000000140216133: call    KeAbPostRelease
 * 0000000140216138: nop
 * 0000000140216139: add     word ptr [rdi+1E6h], 1
 * 0000000140216141: jnz     short loc_140216155
 * 0000000140216143: lea     rax, [rdi+98h]
 * 000000014021614A: nop
 * 000000014021614B: cmp     [rax], rax
 * 000000014021614E: jz      short loc_140216155
 * 0000000140216150: call    KiCheckForKernelApcDelivery
 * 0000000140216155: mov     rbp, [rsp+28h+arg_10]
 * 000000014021615A: mov     rax, rbx
 * 000000014021615D: mov     rbx, [rsp+28h+arg_0]
 * 0000000140216162: mov     rsi, [rsp+28h+arg_18]
 * 0000000140216167: add     rsp, 20h
 * 000000014021616B: pop     rdi
 * 000000014021616C: retn
 * 000000014021616E: mov     rax, [rax+8]
 * 0000000140216172: jmp     short loc_1402160F7
 * 0000000140216174: lea     rcx, PspActiveProcessLock
 * 000000014021617B: call    ExfTryToWakePushLock
 * 0000000140216180: jmp     short loc_14021612C
 * 0000000140216182: cmp     [rcx+0A0h], rbp
 * 0000000140216189: jnz     short loc_140216117
 * 000000014021618B: jmp     loc_14021610A
 */
