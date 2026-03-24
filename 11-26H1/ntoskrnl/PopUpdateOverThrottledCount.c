/*
 * XREFs of PopUpdateOverThrottledCount @ 0x1407D20B8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1407D1F60 (PopThermalZoneRemove.c)
 * Callees:
 *     PopDiagTraceThermalOverthrottleState @ 0x140609364 (PopDiagTraceThermalOverthrottleState.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopUpdateOverThrottledCount @ 0x1407D20B8
 * Reason: Hex-Rays returned no pseudocode for 0x1407D20B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D20B8: push    rbx
 * 00000001407D20BA: sub     rsp, 40h
 * 00000001407D20BE: mov     rcx, [rcx+30h]
 * 00000001407D20C2: movzx   ebx, dl
 * 00000001407D20C5: mov     edx, ebx
 * 00000001407D20C7: mov     [rsp+48h+arg_8], 0
 * 00000001407D20CF: call    PopDiagTraceThermalOverthrottleState
 * 00000001407D20D4: call    PopAcquirePolicyLock
 * 00000001407D20D9: test    bl, bl
 * 00000001407D20DB: jz      short loc_1407D20F6
 * 00000001407D20DD: mov     eax, dword ptr cs:stru_140F0F620.ExtendedFeatureDisableMask
 * 00000001407D20E3: inc     eax
 * 00000001407D20E5: mov     dword ptr cs:stru_140F0F620.ExtendedFeatureDisableMask, eax
 * 00000001407D20EB: cmp     eax, 1
 * 00000001407D20EE: jnz     short loc_1407D2130
 * 00000001407D20F0: mov     [rsp+48h+arg_8], eax
 * 00000001407D20F4: jmp     short loc_1407D20FF
 * 00000001407D20F6: add     dword ptr cs:stru_140F0F620.ExtendedFeatureDisableMask, 0FFFFFFFFh
 * 00000001407D20FD: jnz     short loc_1407D2130
 * 00000001407D20FF: xor     r9d, r9d
 * 00000001407D2102: mov     [rsp+48h+var_18], 0
 * 00000001407D210A: mov     [rsp+48h+var_20], 0
 * 00000001407D2112: lea     rdx, [rsp+48h+arg_8]
 * 00000001407D2117: lea     rcx, WNF_PO_THERMAL_OVERTHROTTLE
 * 00000001407D211E: mov     [rsp+48h+var_28], 0
 * 00000001407D2127: lea     r8d, [r9+4]
 * 00000001407D212B: call    ZwUpdateWnfStateData
 * 00000001407D2130: call    PopReleasePolicyLock
 * 00000001407D2135: add     rsp, 40h
 * 00000001407D2139: pop     rbx
 * 00000001407D213A: retn
 */
