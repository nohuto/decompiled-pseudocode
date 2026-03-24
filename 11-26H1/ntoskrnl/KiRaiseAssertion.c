/*
 * XREFs of KiRaiseAssertion @ 0x14073A6C0
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140C59DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x14073A6C0 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x14073C540 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x14073A6C0
 * Reason: Hex-Rays returned no pseudocode for 0x14073A6C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073A6C0: or      [rsp+arg_1F], 20h
 * 000000014073A6C6: sub     rsp, 8
 * 000000014073A6CA: push    rbp
 * 000000014073A6CB: sub     rsp, 158h
 * 000000014073A6D2: lea     rbp, [rsp+80h]
 * 000000014073A6DA: mov     [rbp+0E8h+var_138], rax
 * 000000014073A6DE: mov     [rbp+0E8h+var_130], rcx
 * 000000014073A6E2: mov     [rbp+0E8h+var_128], rdx
 * 000000014073A6E6: mov     [rbp+0E8h+var_120], r8
 * 000000014073A6EA: mov     [rbp+0E8h+var_118], r9
 * 000000014073A6EE: mov     [rbp+0E8h+var_110], r10
 * 000000014073A6F2: mov     [rbp+0E8h+var_108], r11
 * 000000014073A6F6: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073A6FD: jnz     short loc_14073A737
 * 000000014073A6FF: xor     edx, edx
 * 000000014073A701: rdsspq  rdx
 * 000000014073A706: mov     [rbp+0E8h+var_90], rdx
 * 000000014073A70A: lfence
 * 000000014073A70D: test    byte ptr gs:898h, 1
 * 000000014073A716: jnz     short loc_14073A720
 * 000000014073A718: lfence
 * 000000014073A71B: jmp     loc_14073A9A8
 * 000000014073A720: movzx   eax, word ptr gs:8A6h
 * 000000014073A729: mov     ecx, 48h ; 'H'
 * 000000014073A72E: xor     edx, edx
 * 000000014073A730: wrmsr
 * 000000014073A732: jmp     loc_14073A9A8
 * 000000014073A737: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073A73E: jnz     short loc_14073A743
 * 000000014073A740: swapgs
 * 000000014073A743: lfence
 * 000000014073A746: mov     rcx, gs:9D68h
 * 000000014073A74F: test    rcx, rcx
 * 000000014073A752: jz      short loc_14073A773
 * 000000014073A754: rdsspq  rdx
 * 000000014073A759: mov     r10, gs:9D60h
 * 000000014073A762: add     r10, 8
 * 000000014073A766: cmp     rdx, r10
 * 000000014073A769: jnz     short loc_14073A773
 * 000000014073A76B: rstorssp qword ptr [rcx]
 * 000000014073A76F: saveprevssp
 * 000000014073A773: mov     r10, gs:188h
 * 000000014073A77C: mov     rcx, gs:188h
 * 000000014073A785: mov     rcx, [rcx+220h]
 * 000000014073A78C: mov     rcx, [rcx+760h]
 * 000000014073A793: mov     gs:890h, rcx
 * 000000014073A79C: mov     cx, gs:8A2h
 * 000000014073A7A5: mov     gs:8A4h, cx
 * 000000014073A7AE: mov     cl, gs:898h
 * 000000014073A7B6: mov     gs:89Ah, cl
 * 000000014073A7BE: movzx   eax, word ptr gs:8A8h
 * 000000014073A7C7: cmp     gs:8A6h, ax
 * 000000014073A7D0: jz      short loc_14073A7E4
 * 000000014073A7D2: mov     gs:8A6h, ax
 * 000000014073A7DB: mov     ecx, 48h ; 'H'
 * 000000014073A7E0: xor     edx, edx
 * 000000014073A7E2: wrmsr
 * 000000014073A7E4: movzx   edx, byte ptr gs:898h
 * 000000014073A7ED: test    edx, 8
 * 000000014073A7F3: jz      short loc_14073A80C
 * 000000014073A7F5: mov     eax, 1
 * 000000014073A7FA: xor     edx, edx
 * 000000014073A7FC: mov     ecx, 49h ; 'I'
 * 000000014073A801: wrmsr
 * 000000014073A803: movzx   edx, byte ptr gs:898h
 * 000000014073A80C: test    edx, 2
 * 000000014073A812: jz      loc_14073A94F
 * 000000014073A818: call    loc_14073A92B
 * 000000014073A81D: add     rsp, 8
 * 000000014073A821: call    loc_14073A934
 * 000000014073A826: add     rsp, 8
 * 000000014073A82A: call    loc_14073A81D
 * 000000014073A82F: add     rsp, 8
 * 000000014073A833: call    loc_14073A826
 * 000000014073A838: add     rsp, 8
 * 000000014073A83C: call    loc_14073A82F
 * 000000014073A841: add     rsp, 8
 * 000000014073A845: call    loc_14073A838
 * 000000014073A84A: add     rsp, 8
 * 000000014073A84E: call    loc_14073A841
 * 000000014073A853: add     rsp, 8
 * 000000014073A857: call    loc_14073A84A
 * 000000014073A85C: add     rsp, 8
 * 000000014073A860: call    loc_14073A853
 * 000000014073A865: add     rsp, 8
 * 000000014073A869: call    loc_14073A85C
 * 000000014073A86E: add     rsp, 8
 * 000000014073A872: call    loc_14073A865
 * 000000014073A877: add     rsp, 8
 * 000000014073A87B: call    loc_14073A86E
 * 000000014073A880: add     rsp, 8
 * 000000014073A884: call    loc_14073A877
 * 000000014073A889: add     rsp, 8
 * 000000014073A88D: call    loc_14073A880
 * 000000014073A892: add     rsp, 8
 * 000000014073A896: call    loc_14073A889
 * 000000014073A89B: add     rsp, 8
 * 000000014073A89F: call    loc_14073A892
 * 000000014073A8A4: add     rsp, 8
 * 000000014073A8A8: call    loc_14073A89B
 * 000000014073A8AD: add     rsp, 8
 * 000000014073A8B1: call    loc_14073A8A4
 * 000000014073A8B6: add     rsp, 8
 * 000000014073A8BA: call    loc_14073A8AD
 * 000000014073A8BF: add     rsp, 8
 * 000000014073A8C3: call    loc_14073A8B6
 * 000000014073A8C8: add     rsp, 8
 * 000000014073A8CC: call    loc_14073A8BF
 * 000000014073A8D1: add     rsp, 8
 * 000000014073A8D5: call    loc_14073A8C8
 * 000000014073A8DA: add     rsp, 8
 * 000000014073A8DE: call    loc_14073A8D1
 * 000000014073A8E3: add     rsp, 8
 * 000000014073A8E7: call    loc_14073A8DA
 * 000000014073A8EC: add     rsp, 8
 * 000000014073A8F0: call    loc_14073A8E3
 * 000000014073A8F5: add     rsp, 8
 * 000000014073A8F9: call    loc_14073A8EC
 * 000000014073A8FE: add     rsp, 8
 * 000000014073A902: call    loc_14073A8F5
 * 000000014073A907: add     rsp, 8
 * 000000014073A90B: call    loc_14073A8FE
 * 000000014073A910: add     rsp, 8
 * 000000014073A914: call    loc_14073A907
 * 000000014073A919: add     rsp, 8
 * 000000014073A91D: call    loc_14073A910
 * 000000014073A922: add     rsp, 8
 * 000000014073A926: call    loc_14073A919
 * 000000014073A92B: add     rsp, 8
 * 000000014073A92F: call    loc_14073A922
 * 000000014073A934: add     rsp, 8
 * 000000014073A938: mov     eax, 0DADAh
 * 000000014073A93D: test    byte ptr gs:89Ch, 8
 * 000000014073A946: jz      short loc_14073A94F
 * 000000014073A948: mov     al, 20h ; ' '
 * 000000014073A94A: incsspq rax
 * 000000014073A94F: test    edx, 80h
 * 000000014073A955: jz      short loc_14073A95F
 * 000000014073A957: lfence
 * 000000014073A95A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073A95F: lfence
 * 000000014073A962: mov     byte ptr gs:89Eh, 0
 * 000000014073A96B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073A972: jz      short loc_14073A993
 * 000000014073A974: mov     ecx, 6A7h
 * 000000014073A979: rdmsr
 * 000000014073A97B: cmp     edx, 0
 * 000000014073A97E: jz      short loc_14073A993
 * 000000014073A980: mov     ecx, edx
 * 000000014073A982: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073A988: cmp     edx, ecx
 * 000000014073A98A: jz      short loc_14073A993
 * 000000014073A98C: mov     ecx, 6A7h
 * 000000014073A991: wrmsr
 * 000000014073A993: test    byte ptr [r10+3], 3
 * 000000014073A998: mov     [rbp+0E8h+var_68], 0
 * 000000014073A9A1: jz      short loc_14073A9A8
 * 000000014073A9A3: call    KiSaveDebugRegisterState
 * 000000014073A9A8: cld
 * 000000014073A9A9: stmxcsr [rbp+0E8h+var_13C]
 * 000000014073A9AD: ldmxcsr dword ptr gs:180h
 * 000000014073A9B6: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014073A9BA: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014073A9BE: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073A9C2: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014073A9C6: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014073A9CA: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014073A9CE: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073A9D5: jz      short KiRaiseAssertionDispatchTrap
 * 000000014073A9D7: mov     r10, gs:188h
 * 000000014073A9E0: test    byte ptr [r10+3], 80h
 * 000000014073A9E5: jz      short KiRaiseAssertionDispatchTrap
 * 000000014073A9E7: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073A9EC: mov     [rbp+0E8h+var_13D], 1
 * 000000014073A9F0: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073A9F7: jz      short loc_14073AA1A
 * 000000014073A9F9: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073AA00: jnz     short loc_14073AA17
 * 000000014073AA02: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073AA09: jz      short loc_14073AA1A
 * 000000014073AA0B: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073AA15: jz      short loc_14073AA1A
 * 000000014073AA17: stac
 * 000000014073AA1A: movzx   eax, byte ptr [rbp+0E8h+arg_1F]
 * 000000014073AA21: shr     eax, 4
 * 000000014073AA24: sub     [rbp+0E8h], rax
 * 000000014073AA2B: cmp     [rbp+0E8h+arg_0], 23h ; '#'
 * 000000014073AA33: jnz     short loc_14073AA3C
 * 000000014073AA35: and     dword ptr [rbp+0ECh], 0
 * 000000014073AA3C: mov     eax, [rbp+0E8h+var_8]
 * 000000014073AA42: test    [rbp+0E8h+arg_8], 200h
 * 000000014073AA4C: jz      short loc_14073AA4F
 * 000000014073AA4E: sti
 * 000000014073AA4F: mov     ecx, 0C0000420h
 * 000000014073AA54: xor     edx, edx
 * 000000014073AA56: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073AA5D: setz    dl
 * 000000014073AA60: shl     rdx, 20h
 * 000000014073AA64: mov     r8, [rbp+0E8h]
 * 000000014073AA6B: call    KiExceptionDispatch
 * 000000014073AA70: nop
 * 000000014073AA71: retn
 */
