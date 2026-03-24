/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x1407CCDD0
 * Callers:
 *     <none>
 * Callees:
 *     PopUpdateSmartUserPresencePredictions @ 0x14077C938 (PopUpdateSmartUserPresencePredictions.c)
 *     ExQueryWnfStateData @ 0x1409489F0 (ExQueryWnfStateData.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopWnfUserAwayPredictionCallback @ 0x1407CCDD0
 * Reason: Hex-Rays returned no pseudocode for 0x1407CCDD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407CCDD0: mov     rax, rsp
 * 00000001407CCDD3: mov     [rax+20h], r9d
 * 00000001407CCDD7: push    rbx
 * 00000001407CCDD8: sub     rsp, 30h
 * 00000001407CCDDC: lea     r9, [rax-18h]
 * 00000001407CCDE0: mov     qword ptr [rax-10h], 0
 * 00000001407CCDE8: lea     r8, [rax-10h]
 * 00000001407CCDEC: mov     dword ptr [rax-18h], 8
 * 00000001407CCDF3: lea     rdx, [rax+20h]
 * 00000001407CCDF7: call    ExQueryWnfStateData
 * 00000001407CCDFC: mov     ebx, eax
 * 00000001407CCDFE: test    eax, eax
 * 00000001407CCE00: js      short loc_1407CCE26
 * 00000001407CCE02: cmp     [rsp+38h+var_18], 8
 * 00000001407CCE07: jnb     short loc_1407CCE0D
 * 00000001407CCE09: xor     ebx, ebx
 * 00000001407CCE0B: jmp     short loc_1407CCE26
 * 00000001407CCE0D: call    PopAcquirePolicyLock
 * 00000001407CCE12: mov     rcx, [rsp+38h+var_10]
 * 00000001407CCE17: mov     edx, 3
 * 00000001407CCE1C: call    PopUpdateSmartUserPresencePredictions
 * 00000001407CCE21: call    PopReleasePolicyLock
 * 00000001407CCE26: mov     eax, ebx
 * 00000001407CCE28: add     rsp, 30h
 * 00000001407CCE2C: pop     rbx
 * 00000001407CCE2D: retn
 */
