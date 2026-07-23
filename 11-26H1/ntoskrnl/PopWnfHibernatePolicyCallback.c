/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x1407D3E80
 * Callers:
 *     <none>
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x1407D37B8 (PopQueryHiberPersistedRegValue.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1407D8B9C (PopTraceHibernatePolicyUpdate.c)
 *     PopHibernateEvaluation @ 0x1409BEDDC (PopHibernateEvaluation.c)
 *     PopAcquireTransitionLock @ 0x140B3BB24 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140B4DDD0 (PopReleaseTransitionLock.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfHibernatePolicyCallback @ 0x1407D3E80
 * Reason: Hex-Rays returned no pseudocode for 0x1407D3E80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D3E80: mov     rax, rsp
 * 00000001407D3E83: mov     [rax+8], rbx
 * 00000001407D3E87: push    rdi
 * 00000001407D3E88: sub     rsp, 30h
 * 00000001407D3E8C: lea     rdx, [rax-14h]
 * 00000001407D3E90: mov     dword ptr [rax-14h], 0
 * 00000001407D3E97: mov     ecx, 3
 * 00000001407D3E9C: mov     byte ptr [rax-18h], 0
 * 00000001407D3EA0: call    PopQueryHiberPersistedRegValue
 * 00000001407D3EA5: mov     edi, eax
 * 00000001407D3EA7: test    eax, eax
 * 00000001407D3EA9: js      short loc_1407D3EEE
 * 00000001407D3EAB: mov     ecx, 2
 * 00000001407D3EB0: call    PopAcquireTransitionLock
 * 00000001407D3EB5: call    PopAcquirePolicyLock
 * 00000001407D3EBA: mov     ebx, [rsp+38h+var_14]
 * 00000001407D3EBE: lea     r8, [rsp+38h+var_18]
 * 00000001407D3EC3: mov     dl, 1
 * 00000001407D3EC5: mov     cs:PopAllowHibernateReg, ebx
 * 00000001407D3ECB: mov     cl, dl
 * 00000001407D3ECD: call    PopHibernateEvaluation
 * 00000001407D3ED2: mov     edi, eax
 * 00000001407D3ED4: call    PopReleasePolicyLock
 * 00000001407D3ED9: mov     ecx, 2
 * 00000001407D3EDE: call    PopReleaseTransitionLock
 * 00000001407D3EE3: mov     dl, [rsp+38h+var_18]
 * 00000001407D3EE7: mov     ecx, ebx
 * 00000001407D3EE9: call    PopTraceHibernatePolicyUpdate
 * 00000001407D3EEE: mov     rbx, [rsp+38h+arg_0]
 * 00000001407D3EF3: mov     eax, edi
 * 00000001407D3EF5: add     rsp, 30h
 * 00000001407D3EF9: pop     rdi
 * 00000001407D3EFA: retn
 */
