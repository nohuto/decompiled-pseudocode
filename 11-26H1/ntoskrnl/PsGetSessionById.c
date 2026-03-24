/*
 * XREFs of PsGetSessionById @ 0x140215D80
 * Callers:
 *     PsGetSessionObjectById @ 0x140215CF4 (PsGetSessionObjectById.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1407A56C4 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1407A5754 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiUEventBroadcastVolumesChangedEvent @ 0x1407A58CC (PiUEventBroadcastVolumesChangedEvent.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14094A070 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpNtUpdateWnfStateData @ 0x14094A8A0 (ExpNtUpdateWnfStateData.c)
 *     PiUEventApplyAdditionalFilters @ 0x14099A920 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x14099AD00 (IopDeviceInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14099B1B0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14099B840 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PsGetSiloBySessionId @ 0x140A3B134 (PsGetSiloBySessionId.c)
 *     SeQuerySessionIdTokenEx @ 0x140A661C0 (SeQuerySessionIdTokenEx.c)
 *     PiUEventBroadcastDevnodesChangedEvent @ 0x140AFC2D0 (PiUEventBroadcastDevnodesChangedEvent.c)
 *     PspAttachSession @ 0x140B216C8 (PspAttachSession.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PspLockProcessListExclusive @ 0x140215EEC (PspLockProcessListExclusive.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PspSelectSessionAttachProcess @ 0x140A7DA78 (PspSelectSessionAttachProcess.c)
 */

/*
 * Hex-Rays decompilation failed for PsGetSessionById @ 0x140215D80
 * Reason: Hex-Rays returned no pseudocode for 0x140215D80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140215D80: mov     [rsp+arg_0], rbx
 * 0000000140215D85: mov     [rsp+arg_10], rbp
 * 0000000140215D8A: mov     [rsp+arg_18], rsi
 * 0000000140215D8F: push    rdi
 * 0000000140215D90: sub     rsp, 20h
 * 0000000140215D94: mov     esi, ecx
 * 0000000140215D96: xor     ebx, ebx
 * 0000000140215D98: call    PsGetCurrentServerSilo
 * 0000000140215D9D: mov     rdi, gs:188h
 * 0000000140215DA6: mov     rbp, rax
 * 0000000140215DA9: mov     rcx, rdi
 * 0000000140215DAC: call    PspLockProcessListExclusive
 * 0000000140215DB1: mov     rax, qword ptr cs:NormalizationListLock.___u33+38h
 * 0000000140215DB8: test    rax, rax
 * 0000000140215DBB: jz      short loc_140215DE7
 * 0000000140215DBD: cmp     esi, [rax-58h]
 * 0000000140215DC0: ja      short loc_140215E3E
 * 0000000140215DC2: jnb     short loc_140215DCC
 * 0000000140215DC4: mov     rax, [rax]
 * 0000000140215DC7: test    rax, rax
 * 0000000140215DCA: jnz     short loc_140215DBD
 * 0000000140215DCC: test    rax, rax
 * 0000000140215DCF: jz      short loc_140215DE7
 * 0000000140215DD1: lea     rcx, [rax-60h]
 * 0000000140215DD5: test    rbp, rbp
 * 0000000140215DD8: jnz     short loc_140215E52
 * 0000000140215DDA: cmp     [rcx+8], esi
 * 0000000140215DDD: jnz     short loc_140215DE7
 * 0000000140215DDF: call    PspSelectSessionAttachProcess
 * 0000000140215DE4: mov     rbx, rax
 * 0000000140215DE7: or      rdx, 0FFFFFFFFFFFFFFFFh
 * 0000000140215DEB: lock xadd cs:PspActiveProcessLock, rdx
 * 0000000140215DF4: and     dl, 6
 * 0000000140215DF7: cmp     dl, 2
 * 0000000140215DFA: jz      short loc_140215E44
 * 0000000140215DFC: lea     rcx, PspActiveProcessLock; struct _KTHREAD *
 * 0000000140215E03: call    KeAbPostRelease
 * 0000000140215E08: nop
 * 0000000140215E09: add     word ptr [rdi+1E6h], 1
 * 0000000140215E11: jnz     short loc_140215E25
 * 0000000140215E13: lea     rax, [rdi+98h]
 * 0000000140215E1A: nop
 * 0000000140215E1B: cmp     [rax], rax
 * 0000000140215E1E: jz      short loc_140215E25
 * 0000000140215E20: call    KiCheckForKernelApcDelivery
 * 0000000140215E25: mov     rbp, [rsp+28h+arg_10]
 * 0000000140215E2A: mov     rax, rbx
 * 0000000140215E2D: mov     rbx, [rsp+28h+arg_0]
 * 0000000140215E32: mov     rsi, [rsp+28h+arg_18]
 * 0000000140215E37: add     rsp, 20h
 * 0000000140215E3B: pop     rdi
 * 0000000140215E3C: retn
 * 0000000140215E3E: mov     rax, [rax+8]
 * 0000000140215E42: jmp     short loc_140215DC7
 * 0000000140215E44: lea     rcx, PspActiveProcessLock
 * 0000000140215E4B: call    ExfTryToWakePushLock
 * 0000000140215E50: jmp     short loc_140215DFC
 * 0000000140215E52: cmp     [rcx+0A0h], rbp
 * 0000000140215E59: jnz     short loc_140215DE7
 * 0000000140215E5B: jmp     loc_140215DDA
 */
