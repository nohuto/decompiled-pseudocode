/*
 * XREFs of KiVirtualizationException @ 0x14073DF80
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140C5FB40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KzRaiseIrql @ 0x1404134E0 (KzRaiseIrql.c)
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KzLowerIrql @ 0x14041C6E0 (KzLowerIrql.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x1405F98F0 (KiEpfHandleNotification.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x14073DF80 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x14073DF80
 * Reason: Hex-Rays returned no pseudocode for 0x14073DF80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073DF80: sub     rsp, 8
 * 000000014073DF84: push    rbp
 * 000000014073DF85: sub     rsp, 158h
 * 000000014073DF8C: lea     rbp, [rsp+80h]
 * 000000014073DF94: mov     [rbp+0E8h+var_138], rax
 * 000000014073DF98: mov     [rbp+0E8h+var_130], rcx
 * 000000014073DF9C: mov     [rbp+0E8h+var_128], rdx
 * 000000014073DFA0: mov     [rbp+0E8h+var_120], r8
 * 000000014073DFA4: mov     [rbp+0E8h+var_118], r9
 * 000000014073DFA8: mov     [rbp+0E8h+var_110], r10
 * 000000014073DFAC: mov     [rbp+0E8h+var_108], r11
 * 000000014073DFB0: test    [rbp+0E8h+arg_0], 1
 * 000000014073DFB7: jnz     short loc_14073DFF1
 * 000000014073DFB9: xor     edx, edx
 * 000000014073DFBB: rdsspq  rdx
 * 000000014073DFC0: mov     [rbp+0E8h+var_90], rdx
 * 000000014073DFC4: lfence
 * 000000014073DFC7: test    byte ptr gs:898h, 1
 * 000000014073DFD0: jnz     short loc_14073DFDA
 * 000000014073DFD2: lfence
 * 000000014073DFD5: jmp     loc_14073E262
 * 000000014073DFDA: movzx   eax, word ptr gs:8A6h
 * 000000014073DFE3: mov     ecx, 48h ; 'H'
 * 000000014073DFE8: xor     edx, edx
 * 000000014073DFEA: wrmsr
 * 000000014073DFEC: jmp     loc_14073E262
 * 000000014073DFF1: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073DFF8: jnz     short loc_14073DFFD
 * 000000014073DFFA: swapgs
 * 000000014073DFFD: lfence
 * 000000014073E000: mov     rcx, gs:9D68h
 * 000000014073E009: test    rcx, rcx
 * 000000014073E00C: jz      short loc_14073E02D
 * 000000014073E00E: rdsspq  rdx
 * 000000014073E013: mov     r10, gs:9D60h
 * 000000014073E01C: add     r10, 8
 * 000000014073E020: cmp     rdx, r10
 * 000000014073E023: jnz     short loc_14073E02D
 * 000000014073E025: rstorssp qword ptr [rcx]
 * 000000014073E029: saveprevssp
 * 000000014073E02D: mov     r10, gs:188h
 * 000000014073E036: mov     rcx, gs:188h
 * 000000014073E03F: mov     rcx, [rcx+220h]
 * 000000014073E046: mov     rcx, [rcx+760h]
 * 000000014073E04D: mov     gs:890h, rcx
 * 000000014073E056: mov     cx, gs:8A2h
 * 000000014073E05F: mov     gs:8A4h, cx
 * 000000014073E068: mov     cl, gs:898h
 * 000000014073E070: mov     gs:89Ah, cl
 * 000000014073E078: movzx   eax, word ptr gs:8A8h
 * 000000014073E081: cmp     gs:8A6h, ax
 * 000000014073E08A: jz      short loc_14073E09E
 * 000000014073E08C: mov     gs:8A6h, ax
 * 000000014073E095: mov     ecx, 48h ; 'H'
 * 000000014073E09A: xor     edx, edx
 * 000000014073E09C: wrmsr
 * 000000014073E09E: movzx   edx, byte ptr gs:898h
 * 000000014073E0A7: test    edx, 8
 * 000000014073E0AD: jz      short loc_14073E0C6
 * 000000014073E0AF: mov     eax, 1
 * 000000014073E0B4: xor     edx, edx
 * 000000014073E0B6: mov     ecx, 49h ; 'I'
 * 000000014073E0BB: wrmsr
 * 000000014073E0BD: movzx   edx, byte ptr gs:898h
 * 000000014073E0C6: test    edx, 2
 * 000000014073E0CC: jz      loc_14073E209
 * 000000014073E0D2: call    loc_14073E1E5
 * 000000014073E0D7: add     rsp, 8
 * 000000014073E0DB: call    loc_14073E1EE
 * 000000014073E0E0: add     rsp, 8
 * 000000014073E0E4: call    loc_14073E0D7
 * 000000014073E0E9: add     rsp, 8
 * 000000014073E0ED: call    loc_14073E0E0
 * 000000014073E0F2: add     rsp, 8
 * 000000014073E0F6: call    loc_14073E0E9
 * 000000014073E0FB: add     rsp, 8
 * 000000014073E0FF: call    loc_14073E0F2
 * 000000014073E104: add     rsp, 8
 * 000000014073E108: call    loc_14073E0FB
 * 000000014073E10D: add     rsp, 8
 * 000000014073E111: call    loc_14073E104
 * 000000014073E116: add     rsp, 8
 * 000000014073E11A: call    loc_14073E10D
 * 000000014073E11F: add     rsp, 8
 * 000000014073E123: call    loc_14073E116
 * 000000014073E128: add     rsp, 8
 * 000000014073E12C: call    loc_14073E11F
 * 000000014073E131: add     rsp, 8
 * 000000014073E135: call    loc_14073E128
 * 000000014073E13A: add     rsp, 8
 * 000000014073E13E: call    loc_14073E131
 * 000000014073E143: add     rsp, 8
 * 000000014073E147: call    loc_14073E13A
 * 000000014073E14C: add     rsp, 8
 * 000000014073E150: call    loc_14073E143
 * 000000014073E155: add     rsp, 8
 * 000000014073E159: call    loc_14073E14C
 * 000000014073E15E: add     rsp, 8
 * 000000014073E162: call    loc_14073E155
 * 000000014073E167: add     rsp, 8
 * 000000014073E16B: call    loc_14073E15E
 * 000000014073E170: add     rsp, 8
 * 000000014073E174: call    loc_14073E167
 * 000000014073E179: add     rsp, 8
 * 000000014073E17D: call    loc_14073E170
 * 000000014073E182: add     rsp, 8
 * 000000014073E186: call    loc_14073E179
 * 000000014073E18B: add     rsp, 8
 * 000000014073E18F: call    loc_14073E182
 * 000000014073E194: add     rsp, 8
 * 000000014073E198: call    loc_14073E18B
 * 000000014073E19D: add     rsp, 8
 * 000000014073E1A1: call    loc_14073E194
 * 000000014073E1A6: add     rsp, 8
 * 000000014073E1AA: call    loc_14073E19D
 * 000000014073E1AF: add     rsp, 8
 * 000000014073E1B3: call    loc_14073E1A6
 * 000000014073E1B8: add     rsp, 8
 * 000000014073E1BC: call    loc_14073E1AF
 * 000000014073E1C1: add     rsp, 8
 * 000000014073E1C5: call    loc_14073E1B8
 * 000000014073E1CA: add     rsp, 8
 * 000000014073E1CE: call    loc_14073E1C1
 * 000000014073E1D3: add     rsp, 8
 * 000000014073E1D7: call    loc_14073E1CA
 * 000000014073E1DC: add     rsp, 8
 * 000000014073E1E0: call    loc_14073E1D3
 * 000000014073E1E5: add     rsp, 8
 * 000000014073E1E9: call    loc_14073E1DC
 * 000000014073E1EE: add     rsp, 8
 * 000000014073E1F2: mov     eax, 0DADAh
 * 000000014073E1F7: test    byte ptr gs:89Ch, 8
 * 000000014073E200: jz      short loc_14073E209
 * 000000014073E202: mov     al, 20h ; ' '
 * 000000014073E204: incsspq rax
 * 000000014073E209: test    edx, 80h
 * 000000014073E20F: jz      short loc_14073E219
 * 000000014073E211: lfence
 * 000000014073E214: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073E219: lfence
 * 000000014073E21C: mov     byte ptr gs:89Eh, 0
 * 000000014073E225: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073E22C: jz      short loc_14073E24D
 * 000000014073E22E: mov     ecx, 6A7h
 * 000000014073E233: rdmsr
 * 000000014073E235: cmp     edx, 0
 * 000000014073E238: jz      short loc_14073E24D
 * 000000014073E23A: mov     ecx, edx
 * 000000014073E23C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073E242: cmp     edx, ecx
 * 000000014073E244: jz      short loc_14073E24D
 * 000000014073E246: mov     ecx, 6A7h
 * 000000014073E24B: wrmsr
 * 000000014073E24D: test    byte ptr [r10+3], 3
 * 000000014073E252: mov     [rbp+0E8h+var_68], 0
 * 000000014073E25B: jz      short loc_14073E262
 * 000000014073E25D: call    KiSaveDebugRegisterState
 * 000000014073E262: cld
 * 000000014073E263: stmxcsr [rbp+0E8h+var_13C]
 * 000000014073E267: ldmxcsr dword ptr gs:180h
 * 000000014073E270: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014073E274: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014073E278: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073E27C: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014073E280: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014073E284: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014073E288: test    [rbp+0E8h+arg_0], 1
 * 000000014073E28F: jz      short KiVirtualizationExceptionDispatchTrap
 * 000000014073E291: mov     r10, gs:188h
 * 000000014073E29A: test    byte ptr [r10+3], 80h
 * 000000014073E29F: jz      short KiVirtualizationExceptionDispatchTrap
 * 000000014073E2A1: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073E2A6: mov     [rbp+0E8h+var_13D], 1
 * 000000014073E2AA: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073E2B1: jz      short loc_14073E2D4
 * 000000014073E2B3: test    [rbp+0E8h+arg_0], 1
 * 000000014073E2BA: jnz     short loc_14073E2D1
 * 000000014073E2BC: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073E2C3: jz      short loc_14073E2D4
 * 000000014073E2C5: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073E2CF: jz      short loc_14073E2D4
 * 000000014073E2D1: stac
 * 000000014073E2D4: mov     r9, gs:8DC8h
 * 000000014073E2DD: test    r9, r9
 * 000000014073E2E0: jz      loc_14073E6A8
 * 000000014073E2E6: cmp     dword ptr [r9+44h], 1
 * 000000014073E2EB: jnz     loc_14073E6A8
 * 000000014073E2F1: test    [rbp+0E8h+arg_8], 200h
 * 000000014073E2FB: jz      loc_14073E6A8
 * 000000014073E301: mov     rax, cr8
 * 000000014073E305: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 000000014073E308: cmp     al, 2
 * 000000014073E30A: jge     loc_14073E6A8
 * 000000014073E310: mov     ecx, 2; NewIrql
 * 000000014073E315: call    KzRaiseIrql
 * 000000014073E31A: sti
 * 000000014073E31B: mov     r9, gs:8DC8h
 * 000000014073E324: mov     rcx, [r9+48h]
 * 000000014073E328: mov     dword ptr [r9+44h], 0
 * 000000014073E330: call    KiEpfHandleNotification
 * 000000014073E335: cli
 * 000000014073E336: lea     rcx, [rbp+0E8h+var_168]
 * 000000014073E33A: call    KiCheckForSListAddress
 * 000000014073E33F: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 000000014073E342: call    KzLowerIrql
 * 000000014073E347: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073E34E: jz      short loc_14073E355
 * 000000014073E350: add     rsp, 28h
 * 000000014073E354: retn
 * 000000014073E355: test    [rbp+0E8h+arg_0], 1
 * 000000014073E35C: jz      loc_14073E65D
 * 000000014073E362: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073E369: jz      short loc_14073E36E
 * 000000014073E36B: stac
 * 000000014073E36E: mov     rcx, gs:188h
 * 000000014073E377: test    byte ptr [rcx+0C2h], 3
 * 000000014073E37E: jz      short loc_14073E39B
 * 000000014073E380: mov     ecx, 1
 * 000000014073E385: mov     cr8, rcx
 * 000000014073E389: sti
 * 000000014073E38A: call    KiInitiateUserApc
 * 000000014073E38F: cli
 * 000000014073E390: mov     ecx, 0
 * 000000014073E395: mov     cr8, rcx
 * 000000014073E399: jmp     short loc_14073E36E
 * 000000014073E39B: test    byte ptr [rcx+3], 80h
 * 000000014073E39F: jz      short loc_14073E3AE
 * 000000014073E3A1: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014073E3A6: test    eax, eax
 * 000000014073E3A8: mov     rax, [rbp+0E8h+var_138]
 * 000000014073E3AC: jnz     short loc_14073E36E
 * 000000014073E3AE: test    byte ptr gs:8A0h, 2
 * 000000014073E3B7: jz      short loc_14073E3C0
 * 000000014073E3B9: xor     ecx, ecx
 * 000000014073E3BB: call    KiUpdateStibpPairing
 * 000000014073E3C0: mov     rcx, gs:188h
 * 000000014073E3C9: test    dword ptr [rcx], 8000000h
 * 000000014073E3CF: jz      short loc_14073E3D6
 * 000000014073E3D1: call    KiRestoreSetContextState
 * 000000014073E3D6: mov     rcx, gs:188h
 * 000000014073E3DF: test    dword ptr [rcx], 10000h
 * 000000014073E3E5: jz      short loc_14073E3FB
 * 000000014073E3E7: test    byte ptr [rcx+2], 1
 * 000000014073E3EB: jz      short loc_14073E3FB
 * 000000014073E3ED: call    KiCopyCounters
 * 000000014073E3F2: mov     rcx, gs:188h
 * 000000014073E3FB: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014073E3FF: cmp     [rbp+0E8h+var_68], 0
 * 000000014073E407: jz      short loc_14073E40E
 * 000000014073E409: call    KiRestoreDebugRegisterState
 * 000000014073E40E: mov     rcx, gs:188h
 * 000000014073E417: bt      dword ptr [rcx+74h], 16h
 * 000000014073E41C: jnb     short loc_14073E448
 * 000000014073E41E: xor     ecx, ecx
 * 000000014073E420: rdsspq  rcx
 * 000000014073E425: mov     r8, gs:9D68h
 * 000000014073E42E: add     r8, 8
 * 000000014073E432: cmp     rcx, r8
 * 000000014073E435: jnz     short loc_14073E448
 * 000000014073E437: mov     rcx, gs:9D60h
 * 000000014073E440: rstorssp qword ptr [rcx]
 * 000000014073E444: saveprevssp
 * 000000014073E448: mov     byte ptr gs:89Eh, 0
 * 000000014073E451: movzx   eax, word ptr gs:8ACh
 * 000000014073E45A: cmp     gs:8A6h, ax
 * 000000014073E463: jz      short loc_14073E477
 * 000000014073E465: mov     gs:8A6h, ax
 * 000000014073E46E: mov     ecx, 48h ; 'H'
 * 000000014073E473: xor     edx, edx
 * 000000014073E475: wrmsr
 * 000000014073E477: btr     word ptr gs:898h, 2
 * 000000014073E482: jnb     short loc_14073E492
 * 000000014073E484: mov     eax, 1
 * 000000014073E489: xor     edx, edx
 * 000000014073E48B: mov     ecx, 49h ; 'I'
 * 000000014073E490: wrmsr
 * 000000014073E492: btr     word ptr gs:898h, 5
 * 000000014073E49D: jnb     loc_14073E5DA
 * 000000014073E4A3: call    loc_14073E5B6
 * 000000014073E4A8: add     rsp, 8
 * 000000014073E4AC: call    loc_14073E5BF
 * 000000014073E4B1: add     rsp, 8
 * 000000014073E4B5: call    loc_14073E4A8
 * 000000014073E4BA: add     rsp, 8
 * 000000014073E4BE: call    loc_14073E4B1
 * 000000014073E4C3: add     rsp, 8
 * 000000014073E4C7: call    loc_14073E4BA
 * 000000014073E4CC: add     rsp, 8
 * 000000014073E4D0: call    loc_14073E4C3
 * 000000014073E4D5: add     rsp, 8
 * 000000014073E4D9: call    loc_14073E4CC
 * 000000014073E4DE: add     rsp, 8
 * 000000014073E4E2: call    loc_14073E4D5
 * 000000014073E4E7: add     rsp, 8
 * 000000014073E4EB: call    loc_14073E4DE
 * 000000014073E4F0: add     rsp, 8
 * 000000014073E4F4: call    loc_14073E4E7
 * 000000014073E4F9: add     rsp, 8
 * 000000014073E4FD: call    loc_14073E4F0
 * 000000014073E502: add     rsp, 8
 * 000000014073E506: call    loc_14073E4F9
 * 000000014073E50B: add     rsp, 8
 * 000000014073E50F: call    loc_14073E502
 * 000000014073E514: add     rsp, 8
 * 000000014073E518: call    loc_14073E50B
 * 000000014073E51D: add     rsp, 8
 * 000000014073E521: call    loc_14073E514
 * 000000014073E526: add     rsp, 8
 * 000000014073E52A: call    loc_14073E51D
 * 000000014073E52F: add     rsp, 8
 * 000000014073E533: call    loc_14073E526
 * 000000014073E538: add     rsp, 8
 * 000000014073E53C: call    loc_14073E52F
 * 000000014073E541: add     rsp, 8
 * 000000014073E545: call    loc_14073E538
 * 000000014073E54A: add     rsp, 8
 * 000000014073E54E: call    loc_14073E541
 * 000000014073E553: add     rsp, 8
 * 000000014073E557: call    loc_14073E54A
 * 000000014073E55C: add     rsp, 8
 * 000000014073E560: call    loc_14073E553
 * 000000014073E565: add     rsp, 8
 * 000000014073E569: call    loc_14073E55C
 * 000000014073E56E: add     rsp, 8
 * 000000014073E572: call    loc_14073E565
 * 000000014073E577: add     rsp, 8
 * 000000014073E57B: call    loc_14073E56E
 * 000000014073E580: add     rsp, 8
 * 000000014073E584: call    loc_14073E577
 * 000000014073E589: add     rsp, 8
 * 000000014073E58D: call    loc_14073E580
 * 000000014073E592: add     rsp, 8
 * 000000014073E596: call    loc_14073E589
 * 000000014073E59B: add     rsp, 8
 * 000000014073E59F: call    loc_14073E592
 * 000000014073E5A4: add     rsp, 8
 * 000000014073E5A8: call    loc_14073E59B
 * 000000014073E5AD: add     rsp, 8
 * 000000014073E5B1: call    loc_14073E5A4
 * 000000014073E5B6: add     rsp, 8
 * 000000014073E5BA: call    loc_14073E5AD
 * 000000014073E5BF: add     rsp, 8
 * 000000014073E5C3: mov     eax, 0DADAh
 * 000000014073E5C8: test    byte ptr gs:89Ch, 8
 * 000000014073E5D1: jz      short loc_14073E5DA
 * 000000014073E5D3: mov     al, 20h ; ' '
 * 000000014073E5D5: incsspq rax
 * 000000014073E5DA: test    word ptr gs:898h, 100h
 * 000000014073E5E5: jz      short loc_14073E5F3
 * 000000014073E5E7: xor     eax, eax
 * 000000014073E5E9: xor     edx, edx
 * 000000014073E5EB: mov     ecx, 1
 * 000000014073E5F0: div     rcx
 * 000000014073E5F3: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014073E5F7: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014073E5FB: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073E5FF: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014073E603: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014073E607: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014073E60B: mov     r11, [rbp+0E8h+var_108]
 * 000000014073E60F: mov     r10, [rbp+0E8h+var_110]
 * 000000014073E613: mov     r9, [rbp+0E8h+var_118]
 * 000000014073E617: mov     r8, [rbp+0E8h+var_120]
 * 000000014073E61B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014073E61F: mov     rcx, [rbp+0E8h+var_130]
 * 000000014073E623: mov     rax, [rbp+0E8h+var_138]
 * 000000014073E627: mov     rsp, rbp
 * 000000014073E62A: mov     rbp, [rbp+0E8h+var_10]
 * 000000014073E631: add     rsp, 0E8h
 * 000000014073E638: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073E63F: jz      short loc_14073E646
 * 000000014073E641: jmp     KiKernelExit
 * 000000014073E646: test    word ptr gs:898h, 200h
 * 000000014073E651: jz      short loc_14073E658
 * 000000014073E653: verw    [rsp+arg_18]
 * 000000014073E658: swapgs
 * 000000014073E65B: iretq
 * 000000014073E65D: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014073E661: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014073E665: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014073E669: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014073E66D: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014073E671: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014073E675: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014073E679: mov     r11, [rbp+0E8h+var_108]
 * 000000014073E67D: mov     r10, [rbp+0E8h+var_110]
 * 000000014073E681: mov     r9, [rbp+0E8h+var_118]
 * 000000014073E685: mov     r8, [rbp+0E8h+var_120]
 * 000000014073E689: mov     rdx, [rbp+0E8h+var_128]
 * 000000014073E68D: mov     rcx, [rbp+0E8h+var_130]
 * 000000014073E691: mov     rax, [rbp+0E8h+var_138]
 * 000000014073E695: mov     rsp, rbp
 * 000000014073E698: mov     rbp, [rbp+0E8h+var_10]
 * 000000014073E69F: add     rsp, 0E8h
 * 000000014073E6A6: iretq
 * 000000014073E6A8: mov     r10, [rbp+0E8h]
 * 000000014073E6AF: mov     r9, gs:8DC8h
 * 000000014073E6B8: movzx   r8, [rbp+0E8h+NewIrql]
 * 000000014073E6BD: mov     ecx, 7Fh
 * 000000014073E6C2: mov     edx, 20h ; ' '
 * 000000014073E6C7: call    KiBugCheckDispatch
 */
