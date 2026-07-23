/*
 * XREFs of KiOverflowTrap @ 0x140739040
 * Callers:
 *     KiOverflowTrapShadow @ 0x140C5F340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x140739040 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x140739040
 * Reason: Hex-Rays returned no pseudocode for 0x140739040
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140739040: sub     rsp, 8
 * 0000000140739044: push    rbp
 * 0000000140739045: sub     rsp, 158h
 * 000000014073904C: lea     rbp, [rsp+80h]
 * 0000000140739054: mov     [rbp+0E8h+var_138], rax
 * 0000000140739058: mov     [rbp+0E8h+var_130], rcx
 * 000000014073905C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140739060: mov     [rbp+0E8h+var_120], r8
 * 0000000140739064: mov     [rbp+0E8h+var_118], r9
 * 0000000140739068: mov     [rbp+0E8h+var_110], r10
 * 000000014073906C: mov     [rbp+0E8h+var_108], r11
 * 0000000140739070: test    [rbp+0E8h+arg_0], 1
 * 0000000140739077: jnz     short loc_1407390B1
 * 0000000140739079: xor     edx, edx
 * 000000014073907B: rdsspq  rdx
 * 0000000140739080: mov     [rbp+0E8h+var_90], rdx
 * 0000000140739084: lfence
 * 0000000140739087: test    byte ptr gs:898h, 1
 * 0000000140739090: jnz     short loc_14073909A
 * 0000000140739092: lfence
 * 0000000140739095: jmp     loc_140739322
 * 000000014073909A: movzx   eax, word ptr gs:8A6h
 * 00000001407390A3: mov     ecx, 48h ; 'H'
 * 00000001407390A8: xor     edx, edx
 * 00000001407390AA: wrmsr
 * 00000001407390AC: jmp     loc_140739322
 * 00000001407390B1: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407390B8: jnz     short loc_1407390BD
 * 00000001407390BA: swapgs
 * 00000001407390BD: lfence
 * 00000001407390C0: mov     rcx, gs:9D68h
 * 00000001407390C9: test    rcx, rcx
 * 00000001407390CC: jz      short loc_1407390ED
 * 00000001407390CE: rdsspq  rdx
 * 00000001407390D3: mov     r10, gs:9D60h
 * 00000001407390DC: add     r10, 8
 * 00000001407390E0: cmp     rdx, r10
 * 00000001407390E3: jnz     short loc_1407390ED
 * 00000001407390E5: rstorssp qword ptr [rcx]
 * 00000001407390E9: saveprevssp
 * 00000001407390ED: mov     r10, gs:188h
 * 00000001407390F6: mov     rcx, gs:188h
 * 00000001407390FF: mov     rcx, [rcx+220h]
 * 0000000140739106: mov     rcx, [rcx+760h]
 * 000000014073910D: mov     gs:890h, rcx
 * 0000000140739116: mov     cx, gs:8A2h
 * 000000014073911F: mov     gs:8A4h, cx
 * 0000000140739128: mov     cl, gs:898h
 * 0000000140739130: mov     gs:89Ah, cl
 * 0000000140739138: movzx   eax, word ptr gs:8A8h
 * 0000000140739141: cmp     gs:8A6h, ax
 * 000000014073914A: jz      short loc_14073915E
 * 000000014073914C: mov     gs:8A6h, ax
 * 0000000140739155: mov     ecx, 48h ; 'H'
 * 000000014073915A: xor     edx, edx
 * 000000014073915C: wrmsr
 * 000000014073915E: movzx   edx, byte ptr gs:898h
 * 0000000140739167: test    edx, 8
 * 000000014073916D: jz      short loc_140739186
 * 000000014073916F: mov     eax, 1
 * 0000000140739174: xor     edx, edx
 * 0000000140739176: mov     ecx, 49h ; 'I'
 * 000000014073917B: wrmsr
 * 000000014073917D: movzx   edx, byte ptr gs:898h
 * 0000000140739186: test    edx, 2
 * 000000014073918C: jz      loc_1407392C9
 * 0000000140739192: call    loc_1407392A5
 * 0000000140739197: add     rsp, 8
 * 000000014073919B: call    loc_1407392AE
 * 00000001407391A0: add     rsp, 8
 * 00000001407391A4: call    loc_140739197
 * 00000001407391A9: add     rsp, 8
 * 00000001407391AD: call    loc_1407391A0
 * 00000001407391B2: add     rsp, 8
 * 00000001407391B6: call    loc_1407391A9
 * 00000001407391BB: add     rsp, 8
 * 00000001407391BF: call    loc_1407391B2
 * 00000001407391C4: add     rsp, 8
 * 00000001407391C8: call    loc_1407391BB
 * 00000001407391CD: add     rsp, 8
 * 00000001407391D1: call    loc_1407391C4
 * 00000001407391D6: add     rsp, 8
 * 00000001407391DA: call    loc_1407391CD
 * 00000001407391DF: add     rsp, 8
 * 00000001407391E3: call    loc_1407391D6
 * 00000001407391E8: add     rsp, 8
 * 00000001407391EC: call    loc_1407391DF
 * 00000001407391F1: add     rsp, 8
 * 00000001407391F5: call    loc_1407391E8
 * 00000001407391FA: add     rsp, 8
 * 00000001407391FE: call    loc_1407391F1
 * 0000000140739203: add     rsp, 8
 * 0000000140739207: call    loc_1407391FA
 * 000000014073920C: add     rsp, 8
 * 0000000140739210: call    loc_140739203
 * 0000000140739215: add     rsp, 8
 * 0000000140739219: call    loc_14073920C
 * 000000014073921E: add     rsp, 8
 * 0000000140739222: call    loc_140739215
 * 0000000140739227: add     rsp, 8
 * 000000014073922B: call    loc_14073921E
 * 0000000140739230: add     rsp, 8
 * 0000000140739234: call    loc_140739227
 * 0000000140739239: add     rsp, 8
 * 000000014073923D: call    loc_140739230
 * 0000000140739242: add     rsp, 8
 * 0000000140739246: call    loc_140739239
 * 000000014073924B: add     rsp, 8
 * 000000014073924F: call    loc_140739242
 * 0000000140739254: add     rsp, 8
 * 0000000140739258: call    loc_14073924B
 * 000000014073925D: add     rsp, 8
 * 0000000140739261: call    loc_140739254
 * 0000000140739266: add     rsp, 8
 * 000000014073926A: call    loc_14073925D
 * 000000014073926F: add     rsp, 8
 * 0000000140739273: call    loc_140739266
 * 0000000140739278: add     rsp, 8
 * 000000014073927C: call    loc_14073926F
 * 0000000140739281: add     rsp, 8
 * 0000000140739285: call    loc_140739278
 * 000000014073928A: add     rsp, 8
 * 000000014073928E: call    loc_140739281
 * 0000000140739293: add     rsp, 8
 * 0000000140739297: call    loc_14073928A
 * 000000014073929C: add     rsp, 8
 * 00000001407392A0: call    loc_140739293
 * 00000001407392A5: add     rsp, 8
 * 00000001407392A9: call    loc_14073929C
 * 00000001407392AE: add     rsp, 8
 * 00000001407392B2: mov     eax, 0DADAh
 * 00000001407392B7: test    byte ptr gs:89Ch, 8
 * 00000001407392C0: jz      short loc_1407392C9
 * 00000001407392C2: mov     al, 20h ; ' '
 * 00000001407392C4: incsspq rax
 * 00000001407392C9: test    edx, 80h
 * 00000001407392CF: jz      short loc_1407392D9
 * 00000001407392D1: lfence
 * 00000001407392D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001407392D9: lfence
 * 00000001407392DC: mov     byte ptr gs:89Eh, 0
 * 00000001407392E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001407392EC: jz      short loc_14073930D
 * 00000001407392EE: mov     ecx, 6A7h
 * 00000001407392F3: rdmsr
 * 00000001407392F5: cmp     edx, 0
 * 00000001407392F8: jz      short loc_14073930D
 * 00000001407392FA: mov     ecx, edx
 * 00000001407392FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140739302: cmp     edx, ecx
 * 0000000140739304: jz      short loc_14073930D
 * 0000000140739306: mov     ecx, 6A7h
 * 000000014073930B: wrmsr
 * 000000014073930D: test    byte ptr [r10+3], 3
 * 0000000140739312: mov     [rbp+0E8h+var_68], 0
 * 000000014073931B: jz      short loc_140739322
 * 000000014073931D: call    KiSaveDebugRegisterState
 * 0000000140739322: cld
 * 0000000140739323: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140739327: ldmxcsr dword ptr gs:180h
 * 0000000140739330: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140739334: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140739338: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073933C: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140739340: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140739344: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140739348: test    [rbp+0E8h+arg_0], 1
 * 000000014073934F: jz      short KiOverflowTrapDispatchTrap
 * 0000000140739351: mov     r10, gs:188h
 * 000000014073935A: test    byte ptr [r10+3], 80h
 * 000000014073935F: jz      short KiOverflowTrapDispatchTrap
 * 0000000140739361: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140739366: mov     [rbp+0E8h+var_13D], 1
 * 000000014073936A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140739371: jz      short loc_140739394
 * 0000000140739373: test    [rbp+0E8h+arg_0], 1
 * 000000014073937A: jnz     short loc_140739391
 * 000000014073937C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140739383: jz      short loc_140739394
 * 0000000140739385: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073938F: jz      short loc_140739394
 * 0000000140739391: stac
 * 0000000140739394: test    [rbp+0E8h+arg_8], 200h
 * 000000014073939E: jz      short loc_1407393A1
 * 00000001407393A0: sti
 * 00000001407393A1: mov     ecx, 0C0000095h
 * 00000001407393A6: xor     edx, edx
 * 00000001407393A8: mov     r8, [rbp+0E8h]
 * 00000001407393AF: dec     r8
 * 00000001407393B2: call    KiExceptionDispatch
 * 00000001407393B7: nop
 * 00000001407393B8: retn
 */
