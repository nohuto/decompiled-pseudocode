/*
 * XREFs of KiSystemCall64Shadow @ 0x140C5B200
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140C5B200 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140C5B200
 * Reason: Hex-Rays returned no pseudocode for 0x140C5B200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C5B200: swapgs
 * 0000000140C5B203: mov     gs:0B010h, rsp
 * 0000000140C5B20C: mov     rsp, gs:0B000h
 * 0000000140C5B215: bt      dword ptr gs:0B018h, 1
 * 0000000140C5B21F: jb      short loc_140C5B224
 * 0000000140C5B221: mov     cr3, rsp
 * 0000000140C5B224: mov     rsp, gs:0B008h
 * 0000000140C5B22D: push    2Bh ; '+'
 * 0000000140C5B22F: push    qword ptr gs:0B010h
 * 0000000140C5B237: push    r11
 * 0000000140C5B239: push    33h ; '3'
 * 0000000140C5B23B: push    rcx
 * 0000000140C5B23C: mov     rcx, gs:9D68h
 * 0000000140C5B245: test    rcx, rcx
 * 0000000140C5B248: jz      short loc_140C5B256
 * 0000000140C5B24A: setssbsy
 * 0000000140C5B24E: rstorssp qword ptr [rcx]
 * 0000000140C5B252: saveprevssp
 * 0000000140C5B256: mov     rcx, r10
 * 0000000140C5B259: sub     rsp, 8
 * 0000000140C5B25D: push    rbp
 * 0000000140C5B25E: sub     rsp, 158h
 * 0000000140C5B265: lea     rbp, [rsp+190h+var_110]
 * 0000000140C5B26D: mov     [rbp+0C0h], rbx
 * 0000000140C5B274: mov     [rbp+0C8h], rdi
 * 0000000140C5B27B: mov     [rbp+0D0h], rsi
 * 0000000140C5B282: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140C5B289: jz      short loc_140C5B2AC
 * 0000000140C5B28B: test    byte ptr [rbp+0F0h], 1
 * 0000000140C5B292: jnz     short loc_140C5B2A9
 * 0000000140C5B294: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140C5B29B: jz      short loc_140C5B2AC
 * 0000000140C5B29D: test    dword ptr [rbp+0F8h], 40000h
 * 0000000140C5B2A7: jz      short loc_140C5B2AC
 * 0000000140C5B2A9: stac
 * 0000000140C5B2AC: mov     [rbp-50h], rax
 * 0000000140C5B2B0: mov     [rbp-48h], rcx
 * 0000000140C5B2B4: mov     [rbp-40h], rdx
 * 0000000140C5B2B8: mov     rcx, gs:188h
 * 0000000140C5B2C1: mov     rcx, [rcx+220h]
 * 0000000140C5B2C8: mov     rcx, [rcx+760h]
 * 0000000140C5B2CF: mov     gs:890h, rcx
 * 0000000140C5B2D8: mov     cx, gs:8A2h
 * 0000000140C5B2E1: mov     gs:8A4h, cx
 * 0000000140C5B2EA: mov     cl, gs:898h
 * 0000000140C5B2F2: mov     gs:89Ah, cl
 * 0000000140C5B2FA: movzx   eax, word ptr gs:8A8h
 * 0000000140C5B303: cmp     gs:8A6h, ax
 * 0000000140C5B30C: jz      short loc_140C5B320
 * 0000000140C5B30E: mov     gs:8A6h, ax
 * 0000000140C5B317: mov     ecx, 48h ; 'H'
 * 0000000140C5B31C: xor     edx, edx
 * 0000000140C5B31E: wrmsr
 * 0000000140C5B320: movzx   edx, byte ptr gs:898h
 * 0000000140C5B329: test    edx, 8
 * 0000000140C5B32F: jz      short loc_140C5B348
 * 0000000140C5B331: mov     eax, 1
 * 0000000140C5B336: xor     edx, edx
 * 0000000140C5B338: mov     ecx, 49h ; 'I'
 * 0000000140C5B33D: wrmsr
 * 0000000140C5B33F: movzx   edx, byte ptr gs:898h
 * 0000000140C5B348: test    edx, 2
 * 0000000140C5B34E: jz      loc_140C5B48B
 * 0000000140C5B354: call    loc_140C5B467
 * 0000000140C5B359: add     rsp, 8
 * 0000000140C5B35D: call    loc_140C5B470
 * 0000000140C5B362: add     rsp, 8
 * 0000000140C5B366: call    loc_140C5B359
 * 0000000140C5B36B: add     rsp, 8
 * 0000000140C5B36F: call    loc_140C5B362
 * 0000000140C5B374: add     rsp, 8
 * 0000000140C5B378: call    loc_140C5B36B
 * 0000000140C5B37D: add     rsp, 8
 * 0000000140C5B381: call    loc_140C5B374
 * 0000000140C5B386: add     rsp, 8
 * 0000000140C5B38A: call    loc_140C5B37D
 * 0000000140C5B38F: add     rsp, 8
 * 0000000140C5B393: call    loc_140C5B386
 * 0000000140C5B398: add     rsp, 8
 * 0000000140C5B39C: call    loc_140C5B38F
 * 0000000140C5B3A1: add     rsp, 8
 * 0000000140C5B3A5: call    loc_140C5B398
 * 0000000140C5B3AA: add     rsp, 8
 * 0000000140C5B3AE: call    loc_140C5B3A1
 * 0000000140C5B3B3: add     rsp, 8
 * 0000000140C5B3B7: call    loc_140C5B3AA
 * 0000000140C5B3BC: add     rsp, 8
 * 0000000140C5B3C0: call    loc_140C5B3B3
 * 0000000140C5B3C5: add     rsp, 8
 * 0000000140C5B3C9: call    loc_140C5B3BC
 * 0000000140C5B3CE: add     rsp, 8
 * 0000000140C5B3D2: call    loc_140C5B3C5
 * 0000000140C5B3D7: add     rsp, 8
 * 0000000140C5B3DB: call    loc_140C5B3CE
 * 0000000140C5B3E0: add     rsp, 8
 * 0000000140C5B3E4: call    loc_140C5B3D7
 * 0000000140C5B3E9: add     rsp, 8
 * 0000000140C5B3ED: call    loc_140C5B3E0
 * 0000000140C5B3F2: add     rsp, 8
 * 0000000140C5B3F6: call    loc_140C5B3E9
 * 0000000140C5B3FB: add     rsp, 8
 * 0000000140C5B3FF: call    loc_140C5B3F2
 * 0000000140C5B404: add     rsp, 8
 * 0000000140C5B408: call    loc_140C5B3FB
 * 0000000140C5B40D: add     rsp, 8
 * 0000000140C5B411: call    loc_140C5B404
 * 0000000140C5B416: add     rsp, 8
 * 0000000140C5B41A: call    loc_140C5B40D
 * 0000000140C5B41F: add     rsp, 8
 * 0000000140C5B423: call    loc_140C5B416
 * 0000000140C5B428: add     rsp, 8
 * 0000000140C5B42C: call    loc_140C5B41F
 * 0000000140C5B431: add     rsp, 8
 * 0000000140C5B435: call    loc_140C5B428
 * 0000000140C5B43A: add     rsp, 8
 * 0000000140C5B43E: call    loc_140C5B431
 * 0000000140C5B443: add     rsp, 8
 * 0000000140C5B447: call    loc_140C5B43A
 * 0000000140C5B44C: add     rsp, 8
 * 0000000140C5B450: call    loc_140C5B443
 * 0000000140C5B455: add     rsp, 8
 * 0000000140C5B459: call    loc_140C5B44C
 * 0000000140C5B45E: add     rsp, 8
 * 0000000140C5B462: call    loc_140C5B455
 * 0000000140C5B467: add     rsp, 8
 * 0000000140C5B46B: call    loc_140C5B45E
 * 0000000140C5B470: add     rsp, 8
 * 0000000140C5B474: mov     eax, 0DADAh
 * 0000000140C5B479: test    byte ptr gs:89Ch, 8
 * 0000000140C5B482: jz      short loc_140C5B48B
 * 0000000140C5B484: mov     al, 20h ; ' '
 * 0000000140C5B486: incsspq rax
 * 0000000140C5B48B: test    edx, 80h
 * 0000000140C5B491: jz      short loc_140C5B49B
 * 0000000140C5B493: lfence
 * 0000000140C5B496: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140C5B49B: lfence
 * 0000000140C5B49E: mov     byte ptr gs:89Eh, 0
 * 0000000140C5B4A7: jmp     KiSystemServiceUser
 * 0000000140C5B4AC: retn
 */
