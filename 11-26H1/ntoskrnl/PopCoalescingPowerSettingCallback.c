/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x1407CF360
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140A3C4FC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingPowerSettingCallback @ 0x1407CF360
 * Reason: Hex-Rays returned no pseudocode for 0x1407CF360
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407CF360: mov     [rsp+arg_0], rbx
 * 00000001407CF365: mov     [rsp+arg_8], rbp
 * 00000001407CF36A: mov     [rsp+arg_10], rsi
 * 00000001407CF36F: push    rdi
 * 00000001407CF370: sub     rsp, 20h
 * 00000001407CF374: mov     ebp, r8d
 * 00000001407CF377: mov     rdi, rdx
 * 00000001407CF37A: mov     rsi, rcx
 * 00000001407CF37D: mov     ebx, 0C000000Dh
 * 00000001407CF382: call    PopAcquirePolicyLock
 * 00000001407CF387: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1
 * 00000001407CF38E: sub     r9, [rsi]
 * 00000001407CF391: jnz     short loc_1407CF39E
 * 00000001407CF393: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4
 * 00000001407CF39A: sub     r9, [rsi+8]
 * 00000001407CF39E: test    r9, r9
 * 00000001407CF3A1: jnz     short loc_1407CF3D7
 * 00000001407CF3A3: cmp     ebp, 4
 * 00000001407CF3A6: jnz     short loc_1407CF3D7
 * 00000001407CF3A8: test    rdi, rdi
 * 00000001407CF3AB: jz      short loc_1407CF3D7
 * 00000001407CF3AD: mov     eax, [rdi]
 * 00000001407CF3AF: or      ecx, 0FFFFFFFFh
 * 00000001407CF3B2: test    eax, eax
 * 00000001407CF3B4: mov     cs:PopDppeCoalescingSpindownTimeout, eax
 * 00000001407CF3BA: cmovz   eax, ecx
 * 00000001407CF3BD: cmp     eax, cs:PopDiskCoalescingTimeout
 * 00000001407CF3C3: jz      short loc_1407CF3D0
 * 00000001407CF3C5: mov     cs:PopDiskCoalescingTimeout, eax
 * 00000001407CF3CB: call    PopUpdateDiskIdleTimeoutSetting
 * 00000001407CF3D0: call    PopCheckResiliencyScenarios
 * 00000001407CF3D5: xor     ebx, ebx
 * 00000001407CF3D7: call    PopReleasePolicyLock
 * 00000001407CF3DC: mov     rbp, [rsp+28h+arg_8]
 * 00000001407CF3E1: mov     eax, ebx
 * 00000001407CF3E3: mov     rbx, [rsp+28h+arg_0]
 * 00000001407CF3E8: mov     rsi, [rsp+28h+arg_10]
 * 00000001407CF3ED: add     rsp, 20h
 * 00000001407CF3F1: pop     rdi
 * 00000001407CF3F2: retn
 */
