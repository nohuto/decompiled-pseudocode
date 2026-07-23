/*
 * XREFs of KxDebugTrapOrFault @ 0x140738240
 * Callers:
 *     KiDebugTrapOrFault @ 0x140738080 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x140738240 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x140738240
 * Reason: Hex-Rays returned no pseudocode for 0x140738240
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140738240: sub     rsp, 8
 * 0000000140738244: push    rbp
 * 0000000140738245: sub     rsp, 158h
 * 000000014073824C: lea     rbp, [rsp+80h]
 * 0000000140738254: mov     [rbp+0E8h+var_138], rax
 * 0000000140738258: mov     [rbp+0E8h+var_130], rcx
 * 000000014073825C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140738260: mov     [rbp+0E8h+var_120], r8
 * 0000000140738264: mov     [rbp+0E8h+var_118], r9
 * 0000000140738268: mov     [rbp+0E8h+var_110], r10
 * 000000014073826C: mov     [rbp+0E8h+var_108], r11
 * 0000000140738270: test    [rbp+0E8h+arg_0], 1
 * 0000000140738277: jnz     short loc_1407382B1
 * 0000000140738279: xor     edx, edx
 * 000000014073827B: rdsspq  rdx
 * 0000000140738280: mov     [rbp+0E8h+var_90], rdx
 * 0000000140738284: lfence
 * 0000000140738287: test    byte ptr gs:898h, 1
 * 0000000140738290: jnz     short loc_14073829A
 * 0000000140738292: lfence
 * 0000000140738295: jmp     loc_140738522
 * 000000014073829A: movzx   eax, word ptr gs:8A6h
 * 00000001407382A3: mov     ecx, 48h ; 'H'
 * 00000001407382A8: xor     edx, edx
 * 00000001407382AA: wrmsr
 * 00000001407382AC: jmp     loc_140738522
 * 00000001407382B1: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407382B8: jnz     short loc_1407382BD
 * 00000001407382BA: swapgs
 * 00000001407382BD: lfence
 * 00000001407382C0: mov     rcx, gs:9D68h
 * 00000001407382C9: test    rcx, rcx
 * 00000001407382CC: jz      short loc_1407382ED
 * 00000001407382CE: rdsspq  rdx
 * 00000001407382D3: mov     r10, gs:9D60h
 * 00000001407382DC: add     r10, 8
 * 00000001407382E0: cmp     rdx, r10
 * 00000001407382E3: jnz     short loc_1407382ED
 * 00000001407382E5: rstorssp qword ptr [rcx]
 * 00000001407382E9: saveprevssp
 * 00000001407382ED: mov     r10, gs:188h
 * 00000001407382F6: mov     rcx, gs:188h
 * 00000001407382FF: mov     rcx, [rcx+220h]
 * 0000000140738306: mov     rcx, [rcx+760h]
 * 000000014073830D: mov     gs:890h, rcx
 * 0000000140738316: mov     cx, gs:8A2h
 * 000000014073831F: mov     gs:8A4h, cx
 * 0000000140738328: mov     cl, gs:898h
 * 0000000140738330: mov     gs:89Ah, cl
 * 0000000140738338: movzx   eax, word ptr gs:8A8h
 * 0000000140738341: cmp     gs:8A6h, ax
 * 000000014073834A: jz      short loc_14073835E
 * 000000014073834C: mov     gs:8A6h, ax
 * 0000000140738355: mov     ecx, 48h ; 'H'
 * 000000014073835A: xor     edx, edx
 * 000000014073835C: wrmsr
 * 000000014073835E: movzx   edx, byte ptr gs:898h
 * 0000000140738367: test    edx, 8
 * 000000014073836D: jz      short loc_140738386
 * 000000014073836F: mov     eax, 1
 * 0000000140738374: xor     edx, edx
 * 0000000140738376: mov     ecx, 49h ; 'I'
 * 000000014073837B: wrmsr
 * 000000014073837D: movzx   edx, byte ptr gs:898h
 * 0000000140738386: test    edx, 2
 * 000000014073838C: jz      loc_1407384C9
 * 0000000140738392: call    loc_1407384A5
 * 0000000140738397: add     rsp, 8
 * 000000014073839B: call    loc_1407384AE
 * 00000001407383A0: add     rsp, 8
 * 00000001407383A4: call    loc_140738397
 * 00000001407383A9: add     rsp, 8
 * 00000001407383AD: call    loc_1407383A0
 * 00000001407383B2: add     rsp, 8
 * 00000001407383B6: call    loc_1407383A9
 * 00000001407383BB: add     rsp, 8
 * 00000001407383BF: call    loc_1407383B2
 * 00000001407383C4: add     rsp, 8
 * 00000001407383C8: call    loc_1407383BB
 * 00000001407383CD: add     rsp, 8
 * 00000001407383D1: call    loc_1407383C4
 * 00000001407383D6: add     rsp, 8
 * 00000001407383DA: call    loc_1407383CD
 * 00000001407383DF: add     rsp, 8
 * 00000001407383E3: call    loc_1407383D6
 * 00000001407383E8: add     rsp, 8
 * 00000001407383EC: call    loc_1407383DF
 * 00000001407383F1: add     rsp, 8
 * 00000001407383F5: call    loc_1407383E8
 * 00000001407383FA: add     rsp, 8
 * 00000001407383FE: call    loc_1407383F1
 * 0000000140738403: add     rsp, 8
 * 0000000140738407: call    loc_1407383FA
 * 000000014073840C: add     rsp, 8
 * 0000000140738410: call    loc_140738403
 * 0000000140738415: add     rsp, 8
 * 0000000140738419: call    loc_14073840C
 * 000000014073841E: add     rsp, 8
 * 0000000140738422: call    loc_140738415
 * 0000000140738427: add     rsp, 8
 * 000000014073842B: call    loc_14073841E
 * 0000000140738430: add     rsp, 8
 * 0000000140738434: call    loc_140738427
 * 0000000140738439: add     rsp, 8
 * 000000014073843D: call    loc_140738430
 * 0000000140738442: add     rsp, 8
 * 0000000140738446: call    loc_140738439
 * 000000014073844B: add     rsp, 8
 * 000000014073844F: call    loc_140738442
 * 0000000140738454: add     rsp, 8
 * 0000000140738458: call    loc_14073844B
 * 000000014073845D: add     rsp, 8
 * 0000000140738461: call    loc_140738454
 * 0000000140738466: add     rsp, 8
 * 000000014073846A: call    loc_14073845D
 * 000000014073846F: add     rsp, 8
 * 0000000140738473: call    loc_140738466
 * 0000000140738478: add     rsp, 8
 * 000000014073847C: call    loc_14073846F
 * 0000000140738481: add     rsp, 8
 * 0000000140738485: call    loc_140738478
 * 000000014073848A: add     rsp, 8
 * 000000014073848E: call    loc_140738481
 * 0000000140738493: add     rsp, 8
 * 0000000140738497: call    loc_14073848A
 * 000000014073849C: add     rsp, 8
 * 00000001407384A0: call    loc_140738493
 * 00000001407384A5: add     rsp, 8
 * 00000001407384A9: call    loc_14073849C
 * 00000001407384AE: add     rsp, 8
 * 00000001407384B2: mov     eax, 0DADAh
 * 00000001407384B7: test    byte ptr gs:89Ch, 8
 * 00000001407384C0: jz      short loc_1407384C9
 * 00000001407384C2: mov     al, 20h ; ' '
 * 00000001407384C4: incsspq rax
 * 00000001407384C9: test    edx, 80h
 * 00000001407384CF: jz      short loc_1407384D9
 * 00000001407384D1: lfence
 * 00000001407384D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001407384D9: lfence
 * 00000001407384DC: mov     byte ptr gs:89Eh, 0
 * 00000001407384E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001407384EC: jz      short loc_14073850D
 * 00000001407384EE: mov     ecx, 6A7h
 * 00000001407384F3: rdmsr
 * 00000001407384F5: cmp     edx, 0
 * 00000001407384F8: jz      short loc_14073850D
 * 00000001407384FA: mov     ecx, edx
 * 00000001407384FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140738502: cmp     edx, ecx
 * 0000000140738504: jz      short loc_14073850D
 * 0000000140738506: mov     ecx, 6A7h
 * 000000014073850B: wrmsr
 * 000000014073850D: test    byte ptr [r10+3], 3
 * 0000000140738512: mov     [rbp+0E8h+var_68], 0
 * 000000014073851B: jz      short loc_140738522
 * 000000014073851D: call    KiSaveDebugRegisterState
 * 0000000140738522: cld
 * 0000000140738523: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140738527: ldmxcsr dword ptr gs:180h
 * 0000000140738530: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140738534: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140738538: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073853C: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140738540: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140738544: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140738548: test    [rbp+0E8h+arg_0], 1
 * 000000014073854F: jz      short KiDebugTrapOrFaultDispatchTrap
 * 0000000140738551: mov     r10, gs:188h
 * 000000014073855A: test    byte ptr [r10+3], 80h
 * 000000014073855F: jz      short KiDebugTrapOrFaultDispatchTrap
 * 0000000140738561: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140738566: mov     [rbp+0E8h+var_13D], 1
 * 000000014073856A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140738571: jz      short loc_140738594
 * 0000000140738573: test    [rbp+0E8h+arg_0], 1
 * 000000014073857A: jnz     short loc_140738591
 * 000000014073857C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140738583: jz      short loc_140738594
 * 0000000140738585: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073858F: jz      short loc_140738594
 * 0000000140738591: stac
 * 0000000140738594: test    [rbp+0E8h+arg_8], 200h
 * 000000014073859E: jz      short loc_1407385A1
 * 00000001407385A0: sti
 * 00000001407385A1: test    cs:KiCpuTracingFlags, 2
 * 00000001407385AB: jz      short loc_1407385C0
 * 00000001407385AD: mov     ecx, 1D9h
 * 00000001407385B2: rdmsr
 * 00000001407385B4: or      eax, 1
 * 00000001407385B7: wrmsr
 * 00000001407385B9: xor     edx, edx
 * 00000001407385BB: jmp     loc_14073868F
 * 00000001407385C0: xor     edx, edx
 * 00000001407385C2: test    [rbp+0E8h+arg_8], 100h
 * 00000001407385CC: jz      loc_14073868F
 * 00000001407385D2: test    byte ptr gs:9162h, 2
 * 00000001407385DB: jz      loc_14073868F
 * 00000001407385E1: test    [rbp+0E8h+arg_0], 1
 * 00000001407385E8: jnz     short loc_140738641
 * 00000001407385EA: mov     rax, dr7
 * 00000001407385ED: test    ax, 200h
 * 00000001407385F1: jz      loc_14073868F
 * 00000001407385F7: test    ax, 100h
 * 00000001407385FB: jz      loc_14073868F
 * 0000000140738601: mov     r8d, cs:KiLastBranchTOSMSR
 * 0000000140738608: or      r8d, r8d
 * 000000014073860B: jz      short loc_140738615
 * 000000014073860D: mov     ecx, r8d
 * 0000000140738610: rdmsr
 * 0000000140738612: mov     r8d, eax
 * 0000000140738615: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014073861B: add     ecx, r8d
 * 000000014073861E: rdmsr
 * 0000000140738620: mov     r9d, eax
 * 0000000140738623: shl     rdx, 20h
 * 0000000140738627: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014073862D: or      r9, rdx
 * 0000000140738630: add     ecx, r8d
 * 0000000140738633: rdmsr
 * 0000000140738635: mov     r10d, eax
 * 0000000140738638: shl     rdx, 20h
 * 000000014073863C: or      r10, rdx
 * 000000014073863F: jmp     short loc_14073868A
 * 0000000140738641: test    [rbp+0E8h+var_68], 200h
 * 000000014073864A: jz      short loc_14073868F
 * 000000014073864C: test    [rbp+0E8h+var_68], 100h
 * 0000000140738655: jz      short loc_14073868F
 * 0000000140738657: and     [rbp+0E8h+var_40], 0
 * 000000014073865F: and     [rbp+0E8h+var_48], 0
 * 0000000140738667: mov     rcx, cs:MmUserProbeAddress
 * 000000014073866E: mov     r9, [rbp+0E8h+var_50]
 * 0000000140738675: cmp     r9, rcx
 * 0000000140738678: cmovnb  r9, rcx
 * 000000014073867C: mov     r10, [rbp+0E8h+var_58]
 * 0000000140738683: cmp     r10, rcx
 * 0000000140738686: cmovnb  r10, rcx
 * 000000014073868A: mov     edx, 2
 * 000000014073868F: mov     ecx, 80000004h
 * 0000000140738694: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014073869E: mov     r8, [rbp+0E8h]
 * 00000001407386A5: call    KiExceptionDispatch
 * 00000001407386AA: nop
 * 00000001407386AB: retn
 */
