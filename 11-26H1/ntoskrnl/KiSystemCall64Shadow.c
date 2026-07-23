/*
 * XREFs of KiSystemCall64Shadow @ 0x140C61200
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140C61200 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140C61200
 * Reason: Hex-Rays returned no pseudocode for 0x140C61200
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C61200: swapgs
 * 0000000140C61203: mov     gs:0B010h, rsp
 * 0000000140C6120C: mov     rsp, gs:0B000h
 * 0000000140C61215: bt      dword ptr gs:0B018h, 1
 * 0000000140C6121F: jb      short loc_140C61224
 * 0000000140C61221: mov     cr3, rsp
 * 0000000140C61224: mov     rsp, gs:0B008h
 * 0000000140C6122D: push    2Bh ; '+'
 * 0000000140C6122F: push    qword ptr gs:0B010h
 * 0000000140C61237: push    r11
 * 0000000140C61239: push    33h ; '3'
 * 0000000140C6123B: push    rcx
 * 0000000140C6123C: mov     rcx, gs:9D68h
 * 0000000140C61245: test    rcx, rcx
 * 0000000140C61248: jz      short loc_140C61256
 * 0000000140C6124A: setssbsy
 * 0000000140C6124E: rstorssp qword ptr [rcx]
 * 0000000140C61252: saveprevssp
 * 0000000140C61256: mov     rcx, r10
 * 0000000140C61259: sub     rsp, 8
 * 0000000140C6125D: push    rbp
 * 0000000140C6125E: sub     rsp, 158h
 * 0000000140C61265: lea     rbp, [rsp+190h+var_110]
 * 0000000140C6126D: mov     [rbp+0C0h], rbx
 * 0000000140C61274: mov     [rbp+0C8h], rdi
 * 0000000140C6127B: mov     [rbp+0D0h], rsi
 * 0000000140C61282: test    byte ptr cs:KiTrapFeatures, 8
 * 0000000140C61289: jz      short loc_140C612AC
 * 0000000140C6128B: test    byte ptr [rbp+0F0h], 1
 * 0000000140C61292: jnz     short loc_140C612A9
 * 0000000140C61294: test    byte ptr cs:KiTrapFeatures, 2
 * 0000000140C6129B: jz      short loc_140C612AC
 * 0000000140C6129D: test    dword ptr [rbp+0F8h], 40000h
 * 0000000140C612A7: jz      short loc_140C612AC
 * 0000000140C612A9: stac
 * 0000000140C612AC: mov     [rbp-50h], rax
 * 0000000140C612B0: mov     [rbp-48h], rcx
 * 0000000140C612B4: mov     [rbp-40h], rdx
 * 0000000140C612B8: mov     rcx, gs:188h
 * 0000000140C612C1: mov     rcx, [rcx+220h]
 * 0000000140C612C8: mov     rcx, [rcx+760h]
 * 0000000140C612CF: mov     gs:890h, rcx
 * 0000000140C612D8: mov     cx, gs:8A2h
 * 0000000140C612E1: mov     gs:8A4h, cx
 * 0000000140C612EA: mov     cl, gs:898h
 * 0000000140C612F2: mov     gs:89Ah, cl
 * 0000000140C612FA: movzx   eax, word ptr gs:8A8h
 * 0000000140C61303: cmp     gs:8A6h, ax
 * 0000000140C6130C: jz      short loc_140C61320
 * 0000000140C6130E: mov     gs:8A6h, ax
 * 0000000140C61317: mov     ecx, 48h ; 'H'
 * 0000000140C6131C: xor     edx, edx
 * 0000000140C6131E: wrmsr
 * 0000000140C61320: movzx   edx, byte ptr gs:898h
 * 0000000140C61329: test    edx, 8
 * 0000000140C6132F: jz      short loc_140C61348
 * 0000000140C61331: mov     eax, 1
 * 0000000140C61336: xor     edx, edx
 * 0000000140C61338: mov     ecx, 49h ; 'I'
 * 0000000140C6133D: wrmsr
 * 0000000140C6133F: movzx   edx, byte ptr gs:898h
 * 0000000140C61348: test    edx, 2
 * 0000000140C6134E: jz      loc_140C6148B
 * 0000000140C61354: call    loc_140C61467
 * 0000000140C61359: add     rsp, 8
 * 0000000140C6135D: call    loc_140C61470
 * 0000000140C61362: add     rsp, 8
 * 0000000140C61366: call    loc_140C61359
 * 0000000140C6136B: add     rsp, 8
 * 0000000140C6136F: call    loc_140C61362
 * 0000000140C61374: add     rsp, 8
 * 0000000140C61378: call    loc_140C6136B
 * 0000000140C6137D: add     rsp, 8
 * 0000000140C61381: call    loc_140C61374
 * 0000000140C61386: add     rsp, 8
 * 0000000140C6138A: call    loc_140C6137D
 * 0000000140C6138F: add     rsp, 8
 * 0000000140C61393: call    loc_140C61386
 * 0000000140C61398: add     rsp, 8
 * 0000000140C6139C: call    loc_140C6138F
 * 0000000140C613A1: add     rsp, 8
 * 0000000140C613A5: call    loc_140C61398
 * 0000000140C613AA: add     rsp, 8
 * 0000000140C613AE: call    loc_140C613A1
 * 0000000140C613B3: add     rsp, 8
 * 0000000140C613B7: call    loc_140C613AA
 * 0000000140C613BC: add     rsp, 8
 * 0000000140C613C0: call    loc_140C613B3
 * 0000000140C613C5: add     rsp, 8
 * 0000000140C613C9: call    loc_140C613BC
 * 0000000140C613CE: add     rsp, 8
 * 0000000140C613D2: call    loc_140C613C5
 * 0000000140C613D7: add     rsp, 8
 * 0000000140C613DB: call    loc_140C613CE
 * 0000000140C613E0: add     rsp, 8
 * 0000000140C613E4: call    loc_140C613D7
 * 0000000140C613E9: add     rsp, 8
 * 0000000140C613ED: call    loc_140C613E0
 * 0000000140C613F2: add     rsp, 8
 * 0000000140C613F6: call    loc_140C613E9
 * 0000000140C613FB: add     rsp, 8
 * 0000000140C613FF: call    loc_140C613F2
 * 0000000140C61404: add     rsp, 8
 * 0000000140C61408: call    loc_140C613FB
 * 0000000140C6140D: add     rsp, 8
 * 0000000140C61411: call    loc_140C61404
 * 0000000140C61416: add     rsp, 8
 * 0000000140C6141A: call    loc_140C6140D
 * 0000000140C6141F: add     rsp, 8
 * 0000000140C61423: call    loc_140C61416
 * 0000000140C61428: add     rsp, 8
 * 0000000140C6142C: call    loc_140C6141F
 * 0000000140C61431: add     rsp, 8
 * 0000000140C61435: call    loc_140C61428
 * 0000000140C6143A: add     rsp, 8
 * 0000000140C6143E: call    loc_140C61431
 * 0000000140C61443: add     rsp, 8
 * 0000000140C61447: call    loc_140C6143A
 * 0000000140C6144C: add     rsp, 8
 * 0000000140C61450: call    loc_140C61443
 * 0000000140C61455: add     rsp, 8
 * 0000000140C61459: call    loc_140C6144C
 * 0000000140C6145E: add     rsp, 8
 * 0000000140C61462: call    loc_140C61455
 * 0000000140C61467: add     rsp, 8
 * 0000000140C6146B: call    loc_140C6145E
 * 0000000140C61470: add     rsp, 8
 * 0000000140C61474: mov     eax, 0DADAh
 * 0000000140C61479: test    byte ptr gs:89Ch, 8
 * 0000000140C61482: jz      short loc_140C6148B
 * 0000000140C61484: mov     al, 20h ; ' '
 * 0000000140C61486: incsspq rax
 * 0000000140C6148B: test    edx, 80h
 * 0000000140C61491: jz      short loc_140C6149B
 * 0000000140C61493: lfence
 * 0000000140C61496: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140C6149B: lfence
 * 0000000140C6149E: mov     byte ptr gs:89Eh, 0
 * 0000000140C614A7: jmp     KiSystemServiceUser
 * 0000000140C614AC: retn
 */
