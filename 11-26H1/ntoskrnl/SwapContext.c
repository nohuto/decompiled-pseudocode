/*
 * XREFs of SwapContext @ 0x14072FFB0
 * Callers:
 *     KiIdleLoop @ 0x140728DB0 (KiIdleLoop.c)
 *     KiSwapContext @ 0x14072FED0 (KiSwapContext.c)
 * Callees:
 *     KiStartThreadCycleAccumulationContextSwap @ 0x140209460 (KiStartThreadCycleAccumulationContextSwap.c)
 *     HalRequestSoftwareInterrupt @ 0x14021E010 (HalRequestSoftwareInterrupt.c)
 *     KiUpdateSpeculationControl @ 0x1402BB280 (KiUpdateSpeculationControl.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402C79B0 (HvlSwitchVirtualAddressSpace.c)
 *     KeCheckAndApplyBamQos @ 0x140330350 (KeCheckAndApplyBamQos.c)
 *     KeCanonicalizeXStateUserCetPl3Ssp @ 0x1403D4640 (KeCanonicalizeXStateUserCetPl3Ssp.c)
 *     EtwTraceContextSwap @ 0x140412DE0 (EtwTraceContextSwap.c)
 *     KiClearLastBranchRecordStack @ 0x140449CE0 (KiClearLastBranchRecordStack.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KiResetProcessorTraceBuffer @ 0x1405E5330 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x1405ECF30 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x1405ECF60 (KiSaveThreadIptState.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1405F6590 (KiCheckAndApplyCacheIsolation.c)
 *     SwapContext @ 0x14072FFB0 (SwapContext.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x14072FFB0
 * Reason: Hex-Rays returned no pseudocode for 0x14072FFB0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072FFB0: push    rbp
 * 000000014072FFB2: sub     rsp, 30h
 * 000000014072FFB6: prefetchw byte ptr [rsi+72h]
 * 000000014072FFBA: mov     [rsp+38h+var_10], cl
 * 000000014072FFBE: cmp     word ptr [rsi+72h], 0
 * 000000014072FFC3: jnz     loc_140730652
 * 000000014072FFC9: mov     eax, [rbx+24h]
 * 000000014072FFCC: add     eax, 1
 * 000000014072FFCF: mov     [rsi+72h], ax
 * 000000014072FFD3: mov     eax, cs:KiHresetMask
 * 000000014072FFD9: test    eax, eax
 * 000000014072FFDB: jz      short loc_14072FFE3
 * 000000014072FFDD: hreset  0
 * 000000014072FFE3: mov     eax, cs:KiHwFeedbackResetMask
 * 000000014072FFE9: test    eax, eax
 * 000000014072FFEB: jz      short loc_14072FFF6
 * 000000014072FFED: xor     edx, edx
 * 000000014072FFEF: mov     ecx, 0C0000502h
 * 000000014072FFF4: wrmsr
 * 000000014072FFF6: cli
 * 000000014072FFF7: mov     rcx, rbx
 * 000000014072FFFA: mov     rdx, rsi
 * 000000014072FFFD: call    KiStartThreadCycleAccumulationContextSwap
 * 0000000140730002: inc     dword ptr [rbx+2D3Ch]
 * 0000000140730008: mov     rbp, cs:KeFeatureBits
 * 000000014073000F: cmp     cs:KiCacheIsoBitmap, 0
 * 0000000140730016: jz      short loc_14073002A
 * 0000000140730018: bt      rbp, 2Ch ; ','
 * 000000014073001D: jnb     short loc_14073002A
 * 000000014073001F: mov     rcx, rbx
 * 0000000140730022: mov     rdx, rsi
 * 0000000140730025: call    KiCheckAndApplyCacheIsolation
 * 000000014073002A: cmp     [rbx+18h], rsi
 * 000000014073002E: jz      short loc_140730051
 * 0000000140730030: movzx   ecx, byte ptr [rsi+204h]
 * 0000000140730037: mov     eax, [rbx+0ECh]
 * 000000014073003D: xor     eax, ecx
 * 000000014073003F: test    eax, 0Fh
 * 0000000140730044: jz      short loc_140730051
 * 0000000140730046: mov     rcx, rbx
 * 0000000140730049: mov     rdx, rsi
 * 000000014073004C: call    KeCheckAndApplyBamQos
 * 0000000140730051: mov     rdx, [rdi+250h]
 * 0000000140730058: mov     rcx, [rdi+60h]
 * 000000014073005C: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140730060: mov     eax, edx
 * 0000000140730062: jz      short loc_14073008E
 * 0000000140730064: shr     rdx, 20h
 * 0000000140730068: bt      rbp, 26h ; '&'
 * 000000014073006D: jb      short loc_140730086
 * 000000014073006F: bt      rbp, 0Fh
 * 0000000140730074: jb      short loc_14073008B
 * 0000000140730076: bt      ebp, 17h
 * 000000014073007A: jnb     short loc_140730081
 * 000000014073007C: xsave   byte ptr [rcx]
 * 000000014073007F: jmp     short loc_14073008E
 * 0000000140730081: fxsave  dword ptr [rcx]
 * 0000000140730084: jmp     short loc_14073008E
 * 0000000140730086: xsaves  byte ptr [rcx]
 * 0000000140730089: jmp     short loc_14073008E
 * 000000014073008B: xsaveopt byte ptr [rcx]
 * 000000014073008E: stmxcsr dword ptr [rcx+18h]
 * 0000000140730092: cmp     cs:KiUserCetPl3SspCanonicalizeMask, 0
 * 000000014073009A: jz      short loc_1407300A7
 * 000000014073009C: mov     r15d, eax
 * 000000014073009F: call    KeCanonicalizeXStateUserCetPl3Ssp
 * 00000001407300A4: mov     eax, r15d
 * 00000001407300A7: test    eax, 100h
 * 00000001407300AC: jz      short loc_1407300BF
 * 00000001407300AE: cmp     cs:KiIptMsrMask, 0
 * 00000001407300B5: jz      short loc_1407300BF
 * 00000001407300B7: mov     rcx, rdi
 * 00000001407300BA: call    KiSaveThreadIptState
 * 00000001407300BF: mov     [rdi+58h], rsp
 * 00000001407300C3: mov     rsp, [rsi+58h]
 * 00000001407300C7: test    cs:KiKernelCetEnabled, 1
 * 00000001407300CE: jz      short loc_1407300FD
 * 00000001407300D0: mov     rcx, [rsi+410h]
 * 00000001407300D7: mov     [rbx+9BE8h], rcx
 * 00000001407300DE: rdsspq  rdx
 * 00000001407300E3: mov     rcx, [rsi+408h]
 * 00000001407300EA: rstorssp qword ptr [rcx]
 * 00000001407300EE: saveprevssp
 * 00000001407300F2: sub     rdx, 8
 * 00000001407300F6: mov     [rdi+408h], rdx
 * 00000001407300FD: mov     rax, [rdi+220h]
 * 0000000140730104: cmp     qword ptr [rax+310h], 0
 * 000000014073010C: jz      short loc_140730121
 * 000000014073010E: mov     ecx, 0C0000100h
 * 0000000140730113: rdmsr
 * 0000000140730115: mov     [rdi+678h], eax
 * 000000014073011B: mov     [rdi+67Ch], edx
 * 0000000140730121: btr     word ptr gs:89Eh, 0
 * 000000014073012C: jnb     short loc_140730132
 * 000000014073012E: or      byte ptr [rdi+7Eh], 1
 * 0000000140730132: bt      word ptr [rsi+7Eh], 0
 * 0000000140730138: jnb     short loc_140730143
 * 000000014073013A: or      byte ptr gs:89Eh, 1
 * 0000000140730143: and     byte ptr [rsi+7Eh], 0FEh
 * 0000000140730147: mov     rcx, [rsi+220h]
 * 000000014073014E: or      cl, [rbx+720h]
 * 0000000140730154: and     cl, 0C2h
 * 0000000140730157: cmp     rcx, [rdi+220h]
 * 000000014073015E: jz      short loc_14073016D
 * 0000000140730160: and     cl, 0C0h
 * 0000000140730163: call    KiUpdateSpeculationControl
 * 0000000140730168: jmp     loc_140730323
 * 000000014073016D: movzx   ecx, byte ptr gs:89Eh
 * 0000000140730176: and     cx, 3
 * 000000014073017A: cmp     cx, 1
 * 000000014073017E: jnz     loc_140730323
 * 0000000140730184: cli
 * 0000000140730185: movzx   eax, word ptr gs:8A4h
 * 000000014073018E: cmp     gs:8A6h, ax
 * 0000000140730197: jz      short loc_1407301AB
 * 0000000140730199: mov     gs:8A6h, ax
 * 00000001407301A2: mov     ecx, 48h ; 'H'
 * 00000001407301A7: xor     edx, edx
 * 00000001407301A9: wrmsr
 * 00000001407301AB: movzx   edx, byte ptr gs:89Ah
 * 00000001407301B4: test    edx, 10h
 * 00000001407301BA: jz      short loc_1407301D3
 * 00000001407301BC: mov     eax, 1
 * 00000001407301C1: xor     edx, edx
 * 00000001407301C3: mov     ecx, 49h ; 'I'
 * 00000001407301C8: wrmsr
 * 00000001407301CA: movzx   edx, byte ptr gs:89Ah
 * 00000001407301D3: test    edx, 40h
 * 00000001407301D9: jz      loc_140730316
 * 00000001407301DF: call    loc_1407302F2
 * 00000001407301E4: add     rsp, 8
 * 00000001407301E8: call    loc_1407302FB
 * 00000001407301ED: add     rsp, 8
 * 00000001407301F1: call    loc_1407301E4
 * 00000001407301F6: add     rsp, 8
 * 00000001407301FA: call    loc_1407301ED
 * 00000001407301FF: add     rsp, 8
 * 0000000140730203: call    loc_1407301F6
 * 0000000140730208: add     rsp, 8
 * 000000014073020C: call    loc_1407301FF
 * 0000000140730211: add     rsp, 8
 * 0000000140730215: call    loc_140730208
 * 000000014073021A: add     rsp, 8
 * 000000014073021E: call    loc_140730211
 * 0000000140730223: add     rsp, 8
 * 0000000140730227: call    loc_14073021A
 * 000000014073022C: add     rsp, 8
 * 0000000140730230: call    loc_140730223
 * 0000000140730235: add     rsp, 8
 * 0000000140730239: call    loc_14073022C
 * 000000014073023E: add     rsp, 8
 * 0000000140730242: call    loc_140730235
 * 0000000140730247: add     rsp, 8
 * 000000014073024B: call    loc_14073023E
 * 0000000140730250: add     rsp, 8
 * 0000000140730254: call    loc_140730247
 * 0000000140730259: add     rsp, 8
 * 000000014073025D: call    loc_140730250
 * 0000000140730262: add     rsp, 8
 * 0000000140730266: call    loc_140730259
 * 000000014073026B: add     rsp, 8
 * 000000014073026F: call    loc_140730262
 * 0000000140730274: add     rsp, 8
 * 0000000140730278: call    loc_14073026B
 * 000000014073027D: add     rsp, 8
 * 0000000140730281: call    loc_140730274
 * 0000000140730286: add     rsp, 8
 * 000000014073028A: call    loc_14073027D
 * 000000014073028F: add     rsp, 8
 * 0000000140730293: call    loc_140730286
 * 0000000140730298: add     rsp, 8
 * 000000014073029C: call    loc_14073028F
 * 00000001407302A1: add     rsp, 8
 * 00000001407302A5: call    loc_140730298
 * 00000001407302AA: add     rsp, 8
 * 00000001407302AE: call    loc_1407302A1
 * 00000001407302B3: add     rsp, 8
 * 00000001407302B7: call    loc_1407302AA
 * 00000001407302BC: add     rsp, 8
 * 00000001407302C0: call    loc_1407302B3
 * 00000001407302C5: add     rsp, 8
 * 00000001407302C9: call    loc_1407302BC
 * 00000001407302CE: add     rsp, 8
 * 00000001407302D2: call    loc_1407302C5
 * 00000001407302D7: add     rsp, 8
 * 00000001407302DB: call    loc_1407302CE
 * 00000001407302E0: add     rsp, 8
 * 00000001407302E4: call    loc_1407302D7
 * 00000001407302E9: add     rsp, 8
 * 00000001407302ED: call    loc_1407302E0
 * 00000001407302F2: add     rsp, 8
 * 00000001407302F6: call    loc_1407302E9
 * 00000001407302FB: add     rsp, 8
 * 00000001407302FF: mov     eax, 0DADAh
 * 0000000140730304: test    byte ptr gs:89Ch, 8
 * 000000014073030D: jz      short loc_140730316
 * 000000014073030F: mov     al, 20h ; ' '
 * 0000000140730311: incsspq rax
 * 0000000140730316: lfence
 * 0000000140730319: or      byte ptr gs:89Eh, 2
 * 0000000140730322: sti
 * 0000000140730323: mov     r14, [rsi+0B8h]
 * 000000014073032A: cmp     r14, [rdi+0B8h]
 * 0000000140730331: jz      loc_1407303F6
 * 0000000140730337: movzx   ecx, byte ptr [rbx+0D1h]
 * 000000014073033E: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140730345: mov     rdx, [r14+80h]
 * 000000014073034C: lock bts [rdx+rax*8+8], rcx
 * 0000000140730353: mov     rcx, [r14+28h]
 * 0000000140730357: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073035E: jz      short loc_140730399
 * 0000000140730360: cli
 * 0000000140730361: bt      ecx, 1
 * 0000000140730365: jnb     short loc_140730373
 * 0000000140730367: bts     rcx, 3Fh ; '?'
 * 000000014073036C: or      dword ptr [rbx+0AE98h], 1
 * 0000000140730373: mov     [rbx+0AE80h], rcx
 * 000000014073037A: btr     rcx, 3Fh ; '?'
 * 000000014073037F: and     dword ptr [rbx+0AE98h], 0FFFFFFFDh
 * 0000000140730386: bt      dword ptr [r14+160h], 0
 * 000000014073038F: jnb     short loc_140730398
 * 0000000140730391: xor     dword ptr [rbx+0AE98h], 3
 * 0000000140730398: sti
 * 0000000140730399: test    cs:HvlEnlightenments, 1
 * 00000001407303A3: jz      short loc_1407303AC
 * 00000001407303A5: call    HvlSwitchVirtualAddressSpace
 * 00000001407303AA: jmp     short loc_1407303D3
 * 00000001407303AC: mov     cr3, rcx
 * 00000001407303AF: test    byte ptr cs:KiTrapFeatures, 1
 * 00000001407303B6: jz      short loc_1407303D3
 * 00000001407303B8: bt      ecx, 1
 * 00000001407303BC: jb      short loc_1407303D3
 * 00000001407303BE: mov     rax, cr4
 * 00000001407303C1: xor     rax, 80h
 * 00000001407303C7: mov     cr4, rax
 * 00000001407303CA: xor     rax, 80h
 * 00000001407303D0: mov     cr4, rax
 * 00000001407303D3: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001407303DA: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001407303E1: mov     rdx, [rdi+0B8h]
 * 00000001407303E8: mov     rdx, [rdx+80h]
 * 00000001407303EF: lock btr [rdx+rax*8+8], rcx
 * 00000001407303F6: mov     rax, [rsi+28h]
 * 00000001407303FA: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140730401: jnz     short loc_140730410
 * 0000000140730403: mov     r15, [rbx-178h]
 * 000000014073040A: mov     [r15+4], rax
 * 000000014073040E: jmp     short loc_140730417
 * 0000000140730410: mov     [rbx+0AE88h], rax
 * 0000000140730417: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073041E: jz      short loc_14073042E
 * 0000000140730420: mov     ecx, 1CCh
 * 0000000140730425: mov     rdx, rax
 * 0000000140730428: shr     rdx, 20h
 * 000000014073042C: wrmsr
 * 000000014073042E: mov     [rbx+28h], rax
 * 0000000140730432: test    rax, rax
 * 0000000140730435: jge     loc_14073063A
 * 000000014073043B: cmp     cs:KiCpuTracingFlags, 0
 * 0000000140730442: jnz     loc_1407305E3
 * 0000000140730448: bt      rbp, 37h ; '7'
 * 000000014073044D: jnb     short loc_14073046F
 * 000000014073044F: mov     ecx, 1C4h
 * 0000000140730454: mov     rax, [rdi+428h]
 * 000000014073045B: mov     rdx, [rsi+428h]
 * 0000000140730462: cmp     rax, rdx
 * 0000000140730465: jz      short loc_14073046F
 * 0000000140730467: mov     eax, edx
 * 0000000140730469: shr     rdx, 20h
 * 000000014073046D: wrmsr
 * 000000014073046F: mov     rdx, [rdi+250h]
 * 0000000140730476: mov     rax, rdx
 * 0000000140730479: and     rax, 40000h
 * 000000014073047F: and     rdx, cs:KeEnabledSupervisorXStateFeatures
 * 0000000140730486: or      rdx, rax
 * 0000000140730489: or      rdx, [rsi+250h]
 * 0000000140730490: mov     word ptr [rdi+72h], 0
 * 0000000140730496: mov     rcx, [rsi+60h]
 * 000000014073049A: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014073049E: mov     eax, edx
 * 00000001407304A0: jz      short loc_1407304CD
 * 00000001407304A2: shr     rdx, 20h
 * 00000001407304A6: bt      rbp, 29h ; ')'
 * 00000001407304AB: jnb     short loc_1407304B3
 * 00000001407304AD: test    al, 1
 * 00000001407304AF: jz      short loc_1407304B3
 * 00000001407304B1: fninit
 * 00000001407304B3: bt      rbp, 26h ; '&'
 * 00000001407304B8: jb      short loc_1407304C5
 * 00000001407304BA: bt      ebp, 17h
 * 00000001407304BE: jb      short loc_1407304CA
 * 00000001407304C0: fxrstor dword ptr [rcx]
 * 00000001407304C3: jmp     short loc_1407304CD
 * 00000001407304C5: xrstors byte ptr [rcx]
 * 00000001407304C8: jmp     short loc_1407304CD
 * 00000001407304CA: xrstor  byte ptr [rcx]
 * 00000001407304CD: ldmxcsr dword ptr [rcx+18h]
 * 00000001407304D1: test    eax, 100h
 * 00000001407304D6: jz      short loc_1407304E9
 * 00000001407304D8: cmp     cs:KiIptMsrMask, 0
 * 00000001407304DF: jz      short loc_1407304E9
 * 00000001407304E1: mov     rcx, rsi
 * 00000001407304E4: call    KiRestoreThreadIptState
 * 00000001407304E9: bt      dword ptr [rsi+74h], 0Ah
 * 00000001407304EE: jb      loc_1407305A3
 * 00000001407304F4: mov     rax, [rsi+220h]
 * 00000001407304FB: cmp     qword ptr [rax+310h], 0
 * 0000000140730503: mov     eax, [rsi+678h]
 * 0000000140730509: jz      short loc_140730516
 * 000000014073050B: mov     eax, [rsi+0F0h]
 * 0000000140730511: add     eax, 2000h
 * 0000000140730516: mov     rcx, [rbx-180h]
 * 000000014073051D: mov     [rcx+52h], ax
 * 0000000140730521: shr     eax, 10h
 * 0000000140730524: mov     [rcx+54h], al
 * 0000000140730527: mov     [rcx+57h], ah
 * 000000014073052A: mov     eax, 53h ; 'S'
 * 000000014073052F: mov     fs, eax
 * 0000000140730531: mov     eax, [rsi+678h]
 * 0000000140730537: mov     edx, [rsi+67Ch]
 * 000000014073053D: mov     ecx, 0C0000100h
 * 0000000140730542: wrmsr
 * 0000000140730544: mov     eax, ds
 * 0000000140730546: mov     edx, es
 * 0000000140730548: and     eax, edx
 * 000000014073054A: mov     edx, gs
 * 000000014073054C: and     eax, edx
 * 000000014073054E: cmp     ax, 2Bh ; '+'
 * 0000000140730552: jz      short loc_140730576
 * 0000000140730554: mov     edx, 2Bh ; '+'
 * 0000000140730559: mov     ds, edx
 * 000000014073055B: mov     es, edx
 * 000000014073055D: test    byte ptr cs:KiTrapFeatures, 4
 * 0000000140730564: jz      short loc_14073056C
 * 000000014073056C: cli
 * 000000014073056D: swapgs
 * 0000000140730570: mov     gs, edx
 * 0000000140730572: swapgs
 * 0000000140730575: sti
 * 0000000140730576: mov     rax, [rsi+0F0h]
 * 000000014073057D: mov     edx, [rsi+0F4h]
 * 0000000140730583: mov     [rbx-150h], rax
 * 000000014073058A: test    byte ptr [rsi+3], 4
 * 000000014073058E: jz      short loc_14073059C
 * 0000000140730590: mov     eax, [rsi+680h]
 * 0000000140730596: mov     edx, [rsi+684h]
 * 000000014073059C: mov     ecx, 0C0000102h
 * 00000001407305A1: wrmsr
 * 00000001407305A3: test    dword ptr [rbx+38BCh], 10001h
 * 00000001407305AD: jnz     short loc_140730621
 * 00000001407305AF: inc     dword ptr [rsi+154h]
 * 00000001407305B5: cmp     byte ptr [rsi+0C1h], 1
 * 00000001407305BC: jnz     short loc_1407305DA
 * 00000001407305BE: movzx   ax, [rsp+38h+var_10]
 * 00000001407305C4: or      ax, [rsi+1E6h]
 * 00000001407305CB: jz      short loc_1407305DA
 * 00000001407305CD: mov     ecx, 1
 * 00000001407305D2: call    HalRequestSoftwareInterrupt
 * 00000001407305D7: or      rcx, rsp
 * 00000001407305DA: setz    al
 * 00000001407305DD: add     rsp, 30h
 * 00000001407305E1: pop     rbp
 * 00000001407305E2: retn
 * 00000001407305E3: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001407305ED: jz      short loc_1407305FA
 * 00000001407305EF: mov     rcx, rdi
 * 00000001407305F2: mov     rdx, rsi
 * 00000001407305F5: call    EtwTraceContextSwap
 * 00000001407305FA: test    cs:KiCpuTracingFlags, 2
 * 0000000140730604: jz      short loc_14073060B
 * 0000000140730606: call    KiClearLastBranchRecordStack
 * 000000014073060B: test    cs:KiCpuTracingFlags, 4
 * 0000000140730615: jz      short loc_14073061C
 * 0000000140730617: call    KiResetProcessorTraceBuffer
 * 000000014073061C: jmp     loc_140730448
 * 0000000140730621: xor     r9, r9; BugCheckParameter3
 * 0000000140730624: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140730629: mov     r8, rsi; BugCheckParameter2
 * 000000014073062C: mov     rdx, rdi; BugCheckParameter1
 * 000000014073062F: mov     ecx, 0B8h; BugCheckCode
 * 0000000140730634: call    KeBugCheckEx
 * 000000014073063A: xor     r9, r9; BugCheckParameter3
 * 000000014073063D: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140730642: mov     r8, rsi; BugCheckParameter2
 * 0000000140730645: mov     rdx, rdi; BugCheckParameter1
 * 0000000140730648: mov     ecx, 1CEh; BugCheckCode
 * 000000014073064D: call    KeBugCheckEx
 * 0000000140730652: xor     ebp, ebp
 * 0000000140730654: inc     ebp
 * 0000000140730656: test    cs:HvlLongSpinCountMask, ebp
 * 000000014073065C: jnz     short loc_14073067A
 * 000000014073065E: test    cs:HvlEnlightenments, 40h
 * 0000000140730668: jz      short loc_14073067A
 * 000000014073066A: call    KiCheckVpBackingLongSpinWaitHypercall
 * 000000014073066F: test    al, al
 * 0000000140730671: jz      short loc_14073067A
 * 0000000140730673: mov     ecx, ebp
 * 0000000140730675: call    HvlNotifyLongSpinWait
 * 000000014073067A: pause
 * 000000014073067C: cmp     word ptr [rsi+72h], 0
 * 0000000140730681: jz      loc_14072FFC9
 * 0000000140730687: jmp     short loc_140730654
 */
