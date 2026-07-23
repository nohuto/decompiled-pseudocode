/*
 * XREFs of CmpTransMgrSyncHive @ 0x1408B57AC
 * Callers:
 *     CmpTransMgrPrepare @ 0x1408B52AC (CmpTransMgrPrepare.c)
 * Callees:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C5ED14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 */

/*
 * Hex-Rays decompilation failed for CmpTransMgrSyncHive @ 0x1408B57AC
 * Reason: Hex-Rays returned no pseudocode for 0x1408B57AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408B57AC: mov     [rsp+arg_0], rbx
 * 00000001408B57B1: push    rdi
 * 00000001408B57B2: sub     rsp, 20h
 * 00000001408B57B6: mov     rbx, rcx
 * 00000001408B57B9: call    CmpLockRegistry
 * 00000001408B57BE: mov     rcx, rbx
 * 00000001408B57C1: call    HvLockHiveFlusherExclusive
 * 00000001408B57C6: mov     rax, [rbx+40h]
 * 00000001408B57CA: mov     edx, [rax+90h]
 * 00000001408B57D0: test    dl, 1
 * 00000001408B57D3: jz      short loc_1408B5806
 * 00000001408B57D5: mov     rcx, rbx
 * 00000001408B57D8: call    HvUnlockHiveFlusherExclusive
 * 00000001408B57DD: call    CmpUnlockRegistry
 * 00000001408B57E2: xor     edx, edx
 * 00000001408B57E4: mov     rcx, rbx
 * 00000001408B57E7: call    CmpFlushHive
 * 00000001408B57EC: xor     edi, edi
 * 00000001408B57EE: mov     ecx, 0C000009Ah
 * 00000001408B57F3: test    eax, eax
 * 00000001408B57F5: cmovs   edi, ecx
 * 00000001408B57F8: mov     rbx, [rsp+28h+arg_0]
 * 00000001408B57FD: mov     eax, edi
 * 00000001408B57FF: add     rsp, 20h
 * 00000001408B5803: pop     rdi
 * 00000001408B5804: retn
 * 00000001408B5806: mov     rcx, rbx
 * 00000001408B5809: call    HvLockHiveWriter
 * 00000001408B580E: xor     r9d, r9d
 * 00000001408B5811: xor     edx, edx
 * 00000001408B5813: mov     rcx, rbx; BugCheckParameter2
 * 00000001408B5816: lea     r8d, [r9+20h]
 * 00000001408B581A: call    HvpMarkDirty
 * 00000001408B581F: mov     rcx, rbx
 * 00000001408B5822: mov     edi, eax
 * 00000001408B5824: call    HvUnlockHiveWriter
 * 00000001408B5829: test    edi, edi
 * 00000001408B582B: jns     short loc_1408B583C
 * 00000001408B582D: mov     rcx, rbx
 * 00000001408B5830: call    HvUnlockHiveFlusherExclusive
 * 00000001408B5835: call    CmpUnlockRegistry
 * 00000001408B583A: jmp     short loc_1408B57F8
 * 00000001408B583C: mov     rax, [rbx+40h]
 * 00000001408B5840: or      dword ptr [rax+90h], 1
 * 00000001408B5847: jmp     short loc_1408B57D5
 */
