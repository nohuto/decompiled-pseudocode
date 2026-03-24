/*
 * XREFs of KxIsrLinkage @ 0x14072BC20
 * Callers:
 *     KxIsrLinkageShadow @ 0x140C5AB00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14021C910 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x140228150 (KiStartInterruptCycleAccumulation.c)
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1406C6090 (PerfInfoLogUnexpectedInterrupt.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x14072BC20 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x14072F6C0 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x14073C4C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x14072BC20
 * Reason: Hex-Rays returned no pseudocode for 0x14072BC20
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072BC20: push    rbp
 * 000000014072BC21: sub     rsp, 158h
 * 000000014072BC28: lea     rbp, [rsp+80h]
 * 000000014072BC30: mov     [rbp+0D8h+var_8], rsi
 * 000000014072BC37: mov     [rbp+0D8h+var_128], rax
 * 000000014072BC3B: mov     [rbp+0D8h+var_120], rcx
 * 000000014072BC3F: mov     [rbp+0D8h+var_118], rdx
 * 000000014072BC43: mov     [rbp+0D8h+var_110], r8
 * 000000014072BC47: mov     [rbp+0D8h+var_108], r9
 * 000000014072BC4B: mov     [rbp+0D8h+var_100], r10
 * 000000014072BC4F: mov     [rbp+0D8h+var_F8], r11
 * 000000014072BC53: test    [rbp+0D8h+arg_8], 1
 * 000000014072BC5A: jnz     short loc_14072BC94
 * 000000014072BC5C: xor     edx, edx
 * 000000014072BC5E: rdsspq  rdx
 * 000000014072BC63: mov     [rbp+0D8h+var_80], rdx
 * 000000014072BC67: lfence
 * 000000014072BC6A: test    byte ptr gs:898h, 1
 * 000000014072BC73: jnz     short loc_14072BC7D
 * 000000014072BC75: lfence
 * 000000014072BC78: jmp     loc_14072BF05
 * 000000014072BC7D: movzx   eax, word ptr gs:8A6h
 * 000000014072BC86: mov     ecx, 48h ; 'H'
 * 000000014072BC8B: xor     edx, edx
 * 000000014072BC8D: wrmsr
 * 000000014072BC8F: jmp     loc_14072BF05
 * 000000014072BC94: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072BC9B: jnz     short loc_14072BCA0
 * 000000014072BC9D: swapgs
 * 000000014072BCA0: lfence
 * 000000014072BCA3: mov     rcx, gs:9D68h
 * 000000014072BCAC: test    rcx, rcx
 * 000000014072BCAF: jz      short loc_14072BCD0
 * 000000014072BCB1: rdsspq  rdx
 * 000000014072BCB6: mov     r10, gs:9D60h
 * 000000014072BCBF: add     r10, 8
 * 000000014072BCC3: cmp     rdx, r10
 * 000000014072BCC6: jnz     short loc_14072BCD0
 * 000000014072BCC8: rstorssp qword ptr [rcx]
 * 000000014072BCCC: saveprevssp
 * 000000014072BCD0: mov     r10, gs:188h
 * 000000014072BCD9: mov     rcx, gs:188h
 * 000000014072BCE2: mov     rcx, [rcx+220h]
 * 000000014072BCE9: mov     rcx, [rcx+760h]
 * 000000014072BCF0: mov     gs:890h, rcx
 * 000000014072BCF9: mov     cx, gs:8A2h
 * 000000014072BD02: mov     gs:8A4h, cx
 * 000000014072BD0B: mov     cl, gs:898h
 * 000000014072BD13: mov     gs:89Ah, cl
 * 000000014072BD1B: movzx   eax, word ptr gs:8A8h
 * 000000014072BD24: cmp     gs:8A6h, ax
 * 000000014072BD2D: jz      short loc_14072BD41
 * 000000014072BD2F: mov     gs:8A6h, ax
 * 000000014072BD38: mov     ecx, 48h ; 'H'
 * 000000014072BD3D: xor     edx, edx
 * 000000014072BD3F: wrmsr
 * 000000014072BD41: movzx   edx, byte ptr gs:898h
 * 000000014072BD4A: test    edx, 8
 * 000000014072BD50: jz      short loc_14072BD69
 * 000000014072BD52: mov     eax, 1
 * 000000014072BD57: xor     edx, edx
 * 000000014072BD59: mov     ecx, 49h ; 'I'
 * 000000014072BD5E: wrmsr
 * 000000014072BD60: movzx   edx, byte ptr gs:898h
 * 000000014072BD69: test    edx, 2
 * 000000014072BD6F: jz      loc_14072BEAC
 * 000000014072BD75: call    loc_14072BE88
 * 000000014072BD7A: add     rsp, 8
 * 000000014072BD7E: call    loc_14072BE91
 * 000000014072BD83: add     rsp, 8
 * 000000014072BD87: call    loc_14072BD7A
 * 000000014072BD8C: add     rsp, 8
 * 000000014072BD90: call    loc_14072BD83
 * 000000014072BD95: add     rsp, 8
 * 000000014072BD99: call    loc_14072BD8C
 * 000000014072BD9E: add     rsp, 8
 * 000000014072BDA2: call    loc_14072BD95
 * 000000014072BDA7: add     rsp, 8
 * 000000014072BDAB: call    loc_14072BD9E
 * 000000014072BDB0: add     rsp, 8
 * 000000014072BDB4: call    loc_14072BDA7
 * 000000014072BDB9: add     rsp, 8
 * 000000014072BDBD: call    loc_14072BDB0
 * 000000014072BDC2: add     rsp, 8
 * 000000014072BDC6: call    loc_14072BDB9
 * 000000014072BDCB: add     rsp, 8
 * 000000014072BDCF: call    loc_14072BDC2
 * 000000014072BDD4: add     rsp, 8
 * 000000014072BDD8: call    loc_14072BDCB
 * 000000014072BDDD: add     rsp, 8
 * 000000014072BDE1: call    loc_14072BDD4
 * 000000014072BDE6: add     rsp, 8
 * 000000014072BDEA: call    loc_14072BDDD
 * 000000014072BDEF: add     rsp, 8
 * 000000014072BDF3: call    loc_14072BDE6
 * 000000014072BDF8: add     rsp, 8
 * 000000014072BDFC: call    loc_14072BDEF
 * 000000014072BE01: add     rsp, 8
 * 000000014072BE05: call    loc_14072BDF8
 * 000000014072BE0A: add     rsp, 8
 * 000000014072BE0E: call    loc_14072BE01
 * 000000014072BE13: add     rsp, 8
 * 000000014072BE17: call    loc_14072BE0A
 * 000000014072BE1C: add     rsp, 8
 * 000000014072BE20: call    loc_14072BE13
 * 000000014072BE25: add     rsp, 8
 * 000000014072BE29: call    loc_14072BE1C
 * 000000014072BE2E: add     rsp, 8
 * 000000014072BE32: call    loc_14072BE25
 * 000000014072BE37: add     rsp, 8
 * 000000014072BE3B: call    loc_14072BE2E
 * 000000014072BE40: add     rsp, 8
 * 000000014072BE44: call    loc_14072BE37
 * 000000014072BE49: add     rsp, 8
 * 000000014072BE4D: call    loc_14072BE40
 * 000000014072BE52: add     rsp, 8
 * 000000014072BE56: call    loc_14072BE49
 * 000000014072BE5B: add     rsp, 8
 * 000000014072BE5F: call    loc_14072BE52
 * 000000014072BE64: add     rsp, 8
 * 000000014072BE68: call    loc_14072BE5B
 * 000000014072BE6D: add     rsp, 8
 * 000000014072BE71: call    loc_14072BE64
 * 000000014072BE76: add     rsp, 8
 * 000000014072BE7A: call    loc_14072BE6D
 * 000000014072BE7F: add     rsp, 8
 * 000000014072BE83: call    loc_14072BE76
 * 000000014072BE88: add     rsp, 8
 * 000000014072BE8C: call    loc_14072BE7F
 * 000000014072BE91: add     rsp, 8
 * 000000014072BE95: mov     eax, 0DADAh
 * 000000014072BE9A: test    byte ptr gs:89Ch, 8
 * 000000014072BEA3: jz      short loc_14072BEAC
 * 000000014072BEA5: mov     al, 20h ; ' '
 * 000000014072BEA7: incsspq rax
 * 000000014072BEAC: test    edx, 80h
 * 000000014072BEB2: jz      short loc_14072BEBC
 * 000000014072BEB4: lfence
 * 000000014072BEB7: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072BEBC: lfence
 * 000000014072BEBF: mov     byte ptr gs:89Eh, 0
 * 000000014072BEC8: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072BECF: jz      short loc_14072BEF0
 * 000000014072BED1: mov     ecx, 6A7h
 * 000000014072BED6: rdmsr
 * 000000014072BED8: cmp     edx, 0
 * 000000014072BEDB: jz      short loc_14072BEF0
 * 000000014072BEDD: mov     ecx, edx
 * 000000014072BEDF: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072BEE5: cmp     edx, ecx
 * 000000014072BEE7: jz      short loc_14072BEF0
 * 000000014072BEE9: mov     ecx, 6A7h
 * 000000014072BEEE: wrmsr
 * 000000014072BEF0: test    byte ptr [r10+3], 3
 * 000000014072BEF5: mov     [rbp+0D8h+var_58], 0
 * 000000014072BEFE: jz      short loc_14072BF05
 * 000000014072BF00: call    KiSaveDebugRegisterState
 * 000000014072BF05: cld
 * 000000014072BF06: stmxcsr [rbp+0D8h+var_12C]
 * 000000014072BF0A: ldmxcsr dword ptr gs:180h
 * 000000014072BF13: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014072BF17: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014072BF1B: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014072BF1F: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014072BF23: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014072BF27: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014072BF2B: test    [rbp+0D8h+arg_8], 1
 * 000000014072BF32: jz      short KiIsrLinkageDispatchTrap
 * 000000014072BF34: mov     r10, gs:188h
 * 000000014072BF3D: test    byte ptr [r10+3], 80h
 * 000000014072BF42: jz      short KiIsrLinkageDispatchTrap
 * 000000014072BF44: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072BF49: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072BF50: jz      short loc_14072BF59
 * 000000014072BF52: mov     [rbp+0D8h+var_8], rsi
 * 000000014072BF59: mov     [rbp+0D8h+var_12D], 0
 * 000000014072BF5D: cmp     byte ptr gs:87DAh, 0
 * 000000014072BF66: jz      short loc_14072BF6D
 * 000000014072BF68: call    KeWakeProcessor
 * 000000014072BF6D: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014072BF74: cmp     rax, [rbp+0D8h+arg_0]
 * 000000014072BF7B: jnb     short loc_14072BF96
 * 000000014072BF7D: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014072BF84: cmp     rax, [rbp+0D8h+arg_0]
 * 000000014072BF8B: jb      short loc_14072BF96
 * 000000014072BF8D: lea     rcx, [rbp+0D8h+var_158]
 * 000000014072BF91: call    KiCheckForSListAddress
 * 000000014072BF96: movzx   eax, byte ptr [rbp+0E0h]
 * 000000014072BF9D: mov     rsi, gs:20h
 * 000000014072BFA6: mov     rsi, [rsi+rax*8+3900h]
 * 000000014072BFAE: inc     dword ptr gs:87C0h
 * 000000014072BFB6: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072BFBD: jz      short loc_14072BFC2
 * 000000014072BFBF: clac
 * 000000014072BFC2: test    rsi, rsi
 * 000000014072BFC5: jz      short loc_14072BFD0
 * 000000014072BFC7: mov     rax, [rsi+50h]
 * 000000014072BFCB: jmp     _guard_dispatch_icall_no_overrides
 * 000000014072BFD0: mov     ecx, eax
 * 000000014072BFD2: shr     ecx, 4
 * 000000014072BFD5: cmp     cs:KiIrqlFlags, 0
 * 000000014072BFDC: jz      short loc_14072BFE5
 * 000000014072BFDE: call    KzSetIrqlUnsafe
 * 000000014072BFE3: jmp     short loc_14072BFED
 * 000000014072BFE5: mov     rax, cr8
 * 000000014072BFE9: mov     cr8, rcx
 * 000000014072BFED: mov     [rbp+0D8h+var_12F], al
 * 000000014072BFF0: mov     rcx, gs:20h
 * 000000014072BFF9: xor     edx, edx
 * 000000014072BFFB: call    KiStartInterruptCycleAccumulation
 * 000000014072C000: sti
 * 000000014072C001: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 000000014072C00B: jz      short loc_14072C019
 * 000000014072C00D: movzx   ecx, byte ptr [rbp+0E0h]
 * 000000014072C014: call    PerfInfoLogUnexpectedInterrupt
 * 000000014072C019: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 000000014072C020: jz      short loc_14072C041
 * 000000014072C022: and     [rbp+0D8h+var_138], 0
 * 000000014072C027: xor     r9, r9
 * 000000014072C02A: movzx   r8d, byte ptr [rbp+0E0h]
 * 000000014072C032: mov     edx, 1
 * 000000014072C037: mov     ecx, 12h
 * 000000014072C03C: call    KiBugCheckDispatch
 * 000000014072C041: cli
 * 000000014072C042: mov     rcx, rsi
 * 000000014072C045: call    HalPerformEndOfInterrupt
 * 000000014072C04A: mov     rcx, gs:20h
 * 000000014072C053: movzx   edx, [rbp+0D8h+var_12F]
 * 000000014072C057: call    KiEndInterruptCycleAccumulation
 * 000000014072C05C: test    al, al
 * 000000014072C05E: jz      short loc_14072C065
 * 000000014072C060: call    KiDpcInterruptBypass
 * 000000014072C065: movzx   ecx, [rbp+0D8h+var_12F]
 * 000000014072C069: cmp     cs:KiIrqlFlags, 0
 * 000000014072C070: jz      short loc_14072C079
 * 000000014072C072: call    KzSetIrqlUnsafe
 * 000000014072C077: jmp     short loc_14072C07D
 * 000000014072C079: mov     cr8, rcx
 * 000000014072C07D: mov     rsi, [rbp+0D8h+var_8]
 * 000000014072C084: cli
 * 000000014072C085: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072C08C: jz      short loc_14072C093
 * 000000014072C08E: add     rsp, 28h
 * 000000014072C092: retn
 * 000000014072C093: test    [rbp+0D8h+arg_8], 1
 * 000000014072C09A: jz      loc_14072C39B
 * 000000014072C0A0: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072C0A7: jz      short loc_14072C0AC
 * 000000014072C0A9: stac
 * 000000014072C0AC: mov     rcx, gs:188h
 * 000000014072C0B5: test    byte ptr [rcx+0C2h], 3
 * 000000014072C0BC: jz      short loc_14072C0D9
 * 000000014072C0BE: mov     ecx, 1
 * 000000014072C0C3: mov     cr8, rcx
 * 000000014072C0C7: sti
 * 000000014072C0C8: call    KiInitiateUserApc
 * 000000014072C0CD: cli
 * 000000014072C0CE: mov     ecx, 0
 * 000000014072C0D3: mov     cr8, rcx
 * 000000014072C0D7: jmp     short loc_14072C0AC
 * 000000014072C0D9: test    byte ptr [rcx+3], 80h
 * 000000014072C0DD: jz      short loc_14072C0EC
 * 000000014072C0DF: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072C0E4: test    eax, eax
 * 000000014072C0E6: mov     rax, [rbp+0D8h+var_128]
 * 000000014072C0EA: jnz     short loc_14072C0AC
 * 000000014072C0EC: test    byte ptr gs:8A0h, 2
 * 000000014072C0F5: jz      short loc_14072C0FE
 * 000000014072C0F7: xor     ecx, ecx
 * 000000014072C0F9: call    KiUpdateStibpPairing
 * 000000014072C0FE: mov     rcx, gs:188h
 * 000000014072C107: test    dword ptr [rcx], 8000000h
 * 000000014072C10D: jz      short loc_14072C114
 * 000000014072C10F: call    KiRestoreSetContextState
 * 000000014072C114: mov     rcx, gs:188h
 * 000000014072C11D: test    dword ptr [rcx], 10000h
 * 000000014072C123: jz      short loc_14072C139
 * 000000014072C125: test    byte ptr [rcx+2], 1
 * 000000014072C129: jz      short loc_14072C139
 * 000000014072C12B: call    KiCopyCounters
 * 000000014072C130: mov     rcx, gs:188h
 * 000000014072C139: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014072C13D: cmp     [rbp+0D8h+var_58], 0
 * 000000014072C145: jz      short loc_14072C14C
 * 000000014072C147: call    KiRestoreDebugRegisterState
 * 000000014072C14C: mov     rcx, gs:188h
 * 000000014072C155: bt      dword ptr [rcx+74h], 16h
 * 000000014072C15A: jnb     short loc_14072C186
 * 000000014072C15C: xor     ecx, ecx
 * 000000014072C15E: rdsspq  rcx
 * 000000014072C163: mov     r8, gs:9D68h
 * 000000014072C16C: add     r8, 8
 * 000000014072C170: cmp     rcx, r8
 * 000000014072C173: jnz     short loc_14072C186
 * 000000014072C175: mov     rcx, gs:9D60h
 * 000000014072C17E: rstorssp qword ptr [rcx]
 * 000000014072C182: saveprevssp
 * 000000014072C186: mov     byte ptr gs:89Eh, 0
 * 000000014072C18F: movzx   eax, word ptr gs:8ACh
 * 000000014072C198: cmp     gs:8A6h, ax
 * 000000014072C1A1: jz      short loc_14072C1B5
 * 000000014072C1A3: mov     gs:8A6h, ax
 * 000000014072C1AC: mov     ecx, 48h ; 'H'
 * 000000014072C1B1: xor     edx, edx
 * 000000014072C1B3: wrmsr
 * 000000014072C1B5: btr     word ptr gs:898h, 2
 * 000000014072C1C0: jnb     short loc_14072C1D0
 * 000000014072C1C2: mov     eax, 1
 * 000000014072C1C7: xor     edx, edx
 * 000000014072C1C9: mov     ecx, 49h ; 'I'
 * 000000014072C1CE: wrmsr
 * 000000014072C1D0: btr     word ptr gs:898h, 5
 * 000000014072C1DB: jnb     loc_14072C318
 * 000000014072C1E1: call    loc_14072C2F4
 * 000000014072C1E6: add     rsp, 8
 * 000000014072C1EA: call    loc_14072C2FD
 * 000000014072C1EF: add     rsp, 8
 * 000000014072C1F3: call    loc_14072C1E6
 * 000000014072C1F8: add     rsp, 8
 * 000000014072C1FC: call    loc_14072C1EF
 * 000000014072C201: add     rsp, 8
 * 000000014072C205: call    loc_14072C1F8
 * 000000014072C20A: add     rsp, 8
 * 000000014072C20E: call    loc_14072C201
 * 000000014072C213: add     rsp, 8
 * 000000014072C217: call    loc_14072C20A
 * 000000014072C21C: add     rsp, 8
 * 000000014072C220: call    loc_14072C213
 * 000000014072C225: add     rsp, 8
 * 000000014072C229: call    loc_14072C21C
 * 000000014072C22E: add     rsp, 8
 * 000000014072C232: call    loc_14072C225
 * 000000014072C237: add     rsp, 8
 * 000000014072C23B: call    loc_14072C22E
 * 000000014072C240: add     rsp, 8
 * 000000014072C244: call    loc_14072C237
 * 000000014072C249: add     rsp, 8
 * 000000014072C24D: call    loc_14072C240
 * 000000014072C252: add     rsp, 8
 * 000000014072C256: call    loc_14072C249
 * 000000014072C25B: add     rsp, 8
 * 000000014072C25F: call    loc_14072C252
 * 000000014072C264: add     rsp, 8
 * 000000014072C268: call    loc_14072C25B
 * 000000014072C26D: add     rsp, 8
 * 000000014072C271: call    loc_14072C264
 * 000000014072C276: add     rsp, 8
 * 000000014072C27A: call    loc_14072C26D
 * 000000014072C27F: add     rsp, 8
 * 000000014072C283: call    loc_14072C276
 * 000000014072C288: add     rsp, 8
 * 000000014072C28C: call    loc_14072C27F
 * 000000014072C291: add     rsp, 8
 * 000000014072C295: call    loc_14072C288
 * 000000014072C29A: add     rsp, 8
 * 000000014072C29E: call    loc_14072C291
 * 000000014072C2A3: add     rsp, 8
 * 000000014072C2A7: call    loc_14072C29A
 * 000000014072C2AC: add     rsp, 8
 * 000000014072C2B0: call    loc_14072C2A3
 * 000000014072C2B5: add     rsp, 8
 * 000000014072C2B9: call    loc_14072C2AC
 * 000000014072C2BE: add     rsp, 8
 * 000000014072C2C2: call    loc_14072C2B5
 * 000000014072C2C7: add     rsp, 8
 * 000000014072C2CB: call    loc_14072C2BE
 * 000000014072C2D0: add     rsp, 8
 * 000000014072C2D4: call    loc_14072C2C7
 * 000000014072C2D9: add     rsp, 8
 * 000000014072C2DD: call    loc_14072C2D0
 * 000000014072C2E2: add     rsp, 8
 * 000000014072C2E6: call    loc_14072C2D9
 * 000000014072C2EB: add     rsp, 8
 * 000000014072C2EF: call    loc_14072C2E2
 * 000000014072C2F4: add     rsp, 8
 * 000000014072C2F8: call    loc_14072C2EB
 * 000000014072C2FD: add     rsp, 8
 * 000000014072C301: mov     eax, 0DADAh
 * 000000014072C306: test    byte ptr gs:89Ch, 8
 * 000000014072C30F: jz      short loc_14072C318
 * 000000014072C311: mov     al, 20h ; ' '
 * 000000014072C313: incsspq rax
 * 000000014072C318: test    word ptr gs:898h, 100h
 * 000000014072C323: jz      short loc_14072C331
 * 000000014072C325: xor     eax, eax
 * 000000014072C327: xor     edx, edx
 * 000000014072C329: mov     ecx, 1
 * 000000014072C32E: div     rcx
 * 000000014072C331: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014072C335: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014072C339: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014072C33D: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014072C341: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014072C345: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014072C349: mov     r11, [rbp+0D8h+var_F8]
 * 000000014072C34D: mov     r10, [rbp+0D8h+var_100]
 * 000000014072C351: mov     r9, [rbp+0D8h+var_108]
 * 000000014072C355: mov     r8, [rbp+0D8h+var_110]
 * 000000014072C359: mov     rdx, [rbp+0D8h+var_118]
 * 000000014072C35D: mov     rcx, [rbp+0D8h+var_120]
 * 000000014072C361: mov     rax, [rbp+0D8h+var_128]
 * 000000014072C365: mov     rsp, rbp
 * 000000014072C368: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014072C36F: add     rsp, 0E8h
 * 000000014072C376: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072C37D: jz      short loc_14072C384
 * 000000014072C37F: jmp     KiKernelExit
 * 000000014072C384: test    word ptr gs:898h, 200h
 * 000000014072C38F: jz      short loc_14072C396
 * 000000014072C391: verw    [rsp-10h+arg_20]
 * 000000014072C396: swapgs
 * 000000014072C399: iretq
 * 000000014072C39B: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014072C39F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014072C3A3: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014072C3A7: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014072C3AB: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014072C3AF: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014072C3B3: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014072C3B7: mov     r11, [rbp+0D8h+var_F8]
 * 000000014072C3BB: mov     r10, [rbp+0D8h+var_100]
 * 000000014072C3BF: mov     r9, [rbp+0D8h+var_108]
 * 000000014072C3C3: mov     r8, [rbp+0D8h+var_110]
 * 000000014072C3C7: mov     rdx, [rbp+0D8h+var_118]
 * 000000014072C3CB: mov     rcx, [rbp+0D8h+var_120]
 * 000000014072C3CF: mov     rax, [rbp+0D8h+var_128]
 * 000000014072C3D3: mov     rsp, rbp
 * 000000014072C3D6: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014072C3DD: add     rsp, 0E8h
 * 000000014072C3E4: iretq
 */
