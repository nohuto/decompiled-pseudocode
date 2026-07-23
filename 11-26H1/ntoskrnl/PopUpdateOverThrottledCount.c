/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1407D5158
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1407D5000 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalOverthrottleState @ 0x14060BF24 (PopDiagTraceThermalOverthrottleState.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopUpdateOverThrottledCount @ 0x1407D5158
 * Reason: Hex-Rays returned no pseudocode for 0x1407D5158
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D5158: push    rbx
 * 00000001407D515A: sub     rsp, 40h
 * 00000001407D515E: mov     rcx, [rcx+30h]
 * 00000001407D5162: movzx   ebx, dl
 * 00000001407D5165: mov     edx, ebx
 * 00000001407D5167: mov     [rsp+48h+Buffer], 0
 * 00000001407D516F: call    PopDiagTraceThermalOverthrottleState
 * 00000001407D5174: call    PopAcquirePolicyLock
 * 00000001407D5179: test    bl, bl
 * 00000001407D517B: jz      short loc_1407D5196
 * 00000001407D517D: mov     eax, cs:dword_140F0FE88
 * 00000001407D5183: inc     eax
 * 00000001407D5185: mov     cs:dword_140F0FE88, eax
 * 00000001407D518B: cmp     eax, 1
 * 00000001407D518E: jnz     short loc_1407D51D0
 * 00000001407D5190: mov     [rsp+48h+Buffer], eax
 * 00000001407D5194: jmp     short loc_1407D519F
 * 00000001407D5196: add     cs:dword_140F0FE88, 0FFFFFFFFh
 * 00000001407D519D: jnz     short loc_1407D51D0
 * 00000001407D519F: xor     r9d, r9d; TypeId
 * 00000001407D51A2: mov     [rsp+48h+CheckStamp], 0; CheckStamp
 * 00000001407D51AA: mov     [rsp+48h+MatchingChangeStamp], 0; MatchingChangeStamp
 * 00000001407D51B2: lea     rdx, [rsp+48h+Buffer]; Buffer
 * 00000001407D51B7: lea     rcx, WNF_PO_THERMAL_OVERTHROTTLE; StateName
 * 00000001407D51BE: mov     [rsp+48h+ExplicitScope], 0; ExplicitScope
 * 00000001407D51C7: lea     r8d, [r9+4]; Length
 * 00000001407D51CB: call    ZwUpdateWnfStateData
 * 00000001407D51D0: call    PopReleasePolicyLock
 * 00000001407D51D5: add     rsp, 40h
 * 00000001407D51D9: pop     rbx
 * 00000001407D51DA: retn
 */
