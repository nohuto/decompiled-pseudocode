/*
 * XREFs of KiFlushCurrentRsb @ 0x140741D80
 * Callers:
 *     KiUpdateSpeculationControl @ 0x140305F40 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140473DB0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiHandleMcheck @ 0x1405EE370 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x1405EE3D0 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x1405F4288 (KeFlushRsb.c)
 *     KiFlushRsbTarget @ 0x1405F4B00 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140741D80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140741D80
 * Reason: Hex-Rays returned no pseudocode for 0x140741D80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140741D80: sub     rsp, 8
 * 0000000140741D84: pushfq
 * 0000000140741D85: cli
 * 0000000140741D86: call    loc_140741E99
 * 0000000140741D8B: add     rsp, 8
 * 0000000140741D8F: call    loc_140741EA2
 * 0000000140741D94: add     rsp, 8
 * 0000000140741D98: call    loc_140741D8B
 * 0000000140741D9D: add     rsp, 8
 * 0000000140741DA1: call    loc_140741D94
 * 0000000140741DA6: add     rsp, 8
 * 0000000140741DAA: call    loc_140741D9D
 * 0000000140741DAF: add     rsp, 8
 * 0000000140741DB3: call    loc_140741DA6
 * 0000000140741DB8: add     rsp, 8
 * 0000000140741DBC: call    loc_140741DAF
 * 0000000140741DC1: add     rsp, 8
 * 0000000140741DC5: call    loc_140741DB8
 * 0000000140741DCA: add     rsp, 8
 * 0000000140741DCE: call    loc_140741DC1
 * 0000000140741DD3: add     rsp, 8
 * 0000000140741DD7: call    loc_140741DCA
 * 0000000140741DDC: add     rsp, 8
 * 0000000140741DE0: call    loc_140741DD3
 * 0000000140741DE5: add     rsp, 8
 * 0000000140741DE9: call    loc_140741DDC
 * 0000000140741DEE: add     rsp, 8
 * 0000000140741DF2: call    loc_140741DE5
 * 0000000140741DF7: add     rsp, 8
 * 0000000140741DFB: call    loc_140741DEE
 * 0000000140741E00: add     rsp, 8
 * 0000000140741E04: call    loc_140741DF7
 * 0000000140741E09: add     rsp, 8
 * 0000000140741E0D: call    loc_140741E00
 * 0000000140741E12: add     rsp, 8
 * 0000000140741E16: call    loc_140741E09
 * 0000000140741E1B: add     rsp, 8
 * 0000000140741E1F: call    loc_140741E12
 * 0000000140741E24: add     rsp, 8
 * 0000000140741E28: call    loc_140741E1B
 * 0000000140741E2D: add     rsp, 8
 * 0000000140741E31: call    loc_140741E24
 * 0000000140741E36: add     rsp, 8
 * 0000000140741E3A: call    loc_140741E2D
 * 0000000140741E3F: add     rsp, 8
 * 0000000140741E43: call    loc_140741E36
 * 0000000140741E48: add     rsp, 8
 * 0000000140741E4C: call    loc_140741E3F
 * 0000000140741E51: add     rsp, 8
 * 0000000140741E55: call    loc_140741E48
 * 0000000140741E5A: add     rsp, 8
 * 0000000140741E5E: call    loc_140741E51
 * 0000000140741E63: add     rsp, 8
 * 0000000140741E67: call    loc_140741E5A
 * 0000000140741E6C: add     rsp, 8
 * 0000000140741E70: call    loc_140741E63
 * 0000000140741E75: add     rsp, 8
 * 0000000140741E79: call    loc_140741E6C
 * 0000000140741E7E: add     rsp, 8
 * 0000000140741E82: call    loc_140741E75
 * 0000000140741E87: add     rsp, 8
 * 0000000140741E8B: call    loc_140741E7E
 * 0000000140741E90: add     rsp, 8
 * 0000000140741E94: call    loc_140741E87
 * 0000000140741E99: add     rsp, 8
 * 0000000140741E9D: call    loc_140741E90
 * 0000000140741EA2: add     rsp, 8
 * 0000000140741EA6: mov     eax, 0DADAh
 * 0000000140741EAB: test    byte ptr gs:89Ch, 8
 * 0000000140741EB4: jz      short loc_140741EBD
 * 0000000140741EB6: mov     al, 20h ; ' '
 * 0000000140741EB8: incsspq rax
 * 0000000140741EBD: lfence
 * 0000000140741EC0: bt      [rsp-0F0h+arg_E8], 9
 * 0000000140741EC6: jnb     short loc_140741EC9
 * 0000000140741EC8: sti
 * 0000000140741EC9: add     rsp, 10h
 * 0000000140741ECD: retn
 */
