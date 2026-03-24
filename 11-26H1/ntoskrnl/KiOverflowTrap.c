/*
 * XREFs of KiOverflowTrap @ 0x140734440
 * Callers:
 *     KiOverflowTrapShadow @ 0x140C59340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x140734440 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x140734440
 * Reason: Hex-Rays returned no pseudocode for 0x140734440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140734440: sub     rsp, 8
 * 0000000140734444: push    rbp
 * 0000000140734445: sub     rsp, 158h
 * 000000014073444C: lea     rbp, [rsp+80h]
 * 0000000140734454: mov     [rbp+0E8h+var_138], rax
 * 0000000140734458: mov     [rbp+0E8h+var_130], rcx
 * 000000014073445C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140734460: mov     [rbp+0E8h+var_120], r8
 * 0000000140734464: mov     [rbp+0E8h+var_118], r9
 * 0000000140734468: mov     [rbp+0E8h+var_110], r10
 * 000000014073446C: mov     [rbp+0E8h+var_108], r11
 * 0000000140734470: test    [rbp+0E8h+arg_0], 1
 * 0000000140734477: jnz     short loc_1407344B1
 * 0000000140734479: xor     edx, edx
 * 000000014073447B: rdsspq  rdx
 * 0000000140734480: mov     [rbp+0E8h+var_90], rdx
 * 0000000140734484: lfence
 * 0000000140734487: test    byte ptr gs:898h, 1
 * 0000000140734490: jnz     short loc_14073449A
 * 0000000140734492: lfence
 * 0000000140734495: jmp     loc_140734722
 * 000000014073449A: movzx   eax, word ptr gs:8A6h
 * 00000001407344A3: mov     ecx, 48h ; 'H'
 * 00000001407344A8: xor     edx, edx
 * 00000001407344AA: wrmsr
 * 00000001407344AC: jmp     loc_140734722
 * 00000001407344B1: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407344B8: jnz     short loc_1407344BD
 * 00000001407344BA: swapgs
 * 00000001407344BD: lfence
 * 00000001407344C0: mov     rcx, gs:9D68h
 * 00000001407344C9: test    rcx, rcx
 * 00000001407344CC: jz      short loc_1407344ED
 * 00000001407344CE: rdsspq  rdx
 * 00000001407344D3: mov     r10, gs:9D60h
 * 00000001407344DC: add     r10, 8
 * 00000001407344E0: cmp     rdx, r10
 * 00000001407344E3: jnz     short loc_1407344ED
 * 00000001407344E5: rstorssp qword ptr [rcx]
 * 00000001407344E9: saveprevssp
 * 00000001407344ED: mov     r10, gs:188h
 * 00000001407344F6: mov     rcx, gs:188h
 * 00000001407344FF: mov     rcx, [rcx+220h]
 * 0000000140734506: mov     rcx, [rcx+760h]
 * 000000014073450D: mov     gs:890h, rcx
 * 0000000140734516: mov     cx, gs:8A2h
 * 000000014073451F: mov     gs:8A4h, cx
 * 0000000140734528: mov     cl, gs:898h
 * 0000000140734530: mov     gs:89Ah, cl
 * 0000000140734538: movzx   eax, word ptr gs:8A8h
 * 0000000140734541: cmp     gs:8A6h, ax
 * 000000014073454A: jz      short loc_14073455E
 * 000000014073454C: mov     gs:8A6h, ax
 * 0000000140734555: mov     ecx, 48h ; 'H'
 * 000000014073455A: xor     edx, edx
 * 000000014073455C: wrmsr
 * 000000014073455E: movzx   edx, byte ptr gs:898h
 * 0000000140734567: test    edx, 8
 * 000000014073456D: jz      short loc_140734586
 * 000000014073456F: mov     eax, 1
 * 0000000140734574: xor     edx, edx
 * 0000000140734576: mov     ecx, 49h ; 'I'
 * 000000014073457B: wrmsr
 * 000000014073457D: movzx   edx, byte ptr gs:898h
 * 0000000140734586: test    edx, 2
 * 000000014073458C: jz      loc_1407346C9
 * 0000000140734592: call    loc_1407346A5
 * 0000000140734597: add     rsp, 8
 * 000000014073459B: call    loc_1407346AE
 * 00000001407345A0: add     rsp, 8
 * 00000001407345A4: call    loc_140734597
 * 00000001407345A9: add     rsp, 8
 * 00000001407345AD: call    loc_1407345A0
 * 00000001407345B2: add     rsp, 8
 * 00000001407345B6: call    loc_1407345A9
 * 00000001407345BB: add     rsp, 8
 * 00000001407345BF: call    loc_1407345B2
 * 00000001407345C4: add     rsp, 8
 * 00000001407345C8: call    loc_1407345BB
 * 00000001407345CD: add     rsp, 8
 * 00000001407345D1: call    loc_1407345C4
 * 00000001407345D6: add     rsp, 8
 * 00000001407345DA: call    loc_1407345CD
 * 00000001407345DF: add     rsp, 8
 * 00000001407345E3: call    loc_1407345D6
 * 00000001407345E8: add     rsp, 8
 * 00000001407345EC: call    loc_1407345DF
 * 00000001407345F1: add     rsp, 8
 * 00000001407345F5: call    loc_1407345E8
 * 00000001407345FA: add     rsp, 8
 * 00000001407345FE: call    loc_1407345F1
 * 0000000140734603: add     rsp, 8
 * 0000000140734607: call    loc_1407345FA
 * 000000014073460C: add     rsp, 8
 * 0000000140734610: call    loc_140734603
 * 0000000140734615: add     rsp, 8
 * 0000000140734619: call    loc_14073460C
 * 000000014073461E: add     rsp, 8
 * 0000000140734622: call    loc_140734615
 * 0000000140734627: add     rsp, 8
 * 000000014073462B: call    loc_14073461E
 * 0000000140734630: add     rsp, 8
 * 0000000140734634: call    loc_140734627
 * 0000000140734639: add     rsp, 8
 * 000000014073463D: call    loc_140734630
 * 0000000140734642: add     rsp, 8
 * 0000000140734646: call    loc_140734639
 * 000000014073464B: add     rsp, 8
 * 000000014073464F: call    loc_140734642
 * 0000000140734654: add     rsp, 8
 * 0000000140734658: call    loc_14073464B
 * 000000014073465D: add     rsp, 8
 * 0000000140734661: call    loc_140734654
 * 0000000140734666: add     rsp, 8
 * 000000014073466A: call    loc_14073465D
 * 000000014073466F: add     rsp, 8
 * 0000000140734673: call    loc_140734666
 * 0000000140734678: add     rsp, 8
 * 000000014073467C: call    loc_14073466F
 * 0000000140734681: add     rsp, 8
 * 0000000140734685: call    loc_140734678
 * 000000014073468A: add     rsp, 8
 * 000000014073468E: call    loc_140734681
 * 0000000140734693: add     rsp, 8
 * 0000000140734697: call    loc_14073468A
 * 000000014073469C: add     rsp, 8
 * 00000001407346A0: call    loc_140734693
 * 00000001407346A5: add     rsp, 8
 * 00000001407346A9: call    loc_14073469C
 * 00000001407346AE: add     rsp, 8
 * 00000001407346B2: mov     eax, 0DADAh
 * 00000001407346B7: test    byte ptr gs:89Ch, 8
 * 00000001407346C0: jz      short loc_1407346C9
 * 00000001407346C2: mov     al, 20h ; ' '
 * 00000001407346C4: incsspq rax
 * 00000001407346C9: test    edx, 80h
 * 00000001407346CF: jz      short loc_1407346D9
 * 00000001407346D1: lfence
 * 00000001407346D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001407346D9: lfence
 * 00000001407346DC: mov     byte ptr gs:89Eh, 0
 * 00000001407346E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001407346EC: jz      short loc_14073470D
 * 00000001407346EE: mov     ecx, 6A7h
 * 00000001407346F3: rdmsr
 * 00000001407346F5: cmp     edx, 0
 * 00000001407346F8: jz      short loc_14073470D
 * 00000001407346FA: mov     ecx, edx
 * 00000001407346FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140734702: cmp     edx, ecx
 * 0000000140734704: jz      short loc_14073470D
 * 0000000140734706: mov     ecx, 6A7h
 * 000000014073470B: wrmsr
 * 000000014073470D: test    byte ptr [r10+3], 3
 * 0000000140734712: mov     [rbp+0E8h+var_68], 0
 * 000000014073471B: jz      short loc_140734722
 * 000000014073471D: call    KiSaveDebugRegisterState
 * 0000000140734722: cld
 * 0000000140734723: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140734727: ldmxcsr dword ptr gs:180h
 * 0000000140734730: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140734734: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140734738: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073473C: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140734740: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140734744: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140734748: test    [rbp+0E8h+arg_0], 1
 * 000000014073474F: jz      short KiOverflowTrapDispatchTrap
 * 0000000140734751: mov     r10, gs:188h
 * 000000014073475A: test    byte ptr [r10+3], 80h
 * 000000014073475F: jz      short KiOverflowTrapDispatchTrap
 * 0000000140734761: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140734766: mov     [rbp+0E8h+var_13D], 1
 * 000000014073476A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140734771: jz      short loc_140734794
 * 0000000140734773: test    [rbp+0E8h+arg_0], 1
 * 000000014073477A: jnz     short loc_140734791
 * 000000014073477C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140734783: jz      short loc_140734794
 * 0000000140734785: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073478F: jz      short loc_140734794
 * 0000000140734791: stac
 * 0000000140734794: test    [rbp+0E8h+arg_8], 200h
 * 000000014073479E: jz      short loc_1407347A1
 * 00000001407347A0: sti
 * 00000001407347A1: mov     ecx, 0C0000095h
 * 00000001407347A6: xor     edx, edx
 * 00000001407347A8: mov     r8, [rbp+0E8h]
 * 00000001407347AF: dec     r8
 * 00000001407347B2: call    KiExceptionDispatch
 * 00000001407347B7: nop
 * 00000001407347B8: retn
 */
