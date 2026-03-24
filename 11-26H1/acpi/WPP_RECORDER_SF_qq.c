/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x14002F0B4
 * Callers:
 *     InternalRawAccessOpRegionHandler @ 0x14001CFF0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIDispatchIrp @ 0x140024580 (ACPIDispatchIrp.c)
 *     ACPIReleaseGlobalLock @ 0x14002E900 (ACPIReleaseGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x14002EF2C (ACPIStartNextGlobalLockRequest.c)
 *     ACPIDispatchAddDevice @ 0x14005E070 (ACPIDispatchAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x14002F0B4
 * Reason: Hex-Rays returned no pseudocode for 0x14002F0B4
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002F0B4: mov     [rsp+arg_0], rbx
 * 000000014002F0B9: mov     [rsp+arg_8], rbp
 * 000000014002F0BE: mov     [rsp+arg_10], rsi
 * 000000014002F0C3: push    rdi
 * 000000014002F0C4: push    r14
 * 000000014002F0C6: push    r15
 * 000000014002F0C8: sub     rsp, 50h
 * 000000014002F0CC: mov     ebp, r8d
 * 000000014002F0CF: mov     r14, rcx
 * 000000014002F0D2: mov     ebx, r8d
 * 000000014002F0D5: mov     r15d, 8
 * 000000014002F0DB: shr     rbx, 10h
 * 000000014002F0DF: movzx   esi, r9w
 * 000000014002F0E3: lea     r11d, [rbp-1]
 * 000000014002F0E7: movzx   edi, dl
 * 000000014002F0EA: mov     r10d, r11d
 * 000000014002F0ED: and     r11d, 1Fh
 * 000000014002F0F1: shr     r10, 5
 * 000000014002F0F5: lea     rax, [rbx+rbx*4]
 * 000000014002F0F9: and     r10d, 7FFh
 * 000000014002F100: lea     rax, [r10+rax*4]
 * 000000014002F104: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014002F10B: mov     eax, [r10+rax*4+2Ch]
 * 000000014002F110: bt      eax, r11d
 * 000000014002F114: jb      short loc_14002F17F
 * 000000014002F116: mov     r9, [rsp+68h+arg_20]
 * 000000014002F11E: lea     rax, [rsp+68h+arg_30]
 * 000000014002F126: mov     [rsp+68h+var_20], 0
 * 000000014002F12F: mov     r8d, ebp
 * 000000014002F132: mov     [rsp+68h+var_28], r15
 * 000000014002F137: mov     edx, edi
 * 000000014002F139: mov     [rsp+68h+var_30], rax
 * 000000014002F13E: mov     rcx, r14
 * 000000014002F141: lea     rax, [rsp+68h+arg_28]
 * 000000014002F149: mov     [rsp+68h+var_38], r15
 * 000000014002F14E: mov     [rsp+68h+var_40], rax
 * 000000014002F153: mov     word ptr [rsp+68h+var_48], si
 * 000000014002F158: call    cs:__imp_WppAutoLogTrace
 * 000000014002F15F: nop     dword ptr [rax+rax+00h]
 * 000000014002F164: lea     r11, [rsp+68h+var_18]
 * 000000014002F169: mov     rbx, [r11+20h]
 * 000000014002F16D: mov     rbp, [r11+28h]
 * 000000014002F171: mov     rsi, [r11+30h]
 * 000000014002F175: mov     rsp, r11
 * 000000014002F178: pop     r15
 * 000000014002F17A: pop     r14
 * 000000014002F17C: pop     rdi
 * 000000014002F17D: retn
 * 000000014002F17F: lea     rcx, [rbx+rbx*4]
 * 000000014002F183: add     rcx, rcx
 * 000000014002F186: cmp     [r10+rcx*8+29h], dil
 * 000000014002F18B: jb      short loc_14002F116
 * 000000014002F18D: mov     rax, cs:pfnWppTraceMessage
 * 000000014002F194: lea     rdx, [rsp+68h+arg_30]
 * 000000014002F19C: mov     r8, [rsp+68h+arg_20]
 * 000000014002F1A4: mov     r9d, esi
 * 000000014002F1A7: mov     rcx, [r10+rcx*8+18h]
 * 000000014002F1AC: mov     [rsp+68h+var_28], 0
 * 000000014002F1B5: mov     [rsp+68h+var_30], r15
 * 000000014002F1BA: mov     [rsp+68h+var_38], rdx
 * 000000014002F1BF: lea     rdx, [rsp+68h+arg_28]
 * 000000014002F1C7: mov     [rsp+68h+var_40], r15
 * 000000014002F1CC: mov     [rsp+68h+var_48], rdx
 * 000000014002F1D1: mov     edx, 2Bh ; '+'
 * 000000014002F1D6: call    _guard_dispatch_icall
 * 000000014002F1DB: jmp     loc_14002F116
 */
