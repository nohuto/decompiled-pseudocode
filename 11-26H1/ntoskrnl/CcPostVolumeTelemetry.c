/*
 * XREFs of CcPostVolumeTelemetry @ 0x14049BF90
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140B0FC90 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     CcHasVolumeCumulativeTelemetryChanged @ 0x140200444 (CcHasVolumeCumulativeTelemetryChanged.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x140384590 (KeRcuReadLock.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     CcAggregateCumulativeVolumeTelemetry @ 0x14049BCA4 (CcAggregateCumulativeVolumeTelemetry.c)
 *     CcHasVolumeTelemetryChanged @ 0x14049BF4C (CcHasVolumeTelemetryChanged.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x14049DB04 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteT.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x14049E230 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x14049F390 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x14049F720 (McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     CcAggregateCumulativeGlobalTelemetry @ 0x140B3E600 (CcAggregateCumulativeGlobalTelemetry.c)
 *     CcResetGlobalTelemetry @ 0x140B5A31C (CcResetGlobalTelemetry.c)
 *     ExAllocatePoolWithTag @ 0x140C10340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for CcPostVolumeTelemetry @ 0x14049BF90
 * Reason: Hex-Rays returned no pseudocode for 0x14049BF90
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014049BF90: mov     r11, rsp
 * 000000014049BF93: mov     [r11+8], rbx
 * 000000014049BF97: mov     [r11+10h], rsi
 * 000000014049BF9B: mov     [r11+18h], rdi
 * 000000014049BF9F: mov     [r11+20h], r12
 * 000000014049BFA3: push    r13
 * 000000014049BFA5: push    r14
 * 000000014049BFA7: push    r15
 * 000000014049BFA9: sub     rsp, 970h
 * 000000014049BFB0: mov     rax, cs:__security_cookie
 * 000000014049BFB7: xor     rax, rsp
 * 000000014049BFBA: mov     [rsp+988h+var_28], rax
 * 000000014049BFC2: xor     r14b, r14b
 * 000000014049BFC5: mov     [rsp+988h+var_718], r14b
 * 000000014049BFCD: xor     r13d, r13d
 * 000000014049BFD0: mov     [r11-700h], r13d
 * 000000014049BFD7: mov     [r11-6D8h], r13d
 * 000000014049BFDE: mov     rsi, 0FFFFF78000000014h
 * 000000014049BFE8: mov     rsi, [rsi]
 * 000000014049BFEB: mov     rbx, rsi
 * 000000014049BFEE: sub     rbx, cs:EmpParseLock.Queue
 * 000000014049BFF5: mov     rdi, rsi
 * 000000014049BFF8: sub     rdi, cs:EmpParseLock.Teb
 * 000000014049BFFF: cmp     rbx, qword ptr cs:EmpParseLock.Timer.Header
 * 000000014049C006: jge     short loc_14049C01A
 * 000000014049C008: mov     rax, cs:EmpParseLock.Timer.Header.WaitListHead.Blink
 * 000000014049C00F: test    rax, rax
 * 000000014049C012: jle     short loc_14049C01A
 * 000000014049C014: jmp     loc_14049DACB
 * 000000014049C01A: cmp     rdi, cs:EmpParseLock.Timer.Header.WaitListHead.Flink
 * 000000014049C021: jge     loc_14049DABB
 * 000000014049C027: cmp     cs:EmpParseLock.Timer.Header.WaitListHead.Blink, r13
 * 000000014049C02E: jz      loc_14049DABB
 * 000000014049C034: inc     cs:EmpParseLock.Timer.Header.WaitListHead.Blink
 * 000000014049C03B: mov     rax, cs:EmpParseLock.Timer.TimerListEntry.Flink
 * 000000014049C042: add     rax, 0Ah
 * 000000014049C046: mov     [rsp+988h+var_708], rax
 * 000000014049C04E: imul    rdx, rax, 9B0h; NumberOfBytes
 * 000000014049C055: mov     ecx, 600h; PoolType
 * 000000014049C05A: mov     r8d, 65546343h; Tag
 * 000000014049C060: call    ExAllocatePoolWithTag
 * 000000014049C065: mov     r15, rax
 * 000000014049C068: mov     [rsp+988h+var_6C0], rax
 * 000000014049C070: test    rax, rax
 * 000000014049C073: jz      loc_14049DACB
 * 000000014049C079: call    KeRcuReadLock
 * 000000014049C07E: mov     r12, qword ptr cs:EmpParseLock.___u95+8
 * 000000014049C085: mov     [rsp+988h+var_638], r12
 * 000000014049C08D: mov     rdx, [rsp+988h+var_708]
 * 000000014049C095: lea     rax, EmpParseLock.___u95+8
 * 000000014049C09C: cmp     r12, rax
 * 000000014049C09F: jz      loc_14049C185
 * 000000014049C0A5: mov     ecx, dword ptr [rsp+988h+var_6D8]
 * 000000014049C0AC: cmp     rcx, rdx
 * 000000014049C0AF: jnb     loc_14049C185
 * 000000014049C0B5: inc     ecx
 * 000000014049C0B7: mov     dword ptr [rsp+988h+var_6D8], ecx
 * 000000014049C0BE: mov     [rsp+988h+var_580], ecx
 * 000000014049C0C5: lea     rcx, [r12-18h]
 * 000000014049C0CA: call    CcHasVolumeTelemetryChanged
 * 000000014049C0CF: test    al, al
 * 000000014049C0D1: jnz     short loc_14049C0F0
 * 000000014049C0D3: test    r14b, r14b
 * 000000014049C0D6: jnz     short loc_14049C0E2
 * 000000014049C0D8: mov     r13d, dword ptr [rsp+988h+var_700]
 * 000000014049C0E0: jmp     short loc_14049C095
 * 000000014049C0E2: lea     rcx, [r12-18h]
 * 000000014049C0E7: call    CcHasVolumeCumulativeTelemetryChanged
 * 000000014049C0EC: test    al, al
 * 000000014049C0EE: jz      short loc_14049C0D8
 * 000000014049C0F0: lea     r14, [r12+0D0h]
 * 000000014049C0F8: mov     rcx, r14
 * 000000014049C0FB: call    CcAggregateCumulativeVolumeTelemetry
 * 000000014049C100: mov     r11d, dword ptr [rsp+988h+var_700]
 * 000000014049C108: imul    rcx, r11, 9B0h
 * 000000014049C10F: add     rcx, r15; void *
 * 000000014049C112: mov     rdx, r14; Src
 * 000000014049C115: mov     r8d, 9B0h; Size
 * 000000014049C11B: call    memmove
 * 000000014049C120: lea     rcx, [r12+0E0h]; void *
 * 000000014049C128: xor     edx, edx; Val
 * 000000014049C12A: mov     r8d, 4D0h; Size
 * 000000014049C130: call    memset_0
 * 000000014049C135: mov     r14b, [rsp+988h+var_718]
 * 000000014049C13D: test    r14b, r14b
 * 000000014049C140: jnz     short loc_14049C16E
 * 000000014049C142: mov     r12, [r12]
 * 000000014049C146: mov     [rsp+988h+var_638], r12
 * 000000014049C14E: mov     r13d, dword ptr [rsp+988h+var_700]
 * 000000014049C156: inc     r13d
 * 000000014049C159: mov     dword ptr [rsp+988h+var_700], r13d
 * 000000014049C161: mov     [rsp+988h+var_57C], r13d
 * 000000014049C169: jmp     loc_14049C08D
 * 000000014049C16E: lea     rcx, [r12+5B0h]; void *
 * 000000014049C176: xor     edx, edx; Val
 * 000000014049C178: mov     r8d, 4D0h; Size
 * 000000014049C17E: call    memset_0
 * 000000014049C183: jmp     short loc_14049C142
 * 000000014049C185: call    KeRcuReadUnlock
 * 000000014049C18A: call    CcAggregateCumulativeGlobalTelemetry
 * 000000014049C18F: mov     ecx, dword ptr cs:EmpParseLock.___u115+4
 * 000000014049C195: test    cl, 1
 * 000000014049C198: jz      loc_14049C299
 * 000000014049C19E: mov     rax, 6666666666666667h
 * 000000014049C1A8: imul    rbx
 * 000000014049C1AB: sar     rdx, 2
 * 000000014049C1AF: mov     r9, rdx
 * 000000014049C1B2: shr     r9, 3Fh
 * 000000014049C1B6: add     r9, rdx
 * 000000014049C1B9: mov     rax, qword ptr cs:EmpParseLock.___u33+18h
 * 000000014049C1C0: mov     qword ptr [rsp+988h+var_8F0+8], rax
 * 000000014049C1C8: mov     rax, qword ptr cs:EmpParseLock.___u33+10h
 * 000000014049C1CF: mov     qword ptr [rsp+988h+var_8F0], rax
 * 000000014049C1D7: mov     rax, qword ptr cs:EmpParseLock.___u33+8
 * 000000014049C1DE: mov     qword ptr [rsp+988h+var_900+8], rax
 * 000000014049C1E6: mov     rax, qword ptr cs:EmpParseLock.___u33
 * 000000014049C1ED: mov     qword ptr [rsp+988h+var_900], rax
 * 000000014049C1F5: mov     rax, qword ptr cs:EmpParseLock.Timer.Processor
 * 000000014049C1FC: mov     [rsp+988h+var_908], rax
 * 000000014049C204: mov     rax, qword ptr cs:EmpParseLock.___u33+68h
 * 000000014049C20B: mov     qword ptr [rsp+988h+var_918+8], rax
 * 000000014049C210: mov     rax, qword ptr cs:EmpParseLock.___u33+60h
 * 000000014049C217: mov     qword ptr [rsp+988h+var_918], rax
 * 000000014049C21C: mov     rax, qword ptr cs:EmpParseLock.___u33+58h
 * 000000014049C223: mov     qword ptr [rsp+988h+var_928+8], rax
 * 000000014049C228: mov     rax, qword ptr cs:EmpParseLock.___u33+50h
 * 000000014049C22F: mov     qword ptr [rsp+988h+var_928], rax
 * 000000014049C234: mov     rax, qword ptr cs:EmpParseLock.___u33+48h
 * 000000014049C23B: mov     qword ptr [rsp+988h+var_938+8], rax
 * 000000014049C240: mov     rax, qword ptr cs:EmpParseLock.___u33+40h
 * 000000014049C247: mov     qword ptr [rsp+988h+var_938], rax
 * 000000014049C24C: mov     rax, qword ptr cs:EmpParseLock.___u33+38h
 * 000000014049C253: mov     qword ptr [rsp+988h+var_948+8], rax
 * 000000014049C258: mov     rax, qword ptr cs:EmpParseLock.___u33+30h
 * 000000014049C25F: mov     qword ptr [rsp+988h+var_948], rax
 * 000000014049C264: mov     rax, qword ptr cs:EmpParseLock.___u33+28h
 * 000000014049C26B: mov     qword ptr [rsp+988h+var_958+8], rax
 * 000000014049C270: mov     rax, qword ptr cs:EmpParseLock.___u33+20h
 * 000000014049C277: mov     qword ptr [rsp+988h+var_958], rax
 * 000000014049C27C: mov     rax, cs:EmpParseLock.Timer.Dpc
 * 000000014049C283: mov     [rsp+988h+var_960], rax
 * 000000014049C288: mov     rax, cs:EmpParseLock.Timer.TimerListEntry.Blink
 * 000000014049C28F: mov     [rsp+988h+var_968], rax
 * 000000014049C294: call    McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer
 * 000000014049C299: mov     r8, 6666666666666667h
 * 000000014049C2A3: call    CcResetGlobalTelemetry
 * 000000014049C2A8: xor     r11d, r11d
 * 000000014049C2AB: test    r14b, r14b
 * 000000014049C2AE: jnz     loc_14049D312
 * 000000014049C2B4: lea     r14d, [r11+8]
 * 000000014049C2B8: lea     r12d, [r11+2]
 * 000000014049C2BC: mov     eax, r13d
 * 000000014049C2BF: mov     [rsp+988h+var_448], rax
 * 000000014049C2C7: mov     [rsp+988h+var_710], r11d
 * 000000014049C2CF: test    r13d, r13d
 * 000000014049C2D2: jz      loc_14049D2F4
 * 000000014049C2D8: mov     r13, r11
 * 000000014049C2DB: mov     [rsp+988h+var_708], r11
 * 000000014049C2E3: imul    rdi, r13, 9B0h
 * 000000014049C2EA: add     rdi, r15
 * 000000014049C2ED: mov     r8, [rdi+70h]
 * 000000014049C2F1: test    r8, r8
 * 000000014049C2F4: jz      loc_14049D30A
 * 000000014049C2FA: mov     rax, r8
 * 000000014049C2FD: sub     rax, [rdi+78h]
 * 000000014049C301: imul    rax, 64h ; 'd'
 * 000000014049C305: xor     edx, edx
 * 000000014049C307: div     r8
 * 000000014049C30A: mov     r9, rax
 * 000000014049C30D: mov     [rsp+988h+var_6D0], r9
 * 000000014049C315: mov     eax, dword ptr cs:EmpParseLock.___u115+4
 * 000000014049C31B: test    al, 1
 * 000000014049C31D: jnz     loc_1407673BB
 * 000000014049C323: mov     eax, dword ptr cs:EmpParseLock.___u115+4
 * 000000014049C329: test    al, 1
 * 000000014049C32B: jz      loc_14049C770
 * 000000014049C331: mov     rax, 6666666666666667h
 * 000000014049C33B: imul    rbx
 * 000000014049C33E: sar     rdx, 2
 * 000000014049C342: mov     rax, rdx
 * 000000014049C345: shr     rax, 3Fh
 * 000000014049C349: add     rdx, rax
 * 000000014049C34C: mov     rax, [rdi+4D8h]
 * 000000014049C353: mov     [rsp+988h+var_728], rax
 * 000000014049C35B: mov     rax, [rdi+4D0h]
 * 000000014049C362: mov     [rsp+988h+var_730], rax
 * 000000014049C36A: mov     rax, [rdi+4C8h]
 * 000000014049C371: mov     [rsp+988h+var_738], rax
 * 000000014049C379: mov     rax, [rdi+4C0h]
 * 000000014049C380: mov     [rsp+988h+var_740], rax
 * 000000014049C388: mov     rax, [rdi+4B8h]
 * 000000014049C38F: mov     [rsp+988h+var_748], rax
 * 000000014049C397: mov     rax, [rdi+4B0h]
 * 000000014049C39E: mov     [rsp+988h+var_750], rax
 * 000000014049C3A6: mov     rax, [rdi+4A8h]
 * 000000014049C3AD: mov     [rsp+988h+var_758], rax
 * 000000014049C3B5: mov     rax, [rdi+4A0h]
 * 000000014049C3BC: mov     [rsp+988h+var_760], rax
 * 000000014049C3C4: mov     rax, [rdi+498h]
 * 000000014049C3CB: mov     [rsp+988h+var_768], rax
 * 000000014049C3D3: mov     rax, [rdi+490h]
 * 000000014049C3DA: mov     [rsp+988h+var_770], rax
 * 000000014049C3E2: mov     rax, [rdi+488h]
 * 000000014049C3E9: mov     [rsp+988h+var_778], rax
 * 000000014049C3F1: mov     rax, [rdi+480h]
 * 000000014049C3F8: mov     [rsp+988h+var_780], rax
 * 000000014049C400: mov     rax, [rdi+478h]
 * 000000014049C407: mov     [rsp+988h+var_788], rax
 * 000000014049C40F: mov     rax, [rdi+470h]
 * 000000014049C416: mov     [rsp+988h+var_790], rax
 * 000000014049C41E: mov     rax, [rdi+468h]
 * 000000014049C425: mov     [rsp+988h+var_798], rax
 * 000000014049C42D: mov     rax, [rdi+460h]
 * 000000014049C434: mov     [rsp+988h+var_7A0], rax
 * 000000014049C43C: mov     rax, [rdi+458h]
 * 000000014049C443: mov     [rsp+988h+var_7A8], rax
 * 000000014049C44B: mov     rax, [rdi+450h]
 * 000000014049C452: mov     [rsp+988h+var_7B0], rax
 * 000000014049C45A: mov     rax, [rdi+448h]
 * 000000014049C461: mov     [rsp+988h+var_7B8], rax
 * 000000014049C469: mov     rax, [rdi+440h]
 * 000000014049C470: mov     [rsp+988h+var_7C0], rax
 * 000000014049C478: mov     rax, [rdi+438h]
 * 000000014049C47F: mov     [rsp+988h+var_7C8], rax
 * 000000014049C487: mov     rax, [rdi+430h]
 * 000000014049C48E: mov     [rsp+988h+var_7D0], rax
 * 000000014049C496: mov     rax, [rdi+428h]
 * 000000014049C49D: mov     [rsp+988h+var_7D8], rax
 * 000000014049C4A5: mov     rax, [rdi+420h]
 * 000000014049C4AC: mov     [rsp+988h+var_7E0], rax
 * 000000014049C4B4: mov     rax, [rdi+260h]
 * 000000014049C4BB: mov     [rsp+988h+var_7E8], rax
 * 000000014049C4C3: mov     rax, [rdi+258h]
 * 000000014049C4CA: mov     [rsp+988h+var_7F0], rax
 * 000000014049C4D2: mov     rax, [rdi+250h]
 * 000000014049C4D9: mov     [rsp+988h+var_7F8], rax
 * 000000014049C4E1: mov     rax, [rdi+248h]
 * 000000014049C4E8: mov     [rsp+988h+var_800], rax
 * 000000014049C4F0: mov     rax, [rdi+240h]
 * 000000014049C4F7: mov     [rsp+988h+var_808], rax
 * 000000014049C4FF: mov     rax, [rdi+238h]
 * 000000014049C506: mov     [rsp+988h+var_810], rax
 * 000000014049C50E: mov     rax, [rdi+230h]
 * 000000014049C515: mov     [rsp+988h+var_818], rax
 * 000000014049C51D: mov     rax, [rdi+228h]
 * 000000014049C524: mov     [rsp+988h+var_820], rax
 * 000000014049C52C: mov     rax, [rdi+220h]
 * 000000014049C533: mov     [rsp+988h+var_828], rax
 * 000000014049C53B: mov     rax, [rdi+218h]
 * 000000014049C542: mov     [rsp+988h+var_830], rax
 * 000000014049C54A: mov     rax, [rdi+210h]
 * 000000014049C551: mov     [rsp+988h+var_838], rax
 * 000000014049C559: mov     rax, [rdi+208h]
 * 000000014049C560: mov     [rsp+988h+var_840], rax
 * 000000014049C568: mov     rax, [rdi+200h]
 * 000000014049C56F: mov     [rsp+988h+var_848], rax
 * 000000014049C577: mov     rax, [rdi+1F8h]
 * 000000014049C57E: mov     [rsp+988h+var_850], rax
 * 000000014049C586: mov     rax, [rdi+1F0h]
 * 000000014049C58D: mov     [rsp+988h+var_858], rax
 * 000000014049C595: mov     rax, [rdi+1E8h]
 * 000000014049C59C: mov     [rsp+988h+var_860], rax
 * 000000014049C5A4: mov     rax, [rdi+1E0h]
 * 000000014049C5AB: mov     [rsp+988h+var_868], rax
 * 000000014049C5B3: mov     rax, [rdi+1D8h]
 * 000000014049C5BA: mov     [rsp+988h+var_870], rax
 * 000000014049C5C2: mov     rax, [rdi+1D0h]
 * 000000014049C5C9: mov     [rsp+988h+var_878], rax
 * 000000014049C5D1: mov     rax, [rdi+1C8h]
 * 000000014049C5D8: mov     [rsp+988h+var_880], rax
 * 000000014049C5E0: mov     rax, [rdi+1C0h]
 * 000000014049C5E7: mov     [rsp+988h+var_888], rax
 * 000000014049C5EF: mov     rax, [rdi+1B8h]
 * 000000014049C5F6: mov     [rsp+988h+var_890], rax
 * 000000014049C5FE: mov     rax, [rdi+1B0h]
 * 000000014049C605: mov     [rsp+988h+var_898], rax
 * 000000014049C60D: mov     rax, [rdi+1A8h]
 * 000000014049C614: mov     [rsp+988h+var_8A0], rax
 * 000000014049C61C: mov     rax, [rdi+1A0h]
 * 000000014049C623: mov     [rsp+988h+var_8A8], rax
 * 000000014049C62B: mov     rax, [rdi+198h]
 * 000000014049C632: mov     [rsp+988h+var_8B0], rax
 * 000000014049C63A: mov     rax, [rdi+190h]
 * 000000014049C641: mov     [rsp+988h+var_8B8], rax
 * 000000014049C649: mov     rax, [rdi+188h]
 * 000000014049C650: mov     [rsp+988h+var_8C0], rax
 * 000000014049C658: mov     rax, [rdi+180h]
 * 000000014049C65F: mov     [rsp+988h+var_8C8], rax
 * 000000014049C667: mov     rax, [rdi+178h]
 * 000000014049C66E: mov     [rsp+988h+var_8D0], rax
 * 000000014049C676: mov     rax, [rdi+170h]
 * 000000014049C67D: mov     [rsp+988h+var_8D8], rax
 * 000000014049C685: mov     rax, [rdi+168h]
 * 000000014049C68C: mov     [rsp+988h+var_8E0], rax
 * 000000014049C694: mov     rax, [rdi+160h]
 * 000000014049C69B: mov     qword ptr [rsp+988h+var_8F0+8], rax
 * 000000014049C6A3: mov     rax, [rdi+158h]
 * 000000014049C6AA: mov     qword ptr [rsp+988h+var_8F0], rax
 * 000000014049C6B2: mov     rax, [rdi+150h]
 * 000000014049C6B9: mov     qword ptr [rsp+988h+var_900+8], rax
 * 000000014049C6C1: mov     rax, [rdi+148h]
 * 000000014049C6C8: mov     qword ptr [rsp+988h+var_900], rax
 * 000000014049C6D0: mov     rax, [rdi+140h]
 * 000000014049C6D7: mov     [rsp+988h+var_908], rax
 * 000000014049C6DF: mov     rax, [rdi+138h]
 * 000000014049C6E6: mov     qword ptr [rsp+988h+var_918+8], rax
 * 000000014049C6EB: mov     rax, [rdi+130h]
 * 000000014049C6F2: mov     qword ptr [rsp+988h+var_918], rax
 * 000000014049C6F7: mov     rax, [rdi+128h]
 * 000000014049C6FE: mov     qword ptr [rsp+988h+var_928+8], rax
 * 000000014049C703: mov     rax, [rdi+120h]
 * 000000014049C70A: mov     qword ptr [rsp+988h+var_928], rax
 * 000000014049C70F: mov     rax, [rdi+118h]
 * 000000014049C716: mov     qword ptr [rsp+988h+var_938+8], rax
 * 000000014049C71B: mov     rax, [rdi+110h]
 * 000000014049C722: mov     qword ptr [rsp+988h+var_938], rax
 * 000000014049C727: mov     rax, [rdi+108h]
 * 000000014049C72E: mov     qword ptr [rsp+988h+var_948+8], rax
 * 000000014049C733: mov     rax, [rdi+100h]
 * 000000014049C73A: mov     qword ptr [rsp+988h+var_948], rax
 * 000000014049C73F: mov     rax, [rdi+0F8h]
 * 000000014049C746: mov     qword ptr [rsp+988h+var_958+8], rax
 * 000000014049C74B: mov     rax, [rdi+0F0h]
 * 000000014049C752: mov     qword ptr [rsp+988h+var_958], rax
 * 000000014049C757: mov     rax, [rdi+0E8h]
 * 000000014049C75E: mov     [rsp+988h+var_960], rax
 * 000000014049C763: mov     [rsp+988h+var_968], rdx
 * 000000014049C768: mov     r9, rdi
 * 000000014049C76B: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 000000014049C770: mov     eax, dword ptr cs:EmpParseLock.___u115+4
 * 000000014049C776: test    al, 1
 * 000000014049C778: jnz     loc_14049D3B3
 * 000000014049C77E: xor     r11d, r11d
 * 000000014049C781: cmp     [rsp+988h+var_718], r11b
 * 000000014049C789: jz      loc_14049D2CB
 * 000000014049C78F: lea     edx, [r11+5]
 * 000000014049C793: cmp     cs:dword_140E06AF8, edx
 * 000000014049C799: jbe     loc_14049D2CB
 * 000000014049C79F: mov     r8, 400000000000h
 * 000000014049C7A9: test    cs:qword_140E06B08, r8
 * 000000014049C7B0: jz      loc_14049D2CB
 * 000000014049C7B6: mov     rax, cs:qword_140E06B10
 * 000000014049C7BD: and     rax, r8
 * 000000014049C7C0: cmp     rax, cs:qword_140E06B10
 * 000000014049C7C7: jnz     loc_14049D2CB
 * 000000014049C7CD: mov     [rsp+988h+var_640], 1000000h
 * 000000014049C7D9: lea     rax, [rsp+988h+var_640]
 * 000000014049C7E1: mov     [rsp+988h+var_418], rax
 * 000000014049C7E9: mov     [rsp+988h+var_410], 8
 * 000000014049C7F5: mov     [rsp+988h+var_714], dx
 * 000000014049C7FD: lea     rax, [rsp+988h+var_714]
 * 000000014049C805: mov     [rsp+988h+var_408], rax
 * 000000014049C80D: mov     [rsp+988h+var_400], 2
 * 000000014049C819: imul    r10, r13, 9B0h
 * 000000014049C820: add     r10, r15
 * 000000014049C823: mov     [rsp+988h+var_3F8], r10
 * 000000014049C82B: mov     [rsp+988h+var_3F0], 10h
 * 000000014049C837: mov     rax, 6666666666666667h
 * 000000014049C841: imul    rbx
 * 000000014049C844: sar     rdx, 2
 * 000000014049C848: mov     rax, rdx
 * 000000014049C84B: shr     rax, 3Fh
 * 000000014049C84F: add     rdx, rax
 * 000000014049C852: mov     [rsp+988h+var_648], rdx
 * 000000014049C85A: lea     rax, [rsp+988h+var_648]
 * 000000014049C862: mov     [rsp+988h+var_3E8], rax
 * 000000014049C86A: mov     [rsp+988h+var_3E0], 8
 * 000000014049C876: imul    rax, r13, 9B0h
 * 000000014049C87D: mov     rcx, [rax+r15+4E0h]
 * 000000014049C885: mov     [rsp+988h+var_578], rcx
 * 000000014049C88D: lea     rax, [rsp+988h+var_578]
 * 000000014049C895: mov     [rsp+988h+var_3D8], rax
 * 000000014049C89D: mov     [rsp+988h+var_3D0], 8
 * 000000014049C8A9: imul    rax, r13, 9B0h
 * 000000014049C8B0: mov     rcx, [rax+r15+4E8h]
 * 000000014049C8B8: mov     [rsp+988h+var_570], rcx
 * 000000014049C8C0: lea     rax, [rsp+988h+var_570]
 * 000000014049C8C8: mov     [rsp+988h+var_3C8], rax
 * 000000014049C8D0: mov     [rsp+988h+var_3C0], 8
 * 000000014049C8DC: imul    rax, r13, 9B0h
 * 000000014049C8E3: mov     rcx, [rax+r15+4F0h]
 * 000000014049C8EB: mov     [rsp+988h+var_568], rcx
 * 000000014049C8F3: lea     rax, [rsp+988h+var_568]
 * 000000014049C8FB: mov     [rsp+988h+var_3B8], rax
 * 000000014049C903: mov     [rsp+988h+var_3B0], 8
 * 000000014049C90F: imul    rax, r13, 9B0h
 * 000000014049C916: mov     rcx, [rax+r15+4F8h]
 * 000000014049C91E: mov     [rsp+988h+var_560], rcx
 * 000000014049C926: lea     rax, [rsp+988h+var_560]
 * 000000014049C92E: mov     [rsp+988h+var_3A8], rax
 * 000000014049C936: mov     [rsp+988h+var_3A0], 8
 * 000000014049C942: imul    rax, r13, 9B0h
 * 000000014049C949: mov     rcx, [rax+r15+500h]
 * 000000014049C951: mov     [rsp+988h+var_558], rcx
 * 000000014049C959: lea     rax, [rsp+988h+var_558]
 * 000000014049C961: mov     [rsp+988h+var_398], rax
 * 000000014049C969: mov     [rsp+988h+var_390], 8
 * 000000014049C975: imul    rax, r13, 9B0h
 * 000000014049C97C: mov     rcx, [rax+r15+508h]
 * 000000014049C984: mov     [rsp+988h+var_550], rcx
 * 000000014049C98C: lea     rax, [rsp+988h+var_550]
 * 000000014049C994: mov     [rsp+988h+var_388], rax
 * 000000014049C99C: mov     [rsp+988h+var_380], 8
 * 000000014049C9A8: imul    r9, r13, 9B0h
 * 000000014049C9AF: mov     rax, [r9+r15+588h]
 * 000000014049C9B7: mov     [rsp+988h+var_548], rax
 * 000000014049C9BF: lea     rax, [rsp+988h+var_548]
 * 000000014049C9C7: mov     [rsp+988h+var_378], rax
 * 000000014049C9CF: mov     [rsp+988h+var_370], 8
 * 000000014049C9DB: imul    r8, r13, 9B0h
 * 000000014049C9E2: mov     rax, [r8+r15+590h]
 * 000000014049C9EA: mov     [rsp+988h+var_540], rax
 * 000000014049C9F2: lea     rax, [rsp+988h+var_540]
 * 000000014049C9FA: mov     [rsp+988h+var_368], rax
 * 000000014049CA02: mov     [rsp+988h+var_360], 8
 * 000000014049CA0E: imul    rdx, r13, 9B0h
 * 000000014049CA15: mov     rax, [rdx+r15+598h]
 * 000000014049CA1D: mov     [rsp+988h+var_538], rax
 * 000000014049CA25: lea     rax, [rsp+988h+var_538]
 * 000000014049CA2D: mov     [rsp+988h+var_358], rax
 * 000000014049CA35: mov     [rsp+988h+var_350], 8
 * 000000014049CA41: imul    rax, r13, 9B0h
 * 000000014049CA48: mov     rcx, [rax+r15+5A0h]
 * 000000014049CA50: mov     [rsp+988h+var_530], rcx
 * 000000014049CA58: lea     rax, [rsp+988h+var_530]
 * 000000014049CA60: mov     [rsp+988h+var_348], rax
 * 000000014049CA68: mov     [rsp+988h+var_340], 8
 * 000000014049CA74: imul    rax, r13, 9B0h
 * 000000014049CA7B: mov     rcx, [rax+r15+510h]
 * 000000014049CA83: mov     [rsp+988h+var_528], rcx
 * 000000014049CA8B: lea     rax, [rsp+988h+var_528]
 * 000000014049CA93: mov     [rsp+988h+var_338], rax
 * 000000014049CA9B: mov     [rsp+988h+var_330], 8
 * 000000014049CAA7: imul    rax, r13, 9B0h
 * 000000014049CAAE: mov     rcx, [rax+r15+518h]
 * 000000014049CAB6: mov     [rsp+988h+var_520], rcx
 * 000000014049CABE: lea     rax, [rsp+988h+var_520]
 * 000000014049CAC6: mov     [rsp+988h+var_328], rax
 * 000000014049CACE: mov     [rsp+988h+var_320], 8
 * 000000014049CADA: imul    rax, r13, 9B0h
 * 000000014049CAE1: mov     rcx, [rax+r15+520h]
 * 000000014049CAE9: mov     [rsp+988h+var_518], rcx
 * 000000014049CAF1: lea     rax, [rsp+988h+var_518]
 * 000000014049CAF9: mov     [rsp+988h+var_318], rax
 * 000000014049CB01: mov     [rsp+988h+var_310], 8
 * 000000014049CB0D: imul    rax, r13, 9B0h
 * 000000014049CB14: mov     rcx, [rax+r15+528h]
 * 000000014049CB1C: mov     [rsp+988h+var_510], rcx
 * 000000014049CB24: lea     rax, [rsp+988h+var_510]
 * 000000014049CB2C: mov     [rsp+988h+var_308], rax
 * 000000014049CB34: mov     [rsp+988h+var_300], 8
 * 000000014049CB40: imul    rax, r13, 9B0h
 * 000000014049CB47: mov     rcx, [rax+r15+530h]
 * 000000014049CB4F: mov     [rsp+988h+var_508], rcx
 * 000000014049CB57: lea     rax, [rsp+988h+var_508]
 * 000000014049CB5F: mov     [rsp+988h+var_2F8], rax
 * 000000014049CB67: mov     [rsp+988h+var_2F0], 8
 * 000000014049CB73: imul    rax, r13, 9B0h
 * 000000014049CB7A: mov     rcx, [rax+r15+538h]
 * 000000014049CB82: mov     [rsp+988h+var_500], rcx
 * 000000014049CB8A: lea     rax, [rsp+988h+var_500]
 * 000000014049CB92: mov     [rsp+988h+var_2E8], rax
 * 000000014049CB9A: mov     [rsp+988h+var_2E0], 8
 * 000000014049CBA6: imul    rax, r13, 9B0h
 * 000000014049CBAD: mov     rcx, [rax+r15+540h]
 * 000000014049CBB5: mov     [rsp+988h+var_4F8], rcx
 * 000000014049CBBD: lea     rax, [rsp+988h+var_4F8]
 * 000000014049CBC5: mov     [rsp+988h+var_2D8], rax
 * 000000014049CBCD: mov     [rsp+988h+var_2D0], 8
 * 000000014049CBD9: imul    rax, r13, 9B0h
 * 000000014049CBE0: mov     rcx, [rax+r15+548h]
 * 000000014049CBE8: mov     [rsp+988h+var_4F0], rcx
 * 000000014049CBF0: lea     rax, [rsp+988h+var_4F0]
 * 000000014049CBF8: mov     [rsp+988h+var_2C8], rax
 * 000000014049CC00: mov     [rsp+988h+var_2C0], 8
 * 000000014049CC0C: mov     rax, [rsp+988h+var_6D0]
 * 000000014049CC14: mov     [rsp+988h+var_4E8], rax
 * 000000014049CC1C: lea     rax, [rsp+988h+var_4E8]
 * 000000014049CC24: mov     [rsp+988h+var_2B8], rax
 * 000000014049CC2C: mov     [rsp+988h+var_2B0], 8
 * 000000014049CC38: imul    rax, r13, 9B0h
 * 000000014049CC3F: mov     rcx, [rax+r15+550h]
 * 000000014049CC47: mov     [rsp+988h+var_4E0], rcx
 * 000000014049CC4F: lea     rax, [rsp+988h+var_4E0]
 * 000000014049CC57: mov     [rsp+988h+var_2A8], rax
 * 000000014049CC5F: mov     [rsp+988h+var_2A0], 8
 * 000000014049CC6B: imul    rax, r13, 9B0h
 * 000000014049CC72: mov     rcx, [rax+r15+570h]
 * 000000014049CC7A: mov     [rsp+988h+var_4D8], rcx
 * 000000014049CC82: lea     rax, [rsp+988h+var_4D8]
 * 000000014049CC8A: mov     [rsp+988h+var_298], rax
 * 000000014049CC92: mov     [rsp+988h+var_290], 8
 * 000000014049CC9E: imul    rax, r13, 9B0h
 * 000000014049CCA5: mov     rcx, [rax+r15+578h]
 * 000000014049CCAD: mov     [rsp+988h+var_4D0], rcx
 * 000000014049CCB5: lea     rax, [rsp+988h+var_4D0]
 * 000000014049CCBD: mov     [rsp+988h+var_288], rax
 * 000000014049CCC5: mov     [rsp+988h+var_280], 8
 * 000000014049CCD1: imul    rax, r13, 9B0h
 * 000000014049CCD8: mov     rcx, [rax+r15+580h]
 * 000000014049CCE0: mov     [rsp+988h+var_4C8], rcx
 * 000000014049CCE8: lea     rax, [rsp+988h+var_4C8]
 * 000000014049CCF0: mov     [rsp+988h+var_278], rax
 * 000000014049CCF8: mov     [rsp+988h+var_270], 8
 * 000000014049CD04: imul    rax, r13, 9B0h
 * 000000014049CD0B: mov     rcx, [rax+r15+558h]
 * 000000014049CD13: mov     [rsp+988h+var_4C0], rcx
 * 000000014049CD1B: lea     rax, [rsp+988h+var_4C0]
 * 000000014049CD23: mov     [rsp+988h+var_268], rax
 * 000000014049CD2B: mov     [rsp+988h+var_260], 8
 * 000000014049CD37: imul    rax, r13, 9B0h
 * 000000014049CD3E: mov     rcx, [rax+r15+560h]
 * 000000014049CD46: mov     [rsp+988h+var_4B8], rcx
 * 000000014049CD4E: lea     rax, [rsp+988h+var_4B8]
 * 000000014049CD56: mov     [rsp+988h+var_258], rax
 * 000000014049CD5E: mov     [rsp+988h+var_250], 8
 * 000000014049CD6A: imul    rax, r13, 9B0h
 * 000000014049CD71: mov     rcx, [rax+r15+568h]
 * 000000014049CD79: mov     [rsp+988h+var_4B0], rcx
 * 000000014049CD81: lea     rax, [rsp+988h+var_4B0]
 * 000000014049CD89: mov     [rsp+988h+var_248], rax
 * 000000014049CD91: mov     [rsp+988h+var_240], 8
 * 000000014049CD9D: imul    rax, r13, 9B0h
 * 000000014049CDA4: mov     rcx, [rax+r15+5A8h]
 * 000000014049CDAC: mov     [rsp+988h+var_4A8], rcx
 * 000000014049CDB4: lea     rax, [rsp+988h+var_4A8]
 * 000000014049CDBC: mov     [rsp+988h+var_238], rax
 * 000000014049CDC4: mov     [rsp+988h+var_230], 8
 * 000000014049CDD0: imul    rax, r13, 9B0h
 * 000000014049CDD7: mov     rcx, [rax+r15+5B0h]
 * 000000014049CDDF: mov     [rsp+988h+var_4A0], rcx
 * 000000014049CDE7: lea     rax, [rsp+988h+var_4A0]
 * 000000014049CDEF: mov     [rsp+988h+var_228], rax
 * 000000014049CDF7: mov     [rsp+988h+var_220], 8
 * 000000014049CE03: imul    rax, r13, 9B0h
 * 000000014049CE0A: mov     rcx, [rax+r15+738h]
 * 000000014049CE12: mov     [rsp+988h+var_498], rcx
 * 000000014049CE1A: lea     rax, [rsp+988h+var_498]
 * 000000014049CE22: mov     [rsp+988h+var_218], rax
 * 000000014049CE2A: mov     [rsp+988h+var_210], 8
 * 000000014049CE36: imul    rax, r13, 9B0h
 * 000000014049CE3D: mov     rcx, [rax+r15+740h]
 * 000000014049CE45: mov     [rsp+988h+var_490], rcx
 * 000000014049CE4D: lea     rax, [rsp+988h+var_490]
 * 000000014049CE55: mov     [rsp+988h+var_208], rax
 * 000000014049CE5D: mov     [rsp+988h+var_200], 8
 * 000000014049CE69: imul    rax, r13, 9B0h
 * 000000014049CE70: mov     rcx, [rax+r15+748h]
 * 000000014049CE78: mov     [rsp+988h+var_488], rcx
 * 000000014049CE80: lea     rax, [rsp+988h+var_488]
 * 000000014049CE88: mov     [rsp+988h+var_1F8], rax
 * 000000014049CE90: mov     [rsp+988h+var_1F0], 8
 * 000000014049CE9C: imul    rax, r13, 9B0h
 * 000000014049CEA3: mov     rcx, [rax+r15+750h]
 * 000000014049CEAB: mov     [rsp+988h+var_480], rcx
 * 000000014049CEB3: lea     rax, [rsp+988h+var_480]
 * 000000014049CEBB: mov     [rsp+988h+var_1E8], rax
 * 000000014049CEC3: mov     [rsp+988h+var_1E0], 8
 * 000000014049CECF: imul    rax, r13, 9B0h
 * 000000014049CED6: mov     rcx, [rax+r15+758h]
 * 000000014049CEDE: mov     [rsp+988h+var_478], rcx
 * 000000014049CEE6: lea     rax, [rsp+988h+var_478]
 * 000000014049CEEE: mov     [rsp+988h+var_1D8], rax
 * 000000014049CEF6: mov     [rsp+988h+var_1D0], 8
 * 000000014049CF02: imul    rax, r13, 9B0h
 * 000000014049CF09: mov     rcx, [rax+r15+8E0h]
 * 000000014049CF11: mov     [rsp+988h+var_470], rcx
 * 000000014049CF19: lea     rax, [rsp+988h+var_470]
 * 000000014049CF21: mov     [rsp+988h+var_1C8], rax
 * 000000014049CF29: mov     [rsp+988h+var_1C0], 8
 * 000000014049CF35: imul    rax, r13, 9B0h
 * 000000014049CF3C: mov     rcx, [rax+r15+8E8h]
 * 000000014049CF44: mov     [rsp+988h+var_468], rcx
 * 000000014049CF4C: lea     rax, [rsp+988h+var_468]
 * 000000014049CF54: mov     [rsp+988h+var_1B8], rax
 * 000000014049CF5C: mov     [rsp+988h+var_1B0], 8
 * 000000014049CF68: mov     rax, [r9+r15+588h]
 * 000000014049CF70: mov     [rsp+988h+var_460], rax
 * 000000014049CF78: lea     rax, [rsp+988h+var_460]
 * 000000014049CF80: mov     [rsp+988h+var_1A8], rax
 * 000000014049CF88: mov     [rsp+988h+var_1A0], 8
 * 000000014049CF94: mov     rax, [r8+r15+590h]
 * 000000014049CF9C: mov     [rsp+988h+var_458], rax
 * 000000014049CFA4: lea     rax, [rsp+988h+var_458]
 * 000000014049CFAC: mov     [rsp+988h+var_198], rax
 * 000000014049CFB4: mov     [rsp+988h+var_190], 8
 * 000000014049CFC0: mov     rax, [rdx+r15+598h]
 * 000000014049CFC8: mov     [rsp+988h+var_450], rax
 * 000000014049CFD0: lea     rax, [rsp+988h+var_450]
 * 000000014049CFD8: mov     [rsp+988h+var_188], rax
 * 000000014049CFE0: mov     [rsp+988h+var_180], 8
 * 000000014049CFEC: or      rax, 0FFFFFFFFFFFFFFFFh
 * 000000014049CFF0: lea     rcx, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 000000014049CFF7: inc     rax
 * 000000014049CFFA: cmp     [rcx+rax*2], r11w
 * 000000014049CFFF: jnz     short loc_14049CFF7
 * 000000014049D001: mov     [rsp+988h+var_178], rcx
 * 000000014049D009: lea     eax, ds:2[rax*2]
 * 000000014049D010: mov     [rsp+988h+var_170], eax
 * 000000014049D017: mov     [rsp+988h+var_16C], r11d
 * 000000014049D01F: mov     edx, 0Ch
 * 000000014049D024: mov     [rsp+988h+var_6F8], dx
 * 000000014049D02C: lea     rax, [rsp+988h+var_6F8]
 * 000000014049D034: mov     [rsp+988h+var_168], rax
 * 000000014049D03C: mov     [rsp+988h+var_160], 2
 * 000000014049D048: lea     rax, [r10+5B8h]
 * 000000014049D04F: mov     [rsp+988h+var_158], rax
 * 000000014049D057: mov     [rsp+988h+var_150], 60h ; '`'
 * 000000014049D063: mov     [rsp+988h+var_6F4], dx
 * 000000014049D06B: lea     rax, [rsp+988h+var_6F4]
 * 000000014049D073: mov     [rsp+988h+var_148], rax
 * 000000014049D07B: mov     [rsp+988h+var_140], 2
 * 000000014049D087: lea     rax, [r10+618h]
 * 000000014049D08E: mov     [rsp+988h+var_138], rax
 * 000000014049D096: mov     [rsp+988h+var_130], 60h ; '`'
 * 000000014049D0A2: mov     [rsp+988h+var_6F0], dx
 * 000000014049D0AA: lea     rax, [rsp+988h+var_6F0]
 * 000000014049D0B2: mov     [rsp+988h+var_128], rax
 * 000000014049D0BA: mov     [rsp+988h+var_120], 2
 * 000000014049D0C6: lea     rax, [r10+678h]
 * 000000014049D0CD: mov     [rsp+988h+var_118], rax
 * 000000014049D0D5: mov     [rsp+988h+var_110], 60h ; '`'
 * 000000014049D0E1: mov     [rsp+988h+var_6EC], dx
 * 000000014049D0E9: lea     rax, [rsp+988h+var_6EC]
 * 000000014049D0F1: mov     [rsp+988h+var_108], rax
 * 000000014049D0F9: mov     [rsp+988h+var_100], 2
 * 000000014049D105: lea     rax, [r10+6D8h]
 * 000000014049D10C: mov     [rsp+988h+var_F8], rax
 * 000000014049D114: mov     [rsp+988h+var_F0], 60h ; '`'
 * 000000014049D120: mov     [rsp+988h+var_6E8], dx
 * 000000014049D128: lea     rax, [rsp+988h+var_6E8]
 * 000000014049D130: mov     [rsp+988h+var_E8], rax
 * 000000014049D138: mov     [rsp+988h+var_E0], 2
 * 000000014049D144: lea     rax, [r10+760h]
 * 000000014049D14B: mov     [rsp+988h+var_D8], rax
 * 000000014049D153: mov     [rsp+988h+var_D0], 60h ; '`'
 * 000000014049D15F: mov     [rsp+988h+var_6E4], dx
 * 000000014049D167: lea     rax, [rsp+988h+var_6E4]
 * 000000014049D16F: mov     [rsp+988h+var_C8], rax
 * 000000014049D177: mov     [rsp+988h+var_C0], 2
 * 000000014049D183: lea     rax, [r10+7C0h]
 * 000000014049D18A: mov     [rsp+988h+var_B8], rax
 * 000000014049D192: mov     [rsp+988h+var_B0], 60h ; '`'
 * 000000014049D19E: mov     [rsp+988h+var_6E0], dx
 * 000000014049D1A6: lea     rax, [rsp+988h+var_6E0]
 * 000000014049D1AE: mov     [rsp+988h+var_A8], rax
 * 000000014049D1B6: mov     [rsp+988h+var_A0], 2
 * 000000014049D1C2: lea     rax, [r10+820h]
 * 000000014049D1C9: mov     [rsp+988h+var_98], rax
 * 000000014049D1D1: mov     [rsp+988h+var_90], 60h ; '`'
 * 000000014049D1DD: mov     [rsp+988h+var_6DC], dx
 * 000000014049D1E5: lea     rax, [rsp+988h+var_6DC]
 * 000000014049D1ED: mov     [rsp+988h+var_88], rax
 * 000000014049D1F5: mov     [rsp+988h+var_80], 2
 * 000000014049D201: lea     rax, [r10+880h]
 * 000000014049D208: mov     [rsp+988h+var_78], rax
 * 000000014049D210: mov     [rsp+988h+var_70], 60h ; '`'
 * 000000014049D21C: mov     word ptr [rsp+988h+var_6D8], dx
 * 000000014049D224: lea     rax, [rsp+988h+var_6D8]
 * 000000014049D22C: mov     [rsp+988h+var_68], rax
 * 000000014049D234: mov     [rsp+988h+var_60], 2
 * 000000014049D240: lea     rax, [r10+8F0h]
 * 000000014049D247: mov     [rsp+988h+var_58], rax
 * 000000014049D24F: mov     [rsp+988h+var_50], 60h ; '`'
 * 000000014049D25B: mov     word ptr [rsp+988h+var_700], dx
 * 000000014049D263: lea     rax, [rsp+988h+var_700]
 * 000000014049D26B: mov     [rsp+988h+var_48], rax
 * 000000014049D273: mov     [rsp+988h+var_40], 2
 * 000000014049D27F: lea     rax, [r10+950h]
 * 000000014049D286: mov     [rsp+988h+var_38], rax
 * 000000014049D28E: mov     [rsp+988h+var_30], 60h ; '`'
 * 000000014049D29A: lea     rax, [rsp+988h+var_438]
 * 000000014049D2A2: mov     [rsp+988h+var_960], rax
 * 000000014049D2A7: mov     dword ptr [rsp+988h+var_968], 41h ; 'A'
 * 000000014049D2AF: xor     r9d, r9d
 * 000000014049D2B2: xor     r8d, r8d
 * 000000014049D2B5: lea     rdx, word_14004496E
 * 000000014049D2BC: lea     rcx, dword_140E06AF8
 * 000000014049D2C3: call    _tlgWriteTransfer_EtwWriteTransfer
 * 000000014049D2C8: xor     r11d, r11d
 * 000000014049D2CB: mov     edx, [rsp+988h+var_710]
 * 000000014049D2D2: inc     edx
 * 000000014049D2D4: mov     [rsp+988h+var_710], edx
 * 000000014049D2DB: mov     r13d, edx
 * 000000014049D2DE: mov     [rsp+988h+var_708], r13
 * 000000014049D2E6: cmp     r13, [rsp+988h+var_448]
 * 000000014049D2EE: jb      loc_14049C2E3
 * 000000014049D2F4: mov     cs:EmpParseLock.Queue, rsi
 * 000000014049D2FB: xor     edx, edx; Tag
 * 000000014049D2FD: mov     rcx, r15; P
 * 000000014049D300: call    ExFreePoolWithTag
 * 000000014049D305: jmp     loc_14049DACB
 * 000000014049D30A: mov     r9, r11
 * 000000014049D30D: jmp     loc_14049C30D
 * 000000014049D312: mov     r9d, 5
 * 000000014049D318: cmp     cs:dword_140E06AF8, r9d
 * 000000014049D31F: ja      loc_140767024
 * 000000014049D325: mov     r12d, 2
 * 000000014049D32B: lea     r14d, [r12+6]
 * 000000014049D330: mov     qword ptr cs:EmpParseLock.___u33+70h, r11
 * 000000014049D337: mov     qword ptr cs:EmpParseLock.___u33+78h, r11
 * 000000014049D33E: mov     qword ptr cs:EmpParseLock.___u33+80h, r11
 * 000000014049D345: mov     qword ptr cs:EmpParseLock.___u33+88h, r11
 * 000000014049D34C: mov     qword ptr cs:EmpParseLock.___u33+90h, r11
 * 000000014049D353: mov     qword ptr cs:EmpParseLock.___u33+98h, r11
 * 000000014049D35A: mov     qword ptr cs:EmpParseLock.___u33+0A0h, r11
 * 000000014049D361: mov     qword ptr cs:EmpParseLock.___u33+0A8h, r11
 * 000000014049D368: mov     qword ptr cs:EmpParseLock.___u33+0B0h, r11
 * 000000014049D36F: mov     qword ptr cs:EmpParseLock.___u33+0B8h, r11
 * 000000014049D376: mov     qword ptr cs:EmpParseLock.___u34, r11
 * 000000014049D37D: mov     cs:EmpParseLock.QueueListEntry.Flink, r11
 * 000000014049D384: mov     cs:EmpParseLock.QueueListEntry.Blink, r11
 * 000000014049D38B: mov     qword ptr cs:EmpParseLock.___u39, r11
 * 000000014049D392: mov     cs:EmpParseLock.Process, r11
 * 000000014049D399: mov     cs:EmpParseLock.UserAffinity, r11
 * 000000014049D3A0: mov     qword ptr cs:EmpParseLock.UserAffinityPrimaryGroup, r11
 * 000000014049D3A7: mov     cs:EmpParseLock.Teb, rsi
 * 000000014049D3AE: jmp     loc_14049C2BC
 * 000000014049D3B3: imul    rcx, r13, 9B0h
 * 000000014049D3BA: imul    r8, r13, 9B0h
 * 000000014049D3C1: imul    r9, r13, 9B0h
 * 000000014049D3C8: imul    r10, r13, 9B0h
 * 000000014049D3CF: imul    r11, r13, 9B0h
 * 000000014049D3D6: imul    rdi, r13, 9B0h
 * 000000014049D3DD: imul    r14, r13, 9B0h
 * 000000014049D3E4: imul    r15, r13, 9B0h
 * 000000014049D3EB: imul    r12, r13, 9B0h
 * 000000014049D3F2: imul    r13, 9B0h
 * 000000014049D3F9: mov     rdx, [rsp+988h+var_708]
 * 000000014049D401: imul    rax, rdx, 9B0h
 * 000000014049D408: mov     qword ptr [rsp+988h+var_6B0], rax
 * 000000014049D410: imul    rax, rdx, 9B0h
 * 000000014049D417: mov     [rsp+988h+var_6C8], rax
 * 000000014049D41F: imul    rax, rdx, 9B0h
 * 000000014049D426: mov     [rsp+988h+var_6B8], rax
 * 000000014049D42E: imul    rax, rdx, 9B0h
 * 000000014049D435: mov     qword ptr [rsp+988h+var_658+8], rax
 * 000000014049D43D: imul    rax, rdx, 9B0h
 * 000000014049D444: mov     qword ptr [rsp+988h+var_658], rax
 * 000000014049D44C: imul    rax, rdx, 9B0h
 * 000000014049D453: mov     [rsp+988h+var_660], rax
 * 000000014049D45B: imul    rax, rdx, 9B0h
 * 000000014049D462: mov     [rsp+988h+var_668], rax
 * 000000014049D46A: imul    rax, rdx, 9B0h
 * 000000014049D471: mov     [rsp+988h+var_670], rax
 * 000000014049D479: imul    rax, rdx, 9B0h
 * 000000014049D480: mov     [rsp+988h+var_678], rax
 * 000000014049D488: imul    rax, rdx, 9B0h
 * 000000014049D48F: mov     [rsp+988h+var_680], rax
 * 000000014049D497: imul    rax, rdx, 9B0h
 * 000000014049D49E: mov     [rsp+988h+var_688], rax
 * 000000014049D4A6: imul    rax, rdx, 9B0h
 * 000000014049D4AD: mov     [rsp+988h+var_690], rax
 * 000000014049D4B5: imul    rax, rdx, 9B0h
 * 000000014049D4BC: mov     qword ptr [rsp+988h+var_6A0+8], rax
 * 000000014049D4C4: imul    rax, rdx, 9B0h
 * 000000014049D4CB: mov     qword ptr [rsp+988h+var_6A0], rax
 * 000000014049D4D3: imul    rax, rdx, 9B0h
 * 000000014049D4DA: mov     qword ptr [rsp+988h+var_6B0+8], rax
 * 000000014049D4E2: imul    rax, rdx, 9B0h
 * 000000014049D4E9: mov     [rsp+988h+var_630], rax
 * 000000014049D4F1: imul    rax, rdx, 9B0h
 * 000000014049D4F8: mov     [rsp+988h+var_628], rax
 * 000000014049D500: imul    rax, rdx, 9B0h
 * 000000014049D507: mov     [rsp+988h+var_620], rax
 * 000000014049D50F: imul    rax, rdx, 9B0h
 * 000000014049D516: mov     [rsp+988h+var_618], rax
 * 000000014049D51E: imul    rax, rdx, 9B0h
 * 000000014049D525: mov     [rsp+988h+var_610], rax
 * 000000014049D52D: imul    rax, rdx, 9B0h
 * 000000014049D534: mov     [rsp+988h+var_608], rax
 * 000000014049D53C: imul    rax, rdx, 9B0h
 * 000000014049D543: mov     [rsp+988h+var_600], rax
 * 000000014049D54B: imul    rax, rdx, 9B0h
 * 000000014049D552: mov     [rsp+988h+var_5F8], rax
 * 000000014049D55A: imul    rax, rdx, 9B0h
 * 000000014049D561: mov     [rsp+988h+var_5F0], rax
 * 000000014049D569: imul    rax, rdx, 9B0h
 * 000000014049D570: mov     [rsp+988h+var_5E8], rax
 * 000000014049D578: imul    rax, rdx, 9B0h
 * 000000014049D57F: mov     [rsp+988h+var_5E0], rax
 * 000000014049D587: imul    rax, rdx, 9B0h
 * 000000014049D58E: mov     [rsp+988h+var_5D8], rax
 * 000000014049D596: imul    rax, rdx, 9B0h
 * 000000014049D59D: mov     [rsp+988h+var_5D0], rax
 * 000000014049D5A5: imul    rax, rdx, 9B0h
 * 000000014049D5AC: mov     [rsp+988h+var_5C8], rax
 * 000000014049D5B4: imul    rax, rdx, 9B0h
 * 000000014049D5BB: mov     [rsp+988h+var_5C0], rax
 * 000000014049D5C3: imul    rax, rdx, 9B0h
 * 000000014049D5CA: mov     [rsp+988h+var_5B8], rax
 * 000000014049D5D2: imul    rax, rdx, 9B0h
 * 000000014049D5D9: mov     [rsp+988h+var_5B0], rax
 * 000000014049D5E1: imul    rax, rdx, 9B0h
 * 000000014049D5E8: mov     [rsp+988h+var_5A8], rax
 * 000000014049D5F0: imul    rax, rdx, 9B0h
 * 000000014049D5F7: mov     [rsp+988h+var_5A0], rax
 * 000000014049D5FF: imul    rax, rdx, 9B0h
 * 000000014049D606: mov     [rsp+988h+var_598], rax
 * 000000014049D60E: imul    rax, rdx, 9B0h
 * 000000014049D615: mov     [rsp+988h+var_590], rax
 * 000000014049D61D: imul    rax, rdx, 9B0h
 * 000000014049D624: mov     [rsp+988h+var_588], rax
 * 000000014049D62C: imul    rax, rdx, 9B0h
 * 000000014049D633: mov     [rsp+988h+var_648], rax
 * 000000014049D63B: mov     rax, 6666666666666667h
 * 000000014049D645: imul    rbx
 * 000000014049D648: sar     rdx, 2
 * 000000014049D64C: mov     rax, rdx
 * 000000014049D64F: shr     rax, 3Fh
 * 000000014049D653: add     rdx, rax
 * 000000014049D656: mov     [rsp+988h+var_640], rdx
 * 000000014049D65E: imul    rdx, [rsp+988h+var_708], 9B0h
 * 000000014049D66A: mov     rax, [rsp+988h+var_6C0]
 * 000000014049D672: add     rdx, rax
 * 000000014049D675: mov     rax, [rcx+rax+408h]
 * 000000014049D67D: mov     [rsp+988h+var_7E8], rax
 * 000000014049D685: mov     rcx, [rsp+988h+var_6C0]
 * 000000014049D68D: mov     rax, [r8+rcx+400h]
 * 000000014049D695: mov     [rsp+988h+var_7F0], rax
 * 000000014049D69D: mov     rax, [r9+rcx+3F8h]
 * 000000014049D6A5: mov     [rsp+988h+var_7F8], rax
 * 000000014049D6AD: mov     rax, [r10+rcx+3F0h]
 * 000000014049D6B5: mov     [rsp+988h+var_800], rax
 * 000000014049D6BD: mov     rax, [r11+rcx+3E8h]
 * 000000014049D6C5: mov     [rsp+988h+var_808], rax
 * 000000014049D6CD: mov     rax, [rdi+rcx+3E0h]
 * 000000014049D6D5: mov     [rsp+988h+var_810], rax
 * 000000014049D6DD: mov     rax, [r14+rcx+3D8h]
 * 000000014049D6E5: mov     [rsp+988h+var_818], rax
 * 000000014049D6ED: mov     rax, [r15+rcx+3D0h]
 * 000000014049D6F5: mov     [rsp+988h+var_820], rax
 * 000000014049D6FD: mov     r15, rcx
 * 000000014049D700: mov     rax, [r12+rcx+3C8h]
 * 000000014049D708: mov     [rsp+988h+var_828], rax
 * 000000014049D710: mov     rax, [rcx+r13+3C0h]
 * 000000014049D718: mov     [rsp+988h+var_830], rax
 * 000000014049D720: mov     rax, qword ptr [rsp+988h+var_6B0]
 * 000000014049D728: mov     rax, [rax+rcx+3B8h]
 * 000000014049D730: mov     [rsp+988h+var_838], rax
 * 000000014049D738: mov     rax, [rsp+988h+var_6C8]
 * 000000014049D740: mov     rax, [rax+rcx+3B0h]
 * 000000014049D748: mov     [rsp+988h+var_840], rax
 * 000000014049D750: mov     rax, [rsp+988h+var_6B8]
 * 000000014049D758: mov     rax, [rax+rcx+3A8h]
 * 000000014049D760: mov     [rsp+988h+var_848], rax
 * 000000014049D768: mov     rax, qword ptr [rsp+988h+var_658+8]
 * 000000014049D770: mov     rax, [rax+rcx+3A0h]
 * 000000014049D778: mov     [rsp+988h+var_850], rax
 * 000000014049D780: mov     rax, qword ptr [rsp+988h+var_658]
 * 000000014049D788: mov     rax, [rax+rcx+398h]
 * 000000014049D790: mov     [rsp+988h+var_858], rax
 * 000000014049D798: mov     rax, [rsp+988h+var_660]
 * 000000014049D7A0: mov     rax, [rax+rcx+390h]
 * 000000014049D7A8: mov     [rsp+988h+var_860], rax
 * 000000014049D7B0: mov     rax, [rsp+988h+var_668]
 * 000000014049D7B8: mov     rax, [rax+rcx+388h]
 * 000000014049D7C0: mov     [rsp+988h+var_868], rax
 * 000000014049D7C8: mov     rax, [rsp+988h+var_670]
 * 000000014049D7D0: mov     rax, [rax+rcx+380h]
 * 000000014049D7D8: mov     [rsp+988h+var_870], rax
 * 000000014049D7E0: mov     rax, [rsp+988h+var_678]
 * 000000014049D7E8: mov     rax, [rax+rcx+378h]
 * 000000014049D7F0: mov     [rsp+988h+var_878], rax
 * 000000014049D7F8: mov     rax, [rsp+988h+var_680]
 * 000000014049D800: mov     rax, [rax+rcx+370h]
 * 000000014049D808: mov     [rsp+988h+var_880], rax
 * 000000014049D810: mov     rax, [rsp+988h+var_688]
 * 000000014049D818: mov     rax, [rax+rcx+368h]
 * 000000014049D820: mov     [rsp+988h+var_888], rax
 * 000000014049D828: mov     rax, [rsp+988h+var_690]
 * 000000014049D830: mov     rax, [rax+rcx+360h]
 * 000000014049D838: mov     [rsp+988h+var_890], rax
 * 000000014049D840: mov     rax, qword ptr [rsp+988h+var_6A0+8]
 * 000000014049D848: mov     rax, [rax+rcx+358h]
 * 000000014049D850: mov     [rsp+988h+var_898], rax
 * 000000014049D858: mov     rax, qword ptr [rsp+988h+var_6A0]
 * 000000014049D860: mov     rax, [rax+rcx+350h]
 * 000000014049D868: mov     [rsp+988h+var_8A0], rax
 * 000000014049D870: mov     rax, qword ptr [rsp+988h+var_6B0+8]
 * 000000014049D878: mov     rax, [rax+rcx+348h]
 * 000000014049D880: mov     [rsp+988h+var_8A8], rax
 * 000000014049D888: mov     rax, [rsp+988h+var_630]
 * 000000014049D890: mov     rax, [rax+rcx+340h]
 * 000000014049D898: mov     [rsp+988h+var_8B0], rax
 * 000000014049D8A0: mov     rax, [rsp+988h+var_628]
 * 000000014049D8A8: mov     rax, [rax+rcx+338h]
 * 000000014049D8B0: mov     [rsp+988h+var_8B8], rax
 * 000000014049D8B8: mov     rax, [rsp+988h+var_620]
 * 000000014049D8C0: mov     rax, [rax+rcx+330h]
 * 000000014049D8C8: mov     [rsp+988h+var_8C0], rax
 * 000000014049D8D0: mov     rax, [rsp+988h+var_618]
 * 000000014049D8D8: mov     rax, [rax+rcx+328h]
 * 000000014049D8E0: mov     [rsp+988h+var_8C8], rax
 * 000000014049D8E8: mov     rax, [rsp+988h+var_610]
 * 000000014049D8F0: mov     rax, [rax+rcx+320h]
 * 000000014049D8F8: mov     [rsp+988h+var_8D0], rax
 * 000000014049D900: mov     rax, [rsp+988h+var_608]
 * 000000014049D908: mov     rax, [rax+rcx+318h]
 * 000000014049D910: mov     [rsp+988h+var_8D8], rax
 * 000000014049D918: mov     rax, [rsp+988h+var_600]
 * 000000014049D920: mov     rax, [rax+rcx+310h]
 * 000000014049D928: mov     [rsp+988h+var_8E0], rax
 * 000000014049D930: mov     rax, [rsp+988h+var_5F8]
 * 000000014049D938: mov     rax, [rax+rcx+308h]
 * 000000014049D940: mov     qword ptr [rsp+988h+var_8F0+8], rax
 * 000000014049D948: mov     rax, [rsp+988h+var_5F0]
 * 000000014049D950: mov     rax, [rax+rcx+300h]
 * 000000014049D958: mov     qword ptr [rsp+988h+var_8F0], rax
 * 000000014049D960: mov     rax, [rsp+988h+var_5E8]
 * 000000014049D968: mov     rax, [rax+rcx+2F8h]
 * 000000014049D970: mov     qword ptr [rsp+988h+var_900+8], rax
 * 000000014049D978: mov     rax, [rsp+988h+var_5E0]
 * 000000014049D980: mov     rax, [rax+rcx+2F0h]
 * 000000014049D988: mov     qword ptr [rsp+988h+var_900], rax
 * 000000014049D990: mov     rax, [rsp+988h+var_5D8]
 * 000000014049D998: mov     rax, [rax+rcx+2E8h]
 * 000000014049D9A0: mov     [rsp+988h+var_908], rax
 * 000000014049D9A8: mov     rax, [rsp+988h+var_5D0]
 * 000000014049D9B0: mov     rax, [rax+rcx+2E0h]
 * 000000014049D9B8: mov     qword ptr [rsp+988h+var_918+8], rax
 * 000000014049D9BD: mov     rax, [rsp+988h+var_5C8]
 * 000000014049D9C5: mov     rax, [rax+rcx+2D8h]
 * 000000014049D9CD: mov     qword ptr [rsp+988h+var_918], rax
 * 000000014049D9D2: mov     rax, [rsp+988h+var_5C0]
 * 000000014049D9DA: mov     rax, [rax+rcx+2D0h]
 * 000000014049D9E2: mov     qword ptr [rsp+988h+var_928+8], rax
 * 000000014049D9E7: mov     rax, [rsp+988h+var_5B8]
 * 000000014049D9EF: mov     rax, [rax+rcx+2C8h]
 * 000000014049D9F7: mov     qword ptr [rsp+988h+var_928], rax
 * 000000014049D9FC: mov     rax, [rsp+988h+var_5B0]
 * 000000014049DA04: mov     rax, [rax+rcx+2C0h]
 * 000000014049DA0C: mov     qword ptr [rsp+988h+var_938+8], rax
 * 000000014049DA11: mov     rax, [rsp+988h+var_5A8]
 * 000000014049DA19: mov     rax, [rax+rcx+2B8h]
 * 000000014049DA21: mov     qword ptr [rsp+988h+var_938], rax
 * 000000014049DA26: mov     rax, [rsp+988h+var_5A0]
 * 000000014049DA2E: mov     rax, [rax+rcx+2B0h]
 * 000000014049DA36: mov     qword ptr [rsp+988h+var_948+8], rax
 * 000000014049DA3B: mov     rax, [rsp+988h+var_598]
 * 000000014049DA43: mov     rax, [rax+rcx+2A8h]
 * 000000014049DA4B: mov     qword ptr [rsp+988h+var_948], rax
 * 000000014049DA50: mov     rax, [rsp+988h+var_590]
 * 000000014049DA58: mov     rax, [rax+rcx+2A0h]
 * 000000014049DA60: mov     qword ptr [rsp+988h+var_958+8], rax
 * 000000014049DA65: mov     rax, [rsp+988h+var_588]
 * 000000014049DA6D: mov     rax, [rax+rcx+298h]
 * 000000014049DA75: mov     qword ptr [rsp+988h+var_958], rax
 * 000000014049DA7A: mov     rax, [rsp+988h+var_648]
 * 000000014049DA82: mov     rax, [rax+rcx+290h]
 * 000000014049DA8A: mov     [rsp+988h+var_960], rax
 * 000000014049DA8F: mov     rax, [rsp+988h+var_640]
 * 000000014049DA97: mov     [rsp+988h+var_968], rax
 * 000000014049DA9C: mov     r9, rdx
 * 000000014049DA9F: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 000000014049DAA4: mov     r14d, 8
 * 000000014049DAAA: mov     r13, [rsp+988h+var_708]
 * 000000014049DAB2: lea     r12d, [r14-6]
 * 000000014049DAB6: jmp     loc_14049C77E
 * 000000014049DABB: mov     r14b, 1
 * 000000014049DABE: mov     [rsp+988h+var_718], r14b
 * 000000014049DAC6: jmp     loc_14049C034
 * 000000014049DACB: mov     rcx, [rsp+988h+var_28]
 * 000000014049DAD3: xor     rcx, rsp; StackCookie
 * 000000014049DAD6: call    __security_check_cookie
 * 000000014049DADB: lea     r11, [rsp+988h+var_18]
 * 000000014049DAE3: mov     rbx, [r11+20h]
 * 000000014049DAE7: mov     rsi, [r11+28h]
 * 000000014049DAEB: mov     rdi, [r11+30h]
 * 000000014049DAEF: mov     r12, [r11+38h]
 * 000000014049DAF3: mov     rsp, r11
 * 000000014049DAF6: pop     r15
 * 000000014049DAF8: pop     r14
 * 000000014049DAFA: pop     r13
 * 000000014049DAFC: retn
 * 00000001407495FE: push    rbp
 * 0000000140749600: sub     rsp, 270h
 * 0000000140749607: mov     rbp, rdx
 * 000000014074960A: call    KeRcuReadUnlock
 * 000000014074960F: nop
 * 0000000140749610: add     rsp, 270h
 * 0000000140749617: pop     rbp
 * 0000000140749618: retn
 * 0000000140767024: mov     rdx, 400000000000h
 * 000000014076702E: lea     rcx, dword_140E06AF8
 * 0000000140767035: call    _tlgKeywordOn
 * 000000014076703A: test    al, al
 * 000000014076703C: jz      loc_14049D325
 * 0000000140767042: mov     [rsp+988h+var_6D0], 1000000h
 * 000000014076704E: lea     rax, [rsp+988h+var_6D0]
 * 0000000140767056: mov     [rsp+988h+var_418], rax
 * 000000014076705E: mov     r14d, 8
 * 0000000140767064: mov     [rsp+988h+var_410], r14
 * 000000014076706C: mov     [rsp+988h+var_714], r9w
 * 0000000140767075: lea     rax, [rsp+988h+var_714]
 * 000000014076707D: mov     [rsp+988h+var_408], rax
 * 0000000140767085: lea     r12d, [r14-6]
 * 0000000140767089: mov     [rsp+988h+var_400], r12
 * 0000000140767091: mov     rax, r8
 * 0000000140767094: imul    rdi
 * 0000000140767097: sar     rdx, 2
 * 000000014076709B: mov     rax, rdx
 * 000000014076709E: shr     rax, 3Fh
 * 00000001407670A2: add     rdx, rax
 * 00000001407670A5: mov     [rsp+988h+var_708], rdx
 * 00000001407670AD: lea     rax, [rsp+988h+var_708]
 * 00000001407670B5: mov     [rsp+988h+var_3F8], rax
 * 00000001407670BD: mov     [rsp+988h+var_3F0], r14
 * 00000001407670C5: mov     eax, cs:CcNumberNumaNodes
 * 00000001407670CB: mov     [rsp+988h+var_710], eax
 * 00000001407670D2: lea     rax, [rsp+988h+var_710]
 * 00000001407670DA: mov     [rsp+988h+var_3E8], rax
 * 00000001407670E2: mov     [rsp+988h+var_3E0], 4
 * 00000001407670EE: mov     rax, qword ptr cs:EmpParseLock.___u33+70h
 * 00000001407670F5: mov     [rsp+988h+var_700], rax
 * 00000001407670FD: lea     rax, [rsp+988h+var_700]
 * 0000000140767105: mov     [rsp+988h+var_3D8], rax
 * 000000014076710D: mov     [rsp+988h+var_3D0], r14
 * 0000000140767115: mov     rax, qword ptr cs:EmpParseLock.___u33+78h
 * 000000014076711C: mov     [rsp+988h+var_6D8], rax
 * 0000000140767124: lea     rax, [rsp+988h+var_6D8]
 * 000000014076712C: mov     [rsp+988h+var_3C8], rax
 * 0000000140767134: mov     [rsp+988h+var_3C0], r14
 * 000000014076713C: mov     rax, qword ptr cs:EmpParseLock.___u33+0A8h
 * 0000000140767143: mov     qword ptr [rsp+988h+var_6B0+8], rax
 * 000000014076714B: lea     rax, [rsp+988h+var_6B0+8]
 * 0000000140767153: mov     [rsp+988h+var_3B8], rax
 * 000000014076715B: mov     [rsp+988h+var_3B0], r14
 * 0000000140767163: mov     rax, qword ptr cs:EmpParseLock.___u33+0B0h
 * 000000014076716A: mov     qword ptr [rsp+988h+var_6A0], rax
 * 0000000140767172: lea     rax, [rsp+988h+var_6A0]
 * 000000014076717A: mov     [rsp+988h+var_3A8], rax
 * 0000000140767182: mov     [rsp+988h+var_3A0], r14
 * 000000014076718A: mov     rax, qword ptr cs:EmpParseLock.___u33+0B8h
 * 0000000140767191: mov     qword ptr [rsp+988h+var_6A0+8], rax
 * 0000000140767199: lea     rax, [rsp+988h+var_6A0+8]
 * 00000001407671A1: mov     [rsp+988h+var_398], rax
 * 00000001407671A9: mov     [rsp+988h+var_390], r14
 * 00000001407671B1: mov     rax, qword ptr cs:EmpParseLock.___u34
 * 00000001407671B8: mov     [rsp+988h+var_690], rax
 * 00000001407671C0: lea     rax, [rsp+988h+var_690]
 * 00000001407671C8: mov     [rsp+988h+var_388], rax
 * 00000001407671D0: mov     [rsp+988h+var_380], r14
 * 00000001407671D8: mov     rax, cs:EmpParseLock.QueueListEntry.Flink
 * 00000001407671DF: mov     [rsp+988h+var_688], rax
 * 00000001407671E7: lea     rax, [rsp+988h+var_688]
 * 00000001407671EF: mov     [rsp+988h+var_378], rax
 * 00000001407671F7: mov     [rsp+988h+var_370], r14
 * 00000001407671FF: mov     rax, cs:EmpParseLock.QueueListEntry.Blink
 * 0000000140767206: mov     [rsp+988h+var_680], rax
 * 000000014076720E: lea     rax, [rsp+988h+var_680]
 * 0000000140767216: mov     [rsp+988h+var_368], rax
 * 000000014076721E: mov     [rsp+988h+var_360], r14
 * 0000000140767226: mov     rax, qword ptr cs:EmpParseLock.___u39
 * 000000014076722D: mov     [rsp+988h+var_678], rax
 * 0000000140767235: lea     rax, [rsp+988h+var_678]
 * 000000014076723D: mov     [rsp+988h+var_358], rax
 * 0000000140767245: mov     [rsp+988h+var_350], r14
 * 000000014076724D: mov     rax, cs:EmpParseLock.Process
 * 0000000140767254: mov     [rsp+988h+var_670], rax
 * 000000014076725C: lea     rax, [rsp+988h+var_670]
 * 0000000140767264: mov     [rsp+988h+var_348], rax
 * 000000014076726C: mov     [rsp+988h+var_340], r14
 * 0000000140767274: mov     rax, cs:EmpParseLock.UserAffinity
 * 000000014076727B: mov     [rsp+988h+var_668], rax
 * 0000000140767283: lea     rax, [rsp+988h+var_668]
 * 000000014076728B: mov     [rsp+988h+var_338], rax
 * 0000000140767293: mov     [rsp+988h+var_330], r14
 * 000000014076729B: mov     rax, qword ptr cs:EmpParseLock.UserAffinityPrimaryGroup
 * 00000001407672A2: mov     [rsp+988h+var_660], rax
 * 00000001407672AA: lea     rax, [rsp+988h+var_660]
 * 00000001407672B2: mov     [rsp+988h+var_328], rax
 * 00000001407672BA: mov     [rsp+988h+var_320], r14
 * 00000001407672C2: mov     rax, qword ptr cs:EmpParseLock.___u33+80h
 * 00000001407672C9: mov     qword ptr [rsp+988h+var_658], rax
 * 00000001407672D1: lea     rax, [rsp+988h+var_658]
 * 00000001407672D9: mov     [rsp+988h+var_318], rax
 * 00000001407672E1: mov     [rsp+988h+var_310], r14
 * 00000001407672E9: mov     rax, qword ptr cs:EmpParseLock.___u33+88h
 * 00000001407672F0: mov     qword ptr [rsp+988h+var_658+8], rax
 * 00000001407672F8: lea     rax, [rsp+988h+var_658+8]
 * 0000000140767300: mov     [rsp+988h+var_308], rax
 * 0000000140767308: mov     [rsp+988h+var_300], r14
 * 0000000140767310: mov     rax, qword ptr cs:EmpParseLock.___u33+90h
 * 0000000140767317: mov     [rsp+988h+var_6B8], rax
 * 000000014076731F: lea     rax, [rsp+988h+var_6B8]
 * 0000000140767327: mov     [rsp+988h+var_2F8], rax
 * 000000014076732F: mov     [rsp+988h+var_2F0], r14
 * 0000000140767337: mov     rax, qword ptr cs:EmpParseLock.___u33+98h
 * 000000014076733E: mov     [rsp+988h+var_6C8], rax
 * 0000000140767346: lea     rax, [rsp+988h+var_6C8]
 * 000000014076734E: mov     [rsp+988h+var_2E8], rax
 * 0000000140767356: mov     [rsp+988h+var_2E0], r14
 * 000000014076735E: mov     rax, qword ptr cs:EmpParseLock.___u33+0A0h
 * 0000000140767365: mov     qword ptr [rsp+988h+var_6B0], rax
 * 000000014076736D: lea     rax, [rsp+988h+var_6B0]
 * 0000000140767375: mov     [rsp+988h+var_2D8], rax
 * 000000014076737D: mov     [rsp+988h+var_2D0], r14
 * 0000000140767385: lea     rax, [rsp+988h+var_438]
 * 000000014076738D: mov     [rsp+988h+var_960], rax
 * 0000000140767392: mov     dword ptr [rsp+988h+var_968], 17h
 * 000000014076739A: xor     r9d, r9d
 * 000000014076739D: xor     r8d, r8d
 * 00000001407673A0: lea     rdx, word_140044F1A
 * 00000001407673A7: lea     rcx, dword_140E06AF8
 * 00000001407673AE: call    _tlgWriteTransfer_EtwWriteTransfer
 * 00000001407673B3: xor     r11d, r11d
 * 00000001407673B6: jmp     loc_14049D330
 * 00000001407673BB: mov     rax, 6666666666666667h
 * 00000001407673C5: imul    rbx
 * 00000001407673C8: sar     rdx, 2
 * 00000001407673CC: mov     rax, rdx
 * 00000001407673CF: shr     rax, 3Fh
 * 00000001407673D3: add     rdx, rax
 * 00000001407673D6: mov     rax, [rdi+418h]
 * 00000001407673DD: mov     [rsp+988h+var_850], rax
 * 00000001407673E5: mov     rax, [rdi+410h]
 * 00000001407673EC: mov     [rsp+988h+var_858], rax
 * 00000001407673F4: mov     rax, [rdi+288h]
 * 00000001407673FB: mov     [rsp+988h+var_860], rax
 * 0000000140767403: mov     rax, [rdi+280h]
 * 000000014076740A: mov     [rsp+988h+var_868], rax
 * 0000000140767412: mov     rax, [rdi+278h]
 * 0000000140767419: mov     [rsp+988h+var_870], rax
 * 0000000140767421: mov     rax, [rdi+270h]
 * 0000000140767428: mov     [rsp+988h+var_878], rax
 * 0000000140767430: mov     rax, [rdi+268h]
 * 0000000140767437: mov     [rsp+988h+var_880], rax
 * 000000014076743F: mov     rax, [rdi+0E0h]
 * 0000000140767446: mov     [rsp+988h+var_888], rax
 * 000000014076744E: mov     rax, [rdi+0D8h]
 * 0000000140767455: mov     [rsp+988h+var_890], rax
 * 000000014076745D: mov     rax, [rdi+98h]
 * 0000000140767464: mov     [rsp+988h+var_898], rax
 * 000000014076746C: mov     rax, [rdi+90h]
 * 0000000140767473: mov     [rsp+988h+var_8A0], rax
 * 000000014076747B: mov     rax, [rdi+88h]
 * 0000000140767482: mov     [rsp+988h+var_8A8], rax
 * 000000014076748A: mov     rax, [rdi+0B0h]
 * 0000000140767491: mov     [rsp+988h+var_8B0], rax
 * 0000000140767499: mov     rax, [rdi+0A8h]
 * 00000001407674A0: mov     [rsp+988h+var_8B8], rax
 * 00000001407674A8: mov     rax, [rdi+0A0h]
 * 00000001407674AF: mov     [rsp+988h+var_8C0], rax
 * 00000001407674B7: mov     [rsp+988h+var_8C8], r9
 * 00000001407674BF: mov     rax, [rdi+80h]
 * 00000001407674C6: mov     [rsp+988h+var_8D0], rax
 * 00000001407674CE: mov     rax, [rdi+78h]
 * 00000001407674D2: mov     [rsp+988h+var_8D8], rax
 * 00000001407674DA: mov     [rsp+988h+var_8E0], r8
 * 00000001407674E2: mov     rax, [rdi+68h]
 * 00000001407674E6: mov     qword ptr [rsp+988h+var_8F0+8], rax
 * 00000001407674EE: mov     rax, [rdi+60h]
 * 00000001407674F2: mov     qword ptr [rsp+988h+var_8F0], rax
 * 00000001407674FA: mov     rax, [rdi+58h]
 * 00000001407674FE: mov     qword ptr [rsp+988h+var_900+8], rax
 * 0000000140767506: mov     rax, [rdi+50h]
 * 000000014076750A: mov     qword ptr [rsp+988h+var_900], rax
 * 0000000140767512: mov     rax, [rdi+48h]
 * 0000000140767516: mov     [rsp+988h+var_908], rax
 * 000000014076751E: mov     rax, [rdi+40h]
 * 0000000140767522: mov     qword ptr [rsp+988h+var_918+8], rax
 * 0000000140767527: mov     rax, [rdi+0D0h]
 * 000000014076752E: mov     qword ptr [rsp+988h+var_918], rax
 * 0000000140767533: mov     rax, [rdi+0C8h]
 * 000000014076753A: mov     qword ptr [rsp+988h+var_928+8], rax
 * 000000014076753F: mov     rax, [rdi+0C0h]
 * 0000000140767546: mov     qword ptr [rsp+988h+var_928], rax
 * 000000014076754B: mov     rax, [rdi+0B8h]
 * 0000000140767552: mov     qword ptr [rsp+988h+var_938+8], rax
 * 0000000140767557: mov     rax, [rdi+38h]
 * 000000014076755B: mov     qword ptr [rsp+988h+var_938], rax
 * 0000000140767560: mov     rax, [rdi+30h]
 * 0000000140767564: mov     qword ptr [rsp+988h+var_948+8], rax
 * 0000000140767569: mov     rax, [rdi+28h]
 * 000000014076756D: mov     qword ptr [rsp+988h+var_948], rax
 * 0000000140767572: mov     rax, [rdi+20h]
 * 0000000140767576: mov     qword ptr [rsp+988h+var_958+8], rax
 * 000000014076757B: mov     rax, [rdi+18h]
 * 000000014076757F: mov     qword ptr [rsp+988h+var_958], rax
 * 0000000140767584: mov     rax, [rdi+10h]
 * 0000000140767588: mov     [rsp+988h+var_960], rax
 * 000000014076758D: mov     [rsp+988h+var_968], rdx
 * 0000000140767592: mov     r9, rdi
 * 0000000140767595: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 000000014076759A: nop
 * 000000014076759B: jmp     loc_14049C323
 */
