/*
 * XREFs of KxDebugTrapOrFault @ 0x140733640
 * Callers:
 *     KiDebugTrapOrFault @ 0x140733480 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x140733640 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x140733640
 * Reason: Hex-Rays returned no pseudocode for 0x140733640
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140733640: sub     rsp, 8
 * 0000000140733644: push    rbp
 * 0000000140733645: sub     rsp, 158h
 * 000000014073364C: lea     rbp, [rsp+80h]
 * 0000000140733654: mov     [rbp+0E8h+var_138], rax
 * 0000000140733658: mov     [rbp+0E8h+var_130], rcx
 * 000000014073365C: mov     [rbp+0E8h+var_128], rdx
 * 0000000140733660: mov     [rbp+0E8h+var_120], r8
 * 0000000140733664: mov     [rbp+0E8h+var_118], r9
 * 0000000140733668: mov     [rbp+0E8h+var_110], r10
 * 000000014073366C: mov     [rbp+0E8h+var_108], r11
 * 0000000140733670: test    [rbp+0E8h+arg_0], 1
 * 0000000140733677: jnz     short loc_1407336B1
 * 0000000140733679: xor     edx, edx
 * 000000014073367B: rdsspq  rdx
 * 0000000140733680: mov     [rbp+0E8h+var_90], rdx
 * 0000000140733684: lfence
 * 0000000140733687: test    byte ptr gs:898h, 1
 * 0000000140733690: jnz     short loc_14073369A
 * 0000000140733692: lfence
 * 0000000140733695: jmp     loc_140733922
 * 000000014073369A: movzx   eax, word ptr gs:8A6h
 * 00000001407336A3: mov     ecx, 48h ; 'H'
 * 00000001407336A8: xor     edx, edx
 * 00000001407336AA: wrmsr
 * 00000001407336AC: jmp     loc_140733922
 * 00000001407336B1: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407336B8: jnz     short loc_1407336BD
 * 00000001407336BA: swapgs
 * 00000001407336BD: lfence
 * 00000001407336C0: mov     rcx, gs:9D68h
 * 00000001407336C9: test    rcx, rcx
 * 00000001407336CC: jz      short loc_1407336ED
 * 00000001407336CE: rdsspq  rdx
 * 00000001407336D3: mov     r10, gs:9D60h
 * 00000001407336DC: add     r10, 8
 * 00000001407336E0: cmp     rdx, r10
 * 00000001407336E3: jnz     short loc_1407336ED
 * 00000001407336E5: rstorssp qword ptr [rcx]
 * 00000001407336E9: saveprevssp
 * 00000001407336ED: mov     r10, gs:188h
 * 00000001407336F6: mov     rcx, gs:188h
 * 00000001407336FF: mov     rcx, [rcx+220h]
 * 0000000140733706: mov     rcx, [rcx+760h]
 * 000000014073370D: mov     gs:890h, rcx
 * 0000000140733716: mov     cx, gs:8A2h
 * 000000014073371F: mov     gs:8A4h, cx
 * 0000000140733728: mov     cl, gs:898h
 * 0000000140733730: mov     gs:89Ah, cl
 * 0000000140733738: movzx   eax, word ptr gs:8A8h
 * 0000000140733741: cmp     gs:8A6h, ax
 * 000000014073374A: jz      short loc_14073375E
 * 000000014073374C: mov     gs:8A6h, ax
 * 0000000140733755: mov     ecx, 48h ; 'H'
 * 000000014073375A: xor     edx, edx
 * 000000014073375C: wrmsr
 * 000000014073375E: movzx   edx, byte ptr gs:898h
 * 0000000140733767: test    edx, 8
 * 000000014073376D: jz      short loc_140733786
 * 000000014073376F: mov     eax, 1
 * 0000000140733774: xor     edx, edx
 * 0000000140733776: mov     ecx, 49h ; 'I'
 * 000000014073377B: wrmsr
 * 000000014073377D: movzx   edx, byte ptr gs:898h
 * 0000000140733786: test    edx, 2
 * 000000014073378C: jz      loc_1407338C9
 * 0000000140733792: call    loc_1407338A5
 * 0000000140733797: add     rsp, 8
 * 000000014073379B: call    loc_1407338AE
 * 00000001407337A0: add     rsp, 8
 * 00000001407337A4: call    loc_140733797
 * 00000001407337A9: add     rsp, 8
 * 00000001407337AD: call    loc_1407337A0
 * 00000001407337B2: add     rsp, 8
 * 00000001407337B6: call    loc_1407337A9
 * 00000001407337BB: add     rsp, 8
 * 00000001407337BF: call    loc_1407337B2
 * 00000001407337C4: add     rsp, 8
 * 00000001407337C8: call    loc_1407337BB
 * 00000001407337CD: add     rsp, 8
 * 00000001407337D1: call    loc_1407337C4
 * 00000001407337D6: add     rsp, 8
 * 00000001407337DA: call    loc_1407337CD
 * 00000001407337DF: add     rsp, 8
 * 00000001407337E3: call    loc_1407337D6
 * 00000001407337E8: add     rsp, 8
 * 00000001407337EC: call    loc_1407337DF
 * 00000001407337F1: add     rsp, 8
 * 00000001407337F5: call    loc_1407337E8
 * 00000001407337FA: add     rsp, 8
 * 00000001407337FE: call    loc_1407337F1
 * 0000000140733803: add     rsp, 8
 * 0000000140733807: call    loc_1407337FA
 * 000000014073380C: add     rsp, 8
 * 0000000140733810: call    loc_140733803
 * 0000000140733815: add     rsp, 8
 * 0000000140733819: call    loc_14073380C
 * 000000014073381E: add     rsp, 8
 * 0000000140733822: call    loc_140733815
 * 0000000140733827: add     rsp, 8
 * 000000014073382B: call    loc_14073381E
 * 0000000140733830: add     rsp, 8
 * 0000000140733834: call    loc_140733827
 * 0000000140733839: add     rsp, 8
 * 000000014073383D: call    loc_140733830
 * 0000000140733842: add     rsp, 8
 * 0000000140733846: call    loc_140733839
 * 000000014073384B: add     rsp, 8
 * 000000014073384F: call    loc_140733842
 * 0000000140733854: add     rsp, 8
 * 0000000140733858: call    loc_14073384B
 * 000000014073385D: add     rsp, 8
 * 0000000140733861: call    loc_140733854
 * 0000000140733866: add     rsp, 8
 * 000000014073386A: call    loc_14073385D
 * 000000014073386F: add     rsp, 8
 * 0000000140733873: call    loc_140733866
 * 0000000140733878: add     rsp, 8
 * 000000014073387C: call    loc_14073386F
 * 0000000140733881: add     rsp, 8
 * 0000000140733885: call    loc_140733878
 * 000000014073388A: add     rsp, 8
 * 000000014073388E: call    loc_140733881
 * 0000000140733893: add     rsp, 8
 * 0000000140733897: call    loc_14073388A
 * 000000014073389C: add     rsp, 8
 * 00000001407338A0: call    loc_140733893
 * 00000001407338A5: add     rsp, 8
 * 00000001407338A9: call    loc_14073389C
 * 00000001407338AE: add     rsp, 8
 * 00000001407338B2: mov     eax, 0DADAh
 * 00000001407338B7: test    byte ptr gs:89Ch, 8
 * 00000001407338C0: jz      short loc_1407338C9
 * 00000001407338C2: mov     al, 20h ; ' '
 * 00000001407338C4: incsspq rax
 * 00000001407338C9: test    edx, 80h
 * 00000001407338CF: jz      short loc_1407338D9
 * 00000001407338D1: lfence
 * 00000001407338D4: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001407338D9: lfence
 * 00000001407338DC: mov     byte ptr gs:89Eh, 0
 * 00000001407338E5: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001407338EC: jz      short loc_14073390D
 * 00000001407338EE: mov     ecx, 6A7h
 * 00000001407338F3: rdmsr
 * 00000001407338F5: cmp     edx, 0
 * 00000001407338F8: jz      short loc_14073390D
 * 00000001407338FA: mov     ecx, edx
 * 00000001407338FC: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140733902: cmp     edx, ecx
 * 0000000140733904: jz      short loc_14073390D
 * 0000000140733906: mov     ecx, 6A7h
 * 000000014073390B: wrmsr
 * 000000014073390D: test    byte ptr [r10+3], 3
 * 0000000140733912: mov     [rbp+0E8h+var_68], 0
 * 000000014073391B: jz      short loc_140733922
 * 000000014073391D: call    KiSaveDebugRegisterState
 * 0000000140733922: cld
 * 0000000140733923: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140733927: ldmxcsr dword ptr gs:180h
 * 0000000140733930: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140733934: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140733938: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073393C: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140733940: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140733944: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140733948: test    [rbp+0E8h+arg_0], 1
 * 000000014073394F: jz      short KiDebugTrapOrFaultDispatchTrap
 * 0000000140733951: mov     r10, gs:188h
 * 000000014073395A: test    byte ptr [r10+3], 80h
 * 000000014073395F: jz      short KiDebugTrapOrFaultDispatchTrap
 * 0000000140733961: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140733966: mov     [rbp+0E8h+var_13D], 1
 * 000000014073396A: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140733971: jz      short loc_140733994
 * 0000000140733973: test    [rbp+0E8h+arg_0], 1
 * 000000014073397A: jnz     short loc_140733991
 * 000000014073397C: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140733983: jz      short loc_140733994
 * 0000000140733985: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073398F: jz      short loc_140733994
 * 0000000140733991: stac
 * 0000000140733994: test    [rbp+0E8h+arg_8], 200h
 * 000000014073399E: jz      short loc_1407339A1
 * 00000001407339A0: sti
 * 00000001407339A1: test    cs:KiCpuTracingFlags, 2
 * 00000001407339AB: jz      short loc_1407339C0
 * 00000001407339AD: mov     ecx, 1D9h
 * 00000001407339B2: rdmsr
 * 00000001407339B4: or      eax, 1
 * 00000001407339B7: wrmsr
 * 00000001407339B9: xor     edx, edx
 * 00000001407339BB: jmp     loc_140733A8F
 * 00000001407339C0: xor     edx, edx
 * 00000001407339C2: test    [rbp+0E8h+arg_8], 100h
 * 00000001407339CC: jz      loc_140733A8F
 * 00000001407339D2: test    byte ptr gs:9162h, 2
 * 00000001407339DB: jz      loc_140733A8F
 * 00000001407339E1: test    [rbp+0E8h+arg_0], 1
 * 00000001407339E8: jnz     short loc_140733A41
 * 00000001407339EA: mov     rax, dr7
 * 00000001407339ED: test    ax, 200h
 * 00000001407339F1: jz      loc_140733A8F
 * 00000001407339F7: test    ax, 100h
 * 00000001407339FB: jz      loc_140733A8F
 * 0000000140733A01: mov     r8d, cs:KiLastBranchTOSMSR
 * 0000000140733A08: or      r8d, r8d
 * 0000000140733A0B: jz      short loc_140733A15
 * 0000000140733A0D: mov     ecx, r8d
 * 0000000140733A10: rdmsr
 * 0000000140733A12: mov     r8d, eax
 * 0000000140733A15: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 0000000140733A1B: add     ecx, r8d
 * 0000000140733A1E: rdmsr
 * 0000000140733A20: mov     r9d, eax
 * 0000000140733A23: shl     rdx, 20h
 * 0000000140733A27: mov     ecx, cs:KiLastBranchToBaseMSR
 * 0000000140733A2D: or      r9, rdx
 * 0000000140733A30: add     ecx, r8d
 * 0000000140733A33: rdmsr
 * 0000000140733A35: mov     r10d, eax
 * 0000000140733A38: shl     rdx, 20h
 * 0000000140733A3C: or      r10, rdx
 * 0000000140733A3F: jmp     short loc_140733A8A
 * 0000000140733A41: test    [rbp+0E8h+var_68], 200h
 * 0000000140733A4A: jz      short loc_140733A8F
 * 0000000140733A4C: test    [rbp+0E8h+var_68], 100h
 * 0000000140733A55: jz      short loc_140733A8F
 * 0000000140733A57: and     [rbp+0E8h+var_40], 0
 * 0000000140733A5F: and     [rbp+0E8h+var_48], 0
 * 0000000140733A67: mov     rcx, cs:MmUserProbeAddress
 * 0000000140733A6E: mov     r9, [rbp+0E8h+var_50]
 * 0000000140733A75: cmp     r9, rcx
 * 0000000140733A78: cmovnb  r9, rcx
 * 0000000140733A7C: mov     r10, [rbp+0E8h+var_58]
 * 0000000140733A83: cmp     r10, rcx
 * 0000000140733A86: cmovnb  r10, rcx
 * 0000000140733A8A: mov     edx, 2
 * 0000000140733A8F: mov     ecx, 80000004h
 * 0000000140733A94: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 0000000140733A9E: mov     r8, [rbp+0E8h]
 * 0000000140733AA5: call    KiExceptionDispatch
 * 0000000140733AAA: nop
 * 0000000140733AAB: retn
 */
