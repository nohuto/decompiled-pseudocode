/*
 * XREFs of KiFastFailDispatch @ 0x140741680
 * Callers:
 *     KiBoundFault @ 0x1407393C0 (KiBoundFault.c)
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 *     KiRaiseSecurityCheckFailure @ 0x14073EEC0 (KiRaiseSecurityCheckFailure.c)
 * Callees:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403FBB00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14072CC60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1407317C0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiFastFailDispatch @ 0x140741680 (KiFastFailDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiFastFailDispatch @ 0x140741680
 * Reason: Hex-Rays returned no pseudocode for 0x140741680
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140741680: sub     rsp, 1D8h
 * 0000000140741687: lea     rax, [rsp+1D8h+var_D8]
 * 000000014074168F: movaps  [rsp+1D8h+var_1A8], xmm6
 * 0000000140741694: movaps  [rsp+1D8h+var_198], xmm7
 * 0000000140741699: movaps  [rsp+1D8h+var_188], xmm8
 * 000000014074169F: movaps  [rsp+1D8h+var_178], xmm9
 * 00000001407416A5: movaps  [rsp+1D8h+var_168], xmm10
 * 00000001407416AB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001407416B0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001407416B5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001407416BA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001407416BF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001407416C4: mov     [rax], rbx
 * 00000001407416C7: mov     [rax+8], rdi
 * 00000001407416CB: mov     [rax+10h], rsi
 * 00000001407416CF: mov     [rax+18h], r12
 * 00000001407416D3: mov     [rax+20h], r13
 * 00000001407416D7: mov     [rax+28h], r14
 * 00000001407416DB: mov     [rax+30h], r15
 * 00000001407416DF: lea     rax, [rsp+1D8h+var_A0]
 * 00000001407416E7: mov     [rax], ecx
 * 00000001407416E9: xor     ecx, ecx
 * 00000001407416EB: mov     dword ptr [rax+4], 1
 * 00000001407416F2: mov     [rax+8], rcx
 * 00000001407416F6: mov     [rax+10h], r8
 * 00000001407416FA: mov     [rax+18h], edx
 * 00000001407416FD: mov     [rax+20h], r9
 * 0000000140741701: mov     [rax+28h], r10
 * 0000000140741705: mov     [rax+30h], r11
 * 0000000140741709: mov     r9b, [rbp+0F0h]
 * 0000000140741710: and     r9b, 1
 * 0000000140741714: cmp     r9b, 0
 * 0000000140741718: jnz     short loc_140741732
 * 000000014074171A: mov     rdx, [rax+20h]
 * 000000014074171E: xor     r10, r10
 * 0000000140741721: mov     r9, rax
 * 0000000140741724: lea     r8, [rbp-80h]
 * 0000000140741728: mov     ecx, 139h
 * 000000014074172D: call    KiBugCheckDispatch
 * 0000000140741732: mov     [rsp+1D8h+var_1B8], 0; char
 * 0000000140741737: lea     r8, [rbp-80h]
 * 000000014074173B: mov     rdx, rsp
 * 000000014074173E: mov     rcx, rax; int
 * 0000000140741741: call    KiDispatchException
 * 0000000140741746: lea     rcx, [rsp+1D8h+var_D8]
 * 000000014074174E: movaps  xmm6, [rsp+1D8h+var_1A8]
 * 0000000140741753: movaps  xmm7, [rsp+1D8h+var_198]
 * 0000000140741758: movaps  xmm8, [rsp+1D8h+var_188]
 * 000000014074175E: movaps  xmm9, [rsp+1D8h+var_178]
 * 0000000140741764: movaps  xmm10, [rsp+1D8h+var_168]
 * 000000014074176A: movaps  xmm11, xmmword ptr [rcx-80h]
 * 000000014074176F: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140741774: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140741779: movaps  xmm14, xmmword ptr [rcx-50h]
 * 000000014074177E: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140741783: mov     rbx, [rcx]
 * 0000000140741786: mov     rdi, [rcx+8]
 * 000000014074178A: mov     rsi, [rcx+10h]
 * 000000014074178E: mov     r12, [rcx+18h]
 * 0000000140741792: mov     r13, [rcx+20h]
 * 0000000140741796: mov     r14, [rcx+28h]
 * 000000014074179A: mov     r15, [rcx+30h]
 * 000000014074179E: cli
 * 000000014074179F: xor     ecx, ecx
 * 00000001407417A1: rdsspq  rcx
 * 00000001407417A6: test    rcx, rcx
 * 00000001407417A9: jz      short loc_1407417B5
 * 00000001407417AB: mov     ecx, 1
 * 00000001407417B0: incsspq rcx
 * 00000001407417B5: test    byte ptr cs:KiTrapFeatures, 2
 * 00000001407417BC: jz      short loc_1407417C6
 * 00000001407417BE: lea     rsp, [rbp-88h]
 * 00000001407417C5: retn
 * 00000001407417C6: test    byte ptr [rbp+0F0h], 1
 * 00000001407417CD: jz      loc_140741ACE
 * 00000001407417D3: test    byte ptr cs:KiTrapFeatures, 8
 * 00000001407417DA: jz      short loc_1407417DF
 * 00000001407417DC: stac
 * 00000001407417DF: mov     rcx, gs:188h
 * 00000001407417E8: test    byte ptr [rcx+0C2h], 3
 * 00000001407417EF: jz      short loc_14074180C
 * 00000001407417F1: mov     ecx, 1
 * 00000001407417F6: mov     cr8, rcx
 * 00000001407417FA: sti
 * 00000001407417FB: call    KiInitiateUserApc
 * 0000000140741800: cli
 * 0000000140741801: mov     ecx, 0
 * 0000000140741806: mov     cr8, rcx
 * 000000014074180A: jmp     short loc_1407417DF
 * 000000014074180C: test    byte ptr [rcx+3], 80h
 * 0000000140741810: jz      short loc_14074181F
 * 0000000140741812: call    KiSynchronizeUserIsolationDomainEntry
 * 0000000140741817: test    eax, eax
 * 0000000140741819: mov     rax, [rbp-50h]
 * 000000014074181D: jnz     short loc_1407417DF
 * 000000014074181F: test    byte ptr gs:8A0h, 2
 * 0000000140741828: jz      short loc_140741831
 * 000000014074182A: xor     ecx, ecx
 * 000000014074182C: call    KiUpdateStibpPairing
 * 0000000140741831: mov     rcx, gs:188h
 * 000000014074183A: test    dword ptr [rcx], 8000000h
 * 0000000140741840: jz      short loc_140741847
 * 0000000140741842: call    KiRestoreSetContextState
 * 0000000140741847: mov     rcx, gs:188h
 * 0000000140741850: test    dword ptr [rcx], 10000h
 * 0000000140741856: jz      short loc_14074186C
 * 0000000140741858: test    byte ptr [rcx+2], 1
 * 000000014074185C: jz      short loc_14074186C
 * 000000014074185E: call    KiCopyCounters
 * 0000000140741863: mov     rcx, gs:188h
 * 000000014074186C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140741870: cmp     word ptr [rbp+80h], 0
 * 0000000140741878: jz      short loc_14074187F
 * 000000014074187A: call    KiRestoreDebugRegisterState
 * 000000014074187F: mov     rcx, gs:188h
 * 0000000140741888: bt      dword ptr [rcx+74h], 16h
 * 000000014074188D: jnb     short loc_1407418B9
 * 000000014074188F: xor     ecx, ecx
 * 0000000140741891: rdsspq  rcx
 * 0000000140741896: mov     r8, gs:9D68h
 * 000000014074189F: add     r8, 8
 * 00000001407418A3: cmp     rcx, r8
 * 00000001407418A6: jnz     short loc_1407418B9
 * 00000001407418A8: mov     rcx, gs:9D60h
 * 00000001407418B1: rstorssp qword ptr [rcx]
 * 00000001407418B5: saveprevssp
 * 00000001407418B9: mov     byte ptr gs:89Eh, 0
 * 00000001407418C2: movzx   eax, word ptr gs:8ACh
 * 00000001407418CB: cmp     gs:8A6h, ax
 * 00000001407418D4: jz      short loc_1407418E8
 * 00000001407418D6: mov     gs:8A6h, ax
 * 00000001407418DF: mov     ecx, 48h ; 'H'
 * 00000001407418E4: xor     edx, edx
 * 00000001407418E6: wrmsr
 * 00000001407418E8: btr     word ptr gs:898h, 2
 * 00000001407418F3: jnb     short loc_140741903
 * 00000001407418F5: mov     eax, 1
 * 00000001407418FA: xor     edx, edx
 * 00000001407418FC: mov     ecx, 49h ; 'I'
 * 0000000140741901: wrmsr
 * 0000000140741903: btr     word ptr gs:898h, 5
 * 000000014074190E: jnb     loc_140741A4B
 * 0000000140741914: call    loc_140741A27
 * 0000000140741919: add     rsp, 8
 * 000000014074191D: call    loc_140741A30
 * 0000000140741922: add     rsp, 8
 * 0000000140741926: call    loc_140741919
 * 000000014074192B: add     rsp, 8
 * 000000014074192F: call    loc_140741922
 * 0000000140741934: add     rsp, 8
 * 0000000140741938: call    loc_14074192B
 * 000000014074193D: add     rsp, 8
 * 0000000140741941: call    loc_140741934
 * 0000000140741946: add     rsp, 8
 * 000000014074194A: call    loc_14074193D
 * 000000014074194F: add     rsp, 8
 * 0000000140741953: call    loc_140741946
 * 0000000140741958: add     rsp, 8
 * 000000014074195C: call    loc_14074194F
 * 0000000140741961: add     rsp, 8
 * 0000000140741965: call    loc_140741958
 * 000000014074196A: add     rsp, 8
 * 000000014074196E: call    loc_140741961
 * 0000000140741973: add     rsp, 8
 * 0000000140741977: call    loc_14074196A
 * 000000014074197C: add     rsp, 8
 * 0000000140741980: call    loc_140741973
 * 0000000140741985: add     rsp, 8
 * 0000000140741989: call    loc_14074197C
 * 000000014074198E: add     rsp, 8
 * 0000000140741992: call    loc_140741985
 * 0000000140741997: add     rsp, 8
 * 000000014074199B: call    loc_14074198E
 * 00000001407419A0: add     rsp, 8
 * 00000001407419A4: call    loc_140741997
 * 00000001407419A9: add     rsp, 8
 * 00000001407419AD: call    loc_1407419A0
 * 00000001407419B2: add     rsp, 8
 * 00000001407419B6: call    loc_1407419A9
 * 00000001407419BB: add     rsp, 8
 * 00000001407419BF: call    loc_1407419B2
 * 00000001407419C4: add     rsp, 8
 * 00000001407419C8: call    loc_1407419BB
 * 00000001407419CD: add     rsp, 8
 * 00000001407419D1: call    loc_1407419C4
 * 00000001407419D6: add     rsp, 8
 * 00000001407419DA: call    loc_1407419CD
 * 00000001407419DF: add     rsp, 8
 * 00000001407419E3: call    loc_1407419D6
 * 00000001407419E8: add     rsp, 8
 * 00000001407419EC: call    loc_1407419DF
 * 00000001407419F1: add     rsp, 8
 * 00000001407419F5: call    loc_1407419E8
 * 00000001407419FA: add     rsp, 8
 * 00000001407419FE: call    loc_1407419F1
 * 0000000140741A03: add     rsp, 8
 * 0000000140741A07: call    loc_1407419FA
 * 0000000140741A0C: add     rsp, 8
 * 0000000140741A10: call    loc_140741A03
 * 0000000140741A15: add     rsp, 8
 * 0000000140741A19: call    loc_140741A0C
 * 0000000140741A1E: add     rsp, 8
 * 0000000140741A22: call    loc_140741A15
 * 0000000140741A27: add     rsp, 8
 * 0000000140741A2B: call    loc_140741A1E
 * 0000000140741A30: add     rsp, 8
 * 0000000140741A34: mov     eax, 0DADAh
 * 0000000140741A39: test    byte ptr gs:89Ch, 8
 * 0000000140741A42: jz      short loc_140741A4B
 * 0000000140741A44: mov     al, 20h ; ' '
 * 0000000140741A46: incsspq rax
 * 0000000140741A4B: test    word ptr gs:898h, 100h
 * 0000000140741A56: jz      short loc_140741A64
 * 0000000140741A58: xor     eax, eax
 * 0000000140741A5A: xor     edx, edx
 * 0000000140741A5C: mov     ecx, 1
 * 0000000140741A61: div     rcx
 * 0000000140741A64: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140741A68: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140741A6C: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140741A70: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140741A74: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140741A78: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140741A7C: mov     r11, [rbp-20h]
 * 0000000140741A80: mov     r10, [rbp-28h]
 * 0000000140741A84: mov     r9, [rbp-30h]
 * 0000000140741A88: mov     r8, [rbp-38h]
 * 0000000140741A8C: mov     rdx, [rbp-40h]
 * 0000000140741A90: mov     rcx, [rbp-48h]
 * 0000000140741A94: mov     rax, [rbp-50h]
 * 0000000140741A98: mov     rsp, rbp
 * 0000000140741A9B: mov     rbp, [rbp+0D8h]
 * 0000000140741AA2: add     rsp, 0E8h
 * 0000000140741AA9: test    byte ptr cs:KiTrapFeatures, 1
 * 0000000140741AB0: jz      short loc_140741AB7
 * 0000000140741AB2: jmp     KiKernelExit
 * 0000000140741AB7: test    word ptr gs:898h, 200h
 * 0000000140741AC2: jz      short loc_140741AC9
 * 0000000140741AC4: verw    [rsp-1E8h+arg_200]
 * 0000000140741AC9: swapgs
 * 0000000140741ACC: iretq
 * 0000000140741ACE: ldmxcsr dword ptr [rbp-54h]
 * 0000000140741AD2: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140741AD6: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140741ADA: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140741ADE: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140741AE2: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140741AE6: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140741AEA: mov     r11, [rbp-20h]
 * 0000000140741AEE: mov     r10, [rbp-28h]
 * 0000000140741AF2: mov     r9, [rbp-30h]
 * 0000000140741AF6: mov     r8, [rbp-38h]
 * 0000000140741AFA: mov     rdx, [rbp-40h]
 * 0000000140741AFE: mov     rcx, [rbp-48h]
 * 0000000140741B02: mov     rax, [rbp-50h]
 * 0000000140741B06: mov     rsp, rbp
 * 0000000140741B09: mov     rbp, [rbp+0D8h]
 * 0000000140741B10: add     rsp, 0E8h
 * 0000000140741B17: iretq
 */
