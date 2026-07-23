/*
 * XREFs of IpmiLibAddSelCheckpointRecordEx @ 0x140722270
 * Callers:
 *     IopWheaSelLogCheckPointEx @ 0x1405CC940 (IopWheaSelLogCheckPointEx.c)
 * Callees:
 *     IpmiLibAddSelCheckpointRecord @ 0x140722200 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140722400 (IpmiLibpAddSelRawData.c)
 */

/*
 * Hex-Rays decompilation failed for IpmiLibAddSelCheckpointRecordEx @ 0x140722270
 * Reason: Hex-Rays returned no pseudocode for 0x140722270
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140722270: mov     [rsp+arg_0], rbx
 * 0000000140722275: push    rdi
 * 0000000140722276: sub     rsp, 20h
 * 000000014072227A: movzx   r10d, dx
 * 000000014072227E: mov     rbx, r8
 * 0000000140722281: movzx   edi, r9w
 * 0000000140722285: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014072228F: lea     rcx, [rdi+5]
 * 0000000140722293: mul     rcx
 * 0000000140722296: mov     eax, r10d
 * 0000000140722299: shr     rdx, 2
 * 000000014072229D: movzx   r8d, dx
 * 00000001407222A1: mov     edx, 54h ; 'T'
 * 00000001407222A6: shl     eax, 10h
 * 00000001407222A9: or      r8d, eax
 * 00000001407222AC: call    IpmiLibAddSelCheckpointRecord
 * 00000001407222B1: test    eax, eax
 * 00000001407222B3: js      short loc_1407222C7
 * 00000001407222B5: test    rbx, rbx
 * 00000001407222B8: jz      short loc_1407222C7
 * 00000001407222BA: mov     r9d, edi
 * 00000001407222BD: mov     r8, rbx
 * 00000001407222C0: mov     dl, 0C0h
 * 00000001407222C2: call    IpmiLibpAddSelRawData
 * 00000001407222C7: mov     rbx, [rsp+28h+arg_0]
 * 00000001407222CC: add     rsp, 20h
 * 00000001407222D0: pop     rdi
 * 00000001407222D1: retn
 */
