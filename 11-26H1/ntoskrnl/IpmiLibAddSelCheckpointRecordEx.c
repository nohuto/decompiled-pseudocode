/*
 * XREFs of IpmiLibAddSelCheckpointRecordEx @ 0x14071D5E0
 * Callers:
 *     IopWheaSelLogCheckPointEx @ 0x1405CA070 (IopWheaSelLogCheckPointEx.c)
 * Callees:
 *     IpmiLibAddSelCheckpointRecord @ 0x14071D570 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibpAddSelRawData @ 0x14071D770 (IpmiLibpAddSelRawData.c)
 */

/*
 * Hex-Rays decompilation failed for IpmiLibAddSelCheckpointRecordEx @ 0x14071D5E0
 * Reason: Hex-Rays returned no pseudocode for 0x14071D5E0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014071D5E0: mov     [rsp+arg_0], rbx
 * 000000014071D5E5: push    rdi
 * 000000014071D5E6: sub     rsp, 20h
 * 000000014071D5EA: movzx   r10d, dx
 * 000000014071D5EE: mov     rbx, r8
 * 000000014071D5F1: movzx   edi, r9w
 * 000000014071D5F5: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014071D5FF: lea     rcx, [rdi+5]
 * 000000014071D603: mul     rcx
 * 000000014071D606: mov     eax, r10d
 * 000000014071D609: shr     rdx, 2
 * 000000014071D60D: movzx   r8d, dx
 * 000000014071D611: mov     edx, 54h ; 'T'
 * 000000014071D616: shl     eax, 10h
 * 000000014071D619: or      r8d, eax
 * 000000014071D61C: call    IpmiLibAddSelCheckpointRecord
 * 000000014071D621: test    eax, eax
 * 000000014071D623: js      short loc_14071D637
 * 000000014071D625: test    rbx, rbx
 * 000000014071D628: jz      short loc_14071D637
 * 000000014071D62A: mov     r9d, edi
 * 000000014071D62D: mov     r8, rbx
 * 000000014071D630: mov     dl, 0C0h
 * 000000014071D632: call    IpmiLibpAddSelRawData
 * 000000014071D637: mov     rbx, [rsp+28h+arg_0]
 * 000000014071D63C: add     rsp, 20h
 * 000000014071D640: pop     rdi
 * 000000014071D641: retn
 */
