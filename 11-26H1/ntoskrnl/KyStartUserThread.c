/*
 * XREFs of KyStartUserThread @ 0x140728F90
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140728F90 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x140729310 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140728F90
 * Reason: Hex-Rays returned no pseudocode for 0x140728F90
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140728F90: sub     rsp, 8
 * 0000000140728F94: push    rbp
 * 0000000140728F95: sub     rsp, 158h
 * 0000000140728F9C: lea     rbp, [rsp+80h]
 * 0000000140728FA4: mov     [rbp+0E8h+var_138], rax
 * 0000000140728FA8: mov     [rbp+0E8h+var_130], rcx
 * 0000000140728FAC: mov     [rbp+0E8h+var_128], rdx
 * 0000000140728FB0: mov     [rbp+0E8h+var_120], r8
 * 0000000140728FB4: mov     [rbp+0E8h+var_118], r9
 * 0000000140728FB8: mov     [rbp+0E8h+var_110], r10
 * 0000000140728FBC: mov     [rbp+0E8h+var_108], r11
 * 0000000140728FC0: test    [rbp+0E8h+arg_0], 1
 * 0000000140728FC7: jnz     short loc_140729001
 * 0000000140728FC9: xor     edx, edx
 * 0000000140728FCB: rdsspq  rdx
 * 0000000140728FD0: mov     [rbp+0E8h+var_90], rdx
 * 0000000140728FD4: lfence
 * 0000000140728FD7: test    byte ptr gs:898h, 1
 * 0000000140728FE0: jnz     short loc_140728FEA
 * 0000000140728FE2: lfence
 * 0000000140728FE5: jmp     loc_140729272
 * 0000000140728FEA: movzx   eax, word ptr gs:8A6h
 * 0000000140728FF3: mov     ecx, 48h ; 'H'
 * 0000000140728FF8: xor     edx, edx
 * 0000000140728FFA: wrmsr
 * 0000000140728FFC: jmp     loc_140729272
 * 0000000140729001: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140729008: jnz     short loc_14072900D
 * 000000014072900A: swapgs
 * 000000014072900D: lfence
 * 0000000140729010: mov     rcx, gs:9D68h
 * 0000000140729019: test    rcx, rcx
 * 000000014072901C: jz      short loc_14072903D
 * 000000014072901E: rdsspq  rdx
 * 0000000140729023: mov     r10, gs:9D60h
 * 000000014072902C: add     r10, 8
 * 0000000140729030: cmp     rdx, r10
 * 0000000140729033: jnz     short loc_14072903D
 * 0000000140729035: rstorssp qword ptr [rcx]
 * 0000000140729039: saveprevssp
 * 000000014072903D: mov     r10, gs:188h
 * 0000000140729046: mov     rcx, gs:188h
 * 000000014072904F: mov     rcx, [rcx+220h]
 * 0000000140729056: mov     rcx, [rcx+760h]
 * 000000014072905D: mov     gs:890h, rcx
 * 0000000140729066: mov     cx, gs:8A2h
 * 000000014072906F: mov     gs:8A4h, cx
 * 0000000140729078: mov     cl, gs:898h
 * 0000000140729080: mov     gs:89Ah, cl
 * 0000000140729088: movzx   eax, word ptr gs:8A8h
 * 0000000140729091: cmp     gs:8A6h, ax
 * 000000014072909A: jz      short loc_1407290AE
 * 000000014072909C: mov     gs:8A6h, ax
 * 00000001407290A5: mov     ecx, 48h ; 'H'
 * 00000001407290AA: xor     edx, edx
 * 00000001407290AC: wrmsr
 * 00000001407290AE: movzx   edx, byte ptr gs:898h
 * 00000001407290B7: test    edx, 8
 * 00000001407290BD: jz      short loc_1407290D6
 * 00000001407290BF: mov     eax, 1
 * 00000001407290C4: xor     edx, edx
 * 00000001407290C6: mov     ecx, 49h ; 'I'
 * 00000001407290CB: wrmsr
 * 00000001407290CD: movzx   edx, byte ptr gs:898h
 * 00000001407290D6: test    edx, 2
 * 00000001407290DC: jz      loc_140729219
 * 00000001407290E2: call    loc_1407291F5
 * 00000001407290E7: add     rsp, 8
 * 00000001407290EB: call    loc_1407291FE
 * 00000001407290F0: add     rsp, 8
 * 00000001407290F4: call    loc_1407290E7
 * 00000001407290F9: add     rsp, 8
 * 00000001407290FD: call    loc_1407290F0
 * 0000000140729102: add     rsp, 8
 * 0000000140729106: call    loc_1407290F9
 * 000000014072910B: add     rsp, 8
 * 000000014072910F: call    loc_140729102
 * 0000000140729114: add     rsp, 8
 * 0000000140729118: call    loc_14072910B
 * 000000014072911D: add     rsp, 8
 * 0000000140729121: call    loc_140729114
 * 0000000140729126: add     rsp, 8
 * 000000014072912A: call    loc_14072911D
 * 000000014072912F: add     rsp, 8
 * 0000000140729133: call    loc_140729126
 * 0000000140729138: add     rsp, 8
 * 000000014072913C: call    loc_14072912F
 * 0000000140729141: add     rsp, 8
 * 0000000140729145: call    loc_140729138
 * 000000014072914A: add     rsp, 8
 * 000000014072914E: call    loc_140729141
 * 0000000140729153: add     rsp, 8
 * 0000000140729157: call    loc_14072914A
 * 000000014072915C: add     rsp, 8
 * 0000000140729160: call    loc_140729153
 * 0000000140729165: add     rsp, 8
 * 0000000140729169: call    loc_14072915C
 * 000000014072916E: add     rsp, 8
 * 0000000140729172: call    loc_140729165
 * 0000000140729177: add     rsp, 8
 * 000000014072917B: call    loc_14072916E
 * 0000000140729180: add     rsp, 8
 * 0000000140729184: call    loc_140729177
 * 0000000140729189: add     rsp, 8
 * 000000014072918D: call    loc_140729180
 * 0000000140729192: add     rsp, 8
 * 0000000140729196: call    loc_140729189
 * 000000014072919B: add     rsp, 8
 * 000000014072919F: call    loc_140729192
 * 00000001407291A4: add     rsp, 8
 * 00000001407291A8: call    loc_14072919B
 * 00000001407291AD: add     rsp, 8
 * 00000001407291B1: call    loc_1407291A4
 * 00000001407291B6: add     rsp, 8
 * 00000001407291BA: call    loc_1407291AD
 * 00000001407291BF: add     rsp, 8
 * 00000001407291C3: call    loc_1407291B6
 * 00000001407291C8: add     rsp, 8
 * 00000001407291CC: call    loc_1407291BF
 * 00000001407291D1: add     rsp, 8
 * 00000001407291D5: call    loc_1407291C8
 * 00000001407291DA: add     rsp, 8
 * 00000001407291DE: call    loc_1407291D1
 * 00000001407291E3: add     rsp, 8
 * 00000001407291E7: call    loc_1407291DA
 * 00000001407291EC: add     rsp, 8
 * 00000001407291F0: call    loc_1407291E3
 * 00000001407291F5: add     rsp, 8
 * 00000001407291F9: call    loc_1407291EC
 * 00000001407291FE: add     rsp, 8
 * 0000000140729202: mov     eax, 0DADAh
 * 0000000140729207: test    byte ptr gs:89Ch, 8
 * 0000000140729210: jz      short loc_140729219
 * 0000000140729212: mov     al, 20h ; ' '
 * 0000000140729214: incsspq rax
 * 0000000140729219: test    edx, 80h
 * 000000014072921F: jz      short loc_140729229
 * 0000000140729221: lfence
 * 0000000140729224: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140729229: lfence
 * 000000014072922C: mov     byte ptr gs:89Eh, 0
 * 0000000140729235: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072923C: jz      short loc_14072925D
 * 000000014072923E: mov     ecx, 6A7h
 * 0000000140729243: rdmsr
 * 0000000140729245: cmp     edx, 0
 * 0000000140729248: jz      short loc_14072925D
 * 000000014072924A: mov     ecx, edx
 * 000000014072924C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140729252: cmp     edx, ecx
 * 0000000140729254: jz      short loc_14072925D
 * 0000000140729256: mov     ecx, 6A7h
 * 000000014072925B: wrmsr
 * 000000014072925D: test    byte ptr [r10+3], 3
 * 0000000140729262: mov     [rbp+0E8h+var_68], 0
 * 000000014072926B: jz      short loc_140729272
 * 000000014072926D: call    KiSaveDebugRegisterState
 * 0000000140729272: cld
 * 0000000140729273: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140729277: ldmxcsr dword ptr gs:180h
 * 0000000140729280: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140729284: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140729288: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014072928C: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140729290: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140729294: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140729298: test    [rbp+0E8h+arg_0], 1
 * 000000014072929F: jz      short KyStartUserThreadDispatchTrap
 * 00000001407292A1: mov     r10, gs:188h
 * 00000001407292AA: test    byte ptr [r10+3], 80h
 * 00000001407292AF: jz      short KyStartUserThreadDispatchTrap
 * 00000001407292B1: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407292B6: mov     [rbp+0E8h+var_13D], 1
 * 00000001407292BA: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407292C1: jz      short loc_1407292E4
 * 00000001407292C3: test    [rbp+0E8h+arg_0], 1
 * 00000001407292CA: jnz     short loc_1407292E1
 * 00000001407292CC: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407292D3: jz      short loc_1407292E4
 * 00000001407292D5: test    [rbp+0E8h+arg_8], 40000h
 * 00000001407292DF: jz      short loc_1407292E4
 * 00000001407292E1: stac
 * 00000001407292E4: test    [rbp+0E8h+arg_8], 200h
 * 00000001407292EE: jz      short loc_1407292F1
 * 00000001407292F0: sti
 * 00000001407292F1: call    KxStartUserThread
 * 00000001407292F6: nop     word ptr [rax+rax+00000000h]
 * 0000000140729300: nop
 * 0000000140729301: retn
 */
