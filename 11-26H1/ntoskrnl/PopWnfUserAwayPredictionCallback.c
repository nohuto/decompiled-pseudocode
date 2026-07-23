/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x1407CFE70
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateSmartUserPresencePredictions @ 0x14077F42C (PopUpdateSmartUserPresencePredictions.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfUserAwayPredictionCallback @ 0x1407CFE70
 * Reason: Hex-Rays returned no pseudocode for 0x1407CFE70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407CFE70: mov     rax, rsp
 * 00000001407CFE73: mov     [rax+20h], r9d
 * 00000001407CFE77: push    rbx
 * 00000001407CFE78: sub     rsp, 30h
 * 00000001407CFE7C: lea     r9, [rax-18h]
 * 00000001407CFE80: mov     qword ptr [rax-10h], 0
 * 00000001407CFE88: lea     r8, [rax-10h]
 * 00000001407CFE8C: mov     dword ptr [rax-18h], 8
 * 00000001407CFE93: lea     rdx, [rax+20h]
 * 00000001407CFE97: call    ExQueryWnfStateData
 * 00000001407CFE9C: mov     ebx, eax
 * 00000001407CFE9E: test    eax, eax
 * 00000001407CFEA0: js      short loc_1407CFEC6
 * 00000001407CFEA2: cmp     [rsp+38h+var_18], 8
 * 00000001407CFEA7: jnb     short loc_1407CFEAD
 * 00000001407CFEA9: xor     ebx, ebx
 * 00000001407CFEAB: jmp     short loc_1407CFEC6
 * 00000001407CFEAD: call    PopAcquirePolicyLock
 * 00000001407CFEB2: mov     rcx, [rsp+38h+var_10]
 * 00000001407CFEB7: mov     edx, 3
 * 00000001407CFEBC: call    PopUpdateSmartUserPresencePredictions
 * 00000001407CFEC1: call    PopReleasePolicyLock
 * 00000001407CFEC6: mov     eax, ebx
 * 00000001407CFEC8: add     rsp, 30h
 * 00000001407CFECC: pop     rbx
 * 00000001407CFECD: retn
 */
