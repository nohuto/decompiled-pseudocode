/*
 * XREFs of KiPageFault @ 0x140737080
 * Callers:
 *     KiPageFaultShadow @ 0x140C59840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     PsWatchWorkingSet @ 0x14047CE10 (PsWatchWorkingSet.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x14073C4C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x140737080
 * Reason: Hex-Rays returned no pseudocode for 0x140737080
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140737080: push    rbp
 * 0000000140737081: sub     rsp, 158h
 * 0000000140737088: lea     rbp, [rsp+80h]
 * 0000000140737090: mov     [rbp+0D8h+var_128], rax
 * 0000000140737094: mov     [rbp+0D8h+var_120], rcx
 * 0000000140737098: mov     [rbp+0D8h+var_118], rdx
 * 000000014073709C: mov     [rbp+0D8h+var_110], r8
 * 00000001407370A0: mov     [rbp+0D8h+var_108], r9
 * 00000001407370A4: mov     [rbp+0D8h+var_100], r10
 * 00000001407370A8: mov     [rbp+0D8h+var_F8], r11
 * 00000001407370AC: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001407370B3: jnz     short loc_1407370ED
 * 00000001407370B5: xor     edx, edx
 * 00000001407370B7: rdsspq  rdx
 * 00000001407370BC: mov     [rbp+0D8h+var_80], rdx
 * 00000001407370C0: lfence
 * 00000001407370C3: test    byte ptr gs:898h, 1
 * 00000001407370CC: jnz     short loc_1407370D6
 * 00000001407370CE: lfence
 * 00000001407370D1: jmp     loc_14073735E
 * 00000001407370D6: movzx   eax, word ptr gs:8A6h
 * 00000001407370DF: mov     ecx, 48h ; 'H'
 * 00000001407370E4: xor     edx, edx
 * 00000001407370E6: wrmsr
 * 00000001407370E8: jmp     loc_14073735E
 * 00000001407370ED: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407370F4: jnz     short loc_1407370F9
 * 00000001407370F6: swapgs
 * 00000001407370F9: lfence
 * 00000001407370FC: mov     rcx, gs:9D68h
 * 0000000140737105: test    rcx, rcx
 * 0000000140737108: jz      short loc_140737129
 * 000000014073710A: rdsspq  rdx
 * 000000014073710F: mov     r10, gs:9D60h
 * 0000000140737118: add     r10, 8
 * 000000014073711C: cmp     rdx, r10
 * 000000014073711F: jnz     short loc_140737129
 * 0000000140737121: rstorssp qword ptr [rcx]
 * 0000000140737125: saveprevssp
 * 0000000140737129: mov     r10, gs:188h
 * 0000000140737132: mov     rcx, gs:188h
 * 000000014073713B: mov     rcx, [rcx+220h]
 * 0000000140737142: mov     rcx, [rcx+760h]
 * 0000000140737149: mov     gs:890h, rcx
 * 0000000140737152: mov     cx, gs:8A2h
 * 000000014073715B: mov     gs:8A4h, cx
 * 0000000140737164: mov     cl, gs:898h
 * 000000014073716C: mov     gs:89Ah, cl
 * 0000000140737174: movzx   eax, word ptr gs:8A8h
 * 000000014073717D: cmp     gs:8A6h, ax
 * 0000000140737186: jz      short loc_14073719A
 * 0000000140737188: mov     gs:8A6h, ax
 * 0000000140737191: mov     ecx, 48h ; 'H'
 * 0000000140737196: xor     edx, edx
 * 0000000140737198: wrmsr
 * 000000014073719A: movzx   edx, byte ptr gs:898h
 * 00000001407371A3: test    edx, 8
 * 00000001407371A9: jz      short loc_1407371C2
 * 00000001407371AB: mov     eax, 1
 * 00000001407371B0: xor     edx, edx
 * 00000001407371B2: mov     ecx, 49h ; 'I'
 * 00000001407371B7: wrmsr
 * 00000001407371B9: movzx   edx, byte ptr gs:898h
 * 00000001407371C2: test    edx, 2
 * 00000001407371C8: jz      loc_140737305
 * 00000001407371CE: call    loc_1407372E1
 * 00000001407371D3: add     rsp, 8
 * 00000001407371D7: call    loc_1407372EA
 * 00000001407371DC: add     rsp, 8
 * 00000001407371E0: call    loc_1407371D3
 * 00000001407371E5: add     rsp, 8
 * 00000001407371E9: call    loc_1407371DC
 * 00000001407371EE: add     rsp, 8
 * 00000001407371F2: call    loc_1407371E5
 * 00000001407371F7: add     rsp, 8
 * 00000001407371FB: call    loc_1407371EE
 * 0000000140737200: add     rsp, 8
 * 0000000140737204: call    loc_1407371F7
 * 0000000140737209: add     rsp, 8
 * 000000014073720D: call    loc_140737200
 * 0000000140737212: add     rsp, 8
 * 0000000140737216: call    loc_140737209
 * 000000014073721B: add     rsp, 8
 * 000000014073721F: call    loc_140737212
 * 0000000140737224: add     rsp, 8
 * 0000000140737228: call    loc_14073721B
 * 000000014073722D: add     rsp, 8
 * 0000000140737231: call    loc_140737224
 * 0000000140737236: add     rsp, 8
 * 000000014073723A: call    loc_14073722D
 * 000000014073723F: add     rsp, 8
 * 0000000140737243: call    loc_140737236
 * 0000000140737248: add     rsp, 8
 * 000000014073724C: call    loc_14073723F
 * 0000000140737251: add     rsp, 8
 * 0000000140737255: call    loc_140737248
 * 000000014073725A: add     rsp, 8
 * 000000014073725E: call    loc_140737251
 * 0000000140737263: add     rsp, 8
 * 0000000140737267: call    loc_14073725A
 * 000000014073726C: add     rsp, 8
 * 0000000140737270: call    loc_140737263
 * 0000000140737275: add     rsp, 8
 * 0000000140737279: call    loc_14073726C
 * 000000014073727E: add     rsp, 8
 * 0000000140737282: call    loc_140737275
 * 0000000140737287: add     rsp, 8
 * 000000014073728B: call    loc_14073727E
 * 0000000140737290: add     rsp, 8
 * 0000000140737294: call    loc_140737287
 * 0000000140737299: add     rsp, 8
 * 000000014073729D: call    loc_140737290
 * 00000001407372A2: add     rsp, 8
 * 00000001407372A6: call    loc_140737299
 * 00000001407372AB: add     rsp, 8
 * 00000001407372AF: call    loc_1407372A2
 * 00000001407372B4: add     rsp, 8
 * 00000001407372B8: call    loc_1407372AB
 * 00000001407372BD: add     rsp, 8
 * 00000001407372C1: call    loc_1407372B4
 * 00000001407372C6: add     rsp, 8
 * 00000001407372CA: call    loc_1407372BD
 * 00000001407372CF: add     rsp, 8
 * 00000001407372D3: call    loc_1407372C6
 * 00000001407372D8: add     rsp, 8
 * 00000001407372DC: call    loc_1407372CF
 * 00000001407372E1: add     rsp, 8
 * 00000001407372E5: call    loc_1407372D8
 * 00000001407372EA: add     rsp, 8
 * 00000001407372EE: mov     eax, 0DADAh
 * 00000001407372F3: test    byte ptr gs:89Ch, 8
 * 00000001407372FC: jz      short loc_140737305
 * 00000001407372FE: mov     al, 20h ; ' '
 * 0000000140737300: incsspq rax
 * 0000000140737305: test    edx, 80h
 * 000000014073730B: jz      short loc_140737315
 * 000000014073730D: lfence
 * 0000000140737310: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140737315: lfence
 * 0000000140737318: mov     byte ptr gs:89Eh, 0
 * 0000000140737321: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140737328: jz      short loc_140737349
 * 000000014073732A: mov     ecx, 6A7h
 * 000000014073732F: rdmsr
 * 0000000140737331: cmp     edx, 0
 * 0000000140737334: jz      short loc_140737349
 * 0000000140737336: mov     ecx, edx
 * 0000000140737338: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073733E: cmp     edx, ecx
 * 0000000140737340: jz      short loc_140737349
 * 0000000140737342: mov     ecx, 6A7h
 * 0000000140737347: wrmsr
 * 0000000140737349: test    byte ptr [r10+3], 3
 * 000000014073734E: mov     [rbp+0D8h+var_58], 0
 * 0000000140737357: jz      short loc_14073735E
 * 0000000140737359: call    KiSaveDebugRegisterState
 * 000000014073735E: cld
 * 000000014073735F: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140737363: ldmxcsr dword ptr gs:180h
 * 000000014073736C: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140737370: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140737374: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140737378: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014073737C: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140737380: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140737384: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014073738B: jz      short loc_1407373A2
 * 000000014073738D: mov     r10, gs:188h
 * 0000000140737396: test    byte ptr [r10+3], 80h
 * 000000014073739B: jz      short loc_1407373A2
 * 000000014073739D: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407373A2: mov     r8, cr2
 * 00000001407373A6: mov     [rbp+0D8h+var_12D], 1
 * 00000001407373AA: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407373B1: jz      short loc_1407373D4
 * 00000001407373B3: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001407373BA: jnz     short loc_1407373D1
 * 00000001407373BC: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407373C3: jz      short loc_1407373D4
 * 00000001407373C5: test    [rbp+0D8h+arg_10], 40000h
 * 00000001407373CF: jz      short loc_1407373D4
 * 00000001407373D1: stac
 * 00000001407373D4: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001407373DC: jnz     short loc_1407373EB
 * 00000001407373DE: mov     ecx, 0C0000102h
 * 00000001407373E3: rdmsr
 * 00000001407373E5: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 00000001407373E8: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 00000001407373EB: mov     eax, [rbp+0E0h]
 * 00000001407373F1: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407373F8: jz      short loc_140737401
 * 00000001407373FA: mov     r8, [rbp+0D8h+arg_28]
 * 0000000140737401: test    [rbp+0D8h+arg_10], 200h
 * 000000014073740B: jz      short loc_14073740E
 * 000000014073740D: sti
 * 000000014073740E: mov     [rbp+0D8h+var_88], r8
 * 0000000140737412: bt      [rbp+0D8h+arg_10], 9
 * 000000014073741A: jnb     loc_14073751E
 * 0000000140737420: lea     r9, [rbp+0D8h+var_158]
 * 0000000140737424: mov     rdx, r8; BugCheckParameter1
 * 0000000140737427: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014073742E: and     r8b, 1
 * 0000000140737432: mov     ecx, eax; BugCheckParameter2
 * 0000000140737434: shr     eax, 1
 * 0000000140737436: and     eax, 9
 * 0000000140737439: mov     [rbp+0D8h+var_12E], al
 * 000000014073743C: call    MmAccessFault
 * 0000000140737441: test    eax, eax
 * 0000000140737443: jge     loc_140737524
 * 0000000140737449: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140737450: jz      short loc_1407374A8
 * 0000000140737452: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014073745A: jnz     short loc_14073749A
 * 000000014073745C: mov     r9, gs:188h
 * 0000000140737465: test    byte ptr [r9+3], 4
 * 000000014073746A: jz      short loc_140737475
 * 000000014073746C: mov     r8, [r9+680h]
 * 0000000140737473: jmp     short loc_14073747E
 * 0000000140737475: mov     r8, gs:30h
 * 000000014073747E: cmp     r8, [rbp+0D8h+var_F0]
 * 0000000140737482: jz      short loc_1407374A8
 * 0000000140737484: mov     ecx, 0C0000102h
 * 0000000140737489: mov     eax, r8d
 * 000000014073748C: shr     r8, 20h
 * 0000000140737490: mov     edx, r8d
 * 0000000140737493: wrmsr
 * 0000000140737495: jmp     loc_14073753F
 * 000000014073749A: mov     rcx, [rbp+0D8h+var_88]
 * 000000014073749E: shr     rcx, 20h
 * 00000001407374A2: jnz     loc_14073753F
 * 00000001407374A8: mov     ecx, eax
 * 00000001407374AA: mov     edx, 2
 * 00000001407374AF: cmp     ecx, 0D0000006h
 * 00000001407374B5: jz      short loc_1407374F8
 * 00000001407374B7: cmp     ecx, 0C0000005h
 * 00000001407374BD: jz      short loc_1407374DE
 * 00000001407374BF: cmp     ecx, 80000001h
 * 00000001407374C5: jz      short loc_1407374E3
 * 00000001407374C7: cmp     ecx, 0C00000FDh
 * 00000001407374CD: jz      short loc_1407374E3
 * 00000001407374CF: mov     ecx, 0C0000006h
 * 00000001407374D4: mov     edx, 3
 * 00000001407374D9: mov     r11d, eax
 * 00000001407374DC: jmp     short loc_1407374E3
 * 00000001407374DE: mov     ecx, 10000004h
 * 00000001407374E3: mov     r10, [rbp+0D8h+var_88]
 * 00000001407374E7: movzx   r9, [rbp+0D8h+var_12E]
 * 00000001407374EC: mov     r8, [rbp+0D8h+arg_0]
 * 00000001407374F3: call    KiExceptionDispatch
 * 00000001407374F8: mov     rax, cr8
 * 00000001407374FC: mov     r10, [rbp+0D8h+arg_0]
 * 0000000140737503: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140737508: and     eax, 0FFh
 * 000000014073750D: mov     r8, rax
 * 0000000140737510: mov     rdx, [rbp+0D8h+var_88]
 * 0000000140737514: mov     ecx, 0Ah
 * 0000000140737519: call    KiBugCheckDispatch
 * 000000014073751E: xor     eax, eax
 * 0000000140737520: mov     al, 0FFh
 * 0000000140737522: jmp     short loc_1407374FC
 * 0000000140737524: cmp     byte ptr cs:PsAltSystemCallRegistrationLock.TrapFrame+1, 0
 * 000000014073752B: jz      short loc_14073753F
 * 000000014073752D: mov     r8, [rbp+0D8h+var_88]
 * 0000000140737531: mov     rdx, [rbp+0D8h+arg_0]
 * 0000000140737538: mov     ecx, eax
 * 000000014073753A: call    PsWatchWorkingSet
 * 000000014073753F: mov     rax, cr8
 * 0000000140737543: or      eax, eax
 * 0000000140737545: mov     [rbp+0D8h+var_138], eax
 * 0000000140737548: jnz     short loc_140737553
 * 000000014073754A: mov     ecx, 1
 * 000000014073754F: mov     cr8, rcx
 * 0000000140737553: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140737557: call    KiCheckForSListAddress
 * 000000014073755C: mov     ecx, [rbp+0D8h+var_138]
 * 000000014073755F: or      ecx, ecx
 * 0000000140737561: jnz     short loc_140737567
 * 0000000140737563: mov     cr8, rcx
 * 0000000140737567: cli
 * 0000000140737568: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073756F: jz      short loc_140737576
 * 0000000140737571: add     rsp, 28h
 * 0000000140737575: retn
 * 0000000140737576: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014073757D: jz      loc_14073787E
 * 0000000140737583: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073758A: jz      short loc_14073758F
 * 000000014073758C: stac
 * 000000014073758F: mov     rcx, gs:188h
 * 0000000140737598: test    byte ptr [rcx+0C2h], 3
 * 000000014073759F: jz      short loc_1407375BC
 * 00000001407375A1: mov     ecx, 1
 * 00000001407375A6: mov     cr8, rcx
 * 00000001407375AA: sti
 * 00000001407375AB: call    KiInitiateUserApc
 * 00000001407375B0: cli
 * 00000001407375B1: mov     ecx, 0
 * 00000001407375B6: mov     cr8, rcx
 * 00000001407375BA: jmp     short loc_14073758F
 * 00000001407375BC: test    byte ptr [rcx+3], 80h
 * 00000001407375C0: jz      short loc_1407375CF
 * 00000001407375C2: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001407375C7: test    eax, eax
 * 00000001407375C9: mov     rax, [rbp+0D8h+var_128]
 * 00000001407375CD: jnz     short loc_14073758F
 * 00000001407375CF: test    byte ptr gs:8A0h, 2
 * 00000001407375D8: jz      short loc_1407375E1
 * 00000001407375DA: xor     ecx, ecx
 * 00000001407375DC: call    KiUpdateStibpPairing
 * 00000001407375E1: mov     rcx, gs:188h
 * 00000001407375EA: test    dword ptr [rcx], 8000000h
 * 00000001407375F0: jz      short loc_1407375F7
 * 00000001407375F2: call    KiRestoreSetContextState
 * 00000001407375F7: mov     rcx, gs:188h
 * 0000000140737600: test    dword ptr [rcx], 10000h
 * 0000000140737606: jz      short loc_14073761C
 * 0000000140737608: test    byte ptr [rcx+2], 1
 * 000000014073760C: jz      short loc_14073761C
 * 000000014073760E: call    KiCopyCounters
 * 0000000140737613: mov     rcx, gs:188h
 * 000000014073761C: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140737620: cmp     [rbp+0D8h+var_58], 0
 * 0000000140737628: jz      short loc_14073762F
 * 000000014073762A: call    KiRestoreDebugRegisterState
 * 000000014073762F: mov     rcx, gs:188h
 * 0000000140737638: bt      dword ptr [rcx+74h], 16h
 * 000000014073763D: jnb     short loc_140737669
 * 000000014073763F: xor     ecx, ecx
 * 0000000140737641: rdsspq  rcx
 * 0000000140737646: mov     r8, gs:9D68h
 * 000000014073764F: add     r8, 8
 * 0000000140737653: cmp     rcx, r8
 * 0000000140737656: jnz     short loc_140737669
 * 0000000140737658: mov     rcx, gs:9D60h
 * 0000000140737661: rstorssp qword ptr [rcx]
 * 0000000140737665: saveprevssp
 * 0000000140737669: mov     byte ptr gs:89Eh, 0
 * 0000000140737672: movzx   eax, word ptr gs:8ACh
 * 000000014073767B: cmp     gs:8A6h, ax
 * 0000000140737684: jz      short loc_140737698
 * 0000000140737686: mov     gs:8A6h, ax
 * 000000014073768F: mov     ecx, 48h ; 'H'
 * 0000000140737694: xor     edx, edx
 * 0000000140737696: wrmsr
 * 0000000140737698: btr     word ptr gs:898h, 2
 * 00000001407376A3: jnb     short loc_1407376B3
 * 00000001407376A5: mov     eax, 1
 * 00000001407376AA: xor     edx, edx
 * 00000001407376AC: mov     ecx, 49h ; 'I'
 * 00000001407376B1: wrmsr
 * 00000001407376B3: btr     word ptr gs:898h, 5
 * 00000001407376BE: jnb     loc_1407377FB
 * 00000001407376C4: call    loc_1407377D7
 * 00000001407376C9: add     rsp, 8
 * 00000001407376CD: call    loc_1407377E0
 * 00000001407376D2: add     rsp, 8
 * 00000001407376D6: call    loc_1407376C9
 * 00000001407376DB: add     rsp, 8
 * 00000001407376DF: call    loc_1407376D2
 * 00000001407376E4: add     rsp, 8
 * 00000001407376E8: call    loc_1407376DB
 * 00000001407376ED: add     rsp, 8
 * 00000001407376F1: call    loc_1407376E4
 * 00000001407376F6: add     rsp, 8
 * 00000001407376FA: call    loc_1407376ED
 * 00000001407376FF: add     rsp, 8
 * 0000000140737703: call    loc_1407376F6
 * 0000000140737708: add     rsp, 8
 * 000000014073770C: call    loc_1407376FF
 * 0000000140737711: add     rsp, 8
 * 0000000140737715: call    loc_140737708
 * 000000014073771A: add     rsp, 8
 * 000000014073771E: call    loc_140737711
 * 0000000140737723: add     rsp, 8
 * 0000000140737727: call    loc_14073771A
 * 000000014073772C: add     rsp, 8
 * 0000000140737730: call    loc_140737723
 * 0000000140737735: add     rsp, 8
 * 0000000140737739: call    loc_14073772C
 * 000000014073773E: add     rsp, 8
 * 0000000140737742: call    loc_140737735
 * 0000000140737747: add     rsp, 8
 * 000000014073774B: call    loc_14073773E
 * 0000000140737750: add     rsp, 8
 * 0000000140737754: call    loc_140737747
 * 0000000140737759: add     rsp, 8
 * 000000014073775D: call    loc_140737750
 * 0000000140737762: add     rsp, 8
 * 0000000140737766: call    loc_140737759
 * 000000014073776B: add     rsp, 8
 * 000000014073776F: call    loc_140737762
 * 0000000140737774: add     rsp, 8
 * 0000000140737778: call    loc_14073776B
 * 000000014073777D: add     rsp, 8
 * 0000000140737781: call    loc_140737774
 * 0000000140737786: add     rsp, 8
 * 000000014073778A: call    loc_14073777D
 * 000000014073778F: add     rsp, 8
 * 0000000140737793: call    loc_140737786
 * 0000000140737798: add     rsp, 8
 * 000000014073779C: call    loc_14073778F
 * 00000001407377A1: add     rsp, 8
 * 00000001407377A5: call    loc_140737798
 * 00000001407377AA: add     rsp, 8
 * 00000001407377AE: call    loc_1407377A1
 * 00000001407377B3: add     rsp, 8
 * 00000001407377B7: call    loc_1407377AA
 * 00000001407377BC: add     rsp, 8
 * 00000001407377C0: call    loc_1407377B3
 * 00000001407377C5: add     rsp, 8
 * 00000001407377C9: call    loc_1407377BC
 * 00000001407377CE: add     rsp, 8
 * 00000001407377D2: call    loc_1407377C5
 * 00000001407377D7: add     rsp, 8
 * 00000001407377DB: call    loc_1407377CE
 * 00000001407377E0: add     rsp, 8
 * 00000001407377E4: mov     eax, 0DADAh
 * 00000001407377E9: test    byte ptr gs:89Ch, 8
 * 00000001407377F2: jz      short loc_1407377FB
 * 00000001407377F4: mov     al, 20h ; ' '
 * 00000001407377F6: incsspq rax
 * 00000001407377FB: test    word ptr gs:898h, 100h
 * 0000000140737806: jz      short loc_140737814
 * 0000000140737808: xor     eax, eax
 * 000000014073780A: xor     edx, edx
 * 000000014073780C: mov     ecx, 1
 * 0000000140737811: div     rcx
 * 0000000140737814: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140737818: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014073781C: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140737820: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140737824: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140737828: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014073782C: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140737830: mov     r10, [rbp+0D8h+var_100]
 * 0000000140737834: mov     r9, [rbp+0D8h+var_108]
 * 0000000140737838: mov     r8, [rbp+0D8h+var_110]
 * 000000014073783C: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140737840: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140737844: mov     rax, [rbp+0D8h+var_128]
 * 0000000140737848: mov     rsp, rbp
 * 000000014073784B: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140737852: add     rsp, 0E8h
 * 0000000140737859: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140737860: jz      short loc_140737867
 * 0000000140737862: jmp     KiKernelExit
 * 0000000140737867: test    word ptr gs:898h, 200h
 * 0000000140737872: jz      short loc_140737879
 * 0000000140737874: verw    [rsp-10h+arg_20]
 * 0000000140737879: swapgs
 * 000000014073787C: iretq
 * 000000014073787E: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140737882: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140737886: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014073788A: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014073788E: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140737892: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140737896: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014073789A: mov     r11, [rbp+0D8h+var_F8]
 * 000000014073789E: mov     r10, [rbp+0D8h+var_100]
 * 00000001407378A2: mov     r9, [rbp+0D8h+var_108]
 * 00000001407378A6: mov     r8, [rbp+0D8h+var_110]
 * 00000001407378AA: mov     rdx, [rbp+0D8h+var_118]
 * 00000001407378AE: mov     rcx, [rbp+0D8h+var_120]
 * 00000001407378B2: mov     rax, [rbp+0D8h+var_128]
 * 00000001407378B6: mov     rsp, rbp
 * 00000001407378B9: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001407378C0: add     rsp, 0E8h
 * 00000001407378C7: iretq
 */
