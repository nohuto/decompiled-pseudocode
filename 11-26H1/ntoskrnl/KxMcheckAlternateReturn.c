/*
 * XREFs of KxMcheckAlternateReturn @ 0x140738800
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140C59A40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x1405FCD70 (KiMcheckAlternateReturn.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x140738800 (KxMcheckAlternateReturn.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxMcheckAlternateReturn @ 0x140738800
 * Reason: Hex-Rays returned no pseudocode for 0x140738800
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140738800: test    cs:KiKernelCetEnabled, 1
 * 0000000140738807: jz      short loc_140738819
 * 0000000140738809: push    rdx
 * 000000014073880A: rdsspq  rdx
 * 000000014073880F: test    rdx, rdx
 * 0000000140738812: pop     rdx
 * 0000000140738813: jnz     short loc_140738819
 * 0000000140738815: setssbsy
 * 0000000140738819: sub     rsp, 8
 * 000000014073881D: push    rbp
 * 000000014073881E: sub     rsp, 158h
 * 0000000140738825: lea     rbp, [rsp+168h+var_E8]
 * 000000014073882D: mov     [rbp-50h], rax
 * 0000000140738831: mov     [rbp-48h], rcx
 * 0000000140738835: mov     [rbp-40h], rdx
 * 0000000140738839: mov     [rbp-38h], r8
 * 000000014073883D: mov     [rbp-30h], r9
 * 0000000140738841: mov     [rbp-28h], r10
 * 0000000140738845: mov     [rbp-20h], r11
 * 0000000140738849: test    byte ptr [rbp+0F0h], 1
 * 0000000140738850: jnz     short loc_14073888A
 * 0000000140738852: xor     edx, edx
 * 0000000140738854: rdsspq  rdx
 * 0000000140738859: mov     [rbp+58h], rdx
 * 000000014073885D: lfence
 * 0000000140738860: test    byte ptr gs:898h, 1
 * 0000000140738869: jnz     short loc_140738873
 * 000000014073886B: lfence
 * 000000014073886E: jmp     loc_140738AFB
 * 0000000140738873: movzx   eax, word ptr gs:8A6h
 * 000000014073887C: mov     ecx, 48h ; 'H'
 * 0000000140738881: xor     edx, edx
 * 0000000140738883: wrmsr
 * 0000000140738885: jmp     loc_140738AFB
 * 000000014073888A: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140738891: jnz     short loc_140738896
 * 0000000140738893: swapgs
 * 0000000140738896: lfence
 * 0000000140738899: mov     rcx, gs:9D68h
 * 00000001407388A2: test    rcx, rcx
 * 00000001407388A5: jz      short loc_1407388C6
 * 00000001407388A7: rdsspq  rdx
 * 00000001407388AC: mov     r10, gs:9D60h
 * 00000001407388B5: add     r10, 8
 * 00000001407388B9: cmp     rdx, r10
 * 00000001407388BC: jnz     short loc_1407388C6
 * 00000001407388BE: rstorssp qword ptr [rcx]
 * 00000001407388C2: saveprevssp
 * 00000001407388C6: mov     r10, gs:188h
 * 00000001407388CF: mov     rcx, gs:188h
 * 00000001407388D8: mov     rcx, [rcx+220h]
 * 00000001407388DF: mov     rcx, [rcx+760h]
 * 00000001407388E6: mov     gs:890h, rcx
 * 00000001407388EF: mov     cx, gs:8A2h
 * 00000001407388F8: mov     gs:8A4h, cx
 * 0000000140738901: mov     cl, gs:898h
 * 0000000140738909: mov     gs:89Ah, cl
 * 0000000140738911: movzx   eax, word ptr gs:8A8h
 * 000000014073891A: cmp     gs:8A6h, ax
 * 0000000140738923: jz      short loc_140738937
 * 0000000140738925: mov     gs:8A6h, ax
 * 000000014073892E: mov     ecx, 48h ; 'H'
 * 0000000140738933: xor     edx, edx
 * 0000000140738935: wrmsr
 * 0000000140738937: movzx   edx, byte ptr gs:898h
 * 0000000140738940: test    edx, 8
 * 0000000140738946: jz      short loc_14073895F
 * 0000000140738948: mov     eax, 1
 * 000000014073894D: xor     edx, edx
 * 000000014073894F: mov     ecx, 49h ; 'I'
 * 0000000140738954: wrmsr
 * 0000000140738956: movzx   edx, byte ptr gs:898h
 * 000000014073895F: test    edx, 2
 * 0000000140738965: jz      loc_140738AA2
 * 000000014073896B: call    loc_140738A7E
 * 0000000140738970: add     rsp, 8
 * 0000000140738974: call    loc_140738A87
 * 0000000140738979: add     rsp, 8
 * 000000014073897D: call    loc_140738970
 * 0000000140738982: add     rsp, 8
 * 0000000140738986: call    loc_140738979
 * 000000014073898B: add     rsp, 8
 * 000000014073898F: call    loc_140738982
 * 0000000140738994: add     rsp, 8
 * 0000000140738998: call    loc_14073898B
 * 000000014073899D: add     rsp, 8
 * 00000001407389A1: call    loc_140738994
 * 00000001407389A6: add     rsp, 8
 * 00000001407389AA: call    loc_14073899D
 * 00000001407389AF: add     rsp, 8
 * 00000001407389B3: call    loc_1407389A6
 * 00000001407389B8: add     rsp, 8
 * 00000001407389BC: call    loc_1407389AF
 * 00000001407389C1: add     rsp, 8
 * 00000001407389C5: call    loc_1407389B8
 * 00000001407389CA: add     rsp, 8
 * 00000001407389CE: call    loc_1407389C1
 * 00000001407389D3: add     rsp, 8
 * 00000001407389D7: call    loc_1407389CA
 * 00000001407389DC: add     rsp, 8
 * 00000001407389E0: call    loc_1407389D3
 * 00000001407389E5: add     rsp, 8
 * 00000001407389E9: call    loc_1407389DC
 * 00000001407389EE: add     rsp, 8
 * 00000001407389F2: call    loc_1407389E5
 * 00000001407389F7: add     rsp, 8
 * 00000001407389FB: call    loc_1407389EE
 * 0000000140738A00: add     rsp, 8
 * 0000000140738A04: call    loc_1407389F7
 * 0000000140738A09: add     rsp, 8
 * 0000000140738A0D: call    loc_140738A00
 * 0000000140738A12: add     rsp, 8
 * 0000000140738A16: call    loc_140738A09
 * 0000000140738A1B: add     rsp, 8
 * 0000000140738A1F: call    loc_140738A12
 * 0000000140738A24: add     rsp, 8
 * 0000000140738A28: call    loc_140738A1B
 * 0000000140738A2D: add     rsp, 8
 * 0000000140738A31: call    loc_140738A24
 * 0000000140738A36: add     rsp, 8
 * 0000000140738A3A: call    loc_140738A2D
 * 0000000140738A3F: add     rsp, 8
 * 0000000140738A43: call    loc_140738A36
 * 0000000140738A48: add     rsp, 8
 * 0000000140738A4C: call    loc_140738A3F
 * 0000000140738A51: add     rsp, 8
 * 0000000140738A55: call    loc_140738A48
 * 0000000140738A5A: add     rsp, 8
 * 0000000140738A5E: call    loc_140738A51
 * 0000000140738A63: add     rsp, 8
 * 0000000140738A67: call    loc_140738A5A
 * 0000000140738A6C: add     rsp, 8
 * 0000000140738A70: call    loc_140738A63
 * 0000000140738A75: add     rsp, 8
 * 0000000140738A79: call    loc_140738A6C
 * 0000000140738A7E: add     rsp, 8
 * 0000000140738A82: call    loc_140738A75
 * 0000000140738A87: add     rsp, 8
 * 0000000140738A8B: mov     eax, 0DADAh
 * 0000000140738A90: test    byte ptr gs:89Ch, 8
 * 0000000140738A99: jz      short loc_140738AA2
 * 0000000140738A9B: mov     al, 20h ; ' '
 * 0000000140738A9D: incsspq rax
 * 0000000140738AA2: test    edx, 80h
 * 0000000140738AA8: jz      short loc_140738AB2
 * 0000000140738AAA: lfence
 * 0000000140738AAD: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140738AB2: lfence
 * 0000000140738AB5: mov     byte ptr gs:89Eh, 0
 * 0000000140738ABE: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140738AC5: jz      short loc_140738AE6
 * 0000000140738AC7: mov     ecx, 6A7h
 * 0000000140738ACC: rdmsr
 * 0000000140738ACE: cmp     edx, 0
 * 0000000140738AD1: jz      short loc_140738AE6
 * 0000000140738AD3: mov     ecx, edx
 * 0000000140738AD5: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140738ADB: cmp     edx, ecx
 * 0000000140738ADD: jz      short loc_140738AE6
 * 0000000140738ADF: mov     ecx, 6A7h
 * 0000000140738AE4: wrmsr
 * 0000000140738AE6: test    byte ptr [r10+3], 3
 * 0000000140738AEB: mov     word ptr [rbp+80h], 0
 * 0000000140738AF4: jz      short loc_140738AFB
 * 0000000140738AF6: call    KiSaveDebugRegisterState
 * 0000000140738AFB: cld
 * 0000000140738AFC: stmxcsr dword ptr [rbp-54h]
 * 0000000140738B00: ldmxcsr dword ptr gs:180h
 * 0000000140738B09: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140738B0D: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140738B11: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140738B15: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140738B19: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140738B1D: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140738B21: test    byte ptr [rbp+0F0h], 1
 * 0000000140738B28: jz      short KxMcheckAlternateReturnDispatchTrap
 * 0000000140738B2A: mov     r10, gs:188h
 * 0000000140738B33: test    byte ptr [r10+3], 80h
 * 0000000140738B38: jz      short KxMcheckAlternateReturnDispatchTrap
 * 0000000140738B3A: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140738B3F: mov     byte ptr [rbp-55h], 1
 * 0000000140738B43: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140738B4A: jz      short loc_140738B6D
 * 0000000140738B4C: test    byte ptr [rbp+0F0h], 1
 * 0000000140738B53: jnz     short loc_140738B6A
 * 0000000140738B55: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140738B5C: jz      short loc_140738B6D
 * 0000000140738B5E: test    dword ptr [rbp+0F8h], 40000h
 * 0000000140738B68: jz      short loc_140738B6D
 * 0000000140738B6A: stac
 * 0000000140738B6D: sub     rsp, 30h
 * 0000000140738B71: movdqa  xmm0, xmmword ptr gs:8860h
 * 0000000140738B7B: movdqa  [rsp+198h+var_178], xmm0
 * 0000000140738B81: pxor    xmm0, xmm0
 * 0000000140738B85: movdqa  xmmword ptr gs:8860h, xmm0
 * 0000000140738B8F: bt      dword ptr [rbp+0F8h], 9
 * 0000000140738B97: jnb     short loc_140738B9A
 * 0000000140738B99: sti
 * 0000000140738B9A: lea     rcx, [rsp+198h+var_178]
 * 0000000140738B9F: call    KiMcheckAlternateReturn
 * 0000000140738BA4: cli
 * 0000000140738BA5: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140738BAC: jz      short loc_140738BB3
 * 0000000140738BAE: add     rsp, 28h
 * 0000000140738BB2: retn
 * 0000000140738BB3: test    byte ptr [rbp+0F0h], 1
 * 0000000140738BBA: jz      loc_140738EBB
 * 0000000140738BC0: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140738BC7: jz      short loc_140738BCC
 * 0000000140738BC9: stac
 * 0000000140738BCC: mov     rcx, gs:188h
 * 0000000140738BD5: test    byte ptr [rcx+0C2h], 3
 * 0000000140738BDC: jz      short loc_140738BF9
 * 0000000140738BDE: mov     ecx, 1
 * 0000000140738BE3: mov     cr8, rcx
 * 0000000140738BE7: sti
 * 0000000140738BE8: call    KiInitiateUserApc
 * 0000000140738BED: cli
 * 0000000140738BEE: mov     ecx, 0
 * 0000000140738BF3: mov     cr8, rcx
 * 0000000140738BF7: jmp     short loc_140738BCC
 * 0000000140738BF9: test    byte ptr [rcx+3], 80h
 * 0000000140738BFD: jz      short loc_140738C0C
 * 0000000140738BFF: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140738C04: test    eax, eax
 * 0000000140738C06: mov     rax, [rbp-50h]
 * 0000000140738C0A: jnz     short loc_140738BCC
 * 0000000140738C0C: test    byte ptr gs:8A0h, 2
 * 0000000140738C15: jz      short loc_140738C1E
 * 0000000140738C17: xor     ecx, ecx
 * 0000000140738C19: call    KiUpdateStibpPairing
 * 0000000140738C1E: mov     rcx, gs:188h
 * 0000000140738C27: test    dword ptr [rcx], 8000000h
 * 0000000140738C2D: jz      short loc_140738C34
 * 0000000140738C2F: call    KiRestoreSetContextState
 * 0000000140738C34: mov     rcx, gs:188h
 * 0000000140738C3D: test    dword ptr [rcx], 10000h
 * 0000000140738C43: jz      short loc_140738C59
 * 0000000140738C45: test    byte ptr [rcx+2], 1
 * 0000000140738C49: jz      short loc_140738C59
 * 0000000140738C4B: call    KiCopyCounters
 * 0000000140738C50: mov     rcx, gs:188h
 * 0000000140738C59: ldmxcsr dword ptr [rbp-54h]
 * 0000000140738C5D: cmp     word ptr [rbp+80h], 0
 * 0000000140738C65: jz      short loc_140738C6C
 * 0000000140738C67: call    KiRestoreDebugRegisterState
 * 0000000140738C6C: mov     rcx, gs:188h
 * 0000000140738C75: bt      dword ptr [rcx+74h], 16h
 * 0000000140738C7A: jnb     short loc_140738CA6
 * 0000000140738C7C: xor     ecx, ecx
 * 0000000140738C7E: rdsspq  rcx
 * 0000000140738C83: mov     r8, gs:9D68h
 * 0000000140738C8C: add     r8, 8
 * 0000000140738C90: cmp     rcx, r8
 * 0000000140738C93: jnz     short loc_140738CA6
 * 0000000140738C95: mov     rcx, gs:9D60h
 * 0000000140738C9E: rstorssp qword ptr [rcx]
 * 0000000140738CA2: saveprevssp
 * 0000000140738CA6: mov     byte ptr gs:89Eh, 0
 * 0000000140738CAF: movzx   eax, word ptr gs:8ACh
 * 0000000140738CB8: cmp     gs:8A6h, ax
 * 0000000140738CC1: jz      short loc_140738CD5
 * 0000000140738CC3: mov     gs:8A6h, ax
 * 0000000140738CCC: mov     ecx, 48h ; 'H'
 * 0000000140738CD1: xor     edx, edx
 * 0000000140738CD3: wrmsr
 * 0000000140738CD5: btr     word ptr gs:898h, 2
 * 0000000140738CE0: jnb     short loc_140738CF0
 * 0000000140738CE2: mov     eax, 1
 * 0000000140738CE7: xor     edx, edx
 * 0000000140738CE9: mov     ecx, 49h ; 'I'
 * 0000000140738CEE: wrmsr
 * 0000000140738CF0: btr     word ptr gs:898h, 5
 * 0000000140738CFB: jnb     loc_140738E38
 * 0000000140738D01: call    loc_140738E14
 * 0000000140738D06: add     rsp, 8
 * 0000000140738D0A: call    loc_140738E1D
 * 0000000140738D0F: add     rsp, 8
 * 0000000140738D13: call    loc_140738D06
 * 0000000140738D18: add     rsp, 8
 * 0000000140738D1C: call    loc_140738D0F
 * 0000000140738D21: add     rsp, 8
 * 0000000140738D25: call    loc_140738D18
 * 0000000140738D2A: add     rsp, 8
 * 0000000140738D2E: call    loc_140738D21
 * 0000000140738D33: add     rsp, 8
 * 0000000140738D37: call    loc_140738D2A
 * 0000000140738D3C: add     rsp, 8
 * 0000000140738D40: call    loc_140738D33
 * 0000000140738D45: add     rsp, 8
 * 0000000140738D49: call    loc_140738D3C
 * 0000000140738D4E: add     rsp, 8
 * 0000000140738D52: call    loc_140738D45
 * 0000000140738D57: add     rsp, 8
 * 0000000140738D5B: call    loc_140738D4E
 * 0000000140738D60: add     rsp, 8
 * 0000000140738D64: call    loc_140738D57
 * 0000000140738D69: add     rsp, 8
 * 0000000140738D6D: call    loc_140738D60
 * 0000000140738D72: add     rsp, 8
 * 0000000140738D76: call    loc_140738D69
 * 0000000140738D7B: add     rsp, 8
 * 0000000140738D7F: call    loc_140738D72
 * 0000000140738D84: add     rsp, 8
 * 0000000140738D88: call    loc_140738D7B
 * 0000000140738D8D: add     rsp, 8
 * 0000000140738D91: call    loc_140738D84
 * 0000000140738D96: add     rsp, 8
 * 0000000140738D9A: call    loc_140738D8D
 * 0000000140738D9F: add     rsp, 8
 * 0000000140738DA3: call    loc_140738D96
 * 0000000140738DA8: add     rsp, 8
 * 0000000140738DAC: call    loc_140738D9F
 * 0000000140738DB1: add     rsp, 8
 * 0000000140738DB5: call    loc_140738DA8
 * 0000000140738DBA: add     rsp, 8
 * 0000000140738DBE: call    loc_140738DB1
 * 0000000140738DC3: add     rsp, 8
 * 0000000140738DC7: call    loc_140738DBA
 * 0000000140738DCC: add     rsp, 8
 * 0000000140738DD0: call    loc_140738DC3
 * 0000000140738DD5: add     rsp, 8
 * 0000000140738DD9: call    loc_140738DCC
 * 0000000140738DDE: add     rsp, 8
 * 0000000140738DE2: call    loc_140738DD5
 * 0000000140738DE7: add     rsp, 8
 * 0000000140738DEB: call    loc_140738DDE
 * 0000000140738DF0: add     rsp, 8
 * 0000000140738DF4: call    loc_140738DE7
 * 0000000140738DF9: add     rsp, 8
 * 0000000140738DFD: call    loc_140738DF0
 * 0000000140738E02: add     rsp, 8
 * 0000000140738E06: call    loc_140738DF9
 * 0000000140738E0B: add     rsp, 8
 * 0000000140738E0F: call    loc_140738E02
 * 0000000140738E14: add     rsp, 8
 * 0000000140738E18: call    loc_140738E0B
 * 0000000140738E1D: add     rsp, 8
 * 0000000140738E21: mov     eax, 0DADAh
 * 0000000140738E26: test    byte ptr gs:89Ch, 8
 * 0000000140738E2F: jz      short loc_140738E38
 * 0000000140738E31: mov     al, 20h ; ' '
 * 0000000140738E33: incsspq rax
 * 0000000140738E38: test    word ptr gs:898h, 100h
 * 0000000140738E43: jz      short loc_140738E51
 * 0000000140738E45: xor     eax, eax
 * 0000000140738E47: xor     edx, edx
 * 0000000140738E49: mov     ecx, 1
 * 0000000140738E4E: div     rcx
 * 0000000140738E51: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140738E55: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140738E59: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140738E5D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140738E61: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140738E65: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140738E69: mov     r11, [rbp-20h]
 * 0000000140738E6D: mov     r10, [rbp-28h]
 * 0000000140738E71: mov     r9, [rbp-30h]
 * 0000000140738E75: mov     r8, [rbp-38h]
 * 0000000140738E79: mov     rdx, [rbp-40h]
 * 0000000140738E7D: mov     rcx, [rbp-48h]
 * 0000000140738E81: mov     rax, [rbp-50h]
 * 0000000140738E85: mov     rsp, rbp
 * 0000000140738E88: mov     rbp, [rbp+0D8h]
 * 0000000140738E8F: add     rsp, 0E8h
 * 0000000140738E96: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140738E9D: jz      short loc_140738EA4
 * 0000000140738E9F: jmp     KiKernelExit
 * 0000000140738EA4: test    word ptr gs:898h, 200h
 * 0000000140738EAF: jz      short loc_140738EB6
 * 0000000140738EB1: verw    [rsp-50h+arg_68]
 * 0000000140738EB6: swapgs
 * 0000000140738EB9: iretq
 * 0000000140738EBB: ldmxcsr dword ptr [rbp-54h]
 * 0000000140738EBF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140738EC3: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140738EC7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140738ECB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140738ECF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140738ED3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140738ED7: mov     r11, [rbp-20h]
 * 0000000140738EDB: mov     r10, [rbp-28h]
 * 0000000140738EDF: mov     r9, [rbp-30h]
 * 0000000140738EE3: mov     r8, [rbp-38h]
 * 0000000140738EE7: mov     rdx, [rbp-40h]
 * 0000000140738EEB: mov     rcx, [rbp-48h]
 * 0000000140738EEF: mov     rax, [rbp-50h]
 * 0000000140738EF3: mov     rsp, rbp
 * 0000000140738EF6: mov     rbp, [rbp+0D8h]
 * 0000000140738EFD: add     rsp, 0E8h
 * 0000000140738F04: iretq
 */
