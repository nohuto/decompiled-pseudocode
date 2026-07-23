/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x1407D2400
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1409F7F1C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingPowerSettingCallback @ 0x1407D2400
 * Reason: Hex-Rays returned no pseudocode for 0x1407D2400
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D2400: mov     [rsp+arg_0], rbx
 * 00000001407D2405: mov     [rsp+arg_8], rbp
 * 00000001407D240A: mov     [rsp+arg_10], rsi
 * 00000001407D240F: push    rdi
 * 00000001407D2410: sub     rsp, 20h
 * 00000001407D2414: mov     ebp, r8d
 * 00000001407D2417: mov     rdi, rdx
 * 00000001407D241A: mov     rsi, rcx
 * 00000001407D241D: mov     ebx, 0C000000Dh
 * 00000001407D2422: call    PopAcquirePolicyLock
 * 00000001407D2427: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1
 * 00000001407D242E: sub     r9, [rsi]
 * 00000001407D2431: jnz     short loc_1407D243E
 * 00000001407D2433: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4
 * 00000001407D243A: sub     r9, [rsi+8]
 * 00000001407D243E: test    r9, r9
 * 00000001407D2441: jnz     short loc_1407D2477
 * 00000001407D2443: cmp     ebp, 4
 * 00000001407D2446: jnz     short loc_1407D2477
 * 00000001407D2448: test    rdi, rdi
 * 00000001407D244B: jz      short loc_1407D2477
 * 00000001407D244D: mov     eax, [rdi]
 * 00000001407D244F: or      ecx, 0FFFFFFFFh
 * 00000001407D2452: test    eax, eax
 * 00000001407D2454: mov     cs:PopDppeCoalescingSpindownTimeout, eax
 * 00000001407D245A: cmovz   eax, ecx
 * 00000001407D245D: cmp     eax, cs:PopDiskCoalescingTimeout
 * 00000001407D2463: jz      short loc_1407D2470
 * 00000001407D2465: mov     cs:PopDiskCoalescingTimeout, eax
 * 00000001407D246B: call    PopUpdateDiskIdleTimeoutSetting
 * 00000001407D2470: call    PopCheckResiliencyScenarios
 * 00000001407D2475: xor     ebx, ebx
 * 00000001407D2477: call    PopReleasePolicyLock
 * 00000001407D247C: mov     rbp, [rsp+28h+arg_8]
 * 00000001407D2481: mov     eax, ebx
 * 00000001407D2483: mov     rbx, [rsp+28h+arg_0]
 * 00000001407D2488: mov     rsi, [rsp+28h+arg_10]
 * 00000001407D248D: add     rsp, 20h
 * 00000001407D2491: pop     rdi
 * 00000001407D2492: retn
 */
