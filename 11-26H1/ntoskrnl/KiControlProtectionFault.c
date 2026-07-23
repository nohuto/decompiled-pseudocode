/*
 * XREFs of KiControlProtectionFault @ 0x14073E700
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140C5FBC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiProcessControlProtection @ 0x1404F1210 (KiProcessControlProtection.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x14073E700
 * Reason: Hex-Rays returned no pseudocode for 0x14073E700
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073E700: push    rbp
 * 000000014073E701: sub     rsp, 158h
 * 000000014073E708: lea     rbp, [rsp+80h]
 * 000000014073E710: mov     [rbp+0D8h+var_128], rax
 * 000000014073E714: mov     [rbp+0D8h+var_120], rcx
 * 000000014073E718: mov     [rbp+0D8h+var_118], rdx
 * 000000014073E71C: mov     [rbp+0D8h+var_110], r8
 * 000000014073E720: mov     [rbp+0D8h+var_108], r9
 * 000000014073E724: mov     [rbp+0D8h+var_100], r10
 * 000000014073E728: mov     [rbp+0D8h+var_F8], r11
 * 000000014073E72C: test    [rbp+0D8h+arg_8], 1
 * 000000014073E733: jnz     short loc_14073E76D
 * 000000014073E735: xor     edx, edx
 * 000000014073E737: rdsspq  rdx
 * 000000014073E73C: mov     [rbp+0D8h+var_80], rdx
 * 000000014073E740: lfence
 * 000000014073E743: test    byte ptr gs:898h, 1
 * 000000014073E74C: jnz     short loc_14073E756
 * 000000014073E74E: lfence
 * 000000014073E751: jmp     loc_14073E9DE
 * 000000014073E756: movzx   eax, word ptr gs:8A6h
 * 000000014073E75F: mov     ecx, 48h ; 'H'
 * 000000014073E764: xor     edx, edx
 * 000000014073E766: wrmsr
 * 000000014073E768: jmp     loc_14073E9DE
 * 000000014073E76D: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073E774: jnz     short loc_14073E779
 * 000000014073E776: swapgs
 * 000000014073E779: lfence
 * 000000014073E77C: mov     rcx, gs:9D68h
 * 000000014073E785: test    rcx, rcx
 * 000000014073E788: jz      short loc_14073E7A9
 * 000000014073E78A: rdsspq  rdx
 * 000000014073E78F: mov     r10, gs:9D60h
 * 000000014073E798: add     r10, 8
 * 000000014073E79C: cmp     rdx, r10
 * 000000014073E79F: jnz     short loc_14073E7A9
 * 000000014073E7A1: rstorssp qword ptr [rcx]
 * 000000014073E7A5: saveprevssp
 * 000000014073E7A9: mov     r10, gs:188h
 * 000000014073E7B2: mov     rcx, gs:188h
 * 000000014073E7BB: mov     rcx, [rcx+220h]
 * 000000014073E7C2: mov     rcx, [rcx+760h]
 * 000000014073E7C9: mov     gs:890h, rcx
 * 000000014073E7D2: mov     cx, gs:8A2h
 * 000000014073E7DB: mov     gs:8A4h, cx
 * 000000014073E7E4: mov     cl, gs:898h
 * 000000014073E7EC: mov     gs:89Ah, cl
 * 000000014073E7F4: movzx   eax, word ptr gs:8A8h
 * 000000014073E7FD: cmp     gs:8A6h, ax
 * 000000014073E806: jz      short loc_14073E81A
 * 000000014073E808: mov     gs:8A6h, ax
 * 000000014073E811: mov     ecx, 48h ; 'H'
 * 000000014073E816: xor     edx, edx
 * 000000014073E818: wrmsr
 * 000000014073E81A: movzx   edx, byte ptr gs:898h
 * 000000014073E823: test    edx, 8
 * 000000014073E829: jz      short loc_14073E842
 * 000000014073E82B: mov     eax, 1
 * 000000014073E830: xor     edx, edx
 * 000000014073E832: mov     ecx, 49h ; 'I'
 * 000000014073E837: wrmsr
 * 000000014073E839: movzx   edx, byte ptr gs:898h
 * 000000014073E842: test    edx, 2
 * 000000014073E848: jz      loc_14073E985
 * 000000014073E84E: call    loc_14073E961
 * 000000014073E853: add     rsp, 8
 * 000000014073E857: call    loc_14073E96A
 * 000000014073E85C: add     rsp, 8
 * 000000014073E860: call    loc_14073E853
 * 000000014073E865: add     rsp, 8
 * 000000014073E869: call    loc_14073E85C
 * 000000014073E86E: add     rsp, 8
 * 000000014073E872: call    loc_14073E865
 * 000000014073E877: add     rsp, 8
 * 000000014073E87B: call    loc_14073E86E
 * 000000014073E880: add     rsp, 8
 * 000000014073E884: call    loc_14073E877
 * 000000014073E889: add     rsp, 8
 * 000000014073E88D: call    loc_14073E880
 * 000000014073E892: add     rsp, 8
 * 000000014073E896: call    loc_14073E889
 * 000000014073E89B: add     rsp, 8
 * 000000014073E89F: call    loc_14073E892
 * 000000014073E8A4: add     rsp, 8
 * 000000014073E8A8: call    loc_14073E89B
 * 000000014073E8AD: add     rsp, 8
 * 000000014073E8B1: call    loc_14073E8A4
 * 000000014073E8B6: add     rsp, 8
 * 000000014073E8BA: call    loc_14073E8AD
 * 000000014073E8BF: add     rsp, 8
 * 000000014073E8C3: call    loc_14073E8B6
 * 000000014073E8C8: add     rsp, 8
 * 000000014073E8CC: call    loc_14073E8BF
 * 000000014073E8D1: add     rsp, 8
 * 000000014073E8D5: call    loc_14073E8C8
 * 000000014073E8DA: add     rsp, 8
 * 000000014073E8DE: call    loc_14073E8D1
 * 000000014073E8E3: add     rsp, 8
 * 000000014073E8E7: call    loc_14073E8DA
 * 000000014073E8EC: add     rsp, 8
 * 000000014073E8F0: call    loc_14073E8E3
 * 000000014073E8F5: add     rsp, 8
 * 000000014073E8F9: call    loc_14073E8EC
 * 000000014073E8FE: add     rsp, 8
 * 000000014073E902: call    loc_14073E8F5
 * 000000014073E907: add     rsp, 8
 * 000000014073E90B: call    loc_14073E8FE
 * 000000014073E910: add     rsp, 8
 * 000000014073E914: call    loc_14073E907
 * 000000014073E919: add     rsp, 8
 * 000000014073E91D: call    loc_14073E910
 * 000000014073E922: add     rsp, 8
 * 000000014073E926: call    loc_14073E919
 * 000000014073E92B: add     rsp, 8
 * 000000014073E92F: call    loc_14073E922
 * 000000014073E934: add     rsp, 8
 * 000000014073E938: call    loc_14073E92B
 * 000000014073E93D: add     rsp, 8
 * 000000014073E941: call    loc_14073E934
 * 000000014073E946: add     rsp, 8
 * 000000014073E94A: call    loc_14073E93D
 * 000000014073E94F: add     rsp, 8
 * 000000014073E953: call    loc_14073E946
 * 000000014073E958: add     rsp, 8
 * 000000014073E95C: call    loc_14073E94F
 * 000000014073E961: add     rsp, 8
 * 000000014073E965: call    loc_14073E958
 * 000000014073E96A: add     rsp, 8
 * 000000014073E96E: mov     eax, 0DADAh
 * 000000014073E973: test    byte ptr gs:89Ch, 8
 * 000000014073E97C: jz      short loc_14073E985
 * 000000014073E97E: mov     al, 20h ; ' '
 * 000000014073E980: incsspq rax
 * 000000014073E985: test    edx, 80h
 * 000000014073E98B: jz      short loc_14073E995
 * 000000014073E98D: lfence
 * 000000014073E990: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073E995: lfence
 * 000000014073E998: mov     byte ptr gs:89Eh, 0
 * 000000014073E9A1: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073E9A8: jz      short loc_14073E9C9
 * 000000014073E9AA: mov     ecx, 6A7h
 * 000000014073E9AF: rdmsr
 * 000000014073E9B1: cmp     edx, 0
 * 000000014073E9B4: jz      short loc_14073E9C9
 * 000000014073E9B6: mov     ecx, edx
 * 000000014073E9B8: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073E9BE: cmp     edx, ecx
 * 000000014073E9C0: jz      short loc_14073E9C9
 * 000000014073E9C2: mov     ecx, 6A7h
 * 000000014073E9C7: wrmsr
 * 000000014073E9C9: test    byte ptr [r10+3], 3
 * 000000014073E9CE: mov     [rbp+0D8h+var_58], 0
 * 000000014073E9D7: jz      short loc_14073E9DE
 * 000000014073E9D9: call    KiSaveDebugRegisterState
 * 000000014073E9DE: cld
 * 000000014073E9DF: stmxcsr [rbp+0D8h+var_12C]
 * 000000014073E9E3: ldmxcsr dword ptr gs:180h
 * 000000014073E9EC: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014073E9F0: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014073E9F4: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014073E9F8: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014073E9FC: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014073EA00: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014073EA04: test    [rbp+0D8h+arg_8], 1
 * 000000014073EA0B: jz      short KiControlProtectionFaultDispatchTrap
 * 000000014073EA0D: mov     r10, gs:188h
 * 000000014073EA16: test    byte ptr [r10+3], 80h
 * 000000014073EA1B: jz      short KiControlProtectionFaultDispatchTrap
 * 000000014073EA1D: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073EA22: mov     [rbp+0D8h+var_12D], 1
 * 000000014073EA26: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073EA2D: jz      short loc_14073EA50
 * 000000014073EA2F: test    [rbp+0D8h+arg_8], 1
 * 000000014073EA36: jnz     short loc_14073EA4D
 * 000000014073EA38: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073EA3F: jz      short loc_14073EA50
 * 000000014073EA41: test    [rbp+0D8h+arg_10], 40000h
 * 000000014073EA4B: jz      short loc_14073EA50
 * 000000014073EA4D: stac
 * 000000014073EA50: mov     eax, [rbp+0E0h]
 * 000000014073EA56: test    [rbp+0D8h+arg_10], 200h
 * 000000014073EA60: jz      short loc_14073EA63
 * 000000014073EA62: sti
 * 000000014073EA63: test    byte ptr gs:9165h, 40h
 * 000000014073EA6C: jz      loc_14073EB05
 * 000000014073EA72: lea     rcx, [rbp+0D8h+var_158]
 * 000000014073EA76: call    KiProcessControlProtection
 * 000000014073EA7B: cmp     eax, 1
 * 000000014073EA7E: jz      loc_14073EB28
 * 000000014073EA84: cmp     eax, 2
 * 000000014073EA87: jz      short loc_14073EA94
 * 000000014073EA89: cmp     eax, 3
 * 000000014073EA8C: jz      loc_14073EB14
 * 000000014073EA92: jmp     short loc_14073EB05
 * 000000014073EA94: test    [rbp+0D8h+arg_8], 1
 * 000000014073EA9B: jz      short loc_14073EAE0
 * 000000014073EA9D: mov     ecx, 6A7h
 * 000000014073EAA2: rdmsr
 * 000000014073EAA4: shl     rdx, 20h
 * 000000014073EAA8: or      rax, rdx
 * 000000014073EAAB: mov     r10, rax
 * 000000014073EAAE: mov     rcx, gs:188h
 * 000000014073EAB7: mov     rcx, [rcx+220h]
 * 000000014073EABE: mov     r11d, [rcx+754h]
 * 000000014073EAC5: and     r11d, 0C0F6C000h
 * 000000014073EACC: mov     edx, cs:KiUserCetAppcompatOptions
 * 000000014073EAD2: shl     rdx, 20h
 * 000000014073EAD6: or      r11, rdx
 * 000000014073EAD9: mov     edx, 3
 * 000000014073EADE: jmp     short loc_14073EAEC
 * 000000014073EAE0: mov     edx, 2
 * 000000014073EAE5: mov     r10, [rbp+0D8h+var_80]
 * 000000014073EAE9: mov     r10, [r10]
 * 000000014073EAEC: mov     r9, 39h ; '9'
 * 000000014073EAF3: mov     ecx, 0C0000409h
 * 000000014073EAF8: mov     r8, [rbp+0D8h+arg_0]
 * 000000014073EAFF: call    KiFastFailDispatch
 * 000000014073EB04: nop
 * 000000014073EB05: mov     edx, 15h
 * 000000014073EB0A: mov     ecx, 7Fh
 * 000000014073EB0F: call    KiBugCheckDispatch
 * 000000014073EB14: mov     ecx, 80000033h
 * 000000014073EB19: xor     edx, edx
 * 000000014073EB1B: mov     r8, [rbp+0D8h+arg_0]
 * 000000014073EB22: call    KiExceptionDispatch
 * 000000014073EB27: nop
 * 000000014073EB28: cli
 * 000000014073EB29: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073EB30: jz      short loc_14073EB37
 * 000000014073EB32: add     rsp, 28h
 * 000000014073EB36: retn
 * 000000014073EB37: test    [rbp+0D8h+arg_8], 1
 * 000000014073EB3E: jz      loc_14073EE3F
 * 000000014073EB44: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073EB4B: jz      short loc_14073EB50
 * 000000014073EB4D: stac
 * 000000014073EB50: mov     rcx, gs:188h
 * 000000014073EB59: test    byte ptr [rcx+0C2h], 3
 * 000000014073EB60: jz      short loc_14073EB7D
 * 000000014073EB62: mov     ecx, 1
 * 000000014073EB67: mov     cr8, rcx
 * 000000014073EB6B: sti
 * 000000014073EB6C: call    KiInitiateUserApc
 * 000000014073EB71: cli
 * 000000014073EB72: mov     ecx, 0
 * 000000014073EB77: mov     cr8, rcx
 * 000000014073EB7B: jmp     short loc_14073EB50
 * 000000014073EB7D: test    byte ptr [rcx+3], 80h
 * 000000014073EB81: jz      short loc_14073EB90
 * 000000014073EB83: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014073EB88: test    eax, eax
 * 000000014073EB8A: mov     rax, [rbp+0D8h+var_128]
 * 000000014073EB8E: jnz     short loc_14073EB50
 * 000000014073EB90: test    byte ptr gs:8A0h, 2
 * 000000014073EB99: jz      short loc_14073EBA2
 * 000000014073EB9B: xor     ecx, ecx
 * 000000014073EB9D: call    KiUpdateStibpPairing
 * 000000014073EBA2: mov     rcx, gs:188h
 * 000000014073EBAB: test    dword ptr [rcx], 8000000h
 * 000000014073EBB1: jz      short loc_14073EBB8
 * 000000014073EBB3: call    KiRestoreSetContextState
 * 000000014073EBB8: mov     rcx, gs:188h
 * 000000014073EBC1: test    dword ptr [rcx], 10000h
 * 000000014073EBC7: jz      short loc_14073EBDD
 * 000000014073EBC9: test    byte ptr [rcx+2], 1
 * 000000014073EBCD: jz      short loc_14073EBDD
 * 000000014073EBCF: call    KiCopyCounters
 * 000000014073EBD4: mov     rcx, gs:188h
 * 000000014073EBDD: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014073EBE1: cmp     [rbp+0D8h+var_58], 0
 * 000000014073EBE9: jz      short loc_14073EBF0
 * 000000014073EBEB: call    KiRestoreDebugRegisterState
 * 000000014073EBF0: mov     rcx, gs:188h
 * 000000014073EBF9: bt      dword ptr [rcx+74h], 16h
 * 000000014073EBFE: jnb     short loc_14073EC2A
 * 000000014073EC00: xor     ecx, ecx
 * 000000014073EC02: rdsspq  rcx
 * 000000014073EC07: mov     r8, gs:9D68h
 * 000000014073EC10: add     r8, 8
 * 000000014073EC14: cmp     rcx, r8
 * 000000014073EC17: jnz     short loc_14073EC2A
 * 000000014073EC19: mov     rcx, gs:9D60h
 * 000000014073EC22: rstorssp qword ptr [rcx]
 * 000000014073EC26: saveprevssp
 * 000000014073EC2A: mov     byte ptr gs:89Eh, 0
 * 000000014073EC33: movzx   eax, word ptr gs:8ACh
 * 000000014073EC3C: cmp     gs:8A6h, ax
 * 000000014073EC45: jz      short loc_14073EC59
 * 000000014073EC47: mov     gs:8A6h, ax
 * 000000014073EC50: mov     ecx, 48h ; 'H'
 * 000000014073EC55: xor     edx, edx
 * 000000014073EC57: wrmsr
 * 000000014073EC59: btr     word ptr gs:898h, 2
 * 000000014073EC64: jnb     short loc_14073EC74
 * 000000014073EC66: mov     eax, 1
 * 000000014073EC6B: xor     edx, edx
 * 000000014073EC6D: mov     ecx, 49h ; 'I'
 * 000000014073EC72: wrmsr
 * 000000014073EC74: btr     word ptr gs:898h, 5
 * 000000014073EC7F: jnb     loc_14073EDBC
 * 000000014073EC85: call    loc_14073ED98
 * 000000014073EC8A: add     rsp, 8
 * 000000014073EC8E: call    loc_14073EDA1
 * 000000014073EC93: add     rsp, 8
 * 000000014073EC97: call    loc_14073EC8A
 * 000000014073EC9C: add     rsp, 8
 * 000000014073ECA0: call    loc_14073EC93
 * 000000014073ECA5: add     rsp, 8
 * 000000014073ECA9: call    loc_14073EC9C
 * 000000014073ECAE: add     rsp, 8
 * 000000014073ECB2: call    loc_14073ECA5
 * 000000014073ECB7: add     rsp, 8
 * 000000014073ECBB: call    loc_14073ECAE
 * 000000014073ECC0: add     rsp, 8
 * 000000014073ECC4: call    loc_14073ECB7
 * 000000014073ECC9: add     rsp, 8
 * 000000014073ECCD: call    loc_14073ECC0
 * 000000014073ECD2: add     rsp, 8
 * 000000014073ECD6: call    loc_14073ECC9
 * 000000014073ECDB: add     rsp, 8
 * 000000014073ECDF: call    loc_14073ECD2
 * 000000014073ECE4: add     rsp, 8
 * 000000014073ECE8: call    loc_14073ECDB
 * 000000014073ECED: add     rsp, 8
 * 000000014073ECF1: call    loc_14073ECE4
 * 000000014073ECF6: add     rsp, 8
 * 000000014073ECFA: call    loc_14073ECED
 * 000000014073ECFF: add     rsp, 8
 * 000000014073ED03: call    loc_14073ECF6
 * 000000014073ED08: add     rsp, 8
 * 000000014073ED0C: call    loc_14073ECFF
 * 000000014073ED11: add     rsp, 8
 * 000000014073ED15: call    loc_14073ED08
 * 000000014073ED1A: add     rsp, 8
 * 000000014073ED1E: call    loc_14073ED11
 * 000000014073ED23: add     rsp, 8
 * 000000014073ED27: call    loc_14073ED1A
 * 000000014073ED2C: add     rsp, 8
 * 000000014073ED30: call    loc_14073ED23
 * 000000014073ED35: add     rsp, 8
 * 000000014073ED39: call    loc_14073ED2C
 * 000000014073ED3E: add     rsp, 8
 * 000000014073ED42: call    loc_14073ED35
 * 000000014073ED47: add     rsp, 8
 * 000000014073ED4B: call    loc_14073ED3E
 * 000000014073ED50: add     rsp, 8
 * 000000014073ED54: call    loc_14073ED47
 * 000000014073ED59: add     rsp, 8
 * 000000014073ED5D: call    loc_14073ED50
 * 000000014073ED62: add     rsp, 8
 * 000000014073ED66: call    loc_14073ED59
 * 000000014073ED6B: add     rsp, 8
 * 000000014073ED6F: call    loc_14073ED62
 * 000000014073ED74: add     rsp, 8
 * 000000014073ED78: call    loc_14073ED6B
 * 000000014073ED7D: add     rsp, 8
 * 000000014073ED81: call    loc_14073ED74
 * 000000014073ED86: add     rsp, 8
 * 000000014073ED8A: call    loc_14073ED7D
 * 000000014073ED8F: add     rsp, 8
 * 000000014073ED93: call    loc_14073ED86
 * 000000014073ED98: add     rsp, 8
 * 000000014073ED9C: call    loc_14073ED8F
 * 000000014073EDA1: add     rsp, 8
 * 000000014073EDA5: mov     eax, 0DADAh
 * 000000014073EDAA: test    byte ptr gs:89Ch, 8
 * 000000014073EDB3: jz      short loc_14073EDBC
 * 000000014073EDB5: mov     al, 20h ; ' '
 * 000000014073EDB7: incsspq rax
 * 000000014073EDBC: test    word ptr gs:898h, 100h
 * 000000014073EDC7: jz      short loc_14073EDD5
 * 000000014073EDC9: xor     eax, eax
 * 000000014073EDCB: xor     edx, edx
 * 000000014073EDCD: mov     ecx, 1
 * 000000014073EDD2: div     rcx
 * 000000014073EDD5: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014073EDD9: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014073EDDD: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014073EDE1: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014073EDE5: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014073EDE9: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014073EDED: mov     r11, [rbp+0D8h+var_F8]
 * 000000014073EDF1: mov     r10, [rbp+0D8h+var_100]
 * 000000014073EDF5: mov     r9, [rbp+0D8h+var_108]
 * 000000014073EDF9: mov     r8, [rbp+0D8h+var_110]
 * 000000014073EDFD: mov     rdx, [rbp+0D8h+var_118]
 * 000000014073EE01: mov     rcx, [rbp+0D8h+var_120]
 * 000000014073EE05: mov     rax, [rbp+0D8h+var_128]
 * 000000014073EE09: mov     rsp, rbp
 * 000000014073EE0C: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014073EE13: add     rsp, 0E8h
 * 000000014073EE1A: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073EE21: jz      short loc_14073EE28
 * 000000014073EE23: jmp     KiKernelExit
 * 000000014073EE28: test    word ptr gs:898h, 200h
 * 000000014073EE33: jz      short loc_14073EE3A
 * 000000014073EE35: verw    [rsp-10h+arg_20]
 * 000000014073EE3A: swapgs
 * 000000014073EE3D: iretq
 * 000000014073EE3F: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014073EE43: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014073EE47: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014073EE4B: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014073EE4F: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014073EE53: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014073EE57: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014073EE5B: mov     r11, [rbp+0D8h+var_F8]
 * 000000014073EE5F: mov     r10, [rbp+0D8h+var_100]
 * 000000014073EE63: mov     r9, [rbp+0D8h+var_108]
 * 000000014073EE67: mov     r8, [rbp+0D8h+var_110]
 * 000000014073EE6B: mov     rdx, [rbp+0D8h+var_118]
 * 000000014073EE6F: mov     rcx, [rbp+0D8h+var_120]
 * 000000014073EE73: mov     rax, [rbp+0D8h+var_128]
 * 000000014073EE77: mov     rsp, rbp
 * 000000014073EE7A: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014073EE81: add     rsp, 0E8h
 * 000000014073EE88: iretq
 * 000000014073EE8A: retn
 */
