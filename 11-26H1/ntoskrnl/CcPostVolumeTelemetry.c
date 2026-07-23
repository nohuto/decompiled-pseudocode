/*
 * XREFs of CcPostVolumeTelemetry @ 0x140495AE0
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140B114C0 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     CcHasVolumeCumulativeTelemetryChanged @ 0x140200444 (CcHasVolumeCumulativeTelemetryChanged.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeRcuReadUnlock @ 0x140222040 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x140386340 (KeRcuReadLock.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CcAggregateCumulativeVolumeTelemetry @ 0x1404957F4 (CcAggregateCumulativeVolumeTelemetry.c)
 *     CcHasVolumeTelemetryChanged @ 0x140495A9C (CcHasVolumeTelemetryChanged.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x140497654 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteT.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x140497D80 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x140498EE0 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x140499270 (McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CcAggregateCumulativeGlobalTelemetry @ 0x140B404D0 (CcAggregateCumulativeGlobalTelemetry.c)
 *     CcResetGlobalTelemetry @ 0x140B5D638 (CcResetGlobalTelemetry.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for CcPostVolumeTelemetry @ 0x140495AE0
 * Reason: Hex-Rays returned no pseudocode for 0x140495AE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140495AE0: mov     r11, rsp
 * 0000000140495AE3: mov     [r11+8], rbx
 * 0000000140495AE7: mov     [r11+10h], rsi
 * 0000000140495AEB: mov     [r11+18h], rdi
 * 0000000140495AEF: mov     [r11+20h], r12
 * 0000000140495AF3: push    r13
 * 0000000140495AF5: push    r14
 * 0000000140495AF7: push    r15
 * 0000000140495AF9: sub     rsp, 970h
 * 0000000140495B00: mov     rax, cs:__security_cookie
 * 0000000140495B07: xor     rax, rsp
 * 0000000140495B0A: mov     [rsp+988h+var_28], rax
 * 0000000140495B12: xor     r14b, r14b
 * 0000000140495B15: mov     [rsp+988h+var_718], r14b
 * 0000000140495B1D: xor     r13d, r13d
 * 0000000140495B20: mov     [r11-700h], r13d
 * 0000000140495B27: mov     [r11-6D8h], r13d
 * 0000000140495B2E: mov     rsi, 0FFFFF78000000014h
 * 0000000140495B38: mov     rsi, [rsi]
 * 0000000140495B3B: mov     rbx, rsi
 * 0000000140495B3E: sub     rbx, cs:EmpParseLock.Teb
 * 0000000140495B45: mov     rdi, rsi
 * 0000000140495B48: sub     rdi, cs:EmpParseLock.RelativeTimerBias
 * 0000000140495B4F: cmp     rbx, cs:EmpParseLock.Timer.Header.WaitListHead.Flink
 * 0000000140495B56: jge     short loc_140495B6A
 * 0000000140495B58: mov     rax, qword ptr cs:EmpParseLock.Timer.DueTime
 * 0000000140495B5F: test    rax, rax
 * 0000000140495B62: jle     short loc_140495B6A
 * 0000000140495B64: jmp     loc_14049761B
 * 0000000140495B6A: cmp     rdi, cs:EmpParseLock.Timer.Header.WaitListHead.Blink
 * 0000000140495B71: jge     loc_14049760B
 * 0000000140495B77: cmp     qword ptr cs:EmpParseLock.Timer.DueTime, r13
 * 0000000140495B7E: jz      loc_14049760B
 * 0000000140495B84: inc     qword ptr cs:EmpParseLock.Timer.DueTime
 * 0000000140495B8B: mov     rax, cs:EmpParseLock.Timer.TimerListEntry.Blink
 * 0000000140495B92: add     rax, 0Ah
 * 0000000140495B96: mov     [rsp+988h+var_708], rax
 * 0000000140495B9E: imul    rdx, rax, 9B0h; NumberOfBytes
 * 0000000140495BA5: mov     ecx, 600h; PoolType
 * 0000000140495BAA: mov     r8d, 65546343h; Tag
 * 0000000140495BB0: call    ExAllocatePoolWithTag
 * 0000000140495BB5: mov     r15, rax
 * 0000000140495BB8: mov     [rsp+988h+var_6C0], rax
 * 0000000140495BC0: test    rax, rax
 * 0000000140495BC3: jz      loc_14049761B
 * 0000000140495BC9: call    KeRcuReadLock
 * 0000000140495BCE: mov     r12, cs:EmpParseLock.KernelWaitTime
 * 0000000140495BD5: mov     [rsp+988h+var_638], r12
 * 0000000140495BDD: mov     rdx, [rsp+988h+var_708]
 * 0000000140495BE5: lea     rax, EmpParseLock.KernelWaitTime
 * 0000000140495BEC: cmp     r12, rax
 * 0000000140495BEF: jz      loc_140495CD5
 * 0000000140495BF5: mov     ecx, dword ptr [rsp+988h+var_6D8]
 * 0000000140495BFC: cmp     rcx, rdx
 * 0000000140495BFF: jnb     loc_140495CD5
 * 0000000140495C05: inc     ecx
 * 0000000140495C07: mov     dword ptr [rsp+988h+var_6D8], ecx
 * 0000000140495C0E: mov     [rsp+988h+var_580], ecx
 * 0000000140495C15: lea     rcx, [r12-18h]
 * 0000000140495C1A: call    CcHasVolumeTelemetryChanged
 * 0000000140495C1F: test    al, al
 * 0000000140495C21: jnz     short loc_140495C40
 * 0000000140495C23: test    r14b, r14b
 * 0000000140495C26: jnz     short loc_140495C32
 * 0000000140495C28: mov     r13d, dword ptr [rsp+988h+var_700]
 * 0000000140495C30: jmp     short loc_140495BE5
 * 0000000140495C32: lea     rcx, [r12-18h]
 * 0000000140495C37: call    CcHasVolumeCumulativeTelemetryChanged
 * 0000000140495C3C: test    al, al
 * 0000000140495C3E: jz      short loc_140495C28
 * 0000000140495C40: lea     r14, [r12+0D0h]
 * 0000000140495C48: mov     rcx, r14
 * 0000000140495C4B: call    CcAggregateCumulativeVolumeTelemetry
 * 0000000140495C50: mov     r11d, dword ptr [rsp+988h+var_700]
 * 0000000140495C58: imul    rcx, r11, 9B0h
 * 0000000140495C5F: add     rcx, r15; void *
 * 0000000140495C62: mov     rdx, r14; Src
 * 0000000140495C65: mov     r8d, 9B0h; Size
 * 0000000140495C6B: call    memmove
 * 0000000140495C70: lea     rcx, [r12+0E0h]; void *
 * 0000000140495C78: xor     edx, edx; Val
 * 0000000140495C7A: mov     r8d, 4D0h; Size
 * 0000000140495C80: call    memset_0
 * 0000000140495C85: mov     r14b, [rsp+988h+var_718]
 * 0000000140495C8D: test    r14b, r14b
 * 0000000140495C90: jnz     short loc_140495CBE
 * 0000000140495C92: mov     r12, [r12]
 * 0000000140495C96: mov     [rsp+988h+var_638], r12
 * 0000000140495C9E: mov     r13d, dword ptr [rsp+988h+var_700]
 * 0000000140495CA6: inc     r13d
 * 0000000140495CA9: mov     dword ptr [rsp+988h+var_700], r13d
 * 0000000140495CB1: mov     [rsp+988h+var_57C], r13d
 * 0000000140495CB9: jmp     loc_140495BDD
 * 0000000140495CBE: lea     rcx, [r12+5B0h]; void *
 * 0000000140495CC6: xor     edx, edx; Val
 * 0000000140495CC8: mov     r8d, 4D0h; Size
 * 0000000140495CCE: call    memset_0
 * 0000000140495CD3: jmp     short loc_140495C92
 * 0000000140495CD5: call    KeRcuReadUnlock
 * 0000000140495CDA: call    CcAggregateCumulativeGlobalTelemetry
 * 0000000140495CDF: mov     ecx, dword ptr cs:EmpParseLock.SchedulerAssistLastYieldBoostTime+4
 * 0000000140495CE5: test    cl, 1
 * 0000000140495CE8: jz      loc_140495DE9
 * 0000000140495CEE: mov     rax, 6666666666666667h
 * 0000000140495CF8: imul    rbx
 * 0000000140495CFB: sar     rdx, 2
 * 0000000140495CFF: mov     r9, rdx
 * 0000000140495D02: shr     r9, 3Fh
 * 0000000140495D06: add     r9, rdx
 * 0000000140495D09: mov     rax, qword ptr cs:EmpParseLock.___u33+20h
 * 0000000140495D10: mov     qword ptr [rsp+988h+var_8F0+8], rax
 * 0000000140495D18: mov     rax, qword ptr cs:EmpParseLock.___u33+18h
 * 0000000140495D1F: mov     qword ptr [rsp+988h+var_8F0], rax
 * 0000000140495D27: mov     rax, qword ptr cs:EmpParseLock.___u33+10h
 * 0000000140495D2E: mov     qword ptr [rsp+988h+var_900+8], rax
 * 0000000140495D36: mov     rax, qword ptr cs:EmpParseLock.___u33+8
 * 0000000140495D3D: mov     qword ptr [rsp+988h+var_900], rax
 * 0000000140495D45: mov     rax, qword ptr cs:EmpParseLock.___u33
 * 0000000140495D4C: mov     [rsp+988h+var_908], rax
 * 0000000140495D54: mov     rax, qword ptr cs:EmpParseLock.___u33+70h
 * 0000000140495D5B: mov     qword ptr [rsp+988h+var_918+8], rax
 * 0000000140495D60: mov     rax, qword ptr cs:EmpParseLock.___u33+68h
 * 0000000140495D67: mov     qword ptr [rsp+988h+var_918], rax
 * 0000000140495D6C: mov     rax, qword ptr cs:EmpParseLock.___u33+60h
 * 0000000140495D73: mov     qword ptr [rsp+988h+var_928+8], rax
 * 0000000140495D78: mov     rax, qword ptr cs:EmpParseLock.___u33+58h
 * 0000000140495D7F: mov     qword ptr [rsp+988h+var_928], rax
 * 0000000140495D84: mov     rax, qword ptr cs:EmpParseLock.___u33+50h
 * 0000000140495D8B: mov     qword ptr [rsp+988h+var_938+8], rax
 * 0000000140495D90: mov     rax, qword ptr cs:EmpParseLock.___u33+48h
 * 0000000140495D97: mov     qword ptr [rsp+988h+var_938], rax
 * 0000000140495D9C: mov     rax, qword ptr cs:EmpParseLock.___u33+40h
 * 0000000140495DA3: mov     qword ptr [rsp+988h+var_948+8], rax
 * 0000000140495DA8: mov     rax, qword ptr cs:EmpParseLock.___u33+38h
 * 0000000140495DAF: mov     qword ptr [rsp+988h+var_948], rax
 * 0000000140495DB4: mov     rax, qword ptr cs:EmpParseLock.___u33+30h
 * 0000000140495DBB: mov     qword ptr [rsp+988h+var_958+8], rax
 * 0000000140495DC0: mov     rax, qword ptr cs:EmpParseLock.___u33+28h
 * 0000000140495DC7: mov     qword ptr [rsp+988h+var_958], rax
 * 0000000140495DCC: mov     rax, qword ptr cs:EmpParseLock.Timer.Processor
 * 0000000140495DD3: mov     [rsp+988h+var_960], rax
 * 0000000140495DD8: mov     rax, cs:EmpParseLock.Timer.Dpc
 * 0000000140495DDF: mov     [rsp+988h+var_968], rax
 * 0000000140495DE4: call    McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer
 * 0000000140495DE9: mov     r8, 6666666666666667h
 * 0000000140495DF3: call    CcResetGlobalTelemetry
 * 0000000140495DF8: xor     r11d, r11d
 * 0000000140495DFB: test    r14b, r14b
 * 0000000140495DFE: jnz     loc_140496E62
 * 0000000140495E04: lea     r14d, [r11+8]
 * 0000000140495E08: lea     r12d, [r11+2]
 * 0000000140495E0C: mov     eax, r13d
 * 0000000140495E0F: mov     [rsp+988h+var_448], rax
 * 0000000140495E17: mov     [rsp+988h+var_710], r11d
 * 0000000140495E1F: test    r13d, r13d
 * 0000000140495E22: jz      loc_140496E44
 * 0000000140495E28: mov     r13, r11
 * 0000000140495E2B: mov     [rsp+988h+var_708], r11
 * 0000000140495E33: imul    rdi, r13, 9B0h
 * 0000000140495E3A: add     rdi, r15
 * 0000000140495E3D: mov     r8, [rdi+70h]
 * 0000000140495E41: test    r8, r8
 * 0000000140495E44: jz      loc_140496E5A
 * 0000000140495E4A: mov     rax, r8
 * 0000000140495E4D: sub     rax, [rdi+78h]
 * 0000000140495E51: imul    rax, 64h ; 'd'
 * 0000000140495E55: xor     edx, edx
 * 0000000140495E57: div     r8
 * 0000000140495E5A: mov     r9, rax
 * 0000000140495E5D: mov     [rsp+988h+var_6D0], r9
 * 0000000140495E65: mov     eax, dword ptr cs:EmpParseLock.SchedulerAssistLastYieldBoostTime+4
 * 0000000140495E6B: test    al, 1
 * 0000000140495E6D: jnz     loc_14076B23D
 * 0000000140495E73: mov     eax, dword ptr cs:EmpParseLock.SchedulerAssistLastYieldBoostTime+4
 * 0000000140495E79: test    al, 1
 * 0000000140495E7B: jz      loc_1404962C0
 * 0000000140495E81: mov     rax, 6666666666666667h
 * 0000000140495E8B: imul    rbx
 * 0000000140495E8E: sar     rdx, 2
 * 0000000140495E92: mov     rax, rdx
 * 0000000140495E95: shr     rax, 3Fh
 * 0000000140495E99: add     rdx, rax
 * 0000000140495E9C: mov     rax, [rdi+4D8h]
 * 0000000140495EA3: mov     [rsp+988h+var_728], rax
 * 0000000140495EAB: mov     rax, [rdi+4D0h]
 * 0000000140495EB2: mov     [rsp+988h+var_730], rax
 * 0000000140495EBA: mov     rax, [rdi+4C8h]
 * 0000000140495EC1: mov     [rsp+988h+var_738], rax
 * 0000000140495EC9: mov     rax, [rdi+4C0h]
 * 0000000140495ED0: mov     [rsp+988h+var_740], rax
 * 0000000140495ED8: mov     rax, [rdi+4B8h]
 * 0000000140495EDF: mov     [rsp+988h+var_748], rax
 * 0000000140495EE7: mov     rax, [rdi+4B0h]
 * 0000000140495EEE: mov     [rsp+988h+var_750], rax
 * 0000000140495EF6: mov     rax, [rdi+4A8h]
 * 0000000140495EFD: mov     [rsp+988h+var_758], rax
 * 0000000140495F05: mov     rax, [rdi+4A0h]
 * 0000000140495F0C: mov     [rsp+988h+var_760], rax
 * 0000000140495F14: mov     rax, [rdi+498h]
 * 0000000140495F1B: mov     [rsp+988h+var_768], rax
 * 0000000140495F23: mov     rax, [rdi+490h]
 * 0000000140495F2A: mov     [rsp+988h+var_770], rax
 * 0000000140495F32: mov     rax, [rdi+488h]
 * 0000000140495F39: mov     [rsp+988h+var_778], rax
 * 0000000140495F41: mov     rax, [rdi+480h]
 * 0000000140495F48: mov     [rsp+988h+var_780], rax
 * 0000000140495F50: mov     rax, [rdi+478h]
 * 0000000140495F57: mov     [rsp+988h+var_788], rax
 * 0000000140495F5F: mov     rax, [rdi+470h]
 * 0000000140495F66: mov     [rsp+988h+var_790], rax
 * 0000000140495F6E: mov     rax, [rdi+468h]
 * 0000000140495F75: mov     [rsp+988h+var_798], rax
 * 0000000140495F7D: mov     rax, [rdi+460h]
 * 0000000140495F84: mov     [rsp+988h+var_7A0], rax
 * 0000000140495F8C: mov     rax, [rdi+458h]
 * 0000000140495F93: mov     [rsp+988h+var_7A8], rax
 * 0000000140495F9B: mov     rax, [rdi+450h]
 * 0000000140495FA2: mov     [rsp+988h+var_7B0], rax
 * 0000000140495FAA: mov     rax, [rdi+448h]
 * 0000000140495FB1: mov     [rsp+988h+var_7B8], rax
 * 0000000140495FB9: mov     rax, [rdi+440h]
 * 0000000140495FC0: mov     [rsp+988h+var_7C0], rax
 * 0000000140495FC8: mov     rax, [rdi+438h]
 * 0000000140495FCF: mov     [rsp+988h+var_7C8], rax
 * 0000000140495FD7: mov     rax, [rdi+430h]
 * 0000000140495FDE: mov     [rsp+988h+var_7D0], rax
 * 0000000140495FE6: mov     rax, [rdi+428h]
 * 0000000140495FED: mov     [rsp+988h+var_7D8], rax
 * 0000000140495FF5: mov     rax, [rdi+420h]
 * 0000000140495FFC: mov     [rsp+988h+var_7E0], rax
 * 0000000140496004: mov     rax, [rdi+260h]
 * 000000014049600B: mov     [rsp+988h+var_7E8], rax
 * 0000000140496013: mov     rax, [rdi+258h]
 * 000000014049601A: mov     [rsp+988h+var_7F0], rax
 * 0000000140496022: mov     rax, [rdi+250h]
 * 0000000140496029: mov     [rsp+988h+var_7F8], rax
 * 0000000140496031: mov     rax, [rdi+248h]
 * 0000000140496038: mov     [rsp+988h+var_800], rax
 * 0000000140496040: mov     rax, [rdi+240h]
 * 0000000140496047: mov     [rsp+988h+var_808], rax
 * 000000014049604F: mov     rax, [rdi+238h]
 * 0000000140496056: mov     [rsp+988h+var_810], rax
 * 000000014049605E: mov     rax, [rdi+230h]
 * 0000000140496065: mov     [rsp+988h+var_818], rax
 * 000000014049606D: mov     rax, [rdi+228h]
 * 0000000140496074: mov     [rsp+988h+var_820], rax
 * 000000014049607C: mov     rax, [rdi+220h]
 * 0000000140496083: mov     [rsp+988h+var_828], rax
 * 000000014049608B: mov     rax, [rdi+218h]
 * 0000000140496092: mov     [rsp+988h+var_830], rax
 * 000000014049609A: mov     rax, [rdi+210h]
 * 00000001404960A1: mov     [rsp+988h+var_838], rax
 * 00000001404960A9: mov     rax, [rdi+208h]
 * 00000001404960B0: mov     [rsp+988h+var_840], rax
 * 00000001404960B8: mov     rax, [rdi+200h]
 * 00000001404960BF: mov     [rsp+988h+var_848], rax
 * 00000001404960C7: mov     rax, [rdi+1F8h]
 * 00000001404960CE: mov     [rsp+988h+var_850], rax
 * 00000001404960D6: mov     rax, [rdi+1F0h]
 * 00000001404960DD: mov     [rsp+988h+var_858], rax
 * 00000001404960E5: mov     rax, [rdi+1E8h]
 * 00000001404960EC: mov     [rsp+988h+var_860], rax
 * 00000001404960F4: mov     rax, [rdi+1E0h]
 * 00000001404960FB: mov     [rsp+988h+var_868], rax
 * 0000000140496103: mov     rax, [rdi+1D8h]
 * 000000014049610A: mov     [rsp+988h+var_870], rax
 * 0000000140496112: mov     rax, [rdi+1D0h]
 * 0000000140496119: mov     [rsp+988h+var_878], rax
 * 0000000140496121: mov     rax, [rdi+1C8h]
 * 0000000140496128: mov     [rsp+988h+var_880], rax
 * 0000000140496130: mov     rax, [rdi+1C0h]
 * 0000000140496137: mov     [rsp+988h+var_888], rax
 * 000000014049613F: mov     rax, [rdi+1B8h]
 * 0000000140496146: mov     [rsp+988h+var_890], rax
 * 000000014049614E: mov     rax, [rdi+1B0h]
 * 0000000140496155: mov     [rsp+988h+var_898], rax
 * 000000014049615D: mov     rax, [rdi+1A8h]
 * 0000000140496164: mov     [rsp+988h+var_8A0], rax
 * 000000014049616C: mov     rax, [rdi+1A0h]
 * 0000000140496173: mov     [rsp+988h+var_8A8], rax
 * 000000014049617B: mov     rax, [rdi+198h]
 * 0000000140496182: mov     [rsp+988h+var_8B0], rax
 * 000000014049618A: mov     rax, [rdi+190h]
 * 0000000140496191: mov     [rsp+988h+var_8B8], rax
 * 0000000140496199: mov     rax, [rdi+188h]
 * 00000001404961A0: mov     [rsp+988h+var_8C0], rax
 * 00000001404961A8: mov     rax, [rdi+180h]
 * 00000001404961AF: mov     [rsp+988h+var_8C8], rax
 * 00000001404961B7: mov     rax, [rdi+178h]
 * 00000001404961BE: mov     [rsp+988h+var_8D0], rax
 * 00000001404961C6: mov     rax, [rdi+170h]
 * 00000001404961CD: mov     [rsp+988h+var_8D8], rax
 * 00000001404961D5: mov     rax, [rdi+168h]
 * 00000001404961DC: mov     [rsp+988h+var_8E0], rax
 * 00000001404961E4: mov     rax, [rdi+160h]
 * 00000001404961EB: mov     qword ptr [rsp+988h+var_8F0+8], rax
 * 00000001404961F3: mov     rax, [rdi+158h]
 * 00000001404961FA: mov     qword ptr [rsp+988h+var_8F0], rax
 * 0000000140496202: mov     rax, [rdi+150h]
 * 0000000140496209: mov     qword ptr [rsp+988h+var_900+8], rax
 * 0000000140496211: mov     rax, [rdi+148h]
 * 0000000140496218: mov     qword ptr [rsp+988h+var_900], rax
 * 0000000140496220: mov     rax, [rdi+140h]
 * 0000000140496227: mov     [rsp+988h+var_908], rax
 * 000000014049622F: mov     rax, [rdi+138h]
 * 0000000140496236: mov     qword ptr [rsp+988h+var_918+8], rax
 * 000000014049623B: mov     rax, [rdi+130h]
 * 0000000140496242: mov     qword ptr [rsp+988h+var_918], rax
 * 0000000140496247: mov     rax, [rdi+128h]
 * 000000014049624E: mov     qword ptr [rsp+988h+var_928+8], rax
 * 0000000140496253: mov     rax, [rdi+120h]
 * 000000014049625A: mov     qword ptr [rsp+988h+var_928], rax
 * 000000014049625F: mov     rax, [rdi+118h]
 * 0000000140496266: mov     qword ptr [rsp+988h+var_938+8], rax
 * 000000014049626B: mov     rax, [rdi+110h]
 * 0000000140496272: mov     qword ptr [rsp+988h+var_938], rax
 * 0000000140496277: mov     rax, [rdi+108h]
 * 000000014049627E: mov     qword ptr [rsp+988h+var_948+8], rax
 * 0000000140496283: mov     rax, [rdi+100h]
 * 000000014049628A: mov     qword ptr [rsp+988h+var_948], rax
 * 000000014049628F: mov     rax, [rdi+0F8h]
 * 0000000140496296: mov     qword ptr [rsp+988h+var_958+8], rax
 * 000000014049629B: mov     rax, [rdi+0F0h]
 * 00000001404962A2: mov     qword ptr [rsp+988h+var_958], rax
 * 00000001404962A7: mov     rax, [rdi+0E8h]
 * 00000001404962AE: mov     [rsp+988h+var_960], rax
 * 00000001404962B3: mov     [rsp+988h+var_968], rdx
 * 00000001404962B8: mov     r9, rdi
 * 00000001404962BB: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001404962C0: mov     eax, dword ptr cs:EmpParseLock.SchedulerAssistLastYieldBoostTime+4
 * 00000001404962C6: test    al, 1
 * 00000001404962C8: jnz     loc_140496F03
 * 00000001404962CE: xor     r11d, r11d
 * 00000001404962D1: cmp     [rsp+988h+var_718], r11b
 * 00000001404962D9: jz      loc_140496E1B
 * 00000001404962DF: lea     edx, [r11+5]
 * 00000001404962E3: cmp     cs:dword_140E06AF8, edx
 * 00000001404962E9: jbe     loc_140496E1B
 * 00000001404962EF: mov     r8, 400000000000h
 * 00000001404962F9: test    cs:qword_140E06B08, r8
 * 0000000140496300: jz      loc_140496E1B
 * 0000000140496306: mov     rax, cs:qword_140E06B10
 * 000000014049630D: and     rax, r8
 * 0000000140496310: cmp     rax, cs:qword_140E06B10
 * 0000000140496317: jnz     loc_140496E1B
 * 000000014049631D: mov     [rsp+988h+var_640], 1000000h
 * 0000000140496329: lea     rax, [rsp+988h+var_640]
 * 0000000140496331: mov     [rsp+988h+var_418], rax
 * 0000000140496339: mov     [rsp+988h+var_410], 8
 * 0000000140496345: mov     [rsp+988h+var_714], dx
 * 000000014049634D: lea     rax, [rsp+988h+var_714]
 * 0000000140496355: mov     [rsp+988h+var_408], rax
 * 000000014049635D: mov     [rsp+988h+var_400], 2
 * 0000000140496369: imul    r10, r13, 9B0h
 * 0000000140496370: add     r10, r15
 * 0000000140496373: mov     [rsp+988h+var_3F8], r10
 * 000000014049637B: mov     [rsp+988h+var_3F0], 10h
 * 0000000140496387: mov     rax, 6666666666666667h
 * 0000000140496391: imul    rbx
 * 0000000140496394: sar     rdx, 2
 * 0000000140496398: mov     rax, rdx
 * 000000014049639B: shr     rax, 3Fh
 * 000000014049639F: add     rdx, rax
 * 00000001404963A2: mov     [rsp+988h+var_648], rdx
 * 00000001404963AA: lea     rax, [rsp+988h+var_648]
 * 00000001404963B2: mov     [rsp+988h+var_3E8], rax
 * 00000001404963BA: mov     [rsp+988h+var_3E0], 8
 * 00000001404963C6: imul    rax, r13, 9B0h
 * 00000001404963CD: mov     rcx, [rax+r15+4E0h]
 * 00000001404963D5: mov     [rsp+988h+var_578], rcx
 * 00000001404963DD: lea     rax, [rsp+988h+var_578]
 * 00000001404963E5: mov     [rsp+988h+var_3D8], rax
 * 00000001404963ED: mov     [rsp+988h+var_3D0], 8
 * 00000001404963F9: imul    rax, r13, 9B0h
 * 0000000140496400: mov     rcx, [rax+r15+4E8h]
 * 0000000140496408: mov     [rsp+988h+var_570], rcx
 * 0000000140496410: lea     rax, [rsp+988h+var_570]
 * 0000000140496418: mov     [rsp+988h+var_3C8], rax
 * 0000000140496420: mov     [rsp+988h+var_3C0], 8
 * 000000014049642C: imul    rax, r13, 9B0h
 * 0000000140496433: mov     rcx, [rax+r15+4F0h]
 * 000000014049643B: mov     [rsp+988h+var_568], rcx
 * 0000000140496443: lea     rax, [rsp+988h+var_568]
 * 000000014049644B: mov     [rsp+988h+var_3B8], rax
 * 0000000140496453: mov     [rsp+988h+var_3B0], 8
 * 000000014049645F: imul    rax, r13, 9B0h
 * 0000000140496466: mov     rcx, [rax+r15+4F8h]
 * 000000014049646E: mov     [rsp+988h+var_560], rcx
 * 0000000140496476: lea     rax, [rsp+988h+var_560]
 * 000000014049647E: mov     [rsp+988h+var_3A8], rax
 * 0000000140496486: mov     [rsp+988h+var_3A0], 8
 * 0000000140496492: imul    rax, r13, 9B0h
 * 0000000140496499: mov     rcx, [rax+r15+500h]
 * 00000001404964A1: mov     [rsp+988h+var_558], rcx
 * 00000001404964A9: lea     rax, [rsp+988h+var_558]
 * 00000001404964B1: mov     [rsp+988h+var_398], rax
 * 00000001404964B9: mov     [rsp+988h+var_390], 8
 * 00000001404964C5: imul    rax, r13, 9B0h
 * 00000001404964CC: mov     rcx, [rax+r15+508h]
 * 00000001404964D4: mov     [rsp+988h+var_550], rcx
 * 00000001404964DC: lea     rax, [rsp+988h+var_550]
 * 00000001404964E4: mov     [rsp+988h+var_388], rax
 * 00000001404964EC: mov     [rsp+988h+var_380], 8
 * 00000001404964F8: imul    r9, r13, 9B0h
 * 00000001404964FF: mov     rax, [r9+r15+588h]
 * 0000000140496507: mov     [rsp+988h+var_548], rax
 * 000000014049650F: lea     rax, [rsp+988h+var_548]
 * 0000000140496517: mov     [rsp+988h+var_378], rax
 * 000000014049651F: mov     [rsp+988h+var_370], 8
 * 000000014049652B: imul    r8, r13, 9B0h
 * 0000000140496532: mov     rax, [r8+r15+590h]
 * 000000014049653A: mov     [rsp+988h+var_540], rax
 * 0000000140496542: lea     rax, [rsp+988h+var_540]
 * 000000014049654A: mov     [rsp+988h+var_368], rax
 * 0000000140496552: mov     [rsp+988h+var_360], 8
 * 000000014049655E: imul    rdx, r13, 9B0h
 * 0000000140496565: mov     rax, [rdx+r15+598h]
 * 000000014049656D: mov     [rsp+988h+var_538], rax
 * 0000000140496575: lea     rax, [rsp+988h+var_538]
 * 000000014049657D: mov     [rsp+988h+var_358], rax
 * 0000000140496585: mov     [rsp+988h+var_350], 8
 * 0000000140496591: imul    rax, r13, 9B0h
 * 0000000140496598: mov     rcx, [rax+r15+5A0h]
 * 00000001404965A0: mov     [rsp+988h+var_530], rcx
 * 00000001404965A8: lea     rax, [rsp+988h+var_530]
 * 00000001404965B0: mov     [rsp+988h+var_348], rax
 * 00000001404965B8: mov     [rsp+988h+var_340], 8
 * 00000001404965C4: imul    rax, r13, 9B0h
 * 00000001404965CB: mov     rcx, [rax+r15+510h]
 * 00000001404965D3: mov     [rsp+988h+var_528], rcx
 * 00000001404965DB: lea     rax, [rsp+988h+var_528]
 * 00000001404965E3: mov     [rsp+988h+var_338], rax
 * 00000001404965EB: mov     [rsp+988h+var_330], 8
 * 00000001404965F7: imul    rax, r13, 9B0h
 * 00000001404965FE: mov     rcx, [rax+r15+518h]
 * 0000000140496606: mov     [rsp+988h+var_520], rcx
 * 000000014049660E: lea     rax, [rsp+988h+var_520]
 * 0000000140496616: mov     [rsp+988h+var_328], rax
 * 000000014049661E: mov     [rsp+988h+var_320], 8
 * 000000014049662A: imul    rax, r13, 9B0h
 * 0000000140496631: mov     rcx, [rax+r15+520h]
 * 0000000140496639: mov     [rsp+988h+var_518], rcx
 * 0000000140496641: lea     rax, [rsp+988h+var_518]
 * 0000000140496649: mov     [rsp+988h+var_318], rax
 * 0000000140496651: mov     [rsp+988h+var_310], 8
 * 000000014049665D: imul    rax, r13, 9B0h
 * 0000000140496664: mov     rcx, [rax+r15+528h]
 * 000000014049666C: mov     [rsp+988h+var_510], rcx
 * 0000000140496674: lea     rax, [rsp+988h+var_510]
 * 000000014049667C: mov     [rsp+988h+var_308], rax
 * 0000000140496684: mov     [rsp+988h+var_300], 8
 * 0000000140496690: imul    rax, r13, 9B0h
 * 0000000140496697: mov     rcx, [rax+r15+530h]
 * 000000014049669F: mov     [rsp+988h+var_508], rcx
 * 00000001404966A7: lea     rax, [rsp+988h+var_508]
 * 00000001404966AF: mov     [rsp+988h+var_2F8], rax
 * 00000001404966B7: mov     [rsp+988h+var_2F0], 8
 * 00000001404966C3: imul    rax, r13, 9B0h
 * 00000001404966CA: mov     rcx, [rax+r15+538h]
 * 00000001404966D2: mov     [rsp+988h+var_500], rcx
 * 00000001404966DA: lea     rax, [rsp+988h+var_500]
 * 00000001404966E2: mov     [rsp+988h+var_2E8], rax
 * 00000001404966EA: mov     [rsp+988h+var_2E0], 8
 * 00000001404966F6: imul    rax, r13, 9B0h
 * 00000001404966FD: mov     rcx, [rax+r15+540h]
 * 0000000140496705: mov     [rsp+988h+var_4F8], rcx
 * 000000014049670D: lea     rax, [rsp+988h+var_4F8]
 * 0000000140496715: mov     [rsp+988h+var_2D8], rax
 * 000000014049671D: mov     [rsp+988h+var_2D0], 8
 * 0000000140496729: imul    rax, r13, 9B0h
 * 0000000140496730: mov     rcx, [rax+r15+548h]
 * 0000000140496738: mov     [rsp+988h+var_4F0], rcx
 * 0000000140496740: lea     rax, [rsp+988h+var_4F0]
 * 0000000140496748: mov     [rsp+988h+var_2C8], rax
 * 0000000140496750: mov     [rsp+988h+var_2C0], 8
 * 000000014049675C: mov     rax, [rsp+988h+var_6D0]
 * 0000000140496764: mov     [rsp+988h+var_4E8], rax
 * 000000014049676C: lea     rax, [rsp+988h+var_4E8]
 * 0000000140496774: mov     [rsp+988h+var_2B8], rax
 * 000000014049677C: mov     [rsp+988h+var_2B0], 8
 * 0000000140496788: imul    rax, r13, 9B0h
 * 000000014049678F: mov     rcx, [rax+r15+550h]
 * 0000000140496797: mov     [rsp+988h+var_4E0], rcx
 * 000000014049679F: lea     rax, [rsp+988h+var_4E0]
 * 00000001404967A7: mov     [rsp+988h+var_2A8], rax
 * 00000001404967AF: mov     [rsp+988h+var_2A0], 8
 * 00000001404967BB: imul    rax, r13, 9B0h
 * 00000001404967C2: mov     rcx, [rax+r15+570h]
 * 00000001404967CA: mov     [rsp+988h+var_4D8], rcx
 * 00000001404967D2: lea     rax, [rsp+988h+var_4D8]
 * 00000001404967DA: mov     [rsp+988h+var_298], rax
 * 00000001404967E2: mov     [rsp+988h+var_290], 8
 * 00000001404967EE: imul    rax, r13, 9B0h
 * 00000001404967F5: mov     rcx, [rax+r15+578h]
 * 00000001404967FD: mov     [rsp+988h+var_4D0], rcx
 * 0000000140496805: lea     rax, [rsp+988h+var_4D0]
 * 000000014049680D: mov     [rsp+988h+var_288], rax
 * 0000000140496815: mov     [rsp+988h+var_280], 8
 * 0000000140496821: imul    rax, r13, 9B0h
 * 0000000140496828: mov     rcx, [rax+r15+580h]
 * 0000000140496830: mov     [rsp+988h+var_4C8], rcx
 * 0000000140496838: lea     rax, [rsp+988h+var_4C8]
 * 0000000140496840: mov     [rsp+988h+var_278], rax
 * 0000000140496848: mov     [rsp+988h+var_270], 8
 * 0000000140496854: imul    rax, r13, 9B0h
 * 000000014049685B: mov     rcx, [rax+r15+558h]
 * 0000000140496863: mov     [rsp+988h+var_4C0], rcx
 * 000000014049686B: lea     rax, [rsp+988h+var_4C0]
 * 0000000140496873: mov     [rsp+988h+var_268], rax
 * 000000014049687B: mov     [rsp+988h+var_260], 8
 * 0000000140496887: imul    rax, r13, 9B0h
 * 000000014049688E: mov     rcx, [rax+r15+560h]
 * 0000000140496896: mov     [rsp+988h+var_4B8], rcx
 * 000000014049689E: lea     rax, [rsp+988h+var_4B8]
 * 00000001404968A6: mov     [rsp+988h+var_258], rax
 * 00000001404968AE: mov     [rsp+988h+var_250], 8
 * 00000001404968BA: imul    rax, r13, 9B0h
 * 00000001404968C1: mov     rcx, [rax+r15+568h]
 * 00000001404968C9: mov     [rsp+988h+var_4B0], rcx
 * 00000001404968D1: lea     rax, [rsp+988h+var_4B0]
 * 00000001404968D9: mov     [rsp+988h+var_248], rax
 * 00000001404968E1: mov     [rsp+988h+var_240], 8
 * 00000001404968ED: imul    rax, r13, 9B0h
 * 00000001404968F4: mov     rcx, [rax+r15+5A8h]
 * 00000001404968FC: mov     [rsp+988h+var_4A8], rcx
 * 0000000140496904: lea     rax, [rsp+988h+var_4A8]
 * 000000014049690C: mov     [rsp+988h+var_238], rax
 * 0000000140496914: mov     [rsp+988h+var_230], 8
 * 0000000140496920: imul    rax, r13, 9B0h
 * 0000000140496927: mov     rcx, [rax+r15+5B0h]
 * 000000014049692F: mov     [rsp+988h+var_4A0], rcx
 * 0000000140496937: lea     rax, [rsp+988h+var_4A0]
 * 000000014049693F: mov     [rsp+988h+var_228], rax
 * 0000000140496947: mov     [rsp+988h+var_220], 8
 * 0000000140496953: imul    rax, r13, 9B0h
 * 000000014049695A: mov     rcx, [rax+r15+738h]
 * 0000000140496962: mov     [rsp+988h+var_498], rcx
 * 000000014049696A: lea     rax, [rsp+988h+var_498]
 * 0000000140496972: mov     [rsp+988h+var_218], rax
 * 000000014049697A: mov     [rsp+988h+var_210], 8
 * 0000000140496986: imul    rax, r13, 9B0h
 * 000000014049698D: mov     rcx, [rax+r15+740h]
 * 0000000140496995: mov     [rsp+988h+var_490], rcx
 * 000000014049699D: lea     rax, [rsp+988h+var_490]
 * 00000001404969A5: mov     [rsp+988h+var_208], rax
 * 00000001404969AD: mov     [rsp+988h+var_200], 8
 * 00000001404969B9: imul    rax, r13, 9B0h
 * 00000001404969C0: mov     rcx, [rax+r15+748h]
 * 00000001404969C8: mov     [rsp+988h+var_488], rcx
 * 00000001404969D0: lea     rax, [rsp+988h+var_488]
 * 00000001404969D8: mov     [rsp+988h+var_1F8], rax
 * 00000001404969E0: mov     [rsp+988h+var_1F0], 8
 * 00000001404969EC: imul    rax, r13, 9B0h
 * 00000001404969F3: mov     rcx, [rax+r15+750h]
 * 00000001404969FB: mov     [rsp+988h+var_480], rcx
 * 0000000140496A03: lea     rax, [rsp+988h+var_480]
 * 0000000140496A0B: mov     [rsp+988h+var_1E8], rax
 * 0000000140496A13: mov     [rsp+988h+var_1E0], 8
 * 0000000140496A1F: imul    rax, r13, 9B0h
 * 0000000140496A26: mov     rcx, [rax+r15+758h]
 * 0000000140496A2E: mov     [rsp+988h+var_478], rcx
 * 0000000140496A36: lea     rax, [rsp+988h+var_478]
 * 0000000140496A3E: mov     [rsp+988h+var_1D8], rax
 * 0000000140496A46: mov     [rsp+988h+var_1D0], 8
 * 0000000140496A52: imul    rax, r13, 9B0h
 * 0000000140496A59: mov     rcx, [rax+r15+8E0h]
 * 0000000140496A61: mov     [rsp+988h+var_470], rcx
 * 0000000140496A69: lea     rax, [rsp+988h+var_470]
 * 0000000140496A71: mov     [rsp+988h+var_1C8], rax
 * 0000000140496A79: mov     [rsp+988h+var_1C0], 8
 * 0000000140496A85: imul    rax, r13, 9B0h
 * 0000000140496A8C: mov     rcx, [rax+r15+8E8h]
 * 0000000140496A94: mov     [rsp+988h+var_468], rcx
 * 0000000140496A9C: lea     rax, [rsp+988h+var_468]
 * 0000000140496AA4: mov     [rsp+988h+var_1B8], rax
 * 0000000140496AAC: mov     [rsp+988h+var_1B0], 8
 * 0000000140496AB8: mov     rax, [r9+r15+588h]
 * 0000000140496AC0: mov     [rsp+988h+var_460], rax
 * 0000000140496AC8: lea     rax, [rsp+988h+var_460]
 * 0000000140496AD0: mov     [rsp+988h+var_1A8], rax
 * 0000000140496AD8: mov     [rsp+988h+var_1A0], 8
 * 0000000140496AE4: mov     rax, [r8+r15+590h]
 * 0000000140496AEC: mov     [rsp+988h+var_458], rax
 * 0000000140496AF4: lea     rax, [rsp+988h+var_458]
 * 0000000140496AFC: mov     [rsp+988h+var_198], rax
 * 0000000140496B04: mov     [rsp+988h+var_190], 8
 * 0000000140496B10: mov     rax, [rdx+r15+598h]
 * 0000000140496B18: mov     [rsp+988h+var_450], rax
 * 0000000140496B20: lea     rax, [rsp+988h+var_450]
 * 0000000140496B28: mov     [rsp+988h+var_188], rax
 * 0000000140496B30: mov     [rsp+988h+var_180], 8
 * 0000000140496B3C: or      rax, 0FFFFFFFFFFFFFFFFh
 * 0000000140496B40: lea     rcx, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 0000000140496B47: inc     rax
 * 0000000140496B4A: cmp     [rcx+rax*2], r11w
 * 0000000140496B4F: jnz     short loc_140496B47
 * 0000000140496B51: mov     [rsp+988h+var_178], rcx
 * 0000000140496B59: lea     eax, ds:2[rax*2]
 * 0000000140496B60: mov     [rsp+988h+var_170], eax
 * 0000000140496B67: mov     [rsp+988h+var_16C], r11d
 * 0000000140496B6F: mov     edx, 0Ch
 * 0000000140496B74: mov     [rsp+988h+var_6F8], dx
 * 0000000140496B7C: lea     rax, [rsp+988h+var_6F8]
 * 0000000140496B84: mov     [rsp+988h+var_168], rax
 * 0000000140496B8C: mov     [rsp+988h+var_160], 2
 * 0000000140496B98: lea     rax, [r10+5B8h]
 * 0000000140496B9F: mov     [rsp+988h+var_158], rax
 * 0000000140496BA7: mov     [rsp+988h+var_150], 60h ; '`'
 * 0000000140496BB3: mov     [rsp+988h+var_6F4], dx
 * 0000000140496BBB: lea     rax, [rsp+988h+var_6F4]
 * 0000000140496BC3: mov     [rsp+988h+var_148], rax
 * 0000000140496BCB: mov     [rsp+988h+var_140], 2
 * 0000000140496BD7: lea     rax, [r10+618h]
 * 0000000140496BDE: mov     [rsp+988h+var_138], rax
 * 0000000140496BE6: mov     [rsp+988h+var_130], 60h ; '`'
 * 0000000140496BF2: mov     [rsp+988h+var_6F0], dx
 * 0000000140496BFA: lea     rax, [rsp+988h+var_6F0]
 * 0000000140496C02: mov     [rsp+988h+var_128], rax
 * 0000000140496C0A: mov     [rsp+988h+var_120], 2
 * 0000000140496C16: lea     rax, [r10+678h]
 * 0000000140496C1D: mov     [rsp+988h+var_118], rax
 * 0000000140496C25: mov     [rsp+988h+var_110], 60h ; '`'
 * 0000000140496C31: mov     [rsp+988h+var_6EC], dx
 * 0000000140496C39: lea     rax, [rsp+988h+var_6EC]
 * 0000000140496C41: mov     [rsp+988h+var_108], rax
 * 0000000140496C49: mov     [rsp+988h+var_100], 2
 * 0000000140496C55: lea     rax, [r10+6D8h]
 * 0000000140496C5C: mov     [rsp+988h+var_F8], rax
 * 0000000140496C64: mov     [rsp+988h+var_F0], 60h ; '`'
 * 0000000140496C70: mov     [rsp+988h+var_6E8], dx
 * 0000000140496C78: lea     rax, [rsp+988h+var_6E8]
 * 0000000140496C80: mov     [rsp+988h+var_E8], rax
 * 0000000140496C88: mov     [rsp+988h+var_E0], 2
 * 0000000140496C94: lea     rax, [r10+760h]
 * 0000000140496C9B: mov     [rsp+988h+var_D8], rax
 * 0000000140496CA3: mov     [rsp+988h+var_D0], 60h ; '`'
 * 0000000140496CAF: mov     [rsp+988h+var_6E4], dx
 * 0000000140496CB7: lea     rax, [rsp+988h+var_6E4]
 * 0000000140496CBF: mov     [rsp+988h+var_C8], rax
 * 0000000140496CC7: mov     [rsp+988h+var_C0], 2
 * 0000000140496CD3: lea     rax, [r10+7C0h]
 * 0000000140496CDA: mov     [rsp+988h+var_B8], rax
 * 0000000140496CE2: mov     [rsp+988h+var_B0], 60h ; '`'
 * 0000000140496CEE: mov     [rsp+988h+var_6E0], dx
 * 0000000140496CF6: lea     rax, [rsp+988h+var_6E0]
 * 0000000140496CFE: mov     [rsp+988h+var_A8], rax
 * 0000000140496D06: mov     [rsp+988h+var_A0], 2
 * 0000000140496D12: lea     rax, [r10+820h]
 * 0000000140496D19: mov     [rsp+988h+var_98], rax
 * 0000000140496D21: mov     [rsp+988h+var_90], 60h ; '`'
 * 0000000140496D2D: mov     [rsp+988h+var_6DC], dx
 * 0000000140496D35: lea     rax, [rsp+988h+var_6DC]
 * 0000000140496D3D: mov     [rsp+988h+var_88], rax
 * 0000000140496D45: mov     [rsp+988h+var_80], 2
 * 0000000140496D51: lea     rax, [r10+880h]
 * 0000000140496D58: mov     [rsp+988h+var_78], rax
 * 0000000140496D60: mov     [rsp+988h+var_70], 60h ; '`'
 * 0000000140496D6C: mov     word ptr [rsp+988h+var_6D8], dx
 * 0000000140496D74: lea     rax, [rsp+988h+var_6D8]
 * 0000000140496D7C: mov     [rsp+988h+var_68], rax
 * 0000000140496D84: mov     [rsp+988h+var_60], 2
 * 0000000140496D90: lea     rax, [r10+8F0h]
 * 0000000140496D97: mov     [rsp+988h+var_58], rax
 * 0000000140496D9F: mov     [rsp+988h+var_50], 60h ; '`'
 * 0000000140496DAB: mov     word ptr [rsp+988h+var_700], dx
 * 0000000140496DB3: lea     rax, [rsp+988h+var_700]
 * 0000000140496DBB: mov     [rsp+988h+var_48], rax
 * 0000000140496DC3: mov     [rsp+988h+var_40], 2
 * 0000000140496DCF: lea     rax, [r10+950h]
 * 0000000140496DD6: mov     [rsp+988h+var_38], rax
 * 0000000140496DDE: mov     [rsp+988h+var_30], 60h ; '`'
 * 0000000140496DEA: lea     rax, [rsp+988h+var_438]
 * 0000000140496DF2: mov     [rsp+988h+var_960], rax
 * 0000000140496DF7: mov     dword ptr [rsp+988h+var_968], 41h ; 'A'
 * 0000000140496DFF: xor     r9d, r9d
 * 0000000140496E02: xor     r8d, r8d
 * 0000000140496E05: lea     rdx, byte_140045147
 * 0000000140496E0C: lea     rcx, dword_140E06AF8
 * 0000000140496E13: call    _tlgWriteTransfer_EtwWriteTransfer
 * 0000000140496E18: xor     r11d, r11d
 * 0000000140496E1B: mov     edx, [rsp+988h+var_710]
 * 0000000140496E22: inc     edx
 * 0000000140496E24: mov     [rsp+988h+var_710], edx
 * 0000000140496E2B: mov     r13d, edx
 * 0000000140496E2E: mov     [rsp+988h+var_708], r13
 * 0000000140496E36: cmp     r13, [rsp+988h+var_448]
 * 0000000140496E3E: jb      loc_140495E33
 * 0000000140496E44: mov     cs:EmpParseLock.Teb, rsi
 * 0000000140496E4B: xor     edx, edx; Tag
 * 0000000140496E4D: mov     rcx, r15; P
 * 0000000140496E50: call    ExFreePoolWithTag
 * 0000000140496E55: jmp     loc_14049761B
 * 0000000140496E5A: mov     r9, r11
 * 0000000140496E5D: jmp     loc_140495E5D
 * 0000000140496E62: mov     r9d, 5
 * 0000000140496E68: cmp     cs:dword_140E06AF8, r9d
 * 0000000140496E6F: ja      loc_14076AEA6
 * 0000000140496E75: mov     r12d, 2
 * 0000000140496E7B: lea     r14d, [r12+6]
 * 0000000140496E80: mov     qword ptr cs:EmpParseLock.___u33+78h, r11
 * 0000000140496E87: mov     qword ptr cs:EmpParseLock.___u33+80h, r11
 * 0000000140496E8E: mov     qword ptr cs:EmpParseLock.___u33+88h, r11
 * 0000000140496E95: mov     qword ptr cs:EmpParseLock.___u33+90h, r11
 * 0000000140496E9C: mov     qword ptr cs:EmpParseLock.___u33+98h, r11
 * 0000000140496EA3: mov     qword ptr cs:EmpParseLock.___u33+0A0h, r11
 * 0000000140496EAA: mov     qword ptr cs:EmpParseLock.___u33+0A8h, r11
 * 0000000140496EB1: mov     qword ptr cs:EmpParseLock.___u33+0B0h, r11
 * 0000000140496EB8: mov     qword ptr cs:EmpParseLock.___u33+0B8h, r11
 * 0000000140496EBF: mov     qword ptr cs:EmpParseLock.___u34, r11
 * 0000000140496EC6: mov     cs:EmpParseLock.QueueListEntry.Flink, r11
 * 0000000140496ECD: mov     cs:EmpParseLock.QueueListEntry.Blink, r11
 * 0000000140496ED4: mov     qword ptr cs:EmpParseLock.___u39, r11
 * 0000000140496EDB: mov     cs:EmpParseLock.Process, r11
 * 0000000140496EE2: mov     cs:EmpParseLock.UserAffinity, r11
 * 0000000140496EE9: mov     qword ptr cs:EmpParseLock.UserAffinityPrimaryGroup, r11
 * 0000000140496EF0: mov     cs:EmpParseLock.AffinityVersion, r11
 * 0000000140496EF7: mov     cs:EmpParseLock.RelativeTimerBias, rsi
 * 0000000140496EFE: jmp     loc_140495E0C
 * 0000000140496F03: imul    rcx, r13, 9B0h
 * 0000000140496F0A: imul    r8, r13, 9B0h
 * 0000000140496F11: imul    r9, r13, 9B0h
 * 0000000140496F18: imul    r10, r13, 9B0h
 * 0000000140496F1F: imul    r11, r13, 9B0h
 * 0000000140496F26: imul    rdi, r13, 9B0h
 * 0000000140496F2D: imul    r14, r13, 9B0h
 * 0000000140496F34: imul    r15, r13, 9B0h
 * 0000000140496F3B: imul    r12, r13, 9B0h
 * 0000000140496F42: imul    r13, 9B0h
 * 0000000140496F49: mov     rdx, [rsp+988h+var_708]
 * 0000000140496F51: imul    rax, rdx, 9B0h
 * 0000000140496F58: mov     qword ptr [rsp+988h+var_6B0], rax
 * 0000000140496F60: imul    rax, rdx, 9B0h
 * 0000000140496F67: mov     [rsp+988h+var_6C8], rax
 * 0000000140496F6F: imul    rax, rdx, 9B0h
 * 0000000140496F76: mov     [rsp+988h+var_6B8], rax
 * 0000000140496F7E: imul    rax, rdx, 9B0h
 * 0000000140496F85: mov     qword ptr [rsp+988h+var_658+8], rax
 * 0000000140496F8D: imul    rax, rdx, 9B0h
 * 0000000140496F94: mov     qword ptr [rsp+988h+var_658], rax
 * 0000000140496F9C: imul    rax, rdx, 9B0h
 * 0000000140496FA3: mov     [rsp+988h+var_660], rax
 * 0000000140496FAB: imul    rax, rdx, 9B0h
 * 0000000140496FB2: mov     [rsp+988h+var_668], rax
 * 0000000140496FBA: imul    rax, rdx, 9B0h
 * 0000000140496FC1: mov     [rsp+988h+var_670], rax
 * 0000000140496FC9: imul    rax, rdx, 9B0h
 * 0000000140496FD0: mov     [rsp+988h+var_678], rax
 * 0000000140496FD8: imul    rax, rdx, 9B0h
 * 0000000140496FDF: mov     [rsp+988h+var_680], rax
 * 0000000140496FE7: imul    rax, rdx, 9B0h
 * 0000000140496FEE: mov     [rsp+988h+var_688], rax
 * 0000000140496FF6: imul    rax, rdx, 9B0h
 * 0000000140496FFD: mov     [rsp+988h+var_690], rax
 * 0000000140497005: imul    rax, rdx, 9B0h
 * 000000014049700C: mov     [rsp+988h+var_698], rax
 * 0000000140497014: imul    rax, rdx, 9B0h
 * 000000014049701B: mov     [rsp+988h+var_6A0], rax
 * 0000000140497023: imul    rax, rdx, 9B0h
 * 000000014049702A: mov     qword ptr [rsp+988h+var_6B0+8], rax
 * 0000000140497032: imul    rax, rdx, 9B0h
 * 0000000140497039: mov     [rsp+988h+var_630], rax
 * 0000000140497041: imul    rax, rdx, 9B0h
 * 0000000140497048: mov     [rsp+988h+var_628], rax
 * 0000000140497050: imul    rax, rdx, 9B0h
 * 0000000140497057: mov     [rsp+988h+var_620], rax
 * 000000014049705F: imul    rax, rdx, 9B0h
 * 0000000140497066: mov     [rsp+988h+var_618], rax
 * 000000014049706E: imul    rax, rdx, 9B0h
 * 0000000140497075: mov     [rsp+988h+var_610], rax
 * 000000014049707D: imul    rax, rdx, 9B0h
 * 0000000140497084: mov     [rsp+988h+var_608], rax
 * 000000014049708C: imul    rax, rdx, 9B0h
 * 0000000140497093: mov     [rsp+988h+var_600], rax
 * 000000014049709B: imul    rax, rdx, 9B0h
 * 00000001404970A2: mov     [rsp+988h+var_5F8], rax
 * 00000001404970AA: imul    rax, rdx, 9B0h
 * 00000001404970B1: mov     [rsp+988h+var_5F0], rax
 * 00000001404970B9: imul    rax, rdx, 9B0h
 * 00000001404970C0: mov     [rsp+988h+var_5E8], rax
 * 00000001404970C8: imul    rax, rdx, 9B0h
 * 00000001404970CF: mov     [rsp+988h+var_5E0], rax
 * 00000001404970D7: imul    rax, rdx, 9B0h
 * 00000001404970DE: mov     [rsp+988h+var_5D8], rax
 * 00000001404970E6: imul    rax, rdx, 9B0h
 * 00000001404970ED: mov     [rsp+988h+var_5D0], rax
 * 00000001404970F5: imul    rax, rdx, 9B0h
 * 00000001404970FC: mov     [rsp+988h+var_5C8], rax
 * 0000000140497104: imul    rax, rdx, 9B0h
 * 000000014049710B: mov     [rsp+988h+var_5C0], rax
 * 0000000140497113: imul    rax, rdx, 9B0h
 * 000000014049711A: mov     [rsp+988h+var_5B8], rax
 * 0000000140497122: imul    rax, rdx, 9B0h
 * 0000000140497129: mov     [rsp+988h+var_5B0], rax
 * 0000000140497131: imul    rax, rdx, 9B0h
 * 0000000140497138: mov     [rsp+988h+var_5A8], rax
 * 0000000140497140: imul    rax, rdx, 9B0h
 * 0000000140497147: mov     [rsp+988h+var_5A0], rax
 * 000000014049714F: imul    rax, rdx, 9B0h
 * 0000000140497156: mov     [rsp+988h+var_598], rax
 * 000000014049715E: imul    rax, rdx, 9B0h
 * 0000000140497165: mov     [rsp+988h+var_590], rax
 * 000000014049716D: imul    rax, rdx, 9B0h
 * 0000000140497174: mov     [rsp+988h+var_588], rax
 * 000000014049717C: imul    rax, rdx, 9B0h
 * 0000000140497183: mov     [rsp+988h+var_648], rax
 * 000000014049718B: mov     rax, 6666666666666667h
 * 0000000140497195: imul    rbx
 * 0000000140497198: sar     rdx, 2
 * 000000014049719C: mov     rax, rdx
 * 000000014049719F: shr     rax, 3Fh
 * 00000001404971A3: add     rdx, rax
 * 00000001404971A6: mov     [rsp+988h+var_640], rdx
 * 00000001404971AE: imul    rdx, [rsp+988h+var_708], 9B0h
 * 00000001404971BA: mov     rax, [rsp+988h+var_6C0]
 * 00000001404971C2: add     rdx, rax
 * 00000001404971C5: mov     rax, [rcx+rax+408h]
 * 00000001404971CD: mov     [rsp+988h+var_7E8], rax
 * 00000001404971D5: mov     rcx, [rsp+988h+var_6C0]
 * 00000001404971DD: mov     rax, [r8+rcx+400h]
 * 00000001404971E5: mov     [rsp+988h+var_7F0], rax
 * 00000001404971ED: mov     rax, [r9+rcx+3F8h]
 * 00000001404971F5: mov     [rsp+988h+var_7F8], rax
 * 00000001404971FD: mov     rax, [r10+rcx+3F0h]
 * 0000000140497205: mov     [rsp+988h+var_800], rax
 * 000000014049720D: mov     rax, [r11+rcx+3E8h]
 * 0000000140497215: mov     [rsp+988h+var_808], rax
 * 000000014049721D: mov     rax, [rdi+rcx+3E0h]
 * 0000000140497225: mov     [rsp+988h+var_810], rax
 * 000000014049722D: mov     rax, [r14+rcx+3D8h]
 * 0000000140497235: mov     [rsp+988h+var_818], rax
 * 000000014049723D: mov     rax, [r15+rcx+3D0h]
 * 0000000140497245: mov     [rsp+988h+var_820], rax
 * 000000014049724D: mov     r15, rcx
 * 0000000140497250: mov     rax, [r12+rcx+3C8h]
 * 0000000140497258: mov     [rsp+988h+var_828], rax
 * 0000000140497260: mov     rax, [rcx+r13+3C0h]
 * 0000000140497268: mov     [rsp+988h+var_830], rax
 * 0000000140497270: mov     rax, qword ptr [rsp+988h+var_6B0]
 * 0000000140497278: mov     rax, [rax+rcx+3B8h]
 * 0000000140497280: mov     [rsp+988h+var_838], rax
 * 0000000140497288: mov     rax, [rsp+988h+var_6C8]
 * 0000000140497290: mov     rax, [rax+rcx+3B0h]
 * 0000000140497298: mov     [rsp+988h+var_840], rax
 * 00000001404972A0: mov     rax, [rsp+988h+var_6B8]
 * 00000001404972A8: mov     rax, [rax+rcx+3A8h]
 * 00000001404972B0: mov     [rsp+988h+var_848], rax
 * 00000001404972B8: mov     rax, qword ptr [rsp+988h+var_658+8]
 * 00000001404972C0: mov     rax, [rax+rcx+3A0h]
 * 00000001404972C8: mov     [rsp+988h+var_850], rax
 * 00000001404972D0: mov     rax, qword ptr [rsp+988h+var_658]
 * 00000001404972D8: mov     rax, [rax+rcx+398h]
 * 00000001404972E0: mov     [rsp+988h+var_858], rax
 * 00000001404972E8: mov     rax, [rsp+988h+var_660]
 * 00000001404972F0: mov     rax, [rax+rcx+390h]
 * 00000001404972F8: mov     [rsp+988h+var_860], rax
 * 0000000140497300: mov     rax, [rsp+988h+var_668]
 * 0000000140497308: mov     rax, [rax+rcx+388h]
 * 0000000140497310: mov     [rsp+988h+var_868], rax
 * 0000000140497318: mov     rax, [rsp+988h+var_670]
 * 0000000140497320: mov     rax, [rax+rcx+380h]
 * 0000000140497328: mov     [rsp+988h+var_870], rax
 * 0000000140497330: mov     rax, [rsp+988h+var_678]
 * 0000000140497338: mov     rax, [rax+rcx+378h]
 * 0000000140497340: mov     [rsp+988h+var_878], rax
 * 0000000140497348: mov     rax, [rsp+988h+var_680]
 * 0000000140497350: mov     rax, [rax+rcx+370h]
 * 0000000140497358: mov     [rsp+988h+var_880], rax
 * 0000000140497360: mov     rax, [rsp+988h+var_688]
 * 0000000140497368: mov     rax, [rax+rcx+368h]
 * 0000000140497370: mov     [rsp+988h+var_888], rax
 * 0000000140497378: mov     rax, [rsp+988h+var_690]
 * 0000000140497380: mov     rax, [rax+rcx+360h]
 * 0000000140497388: mov     [rsp+988h+var_890], rax
 * 0000000140497390: mov     rax, [rsp+988h+var_698]
 * 0000000140497398: mov     rax, [rax+rcx+358h]
 * 00000001404973A0: mov     [rsp+988h+var_898], rax
 * 00000001404973A8: mov     rax, [rsp+988h+var_6A0]
 * 00000001404973B0: mov     rax, [rax+rcx+350h]
 * 00000001404973B8: mov     [rsp+988h+var_8A0], rax
 * 00000001404973C0: mov     rax, qword ptr [rsp+988h+var_6B0+8]
 * 00000001404973C8: mov     rax, [rax+rcx+348h]
 * 00000001404973D0: mov     [rsp+988h+var_8A8], rax
 * 00000001404973D8: mov     rax, [rsp+988h+var_630]
 * 00000001404973E0: mov     rax, [rax+rcx+340h]
 * 00000001404973E8: mov     [rsp+988h+var_8B0], rax
 * 00000001404973F0: mov     rax, [rsp+988h+var_628]
 * 00000001404973F8: mov     rax, [rax+rcx+338h]
 * 0000000140497400: mov     [rsp+988h+var_8B8], rax
 * 0000000140497408: mov     rax, [rsp+988h+var_620]
 * 0000000140497410: mov     rax, [rax+rcx+330h]
 * 0000000140497418: mov     [rsp+988h+var_8C0], rax
 * 0000000140497420: mov     rax, [rsp+988h+var_618]
 * 0000000140497428: mov     rax, [rax+rcx+328h]
 * 0000000140497430: mov     [rsp+988h+var_8C8], rax
 * 0000000140497438: mov     rax, [rsp+988h+var_610]
 * 0000000140497440: mov     rax, [rax+rcx+320h]
 * 0000000140497448: mov     [rsp+988h+var_8D0], rax
 * 0000000140497450: mov     rax, [rsp+988h+var_608]
 * 0000000140497458: mov     rax, [rax+rcx+318h]
 * 0000000140497460: mov     [rsp+988h+var_8D8], rax
 * 0000000140497468: mov     rax, [rsp+988h+var_600]
 * 0000000140497470: mov     rax, [rax+rcx+310h]
 * 0000000140497478: mov     [rsp+988h+var_8E0], rax
 * 0000000140497480: mov     rax, [rsp+988h+var_5F8]
 * 0000000140497488: mov     rax, [rax+rcx+308h]
 * 0000000140497490: mov     qword ptr [rsp+988h+var_8F0+8], rax
 * 0000000140497498: mov     rax, [rsp+988h+var_5F0]
 * 00000001404974A0: mov     rax, [rax+rcx+300h]
 * 00000001404974A8: mov     qword ptr [rsp+988h+var_8F0], rax
 * 00000001404974B0: mov     rax, [rsp+988h+var_5E8]
 * 00000001404974B8: mov     rax, [rax+rcx+2F8h]
 * 00000001404974C0: mov     qword ptr [rsp+988h+var_900+8], rax
 * 00000001404974C8: mov     rax, [rsp+988h+var_5E0]
 * 00000001404974D0: mov     rax, [rax+rcx+2F0h]
 * 00000001404974D8: mov     qword ptr [rsp+988h+var_900], rax
 * 00000001404974E0: mov     rax, [rsp+988h+var_5D8]
 * 00000001404974E8: mov     rax, [rax+rcx+2E8h]
 * 00000001404974F0: mov     [rsp+988h+var_908], rax
 * 00000001404974F8: mov     rax, [rsp+988h+var_5D0]
 * 0000000140497500: mov     rax, [rax+rcx+2E0h]
 * 0000000140497508: mov     qword ptr [rsp+988h+var_918+8], rax
 * 000000014049750D: mov     rax, [rsp+988h+var_5C8]
 * 0000000140497515: mov     rax, [rax+rcx+2D8h]
 * 000000014049751D: mov     qword ptr [rsp+988h+var_918], rax
 * 0000000140497522: mov     rax, [rsp+988h+var_5C0]
 * 000000014049752A: mov     rax, [rax+rcx+2D0h]
 * 0000000140497532: mov     qword ptr [rsp+988h+var_928+8], rax
 * 0000000140497537: mov     rax, [rsp+988h+var_5B8]
 * 000000014049753F: mov     rax, [rax+rcx+2C8h]
 * 0000000140497547: mov     qword ptr [rsp+988h+var_928], rax
 * 000000014049754C: mov     rax, [rsp+988h+var_5B0]
 * 0000000140497554: mov     rax, [rax+rcx+2C0h]
 * 000000014049755C: mov     qword ptr [rsp+988h+var_938+8], rax
 * 0000000140497561: mov     rax, [rsp+988h+var_5A8]
 * 0000000140497569: mov     rax, [rax+rcx+2B8h]
 * 0000000140497571: mov     qword ptr [rsp+988h+var_938], rax
 * 0000000140497576: mov     rax, [rsp+988h+var_5A0]
 * 000000014049757E: mov     rax, [rax+rcx+2B0h]
 * 0000000140497586: mov     qword ptr [rsp+988h+var_948+8], rax
 * 000000014049758B: mov     rax, [rsp+988h+var_598]
 * 0000000140497593: mov     rax, [rax+rcx+2A8h]
 * 000000014049759B: mov     qword ptr [rsp+988h+var_948], rax
 * 00000001404975A0: mov     rax, [rsp+988h+var_590]
 * 00000001404975A8: mov     rax, [rax+rcx+2A0h]
 * 00000001404975B0: mov     qword ptr [rsp+988h+var_958+8], rax
 * 00000001404975B5: mov     rax, [rsp+988h+var_588]
 * 00000001404975BD: mov     rax, [rax+rcx+298h]
 * 00000001404975C5: mov     qword ptr [rsp+988h+var_958], rax
 * 00000001404975CA: mov     rax, [rsp+988h+var_648]
 * 00000001404975D2: mov     rax, [rax+rcx+290h]
 * 00000001404975DA: mov     [rsp+988h+var_960], rax
 * 00000001404975DF: mov     rax, [rsp+988h+var_640]
 * 00000001404975E7: mov     [rsp+988h+var_968], rax
 * 00000001404975EC: mov     r9, rdx
 * 00000001404975EF: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001404975F4: mov     r14d, 8
 * 00000001404975FA: mov     r13, [rsp+988h+var_708]
 * 0000000140497602: lea     r12d, [r14-6]
 * 0000000140497606: jmp     loc_1404962CE
 * 000000014049760B: mov     r14b, 1
 * 000000014049760E: mov     [rsp+988h+var_718], r14b
 * 0000000140497616: jmp     loc_140495B84
 * 000000014049761B: mov     rcx, [rsp+988h+var_28]
 * 0000000140497623: xor     rcx, rsp; StackCookie
 * 0000000140497626: call    __security_check_cookie
 * 000000014049762B: lea     r11, [rsp+988h+var_18]
 * 0000000140497633: mov     rbx, [r11+20h]
 * 0000000140497637: mov     rsi, [r11+28h]
 * 000000014049763B: mov     rdi, [r11+30h]
 * 000000014049763F: mov     r12, [r11+38h]
 * 0000000140497643: mov     rsp, r11
 * 0000000140497646: pop     r15
 * 0000000140497648: pop     r14
 * 000000014049764A: pop     r13
 * 000000014049764C: retn
 * 000000014074E22E: push    rbp
 * 000000014074E230: sub     rsp, 270h
 * 000000014074E237: mov     rbp, rdx
 * 000000014074E23A: call    KeRcuReadUnlock
 * 000000014074E23F: nop
 * 000000014074E240: add     rsp, 270h
 * 000000014074E247: pop     rbp
 * 000000014074E248: retn
 * 000000014076AEA6: mov     rdx, 400000000000h
 * 000000014076AEB0: lea     rcx, dword_140E06AF8
 * 000000014076AEB7: call    _tlgKeywordOn
 * 000000014076AEBC: test    al, al
 * 000000014076AEBE: jz      loc_140496E75
 * 000000014076AEC4: mov     [rsp+988h+var_6D0], 1000000h
 * 000000014076AED0: lea     rax, [rsp+988h+var_6D0]
 * 000000014076AED8: mov     [rsp+988h+var_418], rax
 * 000000014076AEE0: mov     r14d, 8
 * 000000014076AEE6: mov     [rsp+988h+var_410], r14
 * 000000014076AEEE: mov     [rsp+988h+var_714], r9w
 * 000000014076AEF7: lea     rax, [rsp+988h+var_714]
 * 000000014076AEFF: mov     [rsp+988h+var_408], rax
 * 000000014076AF07: lea     r12d, [r14-6]
 * 000000014076AF0B: mov     [rsp+988h+var_400], r12
 * 000000014076AF13: mov     rax, r8
 * 000000014076AF16: imul    rdi
 * 000000014076AF19: sar     rdx, 2
 * 000000014076AF1D: mov     rax, rdx
 * 000000014076AF20: shr     rax, 3Fh
 * 000000014076AF24: add     rdx, rax
 * 000000014076AF27: mov     [rsp+988h+var_708], rdx
 * 000000014076AF2F: lea     rax, [rsp+988h+var_708]
 * 000000014076AF37: mov     [rsp+988h+var_3F8], rax
 * 000000014076AF3F: mov     [rsp+988h+var_3F0], r14
 * 000000014076AF47: mov     eax, cs:CcNumberNumaNodes
 * 000000014076AF4D: mov     [rsp+988h+var_710], eax
 * 000000014076AF54: lea     rax, [rsp+988h+var_710]
 * 000000014076AF5C: mov     [rsp+988h+var_3E8], rax
 * 000000014076AF64: mov     [rsp+988h+var_3E0], 4
 * 000000014076AF70: mov     rax, qword ptr cs:EmpParseLock.___u33+78h
 * 000000014076AF77: mov     [rsp+988h+var_700], rax
 * 000000014076AF7F: lea     rax, [rsp+988h+var_700]
 * 000000014076AF87: mov     [rsp+988h+var_3D8], rax
 * 000000014076AF8F: mov     [rsp+988h+var_3D0], r14
 * 000000014076AF97: mov     rax, qword ptr cs:EmpParseLock.___u33+80h
 * 000000014076AF9E: mov     [rsp+988h+var_6D8], rax
 * 000000014076AFA6: lea     rax, [rsp+988h+var_6D8]
 * 000000014076AFAE: mov     [rsp+988h+var_3C8], rax
 * 000000014076AFB6: mov     [rsp+988h+var_3C0], r14
 * 000000014076AFBE: mov     rax, qword ptr cs:EmpParseLock.___u33+0B0h
 * 000000014076AFC5: mov     qword ptr [rsp+988h+var_6B0+8], rax
 * 000000014076AFCD: lea     rax, [rsp+988h+var_6B0+8]
 * 000000014076AFD5: mov     [rsp+988h+var_3B8], rax
 * 000000014076AFDD: mov     [rsp+988h+var_3B0], r14
 * 000000014076AFE5: mov     rax, qword ptr cs:EmpParseLock.___u33+0B8h
 * 000000014076AFEC: mov     [rsp+988h+var_6A0], rax
 * 000000014076AFF4: lea     rax, [rsp+988h+var_6A0]
 * 000000014076AFFC: mov     [rsp+988h+var_3A8], rax
 * 000000014076B004: mov     [rsp+988h+var_3A0], r14
 * 000000014076B00C: mov     rax, qword ptr cs:EmpParseLock.___u34
 * 000000014076B013: mov     [rsp+988h+var_698], rax
 * 000000014076B01B: lea     rax, [rsp+988h+var_698]
 * 000000014076B023: mov     [rsp+988h+var_398], rax
 * 000000014076B02B: mov     [rsp+988h+var_390], r14
 * 000000014076B033: mov     rax, cs:EmpParseLock.QueueListEntry.Flink
 * 000000014076B03A: mov     [rsp+988h+var_690], rax
 * 000000014076B042: lea     rax, [rsp+988h+var_690]
 * 000000014076B04A: mov     [rsp+988h+var_388], rax
 * 000000014076B052: mov     [rsp+988h+var_380], r14
 * 000000014076B05A: mov     rax, cs:EmpParseLock.QueueListEntry.Blink
 * 000000014076B061: mov     [rsp+988h+var_688], rax
 * 000000014076B069: lea     rax, [rsp+988h+var_688]
 * 000000014076B071: mov     [rsp+988h+var_378], rax
 * 000000014076B079: mov     [rsp+988h+var_370], r14
 * 000000014076B081: mov     rax, qword ptr cs:EmpParseLock.___u39
 * 000000014076B088: mov     [rsp+988h+var_680], rax
 * 000000014076B090: lea     rax, [rsp+988h+var_680]
 * 000000014076B098: mov     [rsp+988h+var_368], rax
 * 000000014076B0A0: mov     [rsp+988h+var_360], r14
 * 000000014076B0A8: mov     rax, cs:EmpParseLock.Process
 * 000000014076B0AF: mov     [rsp+988h+var_678], rax
 * 000000014076B0B7: lea     rax, [rsp+988h+var_678]
 * 000000014076B0BF: mov     [rsp+988h+var_358], rax
 * 000000014076B0C7: mov     [rsp+988h+var_350], r14
 * 000000014076B0CF: mov     rax, cs:EmpParseLock.UserAffinity
 * 000000014076B0D6: mov     [rsp+988h+var_670], rax
 * 000000014076B0DE: lea     rax, [rsp+988h+var_670]
 * 000000014076B0E6: mov     [rsp+988h+var_348], rax
 * 000000014076B0EE: mov     [rsp+988h+var_340], r14
 * 000000014076B0F6: mov     rax, qword ptr cs:EmpParseLock.UserAffinityPrimaryGroup
 * 000000014076B0FD: mov     [rsp+988h+var_668], rax
 * 000000014076B105: lea     rax, [rsp+988h+var_668]
 * 000000014076B10D: mov     [rsp+988h+var_338], rax
 * 000000014076B115: mov     [rsp+988h+var_330], r14
 * 000000014076B11D: mov     rax, cs:EmpParseLock.AffinityVersion
 * 000000014076B124: mov     [rsp+988h+var_660], rax
 * 000000014076B12C: lea     rax, [rsp+988h+var_660]
 * 000000014076B134: mov     [rsp+988h+var_328], rax
 * 000000014076B13C: mov     [rsp+988h+var_320], r14
 * 000000014076B144: mov     rax, qword ptr cs:EmpParseLock.___u33+88h
 * 000000014076B14B: mov     qword ptr [rsp+988h+var_658], rax
 * 000000014076B153: lea     rax, [rsp+988h+var_658]
 * 000000014076B15B: mov     [rsp+988h+var_318], rax
 * 000000014076B163: mov     [rsp+988h+var_310], r14
 * 000000014076B16B: mov     rax, qword ptr cs:EmpParseLock.___u33+90h
 * 000000014076B172: mov     qword ptr [rsp+988h+var_658+8], rax
 * 000000014076B17A: lea     rax, [rsp+988h+var_658+8]
 * 000000014076B182: mov     [rsp+988h+var_308], rax
 * 000000014076B18A: mov     [rsp+988h+var_300], r14
 * 000000014076B192: mov     rax, qword ptr cs:EmpParseLock.___u33+98h
 * 000000014076B199: mov     [rsp+988h+var_6B8], rax
 * 000000014076B1A1: lea     rax, [rsp+988h+var_6B8]
 * 000000014076B1A9: mov     [rsp+988h+var_2F8], rax
 * 000000014076B1B1: mov     [rsp+988h+var_2F0], r14
 * 000000014076B1B9: mov     rax, qword ptr cs:EmpParseLock.___u33+0A0h
 * 000000014076B1C0: mov     [rsp+988h+var_6C8], rax
 * 000000014076B1C8: lea     rax, [rsp+988h+var_6C8]
 * 000000014076B1D0: mov     [rsp+988h+var_2E8], rax
 * 000000014076B1D8: mov     [rsp+988h+var_2E0], r14
 * 000000014076B1E0: mov     rax, qword ptr cs:EmpParseLock.___u33+0A8h
 * 000000014076B1E7: mov     qword ptr [rsp+988h+var_6B0], rax
 * 000000014076B1EF: lea     rax, [rsp+988h+var_6B0]
 * 000000014076B1F7: mov     [rsp+988h+var_2D8], rax
 * 000000014076B1FF: mov     [rsp+988h+var_2D0], r14
 * 000000014076B207: lea     rax, [rsp+988h+var_438]
 * 000000014076B20F: mov     [rsp+988h+var_960], rax
 * 000000014076B214: mov     dword ptr [rsp+988h+var_968], 17h
 * 000000014076B21C: xor     r9d, r9d
 * 000000014076B21F: xor     r8d, r8d
 * 000000014076B222: lea     rdx, word_140044F6E
 * 000000014076B229: lea     rcx, dword_140E06AF8
 * 000000014076B230: call    _tlgWriteTransfer_EtwWriteTransfer
 * 000000014076B235: xor     r11d, r11d
 * 000000014076B238: jmp     loc_140496E80
 * 000000014076B23D: mov     rax, 6666666666666667h
 * 000000014076B247: imul    rbx
 * 000000014076B24A: sar     rdx, 2
 * 000000014076B24E: mov     rax, rdx
 * 000000014076B251: shr     rax, 3Fh
 * 000000014076B255: add     rdx, rax
 * 000000014076B258: mov     rax, [rdi+418h]
 * 000000014076B25F: mov     [rsp+988h+var_850], rax
 * 000000014076B267: mov     rax, [rdi+410h]
 * 000000014076B26E: mov     [rsp+988h+var_858], rax
 * 000000014076B276: mov     rax, [rdi+288h]
 * 000000014076B27D: mov     [rsp+988h+var_860], rax
 * 000000014076B285: mov     rax, [rdi+280h]
 * 000000014076B28C: mov     [rsp+988h+var_868], rax
 * 000000014076B294: mov     rax, [rdi+278h]
 * 000000014076B29B: mov     [rsp+988h+var_870], rax
 * 000000014076B2A3: mov     rax, [rdi+270h]
 * 000000014076B2AA: mov     [rsp+988h+var_878], rax
 * 000000014076B2B2: mov     rax, [rdi+268h]
 * 000000014076B2B9: mov     [rsp+988h+var_880], rax
 * 000000014076B2C1: mov     rax, [rdi+0E0h]
 * 000000014076B2C8: mov     [rsp+988h+var_888], rax
 * 000000014076B2D0: mov     rax, [rdi+0D8h]
 * 000000014076B2D7: mov     [rsp+988h+var_890], rax
 * 000000014076B2DF: mov     rax, [rdi+98h]
 * 000000014076B2E6: mov     [rsp+988h+var_898], rax
 * 000000014076B2EE: mov     rax, [rdi+90h]
 * 000000014076B2F5: mov     [rsp+988h+var_8A0], rax
 * 000000014076B2FD: mov     rax, [rdi+88h]
 * 000000014076B304: mov     [rsp+988h+var_8A8], rax
 * 000000014076B30C: mov     rax, [rdi+0B0h]
 * 000000014076B313: mov     [rsp+988h+var_8B0], rax
 * 000000014076B31B: mov     rax, [rdi+0A8h]
 * 000000014076B322: mov     [rsp+988h+var_8B8], rax
 * 000000014076B32A: mov     rax, [rdi+0A0h]
 * 000000014076B331: mov     [rsp+988h+var_8C0], rax
 * 000000014076B339: mov     [rsp+988h+var_8C8], r9
 * 000000014076B341: mov     rax, [rdi+80h]
 * 000000014076B348: mov     [rsp+988h+var_8D0], rax
 * 000000014076B350: mov     rax, [rdi+78h]
 * 000000014076B354: mov     [rsp+988h+var_8D8], rax
 * 000000014076B35C: mov     [rsp+988h+var_8E0], r8
 * 000000014076B364: mov     rax, [rdi+68h]
 * 000000014076B368: mov     qword ptr [rsp+988h+var_8F0+8], rax
 * 000000014076B370: mov     rax, [rdi+60h]
 * 000000014076B374: mov     qword ptr [rsp+988h+var_8F0], rax
 * 000000014076B37C: mov     rax, [rdi+58h]
 * 000000014076B380: mov     qword ptr [rsp+988h+var_900+8], rax
 * 000000014076B388: mov     rax, [rdi+50h]
 * 000000014076B38C: mov     qword ptr [rsp+988h+var_900], rax
 * 000000014076B394: mov     rax, [rdi+48h]
 * 000000014076B398: mov     [rsp+988h+var_908], rax
 * 000000014076B3A0: mov     rax, [rdi+40h]
 * 000000014076B3A4: mov     qword ptr [rsp+988h+var_918+8], rax
 * 000000014076B3A9: mov     rax, [rdi+0D0h]
 * 000000014076B3B0: mov     qword ptr [rsp+988h+var_918], rax
 * 000000014076B3B5: mov     rax, [rdi+0C8h]
 * 000000014076B3BC: mov     qword ptr [rsp+988h+var_928+8], rax
 * 000000014076B3C1: mov     rax, [rdi+0C0h]
 * 000000014076B3C8: mov     qword ptr [rsp+988h+var_928], rax
 * 000000014076B3CD: mov     rax, [rdi+0B8h]
 * 000000014076B3D4: mov     qword ptr [rsp+988h+var_938+8], rax
 * 000000014076B3D9: mov     rax, [rdi+38h]
 * 000000014076B3DD: mov     qword ptr [rsp+988h+var_938], rax
 * 000000014076B3E2: mov     rax, [rdi+30h]
 * 000000014076B3E6: mov     qword ptr [rsp+988h+var_948+8], rax
 * 000000014076B3EB: mov     rax, [rdi+28h]
 * 000000014076B3EF: mov     qword ptr [rsp+988h+var_948], rax
 * 000000014076B3F4: mov     rax, [rdi+20h]
 * 000000014076B3F8: mov     qword ptr [rsp+988h+var_958+8], rax
 * 000000014076B3FD: mov     rax, [rdi+18h]
 * 000000014076B401: mov     qword ptr [rsp+988h+var_958], rax
 * 000000014076B406: mov     rax, [rdi+10h]
 * 000000014076B40A: mov     [rsp+988h+var_960], rax
 * 000000014076B40F: mov     [rsp+988h+var_968], rdx
 * 000000014076B414: mov     r9, rdi
 * 000000014076B417: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 000000014076B41C: nop
 * 000000014076B41D: jmp     loc_140495E73
 */
