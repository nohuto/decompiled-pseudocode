/*
 * XREFs of PopWnfHibernatePolicyCallback @ 0x1407D0DE0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueryHiberPersistedRegValue @ 0x1407D0718 (PopQueryHiberPersistedRegValue.c)
 *     PopTraceHibernatePolicyUpdate @ 0x1407D59EC (PopTraceHibernatePolicyUpdate.c)
 *     PopHibernateEvaluation @ 0x140943464 (PopHibernateEvaluation.c)
 *     PopAcquireTransitionLock @ 0x140B39914 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140B4C040 (PopReleaseTransitionLock.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfHibernatePolicyCallback @ 0x1407D0DE0
 * Reason: Hex-Rays returned no pseudocode for 0x1407D0DE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D0DE0: mov     rax, rsp
 * 00000001407D0DE3: mov     [rax+8], rbx
 * 00000001407D0DE7: push    rdi
 * 00000001407D0DE8: sub     rsp, 30h
 * 00000001407D0DEC: lea     rdx, [rax-14h]
 * 00000001407D0DF0: mov     dword ptr [rax-14h], 0
 * 00000001407D0DF7: mov     ecx, 3
 * 00000001407D0DFC: mov     byte ptr [rax-18h], 0
 * 00000001407D0E00: call    PopQueryHiberPersistedRegValue
 * 00000001407D0E05: mov     edi, eax
 * 00000001407D0E07: test    eax, eax
 * 00000001407D0E09: js      short loc_1407D0E4E
 * 00000001407D0E0B: mov     ecx, 2
 * 00000001407D0E10: call    PopAcquireTransitionLock
 * 00000001407D0E15: call    PopAcquirePolicyLock
 * 00000001407D0E1A: mov     ebx, [rsp+38h+var_14]
 * 00000001407D0E1E: lea     r8, [rsp+38h+var_18]
 * 00000001407D0E23: mov     dl, 1
 * 00000001407D0E25: mov     cs:PopAllowHibernateReg, ebx
 * 00000001407D0E2B: mov     cl, dl
 * 00000001407D0E2D: call    PopHibernateEvaluation
 * 00000001407D0E32: mov     edi, eax
 * 00000001407D0E34: call    PopReleasePolicyLock
 * 00000001407D0E39: mov     ecx, 2
 * 00000001407D0E3E: call    PopReleaseTransitionLock
 * 00000001407D0E43: mov     dl, [rsp+38h+var_18]
 * 00000001407D0E47: mov     ecx, ebx
 * 00000001407D0E49: call    PopTraceHibernatePolicyUpdate
 * 00000001407D0E4E: mov     rbx, [rsp+38h+arg_0]
 * 00000001407D0E53: mov     eax, edi
 * 00000001407D0E55: add     rsp, 30h
 * 00000001407D0E59: pop     rdi
 * 00000001407D0E5A: retn
 */
