/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x14073A2C0
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140C59D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x14073A2C0 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x14073CA80 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x14073A2C0
 * Reason: Hex-Rays returned no pseudocode for 0x14073A2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014073A2C0: or      [rsp+arg_1F], 20h
 * 000000014073A2C6: sub     rsp, 8
 * 000000014073A2CA: push    rbp
 * 000000014073A2CB: sub     rsp, 158h
 * 000000014073A2D2: lea     rbp, [rsp+80h]
 * 000000014073A2DA: mov     [rbp+0E8h+var_138], rax
 * 000000014073A2DE: mov     [rbp+0E8h+var_130], rcx
 * 000000014073A2E2: mov     [rbp+0E8h+var_128], rdx
 * 000000014073A2E6: mov     [rbp+0E8h+var_120], r8
 * 000000014073A2EA: mov     [rbp+0E8h+var_118], r9
 * 000000014073A2EE: mov     [rbp+0E8h+var_110], r10
 * 000000014073A2F2: mov     [rbp+0E8h+var_108], r11
 * 000000014073A2F6: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073A2FD: jnz     short loc_14073A337
 * 000000014073A2FF: xor     edx, edx
 * 000000014073A301: rdsspq  rdx
 * 000000014073A306: mov     [rbp+0E8h+var_90], rdx
 * 000000014073A30A: lfence
 * 000000014073A30D: test    byte ptr gs:898h, 1
 * 000000014073A316: jnz     short loc_14073A320
 * 000000014073A318: lfence
 * 000000014073A31B: jmp     loc_14073A5A8
 * 000000014073A320: movzx   eax, word ptr gs:8A6h
 * 000000014073A329: mov     ecx, 48h ; 'H'
 * 000000014073A32E: xor     edx, edx
 * 000000014073A330: wrmsr
 * 000000014073A332: jmp     loc_14073A5A8
 * 000000014073A337: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014073A33E: jnz     short loc_14073A343
 * 000000014073A340: swapgs
 * 000000014073A343: lfence
 * 000000014073A346: mov     rcx, gs:9D68h
 * 000000014073A34F: test    rcx, rcx
 * 000000014073A352: jz      short loc_14073A373
 * 000000014073A354: rdsspq  rdx
 * 000000014073A359: mov     r10, gs:9D60h
 * 000000014073A362: add     r10, 8
 * 000000014073A366: cmp     rdx, r10
 * 000000014073A369: jnz     short loc_14073A373
 * 000000014073A36B: rstorssp qword ptr [rcx]
 * 000000014073A36F: saveprevssp
 * 000000014073A373: mov     r10, gs:188h
 * 000000014073A37C: mov     rcx, gs:188h
 * 000000014073A385: mov     rcx, [rcx+220h]
 * 000000014073A38C: mov     rcx, [rcx+760h]
 * 000000014073A393: mov     gs:890h, rcx
 * 000000014073A39C: mov     cx, gs:8A2h
 * 000000014073A3A5: mov     gs:8A4h, cx
 * 000000014073A3AE: mov     cl, gs:898h
 * 000000014073A3B6: mov     gs:89Ah, cl
 * 000000014073A3BE: movzx   eax, word ptr gs:8A8h
 * 000000014073A3C7: cmp     gs:8A6h, ax
 * 000000014073A3D0: jz      short loc_14073A3E4
 * 000000014073A3D2: mov     gs:8A6h, ax
 * 000000014073A3DB: mov     ecx, 48h ; 'H'
 * 000000014073A3E0: xor     edx, edx
 * 000000014073A3E2: wrmsr
 * 000000014073A3E4: movzx   edx, byte ptr gs:898h
 * 000000014073A3ED: test    edx, 8
 * 000000014073A3F3: jz      short loc_14073A40C
 * 000000014073A3F5: mov     eax, 1
 * 000000014073A3FA: xor     edx, edx
 * 000000014073A3FC: mov     ecx, 49h ; 'I'
 * 000000014073A401: wrmsr
 * 000000014073A403: movzx   edx, byte ptr gs:898h
 * 000000014073A40C: test    edx, 2
 * 000000014073A412: jz      loc_14073A54F
 * 000000014073A418: call    loc_14073A52B
 * 000000014073A41D: add     rsp, 8
 * 000000014073A421: call    loc_14073A534
 * 000000014073A426: add     rsp, 8
 * 000000014073A42A: call    loc_14073A41D
 * 000000014073A42F: add     rsp, 8
 * 000000014073A433: call    loc_14073A426
 * 000000014073A438: add     rsp, 8
 * 000000014073A43C: call    loc_14073A42F
 * 000000014073A441: add     rsp, 8
 * 000000014073A445: call    loc_14073A438
 * 000000014073A44A: add     rsp, 8
 * 000000014073A44E: call    loc_14073A441
 * 000000014073A453: add     rsp, 8
 * 000000014073A457: call    loc_14073A44A
 * 000000014073A45C: add     rsp, 8
 * 000000014073A460: call    loc_14073A453
 * 000000014073A465: add     rsp, 8
 * 000000014073A469: call    loc_14073A45C
 * 000000014073A46E: add     rsp, 8
 * 000000014073A472: call    loc_14073A465
 * 000000014073A477: add     rsp, 8
 * 000000014073A47B: call    loc_14073A46E
 * 000000014073A480: add     rsp, 8
 * 000000014073A484: call    loc_14073A477
 * 000000014073A489: add     rsp, 8
 * 000000014073A48D: call    loc_14073A480
 * 000000014073A492: add     rsp, 8
 * 000000014073A496: call    loc_14073A489
 * 000000014073A49B: add     rsp, 8
 * 000000014073A49F: call    loc_14073A492
 * 000000014073A4A4: add     rsp, 8
 * 000000014073A4A8: call    loc_14073A49B
 * 000000014073A4AD: add     rsp, 8
 * 000000014073A4B1: call    loc_14073A4A4
 * 000000014073A4B6: add     rsp, 8
 * 000000014073A4BA: call    loc_14073A4AD
 * 000000014073A4BF: add     rsp, 8
 * 000000014073A4C3: call    loc_14073A4B6
 * 000000014073A4C8: add     rsp, 8
 * 000000014073A4CC: call    loc_14073A4BF
 * 000000014073A4D1: add     rsp, 8
 * 000000014073A4D5: call    loc_14073A4C8
 * 000000014073A4DA: add     rsp, 8
 * 000000014073A4DE: call    loc_14073A4D1
 * 000000014073A4E3: add     rsp, 8
 * 000000014073A4E7: call    loc_14073A4DA
 * 000000014073A4EC: add     rsp, 8
 * 000000014073A4F0: call    loc_14073A4E3
 * 000000014073A4F5: add     rsp, 8
 * 000000014073A4F9: call    loc_14073A4EC
 * 000000014073A4FE: add     rsp, 8
 * 000000014073A502: call    loc_14073A4F5
 * 000000014073A507: add     rsp, 8
 * 000000014073A50B: call    loc_14073A4FE
 * 000000014073A510: add     rsp, 8
 * 000000014073A514: call    loc_14073A507
 * 000000014073A519: add     rsp, 8
 * 000000014073A51D: call    loc_14073A510
 * 000000014073A522: add     rsp, 8
 * 000000014073A526: call    loc_14073A519
 * 000000014073A52B: add     rsp, 8
 * 000000014073A52F: call    loc_14073A522
 * 000000014073A534: add     rsp, 8
 * 000000014073A538: mov     eax, 0DADAh
 * 000000014073A53D: test    byte ptr gs:89Ch, 8
 * 000000014073A546: jz      short loc_14073A54F
 * 000000014073A548: mov     al, 20h ; ' '
 * 000000014073A54A: incsspq rax
 * 000000014073A54F: test    edx, 80h
 * 000000014073A555: jz      short loc_14073A55F
 * 000000014073A557: lfence
 * 000000014073A55A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014073A55F: lfence
 * 000000014073A562: mov     byte ptr gs:89Eh, 0
 * 000000014073A56B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014073A572: jz      short loc_14073A593
 * 000000014073A574: mov     ecx, 6A7h
 * 000000014073A579: rdmsr
 * 000000014073A57B: cmp     edx, 0
 * 000000014073A57E: jz      short loc_14073A593
 * 000000014073A580: mov     ecx, edx
 * 000000014073A582: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014073A588: cmp     edx, ecx
 * 000000014073A58A: jz      short loc_14073A593
 * 000000014073A58C: mov     ecx, 6A7h
 * 000000014073A591: wrmsr
 * 000000014073A593: test    byte ptr [r10+3], 3
 * 000000014073A598: mov     [rbp+0E8h+var_68], 0
 * 000000014073A5A1: jz      short loc_14073A5A8
 * 000000014073A5A3: call    KiSaveDebugRegisterState
 * 000000014073A5A8: cld
 * 000000014073A5A9: stmxcsr [rbp+0E8h+var_13C]
 * 000000014073A5AD: ldmxcsr dword ptr gs:180h
 * 000000014073A5B6: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014073A5BA: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014073A5BE: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014073A5C2: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014073A5C6: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014073A5CA: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014073A5CE: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073A5D5: jz      short KiRaiseSecurityCheckFailureDispatchTrap
 * 000000014073A5D7: mov     r10, gs:188h
 * 000000014073A5E0: test    byte ptr [r10+3], 80h
 * 000000014073A5E5: jz      short KiRaiseSecurityCheckFailureDispatchTrap
 * 000000014073A5E7: call    KiSynchronizeUserIsolationDomainExit
 * 000000014073A5EC: mov     [rbp+0E8h+var_13D], 1
 * 000000014073A5F0: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014073A5F7: jz      short loc_14073A61A
 * 000000014073A5F9: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073A600: jnz     short loc_14073A617
 * 000000014073A602: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014073A609: jz      short loc_14073A61A
 * 000000014073A60B: test    [rbp+0E8h+arg_8], 40000h
 * 000000014073A615: jz      short loc_14073A61A
 * 000000014073A617: stac
 * 000000014073A61A: movzx   eax, byte ptr [rbp+0E8h+arg_1F]
 * 000000014073A621: shr     eax, 4
 * 000000014073A624: sub     [rbp+0E8h], rax
 * 000000014073A62B: cmp     [rbp+0E8h+arg_0], 23h ; '#'
 * 000000014073A633: jnz     short loc_14073A63C
 * 000000014073A635: and     dword ptr [rbp+0ECh], 0
 * 000000014073A63C: mov     eax, [rbp+0E8h+var_8]
 * 000000014073A642: test    [rbp+0E8h+arg_8], 200h
 * 000000014073A64C: jz      short loc_14073A64F
 * 000000014073A64E: sti
 * 000000014073A64F: mov     r9, [rbp+0E8h+var_130]
 * 000000014073A653: mov     ecx, 0C0000409h
 * 000000014073A658: mov     edx, 1
 * 000000014073A65D: mov     r8, [rbp+0E8h]
 * 000000014073A664: cmp     r9, 0Ah
 * 000000014073A668: jnz     short loc_14073A67C
 * 000000014073A66A: test    byte ptr [rbp+0E8h+arg_0], 1
 * 000000014073A671: jnz     short loc_14073A67C
 * 000000014073A673: mov     edx, 2
 * 000000014073A678: mov     r10, [rbp+0E8h+var_128]
 * 000000014073A67C: call    KiFastFailDispatch
 * 000000014073A681: nop
 * 000000014073A682: retn
 */
