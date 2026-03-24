/*
 * XREFs of KiBreakpointTrap @ 0x140734080
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140C592C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x140734080 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x140734080
 * Reason: Hex-Rays returned no pseudocode for 0x140734080
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140734080: sub     rsp, 8
 * 0000000140734084: push    rbp
 * 0000000140734085: sub     rsp, 158h
 * 000000014073408C: lea     rbp, [rsp+80h]
 * 0000000140734094: mov     [rbp+0E8h+var_138], rax
 * 0000000140734098: mov     [rbp+0E8h+var_130], rcx
 * 000000014073409C: mov     [rbp+0E8h+var_128], rdx
 * 00000001407340A0: mov     [rbp+0E8h+var_120], r8
 * 00000001407340A4: mov     [rbp+0E8h+var_118], r9
 * 00000001407340A8: mov     [rbp+0E8h+var_110], r10
 * 00000001407340AC: mov     [rbp+0E8h+var_108], r11
 * 00000001407340B0: test    [rbp+0E8h+arg_0], 1
 * 00000001407340B7: jnz     short loc_1407340F1
 * 00000001407340B9: xor     edx, edx
 * 00000001407340BB: rdsspq  rdx
 * 00000001407340C0: mov     [rbp+0E8h+var_90], rdx
 * 00000001407340C4: lfence
 * 00000001407340C7: test    byte ptr gs:898h, 1
 * 00000001407340D0: jnz     short loc_1407340DA
 * 00000001407340D2: lfence
 * 00000001407340D5: jmp     loc_140734362
 * 00000001407340DA: movzx   eax, word ptr gs:8A6h
 * 00000001407340E3: mov     ecx, 48h ; 'H'
 * 00000001407340E8: xor     edx, edx
 * 00000001407340EA: wrmsr
 * 00000001407340EC: jmp     loc_140734362
 * 00000001407340F1: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407340F8: jnz     short loc_1407340FD
 * 00000001407340FA: swapgs
 * 00000001407340FD: lfence
 * 0000000140734100: mov     rcx, gs:9D68h
 * 0000000140734109: test    rcx, rcx
 * 000000014073410C: jz      short loc_14073412D
 * 000000014073410E: rdsspq  rdx
 * 0000000140734113: mov     r10, gs:9D60h
 * 000000014073411C: add     r10, 8
 * 0000000140734120: cmp     rdx, r10
 * 0000000140734123: jnz     short loc_14073412D
 * 0000000140734125: rstorssp qword ptr [rcx]
 * 0000000140734129: saveprevssp
 * 000000014073412D: mov     r10, gs:188h
 * 0000000140734136: mov     rcx, gs:188h
 * 000000014073413F: mov     rcx, [rcx+220h]
 * 0000000140734146: mov     rcx, [rcx+760h]
 * 000000014073414D: mov     gs:890h, rcx
 * 0000000140734156: mov     cx, gs:8A2h
 * 000000014073415F: mov     gs:8A4h, cx
 * 0000000140734168: mov     cl, gs:898h
 * 0000000140734170: mov     gs:89Ah, cl
 * 0000000140734178: movzx   eax, word ptr gs:8A8h
 * 0000000140734181: cmp     gs:8A6h, ax
 * 000000014073418A: jz      short loc_14073419E
 * 000000014073418C: mov     gs:8A6h, ax
 * 0000000140734195: mov     ecx, 48h ; 'H'
 * 000000014073419A: xor     edx, edx
 * 000000014073419C: wrmsr
 * 000000014073419E: movzx   edx, byte ptr gs:898h
 * 00000001407341A7: test    edx, 8
 * 00000001407341AD: jz      short loc_1407341C6
 * 00000001407341AF: mov     eax, 1
 * 00000001407341B4: xor     edx, edx
 * 00000001407341B6: mov     ecx, 49h ; 'I'
 * 00000001407341BB: wrmsr
 * 00000001407341BD: movzx   edx, byte ptr gs:898h
 * 00000001407341C6: test    edx, 2
 * 00000001407341CC: jz      loc_140734309
 * 00000001407341D2: call    loc_1407342E5
 * 00000001407341D7: add     rsp, 8
 * 00000001407341DB: call    loc_1407342EE
 * 00000001407341E0: add     rsp, 8
 * 00000001407341E4: call    loc_1407341D7
 * 00000001407341E9: add     rsp, 8
 * 00000001407341ED: call    loc_1407341E0
 * 00000001407341F2: add     rsp, 8
 * 00000001407341F6: call    loc_1407341E9
 * 00000001407341FB: add     rsp, 8
 * 00000001407341FF: call    loc_1407341F2
 * 0000000140734204: add     rsp, 8
 * 0000000140734208: call    loc_1407341FB
 * 000000014073420D: add     rsp, 8
 * 0000000140734211: call    loc_140734204
 * 0000000140734216: add     rsp, 8
 * 000000014073421A: call    loc_14073420D
 * 000000014073421F: add     rsp, 8
 * 0000000140734223: call    loc_140734216
 * 0000000140734228: add     rsp, 8
 * 000000014073422C: call    loc_14073421F
 * 0000000140734231: add     rsp, 8
 * 0000000140734235: call    loc_140734228
 * 000000014073423A: add     rsp, 8
 * 000000014073423E: call    loc_140734231
 * 0000000140734243: add     rsp, 8
 * 0000000140734247: call    loc_14073423A
 * 000000014073424C: add     rsp, 8
 * 0000000140734250: call    loc_140734243
 * 0000000140734255: add     rsp, 8
 * 0000000140734259: call    loc_14073424C
 * 000000014073425E: add     rsp, 8
 * 0000000140734262: call    loc_140734255
 * 0000000140734267: add     rsp, 8
 * 000000014073426B: call    loc_14073425E
 * 0000000140734270: add     rsp, 8
 * 0000000140734274: call    loc_140734267
 * 0000000140734279: add     rsp, 8
 * 000000014073427D: call    loc_140734270
 * 0000000140734282: add     rsp, 8
 * 0000000140734286: call    loc_140734279
 * 000000014073428B: add     rsp, 8
 * 000000014073428F: call    loc_140734282
 * 0000000140734294: add     rsp, 8
 * 0000000140734298: call    loc_14073428B
 * 000000014073429D: add     rsp, 8
 * 00000001407342A1: call    loc_140734294
 * 00000001407342A6: add     rsp, 8
 * 00000001407342AA: call    loc_14073429D
 * 00000001407342AF: add     rsp, 8
 * 00000001407342B3: call    loc_1407342A6
 * 00000001407342B8: add     rsp, 8
 * 00000001407342BC: call    loc_1407342AF
 * 00000001407342C1: add     rsp, 8
 * 00000001407342C5: call    loc_1407342B8
 * 00000001407342CA: add     rsp, 8
 * 00000001407342CE: call    loc_1407342C1
 * 00000001407342D3: add     rsp, 8
 * 00000001407342D7: call    loc_1407342CA
 * 00000001407342DC: add     rsp, 8
 * 00000001407342E0: call    loc_1407342D3
 * 00000001407342E5: add     rsp, 8
 * 00000001407342E9: call    loc_1407342DC
 * 00000001407342EE: add     rsp, 8
 * 00000001407342F2: mov     eax, 0DADAh
 * 00000001407342F7: test    byte ptr gs:89Ch, 8
 * 0000000140734300: jz      short loc_140734309
 * 0000000140734302: mov     al, 20h ; ' '
 * 0000000140734304: incsspq rax
 * 0000000140734309: test    edx, 80h
 * 000000014073430F: jz      short loc_140734319
 * 0000000140734311: lfence
 * 0000000140734314: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140734319: lfence
 * 000000014073431C: mov     byte ptr gs:89Eh, 0
 * 0000000140734325: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073432C: jz      short loc_14073434D
 * 000000014073432E: mov     ecx, 6A7h
 * 0000000140734333: rdmsr
 * 0000000140734335: cmp     edx, 0
 * 0000000140734338: jz      short loc_14073434D
 * 000000014073433A: mov     ecx, edx
 * 000000014073433C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140734342: cmp     edx, ecx
 * 0000000140734344: jz      short loc_14073434D
 * 0000000140734346: mov     ecx, 6A7h
 * 000000014073434B: wrmsr
 * 000000014073434D: test    byte ptr [r10+3], 3
 * 0000000140734352: mov     [rbp+0E8h+var_68], 0
 * 000000014073435B: jz      short loc_140734362
 * 000000014073435D: call    KiSaveDebugRegisterState
 * 0000000140734362: cld
 * 0000000140734363: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140734367: ldmxcsr dword ptr gs:180h
 * 0000000140734370: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140734374: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140734378: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073437C: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140734380: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140734384: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140734388: test    [rbp+0E8h+arg_0], 1
 * 000000014073438F: jz      short KiBreakpointTrapDispatchTrap
 * 0000000140734391: mov     r10, gs:188h
 * 000000014073439A: test    byte ptr [r10+3], 80h
 * 000000014073439F: jz      short KiBreakpointTrapDispatchTrap
 * 00000001407343A1: call    KiSynchronizeUserIsolationDomainExit
 * 00000001407343A6: mov     [rbp+0E8h+var_13D], 1
 * 00000001407343AA: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407343B1: jz      short loc_1407343D4
 * 00000001407343B3: test    [rbp+0E8h+arg_0], 1
 * 00000001407343BA: jnz     short loc_1407343D1
 * 00000001407343BC: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407343C3: jz      short loc_1407343D4
 * 00000001407343C5: test    [rbp+0E8h+arg_8], 40000h
 * 00000001407343CF: jz      short loc_1407343D4
 * 00000001407343D1: stac
 * 00000001407343D4: test    [rbp+0E8h+arg_8], 200h
 * 00000001407343DE: jz      short loc_1407343E1
 * 00000001407343E0: sti
 * 00000001407343E1: mov     ecx, 80000003h
 * 00000001407343E6: mov     edx, 1
 * 00000001407343EB: mov     r8, [rbp+0E8h]
 * 00000001407343F2: dec     r8
 * 00000001407343F5: mov     r9d, 0
 * 00000001407343FB: call    KiExceptionDispatch
 * 0000000140734400: nop
 * 0000000140734401: retn
 */
