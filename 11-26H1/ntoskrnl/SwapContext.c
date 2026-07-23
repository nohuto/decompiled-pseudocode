/*
 * XREFs of SwapContext @ 0x140734B80
 * Callers:
 *     KiIdleLoop @ 0x14072D980 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140734AA0 (KiSwapContext.c)
 * Callees:
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209540 (KiStartThreadCycleAccumulationContextSwap.c)
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateSpeculationControl @ 0x140305F40 (KiUpdateSpeculationControl.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140312650 (HvlSwitchVirtualAddressSpace.c)
 *     KeCheckAndApplyBamQos @ 0x140332380 (KeCheckAndApplyBamQos.c)
 *     KeCanonicalizeXStateUserCetPl3Ssp @ 0x1403D7610 (KeCanonicalizeXStateUserCetPl3Ssp.c)
 *     EtwTraceContextSwap @ 0x140407410 (EtwTraceContextSwap.c)
 *     KiClearLastBranchRecordStack @ 0x140441E10 (KiClearLastBranchRecordStack.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     KiResetProcessorTraceBuffer @ 0x1405E7CA0 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x1405EF8A0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x1405EF8D0 (KiSaveThreadIptState.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1405F8F50 (KiCheckAndApplyCacheIsolation.c)
 *     SwapContext @ 0x140734B80 (SwapContext.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x140734B80
 * Reason: Hex-Rays returned no pseudocode for 0x140734B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140734B80: push    rbp
 * 0000000140734B82: sub     rsp, 30h
 * 0000000140734B86: prefetchw byte ptr [rsi+72h]
 * 0000000140734B8A: mov     [rsp+38h+var_10], cl
 * 0000000140734B8E: cmp     word ptr [rsi+72h], 0
 * 0000000140734B93: jnz     loc_140735222
 * 0000000140734B99: mov     eax, [rbx+24h]
 * 0000000140734B9C: add     eax, 1
 * 0000000140734B9F: mov     [rsi+72h], ax
 * 0000000140734BA3: mov     eax, cs:KiHresetMask
 * 0000000140734BA9: test    eax, eax
 * 0000000140734BAB: jz      short loc_140734BB3
 * 0000000140734BAD: hreset  0
 * 0000000140734BB3: mov     eax, cs:KiHwFeedbackResetMask
 * 0000000140734BB9: test    eax, eax
 * 0000000140734BBB: jz      short loc_140734BC6
 * 0000000140734BBD: xor     edx, edx
 * 0000000140734BBF: mov     ecx, 0C0000502h
 * 0000000140734BC4: wrmsr
 * 0000000140734BC6: cli
 * 0000000140734BC7: mov     rcx, rbx
 * 0000000140734BCA: mov     rdx, rsi
 * 0000000140734BCD: call    KiStartThreadCycleAccumulationContextSwap
 * 0000000140734BD2: inc     dword ptr [rbx+2D3Ch]
 * 0000000140734BD8: mov     rbp, cs:KeFeatureBits
 * 0000000140734BDF: cmp     cs:KiCacheIsoBitmap, 0
 * 0000000140734BE6: jz      short loc_140734BFA
 * 0000000140734BE8: bt      rbp, 2Ch ; ','
 * 0000000140734BED: jnb     short loc_140734BFA
 * 0000000140734BEF: mov     rcx, rbx
 * 0000000140734BF2: mov     rdx, rsi
 * 0000000140734BF5: call    KiCheckAndApplyCacheIsolation
 * 0000000140734BFA: cmp     [rbx+18h], rsi
 * 0000000140734BFE: jz      short loc_140734C21
 * 0000000140734C00: movzx   ecx, byte ptr [rsi+204h]
 * 0000000140734C07: mov     eax, [rbx+0ECh]
 * 0000000140734C0D: xor     eax, ecx
 * 0000000140734C0F: test    eax, 0Fh
 * 0000000140734C14: jz      short loc_140734C21
 * 0000000140734C16: mov     rcx, rbx
 * 0000000140734C19: mov     rdx, rsi
 * 0000000140734C1C: call    KeCheckAndApplyBamQos
 * 0000000140734C21: mov     rdx, [rdi+250h]
 * 0000000140734C28: mov     rcx, [rdi+60h]
 * 0000000140734C2C: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140734C30: mov     eax, edx
 * 0000000140734C32: jz      short loc_140734C5E
 * 0000000140734C34: shr     rdx, 20h
 * 0000000140734C38: bt      rbp, 26h ; '&'
 * 0000000140734C3D: jb      short loc_140734C56
 * 0000000140734C3F: bt      rbp, 0Fh
 * 0000000140734C44: jb      short loc_140734C5B
 * 0000000140734C46: bt      ebp, 17h
 * 0000000140734C4A: jnb     short loc_140734C51
 * 0000000140734C4C: xsave   byte ptr [rcx]
 * 0000000140734C4F: jmp     short loc_140734C5E
 * 0000000140734C51: fxsave  dword ptr [rcx]
 * 0000000140734C54: jmp     short loc_140734C5E
 * 0000000140734C56: xsaves  byte ptr [rcx]
 * 0000000140734C59: jmp     short loc_140734C5E
 * 0000000140734C5B: xsaveopt byte ptr [rcx]
 * 0000000140734C5E: stmxcsr dword ptr [rcx+18h]
 * 0000000140734C62: cmp     cs:KiUserCetPl3SspCanonicalizeMask, 0
 * 0000000140734C6A: jz      short loc_140734C77
 * 0000000140734C6C: mov     r15d, eax
 * 0000000140734C6F: call    KeCanonicalizeXStateUserCetPl3Ssp
 * 0000000140734C74: mov     eax, r15d
 * 0000000140734C77: test    eax, 100h
 * 0000000140734C7C: jz      short loc_140734C8F
 * 0000000140734C7E: cmp     cs:KiIptMsrMask, 0
 * 0000000140734C85: jz      short loc_140734C8F
 * 0000000140734C87: mov     rcx, rdi
 * 0000000140734C8A: call    KiSaveThreadIptState
 * 0000000140734C8F: mov     [rdi+58h], rsp
 * 0000000140734C93: mov     rsp, [rsi+58h]
 * 0000000140734C97: test    cs:KiKernelCetEnabled, 1
 * 0000000140734C9E: jz      short loc_140734CCD
 * 0000000140734CA0: mov     rcx, [rsi+410h]
 * 0000000140734CA7: mov     [rbx+9BE8h], rcx
 * 0000000140734CAE: rdsspq  rdx
 * 0000000140734CB3: mov     rcx, [rsi+408h]
 * 0000000140734CBA: rstorssp qword ptr [rcx]
 * 0000000140734CBE: saveprevssp
 * 0000000140734CC2: sub     rdx, 8
 * 0000000140734CC6: mov     [rdi+408h], rdx
 * 0000000140734CCD: mov     rax, [rdi+220h]
 * 0000000140734CD4: cmp     qword ptr [rax+310h], 0
 * 0000000140734CDC: jz      short loc_140734CF1
 * 0000000140734CDE: mov     ecx, 0C0000100h
 * 0000000140734CE3: rdmsr
 * 0000000140734CE5: mov     [rdi+678h], eax
 * 0000000140734CEB: mov     [rdi+67Ch], edx
 * 0000000140734CF1: btr     word ptr gs:89Eh, 0
 * 0000000140734CFC: jnb     short loc_140734D02
 * 0000000140734CFE: or      byte ptr [rdi+7Eh], 1
 * 0000000140734D02: bt      word ptr [rsi+7Eh], 0
 * 0000000140734D08: jnb     short loc_140734D13
 * 0000000140734D0A: or      byte ptr gs:89Eh, 1
 * 0000000140734D13: and     byte ptr [rsi+7Eh], 0FEh
 * 0000000140734D17: mov     rcx, [rsi+220h]
 * 0000000140734D1E: or      cl, [rbx+720h]
 * 0000000140734D24: and     cl, 0C2h
 * 0000000140734D27: cmp     rcx, [rdi+220h]
 * 0000000140734D2E: jz      short loc_140734D3D
 * 0000000140734D30: and     cl, 0C0h
 * 0000000140734D33: call    KiUpdateSpeculationControl
 * 0000000140734D38: jmp     loc_140734EF3
 * 0000000140734D3D: movzx   ecx, byte ptr gs:89Eh
 * 0000000140734D46: and     cx, 3
 * 0000000140734D4A: cmp     cx, 1
 * 0000000140734D4E: jnz     loc_140734EF3
 * 0000000140734D54: cli
 * 0000000140734D55: movzx   eax, word ptr gs:8A4h
 * 0000000140734D5E: cmp     gs:8A6h, ax
 * 0000000140734D67: jz      short loc_140734D7B
 * 0000000140734D69: mov     gs:8A6h, ax
 * 0000000140734D72: mov     ecx, 48h ; 'H'
 * 0000000140734D77: xor     edx, edx
 * 0000000140734D79: wrmsr
 * 0000000140734D7B: movzx   edx, byte ptr gs:89Ah
 * 0000000140734D84: test    edx, 10h
 * 0000000140734D8A: jz      short loc_140734DA3
 * 0000000140734D8C: mov     eax, 1
 * 0000000140734D91: xor     edx, edx
 * 0000000140734D93: mov     ecx, 49h ; 'I'
 * 0000000140734D98: wrmsr
 * 0000000140734D9A: movzx   edx, byte ptr gs:89Ah
 * 0000000140734DA3: test    edx, 40h
 * 0000000140734DA9: jz      loc_140734EE6
 * 0000000140734DAF: call    loc_140734EC2
 * 0000000140734DB4: add     rsp, 8
 * 0000000140734DB8: call    loc_140734ECB
 * 0000000140734DBD: add     rsp, 8
 * 0000000140734DC1: call    loc_140734DB4
 * 0000000140734DC6: add     rsp, 8
 * 0000000140734DCA: call    loc_140734DBD
 * 0000000140734DCF: add     rsp, 8
 * 0000000140734DD3: call    loc_140734DC6
 * 0000000140734DD8: add     rsp, 8
 * 0000000140734DDC: call    loc_140734DCF
 * 0000000140734DE1: add     rsp, 8
 * 0000000140734DE5: call    loc_140734DD8
 * 0000000140734DEA: add     rsp, 8
 * 0000000140734DEE: call    loc_140734DE1
 * 0000000140734DF3: add     rsp, 8
 * 0000000140734DF7: call    loc_140734DEA
 * 0000000140734DFC: add     rsp, 8
 * 0000000140734E00: call    loc_140734DF3
 * 0000000140734E05: add     rsp, 8
 * 0000000140734E09: call    loc_140734DFC
 * 0000000140734E0E: add     rsp, 8
 * 0000000140734E12: call    loc_140734E05
 * 0000000140734E17: add     rsp, 8
 * 0000000140734E1B: call    loc_140734E0E
 * 0000000140734E20: add     rsp, 8
 * 0000000140734E24: call    loc_140734E17
 * 0000000140734E29: add     rsp, 8
 * 0000000140734E2D: call    loc_140734E20
 * 0000000140734E32: add     rsp, 8
 * 0000000140734E36: call    loc_140734E29
 * 0000000140734E3B: add     rsp, 8
 * 0000000140734E3F: call    loc_140734E32
 * 0000000140734E44: add     rsp, 8
 * 0000000140734E48: call    loc_140734E3B
 * 0000000140734E4D: add     rsp, 8
 * 0000000140734E51: call    loc_140734E44
 * 0000000140734E56: add     rsp, 8
 * 0000000140734E5A: call    loc_140734E4D
 * 0000000140734E5F: add     rsp, 8
 * 0000000140734E63: call    loc_140734E56
 * 0000000140734E68: add     rsp, 8
 * 0000000140734E6C: call    loc_140734E5F
 * 0000000140734E71: add     rsp, 8
 * 0000000140734E75: call    loc_140734E68
 * 0000000140734E7A: add     rsp, 8
 * 0000000140734E7E: call    loc_140734E71
 * 0000000140734E83: add     rsp, 8
 * 0000000140734E87: call    loc_140734E7A
 * 0000000140734E8C: add     rsp, 8
 * 0000000140734E90: call    loc_140734E83
 * 0000000140734E95: add     rsp, 8
 * 0000000140734E99: call    loc_140734E8C
 * 0000000140734E9E: add     rsp, 8
 * 0000000140734EA2: call    loc_140734E95
 * 0000000140734EA7: add     rsp, 8
 * 0000000140734EAB: call    loc_140734E9E
 * 0000000140734EB0: add     rsp, 8
 * 0000000140734EB4: call    loc_140734EA7
 * 0000000140734EB9: add     rsp, 8
 * 0000000140734EBD: call    loc_140734EB0
 * 0000000140734EC2: add     rsp, 8
 * 0000000140734EC6: call    loc_140734EB9
 * 0000000140734ECB: add     rsp, 8
 * 0000000140734ECF: mov     eax, 0DADAh
 * 0000000140734ED4: test    byte ptr gs:89Ch, 8
 * 0000000140734EDD: jz      short loc_140734EE6
 * 0000000140734EDF: mov     al, 20h ; ' '
 * 0000000140734EE1: incsspq rax
 * 0000000140734EE6: lfence
 * 0000000140734EE9: or      byte ptr gs:89Eh, 2
 * 0000000140734EF2: sti
 * 0000000140734EF3: mov     r14, [rsi+0B8h]
 * 0000000140734EFA: cmp     r14, [rdi+0B8h]
 * 0000000140734F01: jz      loc_140734FC6
 * 0000000140734F07: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140734F0E: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140734F15: mov     rdx, [r14+80h]
 * 0000000140734F1C: lock bts [rdx+rax*8+8], rcx
 * 0000000140734F23: mov     rcx, [r14+28h]
 * 0000000140734F27: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140734F2E: jz      short loc_140734F69
 * 0000000140734F30: cli
 * 0000000140734F31: bt      ecx, 1
 * 0000000140734F35: jnb     short loc_140734F43
 * 0000000140734F37: bts     rcx, 3Fh ; '?'
 * 0000000140734F3C: or      dword ptr [rbx+0AE98h], 1
 * 0000000140734F43: mov     [rbx+0AE80h], rcx
 * 0000000140734F4A: btr     rcx, 3Fh ; '?'
 * 0000000140734F4F: and     dword ptr [rbx+0AE98h], 0FFFFFFFDh
 * 0000000140734F56: bt      dword ptr [r14+160h], 0
 * 0000000140734F5F: jnb     short loc_140734F68
 * 0000000140734F61: xor     dword ptr [rbx+0AE98h], 3
 * 0000000140734F68: sti
 * 0000000140734F69: test    cs:HvlEnlightenments, 1
 * 0000000140734F73: jz      short loc_140734F7C
 * 0000000140734F75: call    HvlSwitchVirtualAddressSpace
 * 0000000140734F7A: jmp     short loc_140734FA3
 * 0000000140734F7C: mov     cr3, rcx
 * 0000000140734F7F: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140734F86: jz      short loc_140734FA3
 * 0000000140734F88: bt      ecx, 1
 * 0000000140734F8C: jb      short loc_140734FA3
 * 0000000140734F8E: mov     rax, cr4
 * 0000000140734F91: xor     rax, 80h
 * 0000000140734F97: mov     cr4, rax
 * 0000000140734F9A: xor     rax, 80h
 * 0000000140734FA0: mov     cr4, rax
 * 0000000140734FA3: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140734FAA: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140734FB1: mov     rdx, [rdi+0B8h]
 * 0000000140734FB8: mov     rdx, [rdx+80h]
 * 0000000140734FBF: lock btr [rdx+rax*8+8], rcx
 * 0000000140734FC6: mov     rax, [rsi+28h]
 * 0000000140734FCA: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140734FD1: jnz     short loc_140734FE0
 * 0000000140734FD3: mov     r15, [rbx-178h]
 * 0000000140734FDA: mov     [r15+4], rax
 * 0000000140734FDE: jmp     short loc_140734FE7
 * 0000000140734FE0: mov     [rbx+0AE88h], rax
 * 0000000140734FE7: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140734FEE: jz      short loc_140734FFE
 * 0000000140734FF0: mov     ecx, 1CCh
 * 0000000140734FF5: mov     rdx, rax
 * 0000000140734FF8: shr     rdx, 20h
 * 0000000140734FFC: wrmsr
 * 0000000140734FFE: mov     [rbx+28h], rax
 * 0000000140735002: test    rax, rax
 * 0000000140735005: jge     loc_14073520A
 * 000000014073500B: cmp     cs:KiCpuTracingFlags, 0
 * 0000000140735012: jnz     loc_1407351B3
 * 0000000140735018: bt      rbp, 37h ; '7'
 * 000000014073501D: jnb     short loc_14073503F
 * 000000014073501F: mov     ecx, 1C4h
 * 0000000140735024: mov     rax, [rdi+428h]
 * 000000014073502B: mov     rdx, [rsi+428h]
 * 0000000140735032: cmp     rax, rdx
 * 0000000140735035: jz      short loc_14073503F
 * 0000000140735037: mov     eax, edx
 * 0000000140735039: shr     rdx, 20h
 * 000000014073503D: wrmsr
 * 000000014073503F: mov     rdx, [rdi+250h]
 * 0000000140735046: mov     rax, rdx
 * 0000000140735049: and     rax, 40000h
 * 000000014073504F: and     rdx, cs:KeEnabledSupervisorXStateFeatures
 * 0000000140735056: or      rdx, rax
 * 0000000140735059: or      rdx, [rsi+250h]
 * 0000000140735060: mov     word ptr [rdi+72h], 0
 * 0000000140735066: mov     rcx, [rsi+60h]
 * 000000014073506A: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014073506E: mov     eax, edx
 * 0000000140735070: jz      short loc_14073509D
 * 0000000140735072: shr     rdx, 20h
 * 0000000140735076: bt      rbp, 29h ; ')'
 * 000000014073507B: jnb     short loc_140735083
 * 000000014073507D: test    al, 1
 * 000000014073507F: jz      short loc_140735083
 * 0000000140735081: fninit
 * 0000000140735083: bt      rbp, 26h ; '&'
 * 0000000140735088: jb      short loc_140735095
 * 000000014073508A: bt      ebp, 17h
 * 000000014073508E: jb      short loc_14073509A
 * 0000000140735090: fxrstor dword ptr [rcx]
 * 0000000140735093: jmp     short loc_14073509D
 * 0000000140735095: xrstors byte ptr [rcx]
 * 0000000140735098: jmp     short loc_14073509D
 * 000000014073509A: xrstor  byte ptr [rcx]
 * 000000014073509D: ldmxcsr dword ptr [rcx+18h]
 * 00000001407350A1: test    eax, 100h
 * 00000001407350A6: jz      short loc_1407350B9
 * 00000001407350A8: cmp     cs:KiIptMsrMask, 0
 * 00000001407350AF: jz      short loc_1407350B9
 * 00000001407350B1: mov     rcx, rsi
 * 00000001407350B4: call    KiRestoreThreadIptState
 * 00000001407350B9: bt      dword ptr [rsi+74h], 0Ah
 * 00000001407350BE: jb      loc_140735173
 * 00000001407350C4: mov     rax, [rsi+220h]
 * 00000001407350CB: cmp     qword ptr [rax+310h], 0
 * 00000001407350D3: mov     eax, [rsi+678h]
 * 00000001407350D9: jz      short loc_1407350E6
 * 00000001407350DB: mov     eax, [rsi+0F0h]
 * 00000001407350E1: add     eax, 2000h
 * 00000001407350E6: mov     rcx, [rbx-180h]
 * 00000001407350ED: mov     [rcx+52h], ax
 * 00000001407350F1: shr     eax, 10h
 * 00000001407350F4: mov     [rcx+54h], al
 * 00000001407350F7: mov     [rcx+57h], ah
 * 00000001407350FA: mov     eax, 53h ; 'S'
 * 00000001407350FF: mov     fs, eax
 * 0000000140735101: mov     eax, [rsi+678h]
 * 0000000140735107: mov     edx, [rsi+67Ch]
 * 000000014073510D: mov     ecx, 0C0000100h
 * 0000000140735112: wrmsr
 * 0000000140735114: mov     eax, ds
 * 0000000140735116: mov     edx, es
 * 0000000140735118: and     eax, edx
 * 000000014073511A: mov     edx, gs
 * 000000014073511C: and     eax, edx
 * 000000014073511E: cmp     ax, 2Bh ; '+'
 * 0000000140735122: jz      short loc_140735146
 * 0000000140735124: mov     edx, 2Bh ; '+'
 * 0000000140735129: mov     ds, edx
 * 000000014073512B: mov     es, edx
 * 000000014073512D: test    byte ptr cs:KiTrapFeatures, 4
 * 0000000140735134: jz      short loc_14073513C
 * 000000014073513C: cli
 * 000000014073513D: swapgs
 * 0000000140735140: mov     gs, edx
 * 0000000140735142: swapgs
 * 0000000140735145: sti
 * 0000000140735146: mov     rax, [rsi+0F0h]
 * 000000014073514D: mov     edx, [rsi+0F4h]
 * 0000000140735153: mov     [rbx-150h], rax
 * 000000014073515A: test    byte ptr [rsi+3], 4
 * 000000014073515E: jz      short loc_14073516C
 * 0000000140735160: mov     eax, [rsi+680h]
 * 0000000140735166: mov     edx, [rsi+684h]
 * 000000014073516C: mov     ecx, 0C0000102h
 * 0000000140735171: wrmsr
 * 0000000140735173: test    dword ptr [rbx+38BCh], 10001h
 * 000000014073517D: jnz     short loc_1407351F1
 * 000000014073517F: inc     dword ptr [rsi+154h]
 * 0000000140735185: cmp     byte ptr [rsi+0C1h], 1
 * 000000014073518C: jnz     short loc_1407351AA
 * 000000014073518E: movzx   ax, [rsp+38h+var_10]
 * 0000000140735194: or      ax, [rsi+1E6h]
 * 000000014073519B: jz      short loc_1407351AA
 * 000000014073519D: mov     ecx, 1
 * 00000001407351A2: call    HalRequestSoftwareInterrupt
 * 00000001407351A7: or      rcx, rsp
 * 00000001407351AA: setz    al
 * 00000001407351AD: add     rsp, 30h
 * 00000001407351B1: pop     rbp
 * 00000001407351B2: retn
 * 00000001407351B3: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001407351BD: jz      short loc_1407351CA
 * 00000001407351BF: mov     rcx, rdi
 * 00000001407351C2: mov     rdx, rsi
 * 00000001407351C5: call    EtwTraceContextSwap
 * 00000001407351CA: test    cs:KiCpuTracingFlags, 2
 * 00000001407351D4: jz      short loc_1407351DB
 * 00000001407351D6: call    KiClearLastBranchRecordStack
 * 00000001407351DB: test    cs:KiCpuTracingFlags, 4
 * 00000001407351E5: jz      short loc_1407351EC
 * 00000001407351E7: call    KiResetProcessorTraceBuffer
 * 00000001407351EC: jmp     loc_140735018
 * 00000001407351F1: xor     r9, r9; BugCheckParameter3
 * 00000001407351F4: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 00000001407351F9: mov     r8, rsi; BugCheckParameter2
 * 00000001407351FC: mov     rdx, rdi; BugCheckParameter1
 * 00000001407351FF: mov     ecx, 0B8h; BugCheckCode
 * 0000000140735204: call    KeBugCheckEx
 * 000000014073520A: xor     r9, r9; BugCheckParameter3
 * 000000014073520D: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140735212: mov     r8, rsi; BugCheckParameter2
 * 0000000140735215: mov     rdx, rdi; BugCheckParameter1
 * 0000000140735218: mov     ecx, 1CEh; BugCheckCode
 * 000000014073521D: call    KeBugCheckEx
 * 0000000140735222: xor     ebp, ebp
 * 0000000140735224: inc     ebp
 * 0000000140735226: test    cs:HvlLongSpinCountMask, ebp
 * 000000014073522C: jnz     short loc_14073524A
 * 000000014073522E: test    cs:HvlEnlightenments, 40h
 * 0000000140735238: jz      short loc_14073524A
 * 000000014073523A: call    KiCheckVpBackingLongSpinWaitHypercall
 * 000000014073523F: test    al, al
 * 0000000140735241: jz      short loc_14073524A
 * 0000000140735243: mov     ecx, ebp
 * 0000000140735245: call    HvlNotifyLongSpinWait
 * 000000014073524A: pause
 * 000000014073524C: cmp     word ptr [rsi+72h], 0
 * 0000000140735251: jz      loc_140734B99
 * 0000000140735257: jmp     short loc_140735224
 */
