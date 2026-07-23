/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x14073EEC0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140C5FD40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x14073EEC0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x14073EEC0
 * Reason: Hex-Rays returned no pseudocode for 0x14073EEC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073EEC0: or      [rsp+arg_1F], 20h
 * 000000014073EEC6: sub     rsp, 8
 * 000000014073EECA: push    rbp
 * 000000014073EECB: sub     rsp, 158h
 * 000000014073EED2: lea     rbp, [rsp+80h]
 * 000000014073EEDA: mov     [rbp+0E8h+var_138], rax
 * 000000014073EEDE: mov     [rbp+0E8h+var_130], rcx
 * 000000014073EEE2: mov     [rbp+0E8h+var_128], rdx
 * 000000014073EEE6: mov     [rbp+0E8h+var_120], r8
 * 000000014073EEEA: mov     [rbp+0E8h+var_118], r9
 * 000000014073EEEE: mov     [rbp+0E8h+var_110], r10
 * 000000014073EEF2: mov     [rbp+0E8h+var_108], r11
 * 000000014073EEF6: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073EEFD: jnz     short loc_14073EF37
 * 000000014073EEFF: xor     edx, edx
 * 000000014073EF01: rdsspq  rdx
 * 000000014073EF06: mov     [rbp+0E8h+var_90], rdx
 * 000000014073EF0A: lfence
 * 000000014073EF0D: test    byte ptr gs:898h, 1
 * 000000014073EF16: jnz     short loc_14073EF20
 * 000000014073EF18: lfence
 * 000000014073EF1B: jmp     loc_14073F1A8
 * 000000014073EF20: movzx   eax, word ptr gs:8A6h
 * 000000014073EF29: mov     ecx, 48h ; 'H'
 * 000000014073EF2E: xor     edx, edx
 * 000000014073EF30: wrmsr
 * 000000014073EF32: jmp     loc_14073F1A8
 * 000000014073EF37: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073EF3E: jnz     short loc_14073EF43
 * 000000014073EF40: swapgs
 * 000000014073EF43: lfence
 * 000000014073EF46: mov     rcx, gs:9D68h
 * 000000014073EF4F: test    rcx, rcx
 * 000000014073EF52: jz      short loc_14073EF73
 * 000000014073EF54: rdsspq  rdx
 * 000000014073EF59: mov     r10, gs:9D60h
 * 000000014073EF62: add     r10, 8
 * 000000014073EF66: cmp     rdx, r10
 * 000000014073EF69: jnz     short loc_14073EF73
 * 000000014073EF6B: rstorssp qword ptr [rcx]
 * 000000014073EF6F: saveprevssp
 * 000000014073EF73: mov     r10, gs:188h
 * 000000014073EF7C: mov     rcx, gs:188h
 * 000000014073EF85: mov     rcx, [rcx+220h]
 * 000000014073EF8C: mov     rcx, [rcx+760h]
 * 000000014073EF93: mov     gs:890h, rcx
 * 000000014073EF9C: mov     cx, gs:8A2h
 * 000000014073EFA5: mov     gs:8A4h, cx
 * 000000014073EFAE: mov     cl, gs:898h
 * 000000014073EFB6: mov     gs:89Ah, cl
 * 000000014073EFBE: movzx   eax, word ptr gs:8A8h
 * 000000014073EFC7: cmp     gs:8A6h, ax
 * 000000014073EFD0: jz      short loc_14073EFE4
 * 000000014073EFD2: mov     gs:8A6h, ax
 * 000000014073EFDB: mov     ecx, 48h ; 'H'
 * 000000014073EFE0: xor     edx, edx
 * 000000014073EFE2: wrmsr
 * 000000014073EFE4: movzx   edx, byte ptr gs:898h
 * 000000014073EFED: test    edx, 8
 * 000000014073EFF3: jz      short loc_14073F00C
 * 000000014073EFF5: mov     eax, 1
 * 000000014073EFFA: xor     edx, edx
 * 000000014073EFFC: mov     ecx, 49h ; 'I'
 * 000000014073F001: wrmsr
 * 000000014073F003: movzx   edx, byte ptr gs:898h
 * 000000014073F00C: test    edx, 2
 * 000000014073F012: jz      loc_14073F14F
 * 000000014073F018: call    loc_14073F12B
 * 000000014073F01D: add     rsp, 8
 * 000000014073F021: call    loc_14073F134
 * 000000014073F026: add     rsp, 8
 * 000000014073F02A: call    loc_14073F01D
 * 000000014073F02F: add     rsp, 8
 * 000000014073F033: call    loc_14073F026
 * 000000014073F038: add     rsp, 8
 * 000000014073F03C: call    loc_14073F02F
 * 000000014073F041: add     rsp, 8
 * 000000014073F045: call    loc_14073F038
 * 000000014073F04A: add     rsp, 8
 * 000000014073F04E: call    loc_14073F041
 * 000000014073F053: add     rsp, 8
 * 000000014073F057: call    loc_14073F04A
 * 000000014073F05C: add     rsp, 8
 * 000000014073F060: call    loc_14073F053
 * 000000014073F065: add     rsp, 8
 * 000000014073F069: call    loc_14073F05C
 * 000000014073F06E: add     rsp, 8
 * 000000014073F072: call    loc_14073F065
 * 000000014073F077: add     rsp, 8
 * 000000014073F07B: call    loc_14073F06E
 * 000000014073F080: add     rsp, 8
 * 000000014073F084: call    loc_14073F077
 * 000000014073F089: add     rsp, 8
 * 000000014073F08D: call    loc_14073F080
 * 000000014073F092: add     rsp, 8
 * 000000014073F096: call    loc_14073F089
 * 000000014073F09B: add     rsp, 8
 * 000000014073F09F: call    loc_14073F092
 * 000000014073F0A4: add     rsp, 8
 * 000000014073F0A8: call    loc_14073F09B
 * 000000014073F0AD: add     rsp, 8
 * 000000014073F0B1: call    loc_14073F0A4
 * 000000014073F0B6: add     rsp, 8
 * 000000014073F0BA: call    loc_14073F0AD
 * 000000014073F0BF: add     rsp, 8
 * 000000014073F0C3: call    loc_14073F0B6
 * 000000014073F0C8: add     rsp, 8
 * 000000014073F0CC: call    loc_14073F0BF
 * 000000014073F0D1: add     rsp, 8
 * 000000014073F0D5: call    loc_14073F0C8
 * 000000014073F0DA: add     rsp, 8
 * 000000014073F0DE: call    loc_14073F0D1
 * 000000014073F0E3: add     rsp, 8
 * 000000014073F0E7: call    loc_14073F0DA
 * 000000014073F0EC: add     rsp, 8
 * 000000014073F0F0: call    loc_14073F0E3
 * 000000014073F0F5: add     rsp, 8
 * 000000014073F0F9: call    loc_14073F0EC
 * 000000014073F0FE: add     rsp, 8
 * 000000014073F102: call    loc_14073F0F5
 * 000000014073F107: add     rsp, 8
 * 000000014073F10B: call    loc_14073F0FE
 * 000000014073F110: add     rsp, 8
 * 000000014073F114: call    loc_14073F107
 * 000000014073F119: add     rsp, 8
 * 000000014073F11D: call    loc_14073F110
 * 000000014073F122: add     rsp, 8
 * 000000014073F126: call    loc_14073F119
 * 000000014073F12B: add     rsp, 8
 * 000000014073F12F: call    loc_14073F122
 * 000000014073F134: add     rsp, 8
 * 000000014073F138: mov     eax, 0DADAh
 * 000000014073F13D: test    byte ptr gs:89Ch, 8
 * 000000014073F146: jz      short loc_14073F14F
 * 000000014073F148: mov     al, 20h ; ' '
 * 000000014073F14A: incsspq rax
 * 000000014073F14F: test    edx, 80h
 * 000000014073F155: jz      short loc_14073F15F
 * 000000014073F157: lfence
 * 000000014073F15A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073F15F: lfence
 * 000000014073F162: mov     byte ptr gs:89Eh, 0
 * 000000014073F16B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073F172: jz      short loc_14073F193
 * 000000014073F174: mov     ecx, 6A7h
 * 000000014073F179: rdmsr
 * 000000014073F17B: cmp     edx, 0
 * 000000014073F17E: jz      short loc_14073F193
 * 000000014073F180: mov     ecx, edx
 * 000000014073F182: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073F188: cmp     edx, ecx
 * 000000014073F18A: jz      short loc_14073F193
 * 000000014073F18C: mov     ecx, 6A7h
 * 000000014073F191: wrmsr
 * 000000014073F193: test    byte ptr [r10+3], 3
 * 000000014073F198: mov     [rbp+0E8h+var_68], 0
 * 000000014073F1A1: jz      short loc_14073F1A8
 * 000000014073F1A3: call    KiSaveDebugRegisterState
 * 000000014073F1A8: cld
 * 000000014073F1A9: stmxcsr [rbp+0E8h+var_13C]
 * 000000014073F1AD: ldmxcsr dword ptr gs:180h
 * 000000014073F1B6: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014073F1BA: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014073F1BE: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073F1C2: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014073F1C6: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014073F1CA: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014073F1CE: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F1D5: jz      short KiRaiseSecurityCheckFailureDispatchTrap
 * 000000014073F1D7: mov     r10, gs:188h
 * 000000014073F1E0: test    byte ptr [r10+3], 80h
 * 000000014073F1E5: jz      short KiRaiseSecurityCheckFailureDispatchTrap
 * 000000014073F1E7: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073F1EC: mov     [rbp+0E8h+var_13D], 1
 * 000000014073F1F0: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073F1F7: jz      short loc_14073F21A
 * 000000014073F1F9: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F200: jnz     short loc_14073F217
 * 000000014073F202: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073F209: jz      short loc_14073F21A
 * 000000014073F20B: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073F215: jz      short loc_14073F21A
 * 000000014073F217: stac
 * 000000014073F21A: movzx   eax, byte ptr [rbp+0E8h+arg_1F]
 * 000000014073F221: shr     eax, 4
 * 000000014073F224: sub     [rbp+0E8h], rax
 * 000000014073F22B: cmp     [rbp+0E8h+arg_0], 23h ; '#'
 * 000000014073F233: jnz     short loc_14073F23C
 * 000000014073F235: and     dword ptr [rbp+0ECh], 0
 * 000000014073F23C: mov     eax, [rbp+0E8h+var_8]
 * 000000014073F242: test    [rbp+0E8h+arg_8], 200h
 * 000000014073F24C: jz      short loc_14073F24F
 * 000000014073F24E: sti
 * 000000014073F24F: mov     r9, [rbp+0E8h+var_130]
 * 000000014073F253: mov     ecx, 0C0000409h
 * 000000014073F258: mov     edx, 1
 * 000000014073F25D: mov     r8, [rbp+0E8h]
 * 000000014073F264: cmp     r9, 0Ah
 * 000000014073F268: jnz     short loc_14073F27C
 * 000000014073F26A: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073F271: jnz     short loc_14073F27C
 * 000000014073F273: mov     edx, 2
 * 000000014073F278: mov     r10, [rbp+0E8h+var_128]
 * 000000014073F27C: call    KiFastFailDispatch
 * 000000014073F281: nop
 * 000000014073F282: retn
 */
