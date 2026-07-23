/*
 * XREFs of KxIsrLinkage @ 0x1407307F0
 * Callers:
 *     KxIsrLinkageShadow @ 0x140C60B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021E2A0 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x140229AE0 (KiStartInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032FAB0 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1406C9D30 (PerfInfoLogUnexpectedInterrupt.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140734290 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1407307F0
 * Reason: Hex-Rays returned no pseudocode for 0x1407307F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407307F0: push    rbp
 * 00000001407307F1: sub     rsp, 158h
 * 00000001407307F8: lea     rbp, [rsp+80h]
 * 0000000140730800: mov     [rbp+0D8h+var_8], rsi
 * 0000000140730807: mov     [rbp+0D8h+var_128], rax
 * 000000014073080B: mov     [rbp+0D8h+var_120], rcx
 * 000000014073080F: mov     [rbp+0D8h+var_118], rdx
 * 0000000140730813: mov     [rbp+0D8h+var_110], r8
 * 0000000140730817: mov     [rbp+0D8h+var_108], r9
 * 000000014073081B: mov     [rbp+0D8h+var_100], r10
 * 000000014073081F: mov     [rbp+0D8h+var_F8], r11
 * 0000000140730823: test    [rbp+0D8h+arg_8], 1
 * 000000014073082A: jnz     short loc_140730864
 * 000000014073082C: xor     edx, edx
 * 000000014073082E: rdsspq  rdx
 * 0000000140730833: mov     [rbp+0D8h+var_80], rdx
 * 0000000140730837: lfence
 * 000000014073083A: test    byte ptr gs:898h, 1
 * 0000000140730843: jnz     short loc_14073084D
 * 0000000140730845: lfence
 * 0000000140730848: jmp     loc_140730AD5
 * 000000014073084D: movzx   eax, word ptr gs:8A6h
 * 0000000140730856: mov     ecx, 48h ; 'H'
 * 000000014073085B: xor     edx, edx
 * 000000014073085D: wrmsr
 * 000000014073085F: jmp     loc_140730AD5
 * 0000000140730864: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073086B: jnz     short loc_140730870
 * 000000014073086D: swapgs
 * 0000000140730870: lfence
 * 0000000140730873: mov     rcx, gs:9D68h
 * 000000014073087C: test    rcx, rcx
 * 000000014073087F: jz      short loc_1407308A0
 * 0000000140730881: rdsspq  rdx
 * 0000000140730886: mov     r10, gs:9D60h
 * 000000014073088F: add     r10, 8
 * 0000000140730893: cmp     rdx, r10
 * 0000000140730896: jnz     short loc_1407308A0
 * 0000000140730898: rstorssp qword ptr [rcx]
 * 000000014073089C: saveprevssp
 * 00000001407308A0: mov     r10, gs:188h
 * 00000001407308A9: mov     rcx, gs:188h
 * 00000001407308B2: mov     rcx, [rcx+220h]
 * 00000001407308B9: mov     rcx, [rcx+760h]
 * 00000001407308C0: mov     gs:890h, rcx
 * 00000001407308C9: mov     cx, gs:8A2h
 * 00000001407308D2: mov     gs:8A4h, cx
 * 00000001407308DB: mov     cl, gs:898h
 * 00000001407308E3: mov     gs:89Ah, cl
 * 00000001407308EB: movzx   eax, word ptr gs:8A8h
 * 00000001407308F4: cmp     gs:8A6h, ax
 * 00000001407308FD: jz      short loc_140730911
 * 00000001407308FF: mov     gs:8A6h, ax
 * 0000000140730908: mov     ecx, 48h ; 'H'
 * 000000014073090D: xor     edx, edx
 * 000000014073090F: wrmsr
 * 0000000140730911: movzx   edx, byte ptr gs:898h
 * 000000014073091A: test    edx, 8
 * 0000000140730920: jz      short loc_140730939
 * 0000000140730922: mov     eax, 1
 * 0000000140730927: xor     edx, edx
 * 0000000140730929: mov     ecx, 49h ; 'I'
 * 000000014073092E: wrmsr
 * 0000000140730930: movzx   edx, byte ptr gs:898h
 * 0000000140730939: test    edx, 2
 * 000000014073093F: jz      loc_140730A7C
 * 0000000140730945: call    loc_140730A58
 * 000000014073094A: add     rsp, 8
 * 000000014073094E: call    loc_140730A61
 * 0000000140730953: add     rsp, 8
 * 0000000140730957: call    loc_14073094A
 * 000000014073095C: add     rsp, 8
 * 0000000140730960: call    loc_140730953
 * 0000000140730965: add     rsp, 8
 * 0000000140730969: call    loc_14073095C
 * 000000014073096E: add     rsp, 8
 * 0000000140730972: call    loc_140730965
 * 0000000140730977: add     rsp, 8
 * 000000014073097B: call    loc_14073096E
 * 0000000140730980: add     rsp, 8
 * 0000000140730984: call    loc_140730977
 * 0000000140730989: add     rsp, 8
 * 000000014073098D: call    loc_140730980
 * 0000000140730992: add     rsp, 8
 * 0000000140730996: call    loc_140730989
 * 000000014073099B: add     rsp, 8
 * 000000014073099F: call    loc_140730992
 * 00000001407309A4: add     rsp, 8
 * 00000001407309A8: call    loc_14073099B
 * 00000001407309AD: add     rsp, 8
 * 00000001407309B1: call    loc_1407309A4
 * 00000001407309B6: add     rsp, 8
 * 00000001407309BA: call    loc_1407309AD
 * 00000001407309BF: add     rsp, 8
 * 00000001407309C3: call    loc_1407309B6
 * 00000001407309C8: add     rsp, 8
 * 00000001407309CC: call    loc_1407309BF
 * 00000001407309D1: add     rsp, 8
 * 00000001407309D5: call    loc_1407309C8
 * 00000001407309DA: add     rsp, 8
 * 00000001407309DE: call    loc_1407309D1
 * 00000001407309E3: add     rsp, 8
 * 00000001407309E7: call    loc_1407309DA
 * 00000001407309EC: add     rsp, 8
 * 00000001407309F0: call    loc_1407309E3
 * 00000001407309F5: add     rsp, 8
 * 00000001407309F9: call    loc_1407309EC
 * 00000001407309FE: add     rsp, 8
 * 0000000140730A02: call    loc_1407309F5
 * 0000000140730A07: add     rsp, 8
 * 0000000140730A0B: call    loc_1407309FE
 * 0000000140730A10: add     rsp, 8
 * 0000000140730A14: call    loc_140730A07
 * 0000000140730A19: add     rsp, 8
 * 0000000140730A1D: call    loc_140730A10
 * 0000000140730A22: add     rsp, 8
 * 0000000140730A26: call    loc_140730A19
 * 0000000140730A2B: add     rsp, 8
 * 0000000140730A2F: call    loc_140730A22
 * 0000000140730A34: add     rsp, 8
 * 0000000140730A38: call    loc_140730A2B
 * 0000000140730A3D: add     rsp, 8
 * 0000000140730A41: call    loc_140730A34
 * 0000000140730A46: add     rsp, 8
 * 0000000140730A4A: call    loc_140730A3D
 * 0000000140730A4F: add     rsp, 8
 * 0000000140730A53: call    loc_140730A46
 * 0000000140730A58: add     rsp, 8
 * 0000000140730A5C: call    loc_140730A4F
 * 0000000140730A61: add     rsp, 8
 * 0000000140730A65: mov     eax, 0DADAh
 * 0000000140730A6A: test    byte ptr gs:89Ch, 8
 * 0000000140730A73: jz      short loc_140730A7C
 * 0000000140730A75: mov     al, 20h ; ' '
 * 0000000140730A77: incsspq rax
 * 0000000140730A7C: test    edx, 80h
 * 0000000140730A82: jz      short loc_140730A8C
 * 0000000140730A84: lfence
 * 0000000140730A87: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140730A8C: lfence
 * 0000000140730A8F: mov     byte ptr gs:89Eh, 0
 * 0000000140730A98: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140730A9F: jz      short loc_140730AC0
 * 0000000140730AA1: mov     ecx, 6A7h
 * 0000000140730AA6: rdmsr
 * 0000000140730AA8: cmp     edx, 0
 * 0000000140730AAB: jz      short loc_140730AC0
 * 0000000140730AAD: mov     ecx, edx
 * 0000000140730AAF: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140730AB5: cmp     edx, ecx
 * 0000000140730AB7: jz      short loc_140730AC0
 * 0000000140730AB9: mov     ecx, 6A7h
 * 0000000140730ABE: wrmsr
 * 0000000140730AC0: test    byte ptr [r10+3], 3
 * 0000000140730AC5: mov     [rbp+0D8h+var_58], 0
 * 0000000140730ACE: jz      short loc_140730AD5
 * 0000000140730AD0: call    KiSaveDebugRegisterState
 * 0000000140730AD5: cld
 * 0000000140730AD6: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140730ADA: ldmxcsr dword ptr gs:180h
 * 0000000140730AE3: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140730AE7: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140730AEB: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140730AEF: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140730AF3: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140730AF7: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140730AFB: test    [rbp+0D8h+arg_8], 1
 * 0000000140730B02: jz      short KiIsrLinkageDispatchTrap
 * 0000000140730B04: mov     r10, gs:188h
 * 0000000140730B0D: test    byte ptr [r10+3], 80h
 * 0000000140730B12: jz      short KiIsrLinkageDispatchTrap
 * 0000000140730B14: call    KiSynchronizeUserIsolationDomainExit
 * 0000000140730B19: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140730B20: jz      short loc_140730B29
 * 0000000140730B22: mov     [rbp+0D8h+var_8], rsi
 * 0000000140730B29: mov     [rbp+0D8h+var_12D], 0
 * 0000000140730B2D: cmp     byte ptr gs:87DAh, 0
 * 0000000140730B36: jz      short loc_140730B3D
 * 0000000140730B38: call    KeWakeProcessor
 * 0000000140730B3D: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140730B44: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140730B4B: jnb     short loc_140730B66
 * 0000000140730B4D: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140730B54: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140730B5B: jb      short loc_140730B66
 * 0000000140730B5D: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140730B61: call    KiCheckForSListAddress
 * 0000000140730B66: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140730B6D: mov     rsi, gs:20h
 * 0000000140730B76: mov     rsi, [rsi+rax*8+3900h]
 * 0000000140730B7E: inc     dword ptr gs:87C0h
 * 0000000140730B86: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140730B8D: jz      short loc_140730B92
 * 0000000140730B8F: clac
 * 0000000140730B92: test    rsi, rsi
 * 0000000140730B95: jz      short loc_140730BA0
 * 0000000140730B97: mov     rax, [rsi+50h]
 * 0000000140730B9B: jmp     _guard_dispatch_icall_no_overrides
 * 0000000140730BA0: mov     ecx, eax
 * 0000000140730BA2: shr     ecx, 4
 * 0000000140730BA5: cmp     cs:KiIrqlFlags, 0
 * 0000000140730BAC: jz      short loc_140730BB5
 * 0000000140730BAE: call    KzSetIrqlUnsafe
 * 0000000140730BB3: jmp     short loc_140730BBD
 * 0000000140730BB5: mov     rax, cr8
 * 0000000140730BB9: mov     cr8, rcx
 * 0000000140730BBD: mov     [rbp+0D8h+var_12F], al
 * 0000000140730BC0: mov     rcx, gs:20h
 * 0000000140730BC9: xor     edx, edx
 * 0000000140730BCB: call    KiStartInterruptCycleAccumulation
 * 0000000140730BD0: sti
 * 0000000140730BD1: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 0000000140730BDB: jz      short loc_140730BE9
 * 0000000140730BDD: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140730BE4: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140730BE9: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 0000000140730BF0: jz      short loc_140730C11
 * 0000000140730BF2: and     [rbp+0D8h+var_138], 0
 * 0000000140730BF7: xor     r9, r9
 * 0000000140730BFA: movzx   r8d, byte ptr [rbp+0E0h]
 * 0000000140730C02: mov     edx, 1
 * 0000000140730C07: mov     ecx, 12h
 * 0000000140730C0C: call    KiBugCheckDispatch
 * 0000000140730C11: cli
 * 0000000140730C12: mov     rcx, rsi
 * 0000000140730C15: call    HalPerformEndOfInterrupt
 * 0000000140730C1A: mov     rcx, gs:20h
 * 0000000140730C23: movzx   edx, [rbp+0D8h+var_12F]
 * 0000000140730C27: call    KiEndInterruptCycleAccumulation
 * 0000000140730C2C: test    al, al
 * 0000000140730C2E: jz      short loc_140730C35
 * 0000000140730C30: call    KiDpcInterruptBypass
 * 0000000140730C35: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140730C39: cmp     cs:KiIrqlFlags, 0
 * 0000000140730C40: jz      short loc_140730C49
 * 0000000140730C42: call    KzSetIrqlUnsafe
 * 0000000140730C47: jmp     short loc_140730C4D
 * 0000000140730C49: mov     cr8, rcx
 * 0000000140730C4D: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140730C54: cli
 * 0000000140730C55: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140730C5C: jz      short loc_140730C63
 * 0000000140730C5E: add     rsp, 28h
 * 0000000140730C62: retn
 * 0000000140730C63: test    [rbp+0D8h+arg_8], 1
 * 0000000140730C6A: jz      loc_140730F6B
 * 0000000140730C70: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140730C77: jz      short loc_140730C7C
 * 0000000140730C79: stac
 * 0000000140730C7C: mov     rcx, gs:188h
 * 0000000140730C85: test    byte ptr [rcx+0C2h], 3
 * 0000000140730C8C: jz      short loc_140730CA9
 * 0000000140730C8E: mov     ecx, 1
 * 0000000140730C93: mov     cr8, rcx
 * 0000000140730C97: sti
 * 0000000140730C98: call    KiInitiateUserApc
 * 0000000140730C9D: cli
 * 0000000140730C9E: mov     ecx, 0
 * 0000000140730CA3: mov     cr8, rcx
 * 0000000140730CA7: jmp     short loc_140730C7C
 * 0000000140730CA9: test    byte ptr [rcx+3], 80h
 * 0000000140730CAD: jz      short loc_140730CBC
 * 0000000140730CAF: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140730CB4: test    eax, eax
 * 0000000140730CB6: mov     rax, [rbp+0D8h+var_128]
 * 0000000140730CBA: jnz     short loc_140730C7C
 * 0000000140730CBC: test    byte ptr gs:8A0h, 2
 * 0000000140730CC5: jz      short loc_140730CCE
 * 0000000140730CC7: xor     ecx, ecx
 * 0000000140730CC9: call    KiUpdateStibpPairing
 * 0000000140730CCE: mov     rcx, gs:188h
 * 0000000140730CD7: test    dword ptr [rcx], 8000000h
 * 0000000140730CDD: jz      short loc_140730CE4
 * 0000000140730CDF: call    KiRestoreSetContextState
 * 0000000140730CE4: mov     rcx, gs:188h
 * 0000000140730CED: test    dword ptr [rcx], 10000h
 * 0000000140730CF3: jz      short loc_140730D09
 * 0000000140730CF5: test    byte ptr [rcx+2], 1
 * 0000000140730CF9: jz      short loc_140730D09
 * 0000000140730CFB: call    KiCopyCounters
 * 0000000140730D00: mov     rcx, gs:188h
 * 0000000140730D09: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140730D0D: cmp     [rbp+0D8h+var_58], 0
 * 0000000140730D15: jz      short loc_140730D1C
 * 0000000140730D17: call    KiRestoreDebugRegisterState
 * 0000000140730D1C: mov     rcx, gs:188h
 * 0000000140730D25: bt      dword ptr [rcx+74h], 16h
 * 0000000140730D2A: jnb     short loc_140730D56
 * 0000000140730D2C: xor     ecx, ecx
 * 0000000140730D2E: rdsspq  rcx
 * 0000000140730D33: mov     r8, gs:9D68h
 * 0000000140730D3C: add     r8, 8
 * 0000000140730D40: cmp     rcx, r8
 * 0000000140730D43: jnz     short loc_140730D56
 * 0000000140730D45: mov     rcx, gs:9D60h
 * 0000000140730D4E: rstorssp qword ptr [rcx]
 * 0000000140730D52: saveprevssp
 * 0000000140730D56: mov     byte ptr gs:89Eh, 0
 * 0000000140730D5F: movzx   eax, word ptr gs:8ACh
 * 0000000140730D68: cmp     gs:8A6h, ax
 * 0000000140730D71: jz      short loc_140730D85
 * 0000000140730D73: mov     gs:8A6h, ax
 * 0000000140730D7C: mov     ecx, 48h ; 'H'
 * 0000000140730D81: xor     edx, edx
 * 0000000140730D83: wrmsr
 * 0000000140730D85: btr     word ptr gs:898h, 2
 * 0000000140730D90: jnb     short loc_140730DA0
 * 0000000140730D92: mov     eax, 1
 * 0000000140730D97: xor     edx, edx
 * 0000000140730D99: mov     ecx, 49h ; 'I'
 * 0000000140730D9E: wrmsr
 * 0000000140730DA0: btr     word ptr gs:898h, 5
 * 0000000140730DAB: jnb     loc_140730EE8
 * 0000000140730DB1: call    loc_140730EC4
 * 0000000140730DB6: add     rsp, 8
 * 0000000140730DBA: call    loc_140730ECD
 * 0000000140730DBF: add     rsp, 8
 * 0000000140730DC3: call    loc_140730DB6
 * 0000000140730DC8: add     rsp, 8
 * 0000000140730DCC: call    loc_140730DBF
 * 0000000140730DD1: add     rsp, 8
 * 0000000140730DD5: call    loc_140730DC8
 * 0000000140730DDA: add     rsp, 8
 * 0000000140730DDE: call    loc_140730DD1
 * 0000000140730DE3: add     rsp, 8
 * 0000000140730DE7: call    loc_140730DDA
 * 0000000140730DEC: add     rsp, 8
 * 0000000140730DF0: call    loc_140730DE3
 * 0000000140730DF5: add     rsp, 8
 * 0000000140730DF9: call    loc_140730DEC
 * 0000000140730DFE: add     rsp, 8
 * 0000000140730E02: call    loc_140730DF5
 * 0000000140730E07: add     rsp, 8
 * 0000000140730E0B: call    loc_140730DFE
 * 0000000140730E10: add     rsp, 8
 * 0000000140730E14: call    loc_140730E07
 * 0000000140730E19: add     rsp, 8
 * 0000000140730E1D: call    loc_140730E10
 * 0000000140730E22: add     rsp, 8
 * 0000000140730E26: call    loc_140730E19
 * 0000000140730E2B: add     rsp, 8
 * 0000000140730E2F: call    loc_140730E22
 * 0000000140730E34: add     rsp, 8
 * 0000000140730E38: call    loc_140730E2B
 * 0000000140730E3D: add     rsp, 8
 * 0000000140730E41: call    loc_140730E34
 * 0000000140730E46: add     rsp, 8
 * 0000000140730E4A: call    loc_140730E3D
 * 0000000140730E4F: add     rsp, 8
 * 0000000140730E53: call    loc_140730E46
 * 0000000140730E58: add     rsp, 8
 * 0000000140730E5C: call    loc_140730E4F
 * 0000000140730E61: add     rsp, 8
 * 0000000140730E65: call    loc_140730E58
 * 0000000140730E6A: add     rsp, 8
 * 0000000140730E6E: call    loc_140730E61
 * 0000000140730E73: add     rsp, 8
 * 0000000140730E77: call    loc_140730E6A
 * 0000000140730E7C: add     rsp, 8
 * 0000000140730E80: call    loc_140730E73
 * 0000000140730E85: add     rsp, 8
 * 0000000140730E89: call    loc_140730E7C
 * 0000000140730E8E: add     rsp, 8
 * 0000000140730E92: call    loc_140730E85
 * 0000000140730E97: add     rsp, 8
 * 0000000140730E9B: call    loc_140730E8E
 * 0000000140730EA0: add     rsp, 8
 * 0000000140730EA4: call    loc_140730E97
 * 0000000140730EA9: add     rsp, 8
 * 0000000140730EAD: call    loc_140730EA0
 * 0000000140730EB2: add     rsp, 8
 * 0000000140730EB6: call    loc_140730EA9
 * 0000000140730EBB: add     rsp, 8
 * 0000000140730EBF: call    loc_140730EB2
 * 0000000140730EC4: add     rsp, 8
 * 0000000140730EC8: call    loc_140730EBB
 * 0000000140730ECD: add     rsp, 8
 * 0000000140730ED1: mov     eax, 0DADAh
 * 0000000140730ED6: test    byte ptr gs:89Ch, 8
 * 0000000140730EDF: jz      short loc_140730EE8
 * 0000000140730EE1: mov     al, 20h ; ' '
 * 0000000140730EE3: incsspq rax
 * 0000000140730EE8: test    word ptr gs:898h, 100h
 * 0000000140730EF3: jz      short loc_140730F01
 * 0000000140730EF5: xor     eax, eax
 * 0000000140730EF7: xor     edx, edx
 * 0000000140730EF9: mov     ecx, 1
 * 0000000140730EFE: div     rcx
 * 0000000140730F01: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140730F05: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140730F09: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140730F0D: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140730F11: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140730F15: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140730F19: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140730F1D: mov     r10, [rbp+0D8h+var_100]
 * 0000000140730F21: mov     r9, [rbp+0D8h+var_108]
 * 0000000140730F25: mov     r8, [rbp+0D8h+var_110]
 * 0000000140730F29: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140730F2D: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140730F31: mov     rax, [rbp+0D8h+var_128]
 * 0000000140730F35: mov     rsp, rbp
 * 0000000140730F38: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140730F3F: add     rsp, 0E8h
 * 0000000140730F46: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140730F4D: jz      short loc_140730F54
 * 0000000140730F4F: jmp     KiKernelExit
 * 0000000140730F54: test    word ptr gs:898h, 200h
 * 0000000140730F5F: jz      short loc_140730F66
 * 0000000140730F61: verw    [rsp-10h+arg_20]
 * 0000000140730F66: swapgs
 * 0000000140730F69: iretq
 * 0000000140730F6B: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140730F6F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140730F73: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140730F77: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140730F7B: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140730F7F: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140730F83: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140730F87: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140730F8B: mov     r10, [rbp+0D8h+var_100]
 * 0000000140730F8F: mov     r9, [rbp+0D8h+var_108]
 * 0000000140730F93: mov     r8, [rbp+0D8h+var_110]
 * 0000000140730F97: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140730F9B: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140730F9F: mov     rax, [rbp+0D8h+var_128]
 * 0000000140730FA3: mov     rsp, rbp
 * 0000000140730FA6: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140730FAD: add     rsp, 0E8h
 * 0000000140730FB4: iretq
 */
