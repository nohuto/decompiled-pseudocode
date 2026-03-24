/*
 * XREFs of KiApcInterrupt @ 0x14072C480
 * Callers:
 *     KiApcInterruptShadow @ 0x140C59C40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x1402439F0 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt @ 0x14032DA80 (HalPerformEndOfInterrupt.c)
 *     KiUpdateStibpPairing @ 0x140402530 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x140402A00 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x140533C30 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405F3410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x140728090 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x14072C480 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x14072CBF0 (KiInitiateUserApc.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x14072C480
 * Reason: Hex-Rays returned no pseudocode for 0x14072C480
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072C480: sub     rsp, 8
 * 000000014072C484: push    rbp
 * 000000014072C485: sub     rsp, 158h
 * 000000014072C48C: lea     rbp, [rsp+80h]
 * 000000014072C494: mov     [rbp+0E8h+var_18], rsi
 * 000000014072C49B: mov     [rbp+0E8h+var_138], rax
 * 000000014072C49F: mov     [rbp+0E8h+var_130], rcx
 * 000000014072C4A3: mov     [rbp+0E8h+var_128], rdx
 * 000000014072C4A7: mov     [rbp+0E8h+var_120], r8
 * 000000014072C4AB: mov     [rbp+0E8h+var_118], r9
 * 000000014072C4AF: mov     [rbp+0E8h+var_110], r10
 * 000000014072C4B3: mov     [rbp+0E8h+var_108], r11
 * 000000014072C4B7: test    [rbp+0E8h+arg_0], 1
 * 000000014072C4BE: jnz     short loc_14072C4F8
 * 000000014072C4C0: xor     edx, edx
 * 000000014072C4C2: rdsspq  rdx
 * 000000014072C4C7: mov     [rbp+0E8h+var_90], rdx
 * 000000014072C4CB: lfence
 * 000000014072C4CE: test    byte ptr gs:898h, 1
 * 000000014072C4D7: jnz     short loc_14072C4E1
 * 000000014072C4D9: lfence
 * 000000014072C4DC: jmp     loc_14072C769
 * 000000014072C4E1: movzx   eax, word ptr gs:8A6h
 * 000000014072C4EA: mov     ecx, 48h ; 'H'
 * 000000014072C4EF: xor     edx, edx
 * 000000014072C4F1: wrmsr
 * 000000014072C4F3: jmp     loc_14072C769
 * 000000014072C4F8: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072C4FF: jnz     short loc_14072C504
 * 000000014072C501: swapgs
 * 000000014072C504: lfence
 * 000000014072C507: mov     rcx, gs:9D68h
 * 000000014072C510: test    rcx, rcx
 * 000000014072C513: jz      short loc_14072C534
 * 000000014072C515: rdsspq  rdx
 * 000000014072C51A: mov     r10, gs:9D60h
 * 000000014072C523: add     r10, 8
 * 000000014072C527: cmp     rdx, r10
 * 000000014072C52A: jnz     short loc_14072C534
 * 000000014072C52C: rstorssp qword ptr [rcx]
 * 000000014072C530: saveprevssp
 * 000000014072C534: mov     r10, gs:188h
 * 000000014072C53D: mov     rcx, gs:188h
 * 000000014072C546: mov     rcx, [rcx+220h]
 * 000000014072C54D: mov     rcx, [rcx+760h]
 * 000000014072C554: mov     gs:890h, rcx
 * 000000014072C55D: mov     cx, gs:8A2h
 * 000000014072C566: mov     gs:8A4h, cx
 * 000000014072C56F: mov     cl, gs:898h
 * 000000014072C577: mov     gs:89Ah, cl
 * 000000014072C57F: movzx   eax, word ptr gs:8A8h
 * 000000014072C588: cmp     gs:8A6h, ax
 * 000000014072C591: jz      short loc_14072C5A5
 * 000000014072C593: mov     gs:8A6h, ax
 * 000000014072C59C: mov     ecx, 48h ; 'H'
 * 000000014072C5A1: xor     edx, edx
 * 000000014072C5A3: wrmsr
 * 000000014072C5A5: movzx   edx, byte ptr gs:898h
 * 000000014072C5AE: test    edx, 8
 * 000000014072C5B4: jz      short loc_14072C5CD
 * 000000014072C5B6: mov     eax, 1
 * 000000014072C5BB: xor     edx, edx
 * 000000014072C5BD: mov     ecx, 49h ; 'I'
 * 000000014072C5C2: wrmsr
 * 000000014072C5C4: movzx   edx, byte ptr gs:898h
 * 000000014072C5CD: test    edx, 2
 * 000000014072C5D3: jz      loc_14072C710
 * 000000014072C5D9: call    loc_14072C6EC
 * 000000014072C5DE: add     rsp, 8
 * 000000014072C5E2: call    loc_14072C6F5
 * 000000014072C5E7: add     rsp, 8
 * 000000014072C5EB: call    loc_14072C5DE
 * 000000014072C5F0: add     rsp, 8
 * 000000014072C5F4: call    loc_14072C5E7
 * 000000014072C5F9: add     rsp, 8
 * 000000014072C5FD: call    loc_14072C5F0
 * 000000014072C602: add     rsp, 8
 * 000000014072C606: call    loc_14072C5F9
 * 000000014072C60B: add     rsp, 8
 * 000000014072C60F: call    loc_14072C602
 * 000000014072C614: add     rsp, 8
 * 000000014072C618: call    loc_14072C60B
 * 000000014072C61D: add     rsp, 8
 * 000000014072C621: call    loc_14072C614
 * 000000014072C626: add     rsp, 8
 * 000000014072C62A: call    loc_14072C61D
 * 000000014072C62F: add     rsp, 8
 * 000000014072C633: call    loc_14072C626
 * 000000014072C638: add     rsp, 8
 * 000000014072C63C: call    loc_14072C62F
 * 000000014072C641: add     rsp, 8
 * 000000014072C645: call    loc_14072C638
 * 000000014072C64A: add     rsp, 8
 * 000000014072C64E: call    loc_14072C641
 * 000000014072C653: add     rsp, 8
 * 000000014072C657: call    loc_14072C64A
 * 000000014072C65C: add     rsp, 8
 * 000000014072C660: call    loc_14072C653
 * 000000014072C665: add     rsp, 8
 * 000000014072C669: call    loc_14072C65C
 * 000000014072C66E: add     rsp, 8
 * 000000014072C672: call    loc_14072C665
 * 000000014072C677: add     rsp, 8
 * 000000014072C67B: call    loc_14072C66E
 * 000000014072C680: add     rsp, 8
 * 000000014072C684: call    loc_14072C677
 * 000000014072C689: add     rsp, 8
 * 000000014072C68D: call    loc_14072C680
 * 000000014072C692: add     rsp, 8
 * 000000014072C696: call    loc_14072C689
 * 000000014072C69B: add     rsp, 8
 * 000000014072C69F: call    loc_14072C692
 * 000000014072C6A4: add     rsp, 8
 * 000000014072C6A8: call    loc_14072C69B
 * 000000014072C6AD: add     rsp, 8
 * 000000014072C6B1: call    loc_14072C6A4
 * 000000014072C6B6: add     rsp, 8
 * 000000014072C6BA: call    loc_14072C6AD
 * 000000014072C6BF: add     rsp, 8
 * 000000014072C6C3: call    loc_14072C6B6
 * 000000014072C6C8: add     rsp, 8
 * 000000014072C6CC: call    loc_14072C6BF
 * 000000014072C6D1: add     rsp, 8
 * 000000014072C6D5: call    loc_14072C6C8
 * 000000014072C6DA: add     rsp, 8
 * 000000014072C6DE: call    loc_14072C6D1
 * 000000014072C6E3: add     rsp, 8
 * 000000014072C6E7: call    loc_14072C6DA
 * 000000014072C6EC: add     rsp, 8
 * 000000014072C6F0: call    loc_14072C6E3
 * 000000014072C6F5: add     rsp, 8
 * 000000014072C6F9: mov     eax, 0DADAh
 * 000000014072C6FE: test    byte ptr gs:89Ch, 8
 * 000000014072C707: jz      short loc_14072C710
 * 000000014072C709: mov     al, 20h ; ' '
 * 000000014072C70B: incsspq rax
 * 000000014072C710: test    edx, 80h
 * 000000014072C716: jz      short loc_14072C720
 * 000000014072C718: lfence
 * 000000014072C71B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072C720: lfence
 * 000000014072C723: mov     byte ptr gs:89Eh, 0
 * 000000014072C72C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072C733: jz      short loc_14072C754
 * 000000014072C735: mov     ecx, 6A7h
 * 000000014072C73A: rdmsr
 * 000000014072C73C: cmp     edx, 0
 * 000000014072C73F: jz      short loc_14072C754
 * 000000014072C741: mov     ecx, edx
 * 000000014072C743: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072C749: cmp     edx, ecx
 * 000000014072C74B: jz      short loc_14072C754
 * 000000014072C74D: mov     ecx, 6A7h
 * 000000014072C752: wrmsr
 * 000000014072C754: test    byte ptr [r10+3], 3
 * 000000014072C759: mov     [rbp+0E8h+var_68], 0
 * 000000014072C762: jz      short loc_14072C769
 * 000000014072C764: call    KiSaveDebugRegisterState
 * 000000014072C769: cld
 * 000000014072C76A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014072C76E: ldmxcsr dword ptr gs:180h
 * 000000014072C777: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014072C77B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014072C77F: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014072C783: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014072C787: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014072C78B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014072C78F: test    [rbp+0E8h+arg_0], 1
 * 000000014072C796: jz      short KiApcInterruptDispatchTrap
 * 000000014072C798: mov     r10, gs:188h
 * 000000014072C7A1: test    byte ptr [r10+3], 80h
 * 000000014072C7A6: jz      short KiApcInterruptDispatchTrap
 * 000000014072C7A8: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072C7AD: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072C7B4: jz      short loc_14072C7BD
 * 000000014072C7B6: mov     [rbp+0E8h+var_18], rsi
 * 000000014072C7BD: mov     [rbp+0E8h+var_13D], 0
 * 000000014072C7C1: xor     esi, esi
 * 000000014072C7C3: inc     dword ptr gs:87C0h
 * 000000014072C7CB: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072C7D2: jz      short loc_14072C7F5
 * 000000014072C7D4: test    [rbp+0E8h+arg_0], 1
 * 000000014072C7DB: jnz     short loc_14072C7F2
 * 000000014072C7DD: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072C7E4: jz      short loc_14072C7F5
 * 000000014072C7E6: test    [rbp+0E8h+arg_8], 40000h
 * 000000014072C7F0: jz      short loc_14072C7F5
 * 000000014072C7F2: stac
 * 000000014072C7F5: test    byte ptr cs:KiTrapFeatures, 10h
 * 000000014072C7FC: jz      short loc_14072C822
 * 000000014072C7FE: btr     dword ptr gs:228h, 1
 * 000000014072C808: cmp     dword ptr gs:228h, 0
 * 000000014072C811: jnz     short loc_14072C822
 * 000000014072C813: mov     ecx, 0C0010015h
 * 000000014072C818: rdmsr
 * 000000014072C81A: btr     edx, 0
 * 000000014072C81E: jnb     short loc_14072C822
 * 000000014072C820: wrmsr
 * 000000014072C822: mov     ecx, 1
 * 000000014072C827: cmp     cs:KiIrqlFlags, 0
 * 000000014072C82E: jz      short loc_14072C837
 * 000000014072C830: call    KzSetIrqlUnsafe
 * 000000014072C835: jmp     short loc_14072C83F
 * 000000014072C837: mov     rax, cr8
 * 000000014072C83B: mov     cr8, rcx
 * 000000014072C83F: mov     [rbp+0E8h+var_13F], al
 * 000000014072C842: mov     rcx, rsi
 * 000000014072C845: call    HalPerformEndOfInterrupt
 * 000000014072C84A: sti
 * 000000014072C84B: cmp     byte ptr gs:187h, 0
 * 000000014072C854: jnz     short loc_14072C866
 * 000000014072C856: mov     ecx, 0
 * 000000014072C85B: xor     edx, edx
 * 000000014072C85D: lea     r8, [rbp+0E8h+var_168]
 * 000000014072C861: call    KiDeliverApc
 * 000000014072C866: cli
 * 000000014072C867: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014072C86B: cmp     cs:KiIrqlFlags, 0
 * 000000014072C872: jz      short loc_14072C87B
 * 000000014072C874: call    KzSetIrqlUnsafe
 * 000000014072C879: jmp     short loc_14072C87F
 * 000000014072C87B: mov     cr8, rcx
 * 000000014072C87F: mov     rsi, [rbp+0E8h+var_18]
 * 000000014072C886: cli
 * 000000014072C887: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072C88E: jz      short loc_14072C895
 * 000000014072C890: add     rsp, 28h
 * 000000014072C894: retn
 * 000000014072C895: test    [rbp+0E8h+arg_0], 1
 * 000000014072C89C: jz      loc_14072CB9D
 * 000000014072C8A2: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072C8A9: jz      short loc_14072C8AE
 * 000000014072C8AB: stac
 * 000000014072C8AE: mov     rcx, gs:188h
 * 000000014072C8B7: test    byte ptr [rcx+0C2h], 3
 * 000000014072C8BE: jz      short loc_14072C8DB
 * 000000014072C8C0: mov     ecx, 1
 * 000000014072C8C5: mov     cr8, rcx
 * 000000014072C8C9: sti
 * 000000014072C8CA: call    KiInitiateUserApc
 * 000000014072C8CF: cli
 * 000000014072C8D0: mov     ecx, 0
 * 000000014072C8D5: mov     cr8, rcx
 * 000000014072C8D9: jmp     short loc_14072C8AE
 * 000000014072C8DB: test    byte ptr [rcx+3], 80h
 * 000000014072C8DF: jz      short loc_14072C8EE
 * 000000014072C8E1: call    KiSynchronizeUserIsolationDomainEntry
 * 000000014072C8E6: test    eax, eax
 * 000000014072C8E8: mov     rax, [rbp+0E8h+var_138]
 * 000000014072C8EC: jnz     short loc_14072C8AE
 * 000000014072C8EE: test    byte ptr gs:8A0h, 2
 * 000000014072C8F7: jz      short loc_14072C900
 * 000000014072C8F9: xor     ecx, ecx
 * 000000014072C8FB: call    KiUpdateStibpPairing
 * 000000014072C900: mov     rcx, gs:188h
 * 000000014072C909: test    dword ptr [rcx], 8000000h
 * 000000014072C90F: jz      short loc_14072C916
 * 000000014072C911: call    KiRestoreSetContextState
 * 000000014072C916: mov     rcx, gs:188h
 * 000000014072C91F: test    dword ptr [rcx], 10000h
 * 000000014072C925: jz      short loc_14072C93B
 * 000000014072C927: test    byte ptr [rcx+2], 1
 * 000000014072C92B: jz      short loc_14072C93B
 * 000000014072C92D: call    KiCopyCounters
 * 000000014072C932: mov     rcx, gs:188h
 * 000000014072C93B: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014072C93F: cmp     [rbp+0E8h+var_68], 0
 * 000000014072C947: jz      short loc_14072C94E
 * 000000014072C949: call    KiRestoreDebugRegisterState
 * 000000014072C94E: mov     rcx, gs:188h
 * 000000014072C957: bt      dword ptr [rcx+74h], 16h
 * 000000014072C95C: jnb     short loc_14072C988
 * 000000014072C95E: xor     ecx, ecx
 * 000000014072C960: rdsspq  rcx
 * 000000014072C965: mov     r8, gs:9D68h
 * 000000014072C96E: add     r8, 8
 * 000000014072C972: cmp     rcx, r8
 * 000000014072C975: jnz     short loc_14072C988
 * 000000014072C977: mov     rcx, gs:9D60h
 * 000000014072C980: rstorssp qword ptr [rcx]
 * 000000014072C984: saveprevssp
 * 000000014072C988: mov     byte ptr gs:89Eh, 0
 * 000000014072C991: movzx   eax, word ptr gs:8ACh
 * 000000014072C99A: cmp     gs:8A6h, ax
 * 000000014072C9A3: jz      short loc_14072C9B7
 * 000000014072C9A5: mov     gs:8A6h, ax
 * 000000014072C9AE: mov     ecx, 48h ; 'H'
 * 000000014072C9B3: xor     edx, edx
 * 000000014072C9B5: wrmsr
 * 000000014072C9B7: btr     word ptr gs:898h, 2
 * 000000014072C9C2: jnb     short loc_14072C9D2
 * 000000014072C9C4: mov     eax, 1
 * 000000014072C9C9: xor     edx, edx
 * 000000014072C9CB: mov     ecx, 49h ; 'I'
 * 000000014072C9D0: wrmsr
 * 000000014072C9D2: btr     word ptr gs:898h, 5
 * 000000014072C9DD: jnb     loc_14072CB1A
 * 000000014072C9E3: call    loc_14072CAF6
 * 000000014072C9E8: add     rsp, 8
 * 000000014072C9EC: call    loc_14072CAFF
 * 000000014072C9F1: add     rsp, 8
 * 000000014072C9F5: call    loc_14072C9E8
 * 000000014072C9FA: add     rsp, 8
 * 000000014072C9FE: call    loc_14072C9F1
 * 000000014072CA03: add     rsp, 8
 * 000000014072CA07: call    loc_14072C9FA
 * 000000014072CA0C: add     rsp, 8
 * 000000014072CA10: call    loc_14072CA03
 * 000000014072CA15: add     rsp, 8
 * 000000014072CA19: call    loc_14072CA0C
 * 000000014072CA1E: add     rsp, 8
 * 000000014072CA22: call    loc_14072CA15
 * 000000014072CA27: add     rsp, 8
 * 000000014072CA2B: call    loc_14072CA1E
 * 000000014072CA30: add     rsp, 8
 * 000000014072CA34: call    loc_14072CA27
 * 000000014072CA39: add     rsp, 8
 * 000000014072CA3D: call    loc_14072CA30
 * 000000014072CA42: add     rsp, 8
 * 000000014072CA46: call    loc_14072CA39
 * 000000014072CA4B: add     rsp, 8
 * 000000014072CA4F: call    loc_14072CA42
 * 000000014072CA54: add     rsp, 8
 * 000000014072CA58: call    loc_14072CA4B
 * 000000014072CA5D: add     rsp, 8
 * 000000014072CA61: call    loc_14072CA54
 * 000000014072CA66: add     rsp, 8
 * 000000014072CA6A: call    loc_14072CA5D
 * 000000014072CA6F: add     rsp, 8
 * 000000014072CA73: call    loc_14072CA66
 * 000000014072CA78: add     rsp, 8
 * 000000014072CA7C: call    loc_14072CA6F
 * 000000014072CA81: add     rsp, 8
 * 000000014072CA85: call    loc_14072CA78
 * 000000014072CA8A: add     rsp, 8
 * 000000014072CA8E: call    loc_14072CA81
 * 000000014072CA93: add     rsp, 8
 * 000000014072CA97: call    loc_14072CA8A
 * 000000014072CA9C: add     rsp, 8
 * 000000014072CAA0: call    loc_14072CA93
 * 000000014072CAA5: add     rsp, 8
 * 000000014072CAA9: call    loc_14072CA9C
 * 000000014072CAAE: add     rsp, 8
 * 000000014072CAB2: call    loc_14072CAA5
 * 000000014072CAB7: add     rsp, 8
 * 000000014072CABB: call    loc_14072CAAE
 * 000000014072CAC0: add     rsp, 8
 * 000000014072CAC4: call    loc_14072CAB7
 * 000000014072CAC9: add     rsp, 8
 * 000000014072CACD: call    loc_14072CAC0
 * 000000014072CAD2: add     rsp, 8
 * 000000014072CAD6: call    loc_14072CAC9
 * 000000014072CADB: add     rsp, 8
 * 000000014072CADF: call    loc_14072CAD2
 * 000000014072CAE4: add     rsp, 8
 * 000000014072CAE8: call    loc_14072CADB
 * 000000014072CAED: add     rsp, 8
 * 000000014072CAF1: call    loc_14072CAE4
 * 000000014072CAF6: add     rsp, 8
 * 000000014072CAFA: call    loc_14072CAED
 * 000000014072CAFF: add     rsp, 8
 * 000000014072CB03: mov     eax, 0DADAh
 * 000000014072CB08: test    byte ptr gs:89Ch, 8
 * 000000014072CB11: jz      short loc_14072CB1A
 * 000000014072CB13: mov     al, 20h ; ' '
 * 000000014072CB15: incsspq rax
 * 000000014072CB1A: test    word ptr gs:898h, 100h
 * 000000014072CB25: jz      short loc_14072CB33
 * 000000014072CB27: xor     eax, eax
 * 000000014072CB29: xor     edx, edx
 * 000000014072CB2B: mov     ecx, 1
 * 000000014072CB30: div     rcx
 * 000000014072CB33: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014072CB37: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014072CB3B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014072CB3F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014072CB43: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014072CB47: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014072CB4B: mov     r11, [rbp+0E8h+var_108]
 * 000000014072CB4F: mov     r10, [rbp+0E8h+var_110]
 * 000000014072CB53: mov     r9, [rbp+0E8h+var_118]
 * 000000014072CB57: mov     r8, [rbp+0E8h+var_120]
 * 000000014072CB5B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014072CB5F: mov     rcx, [rbp+0E8h+var_130]
 * 000000014072CB63: mov     rax, [rbp+0E8h+var_138]
 * 000000014072CB67: mov     rsp, rbp
 * 000000014072CB6A: mov     rbp, [rbp+0E8h+var_10]
 * 000000014072CB71: add     rsp, 0E8h
 * 000000014072CB78: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072CB7F: jz      short loc_14072CB86
 * 000000014072CB81: jmp     KiKernelExit
 * 000000014072CB86: test    word ptr gs:898h, 200h
 * 000000014072CB91: jz      short loc_14072CB98
 * 000000014072CB93: verw    [rsp+arg_18]
 * 000000014072CB98: swapgs
 * 000000014072CB9B: iretq
 * 000000014072CB9D: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014072CBA1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014072CBA5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014072CBA9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014072CBAD: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014072CBB1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014072CBB5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014072CBB9: mov     r11, [rbp+0E8h+var_108]
 * 000000014072CBBD: mov     r10, [rbp+0E8h+var_110]
 * 000000014072CBC1: mov     r9, [rbp+0E8h+var_118]
 * 000000014072CBC5: mov     r8, [rbp+0E8h+var_120]
 * 000000014072CBC9: mov     rdx, [rbp+0E8h+var_128]
 * 000000014072CBCD: mov     rcx, [rbp+0E8h+var_130]
 * 000000014072CBD1: mov     rax, [rbp+0E8h+var_138]
 * 000000014072CBD5: mov     rsp, rbp
 * 000000014072CBD8: mov     rbp, [rbp+0E8h+var_10]
 * 000000014072CBDF: add     rsp, 0E8h
 * 000000014072CBE6: iretq
 */
