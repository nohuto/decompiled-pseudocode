/*
 * XREFs of KiSystemCall64 @ 0x14073B680
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     PerfInfoLogSysCallExit @ 0x1404C9BD0 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1404CBC20 (PerfInfoLogSysCallEntry.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140729780 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x14073B680 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x14073C4C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiTrackSystemCallEntry @ 0x1407BB8D0 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x1407BB9F0 (KiTrackSystemCallExit.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     PsSyscallProviderDispatch @ 0x140B43670 (PsSyscallProviderDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x14073B680
 * Reason: Hex-Rays returned no pseudocode for 0x14073B680
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073B680: swapgs
 * 000000014073B683: mov     gs:10h, rsp
 * 000000014073B68C: mov     rsp, gs:1A8h
 * 000000014073B695: push    2Bh ; '+'
 * 000000014073B697: push    qword ptr gs:10h
 * 000000014073B69F: push    r11
 * 000000014073B6A1: push    33h ; '3'
 * 000000014073B6A3: push    rcx
 * 000000014073B6A4: mov     rcx, gs:9D68h
 * 000000014073B6AD: test    rcx, rcx
 * 000000014073B6B0: jz      short loc_14073B6BE
 * 000000014073B6B2: setssbsy
 * 000000014073B6B6: rstorssp qword ptr [rcx]
 * 000000014073B6BA: saveprevssp
 * 000000014073B6BE: mov     rcx, r10
 * 000000014073B6C1: sub     rsp, 8
 * 000000014073B6C5: push    rbp
 * 000000014073B6C6: sub     rsp, 158h
 * 000000014073B6CD: lea     rbp, [rsp+190h+var_110]
 * 000000014073B6D5: mov     [rbp+0C0h], rbx
 * 000000014073B6DC: mov     [rbp+0C8h], rdi
 * 000000014073B6E3: mov     [rbp+0D0h], rsi
 * 000000014073B6EA: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073B6F1: jz      short loc_14073B714
 * 000000014073B6F3: test    byte ptr [rbp+0F0h], 1
 * 000000014073B6FA: jnz     short loc_14073B711
 * 000000014073B6FC: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073B703: jz      short loc_14073B714
 * 000000014073B705: test    dword ptr [rbp+0F8h], 40000h
 * 000000014073B70F: jz      short loc_14073B714
 * 000000014073B711: stac
 * 000000014073B714: mov     [rbp-50h], rax
 * 000000014073B718: mov     [rbp-48h], rcx
 * 000000014073B71C: mov     [rbp-40h], rdx
 * 000000014073B720: mov     rcx, gs:188h
 * 000000014073B729: mov     rcx, [rcx+220h]
 * 000000014073B730: mov     rcx, [rcx+760h]
 * 000000014073B737: mov     gs:890h, rcx
 * 000000014073B740: mov     cx, gs:8A2h
 * 000000014073B749: mov     gs:8A4h, cx
 * 000000014073B752: mov     cl, gs:898h
 * 000000014073B75A: mov     gs:89Ah, cl
 * 000000014073B762: movzx   eax, word ptr gs:8A8h
 * 000000014073B76B: cmp     gs:8A6h, ax
 * 000000014073B774: jz      short loc_14073B788
 * 000000014073B776: mov     gs:8A6h, ax
 * 000000014073B77F: mov     ecx, 48h ; 'H'
 * 000000014073B784: xor     edx, edx
 * 000000014073B786: wrmsr
 * 000000014073B788: movzx   edx, byte ptr gs:898h
 * 000000014073B791: test    edx, 8
 * 000000014073B797: jz      short loc_14073B7B0
 * 000000014073B799: mov     eax, 1
 * 000000014073B79E: xor     edx, edx
 * 000000014073B7A0: mov     ecx, 49h ; 'I'
 * 000000014073B7A5: wrmsr
 * 000000014073B7A7: movzx   edx, byte ptr gs:898h
 * 000000014073B7B0: test    edx, 2
 * 000000014073B7B6: jz      loc_14073B8F3
 * 000000014073B7BC: call    loc_14073B8CF
 * 000000014073B7C1: add     rsp, 8
 * 000000014073B7C5: call    loc_14073B8D8
 * 000000014073B7CA: add     rsp, 8
 * 000000014073B7CE: call    loc_14073B7C1
 * 000000014073B7D3: add     rsp, 8
 * 000000014073B7D7: call    loc_14073B7CA
 * 000000014073B7DC: add     rsp, 8
 * 000000014073B7E0: call    loc_14073B7D3
 * 000000014073B7E5: add     rsp, 8
 * 000000014073B7E9: call    loc_14073B7DC
 * 000000014073B7EE: add     rsp, 8
 * 000000014073B7F2: call    loc_14073B7E5
 * 000000014073B7F7: add     rsp, 8
 * 000000014073B7FB: call    loc_14073B7EE
 * 000000014073B800: add     rsp, 8
 * 000000014073B804: call    loc_14073B7F7
 * 000000014073B809: add     rsp, 8
 * 000000014073B80D: call    loc_14073B800
 * 000000014073B812: add     rsp, 8
 * 000000014073B816: call    loc_14073B809
 * 000000014073B81B: add     rsp, 8
 * 000000014073B81F: call    loc_14073B812
 * 000000014073B824: add     rsp, 8
 * 000000014073B828: call    loc_14073B81B
 * 000000014073B82D: add     rsp, 8
 * 000000014073B831: call    loc_14073B824
 * 000000014073B836: add     rsp, 8
 * 000000014073B83A: call    loc_14073B82D
 * 000000014073B83F: add     rsp, 8
 * 000000014073B843: call    loc_14073B836
 * 000000014073B848: add     rsp, 8
 * 000000014073B84C: call    loc_14073B83F
 * 000000014073B851: add     rsp, 8
 * 000000014073B855: call    loc_14073B848
 * 000000014073B85A: add     rsp, 8
 * 000000014073B85E: call    loc_14073B851
 * 000000014073B863: add     rsp, 8
 * 000000014073B867: call    loc_14073B85A
 * 000000014073B86C: add     rsp, 8
 * 000000014073B870: call    loc_14073B863
 * 000000014073B875: add     rsp, 8
 * 000000014073B879: call    loc_14073B86C
 * 000000014073B87E: add     rsp, 8
 * 000000014073B882: call    loc_14073B875
 * 000000014073B887: add     rsp, 8
 * 000000014073B88B: call    loc_14073B87E
 * 000000014073B890: add     rsp, 8
 * 000000014073B894: call    loc_14073B887
 * 000000014073B899: add     rsp, 8
 * 000000014073B89D: call    loc_14073B890
 * 000000014073B8A2: add     rsp, 8
 * 000000014073B8A6: call    loc_14073B899
 * 000000014073B8AB: add     rsp, 8
 * 000000014073B8AF: call    loc_14073B8A2
 * 000000014073B8B4: add     rsp, 8
 * 000000014073B8B8: call    loc_14073B8AB
 * 000000014073B8BD: add     rsp, 8
 * 000000014073B8C1: call    loc_14073B8B4
 * 000000014073B8C6: add     rsp, 8
 * 000000014073B8CA: call    loc_14073B8BD
 * 000000014073B8CF: add     rsp, 8
 * 000000014073B8D3: call    loc_14073B8C6
 * 000000014073B8D8: add     rsp, 8
 * 000000014073B8DC: mov     eax, 0DADAh
 * 000000014073B8E1: test    byte ptr gs:89Ch, 8
 * 000000014073B8EA: jz      short loc_14073B8F3
 * 000000014073B8EC: mov     al, 20h ; ' '
 * 000000014073B8EE: incsspq rax
 * 000000014073B8F3: test    edx, 80h
 * 000000014073B8F9: jz      short loc_14073B903
 * 000000014073B8FB: lfence
 * 000000014073B8FE: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073B903: lfence
 * 000000014073B906: mov     byte ptr gs:89Eh, 0
 * 000000014073B90F: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073B916: jz      short KiSystemServiceUser
 * 000000014073B918: mov     ecx, 6A7h
 * 000000014073B91D: rdmsr
 * 000000014073B91F: cmp     edx, 0
 * 000000014073B922: jz      short KiSystemServiceUser
 * 000000014073B924: mov     ecx, edx
 * 000000014073B926: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073B92C: cmp     edx, ecx
 * 000000014073B92E: jz      short KiSystemServiceUser
 * 000000014073B930: mov     ecx, 6A7h
 * 000000014073B935: wrmsr
 * 000000014073B937: mov     byte ptr [rbp-55h], 2
 * 000000014073B93B: mov     byte ptr [rbp-58h], 1
 * 000000014073B93F: mov     rbx, gs:188h
 * 000000014073B948: mov     byte ptr [rbx+232h], 1
 * 000000014073B94F: prefetchw byte ptr [rbx+90h]
 * 000000014073B956: stmxcsr dword ptr [rbp-54h]
 * 000000014073B95A: ldmxcsr dword ptr gs:180h
 * 000000014073B963: cmp     byte ptr [rbx+3], 0
 * 000000014073B967: mov     word ptr [rbp+80h], 0
 * 000000014073B970: jz      loc_14073BA04
 * 000000014073B976: mov     [rbp-38h], r8
 * 000000014073B97A: mov     [rbp-30h], r9
 * 000000014073B97E: mov     [rbp-20h], r10
 * 000000014073B982: mov     [rbp-28h], r10
 * 000000014073B986: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014073B98A: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014073B98E: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014073B992: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014073B996: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014073B99A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014073B99E: test    byte ptr [rbx+3], 80h
 * 000000014073B9A2: jz      short loc_14073B9A9
 * 000000014073B9A4: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073B9A9: test    byte ptr [rbx+3], 3
 * 000000014073B9AD: jz      short KiSystemServiceDispatch
 * 000000014073B9AF: call    KiSaveDebugRegisterState
 * 000000014073B9B4: test    byte ptr [rbx+3], 24h
 * 000000014073B9B8: jz      short loc_14073B9FC
 * 000000014073B9BA: sti
 * 000000014073B9BB: lea     rax, [rbp-80h]
 * 000000014073B9BF: mov     [rbx+90h], rax
 * 000000014073B9C6: lea     rcx, [rbp-80h]
 * 000000014073B9CA: call    PsSyscallProviderDispatch
 * 000000014073B9CF: cmp     al, 1
 * 000000014073B9D1: jz      short loc_14073B9FC
 * 000000014073B9D3: mov     rax, [rbp-50h]
 * 000000014073B9D7: jl      short loc_14073B9ED
 * 000000014073B9D9: mov     ecx, 0C000001Ch
 * 000000014073B9DE: xor     edx, edx
 * 000000014073B9E0: mov     r8, [rbp+0E8h]
 * 000000014073B9E7: call    KiExceptionDispatch
 * 000000014073B9EC: int     3; Trap to Debugger
 * 000000014073B9ED: test    byte ptr [rbx+3], 4
 * 000000014073B9F1: jz      KiSystemServiceExit
 * 000000014073B9F7: jmp     KiSystemServiceExitPico
 * 000000014073B9FC: mov     r8, [rbp-38h]
 * 000000014073BA00: mov     r9, [rbp-30h]
 * 000000014073BA04: mov     rax, [rbp-50h]
 * 000000014073BA08: mov     rcx, [rbp-48h]
 * 000000014073BA0C: mov     rdx, [rbp-40h]
 * 000000014073BA10: sti
 * 000000014073BA11: mov     [rbx+88h], rcx
 * 000000014073BA18: mov     [rbx+80h], eax
 * 000000014073BA1E: xchg    ax, ax
 * 000000014073BA20: lea     rdi, [rbp-80h]
 * 000000014073BA24: mov     [rbx+90h], rdi
 * 000000014073BA2B: mov     edi, eax
 * 000000014073BA2D: shr     edi, 7
 * 000000014073BA30: and     edi, 20h
 * 000000014073BA33: and     eax, 0FFFh
 * 000000014073BA38: lea     r10, KeServiceDescriptorTable
 * 000000014073BA3F: lea     r11, stru_140FC01F0.___u33+90h
 * 000000014073BA46: test    dword ptr [rbx+78h], 80h
 * 000000014073BA4D: jz      short loc_14073BA62
 * 000000014073BA4F: test    dword ptr [rbx+78h], 200000h
 * 000000014073BA56: jz      short loc_14073BA5F
 * 000000014073BA58: lea     r11, stru_140FC01F0.MutantListHead.Blink
 * 000000014073BA5F: mov     r10, r11
 * 000000014073BA62: cmp     eax, [r10+rdi+10h]
 * 000000014073BA67: jnb     loc_14073C32A
 * 000000014073BA6D: mov     r10, [r10+rdi]
 * 000000014073BA71: movsxd  r11, dword ptr [r10+rax*4]
 * 000000014073BA75: mov     rax, r11
 * 000000014073BA78: sar     r11, 4
 * 000000014073BA7C: add     r10, r11
 * 000000014073BA7F: cmp     edi, 20h ; ' '
 * 000000014073BA82: jnz     short loc_14073BAE0
 * 000000014073BA84: mov     r11, [rbx+0F0h]
 * 000000014073BA8B: cmp     dword ptr [r11+1740h], 0
 * 000000014073BA93: jz      short loc_14073BAE0
 * 000000014073BA95: mov     [rbp-50h], rax
 * 000000014073BA99: mov     [rbp-48h], rcx
 * 000000014073BA9D: mov     [rbp-40h], rdx
 * 000000014073BAA1: mov     rbx, r8
 * 000000014073BAA4: mov     rdi, r9
 * 000000014073BAA7: mov     rsi, r10
 * 000000014073BAAA: mov     ecx, 7
 * 000000014073BAAF: xor     edx, edx
 * 000000014073BAB1: xor     r8, r8
 * 000000014073BAB4: xor     r9, r9
 * 000000014073BAB7: call    PsInvokeWin32Callout
 * 000000014073BABC: mov     rax, [rbp-50h]
 * 000000014073BAC0: mov     rcx, [rbp-48h]
 * 000000014073BAC4: mov     rdx, [rbp-40h]
 * 000000014073BAC8: mov     r8, rbx
 * 000000014073BACB: mov     r9, rdi
 * 000000014073BACE: mov     r10, rsi
 * 000000014073BAD1: nop     word ptr [rax+rax+00000000h]
 * 000000014073BAE0: and     eax, 0Fh
 * 000000014073BAE3: jz      KiSystemServiceCopyEnd
 * 000000014073BAE9: shl     eax, 3
 * 000000014073BAEC: lea     rsp, [rsp-70h]
 * 000000014073BAF1: lea     rdi, [rsp+100h+var_E8]
 * 000000014073BAF6: mov     rsi, [rbp+100h]
 * 000000014073BAFD: lea     rsi, [rsi+20h]
 * 000000014073BB01: test    byte ptr [rbp+0F0h], 1
 * 000000014073BB08: jz      short loc_14073BB20
 * 000000014073BB0A: cmp     rsi, cs:MmUserProbeAddress
 * 000000014073BB11: cmovnb  rsi, cs:MmUserProbeAddress
 * 000000014073BB19: nop     dword ptr [rax+00000000h]
 * 000000014073BB20: lea     r11, KiSystemServiceCopyEnd
 * 000000014073BB27: sub     r11, rax
 * 000000014073BB2A: jmp     r11
 * 000000014073BB30: mov     rax, [rsi+70h]
 * 000000014073BB34: mov     [rdi+70h], rax
 * 000000014073BB38: mov     rax, [rsi+68h]
 * 000000014073BB3C: mov     [rdi+68h], rax
 * 000000014073BB40: mov     rax, [rsi+60h]
 * 000000014073BB44: mov     [rdi+60h], rax
 * 000000014073BB48: mov     rax, [rsi+58h]
 * 000000014073BB4C: mov     [rdi+58h], rax
 * 000000014073BB50: mov     rax, [rsi+50h]
 * 000000014073BB54: mov     [rdi+50h], rax
 * 000000014073BB58: mov     rax, [rsi+48h]
 * 000000014073BB5C: mov     [rdi+48h], rax
 * 000000014073BB60: mov     rax, [rsi+40h]
 * 000000014073BB64: mov     [rdi+40h], rax
 * 000000014073BB68: mov     rax, [rsi+38h]
 * 000000014073BB6C: mov     [rdi+38h], rax
 * 000000014073BB70: mov     rax, [rsi+30h]
 * 000000014073BB74: mov     [rdi+30h], rax
 * 000000014073BB78: mov     rax, [rsi+28h]
 * 000000014073BB7C: mov     [rdi+28h], rax
 * 000000014073BB80: mov     rax, [rsi+20h]
 * 000000014073BB84: mov     [rdi+20h], rax
 * 000000014073BB88: mov     rax, [rsi+18h]
 * 000000014073BB8C: mov     [rdi+18h], rax
 * 000000014073BB90: mov     rax, [rsi+10h]
 * 000000014073BB94: mov     [rdi+10h], rax
 * 000000014073BB98: mov     rax, [rsi+8]
 * 000000014073BB9C: mov     [rdi+8], rax
 * 000000014073BBA0: test    cs:KiDynamicTraceMask, 1
 * 000000014073BBAA: jnz     loc_14073C3ED
 * 000000014073BBB0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 000000014073BBBA: jnz     loc_14073C461
 * 000000014073BBC0: mov     rax, r10
 * 000000014073BBC3: call    rax
 * 000000014073BBC5: nop     dword ptr [rax]
 * 000000014073BBC8: inc     dword ptr gs:2EB8h
 * 000000014073BBD0: mov     rbx, [rbp+0C0h]
 * 000000014073BBD7: mov     rdi, [rbp+0C8h]
 * 000000014073BBDE: mov     rsi, [rbp+0D0h]
 * 000000014073BBE5: mov     r11, gs:188h
 * 000000014073BBEE: test    byte ptr [rbp+0F0h], 1
 * 000000014073BBF5: jz      loc_14073BFD3
 * 000000014073BBFB: mov     rcx, cr8
 * 000000014073BBFF: or      cl, [r11+24Ah]
 * 000000014073BC06: or      ecx, [r11+1E4h]
 * 000000014073BC0D: jnz     loc_14073C398
 * 000000014073BC13: cmp     byte ptr [r11+232h], 1
 * 000000014073BC1B: jnz     loc_14073C3CD
 * 000000014073BC21: cli
 * 000000014073BC22: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073BC29: jz      short loc_14073BC37
 * 000000014073BC2B: mov     [rbp-50h], rax
 * 000000014073BC2F: lea     rsp, [rbp-88h]
 * 000000014073BC36: retn
 * 000000014073BC37: mov     rcx, gs:188h
 * 000000014073BC40: test    byte ptr [rcx+0C2h], 3
 * 000000014073BC47: jz      short loc_14073BC6C
 * 000000014073BC49: mov     [rbp-50h], rax
 * 000000014073BC4D: mov     ecx, 1
 * 000000014073BC52: mov     cr8, rcx
 * 000000014073BC56: sti
 * 000000014073BC57: call    KiInitiateUserApc
 * 000000014073BC5C: cli
 * 000000014073BC5D: mov     ecx, 0
 * 000000014073BC62: mov     cr8, rcx
 * 000000014073BC66: mov     rax, [rbp-50h]
 * 000000014073BC6A: jmp     short loc_14073BC37
 * 000000014073BC6C: test    byte ptr [rcx+3], 80h
 * 000000014073BC70: jz      short loc_14073BC83
 * 000000014073BC72: mov     [rbp-50h], rax
 * 000000014073BC76: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014073BC7B: test    eax, eax
 * 000000014073BC7D: mov     rax, [rbp-50h]
 * 000000014073BC81: jnz     short loc_14073BC37
 * 000000014073BC83: test    byte ptr gs:8A0h, 2
 * 000000014073BC8C: jz      short loc_14073BC9D
 * 000000014073BC8E: mov     [rbp-50h], rax
 * 000000014073BC92: xor     ecx, ecx
 * 000000014073BC94: call    KiUpdateStibpPairing
 * 000000014073BC99: mov     rax, [rbp-50h]
 * 000000014073BC9D: mov     rcx, gs:188h
 * 000000014073BCA6: test    dword ptr [rcx], 8000000h
 * 000000014073BCAC: jz      short loc_14073BCED
 * 000000014073BCAE: mov     [rbp-50h], rax
 * 000000014073BCB2: xor     eax, eax
 * 000000014073BCB4: mov     [rbp-48h], rax
 * 000000014073BCB8: mov     [rbp-40h], rax
 * 000000014073BCBC: mov     [rbp-38h], rax
 * 000000014073BCC0: mov     [rbp-30h], rax
 * 000000014073BCC4: mov     [rbp-28h], rax
 * 000000014073BCC8: mov     [rbp-20h], rax
 * 000000014073BCCC: pxor    xmm0, xmm0
 * 000000014073BCD0: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014073BCD4: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014073BCD8: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014073BCDC: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014073BCE0: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014073BCE4: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014073BCE8: call    KiRestoreSetContextState
 * 000000014073BCED: mov     rcx, gs:188h
 * 000000014073BCF6: test    dword ptr [rcx], 10000h
 * 000000014073BCFC: jz      short loc_14073BD1A
 * 000000014073BCFE: mov     [rbp-50h], rax
 * 000000014073BD02: test    byte ptr [rcx+2], 1
 * 000000014073BD06: jz      short loc_14073BD16
 * 000000014073BD08: call    KiCopyCounters
 * 000000014073BD0D: mov     rcx, gs:188h
 * 000000014073BD16: mov     rax, [rbp-50h]
 * 000000014073BD1A: ldmxcsr dword ptr [rbp-54h]
 * 000000014073BD1E: xor     r10, r10
 * 000000014073BD21: cmp     word ptr [rbp+80h], 0
 * 000000014073BD29: jz      short loc_14073BD6C
 * 000000014073BD2B: mov     [rbp-50h], rax
 * 000000014073BD2F: call    KiRestoreDebugRegisterState
 * 000000014073BD34: mov     rax, gs:188h
 * 000000014073BD3D: mov     rax, [rax+0B8h]
 * 000000014073BD44: mov     rax, [rax+168h]
 * 000000014073BD4B: or      rax, rax
 * 000000014073BD4E: jz      short loc_14073BD68
 * 000000014073BD50: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 000000014073BD58: jnz     short loc_14073BD68
 * 000000014073BD5A: mov     r10, [rbp+0E8h]
 * 000000014073BD61: mov     [rbp+0E8h], rax
 * 000000014073BD68: mov     rax, [rbp-50h]
 * 000000014073BD6C: mov     rcx, gs:188h
 * 000000014073BD75: bt      dword ptr [rcx+74h], 16h
 * 000000014073BD7A: jnb     short loc_14073BDA6
 * 000000014073BD7C: xor     ecx, ecx
 * 000000014073BD7E: rdsspq  rcx
 * 000000014073BD83: mov     r8, gs:9D68h
 * 000000014073BD8C: add     r8, 8
 * 000000014073BD90: cmp     rcx, r8
 * 000000014073BD93: jnz     short loc_14073BDA6
 * 000000014073BD95: mov     rcx, gs:9D60h
 * 000000014073BD9E: rstorssp qword ptr [rcx]
 * 000000014073BDA2: saveprevssp
 * 000000014073BDA6: mov     [rbp-50h], rax
 * 000000014073BDAA: mov     byte ptr gs:89Eh, 0
 * 000000014073BDB3: movzx   eax, word ptr gs:8ACh
 * 000000014073BDBC: cmp     gs:8A6h, ax
 * 000000014073BDC5: jz      short loc_14073BDD9
 * 000000014073BDC7: mov     gs:8A6h, ax
 * 000000014073BDD0: mov     ecx, 48h ; 'H'
 * 000000014073BDD5: xor     edx, edx
 * 000000014073BDD7: wrmsr
 * 000000014073BDD9: btr     word ptr gs:898h, 2
 * 000000014073BDE4: jnb     short loc_14073BDF4
 * 000000014073BDE6: mov     eax, 1
 * 000000014073BDEB: xor     edx, edx
 * 000000014073BDED: mov     ecx, 49h ; 'I'
 * 000000014073BDF2: wrmsr
 * 000000014073BDF4: btr     word ptr gs:898h, 5
 * 000000014073BDFF: jnb     loc_14073BF3C
 * 000000014073BE05: call    loc_14073BF18
 * 000000014073BE0A: add     rsp, 8
 * 000000014073BE0E: call    loc_14073BF21
 * 000000014073BE13: add     rsp, 8
 * 000000014073BE17: call    loc_14073BE0A
 * 000000014073BE1C: add     rsp, 8
 * 000000014073BE20: call    loc_14073BE13
 * 000000014073BE25: add     rsp, 8
 * 000000014073BE29: call    loc_14073BE1C
 * 000000014073BE2E: add     rsp, 8
 * 000000014073BE32: call    loc_14073BE25
 * 000000014073BE37: add     rsp, 8
 * 000000014073BE3B: call    loc_14073BE2E
 * 000000014073BE40: add     rsp, 8
 * 000000014073BE44: call    loc_14073BE37
 * 000000014073BE49: add     rsp, 8
 * 000000014073BE4D: call    loc_14073BE40
 * 000000014073BE52: add     rsp, 8
 * 000000014073BE56: call    loc_14073BE49
 * 000000014073BE5B: add     rsp, 8
 * 000000014073BE5F: call    loc_14073BE52
 * 000000014073BE64: add     rsp, 8
 * 000000014073BE68: call    loc_14073BE5B
 * 000000014073BE6D: add     rsp, 8
 * 000000014073BE71: call    loc_14073BE64
 * 000000014073BE76: add     rsp, 8
 * 000000014073BE7A: call    loc_14073BE6D
 * 000000014073BE7F: add     rsp, 8
 * 000000014073BE83: call    loc_14073BE76
 * 000000014073BE88: add     rsp, 8
 * 000000014073BE8C: call    loc_14073BE7F
 * 000000014073BE91: add     rsp, 8
 * 000000014073BE95: call    loc_14073BE88
 * 000000014073BE9A: add     rsp, 8
 * 000000014073BE9E: call    loc_14073BE91
 * 000000014073BEA3: add     rsp, 8
 * 000000014073BEA7: call    loc_14073BE9A
 * 000000014073BEAC: add     rsp, 8
 * 000000014073BEB0: call    loc_14073BEA3
 * 000000014073BEB5: add     rsp, 8
 * 000000014073BEB9: call    loc_14073BEAC
 * 000000014073BEBE: add     rsp, 8
 * 000000014073BEC2: call    loc_14073BEB5
 * 000000014073BEC7: add     rsp, 8
 * 000000014073BECB: call    loc_14073BEBE
 * 000000014073BED0: add     rsp, 8
 * 000000014073BED4: call    loc_14073BEC7
 * 000000014073BED9: add     rsp, 8
 * 000000014073BEDD: call    loc_14073BED0
 * 000000014073BEE2: add     rsp, 8
 * 000000014073BEE6: call    loc_14073BED9
 * 000000014073BEEB: add     rsp, 8
 * 000000014073BEEF: call    loc_14073BEE2
 * 000000014073BEF4: add     rsp, 8
 * 000000014073BEF8: call    loc_14073BEEB
 * 000000014073BEFD: add     rsp, 8
 * 000000014073BF01: call    loc_14073BEF4
 * 000000014073BF06: add     rsp, 8
 * 000000014073BF0A: call    loc_14073BEFD
 * 000000014073BF0F: add     rsp, 8
 * 000000014073BF13: call    loc_14073BF06
 * 000000014073BF18: add     rsp, 8
 * 000000014073BF1C: call    loc_14073BF0F
 * 000000014073BF21: add     rsp, 8
 * 000000014073BF25: mov     eax, 0DADAh
 * 000000014073BF2A: test    byte ptr gs:89Ch, 8
 * 000000014073BF33: jz      short loc_14073BF3C
 * 000000014073BF35: mov     al, 20h ; ' '
 * 000000014073BF37: incsspq rax
 * 000000014073BF3C: test    word ptr gs:898h, 100h
 * 000000014073BF47: jz      short loc_14073BF55
 * 000000014073BF49: xor     eax, eax
 * 000000014073BF4B: xor     edx, edx
 * 000000014073BF4D: mov     ecx, 1
 * 000000014073BF52: div     rcx
 * 000000014073BF55: mov     rax, [rbp-50h]
 * 000000014073BF59: mov     r8, [rbp+100h]
 * 000000014073BF60: mov     r9, [rbp+0D8h]
 * 000000014073BF67: xor     edx, edx
 * 000000014073BF69: pxor    xmm0, xmm0
 * 000000014073BF6D: pxor    xmm1, xmm1
 * 000000014073BF71: pxor    xmm2, xmm2
 * 000000014073BF75: pxor    xmm3, xmm3
 * 000000014073BF79: pxor    xmm4, xmm4
 * 000000014073BF7D: pxor    xmm5, xmm5
 * 000000014073BF81: mov     rcx, [rbp+0E8h]
 * 000000014073BF88: mov     r11, [rbp+0F8h]
 * 000000014073BF8F: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073BF96: jnz     KiKernelSysretExit
 * 000000014073BF9C: mov     rbp, r9
 * 000000014073BF9F: mov     rsp, r8
 * 000000014073BFA2: xor     r9, r9
 * 000000014073BFA5: rdsspq  r9
 * 000000014073BFAA: test    r9, r9
 * 000000014073BFAD: jz      short loc_14073BFB7
 * 000000014073BFAF: clrssbsy qword ptr [r9]
 * 000000014073BFB4: xor     r9, r9
 * 000000014073BFB7: test    word ptr gs:898h, 200h
 * 000000014073BFC2: jz      short loc_14073BFCD
 * 000000014073BFC4: verw    word ptr gs:0B02Ah
 * 000000014073BFCD: swapgs
 * 000000014073BFD0: sysret
 * 000000014073BFD3: mov     rdx, [rbp+0B8h]
 * 000000014073BFDA: mov     [r11+90h], rdx
 * 000000014073BFE1: mov     dl, [rbp-58h]
 * 000000014073BFE4: mov     [r11+232h], dl
 * 000000014073BFEB: cli
 * 000000014073BFEC: mov     rsp, rbp
 * 000000014073BFEF: mov     rbp, [rbp+0D8h]
 * 000000014073BFF6: mov     rsp, [rsp+90h+arg_68]
 * 000000014073BFFE: sti
 * 000000014073BFFF: retn
 * 000000014073C000: mov     r11, gs:188h
 * 000000014073C009: mov     rcx, cr8
 * 000000014073C00D: or      cl, [r11+24Ah]
 * 000000014073C014: or      ecx, [r11+1E4h]
 * 000000014073C01B: jnz     loc_14073C398
 * 000000014073C021: cmp     byte ptr [rbx+232h], 1
 * 000000014073C028: jnz     loc_14073C3CD
 * 000000014073C02E: cli
 * 000000014073C02F: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073C036: jz      short loc_14073C03D
 * 000000014073C038: add     rsp, 28h
 * 000000014073C03C: retn
 * 000000014073C03D: mov     [rbp-50h], rax
 * 000000014073C041: mov     rcx, gs:188h
 * 000000014073C04A: test    byte ptr [rcx+0C2h], 3
 * 000000014073C051: jz      short loc_14073C06E
 * 000000014073C053: mov     ecx, 1
 * 000000014073C058: mov     cr8, rcx
 * 000000014073C05C: sti
 * 000000014073C05D: call    KiInitiateUserApc
 * 000000014073C062: cli
 * 000000014073C063: mov     ecx, 0
 * 000000014073C068: mov     cr8, rcx
 * 000000014073C06C: jmp     short loc_14073C041
 * 000000014073C06E: test    byte ptr gs:8A0h, 2
 * 000000014073C077: jz      short loc_14073C080
 * 000000014073C079: xor     ecx, ecx
 * 000000014073C07B: call    KiUpdateStibpPairing
 * 000000014073C080: mov     rcx, gs:188h
 * 000000014073C089: test    dword ptr [rcx], 8000000h
 * 000000014073C08F: jz      short loc_14073C096
 * 000000014073C091: call    KiRestoreSetContextState
 * 000000014073C096: mov     rcx, gs:188h
 * 000000014073C09F: test    byte ptr [rcx+2], 1
 * 000000014073C0A3: jz      short loc_14073C0B3
 * 000000014073C0A5: call    KiCopyCounters
 * 000000014073C0AA: mov     rcx, gs:188h
 * 000000014073C0B3: cmp     word ptr [rbp+80h], 0
 * 000000014073C0BB: jz      short loc_14073C0C2
 * 000000014073C0BD: call    KiRestoreDebugRegisterState
 * 000000014073C0C2: mov     rcx, gs:188h
 * 000000014073C0CB: bt      dword ptr [rcx+74h], 16h
 * 000000014073C0D0: jnb     short loc_14073C0FC
 * 000000014073C0D2: xor     ecx, ecx
 * 000000014073C0D4: rdsspq  rcx
 * 000000014073C0D9: mov     r8, gs:9D68h
 * 000000014073C0E2: add     r8, 8
 * 000000014073C0E6: cmp     rcx, r8
 * 000000014073C0E9: jnz     short loc_14073C0FC
 * 000000014073C0EB: mov     rcx, gs:9D60h
 * 000000014073C0F4: rstorssp qword ptr [rcx]
 * 000000014073C0F8: saveprevssp
 * 000000014073C0FC: mov     byte ptr gs:89Eh, 0
 * 000000014073C105: movzx   eax, word ptr gs:8ACh
 * 000000014073C10E: cmp     gs:8A6h, ax
 * 000000014073C117: jz      short loc_14073C12B
 * 000000014073C119: mov     gs:8A6h, ax
 * 000000014073C122: mov     ecx, 48h ; 'H'
 * 000000014073C127: xor     edx, edx
 * 000000014073C129: wrmsr
 * 000000014073C12B: btr     word ptr gs:898h, 2
 * 000000014073C136: jnb     short loc_14073C146
 * 000000014073C138: mov     eax, 1
 * 000000014073C13D: xor     edx, edx
 * 000000014073C13F: mov     ecx, 49h ; 'I'
 * 000000014073C144: wrmsr
 * 000000014073C146: btr     word ptr gs:898h, 5
 * 000000014073C151: jnb     loc_14073C28E
 * 000000014073C157: call    loc_14073C26A
 * 000000014073C15C: add     rsp, 8
 * 000000014073C160: call    loc_14073C273
 * 000000014073C165: add     rsp, 8
 * 000000014073C169: call    loc_14073C15C
 * 000000014073C16E: add     rsp, 8
 * 000000014073C172: call    loc_14073C165
 * 000000014073C177: add     rsp, 8
 * 000000014073C17B: call    loc_14073C16E
 * 000000014073C180: add     rsp, 8
 * 000000014073C184: call    loc_14073C177
 * 000000014073C189: add     rsp, 8
 * 000000014073C18D: call    loc_14073C180
 * 000000014073C192: add     rsp, 8
 * 000000014073C196: call    loc_14073C189
 * 000000014073C19B: add     rsp, 8
 * 000000014073C19F: call    loc_14073C192
 * 000000014073C1A4: add     rsp, 8
 * 000000014073C1A8: call    loc_14073C19B
 * 000000014073C1AD: add     rsp, 8
 * 000000014073C1B1: call    loc_14073C1A4
 * 000000014073C1B6: add     rsp, 8
 * 000000014073C1BA: call    loc_14073C1AD
 * 000000014073C1BF: add     rsp, 8
 * 000000014073C1C3: call    loc_14073C1B6
 * 000000014073C1C8: add     rsp, 8
 * 000000014073C1CC: call    loc_14073C1BF
 * 000000014073C1D1: add     rsp, 8
 * 000000014073C1D5: call    loc_14073C1C8
 * 000000014073C1DA: add     rsp, 8
 * 000000014073C1DE: call    loc_14073C1D1
 * 000000014073C1E3: add     rsp, 8
 * 000000014073C1E7: call    loc_14073C1DA
 * 000000014073C1EC: add     rsp, 8
 * 000000014073C1F0: call    loc_14073C1E3
 * 000000014073C1F5: add     rsp, 8
 * 000000014073C1F9: call    loc_14073C1EC
 * 000000014073C1FE: add     rsp, 8
 * 000000014073C202: call    loc_14073C1F5
 * 000000014073C207: add     rsp, 8
 * 000000014073C20B: call    loc_14073C1FE
 * 000000014073C210: add     rsp, 8
 * 000000014073C214: call    loc_14073C207
 * 000000014073C219: add     rsp, 8
 * 000000014073C21D: call    loc_14073C210
 * 000000014073C222: add     rsp, 8
 * 000000014073C226: call    loc_14073C219
 * 000000014073C22B: add     rsp, 8
 * 000000014073C22F: call    loc_14073C222
 * 000000014073C234: add     rsp, 8
 * 000000014073C238: call    loc_14073C22B
 * 000000014073C23D: add     rsp, 8
 * 000000014073C241: call    loc_14073C234
 * 000000014073C246: add     rsp, 8
 * 000000014073C24A: call    loc_14073C23D
 * 000000014073C24F: add     rsp, 8
 * 000000014073C253: call    loc_14073C246
 * 000000014073C258: add     rsp, 8
 * 000000014073C25C: call    loc_14073C24F
 * 000000014073C261: add     rsp, 8
 * 000000014073C265: call    loc_14073C258
 * 000000014073C26A: add     rsp, 8
 * 000000014073C26E: call    loc_14073C261
 * 000000014073C273: add     rsp, 8
 * 000000014073C277: mov     eax, 0DADAh
 * 000000014073C27C: test    byte ptr gs:89Ch, 8
 * 000000014073C285: jz      short loc_14073C28E
 * 000000014073C287: mov     al, 20h ; ' '
 * 000000014073C289: incsspq rax
 * 000000014073C28E: test    word ptr gs:898h, 100h
 * 000000014073C299: jz      short loc_14073C2A7
 * 000000014073C29B: xor     eax, eax
 * 000000014073C29D: xor     edx, edx
 * 000000014073C29F: mov     ecx, 1
 * 000000014073C2A4: div     rcx
 * 000000014073C2A7: ldmxcsr dword ptr [rbp-54h]
 * 000000014073C2AB: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014073C2AF: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014073C2B3: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014073C2B7: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014073C2BB: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014073C2BF: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014073C2C3: mov     r11, [rbp-20h]
 * 000000014073C2C7: mov     r10, [rbp-28h]
 * 000000014073C2CB: mov     r9, [rbp-30h]
 * 000000014073C2CF: mov     r8, [rbp-38h]
 * 000000014073C2D3: mov     rdx, [rbp-40h]
 * 000000014073C2D7: mov     rcx, [rbp-48h]
 * 000000014073C2DB: mov     rax, [rbp-50h]
 * 000000014073C2DF: mov     rsi, [rbp+0D0h]
 * 000000014073C2E6: mov     rdi, [rbp+0C8h]
 * 000000014073C2ED: mov     rbx, [rbp+0C0h]
 * 000000014073C2F4: mov     rsp, rbp
 * 000000014073C2F7: mov     rbp, [rbp+0D8h]
 * 000000014073C2FE: add     rsp, 0E8h
 * 000000014073C305: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073C30C: jz      short loc_14073C313
 * 000000014073C30E: jmp     KiKernelExit
 * 000000014073C313: test    word ptr gs:898h, 200h
 * 000000014073C31E: jz      short loc_14073C325
 * 000000014073C320: verw    [rsp-158h+arg_170]
 * 000000014073C325: swapgs
 * 000000014073C328: iretq
 * 000000014073C32A: cmp     edi, 20h ; ' '
 * 000000014073C32D: jnz     short loc_14073C38E
 * 000000014073C32F: mov     [rbp-80h], eax
 * 000000014073C332: mov     [rbp-78h], rcx
 * 000000014073C336: mov     [rbp-70h], rdx
 * 000000014073C33A: mov     [rbp-68h], r8
 * 000000014073C33E: mov     [rbp-60h], r9
 * 000000014073C342: call    KiConvertToGuiThread
 * 000000014073C347: or      eax, eax
 * 000000014073C349: mov     eax, [rbp-80h]
 * 000000014073C34C: mov     rcx, [rbp-78h]
 * 000000014073C350: mov     rdx, [rbp-70h]
 * 000000014073C354: mov     r8, [rbp-68h]
 * 000000014073C358: lea     r9, [rbp-80h]
 * 000000014073C35C: mov     [rbx+90h], r9
 * 000000014073C363: mov     r9, [rbp-60h]
 * 000000014073C367: jz      KiSystemServiceRepeat
 * 000000014073C36D: lea     rdi, stru_140FC01F0.___u33+0B0h
 * 000000014073C374: mov     esi, [rdi+10h]
 * 000000014073C377: mov     rdi, [rdi]
 * 000000014073C37A: cmp     eax, esi
 * 000000014073C37C: jnb     short loc_14073C38E
 * 000000014073C37E: lea     rdi, [rdi+rsi*4]
 * 000000014073C382: movsx   eax, byte ptr [rdi+rax]
 * 000000014073C386: or      eax, eax
 * 000000014073C388: jle     KiSystemServiceExit
 * 000000014073C38E: mov     eax, 0C000001Ch
 * 000000014073C393: jmp     KiSystemServiceExit
 * 000000014073C398: mov     ecx, 4Ah ; 'J'
 * 000000014073C39D: xor     r9d, r9d
 * 000000014073C3A0: mov     r8, cr8
 * 000000014073C3A4: or      r8d, r8d
 * 000000014073C3A7: jnz     short loc_14073C3BD
 * 000000014073C3A9: mov     ecx, 1
 * 000000014073C3AE: movzx   r8d, byte ptr [r11+24Ah]
 * 000000014073C3B6: mov     r9d, [r11+1E4h]
 * 000000014073C3BD: mov     rdx, [rbp+0E8h]
 * 000000014073C3C4: mov     r10, rbp
 * 000000014073C3C7: call    KiBugCheckDispatch
 * 000000014073C3CD: mov     ecx, 1F9h
 * 000000014073C3D2: mov     rdx, [rbp+0E8h]
 * 000000014073C3D9: movzx   r8d, byte ptr [r11+232h]
 * 000000014073C3E1: xor     r9d, r9d
 * 000000014073C3E4: xor     r10d, r10d
 * 000000014073C3E7: call    KiBugCheckDispatch
 * 000000014073C3ED: sub     rsp, 50h
 * 000000014073C3F1: mov     [rsp+0E0h+var_C0], rcx
 * 000000014073C3F6: mov     [rsp+0E0h+var_B8], rdx
 * 000000014073C3FB: mov     [rsp+0E0h+var_B0], r8
 * 000000014073C400: mov     [rsp+0E0h+var_A8], r9
 * 000000014073C405: mov     [rsp+0E0h+var_A0], r10
 * 000000014073C40A: mov     rcx, r10
 * 000000014073C40D: mov     rdx, rsp
 * 000000014073C410: add     rdx, 20h ; ' '
 * 000000014073C414: mov     r8, 4
 * 000000014073C41B: mov     r9, rsp
 * 000000014073C41E: add     r9, 70h ; 'p'
 * 000000014073C422: call    KiTrackSystemCallEntry
 * 000000014073C427: mov     [rbp-60h], rax
 * 000000014073C42B: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014073C430: mov     rdx, [rsp+0E0h+var_B8]
 * 000000014073C435: mov     r8, [rsp+0E0h+var_B0]
 * 000000014073C43A: mov     r9, [rsp+0E0h+var_A8]
 * 000000014073C43F: mov     r10, [rsp+0E0h+var_A0]
 * 000000014073C444: add     rsp, 50h
 * 000000014073C448: mov     rax, r10
 * 000000014073C44B: call    rax
 * 000000014073C44D: nop     dword ptr [rax]
 * 000000014073C450: mov     rcx, [rbp-60h]
 * 000000014073C454: mov     rdx, rax
 * 000000014073C457: call    KiTrackSystemCallExit
 * 000000014073C45C: jmp     loc_14073BBC8
 * 000000014073C461: sub     rsp, 50h
 * 000000014073C465: mov     [rsp+0E0h+var_C0], rcx
 * 000000014073C46A: mov     [rsp+0E0h+var_B8], rdx
 * 000000014073C46F: mov     [rsp+0E0h+var_B0], r8
 * 000000014073C474: mov     [rsp+0E0h+var_A8], r9
 * 000000014073C479: mov     [rsp+0E0h+var_A0], r10
 * 000000014073C47E: mov     rcx, r10
 * 000000014073C481: call    PerfInfoLogSysCallEntry
 * 000000014073C486: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014073C48B: mov     rdx, [rsp+0E0h+var_B8]
 * 000000014073C490: mov     r8, [rsp+0E0h+var_B0]
 * 000000014073C495: mov     r9, [rsp+0E0h+var_A8]
 * 000000014073C49A: mov     r10, [rsp+0E0h+var_A0]
 * 000000014073C49F: add     rsp, 50h
 * 000000014073C4A3: mov     rax, r10
 * 000000014073C4A6: call    rax
 * 000000014073C4A8: nop     dword ptr [rax]
 * 000000014073C4AB: mov     rcx, rax
 * 000000014073C4AE: call    PerfInfoLogSysCallExit
 * 000000014073C4B3: jmp     loc_14073BBC8
 * 000000014073C4B8: retn
 */
