/*
 * XREFs of KiFlushCurrentRsb @ 0x14073D180
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402BB280 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14047A440 (KePrepareToDispatchVirtualProcessor.c)
 *     KiHandleMcheck @ 0x1405EBA00 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x1405EBA60 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x1405F18C8 (KeFlushRsb.c)
 *     KiFlushRsbTarget @ 0x1405F2140 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x14073D180 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x14073D180
 * Reason: Hex-Rays returned no pseudocode for 0x14073D180
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073D180: sub     rsp, 8
 * 000000014073D184: pushfq
 * 000000014073D185: cli
 * 000000014073D186: call    loc_14073D299
 * 000000014073D18B: add     rsp, 8
 * 000000014073D18F: call    loc_14073D2A2
 * 000000014073D194: add     rsp, 8
 * 000000014073D198: call    loc_14073D18B
 * 000000014073D19D: add     rsp, 8
 * 000000014073D1A1: call    loc_14073D194
 * 000000014073D1A6: add     rsp, 8
 * 000000014073D1AA: call    loc_14073D19D
 * 000000014073D1AF: add     rsp, 8
 * 000000014073D1B3: call    loc_14073D1A6
 * 000000014073D1B8: add     rsp, 8
 * 000000014073D1BC: call    loc_14073D1AF
 * 000000014073D1C1: add     rsp, 8
 * 000000014073D1C5: call    loc_14073D1B8
 * 000000014073D1CA: add     rsp, 8
 * 000000014073D1CE: call    loc_14073D1C1
 * 000000014073D1D3: add     rsp, 8
 * 000000014073D1D7: call    loc_14073D1CA
 * 000000014073D1DC: add     rsp, 8
 * 000000014073D1E0: call    loc_14073D1D3
 * 000000014073D1E5: add     rsp, 8
 * 000000014073D1E9: call    loc_14073D1DC
 * 000000014073D1EE: add     rsp, 8
 * 000000014073D1F2: call    loc_14073D1E5
 * 000000014073D1F7: add     rsp, 8
 * 000000014073D1FB: call    loc_14073D1EE
 * 000000014073D200: add     rsp, 8
 * 000000014073D204: call    loc_14073D1F7
 * 000000014073D209: add     rsp, 8
 * 000000014073D20D: call    loc_14073D200
 * 000000014073D212: add     rsp, 8
 * 000000014073D216: call    loc_14073D209
 * 000000014073D21B: add     rsp, 8
 * 000000014073D21F: call    loc_14073D212
 * 000000014073D224: add     rsp, 8
 * 000000014073D228: call    loc_14073D21B
 * 000000014073D22D: add     rsp, 8
 * 000000014073D231: call    loc_14073D224
 * 000000014073D236: add     rsp, 8
 * 000000014073D23A: call    loc_14073D22D
 * 000000014073D23F: add     rsp, 8
 * 000000014073D243: call    loc_14073D236
 * 000000014073D248: add     rsp, 8
 * 000000014073D24C: call    loc_14073D23F
 * 000000014073D251: add     rsp, 8
 * 000000014073D255: call    loc_14073D248
 * 000000014073D25A: add     rsp, 8
 * 000000014073D25E: call    loc_14073D251
 * 000000014073D263: add     rsp, 8
 * 000000014073D267: call    loc_14073D25A
 * 000000014073D26C: add     rsp, 8
 * 000000014073D270: call    loc_14073D263
 * 000000014073D275: add     rsp, 8
 * 000000014073D279: call    loc_14073D26C
 * 000000014073D27E: add     rsp, 8
 * 000000014073D282: call    loc_14073D275
 * 000000014073D287: add     rsp, 8
 * 000000014073D28B: call    loc_14073D27E
 * 000000014073D290: add     rsp, 8
 * 000000014073D294: call    loc_14073D287
 * 000000014073D299: add     rsp, 8
 * 000000014073D29D: call    loc_14073D290
 * 000000014073D2A2: add     rsp, 8
 * 000000014073D2A6: mov     eax, 0DADAh
 * 000000014073D2AB: test    byte ptr gs:89Ch, 8
 * 000000014073D2B4: jz      short loc_14073D2BD
 * 000000014073D2B6: mov     al, 20h ; ' '
 * 000000014073D2B8: incsspq rax
 * 000000014073D2BD: lfence
 * 000000014073D2C0: bt      [rsp-0F0h+arg_E8], 9
 * 000000014073D2C6: jnb     short loc_14073D2C9
 * 000000014073D2C8: sti
 * 000000014073D2C9: add     rsp, 10h
 * 000000014073D2CD: retn
 */
