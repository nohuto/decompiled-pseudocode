/*
 * XREFs of KiSystemCall64 @ 0x140740280
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     PerfInfoLogSysCallExit @ 0x1404C3600 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1404C5650 (PerfInfoLogSysCallEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x14072E350 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiTrackSystemCallEntry @ 0x1407BE930 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x1407BEA50 (KiTrackSystemCallExit.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 *     PsSyscallProviderDispatch @ 0x140B45560 (PsSyscallProviderDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x140740280
 * Reason: Hex-Rays returned no pseudocode for 0x140740280
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140740280: swapgs
 * 0000000140740283: mov     gs:10h, rsp
 * 000000014074028C: mov     rsp, gs:1A8h
 * 0000000140740295: push    2Bh ; '+'
 * 0000000140740297: push    qword ptr gs:10h
 * 000000014074029F: push    r11
 * 00000001407402A1: push    33h ; '3'
 * 00000001407402A3: push    rcx
 * 00000001407402A4: mov     rcx, gs:9D68h
 * 00000001407402AD: test    rcx, rcx
 * 00000001407402B0: jz      short loc_1407402BE
 * 00000001407402B2: setssbsy
 * 00000001407402B6: rstorssp qword ptr [rcx]
 * 00000001407402BA: saveprevssp
 * 00000001407402BE: mov     rcx, r10
 * 00000001407402C1: sub     rsp, 8
 * 00000001407402C5: push    rbp
 * 00000001407402C6: sub     rsp, 158h
 * 00000001407402CD: lea     rbp, [rsp+190h+var_110]
 * 00000001407402D5: mov     [rbp+0C0h], rbx
 * 00000001407402DC: mov     [rbp+0C8h], rdi
 * 00000001407402E3: mov     [rbp+0D0h], rsi
 * 00000001407402EA: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407402F1: jz      short loc_140740314
 * 00000001407402F3: test    byte ptr [rbp+0F0h], 1
 * 00000001407402FA: jnz     short loc_140740311
 * 00000001407402FC: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140740303: jz      short loc_140740314
 * 0000000140740305: test    dword ptr [rbp+0F8h], 40000h
 * 000000014074030F: jz      short loc_140740314
 * 0000000140740311: stac
 * 0000000140740314: mov     [rbp-50h], rax
 * 0000000140740318: mov     [rbp-48h], rcx
 * 000000014074031C: mov     [rbp-40h], rdx
 * 0000000140740320: mov     rcx, gs:188h
 * 0000000140740329: mov     rcx, [rcx+220h]
 * 0000000140740330: mov     rcx, [rcx+760h]
 * 0000000140740337: mov     gs:890h, rcx
 * 0000000140740340: mov     cx, gs:8A2h
 * 0000000140740349: mov     gs:8A4h, cx
 * 0000000140740352: mov     cl, gs:898h
 * 000000014074035A: mov     gs:89Ah, cl
 * 0000000140740362: movzx   eax, word ptr gs:8A8h
 * 000000014074036B: cmp     gs:8A6h, ax
 * 0000000140740374: jz      short loc_140740388
 * 0000000140740376: mov     gs:8A6h, ax
 * 000000014074037F: mov     ecx, 48h ; 'H'
 * 0000000140740384: xor     edx, edx
 * 0000000140740386: wrmsr
 * 0000000140740388: movzx   edx, byte ptr gs:898h
 * 0000000140740391: test    edx, 8
 * 0000000140740397: jz      short loc_1407403B0
 * 0000000140740399: mov     eax, 1
 * 000000014074039E: xor     edx, edx
 * 00000001407403A0: mov     ecx, 49h ; 'I'
 * 00000001407403A5: wrmsr
 * 00000001407403A7: movzx   edx, byte ptr gs:898h
 * 00000001407403B0: test    edx, 2
 * 00000001407403B6: jz      loc_1407404F3
 * 00000001407403BC: call    loc_1407404CF
 * 00000001407403C1: add     rsp, 8
 * 00000001407403C5: call    loc_1407404D8
 * 00000001407403CA: add     rsp, 8
 * 00000001407403CE: call    loc_1407403C1
 * 00000001407403D3: add     rsp, 8
 * 00000001407403D7: call    loc_1407403CA
 * 00000001407403DC: add     rsp, 8
 * 00000001407403E0: call    loc_1407403D3
 * 00000001407403E5: add     rsp, 8
 * 00000001407403E9: call    loc_1407403DC
 * 00000001407403EE: add     rsp, 8
 * 00000001407403F2: call    loc_1407403E5
 * 00000001407403F7: add     rsp, 8
 * 00000001407403FB: call    loc_1407403EE
 * 0000000140740400: add     rsp, 8
 * 0000000140740404: call    loc_1407403F7
 * 0000000140740409: add     rsp, 8
 * 000000014074040D: call    loc_140740400
 * 0000000140740412: add     rsp, 8
 * 0000000140740416: call    loc_140740409
 * 000000014074041B: add     rsp, 8
 * 000000014074041F: call    loc_140740412
 * 0000000140740424: add     rsp, 8
 * 0000000140740428: call    loc_14074041B
 * 000000014074042D: add     rsp, 8
 * 0000000140740431: call    loc_140740424
 * 0000000140740436: add     rsp, 8
 * 000000014074043A: call    loc_14074042D
 * 000000014074043F: add     rsp, 8
 * 0000000140740443: call    loc_140740436
 * 0000000140740448: add     rsp, 8
 * 000000014074044C: call    loc_14074043F
 * 0000000140740451: add     rsp, 8
 * 0000000140740455: call    loc_140740448
 * 000000014074045A: add     rsp, 8
 * 000000014074045E: call    loc_140740451
 * 0000000140740463: add     rsp, 8
 * 0000000140740467: call    loc_14074045A
 * 000000014074046C: add     rsp, 8
 * 0000000140740470: call    loc_140740463
 * 0000000140740475: add     rsp, 8
 * 0000000140740479: call    loc_14074046C
 * 000000014074047E: add     rsp, 8
 * 0000000140740482: call    loc_140740475
 * 0000000140740487: add     rsp, 8
 * 000000014074048B: call    loc_14074047E
 * 0000000140740490: add     rsp, 8
 * 0000000140740494: call    loc_140740487
 * 0000000140740499: add     rsp, 8
 * 000000014074049D: call    loc_140740490
 * 00000001407404A2: add     rsp, 8
 * 00000001407404A6: call    loc_140740499
 * 00000001407404AB: add     rsp, 8
 * 00000001407404AF: call    loc_1407404A2
 * 00000001407404B4: add     rsp, 8
 * 00000001407404B8: call    loc_1407404AB
 * 00000001407404BD: add     rsp, 8
 * 00000001407404C1: call    loc_1407404B4
 * 00000001407404C6: add     rsp, 8
 * 00000001407404CA: call    loc_1407404BD
 * 00000001407404CF: add     rsp, 8
 * 00000001407404D3: call    loc_1407404C6
 * 00000001407404D8: add     rsp, 8
 * 00000001407404DC: mov     eax, 0DADAh
 * 00000001407404E1: test    byte ptr gs:89Ch, 8
 * 00000001407404EA: jz      short loc_1407404F3
 * 00000001407404EC: mov     al, 20h ; ' '
 * 00000001407404EE: incsspq rax
 * 00000001407404F3: test    edx, 80h
 * 00000001407404F9: jz      short loc_140740503
 * 00000001407404FB: lfence
 * 00000001407404FE: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140740503: lfence
 * 0000000140740506: mov     byte ptr gs:89Eh, 0
 * 000000014074050F: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140740516: jz      short KiSystemServiceUser
 * 0000000140740518: mov     ecx, 6A7h
 * 000000014074051D: rdmsr
 * 000000014074051F: cmp     edx, 0
 * 0000000140740522: jz      short KiSystemServiceUser
 * 0000000140740524: mov     ecx, edx
 * 0000000140740526: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014074052C: cmp     edx, ecx
 * 000000014074052E: jz      short KiSystemServiceUser
 * 0000000140740530: mov     ecx, 6A7h
 * 0000000140740535: wrmsr
 * 0000000140740537: mov     byte ptr [rbp-55h], 2
 * 000000014074053B: mov     byte ptr [rbp-58h], 1
 * 000000014074053F: mov     rbx, gs:188h
 * 0000000140740548: mov     byte ptr [rbx+232h], 1
 * 000000014074054F: prefetchw byte ptr [rbx+90h]
 * 0000000140740556: stmxcsr dword ptr [rbp-54h]
 * 000000014074055A: ldmxcsr dword ptr gs:180h
 * 0000000140740563: cmp     byte ptr [rbx+3], 0
 * 0000000140740567: mov     word ptr [rbp+80h], 0
 * 0000000140740570: jz      loc_140740604
 * 0000000140740576: mov     [rbp-38h], r8
 * 000000014074057A: mov     [rbp-30h], r9
 * 000000014074057E: mov     [rbp-20h], r10
 * 0000000140740582: mov     [rbp-28h], r10
 * 0000000140740586: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014074058A: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014074058E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140740592: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140740596: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014074059A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014074059E: test    byte ptr [rbx+3], 80h
 * 00000001407405A2: jz      short loc_1407405A9
 * 00000001407405A4: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407405A9: test    byte ptr [rbx+3], 3
 * 00000001407405AD: jz      short KiSystemServiceDispatch
 * 00000001407405AF: call    KiSaveDebugRegisterState
 * 00000001407405B4: test    byte ptr [rbx+3], 24h
 * 00000001407405B8: jz      short loc_1407405FC
 * 00000001407405BA: sti
 * 00000001407405BB: lea     rax, [rbp-80h]
 * 00000001407405BF: mov     [rbx+90h], rax
 * 00000001407405C6: lea     rcx, [rbp-80h]
 * 00000001407405CA: call    PsSyscallProviderDispatch
 * 00000001407405CF: cmp     al, 1
 * 00000001407405D1: jz      short loc_1407405FC
 * 00000001407405D3: mov     rax, [rbp-50h]
 * 00000001407405D7: jl      short loc_1407405ED
 * 00000001407405D9: mov     ecx, 0C000001Ch
 * 00000001407405DE: xor     edx, edx
 * 00000001407405E0: mov     r8, [rbp+0E8h]
 * 00000001407405E7: call    KiExceptionDispatch
 * 00000001407405EC: int     3; Trap to Debugger
 * 00000001407405ED: test    byte ptr [rbx+3], 4
 * 00000001407405F1: jz      KiSystemServiceExit
 * 00000001407405F7: jmp     KiSystemServiceExitPico
 * 00000001407405FC: mov     r8, [rbp-38h]
 * 0000000140740600: mov     r9, [rbp-30h]
 * 0000000140740604: mov     rax, [rbp-50h]
 * 0000000140740608: mov     rcx, [rbp-48h]
 * 000000014074060C: mov     rdx, [rbp-40h]
 * 0000000140740610: sti
 * 0000000140740611: mov     [rbx+88h], rcx
 * 0000000140740618: mov     [rbx+80h], eax
 * 000000014074061E: xchg    ax, ax
 * 0000000140740620: lea     rdi, [rbp-80h]
 * 0000000140740624: mov     [rbx+90h], rdi
 * 000000014074062B: mov     edi, eax
 * 000000014074062D: shr     edi, 7
 * 0000000140740630: and     edi, 20h
 * 0000000140740633: and     eax, 0FFFh
 * 0000000140740638: lea     r10, KeServiceDescriptorTable
 * 000000014074063F: lea     r11, stru_140FC11F0.___u33+90h
 * 0000000140740646: test    dword ptr [rbx+78h], 80h
 * 000000014074064D: jz      short loc_140740662
 * 000000014074064F: test    dword ptr [rbx+78h], 200000h
 * 0000000140740656: jz      short loc_14074065F
 * 0000000140740658: lea     r11, stru_140FC11F0.MutantListHead.Blink
 * 000000014074065F: mov     r10, r11
 * 0000000140740662: cmp     eax, [r10+rdi+10h]
 * 0000000140740667: jnb     loc_140740F2A
 * 000000014074066D: mov     r10, [r10+rdi]
 * 0000000140740671: movsxd  r11, dword ptr [r10+rax*4]
 * 0000000140740675: mov     rax, r11
 * 0000000140740678: sar     r11, 4
 * 000000014074067C: add     r10, r11
 * 000000014074067F: cmp     edi, 20h ; ' '
 * 0000000140740682: jnz     short loc_1407406E0
 * 0000000140740684: mov     r11, [rbx+0F0h]
 * 000000014074068B: cmp     dword ptr [r11+1740h], 0
 * 0000000140740693: jz      short loc_1407406E0
 * 0000000140740695: mov     [rbp-50h], rax
 * 0000000140740699: mov     [rbp-48h], rcx
 * 000000014074069D: mov     [rbp-40h], rdx
 * 00000001407406A1: mov     rbx, r8
 * 00000001407406A4: mov     rdi, r9
 * 00000001407406A7: mov     rsi, r10
 * 00000001407406AA: mov     ecx, 7
 * 00000001407406AF: xor     edx, edx
 * 00000001407406B1: xor     r8, r8
 * 00000001407406B4: xor     r9, r9
 * 00000001407406B7: call    PsInvokeWin32Callout
 * 00000001407406BC: mov     rax, [rbp-50h]
 * 00000001407406C0: mov     rcx, [rbp-48h]
 * 00000001407406C4: mov     rdx, [rbp-40h]
 * 00000001407406C8: mov     r8, rbx
 * 00000001407406CB: mov     r9, rdi
 * 00000001407406CE: mov     r10, rsi
 * 00000001407406D1: nop     word ptr [rax+rax+00000000h]
 * 00000001407406E0: and     eax, 0Fh
 * 00000001407406E3: jz      KiSystemServiceCopyEnd
 * 00000001407406E9: shl     eax, 3
 * 00000001407406EC: lea     rsp, [rsp-70h]
 * 00000001407406F1: lea     rdi, [rsp+100h+var_E8]
 * 00000001407406F6: mov     rsi, [rbp+100h]
 * 00000001407406FD: lea     rsi, [rsi+20h]
 * 0000000140740701: test    byte ptr [rbp+0F0h], 1
 * 0000000140740708: jz      short loc_140740720
 * 000000014074070A: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140740711: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140740719: nop     dword ptr [rax+00000000h]
 * 0000000140740720: lea     r11, KiSystemServiceCopyEnd
 * 0000000140740727: sub     r11, rax
 * 000000014074072A: jmp     r11
 * 0000000140740730: mov     rax, [rsi+70h]
 * 0000000140740734: mov     [rdi+70h], rax
 * 0000000140740738: mov     rax, [rsi+68h]
 * 000000014074073C: mov     [rdi+68h], rax
 * 0000000140740740: mov     rax, [rsi+60h]
 * 0000000140740744: mov     [rdi+60h], rax
 * 0000000140740748: mov     rax, [rsi+58h]
 * 000000014074074C: mov     [rdi+58h], rax
 * 0000000140740750: mov     rax, [rsi+50h]
 * 0000000140740754: mov     [rdi+50h], rax
 * 0000000140740758: mov     rax, [rsi+48h]
 * 000000014074075C: mov     [rdi+48h], rax
 * 0000000140740760: mov     rax, [rsi+40h]
 * 0000000140740764: mov     [rdi+40h], rax
 * 0000000140740768: mov     rax, [rsi+38h]
 * 000000014074076C: mov     [rdi+38h], rax
 * 0000000140740770: mov     rax, [rsi+30h]
 * 0000000140740774: mov     [rdi+30h], rax
 * 0000000140740778: mov     rax, [rsi+28h]
 * 000000014074077C: mov     [rdi+28h], rax
 * 0000000140740780: mov     rax, [rsi+20h]
 * 0000000140740784: mov     [rdi+20h], rax
 * 0000000140740788: mov     rax, [rsi+18h]
 * 000000014074078C: mov     [rdi+18h], rax
 * 0000000140740790: mov     rax, [rsi+10h]
 * 0000000140740794: mov     [rdi+10h], rax
 * 0000000140740798: mov     rax, [rsi+8]
 * 000000014074079C: mov     [rdi+8], rax
 * 00000001407407A0: test    cs:KiDynamicTraceMask, 1
 * 00000001407407AA: jnz     loc_140740FED
 * 00000001407407B0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001407407BA: jnz     loc_140741061
 * 00000001407407C0: mov     rax, r10
 * 00000001407407C3: call    rax
 * 00000001407407C5: nop     dword ptr [rax]
 * 00000001407407C8: inc     dword ptr gs:2EB8h
 * 00000001407407D0: mov     rbx, [rbp+0C0h]
 * 00000001407407D7: mov     rdi, [rbp+0C8h]
 * 00000001407407DE: mov     rsi, [rbp+0D0h]
 * 00000001407407E5: mov     r11, gs:188h
 * 00000001407407EE: test    byte ptr [rbp+0F0h], 1
 * 00000001407407F5: jz      loc_140740BD3
 * 00000001407407FB: mov     rcx, cr8
 * 00000001407407FF: or      cl, [r11+24Ah]
 * 0000000140740806: or      ecx, [r11+1E4h]
 * 000000014074080D: jnz     loc_140740F98
 * 0000000140740813: cmp     byte ptr [r11+232h], 1
 * 000000014074081B: jnz     loc_140740FCD
 * 0000000140740821: cli
 * 0000000140740822: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140740829: jz      short loc_140740837
 * 000000014074082B: mov     [rbp-50h], rax
 * 000000014074082F: lea     rsp, [rbp-88h]
 * 0000000140740836: retn
 * 0000000140740837: mov     rcx, gs:188h
 * 0000000140740840: test    byte ptr [rcx+0C2h], 3
 * 0000000140740847: jz      short loc_14074086C
 * 0000000140740849: mov     [rbp-50h], rax
 * 000000014074084D: mov     ecx, 1
 * 0000000140740852: mov     cr8, rcx
 * 0000000140740856: sti
 * 0000000140740857: call    KiInitiateUserApc
 * 000000014074085C: cli
 * 000000014074085D: mov     ecx, 0
 * 0000000140740862: mov     cr8, rcx
 * 0000000140740866: mov     rax, [rbp-50h]
 * 000000014074086A: jmp     short loc_140740837
 * 000000014074086C: test    byte ptr [rcx+3], 80h
 * 0000000140740870: jz      short loc_140740883
 * 0000000140740872: mov     [rbp-50h], rax
 * 0000000140740876: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014074087B: test    eax, eax
 * 000000014074087D: mov     rax, [rbp-50h]
 * 0000000140740881: jnz     short loc_140740837
 * 0000000140740883: test    byte ptr gs:8A0h, 2
 * 000000014074088C: jz      short loc_14074089D
 * 000000014074088E: mov     [rbp-50h], rax
 * 0000000140740892: xor     ecx, ecx
 * 0000000140740894: call    KiUpdateStibpPairing
 * 0000000140740899: mov     rax, [rbp-50h]
 * 000000014074089D: mov     rcx, gs:188h
 * 00000001407408A6: test    dword ptr [rcx], 8000000h
 * 00000001407408AC: jz      short loc_1407408ED
 * 00000001407408AE: mov     [rbp-50h], rax
 * 00000001407408B2: xor     eax, eax
 * 00000001407408B4: mov     [rbp-48h], rax
 * 00000001407408B8: mov     [rbp-40h], rax
 * 00000001407408BC: mov     [rbp-38h], rax
 * 00000001407408C0: mov     [rbp-30h], rax
 * 00000001407408C4: mov     [rbp-28h], rax
 * 00000001407408C8: mov     [rbp-20h], rax
 * 00000001407408CC: pxor    xmm0, xmm0
 * 00000001407408D0: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001407408D4: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001407408D8: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001407408DC: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001407408E0: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001407408E4: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001407408E8: call    KiRestoreSetContextState
 * 00000001407408ED: mov     rcx, gs:188h
 * 00000001407408F6: test    dword ptr [rcx], 10000h
 * 00000001407408FC: jz      short loc_14074091A
 * 00000001407408FE: mov     [rbp-50h], rax
 * 0000000140740902: test    byte ptr [rcx+2], 1
 * 0000000140740906: jz      short loc_140740916
 * 0000000140740908: call    KiCopyCounters
 * 000000014074090D: mov     rcx, gs:188h
 * 0000000140740916: mov     rax, [rbp-50h]
 * 000000014074091A: ldmxcsr dword ptr [rbp-54h]
 * 000000014074091E: xor     r10, r10
 * 0000000140740921: cmp     word ptr [rbp+80h], 0
 * 0000000140740929: jz      short loc_14074096C
 * 000000014074092B: mov     [rbp-50h], rax
 * 000000014074092F: call    KiRestoreDebugRegisterState
 * 0000000140740934: mov     rax, gs:188h
 * 000000014074093D: mov     rax, [rax+0B8h]
 * 0000000140740944: mov     rax, [rax+168h]
 * 000000014074094B: or      rax, rax
 * 000000014074094E: jz      short loc_140740968
 * 0000000140740950: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140740958: jnz     short loc_140740968
 * 000000014074095A: mov     r10, [rbp+0E8h]
 * 0000000140740961: mov     [rbp+0E8h], rax
 * 0000000140740968: mov     rax, [rbp-50h]
 * 000000014074096C: mov     rcx, gs:188h
 * 0000000140740975: bt      dword ptr [rcx+74h], 16h
 * 000000014074097A: jnb     short loc_1407409A6
 * 000000014074097C: xor     ecx, ecx
 * 000000014074097E: rdsspq  rcx
 * 0000000140740983: mov     r8, gs:9D68h
 * 000000014074098C: add     r8, 8
 * 0000000140740990: cmp     rcx, r8
 * 0000000140740993: jnz     short loc_1407409A6
 * 0000000140740995: mov     rcx, gs:9D60h
 * 000000014074099E: rstorssp qword ptr [rcx]
 * 00000001407409A2: saveprevssp
 * 00000001407409A6: mov     [rbp-50h], rax
 * 00000001407409AA: mov     byte ptr gs:89Eh, 0
 * 00000001407409B3: movzx   eax, word ptr gs:8ACh
 * 00000001407409BC: cmp     gs:8A6h, ax
 * 00000001407409C5: jz      short loc_1407409D9
 * 00000001407409C7: mov     gs:8A6h, ax
 * 00000001407409D0: mov     ecx, 48h ; 'H'
 * 00000001407409D5: xor     edx, edx
 * 00000001407409D7: wrmsr
 * 00000001407409D9: btr     word ptr gs:898h, 2
 * 00000001407409E4: jnb     short loc_1407409F4
 * 00000001407409E6: mov     eax, 1
 * 00000001407409EB: xor     edx, edx
 * 00000001407409ED: mov     ecx, 49h ; 'I'
 * 00000001407409F2: wrmsr
 * 00000001407409F4: btr     word ptr gs:898h, 5
 * 00000001407409FF: jnb     loc_140740B3C
 * 0000000140740A05: call    loc_140740B18
 * 0000000140740A0A: add     rsp, 8
 * 0000000140740A0E: call    loc_140740B21
 * 0000000140740A13: add     rsp, 8
 * 0000000140740A17: call    loc_140740A0A
 * 0000000140740A1C: add     rsp, 8
 * 0000000140740A20: call    loc_140740A13
 * 0000000140740A25: add     rsp, 8
 * 0000000140740A29: call    loc_140740A1C
 * 0000000140740A2E: add     rsp, 8
 * 0000000140740A32: call    loc_140740A25
 * 0000000140740A37: add     rsp, 8
 * 0000000140740A3B: call    loc_140740A2E
 * 0000000140740A40: add     rsp, 8
 * 0000000140740A44: call    loc_140740A37
 * 0000000140740A49: add     rsp, 8
 * 0000000140740A4D: call    loc_140740A40
 * 0000000140740A52: add     rsp, 8
 * 0000000140740A56: call    loc_140740A49
 * 0000000140740A5B: add     rsp, 8
 * 0000000140740A5F: call    loc_140740A52
 * 0000000140740A64: add     rsp, 8
 * 0000000140740A68: call    loc_140740A5B
 * 0000000140740A6D: add     rsp, 8
 * 0000000140740A71: call    loc_140740A64
 * 0000000140740A76: add     rsp, 8
 * 0000000140740A7A: call    loc_140740A6D
 * 0000000140740A7F: add     rsp, 8
 * 0000000140740A83: call    loc_140740A76
 * 0000000140740A88: add     rsp, 8
 * 0000000140740A8C: call    loc_140740A7F
 * 0000000140740A91: add     rsp, 8
 * 0000000140740A95: call    loc_140740A88
 * 0000000140740A9A: add     rsp, 8
 * 0000000140740A9E: call    loc_140740A91
 * 0000000140740AA3: add     rsp, 8
 * 0000000140740AA7: call    loc_140740A9A
 * 0000000140740AAC: add     rsp, 8
 * 0000000140740AB0: call    loc_140740AA3
 * 0000000140740AB5: add     rsp, 8
 * 0000000140740AB9: call    loc_140740AAC
 * 0000000140740ABE: add     rsp, 8
 * 0000000140740AC2: call    loc_140740AB5
 * 0000000140740AC7: add     rsp, 8
 * 0000000140740ACB: call    loc_140740ABE
 * 0000000140740AD0: add     rsp, 8
 * 0000000140740AD4: call    loc_140740AC7
 * 0000000140740AD9: add     rsp, 8
 * 0000000140740ADD: call    loc_140740AD0
 * 0000000140740AE2: add     rsp, 8
 * 0000000140740AE6: call    loc_140740AD9
 * 0000000140740AEB: add     rsp, 8
 * 0000000140740AEF: call    loc_140740AE2
 * 0000000140740AF4: add     rsp, 8
 * 0000000140740AF8: call    loc_140740AEB
 * 0000000140740AFD: add     rsp, 8
 * 0000000140740B01: call    loc_140740AF4
 * 0000000140740B06: add     rsp, 8
 * 0000000140740B0A: call    loc_140740AFD
 * 0000000140740B0F: add     rsp, 8
 * 0000000140740B13: call    loc_140740B06
 * 0000000140740B18: add     rsp, 8
 * 0000000140740B1C: call    loc_140740B0F
 * 0000000140740B21: add     rsp, 8
 * 0000000140740B25: mov     eax, 0DADAh
 * 0000000140740B2A: test    byte ptr gs:89Ch, 8
 * 0000000140740B33: jz      short loc_140740B3C
 * 0000000140740B35: mov     al, 20h ; ' '
 * 0000000140740B37: incsspq rax
 * 0000000140740B3C: test    word ptr gs:898h, 100h
 * 0000000140740B47: jz      short loc_140740B55
 * 0000000140740B49: xor     eax, eax
 * 0000000140740B4B: xor     edx, edx
 * 0000000140740B4D: mov     ecx, 1
 * 0000000140740B52: div     rcx
 * 0000000140740B55: mov     rax, [rbp-50h]
 * 0000000140740B59: mov     r8, [rbp+100h]
 * 0000000140740B60: mov     r9, [rbp+0D8h]
 * 0000000140740B67: xor     edx, edx
 * 0000000140740B69: pxor    xmm0, xmm0
 * 0000000140740B6D: pxor    xmm1, xmm1
 * 0000000140740B71: pxor    xmm2, xmm2
 * 0000000140740B75: pxor    xmm3, xmm3
 * 0000000140740B79: pxor    xmm4, xmm4
 * 0000000140740B7D: pxor    xmm5, xmm5
 * 0000000140740B81: mov     rcx, [rbp+0E8h]
 * 0000000140740B88: mov     r11, [rbp+0F8h]
 * 0000000140740B8F: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140740B96: jnz     KiKernelSysretExit
 * 0000000140740B9C: mov     rbp, r9
 * 0000000140740B9F: mov     rsp, r8
 * 0000000140740BA2: xor     r9, r9
 * 0000000140740BA5: rdsspq  r9
 * 0000000140740BAA: test    r9, r9
 * 0000000140740BAD: jz      short loc_140740BB7
 * 0000000140740BAF: clrssbsy qword ptr [r9]
 * 0000000140740BB4: xor     r9, r9
 * 0000000140740BB7: test    word ptr gs:898h, 200h
 * 0000000140740BC2: jz      short loc_140740BCD
 * 0000000140740BC4: verw    word ptr gs:0B02Ah
 * 0000000140740BCD: swapgs
 * 0000000140740BD0: sysret
 * 0000000140740BD3: mov     rdx, [rbp+0B8h]
 * 0000000140740BDA: mov     [r11+90h], rdx
 * 0000000140740BE1: mov     dl, [rbp-58h]
 * 0000000140740BE4: mov     [r11+232h], dl
 * 0000000140740BEB: cli
 * 0000000140740BEC: mov     rsp, rbp
 * 0000000140740BEF: mov     rbp, [rbp+0D8h]
 * 0000000140740BF6: mov     rsp, [rsp+90h+arg_68]
 * 0000000140740BFE: sti
 * 0000000140740BFF: retn
 * 0000000140740C00: mov     r11, gs:188h
 * 0000000140740C09: mov     rcx, cr8
 * 0000000140740C0D: or      cl, [r11+24Ah]
 * 0000000140740C14: or      ecx, [r11+1E4h]
 * 0000000140740C1B: jnz     loc_140740F98
 * 0000000140740C21: cmp     byte ptr [rbx+232h], 1
 * 0000000140740C28: jnz     loc_140740FCD
 * 0000000140740C2E: cli
 * 0000000140740C2F: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140740C36: jz      short loc_140740C3D
 * 0000000140740C38: add     rsp, 28h
 * 0000000140740C3C: retn
 * 0000000140740C3D: mov     [rbp-50h], rax
 * 0000000140740C41: mov     rcx, gs:188h
 * 0000000140740C4A: test    byte ptr [rcx+0C2h], 3
 * 0000000140740C51: jz      short loc_140740C6E
 * 0000000140740C53: mov     ecx, 1
 * 0000000140740C58: mov     cr8, rcx
 * 0000000140740C5C: sti
 * 0000000140740C5D: call    KiInitiateUserApc
 * 0000000140740C62: cli
 * 0000000140740C63: mov     ecx, 0
 * 0000000140740C68: mov     cr8, rcx
 * 0000000140740C6C: jmp     short loc_140740C41
 * 0000000140740C6E: test    byte ptr gs:8A0h, 2
 * 0000000140740C77: jz      short loc_140740C80
 * 0000000140740C79: xor     ecx, ecx
 * 0000000140740C7B: call    KiUpdateStibpPairing
 * 0000000140740C80: mov     rcx, gs:188h
 * 0000000140740C89: test    dword ptr [rcx], 8000000h
 * 0000000140740C8F: jz      short loc_140740C96
 * 0000000140740C91: call    KiRestoreSetContextState
 * 0000000140740C96: mov     rcx, gs:188h
 * 0000000140740C9F: test    byte ptr [rcx+2], 1
 * 0000000140740CA3: jz      short loc_140740CB3
 * 0000000140740CA5: call    KiCopyCounters
 * 0000000140740CAA: mov     rcx, gs:188h
 * 0000000140740CB3: cmp     word ptr [rbp+80h], 0
 * 0000000140740CBB: jz      short loc_140740CC2
 * 0000000140740CBD: call    KiRestoreDebugRegisterState
 * 0000000140740CC2: mov     rcx, gs:188h
 * 0000000140740CCB: bt      dword ptr [rcx+74h], 16h
 * 0000000140740CD0: jnb     short loc_140740CFC
 * 0000000140740CD2: xor     ecx, ecx
 * 0000000140740CD4: rdsspq  rcx
 * 0000000140740CD9: mov     r8, gs:9D68h
 * 0000000140740CE2: add     r8, 8
 * 0000000140740CE6: cmp     rcx, r8
 * 0000000140740CE9: jnz     short loc_140740CFC
 * 0000000140740CEB: mov     rcx, gs:9D60h
 * 0000000140740CF4: rstorssp qword ptr [rcx]
 * 0000000140740CF8: saveprevssp
 * 0000000140740CFC: mov     byte ptr gs:89Eh, 0
 * 0000000140740D05: movzx   eax, word ptr gs:8ACh
 * 0000000140740D0E: cmp     gs:8A6h, ax
 * 0000000140740D17: jz      short loc_140740D2B
 * 0000000140740D19: mov     gs:8A6h, ax
 * 0000000140740D22: mov     ecx, 48h ; 'H'
 * 0000000140740D27: xor     edx, edx
 * 0000000140740D29: wrmsr
 * 0000000140740D2B: btr     word ptr gs:898h, 2
 * 0000000140740D36: jnb     short loc_140740D46
 * 0000000140740D38: mov     eax, 1
 * 0000000140740D3D: xor     edx, edx
 * 0000000140740D3F: mov     ecx, 49h ; 'I'
 * 0000000140740D44: wrmsr
 * 0000000140740D46: btr     word ptr gs:898h, 5
 * 0000000140740D51: jnb     loc_140740E8E
 * 0000000140740D57: call    loc_140740E6A
 * 0000000140740D5C: add     rsp, 8
 * 0000000140740D60: call    loc_140740E73
 * 0000000140740D65: add     rsp, 8
 * 0000000140740D69: call    loc_140740D5C
 * 0000000140740D6E: add     rsp, 8
 * 0000000140740D72: call    loc_140740D65
 * 0000000140740D77: add     rsp, 8
 * 0000000140740D7B: call    loc_140740D6E
 * 0000000140740D80: add     rsp, 8
 * 0000000140740D84: call    loc_140740D77
 * 0000000140740D89: add     rsp, 8
 * 0000000140740D8D: call    loc_140740D80
 * 0000000140740D92: add     rsp, 8
 * 0000000140740D96: call    loc_140740D89
 * 0000000140740D9B: add     rsp, 8
 * 0000000140740D9F: call    loc_140740D92
 * 0000000140740DA4: add     rsp, 8
 * 0000000140740DA8: call    loc_140740D9B
 * 0000000140740DAD: add     rsp, 8
 * 0000000140740DB1: call    loc_140740DA4
 * 0000000140740DB6: add     rsp, 8
 * 0000000140740DBA: call    loc_140740DAD
 * 0000000140740DBF: add     rsp, 8
 * 0000000140740DC3: call    loc_140740DB6
 * 0000000140740DC8: add     rsp, 8
 * 0000000140740DCC: call    loc_140740DBF
 * 0000000140740DD1: add     rsp, 8
 * 0000000140740DD5: call    loc_140740DC8
 * 0000000140740DDA: add     rsp, 8
 * 0000000140740DDE: call    loc_140740DD1
 * 0000000140740DE3: add     rsp, 8
 * 0000000140740DE7: call    loc_140740DDA
 * 0000000140740DEC: add     rsp, 8
 * 0000000140740DF0: call    loc_140740DE3
 * 0000000140740DF5: add     rsp, 8
 * 0000000140740DF9: call    loc_140740DEC
 * 0000000140740DFE: add     rsp, 8
 * 0000000140740E02: call    loc_140740DF5
 * 0000000140740E07: add     rsp, 8
 * 0000000140740E0B: call    loc_140740DFE
 * 0000000140740E10: add     rsp, 8
 * 0000000140740E14: call    loc_140740E07
 * 0000000140740E19: add     rsp, 8
 * 0000000140740E1D: call    loc_140740E10
 * 0000000140740E22: add     rsp, 8
 * 0000000140740E26: call    loc_140740E19
 * 0000000140740E2B: add     rsp, 8
 * 0000000140740E2F: call    loc_140740E22
 * 0000000140740E34: add     rsp, 8
 * 0000000140740E38: call    loc_140740E2B
 * 0000000140740E3D: add     rsp, 8
 * 0000000140740E41: call    loc_140740E34
 * 0000000140740E46: add     rsp, 8
 * 0000000140740E4A: call    loc_140740E3D
 * 0000000140740E4F: add     rsp, 8
 * 0000000140740E53: call    loc_140740E46
 * 0000000140740E58: add     rsp, 8
 * 0000000140740E5C: call    loc_140740E4F
 * 0000000140740E61: add     rsp, 8
 * 0000000140740E65: call    loc_140740E58
 * 0000000140740E6A: add     rsp, 8
 * 0000000140740E6E: call    loc_140740E61
 * 0000000140740E73: add     rsp, 8
 * 0000000140740E77: mov     eax, 0DADAh
 * 0000000140740E7C: test    byte ptr gs:89Ch, 8
 * 0000000140740E85: jz      short loc_140740E8E
 * 0000000140740E87: mov     al, 20h ; ' '
 * 0000000140740E89: incsspq rax
 * 0000000140740E8E: test    word ptr gs:898h, 100h
 * 0000000140740E99: jz      short loc_140740EA7
 * 0000000140740E9B: xor     eax, eax
 * 0000000140740E9D: xor     edx, edx
 * 0000000140740E9F: mov     ecx, 1
 * 0000000140740EA4: div     rcx
 * 0000000140740EA7: ldmxcsr dword ptr [rbp-54h]
 * 0000000140740EAB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140740EAF: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140740EB3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140740EB7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140740EBB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140740EBF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140740EC3: mov     r11, [rbp-20h]
 * 0000000140740EC7: mov     r10, [rbp-28h]
 * 0000000140740ECB: mov     r9, [rbp-30h]
 * 0000000140740ECF: mov     r8, [rbp-38h]
 * 0000000140740ED3: mov     rdx, [rbp-40h]
 * 0000000140740ED7: mov     rcx, [rbp-48h]
 * 0000000140740EDB: mov     rax, [rbp-50h]
 * 0000000140740EDF: mov     rsi, [rbp+0D0h]
 * 0000000140740EE6: mov     rdi, [rbp+0C8h]
 * 0000000140740EED: mov     rbx, [rbp+0C0h]
 * 0000000140740EF4: mov     rsp, rbp
 * 0000000140740EF7: mov     rbp, [rbp+0D8h]
 * 0000000140740EFE: add     rsp, 0E8h
 * 0000000140740F05: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140740F0C: jz      short loc_140740F13
 * 0000000140740F0E: jmp     KiKernelExit
 * 0000000140740F13: test    word ptr gs:898h, 200h
 * 0000000140740F1E: jz      short loc_140740F25
 * 0000000140740F20: verw    [rsp-158h+arg_170]
 * 0000000140740F25: swapgs
 * 0000000140740F28: iretq
 * 0000000140740F2A: cmp     edi, 20h ; ' '
 * 0000000140740F2D: jnz     short loc_140740F8E
 * 0000000140740F2F: mov     [rbp-80h], eax
 * 0000000140740F32: mov     [rbp-78h], rcx
 * 0000000140740F36: mov     [rbp-70h], rdx
 * 0000000140740F3A: mov     [rbp-68h], r8
 * 0000000140740F3E: mov     [rbp-60h], r9
 * 0000000140740F42: call    KiConvertToGuiThread
 * 0000000140740F47: or      eax, eax
 * 0000000140740F49: mov     eax, [rbp-80h]
 * 0000000140740F4C: mov     rcx, [rbp-78h]
 * 0000000140740F50: mov     rdx, [rbp-70h]
 * 0000000140740F54: mov     r8, [rbp-68h]
 * 0000000140740F58: lea     r9, [rbp-80h]
 * 0000000140740F5C: mov     [rbx+90h], r9
 * 0000000140740F63: mov     r9, [rbp-60h]
 * 0000000140740F67: jz      KiSystemServiceRepeat
 * 0000000140740F6D: lea     rdi, stru_140FC11F0.___u33+0B0h
 * 0000000140740F74: mov     esi, [rdi+10h]
 * 0000000140740F77: mov     rdi, [rdi]
 * 0000000140740F7A: cmp     eax, esi
 * 0000000140740F7C: jnb     short loc_140740F8E
 * 0000000140740F7E: lea     rdi, [rdi+rsi*4]
 * 0000000140740F82: movsx   eax, byte ptr [rdi+rax]
 * 0000000140740F86: or      eax, eax
 * 0000000140740F88: jle     KiSystemServiceExit
 * 0000000140740F8E: mov     eax, 0C000001Ch
 * 0000000140740F93: jmp     KiSystemServiceExit
 * 0000000140740F98: mov     ecx, 4Ah ; 'J'
 * 0000000140740F9D: xor     r9d, r9d
 * 0000000140740FA0: mov     r8, cr8
 * 0000000140740FA4: or      r8d, r8d
 * 0000000140740FA7: jnz     short loc_140740FBD
 * 0000000140740FA9: mov     ecx, 1
 * 0000000140740FAE: movzx   r8d, byte ptr [r11+24Ah]
 * 0000000140740FB6: mov     r9d, [r11+1E4h]
 * 0000000140740FBD: mov     rdx, [rbp+0E8h]
 * 0000000140740FC4: mov     r10, rbp
 * 0000000140740FC7: call    KiBugCheckDispatch
 * 0000000140740FCD: mov     ecx, 1F9h
 * 0000000140740FD2: mov     rdx, [rbp+0E8h]
 * 0000000140740FD9: movzx   r8d, byte ptr [r11+232h]
 * 0000000140740FE1: xor     r9d, r9d
 * 0000000140740FE4: xor     r10d, r10d
 * 0000000140740FE7: call    KiBugCheckDispatch
 * 0000000140740FED: sub     rsp, 50h
 * 0000000140740FF1: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140740FF6: mov     [rsp+0E0h+var_B8], rdx
 * 0000000140740FFB: mov     [rsp+0E0h+var_B0], r8
 * 0000000140741000: mov     [rsp+0E0h+var_A8], r9
 * 0000000140741005: mov     [rsp+0E0h+var_A0], r10
 * 000000014074100A: mov     rcx, r10
 * 000000014074100D: mov     rdx, rsp
 * 0000000140741010: add     rdx, 20h ; ' '
 * 0000000140741014: mov     r8, 4
 * 000000014074101B: mov     r9, rsp
 * 000000014074101E: add     r9, 70h ; 'p'
 * 0000000140741022: call    KiTrackSystemCallEntry
 * 0000000140741027: mov     [rbp-60h], rax
 * 000000014074102B: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140741030: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140741035: mov     r8, [rsp+0E0h+var_B0]
 * 000000014074103A: mov     r9, [rsp+0E0h+var_A8]
 * 000000014074103F: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140741044: add     rsp, 50h
 * 0000000140741048: mov     rax, r10
 * 000000014074104B: call    rax
 * 000000014074104D: nop     dword ptr [rax]
 * 0000000140741050: mov     rcx, [rbp-60h]
 * 0000000140741054: mov     rdx, rax
 * 0000000140741057: call    KiTrackSystemCallExit
 * 000000014074105C: jmp     loc_1407407C8
 * 0000000140741061: sub     rsp, 50h
 * 0000000140741065: mov     [rsp+0E0h+var_C0], rcx
 * 000000014074106A: mov     [rsp+0E0h+var_B8], rdx
 * 000000014074106F: mov     [rsp+0E0h+var_B0], r8
 * 0000000140741074: mov     [rsp+0E0h+var_A8], r9
 * 0000000140741079: mov     [rsp+0E0h+var_A0], r10
 * 000000014074107E: mov     rcx, r10
 * 0000000140741081: call    PerfInfoLogSysCallEntry
 * 0000000140741086: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014074108B: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140741090: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140741095: mov     r9, [rsp+0E0h+var_A8]
 * 000000014074109A: mov     r10, [rsp+0E0h+var_A0]
 * 000000014074109F: add     rsp, 50h
 * 00000001407410A3: mov     rax, r10
 * 00000001407410A6: call    rax
 * 00000001407410A8: nop     dword ptr [rax]
 * 00000001407410AB: mov     rcx, rax
 * 00000001407410AE: call    PerfInfoLogSysCallExit
 * 00000001407410B3: jmp     loc_1407407C8
 * 00000001407410B8: retn
 */
