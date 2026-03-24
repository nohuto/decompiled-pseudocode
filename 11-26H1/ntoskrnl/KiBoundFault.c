/*
 * XREFs of KiBoundFault @ 0x1407347C0
 * Callers:
 *     KiBoundFaultShadow @ 0x140C593C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiHandleBound @ 0x1405E5140 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x1407347C0 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x14073C4C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x1407347C0
 * Reason: Hex-Rays returned no pseudocode for 0x1407347C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407347C0: sub     rsp, 8
 * 00000001407347C4: push    rbp
 * 00000001407347C5: sub     rsp, 158h
 * 00000001407347CC: lea     rbp, [rsp+80h]
 * 00000001407347D4: mov     [rbp+0E8h+var_138], rax
 * 00000001407347D8: mov     [rbp+0E8h+var_130], rcx
 * 00000001407347DC: mov     [rbp+0E8h+var_128], rdx
 * 00000001407347E0: mov     [rbp+0E8h+var_120], r8
 * 00000001407347E4: mov     [rbp+0E8h+var_118], r9
 * 00000001407347E8: mov     [rbp+0E8h+var_110], r10
 * 00000001407347EC: mov     [rbp+0E8h+var_108], r11
 * 00000001407347F0: test    [rbp+0E8h+arg_0], 1
 * 00000001407347F7: jnz     short loc_140734831
 * 00000001407347F9: xor     edx, edx
 * 00000001407347FB: rdsspq  rdx
 * 0000000140734800: mov     [rbp+0E8h+var_90], rdx
 * 0000000140734804: lfence
 * 0000000140734807: test    byte ptr gs:898h, 1
 * 0000000140734810: jnz     short loc_14073481A
 * 0000000140734812: lfence
 * 0000000140734815: jmp     loc_140734AA2
 * 000000014073481A: movzx   eax, word ptr gs:8A6h
 * 0000000140734823: mov     ecx, 48h ; 'H'
 * 0000000140734828: xor     edx, edx
 * 000000014073482A: wrmsr
 * 000000014073482C: jmp     loc_140734AA2
 * 0000000140734831: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140734838: jnz     short loc_14073483D
 * 000000014073483A: swapgs
 * 000000014073483D: lfence
 * 0000000140734840: mov     rcx, gs:9D68h
 * 0000000140734849: test    rcx, rcx
 * 000000014073484C: jz      short loc_14073486D
 * 000000014073484E: rdsspq  rdx
 * 0000000140734853: mov     r10, gs:9D60h
 * 000000014073485C: add     r10, 8
 * 0000000140734860: cmp     rdx, r10
 * 0000000140734863: jnz     short loc_14073486D
 * 0000000140734865: rstorssp qword ptr [rcx]
 * 0000000140734869: saveprevssp
 * 000000014073486D: mov     r10, gs:188h
 * 0000000140734876: mov     rcx, gs:188h
 * 000000014073487F: mov     rcx, [rcx+220h]
 * 0000000140734886: mov     rcx, [rcx+760h]
 * 000000014073488D: mov     gs:890h, rcx
 * 0000000140734896: mov     cx, gs:8A2h
 * 000000014073489F: mov     gs:8A4h, cx
 * 00000001407348A8: mov     cl, gs:898h
 * 00000001407348B0: mov     gs:89Ah, cl
 * 00000001407348B8: movzx   eax, word ptr gs:8A8h
 * 00000001407348C1: cmp     gs:8A6h, ax
 * 00000001407348CA: jz      short loc_1407348DE
 * 00000001407348CC: mov     gs:8A6h, ax
 * 00000001407348D5: mov     ecx, 48h ; 'H'
 * 00000001407348DA: xor     edx, edx
 * 00000001407348DC: wrmsr
 * 00000001407348DE: movzx   edx, byte ptr gs:898h
 * 00000001407348E7: test    edx, 8
 * 00000001407348ED: jz      short loc_140734906
 * 00000001407348EF: mov     eax, 1
 * 00000001407348F4: xor     edx, edx
 * 00000001407348F6: mov     ecx, 49h ; 'I'
 * 00000001407348FB: wrmsr
 * 00000001407348FD: movzx   edx, byte ptr gs:898h
 * 0000000140734906: test    edx, 2
 * 000000014073490C: jz      loc_140734A49
 * 0000000140734912: call    loc_140734A25
 * 0000000140734917: add     rsp, 8
 * 000000014073491B: call    loc_140734A2E
 * 0000000140734920: add     rsp, 8
 * 0000000140734924: call    loc_140734917
 * 0000000140734929: add     rsp, 8
 * 000000014073492D: call    loc_140734920
 * 0000000140734932: add     rsp, 8
 * 0000000140734936: call    loc_140734929
 * 000000014073493B: add     rsp, 8
 * 000000014073493F: call    loc_140734932
 * 0000000140734944: add     rsp, 8
 * 0000000140734948: call    loc_14073493B
 * 000000014073494D: add     rsp, 8
 * 0000000140734951: call    loc_140734944
 * 0000000140734956: add     rsp, 8
 * 000000014073495A: call    loc_14073494D
 * 000000014073495F: add     rsp, 8
 * 0000000140734963: call    loc_140734956
 * 0000000140734968: add     rsp, 8
 * 000000014073496C: call    loc_14073495F
 * 0000000140734971: add     rsp, 8
 * 0000000140734975: call    loc_140734968
 * 000000014073497A: add     rsp, 8
 * 000000014073497E: call    loc_140734971
 * 0000000140734983: add     rsp, 8
 * 0000000140734987: call    loc_14073497A
 * 000000014073498C: add     rsp, 8
 * 0000000140734990: call    loc_140734983
 * 0000000140734995: add     rsp, 8
 * 0000000140734999: call    loc_14073498C
 * 000000014073499E: add     rsp, 8
 * 00000001407349A2: call    loc_140734995
 * 00000001407349A7: add     rsp, 8
 * 00000001407349AB: call    loc_14073499E
 * 00000001407349B0: add     rsp, 8
 * 00000001407349B4: call    loc_1407349A7
 * 00000001407349B9: add     rsp, 8
 * 00000001407349BD: call    loc_1407349B0
 * 00000001407349C2: add     rsp, 8
 * 00000001407349C6: call    loc_1407349B9
 * 00000001407349CB: add     rsp, 8
 * 00000001407349CF: call    loc_1407349C2
 * 00000001407349D4: add     rsp, 8
 * 00000001407349D8: call    loc_1407349CB
 * 00000001407349DD: add     rsp, 8
 * 00000001407349E1: call    loc_1407349D4
 * 00000001407349E6: add     rsp, 8
 * 00000001407349EA: call    loc_1407349DD
 * 00000001407349EF: add     rsp, 8
 * 00000001407349F3: call    loc_1407349E6
 * 00000001407349F8: add     rsp, 8
 * 00000001407349FC: call    loc_1407349EF
 * 0000000140734A01: add     rsp, 8
 * 0000000140734A05: call    loc_1407349F8
 * 0000000140734A0A: add     rsp, 8
 * 0000000140734A0E: call    loc_140734A01
 * 0000000140734A13: add     rsp, 8
 * 0000000140734A17: call    loc_140734A0A
 * 0000000140734A1C: add     rsp, 8
 * 0000000140734A20: call    loc_140734A13
 * 0000000140734A25: add     rsp, 8
 * 0000000140734A29: call    loc_140734A1C
 * 0000000140734A2E: add     rsp, 8
 * 0000000140734A32: mov     eax, 0DADAh
 * 0000000140734A37: test    byte ptr gs:89Ch, 8
 * 0000000140734A40: jz      short loc_140734A49
 * 0000000140734A42: mov     al, 20h ; ' '
 * 0000000140734A44: incsspq rax
 * 0000000140734A49: test    edx, 80h
 * 0000000140734A4F: jz      short loc_140734A59
 * 0000000140734A51: lfence
 * 0000000140734A54: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140734A59: lfence
 * 0000000140734A5C: mov     byte ptr gs:89Eh, 0
 * 0000000140734A65: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140734A6C: jz      short loc_140734A8D
 * 0000000140734A6E: mov     ecx, 6A7h
 * 0000000140734A73: rdmsr
 * 0000000140734A75: cmp     edx, 0
 * 0000000140734A78: jz      short loc_140734A8D
 * 0000000140734A7A: mov     ecx, edx
 * 0000000140734A7C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140734A82: cmp     edx, ecx
 * 0000000140734A84: jz      short loc_140734A8D
 * 0000000140734A86: mov     ecx, 6A7h
 * 0000000140734A8B: wrmsr
 * 0000000140734A8D: test    byte ptr [r10+3], 3
 * 0000000140734A92: mov     [rbp+0E8h+var_68], 0
 * 0000000140734A9B: jz      short loc_140734AA2
 * 0000000140734A9D: call    KiSaveDebugRegisterState
 * 0000000140734AA2: cld
 * 0000000140734AA3: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140734AA7: ldmxcsr dword ptr gs:180h
 * 0000000140734AB0: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140734AB4: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140734AB8: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140734ABC: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140734AC0: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140734AC4: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140734AC8: test    [rbp+0E8h+arg_0], 1
 * 0000000140734ACF: jz      short KiBoundFaultDispatchTrap
 * 0000000140734AD1: mov     r10, gs:188h
 * 0000000140734ADA: test    byte ptr [r10+3], 80h
 * 0000000140734ADF: jz      short KiBoundFaultDispatchTrap
 * 0000000140734AE1: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140734AE6: mov     [rbp+0E8h+var_13D], 1
 * 0000000140734AEA: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140734AF1: jz      short loc_140734B14
 * 0000000140734AF3: test    [rbp+0E8h+arg_0], 1
 * 0000000140734AFA: jnz     short loc_140734B11
 * 0000000140734AFC: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140734B03: jz      short loc_140734B14
 * 0000000140734B05: test    [rbp+0E8h+arg_8], 40000h
 * 0000000140734B0F: jz      short loc_140734B14
 * 0000000140734B11: stac
 * 0000000140734B14: test    [rbp+0E8h+arg_8], 200h
 * 0000000140734B1E: jz      short loc_140734B21
 * 0000000140734B20: sti
 * 0000000140734B21: test    [rbp+0E8h+arg_0], 1
 * 0000000140734B28: jz      short loc_140734B6B
 * 0000000140734B2A: call    KiHandleBound
 * 0000000140734B2F: cmp     eax, 0
 * 0000000140734B32: jz      short loc_140734B6B
 * 0000000140734B34: cmp     eax, 1
 * 0000000140734B37: jz      short loc_140734B7F
 * 0000000140734B39: cmp     eax, 2
 * 0000000140734B3C: jz      short loc_140734B4D
 * 0000000140734B3E: mov     edx, 5
 * 0000000140734B43: mov     ecx, 7Fh
 * 0000000140734B48: call    KiBugCheckDispatch
 * 0000000140734B4D: mov     r9, 1Ch
 * 0000000140734B54: mov     ecx, 0C0000409h
 * 0000000140734B59: mov     edx, 1
 * 0000000140734B5E: mov     r8, [rbp+0E8h]
 * 0000000140734B65: call    KiFastFailDispatch
 * 0000000140734B6A: nop
 * 0000000140734B6B: mov     ecx, 0C000008Ch
 * 0000000140734B70: xor     edx, edx
 * 0000000140734B72: mov     r8, [rbp+0E8h]
 * 0000000140734B79: call    KiExceptionDispatch
 * 0000000140734B7E: nop
 * 0000000140734B7F: cli
 * 0000000140734B80: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140734B87: jz      short loc_140734B8E
 * 0000000140734B89: add     rsp, 28h
 * 0000000140734B8D: retn
 * 0000000140734B8E: test    [rbp+0E8h+arg_0], 1
 * 0000000140734B95: jz      loc_140734E96
 * 0000000140734B9B: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140734BA2: jz      short loc_140734BA7
 * 0000000140734BA4: stac
 * 0000000140734BA7: mov     rcx, gs:188h
 * 0000000140734BB0: test    byte ptr [rcx+0C2h], 3
 * 0000000140734BB7: jz      short loc_140734BD4
 * 0000000140734BB9: mov     ecx, 1
 * 0000000140734BBE: mov     cr8, rcx
 * 0000000140734BC2: sti
 * 0000000140734BC3: call    KiInitiateUserApc
 * 0000000140734BC8: cli
 * 0000000140734BC9: mov     ecx, 0
 * 0000000140734BCE: mov     cr8, rcx
 * 0000000140734BD2: jmp     short loc_140734BA7
 * 0000000140734BD4: test    byte ptr [rcx+3], 80h
 * 0000000140734BD8: jz      short loc_140734BE7
 * 0000000140734BDA: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140734BDF: test    eax, eax
 * 0000000140734BE1: mov     rax, [rbp+0E8h+var_138]
 * 0000000140734BE5: jnz     short loc_140734BA7
 * 0000000140734BE7: test    byte ptr gs:8A0h, 2
 * 0000000140734BF0: jz      short loc_140734BF9
 * 0000000140734BF2: xor     ecx, ecx
 * 0000000140734BF4: call    KiUpdateStibpPairing
 * 0000000140734BF9: mov     rcx, gs:188h
 * 0000000140734C02: test    dword ptr [rcx], 8000000h
 * 0000000140734C08: jz      short loc_140734C0F
 * 0000000140734C0A: call    KiRestoreSetContextState
 * 0000000140734C0F: mov     rcx, gs:188h
 * 0000000140734C18: test    dword ptr [rcx], 10000h
 * 0000000140734C1E: jz      short loc_140734C34
 * 0000000140734C20: test    byte ptr [rcx+2], 1
 * 0000000140734C24: jz      short loc_140734C34
 * 0000000140734C26: call    KiCopyCounters
 * 0000000140734C2B: mov     rcx, gs:188h
 * 0000000140734C34: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140734C38: cmp     [rbp+0E8h+var_68], 0
 * 0000000140734C40: jz      short loc_140734C47
 * 0000000140734C42: call    KiRestoreDebugRegisterState
 * 0000000140734C47: mov     rcx, gs:188h
 * 0000000140734C50: bt      dword ptr [rcx+74h], 16h
 * 0000000140734C55: jnb     short loc_140734C81
 * 0000000140734C57: xor     ecx, ecx
 * 0000000140734C59: rdsspq  rcx
 * 0000000140734C5E: mov     r8, gs:9D68h
 * 0000000140734C67: add     r8, 8
 * 0000000140734C6B: cmp     rcx, r8
 * 0000000140734C6E: jnz     short loc_140734C81
 * 0000000140734C70: mov     rcx, gs:9D60h
 * 0000000140734C79: rstorssp qword ptr [rcx]
 * 0000000140734C7D: saveprevssp
 * 0000000140734C81: mov     byte ptr gs:89Eh, 0
 * 0000000140734C8A: movzx   eax, word ptr gs:8ACh
 * 0000000140734C93: cmp     gs:8A6h, ax
 * 0000000140734C9C: jz      short loc_140734CB0
 * 0000000140734C9E: mov     gs:8A6h, ax
 * 0000000140734CA7: mov     ecx, 48h ; 'H'
 * 0000000140734CAC: xor     edx, edx
 * 0000000140734CAE: wrmsr
 * 0000000140734CB0: btr     word ptr gs:898h, 2
 * 0000000140734CBB: jnb     short loc_140734CCB
 * 0000000140734CBD: mov     eax, 1
 * 0000000140734CC2: xor     edx, edx
 * 0000000140734CC4: mov     ecx, 49h ; 'I'
 * 0000000140734CC9: wrmsr
 * 0000000140734CCB: btr     word ptr gs:898h, 5
 * 0000000140734CD6: jnb     loc_140734E13
 * 0000000140734CDC: call    loc_140734DEF
 * 0000000140734CE1: add     rsp, 8
 * 0000000140734CE5: call    loc_140734DF8
 * 0000000140734CEA: add     rsp, 8
 * 0000000140734CEE: call    loc_140734CE1
 * 0000000140734CF3: add     rsp, 8
 * 0000000140734CF7: call    loc_140734CEA
 * 0000000140734CFC: add     rsp, 8
 * 0000000140734D00: call    loc_140734CF3
 * 0000000140734D05: add     rsp, 8
 * 0000000140734D09: call    loc_140734CFC
 * 0000000140734D0E: add     rsp, 8
 * 0000000140734D12: call    loc_140734D05
 * 0000000140734D17: add     rsp, 8
 * 0000000140734D1B: call    loc_140734D0E
 * 0000000140734D20: add     rsp, 8
 * 0000000140734D24: call    loc_140734D17
 * 0000000140734D29: add     rsp, 8
 * 0000000140734D2D: call    loc_140734D20
 * 0000000140734D32: add     rsp, 8
 * 0000000140734D36: call    loc_140734D29
 * 0000000140734D3B: add     rsp, 8
 * 0000000140734D3F: call    loc_140734D32
 * 0000000140734D44: add     rsp, 8
 * 0000000140734D48: call    loc_140734D3B
 * 0000000140734D4D: add     rsp, 8
 * 0000000140734D51: call    loc_140734D44
 * 0000000140734D56: add     rsp, 8
 * 0000000140734D5A: call    loc_140734D4D
 * 0000000140734D5F: add     rsp, 8
 * 0000000140734D63: call    loc_140734D56
 * 0000000140734D68: add     rsp, 8
 * 0000000140734D6C: call    loc_140734D5F
 * 0000000140734D71: add     rsp, 8
 * 0000000140734D75: call    loc_140734D68
 * 0000000140734D7A: add     rsp, 8
 * 0000000140734D7E: call    loc_140734D71
 * 0000000140734D83: add     rsp, 8
 * 0000000140734D87: call    loc_140734D7A
 * 0000000140734D8C: add     rsp, 8
 * 0000000140734D90: call    loc_140734D83
 * 0000000140734D95: add     rsp, 8
 * 0000000140734D99: call    loc_140734D8C
 * 0000000140734D9E: add     rsp, 8
 * 0000000140734DA2: call    loc_140734D95
 * 0000000140734DA7: add     rsp, 8
 * 0000000140734DAB: call    loc_140734D9E
 * 0000000140734DB0: add     rsp, 8
 * 0000000140734DB4: call    loc_140734DA7
 * 0000000140734DB9: add     rsp, 8
 * 0000000140734DBD: call    loc_140734DB0
 * 0000000140734DC2: add     rsp, 8
 * 0000000140734DC6: call    loc_140734DB9
 * 0000000140734DCB: add     rsp, 8
 * 0000000140734DCF: call    loc_140734DC2
 * 0000000140734DD4: add     rsp, 8
 * 0000000140734DD8: call    loc_140734DCB
 * 0000000140734DDD: add     rsp, 8
 * 0000000140734DE1: call    loc_140734DD4
 * 0000000140734DE6: add     rsp, 8
 * 0000000140734DEA: call    loc_140734DDD
 * 0000000140734DEF: add     rsp, 8
 * 0000000140734DF3: call    loc_140734DE6
 * 0000000140734DF8: add     rsp, 8
 * 0000000140734DFC: mov     eax, 0DADAh
 * 0000000140734E01: test    byte ptr gs:89Ch, 8
 * 0000000140734E0A: jz      short loc_140734E13
 * 0000000140734E0C: mov     al, 20h ; ' '
 * 0000000140734E0E: incsspq rax
 * 0000000140734E13: test    word ptr gs:898h, 100h
 * 0000000140734E1E: jz      short loc_140734E2C
 * 0000000140734E20: xor     eax, eax
 * 0000000140734E22: xor     edx, edx
 * 0000000140734E24: mov     ecx, 1
 * 0000000140734E29: div     rcx
 * 0000000140734E2C: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140734E30: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140734E34: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140734E38: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140734E3C: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140734E40: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140734E44: mov     r11, [rbp+0E8h+var_108]
 * 0000000140734E48: mov     r10, [rbp+0E8h+var_110]
 * 0000000140734E4C: mov     r9, [rbp+0E8h+var_118]
 * 0000000140734E50: mov     r8, [rbp+0E8h+var_120]
 * 0000000140734E54: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140734E58: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140734E5C: mov     rax, [rbp+0E8h+var_138]
 * 0000000140734E60: mov     rsp, rbp
 * 0000000140734E63: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140734E6A: add     rsp, 0E8h
 * 0000000140734E71: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140734E78: jz      short loc_140734E7F
 * 0000000140734E7A: jmp     KiKernelExit
 * 0000000140734E7F: test    word ptr gs:898h, 200h
 * 0000000140734E8A: jz      short loc_140734E91
 * 0000000140734E8C: verw    [rsp+arg_18]
 * 0000000140734E91: swapgs
 * 0000000140734E94: iretq
 * 0000000140734E96: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140734E9A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140734E9E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140734EA2: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140734EA6: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140734EAA: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140734EAE: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140734EB2: mov     r11, [rbp+0E8h+var_108]
 * 0000000140734EB6: mov     r10, [rbp+0E8h+var_110]
 * 0000000140734EBA: mov     r9, [rbp+0E8h+var_118]
 * 0000000140734EBE: mov     r8, [rbp+0E8h+var_120]
 * 0000000140734EC2: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140734EC6: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140734ECA: mov     rax, [rbp+0E8h+var_138]
 * 0000000140734ECE: mov     rsp, rbp
 * 0000000140734ED1: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140734ED8: add     rsp, 0E8h
 * 0000000140734EDF: iretq
 */
