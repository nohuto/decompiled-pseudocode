/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x14012A498 (RIMAllocateHidConfigDesc.c)
 *     RIMGetKbdExId @ 0x140141078 (RIMGetKbdExId.c)
 *     xxxRemoteConnect @ 0x14016C380 (xxxRemoteConnect.c)
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1401DE298 (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401F0464 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F14BC
 * Reason: Hex-Rays returned no pseudocode for 0x1400F14BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400F14BC: mov     [rsp+arg_0], rbx
 * 00000001400F14C1: mov     [rsp+arg_8], rbp
 * 00000001400F14C6: mov     [rsp+arg_10], rsi
 * 00000001400F14CB: push    rdi
 * 00000001400F14CC: push    r12
 * 00000001400F14CE: push    r13
 * 00000001400F14D0: push    r14
 * 00000001400F14D2: push    r15
 * 00000001400F14D4: sub     rsp, 40h
 * 00000001400F14D8: mov     rbx, [rsp+68h+arg_40]
 * 00000001400F14E0: lea     r13, aNull_2; "NULL"
 * 00000001400F14E7: movzx   r14d, [rsp+68h+arg_30]
 * 00000001400F14F0: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001400F14F4: xor     r12d, r12d
 * 00000001400F14F7: mov     r15, r9
 * 00000001400F14FA: mov     bpl, r8b
 * 00000001400F14FD: mov     r11, rcx
 * 00000001400F1500: lea     esi, [rdi+0Bh]
 * 00000001400F1503: test    dl, dl
 * 00000001400F1505: jnz     short loc_1400F1585
 * 00000001400F1507: test    bpl, bpl
 * 00000001400F150A: jz      short loc_1400F1566
 * 00000001400F150C: test    rbx, rbx
 * 00000001400F150F: jz      short loc_1400F1526
 * 00000001400F1511: inc     rdi
 * 00000001400F1514: cmp     [rbx+rdi*2], r12w
 * 00000001400F1519: jnz     short loc_1400F1511
 * 00000001400F151B: lea     rsi, ds:2[rdi*2]
 * 00000001400F1523: test    rbx, rbx
 * 00000001400F1526: mov     r9, [rsp+68h+arg_38]
 * 00000001400F152E: cmovz   rbx, r13
 * 00000001400F1532: mov     r8d, [rsp+68h+arg_28]
 * 00000001400F153A: mov     rcx, r15
 * 00000001400F153D: movzx   edx, [rsp+68h+arg_20]
 * 00000001400F1545: mov     [rsp+68h+var_30], r12
 * 00000001400F154A: mov     [rsp+68h+var_38], rsi
 * 00000001400F154F: mov     [rsp+68h+var_40], rbx
 * 00000001400F1554: mov     word ptr [rsp+68h+var_48], r14w
 * 00000001400F155A: call    cs:__imp_WppAutoLogTrace
 * 00000001400F1561: nop     dword ptr [rax+rax+00h]
 * 00000001400F1566: lea     r11, [rsp+68h+var_28]
 * 00000001400F156B: mov     rbx, [r11+30h]
 * 00000001400F156F: mov     rbp, [r11+38h]
 * 00000001400F1573: mov     rsi, [r11+40h]
 * 00000001400F1577: mov     rsp, r11
 * 00000001400F157A: pop     r15
 * 00000001400F157C: pop     r14
 * 00000001400F157E: pop     r13
 * 00000001400F1580: pop     r12
 * 00000001400F1582: pop     rdi
 * 00000001400F1583: retn
 * 00000001400F1585: mov     r10, cs:pfnWppTraceMessage
 * 00000001400F158C: test    rbx, rbx
 * 00000001400F158F: jz      short loc_1400F15A8
 * 00000001400F1591: mov     rax, rdi
 * 00000001400F1594: inc     rax
 * 00000001400F1597: cmp     [rbx+rax*2], r12w
 * 00000001400F159C: jnz     short loc_1400F1594
 * 00000001400F159E: lea     rax, ds:2[rax*2]
 * 00000001400F15A6: jmp     short loc_1400F15AB
 * 00000001400F15A8: mov     rax, rsi
 * 00000001400F15AB: mov     r8, [rsp+68h+arg_38]
 * 00000001400F15B3: test    rbx, rbx
 * 00000001400F15B6: mov     [rsp+68h+var_38], r12
 * 00000001400F15BB: mov     rcx, rbx
 * 00000001400F15BE: cmovz   rcx, r13
 * 00000001400F15C2: mov     [rsp+68h+var_40], rax
 * 00000001400F15C7: mov     [rsp+68h+var_48], rcx
 * 00000001400F15CC: mov     r9d, r14d
 * 00000001400F15CF: mov     rcx, r11
 * 00000001400F15D2: mov     edx, 2Bh ; '+'
 * 00000001400F15D7: mov     rax, r10
 * 00000001400F15DA: call    _guard_dispatch_icall
 * 00000001400F15DF: jmp     loc_1400F1507
 */
