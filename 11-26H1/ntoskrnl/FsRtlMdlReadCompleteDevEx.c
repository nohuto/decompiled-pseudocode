/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140C62010
 * Callers:
 *     KiDecodeMcaFault @ 0x140540440 (KiDecodeMcaFault.c)
 *     sub_1405516D0 @ 0x1405516D0 (sub_1405516D0.c)
 *     FsRtlUninitializeSmallMcb @ 0x140C7B490 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     sub_1405518EC @ 0x1405518EC (sub_1405518EC.c)
 *     sub_1405519DC @ 0x1405519DC (sub_1405519DC.c)
 *     sub_140552AE4 @ 0x140552AE4 (sub_140552AE4.c)
 *     sub_140C76E10 @ 0x140C76E10 (sub_140C76E10.c)
 *     sub_140C787A8 @ 0x140C787A8 (sub_140C787A8.c)
 *     sub_140C7902C @ 0x140C7902C (sub_140C7902C.c)
 *     sub_140C7903C @ 0x140C7903C (sub_140C7903C.c)
 *     sub_140C79180 @ 0x140C79180 (sub_140C79180.c)
 *     sub_140C79338 @ 0x140C79338 (sub_140C79338.c)
 *     sub_140C799D0 @ 0x140C799D0 (sub_140C799D0.c)
 *     KiGetGdtIdt @ 0x140C7B320 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140C7B330 (KiGetLdtr.c)
 *     KiGetSs @ 0x140C7B340 (KiGetSs.c)
 *     KiGetTr @ 0x140C7B350 (KiGetTr.c)
 *     KiErrata361Present @ 0x140C7B360 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140C7B380 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140C7B390 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140C7B440 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140C7B6F0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140C7B700 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140C7B89C (RtlInitMinimalBarrier.c)
 *     sub_140C8113C @ 0x140C8113C (sub_140C8113C.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140C62010
 * Reason: Hex-Rays returned no pseudocode for 0x140C62010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C62010: mov     [rsp-8+arg_0], rcx
 * 0000000140C62015: push    rbp
 * 0000000140C62016: push    rbx
 * 0000000140C62017: push    rsi
 * 0000000140C62018: push    rdi
 * 0000000140C62019: push    r12
 * 0000000140C6201B: push    r13
 * 0000000140C6201D: push    r14
 * 0000000140C6201F: push    r15
 * 0000000140C62021: lea     rbp, [rsp-778h]
 * 0000000140C62029: sub     rsp, 878h
 * 0000000140C62030: mov     eax, [rcx+9D8h]
 * 0000000140C62036: xor     r9d, r9d
 * 0000000140C62039: mov     r12, rcx
 * 0000000140C6203C: mov     esi, 0FFFFFFFFh
 * 0000000140C62041: mov     ecx, 88000h
 * 0000000140C62046: mov     ebx, 12Fh
 * 0000000140C6204B: and     eax, ecx
 * 0000000140C6204D: mov     r10d, 0FFFFFFF8h
 * 0000000140C62053: lea     r11d, [r9+1]
 * 0000000140C62057: cmp     eax, ecx
 * 0000000140C62059: jz      loc_140C62126
 * 0000000140C6205F: mov     rdx, [r12+900h]
 * 0000000140C62067: lea     ecx, [rbx+1]
 * 0000000140C6206A: mov     rax, rdx
 * 0000000140C6206D: lea     r8d, [r9+26h]
 * 0000000140C62071: mov     [rax], r9
 * 0000000140C62074: add     ecx, r10d
 * 0000000140C62077: add     rax, 8
 * 0000000140C6207B: sub     r8, r11
 * 0000000140C6207E: jnz     short loc_140C62071
 * 0000000140C62080: test    ecx, ecx
 * 0000000140C62082: jz      short loc_140C6208E
 * 0000000140C62084: mov     [rax], r9b
 * 0000000140C62087: add     rax, r11
 * 0000000140C6208A: add     ecx, esi
 * 0000000140C6208C: jnz     short loc_140C62084
 * 0000000140C6208E: movups  xmm0, xmmword ptr [r12+868h]
 * 0000000140C62097: lea     rax, [r12+898h]
 * 0000000140C6209F: mov     rcx, rax
 * 0000000140C620A2: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140C620A7: shr     rcx, 10h
 * 0000000140C620AB: movups  xmm1, xmmword ptr [r12+878h]
 * 0000000140C620B4: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140C620B9: movups  xmm0, xmmword ptr [r12+888h]
 * 0000000140C620C2: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140C620CA: mov     [rbp+1A2h], rdx
 * 0000000140C620D1: mov     word ptr [rbp+7B0h+var_610], bx
 * 0000000140C620D8: mov     [rdx+10h], ax
 * 0000000140C620DC: shr     rax, 20h
 * 0000000140C620E0: mov     [rdx+16h], cx
 * 0000000140C620E4: mov     [rdx+18h], eax
 * 0000000140C620E7: cli
 * 0000000140C620E8: test    dword ptr [r12+9D8h], 40000000h
 * 0000000140C620F4: jnz     short loc_140C62121
 * 0000000140C620F6: test    dword ptr [r12+9DCh], 800000h
 * 0000000140C62102: jnz     short loc_140C62121
 * 0000000140C62104: sidt    fword ptr [rbp+7B0h+var_540]
 * 0000000140C6210B: lidt    fword ptr [rbp+7B0h+var_610]
 * 0000000140C62112: xor     eax, eax
 * 0000000140C62114: mov     dr7, rax
 * 0000000140C62117: lidt    fword ptr [rbp+7B0h+var_540]
 * 0000000140C6211E: sti
 * 0000000140C6211F: jmp     short loc_140C62128
 * 0000000140C62121: mov     dr7, r9
 * 0000000140C62125: sti
 * 0000000140C62126: xor     eax, eax
 * 0000000140C62128: test    dword ptr [r12+9DCh], 100h
 * 0000000140C62134: mov     [rbp+7B0h+var_768], rax
 * 0000000140C62138: jz      short loc_140C62150
 * 0000000140C6213A: mov     rax, [rbp+7B8h]
 * 0000000140C62141: mov     [rbp+7B0h+var_768], rax
 * 0000000140C62145: xor     eax, eax
 * 0000000140C62147: mov     [rbp+7B8h], rax
 * 0000000140C6214E: jmp     short loc_140C62152
 * 0000000140C62150: xor     eax, eax
 * 0000000140C62152: mov     edi, 40h ; '@'
 * 0000000140C62157: mov     [r12+848h], eax
 * 0000000140C6215F: test    dword ptr [r12+9D8h], 20000000h
 * 0000000140C6216B: mov     rbx, 7010008004002001h
 * 0000000140C62175: lea     r15d, [rdi-20h]
 * 0000000140C62179: lea     r13d, [rdi-3Ch]
 * 0000000140C6217D: jz      short loc_140C6218F
 * 0000000140C6217F: xor     eax, eax
 * 0000000140C62181: cmp     [r12+0AC0h], rax
 * 0000000140C62189: jnz     loc_140C624EF
 * 0000000140C6218F: mov     r14, [r12+7D8h]
 * 0000000140C62197: lea     rbx, [r12+7B8h]
 * 0000000140C6219F: mov     [rbp+7B0h+arg_8], r14
 * 0000000140C621A6: lea     rdx, [rbp+7B0h+var_140]
 * 0000000140C621AD: mov     rcx, rbx
 * 0000000140C621B0: mov     r8d, r15d
 * 0000000140C621B3: mov     r9, r13
 * 0000000140C621B6: mov     rax, [rcx]
 * 0000000140C621B9: add     r8d, r10d
 * 0000000140C621BC: mov     [rdx], rax
 * 0000000140C621BF: add     rcx, 8
 * 0000000140C621C3: add     rdx, 8
 * 0000000140C621C7: sub     r9, r11
 * 0000000140C621CA: jnz     short loc_140C621B6
 * 0000000140C621CC: xor     eax, eax
 * 0000000140C621CE: test    r8d, r8d
 * 0000000140C621D1: jz      short loc_140C621E4
 * 0000000140C621D3: mov     al, [rcx]
 * 0000000140C621D5: add     rcx, r11
 * 0000000140C621D8: mov     [rdx], al
 * 0000000140C621DA: add     rdx, r11
 * 0000000140C621DD: add     r8d, esi
 * 0000000140C621E0: jnz     short loc_140C621D3
 * 0000000140C621E2: xor     eax, eax
 * 0000000140C621E4: mov     [r12+7D8h], rax
 * 0000000140C621EC: mov     ecx, r15d
 * 0000000140C621EF: mov     [r12+848h], eax
 * 0000000140C621F7: mov     rdx, r13
 * 0000000140C621FA: mov     rax, rbx
 * 0000000140C621FD: mov     qword ptr [rax], 0
 * 0000000140C62204: add     ecx, r10d
 * 0000000140C62207: add     rax, 8
 * 0000000140C6220B: sub     rdx, r11
 * 0000000140C6220E: jnz     short loc_140C621FD
 * 0000000140C62210: test    ecx, ecx
 * 0000000140C62212: jz      short loc_140C6221D
 * 0000000140C62214: mov     [rax], dl
 * 0000000140C62216: add     rax, r11
 * 0000000140C62219: add     ecx, esi
 * 0000000140C6221B: jnz     short loc_140C62214
 * 0000000140C6221D: mov     r10d, [r12+804h]
 * 0000000140C62225: mov     r9, r12
 * 0000000140C62228: add     [r12+848h], r10d
 * 0000000140C62230: mov     rax, r12
 * 0000000140C62233: mov     r11d, [r12+834h]
 * 0000000140C6223B: mov     rsi, [r12+838h]
 * 0000000140C62243: lea     rcx, [r12+r10]
 * 0000000140C62247: cmp     r12, rcx
 * 0000000140C6224A: jnb     short loc_140C62257
 * 0000000140C6224C: prefetchnta byte ptr [rax]
 * 0000000140C6224F: add     rax, rdi
 * 0000000140C62252: cmp     rax, rcx
 * 0000000140C62255: jb      short loc_140C6224C
 * 0000000140C62257: mov     edi, r10d
 * 0000000140C6225A: mov     r8, rsi
 * 0000000140C6225D: shr     edi, 7
 * 0000000140C62260: mov     edx, 1
 * 0000000140C62265: test    edi, edi
 * 0000000140C62267: jz      short loc_140C622DE
 * 0000000140C62269: mov     rbx, 7010008004002001h
 * 0000000140C62273: mov     r14d, 0FFFFFFFFh
 * 0000000140C62279: mov     eax, 8
 * 0000000140C6227E: xor     r8, [r9]
 * 0000000140C62281: mov     ecx, r11d
 * 0000000140C62284: rol     r8, cl
 * 0000000140C62287: xor     r8, [r9+8]
 * 0000000140C6228B: add     r9, 10h
 * 0000000140C6228F: rol     r8, cl
 * 0000000140C62292: sub     rax, rdx
 * 0000000140C62295: jnz     short loc_140C6227E
 * 0000000140C62297: mov     rcx, r9
 * 0000000140C6229A: sub     rcx, r12
 * 0000000140C6229D: xor     rcx, rsi
 * 0000000140C622A0: mov     rax, rcx
 * 0000000140C622A3: rol     rax, 11h
 * 0000000140C622A7: xor     rcx, rax
 * 0000000140C622AA: mov     rax, rbx
 * 0000000140C622AD: mul     rcx
 * 0000000140C622B0: mov     [rbp+7B0h+var_360], rdx
 * 0000000140C622B7: xor     rdx, rax
 * 0000000140C622BA: xor     r11d, edx
 * 0000000140C622BD: mov     edx, 1
 * 0000000140C622C2: and     r11d, 3Fh
 * 0000000140C622C6: cmovz   r11d, edx
 * 0000000140C622CA: add     edi, r14d
 * 0000000140C622CD: jnz     short loc_140C62279
 * 0000000140C622CF: mov     r14, [rbp+7B0h+arg_8]
 * 0000000140C622D6: lea     rbx, [r12+7B8h]
 * 0000000140C622DE: and     r10d, 7Fh
 * 0000000140C622E2: cmp     r10d, 8
 * 0000000140C622E6: jb      short loc_140C62305
 * 0000000140C622E8: mov     eax, r10d
 * 0000000140C622EB: shr     rax, 3
 * 0000000140C622EF: xor     r8, [r9]
 * 0000000140C622F2: mov     ecx, r11d
 * 0000000140C622F5: rol     r8, cl
 * 0000000140C622F8: add     r9, 8
 * 0000000140C622FC: add     r10d, 0FFFFFFF8h
 * 0000000140C62300: sub     rax, rdx
 * 0000000140C62303: jnz     short loc_140C622EF
 * 0000000140C62305: xor     edi, edi
 * 0000000140C62307: mov     esi, 0FFFFFFFFh
 * 0000000140C6230C: test    r10d, r10d
 * 0000000140C6230F: jz      short loc_140C62326
 * 0000000140C62311: movzx   eax, byte ptr [r9]
 * 0000000140C62315: mov     ecx, r11d
 * 0000000140C62318: xor     r8, rax
 * 0000000140C6231B: add     r9, rdx
 * 0000000140C6231E: rol     r8, cl
 * 0000000140C62321: add     r10d, esi
 * 0000000140C62324: jnz     short loc_140C62311
 * 0000000140C62326: mov     [r12+7D8h], r14
 * 0000000140C6232E: lea     rcx, [rbp+7B0h+var_140]
 * 0000000140C62335: mov     edx, r15d
 * 0000000140C62338: mov     r9, r13
 * 0000000140C6233B: mov     r11d, 1
 * 0000000140C62341: mov     r10d, 0FFFFFFF8h
 * 0000000140C62347: mov     rax, [rcx]
 * 0000000140C6234A: add     edx, r10d
 * 0000000140C6234D: mov     [rbx], rax
 * 0000000140C62350: add     rcx, 8
 * 0000000140C62354: add     rbx, 8
 * 0000000140C62358: sub     r9, r11
 * 0000000140C6235B: jnz     short loc_140C62347
 * 0000000140C6235D: test    edx, edx
 * 0000000140C6235F: jz      short loc_140C6236F
 * 0000000140C62361: mov     al, [rcx]
 * 0000000140C62363: add     rcx, r11
 * 0000000140C62366: mov     [rbx], al
 * 0000000140C62368: add     rbx, r11
 * 0000000140C6236B: add     edx, esi
 * 0000000140C6236D: jnz     short loc_140C62361
 * 0000000140C6236F: cmp     [r12+7D8h], r8
 * 0000000140C62377: jz      loc_140C624E5
 * 0000000140C6237D: mov     ecx, [r12+804h]
 * 0000000140C62385: mov     rax, [r12+588h]
 * 0000000140C6238D: mov     [rax], r12
 * 0000000140C62390: mov     [rax+10h], ecx
 * 0000000140C62393: mov     rcx, [r12+7D8h]
 * 0000000140C6239B: cmp     [r12+918h], edi
 * 0000000140C623A3: jnz     loc_140C624E5
 * 0000000140C623A9: mov     rax, [r12+588h]
 * 0000000140C623B1: xor     rcx, r8
 * 0000000140C623B4: mov     [rax+18h], rcx
 * 0000000140C623B8: cmp     [r12+918h], edi
 * 0000000140C623C0: jnz     loc_140C624E5
 * 0000000140C623C6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C623D0: add     rax, r12
 * 0000000140C623D3: mov     [r12+920h], rax
 * 0000000140C623DB: mov     [r12+928h], rdi
 * 0000000140C623E3: mov     qword ptr [r12+930h], 101h
 * 0000000140C623EF: mov     [r12+938h], r8
 * 0000000140C623F7: mov     [r12+918h], r11d
 * 0000000140C623FF: mov     ecx, [r12+9D8h]
 * 0000000140C62407: bt      ecx, 1Dh
 * 0000000140C6240B: jb      loc_140C624E5
 * 0000000140C62411: test    dword ptr [r12+9DCh], 200000h
 * 0000000140C6241D: jz      loc_140C624E5
 * 0000000140C62423: test    r11b, cl
 * 0000000140C62426: jz      loc_140C624E5
 * 0000000140C6242C: mov     ecx, [r12+0A74h]
 * 0000000140C62434: mov     eax, [r12+804h]
 * 0000000140C6243C: mov     r10, [r12+838h]
 * 0000000140C62444: sub     eax, ecx
 * 0000000140C62446: mov     r8, [r12+0A78h]
 * 0000000140C6244E: lea     rdx, [rcx+r12]
 * 0000000140C62452: mov     ecx, eax
 * 0000000140C62454: shr     rcx, 3
 * 0000000140C62458: lea     r9, [rdx+rcx*8]
 * 0000000140C6245C: jmp     short loc_140C6247F
 * 0000000140C6245E: xor     [rdx], r8
 * 0000000140C62461: mov     rax, [rdx]
 * 0000000140C62464: movzx   ecx, r8b
 * 0000000140C62468: xor     rax, r10
 * 0000000140C6246B: and     ecx, 3Fh
 * 0000000140C6246E: ror     r8, cl
 * 0000000140C62471: add     r8, rax
 * 0000000140C62474: xor     r8, 0F05h
 * 0000000140C6247B: add     rdx, 8
 * 0000000140C6247F: cmp     rdx, r9
 * 0000000140C62482: jnz     short loc_140C6245E
 * 0000000140C62484: btr     dword ptr [r12+9DCh], 15h
 * 0000000140C6248E: cmp     r8, [r12+0A80h]
 * 0000000140C62496: jz      short loc_140C624E5
 * 0000000140C62498: mov     ecx, [r12+804h]
 * 0000000140C624A0: mov     rax, [r12+588h]
 * 0000000140C624A8: mov     [rax], r12
 * 0000000140C624AB: mov     [rax+10h], ecx
 * 0000000140C624AE: mov     rcx, [r12+0A80h]
 * 0000000140C624B6: cmp     [r12+918h], edi
 * 0000000140C624BE: jnz     short loc_140C624CF
 * 0000000140C624C0: mov     rax, [r12+588h]
 * 0000000140C624C8: xor     rcx, r8
 * 0000000140C624CB: mov     [rax+18h], rcx
 * 0000000140C624CF: xor     edx, edx
 * 0000000140C624D1: mov     r9d, 100h
 * 0000000140C624D7: mov     rcx, r12
 * 0000000140C624DA: call    sub_140C7903C
 * 0000000140C624DF: mov     r11d, 1
 * 0000000140C624E5: mov     rbx, 7010008004002001h
 * 0000000140C624EF: mov     r8d, [r12+9D8h]
 * 0000000140C624F7: mov     edi, 2
 * 0000000140C624FC: or      r8d, edi
 * 0000000140C624FF: mov     r9, 0ABCC77118461CEFDh
 * 0000000140C62509: mov     [r12+9D8h], r8d
 * 0000000140C62511: add     [r12+854h], r11d
 * 0000000140C62519: lea     r14d, [rdi+0Ah]
 * 0000000140C6251D: test    r13b, r8b
 * 0000000140C62520: jz      loc_140C62A19
 * 0000000140C62526: bt      r8d, 16h
 * 0000000140C6252B: jb      loc_140C62A19
 * 0000000140C62531: mov     r15, [rbp+7B0h+arg_0]
 * 0000000140C62538: mov     esi, [r12+804h]
 * 0000000140C62540: mov     r11, [r12+0A40h]
 * 0000000140C62548: mov     r12d, [r12+828h]
 * 0000000140C62550: mov     r10, [r15+0AB8h]
 * 0000000140C62557: mov     eax, [r15+9DCh]
 * 0000000140C6255E: mov     [rsp+8B0h+var_858], r10
 * 0000000140C62563: test    dil, al
 * 0000000140C62566: jz      short loc_140C6256F
 * 0000000140C62568: mov     r11, [r15+5D0h]
 * 0000000140C6256F: mov     rax, [r15+2D0h]
 * 0000000140C62576: mov     r13, [r15+170h]
 * 0000000140C6257D: mov     [rbp+7B0h+var_7E8], rax
 * 0000000140C62581: mov     rax, [r15+348h]
 * 0000000140C62588: mov     [rbp+7B0h+var_828], rax
 * 0000000140C6258C: mov     [rsp+8B0h+var_840], r13
 * 0000000140C62591: rdtsc
 * 0000000140C62593: shl     rdx, 20h
 * 0000000140C62597: or      rax, rdx
 * 0000000140C6259A: mov     rcx, rax
 * 0000000140C6259D: ror     rcx, 3
 * 0000000140C625A1: xor     rcx, rax
 * 0000000140C625A4: mov     rax, rbx
 * 0000000140C625A7: mul     rcx
 * 0000000140C625AA: mov     rcx, rdx
 * 0000000140C625AD: mov     [rbp+7B0h+var_358], rdx
 * 0000000140C625B4: xor     rcx, rax
 * 0000000140C625B7: mov     rax, r9
 * 0000000140C625BA: mul     rcx
 * 0000000140C625BD: shr     rdx, 1Ah
 * 0000000140C625C1: sub     rdx, r14
 * 0000000140C625C4: imul    r9, rdx, 5F5E100h
 * 0000000140C625CB: sub     r9, rcx
 * 0000000140C625CE: mov     [rbp+7B0h+var_6F0], r9
 * 0000000140C625D5: bt      r8d, 19h
 * 0000000140C625DA: jnb     loc_140C62671
 * 0000000140C625E0: rdtsc
 * 0000000140C625E2: shl     rdx, 20h
 * 0000000140C625E6: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 0000000140C625F0: or      rax, rdx
 * 0000000140C625F3: mov     rcx, rax
 * 0000000140C625F6: ror     rcx, 3
 * 0000000140C625FA: xor     rcx, rax
 * 0000000140C625FD: mov     rax, rbx
 * 0000000140C62600: mul     rcx
 * 0000000140C62603: mov     rcx, rdx
 * 0000000140C62606: mov     [rbp+7B0h+var_350], rdx
 * 0000000140C6260D: xor     rcx, rax
 * 0000000140C62610: mov     rax, r14
 * 0000000140C62613: mul     rcx
 * 0000000140C62616: shr     rdx, 3
 * 0000000140C6261A: lea     rax, [rdx+rdx*4]
 * 0000000140C6261E: add     rax, rax
 * 0000000140C62621: sub     rcx, rax
 * 0000000140C62624: cmp     rcx, rdi
 * 0000000140C62627: jnb     short loc_140C62671
 * 0000000140C62629: rdtsc
 * 0000000140C6262B: shl     rdx, 20h
 * 0000000140C6262F: or      rax, rdx
 * 0000000140C62632: mov     rcx, rax
 * 0000000140C62635: ror     rcx, 3
 * 0000000140C62639: xor     rcx, rax
 * 0000000140C6263C: mov     rax, rbx
 * 0000000140C6263F: mul     rcx
 * 0000000140C62642: mov     rcx, rdx
 * 0000000140C62645: mov     [rbp+7B0h+var_348], rdx
 * 0000000140C6264C: xor     rcx, rax
 * 0000000140C6264F: mov     rax, r14
 * 0000000140C62652: mul     rcx
 * 0000000140C62655: shr     rdx, 3
 * 0000000140C62659: lea     rax, [rdx+rdx*4]
 * 0000000140C6265D: add     rax, rax
 * 0000000140C62660: sub     rcx, rax
 * 0000000140C62663: inc     rcx
 * 0000000140C62666: imul    rcx, r9
 * 0000000140C6266A: mov     [rbp+7B0h+var_6F0], rcx
 * 0000000140C62671: xor     r9d, r9d
 * 0000000140C62674: mov     ebx, r9d
 * 0000000140C62677: mov     r14d, r9d
 * 0000000140C6267A: lea     ecx, [r9+1]
 * 0000000140C6267E: test    cl, r8b
 * 0000000140C62681: lea     eax, [rcx+3Fh]
 * 0000000140C62684: cmovz   esi, r12d
 * 0000000140C62688: test    al, r8b
 * 0000000140C6268B: jnz     short loc_140C626A0
 * 0000000140C6268D: mov     dword ptr [rbp+7B0h+arg_8], r9d
 * 0000000140C62694: add     r15, 0AE0h
 * 0000000140C6269B: jmp     loc_140C62784
 * 0000000140C626A0: mov     dword ptr [rbp+7B0h+arg_8], ecx
 * 0000000140C626A6: rdtsc
 * 0000000140C626A8: shl     rdx, 20h
 * 0000000140C626AC: or      rax, rdx
 * 0000000140C626AF: mov     rcx, rax
 * 0000000140C626B2: ror     rcx, 3
 * 0000000140C626B6: xor     rcx, rax
 * 0000000140C626B9: mov     rax, 7010008004002001h
 * 0000000140C626C3: mul     rcx
 * 0000000140C626C6: mov     ecx, 15Dh
 * 0000000140C626CB: mov     rbx, rdx
 * 0000000140C626CE: mov     [rbp+7B0h+var_330], rdx
 * 0000000140C626D5: xor     rbx, rax
 * 0000000140C626D8: mov     edx, 1
 * 0000000140C626DD: mov     r14, rbx
 * 0000000140C626E0: mov     r8, rbx
 * 0000000140C626E3: xor     r14, r15
 * 0000000140C626E6: add     r15, 0AE0h
 * 0000000140C626ED: mov     rax, r15
 * 0000000140C626F0: xor     [rax], r8
 * 0000000140C626F3: lea     rax, [rax-8]
 * 0000000140C626F7: ror     r8, cl
 * 0000000140C626FA: sub     ecx, edx
 * 0000000140C626FC: jnz     short loc_140C626F0
 * 0000000140C626FE: lea     r9, [r12-0AE8h]
 * 0000000140C62706: mov     r13, r12
 * 0000000140C62709: shr     r9, 3
 * 0000000140C6270D: test    r9d, r9d
 * 0000000140C62710: jz      short loc_140C6274E
 * 0000000140C62712: mov     rcx, [rbp+7B0h+arg_0]
 * 0000000140C62719: mov     r13, rdx
 * 0000000140C6271C: add     rcx, 0AE0h
 * 0000000140C62723: movsxd  r10, r9d
 * 0000000140C62726: lea     r10, [rcx+r10*8]
 * 0000000140C6272A: mov     rdx, [r10]
 * 0000000140C6272D: lea     rax, [r14+r14]
 * 0000000140C62731: mov     ecx, r9d
 * 0000000140C62734: lea     r10, [r10-8]
 * 0000000140C62738: ror     rdx, cl
 * 0000000140C6273B: mov     r14, rdx
 * 0000000140C6273E: xor     r14, rax
 * 0000000140C62741: sub     r9d, r13d
 * 0000000140C62744: jnz     short loc_140C6272A
 * 0000000140C62746: mov     r10, [rsp+8B0h+var_858]
 * 0000000140C6274B: mov     r13, r12
 * 0000000140C6274E: mov     rdx, [rbp+7B0h+arg_0]
 * 0000000140C62755: mov     ecx, esi
 * 0000000140C62757: sub     ecx, r12d
 * 0000000140C6275A: add     rdx, r13
 * 0000000140C6275D: shr     ecx, 3
 * 0000000140C62760: test    ecx, ecx
 * 0000000140C62762: jz      short loc_140C6277F
 * 0000000140C62764: lea     rdx, [rdx+rcx*8]
 * 0000000140C62768: mov     eax, 1
 * 0000000140C6276D: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140C62771: xor     [rdx], r8
 * 0000000140C62774: lea     rdx, [rdx-8]
 * 0000000140C62778: ror     r8, cl
 * 0000000140C6277B: sub     ecx, eax
 * 0000000140C6277D: jnz     short loc_140C62771
 * 0000000140C6277F: mov     r13, [rsp+8B0h+var_840]
 * 0000000140C62784: test    r10, r10
 * 0000000140C62787: jz      short loc_140C627AF
 * 0000000140C62789: mov     rax, [rbp+7B0h+var_828]
 * 0000000140C6278D: lea     r8, [rbp+7B0h+var_6F0]
 * 0000000140C62794: mov     r9, r13
 * 0000000140C62797: mov     [rsp+8B0h+BugCheckParameter4], r10
 * 0000000140C6279C: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C627A3: mov     edx, esi
 * 0000000140C627A5: mov     rcx, r13
 * 0000000140C627A8: call    KeGuardDispatchICall
 * 0000000140C627AD: jmp     short loc_140C627EE
 * 0000000140C627AF: xor     edx, edx
 * 0000000140C627B1: test    r11, r11
 * 0000000140C627B4: jnz     short loc_140C627C9
 * 0000000140C627B6: lea     r8, [rbp+7B0h+var_6F0]
 * 0000000140C627BD: xor     ecx, ecx
 * 0000000140C627BF: mov     rax, r13
 * 0000000140C627C2: call    KeGuardDispatchICall
 * 0000000140C627C7: jmp     short loc_140C627E7
 * 0000000140C627C9: lea     rax, [rbp+7B0h+var_6F0]
 * 0000000140C627D0: xor     r9d, r9d
 * 0000000140C627D3: mov     [rsp+8B0h+BugCheckParameter4], rax
 * 0000000140C627D8: xor     r8d, r8d
 * 0000000140C627DB: mov     rax, [rbp+7B0h+var_7E8]
 * 0000000140C627DF: mov     rcx, r11
 * 0000000140C627E2: call    KeGuardDispatchICall
 * 0000000140C627E7: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C627EE: xor     eax, eax
 * 0000000140C627F0: cmp     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C627F6: jz      loc_140C62A08
 * 0000000140C627FC: mov     r8, rbx
 * 0000000140C627FF: lea     edx, [rax+1]
 * 0000000140C62802: xor     r8, r13
 * 0000000140C62805: mov     ecx, 15Dh
 * 0000000140C6280A: xor     [r15], rbx
 * 0000000140C6280D: lea     r15, [r15-8]
 * 0000000140C62811: ror     rbx, cl
 * 0000000140C62814: sub     ecx, edx
 * 0000000140C62816: jnz     short loc_140C6280A
 * 0000000140C62818: lea     r9, [r12-0AE8h]
 * 0000000140C62820: mov     r11, r12
 * 0000000140C62823: shr     r9, 3
 * 0000000140C62827: test    r9d, r9d
 * 0000000140C6282A: jz      short loc_140C6285E
 * 0000000140C6282C: movsxd  rax, r9d
 * 0000000140C6282F: mov     rdi, rdx
 * 0000000140C62832: lea     r10, ds:0AE0h[rax*8]
 * 0000000140C6283A: add     r10, r13
 * 0000000140C6283D: xor     r13d, r13d
 * 0000000140C62840: mov     rdx, [r10]
 * 0000000140C62843: lea     rax, [r8+r8]
 * 0000000140C62847: mov     ecx, r9d
 * 0000000140C6284A: lea     r10, [r10-8]
 * 0000000140C6284E: ror     rdx, cl
 * 0000000140C62851: mov     r8, rdx
 * 0000000140C62854: xor     r8, rax
 * 0000000140C62857: sub     r9d, edi
 * 0000000140C6285A: jnz     short loc_140C62840
 * 0000000140C6285C: jmp     short loc_140C62861
 * 0000000140C6285E: xor     r13d, r13d
 * 0000000140C62861: sub     esi, r12d
 * 0000000140C62864: mov     r12, [rbp+7B0h+arg_0]
 * 0000000140C6286B: shr     esi, 3
 * 0000000140C6286E: lea     rcx, [r11+r12]
 * 0000000140C62872: mov     r11d, 1
 * 0000000140C62878: test    esi, esi
 * 0000000140C6287A: jz      short loc_140C62896
 * 0000000140C6287C: mov     edx, esi
 * 0000000140C6287E: dec     rdx
 * 0000000140C62881: lea     rdx, [rcx+rdx*8]
 * 0000000140C62885: xor     [rdx], rbx
 * 0000000140C62888: mov     ecx, esi
 * 0000000140C6288A: ror     rbx, cl
 * 0000000140C6288D: lea     rdx, [rdx-8]
 * 0000000140C62891: sub     esi, r11d
 * 0000000140C62894: jnz     short loc_140C62885
 * 0000000140C62896: cmp     r8, r14
 * 0000000140C62899: jz      loc_140C629FC
 * 0000000140C6289F: mov     rax, [r12+588h]
 * 0000000140C628A7: mov     ecx, [r12+804h]
 * 0000000140C628AF: mov     [rax], r12
 * 0000000140C628B2: mov     [rax+10h], ecx
 * 0000000140C628B5: cmp     [r12+918h], r13d
 * 0000000140C628BD: jnz     loc_140C629FC
 * 0000000140C628C3: mov     rax, [r12+588h]
 * 0000000140C628CB: mov     rcx, r8
 * 0000000140C628CE: xor     rcx, r14
 * 0000000140C628D1: mov     [rax+18h], rcx
 * 0000000140C628D5: cmp     [r12+918h], r13d
 * 0000000140C628DD: jnz     loc_140C629FC
 * 0000000140C628E3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C628ED: add     rax, r12
 * 0000000140C628F0: mov     [r12+920h], rax
 * 0000000140C628F8: mov     [r12+928h], r13
 * 0000000140C62900: mov     qword ptr [r12+930h], 10Eh
 * 0000000140C6290C: mov     [r12+938h], r8
 * 0000000140C62914: mov     [r12+918h], r11d
 * 0000000140C6291C: mov     ecx, [r12+9D8h]
 * 0000000140C62924: bt      ecx, 1Dh
 * 0000000140C62928: jb      loc_140C629FC
 * 0000000140C6292E: test    dword ptr [r12+9DCh], 200000h
 * 0000000140C6293A: jz      loc_140C629FC
 * 0000000140C62940: test    r11b, cl
 * 0000000140C62943: jz      loc_140C629FC
 * 0000000140C62949: mov     ecx, [r12+0A74h]
 * 0000000140C62951: mov     eax, [r12+804h]
 * 0000000140C62959: mov     r10, [r12+838h]
 * 0000000140C62961: sub     eax, ecx
 * 0000000140C62963: mov     r8, [r12+0A78h]
 * 0000000140C6296B: lea     rdx, [rcx+r12]
 * 0000000140C6296F: mov     ecx, eax
 * 0000000140C62971: shr     rcx, 3
 * 0000000140C62975: lea     r9, [rdx+rcx*8]
 * 0000000140C62979: jmp     short loc_140C6299C
 * 0000000140C6297B: xor     [rdx], r8
 * 0000000140C6297E: mov     rax, [rdx]
 * 0000000140C62981: movzx   ecx, r8b
 * 0000000140C62985: xor     rax, r10
 * 0000000140C62988: and     ecx, 3Fh
 * 0000000140C6298B: ror     r8, cl
 * 0000000140C6298E: add     r8, rax
 * 0000000140C62991: xor     r8, 0F05h
 * 0000000140C62998: add     rdx, 8
 * 0000000140C6299C: cmp     rdx, r9
 * 0000000140C6299F: jnz     short loc_140C6297B
 * 0000000140C629A1: btr     dword ptr [r12+9DCh], 15h
 * 0000000140C629AB: cmp     r8, [r12+0A80h]
 * 0000000140C629B3: jz      short loc_140C629FC
 * 0000000140C629B5: mov     ecx, [r12+804h]
 * 0000000140C629BD: mov     rax, [r12+588h]
 * 0000000140C629C5: mov     [rax], r12
 * 0000000140C629C8: mov     [rax+10h], ecx
 * 0000000140C629CB: mov     rcx, [r12+0A80h]
 * 0000000140C629D3: cmp     [r12+918h], r13d
 * 0000000140C629DB: jnz     short loc_140C629EC
 * 0000000140C629DD: mov     rax, [r12+588h]
 * 0000000140C629E5: xor     rcx, r8
 * 0000000140C629E8: mov     [rax+18h], rcx
 * 0000000140C629EC: xor     edx, edx
 * 0000000140C629EE: mov     r9d, 100h
 * 0000000140C629F4: mov     rcx, r12
 * 0000000140C629F7: call    sub_140C7903C
 * 0000000140C629FC: mov     r15d, 20h ; ' '
 * 0000000140C62A02: lea     r14d, [r15-14h]
 * 0000000140C62A06: jmp     short loc_140C62A1C
 * 0000000140C62A08: mov     r12, [rbp+7B0h+arg_0]
 * 0000000140C62A0F: mov     r15d, 20h ; ' '
 * 0000000140C62A15: lea     r14d, [r15-14h]
 * 0000000140C62A19: xor     r13d, r13d
 * 0000000140C62A1C: mov     esi, [r12+0C4h]
 * 0000000140C62A24: lea     rcx, [r12+630h]
 * 0000000140C62A2C: mov     [r12+0C4h], r13d
 * 0000000140C62A34: mov     r9, r12
 * 0000000140C62A37: add     dword ptr [r12+848h], 630h
 * 0000000140C62A43: mov     rax, r12
 * 0000000140C62A46: mov     r10d, [r12+834h]
 * 0000000140C62A4E: mov     rbx, [r12+838h]
 * 0000000140C62A56: mov     dword ptr [rbp+7B0h+arg_8], esi
 * 0000000140C62A5C: cmp     r12, rcx
 * 0000000140C62A5F: jnb     short loc_140C62A71
 * 0000000140C62A61: mov     edx, 40h ; '@'
 * 0000000140C62A66: prefetchnta byte ptr [rax]
 * 0000000140C62A69: add     rax, rdx
 * 0000000140C62A6C: cmp     rax, rcx
 * 0000000140C62A6F: jb      short loc_140C62A66
 * 0000000140C62A71: mov     r11d, r14d
 * 0000000140C62A74: mov     r8, rbx
 * 0000000140C62A77: mov     r14d, 1
 * 0000000140C62A7D: mov     edi, 0FFFFFFFFh
 * 0000000140C62A82: mov     rsi, 7010008004002001h
 * 0000000140C62A8C: mov     eax, 8
 * 0000000140C62A91: xor     r8, [r9]
 * 0000000140C62A94: mov     ecx, r10d
 * 0000000140C62A97: rol     r8, cl
 * 0000000140C62A9A: xor     r8, [r9+8]
 * 0000000140C62A9E: add     r9, 10h
 * 0000000140C62AA2: rol     r8, cl
 * 0000000140C62AA5: sub     rax, r14
 * 0000000140C62AA8: jnz     short loc_140C62A91
 * 0000000140C62AAA: mov     rcx, r9
 * 0000000140C62AAD: sub     rcx, r12
 * 0000000140C62AB0: xor     rcx, rbx
 * 0000000140C62AB3: mov     rax, rcx
 * 0000000140C62AB6: rol     rax, 11h
 * 0000000140C62ABA: xor     rcx, rax
 * 0000000140C62ABD: mov     rax, rsi
 * 0000000140C62AC0: mul     rcx
 * 0000000140C62AC3: mov     [rbp+7B0h+var_328], rdx
 * 0000000140C62ACA: xor     rdx, rax
 * 0000000140C62ACD: xor     r10d, edx
 * 0000000140C62AD0: and     r10d, 3Fh
 * 0000000140C62AD4: cmovz   r10d, r14d
 * 0000000140C62AD8: add     r11d, edi
 * 0000000140C62ADB: jnz     short loc_140C62A8C
 * 0000000140C62ADD: mov     esi, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C62AE3: lea     edx, [r11+30h]
 * 0000000140C62AE7: lea     eax, [rdx-2Ah]
 * 0000000140C62AEA: lea     edi, [rdx-2Eh]
 * 0000000140C62AED: xor     r8, [r9]
 * 0000000140C62AF0: mov     ecx, r10d
 * 0000000140C62AF3: rol     r8, cl
 * 0000000140C62AF6: add     r9, 8
 * 0000000140C62AFA: add     edx, 0FFFFFFF8h
 * 0000000140C62AFD: sub     rax, r14
 * 0000000140C62B00: jnz     short loc_140C62AED
 * 0000000140C62B02: test    edx, edx
 * 0000000140C62B04: jz      short loc_140C62B22
 * 0000000140C62B06: mov     edi, 0FFFFFFFFh
 * 0000000140C62B0B: movzx   eax, byte ptr [r9]
 * 0000000140C62B0F: mov     ecx, r10d
 * 0000000140C62B12: xor     r8, rax
 * 0000000140C62B15: add     r9, r14
 * 0000000140C62B18: rol     r8, cl
 * 0000000140C62B1B: add     edx, edi
 * 0000000140C62B1D: jnz     short loc_140C62B0B
 * 0000000140C62B1F: lea     edi, [rdx+2]
 * 0000000140C62B22: mov     [r12+0C4h], esi
 * 0000000140C62B2A: cmp     [r12+0A68h], r8
 * 0000000140C62B32: jz      loc_140C62C9B
 * 0000000140C62B38: mov     ecx, [r12+804h]
 * 0000000140C62B40: mov     rax, [r12+588h]
 * 0000000140C62B48: mov     [rax], r12
 * 0000000140C62B4B: mov     [rax+10h], ecx
 * 0000000140C62B4E: mov     rcx, [r12+0A68h]
 * 0000000140C62B56: cmp     [r12+918h], r13d
 * 0000000140C62B5E: jnz     loc_140C62C9B
 * 0000000140C62B64: mov     rax, [r12+588h]
 * 0000000140C62B6C: xor     rcx, r8
 * 0000000140C62B6F: mov     [rax+18h], rcx
 * 0000000140C62B73: cmp     [r12+918h], r13d
 * 0000000140C62B7B: jnz     loc_140C62C9B
 * 0000000140C62B81: mov     r11, 0A3A03F5891C8B4E8h
 * 0000000140C62B8B: lea     rax, [r12+r11]
 * 0000000140C62B8F: mov     [r12+920h], rax
 * 0000000140C62B97: mov     [r12+928h], r13
 * 0000000140C62B9F: mov     qword ptr [r12+930h], 109h
 * 0000000140C62BAB: mov     [r12+938h], r8
 * 0000000140C62BB3: mov     [r12+918h], r14d
 * 0000000140C62BBB: mov     ecx, [r12+9D8h]
 * 0000000140C62BC3: bt      ecx, 1Dh
 * 0000000140C62BC7: jb      loc_140C62CA5
 * 0000000140C62BCD: test    dword ptr [r12+9DCh], 200000h
 * 0000000140C62BD9: jz      loc_140C62CA5
 * 0000000140C62BDF: test    r14b, cl
 * 0000000140C62BE2: jz      loc_140C62CA5
 * 0000000140C62BE8: mov     ecx, [r12+0A74h]
 * 0000000140C62BF0: mov     eax, [r12+804h]
 * 0000000140C62BF8: mov     r10, [r12+838h]
 * 0000000140C62C00: sub     eax, ecx
 * 0000000140C62C02: mov     r8, [r12+0A78h]
 * 0000000140C62C0A: lea     rdx, [rcx+r12]
 * 0000000140C62C0E: mov     ecx, eax
 * 0000000140C62C10: shr     rcx, 3
 * 0000000140C62C14: lea     r9, [rdx+rcx*8]
 * 0000000140C62C18: jmp     short loc_140C62C3B
 * 0000000140C62C1A: xor     [rdx], r8
 * 0000000140C62C1D: mov     rax, [rdx]
 * 0000000140C62C20: movzx   ecx, r8b
 * 0000000140C62C24: xor     rax, r10
 * 0000000140C62C27: and     ecx, 3Fh
 * 0000000140C62C2A: ror     r8, cl
 * 0000000140C62C2D: add     r8, rax
 * 0000000140C62C30: xor     r8, 0F05h
 * 0000000140C62C37: add     rdx, 8
 * 0000000140C62C3B: cmp     rdx, r9
 * 0000000140C62C3E: jnz     short loc_140C62C1A
 * 0000000140C62C40: btr     dword ptr [r12+9DCh], 15h
 * 0000000140C62C4A: cmp     r8, [r12+0A80h]
 * 0000000140C62C52: jz      short loc_140C62CA5
 * 0000000140C62C54: mov     ecx, [r12+804h]
 * 0000000140C62C5C: mov     rax, [r12+588h]
 * 0000000140C62C64: mov     [rax], r12
 * 0000000140C62C67: mov     [rax+10h], ecx
 * 0000000140C62C6A: mov     rcx, [r12+0A80h]
 * 0000000140C62C72: cmp     [r12+918h], r13d
 * 0000000140C62C7A: jnz     short loc_140C62C8B
 * 0000000140C62C7C: mov     rax, [r12+588h]
 * 0000000140C62C84: xor     rcx, r8
 * 0000000140C62C87: mov     [rax+18h], rcx
 * 0000000140C62C8B: xor     edx, edx
 * 0000000140C62C8D: mov     r9d, 100h
 * 0000000140C62C93: mov     rcx, r12
 * 0000000140C62C96: call    sub_140C7903C
 * 0000000140C62C9B: mov     r11, 0A3A03F5891C8B4E8h
 * 0000000140C62CA5: mov     ecx, [r12+9D8h]
 * 0000000140C62CAD: bt      ecx, 1Dh
 * 0000000140C62CB1: jb      loc_140C62DB8
 * 0000000140C62CB7: test    dword ptr [r12+9DCh], 200000h
 * 0000000140C62CC3: jz      loc_140C62DB8
 * 0000000140C62CC9: test    r14b, cl
 * 0000000140C62CCC: jz      loc_140C62DB8
 * 0000000140C62CD2: mov     ecx, [r12+0A74h]
 * 0000000140C62CDA: mov     eax, [r12+804h]
 * 0000000140C62CE2: mov     r10, [r12+838h]
 * 0000000140C62CEA: sub     eax, ecx
 * 0000000140C62CEC: mov     rdx, [r12+0A78h]
 * 0000000140C62CF4: lea     r8, [rcx+r12]
 * 0000000140C62CF8: mov     ecx, eax
 * 0000000140C62CFA: shr     rcx, 3
 * 0000000140C62CFE: lea     r9, [r8+rcx*8]
 * 0000000140C62D02: jmp     short loc_140C62D24
 * 0000000140C62D04: xor     [r8], rdx
 * 0000000140C62D07: mov     rax, [r8]
 * 0000000140C62D0A: movzx   ecx, dl
 * 0000000140C62D0D: xor     rax, r10
 * 0000000140C62D10: and     ecx, 3Fh
 * 0000000140C62D13: ror     rdx, cl
 * 0000000140C62D16: add     rdx, rax
 * 0000000140C62D19: xor     rdx, 0F05h
 * 0000000140C62D20: add     r8, 8
 * 0000000140C62D24: cmp     r8, r9
 * 0000000140C62D27: jnz     short loc_140C62D04
 * 0000000140C62D29: btr     dword ptr [r12+9DCh], 15h
 * 0000000140C62D33: cmp     rdx, [r12+0A80h]
 * 0000000140C62D3B: jz      short loc_140C62DB8
 * 0000000140C62D3D: mov     ecx, [r12+804h]
 * 0000000140C62D45: mov     rax, [r12+588h]
 * 0000000140C62D4D: mov     [rax], r12
 * 0000000140C62D50: mov     [rax+10h], ecx
 * 0000000140C62D53: mov     rcx, [r12+0A80h]
 * 0000000140C62D5B: cmp     [r12+918h], r13d
 * 0000000140C62D63: jnz     short loc_140C62DB8
 * 0000000140C62D65: mov     rax, [r12+588h]
 * 0000000140C62D6D: xor     rcx, rdx
 * 0000000140C62D70: mov     [rax+18h], rcx
 * 0000000140C62D74: cmp     [r12+918h], r13d
 * 0000000140C62D7C: jnz     short loc_140C62DB8
 * 0000000140C62D7E: lea     rax, [r12+r11]
 * 0000000140C62D82: mov     rcx, r12
 * 0000000140C62D85: mov     [r12+920h], rax
 * 0000000140C62D8D: mov     [r12+928h], r13
 * 0000000140C62D95: mov     qword ptr [r12+930h], 100h
 * 0000000140C62DA1: mov     [r12+938h], rdx
 * 0000000140C62DA9: xor     edx, edx
 * 0000000140C62DAB: mov     [r12+918h], r14d
 * 0000000140C62DB3: call    sub_140C79180
 * 0000000140C62DB8: test    dword ptr [r12+9D8h], 20000000h
 * 0000000140C62DC4: mov     rsi, r12
 * 0000000140C62DC7: mov     [rsp+8B0h+var_838], r12
 * 0000000140C62DCC: mov     rbx, r12
 * 0000000140C62DCF: jz      short loc_140C62DDB
 * 0000000140C62DD1: mov     [rsp+8B0h+var_838], r12
 * 0000000140C62DD6: jmp     loc_140C63595
 * 0000000140C62DDB: mov     ecx, [r12+9B8h]
 * 0000000140C62DE3: test    ecx, ecx
 * 0000000140C62DE5: jz      loc_140C62ED4
 * 0000000140C62DEB: cmp     ecx, r14d
 * 0000000140C62DEE: jnz     loc_140C6358D
 * 0000000140C62DF4: mov     r12d, 1
 * 0000000140C62DFA: mov     rax, [rsi+610h]
 * 0000000140C62E01: mov     rbx, rsi
 * 0000000140C62E04: test    rax, rax
 * 0000000140C62E07: jz      loc_140C6358D
 * 0000000140C62E0D: mov     rax, [rax]
 * 0000000140C62E10: test    rax, rax
 * 0000000140C62E13: jz      loc_140C6358D
 * 0000000140C62E19: mov     rax, [rsi+610h]
 * 0000000140C62E20: mov     r14, [rax]
 * 0000000140C62E23: lock or [rsp+8B0h+var_8B0], r13d
 * 0000000140C62E28: mov     r10d, [r14+804h]
 * 0000000140C62E2F: mov     r9, r14
 * 0000000140C62E32: mov     r11d, [r14+834h]
 * 0000000140C62E39: mov     rax, r14
 * 0000000140C62E3C: mov     r15, [r14+838h]
 * 0000000140C62E43: lea     rcx, [r14+r10]
 * 0000000140C62E47: cmp     r14, rcx
 * 0000000140C62E4A: jnb     short loc_140C62E5C
 * 0000000140C62E4C: mov     edx, 40h ; '@'
 * 0000000140C62E51: prefetchnta byte ptr [rax]
 * 0000000140C62E54: add     rax, rdx
 * 0000000140C62E57: cmp     rax, rcx
 * 0000000140C62E5A: jb      short loc_140C62E51
 * 0000000140C62E5C: mov     ebx, r10d
 * 0000000140C62E5F: mov     r8, r15
 * 0000000140C62E62: shr     ebx, 7
 * 0000000140C62E65: test    ebx, ebx
 * 0000000140C62E67: jz      loc_140C63105
 * 0000000140C62E6D: mov     rdi, 7010008004002001h
 * 0000000140C62E77: mov     eax, 8
 * 0000000140C62E7C: xor     r8, [r9]
 * 0000000140C62E7F: mov     ecx, r11d
 * 0000000140C62E82: rol     r8, cl
 * 0000000140C62E85: xor     r8, [r9+8]
 * 0000000140C62E89: add     r9, 10h
 * 0000000140C62E8D: rol     r8, cl
 * 0000000140C62E90: sub     rax, r12
 * 0000000140C62E93: jnz     short loc_140C62E7C
 * 0000000140C62E95: mov     rcx, r9
 * 0000000140C62E98: sub     rcx, r14
 * 0000000140C62E9B: xor     rcx, r15
 * 0000000140C62E9E: mov     rax, rcx
 * 0000000140C62EA1: rol     rax, 11h
 * 0000000140C62EA5: xor     rcx, rax
 * 0000000140C62EA8: mov     rax, rdi
 * 0000000140C62EAB: mul     rcx
 * 0000000140C62EAE: mov     [rbp+7B0h+var_1F8], rdx
 * 0000000140C62EB5: xor     rdx, rax
 * 0000000140C62EB8: xor     r11d, edx
 * 0000000140C62EBB: mov     edx, 0FFFFFFFFh
 * 0000000140C62EC0: and     r11d, 3Fh
 * 0000000140C62EC4: cmovz   r11d, r12d
 * 0000000140C62EC8: add     ebx, edx
 * 0000000140C62ECA: jnz     short loc_140C62E77
 * 0000000140C62ECC: lea     edi, [rbx+2]
 * 0000000140C62ECF: jmp     loc_140C6310A
 * 0000000140C62ED4: mov     r14, [r12+610h]
 * 0000000140C62EDC: test    r14, r14
 * 0000000140C62EDF: jz      loc_140C6358D
 * 0000000140C62EE5: cmp     [r14], r13
 * 0000000140C62EE8: jz      loc_140C6358D
 * 0000000140C62EEE: mov     ebx, [r12+804h]
 * 0000000140C62EF6: mov     r10d, 0
 * 0000000140C62EFC: mov     r13d, [r12+858h]
 * 0000000140C62F04: cmp     r13d, 7
 * 0000000140C62F08: mov     r8d, [r12+944h]
 * 0000000140C62F10: cmovnz  r15d, r10d
 * 0000000140C62F14: lea     eax, [rbx+30h]
 * 0000000140C62F17: cmp     eax, [r12+0A64h]
 * 0000000140C62F1F: jbe     loc_140C63016
 * 0000000140C62F25: mov     edx, eax
 * 0000000140C62F27: mov     rcx, r12
 * 0000000140C62F2A: call    sub_140C787A8
 * 0000000140C62F2F: xor     r10d, r10d
 * 0000000140C62F32: mov     [rsp+8B0h+var_838], rax
 * 0000000140C62F37: mov     rsi, rax
 * 0000000140C62F3A: test    rax, rax
 * 0000000140C62F3D: jz      loc_140C6303D
 * 0000000140C62F43: mov     ecx, [r12+9D8h]
 * 0000000140C62F4B: test    dil, cl
 * 0000000140C62F4E: jnz     loc_140C6300D
 * 0000000140C62F54: mov     eax, [r12+804h]
 * 0000000140C62F5C: lea     r11d, [r10+1]
 * 0000000140C62F60: mov     r9, [r12+7E8h]
 * 0000000140C62F68: and     ecx, 10000000h
 * 0000000140C62F6E: neg     ecx
 * 0000000140C62F70: mov     rcx, r12
 * 0000000140C62F73: sbb     edx, edx
 * 0000000140C62F75: and     edx, [r12+944h]
 * 0000000140C62F7D: cmp     eax, 8
 * 0000000140C62F80: jb      short loc_140C62F98
 * 0000000140C62F82: mov     r8d, eax
 * 0000000140C62F85: shr     r8, 3
 * 0000000140C62F89: mov     [rcx], r10
 * 0000000140C62F8C: add     eax, 0FFFFFFF8h
 * 0000000140C62F8F: add     rcx, 8
 * 0000000140C62F93: sub     r8, r11
 * 0000000140C62F96: jnz     short loc_140C62F89
 * 0000000140C62F98: test    eax, eax
 * 0000000140C62F9A: jz      short loc_140C62FAD
 * 0000000140C62F9C: mov     r8d, 0FFFFFFFFh
 * 0000000140C62FA2: mov     [rcx], r10b
 * 0000000140C62FA5: add     rcx, r11
 * 0000000140C62FA8: add     eax, r8d
 * 0000000140C62FAB: jnz     short loc_140C62FA2
 * 0000000140C62FAD: mov     r12d, [rsi+944h]
 * 0000000140C62FB4: mov     [rsi+944h], edx
 * 0000000140C62FBA: cmp     edx, 3
 * 0000000140C62FBD: jz      short loc_140C62FED
 * 0000000140C62FBF: test    dword ptr [rsi+9D8h], 8000000h
 * 0000000140C62FC9: jnz     short loc_140C62FE4
 * 0000000140C62FCB: test    edx, edx
 * 0000000140C62FCD: jz      short loc_140C62FE4
 * 0000000140C62FCF: mov     rax, [rsi+238h]
 * 0000000140C62FD6: lea     rcx, [r9-8]
 * 0000000140C62FDA: mov     rdx, [rcx]
 * 0000000140C62FDD: call    KeGuardDispatchICall
 * 0000000140C62FE2: jmp     short loc_140C62FFC
 * 0000000140C62FE4: mov     rax, [rsi+108h]
 * 0000000140C62FEB: jmp     short loc_140C62FF4
 * 0000000140C62FED: mov     rax, [rsi+370h]
 * 0000000140C62FF4: mov     rcx, r9
 * 0000000140C62FF7: call    KeGuardDispatchICall
 * 0000000140C62FFC: mov     [rsi+944h], r12d
 * 0000000140C63003: xor     r10d, r10d
 * 0000000140C63006: mov     r12, [rbp+7B0h+arg_0]
 * 0000000140C6300D: and     dword ptr [rsi+9D8h], 0FFFFFFFDh
 * 0000000140C63014: jmp     short loc_140C63023
 * 0000000140C63016: mov     [rsp+8B0h+var_838], r12
 * 0000000140C6301B: mov     [r12+804h], eax
 * 0000000140C63023: add     rbx, rsi
 * 0000000140C63026: mov     eax, 1
 * 0000000140C6302B: add     [rsi+82Ch], eax
 * 0000000140C63031: mov     [rbp+7B0h+var_320], rbx
 * 0000000140C63038: test    rsi, rsi
 * 0000000140C6303B: jnz     short loc_140C63045
 * 0000000140C6303D: mov     rsi, r12
 * 0000000140C63040: jmp     loc_140C62DD1
 * 0000000140C63045: mov     ecx, 30h ; '0'
 * 0000000140C6304A: mov     rax, rbx
 * 0000000140C6304D: lea     edx, [rcx-2Ah]
 * 0000000140C63050: lea     r12d, [rcx-2Fh]
 * 0000000140C63054: mov     [rax], r10
 * 0000000140C63057: add     ecx, 0FFFFFFF8h
 * 0000000140C6305A: add     rax, 8
 * 0000000140C6305E: sub     rdx, r12
 * 0000000140C63061: jnz     short loc_140C63054
 * 0000000140C63063: test    ecx, ecx
 * 0000000140C63065: jz      short loc_140C63076
 * 0000000140C63067: mov     edx, 0FFFFFFFFh
 * 0000000140C6306C: mov     [rax], r10b
 * 0000000140C6306F: add     rax, r12
 * 0000000140C63072: add     ecx, edx
 * 0000000140C63074: jnz     short loc_140C6306C
 * 0000000140C63076: mov     [rbx], r15d
 * 0000000140C63079: mov     [rbx+8], r14
 * 0000000140C6307D: cmp     r13d, 7
 * 0000000140C63081: jnz     short loc_140C63096
 * 0000000140C63083: lea     r9, [rbx+18h]
 * 0000000140C63087: mov     rdx, r14
 * 0000000140C6308A: lea     r8d, [r13+1]
 * 0000000140C6308E: mov     rcx, rsi
 * 0000000140C63091: call    sub_1405518EC
 * 0000000140C63096: mov     dword ptr [rbx+10h], 8
 * 0000000140C6309D: lea     r8, [r14+8]
 * 0000000140C630A1: add     dword ptr [rsi+848h], 8
 * 0000000140C630A8: mov     rdx, r14
 * 0000000140C630AB: mov     ecx, [rsi+834h]
 * 0000000140C630B1: mov     rax, [rsi+838h]
 * 0000000140C630B8: cmp     r14, r8
 * 0000000140C630BB: jnb     short loc_140C630CE
 * 0000000140C630BD: mov     r9d, 40h ; '@'
 * 0000000140C630C3: prefetchnta byte ptr [rdx]
 * 0000000140C630C6: add     rdx, r9
 * 0000000140C630C9: cmp     rdx, r8
 * 0000000140C630CC: jb      short loc_140C630C3
 * 0000000140C630CE: xor     rax, [r14]
 * 0000000140C630D1: rol     rax, cl
 * 0000000140C630D4: mov     rcx, rax
 * 0000000140C630D7: shr     rcx, 1Fh
 * 0000000140C630DB: xor     r13d, r13d
 * 0000000140C630DE: jmp     short loc_140C630E6
 * 0000000140C630E0: xor     eax, ecx
 * 0000000140C630E2: shr     rcx, 1Fh
 * 0000000140C630E6: test    rcx, rcx
 * 0000000140C630E9: jnz     short loc_140C630E0
 * 0000000140C630EB: btr     eax, 1Fh
 * 0000000140C630EF: mov     [rbx+14h], eax
 * 0000000140C630F2: add     dword ptr [rsi+848h], 8
 * 0000000140C630F9: add     [rsi+9B8h], r12d
 * 0000000140C63100: jmp     loc_140C62DFA
 * 0000000140C63105: mov     edx, 0FFFFFFFFh
 * 0000000140C6310A: and     r10d, 7Fh
 * 0000000140C6310E: cmp     r10d, 8
 * 0000000140C63112: jb      short loc_140C63131
 * 0000000140C63114: mov     eax, r10d
 * 0000000140C63117: shr     rax, 3
 * 0000000140C6311B: xor     r8, [r9]
 * 0000000140C6311E: mov     ecx, r11d
 * 0000000140C63121: rol     r8, cl
 * 0000000140C63124: add     r9, 8
 * 0000000140C63128: add     r10d, 0FFFFFFF8h
 * 0000000140C6312C: sub     rax, r12
 * 0000000140C6312F: jnz     short loc_140C6311B
 * 0000000140C63131: test    r10d, r10d
 * 0000000140C63134: jz      short loc_140C6314B
 * 0000000140C63136: movzx   eax, byte ptr [r9]
 * 0000000140C6313A: mov     ecx, r11d
 * 0000000140C6313D: xor     r8, rax
 * 0000000140C63140: add     r9, r12
 * 0000000140C63143: rol     r8, cl
 * 0000000140C63146: add     r10d, edx
 * 0000000140C63149: jnz     short loc_140C63136
 * 0000000140C6314B: mov     rax, [rsi+618h]
 * 0000000140C63152: mov     r12d, [r14+804h]
 * 0000000140C63159: mov     [rbp+7B0h+var_7C8], r12d
 * 0000000140C6315D: cmp     r8, [rax]
 * 0000000140C63160: jz      loc_140C632B2
 * 0000000140C63166: mov     rax, [rsi+588h]
 * 0000000140C6316D: mov     [rax], r14
 * 0000000140C63170: mov     [rax+10h], r12d
 * 0000000140C63174: mov     rax, [rsi+618h]
 * 0000000140C6317B: mov     rcx, [rax]
 * 0000000140C6317E: cmp     [rsi+918h], r13d
 * 0000000140C63185: jnz     loc_140C632AA
 * 0000000140C6318B: mov     rax, [rsi+588h]
 * 0000000140C63192: xor     rcx, r8
 * 0000000140C63195: mov     [rax+18h], rcx
 * 0000000140C63199: cmp     [rsi+918h], r13d
 * 0000000140C631A0: jnz     loc_140C632AA
 * 0000000140C631A6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C631B0: mov     edx, 1
 * 0000000140C631B5: add     rax, rsi
 * 0000000140C631B8: mov     [rsi+920h], rax
 * 0000000140C631BF: mov     [rsi+928h], r13
 * 0000000140C631C6: mov     qword ptr [rsi+930h], 111h
 * 0000000140C631D1: mov     [rsi+938h], r8
 * 0000000140C631D8: mov     [rsi+918h], edx
 * 0000000140C631DE: mov     ecx, [rsi+9D8h]
 * 0000000140C631E4: bt      ecx, 1Dh
 * 0000000140C631E8: jb      loc_140C632AA
 * 0000000140C631EE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C631F8: jz      loc_140C632AA
 * 0000000140C631FE: test    dl, cl
 * 0000000140C63200: jz      loc_140C632AA
 * 0000000140C63206: mov     ecx, [rsi+0A74h]
 * 0000000140C6320C: mov     eax, [rsi+804h]
 * 0000000140C63212: mov     r10, [rsi+838h]
 * 0000000140C63219: sub     eax, ecx
 * 0000000140C6321B: mov     r8, [rsi+0A78h]
 * 0000000140C63222: lea     rdx, [rcx+rsi]
 * 0000000140C63226: mov     ecx, eax
 * 0000000140C63228: shr     rcx, 3
 * 0000000140C6322C: lea     r9, [rdx+rcx*8]
 * 0000000140C63230: jmp     short loc_140C63253
 * 0000000140C63232: xor     [rdx], r8
 * 0000000140C63235: mov     rax, [rdx]
 * 0000000140C63238: movzx   ecx, r8b
 * 0000000140C6323C: xor     rax, r10
 * 0000000140C6323F: and     ecx, 3Fh
 * 0000000140C63242: ror     r8, cl
 * 0000000140C63245: add     r8, rax
 * 0000000140C63248: xor     r8, 0F05h
 * 0000000140C6324F: add     rdx, 8
 * 0000000140C63253: cmp     rdx, r9
 * 0000000140C63256: jnz     short loc_140C63232
 * 0000000140C63258: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C63260: cmp     r8, [rsi+0A80h]
 * 0000000140C63267: jz      short loc_140C632AA
 * 0000000140C63269: mov     ecx, [rsi+804h]
 * 0000000140C6326F: mov     rax, [rsi+588h]
 * 0000000140C63276: mov     [rax], rsi
 * 0000000140C63279: mov     [rax+10h], ecx
 * 0000000140C6327C: mov     rcx, [rsi+0A80h]
 * 0000000140C63283: cmp     [rsi+918h], r13d
 * 0000000140C6328A: jnz     short loc_140C6329A
 * 0000000140C6328C: mov     rax, [rsi+588h]
 * 0000000140C63293: xor     rcx, r8
 * 0000000140C63296: mov     [rax+18h], rcx
 * 0000000140C6329A: xor     edx, edx
 * 0000000140C6329C: mov     r9d, 100h
 * 0000000140C632A2: mov     rcx, rsi
 * 0000000140C632A5: call    sub_140C7903C
 * 0000000140C632AA: mov     rbx, rsi
 * 0000000140C632AD: jmp     loc_140C6358D
 * 0000000140C632B2: mov     r15d, [rsi+804h]
 * 0000000140C632B9: mov     r13d, 20h ; ' '
 * 0000000140C632BF: mov     r9d, [rsi+858h]
 * 0000000140C632C6: cmp     r9d, 7
 * 0000000140C632CA: mov     r8d, [rsi+944h]
 * 0000000140C632D1: mov     [rbp+7B0h+var_830], r9d
 * 0000000140C632D5: lea     r10d, [r13-20h]
 * 0000000140C632D9: mov     dword ptr [rbp+7B0h+arg_8], r15d
 * 0000000140C632E0: lea     eax, [r15+30h]
 * 0000000140C632E4: cmovnz  r13d, r10d
 * 0000000140C632E8: cmp     eax, [rsi+0A64h]
 * 0000000140C632EE: jbe     loc_140C633DD
 * 0000000140C632F4: mov     edx, eax
 * 0000000140C632F6: mov     rcx, rsi
 * 0000000140C632F9: call    sub_140C787A8
 * 0000000140C632FE: xor     r10d, r10d
 * 0000000140C63301: mov     rbx, rax
 * 0000000140C63304: test    rax, rax
 * 0000000140C63307: jz      loc_140C63595
 * 0000000140C6330D: mov     ecx, [rsi+9D8h]
 * 0000000140C63313: test    dil, cl
 * 0000000140C63316: jnz     loc_140C633D0
 * 0000000140C6331C: mov     eax, [rsi+804h]
 * 0000000140C63322: lea     r11d, [r10+1]
 * 0000000140C63326: mov     r9, [rsi+7E8h]
 * 0000000140C6332D: and     ecx, 10000000h
 * 0000000140C63333: neg     ecx
 * 0000000140C63335: mov     rcx, rsi
 * 0000000140C63338: sbb     edx, edx
 * 0000000140C6333A: and     edx, [rsi+944h]
 * 0000000140C63340: cmp     eax, 8
 * 0000000140C63343: jb      short loc_140C6335B
 * 0000000140C63345: mov     r8d, eax
 * 0000000140C63348: shr     r8, 3
 * 0000000140C6334C: mov     [rcx], r10
 * 0000000140C6334F: add     eax, 0FFFFFFF8h
 * 0000000140C63352: add     rcx, 8
 * 0000000140C63356: sub     r8, r11
 * 0000000140C63359: jnz     short loc_140C6334C
 * 0000000140C6335B: test    eax, eax
 * 0000000140C6335D: jz      short loc_140C63370
 * 0000000140C6335F: mov     r8d, 0FFFFFFFFh
 * 0000000140C63365: mov     [rcx], r10b
 * 0000000140C63368: add     rcx, r11
 * 0000000140C6336B: add     eax, r8d
 * 0000000140C6336E: jnz     short loc_140C63365
 * 0000000140C63370: mov     r15d, [rbx+944h]
 * 0000000140C63377: mov     [rbx+944h], edx
 * 0000000140C6337D: cmp     edx, 3
 * 0000000140C63380: jz      short loc_140C633B0
 * 0000000140C63382: test    dword ptr [rbx+9D8h], 8000000h
 * 0000000140C6338C: jnz     short loc_140C633A7
 * 0000000140C6338E: test    edx, edx
 * 0000000140C63390: jz      short loc_140C633A7
 * 0000000140C63392: mov     rax, [rbx+238h]
 * 0000000140C63399: lea     rcx, [r9-8]
 * 0000000140C6339D: mov     rdx, [rcx]
 * 0000000140C633A0: call    KeGuardDispatchICall
 * 0000000140C633A5: jmp     short loc_140C633BF
 * 0000000140C633A7: mov     rax, [rbx+108h]
 * 0000000140C633AE: jmp     short loc_140C633B7
 * 0000000140C633B0: mov     rax, [rbx+370h]
 * 0000000140C633B7: mov     rcx, r9
 * 0000000140C633BA: call    KeGuardDispatchICall
 * 0000000140C633BF: mov     [rbx+944h], r15d
 * 0000000140C633C6: xor     r10d, r10d
 * 0000000140C633C9: mov     r15d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C633D0: and     dword ptr [rbx+9D8h], 0FFFFFFFDh
 * 0000000140C633D7: mov     r9d, [rbp+7B0h+var_830]
 * 0000000140C633DB: jmp     short loc_140C633E6
 * 0000000140C633DD: mov     rbx, rsi
 * 0000000140C633E0: mov     [rsi+804h], eax
 * 0000000140C633E6: add     r15, rbx
 * 0000000140C633E9: mov     r8d, 1
 * 0000000140C633EF: add     [rbx+82Ch], r8d
 * 0000000140C633F6: mov     [rbp+7B0h+arg_8], r15
 * 0000000140C633FD: mov     [rbp+7B0h+var_1F0], r15
 * 0000000140C63404: test    rbx, rbx
 * 0000000140C63407: jz      loc_140C63595
 * 0000000140C6340D: lea     ecx, [r8+2Fh]
 * 0000000140C63411: mov     rax, r15
 * 0000000140C63414: lea     edx, [rcx-2Ah]
 * 0000000140C63417: mov     [rax], r10
 * 0000000140C6341A: add     ecx, 0FFFFFFF8h
 * 0000000140C6341D: add     rax, 8
 * 0000000140C63421: sub     rdx, r8
 * 0000000140C63424: jnz     short loc_140C63417
 * 0000000140C63426: test    ecx, ecx
 * 0000000140C63428: jz      short loc_140C63439
 * 0000000140C6342A: mov     edx, 0FFFFFFFFh
 * 0000000140C6342F: mov     [rax], r10b
 * 0000000140C63432: add     rax, r8
 * 0000000140C63435: add     ecx, edx
 * 0000000140C63437: jnz     short loc_140C6342F
 * 0000000140C63439: mov     [r15], r13d
 * 0000000140C6343C: mov     [r15+8], r14
 * 0000000140C63440: cmp     r9d, 7
 * 0000000140C63444: jnz     short loc_140C6345D
 * 0000000140C63446: test    r12d, r12d
 * 0000000140C63449: jz      short loc_140C6345D
 * 0000000140C6344B: lea     r9, [r15+18h]
 * 0000000140C6344F: mov     r8d, r12d
 * 0000000140C63452: mov     rdx, r14
 * 0000000140C63455: mov     rcx, rbx
 * 0000000140C63458: call    sub_1405518EC
 * 0000000140C6345D: mov     [r15+10h], r12d
 * 0000000140C63461: lea     rcx, [r14+r12]
 * 0000000140C63465: add     [rbx+848h], r12d
 * 0000000140C6346C: mov     r9, r14
 * 0000000140C6346F: mov     r10d, [rbx+834h]
 * 0000000140C63476: mov     rax, r14
 * 0000000140C63479: mov     rsi, [rbx+838h]
 * 0000000140C63480: cmp     r14, rcx
 * 0000000140C63483: jnb     short loc_140C63495
 * 0000000140C63485: mov     edx, 40h ; '@'
 * 0000000140C6348A: prefetchnta byte ptr [rax]
 * 0000000140C6348D: add     rax, rdx
 * 0000000140C63490: cmp     rax, rcx
 * 0000000140C63493: jb      short loc_140C6348A
 * 0000000140C63495: mov     r11d, r12d
 * 0000000140C63498: mov     r8, rsi
 * 0000000140C6349B: shr     r11d, 7
 * 0000000140C6349F: test    r11d, r11d
 * 0000000140C634A2: jz      short loc_140C63519
 * 0000000140C634A4: mov     edi, 1
 * 0000000140C634A9: mov     r15d, 0FFFFFFFFh
 * 0000000140C634AF: mov     r12, 7010008004002001h
 * 0000000140C634B9: mov     eax, 8
 * 0000000140C634BE: xor     r8, [r9]
 * 0000000140C634C1: mov     ecx, r10d
 * 0000000140C634C4: rol     r8, cl
 * 0000000140C634C7: xor     r8, [r9+8]
 * 0000000140C634CB: add     r9, 10h
 * 0000000140C634CF: rol     r8, cl
 * 0000000140C634D2: sub     rax, rdi
 * 0000000140C634D5: jnz     short loc_140C634BE
 * 0000000140C634D7: mov     rcx, r9
 * 0000000140C634DA: sub     rcx, r14
 * 0000000140C634DD: xor     rcx, rsi
 * 0000000140C634E0: mov     rax, rcx
 * 0000000140C634E3: rol     rax, 11h
 * 0000000140C634E7: xor     rcx, rax
 * 0000000140C634EA: mov     rax, r12
 * 0000000140C634ED: mul     rcx
 * 0000000140C634F0: mov     [rbp+7B0h+var_4C8], rdx
 * 0000000140C634F7: xor     rdx, rax
 * 0000000140C634FA: xor     r10d, edx
 * 0000000140C634FD: and     r10d, 3Fh
 * 0000000140C63501: cmovz   r10d, edi
 * 0000000140C63505: add     r11d, r15d
 * 0000000140C63508: jnz     short loc_140C634B9
 * 0000000140C6350A: mov     r15, [rbp+7B0h+arg_8]
 * 0000000140C63511: lea     edi, [r11+2]
 * 0000000140C63515: mov     r12d, [rbp+7B0h+var_7C8]
 * 0000000140C63519: mov     edx, r12d
 * 0000000140C6351C: mov     r11d, 1
 * 0000000140C63522: and     edx, 7Fh
 * 0000000140C63525: cmp     edx, 8
 * 0000000140C63528: jb      short loc_140C63545
 * 0000000140C6352A: mov     eax, edx
 * 0000000140C6352C: shr     rax, 3
 * 0000000140C63530: xor     r8, [r9]
 * 0000000140C63533: mov     ecx, r10d
 * 0000000140C63536: rol     r8, cl
 * 0000000140C63539: add     r9, 8
 * 0000000140C6353D: add     edx, 0FFFFFFF8h
 * 0000000140C63540: sub     rax, r11
 * 0000000140C63543: jnz     short loc_140C63530
 * 0000000140C63545: test    edx, edx
 * 0000000140C63547: jz      short loc_140C63565
 * 0000000140C63549: mov     edi, 0FFFFFFFFh
 * 0000000140C6354E: movzx   eax, byte ptr [r9]
 * 0000000140C63552: mov     ecx, r10d
 * 0000000140C63555: xor     r8, rax
 * 0000000140C63558: add     r9, r11
 * 0000000140C6355B: rol     r8, cl
 * 0000000140C6355E: add     edx, edi
 * 0000000140C63560: jnz     short loc_140C6354E
 * 0000000140C63562: lea     edi, [rdx+2]
 * 0000000140C63565: mov     rax, r8
 * 0000000140C63568: jmp     short loc_140C6356D
 * 0000000140C6356A: xor     r8d, eax
 * 0000000140C6356D: shr     rax, 1Fh
 * 0000000140C63571: test    rax, rax
 * 0000000140C63574: jnz     short loc_140C6356A
 * 0000000140C63576: btr     r8d, 1Fh
 * 0000000140C6357B: mov     [r15+14h], r8d
 * 0000000140C6357F: add     [rbx+848h], r12d
 * 0000000140C63586: add     [rbx+9B8h], r11d
 * 0000000140C6358D: mov     rsi, rbx
 * 0000000140C63590: mov     [rsp+8B0h+var_838], rbx
 * 0000000140C63595: mov     eax, [rsi+9DCh]
 * 0000000140C6359B: mov     r11d, 1000h
 * 0000000140C635A1: test    al, 8
 * 0000000140C635A3: jz      loc_140C63802
 * 0000000140C635A9: test    r11d, eax
 * 0000000140C635AC: jnz     loc_140C63802
 * 0000000140C635B2: rdtsc
 * 0000000140C635B4: shl     rdx, 20h
 * 0000000140C635B8: mov     rbx, 7010008004002001h
 * 0000000140C635C2: or      rax, rdx
 * 0000000140C635C5: mov     rcx, rax
 * 0000000140C635C8: ror     rcx, 3
 * 0000000140C635CC: xor     rcx, rax
 * 0000000140C635CF: mov     rax, rbx
 * 0000000140C635D2: mul     rcx
 * 0000000140C635D5: mov     [rbp+7B0h+var_4C0], rdx
 * 0000000140C635DC: xor     rdx, rax
 * 0000000140C635DF: test    dl, 3
 * 0000000140C635E2: jnz     loc_140C63802
 * 0000000140C635E8: mov     rax, [rsi+100h]
 * 0000000140C635EF: mov     ecx, 40h ; '@'
 * 0000000140C635F4: mov     r8d, [rsi+830h]
 * 0000000140C635FB: mov     rdx, [rsi+778h]
 * 0000000140C63602: call    KeGuardDispatchICall
 * 0000000140C63607: xor     r12d, r12d
 * 0000000140C6360A: mov     r15, rax
 * 0000000140C6360D: test    rax, rax
 * 0000000140C63610: jnz     short loc_140C6361D
 * 0000000140C63612: mov     r11d, 1000h
 * 0000000140C63618: jmp     loc_140C63805
 * 0000000140C6361D: mov     rax, [rsi+1B8h]
 * 0000000140C63624: mov     rcx, r15
 * 0000000140C63627: movzx   edx, word ptr [rsi+780h]
 * 0000000140C6362E: call    KeGuardDispatchICall
 * 0000000140C63633: mov     rcx, [rsi+6F8h]
 * 0000000140C6363A: mov     rax, [rsi+510h]
 * 0000000140C63641: mov     r14d, [rcx+rax]
 * 0000000140C63645: test    r14d, r14d
 * 0000000140C63648: jz      short loc_140C63675
 * 0000000140C6364A: rdtsc
 * 0000000140C6364C: shl     rdx, 20h
 * 0000000140C63650: or      rax, rdx
 * 0000000140C63653: mov     rcx, rax
 * 0000000140C63656: ror     rcx, 3
 * 0000000140C6365A: xor     rcx, rax
 * 0000000140C6365D: mov     rax, rbx
 * 0000000140C63660: mul     rcx
 * 0000000140C63663: mov     [rbp+7B0h+var_4B8], rdx
 * 0000000140C6366A: xor     rax, rdx
 * 0000000140C6366D: xor     edx, edx
 * 0000000140C6366F: div     r14
 * 0000000140C63672: mov     r14, rdx
 * 0000000140C63675: mov     rax, [rsi+3B8h]
 * 0000000140C6367C: xor     ecx, ecx
 * 0000000140C6367E: call    KeGuardDispatchICall
 * 0000000140C63683: mov     rbx, rax
 * 0000000140C63686: test    rax, rax
 * 0000000140C63689: jz      short loc_140C636B0
 * 0000000140C6368B: mov     r13d, 0FFFFFFFFh
 * 0000000140C63691: mov     rcx, rbx
 * 0000000140C63694: test    r14d, r14d
 * 0000000140C63697: jz      short loc_140C636C4
 * 0000000140C63699: mov     rax, [rsi+3B8h]
 * 0000000140C636A0: add     r14d, r13d
 * 0000000140C636A3: call    KeGuardDispatchICall
 * 0000000140C636A8: mov     rbx, rax
 * 0000000140C636AB: test    rax, rax
 * 0000000140C636AE: jnz     short loc_140C63691
 * 0000000140C636B0: mov     rax, [rsi+108h]
 * 0000000140C636B7: mov     rcx, r15
 * 0000000140C636BA: call    KeGuardDispatchICall
 * 0000000140C636BF: jmp     loc_140C63612
 * 0000000140C636C4: mov     rax, [rsi+3A8h]
 * 0000000140C636CB: call    KeGuardDispatchICall
 * 0000000140C636D0: mov     rcx, rbx
 * 0000000140C636D3: test    eax, eax
 * 0000000140C636D5: jns     short loc_140C636E5
 * 0000000140C636D7: mov     rax, [rsi+3C0h]
 * 0000000140C636DE: call    KeGuardDispatchICall
 * 0000000140C636E3: jmp     short loc_140C636B0
 * 0000000140C636E5: mov     rax, [rsi+440h]
 * 0000000140C636EC: lea     rdx, [rbp+7B0h+var_70]
 * 0000000140C636F3: call    KeGuardDispatchICall
 * 0000000140C636F8: mov     rax, [rsi+1D8h]
 * 0000000140C636FF: xor     r9d, r9d
 * 0000000140C63702: xor     r8d, r8d
 * 0000000140C63705: mov     [rsp+8B0h+BugCheckParameter4], r12
 * 0000000140C6370A: mov     rdx, r15
 * 0000000140C6370D: mov     rcx, rbx
 * 0000000140C63710: call    KeGuardDispatchICall
 * 0000000140C63715: rdtsc
 * 0000000140C63717: shl     rdx, 20h
 * 0000000140C6371B: or      rax, rdx
 * 0000000140C6371E: mov     rcx, rax
 * 0000000140C63721: ror     rcx, 3
 * 0000000140C63725: xor     rcx, rax
 * 0000000140C63728: mov     rax, 7010008004002001h
 * 0000000140C63732: mul     rcx
 * 0000000140C63735: mov     rcx, r15
 * 0000000140C63738: mov     rbx, rdx
 * 0000000140C6373B: mov     [rbp+7B0h+var_240], rdx
 * 0000000140C63742: xor     rbx, rax
 * 0000000140C63745: mov     rax, [rsi+1D0h]
 * 0000000140C6374C: call    KeGuardDispatchICall
 * 0000000140C63751: mov     ecx, eax
 * 0000000140C63753: xor     edx, edx
 * 0000000140C63755: mov     rax, rbx
 * 0000000140C63758: div     rcx
 * 0000000140C6375B: mov     rbx, rdx
 * 0000000140C6375E: cli
 * 0000000140C6375F: sti
 * 0000000140C63760: mov     rax, [rsi+1B0h]
 * 0000000140C63767: lea     rcx, [rbp+7B0h+var_4D8]
 * 0000000140C6376E: xor     edx, edx
 * 0000000140C63770: call    KeGuardDispatchICall
 * 0000000140C63775: mov     rax, [rsi+1C0h]
 * 0000000140C6377C: lea     rcx, [rbp+7B0h+var_238]
 * 0000000140C63783: mov     rdx, r15
 * 0000000140C63786: call    KeGuardDispatchICall
 * 0000000140C6378B: jmp     short loc_140C63794
 * 0000000140C6378D: test    ebx, ebx
 * 0000000140C6378F: jz      short loc_140C637B1
 * 0000000140C63791: add     ebx, r13d
 * 0000000140C63794: mov     rax, [rsi+1C8h]
 * 0000000140C6379B: lea     rdx, [rbp+7B0h+var_238]
 * 0000000140C637A2: lea     rcx, [rbp+7B0h+var_758]
 * 0000000140C637A6: call    KeGuardDispatchICall
 * 0000000140C637AB: test    eax, eax
 * 0000000140C637AD: jns     short loc_140C6378D
 * 0000000140C637AF: jmp     short loc_140C637C7
 * 0000000140C637B1: mov     rax, [rsi+1B0h]
 * 0000000140C637B8: lea     rcx, [rbp+7B0h+var_4D8]
 * 0000000140C637BF: mov     edx, [rbp+7B0h+var_758]
 * 0000000140C637C2: call    KeGuardDispatchICall
 * 0000000140C637C7: mov     rax, [rsi+1E0h]
 * 0000000140C637CE: lea     rdx, [rbp+7B0h+var_250]
 * 0000000140C637D5: lea     rcx, [rbp+7B0h+var_4D8]
 * 0000000140C637DC: call    KeGuardDispatchICall
 * 0000000140C637E1: mov     rax, [rsi+108h]
 * 0000000140C637E8: mov     rcx, r15
 * 0000000140C637EB: call    KeGuardDispatchICall
 * 0000000140C637F0: mov     r15d, 1
 * 0000000140C637F6: mov     r11d, 1000h
 * 0000000140C637FC: mov     [rbp+7B0h+var_7B0], r15d
 * 0000000140C63800: jmp     short loc_140C6380F
 * 0000000140C63802: xor     r12d, r12d
 * 0000000140C63805: mov     r15d, 1
 * 0000000140C6380B: mov     [rbp+7B0h+var_7B0], r12d
 * 0000000140C6380F: mov     [rbp+7B0h+var_750], r12
 * 0000000140C63813: lea     rax, [rbp+7B0h+var_748]
 * 0000000140C63817: mov     ecx, 4
 * 0000000140C6381C: mov     ebx, 0FFFFFFFFh
 * 0000000140C63821: mov     [rax], r12b
 * 0000000140C63824: add     rax, r15
 * 0000000140C63827: add     ecx, ebx
 * 0000000140C63829: jnz     short loc_140C63821
 * 0000000140C6382B: mov     eax, [rsi+84Ch]
 * 0000000140C63831: mov     edx, 28h ; '('
 * 0000000140C63836: mov     ecx, [rsi+840h]
 * 0000000140C6383C: mov     [rbp+7B0h+var_7C8], ecx
 * 0000000140C6383F: lea     r14d, [rdx-23h]
 * 0000000140C63843: cmp     [rsi+848h], eax
 * 0000000140C63849: jge     loc_140C713E1
 * 0000000140C6384F: mov     eax, [rsi+9D8h]
 * 0000000140C63855: mov     r8d, 88000h
 * 0000000140C6385B: and     eax, r8d
 * 0000000140C6385E: cmp     eax, r8d
 * 0000000140C63861: jz      short loc_140C63867
 * 0000000140C63863: mov     dr7, r12
 * 0000000140C63867: cmp     ecx, [rsi+82Ch]
 * 0000000140C6386D: jnz     short loc_140C6387C
 * 0000000140C6386F: add     [rsi+850h], r15d
 * 0000000140C63876: mov     ecx, r12d
 * 0000000140C63879: mov     [rbp+7B0h+var_7C8], ecx
 * 0000000140C6387C: mov     rax, [rsi+0AC0h]
 * 0000000140C63883: mov     r8, rsi
 * 0000000140C63886: test    rax, rax
 * 0000000140C63889: mov     r9d, r12d
 * 0000000140C6388C: cmovnz  r8, rax
 * 0000000140C63890: mov     r13d, [r8+828h]
 * 0000000140C63897: add     r13, r8
 * 0000000140C6389A: mov     [rsp+8B0h+var_860], r13
 * 0000000140C6389F: cmp     dword ptr [rbp+7B0h+var_750], r12d
 * 0000000140C638A3: jz      short loc_140C638BA
 * 0000000140C638A5: cmp     dword ptr [rbp+7B0h+var_750+4], ecx
 * 0000000140C638A8: ja      short loc_140C638BA
 * 0000000140C638AA: mov     r13d, [rbp+7B0h+var_748]
 * 0000000140C638AE: mov     r9d, dword ptr [rbp+7B0h+var_750+4]
 * 0000000140C638B2: add     r13, r8
 * 0000000140C638B5: mov     [rsp+8B0h+var_860], r13
 * 0000000140C638BA: cmp     r9d, ecx
 * 0000000140C638BD: jz      loc_140C639D0
 * 0000000140C638C3: mov     r10d, ecx
 * 0000000140C638C6: mov     rbx, 0AAAAAAAAAAAAAAABh
 * 0000000140C638D0: sub     r10d, r9d
 * 0000000140C638D3: mov     r9d, ecx
 * 0000000140C638D6: mov     ecx, [r13+0]
 * 0000000140C638DA: sub     ecx, 1
 * 0000000140C638DD: jz      loc_140C6399C
 * 0000000140C638E3: sub     ecx, 6
 * 0000000140C638E6: jz      loc_140C6398E
 * 0000000140C638EC: sub     ecx, 1
 * 0000000140C638EF: jz      loc_140C63981
 * 0000000140C638F5: sub     ecx, edi
 * 0000000140C638F7: jz      short loc_140C63975
 * 0000000140C638F9: sub     ecx, 12h
 * 0000000140C638FC: jz      short loc_140C6396E
 * 0000000140C638FE: sub     ecx, edi
 * 0000000140C63900: jz      short loc_140C63942
 * 0000000140C63902: sub     ecx, 3
 * 0000000140C63905: jz      short loc_140C6391A
 * 0000000140C63907: cmp     ecx, 0Ah
 * 0000000140C6390A: jz      loc_140C6399C
 * 0000000140C63910: mov     eax, 30h ; '0'
 * 0000000140C63915: jmp     loc_140C639B1
 * 0000000140C6391A: mov     ecx, [r13+20h]
 * 0000000140C6391E: mov     edx, [r13+28h]
 * 0000000140C63922: and     ecx, 0FFFh
 * 0000000140C63928: add     rdx, 0FFFh
 * 0000000140C6392F: add     rdx, rcx
 * 0000000140C63932: shr     rdx, 0Ch
 * 0000000140C63936: lea     eax, [rdx+rdx*4]
 * 0000000140C63939: lea     eax, ds:30h[rax*4]
 * 0000000140C63940: jmp     short loc_140C639B1
 * 0000000140C63942: mov     eax, [r13+24h]
 * 0000000140C63946: lea     ecx, [rax-1]
 * 0000000140C63949: neg     eax
 * 0000000140C6394B: sbb     eax, eax
 * 0000000140C6394D: and     ecx, eax
 * 0000000140C6394F: mov     rax, rbx
 * 0000000140C63952: mul     rcx
 * 0000000140C63955: movzx   eax, word ptr [r13+28h]
 * 0000000140C6395A: shr     rdx, 3
 * 0000000140C6395E: add     edx, 7
 * 0000000140C63961: and     edx, 0FFFFFFF8h
 * 0000000140C63964: add     eax, edi
 * 0000000140C63966: lea     eax, [rax+rax*2]
 * 0000000140C63969: lea     eax, [rdx+rax*8]
 * 0000000140C6396C: jmp     short loc_140C639B1
 * 0000000140C6396E: movzx   eax, word ptr [r13+28h]
 * 0000000140C63973: jmp     short loc_140C63986
 * 0000000140C63975: mov     eax, [r13+1Ch]
 * 0000000140C63979: add     eax, 3
 * 0000000140C6397C: shl     eax, 4
 * 0000000140C6397F: jmp     short loc_140C639B1
 * 0000000140C63981: movzx   eax, word ptr [r13+20h]
 * 0000000140C63986: add     eax, 37h ; '7'
 * 0000000140C63989: and     eax, 0FFFFFFF8h
 * 0000000140C6398C: jmp     short loc_140C639B1
 * 0000000140C6398E: mov     eax, [r13+18h]
 * 0000000140C63992: add     eax, edi
 * 0000000140C63994: lea     eax, [rax+rax*2]
 * 0000000140C63997: shl     eax, 3
 * 0000000140C6399A: jmp     short loc_140C639B1
 * 0000000140C6399C: mov     ecx, [r13+10h]
 * 0000000140C639A0: mov     rax, rbx
 * 0000000140C639A3: mul     rcx
 * 0000000140C639A6: shr     rdx, 3
 * 0000000140C639AA: lea     eax, ds:30h[rdx*4]
 * 0000000140C639B1: add     r13, rax
 * 0000000140C639B4: sub     r10, r15
 * 0000000140C639B7: jnz     loc_140C638D6
 * 0000000140C639BD: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C639C2: lea     edx, [r10+28h]
 * 0000000140C639C6: mov     [rsp+8B0h+var_860], r13
 * 0000000140C639CB: mov     ebx, 0FFFFFFFFh
 * 0000000140C639D0: mov     eax, r13d
 * 0000000140C639D3: mov     dword ptr [rbp+7B0h+var_750], r15d
 * 0000000140C639D7: sub     eax, r8d
 * 0000000140C639DA: mov     dword ptr [rbp+7B0h+var_750+4], r9d
 * 0000000140C639DE: mov     [rbp+7B0h+var_748], eax
 * 0000000140C639E1: mov     r10d, [r13+0]
 * 0000000140C639E5: mov     [rsp+8B0h+var_850], r10d
 * 0000000140C639EA: cmp     r10d, 1Eh
 * 0000000140C639EE: jg      loc_140C6B5E0
 * 0000000140C639F4: jz      loc_140C6AD43
 * 0000000140C639FA: mov     eax, 0Fh
 * 0000000140C639FF: cmp     r10d, eax
 * 0000000140C63A02: jg      loc_140C65D95
 * 0000000140C63A08: jz      loc_140C65AA9
 * 0000000140C63A0E: mov     ecx, r10d
 * 0000000140C63A11: test    r10d, r10d
 * 0000000140C63A14: jz      loc_140C65775
 * 0000000140C63A1A: sub     ecx, 1
 * 0000000140C63A1D: jz      loc_140C703EA
 * 0000000140C63A23: sub     ecx, 3
 * 0000000140C63A26: jz      loc_140C65337
 * 0000000140C63A2C: sub     ecx, 1
 * 0000000140C63A2F: jz      loc_140C64D8A
 * 0000000140C63A35: sub     ecx, edi
 * 0000000140C63A37: jz      loc_140C64B66
 * 0000000140C63A3D: sub     ecx, 1
 * 0000000140C63A40: jz      loc_140C643F7
 * 0000000140C63A46: sub     ecx, edi
 * 0000000140C63A48: jz      loc_140C64035
 * 0000000140C63A4E: cmp     ecx, 3
 * 0000000140C63A51: jnz     loc_140C6E0DB
 * 0000000140C63A57: mov     r14, [r13+8]
 * 0000000140C63A5B: mov     r8d, [r13+10h]
 * 0000000140C63A5F: mov     r9, r14
 * 0000000140C63A62: add     [rsi+848h], r8d
 * 0000000140C63A69: mov     rax, r14
 * 0000000140C63A6C: mov     r10d, [rsi+834h]
 * 0000000140C63A73: mov     r15, [rsi+838h]
 * 0000000140C63A7A: lea     rcx, [r14+r8]
 * 0000000140C63A7E: cmp     r14, rcx
 * 0000000140C63A81: jnb     short loc_140C63A93
 * 0000000140C63A83: mov     edx, 40h ; '@'
 * 0000000140C63A88: prefetchnta byte ptr [rax]
 * 0000000140C63A8B: add     rax, rdx
 * 0000000140C63A8E: cmp     rax, rcx
 * 0000000140C63A91: jb      short loc_140C63A88
 * 0000000140C63A93: mov     r11d, r8d
 * 0000000140C63A96: mov     rbx, r15
 * 0000000140C63A99: shr     r11d, 7
 * 0000000140C63A9D: mov     edx, 1
 * 0000000140C63AA2: test    r11d, r11d
 * 0000000140C63AA5: jz      short loc_140C63B14
 * 0000000140C63AA7: mov     edi, 0FFFFFFFFh
 * 0000000140C63AAC: mov     rsi, 7010008004002001h
 * 0000000140C63AB6: mov     eax, 8
 * 0000000140C63ABB: xor     rbx, [r9]
 * 0000000140C63ABE: mov     ecx, r10d
 * 0000000140C63AC1: rol     rbx, cl
 * 0000000140C63AC4: xor     rbx, [r9+8]
 * 0000000140C63AC8: add     r9, 10h
 * 0000000140C63ACC: rol     rbx, cl
 * 0000000140C63ACF: sub     rax, rdx
 * 0000000140C63AD2: jnz     short loc_140C63ABB
 * 0000000140C63AD4: mov     rcx, r9
 * 0000000140C63AD7: sub     rcx, r14
 * 0000000140C63ADA: xor     rcx, r15
 * 0000000140C63ADD: mov     rax, rcx
 * 0000000140C63AE0: rol     rax, 11h
 * 0000000140C63AE4: xor     rcx, rax
 * 0000000140C63AE7: mov     rax, rsi
 * 0000000140C63AEA: mul     rcx
 * 0000000140C63AED: mov     [rbp+7B0h+var_338], rdx
 * 0000000140C63AF4: xor     rdx, rax
 * 0000000140C63AF7: xor     r10d, edx
 * 0000000140C63AFA: mov     edx, 1
 * 0000000140C63AFF: and     r10d, 3Fh
 * 0000000140C63B03: cmovz   r10d, edx
 * 0000000140C63B07: add     r11d, edi
 * 0000000140C63B0A: jnz     short loc_140C63AB6
 * 0000000140C63B0C: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C63B11: lea     edi, [rdx+1]
 * 0000000140C63B14: and     r8d, 7Fh
 * 0000000140C63B18: cmp     r8d, 8
 * 0000000140C63B1C: jb      short loc_140C63B3B
 * 0000000140C63B1E: mov     eax, r8d
 * 0000000140C63B21: shr     rax, 3
 * 0000000140C63B25: xor     rbx, [r9]
 * 0000000140C63B28: mov     ecx, r10d
 * 0000000140C63B2B: rol     rbx, cl
 * 0000000140C63B2E: add     r9, 8
 * 0000000140C63B32: add     r8d, 0FFFFFFF8h
 * 0000000140C63B36: sub     rax, rdx
 * 0000000140C63B39: jnz     short loc_140C63B25
 * 0000000140C63B3B: test    r8d, r8d
 * 0000000140C63B3E: jz      short loc_140C63B5E
 * 0000000140C63B40: mov     edi, 0FFFFFFFFh
 * 0000000140C63B45: movzx   eax, byte ptr [r9]
 * 0000000140C63B49: mov     ecx, r10d
 * 0000000140C63B4C: xor     rbx, rax
 * 0000000140C63B4F: add     r9, rdx
 * 0000000140C63B52: rol     rbx, cl
 * 0000000140C63B55: add     r8d, edi
 * 0000000140C63B58: jnz     short loc_140C63B45
 * 0000000140C63B5A: lea     edi, [r8+2]
 * 0000000140C63B5E: mov     rax, rbx
 * 0000000140C63B61: jmp     short loc_140C63B65
 * 0000000140C63B63: xor     ebx, eax
 * 0000000140C63B65: shr     rax, 1Fh
 * 0000000140C63B69: test    rax, rax
 * 0000000140C63B6C: jnz     short loc_140C63B63
 * 0000000140C63B6E: btr     ebx, 1Fh
 * 0000000140C63B72: cmp     ebx, [r13+14h]
 * 0000000140C63B76: jz      loc_140C63C5A
 * 0000000140C63B7C: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C63B81: mov     eax, [r13+18h]
 * 0000000140C63B85: test    dl, al
 * 0000000140C63B87: jz      short loc_140C63B9A
 * 0000000140C63B89: mov     rax, [rsi+578h]
 * 0000000140C63B90: mov     cl, [rax]
 * 0000000140C63B92: test    cl, cl
 * 0000000140C63B94: jnz     loc_140C63C5A
 * 0000000140C63B9A: mov     ecx, [r13+10h]
 * 0000000140C63B9E: mov     rdx, [r13+8]
 * 0000000140C63BA2: test    rcx, rcx
 * 0000000140C63BA5: jz      loc_140C63CF4
 * 0000000140C63BAB: mov     eax, [rsi+9DCh]
 * 0000000140C63BB1: mov     r8d, 40h ; '@'
 * 0000000140C63BB7: test    r8b, al
 * 0000000140C63BBA: jz      loc_140C63CF4
 * 0000000140C63BC0: mov     r13, cr8
 * 0000000140C63BC4: mov     cr8, rdi
 * 0000000140C63BC8: mov     r14, rdx
 * 0000000140C63BCB: lea     rax, [rcx-1]
 * 0000000140C63BCF: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C63BD6: add     rax, rdx
 * 0000000140C63BD9: or      rax, 0FFFh
 * 0000000140C63BDF: mov     [rsp+8B0h+var_840], rax
 * 0000000140C63BE4: lea     rax, [r14-1]
 * 0000000140C63BE8: mov     [rsp+8B0h+var_858], rax
 * 0000000140C63BED: movzx   r12d, r13b
 * 0000000140C63BF1: mov     r15d, r12d
 * 0000000140C63BF4: mov     rax, [rsi+468h]
 * 0000000140C63BFB: xor     edx, edx
 * 0000000140C63BFD: mov     rcx, r14
 * 0000000140C63C00: call    KeGuardDispatchICall
 * 0000000140C63C05: cmp     eax, 0C000022Dh
 * 0000000140C63C0A: jnz     short loc_140C63C27
 * 0000000140C63C0C: mov     eax, 1
 * 0000000140C63C11: cmp     r13b, al
 * 0000000140C63C14: ja      short loc_140C63C32
 * 0000000140C63C16: movzx   r15d, r13b
 * 0000000140C63C1A: mov     cr8, r15
 * 0000000140C63C1E: mov     al, [r14]
 * 0000000140C63C21: mov     cr8, rdi
 * 0000000140C63C25: jmp     short loc_140C63BF4
 * 0000000140C63C27: mov     r15, r12
 * 0000000140C63C2A: test    eax, eax
 * 0000000140C63C2C: js      loc_140C63CE8
 * 0000000140C63C32: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C63C37: mov     ecx, 1000h
 * 0000000140C63C3C: add     rax, rcx
 * 0000000140C63C3F: add     r14, rcx
 * 0000000140C63C42: mov     [rsp+8B0h+var_858], rax
 * 0000000140C63C47: cmp     rax, [rsp+8B0h+var_840]
 * 0000000140C63C4C: jnz     short loc_140C63BED
 * 0000000140C63C4E: mov     cr8, r15
 * 0000000140C63C52: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C63C57: xor     r12d, r12d
 * 0000000140C63C5A: mov     ebx, 1
 * 0000000140C63C5F: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C63C69: jz      loc_140C710FB
 * 0000000140C63C6F: mov     r8d, [r13+10h]
 * 0000000140C63C73: test    r8d, r8d
 * 0000000140C63C76: jz      loc_140C710FB
 * 0000000140C63C7C: mov     rdx, [r13+8]
 * 0000000140C63C80: lea     r9, [rbp+7B0h+var_318]
 * 0000000140C63C87: mov     rcx, rsi
 * 0000000140C63C8A: call    sub_1405518EC
 * 0000000140C63C8F: mov     edx, 10h
 * 0000000140C63C94: lea     r8, [r13+1Ch]
 * 0000000140C63C98: lea     r9, [rbp+7B0h+var_318]
 * 0000000140C63C9F: mov     rcx, [r9]
 * 0000000140C63CA2: add     r9, 8
 * 0000000140C63CA6: mov     rax, [r8]
 * 0000000140C63CA9: add     r8, 8
 * 0000000140C63CAD: cmp     rcx, rax
 * 0000000140C63CB0: jnz     loc_140C63E3C
 * 0000000140C63CB6: add     edx, 0FFFFFFF8h
 * 0000000140C63CB9: cmp     edx, 8
 * 0000000140C63CBC: jnb     short loc_140C63C9F
 * 0000000140C63CBE: test    edx, edx
 * 0000000140C63CC0: jz      loc_140C64023
 * 0000000140C63CC6: mov     cl, [r9]
 * 0000000140C63CC9: add     r9, rbx
 * 0000000140C63CCC: mov     al, [r8]
 * 0000000140C63CCF: add     r8, rbx
 * 0000000140C63CD2: cmp     cl, al
 * 0000000140C63CD4: jnz     loc_140C63E3C
 * 0000000140C63CDA: mov     eax, 0FFFFFFFFh
 * 0000000140C63CDF: add     edx, eax
 * 0000000140C63CE1: jnz     short loc_140C63CC6
 * 0000000140C63CE3: jmp     loc_140C64023
 * 0000000140C63CE8: mov     cr8, r12
 * 0000000140C63CEC: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C63CF1: xor     r12d, r12d
 * 0000000140C63CF4: mov     eax, [r13+14h]
 * 0000000140C63CF8: cmp     [rsi+918h], r12d
 * 0000000140C63CFF: jnz     short loc_140C63D11
 * 0000000140C63D01: mov     ecx, ebx
 * 0000000140C63D03: xor     rcx, rax
 * 0000000140C63D06: mov     rax, [rsi+588h]
 * 0000000140C63D0D: mov     [rax+18h], rcx
 * 0000000140C63D11: mov     ebx, 1
 * 0000000140C63D16: mov     rcx, [r13+8]
 * 0000000140C63D1A: cmp     [rsi+918h], r12d
 * 0000000140C63D21: jnz     loc_140C63C5F
 * 0000000140C63D27: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C63D31: add     rax, rsi
 * 0000000140C63D34: mov     [rsi+920h], rax
 * 0000000140C63D3B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C63D45: add     rax, r13
 * 0000000140C63D48: mov     [rsi+928h], rax
 * 0000000140C63D4F: movsxd  rax, dword ptr [r13+0]
 * 0000000140C63D53: mov     [rsi+930h], rax
 * 0000000140C63D5A: mov     [rsi+938h], rcx
 * 0000000140C63D61: mov     [rsi+918h], ebx
 * 0000000140C63D67: mov     ecx, [rsi+9D8h]
 * 0000000140C63D6D: bt      ecx, 1Dh
 * 0000000140C63D71: jb      loc_140C63C5F
 * 0000000140C63D77: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C63D81: jz      loc_140C63C5F
 * 0000000140C63D87: test    bl, cl
 * 0000000140C63D89: jz      loc_140C63C5F
 * 0000000140C63D8F: mov     ecx, [rsi+0A74h]
 * 0000000140C63D95: mov     eax, [rsi+804h]
 * 0000000140C63D9B: mov     r10, [rsi+838h]
 * 0000000140C63DA2: sub     eax, ecx
 * 0000000140C63DA4: mov     r8, [rsi+0A78h]
 * 0000000140C63DAB: lea     rdx, [rcx+rsi]
 * 0000000140C63DAF: mov     ecx, eax
 * 0000000140C63DB1: shr     rcx, 3
 * 0000000140C63DB5: lea     r9, [rdx+rcx*8]
 * 0000000140C63DB9: jmp     short loc_140C63DDC
 * 0000000140C63DBB: xor     [rdx], r8
 * 0000000140C63DBE: mov     rax, [rdx]
 * 0000000140C63DC1: movzx   ecx, r8b
 * 0000000140C63DC5: xor     rax, r10
 * 0000000140C63DC8: and     ecx, 3Fh
 * 0000000140C63DCB: ror     r8, cl
 * 0000000140C63DCE: add     r8, rax
 * 0000000140C63DD1: xor     r8, 0F05h
 * 0000000140C63DD8: add     rdx, 8
 * 0000000140C63DDC: cmp     rdx, r9
 * 0000000140C63DDF: jnz     short loc_140C63DBB
 * 0000000140C63DE1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C63DE9: cmp     r8, [rsi+0A80h]
 * 0000000140C63DF0: jz      loc_140C63C5F
 * 0000000140C63DF6: mov     ecx, [rsi+804h]
 * 0000000140C63DFC: mov     rax, [rsi+588h]
 * 0000000140C63E03: mov     [rax], rsi
 * 0000000140C63E06: mov     [rax+10h], ecx
 * 0000000140C63E09: mov     rcx, [rsi+0A80h]
 * 0000000140C63E10: cmp     [rsi+918h], r12d
 * 0000000140C63E17: jnz     short loc_140C63E27
 * 0000000140C63E19: mov     rax, [rsi+588h]
 * 0000000140C63E20: xor     rcx, r8
 * 0000000140C63E23: mov     [rax+18h], rcx
 * 0000000140C63E27: xor     edx, edx
 * 0000000140C63E29: mov     r9d, 100h
 * 0000000140C63E2F: mov     rcx, rsi
 * 0000000140C63E32: call    sub_140C7903C
 * 0000000140C63E37: jmp     loc_140C63C5F
 * 0000000140C63E3C: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C63E41: mov     eax, [r13+18h]
 * 0000000140C63E45: test    bl, al
 * 0000000140C63E47: jz      short loc_140C63E5A
 * 0000000140C63E49: mov     rax, [rsi+578h]
 * 0000000140C63E50: mov     cl, [rax]
 * 0000000140C63E52: test    cl, cl
 * 0000000140C63E54: jnz     loc_140C64023
 * 0000000140C63E5A: mov     ecx, [r13+10h]
 * 0000000140C63E5E: mov     rdx, [r13+8]
 * 0000000140C63E62: test    rcx, rcx
 * 0000000140C63E65: jz      loc_140C63F06
 * 0000000140C63E6B: mov     eax, [rsi+9DCh]
 * 0000000140C63E71: mov     r8d, 40h ; '@'
 * 0000000140C63E77: test    r8b, al
 * 0000000140C63E7A: jz      loc_140C63F06
 * 0000000140C63E80: mov     r14, cr8
 * 0000000140C63E84: mov     rbx, rdx
 * 0000000140C63E87: lea     r12, [rcx-1]
 * 0000000140C63E8B: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140C63E92: add     r12, rdx
 * 0000000140C63E95: or      r12, 0FFFh
 * 0000000140C63E9C: lea     r15, [rbx-1]
 * 0000000140C63EA0: mov     cr8, rdi
 * 0000000140C63EA4: mov     rax, [rsi+468h]
 * 0000000140C63EAB: xor     edx, edx
 * 0000000140C63EAD: mov     rcx, rbx
 * 0000000140C63EB0: call    KeGuardDispatchICall
 * 0000000140C63EB5: cmp     eax, 0C000022Dh
 * 0000000140C63EBA: jnz     short loc_140C63ED2
 * 0000000140C63EBC: mov     eax, 1
 * 0000000140C63EC1: cmp     r14b, al
 * 0000000140C63EC4: ja      short loc_140C63ED6
 * 0000000140C63EC6: movzx   eax, r14b
 * 0000000140C63ECA: mov     cr8, rax
 * 0000000140C63ECE: mov     al, [rbx]
 * 0000000140C63ED0: jmp     short loc_140C63EA0
 * 0000000140C63ED2: test    eax, eax
 * 0000000140C63ED4: js      short loc_140C63EF6
 * 0000000140C63ED6: mov     eax, 1000h
 * 0000000140C63EDB: add     rbx, rax
 * 0000000140C63EDE: add     r15, rax
 * 0000000140C63EE1: cmp     r15, r12
 * 0000000140C63EE4: jnz     short loc_140C63EA4
 * 0000000140C63EE6: movzx   eax, r14b
 * 0000000140C63EEA: mov     cr8, rax
 * 0000000140C63EEE: xor     r12d, r12d
 * 0000000140C63EF1: jmp     loc_140C64023
 * 0000000140C63EF6: movzx   eax, r14b
 * 0000000140C63EFA: mov     cr8, rax
 * 0000000140C63EFE: xor     r12d, r12d
 * 0000000140C63F01: lea     ebx, [r12+1]
 * 0000000140C63F06: mov     rcx, [r13+8]
 * 0000000140C63F0A: cmp     [rsi+918h], r12d
 * 0000000140C63F11: jnz     loc_140C64023
 * 0000000140C63F17: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C63F21: add     rax, rsi
 * 0000000140C63F24: mov     [rsi+920h], rax
 * 0000000140C63F2B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C63F35: add     rax, r13
 * 0000000140C63F38: mov     [rsi+928h], rax
 * 0000000140C63F3F: movsxd  rax, dword ptr [r13+0]
 * 0000000140C63F43: mov     [rsi+930h], rax
 * 0000000140C63F4A: mov     [rsi+938h], rcx
 * 0000000140C63F51: mov     [rsi+918h], ebx
 * 0000000140C63F57: mov     ecx, [rsi+9D8h]
 * 0000000140C63F5D: bt      ecx, 1Dh
 * 0000000140C63F61: jb      loc_140C64023
 * 0000000140C63F67: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C63F71: jz      loc_140C64023
 * 0000000140C63F77: test    bl, cl
 * 0000000140C63F79: jz      loc_140C64023
 * 0000000140C63F7F: mov     ecx, [rsi+0A74h]
 * 0000000140C63F85: mov     eax, [rsi+804h]
 * 0000000140C63F8B: mov     r10, [rsi+838h]
 * 0000000140C63F92: sub     eax, ecx
 * 0000000140C63F94: mov     r8, [rsi+0A78h]
 * 0000000140C63F9B: lea     rdx, [rcx+rsi]
 * 0000000140C63F9F: mov     ecx, eax
 * 0000000140C63FA1: shr     rcx, 3
 * 0000000140C63FA5: lea     r9, [rdx+rcx*8]
 * 0000000140C63FA9: jmp     short loc_140C63FCC
 * 0000000140C63FAB: xor     [rdx], r8
 * 0000000140C63FAE: mov     rax, [rdx]
 * 0000000140C63FB1: movzx   ecx, r8b
 * 0000000140C63FB5: xor     rax, r10
 * 0000000140C63FB8: and     ecx, 3Fh
 * 0000000140C63FBB: ror     r8, cl
 * 0000000140C63FBE: add     r8, rax
 * 0000000140C63FC1: xor     r8, 0F05h
 * 0000000140C63FC8: add     rdx, 8
 * 0000000140C63FCC: cmp     rdx, r9
 * 0000000140C63FCF: jnz     short loc_140C63FAB
 * 0000000140C63FD1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C63FD9: cmp     r8, [rsi+0A80h]
 * 0000000140C63FE0: jz      short loc_140C64023
 * 0000000140C63FE2: mov     ecx, [rsi+804h]
 * 0000000140C63FE8: mov     rax, [rsi+588h]
 * 0000000140C63FEF: mov     [rax], rsi
 * 0000000140C63FF2: mov     [rax+10h], ecx
 * 0000000140C63FF5: mov     rcx, [rsi+0A80h]
 * 0000000140C63FFC: cmp     [rsi+918h], r12d
 * 0000000140C64003: jnz     short loc_140C64013
 * 0000000140C64005: mov     rax, [rsi+588h]
 * 0000000140C6400C: xor     rcx, r8
 * 0000000140C6400F: mov     [rax+18h], rcx
 * 0000000140C64013: xor     edx, edx
 * 0000000140C64015: mov     r9d, 100h
 * 0000000140C6401B: mov     rcx, rsi
 * 0000000140C6401E: call    sub_140C7903C
 * 0000000140C64023: mov     eax, [r13+10h]
 * 0000000140C64027: shl     eax, 4
 * 0000000140C6402A: add     [rsi+848h], eax
 * 0000000140C64030: jmp     loc_140C710FB
 * 0000000140C64035: mov     r15d, [rsi+844h]
 * 0000000140C6403C: lea     rax, [r13+30h]
 * 0000000140C64040: mov     r12d, [r13+1Ch]
 * 0000000140C64044: shl     r15, 4
 * 0000000140C64048: shl     r12, 4
 * 0000000140C6404C: add     r15, rax
 * 0000000140C6404F: add     r12, rax
 * 0000000140C64052: mov     [rsp+8B0h+var_858], r12
 * 0000000140C64057: xor     r10d, r10d
 * 0000000140C6405A: cmp     [r15], r10d
 * 0000000140C6405D: jl      loc_140C64322
 * 0000000140C64063: mov     r13, [r15+8]
 * 0000000140C64067: mov     r14d, [r15+4]
 * 0000000140C6406B: mov     r8, r13
 * 0000000140C6406E: add     [rsi+848h], r14d
 * 0000000140C64075: mov     rax, r13
 * 0000000140C64078: mov     r9d, [rsi+834h]
 * 0000000140C6407F: mov     r11, [rsi+838h]
 * 0000000140C64086: lea     rcx, [r14+r13]
 * 0000000140C6408A: mov     [rbp+7B0h+var_828], r13
 * 0000000140C6408E: cmp     r13, rcx
 * 0000000140C64091: jnb     short loc_140C640A3
 * 0000000140C64093: mov     edx, 40h ; '@'
 * 0000000140C64098: prefetchnta byte ptr [rax]
 * 0000000140C6409B: add     rax, rdx
 * 0000000140C6409E: cmp     rax, rcx
 * 0000000140C640A1: jb      short loc_140C64098
 * 0000000140C640A3: mov     r10d, r14d
 * 0000000140C640A6: mov     rbx, r11
 * 0000000140C640A9: shr     r10d, 7
 * 0000000140C640AD: test    r10d, r10d
 * 0000000140C640B0: jz      short loc_140C64126
 * 0000000140C640B2: mov     edi, 1
 * 0000000140C640B7: mov     rsi, 7010008004002001h
 * 0000000140C640C1: mov     r12d, 0FFFFFFFFh
 * 0000000140C640C7: mov     eax, 8
 * 0000000140C640CC: xor     rbx, [r8]
 * 0000000140C640CF: mov     ecx, r9d
 * 0000000140C640D2: rol     rbx, cl
 * 0000000140C640D5: xor     rbx, [r8+8]
 * 0000000140C640D9: add     r8, 10h
 * 0000000140C640DD: rol     rbx, cl
 * 0000000140C640E0: sub     rax, rdi
 * 0000000140C640E3: jnz     short loc_140C640CC
 * 0000000140C640E5: mov     rcx, r8
 * 0000000140C640E8: sub     rcx, r13
 * 0000000140C640EB: xor     rcx, r11
 * 0000000140C640EE: mov     rax, rcx
 * 0000000140C640F1: rol     rax, 11h
 * 0000000140C640F5: xor     rcx, rax
 * 0000000140C640F8: mov     rax, rsi
 * 0000000140C640FB: mul     rcx
 * 0000000140C640FE: mov     [rbp+7B0h+var_340], rdx
 * 0000000140C64105: xor     rdx, rax
 * 0000000140C64108: xor     r9d, edx
 * 0000000140C6410B: and     r9d, 3Fh
 * 0000000140C6410F: cmovz   r9d, edi
 * 0000000140C64113: add     r10d, r12d
 * 0000000140C64116: jnz     short loc_140C640C7
 * 0000000140C64118: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6411D: lea     edi, [r10+2]
 * 0000000140C64121: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C64126: mov     edx, r14d
 * 0000000140C64129: mov     r11d, 1
 * 0000000140C6412F: and     edx, 7Fh
 * 0000000140C64132: cmp     edx, 8
 * 0000000140C64135: jb      short loc_140C64152
 * 0000000140C64137: mov     eax, edx
 * 0000000140C64139: shr     rax, 3
 * 0000000140C6413D: xor     rbx, [r8]
 * 0000000140C64140: mov     ecx, r9d
 * 0000000140C64143: rol     rbx, cl
 * 0000000140C64146: add     r8, 8
 * 0000000140C6414A: add     edx, 0FFFFFFF8h
 * 0000000140C6414D: sub     rax, r11
 * 0000000140C64150: jnz     short loc_140C6413D
 * 0000000140C64152: xor     r10d, r10d
 * 0000000140C64155: test    edx, edx
 * 0000000140C64157: jz      short loc_140C64175
 * 0000000140C64159: mov     edi, 0FFFFFFFFh
 * 0000000140C6415E: movzx   eax, byte ptr [r8]
 * 0000000140C64162: mov     ecx, r9d
 * 0000000140C64165: xor     rbx, rax
 * 0000000140C64168: add     r8, r11
 * 0000000140C6416B: rol     rbx, cl
 * 0000000140C6416E: add     edx, edi
 * 0000000140C64170: jnz     short loc_140C6415E
 * 0000000140C64172: lea     edi, [rdx+2]
 * 0000000140C64175: mov     rax, rbx
 * 0000000140C64178: jmp     short loc_140C6417C
 * 0000000140C6417A: xor     ebx, eax
 * 0000000140C6417C: shr     rax, 1Fh
 * 0000000140C64180: test    rax, rax
 * 0000000140C64183: jnz     short loc_140C6417A
 * 0000000140C64185: mov     eax, [r15]
 * 0000000140C64188: btr     ebx, 1Fh
 * 0000000140C6418C: btr     eax, 1Fh
 * 0000000140C64190: cmp     ebx, eax
 * 0000000140C64192: jz      loc_140C643A8
 * 0000000140C64198: mov     rcx, r14
 * 0000000140C6419B: test    r14d, r14d
 * 0000000140C6419E: jz      loc_140C6422A
 * 0000000140C641A4: mov     eax, [rsi+9DCh]
 * 0000000140C641AA: mov     edx, 40h ; '@'
 * 0000000140C641AF: test    dl, al
 * 0000000140C641B1: jz      short loc_140C6422A
 * 0000000140C641B3: mov     r12, cr8
 * 0000000140C641B7: mov     r14, r13
 * 0000000140C641BA: lea     rax, [r13-1]
 * 0000000140C641BE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C641C5: add     rax, rcx
 * 0000000140C641C8: or      rax, 0FFFh
 * 0000000140C641CE: mov     [rsp+8B0h+var_840], rax
 * 0000000140C641D3: lea     r13, [r14-1]
 * 0000000140C641D7: mov     cr8, rdi
 * 0000000140C641DB: mov     rax, [rsi+468h]
 * 0000000140C641E2: xor     edx, edx
 * 0000000140C641E4: mov     rcx, r14
 * 0000000140C641E7: call    KeGuardDispatchICall
 * 0000000140C641EC: cmp     eax, 0C000022Dh
 * 0000000140C641F1: jnz     short loc_140C6420E
 * 0000000140C641F3: mov     eax, 1
 * 0000000140C641F8: cmp     r12b, al
 * 0000000140C641FB: ja      loc_140C642FB
 * 0000000140C64201: movzx   eax, r12b
 * 0000000140C64205: mov     cr8, rax
 * 0000000140C64209: mov     al, [r14]
 * 0000000140C6420C: jmp     short loc_140C641D7
 * 0000000140C6420E: xor     r10d, r10d
 * 0000000140C64211: test    eax, eax
 * 0000000140C64213: jns     loc_140C642FE
 * 0000000140C64219: movzx   eax, r12b
 * 0000000140C6421D: mov     cr8, rax
 * 0000000140C64221: mov     r13, [rbp+7B0h+var_828]
 * 0000000140C64225: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C6422A: mov     eax, [r15]
 * 0000000140C6422D: btr     eax, 1Fh
 * 0000000140C64231: cmp     [rsi+918h], r10d
 * 0000000140C64238: jnz     loc_140C643A8
 * 0000000140C6423E: mov     ecx, ebx
 * 0000000140C64240: xor     rcx, rax
 * 0000000140C64243: mov     rax, [rsi+588h]
 * 0000000140C6424A: mov     [rax+18h], rcx
 * 0000000140C6424E: cmp     [rsi+918h], r10d
 * 0000000140C64255: jnz     loc_140C643A8
 * 0000000140C6425B: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C64260: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6426A: add     rax, rsi
 * 0000000140C6426D: mov     r8d, 1
 * 0000000140C64273: mov     [rsi+920h], rax
 * 0000000140C6427A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C64284: add     rax, rdx
 * 0000000140C64287: mov     [rsi+928h], rax
 * 0000000140C6428E: movsxd  rax, dword ptr [rdx]
 * 0000000140C64291: mov     [rsi+930h], rax
 * 0000000140C64298: mov     [rsi+938h], r13
 * 0000000140C6429F: mov     [rsi+918h], r8d
 * 0000000140C642A6: mov     ecx, [rsi+9D8h]
 * 0000000140C642AC: bt      ecx, 1Dh
 * 0000000140C642B0: jb      loc_140C643AD
 * 0000000140C642B6: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C642C0: jz      loc_140C643AD
 * 0000000140C642C6: test    r8b, cl
 * 0000000140C642C9: jz      loc_140C643AD
 * 0000000140C642CF: mov     ecx, [rsi+0A74h]
 * 0000000140C642D5: mov     eax, [rsi+804h]
 * 0000000140C642DB: mov     r10, [rsi+838h]
 * 0000000140C642E2: sub     eax, ecx
 * 0000000140C642E4: mov     r8, [rsi+0A78h]
 * 0000000140C642EB: lea     rdx, [rcx+rsi]
 * 0000000140C642EF: mov     ecx, eax
 * 0000000140C642F1: shr     rcx, 3
 * 0000000140C642F5: lea     r9, [rdx+rcx*8]
 * 0000000140C642F9: jmp     short loc_140C6434D
 * 0000000140C642FB: xor     r10d, r10d
 * 0000000140C642FE: mov     r11d, 1000h
 * 0000000140C64304: add     r14, r11
 * 0000000140C64307: add     r13, r11
 * 0000000140C6430A: cmp     r13, [rsp+8B0h+var_840]
 * 0000000140C6430F: jnz     loc_140C641DB
 * 0000000140C64315: movzx   eax, r12b
 * 0000000140C64319: mov     cr8, rax
 * 0000000140C6431D: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C64322: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C64327: jmp     loc_140C643B3
 * 0000000140C6432C: xor     [rdx], r8
 * 0000000140C6432F: mov     rax, [rdx]
 * 0000000140C64332: movzx   ecx, r8b
 * 0000000140C64336: xor     rax, r10
 * 0000000140C64339: and     ecx, 3Fh
 * 0000000140C6433C: ror     r8, cl
 * 0000000140C6433F: add     r8, rax
 * 0000000140C64342: xor     r8, 0F05h
 * 0000000140C64349: add     rdx, 8
 * 0000000140C6434D: cmp     rdx, r9
 * 0000000140C64350: jnz     short loc_140C6432C
 * 0000000140C64352: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6435A: cmp     r8, [rsi+0A80h]
 * 0000000140C64361: jz      short loc_140C643A5
 * 0000000140C64363: mov     rax, [rsi+588h]
 * 0000000140C6436A: mov     ecx, [rsi+804h]
 * 0000000140C64370: mov     [rax], rsi
 * 0000000140C64373: mov     [rax+10h], ecx
 * 0000000140C64376: xor     eax, eax
 * 0000000140C64378: mov     rcx, [rsi+0A80h]
 * 0000000140C6437F: cmp     [rsi+918h], eax
 * 0000000140C64385: jnz     short loc_140C64395
 * 0000000140C64387: mov     rax, [rsi+588h]
 * 0000000140C6438E: xor     rcx, r8
 * 0000000140C64391: mov     [rax+18h], rcx
 * 0000000140C64395: xor     edx, edx
 * 0000000140C64397: mov     r9d, 100h
 * 0000000140C6439D: mov     rcx, rsi
 * 0000000140C643A0: call    sub_140C7903C
 * 0000000140C643A5: xor     r10d, r10d
 * 0000000140C643A8: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C643AD: mov     r11d, 1000h
 * 0000000140C643B3: add     r15, 10h
 * 0000000140C643B7: cmp     r15, r12
 * 0000000140C643BA: jnb     short loc_140C643D1
 * 0000000140C643BC: mov     eax, [rsi+84Ch]
 * 0000000140C643C2: cmp     [rsi+848h], eax
 * 0000000140C643C8: jl      loc_140C6405A
 * 0000000140C643CE: cmp     r15, r12
 * 0000000140C643D1: mov     ecx, 844h
 * 0000000140C643D6: jnz     short loc_140C643DD
 * 0000000140C643D8: mov     r15d, r10d
 * 0000000140C643DB: jmp     short loc_140C643E8
 * 0000000140C643DD: lea     rax, [rdx+30h]
 * 0000000140C643E1: sub     r15, rax
 * 0000000140C643E4: sar     r15, 4
 * 0000000140C643E8: mov     rax, rsi
 * 0000000140C643EB: mov     [rax+rcx], r15d
 * 0000000140C643EF: xor     r12d, r12d
 * 0000000140C643F2: jmp     loc_140C71101
 * 0000000140C643F7: mov     rbx, [r13+18h]
 * 0000000140C643FB: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140C64405: mov     rdx, [rsi+700h]
 * 0000000140C6440C: mov     rcx, [rsi+730h]
 * 0000000140C64413: add     rdx, rbx
 * 0000000140C64416: movzx   eax, word ptr [r13+22h]
 * 0000000140C6441B: cmp     [rdx+rcx], ax
 * 0000000140C6441F: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140C64429: jz      loc_140C6454C
 * 0000000140C6442F: cmp     [rsi+918h], r12d
 * 0000000140C64436: jnz     loc_140C6454C
 * 0000000140C6443C: lea     rax, [rsi+r8]
 * 0000000140C64440: mov     [rsi+920h], rax
 * 0000000140C64447: lea     rax, [rdx+r13]
 * 0000000140C6444B: mov     [rsi+928h], rax
 * 0000000140C64452: movsxd  rax, dword ptr [r13+0]
 * 0000000140C64456: mov     [rsi+930h], rax
 * 0000000140C6445D: mov     [rsi+938h], rbx
 * 0000000140C64464: mov     [rsi+918h], r15d
 * 0000000140C6446B: mov     ecx, [rsi+9D8h]
 * 0000000140C64471: bt      ecx, 1Dh
 * 0000000140C64475: jb      loc_140C6454C
 * 0000000140C6447B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C64485: jz      loc_140C6454C
 * 0000000140C6448B: test    r15b, cl
 * 0000000140C6448E: jz      loc_140C6454C
 * 0000000140C64494: mov     ecx, [rsi+0A74h]
 * 0000000140C6449A: mov     eax, [rsi+804h]
 * 0000000140C644A0: mov     r10, [rsi+838h]
 * 0000000140C644A7: sub     eax, ecx
 * 0000000140C644A9: mov     r8, [rsi+0A78h]
 * 0000000140C644B0: lea     rdx, [rcx+rsi]
 * 0000000140C644B4: mov     ecx, eax
 * 0000000140C644B6: shr     rcx, 3
 * 0000000140C644BA: lea     r9, [rdx+rcx*8]
 * 0000000140C644BE: jmp     short loc_140C644E1
 * 0000000140C644C0: xor     [rdx], r8
 * 0000000140C644C3: mov     rax, [rdx]
 * 0000000140C644C6: movzx   ecx, r8b
 * 0000000140C644CA: xor     rax, r10
 * 0000000140C644CD: and     ecx, 3Fh
 * 0000000140C644D0: ror     r8, cl
 * 0000000140C644D3: add     r8, rax
 * 0000000140C644D6: xor     r8, 0F05h
 * 0000000140C644DD: add     rdx, 8
 * 0000000140C644E1: cmp     rdx, r9
 * 0000000140C644E4: jnz     short loc_140C644C0
 * 0000000140C644E6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C644EE: cmp     r8, [rsi+0A80h]
 * 0000000140C644F5: jz      short loc_140C64538
 * 0000000140C644F7: mov     ecx, [rsi+804h]
 * 0000000140C644FD: mov     rax, [rsi+588h]
 * 0000000140C64504: mov     [rax], rsi
 * 0000000140C64507: mov     [rax+10h], ecx
 * 0000000140C6450A: mov     rcx, [rsi+0A80h]
 * 0000000140C64511: cmp     [rsi+918h], r12d
 * 0000000140C64518: jnz     short loc_140C64528
 * 0000000140C6451A: mov     rax, [rsi+588h]
 * 0000000140C64521: xor     rcx, r8
 * 0000000140C64524: mov     [rax+18h], rcx
 * 0000000140C64528: xor     edx, edx
 * 0000000140C6452A: mov     r9d, 100h
 * 0000000140C64530: mov     rcx, rsi
 * 0000000140C64533: call    sub_140C7903C
 * 0000000140C64538: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140C64542: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140C6454C: movzx   eax, word ptr [r13+22h]
 * 0000000140C64551: test    [rsi+738h], ax
 * 0000000140C64558: jnz     loc_140C6467A
 * 0000000140C6455E: mov     rcx, [rsi+708h]
 * 0000000140C64565: add     rcx, rbx
 * 0000000140C64568: cmp     [rcx], rcx
 * 0000000140C6456B: jz      loc_140C6467A
 * 0000000140C64571: cmp     [rsi+918h], r12d
 * 0000000140C64578: jnz     loc_140C6467A
 * 0000000140C6457E: lea     rax, [rsi+r8]
 * 0000000140C64582: mov     [rsi+920h], rax
 * 0000000140C64589: lea     rax, [rdx+r13]
 * 0000000140C6458D: mov     [rsi+928h], rax
 * 0000000140C64594: movsxd  rax, dword ptr [r13+0]
 * 0000000140C64598: mov     [rsi+930h], rax
 * 0000000140C6459F: mov     [rsi+938h], rbx
 * 0000000140C645A6: mov     [rsi+918h], r15d
 * 0000000140C645AD: mov     ecx, [rsi+9D8h]
 * 0000000140C645B3: bt      ecx, 1Dh
 * 0000000140C645B7: jb      loc_140C6467A
 * 0000000140C645BD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C645C7: jz      loc_140C6467A
 * 0000000140C645CD: test    r15b, cl
 * 0000000140C645D0: jz      loc_140C6467A
 * 0000000140C645D6: mov     ecx, [rsi+0A74h]
 * 0000000140C645DC: mov     eax, [rsi+804h]
 * 0000000140C645E2: mov     r10, [rsi+838h]
 * 0000000140C645E9: sub     eax, ecx
 * 0000000140C645EB: mov     r8, [rsi+0A78h]
 * 0000000140C645F2: lea     rdx, [rcx+rsi]
 * 0000000140C645F6: mov     ecx, eax
 * 0000000140C645F8: shr     rcx, 3
 * 0000000140C645FC: lea     r9, [rdx+rcx*8]
 * 0000000140C64600: jmp     short loc_140C64623
 * 0000000140C64602: xor     [rdx], r8
 * 0000000140C64605: mov     rax, [rdx]
 * 0000000140C64608: movzx   ecx, r8b
 * 0000000140C6460C: xor     rax, r10
 * 0000000140C6460F: and     ecx, 3Fh
 * 0000000140C64612: ror     r8, cl
 * 0000000140C64615: add     r8, rax
 * 0000000140C64618: xor     r8, 0F05h
 * 0000000140C6461F: add     rdx, 8
 * 0000000140C64623: cmp     rdx, r9
 * 0000000140C64626: jnz     short loc_140C64602
 * 0000000140C64628: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C64630: cmp     r8, [rsi+0A80h]
 * 0000000140C64637: jz      short loc_140C6467A
 * 0000000140C64639: mov     ecx, [rsi+804h]
 * 0000000140C6463F: mov     rax, [rsi+588h]
 * 0000000140C64646: mov     [rax], rsi
 * 0000000140C64649: mov     [rax+10h], ecx
 * 0000000140C6464C: mov     rcx, [rsi+0A80h]
 * 0000000140C64653: cmp     [rsi+918h], r12d
 * 0000000140C6465A: jnz     short loc_140C6466A
 * 0000000140C6465C: mov     rax, [rsi+588h]
 * 0000000140C64663: xor     rcx, r8
 * 0000000140C64666: mov     [rax+18h], rcx
 * 0000000140C6466A: xor     edx, edx
 * 0000000140C6466C: mov     r9d, 100h
 * 0000000140C64672: mov     rcx, rsi
 * 0000000140C64675: call    sub_140C7903C
 * 0000000140C6467A: mov     r14, [r13+8]
 * 0000000140C6467E: mov     r8d, [r13+10h]
 * 0000000140C64682: mov     r9, r14
 * 0000000140C64685: add     [rsi+848h], r8d
 * 0000000140C6468C: mov     rax, r14
 * 0000000140C6468F: mov     r10d, [rsi+834h]
 * 0000000140C64696: mov     r15, [rsi+838h]
 * 0000000140C6469D: lea     rcx, [r14+r8]
 * 0000000140C646A1: cmp     r14, rcx
 * 0000000140C646A4: jnb     short loc_140C646B6
 * 0000000140C646A6: mov     edx, 40h ; '@'
 * 0000000140C646AB: prefetchnta byte ptr [rax]
 * 0000000140C646AE: add     rax, rdx
 * 0000000140C646B1: cmp     rax, rcx
 * 0000000140C646B4: jb      short loc_140C646AB
 * 0000000140C646B6: mov     r11d, r8d
 * 0000000140C646B9: mov     rbx, r15
 * 0000000140C646BC: shr     r11d, 7
 * 0000000140C646C0: mov     edx, 1
 * 0000000140C646C5: test    r11d, r11d
 * 0000000140C646C8: jz      short loc_140C64737
 * 0000000140C646CA: mov     edi, 0FFFFFFFFh
 * 0000000140C646CF: mov     rsi, 7010008004002001h
 * 0000000140C646D9: mov     eax, 8
 * 0000000140C646DE: xor     rbx, [r9]
 * 0000000140C646E1: mov     ecx, r10d
 * 0000000140C646E4: rol     rbx, cl
 * 0000000140C646E7: xor     rbx, [r9+8]
 * 0000000140C646EB: add     r9, 10h
 * 0000000140C646EF: rol     rbx, cl
 * 0000000140C646F2: sub     rax, rdx
 * 0000000140C646F5: jnz     short loc_140C646DE
 * 0000000140C646F7: mov     rcx, r9
 * 0000000140C646FA: sub     rcx, r14
 * 0000000140C646FD: xor     rcx, r15
 * 0000000140C64700: mov     rax, rcx
 * 0000000140C64703: rol     rax, 11h
 * 0000000140C64707: xor     rcx, rax
 * 0000000140C6470A: mov     rax, rsi
 * 0000000140C6470D: mul     rcx
 * 0000000140C64710: mov     [rbp+7B0h+var_370], rdx
 * 0000000140C64717: xor     rdx, rax
 * 0000000140C6471A: xor     r10d, edx
 * 0000000140C6471D: mov     edx, 1
 * 0000000140C64722: and     r10d, 3Fh
 * 0000000140C64726: cmovz   r10d, edx
 * 0000000140C6472A: add     r11d, edi
 * 0000000140C6472D: jnz     short loc_140C646D9
 * 0000000140C6472F: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C64734: lea     edi, [rdx+1]
 * 0000000140C64737: and     r8d, 7Fh
 * 0000000140C6473B: cmp     r8d, 8
 * 0000000140C6473F: jb      short loc_140C6475E
 * 0000000140C64741: mov     eax, r8d
 * 0000000140C64744: shr     rax, 3
 * 0000000140C64748: xor     rbx, [r9]
 * 0000000140C6474B: mov     ecx, r10d
 * 0000000140C6474E: rol     rbx, cl
 * 0000000140C64751: add     r9, 8
 * 0000000140C64755: add     r8d, 0FFFFFFF8h
 * 0000000140C64759: sub     rax, rdx
 * 0000000140C6475C: jnz     short loc_140C64748
 * 0000000140C6475E: test    r8d, r8d
 * 0000000140C64761: jz      short loc_140C64781
 * 0000000140C64763: mov     edi, 0FFFFFFFFh
 * 0000000140C64768: movzx   eax, byte ptr [r9]
 * 0000000140C6476C: mov     ecx, r10d
 * 0000000140C6476F: xor     rbx, rax
 * 0000000140C64772: add     r9, rdx
 * 0000000140C64775: rol     rbx, cl
 * 0000000140C64778: add     r8d, edi
 * 0000000140C6477B: jnz     short loc_140C64768
 * 0000000140C6477D: lea     edi, [r8+2]
 * 0000000140C64781: mov     rax, rbx
 * 0000000140C64784: jmp     short loc_140C64788
 * 0000000140C64786: xor     ebx, eax
 * 0000000140C64788: shr     rax, 1Fh
 * 0000000140C6478C: test    rax, rax
 * 0000000140C6478F: jnz     short loc_140C64786
 * 0000000140C64791: btr     ebx, 1Fh
 * 0000000140C64795: cmp     ebx, [r13+14h]
 * 0000000140C64799: jz      loc_140C6485A
 * 0000000140C6479F: cmp     [r13+0], eax
 * 0000000140C647A3: jnz     short loc_140C647AD
 * 0000000140C647A5: cmp     [r13+18h], eax
 * 0000000140C647A9: cmovnz  r12d, edx
 * 0000000140C647AD: mov     ecx, [r13+10h]
 * 0000000140C647B1: mov     rdx, [r13+8]
 * 0000000140C647B5: test    rcx, rcx
 * 0000000140C647B8: jz      loc_140C64989
 * 0000000140C647BE: mov     eax, [rsi+9DCh]
 * 0000000140C647C4: mov     r8d, 40h ; '@'
 * 0000000140C647CA: test    r8b, al
 * 0000000140C647CD: jz      loc_140C64989
 * 0000000140C647D3: mov     r15, cr8
 * 0000000140C647D7: mov     r14, rdx
 * 0000000140C647DA: lea     rax, [rcx-1]
 * 0000000140C647DE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C647E5: add     rax, rdx
 * 0000000140C647E8: or      rax, 0FFFh
 * 0000000140C647EE: mov     [rsp+8B0h+var_858], rax
 * 0000000140C647F3: lea     r13, [r14-1]
 * 0000000140C647F7: mov     cr8, rdi
 * 0000000140C647FB: mov     rax, [rsi+468h]
 * 0000000140C64802: xor     edx, edx
 * 0000000140C64804: mov     rcx, r14
 * 0000000140C64807: call    KeGuardDispatchICall
 * 0000000140C6480C: cmp     eax, 0C000022Dh
 * 0000000140C64811: jnz     short loc_140C64833
 * 0000000140C64813: test    r12d, r12d
 * 0000000140C64816: jnz     loc_140C6497C
 * 0000000140C6481C: lea     eax, [r12+1]
 * 0000000140C64821: cmp     r15b, al
 * 0000000140C64824: ja      short loc_140C6483B
 * 0000000140C64826: movzx   eax, r15b
 * 0000000140C6482A: mov     cr8, rax
 * 0000000140C6482E: mov     al, [r14]
 * 0000000140C64831: jmp     short loc_140C647F7
 * 0000000140C64833: test    eax, eax
 * 0000000140C64835: js      loc_140C6497C
 * 0000000140C6483B: mov     eax, 1000h
 * 0000000140C64840: add     r14, rax
 * 0000000140C64843: add     r13, rax
 * 0000000140C64846: cmp     r13, [rsp+8B0h+var_858]
 * 0000000140C6484B: jnz     short loc_140C647FB
 * 0000000140C6484D: movzx   eax, r15b
 * 0000000140C64851: mov     cr8, rax
 * 0000000140C64855: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6485A: xor     r12d, r12d
 * 0000000140C6485D: mov     ebx, 1
 * 0000000140C64862: mov     r14, 0B3B74BDEE4453415h
 * 0000000140C6486C: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140C64876: lea     rax, [r13+30h]
 * 0000000140C6487A: xor     r9d, r9d
 * 0000000140C6487D: mov     [rbp+7B0h+var_588], rax
 * 0000000140C64884: lea     rcx, [rbp+7B0h+var_590]
 * 0000000140C6488B: movzx   eax, word ptr [r13+20h]
 * 0000000140C64890: xor     r8d, r8d
 * 0000000140C64893: mov     [rbp+7B0h+var_590], ax
 * 0000000140C6489A: xor     edx, edx
 * 0000000140C6489C: mov     [rbp+7B0h+var_58E], ax
 * 0000000140C648A3: lea     rax, [rbp+7B0h+var_6C8]
 * 0000000140C648AA: mov     [rsp+8B0h+var_878], rax
 * 0000000140C648AF: mov     rax, [rsi+500h]
 * 0000000140C648B6: mov     [rsp+8B0h+var_880], r12
 * 0000000140C648BB: mov     byte ptr [rsp+8B0h+var_888], r12b
 * 0000000140C648C0: mov     [rsp+8B0h+BugCheckParameter4], rax
 * 0000000140C648C5: mov     rax, [rsi+1F8h]
 * 0000000140C648CC: call    KeGuardDispatchICall
 * 0000000140C648D1: test    eax, eax
 * 0000000140C648D3: js      loc_140C710FB
 * 0000000140C648D9: mov     rcx, [rbp+7B0h+var_6C8]
 * 0000000140C648E0: cmp     rcx, [r13+18h]
 * 0000000140C648E4: jz      loc_140C64B55
 * 0000000140C648EA: cmp     [rsi+918h], r12d
 * 0000000140C648F1: jnz     loc_140C64B55
 * 0000000140C648F7: lea     rax, [rsi+r15]
 * 0000000140C648FB: mov     [rsi+920h], rax
 * 0000000140C64902: lea     rax, [r14+r13]
 * 0000000140C64906: mov     [rsi+928h], rax
 * 0000000140C6490D: movsxd  rax, dword ptr [r13+0]
 * 0000000140C64911: mov     [rsi+930h], rax
 * 0000000140C64918: mov     [rsi+938h], rcx
 * 0000000140C6491F: mov     [rsi+918h], ebx
 * 0000000140C64925: mov     ecx, [rsi+9D8h]
 * 0000000140C6492B: bt      ecx, 1Dh
 * 0000000140C6492F: jb      loc_140C64B4E
 * 0000000140C64935: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6493F: jz      loc_140C64B4E
 * 0000000140C64945: test    bl, cl
 * 0000000140C64947: jz      loc_140C64B4E
 * 0000000140C6494D: mov     ecx, [rsi+0A74h]
 * 0000000140C64953: mov     eax, [rsi+804h]
 * 0000000140C64959: mov     r10, [rsi+838h]
 * 0000000140C64960: sub     eax, ecx
 * 0000000140C64962: mov     r8, [rsi+0A78h]
 * 0000000140C64969: lea     rdx, [rcx+rsi]
 * 0000000140C6496D: mov     ecx, eax
 * 0000000140C6496F: shr     rcx, 3
 * 0000000140C64973: lea     r9, [rdx+rcx*8]
 * 0000000140C64977: jmp     loc_140C64AF7
 * 0000000140C6497C: movzx   eax, r15b
 * 0000000140C64980: mov     cr8, rax
 * 0000000140C64984: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C64989: mov     eax, [r13+14h]
 * 0000000140C6498D: xor     r12d, r12d
 * 0000000140C64990: cmp     [rsi+918h], r12d
 * 0000000140C64997: jnz     short loc_140C649A9
 * 0000000140C64999: mov     ecx, ebx
 * 0000000140C6499B: xor     rcx, rax
 * 0000000140C6499E: mov     rax, [rsi+588h]
 * 0000000140C649A5: mov     [rax+18h], rcx
 * 0000000140C649A9: mov     rcx, [r13+8]
 * 0000000140C649AD: cmp     [rsi+918h], r12d
 * 0000000140C649B4: jnz     loc_140C6485D
 * 0000000140C649BA: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140C649C4: mov     r14, 0B3B74BDEE4453415h
 * 0000000140C649CE: mov     ebx, 1
 * 0000000140C649D3: lea     rax, [rsi+r15]
 * 0000000140C649D7: mov     [rsi+920h], rax
 * 0000000140C649DE: lea     rax, [r14+r13]
 * 0000000140C649E2: mov     [rsi+928h], rax
 * 0000000140C649E9: movsxd  rax, dword ptr [r13+0]
 * 0000000140C649ED: mov     [rsi+930h], rax
 * 0000000140C649F4: mov     [rsi+938h], rcx
 * 0000000140C649FB: mov     [rsi+918h], ebx
 * 0000000140C64A01: mov     ecx, [rsi+9D8h]
 * 0000000140C64A07: bt      ecx, 1Dh
 * 0000000140C64A0B: jb      loc_140C64876
 * 0000000140C64A11: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C64A1B: jz      loc_140C64876
 * 0000000140C64A21: test    bl, cl
 * 0000000140C64A23: jz      loc_140C64876
 * 0000000140C64A29: mov     ecx, [rsi+0A74h]
 * 0000000140C64A2F: mov     eax, [rsi+804h]
 * 0000000140C64A35: mov     r10, [rsi+838h]
 * 0000000140C64A3C: sub     eax, ecx
 * 0000000140C64A3E: mov     r8, [rsi+0A78h]
 * 0000000140C64A45: lea     rdx, [rcx+rsi]
 * 0000000140C64A49: mov     ecx, eax
 * 0000000140C64A4B: shr     rcx, 3
 * 0000000140C64A4F: lea     r9, [rdx+rcx*8]
 * 0000000140C64A53: jmp     short loc_140C64A76
 * 0000000140C64A55: xor     [rdx], r8
 * 0000000140C64A58: mov     rax, [rdx]
 * 0000000140C64A5B: movzx   ecx, r8b
 * 0000000140C64A5F: xor     rax, r10
 * 0000000140C64A62: and     ecx, 3Fh
 * 0000000140C64A65: ror     r8, cl
 * 0000000140C64A68: add     r8, rax
 * 0000000140C64A6B: xor     r8, 0F05h
 * 0000000140C64A72: add     rdx, 8
 * 0000000140C64A76: cmp     rdx, r9
 * 0000000140C64A79: jnz     short loc_140C64A55
 * 0000000140C64A7B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C64A83: cmp     r8, [rsi+0A80h]
 * 0000000140C64A8A: jz      loc_140C64876
 * 0000000140C64A90: mov     ecx, [rsi+804h]
 * 0000000140C64A96: mov     rax, [rsi+588h]
 * 0000000140C64A9D: mov     [rax], rsi
 * 0000000140C64AA0: mov     [rax+10h], ecx
 * 0000000140C64AA3: mov     rcx, [rsi+0A80h]
 * 0000000140C64AAA: cmp     [rsi+918h], r12d
 * 0000000140C64AB1: jnz     short loc_140C64AC1
 * 0000000140C64AB3: mov     rax, [rsi+588h]
 * 0000000140C64ABA: xor     rcx, r8
 * 0000000140C64ABD: mov     [rax+18h], rcx
 * 0000000140C64AC1: xor     edx, edx
 * 0000000140C64AC3: mov     r9d, 100h
 * 0000000140C64AC9: mov     rcx, rsi
 * 0000000140C64ACC: call    sub_140C7903C
 * 0000000140C64AD1: jmp     loc_140C64876
 * 0000000140C64AD6: xor     [rdx], r8
 * 0000000140C64AD9: mov     rax, [rdx]
 * 0000000140C64ADC: movzx   ecx, r8b
 * 0000000140C64AE0: xor     rax, r10
 * 0000000140C64AE3: and     ecx, 3Fh
 * 0000000140C64AE6: ror     r8, cl
 * 0000000140C64AE9: add     r8, rax
 * 0000000140C64AEC: xor     r8, 0F05h
 * 0000000140C64AF3: add     rdx, 8
 * 0000000140C64AF7: cmp     rdx, r9
 * 0000000140C64AFA: jnz     short loc_140C64AD6
 * 0000000140C64AFC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C64B04: cmp     r8, [rsi+0A80h]
 * 0000000140C64B0B: jz      short loc_140C64B4E
 * 0000000140C64B0D: mov     ecx, [rsi+804h]
 * 0000000140C64B13: mov     rax, [rsi+588h]
 * 0000000140C64B1A: mov     [rax], rsi
 * 0000000140C64B1D: mov     [rax+10h], ecx
 * 0000000140C64B20: mov     rcx, [rsi+0A80h]
 * 0000000140C64B27: cmp     [rsi+918h], r12d
 * 0000000140C64B2E: jnz     short loc_140C64B3E
 * 0000000140C64B30: mov     rax, [rsi+588h]
 * 0000000140C64B37: xor     rcx, r8
 * 0000000140C64B3A: mov     [rax+18h], rcx
 * 0000000140C64B3E: xor     edx, edx
 * 0000000140C64B40: mov     r9d, 100h
 * 0000000140C64B46: mov     rcx, rsi
 * 0000000140C64B49: call    sub_140C7903C
 * 0000000140C64B4E: mov     rcx, [rbp+7B0h+var_6C8]
 * 0000000140C64B55: mov     rax, [rsi+1F0h]
 * 0000000140C64B5C: call    KeGuardDispatchICall
 * 0000000140C64B61: jmp     loc_140C710FB
 * 0000000140C64B66: mov     rax, [rsi+1B0h]
 * 0000000140C64B6D: lea     rcx, [rbp+7B0h+var_308]
 * 0000000140C64B74: mov     edx, [r13+1Ch]
 * 0000000140C64B78: call    KeGuardDispatchICall
 * 0000000140C64B7D: mov     rax, [rsi+1E0h]
 * 0000000140C64B84: lea     rdx, [rbp+7B0h+var_2F8]
 * 0000000140C64B8B: lea     rcx, [rbp+7B0h+var_308]
 * 0000000140C64B92: call    KeGuardDispatchICall
 * 0000000140C64B97: mov     ebx, r12d
 * 0000000140C64B9A: cmp     [r13+18h], r12d
 * 0000000140C64B9E: jbe     loc_140C64D6B
 * 0000000140C64BA4: mov     eax, ebx
 * 0000000140C64BA6: lea     r8, [rax+rax*2]
 * 0000000140C64BAA: mov     r9d, [r13+r8*8+40h]
 * 0000000140C64BAF: test    [rsi+89Bh], dil
 * 0000000140C64BB6: jz      short loc_140C64BDB
 * 0000000140C64BB8: mov     eax, 0C0000082h
 * 0000000140C64BBD: cmp     r9d, eax
 * 0000000140C64BC0: jnz     short loc_140C64BDB
 * 0000000140C64BC2: mov     eax, gs:1A4h
 * 0000000140C64BCA: cmp     eax, [rsi+910h]
 * 0000000140C64BD0: jnz     short loc_140C64BDB
 * 0000000140C64BD2: mov     rdx, [rsi+908h]
 * 0000000140C64BD9: jmp     short loc_140C64BE7
 * 0000000140C64BDB: mov     ecx, r9d
 * 0000000140C64BDE: rdmsr
 * 0000000140C64BE0: shl     rdx, 20h
 * 0000000140C64BE4: or      rdx, rax
 * 0000000140C64BE7: mov     rcx, [r13+r8*8+30h]
 * 0000000140C64BEC: mov     r8, [r13+r8*8+38h]
 * 0000000140C64BF1: and     rdx, rcx
 * 0000000140C64BF4: cmp     rdx, r8
 * 0000000140C64BF7: jz      loc_140C64D40
 * 0000000140C64BFD: mov     ecx, [r13+1Ch]
 * 0000000140C64C01: shl     rcx, 20h
 * 0000000140C64C05: or      rcx, r9
 * 0000000140C64C08: cmp     [rsi+918h], r12d
 * 0000000140C64C0F: jnz     loc_140C64D5E
 * 0000000140C64C15: mov     rax, [rsi+588h]
 * 0000000140C64C1C: xor     r8, rdx
 * 0000000140C64C1F: mov     [rax+18h], r8
 * 0000000140C64C23: cmp     [rsi+918h], r12d
 * 0000000140C64C2A: jnz     loc_140C64D5E
 * 0000000140C64C30: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C64C3A: add     rax, rsi
 * 0000000140C64C3D: mov     [rsi+920h], rax
 * 0000000140C64C44: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C64C4E: add     rax, r13
 * 0000000140C64C51: mov     [rsi+928h], rax
 * 0000000140C64C58: movsxd  rax, dword ptr [r13+0]
 * 0000000140C64C5C: mov     [rsi+930h], rax
 * 0000000140C64C63: mov     [rsi+938h], rcx
 * 0000000140C64C6A: mov     [rsi+918h], r15d
 * 0000000140C64C71: mov     ecx, [rsi+9D8h]
 * 0000000140C64C77: bt      ecx, 1Dh
 * 0000000140C64C7B: jb      loc_140C64D5E
 * 0000000140C64C81: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C64C8B: jz      loc_140C64D5E
 * 0000000140C64C91: test    r15b, cl
 * 0000000140C64C94: jz      loc_140C64D5E
 * 0000000140C64C9A: mov     ecx, [rsi+0A74h]
 * 0000000140C64CA0: mov     eax, [rsi+804h]
 * 0000000140C64CA6: mov     r10, [rsi+838h]
 * 0000000140C64CAD: sub     eax, ecx
 * 0000000140C64CAF: mov     r8, [rsi+0A78h]
 * 0000000140C64CB6: lea     rdx, [rcx+rsi]
 * 0000000140C64CBA: mov     ecx, eax
 * 0000000140C64CBC: shr     rcx, 3
 * 0000000140C64CC0: lea     r9, [rdx+rcx*8]
 * 0000000140C64CC4: jmp     short loc_140C64CE7
 * 0000000140C64CC6: xor     [rdx], r8
 * 0000000140C64CC9: mov     rax, [rdx]
 * 0000000140C64CCC: movzx   ecx, r8b
 * 0000000140C64CD0: xor     rax, r10
 * 0000000140C64CD3: and     ecx, 3Fh
 * 0000000140C64CD6: ror     r8, cl
 * 0000000140C64CD9: add     r8, rax
 * 0000000140C64CDC: xor     r8, 0F05h
 * 0000000140C64CE3: add     rdx, 8
 * 0000000140C64CE7: cmp     rdx, r9
 * 0000000140C64CEA: jnz     short loc_140C64CC6
 * 0000000140C64CEC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C64CF4: cmp     r8, [rsi+0A80h]
 * 0000000140C64CFB: jz      short loc_140C64D5E
 * 0000000140C64CFD: mov     ecx, [rsi+804h]
 * 0000000140C64D03: mov     rax, [rsi+588h]
 * 0000000140C64D0A: mov     [rax], rsi
 * 0000000140C64D0D: mov     [rax+10h], ecx
 * 0000000140C64D10: mov     rcx, [rsi+0A80h]
 * 0000000140C64D17: cmp     [rsi+918h], r12d
 * 0000000140C64D1E: jnz     short loc_140C64D2E
 * 0000000140C64D20: mov     rax, [rsi+588h]
 * 0000000140C64D27: xor     rcx, r8
 * 0000000140C64D2A: mov     [rax+18h], rcx
 * 0000000140C64D2E: xor     edx, edx
 * 0000000140C64D30: mov     r9d, 100h
 * 0000000140C64D36: mov     rcx, rsi
 * 0000000140C64D39: call    sub_140C7903C
 * 0000000140C64D3E: jmp     short loc_140C64D5E
 * 0000000140C64D40: test    dword ptr [rsi+9DCh], 200h
 * 0000000140C64D4A: jz      short loc_140C64D5E
 * 0000000140C64D4C: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 0000000140C64D50: jnz     short loc_140C64D5E
 * 0000000140C64D52: mov     rax, rdx
 * 0000000140C64D55: mov     ecx, r9d
 * 0000000140C64D58: shr     rdx, 20h
 * 0000000140C64D5C: wrmsr
 * 0000000140C64D5E: add     ebx, r15d
 * 0000000140C64D61: cmp     ebx, [r13+18h]
 * 0000000140C64D65: jb      loc_140C64BA4
 * 0000000140C64D6B: mov     rax, [rsi+1A8h]
 * 0000000140C64D72: lea     rcx, [rbp+7B0h+var_2F8]
 * 0000000140C64D79: call    KeGuardDispatchICall
 * 0000000140C64D7E: mov     eax, [r13+18h]
 * 0000000140C64D82: shl     eax, 0Fh
 * 0000000140C64D85: jmp     loc_140C6E6DB
 * 0000000140C64D8A: mov     ecx, [rsi+850h]
 * 0000000140C64D90: test    r15b, cl
 * 0000000140C64D93: jz      loc_140C713A3
 * 0000000140C64D99: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C64DA3: jnz     short loc_140C64DBB
 * 0000000140C64DA5: mov     r14d, r12d
 * 0000000140C64DA8: and     ecx, 3
 * 0000000140C64DAB: cmp     cl, 3
 * 0000000140C64DAE: setz    r14b
 * 0000000140C64DB2: mov     dword ptr [rbp+7B0h+arg_8], r14d
 * 0000000140C64DB9: jmp     short loc_140C64E0B
 * 0000000140C64DBB: rdtsc
 * 0000000140C64DBD: shl     rdx, 20h
 * 0000000140C64DC1: or      rax, rdx
 * 0000000140C64DC4: mov     rcx, rax
 * 0000000140C64DC7: ror     rcx, 3
 * 0000000140C64DCB: xor     rcx, rax
 * 0000000140C64DCE: mov     rax, 7010008004002001h
 * 0000000140C64DD8: mul     rcx
 * 0000000140C64DDB: mov     rcx, rdx
 * 0000000140C64DDE: mov     [rbp+7B0h+var_390], rdx
 * 0000000140C64DE5: xor     rcx, rax
 * 0000000140C64DE8: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C64DF2: mul     rcx
 * 0000000140C64DF5: shr     rdx, 1
 * 0000000140C64DF8: lea     rax, [rdx+rdx*2]
 * 0000000140C64DFC: mov     edx, r12d
 * 0000000140C64DFF: cmp     rcx, rax
 * 0000000140C64E02: setz    dl
 * 0000000140C64E05: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C64E0B: mov     rax, [rsi+188h]
 * 0000000140C64E12: mov     r13d, r12d
 * 0000000140C64E15: mov     rbx, [rsi+540h]
 * 0000000140C64E1C: mov     [rbp+7B0h+var_830], r12d
 * 0000000140C64E20: call    KeGuardDispatchICall
 * 0000000140C64E25: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C64E2F: jnz     short loc_140C64E44
 * 0000000140C64E31: mov     ecx, [rsi+978h]
 * 0000000140C64E37: cmp     ecx, 7
 * 0000000140C64E3A: jnb     short loc_140C64E44
 * 0000000140C64E3C: mov     r14d, r15d
 * 0000000140C64E3F: shl     r14b, cl
 * 0000000140C64E42: jmp     short loc_140C64E5C
 * 0000000140C64E44: mov     rax, [rsi+138h]
 * 0000000140C64E4B: xor     edx, edx
 * 0000000140C64E4D: mov     rcx, [rsi+0A48h]
 * 0000000140C64E54: call    KeGuardDispatchICall
 * 0000000140C64E59: mov     r14b, 80h
 * 0000000140C64E5C: mov     rax, [rsi+148h]
 * 0000000140C64E63: xor     edx, edx
 * 0000000140C64E65: mov     rcx, rbx
 * 0000000140C64E68: call    KeGuardDispatchICall
 * 0000000140C64E6D: mov     r8, [rsi+518h]
 * 0000000140C64E74: mov     rdx, [r8]
 * 0000000140C64E77: cmp     rdx, r8
 * 0000000140C64E7A: jz      short loc_140C64EA1
 * 0000000140C64E7C: mov     rax, [rsi+6C8h]
 * 0000000140C64E83: mov     rcx, rdx
 * 0000000140C64E86: sub     rcx, [rsi+6E0h]
 * 0000000140C64E8D: lock or [rcx+rax], r14b
 * 0000000140C64E92: mov     rdx, [rdx]
 * 0000000140C64E95: add     r13d, r15d
 * 0000000140C64E98: cmp     rdx, r8
 * 0000000140C64E9B: jnz     short loc_140C64E7C
 * 0000000140C64E9D: mov     [rbp+7B0h+var_830], r13d
 * 0000000140C64EA1: mov     rax, [rsi+548h]
 * 0000000140C64EA8: mov     r15d, 4
 * 0000000140C64EAE: mov     r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C64EB5: mov     rdi, [rax]
 * 0000000140C64EB8: mov     rax, [rsi+740h]
 * 0000000140C64EBF: mov     ebx, [rax+rdi]
 * 0000000140C64EC2: mov     [rsp+8B0h+var_858], rbx
 * 0000000140C64EC7: mov     rax, [rsi+110h]
 * 0000000140C64ECE: mov     rdx, r15
 * 0000000140C64ED1: mov     rcx, rdi
 * 0000000140C64ED4: call    KeGuardDispatchICall
 * 0000000140C64ED9: mov     r12, rax
 * 0000000140C64EDC: test    rax, rax
 * 0000000140C64EDF: jz      loc_140C652CB
 * 0000000140C64EE5: mov     rax, [rsi+118h]
 * 0000000140C64EEC: mov     rcx, r12
 * 0000000140C64EEF: call    KeGuardDispatchICall
 * 0000000140C64EF4: mov     rbx, rax
 * 0000000140C64EF7: mov     al, [rax]
 * 0000000140C64EF9: and     al, 7Fh
 * 0000000140C64EFB: cmp     al, 3
 * 0000000140C64EFD: jnz     loc_140C65063
 * 0000000140C64F03: mov     rax, [rsi+6C8h]
 * 0000000140C64F0A: test    [rbx+rax], r14b
 * 0000000140C64F0E: jnz     loc_140C6504E
 * 0000000140C64F14: mov     rax, [rsi+6D0h]
 * 0000000140C64F1B: mov     ecx, [rbx+rax]
 * 0000000140C64F1E: test    [rsi+6E8h], ecx
 * 0000000140C64F24: jz      loc_140C6504E
 * 0000000140C64F2A: xor     r11d, r11d
 * 0000000140C64F2D: cmp     [rsi+918h], r11d
 * 0000000140C64F34: jnz     loc_140C6504E
 * 0000000140C64F3A: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C64F3F: lea     edx, [r11+1]
 * 0000000140C64F43: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C64F4D: add     rax, rsi
 * 0000000140C64F50: mov     [rsi+920h], rax
 * 0000000140C64F57: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C64F61: add     rax, rcx
 * 0000000140C64F64: mov     [rsi+928h], rax
 * 0000000140C64F6B: movsxd  rax, dword ptr [rcx]
 * 0000000140C64F6E: mov     [rsi+930h], rax
 * 0000000140C64F75: mov     [rsi+938h], rbx
 * 0000000140C64F7C: mov     [rsi+918h], edx
 * 0000000140C64F82: mov     ecx, [rsi+9D8h]
 * 0000000140C64F88: bt      ecx, 1Dh
 * 0000000140C64F8C: jb      loc_140C6504E
 * 0000000140C64F92: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C64F9C: jz      loc_140C6504E
 * 0000000140C64FA2: test    dl, cl
 * 0000000140C64FA4: jz      loc_140C6504E
 * 0000000140C64FAA: mov     ecx, [rsi+0A74h]
 * 0000000140C64FB0: mov     eax, [rsi+804h]
 * 0000000140C64FB6: mov     r10, [rsi+838h]
 * 0000000140C64FBD: sub     eax, ecx
 * 0000000140C64FBF: mov     r8, [rsi+0A78h]
 * 0000000140C64FC6: lea     rdx, [rcx+rsi]
 * 0000000140C64FCA: mov     ecx, eax
 * 0000000140C64FCC: shr     rcx, 3
 * 0000000140C64FD0: lea     r9, [rdx+rcx*8]
 * 0000000140C64FD4: jmp     short loc_140C64FF7
 * 0000000140C64FD6: xor     [rdx], r8
 * 0000000140C64FD9: mov     rax, [rdx]
 * 0000000140C64FDC: movzx   ecx, r8b
 * 0000000140C64FE0: xor     rax, r10
 * 0000000140C64FE3: and     ecx, 3Fh
 * 0000000140C64FE6: ror     r8, cl
 * 0000000140C64FE9: add     r8, rax
 * 0000000140C64FEC: xor     r8, 0F05h
 * 0000000140C64FF3: add     rdx, 8
 * 0000000140C64FF7: cmp     rdx, r9
 * 0000000140C64FFA: jnz     short loc_140C64FD6
 * 0000000140C64FFC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C65004: cmp     r8, [rsi+0A80h]
 * 0000000140C6500B: jz      short loc_140C6504E
 * 0000000140C6500D: mov     ecx, [rsi+804h]
 * 0000000140C65013: mov     rax, [rsi+588h]
 * 0000000140C6501A: mov     [rax], rsi
 * 0000000140C6501D: mov     [rax+10h], ecx
 * 0000000140C65020: mov     rcx, [rsi+0A80h]
 * 0000000140C65027: cmp     [rsi+918h], r11d
 * 0000000140C6502E: jnz     short loc_140C6503E
 * 0000000140C65030: mov     rax, [rsi+588h]
 * 0000000140C65037: xor     rcx, r8
 * 0000000140C6503A: mov     [rax+18h], rcx
 * 0000000140C6503E: xor     edx, edx
 * 0000000140C65040: mov     r9d, 100h
 * 0000000140C65046: mov     rcx, rsi
 * 0000000140C65049: call    sub_140C7903C
 * 0000000140C6504E: mov     rax, [rsi+6C8h]
 * 0000000140C65055: mov     cl, r14b
 * 0000000140C65058: not     cl
 * 0000000140C6505A: lock and [rbx+rax], cl
 * 0000000140C6505E: jmp     loc_140C652B4
 * 0000000140C65063: xor     r11d, r11d
 * 0000000140C65066: cmp     al, 6
 * 0000000140C65068: jnz     loc_140C6518A
 * 0000000140C6506E: test    r13d, r13d
 * 0000000140C65071: jz      loc_140C652B4
 * 0000000140C65077: mov     rcx, [rsi+690h]
 * 0000000140C6507E: mov     rax, [rbx+rcx+20h]
 * 0000000140C65083: cmp     rax, [rsi+328h]
 * 0000000140C6508A: jz      short loc_140C65095
 * 0000000140C6508C: cmp     rax, [rsi+330h]
 * 0000000140C65093: jnz     short loc_140C650B5
 * 0000000140C65095: mov     rax, [rsi+338h]
 * 0000000140C6509C: cmp     [rbx+rcx+30h], rax
 * 0000000140C650A1: jnz     short loc_140C650B5
 * 0000000140C650A3: mov     rax, [rsi+340h]
 * 0000000140C650AA: cmp     [rbx+rcx+28h], rax
 * 0000000140C650AF: jz      loc_140C652B4
 * 0000000140C650B5: cmp     [rsi+918h], r11d
 * 0000000140C650BC: jnz     loc_140C652B4
 * 0000000140C650C2: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C650C7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C650D1: add     rax, rsi
 * 0000000140C650D4: mov     [rsi+920h], rax
 * 0000000140C650DB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C650E5: add     rax, rcx
 * 0000000140C650E8: mov     [rsi+928h], rax
 * 0000000140C650EF: movsxd  rax, dword ptr [rcx]
 * 0000000140C650F2: mov     [rsi+930h], rax
 * 0000000140C650F9: mov     [rsi+938h], rbx
 * 0000000140C65100: mov     ebx, 1
 * 0000000140C65105: mov     [rsi+918h], ebx
 * 0000000140C6510B: mov     ecx, [rsi+9D8h]
 * 0000000140C65111: bt      ecx, 1Dh
 * 0000000140C65115: jb      loc_140C652B4
 * 0000000140C6511B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C65125: jz      loc_140C652B4
 * 0000000140C6512B: test    bl, cl
 * 0000000140C6512D: jz      loc_140C652B4
 * 0000000140C65133: mov     ecx, [rsi+0A74h]
 * 0000000140C65139: mov     eax, [rsi+804h]
 * 0000000140C6513F: mov     r10, [rsi+838h]
 * 0000000140C65146: sub     eax, ecx
 * 0000000140C65148: mov     r8, [rsi+0A78h]
 * 0000000140C6514F: lea     rdx, [rcx+rsi]
 * 0000000140C65153: mov     ecx, eax
 * 0000000140C65155: shr     rcx, 3
 * 0000000140C65159: lea     r9, [rdx+rcx*8]
 * 0000000140C6515D: jmp     short loc_140C65180
 * 0000000140C6515F: xor     [rdx], r8
 * 0000000140C65162: mov     rax, [rdx]
 * 0000000140C65165: movzx   ecx, r8b
 * 0000000140C65169: xor     rax, r10
 * 0000000140C6516C: and     ecx, 3Fh
 * 0000000140C6516F: ror     r8, cl
 * 0000000140C65172: add     r8, rax
 * 0000000140C65175: xor     r8, 0F05h
 * 0000000140C6517C: add     rdx, 8
 * 0000000140C65180: cmp     rdx, r9
 * 0000000140C65183: jnz     short loc_140C6515F
 * 0000000140C65185: jmp     loc_140C65262
 * 0000000140C6518A: test    al, al
 * 0000000140C6518C: jz      loc_140C652B4
 * 0000000140C65192: cmp     [rsi+918h], r11d
 * 0000000140C65199: jnz     loc_140C652B4
 * 0000000140C6519F: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C651A4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C651AE: add     rax, rsi
 * 0000000140C651B1: mov     [rsi+920h], rax
 * 0000000140C651B8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C651C2: add     rax, rcx
 * 0000000140C651C5: mov     [rsi+928h], rax
 * 0000000140C651CC: movsxd  rax, dword ptr [rcx]
 * 0000000140C651CF: mov     [rsi+930h], rax
 * 0000000140C651D6: mov     [rsi+938h], rbx
 * 0000000140C651DD: mov     ebx, 1
 * 0000000140C651E2: mov     [rsi+918h], ebx
 * 0000000140C651E8: mov     ecx, [rsi+9D8h]
 * 0000000140C651EE: bt      ecx, 1Dh
 * 0000000140C651F2: jb      loc_140C652B4
 * 0000000140C651F8: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C65202: jz      loc_140C652B4
 * 0000000140C65208: test    bl, cl
 * 0000000140C6520A: jz      loc_140C652B4
 * 0000000140C65210: mov     ecx, [rsi+0A74h]
 * 0000000140C65216: mov     eax, [rsi+804h]
 * 0000000140C6521C: mov     r10, [rsi+838h]
 * 0000000140C65223: sub     eax, ecx
 * 0000000140C65225: mov     r8, [rsi+0A78h]
 * 0000000140C6522C: lea     rdx, [rcx+rsi]
 * 0000000140C65230: mov     ecx, eax
 * 0000000140C65232: shr     rcx, 3
 * 0000000140C65236: lea     r9, [rdx+rcx*8]
 * 0000000140C6523A: jmp     short loc_140C6525D
 * 0000000140C6523C: xor     [rdx], r8
 * 0000000140C6523F: mov     rax, [rdx]
 * 0000000140C65242: movzx   ecx, r8b
 * 0000000140C65246: xor     rax, r10
 * 0000000140C65249: and     ecx, 3Fh
 * 0000000140C6524C: ror     r8, cl
 * 0000000140C6524F: add     r8, rax
 * 0000000140C65252: xor     r8, 0F05h
 * 0000000140C65259: add     rdx, 8
 * 0000000140C6525D: cmp     rdx, r9
 * 0000000140C65260: jnz     short loc_140C6523C
 * 0000000140C65262: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6526A: cmp     r8, [rsi+0A80h]
 * 0000000140C65271: jz      short loc_140C652B4
 * 0000000140C65273: mov     ecx, [rsi+804h]
 * 0000000140C65279: mov     rax, [rsi+588h]
 * 0000000140C65280: mov     [rax], rsi
 * 0000000140C65283: mov     [rax+10h], ecx
 * 0000000140C65286: mov     rcx, [rsi+0A80h]
 * 0000000140C6528D: cmp     [rsi+918h], r11d
 * 0000000140C65294: jnz     short loc_140C652A4
 * 0000000140C65296: mov     rax, [rsi+588h]
 * 0000000140C6529D: xor     rcx, r8
 * 0000000140C652A0: mov     [rax+18h], rcx
 * 0000000140C652A4: mov     r9d, 100h
 * 0000000140C652AA: xor     edx, edx
 * 0000000140C652AC: mov     rcx, rsi
 * 0000000140C652AF: call    sub_140C7903C
 * 0000000140C652B4: mov     rax, [rsi+130h]
 * 0000000140C652BB: mov     rdx, r12
 * 0000000140C652BE: mov     rcx, rdi
 * 0000000140C652C1: call    KeGuardDispatchICall
 * 0000000140C652C6: mov     rbx, [rsp+8B0h+var_858]
 * 0000000140C652CB: add     r15, 4
 * 0000000140C652CF: cmp     r15, rbx
 * 0000000140C652D2: jb      loc_140C64EC7
 * 0000000140C652D8: mov     r13d, [rbp+7B0h+var_830]
 * 0000000140C652DC: mov     edi, 2
 * 0000000140C652E1: cmp     r14b, 80h
 * 0000000140C652E5: jnz     short loc_140C652FC
 * 0000000140C652E7: mov     rax, [rsi+140h]
 * 0000000140C652EE: xor     edx, edx
 * 0000000140C652F0: mov     rcx, [rsi+0A48h]
 * 0000000140C652F7: call    KeGuardDispatchICall
 * 0000000140C652FC: mov     rcx, [rsi+540h]
 * 0000000140C65303: xor     edx, edx
 * 0000000140C65305: mov     rax, [rsi+150h]
 * 0000000140C6530C: call    KeGuardDispatchICall
 * 0000000140C65311: mov     rax, [rsi+190h]
 * 0000000140C65318: call    KeGuardDispatchICall
 * 0000000140C6531D: shr     rbx, 2
 * 0000000140C65321: add     r13d, ebx
 * 0000000140C65324: shl     r13d, 8
 * 0000000140C65328: add     [rsi+848h], r13d
 * 0000000140C6532F: xor     r12d, r12d
 * 0000000140C65332: jmp     loc_140C710FB
 * 0000000140C65337: mov     eax, [rsi+850h]
 * 0000000140C6533D: test    r15b, al
 * 0000000140C65340: jnz     loc_140C713A3
 * 0000000140C65346: mov     rax, [rsi+188h]
 * 0000000140C6534D: mov     r13d, r12d
 * 0000000140C65350: mov     rbx, [rsi+540h]
 * 0000000140C65357: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C6535C: call    KeGuardDispatchICall
 * 0000000140C65361: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6536B: jnz     short loc_140C6537D
 * 0000000140C6536D: mov     ecx, [rsi+978h]
 * 0000000140C65373: cmp     ecx, 7
 * 0000000140C65376: jnb     short loc_140C6537D
 * 0000000140C65378: shl     r15b, cl
 * 0000000140C6537B: jmp     short loc_140C65395
 * 0000000140C6537D: mov     rax, [rsi+138h]
 * 0000000140C65384: xor     edx, edx
 * 0000000140C65386: mov     rcx, [rsi+0A48h]
 * 0000000140C6538D: call    KeGuardDispatchICall
 * 0000000140C65392: mov     r15b, 80h
 * 0000000140C65395: mov     rax, [rsi+148h]
 * 0000000140C6539C: xor     edx, edx
 * 0000000140C6539E: mov     rcx, rbx
 * 0000000140C653A1: mov     [rbp+7B0h+var_830], r15d
 * 0000000140C653A5: call    KeGuardDispatchICall
 * 0000000140C653AA: mov     r12, [rsi+518h]
 * 0000000140C653B1: mov     r14, [r12]
 * 0000000140C653B5: cmp     r14, r12
 * 0000000140C653B8: jz      loc_140C6554C
 * 0000000140C653BE: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C653C3: mov     rbx, r14
 * 0000000140C653C6: sub     rbx, [rsi+6E0h]
 * 0000000140C653CD: cmp     r15b, 80h
 * 0000000140C653D1: jz      loc_140C65527
 * 0000000140C653D7: mov     rax, [rsi+6C8h]
 * 0000000140C653DE: test    [rbx+rax], r15b
 * 0000000140C653E2: jz      loc_140C65527
 * 0000000140C653E8: mov     rax, [rsi+6D0h]
 * 0000000140C653EF: mov     ecx, [rbx+rax]
 * 0000000140C653F2: test    [rsi+6E8h], ecx
 * 0000000140C653F8: jz      loc_140C65527
 * 0000000140C653FE: xor     r11d, r11d
 * 0000000140C65401: cmp     [rsi+918h], r11d
 * 0000000140C65408: jnz     loc_140C65527
 * 0000000140C6540E: lea     ecx, [r11+1]
 * 0000000140C65412: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6541C: add     rax, rsi
 * 0000000140C6541F: mov     [rsi+920h], rax
 * 0000000140C65426: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C65430: add     rax, rdi
 * 0000000140C65433: mov     [rsi+928h], rax
 * 0000000140C6543A: movsxd  rax, dword ptr [rdi]
 * 0000000140C6543D: mov     [rsi+930h], rax
 * 0000000140C65444: mov     rax, rbx
 * 0000000140C65447: or      rax, rcx
 * 0000000140C6544A: mov     [rsi+938h], rax
 * 0000000140C65451: mov     [rsi+918h], ecx
 * 0000000140C65457: mov     ecx, [rsi+9D8h]
 * 0000000140C6545D: bt      ecx, 1Dh
 * 0000000140C65461: jb      loc_140C65527
 * 0000000140C65467: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C65471: jz      loc_140C65527
 * 0000000140C65477: lea     eax, [r11+1]
 * 0000000140C6547B: test    al, cl
 * 0000000140C6547D: jz      loc_140C65527
 * 0000000140C65483: mov     ecx, [rsi+0A74h]
 * 0000000140C65489: mov     eax, [rsi+804h]
 * 0000000140C6548F: mov     r10, [rsi+838h]
 * 0000000140C65496: sub     eax, ecx
 * 0000000140C65498: mov     r8, [rsi+0A78h]
 * 0000000140C6549F: lea     rdx, [rcx+rsi]
 * 0000000140C654A3: mov     ecx, eax
 * 0000000140C654A5: shr     rcx, 3
 * 0000000140C654A9: lea     r9, [rdx+rcx*8]
 * 0000000140C654AD: jmp     short loc_140C654D0
 * 0000000140C654AF: xor     [rdx], r8
 * 0000000140C654B2: mov     rax, [rdx]
 * 0000000140C654B5: movzx   ecx, r8b
 * 0000000140C654B9: xor     rax, r10
 * 0000000140C654BC: and     ecx, 3Fh
 * 0000000140C654BF: ror     r8, cl
 * 0000000140C654C2: add     r8, rax
 * 0000000140C654C5: xor     r8, 0F05h
 * 0000000140C654CC: add     rdx, 8
 * 0000000140C654D0: cmp     rdx, r9
 * 0000000140C654D3: jnz     short loc_140C654AF
 * 0000000140C654D5: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C654DD: cmp     r8, [rsi+0A80h]
 * 0000000140C654E4: jz      short loc_140C65527
 * 0000000140C654E6: mov     ecx, [rsi+804h]
 * 0000000140C654EC: mov     rax, [rsi+588h]
 * 0000000140C654F3: mov     [rax], rsi
 * 0000000140C654F6: mov     [rax+10h], ecx
 * 0000000140C654F9: mov     rcx, [rsi+0A80h]
 * 0000000140C65500: cmp     [rsi+918h], r11d
 * 0000000140C65507: jnz     short loc_140C65517
 * 0000000140C65509: mov     rax, [rsi+588h]
 * 0000000140C65510: xor     rcx, r8
 * 0000000140C65513: mov     [rax+18h], rcx
 * 0000000140C65517: xor     edx, edx
 * 0000000140C65519: mov     r9d, 100h
 * 0000000140C6551F: mov     rcx, rsi
 * 0000000140C65522: call    sub_140C7903C
 * 0000000140C65527: mov     rax, [rsi+6C8h]
 * 0000000140C6552E: lock or [rbx+rax], r15b
 * 0000000140C65533: mov     r14, [r14]
 * 0000000140C65536: inc     r13d
 * 0000000140C65539: cmp     r14, r12
 * 0000000140C6553C: jnz     loc_140C653C3
 * 0000000140C65542: mov     dword ptr [rsp+8B0h+var_848], r13d
 * 0000000140C65547: mov     edi, 2
 * 0000000140C6554C: mov     rcx, [rsi+4F8h]
 * 0000000140C65553: mov     rax, cr8
 * 0000000140C65557: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6555C: mov     eax, 0Ch
 * 0000000140C65561: mov     cr8, rax
 * 0000000140C65565: mov     rax, [rsi+158h]
 * 0000000140C6556C: lea     rdx, [rbp+7B0h+var_170]
 * 0000000140C65573: call    KeGuardDispatchICall
 * 0000000140C65578: mov     r13, [rsi+4F0h]
 * 0000000140C6557F: mov     r14, [r13+0]
 * 0000000140C65583: cmp     r14, r13
 * 0000000140C65586: jz      loc_140C6570B
 * 0000000140C6558C: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C65591: mov     r12b, r15b
 * 0000000140C65594: movzx   edx, r15b
 * 0000000140C65598: not     r12b
 * 0000000140C6559B: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C655A1: xor     r15d, r15d
 * 0000000140C655A4: mov     rax, [rsi+6C8h]
 * 0000000140C655AB: mov     rbx, r14
 * 0000000140C655AE: sub     rbx, [rsi+6C0h]
 * 0000000140C655B5: movsx   ecx, byte ptr [rbx+rax]
 * 0000000140C655B9: test    edx, ecx
 * 0000000140C655BB: jnz     loc_140C656EA
 * 0000000140C655C1: cmp     [rsi+918h], r15d
 * 0000000140C655C8: jnz     loc_140C656EA
 * 0000000140C655CE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C655D8: mov     r8d, 1
 * 0000000140C655DE: add     rax, rsi
 * 0000000140C655E1: mov     [rsi+920h], rax
 * 0000000140C655E8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C655F2: add     rax, rdi
 * 0000000140C655F5: mov     [rsi+928h], rax
 * 0000000140C655FC: movsxd  rax, dword ptr [rdi]
 * 0000000140C655FF: mov     [rsi+930h], rax
 * 0000000140C65606: mov     [rsi+938h], rbx
 * 0000000140C6560D: mov     [rsi+918h], r8d
 * 0000000140C65614: mov     ecx, [rsi+9D8h]
 * 0000000140C6561A: bt      ecx, 1Dh
 * 0000000140C6561E: jb      loc_140C656EA
 * 0000000140C65624: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6562E: jz      loc_140C656EA
 * 0000000140C65634: test    r8b, cl
 * 0000000140C65637: jz      loc_140C656EA
 * 0000000140C6563D: mov     ecx, [rsi+0A74h]
 * 0000000140C65643: mov     eax, [rsi+804h]
 * 0000000140C65649: mov     r10, [rsi+838h]
 * 0000000140C65650: sub     eax, ecx
 * 0000000140C65652: mov     r8, [rsi+0A78h]
 * 0000000140C65659: lea     rdx, [rcx+rsi]
 * 0000000140C6565D: mov     ecx, eax
 * 0000000140C6565F: shr     rcx, 3
 * 0000000140C65663: lea     r9, [rdx+rcx*8]
 * 0000000140C65667: jmp     short loc_140C6568A
 * 0000000140C65669: xor     [rdx], r8
 * 0000000140C6566C: mov     rax, [rdx]
 * 0000000140C6566F: movzx   ecx, r8b
 * 0000000140C65673: xor     rax, r10
 * 0000000140C65676: and     ecx, 3Fh
 * 0000000140C65679: ror     r8, cl
 * 0000000140C6567C: add     r8, rax
 * 0000000140C6567F: xor     r8, 0F05h
 * 0000000140C65686: add     rdx, 8
 * 0000000140C6568A: cmp     rdx, r9
 * 0000000140C6568D: jnz     short loc_140C65669
 * 0000000140C6568F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C65697: cmp     r8, [rsi+0A80h]
 * 0000000140C6569E: jz      short loc_140C656E4
 * 0000000140C656A0: mov     rax, [rsi+588h]
 * 0000000140C656A7: mov     ecx, [rsi+804h]
 * 0000000140C656AD: mov     [rax], rsi
 * 0000000140C656B0: mov     [rax+10h], ecx
 * 0000000140C656B3: mov     rax, [rsi+0A80h]
 * 0000000140C656BA: cmp     [rsi+918h], r15d
 * 0000000140C656C1: jnz     short loc_140C656D4
 * 0000000140C656C3: mov     rcx, r8
 * 0000000140C656C6: xor     rcx, rax
 * 0000000140C656C9: mov     rax, [rsi+588h]
 * 0000000140C656D0: mov     [rax+18h], rcx
 * 0000000140C656D4: xor     edx, edx
 * 0000000140C656D6: mov     r9d, 100h
 * 0000000140C656DC: mov     rcx, rsi
 * 0000000140C656DF: call    sub_140C7903C
 * 0000000140C656E4: mov     edx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C656EA: mov     rax, [rsi+6C8h]
 * 0000000140C656F1: lock and [rbx+rax], r12b
 * 0000000140C656F6: mov     r14, [r14]
 * 0000000140C656F9: cmp     r14, r13
 * 0000000140C656FC: jnz     loc_140C655A4
 * 0000000140C65702: mov     r15d, [rbp+7B0h+var_830]
 * 0000000140C65706: mov     edi, 2
 * 0000000140C6570B: mov     rax, [rsi+198h]
 * 0000000140C65712: lea     rcx, [rbp+7B0h+var_170]
 * 0000000140C65719: call    KeGuardDispatchICall
 * 0000000140C6571E: movzx   eax, byte ptr [rsp+8B0h+var_858]
 * 0000000140C65723: mov     cr8, rax
 * 0000000140C65727: cmp     r15b, 80h
 * 0000000140C6572B: jnz     short loc_140C65742
 * 0000000140C6572D: mov     rax, [rsi+140h]
 * 0000000140C65734: xor     edx, edx
 * 0000000140C65736: mov     rcx, [rsi+0A48h]
 * 0000000140C6573D: call    KeGuardDispatchICall
 * 0000000140C65742: mov     rcx, [rsi+540h]
 * 0000000140C65749: xor     edx, edx
 * 0000000140C6574B: mov     rax, [rsi+150h]
 * 0000000140C65752: call    KeGuardDispatchICall
 * 0000000140C65757: mov     rax, [rsi+190h]
 * 0000000140C6575E: call    KeGuardDispatchICall
 * 0000000140C65763: mov     eax, dword ptr [rsp+8B0h+var_848]
 * 0000000140C65767: shl     eax, 8
 * 0000000140C6576A: add     [rsi+848h], eax
 * 0000000140C65770: jmp     loc_140C6532F
 * 0000000140C65775: mov     r14, [r13+8]
 * 0000000140C65779: mov     r8d, [r13+10h]
 * 0000000140C6577D: mov     r9, r14
 * 0000000140C65780: add     [rsi+848h], r8d
 * 0000000140C65787: mov     rax, r14
 * 0000000140C6578A: mov     r10d, [rsi+834h]
 * 0000000140C65791: mov     r15, [rsi+838h]
 * 0000000140C65798: lea     rcx, [r14+r8]
 * 0000000140C6579C: cmp     r14, rcx
 * 0000000140C6579F: jnb     short loc_140C657B1
 * 0000000140C657A1: mov     edx, 40h ; '@'
 * 0000000140C657A6: prefetchnta byte ptr [rax]
 * 0000000140C657A9: add     rax, rdx
 * 0000000140C657AC: cmp     rax, rcx
 * 0000000140C657AF: jb      short loc_140C657A6
 * 0000000140C657B1: mov     r11d, r8d
 * 0000000140C657B4: mov     rbx, r15
 * 0000000140C657B7: shr     r11d, 7
 * 0000000140C657BB: mov     edx, 1
 * 0000000140C657C0: test    r11d, r11d
 * 0000000140C657C3: jz      short loc_140C65832
 * 0000000140C657C5: mov     edi, 0FFFFFFFFh
 * 0000000140C657CA: mov     rsi, 7010008004002001h
 * 0000000140C657D4: mov     eax, 8
 * 0000000140C657D9: xor     rbx, [r9]
 * 0000000140C657DC: mov     ecx, r10d
 * 0000000140C657DF: rol     rbx, cl
 * 0000000140C657E2: xor     rbx, [r9+8]
 * 0000000140C657E6: add     r9, 10h
 * 0000000140C657EA: rol     rbx, cl
 * 0000000140C657ED: sub     rax, rdx
 * 0000000140C657F0: jnz     short loc_140C657D9
 * 0000000140C657F2: mov     rcx, r9
 * 0000000140C657F5: sub     rcx, r14
 * 0000000140C657F8: xor     rcx, r15
 * 0000000140C657FB: mov     rax, rcx
 * 0000000140C657FE: rol     rax, 11h
 * 0000000140C65802: xor     rcx, rax
 * 0000000140C65805: mov     rax, rsi
 * 0000000140C65808: mul     rcx
 * 0000000140C6580B: mov     [rbp+7B0h+var_288], rdx
 * 0000000140C65812: xor     rdx, rax
 * 0000000140C65815: xor     r10d, edx
 * 0000000140C65818: mov     edx, 1
 * 0000000140C6581D: and     r10d, 3Fh
 * 0000000140C65821: cmovz   r10d, edx
 * 0000000140C65825: add     r11d, edi
 * 0000000140C65828: jnz     short loc_140C657D4
 * 0000000140C6582A: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6582F: lea     edi, [rdx+1]
 * 0000000140C65832: and     r8d, 7Fh
 * 0000000140C65836: cmp     r8d, 8
 * 0000000140C6583A: jb      short loc_140C65859
 * 0000000140C6583C: mov     eax, r8d
 * 0000000140C6583F: shr     rax, 3
 * 0000000140C65843: xor     rbx, [r9]
 * 0000000140C65846: mov     ecx, r10d
 * 0000000140C65849: rol     rbx, cl
 * 0000000140C6584C: add     r9, 8
 * 0000000140C65850: add     r8d, 0FFFFFFF8h
 * 0000000140C65854: sub     rax, rdx
 * 0000000140C65857: jnz     short loc_140C65843
 * 0000000140C65859: test    r8d, r8d
 * 0000000140C6585C: jz      short loc_140C6587C
 * 0000000140C6585E: mov     edi, 0FFFFFFFFh
 * 0000000140C65863: movzx   eax, byte ptr [r9]
 * 0000000140C65867: mov     ecx, r10d
 * 0000000140C6586A: xor     rbx, rax
 * 0000000140C6586D: add     r9, rdx
 * 0000000140C65870: rol     rbx, cl
 * 0000000140C65873: add     r8d, edi
 * 0000000140C65876: jnz     short loc_140C65863
 * 0000000140C65878: lea     edi, [r8+2]
 * 0000000140C6587C: mov     rax, rbx
 * 0000000140C6587F: jmp     short loc_140C65883
 * 0000000140C65881: xor     ebx, eax
 * 0000000140C65883: shr     rax, 1Fh
 * 0000000140C65887: test    rax, rax
 * 0000000140C6588A: jnz     short loc_140C65881
 * 0000000140C6588C: btr     ebx, 1Fh
 * 0000000140C65890: cmp     ebx, [r13+14h]
 * 0000000140C65894: jz      loc_140C71395
 * 0000000140C6589A: cmp     [r13+0], eax
 * 0000000140C6589E: jnz     short loc_140C658A8
 * 0000000140C658A0: cmp     [r13+18h], eax
 * 0000000140C658A4: cmovnz  r12d, edx
 * 0000000140C658A8: mov     ecx, [r13+10h]
 * 0000000140C658AC: mov     rdx, [r13+8]
 * 0000000140C658B0: test    rcx, rcx
 * 0000000140C658B3: jz      loc_140C6595B
 * 0000000140C658B9: mov     eax, [rsi+9DCh]
 * 0000000140C658BF: mov     r8d, 40h ; '@'
 * 0000000140C658C5: test    r8b, al
 * 0000000140C658C8: jz      loc_140C6595B
 * 0000000140C658CE: mov     r15, cr8
 * 0000000140C658D2: mov     r14, rdx
 * 0000000140C658D5: lea     rax, [rcx-1]
 * 0000000140C658D9: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C658E0: add     rax, rdx
 * 0000000140C658E3: or      rax, 0FFFh
 * 0000000140C658E9: mov     [rsp+8B0h+var_858], rax
 * 0000000140C658EE: lea     r13, [r14-1]
 * 0000000140C658F2: mov     cr8, rdi
 * 0000000140C658F6: mov     rax, [rsi+468h]
 * 0000000140C658FD: xor     edx, edx
 * 0000000140C658FF: mov     rcx, r14
 * 0000000140C65902: call    KeGuardDispatchICall
 * 0000000140C65907: cmp     eax, 0C000022Dh
 * 0000000140C6590C: jnz     short loc_140C6592A
 * 0000000140C6590E: test    r12d, r12d
 * 0000000140C65911: jnz     short loc_140C6594E
 * 0000000140C65913: lea     eax, [r12+1]
 * 0000000140C65918: cmp     r15b, al
 * 0000000140C6591B: ja      short loc_140C6592E
 * 0000000140C6591D: movzx   eax, r15b
 * 0000000140C65921: mov     cr8, rax
 * 0000000140C65925: mov     al, [r14]
 * 0000000140C65928: jmp     short loc_140C658F2
 * 0000000140C6592A: test    eax, eax
 * 0000000140C6592C: js      short loc_140C6594E
 * 0000000140C6592E: mov     r11d, 1000h
 * 0000000140C65934: add     r14, r11
 * 0000000140C65937: add     r13, r11
 * 0000000140C6593A: cmp     r13, [rsp+8B0h+var_858]
 * 0000000140C6593F: jnz     short loc_140C658F6
 * 0000000140C65941: movzx   eax, r15b
 * 0000000140C65945: mov     cr8, rax
 * 0000000140C65949: jmp     loc_140C643EF
 * 0000000140C6594E: movzx   eax, r15b
 * 0000000140C65952: mov     cr8, rax
 * 0000000140C65956: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6595B: mov     eax, [r13+14h]
 * 0000000140C6595F: xor     r12d, r12d
 * 0000000140C65962: cmp     [rsi+918h], r12d
 * 0000000140C65969: jnz     short loc_140C6597B
 * 0000000140C6596B: mov     ecx, ebx
 * 0000000140C6596D: xor     rcx, rax
 * 0000000140C65970: mov     rax, [rsi+588h]
 * 0000000140C65977: mov     [rax+18h], rcx
 * 0000000140C6597B: mov     r15d, 1
 * 0000000140C65981: mov     rcx, [r13+8]
 * 0000000140C65985: cmp     [rsi+918h], r12d
 * 0000000140C6598C: jnz     loc_140C6F354
 * 0000000140C65992: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6599C: add     rax, rsi
 * 0000000140C6599F: mov     [rsi+920h], rax
 * 0000000140C659A6: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C659B0: add     rax, r13
 * 0000000140C659B3: mov     [rsi+928h], rax
 * 0000000140C659BA: movsxd  rax, dword ptr [r13+0]
 * 0000000140C659BE: mov     [rsi+930h], rax
 * 0000000140C659C5: mov     [rsi+938h], rcx
 * 0000000140C659CC: mov     [rsi+918h], r15d
 * 0000000140C659D3: mov     ecx, [rsi+9D8h]
 * 0000000140C659D9: bt      ecx, 1Dh
 * 0000000140C659DD: jb      loc_140C6F354
 * 0000000140C659E3: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C659ED: jz      loc_140C6F354
 * 0000000140C659F3: test    r15b, cl
 * 0000000140C659F6: jz      loc_140C6F354
 * 0000000140C659FC: mov     ecx, [rsi+0A74h]
 * 0000000140C65A02: mov     eax, [rsi+804h]
 * 0000000140C65A08: mov     r10, [rsi+838h]
 * 0000000140C65A0F: sub     eax, ecx
 * 0000000140C65A11: mov     r8, [rsi+0A78h]
 * 0000000140C65A18: lea     rdx, [rcx+rsi]
 * 0000000140C65A1C: mov     ecx, eax
 * 0000000140C65A1E: shr     rcx, 3
 * 0000000140C65A22: lea     r9, [rdx+rcx*8]
 * 0000000140C65A26: jmp     short loc_140C65A49
 * 0000000140C65A28: xor     [rdx], r8
 * 0000000140C65A2B: mov     rax, [rdx]
 * 0000000140C65A2E: movzx   ecx, r8b
 * 0000000140C65A32: xor     rax, r10
 * 0000000140C65A35: and     ecx, 3Fh
 * 0000000140C65A38: ror     r8, cl
 * 0000000140C65A3B: add     r8, rax
 * 0000000140C65A3E: xor     r8, 0F05h
 * 0000000140C65A45: add     rdx, 8
 * 0000000140C65A49: cmp     rdx, r9
 * 0000000140C65A4C: jnz     short loc_140C65A28
 * 0000000140C65A4E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C65A56: cmp     r8, [rsi+0A80h]
 * 0000000140C65A5D: jz      loc_140C6F354
 * 0000000140C65A63: mov     ecx, [rsi+804h]
 * 0000000140C65A69: mov     rax, [rsi+588h]
 * 0000000140C65A70: mov     [rax], rsi
 * 0000000140C65A73: mov     [rax+10h], ecx
 * 0000000140C65A76: mov     rcx, [rsi+0A80h]
 * 0000000140C65A7D: cmp     [rsi+918h], r12d
 * 0000000140C65A84: jnz     short loc_140C65A94
 * 0000000140C65A86: xor     rcx, r8
 * 0000000140C65A89: mov     rax, [rsi+588h]
 * 0000000140C65A90: mov     [rax+18h], rcx
 * 0000000140C65A94: xor     edx, edx
 * 0000000140C65A96: mov     r9d, 100h
 * 0000000140C65A9C: mov     rcx, rsi
 * 0000000140C65A9F: call    sub_140C7903C
 * 0000000140C65AA4: jmp     loc_140C6F354
 * 0000000140C65AA9: mov     rax, [rsi+568h]
 * 0000000140C65AB0: cmp     [rax+20h], r12
 * 0000000140C65AB4: jz      loc_140C713A3
 * 0000000140C65ABA: add     dword ptr [rsi+848h], 100h
 * 0000000140C65AC4: mov     r15, [rsi+580h]
 * 0000000140C65ACB: mov     rax, [rsi+2E0h]
 * 0000000140C65AD2: mov     rcx, r15
 * 0000000140C65AD5: call    KeGuardDispatchICall
 * 0000000140C65ADA: mov     r14, rax
 * 0000000140C65ADD: test    rax, rax
 * 0000000140C65AE0: jz      loc_140C710FB
 * 0000000140C65AE6: mov     rax, [rsi+2E8h]
 * 0000000140C65AED: mov     rcx, r14
 * 0000000140C65AF0: call    KeGuardDispatchICall
 * 0000000140C65AF5: mov     rbx, rax
 * 0000000140C65AF8: mov     rax, [r13+18h]
 * 0000000140C65AFC: test    rax, rax
 * 0000000140C65AFF: jz      loc_140C65C35
 * 0000000140C65B05: cmp     rax, rbx
 * 0000000140C65B08: jz      loc_140C65D7E
 * 0000000140C65B0E: cmp     [rsi+918h], r12d
 * 0000000140C65B15: jnz     loc_140C65D7E
 * 0000000140C65B1B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C65B25: mov     edx, 1
 * 0000000140C65B2A: add     rax, rsi
 * 0000000140C65B2D: mov     [rsi+920h], rax
 * 0000000140C65B34: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C65B3E: add     rax, r13
 * 0000000140C65B41: mov     [rsi+928h], rax
 * 0000000140C65B48: movsxd  rax, dword ptr [r13+0]
 * 0000000140C65B4C: mov     [rsi+930h], rax
 * 0000000140C65B53: mov     [rsi+938h], rbx
 * 0000000140C65B5A: mov     [rsi+918h], edx
 * 0000000140C65B60: mov     ecx, [rsi+9D8h]
 * 0000000140C65B66: bt      ecx, 1Dh
 * 0000000140C65B6A: jb      loc_140C65D7E
 * 0000000140C65B70: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C65B7A: jz      loc_140C65D7E
 * 0000000140C65B80: test    dl, cl
 * 0000000140C65B82: jz      loc_140C65D7E
 * 0000000140C65B88: mov     ecx, [rsi+0A74h]
 * 0000000140C65B8E: mov     eax, [rsi+804h]
 * 0000000140C65B94: mov     r10, [rsi+838h]
 * 0000000140C65B9B: sub     eax, ecx
 * 0000000140C65B9D: mov     r8, [rsi+0A78h]
 * 0000000140C65BA4: lea     rdx, [rcx+rsi]
 * 0000000140C65BA8: mov     ecx, eax
 * 0000000140C65BAA: shr     rcx, 3
 * 0000000140C65BAE: lea     r9, [rdx+rcx*8]
 * 0000000140C65BB2: jmp     short loc_140C65BD5
 * 0000000140C65BB4: xor     [rdx], r8
 * 0000000140C65BB7: mov     rax, [rdx]
 * 0000000140C65BBA: movzx   ecx, r8b
 * 0000000140C65BBE: xor     rax, r10
 * 0000000140C65BC1: and     ecx, 3Fh
 * 0000000140C65BC4: ror     r8, cl
 * 0000000140C65BC7: add     r8, rax
 * 0000000140C65BCA: xor     r8, 0F05h
 * 0000000140C65BD1: add     rdx, 8
 * 0000000140C65BD5: cmp     rdx, r9
 * 0000000140C65BD8: jnz     short loc_140C65BB4
 * 0000000140C65BDA: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C65BE2: cmp     r8, [rsi+0A80h]
 * 0000000140C65BE9: jz      loc_140C65D7E
 * 0000000140C65BEF: mov     ecx, [rsi+804h]
 * 0000000140C65BF5: mov     rax, [rsi+588h]
 * 0000000140C65BFC: mov     [rax], rsi
 * 0000000140C65BFF: mov     [rax+10h], ecx
 * 0000000140C65C02: mov     rcx, [rsi+0A80h]
 * 0000000140C65C09: cmp     [rsi+918h], r12d
 * 0000000140C65C10: jnz     short loc_140C65C20
 * 0000000140C65C12: mov     rax, [rsi+588h]
 * 0000000140C65C19: xor     rcx, r8
 * 0000000140C65C1C: mov     [rax+18h], rcx
 * 0000000140C65C20: xor     edx, edx
 * 0000000140C65C22: mov     r9d, 100h
 * 0000000140C65C28: mov     rcx, rsi
 * 0000000140C65C2B: call    sub_140C7903C
 * 0000000140C65C30: jmp     loc_140C65D7E
 * 0000000140C65C35: mov     eax, [rsi+9C0h]
 * 0000000140C65C3B: mov     rcx, [rsi+9C8h]
 * 0000000140C65C42: test    rax, rax
 * 0000000140C65C45: jz      short loc_140C65C5C
 * 0000000140C65C47: lea     rdx, [rax-1]
 * 0000000140C65C4B: add     rdx, rcx
 * 0000000140C65C4E: cmp     rbx, rcx
 * 0000000140C65C51: jb      short loc_140C65C5C
 * 0000000140C65C53: cmp     rbx, rdx
 * 0000000140C65C56: jbe     loc_140C65D7A
 * 0000000140C65C5C: cmp     [rsi+918h], r12d
 * 0000000140C65C63: jnz     loc_140C65D7A
 * 0000000140C65C69: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C65C73: mov     edx, 1
 * 0000000140C65C78: add     rax, rsi
 * 0000000140C65C7B: mov     [rsi+920h], rax
 * 0000000140C65C82: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C65C8C: add     rax, r13
 * 0000000140C65C8F: mov     [rsi+928h], rax
 * 0000000140C65C96: movsxd  rax, dword ptr [r13+0]
 * 0000000140C65C9A: mov     [rsi+930h], rax
 * 0000000140C65CA1: mov     [rsi+938h], rbx
 * 0000000140C65CA8: mov     [rsi+918h], edx
 * 0000000140C65CAE: mov     ecx, [rsi+9D8h]
 * 0000000140C65CB4: bt      ecx, 1Dh
 * 0000000140C65CB8: jb      loc_140C65D7A
 * 0000000140C65CBE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C65CC8: jz      loc_140C65D7A
 * 0000000140C65CCE: test    dl, cl
 * 0000000140C65CD0: jz      loc_140C65D7A
 * 0000000140C65CD6: mov     ecx, [rsi+0A74h]
 * 0000000140C65CDC: mov     eax, [rsi+804h]
 * 0000000140C65CE2: mov     r10, [rsi+838h]
 * 0000000140C65CE9: sub     eax, ecx
 * 0000000140C65CEB: mov     r8, [rsi+0A78h]
 * 0000000140C65CF2: lea     rdx, [rcx+rsi]
 * 0000000140C65CF6: mov     ecx, eax
 * 0000000140C65CF8: shr     rcx, 3
 * 0000000140C65CFC: lea     r9, [rdx+rcx*8]
 * 0000000140C65D00: jmp     short loc_140C65D23
 * 0000000140C65D02: xor     [rdx], r8
 * 0000000140C65D05: mov     rax, [rdx]
 * 0000000140C65D08: movzx   ecx, r8b
 * 0000000140C65D0C: xor     rax, r10
 * 0000000140C65D0F: and     ecx, 3Fh
 * 0000000140C65D12: ror     r8, cl
 * 0000000140C65D15: add     r8, rax
 * 0000000140C65D18: xor     r8, 0F05h
 * 0000000140C65D1F: add     rdx, 8
 * 0000000140C65D23: cmp     rdx, r9
 * 0000000140C65D26: jnz     short loc_140C65D02
 * 0000000140C65D28: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C65D30: cmp     r8, [rsi+0A80h]
 * 0000000140C65D37: jz      short loc_140C65D7A
 * 0000000140C65D39: mov     ecx, [rsi+804h]
 * 0000000140C65D3F: mov     rax, [rsi+588h]
 * 0000000140C65D46: mov     [rax], rsi
 * 0000000140C65D49: mov     [rax+10h], ecx
 * 0000000140C65D4C: mov     rcx, [rsi+0A80h]
 * 0000000140C65D53: cmp     [rsi+918h], r12d
 * 0000000140C65D5A: jnz     short loc_140C65D6A
 * 0000000140C65D5C: mov     rax, [rsi+588h]
 * 0000000140C65D63: xor     rcx, r8
 * 0000000140C65D66: mov     [rax+18h], rcx
 * 0000000140C65D6A: xor     edx, edx
 * 0000000140C65D6C: mov     r9d, 100h
 * 0000000140C65D72: mov     rcx, rsi
 * 0000000140C65D75: call    sub_140C7903C
 * 0000000140C65D7A: mov     [r13+18h], rbx
 * 0000000140C65D7E: mov     rax, [rsi+2F0h]
 * 0000000140C65D85: mov     rdx, r14
 * 0000000140C65D88: mov     rcx, r15
 * 0000000140C65D8B: call    KeGuardDispatchICall
 * 0000000140C65D90: jmp     loc_140C710FB
 * 0000000140C65D95: mov     ecx, r10d
 * 0000000140C65D98: sub     ecx, 15h
 * 0000000140C65D9B: jz      loc_140C6ABA3
 * 0000000140C65DA1: sub     ecx, 3
 * 0000000140C65DA4: jz      loc_140C67AF8
 * 0000000140C65DAA: sub     ecx, 1
 * 0000000140C65DAD: jz      loc_140C67626
 * 0000000140C65DB3: sub     ecx, 1
 * 0000000140C65DB6: jz      loc_140C67342
 * 0000000140C65DBC: sub     ecx, 1
 * 0000000140C65DBF: jz      loc_140C66FF7
 * 0000000140C65DC5: sub     ecx, 1
 * 0000000140C65DC8: jz      loc_140C663A3
 * 0000000140C65DCE: cmp     ecx, 1
 * 0000000140C65DD1: jnz     loc_140C6E0DB
 * 0000000140C65DD7: mov     r14, [r13+8]
 * 0000000140C65DDB: mov     r8d, [r13+10h]
 * 0000000140C65DDF: mov     r9, r14
 * 0000000140C65DE2: add     [rsi+848h], r8d
 * 0000000140C65DE9: mov     rax, r14
 * 0000000140C65DEC: mov     r10d, [rsi+834h]
 * 0000000140C65DF3: mov     r15, [rsi+838h]
 * 0000000140C65DFA: lea     rcx, [r14+r8]
 * 0000000140C65DFE: cmp     r14, rcx
 * 0000000140C65E01: jnb     short loc_140C65E13
 * 0000000140C65E03: mov     edx, 40h ; '@'
 * 0000000140C65E08: prefetchnta byte ptr [rax]
 * 0000000140C65E0B: add     rax, rdx
 * 0000000140C65E0E: cmp     rax, rcx
 * 0000000140C65E11: jb      short loc_140C65E08
 * 0000000140C65E13: mov     r11d, r8d
 * 0000000140C65E16: mov     rbx, r15
 * 0000000140C65E19: shr     r11d, 7
 * 0000000140C65E1D: mov     edx, 1
 * 0000000140C65E22: test    r11d, r11d
 * 0000000140C65E25: jz      short loc_140C65E94
 * 0000000140C65E27: mov     edi, 0FFFFFFFFh
 * 0000000140C65E2C: mov     rsi, 7010008004002001h
 * 0000000140C65E36: mov     eax, 8
 * 0000000140C65E3B: xor     rbx, [r9]
 * 0000000140C65E3E: mov     ecx, r10d
 * 0000000140C65E41: rol     rbx, cl
 * 0000000140C65E44: xor     rbx, [r9+8]
 * 0000000140C65E48: add     r9, 10h
 * 0000000140C65E4C: rol     rbx, cl
 * 0000000140C65E4F: sub     rax, rdx
 * 0000000140C65E52: jnz     short loc_140C65E3B
 * 0000000140C65E54: mov     rcx, r9
 * 0000000140C65E57: sub     rcx, r14
 * 0000000140C65E5A: xor     rcx, r15
 * 0000000140C65E5D: mov     rax, rcx
 * 0000000140C65E60: rol     rax, 11h
 * 0000000140C65E64: xor     rcx, rax
 * 0000000140C65E67: mov     rax, rsi
 * 0000000140C65E6A: mul     rcx
 * 0000000140C65E6D: mov     [rbp+7B0h+var_388], rdx
 * 0000000140C65E74: xor     rdx, rax
 * 0000000140C65E77: xor     r10d, edx
 * 0000000140C65E7A: mov     edx, 1
 * 0000000140C65E7F: and     r10d, 3Fh
 * 0000000140C65E83: cmovz   r10d, edx
 * 0000000140C65E87: add     r11d, edi
 * 0000000140C65E8A: jnz     short loc_140C65E36
 * 0000000140C65E8C: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C65E91: lea     edi, [rdx+1]
 * 0000000140C65E94: and     r8d, 7Fh
 * 0000000140C65E98: cmp     r8d, 8
 * 0000000140C65E9C: jb      short loc_140C65EBB
 * 0000000140C65E9E: mov     eax, r8d
 * 0000000140C65EA1: shr     rax, 3
 * 0000000140C65EA5: xor     rbx, [r9]
 * 0000000140C65EA8: mov     ecx, r10d
 * 0000000140C65EAB: rol     rbx, cl
 * 0000000140C65EAE: add     r9, 8
 * 0000000140C65EB2: add     r8d, 0FFFFFFF8h
 * 0000000140C65EB6: sub     rax, rdx
 * 0000000140C65EB9: jnz     short loc_140C65EA5
 * 0000000140C65EBB: test    r8d, r8d
 * 0000000140C65EBE: jz      short loc_140C65EDE
 * 0000000140C65EC0: mov     edi, 0FFFFFFFFh
 * 0000000140C65EC5: movzx   eax, byte ptr [r9]
 * 0000000140C65EC9: mov     ecx, r10d
 * 0000000140C65ECC: xor     rbx, rax
 * 0000000140C65ECF: add     r9, rdx
 * 0000000140C65ED2: rol     rbx, cl
 * 0000000140C65ED5: add     r8d, edi
 * 0000000140C65ED8: jnz     short loc_140C65EC5
 * 0000000140C65EDA: lea     edi, [r8+2]
 * 0000000140C65EDE: mov     rax, rbx
 * 0000000140C65EE1: jmp     short loc_140C65EE5
 * 0000000140C65EE3: xor     ebx, eax
 * 0000000140C65EE5: shr     rax, 1Fh
 * 0000000140C65EE9: test    rax, rax
 * 0000000140C65EEC: jnz     short loc_140C65EE3
 * 0000000140C65EEE: btr     ebx, 1Fh
 * 0000000140C65EF2: cmp     ebx, [r13+14h]
 * 0000000140C65EF6: jz      loc_140C66111
 * 0000000140C65EFC: xor     r11d, r11d
 * 0000000140C65EFF: cmp     [r13+0], r11d
 * 0000000140C65F03: jnz     short loc_140C65F0D
 * 0000000140C65F05: cmp     [r13+18h], r11d
 * 0000000140C65F09: cmovnz  r12d, edx
 * 0000000140C65F0D: mov     ecx, [r13+10h]
 * 0000000140C65F11: mov     rdx, [r13+8]
 * 0000000140C65F15: test    rcx, rcx
 * 0000000140C65F18: jz      loc_140C65FCD
 * 0000000140C65F1E: mov     eax, [rsi+9DCh]
 * 0000000140C65F24: mov     r8d, 40h ; '@'
 * 0000000140C65F2A: test    r8b, al
 * 0000000140C65F2D: jz      loc_140C65FCD
 * 0000000140C65F33: mov     r15, cr8
 * 0000000140C65F37: mov     r14, rdx
 * 0000000140C65F3A: lea     rax, [rcx-1]
 * 0000000140C65F3E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C65F45: add     rax, rdx
 * 0000000140C65F48: or      rax, 0FFFh
 * 0000000140C65F4E: mov     [rsp+8B0h+var_858], rax
 * 0000000140C65F53: lea     r13, [r14-1]
 * 0000000140C65F57: mov     cr8, rdi
 * 0000000140C65F5B: mov     rax, [rsi+468h]
 * 0000000140C65F62: xor     edx, edx
 * 0000000140C65F64: mov     rcx, r14
 * 0000000140C65F67: call    KeGuardDispatchICall
 * 0000000140C65F6C: xor     r11d, r11d
 * 0000000140C65F6F: cmp     eax, 0C000022Dh
 * 0000000140C65F74: jnz     short loc_140C65F91
 * 0000000140C65F76: test    r12d, r12d
 * 0000000140C65F79: jnz     short loc_140C65FC0
 * 0000000140C65F7B: lea     eax, [r11+1]
 * 0000000140C65F7F: cmp     r15b, al
 * 0000000140C65F82: ja      short loc_140C65F95
 * 0000000140C65F84: movzx   eax, r15b
 * 0000000140C65F88: mov     cr8, rax
 * 0000000140C65F8C: mov     al, [r14]
 * 0000000140C65F8F: jmp     short loc_140C65F57
 * 0000000140C65F91: test    eax, eax
 * 0000000140C65F93: js      short loc_140C65FC0
 * 0000000140C65F95: mov     r11d, 1000h
 * 0000000140C65F9B: add     r14, r11
 * 0000000140C65F9E: add     r13, r11
 * 0000000140C65FA1: cmp     r13, [rsp+8B0h+var_858]
 * 0000000140C65FA6: jnz     short loc_140C65F5B
 * 0000000140C65FA8: movzx   eax, r15b
 * 0000000140C65FAC: mov     cr8, rax
 * 0000000140C65FB0: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C65FB5: mov     r15d, 1
 * 0000000140C65FBB: jmp     loc_140C6611D
 * 0000000140C65FC0: movzx   eax, r15b
 * 0000000140C65FC4: mov     cr8, rax
 * 0000000140C65FC8: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C65FCD: mov     eax, [r13+14h]
 * 0000000140C65FD1: cmp     [rsi+918h], r11d
 * 0000000140C65FD8: jnz     short loc_140C65FEA
 * 0000000140C65FDA: mov     ecx, ebx
 * 0000000140C65FDC: xor     rcx, rax
 * 0000000140C65FDF: mov     rax, [rsi+588h]
 * 0000000140C65FE6: mov     [rax+18h], rcx
 * 0000000140C65FEA: mov     r15d, 1
 * 0000000140C65FF0: mov     rcx, [r13+8]
 * 0000000140C65FF4: cmp     [rsi+918h], r11d
 * 0000000140C65FFB: jnz     loc_140C66117
 * 0000000140C66001: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6600B: add     rax, rsi
 * 0000000140C6600E: mov     [rsi+920h], rax
 * 0000000140C66015: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6601F: add     rax, r13
 * 0000000140C66022: mov     [rsi+928h], rax
 * 0000000140C66029: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6602D: mov     [rsi+930h], rax
 * 0000000140C66034: mov     [rsi+938h], rcx
 * 0000000140C6603B: mov     [rsi+918h], r15d
 * 0000000140C66042: mov     ecx, [rsi+9D8h]
 * 0000000140C66048: bt      ecx, 1Dh
 * 0000000140C6604C: jb      loc_140C66117
 * 0000000140C66052: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6605C: jz      loc_140C66117
 * 0000000140C66062: test    r15b, cl
 * 0000000140C66065: jz      loc_140C66117
 * 0000000140C6606B: mov     ecx, [rsi+0A74h]
 * 0000000140C66071: mov     eax, [rsi+804h]
 * 0000000140C66077: mov     r10, [rsi+838h]
 * 0000000140C6607E: sub     eax, ecx
 * 0000000140C66080: mov     r8, [rsi+0A78h]
 * 0000000140C66087: lea     rdx, [rcx+rsi]
 * 0000000140C6608B: mov     ecx, eax
 * 0000000140C6608D: shr     rcx, 3
 * 0000000140C66091: lea     r9, [rdx+rcx*8]
 * 0000000140C66095: jmp     short loc_140C660B8
 * 0000000140C66097: xor     [rdx], r8
 * 0000000140C6609A: mov     rax, [rdx]
 * 0000000140C6609D: movzx   ecx, r8b
 * 0000000140C660A1: xor     rax, r10
 * 0000000140C660A4: and     ecx, 3Fh
 * 0000000140C660A7: ror     r8, cl
 * 0000000140C660AA: add     r8, rax
 * 0000000140C660AD: xor     r8, 0F05h
 * 0000000140C660B4: add     rdx, 8
 * 0000000140C660B8: cmp     rdx, r9
 * 0000000140C660BB: jnz     short loc_140C66097
 * 0000000140C660BD: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C660C5: cmp     r8, [rsi+0A80h]
 * 0000000140C660CC: jz      short loc_140C66117
 * 0000000140C660CE: mov     ecx, [rsi+804h]
 * 0000000140C660D4: mov     rax, [rsi+588h]
 * 0000000140C660DB: mov     [rax], rsi
 * 0000000140C660DE: mov     [rax+10h], ecx
 * 0000000140C660E1: mov     rcx, [rsi+0A80h]
 * 0000000140C660E8: cmp     [rsi+918h], r11d
 * 0000000140C660EF: jnz     short loc_140C660FF
 * 0000000140C660F1: mov     rax, [rsi+588h]
 * 0000000140C660F8: xor     rcx, r8
 * 0000000140C660FB: mov     [rax+18h], rcx
 * 0000000140C660FF: xor     edx, edx
 * 0000000140C66101: mov     r9d, 100h
 * 0000000140C66107: mov     rcx, rsi
 * 0000000140C6610A: call    sub_140C7903C
 * 0000000140C6610F: jmp     short loc_140C66117
 * 0000000140C66111: mov     r15d, 1
 * 0000000140C66117: mov     r11d, 1000h
 * 0000000140C6611D: mov     eax, [r13+10h]
 * 0000000140C66121: xor     ecx, ecx
 * 0000000140C66123: mov     r12, [r13+8]
 * 0000000140C66127: shr     eax, 4
 * 0000000140C6612A: mov     [rbp+7B0h+arg_8], r12
 * 0000000140C66131: test    eax, eax
 * 0000000140C66133: jz      loc_140C6639B
 * 0000000140C66139: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6613E: mov     r13d, eax
 * 0000000140C66141: mov     [rsp+8B0h+var_858], r13
 * 0000000140C66146: mov     rax, [r12]
 * 0000000140C6614A: lea     rdx, [rbp+7B0h+var_678]
 * 0000000140C66151: mov     rbx, rdi
 * 0000000140C66154: mov     r15, [rax]
 * 0000000140C66157: mov     [rbp+7B0h+var_678], rcx
 * 0000000140C6615E: mov     rcx, r15
 * 0000000140C66161: mov     rax, [rsi+318h]
 * 0000000140C66168: call    KeGuardDispatchICall
 * 0000000140C6616D: xor     ecx, ecx
 * 0000000140C6616F: mov     r14, rax
 * 0000000140C66172: test    rax, rax
 * 0000000140C66175: jz      loc_140C66372
 * 0000000140C6617B: lea     r12d, [rcx+6]
 * 0000000140C6617F: xor     r13d, r13d
 * 0000000140C66182: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140C6618C: mov     rax, [rsi+218h]
 * 0000000140C66193: lea     rdx, [rbp+7B0h+var_380]
 * 0000000140C6619A: mov     rcx, r14
 * 0000000140C6619D: call    KeGuardDispatchICall
 * 0000000140C661A2: test    rax, rax
 * 0000000140C661A5: jnz     loc_140C6633D
 * 0000000140C661AB: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C661B5: lea     r9d, [rax+1]
 * 0000000140C661B9: jz      short loc_140C66201
 * 0000000140C661BB: mov     rcx, [rsi+0AC8h]
 * 0000000140C661C2: lea     edx, [rax+30h]
 * 0000000140C661C5: mov     r8, r12
 * 0000000140C661C8: mov     rax, [rbx]
 * 0000000140C661CB: add     edx, 0FFFFFFF8h
 * 0000000140C661CE: mov     [rcx], rax
 * 0000000140C661D1: add     rbx, 8
 * 0000000140C661D5: add     rcx, 8
 * 0000000140C661D9: sub     r8, r9
 * 0000000140C661DC: jnz     short loc_140C661C8
 * 0000000140C661DE: test    edx, edx
 * 0000000140C661E0: jz      short loc_140C661FA
 * 0000000140C661E2: mov     esi, 0FFFFFFFFh
 * 0000000140C661E7: mov     al, [rbx]
 * 0000000140C661E9: add     rbx, r9
 * 0000000140C661EC: mov     [rcx], al
 * 0000000140C661EE: add     rcx, r9
 * 0000000140C661F1: add     edx, esi
 * 0000000140C661F3: jnz     short loc_140C661E7
 * 0000000140C661F5: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C661FA: mov     rbx, [rsi+0AC8h]
 * 0000000140C66201: mov     [rbx+18h], r14
 * 0000000140C66205: mov     [rbx+20h], r15
 * 0000000140C66209: mov     rax, [rsi+588h]
 * 0000000140C66210: mov     [rax], rbx
 * 0000000140C66213: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6621A: mov     rax, [rsi+588h]
 * 0000000140C66221: mov     [rax+8], r14
 * 0000000140C66225: mov     dword ptr [rax+14h], 1000h
 * 0000000140C6622C: cmp     [rsi+918h], r13d
 * 0000000140C66233: jnz     loc_140C6633D
 * 0000000140C66239: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C66243: add     rax, rsi
 * 0000000140C66246: mov     [rsi+920h], rax
 * 0000000140C6624D: lea     rax, [rbx+rdi]
 * 0000000140C66251: mov     [rsi+928h], rax
 * 0000000140C66258: movsxd  rax, dword ptr [rbx]
 * 0000000140C6625B: mov     [rsi+930h], rax
 * 0000000140C66262: mov     [rsi+938h], r12
 * 0000000140C66269: mov     [rsi+918h], r9d
 * 0000000140C66270: mov     ecx, [rsi+9D8h]
 * 0000000140C66276: bt      ecx, 1Dh
 * 0000000140C6627A: jb      loc_140C6633D
 * 0000000140C66280: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6628A: jz      loc_140C6633D
 * 0000000140C66290: test    r9b, cl
 * 0000000140C66293: jz      loc_140C6633D
 * 0000000140C66299: mov     ecx, [rsi+0A74h]
 * 0000000140C6629F: mov     eax, [rsi+804h]
 * 0000000140C662A5: mov     r10, [rsi+838h]
 * 0000000140C662AC: sub     eax, ecx
 * 0000000140C662AE: mov     r8, [rsi+0A78h]
 * 0000000140C662B5: lea     rdx, [rcx+rsi]
 * 0000000140C662B9: mov     ecx, eax
 * 0000000140C662BB: shr     rcx, 3
 * 0000000140C662BF: lea     r9, [rdx+rcx*8]
 * 0000000140C662C3: jmp     short loc_140C662E6
 * 0000000140C662C5: xor     [rdx], r8
 * 0000000140C662C8: mov     rax, [rdx]
 * 0000000140C662CB: movzx   ecx, r8b
 * 0000000140C662CF: xor     rax, r10
 * 0000000140C662D2: and     ecx, 3Fh
 * 0000000140C662D5: ror     r8, cl
 * 0000000140C662D8: add     r8, rax
 * 0000000140C662DB: xor     r8, 0F05h
 * 0000000140C662E2: add     rdx, 8
 * 0000000140C662E6: cmp     rdx, r9
 * 0000000140C662E9: jnz     short loc_140C662C5
 * 0000000140C662EB: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C662F3: cmp     r8, [rsi+0A80h]
 * 0000000140C662FA: jz      short loc_140C6633D
 * 0000000140C662FC: mov     ecx, [rsi+804h]
 * 0000000140C66302: mov     rax, [rsi+588h]
 * 0000000140C66309: mov     [rax], rsi
 * 0000000140C6630C: mov     [rax+10h], ecx
 * 0000000140C6630F: mov     rcx, [rsi+0A80h]
 * 0000000140C66316: cmp     [rsi+918h], r13d
 * 0000000140C6631D: jnz     short loc_140C6632D
 * 0000000140C6631F: mov     rax, [rsi+588h]
 * 0000000140C66326: xor     rcx, r8
 * 0000000140C66329: mov     [rax+18h], rcx
 * 0000000140C6632D: xor     edx, edx
 * 0000000140C6632F: mov     r9d, 100h
 * 0000000140C66335: mov     rcx, rsi
 * 0000000140C66338: call    sub_140C7903C
 * 0000000140C6633D: mov     rax, [rsi+318h]
 * 0000000140C66344: lea     rdx, [rbp+7B0h+var_678]
 * 0000000140C6634B: mov     rcx, r15
 * 0000000140C6634E: call    KeGuardDispatchICall
 * 0000000140C66353: mov     r14, rax
 * 0000000140C66356: test    rax, rax
 * 0000000140C66359: jnz     loc_140C6618C
 * 0000000140C6635F: mov     r12, [rbp+7B0h+arg_8]
 * 0000000140C66366: xor     ecx, ecx
 * 0000000140C66368: mov     r13, [rsp+8B0h+var_858]
 * 0000000140C6636D: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C66372: add     r12, 10h
 * 0000000140C66376: mov     r15d, 1
 * 0000000140C6637C: sub     r13, r15
 * 0000000140C6637F: mov     [rbp+7B0h+arg_8], r12
 * 0000000140C66386: mov     [rsp+8B0h+var_858], r13
 * 0000000140C6638B: jnz     loc_140C66146
 * 0000000140C66391: lea     edi, [r15+1]
 * 0000000140C66395: mov     r11d, 1000h
 * 0000000140C6639B: xor     r12d, r12d
 * 0000000140C6639E: jmp     loc_140C713A3
 * 0000000140C663A3: mov     r8d, [r13+10h]
 * 0000000140C663A7: test    r8d, r8d
 * 0000000140C663AA: jnz     loc_140C66A8A
 * 0000000140C663B0: lea     rax, [r13+30h]
 * 0000000140C663B4: xor     r9d, r9d
 * 0000000140C663B7: mov     [rbp+7B0h+var_578], rax
 * 0000000140C663BE: lea     rcx, [rbp+7B0h+var_580]
 * 0000000140C663C5: movzx   eax, word ptr [r13+28h]
 * 0000000140C663CA: xor     r8d, r8d
 * 0000000140C663CD: mov     [rbp+7B0h+var_580], ax
 * 0000000140C663D4: xor     edx, edx
 * 0000000140C663D6: mov     [rbp+7B0h+var_57E], ax
 * 0000000140C663DD: lea     rax, [rbp+7B0h+var_760]
 * 0000000140C663E1: mov     [rsp+8B0h+var_878], rax
 * 0000000140C663E6: mov     rax, [rsi+508h]
 * 0000000140C663ED: mov     [rsp+8B0h+var_880], r12
 * 0000000140C663F2: mov     byte ptr [rsp+8B0h+var_888], r12b
 * 0000000140C663F7: mov     [rsp+8B0h+BugCheckParameter4], rax
 * 0000000140C663FC: mov     rax, [rsi+1F8h]
 * 0000000140C66403: call    KeGuardDispatchICall
 * 0000000140C66408: test    eax, eax
 * 0000000140C6640A: js      loc_140C6F354
 * 0000000140C66410: mov     rax, [rbp+7B0h+var_760]
 * 0000000140C66414: mov     ecx, [rax+10h]
 * 0000000140C66417: mov     eax, 10h
 * 0000000140C6641C: test    al, cl
 * 0000000140C6641E: jnz     short loc_140C66435
 * 0000000140C66420: mov     rax, [rsi+1F0h]
 * 0000000140C66427: mov     rcx, [rbp+7B0h+var_760]
 * 0000000140C6642B: call    KeGuardDispatchICall
 * 0000000140C66430: jmp     loc_140C6F354
 * 0000000140C66435: mov     rcx, [rsi+1F8h]
 * 0000000140C6643C: lea     rdx, [rbp+7B0h+var_158]
 * 0000000140C66443: mov     rax, [rsi+210h]
 * 0000000140C6644A: call    KeGuardDispatchICall
 * 0000000140C6644F: mov     rax, [rbp+7B0h+var_150]
 * 0000000140C66456: test    rax, rax
 * 0000000140C66459: jz      short loc_140C66486
 * 0000000140C6645B: mov     r12, rax
 * 0000000140C6645E: mov     [rbp+7B0h+var_730], rax
 * 0000000140C66465: mov     rax, [rsi+208h]
 * 0000000140C6646C: mov     rcx, r12
 * 0000000140C6646F: call    KeGuardDispatchICall
 * 0000000140C66474: xor     r15d, r15d
 * 0000000140C66477: test    rax, rax
 * 0000000140C6647A: jz      short loc_140C66490
 * 0000000140C6647C: mov     r14d, [rax+50h]
 * 0000000140C66480: mov     [rbp+7B0h+var_770], r14d
 * 0000000140C66484: jmp     short loc_140C66494
 * 0000000140C66486: mov     r12, [rbp+7B0h+var_730]
 * 0000000140C6648D: xor     r15d, r15d
 * 0000000140C66490: mov     r14d, [rbp+7B0h+var_770]
 * 0000000140C66494: mov     rcx, [r13+18h]
 * 0000000140C66498: lea     rdx, [rbp+7B0h+var_188]
 * 0000000140C6649F: mov     rax, [rsi+210h]
 * 0000000140C664A6: call    KeGuardDispatchICall
 * 0000000140C664AB: mov     rax, [rbp+7B0h+var_180]
 * 0000000140C664B2: test    rax, rax
 * 0000000140C664B5: jz      short loc_140C664DF
 * 0000000140C664B7: mov     rbx, rax
 * 0000000140C664BA: mov     [rbp+7B0h+var_728], rax
 * 0000000140C664C1: mov     rax, [rsi+208h]
 * 0000000140C664C8: mov     rcx, rbx
 * 0000000140C664CB: call    KeGuardDispatchICall
 * 0000000140C664D0: test    rax, rax
 * 0000000140C664D3: jz      short loc_140C664E6
 * 0000000140C664D5: mov     r9d, [rax+50h]
 * 0000000140C664D9: mov     [rbp+7B0h+var_798], r9d
 * 0000000140C664DD: jmp     short loc_140C664EA
 * 0000000140C664DF: mov     rbx, [rbp+7B0h+var_728]
 * 0000000140C664E6: mov     r9d, [rbp+7B0h+var_798]
 * 0000000140C664EA: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140C664F2: jb      short loc_140C66508
 * 0000000140C664F4: mov     rax, [rbp+7B0h+var_760]
 * 0000000140C664F8: add     rax, 70h ; 'p'
 * 0000000140C664FC: mov     [r13+8], rax
 * 0000000140C66500: mov     dword ptr [r13+10h], 0E0h
 * 0000000140C66508: mov     rcx, [rbp+7B0h+var_760]
 * 0000000140C6650C: mov     dl, r15b
 * 0000000140C6650F: mov     r10d, r14d
 * 0000000140C66512: movzx   eax, dl
 * 0000000140C66515: mov     r8, [rcx+rax*8+70h]
 * 0000000140C6651A: test    r14d, r14d
 * 0000000140C6651D: jz      short loc_140C66531
 * 0000000140C6651F: lea     rax, [r12-1]
 * 0000000140C66524: add     rax, r10
 * 0000000140C66527: cmp     r8, r12
 * 0000000140C6652A: jb      short loc_140C66531
 * 0000000140C6652C: cmp     r8, rax
 * 0000000140C6652F: jbe     short loc_140C66556
 * 0000000140C66531: mov     eax, r9d
 * 0000000140C66534: test    r9d, r9d
 * 0000000140C66537: jz      loc_140C66942
 * 0000000140C6653D: lea     r9, [rbx-1]
 * 0000000140C66541: add     r9, rax
 * 0000000140C66544: cmp     r8, rbx
 * 0000000140C66547: jb      loc_140C66942
 * 0000000140C6654D: cmp     r8, r9
 * 0000000140C66550: ja      loc_140C66942
 * 0000000140C66556: mov     r9d, [rbp+7B0h+var_798]
 * 0000000140C6655A: add     dl, 1
 * 0000000140C6655D: cmp     dl, 1Ch
 * 0000000140C66560: jb      short loc_140C66512
 * 0000000140C66562: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140C6656A: jnb     short loc_140C6657D
 * 0000000140C6656C: mov     rax, [rsi+1F0h]
 * 0000000140C66573: call    KeGuardDispatchICall
 * 0000000140C66578: jmp     loc_140C6532F
 * 0000000140C6657D: mov     r14, [r13+8]
 * 0000000140C66581: mov     r9d, [r13+10h]
 * 0000000140C66585: mov     r10, r14
 * 0000000140C66588: add     [rsi+848h], r9d
 * 0000000140C6658F: mov     rax, r14
 * 0000000140C66592: mov     r11d, [rsi+834h]
 * 0000000140C66599: mov     r15, [rsi+838h]
 * 0000000140C665A0: lea     rcx, [r14+r9]
 * 0000000140C665A4: cmp     r14, rcx
 * 0000000140C665A7: jnb     short loc_140C665B9
 * 0000000140C665A9: mov     edx, 40h ; '@'
 * 0000000140C665AE: prefetchnta byte ptr [rax]
 * 0000000140C665B1: add     rax, rdx
 * 0000000140C665B4: cmp     rax, rcx
 * 0000000140C665B7: jb      short loc_140C665AE
 * 0000000140C665B9: mov     ebx, r9d
 * 0000000140C665BC: mov     r8, r15
 * 0000000140C665BF: shr     ebx, 7
 * 0000000140C665C2: test    ebx, ebx
 * 0000000140C665C4: jz      short loc_140C66639
 * 0000000140C665C6: mov     edi, 1
 * 0000000140C665CB: mov     esi, 0FFFFFFFFh
 * 0000000140C665D0: mov     r12, 7010008004002001h
 * 0000000140C665DA: mov     eax, 8
 * 0000000140C665DF: xor     r8, [r10]
 * 0000000140C665E2: mov     ecx, r11d
 * 0000000140C665E5: rol     r8, cl
 * 0000000140C665E8: xor     r8, [r10+8]
 * 0000000140C665EC: add     r10, 10h
 * 0000000140C665F0: rol     r8, cl
 * 0000000140C665F3: sub     rax, rdi
 * 0000000140C665F6: jnz     short loc_140C665DF
 * 0000000140C665F8: mov     rcx, r10
 * 0000000140C665FB: sub     rcx, r14
 * 0000000140C665FE: xor     rcx, r15
 * 0000000140C66601: mov     rax, rcx
 * 0000000140C66604: rol     rax, 11h
 * 0000000140C66608: xor     rcx, rax
 * 0000000140C6660B: mov     rax, r12
 * 0000000140C6660E: mul     rcx
 * 0000000140C66611: mov     [rbp+7B0h+var_378], rdx
 * 0000000140C66618: xor     rdx, rax
 * 0000000140C6661B: xor     r11d, edx
 * 0000000140C6661E: and     r11d, 3Fh
 * 0000000140C66622: cmovz   r11d, edi
 * 0000000140C66626: add     ebx, esi
 * 0000000140C66628: jnz     short loc_140C665DA
 * 0000000140C6662A: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6662F: lea     edi, [rbx+2]
 * 0000000140C66632: mov     r12, [rbp+7B0h+var_730]
 * 0000000140C66639: and     r9d, 7Fh
 * 0000000140C6663D: mov     ebx, 1
 * 0000000140C66642: cmp     r9d, 8
 * 0000000140C66646: jb      short loc_140C66665
 * 0000000140C66648: mov     eax, r9d
 * 0000000140C6664B: shr     rax, 3
 * 0000000140C6664F: xor     r8, [r10]
 * 0000000140C66652: mov     ecx, r11d
 * 0000000140C66655: rol     r8, cl
 * 0000000140C66658: add     r10, 8
 * 0000000140C6665C: add     r9d, 0FFFFFFF8h
 * 0000000140C66660: sub     rax, rbx
 * 0000000140C66663: jnz     short loc_140C6664F
 * 0000000140C66665: test    r9d, r9d
 * 0000000140C66668: jz      short loc_140C66688
 * 0000000140C6666A: mov     edi, 0FFFFFFFFh
 * 0000000140C6666F: movzx   eax, byte ptr [r10]
 * 0000000140C66673: mov     ecx, r11d
 * 0000000140C66676: xor     r8, rax
 * 0000000140C66679: add     r10, rbx
 * 0000000140C6667C: rol     r8, cl
 * 0000000140C6667F: add     r9d, edi
 * 0000000140C66682: jnz     short loc_140C6666F
 * 0000000140C66684: lea     edi, [r9+2]
 * 0000000140C66688: mov     rax, r8
 * 0000000140C6668B: shr     rax, 1Fh
 * 0000000140C6668F: xor     r9d, r9d
 * 0000000140C66692: jmp     short loc_140C6669B
 * 0000000140C66694: xor     r8d, eax
 * 0000000140C66697: shr     rax, 1Fh
 * 0000000140C6669B: test    rax, rax
 * 0000000140C6669E: jnz     short loc_140C66694
 * 0000000140C666A0: btr     r8d, 1Fh
 * 0000000140C666A5: mov     r10d, r9d
 * 0000000140C666A8: mov     [r13+14h], r8d
 * 0000000140C666AC: mov     rax, [rbp+7B0h+var_760]
 * 0000000140C666B0: mov     r14, [rax+50h]
 * 0000000140C666B4: test    r14, r14
 * 0000000140C666B7: jz      short loc_140C66731
 * 0000000140C666B9: mov     r10d, [r14]
 * 0000000140C666BC: mov     dl, r9b
 * 0000000140C666BF: lea     r8d, [r10-8]
 * 0000000140C666C3: shr     r8d, 3
 * 0000000140C666C7: test    r8d, r8d
 * 0000000140C666CA: jz      short loc_140C66731
 * 0000000140C666CC: mov     r11d, [rbp+7B0h+var_770]
 * 0000000140C666D0: mov     rbx, [rbp+7B0h+var_728]
 * 0000000140C666D7: mov     r15d, [rbp+7B0h+var_798]
 * 0000000140C666DB: movzx   eax, dl
 * 0000000140C666DE: mov     rcx, [r14+rax*8+8]
 * 0000000140C666E3: test    rcx, rcx
 * 0000000140C666E6: jz      short loc_140C66726
 * 0000000140C666E8: test    r11, r11
 * 0000000140C666EB: jz      short loc_140C666FE
 * 0000000140C666ED: lea     rax, [r11-1]
 * 0000000140C666F1: add     rax, r12
 * 0000000140C666F4: cmp     rcx, r12
 * 0000000140C666F7: jb      short loc_140C666FE
 * 0000000140C666F9: cmp     rcx, rax
 * 0000000140C666FC: jbe     short loc_140C66726
 * 0000000140C666FE: mov     rax, r15
 * 0000000140C66701: test    r15d, r15d
 * 0000000140C66704: jz      loc_140C667EC
 * 0000000140C6670A: lea     r9, [rbx-1]
 * 0000000140C6670E: add     r9, rax
 * 0000000140C66711: cmp     rcx, rbx
 * 0000000140C66714: jb      loc_140C667EC
 * 0000000140C6671A: cmp     rcx, r9
 * 0000000140C6671D: ja      loc_140C667EC
 * 0000000140C66723: xor     r9d, r9d
 * 0000000140C66726: add     dl, 1
 * 0000000140C66729: movzx   eax, dl
 * 0000000140C6672C: cmp     eax, r8d
 * 0000000140C6672F: jb      short loc_140C666DB
 * 0000000140C66731: add     [rsi+848h], r10d
 * 0000000140C66738: mov     r9, r14
 * 0000000140C6673B: mov     r11d, [rsi+834h]
 * 0000000140C66742: mov     rax, r14
 * 0000000140C66745: mov     r15, [rsi+838h]
 * 0000000140C6674C: mov     ecx, r10d
 * 0000000140C6674F: add     rcx, r14
 * 0000000140C66752: cmp     r14, rcx
 * 0000000140C66755: jnb     short loc_140C66767
 * 0000000140C66757: mov     edx, 40h ; '@'
 * 0000000140C6675C: prefetchnta byte ptr [rax]
 * 0000000140C6675F: add     rax, rdx
 * 0000000140C66762: cmp     rax, rcx
 * 0000000140C66765: jb      short loc_140C6675C
 * 0000000140C66767: mov     ebx, r10d
 * 0000000140C6676A: xor     r12d, r12d
 * 0000000140C6676D: shr     ebx, 7
 * 0000000140C66770: mov     r8, r15
 * 0000000140C66773: test    ebx, ebx
 * 0000000140C66775: jz      loc_140C668D7
 * 0000000140C6677B: lea     edi, [r12+1]
 * 0000000140C66780: mov     rsi, 7010008004002001h
 * 0000000140C6678A: mov     eax, 8
 * 0000000140C6678F: xor     r8, [r9]
 * 0000000140C66792: mov     ecx, r11d
 * 0000000140C66795: rol     r8, cl
 * 0000000140C66798: xor     r8, [r9+8]
 * 0000000140C6679C: add     r9, 10h
 * 0000000140C667A0: rol     r8, cl
 * 0000000140C667A3: sub     rax, rdi
 * 0000000140C667A6: jnz     short loc_140C6678F
 * 0000000140C667A8: mov     rcx, r9
 * 0000000140C667AB: sub     rcx, r14
 * 0000000140C667AE: xor     rcx, r15
 * 0000000140C667B1: mov     rax, rcx
 * 0000000140C667B4: rol     rax, 11h
 * 0000000140C667B8: xor     rcx, rax
 * 0000000140C667BB: mov     rax, rsi
 * 0000000140C667BE: mul     rcx
 * 0000000140C667C1: mov     [rbp+7B0h+var_368], rdx
 * 0000000140C667C8: xor     rdx, rax
 * 0000000140C667CB: xor     r11d, edx
 * 0000000140C667CE: mov     edx, 0FFFFFFFFh
 * 0000000140C667D3: and     r11d, 3Fh
 * 0000000140C667D7: cmovz   r11d, edi
 * 0000000140C667DB: add     ebx, edx
 * 0000000140C667DD: jnz     short loc_140C6678A
 * 0000000140C667DF: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C667E4: lea     edi, [rbx+2]
 * 0000000140C667E7: jmp     loc_140C668DC
 * 0000000140C667EC: mov     [r13+20h], rcx
 * 0000000140C667F0: xor     r12d, r12d
 * 0000000140C667F3: mov     rax, [rsi+588h]
 * 0000000140C667FA: lea     r15d, [r12+1]
 * 0000000140C667FF: mov     [rax], r13
 * 0000000140C66802: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C66809: cmp     [rsi+918h], r12d
 * 0000000140C66810: jnz     loc_140C6F354
 * 0000000140C66816: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C66820: add     rax, rsi
 * 0000000140C66823: mov     [rsi+920h], rax
 * 0000000140C6682A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C66834: add     rax, r13
 * 0000000140C66837: mov     [rsi+928h], rax
 * 0000000140C6683E: movsxd  rax, dword ptr [r13+0]
 * 0000000140C66842: mov     [rsi+930h], rax
 * 0000000140C66849: mov     [rsi+938h], r14
 * 0000000140C66850: mov     [rsi+918h], r15d
 * 0000000140C66857: mov     ecx, [rsi+9D8h]
 * 0000000140C6685D: bt      ecx, 1Dh
 * 0000000140C66861: jb      loc_140C6F354
 * 0000000140C66867: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C66871: jz      loc_140C6F354
 * 0000000140C66877: test    r15b, cl
 * 0000000140C6687A: jz      loc_140C6F354
 * 0000000140C66880: mov     ecx, [rsi+0A74h]
 * 0000000140C66886: mov     eax, [rsi+804h]
 * 0000000140C6688C: mov     r10, [rsi+838h]
 * 0000000140C66893: sub     eax, ecx
 * 0000000140C66895: mov     r8, [rsi+0A78h]
 * 0000000140C6689C: lea     rdx, [rcx+rsi]
 * 0000000140C668A0: mov     ecx, eax
 * 0000000140C668A2: shr     rcx, 3
 * 0000000140C668A6: lea     r9, [rdx+rcx*8]
 * 0000000140C668AA: jmp     short loc_140C668CD
 * 0000000140C668AC: xor     [rdx], r8
 * 0000000140C668AF: mov     rax, [rdx]
 * 0000000140C668B2: movzx   ecx, r8b
 * 0000000140C668B6: xor     rax, r10
 * 0000000140C668B9: and     ecx, 3Fh
 * 0000000140C668BC: ror     r8, cl
 * 0000000140C668BF: add     r8, rax
 * 0000000140C668C2: xor     r8, 0F05h
 * 0000000140C668C9: add     rdx, 8
 * 0000000140C668CD: cmp     rdx, r9
 * 0000000140C668D0: jnz     short loc_140C668AC
 * 0000000140C668D2: jmp     loc_140C65A4E
 * 0000000140C668D7: mov     edx, 0FFFFFFFFh
 * 0000000140C668DC: and     r10d, 7Fh
 * 0000000140C668E0: mov     r15d, 1
 * 0000000140C668E6: cmp     r10d, 8
 * 0000000140C668EA: jb      short loc_140C66909
 * 0000000140C668EC: mov     eax, r10d
 * 0000000140C668EF: shr     rax, 3
 * 0000000140C668F3: xor     r8, [r9]
 * 0000000140C668F6: mov     ecx, r11d
 * 0000000140C668F9: rol     r8, cl
 * 0000000140C668FC: add     r9, 8
 * 0000000140C66900: add     r10d, 0FFFFFFF8h
 * 0000000140C66904: sub     rax, r15
 * 0000000140C66907: jnz     short loc_140C668F3
 * 0000000140C66909: test    r10d, r10d
 * 0000000140C6690C: jz      short loc_140C66923
 * 0000000140C6690E: movzx   eax, byte ptr [r9]
 * 0000000140C66912: mov     ecx, r11d
 * 0000000140C66915: xor     r8, rax
 * 0000000140C66918: add     r9, r15
 * 0000000140C6691B: rol     r8, cl
 * 0000000140C6691E: add     r10d, edx
 * 0000000140C66921: jnz     short loc_140C6690E
 * 0000000140C66923: mov     rax, r8
 * 0000000140C66926: jmp     short loc_140C6692B
 * 0000000140C66928: xor     r8d, eax
 * 0000000140C6692B: shr     rax, 1Fh
 * 0000000140C6692F: test    rax, rax
 * 0000000140C66932: jnz     short loc_140C66928
 * 0000000140C66934: btr     r8d, 1Fh
 * 0000000140C66939: mov     [r13+2Ch], r8d
 * 0000000140C6693D: jmp     loc_140C6F354
 * 0000000140C66942: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140C6694A: mov     r15d, 1
 * 0000000140C66950: jnb     short loc_140C669A0
 * 0000000140C66952: mov     rcx, [rsi+0AC8h]
 * 0000000140C66959: lea     edx, [r15+2Fh]
 * 0000000140C6695D: lea     r9d, [r15+5]
 * 0000000140C66961: mov     rax, [r13+0]
 * 0000000140C66965: add     edx, 0FFFFFFF8h
 * 0000000140C66968: mov     [rcx], rax
 * 0000000140C6696B: add     r13, 8
 * 0000000140C6696F: add     rcx, 8
 * 0000000140C66973: sub     r9, r15
 * 0000000140C66976: jnz     short loc_140C66961
 * 0000000140C66978: xor     r12d, r12d
 * 0000000140C6697B: test    edx, edx
 * 0000000140C6697D: jz      short loc_140C66997
 * 0000000140C6697F: mov     edi, 0FFFFFFFFh
 * 0000000140C66984: mov     al, [r13+0]
 * 0000000140C66988: add     r13, r15
 * 0000000140C6698B: mov     [rcx], al
 * 0000000140C6698D: add     rcx, r15
 * 0000000140C66990: add     edx, edi
 * 0000000140C66992: jnz     short loc_140C66984
 * 0000000140C66994: lea     edi, [rdx+2]
 * 0000000140C66997: mov     r13, [rsi+0AC8h]
 * 0000000140C6699E: jmp     short loc_140C669A3
 * 0000000140C669A0: xor     r12d, r12d
 * 0000000140C669A3: mov     [r13+20h], r8
 * 0000000140C669A7: mov     rax, [rsi+588h]
 * 0000000140C669AE: mov     [rax], r13
 * 0000000140C669B1: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C669B8: mov     rcx, [r13+8]
 * 0000000140C669BC: cmp     [rsi+918h], r12d
 * 0000000140C669C3: jnz     loc_140C6F354
 * 0000000140C669C9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C669D3: add     rax, rsi
 * 0000000140C669D6: mov     [rsi+920h], rax
 * 0000000140C669DD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C669E7: add     rax, r13
 * 0000000140C669EA: mov     [rsi+928h], rax
 * 0000000140C669F1: movsxd  rax, dword ptr [r13+0]
 * 0000000140C669F5: mov     [rsi+930h], rax
 * 0000000140C669FC: mov     [rsi+938h], rcx
 * 0000000140C66A03: mov     [rsi+918h], r15d
 * 0000000140C66A0A: mov     ecx, [rsi+9D8h]
 * 0000000140C66A10: bt      ecx, 1Dh
 * 0000000140C66A14: jb      loc_140C6F354
 * 0000000140C66A1A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C66A24: jz      loc_140C6F354
 * 0000000140C66A2A: test    r15b, cl
 * 0000000140C66A2D: jz      loc_140C6F354
 * 0000000140C66A33: mov     ecx, [rsi+0A74h]
 * 0000000140C66A39: mov     eax, [rsi+804h]
 * 0000000140C66A3F: mov     r10, [rsi+838h]
 * 0000000140C66A46: sub     eax, ecx
 * 0000000140C66A48: mov     r8, [rsi+0A78h]
 * 0000000140C66A4F: lea     rdx, [rcx+rsi]
 * 0000000140C66A53: mov     ecx, eax
 * 0000000140C66A55: shr     rcx, 3
 * 0000000140C66A59: lea     r9, [rdx+rcx*8]
 * 0000000140C66A5D: jmp     short loc_140C66A80
 * 0000000140C66A5F: xor     [rdx], r8
 * 0000000140C66A62: mov     rax, [rdx]
 * 0000000140C66A65: movzx   ecx, r8b
 * 0000000140C66A69: xor     rax, r10
 * 0000000140C66A6C: and     ecx, 3Fh
 * 0000000140C66A6F: ror     r8, cl
 * 0000000140C66A72: add     r8, rax
 * 0000000140C66A75: xor     r8, 0F05h
 * 0000000140C66A7C: add     rdx, 8
 * 0000000140C66A80: cmp     rdx, r9
 * 0000000140C66A83: jnz     short loc_140C66A5F
 * 0000000140C66A85: jmp     loc_140C65A4E
 * 0000000140C66A8A: mov     r14, [r13+8]
 * 0000000140C66A8E: add     [rsi+848h], r8d
 * 0000000140C66A95: mov     r9, r14
 * 0000000140C66A98: mov     r10d, [rsi+834h]
 * 0000000140C66A9F: mov     rax, r14
 * 0000000140C66AA2: mov     r15, [rsi+838h]
 * 0000000140C66AA9: lea     rcx, [r14+r8]
 * 0000000140C66AAD: cmp     r14, rcx
 * 0000000140C66AB0: jnb     short loc_140C66AC2
 * 0000000140C66AB2: mov     edx, 40h ; '@'
 * 0000000140C66AB7: prefetchnta byte ptr [rax]
 * 0000000140C66ABA: add     rax, rdx
 * 0000000140C66ABD: cmp     rax, rcx
 * 0000000140C66AC0: jb      short loc_140C66AB7
 * 0000000140C66AC2: mov     r11d, r8d
 * 0000000140C66AC5: mov     rbx, r15
 * 0000000140C66AC8: shr     r11d, 7
 * 0000000140C66ACC: mov     edx, 1
 * 0000000140C66AD1: test    r11d, r11d
 * 0000000140C66AD4: jz      short loc_140C66B43
 * 0000000140C66AD6: mov     edi, 0FFFFFFFFh
 * 0000000140C66ADB: mov     rsi, 7010008004002001h
 * 0000000140C66AE5: mov     eax, 8
 * 0000000140C66AEA: xor     rbx, [r9]
 * 0000000140C66AED: mov     ecx, r10d
 * 0000000140C66AF0: rol     rbx, cl
 * 0000000140C66AF3: xor     rbx, [r9+8]
 * 0000000140C66AF7: add     r9, 10h
 * 0000000140C66AFB: rol     rbx, cl
 * 0000000140C66AFE: sub     rax, rdx
 * 0000000140C66B01: jnz     short loc_140C66AEA
 * 0000000140C66B03: mov     rcx, r9
 * 0000000140C66B06: sub     rcx, r14
 * 0000000140C66B09: xor     rcx, r15
 * 0000000140C66B0C: mov     rax, rcx
 * 0000000140C66B0F: rol     rax, 11h
 * 0000000140C66B13: xor     rcx, rax
 * 0000000140C66B16: mov     rax, rsi
 * 0000000140C66B19: mul     rcx
 * 0000000140C66B1C: mov     [rbp+7B0h+var_4B0], rdx
 * 0000000140C66B23: xor     rdx, rax
 * 0000000140C66B26: xor     r10d, edx
 * 0000000140C66B29: mov     edx, 1
 * 0000000140C66B2E: and     r10d, 3Fh
 * 0000000140C66B32: cmovz   r10d, edx
 * 0000000140C66B36: add     r11d, edi
 * 0000000140C66B39: jnz     short loc_140C66AE5
 * 0000000140C66B3B: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C66B40: lea     edi, [rdx+1]
 * 0000000140C66B43: and     r8d, 7Fh
 * 0000000140C66B47: cmp     r8d, 8
 * 0000000140C66B4B: jb      short loc_140C66B6A
 * 0000000140C66B4D: mov     eax, r8d
 * 0000000140C66B50: shr     rax, 3
 * 0000000140C66B54: xor     rbx, [r9]
 * 0000000140C66B57: mov     ecx, r10d
 * 0000000140C66B5A: rol     rbx, cl
 * 0000000140C66B5D: add     r9, 8
 * 0000000140C66B61: add     r8d, 0FFFFFFF8h
 * 0000000140C66B65: sub     rax, rdx
 * 0000000140C66B68: jnz     short loc_140C66B54
 * 0000000140C66B6A: test    r8d, r8d
 * 0000000140C66B6D: jz      short loc_140C66B8D
 * 0000000140C66B6F: mov     edi, 0FFFFFFFFh
 * 0000000140C66B74: movzx   eax, byte ptr [r9]
 * 0000000140C66B78: mov     ecx, r10d
 * 0000000140C66B7B: xor     rbx, rax
 * 0000000140C66B7E: add     r9, rdx
 * 0000000140C66B81: rol     rbx, cl
 * 0000000140C66B84: add     r8d, edi
 * 0000000140C66B87: jnz     short loc_140C66B74
 * 0000000140C66B89: lea     edi, [r8+2]
 * 0000000140C66B8D: mov     rax, rbx
 * 0000000140C66B90: jmp     short loc_140C66B94
 * 0000000140C66B92: xor     ebx, eax
 * 0000000140C66B94: shr     rax, 1Fh
 * 0000000140C66B98: test    rax, rax
 * 0000000140C66B9B: jnz     short loc_140C66B92
 * 0000000140C66B9D: btr     ebx, 1Fh
 * 0000000140C66BA1: cmp     ebx, [r13+14h]
 * 0000000140C66BA5: jz      loc_140C66C66
 * 0000000140C66BAB: cmp     [r13+0], eax
 * 0000000140C66BAF: jnz     short loc_140C66BB9
 * 0000000140C66BB1: cmp     [r13+18h], eax
 * 0000000140C66BB5: cmovnz  r12d, edx
 * 0000000140C66BB9: mov     ecx, [r13+10h]
 * 0000000140C66BBD: mov     rdx, [r13+8]
 * 0000000140C66BC1: test    rcx, rcx
 * 0000000140C66BC4: jz      loc_140C66D9E
 * 0000000140C66BCA: mov     eax, [rsi+9DCh]
 * 0000000140C66BD0: mov     r8d, 40h ; '@'
 * 0000000140C66BD6: test    r8b, al
 * 0000000140C66BD9: jz      loc_140C66D9E
 * 0000000140C66BDF: mov     r15, cr8
 * 0000000140C66BE3: mov     r14, rdx
 * 0000000140C66BE6: lea     rax, [rcx-1]
 * 0000000140C66BEA: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C66BF1: add     rax, rdx
 * 0000000140C66BF4: or      rax, 0FFFh
 * 0000000140C66BFA: mov     [rsp+8B0h+var_858], rax
 * 0000000140C66BFF: lea     r13, [r14-1]
 * 0000000140C66C03: mov     cr8, rdi
 * 0000000140C66C07: mov     rax, [rsi+468h]
 * 0000000140C66C0E: xor     edx, edx
 * 0000000140C66C10: mov     rcx, r14
 * 0000000140C66C13: call    KeGuardDispatchICall
 * 0000000140C66C18: cmp     eax, 0C000022Dh
 * 0000000140C66C1D: jnz     short loc_140C66C3F
 * 0000000140C66C1F: test    r12d, r12d
 * 0000000140C66C22: jnz     loc_140C66D91
 * 0000000140C66C28: lea     eax, [r12+1]
 * 0000000140C66C2D: cmp     r15b, al
 * 0000000140C66C30: ja      short loc_140C66C47
 * 0000000140C66C32: movzx   eax, r15b
 * 0000000140C66C36: mov     cr8, rax
 * 0000000140C66C3A: mov     al, [r14]
 * 0000000140C66C3D: jmp     short loc_140C66C03
 * 0000000140C66C3F: test    eax, eax
 * 0000000140C66C41: js      loc_140C66D91
 * 0000000140C66C47: mov     eax, 1000h
 * 0000000140C66C4C: add     r14, rax
 * 0000000140C66C4F: add     r13, rax
 * 0000000140C66C52: cmp     r13, [rsp+8B0h+var_858]
 * 0000000140C66C57: jnz     short loc_140C66C07
 * 0000000140C66C59: movzx   eax, r15b
 * 0000000140C66C5D: mov     cr8, rax
 * 0000000140C66C61: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C66C66: xor     r12d, r12d
 * 0000000140C66C69: mov     edx, 1
 * 0000000140C66C6E: mov     rax, [r13+8]
 * 0000000140C66C72: mov     r9d, r12d
 * 0000000140C66C75: add     rax, 0FFFFFFFFFFFFFF90h
 * 0000000140C66C79: mov     [rbp+7B0h+var_760], rax
 * 0000000140C66C7D: mov     r14, [rax+50h]
 * 0000000140C66C81: test    r14, r14
 * 0000000140C66C84: jz      short loc_140C66C89
 * 0000000140C66C86: mov     r9d, [r14]
 * 0000000140C66C89: add     [rsi+848h], r9d
 * 0000000140C66C90: mov     r10, r14
 * 0000000140C66C93: mov     r11d, [rsi+834h]
 * 0000000140C66C9A: mov     rax, r14
 * 0000000140C66C9D: mov     r15, [rsi+838h]
 * 0000000140C66CA4: mov     ecx, r9d
 * 0000000140C66CA7: add     rcx, r14
 * 0000000140C66CAA: cmp     r14, rcx
 * 0000000140C66CAD: jnb     short loc_140C66CC0
 * 0000000140C66CAF: mov     r8d, 40h ; '@'
 * 0000000140C66CB5: prefetchnta byte ptr [rax]
 * 0000000140C66CB8: add     rax, r8
 * 0000000140C66CBB: cmp     rax, rcx
 * 0000000140C66CBE: jb      short loc_140C66CB5
 * 0000000140C66CC0: mov     ebx, r9d
 * 0000000140C66CC3: mov     r8, r15
 * 0000000140C66CC6: shr     ebx, 7
 * 0000000140C66CC9: test    ebx, ebx
 * 0000000140C66CCB: jz      short loc_140C66D39
 * 0000000140C66CCD: mov     edi, 0FFFFFFFFh
 * 0000000140C66CD2: mov     rsi, 7010008004002001h
 * 0000000140C66CDC: mov     eax, 8
 * 0000000140C66CE1: xor     r8, [r10]
 * 0000000140C66CE4: mov     ecx, r11d
 * 0000000140C66CE7: rol     r8, cl
 * 0000000140C66CEA: xor     r8, [r10+8]
 * 0000000140C66CEE: add     r10, 10h
 * 0000000140C66CF2: rol     r8, cl
 * 0000000140C66CF5: sub     rax, rdx
 * 0000000140C66CF8: jnz     short loc_140C66CE1
 * 0000000140C66CFA: mov     rcx, r10
 * 0000000140C66CFD: sub     rcx, r14
 * 0000000140C66D00: xor     rcx, r15
 * 0000000140C66D03: mov     rax, rcx
 * 0000000140C66D06: rol     rax, 11h
 * 0000000140C66D0A: xor     rcx, rax
 * 0000000140C66D0D: mov     rax, rsi
 * 0000000140C66D10: mul     rcx
 * 0000000140C66D13: mov     [rbp+7B0h+var_4A8], rdx
 * 0000000140C66D1A: xor     rdx, rax
 * 0000000140C66D1D: xor     r11d, edx
 * 0000000140C66D20: mov     edx, 1
 * 0000000140C66D25: and     r11d, 3Fh
 * 0000000140C66D29: cmovz   r11d, edx
 * 0000000140C66D2D: add     ebx, edi
 * 0000000140C66D2F: jnz     short loc_140C66CDC
 * 0000000140C66D31: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C66D36: lea     edi, [rdx+1]
 * 0000000140C66D39: and     r9d, 7Fh
 * 0000000140C66D3D: mov     r15d, 1
 * 0000000140C66D43: cmp     r9d, 8
 * 0000000140C66D47: jb      short loc_140C66D66
 * 0000000140C66D49: mov     eax, r9d
 * 0000000140C66D4C: shr     rax, 3
 * 0000000140C66D50: xor     r8, [r10]
 * 0000000140C66D53: mov     ecx, r11d
 * 0000000140C66D56: rol     r8, cl
 * 0000000140C66D59: add     r10, 8
 * 0000000140C66D5D: add     r9d, 0FFFFFFF8h
 * 0000000140C66D61: sub     rax, r15
 * 0000000140C66D64: jnz     short loc_140C66D50
 * 0000000140C66D66: test    r9d, r9d
 * 0000000140C66D69: jz      short loc_140C66D89
 * 0000000140C66D6B: mov     edi, 0FFFFFFFFh
 * 0000000140C66D70: movzx   eax, byte ptr [r10]
 * 0000000140C66D74: mov     ecx, r11d
 * 0000000140C66D77: xor     r8, rax
 * 0000000140C66D7A: add     r10, r15
 * 0000000140C66D7D: rol     r8, cl
 * 0000000140C66D80: add     r9d, edi
 * 0000000140C66D83: jnz     short loc_140C66D70
 * 0000000140C66D85: lea     edi, [r9+2]
 * 0000000140C66D89: mov     rax, r8
 * 0000000140C66D8C: jmp     loc_140C66EEE
 * 0000000140C66D91: movzx   eax, r15b
 * 0000000140C66D95: mov     cr8, rax
 * 0000000140C66D99: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C66D9E: mov     eax, [r13+14h]
 * 0000000140C66DA2: xor     r12d, r12d
 * 0000000140C66DA5: cmp     [rsi+918h], r12d
 * 0000000140C66DAC: jnz     short loc_140C66DC0
 * 0000000140C66DAE: mov     ecx, eax
 * 0000000140C66DB0: mov     eax, ebx
 * 0000000140C66DB2: xor     rcx, rax
 * 0000000140C66DB5: mov     rax, [rsi+588h]
 * 0000000140C66DBC: mov     [rax+18h], rcx
 * 0000000140C66DC0: mov     edx, 1
 * 0000000140C66DC5: mov     rcx, [r13+8]
 * 0000000140C66DC9: cmp     [rsi+918h], r12d
 * 0000000140C66DD0: jnz     loc_140C66C6E
 * 0000000140C66DD6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C66DE0: add     rax, rsi
 * 0000000140C66DE3: mov     [rsi+920h], rax
 * 0000000140C66DEA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C66DF4: add     rax, r13
 * 0000000140C66DF7: mov     [rsi+928h], rax
 * 0000000140C66DFE: movsxd  rax, dword ptr [r13+0]
 * 0000000140C66E02: mov     [rsi+930h], rax
 * 0000000140C66E09: mov     [rsi+938h], rcx
 * 0000000140C66E10: mov     [rsi+918h], edx
 * 0000000140C66E16: mov     ecx, [rsi+9D8h]
 * 0000000140C66E1C: bt      ecx, 1Dh
 * 0000000140C66E20: jb      loc_140C66C6E
 * 0000000140C66E26: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C66E30: jz      loc_140C66C6E
 * 0000000140C66E36: test    dl, cl
 * 0000000140C66E38: jz      loc_140C66C6E
 * 0000000140C66E3E: mov     ecx, [rsi+0A74h]
 * 0000000140C66E44: mov     eax, [rsi+804h]
 * 0000000140C66E4A: mov     r10, [rsi+838h]
 * 0000000140C66E51: sub     eax, ecx
 * 0000000140C66E53: mov     r8, [rsi+0A78h]
 * 0000000140C66E5A: lea     rdx, [rcx+rsi]
 * 0000000140C66E5E: mov     ecx, eax
 * 0000000140C66E60: shr     rcx, 3
 * 0000000140C66E64: lea     r9, [rdx+rcx*8]
 * 0000000140C66E68: jmp     short loc_140C66E8B
 * 0000000140C66E6A: xor     [rdx], r8
 * 0000000140C66E6D: mov     rax, [rdx]
 * 0000000140C66E70: movzx   ecx, r8b
 * 0000000140C66E74: xor     rax, r10
 * 0000000140C66E77: and     ecx, 3Fh
 * 0000000140C66E7A: ror     r8, cl
 * 0000000140C66E7D: add     r8, rax
 * 0000000140C66E80: xor     r8, 0F05h
 * 0000000140C66E87: add     rdx, 8
 * 0000000140C66E8B: cmp     rdx, r9
 * 0000000140C66E8E: jnz     short loc_140C66E6A
 * 0000000140C66E90: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C66E98: cmp     r8, [rsi+0A80h]
 * 0000000140C66E9F: jz      loc_140C66C69
 * 0000000140C66EA5: mov     ecx, [rsi+804h]
 * 0000000140C66EAB: mov     rax, [rsi+588h]
 * 0000000140C66EB2: mov     [rax], rsi
 * 0000000140C66EB5: mov     [rax+10h], ecx
 * 0000000140C66EB8: mov     rcx, [rsi+0A80h]
 * 0000000140C66EBF: cmp     [rsi+918h], r12d
 * 0000000140C66EC6: jnz     short loc_140C66ED6
 * 0000000140C66EC8: mov     rax, [rsi+588h]
 * 0000000140C66ECF: xor     rcx, r8
 * 0000000140C66ED2: mov     [rax+18h], rcx
 * 0000000140C66ED6: xor     edx, edx
 * 0000000140C66ED8: mov     r9d, 100h
 * 0000000140C66EDE: mov     rcx, rsi
 * 0000000140C66EE1: call    sub_140C7903C
 * 0000000140C66EE6: jmp     loc_140C66C69
 * 0000000140C66EEB: xor     r8d, eax
 * 0000000140C66EEE: shr     rax, 1Fh
 * 0000000140C66EF2: test    rax, rax
 * 0000000140C66EF5: jnz     short loc_140C66EEB
 * 0000000140C66EF7: mov     eax, [r13+2Ch]
 * 0000000140C66EFB: btr     r8d, 1Fh
 * 0000000140C66F00: cmp     r8d, eax
 * 0000000140C66F03: jz      loc_140C6F354
 * 0000000140C66F09: cmp     [rsi+918h], r12d
 * 0000000140C66F10: jnz     loc_140C6F354
 * 0000000140C66F16: mov     ecx, eax
 * 0000000140C66F18: mov     eax, r8d
 * 0000000140C66F1B: xor     rcx, rax
 * 0000000140C66F1E: mov     rax, [rsi+588h]
 * 0000000140C66F25: mov     [rax+18h], rcx
 * 0000000140C66F29: cmp     [rsi+918h], r12d
 * 0000000140C66F30: jnz     loc_140C6F354
 * 0000000140C66F36: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C66F40: add     rax, rsi
 * 0000000140C66F43: mov     [rsi+920h], rax
 * 0000000140C66F4A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C66F54: add     rax, r13
 * 0000000140C66F57: mov     [rsi+928h], rax
 * 0000000140C66F5E: movsxd  rax, dword ptr [r13+0]
 * 0000000140C66F62: mov     [rsi+930h], rax
 * 0000000140C66F69: mov     [rsi+938h], r14
 * 0000000140C66F70: mov     [rsi+918h], r15d
 * 0000000140C66F77: mov     ecx, [rsi+9D8h]
 * 0000000140C66F7D: bt      ecx, 1Dh
 * 0000000140C66F81: jb      loc_140C6F354
 * 0000000140C66F87: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C66F91: jz      loc_140C6F354
 * 0000000140C66F97: test    r15b, cl
 * 0000000140C66F9A: jz      loc_140C6F354
 * 0000000140C66FA0: mov     ecx, [rsi+0A74h]
 * 0000000140C66FA6: mov     eax, [rsi+804h]
 * 0000000140C66FAC: mov     r10, [rsi+838h]
 * 0000000140C66FB3: sub     eax, ecx
 * 0000000140C66FB5: mov     r8, [rsi+0A78h]
 * 0000000140C66FBC: lea     rdx, [rcx+rsi]
 * 0000000140C66FC0: mov     ecx, eax
 * 0000000140C66FC2: shr     rcx, 3
 * 0000000140C66FC6: lea     r9, [rdx+rcx*8]
 * 0000000140C66FCA: jmp     short loc_140C66FED
 * 0000000140C66FCC: xor     [rdx], r8
 * 0000000140C66FCF: mov     rax, [rdx]
 * 0000000140C66FD2: movzx   ecx, r8b
 * 0000000140C66FD6: xor     rax, r10
 * 0000000140C66FD9: and     ecx, 3Fh
 * 0000000140C66FDC: ror     r8, cl
 * 0000000140C66FDF: add     r8, rax
 * 0000000140C66FE2: xor     r8, 0F05h
 * 0000000140C66FE9: add     rdx, 8
 * 0000000140C66FED: cmp     rdx, r9
 * 0000000140C66FF0: jnz     short loc_140C66FCC
 * 0000000140C66FF2: jmp     loc_140C65A4E
 * 0000000140C66FF7: mov     eax, [rsi+850h]
 * 0000000140C66FFD: test    r15b, al
 * 0000000140C67000: jz      loc_140C713A3
 * 0000000140C67006: mov     r14, [rsi+5A8h]
 * 0000000140C6700D: mov     rax, [rsi+188h]
 * 0000000140C67014: mov     rbx, [rsi+540h]
 * 0000000140C6701B: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C67020: mov     r12, [rsi+5A0h]
 * 0000000140C67027: mov     [rbp+7B0h+var_828], r12
 * 0000000140C6702B: mov     [rsp+8B0h+var_858], r14
 * 0000000140C67030: call    KeGuardDispatchICall
 * 0000000140C67035: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6703F: jnz     short loc_140C67051
 * 0000000140C67041: mov     ecx, [rsi+978h]
 * 0000000140C67047: cmp     ecx, 7
 * 0000000140C6704A: jnb     short loc_140C67051
 * 0000000140C6704C: shl     r15b, cl
 * 0000000140C6704F: jmp     short loc_140C67069
 * 0000000140C67051: mov     rax, [rsi+138h]
 * 0000000140C67058: xor     edx, edx
 * 0000000140C6705A: mov     rcx, [rsi+0A48h]
 * 0000000140C67061: call    KeGuardDispatchICall
 * 0000000140C67066: mov     r15b, 80h
 * 0000000140C67069: mov     rax, [rsi+148h]
 * 0000000140C67070: xor     edx, edx
 * 0000000140C67072: mov     rcx, rbx
 * 0000000140C67075: mov     [rbp+7B0h+var_818], r15d
 * 0000000140C67079: call    KeGuardDispatchICall
 * 0000000140C6707E: mov     rax, [rsi+148h]
 * 0000000140C67085: xor     edx, edx
 * 0000000140C67087: mov     rcx, r12
 * 0000000140C6708A: call    KeGuardDispatchICall
 * 0000000140C6708F: mov     r9, [rsi+598h]
 * 0000000140C67096: xor     r11d, r11d
 * 0000000140C67099: mov     r12d, r11d
 * 0000000140C6709C: mov     [rsp+8B0h+var_840], r11
 * 0000000140C670A1: mov     r8, [r9]
 * 0000000140C670A4: cmp     r8, r9
 * 0000000140C670A7: jz      short loc_140C670FE
 * 0000000140C670A9: lea     edi, [r11+1]
 * 0000000140C670AD: lea     rdx, [r8-18h]
 * 0000000140C670B1: cmp     rdx, r14
 * 0000000140C670B4: jz      short loc_140C670EC
 * 0000000140C670B6: mov     rax, [rsi+748h]
 * 0000000140C670BD: mov     rdx, [rdx+rax]
 * 0000000140C670C1: mov     rax, [rsi+6D0h]
 * 0000000140C670C8: mov     ecx, [rdx+rax]
 * 0000000140C670CB: test    [rsi+6E8h], ecx
 * 0000000140C670D1: jnz     short loc_140C670E0
 * 0000000140C670D3: test    r12, r12
 * 0000000140C670D6: mov     rax, rdx
 * 0000000140C670D9: cmovnz  rax, rdi
 * 0000000140C670DD: mov     r12, rax
 * 0000000140C670E0: mov     rax, [rsi+6C8h]
 * 0000000140C670E7: lock or [rdx+rax], r15b
 * 0000000140C670EC: mov     r8, [r8]
 * 0000000140C670EF: cmp     r8, r9
 * 0000000140C670F2: jnz     short loc_140C670AD
 * 0000000140C670F4: mov     [rsp+8B0h+var_840], r12
 * 0000000140C670F9: mov     edi, 2
 * 0000000140C670FE: mov     r13, [rsi+518h]
 * 0000000140C67105: mov     r14, [r13+0]
 * 0000000140C67109: cmp     r14, r13
 * 0000000140C6710C: jz      loc_140C672C3
 * 0000000140C67112: mov     r12d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C67117: mov     al, r15b
 * 0000000140C6711A: movzx   edx, r15b
 * 0000000140C6711E: not     al
 * 0000000140C67120: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C67125: mov     dil, al
 * 0000000140C67128: mov     [rbp+7B0h+var_830], edx
 * 0000000140C6712B: mov     rax, [rsi+6C8h]
 * 0000000140C67132: mov     rbx, r14
 * 0000000140C67135: sub     rbx, [rsi+6E0h]
 * 0000000140C6713C: movsx   ecx, byte ptr [rbx+rax]
 * 0000000140C67140: test    edx, ecx
 * 0000000140C67142: jnz     loc_140C67290
 * 0000000140C67148: mov     rax, [rsi+6D8h]
 * 0000000140C6714F: mov     rcx, [rbx+rax]
 * 0000000140C67153: test    rcx, rcx
 * 0000000140C67156: jz      loc_140C67290
 * 0000000140C6715C: cmp     rcx, r15
 * 0000000140C6715F: jz      loc_140C67290
 * 0000000140C67165: cmp     [rsi+918h], r11d
 * 0000000140C6716C: jnz     loc_140C67290
 * 0000000140C67172: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C67177: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C67181: add     rax, rsi
 * 0000000140C67184: mov     r8d, 1
 * 0000000140C6718A: mov     [rsi+920h], rax
 * 0000000140C67191: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6719B: add     rax, rcx
 * 0000000140C6719E: mov     [rsi+928h], rax
 * 0000000140C671A5: movsxd  rax, dword ptr [rcx]
 * 0000000140C671A8: mov     [rsi+930h], rax
 * 0000000140C671AF: mov     [rsi+938h], rbx
 * 0000000140C671B6: mov     [rsi+918h], r8d
 * 0000000140C671BD: mov     ecx, [rsi+9D8h]
 * 0000000140C671C3: bt      ecx, 1Dh
 * 0000000140C671C7: jb      loc_140C67290
 * 0000000140C671CD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C671D7: jz      loc_140C67290
 * 0000000140C671DD: test    r8b, cl
 * 0000000140C671E0: jz      loc_140C67290
 * 0000000140C671E6: mov     ecx, [rsi+0A74h]
 * 0000000140C671EC: mov     eax, [rsi+804h]
 * 0000000140C671F2: mov     r10, [rsi+838h]
 * 0000000140C671F9: sub     eax, ecx
 * 0000000140C671FB: mov     r8, [rsi+0A78h]
 * 0000000140C67202: lea     rdx, [rcx+rsi]
 * 0000000140C67206: mov     ecx, eax
 * 0000000140C67208: shr     rcx, 3
 * 0000000140C6720C: lea     r9, [rdx+rcx*8]
 * 0000000140C67210: jmp     short loc_140C67233
 * 0000000140C67212: xor     [rdx], r8
 * 0000000140C67215: mov     rax, [rdx]
 * 0000000140C67218: movzx   ecx, r8b
 * 0000000140C6721C: xor     rax, r10
 * 0000000140C6721F: and     ecx, 3Fh
 * 0000000140C67222: ror     r8, cl
 * 0000000140C67225: add     r8, rax
 * 0000000140C67228: xor     r8, 0F05h
 * 0000000140C6722F: add     rdx, 8
 * 0000000140C67233: cmp     rdx, r9
 * 0000000140C67236: jnz     short loc_140C67212
 * 0000000140C67238: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C67240: cmp     r8, [rsi+0A80h]
 * 0000000140C67247: jz      short loc_140C6728D
 * 0000000140C67249: mov     ecx, [rsi+804h]
 * 0000000140C6724F: mov     rax, [rsi+588h]
 * 0000000140C67256: mov     [rax], rsi
 * 0000000140C67259: mov     [rax+10h], ecx
 * 0000000140C6725C: mov     rcx, [rsi+0A80h]
 * 0000000140C67263: cmp     [rsi+918h], r11d
 * 0000000140C6726A: jnz     short loc_140C6727A
 * 0000000140C6726C: mov     rax, [rsi+588h]
 * 0000000140C67273: xor     rcx, r8
 * 0000000140C67276: mov     [rax+18h], rcx
 * 0000000140C6727A: xor     edx, edx
 * 0000000140C6727C: mov     r9d, 100h
 * 0000000140C67282: mov     rcx, rsi
 * 0000000140C67285: call    sub_140C7903C
 * 0000000140C6728A: xor     r11d, r11d
 * 0000000140C6728D: mov     edx, [rbp+7B0h+var_830]
 * 0000000140C67290: mov     rax, [rsi+6C8h]
 * 0000000140C67297: lock and [rbx+rax], dil
 * 0000000140C6729C: mov     r14, [r14]
 * 0000000140C6729F: mov     eax, 1
 * 0000000140C672A4: add     r12d, eax
 * 0000000140C672A7: cmp     r14, r13
 * 0000000140C672AA: jnz     loc_140C6712B
 * 0000000140C672B0: mov     r15d, [rbp+7B0h+var_818]
 * 0000000140C672B4: lea     edi, [rax+1]
 * 0000000140C672B7: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C672BC: mov     r12, [rsp+8B0h+var_840]
 * 0000000140C672C1: jmp     short loc_140C672C8
 * 0000000140C672C3: mov     eax, 1
 * 0000000140C672C8: test    r12, r12
 * 0000000140C672CB: jz      short loc_140C6732B
 * 0000000140C672CD: cmp     r12, rax
 * 0000000140C672D0: jz      short loc_140C672E5
 * 0000000140C672D2: mov     rax, [rsi+6C8h]
 * 0000000140C672D9: mov     cl, r15b
 * 0000000140C672DC: not     cl
 * 0000000140C672DE: lock and [r12+rax], cl
 * 0000000140C672E3: jmp     short loc_140C6732B
 * 0000000140C672E5: mov     r10, [rsi+598h]
 * 0000000140C672EC: mov     r9, [r10]
 * 0000000140C672EF: cmp     r9, r10
 * 0000000140C672F2: jz      short loc_140C6732B
 * 0000000140C672F4: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C672F9: lea     r8, [r9-18h]
 * 0000000140C672FD: cmp     r8, rax
 * 0000000140C67300: jz      short loc_140C67323
 * 0000000140C67302: mov     rax, [rsi+748h]
 * 0000000140C67309: mov     dl, r15b
 * 0000000140C6730C: not     dl
 * 0000000140C6730E: mov     r8, [r8+rax]
 * 0000000140C67312: mov     rax, [rsi+6C8h]
 * 0000000140C67319: lock and [r8+rax], dl
 * 0000000140C6731E: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C67323: mov     r9, [r9]
 * 0000000140C67326: cmp     r9, r10
 * 0000000140C67329: jnz     short loc_140C672F9
 * 0000000140C6732B: mov     rax, [rsi+150h]
 * 0000000140C67332: xor     edx, edx
 * 0000000140C67334: mov     rcx, [rbp+7B0h+var_828]
 * 0000000140C67338: call    KeGuardDispatchICall
 * 0000000140C6733D: jmp     loc_140C65727
 * 0000000140C67342: mov     eax, [rsi+850h]
 * 0000000140C67348: test    r15b, al
 * 0000000140C6734B: jnz     loc_140C713A3
 * 0000000140C67351: mov     rax, [rsi+5A8h]
 * 0000000140C67358: mov     r13d, r12d
 * 0000000140C6735B: mov     r15, [rsi+5A0h]
 * 0000000140C67362: mov     rbx, [rsi+540h]
 * 0000000140C67369: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6736E: mov     rax, [rsi+188h]
 * 0000000140C67375: mov     dword ptr [rbp+7B0h+arg_8], r12d
 * 0000000140C6737C: mov     [rsp+8B0h+var_840], r15
 * 0000000140C67381: call    KeGuardDispatchICall
 * 0000000140C67386: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C67390: jnz     short loc_140C673AB
 * 0000000140C67392: mov     ecx, [rsi+978h]
 * 0000000140C67398: cmp     ecx, 7
 * 0000000140C6739B: jnb     short loc_140C673AB
 * 0000000140C6739D: mov     r12d, 1
 * 0000000140C673A3: mov     r14d, r12d
 * 0000000140C673A6: shl     r14b, cl
 * 0000000140C673A9: jmp     short loc_140C673C9
 * 0000000140C673AB: mov     rax, [rsi+138h]
 * 0000000140C673B2: xor     edx, edx
 * 0000000140C673B4: mov     rcx, [rsi+0A48h]
 * 0000000140C673BB: call    KeGuardDispatchICall
 * 0000000140C673C0: mov     r14b, 80h
 * 0000000140C673C3: mov     r12d, 1
 * 0000000140C673C9: mov     rax, [rsi+148h]
 * 0000000140C673D0: xor     edx, edx
 * 0000000140C673D2: mov     rcx, rbx
 * 0000000140C673D5: call    KeGuardDispatchICall
 * 0000000140C673DA: mov     r8, [rsi+518h]
 * 0000000140C673E1: mov     rdx, [r8]
 * 0000000140C673E4: cmp     rdx, r8
 * 0000000140C673E7: jz      short loc_140C67411
 * 0000000140C673E9: mov     rax, [rsi+6C8h]
 * 0000000140C673F0: mov     rcx, rdx
 * 0000000140C673F3: sub     rcx, [rsi+6E0h]
 * 0000000140C673FA: lock or [rcx+rax], r14b
 * 0000000140C673FF: mov     rdx, [rdx]
 * 0000000140C67402: add     r13d, r12d
 * 0000000140C67405: cmp     rdx, r8
 * 0000000140C67408: jnz     short loc_140C673E9
 * 0000000140C6740A: mov     dword ptr [rbp+7B0h+arg_8], r13d
 * 0000000140C67411: mov     rax, [rsi+148h]
 * 0000000140C67418: xor     edx, edx
 * 0000000140C6741A: mov     rcx, r15
 * 0000000140C6741D: call    KeGuardDispatchICall
 * 0000000140C67422: mov     r12, [rsi+598h]
 * 0000000140C67429: mov     r15, [r12]
 * 0000000140C6742D: cmp     r15, r12
 * 0000000140C67430: jz      loc_140C675D2
 * 0000000140C67436: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C6743B: xor     r13d, r13d
 * 0000000140C6743E: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C67443: mov     rcx, r15
 * 0000000140C67446: sub     rcx, [rsi+750h]
 * 0000000140C6744D: cmp     rcx, rax
 * 0000000140C67450: jz      loc_140C675BA
 * 0000000140C67456: mov     rax, [rsi+748h]
 * 0000000140C6745D: mov     rbx, [rcx+rax]
 * 0000000140C67461: mov     rax, [rsi+6C8h]
 * 0000000140C67468: test    [rbx+rax], r14b
 * 0000000140C6746C: jnz     loc_140C675A5
 * 0000000140C67472: mov     rax, [rsi+6D0h]
 * 0000000140C67479: mov     ecx, [rbx+rax]
 * 0000000140C6747C: test    [rsi+6E8h], ecx
 * 0000000140C67482: jz      loc_140C675A5
 * 0000000140C67488: cmp     [rsi+918h], r13d
 * 0000000140C6748F: jnz     loc_140C675A5
 * 0000000140C67495: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6749F: mov     edx, 1
 * 0000000140C674A4: add     rax, rsi
 * 0000000140C674A7: mov     [rsi+920h], rax
 * 0000000140C674AE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C674B8: add     rax, rdi
 * 0000000140C674BB: mov     [rsi+928h], rax
 * 0000000140C674C2: movsxd  rax, dword ptr [rdi]
 * 0000000140C674C5: mov     [rsi+930h], rax
 * 0000000140C674CC: mov     [rsi+938h], rbx
 * 0000000140C674D3: mov     [rsi+918h], edx
 * 0000000140C674D9: mov     ecx, [rsi+9D8h]
 * 0000000140C674DF: bt      ecx, 1Dh
 * 0000000140C674E3: jb      loc_140C675A5
 * 0000000140C674E9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C674F3: jz      loc_140C675A5
 * 0000000140C674F9: test    dl, cl
 * 0000000140C674FB: jz      loc_140C675A5
 * 0000000140C67501: mov     ecx, [rsi+0A74h]
 * 0000000140C67507: mov     eax, [rsi+804h]
 * 0000000140C6750D: mov     r10, [rsi+838h]
 * 0000000140C67514: sub     eax, ecx
 * 0000000140C67516: mov     r8, [rsi+0A78h]
 * 0000000140C6751D: lea     rdx, [rcx+rsi]
 * 0000000140C67521: mov     ecx, eax
 * 0000000140C67523: shr     rcx, 3
 * 0000000140C67527: lea     r9, [rdx+rcx*8]
 * 0000000140C6752B: jmp     short loc_140C6754E
 * 0000000140C6752D: xor     [rdx], r8
 * 0000000140C67530: mov     rax, [rdx]
 * 0000000140C67533: movzx   ecx, r8b
 * 0000000140C67537: xor     rax, r10
 * 0000000140C6753A: and     ecx, 3Fh
 * 0000000140C6753D: ror     r8, cl
 * 0000000140C67540: add     r8, rax
 * 0000000140C67543: xor     r8, 0F05h
 * 0000000140C6754A: add     rdx, 8
 * 0000000140C6754E: cmp     rdx, r9
 * 0000000140C67551: jnz     short loc_140C6752D
 * 0000000140C67553: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6755B: cmp     r8, [rsi+0A80h]
 * 0000000140C67562: jz      short loc_140C675A5
 * 0000000140C67564: mov     ecx, [rsi+804h]
 * 0000000140C6756A: mov     rax, [rsi+588h]
 * 0000000140C67571: mov     [rax], rsi
 * 0000000140C67574: mov     [rax+10h], ecx
 * 0000000140C67577: mov     rcx, [rsi+0A80h]
 * 0000000140C6757E: cmp     [rsi+918h], r13d
 * 0000000140C67585: jnz     short loc_140C67595
 * 0000000140C67587: mov     rax, [rsi+588h]
 * 0000000140C6758E: xor     rcx, r8
 * 0000000140C67591: mov     [rax+18h], rcx
 * 0000000140C67595: xor     edx, edx
 * 0000000140C67597: mov     r9d, 100h
 * 0000000140C6759D: mov     rcx, rsi
 * 0000000140C675A0: call    sub_140C7903C
 * 0000000140C675A5: mov     rax, [rsi+6C8h]
 * 0000000140C675AC: mov     dl, r14b
 * 0000000140C675AF: not     dl
 * 0000000140C675B1: lock and [rbx+rax], dl
 * 0000000140C675B5: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C675BA: mov     r15, [r15]
 * 0000000140C675BD: cmp     r15, r12
 * 0000000140C675C0: jnz     loc_140C67443
 * 0000000140C675C6: mov     r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C675CD: mov     edi, 2
 * 0000000140C675D2: mov     rax, [rsi+150h]
 * 0000000140C675D9: xor     edx, edx
 * 0000000140C675DB: mov     rcx, [rsp+8B0h+var_840]
 * 0000000140C675E0: call    KeGuardDispatchICall
 * 0000000140C675E5: cmp     r14b, 80h
 * 0000000140C675E9: jnz     short loc_140C67600
 * 0000000140C675EB: mov     rax, [rsi+140h]
 * 0000000140C675F2: xor     edx, edx
 * 0000000140C675F4: mov     rcx, [rsi+0A48h]
 * 0000000140C675FB: call    KeGuardDispatchICall
 * 0000000140C67600: mov     rcx, [rsi+540h]
 * 0000000140C67607: xor     edx, edx
 * 0000000140C67609: mov     rax, [rsi+150h]
 * 0000000140C67610: call    KeGuardDispatchICall
 * 0000000140C67615: mov     rax, [rsi+190h]
 * 0000000140C6761C: call    KeGuardDispatchICall
 * 0000000140C67621: jmp     loc_140C65324
 * 0000000140C67626: mov     rax, [rsi+380h]
 * 0000000140C6762D: xor     ebx, ebx
 * 0000000140C6762F: mov     r12, [rsi+528h]
 * 0000000140C67636: mov     dword ptr [rbp+7B0h+arg_8], ebx
 * 0000000140C6763C: call    KeGuardDispatchICall
 * 0000000140C67641: mov     [rbp+7B0h+var_828], rax
 * 0000000140C67645: cli
 * 0000000140C67646: mov     rcx, gs:20h
 * 0000000140C6764F: mov     rax, [rsi+658h]
 * 0000000140C67656: mov     rcx, [rcx+rax]
 * 0000000140C6765A: sti
 * 0000000140C6765B: mov     rax, [rsi+178h]
 * 0000000140C67662: call    KeGuardDispatchICall
 * 0000000140C67667: mov     rcx, [rsi+530h]
 * 0000000140C6766E: mov     dl, r15b
 * 0000000140C67671: mov     rax, [rsi+0F8h]
 * 0000000140C67678: call    KeGuardDispatchICall
 * 0000000140C6767D: mov     rax, [rsi+620h]
 * 0000000140C67684: mov     [rbp+7B0h+var_830], ebx
 * 0000000140C67687: mov     rcx, [rax]
 * 0000000140C6768A: mov     r13d, [rcx]
 * 0000000140C6768D: lea     rdx, [rcx+10h]
 * 0000000140C67691: mov     [rsp+8B0h+var_858], rdx
 * 0000000140C67696: lea     rax, ds:0[r13*2]
 * 0000000140C6769E: add     rax, r13
 * 0000000140C676A1: lea     rax, [rdx+rax*8]
 * 0000000140C676A5: mov     [rsp+8B0h+var_840], rax
 * 0000000140C676AA: cmp     [rcx+0Ch], bl
 * 0000000140C676AD: jz      short loc_140C676C3
 * 0000000140C676AF: mov     rax, [r12]
 * 0000000140C676B3: mov     r13d, ebx
 * 0000000140C676B6: jmp     short loc_140C676BE
 * 0000000140C676B8: mov     rax, [rax]
 * 0000000140C676BB: add     r13d, r15d
 * 0000000140C676BE: cmp     rax, r12
 * 0000000140C676C1: jnz     short loc_140C676B8
 * 0000000140C676C3: mov     r8d, [rsi+830h]
 * 0000000140C676CA: lea     r15d, ds:0[r13*8]
 * 0000000140C676D2: rdtsc
 * 0000000140C676D4: shl     rdx, 20h
 * 0000000140C676D8: mov     r9, 7010008004002001h
 * 0000000140C676E2: or      rax, rdx
 * 0000000140C676E5: mov     rcx, rax
 * 0000000140C676E8: ror     rcx, 3
 * 0000000140C676EC: xor     rcx, rax
 * 0000000140C676EF: mov     rax, r9
 * 0000000140C676F2: mul     rcx
 * 0000000140C676F5: mov     rbx, rdx
 * 0000000140C676F8: mov     [rbp+7B0h+var_4A0], rdx
 * 0000000140C676FF: xor     rbx, rax
 * 0000000140C67702: and     ebx, 7FFh
 * 0000000140C67708: rdtsc
 * 0000000140C6770A: shl     rdx, 20h
 * 0000000140C6770E: or      rax, rdx
 * 0000000140C67711: mov     rcx, rax
 * 0000000140C67714: ror     rcx, 3
 * 0000000140C67718: xor     rcx, rax
 * 0000000140C6771B: mov     rax, r9
 * 0000000140C6771E: mul     rcx
 * 0000000140C67721: lea     ecx, [rbx+1]
 * 0000000140C67724: xor     rax, rdx
 * 0000000140C67727: mov     [rbp+7B0h+var_498], rdx
 * 0000000140C6772E: xor     edx, edx
 * 0000000140C67730: div     rcx
 * 0000000140C67733: mov     rax, [rsi+100h]
 * 0000000140C6773A: mov     ecx, 42h ; 'B'
 * 0000000140C6773F: mov     r14, rdx
 * 0000000140C67742: lea     edx, [rbx+r15]
 * 0000000140C67746: call    KeGuardDispatchICall
 * 0000000140C6774B: mov     r11, rax
 * 0000000140C6774E: test    rax, rax
 * 0000000140C67751: jnz     short loc_140C67762
 * 0000000140C67753: lea     eax, [r11+1]
 * 0000000140C67757: add     [rsi+0A60h], eax
 * 0000000140C6775D: jmp     loc_140C678AE
 * 0000000140C67762: mov     r10d, r14d
 * 0000000140C67765: mov     r8, r11
 * 0000000140C67768: cmp     r14d, 8
 * 0000000140C6776C: jb      short loc_140C677C0
 * 0000000140C6776E: mov     r9d, r14d
 * 0000000140C67771: mov     edi, 1
 * 0000000140C67776: shr     r9, 3
 * 0000000140C6777A: mov     rsi, 7010008004002001h
 * 0000000140C67784: rdtsc
 * 0000000140C67786: shl     rdx, 20h
 * 0000000140C6778A: add     r10d, 0FFFFFFF8h
 * 0000000140C6778E: or      rax, rdx
 * 0000000140C67791: mov     rcx, rax
 * 0000000140C67794: ror     rcx, 3
 * 0000000140C67798: xor     rcx, rax
 * 0000000140C6779B: mov     rax, rsi
 * 0000000140C6779E: mul     rcx
 * 0000000140C677A1: mov     [rbp+7B0h+var_490], rdx
 * 0000000140C677A8: xor     rdx, rax
 * 0000000140C677AB: mov     [r8], rdx
 * 0000000140C677AE: add     r8, 8
 * 0000000140C677B2: sub     r9, rdi
 * 0000000140C677B5: jnz     short loc_140C67784
 * 0000000140C677B7: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C677BC: lea     edi, [r9+2]
 * 0000000140C677C0: test    r10d, r10d
 * 0000000140C677C3: jz      short loc_140C67808
 * 0000000140C677C5: rdtsc
 * 0000000140C677C7: shl     rdx, 20h
 * 0000000140C677CB: or      rax, rdx
 * 0000000140C677CE: mov     rcx, rax
 * 0000000140C677D1: ror     rcx, 3
 * 0000000140C677D5: xor     rcx, rax
 * 0000000140C677D8: mov     rax, 7010008004002001h
 * 0000000140C677E2: mul     rcx
 * 0000000140C677E5: mov     ecx, 0FFFFFFFFh
 * 0000000140C677EA: mov     [rbp+7B0h+var_488], rdx
 * 0000000140C677F1: xor     rdx, rax
 * 0000000140C677F4: mov     eax, 1
 * 0000000140C677F9: mov     [r8], dl
 * 0000000140C677FC: add     r8, rax
 * 0000000140C677FF: shr     rdx, 8
 * 0000000140C67803: add     r10d, ecx
 * 0000000140C67806: jnz     short loc_140C677F9
 * 0000000140C67808: mov     r8d, r15d
 * 0000000140C6780B: sub     ebx, r14d
 * 0000000140C6780E: mov     eax, r14d
 * 0000000140C67811: mov     r10d, 1
 * 0000000140C67817: add     rax, r11
 * 0000000140C6781A: mov     r15, 7010008004002001h
 * 0000000140C67824: add     r8, rax
 * 0000000140C67827: cmp     ebx, 8
 * 0000000140C6782A: jb      short loc_140C67865
 * 0000000140C6782C: mov     r9d, ebx
 * 0000000140C6782F: shr     r9, 3
 * 0000000140C67833: rdtsc
 * 0000000140C67835: shl     rdx, 20h
 * 0000000140C67839: add     ebx, 0FFFFFFF8h
 * 0000000140C6783C: or      rax, rdx
 * 0000000140C6783F: mov     rcx, rax
 * 0000000140C67842: ror     rcx, 3
 * 0000000140C67846: xor     rcx, rax
 * 0000000140C67849: mov     rax, r15
 * 0000000140C6784C: mul     rcx
 * 0000000140C6784F: mov     [rbp+7B0h+var_480], rdx
 * 0000000140C67856: xor     rdx, rax
 * 0000000140C67859: mov     [r8], rdx
 * 0000000140C6785C: add     r8, 8
 * 0000000140C67860: sub     r9, r10
 * 0000000140C67863: jnz     short loc_140C67833
 * 0000000140C67865: test    ebx, ebx
 * 0000000140C67867: jz      short loc_140C6789F
 * 0000000140C67869: rdtsc
 * 0000000140C6786B: shl     rdx, 20h
 * 0000000140C6786F: or      rax, rdx
 * 0000000140C67872: mov     rcx, rax
 * 0000000140C67875: ror     rcx, 3
 * 0000000140C67879: xor     rcx, rax
 * 0000000140C6787C: mov     rax, r15
 * 0000000140C6787F: mul     rcx
 * 0000000140C67882: mov     [rbp+7B0h+var_478], rdx
 * 0000000140C67889: xor     rdx, rax
 * 0000000140C6788C: mov     eax, 0FFFFFFFFh
 * 0000000140C67891: mov     [r8], dl
 * 0000000140C67894: add     r8, r10
 * 0000000140C67897: shr     rdx, 8
 * 0000000140C6789B: add     ebx, eax
 * 0000000140C6789D: jnz     short loc_140C67891
 * 0000000140C6789F: mov     ebx, r14d
 * 0000000140C678A2: mov     [rbp+7B0h+var_6B8], r11
 * 0000000140C678A9: add     rbx, r11
 * 0000000140C678AC: jnz     short loc_140C678BD
 * 0000000140C678AE: xor     r12d, r12d
 * 0000000140C678B1: mov     [rbp+7B0h+var_6B8], r12
 * 0000000140C678B8: jmp     loc_140C67A9A
 * 0000000140C678BD: mov     rdx, [r12]
 * 0000000140C678C1: mov     r14d, [rbp+7B0h+var_830]
 * 0000000140C678C5: cmp     rdx, r12
 * 0000000140C678C8: jz      short loc_140C67908
 * 0000000140C678CA: mov     eax, r14d
 * 0000000140C678CD: mov     r8, rdx
 * 0000000140C678D0: sub     r8, [rsi+758h]
 * 0000000140C678D7: cmp     r14d, r13d
 * 0000000140C678DA: jnb     short loc_140C678F7
 * 0000000140C678DC: mov     rax, [rsi+760h]
 * 0000000140C678E3: mov     ecx, r14d
 * 0000000140C678E6: add     r14d, r10d
 * 0000000140C678E9: mov     rax, [r8+rax]
 * 0000000140C678ED: mov     [rbx+rcx*8], rax
 * 0000000140C678F1: mov     eax, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C678F7: mov     rdx, [rdx]
 * 0000000140C678FA: add     eax, r10d
 * 0000000140C678FD: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C67903: cmp     rdx, r12
 * 0000000140C67906: jnz     short loc_140C678CD
 * 0000000140C67908: mov     rax, [rsi+3A0h]
 * 0000000140C6790F: mov     edx, r14d
 * 0000000140C67912: mov     rcx, rbx
 * 0000000140C67915: call    KeGuardDispatchICall
 * 0000000140C6791A: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C6791F: dec     r14d
 * 0000000140C67922: mov     r12, [rsp+8B0h+var_840]
 * 0000000140C67927: xor     r11d, r11d
 * 0000000140C6792A: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6792F: mov     r10, [r15+8]
 * 0000000140C67933: mov     r8d, r11d
 * 0000000140C67936: mov     edx, r14d
 * 0000000140C67939: test    r14d, r14d
 * 0000000140C6793C: js      short loc_140C67965
 * 0000000140C6793E: lea     ecx, [rdx+r8]
 * 0000000140C67942: sar     ecx, 1
 * 0000000140C67944: movsxd  rax, ecx
 * 0000000140C67947: cmp     r10, [rbx+rax*8]
 * 0000000140C6794B: jnb     short loc_140C67956
 * 0000000140C6794D: test    ecx, ecx
 * 0000000140C6794F: jz      short loc_140C67965
 * 0000000140C67951: lea     edx, [rcx-1]
 * 0000000140C67954: jmp     short loc_140C67960
 * 0000000140C67956: jbe     loc_140C67A85
 * 0000000140C6795C: lea     r8d, [rcx+1]
 * 0000000140C67960: cmp     edx, r8d
 * 0000000140C67963: jge     short loc_140C6793E
 * 0000000140C67965: cmp     [rsi+918h], r11d
 * 0000000140C6796C: jnz     loc_140C67A85
 * 0000000140C67972: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6797C: mov     edx, 1
 * 0000000140C67981: add     rax, rsi
 * 0000000140C67984: mov     [rsi+920h], rax
 * 0000000140C6798B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C67995: add     rax, rdi
 * 0000000140C67998: mov     [rsi+928h], rax
 * 0000000140C6799F: movsxd  rax, dword ptr [rdi]
 * 0000000140C679A2: mov     [rsi+930h], rax
 * 0000000140C679A9: mov     [rsi+938h], r10
 * 0000000140C679B0: mov     [rsi+918h], edx
 * 0000000140C679B6: mov     ecx, [rsi+9D8h]
 * 0000000140C679BC: bt      ecx, 1Dh
 * 0000000140C679C0: jb      loc_140C67A85
 * 0000000140C679C6: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C679D0: jz      loc_140C67A85
 * 0000000140C679D6: test    dl, cl
 * 0000000140C679D8: jz      loc_140C67A85
 * 0000000140C679DE: mov     ecx, [rsi+0A74h]
 * 0000000140C679E4: mov     eax, [rsi+804h]
 * 0000000140C679EA: mov     r10, [rsi+838h]
 * 0000000140C679F1: sub     eax, ecx
 * 0000000140C679F3: mov     r8, [rsi+0A78h]
 * 0000000140C679FA: lea     rdx, [rcx+rsi]
 * 0000000140C679FE: mov     ecx, eax
 * 0000000140C67A00: shr     rcx, 3
 * 0000000140C67A04: lea     r9, [rdx+rcx*8]
 * 0000000140C67A08: jmp     short loc_140C67A2B
 * 0000000140C67A0A: xor     [rdx], r8
 * 0000000140C67A0D: mov     rax, [rdx]
 * 0000000140C67A10: movzx   ecx, r8b
 * 0000000140C67A14: xor     rax, r10
 * 0000000140C67A17: and     ecx, 3Fh
 * 0000000140C67A1A: ror     r8, cl
 * 0000000140C67A1D: add     r8, rax
 * 0000000140C67A20: xor     r8, 0F05h
 * 0000000140C67A27: add     rdx, 8
 * 0000000140C67A2B: cmp     rdx, r9
 * 0000000140C67A2E: jnz     short loc_140C67A0A
 * 0000000140C67A30: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C67A38: cmp     r8, [rsi+0A80h]
 * 0000000140C67A3F: jz      short loc_140C67A85
 * 0000000140C67A41: mov     ecx, [rsi+804h]
 * 0000000140C67A47: mov     rax, [rsi+588h]
 * 0000000140C67A4E: mov     [rax], rsi
 * 0000000140C67A51: mov     [rax+10h], ecx
 * 0000000140C67A54: mov     rcx, [rsi+0A80h]
 * 0000000140C67A5B: cmp     [rsi+918h], r11d
 * 0000000140C67A62: jnz     short loc_140C67A72
 * 0000000140C67A64: mov     rax, [rsi+588h]
 * 0000000140C67A6B: xor     rcx, r8
 * 0000000140C67A6E: mov     [rax+18h], rcx
 * 0000000140C67A72: xor     edx, edx
 * 0000000140C67A74: mov     r9d, 100h
 * 0000000140C67A7A: mov     rcx, rsi
 * 0000000140C67A7D: call    sub_140C7903C
 * 0000000140C67A82: xor     r11d, r11d
 * 0000000140C67A85: add     r15, 18h
 * 0000000140C67A89: cmp     r15, r12
 * 0000000140C67A8C: jb      loc_140C6792F
 * 0000000140C67A92: mov     edi, 2
 * 0000000140C67A97: xor     r12d, r12d
 * 0000000140C67A9A: mov     rcx, [rsi+530h]
 * 0000000140C67AA1: mov     rax, [rsi+128h]
 * 0000000140C67AA8: call    KeGuardDispatchICall
 * 0000000140C67AAD: mov     rax, [rsi+180h]
 * 0000000140C67AB4: call    KeGuardDispatchICall
 * 0000000140C67AB9: mov     rax, [rsi+388h]
 * 0000000140C67AC0: mov     rcx, [rbp+7B0h+var_828]
 * 0000000140C67AC4: call    KeGuardDispatchICall
 * 0000000140C67AC9: cmp     [rbp+7B0h+var_6B8], r12
 * 0000000140C67AD0: jz      loc_140C710FB
 * 0000000140C67AD6: mov     eax, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C67ADC: shl     eax, 9
 * 0000000140C67ADF: add     [rsi+848h], eax
 * 0000000140C67AE5: mov     rax, [rsi+108h]
 * 0000000140C67AEC: mov     rcx, [rbp+7B0h+var_6B8]
 * 0000000140C67AF3: jmp     loc_140C64B5C
 * 0000000140C67AF8: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C67B02: jz      short loc_140C67B56
 * 0000000140C67B04: test    [rsi+9DCh], r11d
 * 0000000140C67B0B: jnz     short loc_140C67B56
 * 0000000140C67B0D: rdtsc
 * 0000000140C67B0F: shl     rdx, 20h
 * 0000000140C67B13: or      rax, rdx
 * 0000000140C67B16: mov     rcx, rax
 * 0000000140C67B19: ror     rcx, 3
 * 0000000140C67B1D: xor     rcx, rax
 * 0000000140C67B20: mov     rax, 7010008004002001h
 * 0000000140C67B2A: mul     rcx
 * 0000000140C67B2D: mov     rcx, rdx
 * 0000000140C67B30: mov     [rbp+7B0h+var_470], rdx
 * 0000000140C67B37: xor     rcx, rax
 * 0000000140C67B3A: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140C67B44: mul     rcx
 * 0000000140C67B47: shr     rdx, 2
 * 0000000140C67B4B: lea     eax, [rdx+rdx*4]
 * 0000000140C67B4E: sub     ecx, eax
 * 0000000140C67B50: mov     [rsi+844h], ecx
 * 0000000140C67B56: mov     ecx, [rsi+844h]
 * 0000000140C67B5C: test    ecx, ecx
 * 0000000140C67B5E: jz      loc_140C6A950
 * 0000000140C67B64: sub     ecx, 1
 * 0000000140C67B67: jz      loc_140C6A716
 * 0000000140C67B6D: sub     ecx, 1
 * 0000000140C67B70: jz      loc_140C6A4C8
 * 0000000140C67B76: sub     ecx, 1
 * 0000000140C67B79: jz      loc_140C68028
 * 0000000140C67B7F: sub     ecx, 1
 * 0000000140C67B82: jz      loc_140C67DB6
 * 0000000140C67B88: cmp     ecx, 1
 * 0000000140C67B8B: jnz     loc_140C6AB92
 * 0000000140C67B91: mov     rbx, r13
 * 0000000140C67B94: mov     [rbp+7B0h+arg_10], 0FFh
 * 0000000140C67B9B: mov     r13d, r12d
 * 0000000140C67B9E: mov     r14d, r12d
 * 0000000140C67BA1: mov     [rbp+7B0h+var_670], r12
 * 0000000140C67BA8: jmp     loc_140C67D78
 * 0000000140C67BAD: mov     rax, [rsi+218h]
 * 0000000140C67BB4: lea     rdx, [rbp+7B0h+var_468]
 * 0000000140C67BBB: mov     rcx, [rbp+7B0h+var_6E8]
 * 0000000140C67BC2: add     r13d, r15d
 * 0000000140C67BC5: call    KeGuardDispatchICall
 * 0000000140C67BCA: test    rax, rax
 * 0000000140C67BCD: jnz     loc_140C67D78
 * 0000000140C67BD3: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C67BDD: jz      short loc_140C67C26
 * 0000000140C67BDF: mov     rcx, [rsi+0AC8h]
 * 0000000140C67BE6: lea     edx, [rax+30h]
 * 0000000140C67BE9: lea     r8d, [rax+6]
 * 0000000140C67BED: mov     rax, [rbx]
 * 0000000140C67BF0: add     edx, 0FFFFFFF8h
 * 0000000140C67BF3: mov     [rcx], rax
 * 0000000140C67BF6: add     rbx, 8
 * 0000000140C67BFA: add     rcx, 8
 * 0000000140C67BFE: sub     r8, r15
 * 0000000140C67C01: jnz     short loc_140C67BED
 * 0000000140C67C03: test    edx, edx
 * 0000000140C67C05: jz      short loc_140C67C1F
 * 0000000140C67C07: mov     esi, 0FFFFFFFFh
 * 0000000140C67C0C: mov     al, [rbx]
 * 0000000140C67C0E: add     rbx, r15
 * 0000000140C67C11: mov     [rcx], al
 * 0000000140C67C13: add     rcx, r15
 * 0000000140C67C16: add     edx, esi
 * 0000000140C67C18: jnz     short loc_140C67C0C
 * 0000000140C67C1A: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C67C1F: mov     rbx, [rsi+0AC8h]
 * 0000000140C67C26: mov     rax, [rbp+7B0h+var_6E8]
 * 0000000140C67C2D: mov     [rbx+18h], rax
 * 0000000140C67C31: mov     rax, [rsi+588h]
 * 0000000140C67C38: mov     [rax], rbx
 * 0000000140C67C3B: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C67C42: mov     rcx, [rsi+588h]
 * 0000000140C67C49: mov     rax, [rbp+7B0h+var_6E8]
 * 0000000140C67C50: mov     [rcx+8], rax
 * 0000000140C67C54: mov     dword ptr [rcx+14h], 1000h
 * 0000000140C67C5B: mov     ecx, r14d
 * 0000000140C67C5E: cmp     [rsi+918h], r12d
 * 0000000140C67C65: jnz     loc_140C67D78
 * 0000000140C67C6B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C67C75: add     rax, rsi
 * 0000000140C67C78: mov     [rsi+920h], rax
 * 0000000140C67C7F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C67C89: add     rax, rbx
 * 0000000140C67C8C: mov     [rsi+928h], rax
 * 0000000140C67C93: movsxd  rax, dword ptr [rbx]
 * 0000000140C67C96: mov     [rsi+930h], rax
 * 0000000140C67C9D: mov     [rsi+938h], rcx
 * 0000000140C67CA4: mov     [rsi+918h], r15d
 * 0000000140C67CAB: mov     ecx, [rsi+9D8h]
 * 0000000140C67CB1: bt      ecx, 1Dh
 * 0000000140C67CB5: jb      loc_140C67D78
 * 0000000140C67CBB: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C67CC5: jz      loc_140C67D78
 * 0000000140C67CCB: test    r15b, cl
 * 0000000140C67CCE: jz      loc_140C67D78
 * 0000000140C67CD4: mov     ecx, [rsi+0A74h]
 * 0000000140C67CDA: mov     eax, [rsi+804h]
 * 0000000140C67CE0: mov     r10, [rsi+838h]
 * 0000000140C67CE7: sub     eax, ecx
 * 0000000140C67CE9: mov     r8, [rsi+0A78h]
 * 0000000140C67CF0: lea     rdx, [rcx+rsi]
 * 0000000140C67CF4: mov     ecx, eax
 * 0000000140C67CF6: shr     rcx, 3
 * 0000000140C67CFA: lea     r9, [rdx+rcx*8]
 * 0000000140C67CFE: jmp     short loc_140C67D21
 * 0000000140C67D00: xor     [rdx], r8
 * 0000000140C67D03: mov     rax, [rdx]
 * 0000000140C67D06: movzx   ecx, r8b
 * 0000000140C67D0A: xor     rax, r10
 * 0000000140C67D0D: and     ecx, 3Fh
 * 0000000140C67D10: ror     r8, cl
 * 0000000140C67D13: add     r8, rax
 * 0000000140C67D16: xor     r8, 0F05h
 * 0000000140C67D1D: add     rdx, 8
 * 0000000140C67D21: cmp     rdx, r9
 * 0000000140C67D24: jnz     short loc_140C67D00
 * 0000000140C67D26: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C67D2E: cmp     r8, [rsi+0A80h]
 * 0000000140C67D35: jz      short loc_140C67D78
 * 0000000140C67D37: mov     ecx, [rsi+804h]
 * 0000000140C67D3D: mov     rax, [rsi+588h]
 * 0000000140C67D44: mov     [rax], rsi
 * 0000000140C67D47: mov     [rax+10h], ecx
 * 0000000140C67D4A: mov     rcx, [rsi+0A80h]
 * 0000000140C67D51: cmp     [rsi+918h], r12d
 * 0000000140C67D58: jnz     short loc_140C67D68
 * 0000000140C67D5A: mov     rax, [rsi+588h]
 * 0000000140C67D61: xor     rcx, r8
 * 0000000140C67D64: mov     [rax+18h], rcx
 * 0000000140C67D68: xor     edx, edx
 * 0000000140C67D6A: mov     r9d, 100h
 * 0000000140C67D70: mov     rcx, rsi
 * 0000000140C67D73: call    sub_140C7903C
 * 0000000140C67D78: mov     rax, [rsi+438h]
 * 0000000140C67D7F: lea     r9, [rbp+7B0h+var_6E8]
 * 0000000140C67D86: lea     r8, [rbp+7B0h+arg_10]
 * 0000000140C67D8D: mov     ecx, r14d
 * 0000000140C67D90: lea     rdx, [rbp+7B0h+var_670]
 * 0000000140C67D97: call    KeGuardDispatchICall
 * 0000000140C67D9C: test    eax, eax
 * 0000000140C67D9E: jnz     loc_140C67BAD
 * 0000000140C67DA4: add     r14d, r15d
 * 0000000140C67DA7: cmp     r14d, 3
 * 0000000140C67DAB: jb      loc_140C67BA1
 * 0000000140C67DB1: jmp     loc_140C6AB55
 * 0000000140C67DB6: mov     rax, [rsi+320h]
 * 0000000140C67DBD: xor     ecx, ecx
 * 0000000140C67DBF: mov     r13d, r12d
 * 0000000140C67DC2: mov     [rbp+7B0h+var_818], r12d
 * 0000000140C67DC6: call    KeGuardDispatchICall
 * 0000000140C67DCB: mov     r15, rax
 * 0000000140C67DCE: test    rax, rax
 * 0000000140C67DD1: jz      loc_140C6A945
 * 0000000140C67DD7: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C67DDC: mov     [rbp+7B0h+var_668], r12
 * 0000000140C67DE3: lea     rdx, [rbp+7B0h+var_668]
 * 0000000140C67DEA: mov     rax, [rsi+318h]
 * 0000000140C67DF1: mov     rcx, r15
 * 0000000140C67DF4: mov     rbx, rdi
 * 0000000140C67DF7: mov     r12d, 1
 * 0000000140C67DFD: call    KeGuardDispatchICall
 * 0000000140C67E02: mov     r14, rax
 * 0000000140C67E05: test    rax, rax
 * 0000000140C67E08: jz      loc_140C67FFB
 * 0000000140C67E0E: xor     edi, edi
 * 0000000140C67E10: lea     r13d, [r12+5]
 * 0000000140C67E15: mov     rax, [rsi+218h]
 * 0000000140C67E1C: lea     rdx, [rbp+7B0h+var_460]
 * 0000000140C67E23: mov     rcx, r14
 * 0000000140C67E26: inc     r12d
 * 0000000140C67E29: call    KeGuardDispatchICall
 * 0000000140C67E2E: test    rax, rax
 * 0000000140C67E31: jnz     loc_140C67FD0
 * 0000000140C67E37: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C67E41: lea     r9d, [rax+1]
 * 0000000140C67E45: jz      short loc_140C67E8D
 * 0000000140C67E47: mov     rcx, [rsi+0AC8h]
 * 0000000140C67E4E: lea     edx, [rax+30h]
 * 0000000140C67E51: mov     r8, r13
 * 0000000140C67E54: mov     rax, [rbx]
 * 0000000140C67E57: add     edx, 0FFFFFFF8h
 * 0000000140C67E5A: mov     [rcx], rax
 * 0000000140C67E5D: add     rbx, 8
 * 0000000140C67E61: add     rcx, 8
 * 0000000140C67E65: sub     r8, r9
 * 0000000140C67E68: jnz     short loc_140C67E54
 * 0000000140C67E6A: test    edx, edx
 * 0000000140C67E6C: jz      short loc_140C67E86
 * 0000000140C67E6E: mov     esi, 0FFFFFFFFh
 * 0000000140C67E73: mov     al, [rbx]
 * 0000000140C67E75: add     rbx, r9
 * 0000000140C67E78: mov     [rcx], al
 * 0000000140C67E7A: add     rcx, r9
 * 0000000140C67E7D: add     edx, esi
 * 0000000140C67E7F: jnz     short loc_140C67E73
 * 0000000140C67E81: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C67E86: mov     rbx, [rsi+0AC8h]
 * 0000000140C67E8D: mov     [rbx+18h], r14
 * 0000000140C67E91: mov     [rbx+20h], r15
 * 0000000140C67E95: mov     rax, [rsi+588h]
 * 0000000140C67E9C: mov     [rax], rbx
 * 0000000140C67E9F: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C67EA6: mov     rax, [rsi+588h]
 * 0000000140C67EAD: mov     [rax+8], r14
 * 0000000140C67EB1: mov     dword ptr [rax+14h], 1000h
 * 0000000140C67EB8: cmp     [rsi+918h], edi
 * 0000000140C67EBE: jnz     loc_140C67FD0
 * 0000000140C67EC4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C67ECE: add     rax, rsi
 * 0000000140C67ED1: mov     [rsi+920h], rax
 * 0000000140C67ED8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C67EE2: add     rax, rbx
 * 0000000140C67EE5: mov     [rsi+928h], rax
 * 0000000140C67EEC: movsxd  rax, dword ptr [rbx]
 * 0000000140C67EEF: mov     [rsi+930h], rax
 * 0000000140C67EF6: mov     [rsi+938h], r13
 * 0000000140C67EFD: mov     [rsi+918h], r9d
 * 0000000140C67F04: mov     ecx, [rsi+9D8h]
 * 0000000140C67F0A: bt      ecx, 1Dh
 * 0000000140C67F0E: jb      loc_140C67FD0
 * 0000000140C67F14: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C67F1E: jz      loc_140C67FD0
 * 0000000140C67F24: test    r9b, cl
 * 0000000140C67F27: jz      loc_140C67FD0
 * 0000000140C67F2D: mov     ecx, [rsi+0A74h]
 * 0000000140C67F33: mov     eax, [rsi+804h]
 * 0000000140C67F39: mov     r10, [rsi+838h]
 * 0000000140C67F40: sub     eax, ecx
 * 0000000140C67F42: mov     r8, [rsi+0A78h]
 * 0000000140C67F49: lea     rdx, [rcx+rsi]
 * 0000000140C67F4D: mov     ecx, eax
 * 0000000140C67F4F: shr     rcx, 3
 * 0000000140C67F53: lea     r9, [rdx+rcx*8]
 * 0000000140C67F57: jmp     short loc_140C67F7A
 * 0000000140C67F59: xor     [rdx], r8
 * 0000000140C67F5C: mov     rax, [rdx]
 * 0000000140C67F5F: movzx   ecx, r8b
 * 0000000140C67F63: xor     rax, r10
 * 0000000140C67F66: and     ecx, 3Fh
 * 0000000140C67F69: ror     r8, cl
 * 0000000140C67F6C: add     r8, rax
 * 0000000140C67F6F: xor     r8, 0F05h
 * 0000000140C67F76: add     rdx, 8
 * 0000000140C67F7A: cmp     rdx, r9
 * 0000000140C67F7D: jnz     short loc_140C67F59
 * 0000000140C67F7F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C67F87: cmp     r8, [rsi+0A80h]
 * 0000000140C67F8E: jz      short loc_140C67FD0
 * 0000000140C67F90: mov     ecx, [rsi+804h]
 * 0000000140C67F96: mov     rax, [rsi+588h]
 * 0000000140C67F9D: mov     [rax], rsi
 * 0000000140C67FA0: mov     [rax+10h], ecx
 * 0000000140C67FA3: mov     rcx, [rsi+0A80h]
 * 0000000140C67FAA: cmp     [rsi+918h], edi
 * 0000000140C67FB0: jnz     short loc_140C67FC0
 * 0000000140C67FB2: mov     rax, [rsi+588h]
 * 0000000140C67FB9: xor     rcx, r8
 * 0000000140C67FBC: mov     [rax+18h], rcx
 * 0000000140C67FC0: xor     edx, edx
 * 0000000140C67FC2: mov     r9d, 100h
 * 0000000140C67FC8: mov     rcx, rsi
 * 0000000140C67FCB: call    sub_140C7903C
 * 0000000140C67FD0: mov     rax, [rsi+318h]
 * 0000000140C67FD7: lea     rdx, [rbp+7B0h+var_668]
 * 0000000140C67FDE: mov     rcx, r15
 * 0000000140C67FE1: call    KeGuardDispatchICall
 * 0000000140C67FE6: mov     r14, rax
 * 0000000140C67FE9: test    rax, rax
 * 0000000140C67FEC: jnz     loc_140C67E15
 * 0000000140C67FF2: mov     r13d, [rbp+7B0h+var_818]
 * 0000000140C67FF6: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C67FFB: mov     rax, [rsi+320h]
 * 0000000140C68002: add     r13d, r12d
 * 0000000140C68005: mov     rcx, r15
 * 0000000140C68008: mov     [rbp+7B0h+var_818], r13d
 * 0000000140C6800C: call    KeGuardDispatchICall
 * 0000000140C68011: xor     r12d, r12d
 * 0000000140C68014: mov     r15, rax
 * 0000000140C68017: test    rax, rax
 * 0000000140C6801A: jnz     loc_140C67DDC
 * 0000000140C68020: lea     edi, [rax+2]
 * 0000000140C68023: jmp     loc_140C6A945
 * 0000000140C68028: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C68032: mov     r13, rsi
 * 0000000140C68035: mov     rax, [rsi+4E8h]
 * 0000000140C6803C: mov     [rbp+7B0h+var_7D0], rsi
 * 0000000140C68040: mov     rbx, [rax]
 * 0000000140C68043: mov     [rbp+7B0h+var_7E8], rbx
 * 0000000140C68047: jnz     loc_140C6A4C0
 * 0000000140C6804D: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C68052: mov     rax, [rcx+28h]
 * 0000000140C68056: test    rax, rax
 * 0000000140C68059: jz      loc_140C681B2
 * 0000000140C6805F: mov     r13d, r15d
 * 0000000140C68062: cmp     rbx, rax
 * 0000000140C68065: jz      loc_140C6AB5A
 * 0000000140C6806B: mov     [rcx+18h], rbx
 * 0000000140C6806F: mov     rax, [rsi+588h]
 * 0000000140C68076: mov     [rax], rcx
 * 0000000140C68079: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C68080: mov     rax, [rsi+588h]
 * 0000000140C68087: mov     [rax+8], rbx
 * 0000000140C6808B: mov     [rax+14h], r11d
 * 0000000140C6808F: cmp     [rsi+918h], r12d
 * 0000000140C68096: jnz     loc_140C6AB5A
 * 0000000140C6809C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C680A6: add     rax, rsi
 * 0000000140C680A9: mov     [rsi+920h], rax
 * 0000000140C680B0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C680BA: add     rax, rcx
 * 0000000140C680BD: mov     [rsi+928h], rax
 * 0000000140C680C4: movsxd  rax, dword ptr [rcx]
 * 0000000140C680C7: mov     [rsi+930h], rax
 * 0000000140C680CE: mov     [rsi+938h], r14
 * 0000000140C680D5: mov     [rsi+918h], r15d
 * 0000000140C680DC: mov     ecx, [rsi+9D8h]
 * 0000000140C680E2: bt      ecx, 1Dh
 * 0000000140C680E6: jb      loc_140C6AB5A
 * 0000000140C680EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C680F6: jz      loc_140C6AB5A
 * 0000000140C680FC: test    r15b, cl
 * 0000000140C680FF: jz      loc_140C6AB5A
 * 0000000140C68105: mov     ecx, [rsi+0A74h]
 * 0000000140C6810B: mov     eax, [rsi+804h]
 * 0000000140C68111: mov     r10, [rsi+838h]
 * 0000000140C68118: sub     eax, ecx
 * 0000000140C6811A: mov     r8, [rsi+0A78h]
 * 0000000140C68121: lea     rdx, [rcx+rsi]
 * 0000000140C68125: mov     ecx, eax
 * 0000000140C68127: shr     rcx, 3
 * 0000000140C6812B: lea     r9, [rdx+rcx*8]
 * 0000000140C6812F: jmp     short loc_140C68152
 * 0000000140C68131: xor     [rdx], r8
 * 0000000140C68134: mov     rax, [rdx]
 * 0000000140C68137: movzx   ecx, r8b
 * 0000000140C6813B: xor     rax, r10
 * 0000000140C6813E: and     ecx, 3Fh
 * 0000000140C68141: ror     r8, cl
 * 0000000140C68144: add     r8, rax
 * 0000000140C68147: xor     r8, 0F05h
 * 0000000140C6814E: add     rdx, 8
 * 0000000140C68152: cmp     rdx, r9
 * 0000000140C68155: jnz     short loc_140C68131
 * 0000000140C68157: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6815F: cmp     r8, [rsi+0A80h]
 * 0000000140C68166: jz      loc_140C6AB5A
 * 0000000140C6816C: mov     ecx, [rsi+804h]
 * 0000000140C68172: mov     rax, [rsi+588h]
 * 0000000140C68179: mov     [rax], rsi
 * 0000000140C6817C: mov     [rax+10h], ecx
 * 0000000140C6817F: mov     rcx, [rsi+0A80h]
 * 0000000140C68186: cmp     [rsi+918h], r12d
 * 0000000140C6818D: jnz     short loc_140C6819D
 * 0000000140C6818F: mov     rax, [rsi+588h]
 * 0000000140C68196: xor     rcx, r8
 * 0000000140C68199: mov     [rax+18h], rcx
 * 0000000140C6819D: xor     edx, edx
 * 0000000140C6819F: mov     r9d, 100h
 * 0000000140C681A5: mov     rcx, rsi
 * 0000000140C681A8: call    sub_140C7903C
 * 0000000140C681AD: jmp     loc_140C6AB5A
 * 0000000140C681B2: test    rbx, rbx
 * 0000000140C681B5: jz      loc_140C6A4C0
 * 0000000140C681BB: mov     rax, [rsi+210h]
 * 0000000140C681C2: lea     rdx, [rbp+7B0h+var_220]
 * 0000000140C681C9: mov     rcx, rbx
 * 0000000140C681CC: mov     [rbp+7B0h+var_818], r15d
 * 0000000140C681D0: mov     [rbp+7B0h+var_790], rsi
 * 0000000140C681D4: call    KeGuardDispatchICall
 * 0000000140C681D9: mov     r15, [rbp+7B0h+BugCheckParameter2]
 * 0000000140C681E0: xor     r8d, r8d
 * 0000000140C681E3: mov     r14d, [rbp+7B0h+var_20C]
 * 0000000140C681EA: mov     r12, rax
 * 0000000140C681ED: mov     [rbp+7B0h+var_7D8], rax
 * 0000000140C681F1: mov     [rbp+7B0h+var_7FC], r14d
 * 0000000140C681F5: mov     [rbp+7B0h+var_7F0], r15
 * 0000000140C681F9: test    r15, r15
 * 0000000140C681FC: jnz     short loc_140C68218
 * 0000000140C681FE: test    dword ptr [rsi+9D8h], 100000h
 * 0000000140C68208: jz      loc_140C74200
 * 0000000140C6820E: mov     ecx, 0C000007Bh
 * 0000000140C68213: jmp     loc_140C6A481
 * 0000000140C68218: mov     ecx, 4
 * 0000000140C6821D: mov     [rbp+7B0h+var_720], r8
 * 0000000140C68224: lea     rax, [rbp+7B0h+var_718]
 * 0000000140C6822B: mov     r9d, 0FFFFFFFFh
 * 0000000140C68231: lea     edx, [rcx-3]
 * 0000000140C68234: mov     [rax], r8b
 * 0000000140C68237: add     rax, rdx
 * 0000000140C6823A: add     ecx, r9d
 * 0000000140C6823D: jnz     short loc_140C68234
 * 0000000140C6823F: mov     ebx, r8d
 * 0000000140C68242: cmp     [rsi+82Ch], r8d
 * 0000000140C68249: jbe     loc_140C68422
 * 0000000140C6824F: mov     ecx, [rbp+7B0h+var_718]
 * 0000000140C68255: mov     edx, dword ptr [rbp+7B0h+var_720+4]
 * 0000000140C6825B: mov     r9d, dword ptr [rbp+7B0h+var_720]
 * 0000000140C68262: mov     rax, [rsi+0AC0h]
 * 0000000140C68269: mov     r10d, r8d
 * 0000000140C6826C: test    rax, rax
 * 0000000140C6826F: mov     r11, rsi
 * 0000000140C68272: cmovnz  r11, rax
 * 0000000140C68276: mov     r8d, [r11+828h]
 * 0000000140C6827D: add     r8, r11
 * 0000000140C68280: test    r9d, r9d
 * 0000000140C68283: jz      short loc_140C68292
 * 0000000140C68285: cmp     edx, ebx
 * 0000000140C68287: ja      short loc_140C68292
 * 0000000140C68289: mov     r8d, ecx
 * 0000000140C6828C: mov     r10d, edx
 * 0000000140C6828F: add     r8, r11
 * 0000000140C68292: cmp     r10d, ebx
 * 0000000140C68295: jz      loc_140C683A7
 * 0000000140C6829B: mov     r9d, ebx
 * 0000000140C6829E: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 0000000140C682A8: sub     r9d, r10d
 * 0000000140C682AB: mov     r12d, 1
 * 0000000140C682B1: mov     r10d, ebx
 * 0000000140C682B4: mov     ecx, [r8]
 * 0000000140C682B7: sub     ecx, r12d
 * 0000000140C682BA: jz      loc_140C68379
 * 0000000140C682C0: sub     ecx, 6
 * 0000000140C682C3: jz      loc_140C6836B
 * 0000000140C682C9: sub     ecx, r12d
 * 0000000140C682CC: jz      loc_140C6835E
 * 0000000140C682D2: sub     ecx, edi
 * 0000000140C682D4: jz      short loc_140C68352
 * 0000000140C682D6: sub     ecx, 12h
 * 0000000140C682D9: jz      short loc_140C6834B
 * 0000000140C682DB: sub     ecx, edi
 * 0000000140C682DD: jz      short loc_140C6831F
 * 0000000140C682DF: sub     ecx, 3
 * 0000000140C682E2: jz      short loc_140C682F7
 * 0000000140C682E4: cmp     ecx, 0Ah
 * 0000000140C682E7: jz      loc_140C68379
 * 0000000140C682ED: mov     eax, 30h ; '0'
 * 0000000140C682F2: jmp     loc_140C6838E
 * 0000000140C682F7: mov     ecx, [r8+20h]
 * 0000000140C682FB: mov     edx, [r8+28h]
 * 0000000140C682FF: and     ecx, 0FFFh
 * 0000000140C68305: add     rdx, 0FFFh
 * 0000000140C6830C: add     rdx, rcx
 * 0000000140C6830F: shr     rdx, 0Ch
 * 0000000140C68313: lea     eax, [rdx+rdx*4]
 * 0000000140C68316: lea     eax, ds:30h[rax*4]
 * 0000000140C6831D: jmp     short loc_140C6838E
 * 0000000140C6831F: mov     eax, [r8+24h]
 * 0000000140C68323: lea     ecx, [rax-1]
 * 0000000140C68326: neg     eax
 * 0000000140C68328: sbb     eax, eax
 * 0000000140C6832A: and     ecx, eax
 * 0000000140C6832C: mov     rax, rsi
 * 0000000140C6832F: mul     rcx
 * 0000000140C68332: movzx   eax, word ptr [r8+28h]
 * 0000000140C68337: shr     rdx, 3
 * 0000000140C6833B: add     edx, 7
 * 0000000140C6833E: and     edx, 0FFFFFFF8h
 * 0000000140C68341: add     eax, edi
 * 0000000140C68343: lea     eax, [rax+rax*2]
 * 0000000140C68346: lea     eax, [rdx+rax*8]
 * 0000000140C68349: jmp     short loc_140C6838E
 * 0000000140C6834B: movzx   eax, word ptr [r8+28h]
 * 0000000140C68350: jmp     short loc_140C68363
 * 0000000140C68352: mov     eax, [r8+1Ch]
 * 0000000140C68356: add     eax, 3
 * 0000000140C68359: shl     eax, 4
 * 0000000140C6835C: jmp     short loc_140C6838E
 * 0000000140C6835E: movzx   eax, word ptr [r8+20h]
 * 0000000140C68363: add     eax, 37h ; '7'
 * 0000000140C68366: and     eax, 0FFFFFFF8h
 * 0000000140C68369: jmp     short loc_140C6838E
 * 0000000140C6836B: mov     eax, [r8+18h]
 * 0000000140C6836F: add     eax, edi
 * 0000000140C68371: lea     eax, [rax+rax*2]
 * 0000000140C68374: shl     eax, 3
 * 0000000140C68377: jmp     short loc_140C6838E
 * 0000000140C68379: mov     ecx, [r8+10h]
 * 0000000140C6837D: mov     rax, rsi
 * 0000000140C68380: mul     rcx
 * 0000000140C68383: shr     rdx, 3
 * 0000000140C68387: lea     eax, ds:30h[rdx*4]
 * 0000000140C6838E: add     r8, rax
 * 0000000140C68391: sub     r9, r12
 * 0000000140C68394: jnz     loc_140C682B4
 * 0000000140C6839A: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6839F: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C683A3: mov     r12, [rbp+7B0h+var_7D8]
 * 0000000140C683A7: mov     eax, 1
 * 0000000140C683AC: mov     edx, r10d
 * 0000000140C683AF: mov     r9d, eax
 * 0000000140C683B2: mov     dword ptr [rbp+7B0h+var_720], eax
 * 0000000140C683B8: mov     ecx, r8d
 * 0000000140C683BB: mov     dword ptr [rbp+7B0h+var_720+4], edx
 * 0000000140C683C1: sub     ecx, r11d
 * 0000000140C683C4: mov     r10d, r9d
 * 0000000140C683C7: mov     [rbp+7B0h+var_718], ecx
 * 0000000140C683CD: mov     eax, [r8]
 * 0000000140C683D0: cmp     eax, r10d
 * 0000000140C683D3: jz      short loc_140C683DF
 * 0000000140C683D5: cmp     eax, 0Ch
 * 0000000140C683D8: jz      short loc_140C683DF
 * 0000000140C683DA: cmp     eax, 2Bh ; '+'
 * 0000000140C683DD: jnz     short loc_140C683EB
 * 0000000140C683DF: cmp     [r8+8], r12
 * 0000000140C683E3: jnz     short loc_140C683EB
 * 0000000140C683E5: cmp     [r8+10h], r14d
 * 0000000140C683E9: jz      short loc_140C6840C
 * 0000000140C683EB: add     eax, 0FFFFFFDFh
 * 0000000140C683EE: cmp     eax, r10d
 * 0000000140C683F1: ja      short loc_140C683F9
 * 0000000140C683F3: cmp     [r8+20h], r15
 * 0000000140C683F7: jz      short loc_140C6840C
 * 0000000140C683F9: add     ebx, r10d
 * 0000000140C683FC: cmp     ebx, [rsi+82Ch]
 * 0000000140C68402: jnb     short loc_140C68422
 * 0000000140C68404: xor     r8d, r8d
 * 0000000140C68407: jmp     loc_140C68262
 * 0000000140C6840C: xor     r12d, r12d
 * 0000000140C6840F: mov     [rbp+7B0h+var_778], r8
 * 0000000140C68413: test    r8, r8
 * 0000000140C68416: jz      short loc_140C68429
 * 0000000140C68418: mov     ecx, 0C000010Eh
 * 0000000140C6841D: jmp     loc_140C6A47D
 * 0000000140C68422: xor     r12d, r12d
 * 0000000140C68425: mov     [rbp+7B0h+var_778], r12
 * 0000000140C68429: mov     eax, [rbp+7B0h+var_7FC]
 * 0000000140C6842C: mov     rbx, [rsi+528h]
 * 0000000140C68433: mov     [rbp+7B0h+var_830], eax
 * 0000000140C68436: cli
 * 0000000140C68437: mov     rcx, gs:20h
 * 0000000140C68440: mov     rax, [rsi+658h]
 * 0000000140C68447: mov     rcx, [rcx+rax]
 * 0000000140C6844B: sti
 * 0000000140C6844C: mov     rax, [rsi+178h]
 * 0000000140C68453: call    KeGuardDispatchICall
 * 0000000140C68458: mov     rcx, [rsi+530h]
 * 0000000140C6845F: mov     r14d, 1
 * 0000000140C68465: mov     rax, [rsi+0F8h]
 * 0000000140C6846C: mov     dl, r14b
 * 0000000140C6846F: call    KeGuardDispatchICall
 * 0000000140C68474: mov     rdx, [rbx]
 * 0000000140C68477: cmp     rdx, rbx
 * 0000000140C6847A: jz      short loc_140C684C5
 * 0000000140C6847C: mov     r9, [rsi+758h]
 * 0000000140C68483: mov     r10, [rsi+760h]
 * 0000000140C6848A: mov     r11, [rsi+768h]
 * 0000000140C68491: mov     rcx, rdx
 * 0000000140C68494: sub     rcx, r9
 * 0000000140C68497: mov     rax, [rcx+r10]
 * 0000000140C6849B: mov     r8d, [rcx+r11]
 * 0000000140C6849F: add     r8, rax
 * 0000000140C684A2: cmp     r15, rax
 * 0000000140C684A5: jb      short loc_140C684AC
 * 0000000140C684A7: cmp     r15, r8
 * 0000000140C684AA: jb      short loc_140C684B6
 * 0000000140C684AC: mov     rdx, [rdx]
 * 0000000140C684AF: cmp     rdx, rbx
 * 0000000140C684B2: jnz     short loc_140C68491
 * 0000000140C684B4: jmp     short loc_140C684C5
 * 0000000140C684B6: mov     rax, [rsi+0E8h]
 * 0000000140C684BD: mov     edx, r14d
 * 0000000140C684C0: call    KeGuardDispatchICall
 * 0000000140C684C5: mov     rcx, [rsi+530h]
 * 0000000140C684CC: mov     rax, [rsi+128h]
 * 0000000140C684D3: call    KeGuardDispatchICall
 * 0000000140C684D8: mov     rax, [rsi+180h]
 * 0000000140C684DF: call    KeGuardDispatchICall
 * 0000000140C684E4: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C684EE: jz      short loc_140C6850D
 * 0000000140C684F0: mov     r8d, 9
 * 0000000140C684F6: lea     rcx, [rbp+7B0h+var_7D0]
 * 0000000140C684FA: mov     rdx, r15
 * 0000000140C684FD: call    sub_140C8113C
 * 0000000140C68502: mov     r13, [rbp+7B0h+var_7D0]
 * 0000000140C68506: mov     ecx, eax
 * 0000000140C68508: jmp     loc_140C6A47D
 * 0000000140C6850D: mov     rax, [rsi+200h]
 * 0000000140C68514: lea     r9, [rbp+7B0h+var_7FC]
 * 0000000140C68518: xor     r8d, r8d
 * 0000000140C6851B: mov     [rbp+7B0h+var_550], r12
 * 0000000140C68522: mov     dl, r14b
 * 0000000140C68525: mov     [rbp+7B0h+var_690], r12d
 * 0000000140C6852C: mov     rcx, r15
 * 0000000140C6852F: call    KeGuardDispatchICall
 * 0000000140C68534: mov     rcx, rax
 * 0000000140C68537: test    rax, rax
 * 0000000140C6853A: jnz     short loc_140C68544
 * 0000000140C6853C: mov     eax, r12d
 * 0000000140C6853F: mov     [rbp+7B0h+var_7FC], eax
 * 0000000140C68542: jmp     short loc_140C68547
 * 0000000140C68544: mov     eax, [rbp+7B0h+var_7FC]
 * 0000000140C68547: mov     [rbp+7B0h+var_568], rcx
 * 0000000140C6854E: lea     r9, [rbp+7B0h+var_7FC]
 * 0000000140C68552: mov     [rbp+7B0h+var_69C], eax
 * 0000000140C68558: mov     rcx, r15
 * 0000000140C6855B: mov     rax, [rsi+200h]
 * 0000000140C68562: mov     r8d, 0Ch
 * 0000000140C68568: mov     dl, r14b
 * 0000000140C6856B: call    KeGuardDispatchICall
 * 0000000140C68570: mov     [rbp+7B0h+var_828], rax
 * 0000000140C68574: mov     rcx, rax
 * 0000000140C68577: test    rax, rax
 * 0000000140C6857A: jnz     short loc_140C68584
 * 0000000140C6857C: mov     eax, r12d
 * 0000000140C6857F: mov     [rbp+7B0h+var_7FC], eax
 * 0000000140C68582: jmp     short loc_140C68587
 * 0000000140C68584: mov     eax, [rbp+7B0h+var_7FC]
 * 0000000140C68587: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C6858D: lea     r9, [rbp+7B0h+var_7FC]
 * 0000000140C68591: mov     [rbp+7B0h+var_560], rcx
 * 0000000140C68598: mov     r8d, 0Ah
 * 0000000140C6859E: mov     [rbp+7B0h+var_698], eax
 * 0000000140C685A4: mov     rcx, r15
 * 0000000140C685A7: mov     rax, [rsi+200h]
 * 0000000140C685AE: mov     dl, r14b
 * 0000000140C685B1: call    KeGuardDispatchICall
 * 0000000140C685B6: mov     rcx, rax
 * 0000000140C685B9: test    rax, rax
 * 0000000140C685BC: jnz     short loc_140C685C6
 * 0000000140C685BE: mov     eax, r12d
 * 0000000140C685C1: mov     [rbp+7B0h+var_7FC], eax
 * 0000000140C685C4: jmp     short loc_140C685C9
 * 0000000140C685C6: mov     eax, [rbp+7B0h+var_7FC]
 * 0000000140C685C9: mov     [rbp+7B0h+var_558], rcx
 * 0000000140C685D0: mov     rcx, r15
 * 0000000140C685D3: mov     [rbp+7B0h+var_694], eax
 * 0000000140C685D9: mov     rax, [rsi+208h]
 * 0000000140C685E0: call    KeGuardDispatchICall
 * 0000000140C685E5: mov     rbx, rax
 * 0000000140C685E8: test    rax, rax
 * 0000000140C685EB: jnz     loc_140C68713
 * 0000000140C685F1: mov     ecx, [rsi+9D8h]
 * 0000000140C685F7: bt      ecx, 14h
 * 0000000140C685FB: jnb     loc_140C7422B
 * 0000000140C68601: cmp     [rsi+918h], r12d
 * 0000000140C68608: jnz     loc_140C68709
 * 0000000140C6860E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C68618: add     rax, rsi
 * 0000000140C6861B: mov     [rsi+920h], rax
 * 0000000140C68622: mov     [rsi+928h], r12
 * 0000000140C68629: mov     qword ptr [rsi+930h], 10Fh
 * 0000000140C68634: mov     [rsi+938h], r15
 * 0000000140C6863B: mov     [rsi+918h], r14d
 * 0000000140C68642: bt      ecx, 1Dh
 * 0000000140C68646: jb      loc_140C68709
 * 0000000140C6864C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C68656: jz      loc_140C68709
 * 0000000140C6865C: test    r14b, cl
 * 0000000140C6865F: jz      loc_140C68709
 * 0000000140C68665: mov     ecx, [rsi+0A74h]
 * 0000000140C6866B: mov     eax, [rsi+804h]
 * 0000000140C68671: mov     r10, [rsi+838h]
 * 0000000140C68678: sub     eax, ecx
 * 0000000140C6867A: mov     r8, [rsi+0A78h]
 * 0000000140C68681: lea     rdx, [rcx+rsi]
 * 0000000140C68685: mov     ecx, eax
 * 0000000140C68687: shr     rcx, 3
 * 0000000140C6868B: lea     r9, [rdx+rcx*8]
 * 0000000140C6868F: jmp     short loc_140C686B2
 * 0000000140C68691: xor     [rdx], r8
 * 0000000140C68694: mov     rax, [rdx]
 * 0000000140C68697: movzx   ecx, r8b
 * 0000000140C6869B: xor     rax, r10
 * 0000000140C6869E: and     ecx, 3Fh
 * 0000000140C686A1: ror     r8, cl
 * 0000000140C686A4: add     r8, rax
 * 0000000140C686A7: xor     r8, 0F05h
 * 0000000140C686AE: add     rdx, 8
 * 0000000140C686B2: cmp     rdx, r9
 * 0000000140C686B5: jnz     short loc_140C68691
 * 0000000140C686B7: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C686BF: cmp     r8, [rsi+0A80h]
 * 0000000140C686C6: jz      short loc_140C68709
 * 0000000140C686C8: mov     ecx, [rsi+804h]
 * 0000000140C686CE: mov     rax, [rsi+588h]
 * 0000000140C686D5: mov     [rax], rsi
 * 0000000140C686D8: mov     [rax+10h], ecx
 * 0000000140C686DB: mov     rcx, [rsi+0A80h]
 * 0000000140C686E2: cmp     [rsi+918h], r12d
 * 0000000140C686E9: jnz     short loc_140C686F9
 * 0000000140C686EB: mov     rax, [rsi+588h]
 * 0000000140C686F2: xor     rcx, r8
 * 0000000140C686F5: mov     [rax+18h], rcx
 * 0000000140C686F9: mov     rcx, rsi
 * 0000000140C686FC: mov     r9d, 100h
 * 0000000140C68702: xor     edx, edx
 * 0000000140C68704: call    sub_140C7903C
 * 0000000140C68709: mov     ecx, 0C000007Bh
 * 0000000140C6870E: jmp     loc_140C6A47D
 * 0000000140C68713: mov     rax, [rsi+498h]
 * 0000000140C6871A: lea     rdx, [rbp+7B0h+var_5B0]
 * 0000000140C68721: mov     rcx, r15
 * 0000000140C68724: call    KeGuardDispatchICall
 * 0000000140C68729: mov     r8d, [rsi+944h]
 * 0000000140C68730: mov     [rbp+7B0h+var_548], rax
 * 0000000140C68737: mov     eax, [rbp+7B0h+var_5B0]
 * 0000000140C6873D: mov     [rbp+7B0h+var_68C], eax
 * 0000000140C68743: mov     eax, [rbx+54h]
 * 0000000140C68746: mov     [rbp+7B0h+var_570], r15
 * 0000000140C6874D: mov     r15d, [rsi+804h]
 * 0000000140C68754: mov     [rbp+7B0h+var_6A0], eax
 * 0000000140C6875A: lea     eax, [r15+120h]
 * 0000000140C68761: cmp     eax, [rsi+0A64h]
 * 0000000140C68767: jbe     loc_140C68848
 * 0000000140C6876D: mov     edx, eax
 * 0000000140C6876F: mov     rcx, rsi
 * 0000000140C68772: call    sub_140C787A8
 * 0000000140C68777: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6877C: mov     rbx, rax
 * 0000000140C6877F: test    rax, rax
 * 0000000140C68782: jz      loc_140C68871
 * 0000000140C68788: mov     ecx, [rsi+9D8h]
 * 0000000140C6878E: test    dil, cl
 * 0000000140C68791: jnz     loc_140C6883F
 * 0000000140C68797: mov     eax, [rsi+804h]
 * 0000000140C6879D: and     ecx, 10000000h
 * 0000000140C687A3: mov     r9, [rsi+7E8h]
 * 0000000140C687AA: neg     ecx
 * 0000000140C687AC: mov     rcx, rsi
 * 0000000140C687AF: sbb     r8d, r8d
 * 0000000140C687B2: and     r8d, [rsi+944h]
 * 0000000140C687B9: cmp     eax, 8
 * 0000000140C687BC: jb      short loc_140C687D3
 * 0000000140C687BE: mov     edx, eax
 * 0000000140C687C0: shr     rdx, 3
 * 0000000140C687C4: mov     [rcx], r12
 * 0000000140C687C7: add     eax, 0FFFFFFF8h
 * 0000000140C687CA: add     rcx, 8
 * 0000000140C687CE: sub     rdx, r14
 * 0000000140C687D1: jnz     short loc_140C687C4
 * 0000000140C687D3: test    eax, eax
 * 0000000140C687D5: jz      short loc_140C687E6
 * 0000000140C687D7: mov     edx, 0FFFFFFFFh
 * 0000000140C687DC: mov     [rcx], r12b
 * 0000000140C687DF: add     rcx, r14
 * 0000000140C687E2: add     eax, edx
 * 0000000140C687E4: jnz     short loc_140C687DC
 * 0000000140C687E6: mov     r14d, [rbx+944h]
 * 0000000140C687ED: mov     [rbx+944h], r8d
 * 0000000140C687F4: cmp     r8d, 3
 * 0000000140C687F8: jz      short loc_140C68829
 * 0000000140C687FA: test    dword ptr [rbx+9D8h], 8000000h
 * 0000000140C68804: jnz     short loc_140C68820
 * 0000000140C68806: test    r8d, r8d
 * 0000000140C68809: jz      short loc_140C68820
 * 0000000140C6880B: mov     rax, [rbx+238h]
 * 0000000140C68812: lea     rcx, [r9-8]
 * 0000000140C68816: mov     rdx, [rcx]
 * 0000000140C68819: call    KeGuardDispatchICall
 * 0000000140C6881E: jmp     short loc_140C68838
 * 0000000140C68820: mov     rax, [rbx+108h]
 * 0000000140C68827: jmp     short loc_140C68830
 * 0000000140C68829: mov     rax, [rbx+370h]
 * 0000000140C68830: mov     rcx, r9
 * 0000000140C68833: call    KeGuardDispatchICall
 * 0000000140C68838: mov     [rbx+944h], r14d
 * 0000000140C6883F: and     dword ptr [rbx+9D8h], 0FFFFFFFDh
 * 0000000140C68846: jmp     short loc_140C68856
 * 0000000140C68848: mov     rbx, rsi
 * 0000000140C6884B: mov     [rsi+804h], eax
 * 0000000140C68851: mov     [rsp+8B0h+var_858], rbx
 * 0000000140C68856: mov     eax, 6
 * 0000000140C6885B: lea     r14, [rbx+r15]
 * 0000000140C6885F: add     [rbx+82Ch], eax
 * 0000000140C68865: mov     [rbp+7B0h+var_660], r14
 * 0000000140C6886C: test    rbx, rbx
 * 0000000140C6886F: jnz     short loc_140C6887F
 * 0000000140C68871: mov     [rbp+7B0h+var_790], r12
 * 0000000140C68875: mov     ecx, 0C000009Ah
 * 0000000140C6887A: jmp     loc_140C6A47D
 * 0000000140C6887F: lea     rdi, [rbp+7B0h+var_570]
 * 0000000140C68886: mov     [rbp+7B0h+var_778], r14
 * 0000000140C6888A: mov     [rsp+8B0h+var_840], rdi
 * 0000000140C6888F: lea     rsi, [rbp+7B0h+var_6A0]
 * 0000000140C68896: mov     [rbp+7B0h+var_7D0], rax
 * 0000000140C6889A: mov     r10d, 1
 * 0000000140C688A0: mov     [rbp+7B0h+var_810], rbx
 * 0000000140C688A4: mov     r13d, [rsi]
 * 0000000140C688A7: mov     rdx, rax
 * 0000000140C688AA: mov     r15, [rdi]
 * 0000000140C688AD: mov     ecx, 30h ; '0'
 * 0000000140C688B2: mov     dword ptr [rsp+8B0h+var_848], r13d
 * 0000000140C688B7: mov     rax, r14
 * 0000000140C688BA: mov     [rax], r12
 * 0000000140C688BD: add     ecx, 0FFFFFFF8h
 * 0000000140C688C0: add     rax, 8
 * 0000000140C688C4: sub     rdx, r10
 * 0000000140C688C7: jnz     short loc_140C688BA
 * 0000000140C688C9: test    ecx, ecx
 * 0000000140C688CB: jz      short loc_140C688DC
 * 0000000140C688CD: mov     edx, 0FFFFFFFFh
 * 0000000140C688D2: mov     [rax], r12b
 * 0000000140C688D5: add     rax, r10
 * 0000000140C688D8: add     ecx, edx
 * 0000000140C688DA: jnz     short loc_140C688D2
 * 0000000140C688DC: mov     [r14], r12d
 * 0000000140C688DF: lea     rcx, [r15+r13]
 * 0000000140C688E3: mov     [r14+8], r15
 * 0000000140C688E7: mov     r9, r15
 * 0000000140C688EA: mov     [r14+10h], r13d
 * 0000000140C688EE: mov     rax, r15
 * 0000000140C688F1: add     [rbx+848h], r13d
 * 0000000140C688F8: mov     r11d, [rbx+834h]
 * 0000000140C688FF: mov     r12, [rbx+838h]
 * 0000000140C68906: cmp     r15, rcx
 * 0000000140C68909: jnb     short loc_140C6891B
 * 0000000140C6890B: mov     edx, 40h ; '@'
 * 0000000140C68910: prefetchnta byte ptr [rax]
 * 0000000140C68913: add     rax, rdx
 * 0000000140C68916: cmp     rax, rcx
 * 0000000140C68919: jb      short loc_140C68910
 * 0000000140C6891B: mov     r10d, r13d
 * 0000000140C6891E: mov     r8, r12
 * 0000000140C68921: shr     r10d, 7
 * 0000000140C68925: test    r10d, r10d
 * 0000000140C68928: jz      short loc_140C6899F
 * 0000000140C6892A: mov     ebx, 1
 * 0000000140C6892F: mov     rdi, 7010008004002001h
 * 0000000140C68939: mov     r13d, 0FFFFFFFFh
 * 0000000140C6893F: mov     eax, 8
 * 0000000140C68944: xor     r8, [r9]
 * 0000000140C68947: mov     ecx, r11d
 * 0000000140C6894A: rol     r8, cl
 * 0000000140C6894D: xor     r8, [r9+8]
 * 0000000140C68951: add     r9, 10h
 * 0000000140C68955: rol     r8, cl
 * 0000000140C68958: sub     rax, rbx
 * 0000000140C6895B: jnz     short loc_140C68944
 * 0000000140C6895D: mov     rcx, r9
 * 0000000140C68960: sub     rcx, r15
 * 0000000140C68963: xor     rcx, r12
 * 0000000140C68966: mov     rax, rcx
 * 0000000140C68969: rol     rax, 11h
 * 0000000140C6896D: xor     rcx, rax
 * 0000000140C68970: mov     rax, rdi
 * 0000000140C68973: mul     rcx
 * 0000000140C68976: mov     [rbp+7B0h+var_458], rdx
 * 0000000140C6897D: xor     rdx, rax
 * 0000000140C68980: xor     r11d, edx
 * 0000000140C68983: and     r11d, 3Fh
 * 0000000140C68987: cmovz   r11d, ebx
 * 0000000140C6898B: add     r10d, r13d
 * 0000000140C6898E: jnz     short loc_140C6893F
 * 0000000140C68990: mov     rbx, [rsp+8B0h+var_858]
 * 0000000140C68995: mov     r13d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6899A: mov     rdi, [rsp+8B0h+var_840]
 * 0000000140C6899F: mov     edx, r13d
 * 0000000140C689A2: mov     r10d, 1
 * 0000000140C689A8: and     edx, 7Fh
 * 0000000140C689AB: cmp     edx, 8
 * 0000000140C689AE: jb      short loc_140C689CB
 * 0000000140C689B0: mov     eax, edx
 * 0000000140C689B2: shr     rax, 3
 * 0000000140C689B6: xor     r8, [r9]
 * 0000000140C689B9: mov     ecx, r11d
 * 0000000140C689BC: rol     r8, cl
 * 0000000140C689BF: add     r9, 8
 * 0000000140C689C3: add     edx, 0FFFFFFF8h
 * 0000000140C689C6: sub     rax, r10
 * 0000000140C689C9: jnz     short loc_140C689B6
 * 0000000140C689CB: xor     r12d, r12d
 * 0000000140C689CE: test    edx, edx
 * 0000000140C689D0: jz      short loc_140C689F0
 * 0000000140C689D2: mov     ebx, 0FFFFFFFFh
 * 0000000140C689D7: movzx   eax, byte ptr [r9]
 * 0000000140C689DB: mov     ecx, r11d
 * 0000000140C689DE: xor     r8, rax
 * 0000000140C689E1: add     r9, r10
 * 0000000140C689E4: rol     r8, cl
 * 0000000140C689E7: add     edx, ebx
 * 0000000140C689E9: jnz     short loc_140C689D7
 * 0000000140C689EB: mov     rbx, [rsp+8B0h+var_858]
 * 0000000140C689F0: mov     rax, r8
 * 0000000140C689F3: jmp     short loc_140C689F8
 * 0000000140C689F5: xor     r8d, eax
 * 0000000140C689F8: shr     rax, 1Fh
 * 0000000140C689FC: test    rax, rax
 * 0000000140C689FF: jnz     short loc_140C689F5
 * 0000000140C68A01: btr     r8d, 1Fh
 * 0000000140C68A06: add     rdi, 8
 * 0000000140C68A0A: mov     [r14+14h], r8d
 * 0000000140C68A0E: add     rsi, 4
 * 0000000140C68A12: add     [rbx+848h], r13d
 * 0000000140C68A19: mov     eax, 6
 * 0000000140C68A1E: mov     r14, [rbp+7B0h+var_660]
 * 0000000140C68A25: add     r14, 30h ; '0'
 * 0000000140C68A29: mov     [rsp+8B0h+var_840], rdi
 * 0000000140C68A2E: sub     [rbp+7B0h+var_7D0], r10
 * 0000000140C68A32: mov     [rbp+7B0h+var_660], r14
 * 0000000140C68A39: jnz     loc_140C688A4
 * 0000000140C68A3F: mov     rbx, [rbp+7B0h+var_778]
 * 0000000140C68A43: lea     edi, [rax-4]
 * 0000000140C68A46: mov     r13, [rbp+7B0h+var_810]
 * 0000000140C68A4A: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C68A4E: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C68A53: mov     dword ptr [rbx], 2Ch ; ','
 * 0000000140C68A59: mov     [rbx+18h], r15
 * 0000000140C68A5D: test    dword ptr [r13+9D8h], 8100000h
 * 0000000140C68A68: jnz     short loc_140C68A8C
 * 0000000140C68A6A: bt      dword ptr [r13+9DCh], 0Fh
 * 0000000140C68A73: jnb     short loc_140C68A8C
 * 0000000140C68A75: or      [rbx+20h], r10d
 * 0000000140C68A79: mov     rdx, r15
 * 0000000140C68A7C: mov     rcx, r13
 * 0000000140C68A7F: call    sub_140C799D0
 * 0000000140C68A84: test    eax, eax
 * 0000000140C68A86: jz      short loc_140C68A8C
 * 0000000140C68A88: or      dword ptr [rbx+20h], 4
 * 0000000140C68A8C: mov     r8d, [rbp+7B0h+var_830]
 * 0000000140C68A90: lea     rax, [rbp+7B0h+var_7F8]
 * 0000000140C68A94: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C68A98: lea     rcx, [rbp+7B0h+var_790]
 * 0000000140C68A9C: mov     [rsp+8B0h+var_880], rax
 * 0000000140C68AA1: mov     r9, r15
 * 0000000140C68AA4: lea     rax, [rbp+7B0h+var_7C4]
 * 0000000140C68AA8: mov     [rbp+7B0h+var_790], r13
 * 0000000140C68AAC: mov     [rsp+8B0h+var_888], rax
 * 0000000140C68AB1: mov     dword ptr [rsp+8B0h+BugCheckParameter4], 9
 * 0000000140C68AB9: mov     [rbp+7B0h+var_7D0], r13
 * 0000000140C68ABD: call    sub_140C76E10
 * 0000000140C68AC2: mov     ecx, eax
 * 0000000140C68AC4: test    eax, eax
 * 0000000140C68AC6: js      loc_140C6A47D
 * 0000000140C68ACC: mov     rcx, [rbp+7B0h+var_778]
 * 0000000140C68AD0: mov     rbx, [rbp+7B0h+var_790]
 * 0000000140C68AD4: mov     r9d, [rbp+7B0h+var_7F8]
 * 0000000140C68AD8: mov     rax, rbx
 * 0000000140C68ADB: sub     r9d, [rbp+7B0h+var_7C4]
 * 0000000140C68ADF: sub     rax, r13
 * 0000000140C68AE2: mov     r14d, [rbp+7B0h+var_7C4]
 * 0000000140C68AE6: add     rcx, rax
 * 0000000140C68AE9: mov     [rbp+7B0h+var_778], rcx
 * 0000000140C68AED: add     r14, r15
 * 0000000140C68AF0: lea     r13, [rcx+0C0h]
 * 0000000140C68AF7: mov     ecx, 30h ; '0'
 * 0000000140C68AFC: mov     [rsp+8B0h+var_858], r13
 * 0000000140C68B01: mov     rax, r13
 * 0000000140C68B04: lea     edx, [rcx-2Ah]
 * 0000000140C68B07: lea     r8d, [rcx-2Fh]
 * 0000000140C68B0B: mov     [rax], r12
 * 0000000140C68B0E: add     ecx, 0FFFFFFF8h
 * 0000000140C68B11: add     rax, 8
 * 0000000140C68B15: sub     rdx, r8
 * 0000000140C68B18: jnz     short loc_140C68B0B
 * 0000000140C68B1A: test    ecx, ecx
 * 0000000140C68B1C: jz      short loc_140C68B2D
 * 0000000140C68B1E: mov     edx, 0FFFFFFFFh
 * 0000000140C68B23: mov     [rax], r12b
 * 0000000140C68B26: add     rax, r8
 * 0000000140C68B29: add     ecx, edx
 * 0000000140C68B2B: jnz     short loc_140C68B23
 * 0000000140C68B2D: mov     [r13+0], r12d
 * 0000000140C68B31: mov     r10, r14
 * 0000000140C68B34: mov     [r13+8], r14
 * 0000000140C68B38: mov     rax, r14
 * 0000000140C68B3B: mov     [r13+10h], r9d
 * 0000000140C68B3F: add     [rbx+848h], r9d
 * 0000000140C68B46: mov     r15d, [rbx+834h]
 * 0000000140C68B4D: mov     r12, [rbx+838h]
 * 0000000140C68B54: mov     ecx, r9d
 * 0000000140C68B57: add     rcx, r14
 * 0000000140C68B5A: cmp     r14, rcx
 * 0000000140C68B5D: jnb     short loc_140C68B6F
 * 0000000140C68B5F: mov     edx, 40h ; '@'
 * 0000000140C68B64: prefetchnta byte ptr [rax]
 * 0000000140C68B67: add     rax, rdx
 * 0000000140C68B6A: cmp     rax, rcx
 * 0000000140C68B6D: jb      short loc_140C68B64
 * 0000000140C68B6F: mov     r11d, r9d
 * 0000000140C68B72: mov     r8, r12
 * 0000000140C68B75: shr     r11d, 7
 * 0000000140C68B79: test    r11d, r11d
 * 0000000140C68B7C: jz      short loc_140C68BF1
 * 0000000140C68B7E: mov     edi, 1
 * 0000000140C68B83: mov     esi, 0FFFFFFFFh
 * 0000000140C68B88: mov     r13, 7010008004002001h
 * 0000000140C68B92: mov     eax, 8
 * 0000000140C68B97: xor     r8, [r10]
 * 0000000140C68B9A: mov     ecx, r15d
 * 0000000140C68B9D: rol     r8, cl
 * 0000000140C68BA0: xor     r8, [r10+8]
 * 0000000140C68BA4: add     r10, 10h
 * 0000000140C68BA8: rol     r8, cl
 * 0000000140C68BAB: sub     rax, rdi
 * 0000000140C68BAE: jnz     short loc_140C68B97
 * 0000000140C68BB0: mov     rcx, r10
 * 0000000140C68BB3: sub     rcx, r14
 * 0000000140C68BB6: xor     rcx, r12
 * 0000000140C68BB9: mov     rax, rcx
 * 0000000140C68BBC: rol     rax, 11h
 * 0000000140C68BC0: xor     rcx, rax
 * 0000000140C68BC3: mov     rax, r13
 * 0000000140C68BC6: mul     rcx
 * 0000000140C68BC9: mov     [rbp+7B0h+var_450], rdx
 * 0000000140C68BD0: xor     rdx, rax
 * 0000000140C68BD3: xor     r15d, edx
 * 0000000140C68BD6: and     r15d, 3Fh
 * 0000000140C68BDA: cmovz   r15d, edi
 * 0000000140C68BDE: add     r11d, esi
 * 0000000140C68BE1: jnz     short loc_140C68B92
 * 0000000140C68BE3: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C68BE8: lea     edi, [r11+2]
 * 0000000140C68BEC: mov     r13, [rsp+8B0h+var_858]
 * 0000000140C68BF1: and     r9d, 7Fh
 * 0000000140C68BF5: mov     r12d, 1
 * 0000000140C68BFB: cmp     r9d, 8
 * 0000000140C68BFF: jb      short loc_140C68C1E
 * 0000000140C68C01: mov     eax, r9d
 * 0000000140C68C04: shr     rax, 3
 * 0000000140C68C08: xor     r8, [r10]
 * 0000000140C68C0B: mov     ecx, r15d
 * 0000000140C68C0E: rol     r8, cl
 * 0000000140C68C11: add     r10, 8
 * 0000000140C68C15: add     r9d, 0FFFFFFF8h
 * 0000000140C68C19: sub     rax, r12
 * 0000000140C68C1C: jnz     short loc_140C68C08
 * 0000000140C68C1E: test    r9d, r9d
 * 0000000140C68C21: jz      short loc_140C68C41
 * 0000000140C68C23: mov     edi, 0FFFFFFFFh
 * 0000000140C68C28: movzx   eax, byte ptr [r10]
 * 0000000140C68C2C: mov     ecx, r15d
 * 0000000140C68C2F: xor     r8, rax
 * 0000000140C68C32: add     r10, r12
 * 0000000140C68C35: rol     r8, cl
 * 0000000140C68C38: add     r9d, edi
 * 0000000140C68C3B: jnz     short loc_140C68C28
 * 0000000140C68C3D: lea     edi, [r9+2]
 * 0000000140C68C41: mov     rax, r8
 * 0000000140C68C44: shr     rax, 1Fh
 * 0000000140C68C48: xor     r10d, r10d
 * 0000000140C68C4B: jmp     short loc_140C68C54
 * 0000000140C68C4D: xor     r8d, eax
 * 0000000140C68C50: shr     rax, 1Fh
 * 0000000140C68C54: test    rax, rax
 * 0000000140C68C57: jnz     short loc_140C68C4D
 * 0000000140C68C59: btr     r8d, 1Fh
 * 0000000140C68C5E: mov     [rbp+7B0h+var_810], rbx
 * 0000000140C68C62: mov     [r13+14h], r8d
 * 0000000140C68C66: mov     r13, rbx
 * 0000000140C68C69: mov     rax, [rbp+7B0h+var_778]
 * 0000000140C68C6D: mov     [rbp+7B0h+var_7D0], rbx
 * 0000000140C68C71: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140C68C7B: mov     rax, [rbp+7B0h+var_778]
 * 0000000140C68C7F: add     rax, 60h ; '`'
 * 0000000140C68C83: mov     [rbp+7B0h+var_710], rax
 * 0000000140C68C8A: jnz     loc_140C68F28
 * 0000000140C68C90: mov     r15d, [rbx+804h]
 * 0000000140C68C97: mov     r8d, [rbx+944h]
 * 0000000140C68C9E: lea     eax, [r15+30h]
 * 0000000140C68CA2: cmp     eax, [rbx+0A64h]
 * 0000000140C68CA8: jbe     loc_140C68D85
 * 0000000140C68CAE: mov     edx, eax
 * 0000000140C68CB0: mov     rcx, rbx
 * 0000000140C68CB3: call    sub_140C787A8
 * 0000000140C68CB8: xor     r10d, r10d
 * 0000000140C68CBB: mov     r14, rax
 * 0000000140C68CBE: test    rax, rax
 * 0000000140C68CC1: jz      loc_140C68DA4
 * 0000000140C68CC7: mov     ecx, [rbx+9D8h]
 * 0000000140C68CCD: test    dil, cl
 * 0000000140C68CD0: jnz     loc_140C68D7B
 * 0000000140C68CD6: mov     eax, [rbx+804h]
 * 0000000140C68CDC: and     ecx, 10000000h
 * 0000000140C68CE2: mov     r8, [rbx+7E8h]
 * 0000000140C68CE9: neg     ecx
 * 0000000140C68CEB: sbb     edx, edx
 * 0000000140C68CED: and     edx, [rbx+944h]
 * 0000000140C68CF3: cmp     eax, 8
 * 0000000140C68CF6: jb      short loc_140C68D0D
 * 0000000140C68CF8: mov     ecx, eax
 * 0000000140C68CFA: shr     rcx, 3
 * 0000000140C68CFE: mov     [rbx], r10
 * 0000000140C68D01: add     eax, 0FFFFFFF8h
 * 0000000140C68D04: add     rbx, 8
 * 0000000140C68D08: sub     rcx, r12
 * 0000000140C68D0B: jnz     short loc_140C68CFE
 * 0000000140C68D0D: test    eax, eax
 * 0000000140C68D0F: jz      short loc_140C68D20
 * 0000000140C68D11: mov     ecx, 0FFFFFFFFh
 * 0000000140C68D16: mov     [rbx], r10b
 * 0000000140C68D19: add     rbx, r12
 * 0000000140C68D1C: add     eax, ecx
 * 0000000140C68D1E: jnz     short loc_140C68D16
 * 0000000140C68D20: mov     ebx, [r14+944h]
 * 0000000140C68D27: mov     [r14+944h], edx
 * 0000000140C68D2E: cmp     edx, 3
 * 0000000140C68D31: jz      short loc_140C68D62
 * 0000000140C68D33: test    dword ptr [r14+9D8h], 8000000h
 * 0000000140C68D3E: jnz     short loc_140C68D59
 * 0000000140C68D40: test    edx, edx
 * 0000000140C68D42: jz      short loc_140C68D59
 * 0000000140C68D44: mov     rax, [r14+238h]
 * 0000000140C68D4B: lea     rcx, [r8-8]
 * 0000000140C68D4F: mov     rdx, [rcx]
 * 0000000140C68D52: call    KeGuardDispatchICall
 * 0000000140C68D57: jmp     short loc_140C68D71
 * 0000000140C68D59: mov     rax, [r14+108h]
 * 0000000140C68D60: jmp     short loc_140C68D69
 * 0000000140C68D62: mov     rax, [r14+370h]
 * 0000000140C68D69: mov     rcx, r8
 * 0000000140C68D6C: call    KeGuardDispatchICall
 * 0000000140C68D71: mov     [r14+944h], ebx
 * 0000000140C68D78: xor     r10d, r10d
 * 0000000140C68D7B: and     dword ptr [r14+9D8h], 0FFFFFFFDh
 * 0000000140C68D83: jmp     short loc_140C68D8E
 * 0000000140C68D85: mov     r14, rbx
 * 0000000140C68D88: mov     [rbx+804h], eax
 * 0000000140C68D8E: add     [r14+82Ch], r12d
 * 0000000140C68D95: add     r15, r14
 * 0000000140C68D98: mov     [rbp+7B0h+var_5A8], r15
 * 0000000140C68D9F: test    r14, r14
 * 0000000140C68DA2: jnz     short loc_140C68DAD
 * 0000000140C68DA4: mov     [rbp+7B0h+var_790], r10
 * 0000000140C68DA8: jmp     loc_140C68875
 * 0000000140C68DAD: mov     ecx, 30h ; '0'
 * 0000000140C68DB2: mov     rax, r15
 * 0000000140C68DB5: lea     edx, [rcx-2Ah]
 * 0000000140C68DB8: mov     [rax], r10
 * 0000000140C68DBB: add     ecx, 0FFFFFFF8h
 * 0000000140C68DBE: add     rax, 8
 * 0000000140C68DC2: sub     rdx, r12
 * 0000000140C68DC5: jnz     short loc_140C68DB8
 * 0000000140C68DC7: test    ecx, ecx
 * 0000000140C68DC9: jz      short loc_140C68DDA
 * 0000000140C68DCB: mov     edx, 0FFFFFFFFh
 * 0000000140C68DD0: mov     [rax], r10b
 * 0000000140C68DD3: add     rax, r12
 * 0000000140C68DD6: add     ecx, edx
 * 0000000140C68DD8: jnz     short loc_140C68DD0
 * 0000000140C68DDA: mov     r13, [rbp+7B0h+var_828]
 * 0000000140C68DDE: mov     r12d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C68DE5: mov     r9, r13
 * 0000000140C68DE8: mov     dword ptr [r15], 0Dh
 * 0000000140C68DEF: mov     [r15+8], r13
 * 0000000140C68DF3: mov     [r15+10h], r12d
 * 0000000140C68DF7: add     [r14+848h], r12d
 * 0000000140C68DFE: lea     rcx, [r12+r13]
 * 0000000140C68E02: mov     r11d, [r14+834h]
 * 0000000140C68E09: mov     rbx, [r14+838h]
 * 0000000140C68E10: cmp     r13, rcx
 * 0000000140C68E13: jnb     short loc_140C68E28
 * 0000000140C68E15: mov     rax, r13
 * 0000000140C68E18: mov     edx, 40h ; '@'
 * 0000000140C68E1D: prefetchnta byte ptr [rax]
 * 0000000140C68E20: add     rax, rdx
 * 0000000140C68E23: cmp     rax, rcx
 * 0000000140C68E26: jb      short loc_140C68E1D
 * 0000000140C68E28: mov     r10d, r12d
 * 0000000140C68E2B: mov     r8, rbx
 * 0000000140C68E2E: shr     r10d, 7
 * 0000000140C68E32: test    r10d, r10d
 * 0000000140C68E35: jz      short loc_140C68EAC
 * 0000000140C68E37: mov     edi, 1
 * 0000000140C68E3C: mov     esi, 0FFFFFFFFh
 * 0000000140C68E41: mov     r12, 7010008004002001h
 * 0000000140C68E4B: mov     eax, 8
 * 0000000140C68E50: xor     r8, [r9]
 * 0000000140C68E53: mov     ecx, r11d
 * 0000000140C68E56: rol     r8, cl
 * 0000000140C68E59: xor     r8, [r9+8]
 * 0000000140C68E5D: add     r9, 10h
 * 0000000140C68E61: rol     r8, cl
 * 0000000140C68E64: sub     rax, rdi
 * 0000000140C68E67: jnz     short loc_140C68E50
 * 0000000140C68E69: mov     rcx, r9
 * 0000000140C68E6C: sub     rcx, r13
 * 0000000140C68E6F: xor     rcx, rbx
 * 0000000140C68E72: mov     rax, rcx
 * 0000000140C68E75: rol     rax, 11h
 * 0000000140C68E79: xor     rcx, rax
 * 0000000140C68E7C: mov     rax, r12
 * 0000000140C68E7F: mul     rcx
 * 0000000140C68E82: mov     [rbp+7B0h+var_448], rdx
 * 0000000140C68E89: xor     rdx, rax
 * 0000000140C68E8C: xor     r11d, edx
 * 0000000140C68E8F: and     r11d, 3Fh
 * 0000000140C68E93: cmovz   r11d, edi
 * 0000000140C68E97: add     r10d, esi
 * 0000000140C68E9A: jnz     short loc_140C68E4B
 * 0000000140C68E9C: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C68EA1: lea     edi, [r10+2]
 * 0000000140C68EA5: mov     r12d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C68EAC: mov     edx, r12d
 * 0000000140C68EAF: mov     ebx, 1
 * 0000000140C68EB4: and     edx, 7Fh
 * 0000000140C68EB7: cmp     edx, 8
 * 0000000140C68EBA: jb      short loc_140C68ED7
 * 0000000140C68EBC: mov     eax, edx
 * 0000000140C68EBE: shr     rax, 3
 * 0000000140C68EC2: xor     r8, [r9]
 * 0000000140C68EC5: mov     ecx, r11d
 * 0000000140C68EC8: rol     r8, cl
 * 0000000140C68ECB: add     r9, 8
 * 0000000140C68ECF: add     edx, 0FFFFFFF8h
 * 0000000140C68ED2: sub     rax, rbx
 * 0000000140C68ED5: jnz     short loc_140C68EC2
 * 0000000140C68ED7: test    edx, edx
 * 0000000140C68ED9: jz      short loc_140C68EF7
 * 0000000140C68EDB: mov     edi, 0FFFFFFFFh
 * 0000000140C68EE0: movzx   eax, byte ptr [r9]
 * 0000000140C68EE4: mov     ecx, r11d
 * 0000000140C68EE7: xor     r8, rax
 * 0000000140C68EEA: add     r9, rbx
 * 0000000140C68EED: rol     r8, cl
 * 0000000140C68EF0: add     edx, edi
 * 0000000140C68EF2: jnz     short loc_140C68EE0
 * 0000000140C68EF4: lea     edi, [rdx+2]
 * 0000000140C68EF7: mov     rax, r8
 * 0000000140C68EFA: jmp     short loc_140C68EFF
 * 0000000140C68EFC: xor     r8d, eax
 * 0000000140C68EFF: shr     rax, 1Fh
 * 0000000140C68F03: test    rax, rax
 * 0000000140C68F06: jnz     short loc_140C68EFC
 * 0000000140C68F08: btr     r8d, 1Fh
 * 0000000140C68F0D: mov     [r15+14h], r8d
 * 0000000140C68F11: mov     rax, [rbp+7B0h+var_5A8]
 * 0000000140C68F18: mov     [rbp+7B0h+var_710], rax
 * 0000000140C68F1F: add     [r14+848h], r12d
 * 0000000140C68F26: jmp     short loc_140C68F3C
 * 0000000140C68F28: mov     r12d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C68F2F: mov     r14, rbx
 * 0000000140C68F32: mov     r13, [rbp+7B0h+var_828]
 * 0000000140C68F36: mov     dword ptr [rax], 0Dh
 * 0000000140C68F3C: test    dword ptr [r14+9D8h], 20000000h
 * 0000000140C68F47: jz      short loc_140C68F67
 * 0000000140C68F49: test    r12d, r12d
 * 0000000140C68F4C: jz      short loc_140C68F67
 * 0000000140C68F4E: mov     r9, [rbp+7B0h+var_710]
 * 0000000140C68F55: mov     r8d, r12d
 * 0000000140C68F58: add     r9, 1Ch
 * 0000000140C68F5C: mov     rdx, r13
 * 0000000140C68F5F: mov     rcx, r14
 * 0000000140C68F62: call    sub_1405518EC
 * 0000000140C68F67: mov     rax, [rbp+7B0h+var_710]
 * 0000000140C68F6E: xor     ecx, ecx
 * 0000000140C68F70: mov     [rbp+7B0h+var_790], r14
 * 0000000140C68F74: mov     [rax+18h], ecx
 * 0000000140C68F77: lea     edx, [rcx+1]
 * 0000000140C68F7A: mov     rax, [rbp+7B0h+var_710]
 * 0000000140C68F81: or      [rax+18h], edx
 * 0000000140C68F84: test    r14, r14
 * 0000000140C68F87: jnz     short loc_140C68F92
 * 0000000140C68F89: mov     r13, [rbp+7B0h+var_810]
 * 0000000140C68F8D: jmp     loc_140C68875
 * 0000000140C68F92: mov     rbx, [rbp+7B0h+var_778]
 * 0000000140C68F96: mov     r13, r14
 * 0000000140C68F99: mov     [rbp+7B0h+var_7D0], r14
 * 0000000140C68F9D: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140C68FA7: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140C68FB1: jb      loc_140C69040
 * 0000000140C68FB7: mov     r12, [rbp+7B0h+var_7F0]
 * 0000000140C68FBB: mov     rax, [r14+208h]
 * 0000000140C68FC2: mov     rcx, r12
 * 0000000140C68FC5: mov     r15, [rbx+98h]
 * 0000000140C68FCC: call    KeGuardDispatchICall
 * 0000000140C68FD1: xor     ecx, ecx
 * 0000000140C68FD3: test    rax, rax
 * 0000000140C68FD6: jnz     short loc_140C68FE1
 * 0000000140C68FD8: mov     [rbp+7B0h+var_790], rcx
 * 0000000140C68FDC: jmp     loc_140C68875
 * 0000000140C68FE1: mov     r8d, [rax+50h]
 * 0000000140C68FE5: mov     edx, [rbx+0B8h]
 * 0000000140C68FEB: add     r8, r12
 * 0000000140C68FEE: or      edx, edi
 * 0000000140C68FF0: mov     [rbx+0B8h], edx
 * 0000000140C68FF6: mov     ecx, edx
 * 0000000140C68FF8: mov     rax, [r15+70h]
 * 0000000140C68FFC: cmp     rax, r12
 * 0000000140C68FFF: jb      short loc_140C69019
 * 0000000140C69001: cmp     rax, r8
 * 0000000140C69004: jnb     short loc_140C69019
 * 0000000140C69006: mov     rax, [rax]
 * 0000000140C69009: or      ecx, 4
 * 0000000140C6900C: mov     [rbx+0A8h], rax
 * 0000000140C69013: mov     [rbx+0B8h], ecx
 * 0000000140C69019: mov     rax, [r15+78h]
 * 0000000140C6901D: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C69021: cmp     rax, r15
 * 0000000140C69024: jb      short loc_140C69044
 * 0000000140C69026: cmp     rax, r8
 * 0000000140C69029: jnb     short loc_140C69044
 * 0000000140C6902B: mov     rax, [rax]
 * 0000000140C6902E: or      ecx, 8
 * 0000000140C69031: mov     [rbx+0B0h], rax
 * 0000000140C69038: mov     [rbx+0B8h], ecx
 * 0000000140C6903E: jmp     short loc_140C69044
 * 0000000140C69040: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C69044: bt      dword ptr [r14+9D8h], 15h
 * 0000000140C6904D: mov     [rbp+7B0h+var_810], r13
 * 0000000140C69051: mov     [rbp+7B0h+var_7D0], r13
 * 0000000140C69055: jnb     loc_140C6A470
 * 0000000140C6905B: mov     rax, [r14+208h]
 * 0000000140C69062: mov     rcx, r15
 * 0000000140C69065: call    KeGuardDispatchICall
 * 0000000140C6906A: xor     r8d, r8d
 * 0000000140C6906D: mov     [rsp+8B0h+var_840], rax
 * 0000000140C69072: mov     r12, rax
 * 0000000140C69075: test    rax, rax
 * 0000000140C69078: jz      loc_140C68709
 * 0000000140C6907E: movzx   r10d, word ptr [r12+6]
 * 0000000140C69084: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C6908E: mov     ecx, [rbp+7B0h+var_830]
 * 0000000140C69091: mul     rcx
 * 0000000140C69094: mov     word ptr [rbp+7B0h+arg_8], r10w
 * 0000000140C6909C: mov     r9, rdx
 * 0000000140C6909F: shr     r9, 3
 * 0000000140C690A3: mov     [rsp+8B0h+var_858], r9
 * 0000000140C690A8: test    r10w, r10w
 * 0000000140C690AC: jnz     loc_140C691D3
 * 0000000140C690B2: mov     ecx, [r14+9D8h]
 * 0000000140C690B9: bt      ecx, 14h
 * 0000000140C690BD: jnb     loc_140C74256
 * 0000000140C690C3: xor     r12d, r12d
 * 0000000140C690C6: cmp     [r14+918h], r12d
 * 0000000140C690CD: jnz     loc_140C68709
 * 0000000140C690D3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C690DD: lea     edx, [r8+1]
 * 0000000140C690E1: add     rax, r13
 * 0000000140C690E4: mov     [r14+920h], rax
 * 0000000140C690EB: mov     [r14+928h], r12
 * 0000000140C690F2: mov     qword ptr [r14+930h], 10Fh
 * 0000000140C690FD: mov     [r14+938h], r15
 * 0000000140C69104: mov     [r14+918h], edx
 * 0000000140C6910B: bt      ecx, 1Dh
 * 0000000140C6910F: jb      loc_140C68709
 * 0000000140C69115: bt      dword ptr [r14+9DCh], 15h
 * 0000000140C6911E: jnb     loc_140C68709
 * 0000000140C69124: test    dl, cl
 * 0000000140C69126: jz      loc_140C68709
 * 0000000140C6912C: mov     ecx, [r14+0A74h]
 * 0000000140C69133: mov     r10, r13
 * 0000000140C69136: mov     eax, [r14+804h]
 * 0000000140C6913D: mov     r11, [r14+838h]
 * 0000000140C69144: sub     eax, ecx
 * 0000000140C69146: mov     r8, [r14+0A78h]
 * 0000000140C6914D: lea     rdx, [rcx+r14]
 * 0000000140C69151: mov     ecx, eax
 * 0000000140C69153: shr     rcx, 3
 * 0000000140C69157: lea     r9, [rdx+rcx*8]
 * 0000000140C6915B: jmp     short loc_140C6917E
 * 0000000140C6915D: xor     [rdx], r8
 * 0000000140C69160: mov     rax, [rdx]
 * 0000000140C69163: movzx   ecx, r8b
 * 0000000140C69167: xor     rax, r11
 * 0000000140C6916A: and     ecx, 3Fh
 * 0000000140C6916D: ror     r8, cl
 * 0000000140C69170: add     r8, rax
 * 0000000140C69173: xor     r8, 0F05h
 * 0000000140C6917A: add     rdx, 8
 * 0000000140C6917E: cmp     rdx, r9
 * 0000000140C69181: jnz     short loc_140C6915D
 * 0000000140C69183: btr     dword ptr [r10+9DCh], 15h
 * 0000000140C6918C: cmp     r8, [r10+0A80h]
 * 0000000140C69193: jz      loc_140C68709
 * 0000000140C69199: mov     ecx, [r10+804h]
 * 0000000140C691A0: mov     rax, [r10+588h]
 * 0000000140C691A7: mov     [rax], r10
 * 0000000140C691AA: mov     [rax+10h], ecx
 * 0000000140C691AD: mov     rcx, [r10+0A80h]
 * 0000000140C691B4: cmp     [r10+918h], r12d
 * 0000000140C691BB: jnz     short loc_140C691CB
 * 0000000140C691BD: mov     rax, [r10+588h]
 * 0000000140C691C4: xor     rcx, r8
 * 0000000140C691C7: mov     [rax+18h], rcx
 * 0000000140C691CB: mov     rcx, r10
 * 0000000140C691CE: jmp     loc_140C686FC
 * 0000000140C691D3: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C691D7: movzx   r11d, word ptr [r12+14h]
 * 0000000140C691DD: mov     r13, rdx
 * 0000000140C691E0: mov     eax, r9d
 * 0000000140C691E3: add     r11, 18h
 * 0000000140C691E7: add     r11, r12
 * 0000000140C691EA: mov     [rbp+7B0h+var_7B8], r11
 * 0000000140C691EE: lea     rcx, [rax+rax*2]
 * 0000000140C691F2: lea     rax, [rdx+rcx*4]
 * 0000000140C691F6: mov     rdx, [rbp+7B0h+var_810]
 * 0000000140C691FA: mov     [rbp+7B0h+var_808], rax
 * 0000000140C691FE: mov     ecx, r8d
 * 0000000140C69201: mov     dword ptr [rsp+8B0h+var_848], ecx
 * 0000000140C69205: mov     rbx, rdx
 * 0000000140C69208: test    r10w, r10w
 * 0000000140C6920C: jz      loc_140C697B5
 * 0000000140C69212: mov     r14, rax
 * 0000000140C69215: xor     r12d, r12d
 * 0000000140C69218: mov     eax, ecx
 * 0000000140C6921A: lea     r8, [rax+rax*4]
 * 0000000140C6921E: mov     edx, [r11+r8*8+10h]
 * 0000000140C69223: mov     eax, [r11+r8*8+8]
 * 0000000140C69228: cmp     edx, eax
 * 0000000140C6922A: mov     r9d, [r11+r8*8+0Ch]
 * 0000000140C6922F: cmovbe  edx, eax
 * 0000000140C69232: mov     [rbp+7B0h+var_828], r8
 * 0000000140C69236: add     edx, r9d
 * 0000000140C69239: mov     [rbp+7B0h+var_7F4], r9d
 * 0000000140C6923D: mov     [rsp+8B0h+var_850], edx
 * 0000000140C69241: test    ecx, ecx
 * 0000000140C69243: jz      short loc_140C6925B
 * 0000000140C69245: lea     eax, [rcx-1]
 * 0000000140C69248: lea     rax, [rax+rax*4]
 * 0000000140C6924C: cmp     edx, [r11+rax*8+0Ch]
 * 0000000140C69251: jb      loc_140C695D2
 * 0000000140C69257: mov     ecx, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6925B: cmp     r13, r14
 * 0000000140C6925E: jz      loc_140C695A9
 * 0000000140C69264: mov     ecx, [r13+0]
 * 0000000140C69268: mov     eax, [r13+4]
 * 0000000140C6926C: cmp     ecx, edx
 * 0000000140C6926E: jnb     loc_140C69599
 * 0000000140C69274: cmp     eax, r9d
 * 0000000140C69277: jbe     loc_140C69599
 * 0000000140C6927D: cmp     ecx, r9d
 * 0000000140C69280: jb      loc_140C696F7
 * 0000000140C69286: cmp     eax, edx
 * 0000000140C69288: ja      loc_140C696F7
 * 0000000140C6928E: mov     eax, [r13+8]
 * 0000000140C69292: mov     ecx, 1
 * 0000000140C69297: mov     [rbp+7B0h+var_440], r13
 * 0000000140C6929E: test    cl, al
 * 0000000140C692A0: jnz     short loc_140C692AD
 * 0000000140C692A2: test    byte ptr [rax+r15], 20h
 * 0000000140C692A7: jz      loc_140C6958B
 * 0000000140C692AD: mov     eax, [r11+r8*8+8]
 * 0000000140C692B2: mov     rdx, r15
 * 0000000140C692B5: mov     r14d, [r11+r8*8+10h]
 * 0000000140C692BA: mov     rcx, r13
 * 0000000140C692BD: mov     r12d, [r11+r8*8+0Ch]
 * 0000000140C692C2: cmp     r14d, eax
 * 0000000140C692C5: cmovbe  r14d, eax
 * 0000000140C692C9: mov     rax, [rbx+420h]
 * 0000000140C692D0: add     r14d, r12d
 * 0000000140C692D3: call    KeGuardDispatchICall
 * 0000000140C692D8: mov     r15, rax
 * 0000000140C692DB: cmp     [rax], r12d
 * 0000000140C692DE: jb      short loc_140C692EA
 * 0000000140C692E0: cmp     [rax+4], r14d
 * 0000000140C692E4: jbe     loc_140C69419
 * 0000000140C692EA: mov     r8, [rbp+7B0h+var_7F0]; BugCheckParameter2
 * 0000000140C692EE: mov     ecx, 80000000h
 * 0000000140C692F3: sub     eax, r8d
 * 0000000140C692F6: or      eax, ecx
 * 0000000140C692F8: mov     rcx, [rbp+7B0h+var_810]
 * 0000000140C692FC: mov     ecx, [rcx+9D8h]
 * 0000000140C69302: bt      ecx, 14h
 * 0000000140C69306: jnb     loc_140C742D2
 * 0000000140C6930C: xor     r11d, r11d
 * 0000000140C6930F: cmp     [rbx+918h], r11d
 * 0000000140C69316: jnz     loc_140C69419
 * 0000000140C6931C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C69326: lea     edx, [r11+1]
 * 0000000140C6932A: add     rax, rbx
 * 0000000140C6932D: mov     [rbx+920h], rax
 * 0000000140C69334: mov     [rbx+928h], r11
 * 0000000140C6933B: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C69346: mov     [rbx+938h], r8
 * 0000000140C6934D: mov     [rbx+918h], edx
 * 0000000140C69353: bt      ecx, 1Dh
 * 0000000140C69357: jb      loc_140C69419
 * 0000000140C6935D: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C69367: jz      loc_140C69419
 * 0000000140C6936D: test    dl, cl
 * 0000000140C6936F: jz      loc_140C69419
 * 0000000140C69375: mov     ecx, [rbx+0A74h]
 * 0000000140C6937B: mov     eax, [rbx+804h]
 * 0000000140C69381: mov     r10, [rbx+838h]
 * 0000000140C69388: sub     eax, ecx
 * 0000000140C6938A: mov     r8, [rbx+0A78h]
 * 0000000140C69391: lea     rdx, [rcx+rbx]
 * 0000000140C69395: mov     ecx, eax
 * 0000000140C69397: shr     rcx, 3
 * 0000000140C6939B: lea     r9, [rdx+rcx*8]
 * 0000000140C6939F: jmp     short loc_140C693C2
 * 0000000140C693A1: xor     [rdx], r8
 * 0000000140C693A4: mov     rax, [rdx]
 * 0000000140C693A7: movzx   ecx, r8b
 * 0000000140C693AB: xor     rax, r10
 * 0000000140C693AE: and     ecx, 3Fh
 * 0000000140C693B1: ror     r8, cl
 * 0000000140C693B4: add     r8, rax
 * 0000000140C693B7: xor     r8, 0F05h
 * 0000000140C693BE: add     rdx, 8
 * 0000000140C693C2: cmp     rdx, r9
 * 0000000140C693C5: jnz     short loc_140C693A1
 * 0000000140C693C7: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140C693CF: cmp     r8, [rbx+0A80h]
 * 0000000140C693D6: jz      short loc_140C69419
 * 0000000140C693D8: mov     ecx, [rbx+804h]
 * 0000000140C693DE: mov     rax, [rbx+588h]
 * 0000000140C693E5: mov     [rax], rbx
 * 0000000140C693E8: mov     [rax+10h], ecx
 * 0000000140C693EB: mov     rcx, [rbx+0A80h]
 * 0000000140C693F2: cmp     [rbx+918h], r11d
 * 0000000140C693F9: jnz     short loc_140C69409
 * 0000000140C693FB: mov     rax, [rbx+588h]
 * 0000000140C69402: xor     rcx, r8
 * 0000000140C69405: mov     [rax+18h], rcx
 * 0000000140C69409: xor     edx, edx
 * 0000000140C6940B: mov     r9d, 100h
 * 0000000140C69411: mov     rcx, rbx
 * 0000000140C69414: call    sub_140C7903C
 * 0000000140C69419: mov     r8d, [r15]
 * 0000000140C6941C: mov     rcx, r15
 * 0000000140C6941F: add     r8, [rbp+7B0h+var_7F0]
 * 0000000140C69423: mov     rax, [rbx+428h]
 * 0000000140C6942A: mov     rdx, [rbp+7B0h+var_7F0]
 * 0000000140C6942E: call    KeGuardDispatchICall
 * 0000000140C69433: cmp     [rax], r12d
 * 0000000140C69436: jb      short loc_140C69442
 * 0000000140C69438: cmp     [rax+4], r14d
 * 0000000140C6943C: jbe     loc_140C69574
 * 0000000140C69442: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C69446: mov     ecx, 80000000h
 * 0000000140C6944B: sub     eax, r15d
 * 0000000140C6944E: or      eax, ecx
 * 0000000140C69450: mov     rcx, [rbp+7B0h+var_810]
 * 0000000140C69454: mov     ecx, [rcx+9D8h]
 * 0000000140C6945A: bt      ecx, 14h
 * 0000000140C6945E: jnb     loc_140C742A9
 * 0000000140C69464: xor     r12d, r12d
 * 0000000140C69467: cmp     [rbx+918h], r12d
 * 0000000140C6946E: jnz     loc_140C6957B
 * 0000000140C69474: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6947E: lea     edx, [r12+1]
 * 0000000140C69483: add     rax, rbx
 * 0000000140C69486: mov     [rbx+920h], rax
 * 0000000140C6948D: mov     [rbx+928h], r12
 * 0000000140C69494: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6949F: mov     [rbx+938h], r15
 * 0000000140C694A6: mov     [rbx+918h], edx
 * 0000000140C694AC: bt      ecx, 1Dh
 * 0000000140C694B0: jb      loc_140C6957B
 * 0000000140C694B6: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C694C0: jz      loc_140C6957B
 * 0000000140C694C6: test    dl, cl
 * 0000000140C694C8: jz      loc_140C6957B
 * 0000000140C694CE: mov     ecx, [rbx+0A74h]
 * 0000000140C694D4: mov     eax, [rbx+804h]
 * 0000000140C694DA: mov     r10, [rbx+838h]
 * 0000000140C694E1: sub     eax, ecx
 * 0000000140C694E3: mov     r8, [rbx+0A78h]
 * 0000000140C694EA: lea     rdx, [rcx+rbx]
 * 0000000140C694EE: mov     ecx, eax
 * 0000000140C694F0: shr     rcx, 3
 * 0000000140C694F4: lea     r9, [rdx+rcx*8]
 * 0000000140C694F8: jmp     short loc_140C6951B
 * 0000000140C694FA: xor     [rdx], r8
 * 0000000140C694FD: mov     rax, [rdx]
 * 0000000140C69500: movzx   ecx, r8b
 * 0000000140C69504: xor     rax, r10
 * 0000000140C69507: and     ecx, 3Fh
 * 0000000140C6950A: ror     r8, cl
 * 0000000140C6950D: add     r8, rax
 * 0000000140C69510: xor     r8, 0F05h
 * 0000000140C69517: add     rdx, 8
 * 0000000140C6951B: cmp     rdx, r9
 * 0000000140C6951E: jnz     short loc_140C694FA
 * 0000000140C69520: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140C69528: cmp     r8, [rbx+0A80h]
 * 0000000140C6952F: jz      short loc_140C6957B
 * 0000000140C69531: mov     ecx, [rbx+804h]
 * 0000000140C69537: mov     rax, [rbx+588h]
 * 0000000140C6953E: mov     [rax], rbx
 * 0000000140C69541: mov     [rax+10h], ecx
 * 0000000140C69544: mov     rcx, [rbx+0A80h]
 * 0000000140C6954B: cmp     [rbx+918h], r12d
 * 0000000140C69552: jnz     short loc_140C69562
 * 0000000140C69554: mov     rax, [rbx+588h]
 * 0000000140C6955B: xor     rcx, r8
 * 0000000140C6955E: mov     [rax+18h], rcx
 * 0000000140C69562: xor     edx, edx
 * 0000000140C69564: mov     r9d, 100h
 * 0000000140C6956A: mov     rcx, rbx
 * 0000000140C6956D: call    sub_140C7903C
 * 0000000140C69572: jmp     short loc_140C6957B
 * 0000000140C69574: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C69578: xor     r12d, r12d
 * 0000000140C6957B: mov     edx, [rsp+8B0h+var_850]
 * 0000000140C6957F: mov     r8, [rbp+7B0h+var_828]
 * 0000000140C69583: mov     r9d, [rbp+7B0h+var_7F4]
 * 0000000140C69587: mov     r11, [rbp+7B0h+var_7B8]
 * 0000000140C6958B: add     r13, 0Ch
 * 0000000140C6958F: cmp     r13, [rbp+7B0h+var_808]
 * 0000000140C69593: jnz     loc_140C69264
 * 0000000140C69599: mov     ecx, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6959D: movzx   r10d, word ptr [rbp+7B0h+arg_8]
 * 0000000140C695A5: mov     r14, [rbp+7B0h+var_808]
 * 0000000140C695A9: mov     edx, 1
 * 0000000140C695AE: movzx   eax, r10w
 * 0000000140C695B2: add     ecx, edx
 * 0000000140C695B4: mov     dword ptr [rsp+8B0h+var_848], ecx
 * 0000000140C695B8: cmp     ecx, eax
 * 0000000140C695BA: jb      loc_140C69218
 * 0000000140C695C0: mov     r9, [rsp+8B0h+var_858]
 * 0000000140C695C5: xor     r8d, r8d
 * 0000000140C695C8: mov     r12, [rsp+8B0h+var_840]
 * 0000000140C695CD: jmp     loc_140C697BA
 * 0000000140C695D2: mov     ecx, [rbx+9D8h]
 * 0000000140C695D8: bt      ecx, 14h
 * 0000000140C695DC: jnb     loc_140C7427E
 * 0000000140C695E2: cmp     [rbx+918h], r12d
 * 0000000140C695E9: jnz     loc_140C696ED
 * 0000000140C695EF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C695F9: mov     edx, 1
 * 0000000140C695FE: add     rax, rbx
 * 0000000140C69601: mov     [rbx+920h], rax
 * 0000000140C69608: mov     [rbx+928h], r12
 * 0000000140C6960F: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6961A: mov     [rbx+938h], r15
 * 0000000140C69621: mov     [rbx+918h], edx
 * 0000000140C69627: bt      ecx, 1Dh
 * 0000000140C6962B: jb      loc_140C696ED
 * 0000000140C69631: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C6963B: jz      loc_140C696ED
 * 0000000140C69641: test    dl, cl
 * 0000000140C69643: jz      loc_140C696ED
 * 0000000140C69649: mov     ecx, [rbx+0A74h]
 * 0000000140C6964F: mov     eax, [rbx+804h]
 * 0000000140C69655: mov     r10, [rbx+838h]
 * 0000000140C6965C: sub     eax, ecx
 * 0000000140C6965E: mov     r8, [rbx+0A78h]
 * 0000000140C69665: lea     rdx, [rcx+rbx]
 * 0000000140C69669: mov     ecx, eax
 * 0000000140C6966B: shr     rcx, 3
 * 0000000140C6966F: lea     r9, [rdx+rcx*8]
 * 0000000140C69673: jmp     short loc_140C69696
 * 0000000140C69675: xor     [rdx], r8
 * 0000000140C69678: mov     rax, [rdx]
 * 0000000140C6967B: movzx   ecx, r8b
 * 0000000140C6967F: xor     rax, r10
 * 0000000140C69682: and     ecx, 3Fh
 * 0000000140C69685: ror     r8, cl
 * 0000000140C69688: add     r8, rax
 * 0000000140C6968B: xor     r8, 0F05h
 * 0000000140C69692: add     rdx, 8
 * 0000000140C69696: cmp     rdx, r9
 * 0000000140C69699: jnz     short loc_140C69675
 * 0000000140C6969B: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140C696A3: cmp     r8, [rbx+0A80h]
 * 0000000140C696AA: jz      short loc_140C696ED
 * 0000000140C696AC: mov     ecx, [rbx+804h]
 * 0000000140C696B2: mov     rax, [rbx+588h]
 * 0000000140C696B9: mov     [rax], rbx
 * 0000000140C696BC: mov     [rax+10h], ecx
 * 0000000140C696BF: mov     rcx, [rbx+0A80h]
 * 0000000140C696C6: cmp     [rbx+918h], r12d
 * 0000000140C696CD: jnz     short loc_140C696DD
 * 0000000140C696CF: mov     rax, [rbx+588h]
 * 0000000140C696D6: xor     rcx, r8
 * 0000000140C696D9: mov     [rax+18h], rcx
 * 0000000140C696DD: xor     edx, edx
 * 0000000140C696DF: mov     r9d, 100h
 * 0000000140C696E5: mov     rcx, rbx
 * 0000000140C696E8: call    sub_140C7903C
 * 0000000140C696ED: mov     ecx, 0C000007Bh
 * 0000000140C696F2: jmp     loc_140C698E8
 * 0000000140C696F7: mov     ecx, [rbx+9D8h]
 * 0000000140C696FD: bt      ecx, 14h
 * 0000000140C69701: jnb     loc_140C742F8
 * 0000000140C69707: cmp     [rbx+918h], r12d
 * 0000000140C6970E: jnz     short loc_140C696ED
 * 0000000140C69710: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6971A: mov     edx, 1
 * 0000000140C6971F: add     rax, rbx
 * 0000000140C69722: mov     [rbx+920h], rax
 * 0000000140C69729: mov     [rbx+928h], r12
 * 0000000140C69730: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6973B: mov     [rbx+938h], r15
 * 0000000140C69742: mov     [rbx+918h], edx
 * 0000000140C69748: bt      ecx, 1Dh
 * 0000000140C6974C: jb      short loc_140C696ED
 * 0000000140C6974E: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C69758: jz      short loc_140C696ED
 * 0000000140C6975A: test    dl, cl
 * 0000000140C6975C: jz      short loc_140C696ED
 * 0000000140C6975E: mov     ecx, [rbx+0A74h]
 * 0000000140C69764: mov     eax, [rbx+804h]
 * 0000000140C6976A: mov     r10, [rbx+838h]
 * 0000000140C69771: sub     eax, ecx
 * 0000000140C69773: mov     r8, [rbx+0A78h]
 * 0000000140C6977A: lea     rdx, [rcx+rbx]
 * 0000000140C6977E: mov     ecx, eax
 * 0000000140C69780: shr     rcx, 3
 * 0000000140C69784: lea     r9, [rdx+rcx*8]
 * 0000000140C69788: jmp     short loc_140C697AB
 * 0000000140C6978A: xor     [rdx], r8
 * 0000000140C6978D: mov     rax, [rdx]
 * 0000000140C69790: movzx   ecx, r8b
 * 0000000140C69794: xor     rax, r10
 * 0000000140C69797: and     ecx, 3Fh
 * 0000000140C6979A: ror     r8, cl
 * 0000000140C6979D: add     r8, rax
 * 0000000140C697A0: xor     r8, 0F05h
 * 0000000140C697A7: add     rdx, 8
 * 0000000140C697AB: cmp     rdx, r9
 * 0000000140C697AE: jnz     short loc_140C6978A
 * 0000000140C697B0: jmp     loc_140C6969B
 * 0000000140C697B5: mov     edx, 1
 * 0000000140C697BA: mov     r11, [rbp+7B0h+var_808]
 * 0000000140C697BE: cmp     r13, r11
 * 0000000140C697C1: jz      loc_140C69893
 * 0000000140C697C7: mov     ecx, [rbx+9D8h]
 * 0000000140C697CD: bt      ecx, 14h
 * 0000000140C697D1: jnb     loc_140C74321
 * 0000000140C697D7: xor     r12d, r12d
 * 0000000140C697DA: cmp     [rbx+918h], r12d
 * 0000000140C697E1: jnz     loc_140C696ED
 * 0000000140C697E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C697F1: add     rax, rbx
 * 0000000140C697F4: mov     [rbx+920h], rax
 * 0000000140C697FB: mov     [rbx+928h], r12
 * 0000000140C69802: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6980D: mov     [rbx+938h], r15
 * 0000000140C69814: mov     [rbx+918h], edx
 * 0000000140C6981A: bt      ecx, 1Dh
 * 0000000140C6981E: jb      loc_140C696ED
 * 0000000140C69824: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C6982E: jz      loc_140C696ED
 * 0000000140C69834: test    dl, cl
 * 0000000140C69836: jz      loc_140C696ED
 * 0000000140C6983C: mov     ecx, [rbx+0A74h]
 * 0000000140C69842: mov     eax, [rbx+804h]
 * 0000000140C69848: mov     r10, [rbx+838h]
 * 0000000140C6984F: sub     eax, ecx
 * 0000000140C69851: mov     r8, [rbx+0A78h]
 * 0000000140C69858: lea     rdx, [rcx+rbx]
 * 0000000140C6985C: mov     ecx, eax
 * 0000000140C6985E: shr     rcx, 3
 * 0000000140C69862: lea     r9, [rdx+rcx*8]
 * 0000000140C69866: jmp     short loc_140C69889
 * 0000000140C69868: xor     [rdx], r8
 * 0000000140C6986B: mov     rax, [rdx]
 * 0000000140C6986E: movzx   ecx, r8b
 * 0000000140C69872: xor     rax, r10
 * 0000000140C69875: and     ecx, 3Fh
 * 0000000140C69878: ror     r8, cl
 * 0000000140C6987B: add     r8, rax
 * 0000000140C6987E: xor     r8, 0F05h
 * 0000000140C69885: add     rdx, 8
 * 0000000140C69889: cmp     rdx, r9
 * 0000000140C6988C: jnz     short loc_140C69868
 * 0000000140C6988E: jmp     loc_140C6969B
 * 0000000140C69893: xor     r13d, r13d
 * 0000000140C69896: test    r9d, r9d
 * 0000000140C69899: jz      short loc_140C698A4
 * 0000000140C6989B: lea     edx, [r9+6]
 * 0000000140C6989F: and     edx, 0FFFFFFF8h
 * 0000000140C698A2: jmp     short loc_140C698A7
 * 0000000140C698A4: mov     edx, r13d
 * 0000000140C698A7: mov     r15d, [rbx+804h]
 * 0000000140C698AE: mov     r8d, [rbx+944h]
 * 0000000140C698B5: movzx   eax, r10w
 * 0000000140C698B9: lea     ecx, [rax+rax*2]
 * 0000000140C698BC: lea     eax, [rdx+rcx*8]
 * 0000000140C698BF: lea     ecx, [r15+30h]
 * 0000000140C698C3: add     ecx, eax
 * 0000000140C698C5: cmp     ecx, [rbx+0A64h]
 * 0000000140C698CB: jbe     loc_140C699C3
 * 0000000140C698D1: mov     edx, ecx
 * 0000000140C698D3: mov     rcx, rbx
 * 0000000140C698D6: call    sub_140C787A8
 * 0000000140C698DB: mov     r14, rax
 * 0000000140C698DE: test    rax, rax
 * 0000000140C698E1: jnz     short loc_140C698F1
 * 0000000140C698E3: mov     ecx, 0C000009Ah
 * 0000000140C698E8: mov     r13, [rbp+7B0h+var_810]
 * 0000000140C698EC: jmp     loc_140C6A47D
 * 0000000140C698F1: mov     ecx, [rbx+9D8h]
 * 0000000140C698F7: test    dil, cl
 * 0000000140C698FA: jnz     loc_140C699A8
 * 0000000140C69900: mov     eax, [rbx+804h]
 * 0000000140C69906: and     ecx, 10000000h
 * 0000000140C6990C: mov     r8, [rbx+7E8h]
 * 0000000140C69913: neg     ecx
 * 0000000140C69915: mov     r9d, 1
 * 0000000140C6991B: sbb     edx, edx
 * 0000000140C6991D: and     edx, [rbx+944h]
 * 0000000140C69923: cmp     eax, 8
 * 0000000140C69926: jb      short loc_140C6993D
 * 0000000140C69928: mov     ecx, eax
 * 0000000140C6992A: shr     rcx, 3
 * 0000000140C6992E: mov     [rbx], r13
 * 0000000140C69931: add     eax, 0FFFFFFF8h
 * 0000000140C69934: add     rbx, 8
 * 0000000140C69938: sub     rcx, r9
 * 0000000140C6993B: jnz     short loc_140C6992E
 * 0000000140C6993D: test    eax, eax
 * 0000000140C6993F: jz      short loc_140C69950
 * 0000000140C69941: mov     ecx, 0FFFFFFFFh
 * 0000000140C69946: mov     [rbx], r13b
 * 0000000140C69949: add     rbx, r9
 * 0000000140C6994C: add     eax, ecx
 * 0000000140C6994E: jnz     short loc_140C69946
 * 0000000140C69950: mov     ebx, [r14+944h]
 * 0000000140C69957: mov     [r14+944h], edx
 * 0000000140C6995E: cmp     edx, 3
 * 0000000140C69961: jz      short loc_140C69992
 * 0000000140C69963: test    dword ptr [r14+9D8h], 8000000h
 * 0000000140C6996E: jnz     short loc_140C69989
 * 0000000140C69970: test    edx, edx
 * 0000000140C69972: jz      short loc_140C69989
 * 0000000140C69974: mov     rax, [r14+238h]
 * 0000000140C6997B: lea     rcx, [r8-8]
 * 0000000140C6997F: mov     rdx, [rcx]
 * 0000000140C69982: call    KeGuardDispatchICall
 * 0000000140C69987: jmp     short loc_140C699A1
 * 0000000140C69989: mov     rax, [r14+108h]
 * 0000000140C69990: jmp     short loc_140C69999
 * 0000000140C69992: mov     rax, [r14+370h]
 * 0000000140C69999: mov     rcx, r8
 * 0000000140C6999C: call    KeGuardDispatchICall
 * 0000000140C699A1: mov     [r14+944h], ebx
 * 0000000140C699A8: and     dword ptr [r14+9D8h], 0FFFFFFFDh
 * 0000000140C699B0: mov     r9, [rsp+8B0h+var_858]
 * 0000000140C699B5: movzx   r10d, word ptr [rbp+7B0h+arg_8]
 * 0000000140C699BD: mov     r11, [rbp+7B0h+var_808]
 * 0000000140C699C1: jmp     short loc_140C699CC
 * 0000000140C699C3: mov     r14, rbx
 * 0000000140C699C6: mov     [rbx+804h], ecx
 * 0000000140C699CC: mov     ebx, 1
 * 0000000140C699D1: lea     rdx, [r14+r15]
 * 0000000140C699D5: add     [r14+82Ch], ebx
 * 0000000140C699DC: mov     rax, rdx
 * 0000000140C699DF: mov     [rbp+7B0h+var_5A0], rdx
 * 0000000140C699E6: lea     ecx, [rbx+2Fh]
 * 0000000140C699E9: lea     r8d, [rbx+5]
 * 0000000140C699ED: mov     [rax], r13
 * 0000000140C699F0: add     ecx, 0FFFFFFF8h
 * 0000000140C699F3: add     rax, 8
 * 0000000140C699F7: sub     r8, rbx
 * 0000000140C699FA: jnz     short loc_140C699ED
 * 0000000140C699FC: test    ecx, ecx
 * 0000000140C699FE: jz      short loc_140C69A11
 * 0000000140C69A00: mov     r8d, 0FFFFFFFFh
 * 0000000140C69A06: mov     [rax], r13b
 * 0000000140C69A09: add     rax, rbx
 * 0000000140C69A0C: add     ecx, r8d
 * 0000000140C69A0F: jnz     short loc_140C69A06
 * 0000000140C69A11: mov     r15, [rbp+7B0h+var_7D8]
 * 0000000140C69A15: mov     dword ptr [rdx], 1Eh
 * 0000000140C69A1B: mov     [rdx+8], r15
 * 0000000140C69A1F: mov     [rdx+10h], r13d
 * 0000000140C69A23: mov     rcx, [r14+838h]
 * 0000000140C69A2A: mov     rax, rcx
 * 0000000140C69A2D: jmp     short loc_140C69A31
 * 0000000140C69A2F: xor     ecx, eax
 * 0000000140C69A31: shr     rax, 1Fh
 * 0000000140C69A35: test    rax, rax
 * 0000000140C69A38: jnz     short loc_140C69A2F
 * 0000000140C69A3A: mov     rax, [rbp+7B0h+var_7F0]
 * 0000000140C69A3E: btr     ecx, 1Fh
 * 0000000140C69A42: mov     [rdx+14h], ecx
 * 0000000140C69A45: mov     rcx, [rbp+7B0h+var_5A0]
 * 0000000140C69A4C: mov     [rbp+7B0h+var_708], rcx
 * 0000000140C69A53: mov     [rbp+7B0h+var_790], r14
 * 0000000140C69A57: mov     [rcx+18h], rax
 * 0000000140C69A5B: mov     ecx, [r12+50h]
 * 0000000140C69A60: xor     r12d, r12d
 * 0000000140C69A63: mov     rax, [rbp+7B0h+var_708]
 * 0000000140C69A6A: mov     [rax+20h], ecx
 * 0000000140C69A6D: mov     rax, [rbp+7B0h+var_708]
 * 0000000140C69A74: mov     ecx, [rbp+7B0h+var_830]
 * 0000000140C69A77: mov     [rax+24h], ecx
 * 0000000140C69A7A: mov     rax, [rbp+7B0h+var_708]
 * 0000000140C69A81: mov     [rax+28h], r10w
 * 0000000140C69A86: mov     rcx, [rbp+7B0h+var_708]
 * 0000000140C69A8D: lea     rdx, [rcx+30h]
 * 0000000140C69A91: mov     [rbp+7B0h+var_828], rdx
 * 0000000140C69A95: test    r9d, r9d
 * 0000000140C69A98: jz      short loc_140C69AAB
 * 0000000140C69A9A: lea     ebx, [r9-1]
 * 0000000140C69A9E: add     rbx, 7
 * 0000000140C69AA2: and     rbx, 0FFFFFFFFFFFFFFF8h
 * 0000000140C69AA6: add     rbx, rdx
 * 0000000140C69AA9: jmp     short loc_140C69AAE
 * 0000000140C69AAB: mov     rbx, rdx
 * 0000000140C69AAE: movzx   eax, word ptr [rcx+28h]
 * 0000000140C69AB2: mov     [rbp+7B0h+var_810], rbx
 * 0000000140C69AB6: lea     rcx, [rax+rax*2]
 * 0000000140C69ABA: lea     r8, [rbx+rcx*8]
 * 0000000140C69ABE: mov     [rbp+7B0h+var_820], r8
 * 0000000140C69AC2: test    r9d, r9d
 * 0000000140C69AC5: jz      short loc_140C69AD2
 * 0000000140C69AC7: lea     rax, [r15+0Ch]
 * 0000000140C69ACB: mov     [rsp+8B0h+var_840], rax
 * 0000000140C69AD0: jmp     short loc_140C69AD7
 * 0000000140C69AD2: mov     [rsp+8B0h+var_840], r11
 * 0000000140C69AD7: mov     r13, r14
 * 0000000140C69ADA: cmp     r12w, r10w
 * 0000000140C69ADE: jnb     short loc_140C69B0F
 * 0000000140C69AE0: movzx   edx, r10w
 * 0000000140C69AE4: lea     rax, [rbx+8]
 * 0000000140C69AE8: mov     r10d, 1
 * 0000000140C69AEE: mov     rcx, rdi
 * 0000000140C69AF1: mov     [rax-8], r12d
 * 0000000140C69AF5: mov     [rax-4], r12d
 * 0000000140C69AF9: mov     dword ptr [rax], 80000000h
 * 0000000140C69AFF: add     rax, 0Ch
 * 0000000140C69B03: sub     rcx, r10
 * 0000000140C69B06: jnz     short loc_140C69AF1
 * 0000000140C69B08: sub     rdx, r10
 * 0000000140C69B0B: jnz     short loc_140C69AEE
 * 0000000140C69B0D: jmp     short loc_140C69B15
 * 0000000140C69B0F: mov     r10d, 1
 * 0000000140C69B15: cmp     rbx, r8
 * 0000000140C69B18: jz      loc_140C6A473
 * 0000000140C69B1E: mov     r12, [rbp+7B0h+var_7B8]
 * 0000000140C69B22: lea     r11, [r13+9DCh]
 * 0000000140C69B29: mov     [rsp+8B0h+var_858], r11
 * 0000000140C69B2E: xor     r14d, r14d
 * 0000000140C69B31: test    dword ptr [r12+24h], 2000000h
 * 0000000140C69B3A: mov     r15d, r14d
 * 0000000140C69B3D: mov     [rsp+8B0h+var_850], r14d
 * 0000000140C69B42: jnz     loc_140C69C1F
 * 0000000140C69B48: mov     ecx, [r12]
 * 0000000140C69B4C: lea     rax, [r12+4]
 * 0000000140C69B51: cmp     ecx, 54494E49h
 * 0000000140C69B57: jnz     loc_140C69BEE
 * 0000000140C69B5D: cmp     dword ptr [rax], 4742444Bh
 * 0000000140C69B63: jz      loc_140C69C1F
 * 0000000140C69B69: cmp     ecx, 41525245h
 * 0000000140C69B6F: jnz     short loc_140C69B7F
 * 0000000140C69B71: mov     ecx, 4154h
 * 0000000140C69B76: cmp     [rax], cx
 * 0000000140C69B79: jz      loc_140C69C1F
 * 0000000140C69B7F: mov     rdx, [r13+950h]
 * 0000000140C69B86: mov     r10d, 7
 * 0000000140C69B8C: mov     r9, [r13+958h]
 * 0000000140C69B93: mov     r8, r12
 * 0000000140C69B96: mov     r11, [r13+960h]
 * 0000000140C69B9D: mov     rbx, [r13+968h]
 * 0000000140C69BA4: mov     cl, [r8]
 * 0000000140C69BA7: inc     r8
 * 0000000140C69BAA: mov     al, [rdx]
 * 0000000140C69BAC: inc     rdx
 * 0000000140C69BAF: cmp     cl, al
 * 0000000140C69BB1: jnz     short loc_140C69C29
 * 0000000140C69BB3: mov     eax, 0FFFFFFFFh
 * 0000000140C69BB8: add     r10d, eax
 * 0000000140C69BBB: jnz     short loc_140C69BA4
 * 0000000140C69BBD: mov     r10d, 1
 * 0000000140C69BC3: mov     r15d, r10d
 * 0000000140C69BC6: mov     [rsp+8B0h+var_850], r10d
 * 0000000140C69BCB: mov     r11, [rsp+8B0h+var_858]
 * 0000000140C69BD0: mov     rbx, [rbp+7B0h+var_810]
 * 0000000140C69BD4: mov     ecx, [r12+24h]
 * 0000000140C69BD9: test    ecx, ecx
 * 0000000140C69BDB: jns     loc_140C69CCB
 * 0000000140C69BE1: mov     r15d, r10d
 * 0000000140C69BE4: mov     [rsp+8B0h+var_850], r10d
 * 0000000140C69BE9: jmp     loc_140C69CD0
 * 0000000140C69BEE: cmp     ecx, 45474150h
 * 0000000140C69BF4: jnz     loc_140C69B69
 * 0000000140C69BFA: movzx   ecx, word ptr [rax]
 * 0000000140C69BFD: mov     eax, 7877h
 * 0000000140C69C02: cmp     cx, ax
 * 0000000140C69C05: jz      short loc_140C69C1F
 * 0000000140C69C07: mov     eax, 7277h
 * 0000000140C69C0C: cmp     cx, ax
 * 0000000140C69C0F: jz      short loc_140C69C1F
 * 0000000140C69C11: mov     eax, 7777h
 * 0000000140C69C16: cmp     cx, ax
 * 0000000140C69C19: jnz     loc_140C69B7F
 * 0000000140C69C1F: mov     r15d, r10d
 * 0000000140C69C22: mov     [rsp+8B0h+var_850], r10d
 * 0000000140C69C27: jmp     short loc_140C69BD4
 * 0000000140C69C29: mov     edx, 8
 * 0000000140C69C2E: mov     r8, r12
 * 0000000140C69C31: mov     rcx, [r8]
 * 0000000140C69C34: add     r8, 8
 * 0000000140C69C38: mov     rax, [r9]
 * 0000000140C69C3B: add     r9, 8
 * 0000000140C69C3F: cmp     rcx, rax
 * 0000000140C69C42: jnz     short loc_140C69C78
 * 0000000140C69C44: add     edx, 0FFFFFFF8h
 * 0000000140C69C47: cmp     edx, 8
 * 0000000140C69C4A: jnb     short loc_140C69C31
 * 0000000140C69C4C: test    edx, edx
 * 0000000140C69C4E: jz      loc_140C69BBD
 * 0000000140C69C54: mov     r10d, 1
 * 0000000140C69C5A: mov     cl, [r8]
 * 0000000140C69C5D: add     r8, r10
 * 0000000140C69C60: mov     al, [r9]
 * 0000000140C69C63: add     r9, r10
 * 0000000140C69C66: cmp     cl, al
 * 0000000140C69C68: jnz     short loc_140C69C7E
 * 0000000140C69C6A: mov     eax, 0FFFFFFFFh
 * 0000000140C69C6F: add     edx, eax
 * 0000000140C69C71: jnz     short loc_140C69C5A
 * 0000000140C69C73: jmp     loc_140C69BC3
 * 0000000140C69C78: mov     r10d, 1
 * 0000000140C69C7E: mov     r8d, 4
 * 0000000140C69C84: mov     rdx, r12
 * 0000000140C69C87: mov     r9d, 0FFFFFFFFh
 * 0000000140C69C8D: mov     cl, [rdx]
 * 0000000140C69C8F: add     rdx, r10
 * 0000000140C69C92: mov     al, [r11]
 * 0000000140C69C95: add     r11, r10
 * 0000000140C69C98: cmp     cl, al
 * 0000000140C69C9A: jnz     short loc_140C69CA6
 * 0000000140C69C9C: add     r8d, r9d
 * 0000000140C69C9F: jnz     short loc_140C69C8D
 * 0000000140C69CA1: jmp     loc_140C69BC3
 * 0000000140C69CA6: mov     r8d, 6
 * 0000000140C69CAC: mov     rdx, r12
 * 0000000140C69CAF: mov     cl, [rdx]
 * 0000000140C69CB1: add     rdx, r10
 * 0000000140C69CB4: mov     al, [rbx]
 * 0000000140C69CB6: add     rbx, r10
 * 0000000140C69CB9: cmp     cl, al
 * 0000000140C69CBB: jnz     loc_140C69BCB
 * 0000000140C69CC1: add     r8d, r9d
 * 0000000140C69CC4: jnz     short loc_140C69CAF
 * 0000000140C69CC6: jmp     loc_140C69BC3
 * 0000000140C69CCB: test    r15d, r15d
 * 0000000140C69CCE: jz      short loc_140C69D01
 * 0000000140C69CD0: cmp     dword ptr [r12], 54494E49h
 * 0000000140C69CD8: jnz     short loc_140C69D01
 * 0000000140C69CDA: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140C69CE3: jnz     short loc_140C69D01
 * 0000000140C69CE5: lea     r11, [r13+9DCh]
 * 0000000140C69CEC: test    dword ptr [r11], 2000h
 * 0000000140C69CF3: mov     [rsp+8B0h+var_858], r11
 * 0000000140C69CF8: cmovnz  r15d, r14d
 * 0000000140C69CFC: mov     [rsp+8B0h+var_850], r15d
 * 0000000140C69D01: test    dword ptr [r11], 4000h
 * 0000000140C69D08: mov     r10, [rbp+7B0h+var_7F0]
 * 0000000140C69D0C: jz      short loc_140C69D32
 * 0000000140C69D0E: bt      ecx, 1Dh
 * 0000000140C69D12: jnb     short loc_140C69D32
 * 0000000140C69D14: cmp     r10, [r13+5E0h]
 * 0000000140C69D1B: jz      short loc_140C69D26
 * 0000000140C69D1D: cmp     r10, [r13+5E8h]
 * 0000000140C69D24: jnz     short loc_140C69D32
 * 0000000140C69D26: mov     eax, 1
 * 0000000140C69D2B: mov     r15d, eax
 * 0000000140C69D2E: mov     [rsp+8B0h+var_850], eax
 * 0000000140C69D32: mov     edx, [r12+0Ch]
 * 0000000140C69D37: mov     r14d, [r12+10h]
 * 0000000140C69D3C: mov     eax, [r12+8]
 * 0000000140C69D41: cmp     r14d, eax
 * 0000000140C69D44: mov     r9, [rbp+7B0h+var_808]
 * 0000000140C69D48: mov     rcx, [rbp+7B0h+var_7D8]
 * 0000000140C69D4C: cmovbe  r14d, eax
 * 0000000140C69D50: add     r14d, edx
 * 0000000140C69D53: mov     [rbp+7B0h+var_7F4], edx
 * 0000000140C69D56: mov     dword ptr [rsp+8B0h+var_848], r14d
 * 0000000140C69D5B: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C69D61: cmp     rcx, r9
 * 0000000140C69D64: jz      loc_140C69F29
 * 0000000140C69D6A: mov     eax, [rcx]
 * 0000000140C69D6C: mov     ecx, [rcx+4]
 * 0000000140C69D6F: mov     r12d, ecx
 * 0000000140C69D72: cmp     eax, edx
 * 0000000140C69D74: jbe     loc_140C69F30
 * 0000000140C69D7A: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C69D80: cmp     ecx, r14d
 * 0000000140C69D83: ja      loc_140C69F3C
 * 0000000140C69D89: xor     r12d, r12d
 * 0000000140C69D8C: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C69D92: test    r15d, r15d
 * 0000000140C69D95: jnz     loc_140C69F56
 * 0000000140C69D9B: mov     [rbx], edx
 * 0000000140C69D9D: mov     r9d, eax
 * 0000000140C69DA0: sub     r9d, edx
 * 0000000140C69DA3: mov     [rbx+4], eax
 * 0000000140C69DA6: lea     rbx, [r10+rdx]
 * 0000000140C69DAA: mov     [rbp+7B0h+var_830], r9d
 * 0000000140C69DAE: mov     r10d, r9d
 * 0000000140C69DB1: mov     edx, r12d
 * 0000000140C69DB4: add     r10, rbx
 * 0000000140C69DB7: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C69DBD: mov     r12d, ecx
 * 0000000140C69DC0: mov     eax, edx
 * 0000000140C69DC2: mov     r8, [rbp+rax*8+7B0h+var_570]
 * 0000000140C69DCA: mov     ecx, [rbp+rax*4+7B0h+var_6A0]
 * 0000000140C69DD1: add     rcx, r8
 * 0000000140C69DD4: cmp     rbx, rcx
 * 0000000140C69DD7: jnb     short loc_140C69DE2
 * 0000000140C69DD9: cmp     r10, r8
 * 0000000140C69DDC: ja      loc_140C69F1D
 * 0000000140C69DE2: inc     edx
 * 0000000140C69DE4: cmp     edx, 6
 * 0000000140C69DE7: jb      short loc_140C69DC0
 * 0000000140C69DE9: add     [r13+848h], r9d
 * 0000000140C69DF0: mov     r10, rbx
 * 0000000140C69DF3: mov     r14d, [r13+834h]
 * 0000000140C69DFA: mov     rax, rbx
 * 0000000140C69DFD: mov     r15, [r13+838h]
 * 0000000140C69E04: mov     ecx, r9d
 * 0000000140C69E07: add     rcx, rbx
 * 0000000140C69E0A: cmp     rbx, rcx
 * 0000000140C69E0D: jnb     short loc_140C69E1F
 * 0000000140C69E0F: mov     edx, 40h ; '@'
 * 0000000140C69E14: prefetchnta byte ptr [rax]
 * 0000000140C69E17: add     rax, rdx
 * 0000000140C69E1A: cmp     rax, rcx
 * 0000000140C69E1D: jb      short loc_140C69E14
 * 0000000140C69E1F: mov     r11d, r9d
 * 0000000140C69E22: mov     r8, r15
 * 0000000140C69E25: shr     r11d, 7
 * 0000000140C69E29: test    r11d, r11d
 * 0000000140C69E2C: jz      short loc_140C69EA0
 * 0000000140C69E2E: mov     edi, 1
 * 0000000140C69E33: mov     esi, 0FFFFFFFFh
 * 0000000140C69E38: mov     r9, 7010008004002001h
 * 0000000140C69E42: mov     eax, 8
 * 0000000140C69E47: xor     r8, [r10]
 * 0000000140C69E4A: mov     ecx, r14d
 * 0000000140C69E4D: rol     r8, cl
 * 0000000140C69E50: xor     r8, [r10+8]
 * 0000000140C69E54: add     r10, 10h
 * 0000000140C69E58: rol     r8, cl
 * 0000000140C69E5B: sub     rax, rdi
 * 0000000140C69E5E: jnz     short loc_140C69E47
 * 0000000140C69E60: mov     rcx, r10
 * 0000000140C69E63: sub     rcx, rbx
 * 0000000140C69E66: xor     rcx, r15
 * 0000000140C69E69: mov     rax, rcx
 * 0000000140C69E6C: rol     rax, 11h
 * 0000000140C69E70: xor     rcx, rax
 * 0000000140C69E73: mov     rax, r9
 * 0000000140C69E76: mul     rcx
 * 0000000140C69E79: mov     [rbp+7B0h+var_438], rdx
 * 0000000140C69E80: xor     rdx, rax
 * 0000000140C69E83: xor     r14d, edx
 * 0000000140C69E86: and     r14d, 3Fh
 * 0000000140C69E8A: cmovz   r14d, edi
 * 0000000140C69E8E: add     r11d, esi
 * 0000000140C69E91: jnz     short loc_140C69E42
 * 0000000140C69E93: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C69E98: lea     edi, [r11+2]
 * 0000000140C69E9C: mov     r9d, [rbp+7B0h+var_830]
 * 0000000140C69EA0: and     r9d, 7Fh
 * 0000000140C69EA4: mov     r11d, 1
 * 0000000140C69EAA: cmp     r9d, 8
 * 0000000140C69EAE: jb      short loc_140C69ECD
 * 0000000140C69EB0: mov     eax, r9d
 * 0000000140C69EB3: shr     rax, 3
 * 0000000140C69EB7: xor     r8, [r10]
 * 0000000140C69EBA: mov     ecx, r14d
 * 0000000140C69EBD: rol     r8, cl
 * 0000000140C69EC0: add     r10, 8
 * 0000000140C69EC4: add     r9d, 0FFFFFFF8h
 * 0000000140C69EC8: sub     rax, r11
 * 0000000140C69ECB: jnz     short loc_140C69EB7
 * 0000000140C69ECD: test    r9d, r9d
 * 0000000140C69ED0: jz      short loc_140C69EF0
 * 0000000140C69ED2: mov     edi, 0FFFFFFFFh
 * 0000000140C69ED7: movzx   eax, byte ptr [r10]
 * 0000000140C69EDB: mov     ecx, r14d
 * 0000000140C69EDE: xor     r8, rax
 * 0000000140C69EE1: add     r10, r11
 * 0000000140C69EE4: rol     r8, cl
 * 0000000140C69EE7: add     r9d, edi
 * 0000000140C69EEA: jnz     short loc_140C69ED7
 * 0000000140C69EEC: lea     edi, [r9+2]
 * 0000000140C69EF0: mov     rax, r8
 * 0000000140C69EF3: jmp     short loc_140C69EF8
 * 0000000140C69EF5: xor     r8d, eax
 * 0000000140C69EF8: shr     rax, 1Fh
 * 0000000140C69EFC: test    rax, rax
 * 0000000140C69EFF: jnz     short loc_140C69EF5
 * 0000000140C69F01: mov     rcx, [rbp+7B0h+var_810]
 * 0000000140C69F05: btr     r8d, 1Fh
 * 0000000140C69F0A: mov     r14d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C69F0F: mov     r15d, [rsp+8B0h+var_850]
 * 0000000140C69F14: mov     r11, [rsp+8B0h+var_858]
 * 0000000140C69F19: mov     [rcx+8], r8d
 * 0000000140C69F1D: mov     ecx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C69F23: mov     r9, [rbp+7B0h+var_808]
 * 0000000140C69F27: jmp     short loc_140C69F3E
 * 0000000140C69F29: xor     ecx, ecx
 * 0000000140C69F2B: mov     eax, ecx
 * 0000000140C69F2D: mov     r12d, ecx
 * 0000000140C69F30: mov     ecx, edx
 * 0000000140C69F32: cmp     eax, edx
 * 0000000140C69F34: jb      loc_140C6A279
 * 0000000140C69F3A: jmp     short loc_140C69F3E
 * 0000000140C69F3C: mov     ecx, edx
 * 0000000140C69F3E: cmp     r12d, r14d
 * 0000000140C69F41: ja      loc_140C6A279
 * 0000000140C69F47: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C69F4B: cmp     rdx, r9
 * 0000000140C69F4E: jz      loc_140C6A279
 * 0000000140C69F54: jmp     short loc_140C69F5C
 * 0000000140C69F56: mov     ecx, edx
 * 0000000140C69F58: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C69F5C: mov     rax, [rsp+8B0h+var_840]
 * 0000000140C69F61: cmp     rax, r9
 * 0000000140C69F64: jz      loc_140C6A279
 * 0000000140C69F6A: mov     r12d, [rax+4]
 * 0000000140C69F6E: cmp     r12d, r14d
 * 0000000140C69F71: ja      loc_140C6A279
 * 0000000140C69F77: cmp     rax, r9
 * 0000000140C69F7A: jz      loc_140C6A273
 * 0000000140C69F80: xor     ebx, ebx
 * 0000000140C69F82: test    r15d, r15d
 * 0000000140C69F85: jz      short loc_140C69F8F
 * 0000000140C69F87: mov     r8b, 80h
 * 0000000140C69F8A: jmp     loc_140C6A23B
 * 0000000140C69F8F: mov     r15d, [rax]
 * 0000000140C69F92: mov     r14d, [rdx+4]
 * 0000000140C69F96: mov     dword ptr [rbp+7B0h+arg_8], r15d
 * 0000000140C69F9D: cmp     r15d, r14d
 * 0000000140C69FA0: jnb     loc_140C6A0C4
 * 0000000140C69FA6: mov     ecx, [r13+9D8h]
 * 0000000140C69FAD: bt      ecx, 14h
 * 0000000140C69FB1: jnb     loc_140C7434C
 * 0000000140C69FB7: cmp     [r13+918h], ebx
 * 0000000140C69FBE: jnz     loc_140C6A0C4
 * 0000000140C69FC4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C69FCE: mov     edx, 1
 * 0000000140C69FD3: add     rax, r13
 * 0000000140C69FD6: mov     [r13+920h], rax
 * 0000000140C69FDD: mov     rax, [rbp+7B0h+var_7F0]
 * 0000000140C69FE1: mov     [r13+928h], rbx
 * 0000000140C69FE8: mov     qword ptr [r13+930h], 10Fh
 * 0000000140C69FF3: mov     [r13+938h], rax
 * 0000000140C69FFA: mov     [r13+918h], edx
 * 0000000140C6A001: bt      ecx, 1Dh
 * 0000000140C6A005: jb      loc_140C6A0C4
 * 0000000140C6A00B: test    dword ptr [r11], 200000h
 * 0000000140C6A012: jz      loc_140C6A0C4
 * 0000000140C6A018: test    dl, cl
 * 0000000140C6A01A: jz      loc_140C6A0C4
 * 0000000140C6A020: mov     ecx, [r13+0A74h]
 * 0000000140C6A027: mov     eax, [r13+804h]
 * 0000000140C6A02E: mov     r10, [r13+838h]
 * 0000000140C6A035: sub     eax, ecx
 * 0000000140C6A037: mov     r8, [r13+0A78h]
 * 0000000140C6A03E: lea     rdx, [rcx+r13]
 * 0000000140C6A042: mov     ecx, eax
 * 0000000140C6A044: shr     rcx, 3
 * 0000000140C6A048: lea     r9, [rdx+rcx*8]
 * 0000000140C6A04C: jmp     short loc_140C6A06F
 * 0000000140C6A04E: xor     [rdx], r8
 * 0000000140C6A051: mov     rax, [rdx]
 * 0000000140C6A054: movzx   ecx, r8b
 * 0000000140C6A058: xor     rax, r10
 * 0000000140C6A05B: and     ecx, 3Fh
 * 0000000140C6A05E: ror     r8, cl
 * 0000000140C6A061: add     r8, rax
 * 0000000140C6A064: xor     r8, 0F05h
 * 0000000140C6A06B: add     rdx, 8
 * 0000000140C6A06F: cmp     rdx, r9
 * 0000000140C6A072: jnz     short loc_140C6A04E
 * 0000000140C6A074: btr     dword ptr [r11], 15h
 * 0000000140C6A079: cmp     r8, [r13+0A80h]
 * 0000000140C6A080: jz      short loc_140C6A0C4
 * 0000000140C6A082: mov     ecx, [r13+804h]
 * 0000000140C6A089: mov     rax, [r13+588h]
 * 0000000140C6A090: mov     [rax], r13
 * 0000000140C6A093: mov     [rax+10h], ecx
 * 0000000140C6A096: mov     rcx, [r13+0A80h]
 * 0000000140C6A09D: cmp     [r13+918h], ebx
 * 0000000140C6A0A4: jnz     short loc_140C6A0B4
 * 0000000140C6A0A6: mov     rax, [r13+588h]
 * 0000000140C6A0AD: xor     rcx, r8
 * 0000000140C6A0B0: mov     [rax+18h], rcx
 * 0000000140C6A0B4: xor     edx, edx
 * 0000000140C6A0B6: mov     r9d, 100h
 * 0000000140C6A0BC: mov     rcx, r13
 * 0000000140C6A0BF: call    sub_140C7903C
 * 0000000140C6A0C4: mov     r9d, r15d
 * 0000000140C6A0C7: mov     rbx, r14
 * 0000000140C6A0CA: add     rbx, [rbp+7B0h+var_7F0]
 * 0000000140C6A0CE: sub     r9d, r14d
 * 0000000140C6A0D1: mov     r10d, r9d
 * 0000000140C6A0D4: add     r10, rbx
 * 0000000140C6A0D7: xor     eax, eax
 * 0000000140C6A0D9: mov     edx, eax
 * 0000000140C6A0DB: mov     eax, edx
 * 0000000140C6A0DD: mov     r8, [rbp+rax*8+7B0h+var_570]
 * 0000000140C6A0E5: mov     ecx, [rbp+rax*4+7B0h+var_6A0]
 * 0000000140C6A0EC: add     rcx, r8
 * 0000000140C6A0EF: cmp     rbx, rcx
 * 0000000140C6A0F2: jnb     short loc_140C6A0FD
 * 0000000140C6A0F4: cmp     r10, r8
 * 0000000140C6A0F7: ja      loc_140C6A226
 * 0000000140C6A0FD: inc     edx
 * 0000000140C6A0FF: cmp     edx, 6
 * 0000000140C6A102: jb      short loc_140C6A0DB
 * 0000000140C6A104: cmp     r9d, 4
 * 0000000140C6A108: jb      loc_140C6A226
 * 0000000140C6A10E: add     [r13+848h], r9d
 * 0000000140C6A115: mov     r10, rbx
 * 0000000140C6A118: mov     r14d, [r13+834h]
 * 0000000140C6A11F: mov     rax, rbx
 * 0000000140C6A122: mov     r15, [r13+838h]
 * 0000000140C6A129: mov     ecx, r9d
 * 0000000140C6A12C: add     rcx, rbx
 * 0000000140C6A12F: cmp     rbx, rcx
 * 0000000140C6A132: jnb     short loc_140C6A144
 * 0000000140C6A134: mov     edx, 40h ; '@'
 * 0000000140C6A139: prefetchnta byte ptr [rax]
 * 0000000140C6A13C: add     rax, rdx
 * 0000000140C6A13F: cmp     rax, rcx
 * 0000000140C6A142: jb      short loc_140C6A139
 * 0000000140C6A144: mov     r11d, r9d
 * 0000000140C6A147: mov     r8, r15
 * 0000000140C6A14A: shr     r11d, 7
 * 0000000140C6A14E: mov     edx, 1
 * 0000000140C6A153: test    r11d, r11d
 * 0000000140C6A156: jz      short loc_140C6A1C5
 * 0000000140C6A158: mov     edi, 0FFFFFFFFh
 * 0000000140C6A15D: mov     rsi, 7010008004002001h
 * 0000000140C6A167: mov     eax, 8
 * 0000000140C6A16C: xor     r8, [r10]
 * 0000000140C6A16F: mov     ecx, r14d
 * 0000000140C6A172: rol     r8, cl
 * 0000000140C6A175: xor     r8, [r10+8]
 * 0000000140C6A179: add     r10, 10h
 * 0000000140C6A17D: rol     r8, cl
 * 0000000140C6A180: sub     rax, rdx
 * 0000000140C6A183: jnz     short loc_140C6A16C
 * 0000000140C6A185: mov     rcx, r10
 * 0000000140C6A188: sub     rcx, rbx
 * 0000000140C6A18B: xor     rcx, r15
 * 0000000140C6A18E: mov     rax, rcx
 * 0000000140C6A191: rol     rax, 11h
 * 0000000140C6A195: xor     rcx, rax
 * 0000000140C6A198: mov     rax, rsi
 * 0000000140C6A19B: mul     rcx
 * 0000000140C6A19E: mov     [rbp+7B0h+var_430], rdx
 * 0000000140C6A1A5: xor     rdx, rax
 * 0000000140C6A1A8: xor     r14d, edx
 * 0000000140C6A1AB: mov     edx, 1
 * 0000000140C6A1B0: and     r14d, 3Fh
 * 0000000140C6A1B4: cmovz   r14d, edx
 * 0000000140C6A1B8: add     r11d, edi
 * 0000000140C6A1BB: jnz     short loc_140C6A167
 * 0000000140C6A1BD: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6A1C2: lea     edi, [rdx+1]
 * 0000000140C6A1C5: and     r9d, 7Fh
 * 0000000140C6A1C9: cmp     r9d, 8
 * 0000000140C6A1CD: jb      short loc_140C6A1EC
 * 0000000140C6A1CF: mov     eax, r9d
 * 0000000140C6A1D2: shr     rax, 3
 * 0000000140C6A1D6: xor     r8, [r10]
 * 0000000140C6A1D9: mov     ecx, r14d
 * 0000000140C6A1DC: rol     r8, cl
 * 0000000140C6A1DF: add     r10, 8
 * 0000000140C6A1E3: add     r9d, 0FFFFFFF8h
 * 0000000140C6A1E7: sub     rax, rdx
 * 0000000140C6A1EA: jnz     short loc_140C6A1D6
 * 0000000140C6A1EC: test    r9d, r9d
 * 0000000140C6A1EF: jz      short loc_140C6A20F
 * 0000000140C6A1F1: mov     edi, 0FFFFFFFFh
 * 0000000140C6A1F6: movzx   eax, byte ptr [r10]
 * 0000000140C6A1FA: mov     ecx, r14d
 * 0000000140C6A1FD: xor     r8, rax
 * 0000000140C6A200: add     r10, rdx
 * 0000000140C6A203: rol     r8, cl
 * 0000000140C6A206: add     r9d, edi
 * 0000000140C6A209: jnz     short loc_140C6A1F6
 * 0000000140C6A20B: lea     edi, [r9+2]
 * 0000000140C6A20F: mov     rax, r8
 * 0000000140C6A212: jmp     short loc_140C6A217
 * 0000000140C6A214: xor     r8b, al
 * 0000000140C6A217: shr     rax, 7
 * 0000000140C6A21B: test    rax, rax
 * 0000000140C6A21E: jnz     short loc_140C6A214
 * 0000000140C6A220: and     r8b, 7Fh
 * 0000000140C6A224: jmp     short loc_140C6A229
 * 0000000140C6A226: mov     r8b, 80h
 * 0000000140C6A229: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C6A22D: mov     r9, [rbp+7B0h+var_808]
 * 0000000140C6A231: mov     r15d, [rsp+8B0h+var_850]
 * 0000000140C6A236: mov     r14d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6A23B: mov     rax, [rbp+7B0h+var_828]
 * 0000000140C6A23F: add     rdx, 0Ch
 * 0000000140C6A243: mov     [rbp+7B0h+var_7D8], rdx
 * 0000000140C6A247: mov     [rax], r8b
 * 0000000140C6A24A: mov     rax, [rsp+8B0h+var_840]
 * 0000000140C6A24F: inc     [rbp+7B0h+var_828]
 * 0000000140C6A253: add     rax, 0Ch
 * 0000000140C6A257: mov     [rsp+8B0h+var_840], rax
 * 0000000140C6A25C: cmp     rax, r9
 * 0000000140C6A25F: jz      short loc_140C6A265
 * 0000000140C6A261: mov     r12d, [rax+4]
 * 0000000140C6A265: mov     r11, [rsp+8B0h+var_858]
 * 0000000140C6A26A: cmp     r12d, r14d
 * 0000000140C6A26D: jbe     loc_140C69F77
 * 0000000140C6A273: mov     ecx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6A279: mov     rbx, [rbp+7B0h+var_810]
 * 0000000140C6A27D: xor     r12d, r12d
 * 0000000140C6A280: test    r15d, r15d
 * 0000000140C6A283: jnz     loc_140C6A3FC
 * 0000000140C6A289: cmp     ecx, r14d
 * 0000000140C6A28C: jz      loc_140C6A3FC
 * 0000000140C6A292: mov     [rbx+0Ch], ecx
 * 0000000140C6A295: mov     r9d, r14d
 * 0000000140C6A298: mov     [rbx+10h], r14d
 * 0000000140C6A29C: mov     edx, r12d
 * 0000000140C6A29F: mov     eax, [rbx+0Ch]
 * 0000000140C6A2A2: sub     r9d, eax
 * 0000000140C6A2A5: mov     r11d, eax
 * 0000000140C6A2A8: add     r11, [rbp+7B0h+var_7F0]
 * 0000000140C6A2AC: mov     r10d, r9d
 * 0000000140C6A2AF: add     r10, r11
 * 0000000140C6A2B2: mov     eax, edx
 * 0000000140C6A2B4: mov     r8, [rbp+rax*8+7B0h+var_570]
 * 0000000140C6A2BC: mov     ecx, [rbp+rax*4+7B0h+var_6A0]
 * 0000000140C6A2C3: add     rcx, r8
 * 0000000140C6A2C6: cmp     r11, rcx
 * 0000000140C6A2C9: jnb     short loc_140C6A2D4
 * 0000000140C6A2CB: cmp     r10, r8
 * 0000000140C6A2CE: ja      loc_140C6A3FC
 * 0000000140C6A2D4: inc     edx
 * 0000000140C6A2D6: cmp     edx, 6
 * 0000000140C6A2D9: jb      short loc_140C6A2B2
 * 0000000140C6A2DB: add     [r13+848h], r9d
 * 0000000140C6A2E2: mov     r10, r11
 * 0000000140C6A2E5: mov     r14d, [r13+834h]
 * 0000000140C6A2EC: mov     rax, r11
 * 0000000140C6A2EF: mov     r15, [r13+838h]
 * 0000000140C6A2F6: mov     ecx, r9d
 * 0000000140C6A2F9: add     rcx, r11
 * 0000000140C6A2FC: cmp     r11, rcx
 * 0000000140C6A2FF: jnb     short loc_140C6A311
 * 0000000140C6A301: mov     edx, 40h ; '@'
 * 0000000140C6A306: prefetchnta byte ptr [rax]
 * 0000000140C6A309: add     rax, rdx
 * 0000000140C6A30C: cmp     rax, rcx
 * 0000000140C6A30F: jb      short loc_140C6A306
 * 0000000140C6A311: mov     ebx, r9d
 * 0000000140C6A314: mov     r8, r15
 * 0000000140C6A317: shr     ebx, 7
 * 0000000140C6A31A: mov     edx, 1
 * 0000000140C6A31F: test    ebx, ebx
 * 0000000140C6A321: jz      short loc_140C6A38F
 * 0000000140C6A323: mov     edi, 0FFFFFFFFh
 * 0000000140C6A328: mov     rsi, 7010008004002001h
 * 0000000140C6A332: mov     eax, 8
 * 0000000140C6A337: xor     r8, [r10]
 * 0000000140C6A33A: mov     ecx, r14d
 * 0000000140C6A33D: rol     r8, cl
 * 0000000140C6A340: xor     r8, [r10+8]
 * 0000000140C6A344: add     r10, 10h
 * 0000000140C6A348: rol     r8, cl
 * 0000000140C6A34B: sub     rax, rdx
 * 0000000140C6A34E: jnz     short loc_140C6A337
 * 0000000140C6A350: mov     rcx, r10
 * 0000000140C6A353: sub     rcx, r11
 * 0000000140C6A356: xor     rcx, r15
 * 0000000140C6A359: mov     rax, rcx
 * 0000000140C6A35C: rol     rax, 11h
 * 0000000140C6A360: xor     rcx, rax
 * 0000000140C6A363: mov     rax, rsi
 * 0000000140C6A366: mul     rcx
 * 0000000140C6A369: mov     [rbp+7B0h+var_428], rdx
 * 0000000140C6A370: xor     rdx, rax
 * 0000000140C6A373: xor     r14d, edx
 * 0000000140C6A376: mov     edx, 1
 * 0000000140C6A37B: and     r14d, 3Fh
 * 0000000140C6A37F: cmovz   r14d, edx
 * 0000000140C6A383: add     ebx, edi
 * 0000000140C6A385: jnz     short loc_140C6A332
 * 0000000140C6A387: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6A38C: lea     edi, [rdx+1]
 * 0000000140C6A38F: and     r9d, 7Fh
 * 0000000140C6A393: cmp     r9d, 8
 * 0000000140C6A397: jb      short loc_140C6A3B6
 * 0000000140C6A399: mov     eax, r9d
 * 0000000140C6A39C: shr     rax, 3
 * 0000000140C6A3A0: xor     r8, [r10]
 * 0000000140C6A3A3: mov     ecx, r14d
 * 0000000140C6A3A6: rol     r8, cl
 * 0000000140C6A3A9: add     r10, 8
 * 0000000140C6A3AD: add     r9d, 0FFFFFFF8h
 * 0000000140C6A3B1: sub     rax, rdx
 * 0000000140C6A3B4: jnz     short loc_140C6A3A0
 * 0000000140C6A3B6: test    r9d, r9d
 * 0000000140C6A3B9: jz      short loc_140C6A3D9
 * 0000000140C6A3BB: mov     edi, 0FFFFFFFFh
 * 0000000140C6A3C0: movzx   eax, byte ptr [r10]
 * 0000000140C6A3C4: mov     ecx, r14d
 * 0000000140C6A3C7: xor     r8, rax
 * 0000000140C6A3CA: add     r10, rdx
 * 0000000140C6A3CD: rol     r8, cl
 * 0000000140C6A3D0: add     r9d, edi
 * 0000000140C6A3D3: jnz     short loc_140C6A3C0
 * 0000000140C6A3D5: lea     edi, [r9+2]
 * 0000000140C6A3D9: mov     rax, r8
 * 0000000140C6A3DC: jmp     short loc_140C6A3E1
 * 0000000140C6A3DE: xor     r8d, eax
 * 0000000140C6A3E1: shr     rax, 1Fh
 * 0000000140C6A3E5: test    rax, rax
 * 0000000140C6A3E8: jnz     short loc_140C6A3DE
 * 0000000140C6A3EA: mov     rbx, [rbp+7B0h+var_810]
 * 0000000140C6A3EE: btr     r8d, 1Fh
 * 0000000140C6A3F3: mov     r14d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6A3F8: mov     [rbx+14h], r8d
 * 0000000140C6A3FC: mov     rdx, [rbp+7B0h+var_808]
 * 0000000140C6A400: mov     r9, [rbp+7B0h+var_7D8]
 * 0000000140C6A404: cmp     r9, rdx
 * 0000000140C6A407: jz      short loc_140C6A443
 * 0000000140C6A409: mov     eax, [r9]
 * 0000000140C6A40C: mov     ecx, [r9+4]
 * 0000000140C6A410: cmp     eax, [rbp+7B0h+var_7F4]
 * 0000000140C6A413: jb      short loc_140C6A443
 * 0000000140C6A415: cmp     ecx, r14d
 * 0000000140C6A418: ja      short loc_140C6A443
 * 0000000140C6A41A: mov     r8, [rsp+8B0h+var_840]
 * 0000000140C6A41F: cmp     r8, rdx
 * 0000000140C6A422: jz      short loc_140C6A43B
 * 0000000140C6A424: mov     rax, [rbp+7B0h+var_828]
 * 0000000140C6A428: mov     byte ptr [rax], 80h
 * 0000000140C6A42B: inc     rax
 * 0000000140C6A42E: add     r8, 0Ch
 * 0000000140C6A432: mov     [rbp+7B0h+var_828], rax
 * 0000000140C6A436: mov     [rsp+8B0h+var_840], r8
 * 0000000140C6A43B: add     r9, 0Ch
 * 0000000140C6A43F: mov     [rbp+7B0h+var_7D8], r9
 * 0000000140C6A443: mov     r12, [rbp+7B0h+var_7B8]
 * 0000000140C6A447: add     rbx, 18h
 * 0000000140C6A44B: mov     r11, [rsp+8B0h+var_858]
 * 0000000140C6A450: add     r12, 28h ; '('
 * 0000000140C6A454: mov     r10d, 1
 * 0000000140C6A45A: mov     [rbp+7B0h+var_810], rbx
 * 0000000140C6A45E: mov     [rbp+7B0h+var_7B8], r12
 * 0000000140C6A462: cmp     rbx, [rbp+7B0h+var_820]
 * 0000000140C6A466: jnz     loc_140C69B2E
 * 0000000140C6A46C: mov     r14, [rbp+7B0h+var_790]
 * 0000000140C6A470: xor     r12d, r12d
 * 0000000140C6A473: mov     r13, r14
 * 0000000140C6A476: mov     [rbp+7B0h+var_7D0], r14
 * 0000000140C6A47A: mov     ecx, r12d
 * 0000000140C6A47D: mov     rbx, [rbp+7B0h+var_7E8]
 * 0000000140C6A481: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6A486: mov     r8d, 80000000h
 * 0000000140C6A48C: mov     rax, r13
 * 0000000140C6A48F: mov     [rsp+8B0h+var_838], r13
 * 0000000140C6A494: sub     rax, rsi
 * 0000000140C6A497: mov     rsi, r13
 * 0000000140C6A49A: add     rdx, rax
 * 0000000140C6A49D: lea     eax, [rcx+r8]
 * 0000000140C6A4A1: mov     [rsp+8B0h+var_860], rdx
 * 0000000140C6A4A6: test    r8d, eax
 * 0000000140C6A4A9: jnz     short loc_140C6A4B3
 * 0000000140C6A4AB: cmp     ecx, 0C000010Eh
 * 0000000140C6A4B1: jnz     short loc_140C6A4B7
 * 0000000140C6A4B3: mov     [rdx+28h], rbx
 * 0000000140C6A4B7: mov     r13d, [rbp+7B0h+var_818]
 * 0000000140C6A4BB: jmp     loc_140C6A945
 * 0000000140C6A4C0: mov     r13d, r12d
 * 0000000140C6A4C3: jmp     loc_140C6AB5A
 * 0000000140C6A4C8: mov     rbx, r13
 * 0000000140C6A4CB: xor     edi, edi
 * 0000000140C6A4CD: mov     r13d, r12d
 * 0000000140C6A4D0: mov     [rbp+7B0h+var_740], edi
 * 0000000140C6A4D3: jmp     short loc_140C6A53C
 * 0000000140C6A4D5: mov     rax, [rsi+2E0h]
 * 0000000140C6A4DC: mov     rcx, [rbp+7B0h+var_6C0]
 * 0000000140C6A4E3: call    KeGuardDispatchICall
 * 0000000140C6A4E8: mov     r14, rax
 * 0000000140C6A4EB: test    rax, rax
 * 0000000140C6A4EE: jz      short loc_140C6A53C
 * 0000000140C6A4F0: mov     rax, [rsi+2E8h]
 * 0000000140C6A4F7: mov     rcx, r14
 * 0000000140C6A4FA: add     r13d, r15d
 * 0000000140C6A4FD: call    KeGuardDispatchICall
 * 0000000140C6A502: mov     r15, rax
 * 0000000140C6A505: lea     rdx, [rbp+7B0h+var_420]
 * 0000000140C6A50C: mov     rax, [rsi+218h]
 * 0000000140C6A513: mov     rcx, r15
 * 0000000140C6A516: call    KeGuardDispatchICall
 * 0000000140C6A51B: test    rax, rax
 * 0000000140C6A51E: jz      short loc_140C6A563
 * 0000000140C6A520: mov     rax, [rsi+2F0h]
 * 0000000140C6A527: mov     rdx, r14
 * 0000000140C6A52A: mov     rcx, [rbp+7B0h+var_6C0]
 * 0000000140C6A531: call    KeGuardDispatchICall
 * 0000000140C6A536: mov     r15d, 1
 * 0000000140C6A53C: mov     rax, [rsi+300h]
 * 0000000140C6A543: lea     r8, [rbp+7B0h+var_6C0]
 * 0000000140C6A54A: lea     rdx, [rbp+7B0h+var_740]
 * 0000000140C6A54E: mov     ecx, r12d
 * 0000000140C6A551: call    KeGuardDispatchICall
 * 0000000140C6A556: test    eax, eax
 * 0000000140C6A558: jnz     loc_140C6A4D5
 * 0000000140C6A55E: jmp     loc_140C6A704
 * 0000000140C6A563: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6A56D: jz      short loc_140C6A5BC
 * 0000000140C6A56F: mov     rcx, [rsi+0AC8h]
 * 0000000140C6A576: mov     edx, 30h ; '0'
 * 0000000140C6A57B: lea     r8d, [rdx-2Ah]
 * 0000000140C6A57F: lea     r9d, [rdx-2Fh]
 * 0000000140C6A583: mov     rax, [rbx]
 * 0000000140C6A586: add     edx, 0FFFFFFF8h
 * 0000000140C6A589: mov     [rcx], rax
 * 0000000140C6A58C: add     rbx, 8
 * 0000000140C6A590: add     rcx, 8
 * 0000000140C6A594: sub     r8, r9
 * 0000000140C6A597: jnz     short loc_140C6A583
 * 0000000140C6A599: test    edx, edx
 * 0000000140C6A59B: jz      short loc_140C6A5B5
 * 0000000140C6A59D: mov     esi, 0FFFFFFFFh
 * 0000000140C6A5A2: mov     al, [rbx]
 * 0000000140C6A5A4: add     rbx, r9
 * 0000000140C6A5A7: mov     [rcx], al
 * 0000000140C6A5A9: add     rcx, r9
 * 0000000140C6A5AC: add     edx, esi
 * 0000000140C6A5AE: jnz     short loc_140C6A5A2
 * 0000000140C6A5B0: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6A5B5: mov     rbx, [rsi+0AC8h]
 * 0000000140C6A5BC: mov     [rbx+18h], r15
 * 0000000140C6A5C0: mov     rax, [rsi+588h]
 * 0000000140C6A5C7: mov     ecx, r12d
 * 0000000140C6A5CA: mov     [rax], rbx
 * 0000000140C6A5CD: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6A5D4: mov     rax, [rsi+588h]
 * 0000000140C6A5DB: mov     [rax+8], r15
 * 0000000140C6A5DF: mov     r15d, 1
 * 0000000140C6A5E5: mov     dword ptr [rax+14h], 1000h
 * 0000000140C6A5EC: cmp     [rsi+918h], edi
 * 0000000140C6A5F2: jnz     loc_140C6A704
 * 0000000140C6A5F8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6A602: add     rax, rsi
 * 0000000140C6A605: mov     [rsi+920h], rax
 * 0000000140C6A60C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6A616: add     rax, rbx
 * 0000000140C6A619: mov     [rsi+928h], rax
 * 0000000140C6A620: movsxd  rax, dword ptr [rbx]
 * 0000000140C6A623: mov     [rsi+930h], rax
 * 0000000140C6A62A: mov     [rsi+938h], rcx
 * 0000000140C6A631: mov     [rsi+918h], r15d
 * 0000000140C6A638: mov     ecx, [rsi+9D8h]
 * 0000000140C6A63E: bt      ecx, 1Dh
 * 0000000140C6A642: jb      loc_140C6A704
 * 0000000140C6A648: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6A652: jz      loc_140C6A704
 * 0000000140C6A658: test    r15b, cl
 * 0000000140C6A65B: jz      loc_140C6A704
 * 0000000140C6A661: mov     ecx, [rsi+0A74h]
 * 0000000140C6A667: mov     eax, [rsi+804h]
 * 0000000140C6A66D: mov     r10, [rsi+838h]
 * 0000000140C6A674: sub     eax, ecx
 * 0000000140C6A676: mov     r8, [rsi+0A78h]
 * 0000000140C6A67D: lea     rdx, [rcx+rsi]
 * 0000000140C6A681: mov     ecx, eax
 * 0000000140C6A683: shr     rcx, 3
 * 0000000140C6A687: lea     r9, [rdx+rcx*8]
 * 0000000140C6A68B: jmp     short loc_140C6A6AE
 * 0000000140C6A68D: xor     [rdx], r8
 * 0000000140C6A690: mov     rax, [rdx]
 * 0000000140C6A693: movzx   ecx, r8b
 * 0000000140C6A697: xor     rax, r10
 * 0000000140C6A69A: and     ecx, 3Fh
 * 0000000140C6A69D: ror     r8, cl
 * 0000000140C6A6A0: add     r8, rax
 * 0000000140C6A6A3: xor     r8, 0F05h
 * 0000000140C6A6AA: add     rdx, 8
 * 0000000140C6A6AE: cmp     rdx, r9
 * 0000000140C6A6B1: jnz     short loc_140C6A68D
 * 0000000140C6A6B3: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6A6BB: cmp     r8, [rsi+0A80h]
 * 0000000140C6A6C2: jz      short loc_140C6A704
 * 0000000140C6A6C4: mov     ecx, [rsi+804h]
 * 0000000140C6A6CA: mov     rax, [rsi+588h]
 * 0000000140C6A6D1: mov     [rax], rsi
 * 0000000140C6A6D4: mov     [rax+10h], ecx
 * 0000000140C6A6D7: mov     rcx, [rsi+0A80h]
 * 0000000140C6A6DE: cmp     [rsi+918h], edi
 * 0000000140C6A6E4: jnz     short loc_140C6A6F4
 * 0000000140C6A6E6: mov     rax, [rsi+588h]
 * 0000000140C6A6ED: xor     rcx, r8
 * 0000000140C6A6F0: mov     [rax+18h], rcx
 * 0000000140C6A6F4: xor     edx, edx
 * 0000000140C6A6F6: mov     r9d, 100h
 * 0000000140C6A6FC: mov     rcx, rsi
 * 0000000140C6A6FF: call    sub_140C7903C
 * 0000000140C6A704: add     r12d, r15d
 * 0000000140C6A707: cmp     r12d, 3
 * 0000000140C6A70B: jb      loc_140C6A4D0
 * 0000000140C6A711: jmp     loc_140C6AB55
 * 0000000140C6A716: mov     rbx, r13
 * 0000000140C6A719: mov     [rbp+7B0h+var_650], r12
 * 0000000140C6A720: mov     r13d, r12d
 * 0000000140C6A723: mov     r15, cr8
 * 0000000140C6A727: mov     [rbp+7B0h+arg_8], r15
 * 0000000140C6A72E: mov     eax, 0Ch
 * 0000000140C6A733: mov     cr8, rax
 * 0000000140C6A737: mov     rax, [rsi+310h]
 * 0000000140C6A73E: lea     rcx, [rbp+7B0h+var_650]
 * 0000000140C6A745: call    KeGuardDispatchICall
 * 0000000140C6A74A: mov     r14, rax
 * 0000000140C6A74D: test    rax, rax
 * 0000000140C6A750: jz      loc_140C6A93D
 * 0000000140C6A756: mov     edi, 1
 * 0000000140C6A75B: mov     rax, [rsi+218h]
 * 0000000140C6A762: lea     rdx, [rbp+7B0h+var_418]
 * 0000000140C6A769: mov     rcx, r14
 * 0000000140C6A76C: add     r13d, edi
 * 0000000140C6A76F: call    KeGuardDispatchICall
 * 0000000140C6A774: test    rax, rax
 * 0000000140C6A777: jnz     loc_140C6A914
 * 0000000140C6A77D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6A787: jz      short loc_140C6A7D0
 * 0000000140C6A789: mov     rcx, [rsi+0AC8h]
 * 0000000140C6A790: lea     edx, [rax+30h]
 * 0000000140C6A793: lea     r8d, [rax+6]
 * 0000000140C6A797: mov     rax, [rbx]
 * 0000000140C6A79A: add     edx, 0FFFFFFF8h
 * 0000000140C6A79D: mov     [rcx], rax
 * 0000000140C6A7A0: add     rbx, 8
 * 0000000140C6A7A4: add     rcx, 8
 * 0000000140C6A7A8: sub     r8, rdi
 * 0000000140C6A7AB: jnz     short loc_140C6A797
 * 0000000140C6A7AD: test    edx, edx
 * 0000000140C6A7AF: jz      short loc_140C6A7C9
 * 0000000140C6A7B1: mov     esi, 0FFFFFFFFh
 * 0000000140C6A7B6: mov     al, [rbx]
 * 0000000140C6A7B8: add     rbx, rdi
 * 0000000140C6A7BB: mov     [rcx], al
 * 0000000140C6A7BD: add     rcx, rdi
 * 0000000140C6A7C0: add     edx, esi
 * 0000000140C6A7C2: jnz     short loc_140C6A7B6
 * 0000000140C6A7C4: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6A7C9: mov     rbx, [rsi+0AC8h]
 * 0000000140C6A7D0: mov     [rbx+18h], r14
 * 0000000140C6A7D4: mov     rax, [rsi+588h]
 * 0000000140C6A7DB: mov     [rax], rbx
 * 0000000140C6A7DE: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6A7E5: mov     rax, [rsi+588h]
 * 0000000140C6A7EC: mov     [rax+8], r14
 * 0000000140C6A7F0: mov     dword ptr [rax+14h], 1000h
 * 0000000140C6A7F7: cmp     [rsi+918h], r12d
 * 0000000140C6A7FE: jnz     loc_140C6A914
 * 0000000140C6A804: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6A80E: add     rax, rsi
 * 0000000140C6A811: mov     [rsi+920h], rax
 * 0000000140C6A818: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6A822: add     rax, rbx
 * 0000000140C6A825: mov     [rsi+928h], rax
 * 0000000140C6A82C: movsxd  rax, dword ptr [rbx]
 * 0000000140C6A82F: mov     [rsi+930h], rax
 * 0000000140C6A836: mov     qword ptr [rsi+938h], 4
 * 0000000140C6A841: mov     [rsi+918h], edi
 * 0000000140C6A847: mov     ecx, [rsi+9D8h]
 * 0000000140C6A84D: bt      ecx, 1Dh
 * 0000000140C6A851: jb      loc_140C6A914
 * 0000000140C6A857: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6A861: jz      loc_140C6A914
 * 0000000140C6A867: test    dil, cl
 * 0000000140C6A86A: jz      loc_140C6A914
 * 0000000140C6A870: mov     ecx, [rsi+0A74h]
 * 0000000140C6A876: mov     eax, [rsi+804h]
 * 0000000140C6A87C: mov     r10, [rsi+838h]
 * 0000000140C6A883: sub     eax, ecx
 * 0000000140C6A885: mov     r8, [rsi+0A78h]
 * 0000000140C6A88C: lea     rdx, [rcx+rsi]
 * 0000000140C6A890: mov     ecx, eax
 * 0000000140C6A892: shr     rcx, 3
 * 0000000140C6A896: lea     r9, [rdx+rcx*8]
 * 0000000140C6A89A: jmp     short loc_140C6A8BD
 * 0000000140C6A89C: xor     [rdx], r8
 * 0000000140C6A89F: mov     rax, [rdx]
 * 0000000140C6A8A2: movzx   ecx, r8b
 * 0000000140C6A8A6: xor     rax, r10
 * 0000000140C6A8A9: and     ecx, 3Fh
 * 0000000140C6A8AC: ror     r8, cl
 * 0000000140C6A8AF: add     r8, rax
 * 0000000140C6A8B2: xor     r8, 0F05h
 * 0000000140C6A8B9: add     rdx, 8
 * 0000000140C6A8BD: cmp     rdx, r9
 * 0000000140C6A8C0: jnz     short loc_140C6A89C
 * 0000000140C6A8C2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6A8CA: cmp     r8, [rsi+0A80h]
 * 0000000140C6A8D1: jz      short loc_140C6A914
 * 0000000140C6A8D3: mov     ecx, [rsi+804h]
 * 0000000140C6A8D9: mov     rax, [rsi+588h]
 * 0000000140C6A8E0: mov     [rax], rsi
 * 0000000140C6A8E3: mov     [rax+10h], ecx
 * 0000000140C6A8E6: mov     rcx, [rsi+0A80h]
 * 0000000140C6A8ED: cmp     [rsi+918h], r12d
 * 0000000140C6A8F4: jnz     short loc_140C6A904
 * 0000000140C6A8F6: mov     rax, [rsi+588h]
 * 0000000140C6A8FD: xor     rcx, r8
 * 0000000140C6A900: mov     [rax+18h], rcx
 * 0000000140C6A904: xor     edx, edx
 * 0000000140C6A906: mov     r9d, 100h
 * 0000000140C6A90C: mov     rcx, rsi
 * 0000000140C6A90F: call    sub_140C7903C
 * 0000000140C6A914: mov     rax, [rsi+310h]
 * 0000000140C6A91B: lea     rcx, [rbp+7B0h+var_650]
 * 0000000140C6A922: call    KeGuardDispatchICall
 * 0000000140C6A927: mov     r14, rax
 * 0000000140C6A92A: test    rax, rax
 * 0000000140C6A92D: jnz     loc_140C6A75B
 * 0000000140C6A933: mov     r15, [rbp+7B0h+arg_8]
 * 0000000140C6A93A: lea     edi, [rax+2]
 * 0000000140C6A93D: movzx   eax, r15b
 * 0000000140C6A941: mov     cr8, rax
 * 0000000140C6A945: mov     r15d, 1
 * 0000000140C6A94B: jmp     loc_140C6AB5A
 * 0000000140C6A950: mov     [rbp+7B0h+var_658], r12
 * 0000000140C6A957: lea     rcx, [rbp+7B0h+var_658]
 * 0000000140C6A95E: mov     rax, [rsi+308h]
 * 0000000140C6A965: mov     rbx, r13
 * 0000000140C6A968: mov     r13d, r12d
 * 0000000140C6A96B: call    KeGuardDispatchICall
 * 0000000140C6A970: mov     r14, rax
 * 0000000140C6A973: test    rax, rax
 * 0000000140C6A976: jz      loc_140C6AB5A
 * 0000000140C6A97C: mov     rax, [rsi+218h]
 * 0000000140C6A983: lea     rdx, [rbp+7B0h+var_410]
 * 0000000140C6A98A: mov     rcx, r14
 * 0000000140C6A98D: add     r13d, r15d
 * 0000000140C6A990: call    KeGuardDispatchICall
 * 0000000140C6A995: test    rax, rax
 * 0000000140C6A998: jnz     loc_140C6AB36
 * 0000000140C6A99E: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6A9A8: jz      short loc_140C6A9F1
 * 0000000140C6A9AA: mov     rcx, [rsi+0AC8h]
 * 0000000140C6A9B1: lea     edx, [rax+30h]
 * 0000000140C6A9B4: lea     r8d, [rax+6]
 * 0000000140C6A9B8: mov     rax, [rbx]
 * 0000000140C6A9BB: add     edx, 0FFFFFFF8h
 * 0000000140C6A9BE: mov     [rcx], rax
 * 0000000140C6A9C1: add     rbx, 8
 * 0000000140C6A9C5: add     rcx, 8
 * 0000000140C6A9C9: sub     r8, r15
 * 0000000140C6A9CC: jnz     short loc_140C6A9B8
 * 0000000140C6A9CE: test    edx, edx
 * 0000000140C6A9D0: jz      short loc_140C6A9EA
 * 0000000140C6A9D2: mov     esi, 0FFFFFFFFh
 * 0000000140C6A9D7: mov     al, [rbx]
 * 0000000140C6A9D9: add     rbx, r15
 * 0000000140C6A9DC: mov     [rcx], al
 * 0000000140C6A9DE: add     rcx, r15
 * 0000000140C6A9E1: add     edx, esi
 * 0000000140C6A9E3: jnz     short loc_140C6A9D7
 * 0000000140C6A9E5: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6A9EA: mov     rbx, [rsi+0AC8h]
 * 0000000140C6A9F1: mov     [rbx+18h], r14
 * 0000000140C6A9F5: mov     rax, [rsi+588h]
 * 0000000140C6A9FC: mov     [rax], rbx
 * 0000000140C6A9FF: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6AA06: mov     rax, [rsi+588h]
 * 0000000140C6AA0D: mov     [rax+8], r14
 * 0000000140C6AA11: mov     dword ptr [rax+14h], 1000h
 * 0000000140C6AA18: cmp     [rsi+918h], r12d
 * 0000000140C6AA1F: jnz     loc_140C6AB36
 * 0000000140C6AA25: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6AA2F: add     rax, rsi
 * 0000000140C6AA32: mov     [rsi+920h], rax
 * 0000000140C6AA39: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6AA43: add     rax, rbx
 * 0000000140C6AA46: mov     [rsi+928h], rax
 * 0000000140C6AA4D: movsxd  rax, dword ptr [rbx]
 * 0000000140C6AA50: mov     [rsi+930h], rax
 * 0000000140C6AA57: mov     qword ptr [rsi+938h], 3
 * 0000000140C6AA62: mov     [rsi+918h], r15d
 * 0000000140C6AA69: mov     ecx, [rsi+9D8h]
 * 0000000140C6AA6F: bt      ecx, 1Dh
 * 0000000140C6AA73: jb      loc_140C6AB36
 * 0000000140C6AA79: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6AA83: jz      loc_140C6AB36
 * 0000000140C6AA89: test    r15b, cl
 * 0000000140C6AA8C: jz      loc_140C6AB36
 * 0000000140C6AA92: mov     ecx, [rsi+0A74h]
 * 0000000140C6AA98: mov     eax, [rsi+804h]
 * 0000000140C6AA9E: mov     r10, [rsi+838h]
 * 0000000140C6AAA5: sub     eax, ecx
 * 0000000140C6AAA7: mov     r8, [rsi+0A78h]
 * 0000000140C6AAAE: lea     rdx, [rcx+rsi]
 * 0000000140C6AAB2: mov     ecx, eax
 * 0000000140C6AAB4: shr     rcx, 3
 * 0000000140C6AAB8: lea     r9, [rdx+rcx*8]
 * 0000000140C6AABC: jmp     short loc_140C6AADF
 * 0000000140C6AABE: xor     [rdx], r8
 * 0000000140C6AAC1: mov     rax, [rdx]
 * 0000000140C6AAC4: movzx   ecx, r8b
 * 0000000140C6AAC8: xor     rax, r10
 * 0000000140C6AACB: and     ecx, 3Fh
 * 0000000140C6AACE: ror     r8, cl
 * 0000000140C6AAD1: add     r8, rax
 * 0000000140C6AAD4: xor     r8, 0F05h
 * 0000000140C6AADB: add     rdx, 8
 * 0000000140C6AADF: cmp     rdx, r9
 * 0000000140C6AAE2: jnz     short loc_140C6AABE
 * 0000000140C6AAE4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6AAEC: cmp     r8, [rsi+0A80h]
 * 0000000140C6AAF3: jz      short loc_140C6AB36
 * 0000000140C6AAF5: mov     ecx, [rsi+804h]
 * 0000000140C6AAFB: mov     rax, [rsi+588h]
 * 0000000140C6AB02: mov     [rax], rsi
 * 0000000140C6AB05: mov     [rax+10h], ecx
 * 0000000140C6AB08: mov     rcx, [rsi+0A80h]
 * 0000000140C6AB0F: cmp     [rsi+918h], r12d
 * 0000000140C6AB16: jnz     short loc_140C6AB26
 * 0000000140C6AB18: mov     rax, [rsi+588h]
 * 0000000140C6AB1F: xor     rcx, r8
 * 0000000140C6AB22: mov     [rax+18h], rcx
 * 0000000140C6AB26: xor     edx, edx
 * 0000000140C6AB28: mov     r9d, 100h
 * 0000000140C6AB2E: mov     rcx, rsi
 * 0000000140C6AB31: call    sub_140C7903C
 * 0000000140C6AB36: mov     rax, [rsi+308h]
 * 0000000140C6AB3D: lea     rcx, [rbp+7B0h+var_658]
 * 0000000140C6AB44: call    KeGuardDispatchICall
 * 0000000140C6AB49: mov     r14, rax
 * 0000000140C6AB4C: test    rax, rax
 * 0000000140C6AB4F: jnz     loc_140C6A97C
 * 0000000140C6AB55: mov     edi, 2
 * 0000000140C6AB5A: shl     r13d, 0Ch
 * 0000000140C6AB5E: xor     r12d, r12d
 * 0000000140C6AB61: add     [rsi+848h], r13d
 * 0000000140C6AB68: mov     eax, [rsi+848h]
 * 0000000140C6AB6E: add     [rsi+844h], r15d
 * 0000000140C6AB75: cmp     eax, [rsi+84Ch]
 * 0000000140C6AB7B: jge     short loc_140C6AB99
 * 0000000140C6AB7D: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6AB82: lea     r14d, [r12+5]
 * 0000000140C6AB87: mov     r11d, 1000h
 * 0000000140C6AB8D: jmp     loc_140C67B56
 * 0000000140C6AB92: mov     [rsi+844h], r12d
 * 0000000140C6AB99: mov     [rsp+8B0h+var_838], rsi
 * 0000000140C6AB9E: jmp     loc_140C6F354
 * 0000000140C6ABA3: mov     edx, [r13+2Ch]
 * 0000000140C6ABA7: lea     rcx, [rbp+7B0h+var_2E8]
 * 0000000140C6ABAE: mov     rax, [rsi+1B0h]
 * 0000000140C6ABB5: mov     ebx, [r13+28h]
 * 0000000140C6ABB9: call    KeGuardDispatchICall
 * 0000000140C6ABBE: mov     rax, [rsi+1E0h]
 * 0000000140C6ABC5: lea     rdx, [rbp+7B0h+var_2D8]
 * 0000000140C6ABCC: lea     rcx, [rbp+7B0h+var_2E8]
 * 0000000140C6ABD3: call    KeGuardDispatchICall
 * 0000000140C6ABD8: test    ebx, ebx
 * 0000000140C6ABDA: mov     rbx, cr4
 * 0000000140C6ABDD: jnz     short loc_140C6ABE2
 * 0000000140C6ABDF: mov     rbx, cr0
 * 0000000140C6ABE2: mov     rax, [rsi+1A8h]
 * 0000000140C6ABE9: lea     rcx, [rbp+7B0h+var_2D8]
 * 0000000140C6ABF0: call    KeGuardDispatchICall
 * 0000000140C6ABF5: mov     r8, [r13+18h]
 * 0000000140C6ABF9: mov     rdx, [r13+20h]
 * 0000000140C6ABFD: and     r8, rbx
 * 0000000140C6AC00: cmp     r8, rdx
 * 0000000140C6AC03: jz      loc_140C6F354
 * 0000000140C6AC09: mov     ecx, [r13+2Ch]
 * 0000000140C6AC0D: mov     eax, [r13+28h]
 * 0000000140C6AC11: shl     rcx, 20h
 * 0000000140C6AC15: or      rcx, rax
 * 0000000140C6AC18: cmp     [rsi+918h], r12d
 * 0000000140C6AC1F: jnz     loc_140C6F354
 * 0000000140C6AC25: mov     rax, [rsi+588h]
 * 0000000140C6AC2C: xor     rdx, r8
 * 0000000140C6AC2F: mov     [rax+18h], rdx
 * 0000000140C6AC33: cmp     [rsi+918h], r12d
 * 0000000140C6AC3A: jnz     loc_140C6F354
 * 0000000140C6AC40: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6AC4A: add     rax, rsi
 * 0000000140C6AC4D: mov     [rsi+920h], rax
 * 0000000140C6AC54: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6AC5E: add     rax, r13
 * 0000000140C6AC61: mov     [rsi+928h], rax
 * 0000000140C6AC68: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6AC6C: mov     [rsi+930h], rax
 * 0000000140C6AC73: mov     [rsi+938h], rcx
 * 0000000140C6AC7A: mov     [rsi+918h], r15d
 * 0000000140C6AC81: mov     ecx, [rsi+9D8h]
 * 0000000140C6AC87: bt      ecx, 1Dh
 * 0000000140C6AC8B: jb      loc_140C6F354
 * 0000000140C6AC91: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6AC9B: jz      loc_140C6F354
 * 0000000140C6ACA1: test    r15b, cl
 * 0000000140C6ACA4: jz      loc_140C6F354
 * 0000000140C6ACAA: mov     ecx, [rsi+0A74h]
 * 0000000140C6ACB0: mov     eax, [rsi+804h]
 * 0000000140C6ACB6: mov     r10, [rsi+838h]
 * 0000000140C6ACBD: sub     eax, ecx
 * 0000000140C6ACBF: mov     r8, [rsi+0A78h]
 * 0000000140C6ACC6: lea     rdx, [rcx+rsi]
 * 0000000140C6ACCA: mov     ecx, eax
 * 0000000140C6ACCC: shr     rcx, 3
 * 0000000140C6ACD0: lea     r9, [rdx+rcx*8]
 * 0000000140C6ACD4: jmp     short loc_140C6ACF7
 * 0000000140C6ACD6: xor     [rdx], r8
 * 0000000140C6ACD9: mov     rax, [rdx]
 * 0000000140C6ACDC: movzx   ecx, r8b
 * 0000000140C6ACE0: xor     rax, r10
 * 0000000140C6ACE3: and     ecx, 3Fh
 * 0000000140C6ACE6: ror     r8, cl
 * 0000000140C6ACE9: add     r8, rax
 * 0000000140C6ACEC: xor     r8, 0F05h
 * 0000000140C6ACF3: add     rdx, 8
 * 0000000140C6ACF7: cmp     rdx, r9
 * 0000000140C6ACFA: jnz     short loc_140C6ACD6
 * 0000000140C6ACFC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6AD04: cmp     r8, [rsi+0A80h]
 * 0000000140C6AD0B: jz      loc_140C6F354
 * 0000000140C6AD11: mov     rax, [rsi+588h]
 * 0000000140C6AD18: mov     ecx, [rsi+804h]
 * 0000000140C6AD1E: mov     [rax], rsi
 * 0000000140C6AD21: mov     [rax+10h], ecx
 * 0000000140C6AD24: mov     rax, [rsi+0A80h]
 * 0000000140C6AD2B: cmp     [rsi+918h], r12d
 * 0000000140C6AD32: jnz     loc_140C65A94
 * 0000000140C6AD38: mov     rcx, r8
 * 0000000140C6AD3B: xor     rcx, rax
 * 0000000140C6AD3E: jmp     loc_140C65A89
 * 0000000140C6AD43: mov     r9, [r13+8]
 * 0000000140C6AD47: xor     r14d, r14d
 * 0000000140C6AD4A: mov     r8d, [rsi+844h]
 * 0000000140C6AD51: mov     ecx, [r13+24h]
 * 0000000140C6AD55: mov     [rbp+7B0h+var_810], r9
 * 0000000140C6AD59: lea     rax, [r8+r8*2]
 * 0000000140C6AD5D: lea     r11, [r9+rax*4]
 * 0000000140C6AD61: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C6AD6B: mul     rcx
 * 0000000140C6AD6E: lea     rbx, [r11+0Ch]
 * 0000000140C6AD72: mov     [rsp+8B0h+var_840], r11
 * 0000000140C6AD77: mov     r10, rdx
 * 0000000140C6AD7A: mov     [rbp+7B0h+var_828], rbx
 * 0000000140C6AD7E: shr     r10, 3
 * 0000000140C6AD82: mov     eax, r10d
 * 0000000140C6AD85: mov     [rbp+7B0h+var_7D8], r10
 * 0000000140C6AD89: lea     rcx, [rax+rax*2]
 * 0000000140C6AD8D: lea     rax, [r9+rcx*4]
 * 0000000140C6AD91: mov     [rbp+7B0h+var_7B8], rax
 * 0000000140C6AD95: lea     rax, [r13+30h]
 * 0000000140C6AD99: lea     r12, [r8+rax]
 * 0000000140C6AD9D: mov     [rsp+8B0h+var_858], r12
 * 0000000140C6ADA2: lea     r9d, [r10-1]
 * 0000000140C6ADA6: test    r10d, r10d
 * 0000000140C6ADA9: jz      short loc_140C6ADBB
 * 0000000140C6ADAB: mov     edx, r9d
 * 0000000140C6ADAE: add     rdx, 7
 * 0000000140C6ADB2: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140C6ADB6: add     rdx, rax
 * 0000000140C6ADB9: jmp     short loc_140C6ADBE
 * 0000000140C6ADBB: mov     rdx, rax
 * 0000000140C6ADBE: movzx   eax, word ptr [r13+28h]
 * 0000000140C6ADC3: mov     [rbp+7B0h+var_7E8], rdx
 * 0000000140C6ADC7: lea     rcx, [rax+rax*2]
 * 0000000140C6ADCB: lea     rax, [rdx+rcx*8]
 * 0000000140C6ADCF: mov     [rbp+7B0h+var_808], rax
 * 0000000140C6ADD3: test    r10d, r10d
 * 0000000140C6ADD6: jz      loc_140C6B056
 * 0000000140C6ADDC: cmp     r8d, r9d
 * 0000000140C6ADDF: jnb     loc_140C6B049
 * 0000000140C6ADE5: cmp     [r12], r14b
 * 0000000140C6ADE9: jl      loc_140C6AFE6
 * 0000000140C6ADEF: mov     eax, [r11+4]
 * 0000000140C6ADF3: mov     r14d, [rbx]
 * 0000000140C6ADF6: mov     r15d, eax
 * 0000000140C6ADF9: add     r15, [r13+18h]
 * 0000000140C6ADFD: sub     r14d, eax
 * 0000000140C6AE00: add     [rsi+848h], r14d
 * 0000000140C6AE07: mov     r9, r15
 * 0000000140C6AE0A: mov     r10d, [rsi+834h]
 * 0000000140C6AE11: mov     rax, r15
 * 0000000140C6AE14: mov     rbx, [rsi+838h]
 * 0000000140C6AE1B: mov     ecx, r14d
 * 0000000140C6AE1E: add     rcx, r15
 * 0000000140C6AE21: mov     [rbp+7B0h+var_820], r15
 * 0000000140C6AE25: cmp     r15, rcx
 * 0000000140C6AE28: jnb     short loc_140C6AE3A
 * 0000000140C6AE2A: mov     edx, 40h ; '@'
 * 0000000140C6AE2F: prefetchnta byte ptr [rax]
 * 0000000140C6AE32: add     rax, rdx
 * 0000000140C6AE35: cmp     rax, rcx
 * 0000000140C6AE38: jb      short loc_140C6AE2F
 * 0000000140C6AE3A: mov     r11d, r14d
 * 0000000140C6AE3D: mov     r8, rbx
 * 0000000140C6AE40: shr     r11d, 7
 * 0000000140C6AE44: mov     r13d, 1
 * 0000000140C6AE4A: test    r11d, r11d
 * 0000000140C6AE4D: jz      short loc_140C6AEB8
 * 0000000140C6AE4F: mov     edi, 0FFFFFFFFh
 * 0000000140C6AE54: mov     r12, 7010008004002001h
 * 0000000140C6AE5E: mov     eax, 8
 * 0000000140C6AE63: xor     r8, [r9]
 * 0000000140C6AE66: mov     ecx, r10d
 * 0000000140C6AE69: rol     r8, cl
 * 0000000140C6AE6C: xor     r8, [r9+8]
 * 0000000140C6AE70: add     r9, 10h
 * 0000000140C6AE74: rol     r8, cl
 * 0000000140C6AE77: sub     rax, r13
 * 0000000140C6AE7A: jnz     short loc_140C6AE63
 * 0000000140C6AE7C: mov     rcx, r9
 * 0000000140C6AE7F: sub     rcx, r15
 * 0000000140C6AE82: xor     rcx, rbx
 * 0000000140C6AE85: mov     rax, rcx
 * 0000000140C6AE88: rol     rax, 11h
 * 0000000140C6AE8C: xor     rcx, rax
 * 0000000140C6AE8F: mov     rax, r12
 * 0000000140C6AE92: mul     rcx
 * 0000000140C6AE95: mov     [rbp+7B0h+var_408], rdx
 * 0000000140C6AE9C: xor     rdx, rax
 * 0000000140C6AE9F: xor     r10d, edx
 * 0000000140C6AEA2: and     r10d, 3Fh
 * 0000000140C6AEA6: cmovz   r10d, r13d
 * 0000000140C6AEAA: add     r11d, edi
 * 0000000140C6AEAD: jnz     short loc_140C6AE5E
 * 0000000140C6AEAF: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C6AEB4: lea     edi, [r11+2]
 * 0000000140C6AEB8: mov     edx, r14d
 * 0000000140C6AEBB: and     edx, 7Fh
 * 0000000140C6AEBE: cmp     edx, 8
 * 0000000140C6AEC1: jb      short loc_140C6AEDE
 * 0000000140C6AEC3: mov     eax, edx
 * 0000000140C6AEC5: shr     rax, 3
 * 0000000140C6AEC9: xor     r8, [r9]
 * 0000000140C6AECC: mov     ecx, r10d
 * 0000000140C6AECF: rol     r8, cl
 * 0000000140C6AED2: add     r9, 8
 * 0000000140C6AED6: add     edx, 0FFFFFFF8h
 * 0000000140C6AED9: sub     rax, r13
 * 0000000140C6AEDC: jnz     short loc_140C6AEC9
 * 0000000140C6AEDE: xor     r11d, r11d
 * 0000000140C6AEE1: test    edx, edx
 * 0000000140C6AEE3: jz      short loc_140C6AF01
 * 0000000140C6AEE5: mov     edi, 0FFFFFFFFh
 * 0000000140C6AEEA: movzx   eax, byte ptr [r9]
 * 0000000140C6AEEE: mov     ecx, r10d
 * 0000000140C6AEF1: xor     r8, rax
 * 0000000140C6AEF4: add     r9, r13
 * 0000000140C6AEF7: rol     r8, cl
 * 0000000140C6AEFA: add     edx, edi
 * 0000000140C6AEFC: jnz     short loc_140C6AEEA
 * 0000000140C6AEFE: lea     edi, [rdx+2]
 * 0000000140C6AF01: mov     rax, r8
 * 0000000140C6AF04: jmp     short loc_140C6AF09
 * 0000000140C6AF06: xor     r8b, al
 * 0000000140C6AF09: shr     rax, 7
 * 0000000140C6AF0D: test    rax, rax
 * 0000000140C6AF10: jnz     short loc_140C6AF06
 * 0000000140C6AF12: movzx   eax, byte ptr [r12]
 * 0000000140C6AF17: and     r8b, 7Fh
 * 0000000140C6AF1B: movzx   r13d, r8b
 * 0000000140C6AF1F: and     eax, 7Fh
 * 0000000140C6AF22: cmp     r13d, eax
 * 0000000140C6AF25: jz      loc_140C6AFC4
 * 0000000140C6AF2B: mov     ecx, r14d
 * 0000000140C6AF2E: test    r14d, r14d
 * 0000000140C6AF31: jz      loc_140C6B094
 * 0000000140C6AF37: mov     eax, [rsi+9DCh]
 * 0000000140C6AF3D: mov     edx, 40h ; '@'
 * 0000000140C6AF42: test    dl, al
 * 0000000140C6AF44: jz      loc_140C6B094
 * 0000000140C6AF4A: mov     r14, cr8
 * 0000000140C6AF4E: mov     rbx, r15
 * 0000000140C6AF51: lea     r12, [r15-1]
 * 0000000140C6AF55: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140C6AF5C: add     r12, rcx
 * 0000000140C6AF5F: or      r12, 0FFFh
 * 0000000140C6AF66: lea     r15, [rbx-1]
 * 0000000140C6AF6A: mov     cr8, rdi
 * 0000000140C6AF6E: mov     rax, [rsi+468h]
 * 0000000140C6AF75: xor     edx, edx
 * 0000000140C6AF77: mov     rcx, rbx
 * 0000000140C6AF7A: call    KeGuardDispatchICall
 * 0000000140C6AF7F: cmp     eax, 0C000022Dh
 * 0000000140C6AF84: jnz     short loc_140C6AF9C
 * 0000000140C6AF86: mov     eax, 1
 * 0000000140C6AF8B: cmp     r14b, al
 * 0000000140C6AF8E: ja      short loc_140C6AFA7
 * 0000000140C6AF90: movzx   eax, r14b
 * 0000000140C6AF94: mov     cr8, rax
 * 0000000140C6AF98: mov     al, [rbx]
 * 0000000140C6AF9A: jmp     short loc_140C6AF6A
 * 0000000140C6AF9C: xor     r11d, r11d
 * 0000000140C6AF9F: test    eax, eax
 * 0000000140C6AFA1: js      loc_140C6B083
 * 0000000140C6AFA7: mov     eax, 1000h
 * 0000000140C6AFAC: add     rbx, rax
 * 0000000140C6AFAF: add     r15, rax
 * 0000000140C6AFB2: cmp     r15, r12
 * 0000000140C6AFB5: jnz     short loc_140C6AF6E
 * 0000000140C6AFB7: movzx   eax, r14b
 * 0000000140C6AFBB: mov     cr8, rax
 * 0000000140C6AFBF: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C6AFC4: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6AFC9: mov     r15d, 1
 * 0000000140C6AFCF: mov     r11, [rsp+8B0h+var_840]
 * 0000000140C6AFD4: mov     ecx, 40h ; '@'
 * 0000000140C6AFD9: add     [rsi+848h], ecx
 * 0000000140C6AFDF: mov     rbx, [rbp+7B0h+var_828]
 * 0000000140C6AFE3: xor     r14d, r14d
 * 0000000140C6AFE6: mov     eax, 0Ch
 * 0000000140C6AFEB: add     r12, r15
 * 0000000140C6AFEE: add     r11, rax
 * 0000000140C6AFF1: mov     [rsp+8B0h+var_858], r12
 * 0000000140C6AFF6: add     rbx, rax
 * 0000000140C6AFF9: mov     [rsp+8B0h+var_840], r11
 * 0000000140C6AFFE: mov     [rbp+7B0h+var_828], rbx
 * 0000000140C6B002: cmp     rbx, [rbp+7B0h+var_7B8]
 * 0000000140C6B006: jnb     short loc_140C6B01A
 * 0000000140C6B008: mov     eax, [rsi+84Ch]
 * 0000000140C6B00E: cmp     [rsi+848h], eax
 * 0000000140C6B014: jl      loc_140C6ADE5
 * 0000000140C6B01A: sub     r11, [rbp+7B0h+var_810]
 * 0000000140C6B01E: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140C6B028: mov     r10, [rbp+7B0h+var_7D8]
 * 0000000140C6B02C: imul    r11
 * 0000000140C6B02F: sar     rdx, 1
 * 0000000140C6B032: mov     rax, rdx
 * 0000000140C6B035: shr     rax, 3Fh
 * 0000000140C6B039: add     rdx, rax
 * 0000000140C6B03C: mov     [rsi+844h], edx
 * 0000000140C6B042: mov     r8d, edx
 * 0000000140C6B045: mov     rdx, [rbp+7B0h+var_7E8]
 * 0000000140C6B049: lea     eax, [r10-1]
 * 0000000140C6B04D: cmp     r8d, eax
 * 0000000140C6B050: jb      loc_140C66395
 * 0000000140C6B056: mov     eax, [rsi+84Ch]
 * 0000000140C6B05C: xor     r12d, r12d
 * 0000000140C6B05F: cmp     [rsi+848h], eax
 * 0000000140C6B065: jge     loc_140C6F354
 * 0000000140C6B06B: test    r10d, r10d
 * 0000000140C6B06E: jz      loc_140C6B1E9
 * 0000000140C6B074: sub     r8d, r10d
 * 0000000140C6B077: add     r8d, r15d
 * 0000000140C6B07A: lea     rcx, [r8+r8*2]
 * 0000000140C6B07E: jmp     loc_140C6B1F0
 * 0000000140C6B083: movzx   eax, r14b
 * 0000000140C6B087: mov     cr8, rax
 * 0000000140C6B08B: mov     r15, [rbp+7B0h+var_820]
 * 0000000140C6B08F: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C6B094: movzx   eax, byte ptr [r12]
 * 0000000140C6B099: and     eax, 7Fh
 * 0000000140C6B09C: cmp     [rsi+918h], r11d
 * 0000000140C6B0A3: jnz     loc_140C6AFC4
 * 0000000140C6B0A9: mov     rcx, r13
 * 0000000140C6B0AC: xor     rcx, rax
 * 0000000140C6B0AF: mov     rax, [rsi+588h]
 * 0000000140C6B0B6: mov     [rax+18h], rcx
 * 0000000140C6B0BA: cmp     [rsi+918h], r11d
 * 0000000140C6B0C1: jnz     loc_140C6AFC4
 * 0000000140C6B0C7: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6B0CC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B0D6: add     rax, rsi
 * 0000000140C6B0D9: mov     [rsi+920h], rax
 * 0000000140C6B0E0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B0EA: add     rax, r13
 * 0000000140C6B0ED: mov     [rsi+928h], rax
 * 0000000140C6B0F4: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6B0F8: mov     [rsi+930h], rax
 * 0000000140C6B0FF: mov     [rsi+938h], r15
 * 0000000140C6B106: mov     r15d, 1
 * 0000000140C6B10C: mov     [rsi+918h], r15d
 * 0000000140C6B113: mov     ecx, [rsi+9D8h]
 * 0000000140C6B119: bt      ecx, 1Dh
 * 0000000140C6B11D: jb      loc_140C6AFCF
 * 0000000140C6B123: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B12D: jz      loc_140C6AFCF
 * 0000000140C6B133: test    r15b, cl
 * 0000000140C6B136: jz      loc_140C6AFCF
 * 0000000140C6B13C: mov     ecx, [rsi+0A74h]
 * 0000000140C6B142: mov     eax, [rsi+804h]
 * 0000000140C6B148: mov     r10, [rsi+838h]
 * 0000000140C6B14F: sub     eax, ecx
 * 0000000140C6B151: mov     r8, [rsi+0A78h]
 * 0000000140C6B158: lea     rdx, [rcx+rsi]
 * 0000000140C6B15C: mov     ecx, eax
 * 0000000140C6B15E: shr     rcx, 3
 * 0000000140C6B162: lea     r9, [rdx+rcx*8]
 * 0000000140C6B166: jmp     short loc_140C6B189
 * 0000000140C6B168: xor     [rdx], r8
 * 0000000140C6B16B: mov     rax, [rdx]
 * 0000000140C6B16E: movzx   ecx, r8b
 * 0000000140C6B172: xor     rax, r10
 * 0000000140C6B175: and     ecx, 3Fh
 * 0000000140C6B178: ror     r8, cl
 * 0000000140C6B17B: add     r8, rax
 * 0000000140C6B17E: xor     r8, 0F05h
 * 0000000140C6B185: add     rdx, 8
 * 0000000140C6B189: cmp     rdx, r9
 * 0000000140C6B18C: jnz     short loc_140C6B168
 * 0000000140C6B18E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6B196: cmp     r8, [rsi+0A80h]
 * 0000000140C6B19D: jz      loc_140C6AFCF
 * 0000000140C6B1A3: mov     ecx, [rsi+804h]
 * 0000000140C6B1A9: mov     rax, [rsi+588h]
 * 0000000140C6B1B0: mov     [rax], rsi
 * 0000000140C6B1B3: mov     [rax+10h], ecx
 * 0000000140C6B1B6: mov     rcx, [rsi+0A80h]
 * 0000000140C6B1BD: cmp     [rsi+918h], r11d
 * 0000000140C6B1C4: jnz     short loc_140C6B1D4
 * 0000000140C6B1C6: mov     rax, [rsi+588h]
 * 0000000140C6B1CD: xor     rcx, r8
 * 0000000140C6B1D0: mov     [rax+18h], rcx
 * 0000000140C6B1D4: xor     edx, edx
 * 0000000140C6B1D6: mov     r9d, 100h
 * 0000000140C6B1DC: mov     rcx, rsi
 * 0000000140C6B1DF: call    sub_140C7903C
 * 0000000140C6B1E4: jmp     loc_140C6AFCF
 * 0000000140C6B1E9: mov     eax, r8d
 * 0000000140C6B1EC: lea     rcx, [rax+rax*2]
 * 0000000140C6B1F0: lea     rcx, [rdx+rcx*8]
 * 0000000140C6B1F4: mov     [rbp+7B0h+var_828], rcx
 * 0000000140C6B1F8: lea     r15, [rcx+8]
 * 0000000140C6B1FC: mov     [rsp+8B0h+var_840], rdi
 * 0000000140C6B201: mov     [rsp+8B0h+var_858], r15
 * 0000000140C6B206: mov     r13, rdi
 * 0000000140C6B209: mov     eax, 1
 * 0000000140C6B20E: cmp     [r15], r12d
 * 0000000140C6B211: jl      loc_140C6B571
 * 0000000140C6B217: mov     eax, [r15-8]
 * 0000000140C6B21B: mov     r14d, [r15-4]
 * 0000000140C6B21F: mov     r12d, eax
 * 0000000140C6B222: sub     r14d, eax
 * 0000000140C6B225: mov     rax, [rsp+8B0h+var_860]
 * 0000000140C6B22A: mov     ecx, r14d
 * 0000000140C6B22D: add     r12, [rax+18h]
 * 0000000140C6B231: add     [rsi+848h], r14d
 * 0000000140C6B238: add     rcx, r12
 * 0000000140C6B23B: mov     r9d, [rsi+834h]
 * 0000000140C6B242: mov     r8, r12
 * 0000000140C6B245: mov     r11, [rsi+838h]
 * 0000000140C6B24C: mov     rax, r12
 * 0000000140C6B24F: mov     [rbp+7B0h+var_820], r12
 * 0000000140C6B253: cmp     r12, rcx
 * 0000000140C6B256: jnb     short loc_140C6B268
 * 0000000140C6B258: mov     edx, 40h ; '@'
 * 0000000140C6B25D: prefetchnta byte ptr [rax]
 * 0000000140C6B260: add     rax, rdx
 * 0000000140C6B263: cmp     rax, rcx
 * 0000000140C6B266: jb      short loc_140C6B25D
 * 0000000140C6B268: mov     r10d, r14d
 * 0000000140C6B26B: mov     rbx, r11
 * 0000000140C6B26E: shr     r10d, 7
 * 0000000140C6B272: test    r10d, r10d
 * 0000000140C6B275: jz      short loc_140C6B2EB
 * 0000000140C6B277: mov     edi, 1
 * 0000000140C6B27C: mov     r13d, 0FFFFFFFFh
 * 0000000140C6B282: mov     r15, 7010008004002001h
 * 0000000140C6B28C: mov     eax, 8
 * 0000000140C6B291: xor     rbx, [r8]
 * 0000000140C6B294: mov     ecx, r9d
 * 0000000140C6B297: rol     rbx, cl
 * 0000000140C6B29A: xor     rbx, [r8+8]
 * 0000000140C6B29E: add     r8, 10h
 * 0000000140C6B2A2: rol     rbx, cl
 * 0000000140C6B2A5: sub     rax, rdi
 * 0000000140C6B2A8: jnz     short loc_140C6B291
 * 0000000140C6B2AA: mov     rcx, r8
 * 0000000140C6B2AD: sub     rcx, r12
 * 0000000140C6B2B0: xor     rcx, r11
 * 0000000140C6B2B3: mov     rax, rcx
 * 0000000140C6B2B6: rol     rax, 11h
 * 0000000140C6B2BA: xor     rcx, rax
 * 0000000140C6B2BD: mov     rax, r15
 * 0000000140C6B2C0: mul     rcx
 * 0000000140C6B2C3: mov     [rbp+7B0h+var_400], rdx
 * 0000000140C6B2CA: xor     rdx, rax
 * 0000000140C6B2CD: xor     r9d, edx
 * 0000000140C6B2D0: and     r9d, 3Fh
 * 0000000140C6B2D4: cmovz   r9d, edi
 * 0000000140C6B2D8: add     r10d, r13d
 * 0000000140C6B2DB: jnz     short loc_140C6B28C
 * 0000000140C6B2DD: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C6B2E2: lea     edi, [r10+2]
 * 0000000140C6B2E6: mov     r13, [rsp+8B0h+var_840]
 * 0000000140C6B2EB: mov     edx, r14d
 * 0000000140C6B2EE: mov     r11d, 1
 * 0000000140C6B2F4: and     edx, 7Fh
 * 0000000140C6B2F7: cmp     edx, 8
 * 0000000140C6B2FA: jb      short loc_140C6B317
 * 0000000140C6B2FC: mov     eax, edx
 * 0000000140C6B2FE: shr     rax, 3
 * 0000000140C6B302: xor     rbx, [r8]
 * 0000000140C6B305: mov     ecx, r9d
 * 0000000140C6B308: rol     rbx, cl
 * 0000000140C6B30B: add     r8, 8
 * 0000000140C6B30F: add     edx, 0FFFFFFF8h
 * 0000000140C6B312: sub     rax, r11
 * 0000000140C6B315: jnz     short loc_140C6B302
 * 0000000140C6B317: xor     r10d, r10d
 * 0000000140C6B31A: test    edx, edx
 * 0000000140C6B31C: jz      short loc_140C6B33A
 * 0000000140C6B31E: mov     edi, 0FFFFFFFFh
 * 0000000140C6B323: movzx   eax, byte ptr [r8]
 * 0000000140C6B327: mov     ecx, r9d
 * 0000000140C6B32A: xor     rbx, rax
 * 0000000140C6B32D: add     r8, r11
 * 0000000140C6B330: rol     rbx, cl
 * 0000000140C6B333: add     edx, edi
 * 0000000140C6B335: jnz     short loc_140C6B323
 * 0000000140C6B337: lea     edi, [rdx+2]
 * 0000000140C6B33A: mov     rax, rbx
 * 0000000140C6B33D: jmp     short loc_140C6B341
 * 0000000140C6B33F: xor     ebx, eax
 * 0000000140C6B341: shr     rax, 1Fh
 * 0000000140C6B345: test    rax, rax
 * 0000000140C6B348: jnz     short loc_140C6B33F
 * 0000000140C6B34A: mov     eax, [r15]
 * 0000000140C6B34D: btr     ebx, 1Fh
 * 0000000140C6B351: btr     eax, 1Fh
 * 0000000140C6B355: cmp     ebx, eax
 * 0000000140C6B357: jz      loc_140C6B579
 * 0000000140C6B35D: mov     ecx, r14d
 * 0000000140C6B360: test    r14d, r14d
 * 0000000140C6B363: jz      loc_140C6B415
 * 0000000140C6B369: mov     eax, [rsi+9DCh]
 * 0000000140C6B36F: mov     edx, 40h ; '@'
 * 0000000140C6B374: test    dl, al
 * 0000000140C6B376: jz      loc_140C6B415
 * 0000000140C6B37C: mov     r15, cr8
 * 0000000140C6B380: mov     r14, r12
 * 0000000140C6B383: lea     r13, [r12-1]
 * 0000000140C6B388: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6B38F: add     r13, rcx
 * 0000000140C6B392: or      r13, 0FFFh
 * 0000000140C6B399: lea     r12, [r14-1]
 * 0000000140C6B39D: mov     cr8, rdi
 * 0000000140C6B3A1: mov     rax, [rsi+468h]
 * 0000000140C6B3A8: xor     edx, edx
 * 0000000140C6B3AA: mov     rcx, r14
 * 0000000140C6B3AD: call    KeGuardDispatchICall
 * 0000000140C6B3B2: cmp     eax, 0C000022Dh
 * 0000000140C6B3B7: jnz     short loc_140C6B3D0
 * 0000000140C6B3B9: mov     eax, 1
 * 0000000140C6B3BE: cmp     r15b, al
 * 0000000140C6B3C1: ja      short loc_140C6B3D7
 * 0000000140C6B3C3: movzx   eax, r15b
 * 0000000140C6B3C7: mov     cr8, rax
 * 0000000140C6B3CB: mov     al, [r14]
 * 0000000140C6B3CE: jmp     short loc_140C6B39D
 * 0000000140C6B3D0: xor     r10d, r10d
 * 0000000140C6B3D3: test    eax, eax
 * 0000000140C6B3D5: js      short loc_140C6B3FF
 * 0000000140C6B3D7: mov     r11d, 1000h
 * 0000000140C6B3DD: add     r14, r11
 * 0000000140C6B3E0: add     r12, r11
 * 0000000140C6B3E3: cmp     r12, r13
 * 0000000140C6B3E6: jnz     short loc_140C6B3A1
 * 0000000140C6B3E8: movzx   eax, r15b
 * 0000000140C6B3EC: mov     cr8, rax
 * 0000000140C6B3F0: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C6B3F5: mov     r13, [rsp+8B0h+var_840]
 * 0000000140C6B3FA: jmp     loc_140C6B57F
 * 0000000140C6B3FF: movzx   eax, r15b
 * 0000000140C6B403: mov     cr8, rax
 * 0000000140C6B407: mov     r12, [rbp+7B0h+var_820]
 * 0000000140C6B40B: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C6B410: mov     r13, [rsp+8B0h+var_840]
 * 0000000140C6B415: mov     eax, [r15]
 * 0000000140C6B418: btr     eax, 1Fh
 * 0000000140C6B41C: cmp     [rsi+918h], r10d
 * 0000000140C6B423: jnz     loc_140C6B579
 * 0000000140C6B429: mov     ecx, ebx
 * 0000000140C6B42B: xor     rcx, rax
 * 0000000140C6B42E: mov     rax, [rsi+588h]
 * 0000000140C6B435: mov     [rax+18h], rcx
 * 0000000140C6B439: cmp     [rsi+918h], r10d
 * 0000000140C6B440: jnz     loc_140C6B579
 * 0000000140C6B446: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C6B44B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B455: add     rax, rsi
 * 0000000140C6B458: mov     r11d, 1
 * 0000000140C6B45E: mov     [rsi+920h], rax
 * 0000000140C6B465: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B46F: add     rax, rcx
 * 0000000140C6B472: mov     [rsi+928h], rax
 * 0000000140C6B479: movsxd  rax, dword ptr [rcx]
 * 0000000140C6B47C: mov     [rsi+930h], rax
 * 0000000140C6B483: mov     [rsi+938h], r12
 * 0000000140C6B48A: mov     [rsi+918h], r11d
 * 0000000140C6B491: mov     ecx, [rsi+9D8h]
 * 0000000140C6B497: bt      ecx, 1Dh
 * 0000000140C6B49B: jb      loc_140C6B579
 * 0000000140C6B4A1: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B4AB: jz      loc_140C6B569
 * 0000000140C6B4B1: test    r11b, cl
 * 0000000140C6B4B4: jz      loc_140C6B579
 * 0000000140C6B4BA: mov     ecx, [rsi+0A74h]
 * 0000000140C6B4C0: mov     eax, [rsi+804h]
 * 0000000140C6B4C6: mov     r10, [rsi+838h]
 * 0000000140C6B4CD: sub     eax, ecx
 * 0000000140C6B4CF: mov     r8, [rsi+0A78h]
 * 0000000140C6B4D6: lea     rdx, [rcx+rsi]
 * 0000000140C6B4DA: mov     ecx, eax
 * 0000000140C6B4DC: shr     rcx, 3
 * 0000000140C6B4E0: lea     r9, [rdx+rcx*8]
 * 0000000140C6B4E4: jmp     short loc_140C6B507
 * 0000000140C6B4E6: xor     [rdx], r8
 * 0000000140C6B4E9: mov     rax, [rdx]
 * 0000000140C6B4EC: movzx   ecx, r8b
 * 0000000140C6B4F0: xor     rax, r10
 * 0000000140C6B4F3: and     ecx, 3Fh
 * 0000000140C6B4F6: ror     r8, cl
 * 0000000140C6B4F9: add     r8, rax
 * 0000000140C6B4FC: xor     r8, 0F05h
 * 0000000140C6B503: add     rdx, 8
 * 0000000140C6B507: cmp     rdx, r9
 * 0000000140C6B50A: jnz     short loc_140C6B4E6
 * 0000000140C6B50C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6B514: xor     r12d, r12d
 * 0000000140C6B517: cmp     r8, [rsi+0A80h]
 * 0000000140C6B51E: jz      short loc_140C6B561
 * 0000000140C6B520: mov     ecx, [rsi+804h]
 * 0000000140C6B526: mov     rax, [rsi+588h]
 * 0000000140C6B52D: mov     [rax], rsi
 * 0000000140C6B530: mov     [rax+10h], ecx
 * 0000000140C6B533: mov     rcx, [rsi+0A80h]
 * 0000000140C6B53A: cmp     [rsi+918h], r12d
 * 0000000140C6B541: jnz     short loc_140C6B551
 * 0000000140C6B543: mov     rax, [rsi+588h]
 * 0000000140C6B54A: xor     rcx, r8
 * 0000000140C6B54D: mov     [rax+18h], rcx
 * 0000000140C6B551: xor     edx, edx
 * 0000000140C6B553: mov     r9d, 100h
 * 0000000140C6B559: mov     rcx, rsi
 * 0000000140C6B55C: call    sub_140C7903C
 * 0000000140C6B561: mov     r11d, 1000h
 * 0000000140C6B567: jmp     short loc_140C6B582
 * 0000000140C6B569: xor     r12d, r12d
 * 0000000140C6B56C: lea     eax, [r12+1]
 * 0000000140C6B571: mov     r11d, 1000h
 * 0000000140C6B577: jmp     short loc_140C6B587
 * 0000000140C6B579: mov     r11d, 1000h
 * 0000000140C6B57F: xor     r12d, r12d
 * 0000000140C6B582: mov     eax, 1
 * 0000000140C6B587: add     r15, 0Ch
 * 0000000140C6B58B: sub     r13, rax
 * 0000000140C6B58E: mov     [rsp+8B0h+var_858], r15
 * 0000000140C6B593: mov     [rsp+8B0h+var_840], r13
 * 0000000140C6B598: jnz     loc_140C6B20E
 * 0000000140C6B59E: mov     rcx, [rbp+7B0h+var_828]
 * 0000000140C6B5A2: mov     r15d, 1
 * 0000000140C6B5A8: add     [rsi+844h], r15d
 * 0000000140C6B5AF: add     rcx, 18h
 * 0000000140C6B5B3: mov     [rbp+7B0h+var_828], rcx
 * 0000000140C6B5B7: cmp     rcx, [rbp+7B0h+var_808]
 * 0000000140C6B5BB: jz      short loc_140C6B5D4
 * 0000000140C6B5BD: mov     eax, [rsi+84Ch]
 * 0000000140C6B5C3: cmp     [rsi+848h], eax
 * 0000000140C6B5C9: jl      loc_140C6B1F8
 * 0000000140C6B5CF: jmp     loc_140C713A3
 * 0000000140C6B5D4: mov     [rsi+844h], r12d
 * 0000000140C6B5DB: jmp     loc_140C713A3
 * 0000000140C6B5E0: cmp     r10d, edx
 * 0000000140C6B5E3: jg      loc_140C6E09A
 * 0000000140C6B5E9: jz      short loc_140C6B635
 * 0000000140C6B5EB: mov     ecx, r10d
 * 0000000140C6B5EE: sub     ecx, 1Fh
 * 0000000140C6B5F1: jz      loc_140C6C6FF
 * 0000000140C6B5F7: sub     ecx, 1
 * 0000000140C6B5FA: jz      loc_140C6C6EF
 * 0000000140C6B600: sub     ecx, 1
 * 0000000140C6B603: jz      loc_140C6C6DF
 * 0000000140C6B609: sub     ecx, edi
 * 0000000140C6B60B: jz      loc_140C6C0FE
 * 0000000140C6B611: sub     ecx, 1
 * 0000000140C6B614: jz      loc_140C6B94C
 * 0000000140C6B61A: sub     ecx, 1
 * 0000000140C6B61D: jz      loc_140C6B85C
 * 0000000140C6B623: sub     ecx, 1
 * 0000000140C6B626: jz      loc_140C6B6FD
 * 0000000140C6B62C: cmp     ecx, 1
 * 0000000140C6B62F: jnz     loc_140C6E0DB
 * 0000000140C6B635: mov     eax, [r13+24h]
 * 0000000140C6B639: add     [rsi+848h], eax
 * 0000000140C6B63F: mov     ebx, [r13+20h]
 * 0000000140C6B643: mov     r10d, [r13+24h]
 * 0000000140C6B647: add     rbx, rsi
 * 0000000140C6B64A: mov     r11d, [rsi+834h]
 * 0000000140C6B651: mov     r9, rbx
 * 0000000140C6B654: mov     r15, [rsi+838h]
 * 0000000140C6B65B: mov     rax, rbx
 * 0000000140C6B65E: lea     rcx, [rbx+r10]
 * 0000000140C6B662: cmp     rbx, rcx
 * 0000000140C6B665: jnb     short loc_140C6B677
 * 0000000140C6B667: mov     edx, 40h ; '@'
 * 0000000140C6B66C: prefetchnta byte ptr [rax]
 * 0000000140C6B66F: add     rax, rdx
 * 0000000140C6B672: cmp     rax, rcx
 * 0000000140C6B675: jb      short loc_140C6B66C
 * 0000000140C6B677: mov     r14d, r10d
 * 0000000140C6B67A: mov     r8, r15
 * 0000000140C6B67D: shr     r14d, 7
 * 0000000140C6B681: test    r14d, r14d
 * 0000000140C6B684: jz      loc_140C71250
 * 0000000140C6B68A: mov     edi, 1
 * 0000000140C6B68F: mov     rsi, 7010008004002001h
 * 0000000140C6B699: mov     eax, 8
 * 0000000140C6B69E: xor     r8, [r9]
 * 0000000140C6B6A1: mov     ecx, r11d
 * 0000000140C6B6A4: rol     r8, cl
 * 0000000140C6B6A7: xor     r8, [r9+8]
 * 0000000140C6B6AB: add     r9, 10h
 * 0000000140C6B6AF: rol     r8, cl
 * 0000000140C6B6B2: sub     rax, rdi
 * 0000000140C6B6B5: jnz     short loc_140C6B69E
 * 0000000140C6B6B7: mov     rcx, r9
 * 0000000140C6B6BA: sub     rcx, rbx
 * 0000000140C6B6BD: xor     rcx, r15
 * 0000000140C6B6C0: mov     rax, rcx
 * 0000000140C6B6C3: rol     rax, 11h
 * 0000000140C6B6C7: xor     rcx, rax
 * 0000000140C6B6CA: mov     rax, rsi
 * 0000000140C6B6CD: mul     rcx
 * 0000000140C6B6D0: mov     [rbp+7B0h+var_398], rdx
 * 0000000140C6B6D7: xor     rdx, rax
 * 0000000140C6B6DA: xor     r11d, edx
 * 0000000140C6B6DD: mov     edx, 0FFFFFFFFh
 * 0000000140C6B6E2: and     r11d, 3Fh
 * 0000000140C6B6E6: cmovz   r11d, edi
 * 0000000140C6B6EA: add     r14d, edx
 * 0000000140C6B6ED: jnz     short loc_140C6B699
 * 0000000140C6B6EF: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6B6F4: lea     edi, [r14+2]
 * 0000000140C6B6F8: jmp     loc_140C71255
 * 0000000140C6B6FD: mov     edx, [r13+2Ch]
 * 0000000140C6B701: lea     rcx, [rbp+7B0h+var_2C8]
 * 0000000140C6B708: mov     rax, [rsi+1B0h]
 * 0000000140C6B70F: call    KeGuardDispatchICall
 * 0000000140C6B714: mov     rax, [rsi+1E0h]
 * 0000000140C6B71B: lea     rdx, [rbp+7B0h+var_2B8]
 * 0000000140C6B722: lea     rcx, [rbp+7B0h+var_2C8]
 * 0000000140C6B729: call    KeGuardDispatchICall
 * 0000000140C6B72E: xor     ecx, ecx
 * 0000000140C6B730: xgetbv
 * 0000000140C6B733: shl     rdx, 20h
 * 0000000140C6B737: lea     rcx, [rbp+7B0h+var_2B8]
 * 0000000140C6B73E: or      rdx, rax
 * 0000000140C6B741: mov     rax, [rsi+1A8h]
 * 0000000140C6B748: mov     rbx, rdx
 * 0000000140C6B74B: call    KeGuardDispatchICall
 * 0000000140C6B750: mov     r8, [r13+18h]
 * 0000000140C6B754: mov     rdx, [r13+20h]
 * 0000000140C6B758: and     r8, rbx
 * 0000000140C6B75B: cmp     r8, rdx
 * 0000000140C6B75E: jz      loc_140C6F354
 * 0000000140C6B764: mov     ecx, [r13+2Ch]
 * 0000000140C6B768: mov     eax, [r13+28h]
 * 0000000140C6B76C: shl     rcx, 20h
 * 0000000140C6B770: or      rcx, rax
 * 0000000140C6B773: cmp     [rsi+918h], r12d
 * 0000000140C6B77A: jnz     loc_140C6F354
 * 0000000140C6B780: mov     rax, [rsi+588h]
 * 0000000140C6B787: xor     rdx, r8
 * 0000000140C6B78A: mov     [rax+18h], rdx
 * 0000000140C6B78E: cmp     [rsi+918h], r12d
 * 0000000140C6B795: jnz     loc_140C6F354
 * 0000000140C6B79B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B7A5: add     rax, rsi
 * 0000000140C6B7A8: mov     [rsi+920h], rax
 * 0000000140C6B7AF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B7B9: add     rax, r13
 * 0000000140C6B7BC: mov     [rsi+928h], rax
 * 0000000140C6B7C3: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6B7C7: mov     [rsi+930h], rax
 * 0000000140C6B7CE: mov     [rsi+938h], rcx
 * 0000000140C6B7D5: mov     [rsi+918h], r15d
 * 0000000140C6B7DC: mov     ecx, [rsi+9D8h]
 * 0000000140C6B7E2: bt      ecx, 1Dh
 * 0000000140C6B7E6: jb      loc_140C6F354
 * 0000000140C6B7EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B7F6: jz      loc_140C6F354
 * 0000000140C6B7FC: test    r15b, cl
 * 0000000140C6B7FF: jz      loc_140C6F354
 * 0000000140C6B805: mov     ecx, [rsi+0A74h]
 * 0000000140C6B80B: mov     eax, [rsi+804h]
 * 0000000140C6B811: mov     r10, [rsi+838h]
 * 0000000140C6B818: sub     eax, ecx
 * 0000000140C6B81A: mov     r8, [rsi+0A78h]
 * 0000000140C6B821: lea     rdx, [rcx+rsi]
 * 0000000140C6B825: mov     ecx, eax
 * 0000000140C6B827: shr     rcx, 3
 * 0000000140C6B82B: lea     r9, [rdx+rcx*8]
 * 0000000140C6B82F: jmp     short loc_140C6B852
 * 0000000140C6B831: xor     [rdx], r8
 * 0000000140C6B834: mov     rax, [rdx]
 * 0000000140C6B837: movzx   ecx, r8b
 * 0000000140C6B83B: xor     rax, r10
 * 0000000140C6B83E: and     ecx, 3Fh
 * 0000000140C6B841: ror     r8, cl
 * 0000000140C6B844: add     r8, rax
 * 0000000140C6B847: xor     r8, 0F05h
 * 0000000140C6B84E: add     rdx, 8
 * 0000000140C6B852: cmp     rdx, r9
 * 0000000140C6B855: jnz     short loc_140C6B831
 * 0000000140C6B857: jmp     loc_140C65A4E
 * 0000000140C6B85C: mov     eax, [rsi+9DCh]
 * 0000000140C6B862: test    al, 4
 * 0000000140C6B864: jnz     loc_140C713A3
 * 0000000140C6B86A: mov     rax, [rsi+430h]
 * 0000000140C6B871: call    KeGuardDispatchICall
 * 0000000140C6B876: test    al, al
 * 0000000140C6B878: jz      loc_140C6F354
 * 0000000140C6B87E: cmp     [rsi+918h], r12d
 * 0000000140C6B885: jnz     loc_140C6F354
 * 0000000140C6B88B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B895: add     rax, rsi
 * 0000000140C6B898: mov     [rsi+920h], rax
 * 0000000140C6B89F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B8A9: add     rax, r13
 * 0000000140C6B8AC: mov     [rsi+928h], rax
 * 0000000140C6B8B3: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6B8B7: mov     [rsi+930h], rax
 * 0000000140C6B8BE: mov     [rsi+938h], r12
 * 0000000140C6B8C5: mov     [rsi+918h], r15d
 * 0000000140C6B8CC: mov     ecx, [rsi+9D8h]
 * 0000000140C6B8D2: bt      ecx, 1Dh
 * 0000000140C6B8D6: jb      loc_140C6F354
 * 0000000140C6B8DC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B8E6: jz      loc_140C6F354
 * 0000000140C6B8EC: test    r15b, cl
 * 0000000140C6B8EF: jz      loc_140C6F354
 * 0000000140C6B8F5: mov     ecx, [rsi+0A74h]
 * 0000000140C6B8FB: mov     eax, [rsi+804h]
 * 0000000140C6B901: mov     r10, [rsi+838h]
 * 0000000140C6B908: sub     eax, ecx
 * 0000000140C6B90A: mov     r8, [rsi+0A78h]
 * 0000000140C6B911: lea     rdx, [rcx+rsi]
 * 0000000140C6B915: mov     ecx, eax
 * 0000000140C6B917: shr     rcx, 3
 * 0000000140C6B91B: lea     r9, [rdx+rcx*8]
 * 0000000140C6B91F: jmp     short loc_140C6B942
 * 0000000140C6B921: xor     [rdx], r8
 * 0000000140C6B924: mov     rax, [rdx]
 * 0000000140C6B927: movzx   ecx, r8b
 * 0000000140C6B92B: xor     rax, r10
 * 0000000140C6B92E: and     ecx, 3Fh
 * 0000000140C6B931: ror     r8, cl
 * 0000000140C6B934: add     r8, rax
 * 0000000140C6B937: xor     r8, 0F05h
 * 0000000140C6B93E: add     rdx, 8
 * 0000000140C6B942: cmp     rdx, r9
 * 0000000140C6B945: jnz     short loc_140C6B921
 * 0000000140C6B947: jmp     loc_140C65A4E
 * 0000000140C6B94C: mov     r14, [r13+8]
 * 0000000140C6B950: mov     r8d, [r13+10h]
 * 0000000140C6B954: mov     r9, r14
 * 0000000140C6B957: add     [rsi+848h], r8d
 * 0000000140C6B95E: mov     rax, r14
 * 0000000140C6B961: mov     r10d, [rsi+834h]
 * 0000000140C6B968: mov     r15, [rsi+838h]
 * 0000000140C6B96F: lea     rcx, [r14+r8]
 * 0000000140C6B973: cmp     r14, rcx
 * 0000000140C6B976: jnb     short loc_140C6B988
 * 0000000140C6B978: mov     edx, 40h ; '@'
 * 0000000140C6B97D: prefetchnta byte ptr [rax]
 * 0000000140C6B980: add     rax, rdx
 * 0000000140C6B983: cmp     rax, rcx
 * 0000000140C6B986: jb      short loc_140C6B97D
 * 0000000140C6B988: mov     r11d, r8d
 * 0000000140C6B98B: mov     rbx, r15
 * 0000000140C6B98E: shr     r11d, 7
 * 0000000140C6B992: mov     edx, 1
 * 0000000140C6B997: test    r11d, r11d
 * 0000000140C6B99A: jz      short loc_140C6BA09
 * 0000000140C6B99C: mov     edi, 0FFFFFFFFh
 * 0000000140C6B9A1: mov     rsi, 7010008004002001h
 * 0000000140C6B9AB: mov     eax, 8
 * 0000000140C6B9B0: xor     rbx, [r9]
 * 0000000140C6B9B3: mov     ecx, r10d
 * 0000000140C6B9B6: rol     rbx, cl
 * 0000000140C6B9B9: xor     rbx, [r9+8]
 * 0000000140C6B9BD: add     r9, 10h
 * 0000000140C6B9C1: rol     rbx, cl
 * 0000000140C6B9C4: sub     rax, rdx
 * 0000000140C6B9C7: jnz     short loc_140C6B9B0
 * 0000000140C6B9C9: mov     rcx, r9
 * 0000000140C6B9CC: sub     rcx, r14
 * 0000000140C6B9CF: xor     rcx, r15
 * 0000000140C6B9D2: mov     rax, rcx
 * 0000000140C6B9D5: rol     rax, 11h
 * 0000000140C6B9D9: xor     rcx, rax
 * 0000000140C6B9DC: mov     rax, rsi
 * 0000000140C6B9DF: mul     rcx
 * 0000000140C6B9E2: mov     [rbp+7B0h+var_3F8], rdx
 * 0000000140C6B9E9: xor     rdx, rax
 * 0000000140C6B9EC: xor     r10d, edx
 * 0000000140C6B9EF: mov     edx, 1
 * 0000000140C6B9F4: and     r10d, 3Fh
 * 0000000140C6B9F8: cmovz   r10d, edx
 * 0000000140C6B9FC: add     r11d, edi
 * 0000000140C6B9FF: jnz     short loc_140C6B9AB
 * 0000000140C6BA01: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6BA06: lea     edi, [rdx+1]
 * 0000000140C6BA09: and     r8d, 7Fh
 * 0000000140C6BA0D: cmp     r8d, 8
 * 0000000140C6BA11: jb      short loc_140C6BA30
 * 0000000140C6BA13: mov     eax, r8d
 * 0000000140C6BA16: shr     rax, 3
 * 0000000140C6BA1A: xor     rbx, [r9]
 * 0000000140C6BA1D: mov     ecx, r10d
 * 0000000140C6BA20: rol     rbx, cl
 * 0000000140C6BA23: add     r9, 8
 * 0000000140C6BA27: add     r8d, 0FFFFFFF8h
 * 0000000140C6BA2B: sub     rax, rdx
 * 0000000140C6BA2E: jnz     short loc_140C6BA1A
 * 0000000140C6BA30: test    r8d, r8d
 * 0000000140C6BA33: jz      short loc_140C6BA53
 * 0000000140C6BA35: mov     edi, 0FFFFFFFFh
 * 0000000140C6BA3A: movzx   eax, byte ptr [r9]
 * 0000000140C6BA3E: mov     ecx, r10d
 * 0000000140C6BA41: xor     rbx, rax
 * 0000000140C6BA44: add     r9, rdx
 * 0000000140C6BA47: rol     rbx, cl
 * 0000000140C6BA4A: add     r8d, edi
 * 0000000140C6BA4D: jnz     short loc_140C6BA3A
 * 0000000140C6BA4F: lea     edi, [r8+2]
 * 0000000140C6BA53: mov     rax, rbx
 * 0000000140C6BA56: jmp     short loc_140C6BA5A
 * 0000000140C6BA58: xor     ebx, eax
 * 0000000140C6BA5A: shr     rax, 1Fh
 * 0000000140C6BA5E: test    rax, rax
 * 0000000140C6BA61: jnz     short loc_140C6BA58
 * 0000000140C6BA63: btr     ebx, 1Fh
 * 0000000140C6BA67: cmp     ebx, [r13+14h]
 * 0000000140C6BA6B: jz      loc_140C6BC7A
 * 0000000140C6BA71: xor     r11d, r11d
 * 0000000140C6BA74: cmp     [r13+0], r11d
 * 0000000140C6BA78: jnz     short loc_140C6BA82
 * 0000000140C6BA7A: cmp     [r13+18h], r11d
 * 0000000140C6BA7E: cmovnz  r12d, edx
 * 0000000140C6BA82: mov     ecx, [r13+10h]
 * 0000000140C6BA86: mov     rdx, [r13+8]
 * 0000000140C6BA8A: test    rcx, rcx
 * 0000000140C6BA8D: jz      loc_140C6BB39
 * 0000000140C6BA93: mov     eax, [rsi+9DCh]
 * 0000000140C6BA99: mov     r8d, 40h ; '@'
 * 0000000140C6BA9F: test    r8b, al
 * 0000000140C6BAA2: jz      loc_140C6BB39
 * 0000000140C6BAA8: mov     r15, cr8
 * 0000000140C6BAAC: mov     r14, rdx
 * 0000000140C6BAAF: lea     rax, [rcx-1]
 * 0000000140C6BAB3: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6BABA: add     rax, rdx
 * 0000000140C6BABD: or      rax, 0FFFh
 * 0000000140C6BAC3: mov     [rbp+7B0h+var_820], rax
 * 0000000140C6BAC7: lea     r13, [r14-1]
 * 0000000140C6BACB: mov     cr8, rdi
 * 0000000140C6BACF: mov     rax, [rsi+468h]
 * 0000000140C6BAD6: xor     edx, edx
 * 0000000140C6BAD8: mov     rcx, r14
 * 0000000140C6BADB: call    KeGuardDispatchICall
 * 0000000140C6BAE0: xor     r11d, r11d
 * 0000000140C6BAE3: cmp     eax, 0C000022Dh
 * 0000000140C6BAE8: jnz     short loc_140C6BB05
 * 0000000140C6BAEA: test    r12d, r12d
 * 0000000140C6BAED: jnz     short loc_140C6BB2C
 * 0000000140C6BAEF: lea     eax, [r11+1]
 * 0000000140C6BAF3: cmp     r15b, al
 * 0000000140C6BAF6: ja      short loc_140C6BB09
 * 0000000140C6BAF8: movzx   eax, r15b
 * 0000000140C6BAFC: mov     cr8, rax
 * 0000000140C6BB00: mov     al, [r14]
 * 0000000140C6BB03: jmp     short loc_140C6BACB
 * 0000000140C6BB05: test    eax, eax
 * 0000000140C6BB07: js      short loc_140C6BB2C
 * 0000000140C6BB09: mov     eax, 1000h
 * 0000000140C6BB0E: add     r14, rax
 * 0000000140C6BB11: add     r13, rax
 * 0000000140C6BB14: cmp     r13, [rbp+7B0h+var_820]
 * 0000000140C6BB18: jnz     short loc_140C6BACF
 * 0000000140C6BB1A: movzx   eax, r15b
 * 0000000140C6BB1E: mov     cr8, rax
 * 0000000140C6BB22: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6BB27: jmp     loc_140C6BC7A
 * 0000000140C6BB2C: movzx   eax, r15b
 * 0000000140C6BB30: mov     cr8, rax
 * 0000000140C6BB34: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6BB39: mov     eax, [r13+14h]
 * 0000000140C6BB3D: cmp     [rsi+918h], r11d
 * 0000000140C6BB44: jnz     short loc_140C6BB58
 * 0000000140C6BB46: mov     ecx, eax
 * 0000000140C6BB48: mov     eax, ebx
 * 0000000140C6BB4A: xor     rcx, rax
 * 0000000140C6BB4D: mov     rax, [rsi+588h]
 * 0000000140C6BB54: mov     [rax+18h], rcx
 * 0000000140C6BB58: mov     rcx, [r13+8]
 * 0000000140C6BB5C: cmp     [rsi+918h], r11d
 * 0000000140C6BB63: jnz     loc_140C6BC7A
 * 0000000140C6BB69: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6BB73: mov     edx, 1
 * 0000000140C6BB78: add     rax, rsi
 * 0000000140C6BB7B: mov     [rsi+920h], rax
 * 0000000140C6BB82: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6BB8C: add     rax, r13
 * 0000000140C6BB8F: mov     [rsi+928h], rax
 * 0000000140C6BB96: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6BB9A: mov     [rsi+930h], rax
 * 0000000140C6BBA1: mov     [rsi+938h], rcx
 * 0000000140C6BBA8: mov     [rsi+918h], edx
 * 0000000140C6BBAE: mov     ecx, [rsi+9D8h]
 * 0000000140C6BBB4: bt      ecx, 1Dh
 * 0000000140C6BBB8: jb      loc_140C6BC7A
 * 0000000140C6BBBE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6BBC8: jz      loc_140C6BC7A
 * 0000000140C6BBCE: test    dl, cl
 * 0000000140C6BBD0: jz      loc_140C6BC7A
 * 0000000140C6BBD6: mov     ecx, [rsi+0A74h]
 * 0000000140C6BBDC: mov     eax, [rsi+804h]
 * 0000000140C6BBE2: mov     r10, [rsi+838h]
 * 0000000140C6BBE9: sub     eax, ecx
 * 0000000140C6BBEB: mov     r8, [rsi+0A78h]
 * 0000000140C6BBF2: lea     rdx, [rcx+rsi]
 * 0000000140C6BBF6: mov     ecx, eax
 * 0000000140C6BBF8: shr     rcx, 3
 * 0000000140C6BBFC: lea     r9, [rdx+rcx*8]
 * 0000000140C6BC00: jmp     short loc_140C6BC23
 * 0000000140C6BC02: xor     [rdx], r8
 * 0000000140C6BC05: mov     rax, [rdx]
 * 0000000140C6BC08: movzx   ecx, r8b
 * 0000000140C6BC0C: xor     rax, r10
 * 0000000140C6BC0F: and     ecx, 3Fh
 * 0000000140C6BC12: ror     r8, cl
 * 0000000140C6BC15: add     r8, rax
 * 0000000140C6BC18: xor     r8, 0F05h
 * 0000000140C6BC1F: add     rdx, 8
 * 0000000140C6BC23: cmp     rdx, r9
 * 0000000140C6BC26: jnz     short loc_140C6BC02
 * 0000000140C6BC28: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6BC30: cmp     r8, [rsi+0A80h]
 * 0000000140C6BC37: jz      short loc_140C6BC7A
 * 0000000140C6BC39: mov     ecx, [rsi+804h]
 * 0000000140C6BC3F: mov     rax, [rsi+588h]
 * 0000000140C6BC46: mov     [rax], rsi
 * 0000000140C6BC49: mov     [rax+10h], ecx
 * 0000000140C6BC4C: mov     rcx, [rsi+0A80h]
 * 0000000140C6BC53: cmp     [rsi+918h], r11d
 * 0000000140C6BC5A: jnz     short loc_140C6BC6A
 * 0000000140C6BC5C: mov     rax, [rsi+588h]
 * 0000000140C6BC63: xor     rcx, r8
 * 0000000140C6BC66: mov     [rax+18h], rcx
 * 0000000140C6BC6A: xor     edx, edx
 * 0000000140C6BC6C: mov     r9d, 100h
 * 0000000140C6BC72: mov     rcx, rsi
 * 0000000140C6BC75: call    sub_140C7903C
 * 0000000140C6BC7A: mov     rcx, [rsi+538h]
 * 0000000140C6BC81: mov     r14, cr8
 * 0000000140C6BC85: mov     eax, 0Fh
 * 0000000140C6BC8A: mov     cr8, rax
 * 0000000140C6BC8E: mov     rax, [rsi+160h]
 * 0000000140C6BC95: call    KeGuardDispatchICall
 * 0000000140C6BC9A: mov     rax, [rsi+620h]
 * 0000000140C6BCA1: mov     rcx, [rax]
 * 0000000140C6BCA4: mov     eax, [rcx]
 * 0000000140C6BCA6: lea     rbx, [rcx+10h]
 * 0000000140C6BCAA: mov     r15b, [rcx+0Ch]
 * 0000000140C6BCAE: lea     rcx, [rax+rax*2]
 * 0000000140C6BCB2: lea     r12, [rbx+rcx*8]
 * 0000000140C6BCB6: mov     edx, 18h
 * 0000000140C6BCBB: lea     r8, [r13+18h]
 * 0000000140C6BCBF: mov     r9, rbx
 * 0000000140C6BCC2: mov     rcx, [r9]
 * 0000000140C6BCC5: add     r9, 8
 * 0000000140C6BCC9: mov     rax, [r8]
 * 0000000140C6BCCC: add     r8, 8
 * 0000000140C6BCD0: cmp     rcx, rax
 * 0000000140C6BCD3: jnz     short loc_140C6BD02
 * 0000000140C6BCD5: add     edx, 0FFFFFFF8h
 * 0000000140C6BCD8: cmp     edx, 8
 * 0000000140C6BCDB: jnb     short loc_140C6BCC2
 * 0000000140C6BCDD: test    edx, edx
 * 0000000140C6BCDF: jz      short loc_140C6BD0B
 * 0000000140C6BCE1: mov     r11d, 1
 * 0000000140C6BCE7: mov     cl, [r9]
 * 0000000140C6BCEA: add     r9, r11
 * 0000000140C6BCED: mov     al, [r8]
 * 0000000140C6BCF0: add     r8, r11
 * 0000000140C6BCF3: cmp     cl, al
 * 0000000140C6BCF5: jnz     short loc_140C6BD02
 * 0000000140C6BCF7: mov     eax, 0FFFFFFFFh
 * 0000000140C6BCFC: add     edx, eax
 * 0000000140C6BCFE: jnz     short loc_140C6BCE7
 * 0000000140C6BD00: jmp     short loc_140C6BD0B
 * 0000000140C6BD02: add     rbx, 18h
 * 0000000140C6BD06: cmp     rbx, r12
 * 0000000140C6BD09: jb      short loc_140C6BCB6
 * 0000000140C6BD0B: mov     rcx, [rsi+538h]
 * 0000000140C6BD12: mov     rax, [rsi+1A0h]
 * 0000000140C6BD19: call    KeGuardDispatchICall
 * 0000000140C6BD1E: movzx   eax, r14b
 * 0000000140C6BD22: mov     cr8, rax
 * 0000000140C6BD26: xor     r11d, r11d
 * 0000000140C6BD29: lea     edi, [r11+2]
 * 0000000140C6BD2D: lea     r14d, [r11+1]
 * 0000000140C6BD31: test    r15b, r15b
 * 0000000140C6BD34: jz      loc_140C6BE6A
 * 0000000140C6BD3A: mov     ecx, [rsi+9DCh]
 * 0000000140C6BD40: lea     eax, [rdi+0Eh]
 * 0000000140C6BD43: test    al, cl
 * 0000000140C6BD45: jz      loc_140C6BE60
 * 0000000140C6BD4B: cmp     [rsi+918h], r11d
 * 0000000140C6BD52: jnz     loc_140C6BE60
 * 0000000140C6BD58: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6BD62: add     rax, rsi
 * 0000000140C6BD65: mov     [rsi+920h], rax
 * 0000000140C6BD6C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6BD76: add     rax, r13
 * 0000000140C6BD79: mov     [rsi+928h], rax
 * 0000000140C6BD80: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6BD84: mov     [rsi+930h], rax
 * 0000000140C6BD8B: mov     [rsi+938h], r14
 * 0000000140C6BD92: mov     [rsi+918h], r14d
 * 0000000140C6BD99: mov     eax, [rsi+9D8h]
 * 0000000140C6BD9F: bt      eax, 1Dh
 * 0000000140C6BDA3: jb      loc_140C6BE60
 * 0000000140C6BDA9: bt      ecx, 15h
 * 0000000140C6BDAD: jnb     loc_140C6BE60
 * 0000000140C6BDB3: test    r14b, al
 * 0000000140C6BDB6: jz      loc_140C6BE60
 * 0000000140C6BDBC: mov     ecx, [rsi+0A74h]
 * 0000000140C6BDC2: mov     eax, [rsi+804h]
 * 0000000140C6BDC8: mov     r10, [rsi+838h]
 * 0000000140C6BDCF: sub     eax, ecx
 * 0000000140C6BDD1: mov     r8, [rsi+0A78h]
 * 0000000140C6BDD8: lea     rdx, [rcx+rsi]
 * 0000000140C6BDDC: mov     ecx, eax
 * 0000000140C6BDDE: shr     rcx, 3
 * 0000000140C6BDE2: lea     r9, [rdx+rcx*8]
 * 0000000140C6BDE6: jmp     short loc_140C6BE09
 * 0000000140C6BDE8: xor     [rdx], r8
 * 0000000140C6BDEB: mov     rax, [rdx]
 * 0000000140C6BDEE: movzx   ecx, r8b
 * 0000000140C6BDF2: xor     rax, r10
 * 0000000140C6BDF5: and     ecx, 3Fh
 * 0000000140C6BDF8: ror     r8, cl
 * 0000000140C6BDFB: add     r8, rax
 * 0000000140C6BDFE: xor     r8, 0F05h
 * 0000000140C6BE05: add     rdx, 8
 * 0000000140C6BE09: cmp     rdx, r9
 * 0000000140C6BE0C: jnz     short loc_140C6BDE8
 * 0000000140C6BE0E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6BE16: cmp     r8, [rsi+0A80h]
 * 0000000140C6BE1D: jz      short loc_140C6BE60
 * 0000000140C6BE1F: mov     ecx, [rsi+804h]
 * 0000000140C6BE25: mov     rax, [rsi+588h]
 * 0000000140C6BE2C: mov     [rax], rsi
 * 0000000140C6BE2F: mov     [rax+10h], ecx
 * 0000000140C6BE32: mov     rcx, [rsi+0A80h]
 * 0000000140C6BE39: cmp     [rsi+918h], r11d
 * 0000000140C6BE40: jnz     short loc_140C6BE50
 * 0000000140C6BE42: mov     rax, [rsi+588h]
 * 0000000140C6BE49: xor     rcx, r8
 * 0000000140C6BE4C: mov     [rax+18h], rcx
 * 0000000140C6BE50: xor     edx, edx
 * 0000000140C6BE52: mov     r9d, 100h
 * 0000000140C6BE58: mov     rcx, rsi
 * 0000000140C6BE5B: call    sub_140C7903C
 * 0000000140C6BE60: cmp     [r13+18h], r14
 * 0000000140C6BE64: jz      loc_140C6BF93
 * 0000000140C6BE6A: cmp     rbx, r12
 * 0000000140C6BE6D: jnz     loc_140C6BF93
 * 0000000140C6BE73: xor     r12d, r12d
 * 0000000140C6BE76: cmp     [rsi+918h], r12d
 * 0000000140C6BE7D: jnz     loc_140C6BF96
 * 0000000140C6BE83: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6BE8D: add     rax, rsi
 * 0000000140C6BE90: mov     [rsi+920h], rax
 * 0000000140C6BE97: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6BEA1: add     rax, r13
 * 0000000140C6BEA4: mov     [rsi+928h], rax
 * 0000000140C6BEAB: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6BEAF: mov     [rsi+930h], rax
 * 0000000140C6BEB6: mov     [rsi+938h], rbx
 * 0000000140C6BEBD: mov     [rsi+918h], r14d
 * 0000000140C6BEC4: mov     ecx, [rsi+9D8h]
 * 0000000140C6BECA: bt      ecx, 1Dh
 * 0000000140C6BECE: jb      loc_140C6BF96
 * 0000000140C6BED4: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6BEDE: jz      loc_140C6BF96
 * 0000000140C6BEE4: test    r14b, cl
 * 0000000140C6BEE7: jz      loc_140C6BF96
 * 0000000140C6BEED: mov     ecx, [rsi+0A74h]
 * 0000000140C6BEF3: mov     eax, [rsi+804h]
 * 0000000140C6BEF9: mov     r10, [rsi+838h]
 * 0000000140C6BF00: sub     eax, ecx
 * 0000000140C6BF02: mov     r8, [rsi+0A78h]
 * 0000000140C6BF09: lea     rdx, [rcx+rsi]
 * 0000000140C6BF0D: mov     ecx, eax
 * 0000000140C6BF0F: shr     rcx, 3
 * 0000000140C6BF13: lea     r9, [rdx+rcx*8]
 * 0000000140C6BF17: jmp     short loc_140C6BF3A
 * 0000000140C6BF19: xor     [rdx], r8
 * 0000000140C6BF1C: mov     rax, [rdx]
 * 0000000140C6BF1F: movzx   ecx, r8b
 * 0000000140C6BF23: xor     rax, r10
 * 0000000140C6BF26: and     ecx, 3Fh
 * 0000000140C6BF29: ror     r8, cl
 * 0000000140C6BF2C: add     r8, rax
 * 0000000140C6BF2F: xor     r8, 0F05h
 * 0000000140C6BF36: add     rdx, 8
 * 0000000140C6BF3A: cmp     rdx, r9
 * 0000000140C6BF3D: jnz     short loc_140C6BF19
 * 0000000140C6BF3F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6BF47: cmp     r8, [rsi+0A80h]
 * 0000000140C6BF4E: jz      short loc_140C6BF96
 * 0000000140C6BF50: mov     ecx, [rsi+804h]
 * 0000000140C6BF56: mov     rax, [rsi+588h]
 * 0000000140C6BF5D: mov     [rax], rsi
 * 0000000140C6BF60: mov     [rax+10h], ecx
 * 0000000140C6BF63: mov     rcx, [rsi+0A80h]
 * 0000000140C6BF6A: cmp     [rsi+918h], r12d
 * 0000000140C6BF71: jnz     short loc_140C6BF81
 * 0000000140C6BF73: mov     rax, [rsi+588h]
 * 0000000140C6BF7A: xor     rcx, r8
 * 0000000140C6BF7D: mov     [rax+18h], rcx
 * 0000000140C6BF81: xor     edx, edx
 * 0000000140C6BF83: mov     r9d, 100h
 * 0000000140C6BF89: mov     rcx, rsi
 * 0000000140C6BF8C: call    sub_140C7903C
 * 0000000140C6BF91: jmp     short loc_140C6BF96
 * 0000000140C6BF93: xor     r12d, r12d
 * 0000000140C6BF96: mov     rcx, [rsi+538h]
 * 0000000140C6BF9D: mov     r15, cr8
 * 0000000140C6BFA1: mov     eax, 0Fh
 * 0000000140C6BFA6: mov     cr8, rax
 * 0000000140C6BFAA: mov     rax, [rsi+160h]
 * 0000000140C6BFB1: call    KeGuardDispatchICall
 * 0000000140C6BFB6: mov     rax, [rsi+620h]
 * 0000000140C6BFBD: mov     rdx, r12
 * 0000000140C6BFC0: mov     rcx, [rax]
 * 0000000140C6BFC3: mov     eax, [rcx]
 * 0000000140C6BFC5: lea     rbx, [rcx+10h]
 * 0000000140C6BFC9: lea     rcx, [rax+rax*2]
 * 0000000140C6BFCD: lea     r14, [rbx+rcx*8]
 * 0000000140C6BFD1: jmp     short loc_140C6BFFD
 * 0000000140C6BFD3: mov     rcx, [rbx+8]
 * 0000000140C6BFD7: cmp     rcx, rdx
 * 0000000140C6BFDA: jb      short loc_140C6C006
 * 0000000140C6BFDC: mov     rax, rcx
 * 0000000140C6BFDF: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140C6BFE5: cmp     rax, rcx
 * 0000000140C6BFE8: jnz     short loc_140C6C006
 * 0000000140C6BFEA: mov     eax, [rbx+10h]
 * 0000000140C6BFED: add     rax, rcx
 * 0000000140C6BFF0: cmp     rax, rcx
 * 0000000140C6BFF3: jbe     short loc_140C6C006
 * 0000000140C6BFF5: cmp     rax, rdx
 * 0000000140C6BFF8: jz      short loc_140C6C006
 * 0000000140C6BFFA: mov     rdx, rax
 * 0000000140C6BFFD: add     rbx, 18h
 * 0000000140C6C001: cmp     rbx, r14
 * 0000000140C6C004: jb      short loc_140C6BFD3
 * 0000000140C6C006: mov     rcx, [rsi+538h]
 * 0000000140C6C00D: mov     rax, [rsi+1A0h]
 * 0000000140C6C014: call    KeGuardDispatchICall
 * 0000000140C6C019: movzx   eax, r15b
 * 0000000140C6C01D: mov     cr8, rax
 * 0000000140C6C021: cmp     rbx, r14
 * 0000000140C6C024: jz      loc_140C710FB
 * 0000000140C6C02A: mov     r15d, 1
 * 0000000140C6C030: cmp     [rsi+918h], r12d
 * 0000000140C6C037: jnz     loc_140C6F354
 * 0000000140C6C03D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6C047: add     rax, rsi
 * 0000000140C6C04A: mov     [rsi+920h], rax
 * 0000000140C6C051: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6C05B: add     rax, r13
 * 0000000140C6C05E: mov     [rsi+928h], rax
 * 0000000140C6C065: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6C069: mov     [rsi+930h], rax
 * 0000000140C6C070: mov     [rsi+938h], rbx
 * 0000000140C6C077: mov     [rsi+918h], r15d
 * 0000000140C6C07E: mov     ecx, [rsi+9D8h]
 * 0000000140C6C084: bt      ecx, 1Dh
 * 0000000140C6C088: jb      loc_140C6F354
 * 0000000140C6C08E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6C098: jz      loc_140C6F354
 * 0000000140C6C09E: test    r15b, cl
 * 0000000140C6C0A1: jz      loc_140C6F354
 * 0000000140C6C0A7: mov     ecx, [rsi+0A74h]
 * 0000000140C6C0AD: mov     eax, [rsi+804h]
 * 0000000140C6C0B3: mov     r10, [rsi+838h]
 * 0000000140C6C0BA: sub     eax, ecx
 * 0000000140C6C0BC: mov     r8, [rsi+0A78h]
 * 0000000140C6C0C3: lea     rdx, [rcx+rsi]
 * 0000000140C6C0C7: mov     ecx, eax
 * 0000000140C6C0C9: shr     rcx, 3
 * 0000000140C6C0CD: lea     r9, [rdx+rcx*8]
 * 0000000140C6C0D1: jmp     short loc_140C6C0F4
 * 0000000140C6C0D3: xor     [rdx], r8
 * 0000000140C6C0D6: mov     rax, [rdx]
 * 0000000140C6C0D9: movzx   ecx, r8b
 * 0000000140C6C0DD: xor     rax, r10
 * 0000000140C6C0E0: and     ecx, 3Fh
 * 0000000140C6C0E3: ror     r8, cl
 * 0000000140C6C0E6: add     r8, rax
 * 0000000140C6C0E9: xor     r8, 0F05h
 * 0000000140C6C0F0: add     rdx, 8
 * 0000000140C6C0F4: cmp     rdx, r9
 * 0000000140C6C0F7: jnz     short loc_140C6C0D3
 * 0000000140C6C0F9: jmp     loc_140C65A4E
 * 0000000140C6C0FE: mov     r14, [r13+8]
 * 0000000140C6C102: mov     r8d, [r13+10h]
 * 0000000140C6C106: mov     r9, r14
 * 0000000140C6C109: add     [rsi+848h], r8d
 * 0000000140C6C110: mov     rax, r14
 * 0000000140C6C113: mov     r10d, [rsi+834h]
 * 0000000140C6C11A: mov     r15, [rsi+838h]
 * 0000000140C6C121: lea     rcx, [r14+r8]
 * 0000000140C6C125: cmp     r14, rcx
 * 0000000140C6C128: jnb     short loc_140C6C13A
 * 0000000140C6C12A: mov     edx, 40h ; '@'
 * 0000000140C6C12F: prefetchnta byte ptr [rax]
 * 0000000140C6C132: add     rax, rdx
 * 0000000140C6C135: cmp     rax, rcx
 * 0000000140C6C138: jb      short loc_140C6C12F
 * 0000000140C6C13A: mov     r11d, r8d
 * 0000000140C6C13D: mov     rbx, r15
 * 0000000140C6C140: shr     r11d, 7
 * 0000000140C6C144: mov     edx, 1
 * 0000000140C6C149: test    r11d, r11d
 * 0000000140C6C14C: jz      short loc_140C6C1BB
 * 0000000140C6C14E: mov     edi, 0FFFFFFFFh
 * 0000000140C6C153: mov     rsi, 7010008004002001h
 * 0000000140C6C15D: mov     eax, 8
 * 0000000140C6C162: xor     rbx, [r9]
 * 0000000140C6C165: mov     ecx, r10d
 * 0000000140C6C168: rol     rbx, cl
 * 0000000140C6C16B: xor     rbx, [r9+8]
 * 0000000140C6C16F: add     r9, 10h
 * 0000000140C6C173: rol     rbx, cl
 * 0000000140C6C176: sub     rax, rdx
 * 0000000140C6C179: jnz     short loc_140C6C162
 * 0000000140C6C17B: mov     rcx, r9
 * 0000000140C6C17E: sub     rcx, r14
 * 0000000140C6C181: xor     rcx, r15
 * 0000000140C6C184: mov     rax, rcx
 * 0000000140C6C187: rol     rax, 11h
 * 0000000140C6C18B: xor     rcx, rax
 * 0000000140C6C18E: mov     rax, rsi
 * 0000000140C6C191: mul     rcx
 * 0000000140C6C194: mov     [rbp+7B0h+var_3F0], rdx
 * 0000000140C6C19B: xor     rdx, rax
 * 0000000140C6C19E: xor     r10d, edx
 * 0000000140C6C1A1: mov     edx, 1
 * 0000000140C6C1A6: and     r10d, 3Fh
 * 0000000140C6C1AA: cmovz   r10d, edx
 * 0000000140C6C1AE: add     r11d, edi
 * 0000000140C6C1B1: jnz     short loc_140C6C15D
 * 0000000140C6C1B3: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6C1B8: lea     edi, [rdx+1]
 * 0000000140C6C1BB: and     r8d, 7Fh
 * 0000000140C6C1BF: cmp     r8d, 8
 * 0000000140C6C1C3: jb      short loc_140C6C1E2
 * 0000000140C6C1C5: mov     eax, r8d
 * 0000000140C6C1C8: shr     rax, 3
 * 0000000140C6C1CC: xor     rbx, [r9]
 * 0000000140C6C1CF: mov     ecx, r10d
 * 0000000140C6C1D2: rol     rbx, cl
 * 0000000140C6C1D5: add     r9, 8
 * 0000000140C6C1D9: add     r8d, 0FFFFFFF8h
 * 0000000140C6C1DD: sub     rax, rdx
 * 0000000140C6C1E0: jnz     short loc_140C6C1CC
 * 0000000140C6C1E2: test    r8d, r8d
 * 0000000140C6C1E5: jz      short loc_140C6C205
 * 0000000140C6C1E7: mov     edi, 0FFFFFFFFh
 * 0000000140C6C1EC: movzx   eax, byte ptr [r9]
 * 0000000140C6C1F0: mov     ecx, r10d
 * 0000000140C6C1F3: xor     rbx, rax
 * 0000000140C6C1F6: add     r9, rdx
 * 0000000140C6C1F9: rol     rbx, cl
 * 0000000140C6C1FC: add     r8d, edi
 * 0000000140C6C1FF: jnz     short loc_140C6C1EC
 * 0000000140C6C201: lea     edi, [r8+2]
 * 0000000140C6C205: mov     rax, rbx
 * 0000000140C6C208: jmp     short loc_140C6C20C
 * 0000000140C6C20A: xor     ebx, eax
 * 0000000140C6C20C: shr     rax, 1Fh
 * 0000000140C6C210: test    rax, rax
 * 0000000140C6C213: jnz     short loc_140C6C20A
 * 0000000140C6C215: btr     ebx, 1Fh
 * 0000000140C6C219: cmp     ebx, [r13+14h]
 * 0000000140C6C21D: jz      loc_140C6C44A
 * 0000000140C6C223: cmp     [r13+0], eax
 * 0000000140C6C227: jnz     short loc_140C6C231
 * 0000000140C6C229: cmp     [r13+18h], eax
 * 0000000140C6C22D: cmovnz  r12d, edx
 * 0000000140C6C231: mov     ecx, [r13+10h]
 * 0000000140C6C235: mov     rdx, [r13+8]
 * 0000000140C6C239: test    rcx, rcx
 * 0000000140C6C23C: jz      loc_140C6C2F9
 * 0000000140C6C242: mov     eax, [rsi+9DCh]
 * 0000000140C6C248: mov     r8d, 40h ; '@'
 * 0000000140C6C24E: test    r8b, al
 * 0000000140C6C251: jz      loc_140C6C2F9
 * 0000000140C6C257: mov     r15, cr8
 * 0000000140C6C25B: mov     r14, rdx
 * 0000000140C6C25E: lea     rax, [rcx-1]
 * 0000000140C6C262: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6C269: add     rax, rdx
 * 0000000140C6C26C: or      rax, 0FFFh
 * 0000000140C6C272: mov     [rbp+7B0h+var_820], rax
 * 0000000140C6C276: lea     r13, [r14-1]
 * 0000000140C6C27A: mov     cr8, rdi
 * 0000000140C6C27E: mov     rax, [rsi+468h]
 * 0000000140C6C285: xor     edx, edx
 * 0000000140C6C287: mov     rcx, r14
 * 0000000140C6C28A: call    KeGuardDispatchICall
 * 0000000140C6C28F: cmp     eax, 0C000022Dh
 * 0000000140C6C294: jnz     short loc_140C6C2B2
 * 0000000140C6C296: test    r12d, r12d
 * 0000000140C6C299: jnz     short loc_140C6C2EC
 * 0000000140C6C29B: lea     eax, [r12+1]
 * 0000000140C6C2A0: cmp     r15b, al
 * 0000000140C6C2A3: ja      short loc_140C6C2B6
 * 0000000140C6C2A5: movzx   eax, r15b
 * 0000000140C6C2A9: mov     cr8, rax
 * 0000000140C6C2AD: mov     al, [r14]
 * 0000000140C6C2B0: jmp     short loc_140C6C27A
 * 0000000140C6C2B2: test    eax, eax
 * 0000000140C6C2B4: js      short loc_140C6C2EC
 * 0000000140C6C2B6: mov     r11d, 1000h
 * 0000000140C6C2BC: add     r14, r11
 * 0000000140C6C2BF: add     r13, r11
 * 0000000140C6C2C2: cmp     r13, [rbp+7B0h+var_820]
 * 0000000140C6C2C6: jnz     short loc_140C6C27E
 * 0000000140C6C2C8: movzx   eax, r15b
 * 0000000140C6C2CC: mov     cr8, rax
 * 0000000140C6C2D0: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6C2D5: xor     r12d, r12d
 * 0000000140C6C2D8: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C6C2E2: lea     r15d, [r12+1]
 * 0000000140C6C2E7: jmp     loc_140C6C462
 * 0000000140C6C2EC: movzx   eax, r15b
 * 0000000140C6C2F0: mov     cr8, rax
 * 0000000140C6C2F4: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6C2F9: mov     eax, [r13+14h]
 * 0000000140C6C2FD: xor     r12d, r12d
 * 0000000140C6C300: cmp     [rsi+918h], r12d
 * 0000000140C6C307: jnz     short loc_140C6C319
 * 0000000140C6C309: mov     ecx, ebx
 * 0000000140C6C30B: xor     rcx, rax
 * 0000000140C6C30E: mov     rax, [rsi+588h]
 * 0000000140C6C315: mov     [rax+18h], rcx
 * 0000000140C6C319: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C6C323: mov     rcx, [r13+8]
 * 0000000140C6C327: mov     r8, 0B3B74BDEE4453415h
 * 0000000140C6C331: mov     r15d, 1
 * 0000000140C6C337: cmp     [rsi+918h], r12d
 * 0000000140C6C33E: jnz     loc_140C6C442
 * 0000000140C6C344: lea     rax, [rsi+r14]
 * 0000000140C6C348: mov     [rsi+920h], rax
 * 0000000140C6C34F: lea     rax, [r8+r13]
 * 0000000140C6C353: mov     [rsi+928h], rax
 * 0000000140C6C35A: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6C35E: mov     [rsi+930h], rax
 * 0000000140C6C365: mov     [rsi+938h], rcx
 * 0000000140C6C36C: mov     [rsi+918h], r15d
 * 0000000140C6C373: mov     ecx, [rsi+9D8h]
 * 0000000140C6C379: bt      ecx, 1Dh
 * 0000000140C6C37D: jb      loc_140C6C442
 * 0000000140C6C383: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6C38D: jz      loc_140C6C442
 * 0000000140C6C393: test    r15b, cl
 * 0000000140C6C396: jz      loc_140C6C442
 * 0000000140C6C39C: mov     ecx, [rsi+0A74h]
 * 0000000140C6C3A2: mov     eax, [rsi+804h]
 * 0000000140C6C3A8: mov     r10, [rsi+838h]
 * 0000000140C6C3AF: sub     eax, ecx
 * 0000000140C6C3B1: mov     r8, [rsi+0A78h]
 * 0000000140C6C3B8: lea     rdx, [rcx+rsi]
 * 0000000140C6C3BC: mov     ecx, eax
 * 0000000140C6C3BE: shr     rcx, 3
 * 0000000140C6C3C2: lea     r9, [rdx+rcx*8]
 * 0000000140C6C3C6: jmp     short loc_140C6C3E9
 * 0000000140C6C3C8: xor     [rdx], r8
 * 0000000140C6C3CB: mov     rax, [rdx]
 * 0000000140C6C3CE: movzx   ecx, r8b
 * 0000000140C6C3D2: xor     rax, r10
 * 0000000140C6C3D5: and     ecx, 3Fh
 * 0000000140C6C3D8: ror     r8, cl
 * 0000000140C6C3DB: add     r8, rax
 * 0000000140C6C3DE: xor     r8, 0F05h
 * 0000000140C6C3E5: add     rdx, 8
 * 0000000140C6C3E9: cmp     rdx, r9
 * 0000000140C6C3EC: jnz     short loc_140C6C3C8
 * 0000000140C6C3EE: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6C3F6: cmp     r8, [rsi+0A80h]
 * 0000000140C6C3FD: jz      short loc_140C6C45C
 * 0000000140C6C3FF: mov     ecx, [rsi+804h]
 * 0000000140C6C405: mov     rax, [rsi+588h]
 * 0000000140C6C40C: mov     [rax], rsi
 * 0000000140C6C40F: mov     [rax+10h], ecx
 * 0000000140C6C412: mov     rcx, [rsi+0A80h]
 * 0000000140C6C419: cmp     [rsi+918h], r12d
 * 0000000140C6C420: jnz     short loc_140C6C430
 * 0000000140C6C422: mov     rax, [rsi+588h]
 * 0000000140C6C429: xor     rcx, r8
 * 0000000140C6C42C: mov     [rax+18h], rcx
 * 0000000140C6C430: xor     edx, edx
 * 0000000140C6C432: mov     r9d, 100h
 * 0000000140C6C438: mov     rcx, rsi
 * 0000000140C6C43B: call    sub_140C7903C
 * 0000000140C6C440: jmp     short loc_140C6C45C
 * 0000000140C6C442: mov     r11d, 1000h
 * 0000000140C6C448: jmp     short loc_140C6C46C
 * 0000000140C6C44A: xor     r12d, r12d
 * 0000000140C6C44D: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C6C457: lea     r15d, [r12+1]
 * 0000000140C6C45C: mov     r11d, 1000h
 * 0000000140C6C462: mov     r8, 0B3B74BDEE4453415h
 * 0000000140C6C46C: mov     eax, [r13+28h]
 * 0000000140C6C470: test    dil, al
 * 0000000140C6C473: jz      loc_140C713A3
 * 0000000140C6C479: mov     rbx, [r13+8]
 * 0000000140C6C47D: test    al, 4
 * 0000000140C6C47F: jz      loc_140C6C5CE
 * 0000000140C6C485: mov     rax, [rbx+70h]
 * 0000000140C6C489: mov     rcx, [r13+18h]
 * 0000000140C6C48D: mov     rdx, [rax]
 * 0000000140C6C490: cmp     rdx, rcx
 * 0000000140C6C493: jz      loc_140C6C5CE
 * 0000000140C6C499: mov     rax, [rsi+588h]
 * 0000000140C6C4A0: mov     [rax], rdx
 * 0000000140C6C4A3: mov     dword ptr [rax+10h], 100h
 * 0000000140C6C4AA: cmp     [rsi+918h], r12d
 * 0000000140C6C4B1: jnz     short loc_140C6C4C1
 * 0000000140C6C4B3: mov     rax, [rsi+588h]
 * 0000000140C6C4BA: xor     rcx, rdx
 * 0000000140C6C4BD: mov     [rax+18h], rcx
 * 0000000140C6C4C1: mov     rcx, [rbx+70h]
 * 0000000140C6C4C5: cmp     [rsi+918h], r12d
 * 0000000140C6C4CC: jnz     loc_140C6C5CE
 * 0000000140C6C4D2: lea     rax, [rsi+r14]
 * 0000000140C6C4D6: mov     [rsi+920h], rax
 * 0000000140C6C4DD: lea     rax, [r8+r13]
 * 0000000140C6C4E1: mov     [rsi+928h], rax
 * 0000000140C6C4E8: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6C4EC: mov     [rsi+930h], rax
 * 0000000140C6C4F3: mov     [rsi+938h], rcx
 * 0000000140C6C4FA: mov     [rsi+918h], r15d
 * 0000000140C6C501: mov     ecx, [rsi+9D8h]
 * 0000000140C6C507: bt      ecx, 1Dh
 * 0000000140C6C50B: jb      loc_140C6C5CE
 * 0000000140C6C511: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6C51B: jz      loc_140C6C5CE
 * 0000000140C6C521: test    r15b, cl
 * 0000000140C6C524: jz      loc_140C6C5CE
 * 0000000140C6C52A: mov     ecx, [rsi+0A74h]
 * 0000000140C6C530: mov     eax, [rsi+804h]
 * 0000000140C6C536: mov     r10, [rsi+838h]
 * 0000000140C6C53D: sub     eax, ecx
 * 0000000140C6C53F: mov     r8, [rsi+0A78h]
 * 0000000140C6C546: lea     rdx, [rcx+rsi]
 * 0000000140C6C54A: mov     ecx, eax
 * 0000000140C6C54C: shr     rcx, 3
 * 0000000140C6C550: lea     r9, [rdx+rcx*8]
 * 0000000140C6C554: jmp     short loc_140C6C577
 * 0000000140C6C556: xor     [rdx], r8
 * 0000000140C6C559: mov     rax, [rdx]
 * 0000000140C6C55C: movzx   ecx, r8b
 * 0000000140C6C560: xor     rax, r10
 * 0000000140C6C563: and     ecx, 3Fh
 * 0000000140C6C566: ror     r8, cl
 * 0000000140C6C569: add     r8, rax
 * 0000000140C6C56C: xor     r8, 0F05h
 * 0000000140C6C573: add     rdx, 8
 * 0000000140C6C577: cmp     rdx, r9
 * 0000000140C6C57A: jnz     short loc_140C6C556
 * 0000000140C6C57C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6C584: cmp     r8, [rsi+0A80h]
 * 0000000140C6C58B: jz      short loc_140C6C5CE
 * 0000000140C6C58D: mov     ecx, [rsi+804h]
 * 0000000140C6C593: mov     rax, [rsi+588h]
 * 0000000140C6C59A: mov     [rax], rsi
 * 0000000140C6C59D: mov     [rax+10h], ecx
 * 0000000140C6C5A0: mov     rcx, [rsi+0A80h]
 * 0000000140C6C5A7: cmp     [rsi+918h], r12d
 * 0000000140C6C5AE: jnz     short loc_140C6C5BE
 * 0000000140C6C5B0: mov     rax, [rsi+588h]
 * 0000000140C6C5B7: xor     rcx, r8
 * 0000000140C6C5BA: mov     [rax+18h], rcx
 * 0000000140C6C5BE: xor     edx, edx
 * 0000000140C6C5C0: mov     r9d, 100h
 * 0000000140C6C5C6: mov     rcx, rsi
 * 0000000140C6C5C9: call    sub_140C7903C
 * 0000000140C6C5CE: mov     eax, [r13+28h]
 * 0000000140C6C5D2: test    al, 8
 * 0000000140C6C5D4: jz      loc_140C6F354
 * 0000000140C6C5DA: mov     rax, [rbx+78h]
 * 0000000140C6C5DE: mov     rcx, [r13+20h]
 * 0000000140C6C5E2: mov     rdx, [rax]
 * 0000000140C6C5E5: cmp     rdx, rcx
 * 0000000140C6C5E8: jz      loc_140C6F354
 * 0000000140C6C5EE: mov     rax, [rsi+588h]
 * 0000000140C6C5F5: mov     [rax], rdx
 * 0000000140C6C5F8: mov     dword ptr [rax+10h], 100h
 * 0000000140C6C5FF: cmp     [rsi+918h], r12d
 * 0000000140C6C606: jnz     short loc_140C6C616
 * 0000000140C6C608: mov     rax, [rsi+588h]
 * 0000000140C6C60F: xor     rcx, rdx
 * 0000000140C6C612: mov     [rax+18h], rcx
 * 0000000140C6C616: mov     rcx, [rbx+78h]
 * 0000000140C6C61A: cmp     [rsi+918h], r12d
 * 0000000140C6C621: jnz     loc_140C6F354
 * 0000000140C6C627: lea     rax, [rsi+r14]
 * 0000000140C6C62B: mov     [rsi+920h], rax
 * 0000000140C6C632: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6C63C: add     rax, r13
 * 0000000140C6C63F: mov     [rsi+928h], rax
 * 0000000140C6C646: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6C64A: mov     [rsi+930h], rax
 * 0000000140C6C651: mov     [rsi+938h], rcx
 * 0000000140C6C658: mov     [rsi+918h], r15d
 * 0000000140C6C65F: mov     ecx, [rsi+9D8h]
 * 0000000140C6C665: bt      ecx, 1Dh
 * 0000000140C6C669: jb      loc_140C6F354
 * 0000000140C6C66F: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6C679: jz      loc_140C6F354
 * 0000000140C6C67F: test    r15b, cl
 * 0000000140C6C682: jz      loc_140C6F354
 * 0000000140C6C688: mov     ecx, [rsi+0A74h]
 * 0000000140C6C68E: mov     eax, [rsi+804h]
 * 0000000140C6C694: mov     r10, [rsi+838h]
 * 0000000140C6C69B: sub     eax, ecx
 * 0000000140C6C69D: mov     r8, [rsi+0A78h]
 * 0000000140C6C6A4: lea     rdx, [rcx+rsi]
 * 0000000140C6C6A8: mov     ecx, eax
 * 0000000140C6C6AA: shr     rcx, 3
 * 0000000140C6C6AE: lea     r9, [rdx+rcx*8]
 * 0000000140C6C6B2: jmp     short loc_140C6C6D5
 * 0000000140C6C6B4: xor     [rdx], r8
 * 0000000140C6C6B7: mov     rax, [rdx]
 * 0000000140C6C6BA: movzx   ecx, r8b
 * 0000000140C6C6BE: xor     rax, r10
 * 0000000140C6C6C1: and     ecx, 3Fh
 * 0000000140C6C6C4: ror     r8, cl
 * 0000000140C6C6C7: add     r8, rax
 * 0000000140C6C6CA: xor     r8, 0F05h
 * 0000000140C6C6D1: add     rdx, 8
 * 0000000140C6C6D5: cmp     rdx, r9
 * 0000000140C6C6D8: jnz     short loc_140C6C6B4
 * 0000000140C6C6DA: jmp     loc_140C65A4E
 * 0000000140C6C6DF: mov     rdx, r13
 * 0000000140C6C6E2: mov     rcx, rsi
 * 0000000140C6C6E5: call    sub_1405519DC
 * 0000000140C6C6EA: jmp     loc_140C6F354
 * 0000000140C6C6EF: mov     rdx, r13
 * 0000000140C6C6F2: mov     rcx, rsi
 * 0000000140C6C6F5: call    sub_140552AE4
 * 0000000140C6C6FA: jmp     loc_140C6F354
 * 0000000140C6C6FF: mov     eax, [rsi+850h]
 * 0000000140C6C705: test    r15b, al
 * 0000000140C6C708: jz      loc_140C713A3
 * 0000000140C6C70E: mov     rax, [rsi+568h]
 * 0000000140C6C715: cmp     [rax+20h], r12
 * 0000000140C6C719: jnz     short loc_140C6C723
 * 0000000140C6C71B: mov     rbx, r12
 * 0000000140C6C71E: jmp     loc_140C6C82F
 * 0000000140C6C723: mov     ecx, [rsi+9BCh]
 * 0000000140C6C729: cmp     ecx, ebx
 * 0000000140C6C72B: jnz     short loc_140C6C737
 * 0000000140C6C72D: mov     [rsi+9BCh], r12d
 * 0000000140C6C734: mov     ecx, r12d
 * 0000000140C6C737: mov     rax, [rsi+290h]
 * 0000000140C6C73E: call    KeGuardDispatchICall
 * 0000000140C6C743: mov     rbx, rax
 * 0000000140C6C746: test    rax, rax
 * 0000000140C6C749: jnz     short loc_140C6C761
 * 0000000140C6C74B: mov     rax, [rsi+298h]
 * 0000000140C6C752: xor     ecx, ecx
 * 0000000140C6C754: call    KeGuardDispatchICall
 * 0000000140C6C759: mov     rbx, rax
 * 0000000140C6C75C: test    rax, rax
 * 0000000140C6C75F: jz      short loc_140C6C71B
 * 0000000140C6C761: lea     r14, [rsi+988h]
 * 0000000140C6C768: jmp     short loc_140C6C785
 * 0000000140C6C76A: mov     rax, [rsi+298h]
 * 0000000140C6C771: mov     rcx, rbx
 * 0000000140C6C774: call    KeGuardDispatchICall
 * 0000000140C6C779: mov     rbx, rax
 * 0000000140C6C77C: test    rax, rax
 * 0000000140C6C77F: jz      loc_140C6C80E
 * 0000000140C6C785: mov     rax, [rsi+2A8h]
 * 0000000140C6C78C: mov     rdx, r14
 * 0000000140C6C78F: mov     rcx, rbx
 * 0000000140C6C792: call    KeGuardDispatchICall
 * 0000000140C6C797: test    eax, eax
 * 0000000140C6C799: js      short loc_140C6C76A
 * 0000000140C6C79B: mov     rax, [rsi+3D8h]
 * 0000000140C6C7A2: lea     rdx, [rbp+7B0h+var_598]
 * 0000000140C6C7A9: xor     r9d, r9d
 * 0000000140C6C7AC: xor     r8d, r8d
 * 0000000140C6C7AF: lea     ecx, [r9+1Ah]
 * 0000000140C6C7B3: call    KeGuardDispatchICall
 * 0000000140C6C7B8: mov     r14d, eax
 * 0000000140C6C7BB: lea     rdx, [rsi+988h]
 * 0000000140C6C7C2: mov     rax, [rsi+2B0h]
 * 0000000140C6C7C9: mov     rcx, rbx
 * 0000000140C6C7CC: call    KeGuardDispatchICall
 * 0000000140C6C7D1: mov     rax, [rsi+298h]
 * 0000000140C6C7D8: mov     rcx, rbx
 * 0000000140C6C7DB: call    KeGuardDispatchICall
 * 0000000140C6C7E0: mov     rbx, rax
 * 0000000140C6C7E3: test    rax, rax
 * 0000000140C6C7E6: jz      short loc_140C6C81A
 * 0000000140C6C7E8: mov     rax, [rsi+2B8h]
 * 0000000140C6C7EF: mov     rcx, rbx
 * 0000000140C6C7F2: call    KeGuardDispatchICall
 * 0000000140C6C7F7: mov     [rsi+9BCh], eax
 * 0000000140C6C7FD: mov     rcx, rbx
 * 0000000140C6C800: mov     rax, [rsi+2A0h]
 * 0000000140C6C807: call    KeGuardDispatchICall
 * 0000000140C6C80C: jmp     short loc_140C6C821
 * 0000000140C6C80E: or      dword ptr [rsi+9BCh], 0FFFFFFFFh
 * 0000000140C6C815: jmp     loc_140C6C71B
 * 0000000140C6C81A: or      dword ptr [rsi+9BCh], 0FFFFFFFFh
 * 0000000140C6C821: mov     rbx, [rbp+7B0h+var_598]
 * 0000000140C6C828: test    r14d, r14d
 * 0000000140C6C82B: cmovs   rbx, r12
 * 0000000140C6C82F: mov     rax, [rsi+3B8h]
 * 0000000140C6C836: xor     ecx, ecx
 * 0000000140C6C838: mov     [rsp+8B0h+var_858], rbx
 * 0000000140C6C83D: mov     r15d, r12d
 * 0000000140C6C840: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C6C845: call    KeGuardDispatchICall
 * 0000000140C6C84A: mov     [rbp+7B0h+var_808], rax
 * 0000000140C6C84E: mov     r14, rax
 * 0000000140C6C851: test    rax, rax
 * 0000000140C6C854: jz      loc_140C6D87C
 * 0000000140C6C85A: mov     rcx, r14
 * 0000000140C6C85D: cmp     rbx, r14
 * 0000000140C6C860: jnz     loc_140C6D03C
 * 0000000140C6C866: mov     rax, [rsi+3A8h]
 * 0000000140C6C86D: call    KeGuardDispatchICall
 * 0000000140C6C872: test    eax, eax
 * 0000000140C6C874: js      loc_140C6D84D
 * 0000000140C6C87A: mov     rax, [rsi+3E8h]
 * 0000000140C6C881: mov     rcx, r14
 * 0000000140C6C884: call    KeGuardDispatchICall
 * 0000000140C6C889: movzx   ebx, al
 * 0000000140C6C88C: lea     rdx, [rbp+7B0h+arg_18]
 * 0000000140C6C893: mov     rax, [rsi+3F0h]
 * 0000000140C6C89A: mov     rcx, r14
 * 0000000140C6C89D: call    KeGuardDispatchICall
 * 0000000140C6C8A2: mov     byte ptr [rbp+7B0h+arg_8], al
 * 0000000140C6C8A8: mov     rcx, r14
 * 0000000140C6C8AB: mov     rax, [rsi+3F8h]
 * 0000000140C6C8B2: call    KeGuardDispatchICall
 * 0000000140C6C8B7: mov     [rbp+7B0h+var_820], rax
 * 0000000140C6C8BB: cmp     bl, 61h ; 'a'
 * 0000000140C6C8BE: jz      loc_140C6CA09
 * 0000000140C6C8C4: cmp     [rsi+918h], r12d
 * 0000000140C6C8CB: jnz     loc_140C6CA09
 * 0000000140C6C8D1: mov     rax, [rsi+588h]
 * 0000000140C6C8D8: mov     ecx, ebx
 * 0000000140C6C8DA: xor     rcx, 61h
 * 0000000140C6C8DE: mov     [rax+18h], rcx
 * 0000000140C6C8E2: cmp     [rsi+918h], r12d
 * 0000000140C6C8E9: jnz     loc_140C6CA09
 * 0000000140C6C8EF: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6C8F4: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6C8FE: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6C908: mov     r8d, 1
 * 0000000140C6C90E: lea     rax, [rsi+r10]
 * 0000000140C6C912: mov     [rsi+920h], rax
 * 0000000140C6C919: lea     rax, [rdx+r9]
 * 0000000140C6C91D: mov     [rsi+928h], rax
 * 0000000140C6C924: movsxd  rax, dword ptr [rdx]
 * 0000000140C6C927: mov     [rsi+930h], rax
 * 0000000140C6C92E: mov     [rsi+938h], r14
 * 0000000140C6C935: mov     [rsi+918h], r8d
 * 0000000140C6C93C: mov     ecx, [rsi+9D8h]
 * 0000000140C6C942: bt      ecx, 1Dh
 * 0000000140C6C946: jb      loc_140C6CA28
 * 0000000140C6C94C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6C956: jz      loc_140C6CA28
 * 0000000140C6C95C: test    r8b, cl
 * 0000000140C6C95F: jz      loc_140C6CA28
 * 0000000140C6C965: mov     ecx, [rsi+0A74h]
 * 0000000140C6C96B: mov     eax, [rsi+804h]
 * 0000000140C6C971: mov     r10, [rsi+838h]
 * 0000000140C6C978: sub     eax, ecx
 * 0000000140C6C97A: mov     r8, [rsi+0A78h]
 * 0000000140C6C981: lea     rdx, [rcx+rsi]
 * 0000000140C6C985: mov     ecx, eax
 * 0000000140C6C987: shr     rcx, 3
 * 0000000140C6C98B: lea     r9, [rdx+rcx*8]
 * 0000000140C6C98F: jmp     short loc_140C6C9B2
 * 0000000140C6C991: xor     [rdx], r8
 * 0000000140C6C994: mov     rax, [rdx]
 * 0000000140C6C997: movzx   ecx, r8b
 * 0000000140C6C99B: xor     rax, r10
 * 0000000140C6C99E: and     ecx, 3Fh
 * 0000000140C6C9A1: ror     r8, cl
 * 0000000140C6C9A4: add     r8, rax
 * 0000000140C6C9A7: xor     r8, 0F05h
 * 0000000140C6C9AE: add     rdx, 8
 * 0000000140C6C9B2: cmp     rdx, r9
 * 0000000140C6C9B5: jnz     short loc_140C6C991
 * 0000000140C6C9B7: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6C9BF: cmp     r8, [rsi+0A80h]
 * 0000000140C6C9C6: jz      short loc_140C6CA09
 * 0000000140C6C9C8: mov     ecx, [rsi+804h]
 * 0000000140C6C9CE: mov     rax, [rsi+588h]
 * 0000000140C6C9D5: mov     [rax], rsi
 * 0000000140C6C9D8: mov     [rax+10h], ecx
 * 0000000140C6C9DB: mov     rcx, [rsi+0A80h]
 * 0000000140C6C9E2: cmp     [rsi+918h], r12d
 * 0000000140C6C9E9: jnz     short loc_140C6C9F9
 * 0000000140C6C9EB: mov     rax, [rsi+588h]
 * 0000000140C6C9F2: xor     rcx, r8
 * 0000000140C6C9F5: mov     [rax+18h], rcx
 * 0000000140C6C9F9: xor     edx, edx
 * 0000000140C6C9FB: mov     r9d, 100h
 * 0000000140C6CA01: mov     rcx, rsi
 * 0000000140C6CA04: call    sub_140C7903C
 * 0000000140C6CA09: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6CA0E: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6CA18: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6CA22: mov     r8d, 1
 * 0000000140C6CA28: mov     ecx, ebx
 * 0000000140C6CA2A: mov     r14b, r12b
 * 0000000140C6CA2D: and     ecx, 7
 * 0000000140C6CA30: sub     ecx, 1
 * 0000000140C6CA33: jz      loc_140C6CB69
 * 0000000140C6CA39: xor     r11d, r11d
 * 0000000140C6CA3C: cmp     ecx, 1
 * 0000000140C6CA3F: jz      loc_140C6CB5C
 * 0000000140C6CA45: test    bl, 7
 * 0000000140C6CA48: jz      loc_140C6CB6F
 * 0000000140C6CA4E: cmp     [rsi+918h], r11d
 * 0000000140C6CA55: jnz     loc_140C6CB6F
 * 0000000140C6CA5B: lea     rax, [rsi+r10]
 * 0000000140C6CA5F: mov     [rsi+920h], rax
 * 0000000140C6CA66: lea     rax, [rdx+r9]
 * 0000000140C6CA6A: mov     [rsi+928h], rax
 * 0000000140C6CA71: movsxd  rax, dword ptr [rdx]
 * 0000000140C6CA74: mov     [rsi+930h], rax
 * 0000000140C6CA7B: mov     rax, [rbp+7B0h+var_808]
 * 0000000140C6CA7F: mov     [rsi+938h], rax
 * 0000000140C6CA86: mov     [rsi+918h], r8d
 * 0000000140C6CA8D: mov     ecx, [rsi+9D8h]
 * 0000000140C6CA93: bt      ecx, 1Dh
 * 0000000140C6CA97: jb      loc_140C6CB6F
 * 0000000140C6CA9D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6CAA7: jz      loc_140C6CB6F
 * 0000000140C6CAAD: test    r8b, cl
 * 0000000140C6CAB0: jz      loc_140C6CB6F
 * 0000000140C6CAB6: mov     ecx, [rsi+0A74h]
 * 0000000140C6CABC: mov     eax, [rsi+804h]
 * 0000000140C6CAC2: mov     r10, [rsi+838h]
 * 0000000140C6CAC9: sub     eax, ecx
 * 0000000140C6CACB: mov     r8, [rsi+0A78h]
 * 0000000140C6CAD2: lea     rdx, [rcx+rsi]
 * 0000000140C6CAD6: mov     ecx, eax
 * 0000000140C6CAD8: shr     rcx, 3
 * 0000000140C6CADC: lea     r9, [rdx+rcx*8]
 * 0000000140C6CAE0: jmp     short loc_140C6CB03
 * 0000000140C6CAE2: xor     [rdx], r8
 * 0000000140C6CAE5: mov     rax, [rdx]
 * 0000000140C6CAE8: movzx   ecx, r8b
 * 0000000140C6CAEC: xor     rax, r10
 * 0000000140C6CAEF: and     ecx, 3Fh
 * 0000000140C6CAF2: ror     r8, cl
 * 0000000140C6CAF5: add     r8, rax
 * 0000000140C6CAF8: xor     r8, 0F05h
 * 0000000140C6CAFF: add     rdx, 8
 * 0000000140C6CB03: cmp     rdx, r9
 * 0000000140C6CB06: jnz     short loc_140C6CAE2
 * 0000000140C6CB08: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6CB10: cmp     r8, [rsi+0A80h]
 * 0000000140C6CB17: jz      short loc_140C6CB6F
 * 0000000140C6CB19: mov     ecx, [rsi+804h]
 * 0000000140C6CB1F: mov     rax, [rsi+588h]
 * 0000000140C6CB26: mov     [rax], rsi
 * 0000000140C6CB29: mov     [rax+10h], ecx
 * 0000000140C6CB2C: mov     rcx, [rsi+0A80h]
 * 0000000140C6CB33: cmp     [rsi+918h], r11d
 * 0000000140C6CB3A: jnz     short loc_140C6CB4A
 * 0000000140C6CB3C: mov     rax, [rsi+588h]
 * 0000000140C6CB43: xor     rcx, r8
 * 0000000140C6CB46: mov     [rax+18h], rcx
 * 0000000140C6CB4A: xor     edx, edx
 * 0000000140C6CB4C: mov     r9d, 100h
 * 0000000140C6CB52: mov     rcx, rsi
 * 0000000140C6CB55: call    sub_140C7903C
 * 0000000140C6CB5A: jmp     short loc_140C6CB6C
 * 0000000140C6CB5C: mov     eax, 10h
 * 0000000140C6CB61: mov     r14b, al
 * 0000000140C6CB64: mov     r12b, al
 * 0000000140C6CB67: jmp     short loc_140C6CB6F
 * 0000000140C6CB69: mov     r14b, 30h ; '0'
 * 0000000140C6CB6C: xor     r11d, r11d
 * 0000000140C6CB6F: mov     r15, [rsi+5C0h]
 * 0000000140C6CB76: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6CB80: mov     dil, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C6CB87: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6CB91: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6CB96: mov     r8d, 1
 * 0000000140C6CB9C: shr     rbx, 4
 * 0000000140C6CBA0: or      r14b, [r15+rbx*2]
 * 0000000140C6CBA4: cmp     r14b, dil
 * 0000000140C6CBA7: mov     r14, [rbp+7B0h+var_808]
 * 0000000140C6CBAB: jz      loc_140C6CCD8
 * 0000000140C6CBB1: cmp     [rsi+918h], r11d
 * 0000000140C6CBB8: jnz     loc_140C6CCD8
 * 0000000140C6CBBE: lea     rax, [rsi+r10]
 * 0000000140C6CBC2: mov     [rsi+920h], rax
 * 0000000140C6CBC9: lea     rax, [rdx+r9]
 * 0000000140C6CBCD: mov     [rsi+928h], rax
 * 0000000140C6CBD4: movsxd  rax, dword ptr [rdx]
 * 0000000140C6CBD7: mov     [rsi+930h], rax
 * 0000000140C6CBDE: mov     [rsi+938h], r14
 * 0000000140C6CBE5: mov     [rsi+918h], r8d
 * 0000000140C6CBEC: mov     ecx, [rsi+9D8h]
 * 0000000140C6CBF2: bt      ecx, 1Dh
 * 0000000140C6CBF6: jb      loc_140C6CCD8
 * 0000000140C6CBFC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6CC06: jz      loc_140C6CCD8
 * 0000000140C6CC0C: test    r8b, cl
 * 0000000140C6CC0F: jz      loc_140C6CCD8
 * 0000000140C6CC15: mov     ecx, [rsi+0A74h]
 * 0000000140C6CC1B: mov     eax, [rsi+804h]
 * 0000000140C6CC21: mov     r10, [rsi+838h]
 * 0000000140C6CC28: sub     eax, ecx
 * 0000000140C6CC2A: mov     r8, [rsi+0A78h]
 * 0000000140C6CC31: lea     rdx, [rcx+rsi]
 * 0000000140C6CC35: mov     ecx, eax
 * 0000000140C6CC37: shr     rcx, 3
 * 0000000140C6CC3B: lea     r9, [rdx+rcx*8]
 * 0000000140C6CC3F: jmp     short loc_140C6CC62
 * 0000000140C6CC41: xor     [rdx], r8
 * 0000000140C6CC44: mov     rax, [rdx]
 * 0000000140C6CC47: movzx   ecx, r8b
 * 0000000140C6CC4B: xor     rax, r10
 * 0000000140C6CC4E: and     ecx, 3Fh
 * 0000000140C6CC51: ror     r8, cl
 * 0000000140C6CC54: add     r8, rax
 * 0000000140C6CC57: xor     r8, 0F05h
 * 0000000140C6CC5E: add     rdx, 8
 * 0000000140C6CC62: cmp     rdx, r9
 * 0000000140C6CC65: jnz     short loc_140C6CC41
 * 0000000140C6CC67: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6CC6F: cmp     r8, [rsi+0A80h]
 * 0000000140C6CC76: jz      short loc_140C6CCB9
 * 0000000140C6CC78: mov     ecx, [rsi+804h]
 * 0000000140C6CC7E: mov     rax, [rsi+588h]
 * 0000000140C6CC85: mov     [rax], rsi
 * 0000000140C6CC88: mov     [rax+10h], ecx
 * 0000000140C6CC8B: mov     rcx, [rsi+0A80h]
 * 0000000140C6CC92: cmp     [rsi+918h], r11d
 * 0000000140C6CC99: jnz     short loc_140C6CCA9
 * 0000000140C6CC9B: mov     rax, [rsi+588h]
 * 0000000140C6CCA2: xor     rcx, r8
 * 0000000140C6CCA5: mov     [rax+18h], rcx
 * 0000000140C6CCA9: xor     edx, edx
 * 0000000140C6CCAB: mov     r9d, 100h
 * 0000000140C6CCB1: mov     rcx, rsi
 * 0000000140C6CCB4: call    sub_140C7903C
 * 0000000140C6CCB9: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6CCBE: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6CCC8: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6CCD2: mov     r8d, 1
 * 0000000140C6CCD8: or      r12b, [r15+rbx*2+1]
 * 0000000140C6CCDD: cmp     r12b, [rbp+7B0h+arg_18]
 * 0000000140C6CCE4: jz      loc_140C6CDF7
 * 0000000140C6CCEA: xor     r12d, r12d
 * 0000000140C6CCED: cmp     [rsi+918h], r12d
 * 0000000140C6CCF4: jnz     loc_140C6CDFA
 * 0000000140C6CCFA: lea     rax, [rsi+r10]
 * 0000000140C6CCFE: mov     [rsi+920h], rax
 * 0000000140C6CD05: lea     rax, [rdx+r9]
 * 0000000140C6CD09: mov     [rsi+928h], rax
 * 0000000140C6CD10: movsxd  rax, dword ptr [rdx]
 * 0000000140C6CD13: mov     [rsi+930h], rax
 * 0000000140C6CD1A: mov     [rsi+938h], r14
 * 0000000140C6CD21: mov     [rsi+918h], r8d
 * 0000000140C6CD28: mov     ecx, [rsi+9D8h]
 * 0000000140C6CD2E: bt      ecx, 1Dh
 * 0000000140C6CD32: jb      loc_140C6CDFA
 * 0000000140C6CD38: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6CD42: jz      loc_140C6CDFA
 * 0000000140C6CD48: test    r8b, cl
 * 0000000140C6CD4B: jz      loc_140C6CDFA
 * 0000000140C6CD51: mov     ecx, [rsi+0A74h]
 * 0000000140C6CD57: mov     eax, [rsi+804h]
 * 0000000140C6CD5D: mov     r10, [rsi+838h]
 * 0000000140C6CD64: sub     eax, ecx
 * 0000000140C6CD66: mov     r8, [rsi+0A78h]
 * 0000000140C6CD6D: lea     rdx, [rcx+rsi]
 * 0000000140C6CD71: mov     ecx, eax
 * 0000000140C6CD73: shr     rcx, 3
 * 0000000140C6CD77: lea     r9, [rdx+rcx*8]
 * 0000000140C6CD7B: jmp     short loc_140C6CD9E
 * 0000000140C6CD7D: xor     [rdx], r8
 * 0000000140C6CD80: mov     rax, [rdx]
 * 0000000140C6CD83: movzx   ecx, r8b
 * 0000000140C6CD87: xor     rax, r10
 * 0000000140C6CD8A: and     ecx, 3Fh
 * 0000000140C6CD8D: ror     r8, cl
 * 0000000140C6CD90: add     r8, rax
 * 0000000140C6CD93: xor     r8, 0F05h
 * 0000000140C6CD9A: add     rdx, 8
 * 0000000140C6CD9E: cmp     rdx, r9
 * 0000000140C6CDA1: jnz     short loc_140C6CD7D
 * 0000000140C6CDA3: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6CDAB: cmp     r8, [rsi+0A80h]
 * 0000000140C6CDB2: jz      short loc_140C6CDFA
 * 0000000140C6CDB4: mov     ecx, [rsi+804h]
 * 0000000140C6CDBA: mov     rax, [rsi+588h]
 * 0000000140C6CDC1: mov     [rax], rsi
 * 0000000140C6CDC4: mov     [rax+10h], ecx
 * 0000000140C6CDC7: mov     rcx, [rsi+0A80h]
 * 0000000140C6CDCE: cmp     [rsi+918h], r12d
 * 0000000140C6CDD5: jnz     short loc_140C6CDE5
 * 0000000140C6CDD7: mov     rax, [rsi+588h]
 * 0000000140C6CDDE: xor     rcx, r8
 * 0000000140C6CDE1: mov     [rax+18h], rcx
 * 0000000140C6CDE5: xor     edx, edx
 * 0000000140C6CDE7: mov     r9d, 100h
 * 0000000140C6CDED: mov     rcx, rsi
 * 0000000140C6CDF0: call    sub_140C7903C
 * 0000000140C6CDF5: jmp     short loc_140C6CDFA
 * 0000000140C6CDF7: xor     r12d, r12d
 * 0000000140C6CDFA: cmp     r14, [rsi+4D8h]
 * 0000000140C6CE01: jz      loc_140C6D829
 * 0000000140C6CE07: mov     rax, [rsi+3E0h]
 * 0000000140C6CE0E: mov     edx, 1
 * 0000000140C6CE13: mov     rcx, r14
 * 0000000140C6CE16: call    KeGuardDispatchICall
 * 0000000140C6CE1B: mov     rbx, rax
 * 0000000140C6CE1E: test    rax, rax
 * 0000000140C6CE21: jz      loc_140C6D829
 * 0000000140C6CE27: mov     rcx, [rax]
 * 0000000140C6CE2A: mov     r15, rax
 * 0000000140C6CE2D: test    rcx, rcx
 * 0000000140C6CE30: jz      loc_140C6D81A
 * 0000000140C6CE36: mov     r15, [rbp+7B0h+var_808]
 * 0000000140C6CE3A: mov     r12, [rbp+7B0h+var_820]
 * 0000000140C6CE3E: mov     [rsp+8B0h+var_840], rax
 * 0000000140C6CE43: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140C6CE47: mov     [rbx], rcx
 * 0000000140C6CE4A: mov     rax, [rsi+1F0h]
 * 0000000140C6CE51: call    KeGuardDispatchICall
 * 0000000140C6CE56: mov     rcx, [rbx+8]
 * 0000000140C6CE5A: movzx   edx, [rbp+7B0h+arg_18]
 * 0000000140C6CE61: mov     r14, rcx
 * 0000000140C6CE64: movzx   eax, dil
 * 0000000140C6CE68: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140C6CE6F: cmp     r14, r12
 * 0000000140C6CE72: cmovz   edx, eax
 * 0000000140C6CE75: mov     rax, [rsi+400h]
 * 0000000140C6CE7C: shr     rcx, 6
 * 0000000140C6CE80: and     cl, 0Fh
 * 0000000140C6CE83: call    KeGuardDispatchICall
 * 0000000140C6CE88: xor     r11d, r11d
 * 0000000140C6CE8B: test    eax, eax
 * 0000000140C6CE8D: jnz     loc_140C6D022
 * 0000000140C6CE93: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6CE9D: lea     r9d, [r11+1]
 * 0000000140C6CEA1: jz      short loc_140C6CEEF
 * 0000000140C6CEA3: mov     rcx, [rsi+0AC8h]
 * 0000000140C6CEAA: lea     edx, [rax+30h]
 * 0000000140C6CEAD: lea     r8d, [r11+6]
 * 0000000140C6CEB1: mov     rax, [r13+0]
 * 0000000140C6CEB5: add     edx, 0FFFFFFF8h
 * 0000000140C6CEB8: mov     [rcx], rax
 * 0000000140C6CEBB: add     r13, 8
 * 0000000140C6CEBF: add     rcx, 8
 * 0000000140C6CEC3: sub     r8, r9
 * 0000000140C6CEC6: jnz     short loc_140C6CEB1
 * 0000000140C6CEC8: test    edx, edx
 * 0000000140C6CECA: jz      short loc_140C6CEE8
 * 0000000140C6CECC: mov     edi, 0FFFFFFFFh
 * 0000000140C6CED1: mov     al, [r13+0]
 * 0000000140C6CED5: add     r13, r9
 * 0000000140C6CED8: mov     [rcx], al
 * 0000000140C6CEDA: add     rcx, r9
 * 0000000140C6CEDD: add     edx, edi
 * 0000000140C6CEDF: jnz     short loc_140C6CED1
 * 0000000140C6CEE1: mov     dil, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C6CEE8: mov     r13, [rsi+0AC8h]
 * 0000000140C6CEEF: mov     [r13+18h], r14
 * 0000000140C6CEF3: mov     rax, [rbx]
 * 0000000140C6CEF6: mov     [r13+20h], rax
 * 0000000140C6CEFA: mov     eax, [rbx+8]
 * 0000000140C6CEFD: shr     rax, 6
 * 0000000140C6CF01: and     al, 0Fh
 * 0000000140C6CF03: mov     [r13+28h], al
 * 0000000140C6CF07: cmp     [rsi+918h], r11d
 * 0000000140C6CF0E: jnz     loc_140C6D022
 * 0000000140C6CF14: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6CF1E: add     rax, rsi
 * 0000000140C6CF21: mov     [rsi+920h], rax
 * 0000000140C6CF28: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6CF32: add     rax, r13
 * 0000000140C6CF35: mov     [rsi+928h], rax
 * 0000000140C6CF3C: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6CF40: mov     [rsi+930h], rax
 * 0000000140C6CF47: mov     [rsi+938h], r15
 * 0000000140C6CF4E: mov     [rsi+918h], r9d
 * 0000000140C6CF55: mov     ecx, [rsi+9D8h]
 * 0000000140C6CF5B: bt      ecx, 1Dh
 * 0000000140C6CF5F: jb      loc_140C6D022
 * 0000000140C6CF65: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6CF6F: jz      loc_140C6D022
 * 0000000140C6CF75: test    r9b, cl
 * 0000000140C6CF78: jz      loc_140C6D022
 * 0000000140C6CF7E: mov     ecx, [rsi+0A74h]
 * 0000000140C6CF84: mov     eax, [rsi+804h]
 * 0000000140C6CF8A: mov     r10, [rsi+838h]
 * 0000000140C6CF91: sub     eax, ecx
 * 0000000140C6CF93: mov     r8, [rsi+0A78h]
 * 0000000140C6CF9A: lea     rdx, [rcx+rsi]
 * 0000000140C6CF9E: mov     ecx, eax
 * 0000000140C6CFA0: shr     rcx, 3
 * 0000000140C6CFA4: lea     r9, [rdx+rcx*8]
 * 0000000140C6CFA8: jmp     short loc_140C6CFCB
 * 0000000140C6CFAA: xor     [rdx], r8
 * 0000000140C6CFAD: mov     rax, [rdx]
 * 0000000140C6CFB0: movzx   ecx, r8b
 * 0000000140C6CFB4: xor     rax, r10
 * 0000000140C6CFB7: and     ecx, 3Fh
 * 0000000140C6CFBA: ror     r8, cl
 * 0000000140C6CFBD: add     r8, rax
 * 0000000140C6CFC0: xor     r8, 0F05h
 * 0000000140C6CFC7: add     rdx, 8
 * 0000000140C6CFCB: cmp     rdx, r9
 * 0000000140C6CFCE: jnz     short loc_140C6CFAA
 * 0000000140C6CFD0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6CFD8: cmp     r8, [rsi+0A80h]
 * 0000000140C6CFDF: jz      short loc_140C6D022
 * 0000000140C6CFE1: mov     ecx, [rsi+804h]
 * 0000000140C6CFE7: mov     rax, [rsi+588h]
 * 0000000140C6CFEE: mov     [rax], rsi
 * 0000000140C6CFF1: mov     [rax+10h], ecx
 * 0000000140C6CFF4: mov     rcx, [rsi+0A80h]
 * 0000000140C6CFFB: cmp     [rsi+918h], r11d
 * 0000000140C6D002: jnz     short loc_140C6D012
 * 0000000140C6D004: mov     rax, [rsi+588h]
 * 0000000140C6D00B: xor     rcx, r8
 * 0000000140C6D00E: mov     [rax+18h], rcx
 * 0000000140C6D012: xor     edx, edx
 * 0000000140C6D014: mov     r9d, 100h
 * 0000000140C6D01A: mov     rcx, rsi
 * 0000000140C6D01D: call    sub_140C7903C
 * 0000000140C6D022: add     rbx, 30h ; '0'
 * 0000000140C6D026: mov     rcx, [rbx]
 * 0000000140C6D029: test    rcx, rcx
 * 0000000140C6D02C: jnz     loc_140C6CE43
 * 0000000140C6D032: mov     r15, [rsp+8B0h+var_840]
 * 0000000140C6D037: jmp     loc_140C6D813
 * 0000000140C6D03C: mov     rax, [rsi+3D0h]
 * 0000000140C6D043: call    KeGuardDispatchICall
 * 0000000140C6D048: test    eax, eax
 * 0000000140C6D04A: jz      loc_140C6D852
 * 0000000140C6D050: mov     rax, [rsi+3A8h]
 * 0000000140C6D057: mov     rcx, r14
 * 0000000140C6D05A: call    KeGuardDispatchICall
 * 0000000140C6D05F: test    eax, eax
 * 0000000140C6D061: js      loc_140C6D84D
 * 0000000140C6D067: mov     rax, [rsi+3E8h]
 * 0000000140C6D06E: mov     rcx, r14
 * 0000000140C6D071: call    KeGuardDispatchICall
 * 0000000140C6D076: movzx   ebx, al
 * 0000000140C6D079: lea     rdx, [rbp+7B0h+var_7FF]
 * 0000000140C6D07D: mov     rax, [rsi+3F0h]
 * 0000000140C6D084: mov     rcx, r14
 * 0000000140C6D087: call    KeGuardDispatchICall
 * 0000000140C6D08C: movzx   edi, al
 * 0000000140C6D08F: mov     rcx, r14
 * 0000000140C6D092: mov     rax, [rsi+3F8h]
 * 0000000140C6D099: call    KeGuardDispatchICall
 * 0000000140C6D09E: mov     [rbp+7B0h+arg_8], rax
 * 0000000140C6D0A5: cmp     bl, 61h ; 'a'
 * 0000000140C6D0A8: jz      loc_140C6D1F3
 * 0000000140C6D0AE: cmp     [rsi+918h], r12d
 * 0000000140C6D0B5: jnz     loc_140C6D1F3
 * 0000000140C6D0BB: mov     rax, [rsi+588h]
 * 0000000140C6D0C2: mov     ecx, ebx
 * 0000000140C6D0C4: xor     rcx, 61h
 * 0000000140C6D0C8: mov     [rax+18h], rcx
 * 0000000140C6D0CC: cmp     [rsi+918h], r12d
 * 0000000140C6D0D3: jnz     loc_140C6D1F3
 * 0000000140C6D0D9: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6D0DE: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6D0E8: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6D0F2: mov     r8d, 1
 * 0000000140C6D0F8: lea     rax, [rsi+r10]
 * 0000000140C6D0FC: mov     [rsi+920h], rax
 * 0000000140C6D103: lea     rax, [rdx+r9]
 * 0000000140C6D107: mov     [rsi+928h], rax
 * 0000000140C6D10E: movsxd  rax, dword ptr [rdx]
 * 0000000140C6D111: mov     [rsi+930h], rax
 * 0000000140C6D118: mov     [rsi+938h], r14
 * 0000000140C6D11F: mov     [rsi+918h], r8d
 * 0000000140C6D126: mov     ecx, [rsi+9D8h]
 * 0000000140C6D12C: bt      ecx, 1Dh
 * 0000000140C6D130: jb      loc_140C6D212
 * 0000000140C6D136: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D140: jz      loc_140C6D212
 * 0000000140C6D146: test    r8b, cl
 * 0000000140C6D149: jz      loc_140C6D212
 * 0000000140C6D14F: mov     ecx, [rsi+0A74h]
 * 0000000140C6D155: mov     eax, [rsi+804h]
 * 0000000140C6D15B: mov     r10, [rsi+838h]
 * 0000000140C6D162: sub     eax, ecx
 * 0000000140C6D164: mov     r8, [rsi+0A78h]
 * 0000000140C6D16B: lea     rdx, [rcx+rsi]
 * 0000000140C6D16F: mov     ecx, eax
 * 0000000140C6D171: shr     rcx, 3
 * 0000000140C6D175: lea     r9, [rdx+rcx*8]
 * 0000000140C6D179: jmp     short loc_140C6D19C
 * 0000000140C6D17B: xor     [rdx], r8
 * 0000000140C6D17E: mov     rax, [rdx]
 * 0000000140C6D181: movzx   ecx, r8b
 * 0000000140C6D185: xor     rax, r10
 * 0000000140C6D188: and     ecx, 3Fh
 * 0000000140C6D18B: ror     r8, cl
 * 0000000140C6D18E: add     r8, rax
 * 0000000140C6D191: xor     r8, 0F05h
 * 0000000140C6D198: add     rdx, 8
 * 0000000140C6D19C: cmp     rdx, r9
 * 0000000140C6D19F: jnz     short loc_140C6D17B
 * 0000000140C6D1A1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6D1A9: cmp     r8, [rsi+0A80h]
 * 0000000140C6D1B0: jz      short loc_140C6D1F3
 * 0000000140C6D1B2: mov     ecx, [rsi+804h]
 * 0000000140C6D1B8: mov     rax, [rsi+588h]
 * 0000000140C6D1BF: mov     [rax], rsi
 * 0000000140C6D1C2: mov     [rax+10h], ecx
 * 0000000140C6D1C5: mov     rcx, [rsi+0A80h]
 * 0000000140C6D1CC: cmp     [rsi+918h], r12d
 * 0000000140C6D1D3: jnz     short loc_140C6D1E3
 * 0000000140C6D1D5: mov     rax, [rsi+588h]
 * 0000000140C6D1DC: xor     rcx, r8
 * 0000000140C6D1DF: mov     [rax+18h], rcx
 * 0000000140C6D1E3: xor     edx, edx
 * 0000000140C6D1E5: mov     r9d, 100h
 * 0000000140C6D1EB: mov     rcx, rsi
 * 0000000140C6D1EE: call    sub_140C7903C
 * 0000000140C6D1F3: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6D1F8: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6D202: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6D20C: mov     r8d, 1
 * 0000000140C6D212: mov     ecx, ebx
 * 0000000140C6D214: mov     r14b, r12b
 * 0000000140C6D217: and     ecx, 7
 * 0000000140C6D21A: sub     ecx, 1
 * 0000000140C6D21D: jz      loc_140C6D353
 * 0000000140C6D223: xor     r11d, r11d
 * 0000000140C6D226: cmp     ecx, 1
 * 0000000140C6D229: jz      loc_140C6D346
 * 0000000140C6D22F: test    bl, 7
 * 0000000140C6D232: jz      loc_140C6D359
 * 0000000140C6D238: cmp     [rsi+918h], r11d
 * 0000000140C6D23F: jnz     loc_140C6D359
 * 0000000140C6D245: lea     rax, [rsi+r10]
 * 0000000140C6D249: mov     [rsi+920h], rax
 * 0000000140C6D250: lea     rax, [rdx+r9]
 * 0000000140C6D254: mov     [rsi+928h], rax
 * 0000000140C6D25B: movsxd  rax, dword ptr [rdx]
 * 0000000140C6D25E: mov     [rsi+930h], rax
 * 0000000140C6D265: mov     rax, [rbp+7B0h+var_808]
 * 0000000140C6D269: mov     [rsi+938h], rax
 * 0000000140C6D270: mov     [rsi+918h], r8d
 * 0000000140C6D277: mov     ecx, [rsi+9D8h]
 * 0000000140C6D27D: bt      ecx, 1Dh
 * 0000000140C6D281: jb      loc_140C6D359
 * 0000000140C6D287: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D291: jz      loc_140C6D359
 * 0000000140C6D297: test    r8b, cl
 * 0000000140C6D29A: jz      loc_140C6D359
 * 0000000140C6D2A0: mov     ecx, [rsi+0A74h]
 * 0000000140C6D2A6: mov     eax, [rsi+804h]
 * 0000000140C6D2AC: mov     r10, [rsi+838h]
 * 0000000140C6D2B3: sub     eax, ecx
 * 0000000140C6D2B5: mov     r8, [rsi+0A78h]
 * 0000000140C6D2BC: lea     rdx, [rcx+rsi]
 * 0000000140C6D2C0: mov     ecx, eax
 * 0000000140C6D2C2: shr     rcx, 3
 * 0000000140C6D2C6: lea     r9, [rdx+rcx*8]
 * 0000000140C6D2CA: jmp     short loc_140C6D2ED
 * 0000000140C6D2CC: xor     [rdx], r8
 * 0000000140C6D2CF: mov     rax, [rdx]
 * 0000000140C6D2D2: movzx   ecx, r8b
 * 0000000140C6D2D6: xor     rax, r10
 * 0000000140C6D2D9: and     ecx, 3Fh
 * 0000000140C6D2DC: ror     r8, cl
 * 0000000140C6D2DF: add     r8, rax
 * 0000000140C6D2E2: xor     r8, 0F05h
 * 0000000140C6D2E9: add     rdx, 8
 * 0000000140C6D2ED: cmp     rdx, r9
 * 0000000140C6D2F0: jnz     short loc_140C6D2CC
 * 0000000140C6D2F2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6D2FA: cmp     r8, [rsi+0A80h]
 * 0000000140C6D301: jz      short loc_140C6D359
 * 0000000140C6D303: mov     ecx, [rsi+804h]
 * 0000000140C6D309: mov     rax, [rsi+588h]
 * 0000000140C6D310: mov     [rax], rsi
 * 0000000140C6D313: mov     [rax+10h], ecx
 * 0000000140C6D316: mov     rcx, [rsi+0A80h]
 * 0000000140C6D31D: cmp     [rsi+918h], r11d
 * 0000000140C6D324: jnz     short loc_140C6D334
 * 0000000140C6D326: mov     rax, [rsi+588h]
 * 0000000140C6D32D: xor     rcx, r8
 * 0000000140C6D330: mov     [rax+18h], rcx
 * 0000000140C6D334: xor     edx, edx
 * 0000000140C6D336: mov     r9d, 100h
 * 0000000140C6D33C: mov     rcx, rsi
 * 0000000140C6D33F: call    sub_140C7903C
 * 0000000140C6D344: jmp     short loc_140C6D356
 * 0000000140C6D346: mov     eax, 10h
 * 0000000140C6D34B: mov     r14b, al
 * 0000000140C6D34E: mov     r12b, al
 * 0000000140C6D351: jmp     short loc_140C6D359
 * 0000000140C6D353: mov     r14b, 30h ; '0'
 * 0000000140C6D356: xor     r11d, r11d
 * 0000000140C6D359: mov     r15, [rsi+5C0h]
 * 0000000140C6D360: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6D36A: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6D36F: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6D379: shr     rbx, 4
 * 0000000140C6D37D: mov     r8d, 1
 * 0000000140C6D383: or      r14b, [r15+rbx*2]
 * 0000000140C6D387: cmp     r14b, dil
 * 0000000140C6D38A: mov     r14, [rbp+7B0h+var_808]
 * 0000000140C6D38E: jz      loc_140C6D4BB
 * 0000000140C6D394: cmp     [rsi+918h], r11d
 * 0000000140C6D39B: jnz     loc_140C6D4BB
 * 0000000140C6D3A1: lea     rax, [rsi+r10]
 * 0000000140C6D3A5: mov     [rsi+920h], rax
 * 0000000140C6D3AC: lea     rax, [rdx+r9]
 * 0000000140C6D3B0: mov     [rsi+928h], rax
 * 0000000140C6D3B7: movsxd  rax, dword ptr [rdx]
 * 0000000140C6D3BA: mov     [rsi+930h], rax
 * 0000000140C6D3C1: mov     [rsi+938h], r14
 * 0000000140C6D3C8: mov     [rsi+918h], r8d
 * 0000000140C6D3CF: mov     ecx, [rsi+9D8h]
 * 0000000140C6D3D5: bt      ecx, 1Dh
 * 0000000140C6D3D9: jb      loc_140C6D4BB
 * 0000000140C6D3DF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D3E9: jz      loc_140C6D4BB
 * 0000000140C6D3EF: test    r8b, cl
 * 0000000140C6D3F2: jz      loc_140C6D4BB
 * 0000000140C6D3F8: mov     ecx, [rsi+0A74h]
 * 0000000140C6D3FE: mov     eax, [rsi+804h]
 * 0000000140C6D404: mov     r10, [rsi+838h]
 * 0000000140C6D40B: sub     eax, ecx
 * 0000000140C6D40D: mov     r8, [rsi+0A78h]
 * 0000000140C6D414: lea     rdx, [rcx+rsi]
 * 0000000140C6D418: mov     ecx, eax
 * 0000000140C6D41A: shr     rcx, 3
 * 0000000140C6D41E: lea     r9, [rdx+rcx*8]
 * 0000000140C6D422: jmp     short loc_140C6D445
 * 0000000140C6D424: xor     [rdx], r8
 * 0000000140C6D427: mov     rax, [rdx]
 * 0000000140C6D42A: movzx   ecx, r8b
 * 0000000140C6D42E: xor     rax, r10
 * 0000000140C6D431: and     ecx, 3Fh
 * 0000000140C6D434: ror     r8, cl
 * 0000000140C6D437: add     r8, rax
 * 0000000140C6D43A: xor     r8, 0F05h
 * 0000000140C6D441: add     rdx, 8
 * 0000000140C6D445: cmp     rdx, r9
 * 0000000140C6D448: jnz     short loc_140C6D424
 * 0000000140C6D44A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6D452: cmp     r8, [rsi+0A80h]
 * 0000000140C6D459: jz      short loc_140C6D49C
 * 0000000140C6D45B: mov     ecx, [rsi+804h]
 * 0000000140C6D461: mov     rax, [rsi+588h]
 * 0000000140C6D468: mov     [rax], rsi
 * 0000000140C6D46B: mov     [rax+10h], ecx
 * 0000000140C6D46E: mov     rcx, [rsi+0A80h]
 * 0000000140C6D475: cmp     [rsi+918h], r11d
 * 0000000140C6D47C: jnz     short loc_140C6D48C
 * 0000000140C6D47E: mov     rax, [rsi+588h]
 * 0000000140C6D485: xor     rcx, r8
 * 0000000140C6D488: mov     [rax+18h], rcx
 * 0000000140C6D48C: xor     edx, edx
 * 0000000140C6D48E: mov     r9d, 100h
 * 0000000140C6D494: mov     rcx, rsi
 * 0000000140C6D497: call    sub_140C7903C
 * 0000000140C6D49C: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6D4A1: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6D4AB: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6D4B5: mov     r8d, 1
 * 0000000140C6D4BB: or      r12b, [r15+rbx*2+1]
 * 0000000140C6D4C0: cmp     r12b, [rbp+7B0h+var_7FF]
 * 0000000140C6D4C4: jz      loc_140C6D5D7
 * 0000000140C6D4CA: xor     r12d, r12d
 * 0000000140C6D4CD: cmp     [rsi+918h], r12d
 * 0000000140C6D4D4: jnz     loc_140C6D5DA
 * 0000000140C6D4DA: lea     rax, [rsi+r10]
 * 0000000140C6D4DE: mov     [rsi+920h], rax
 * 0000000140C6D4E5: lea     rax, [rdx+r9]
 * 0000000140C6D4E9: mov     [rsi+928h], rax
 * 0000000140C6D4F0: movsxd  rax, dword ptr [rdx]
 * 0000000140C6D4F3: mov     [rsi+930h], rax
 * 0000000140C6D4FA: mov     [rsi+938h], r14
 * 0000000140C6D501: mov     [rsi+918h], r8d
 * 0000000140C6D508: mov     ecx, [rsi+9D8h]
 * 0000000140C6D50E: bt      ecx, 1Dh
 * 0000000140C6D512: jb      loc_140C6D5DA
 * 0000000140C6D518: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D522: jz      loc_140C6D5DA
 * 0000000140C6D528: test    r8b, cl
 * 0000000140C6D52B: jz      loc_140C6D5DA
 * 0000000140C6D531: mov     ecx, [rsi+0A74h]
 * 0000000140C6D537: mov     eax, [rsi+804h]
 * 0000000140C6D53D: mov     r10, [rsi+838h]
 * 0000000140C6D544: sub     eax, ecx
 * 0000000140C6D546: mov     r8, [rsi+0A78h]
 * 0000000140C6D54D: lea     rdx, [rcx+rsi]
 * 0000000140C6D551: mov     ecx, eax
 * 0000000140C6D553: shr     rcx, 3
 * 0000000140C6D557: lea     r9, [rdx+rcx*8]
 * 0000000140C6D55B: jmp     short loc_140C6D57E
 * 0000000140C6D55D: xor     [rdx], r8
 * 0000000140C6D560: mov     rax, [rdx]
 * 0000000140C6D563: movzx   ecx, r8b
 * 0000000140C6D567: xor     rax, r10
 * 0000000140C6D56A: and     ecx, 3Fh
 * 0000000140C6D56D: ror     r8, cl
 * 0000000140C6D570: add     r8, rax
 * 0000000140C6D573: xor     r8, 0F05h
 * 0000000140C6D57A: add     rdx, 8
 * 0000000140C6D57E: cmp     rdx, r9
 * 0000000140C6D581: jnz     short loc_140C6D55D
 * 0000000140C6D583: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6D58B: cmp     r8, [rsi+0A80h]
 * 0000000140C6D592: jz      short loc_140C6D5DA
 * 0000000140C6D594: mov     ecx, [rsi+804h]
 * 0000000140C6D59A: mov     rax, [rsi+588h]
 * 0000000140C6D5A1: mov     [rax], rsi
 * 0000000140C6D5A4: mov     [rax+10h], ecx
 * 0000000140C6D5A7: mov     rcx, [rsi+0A80h]
 * 0000000140C6D5AE: cmp     [rsi+918h], r12d
 * 0000000140C6D5B5: jnz     short loc_140C6D5C5
 * 0000000140C6D5B7: mov     rax, [rsi+588h]
 * 0000000140C6D5BE: xor     rcx, r8
 * 0000000140C6D5C1: mov     [rax+18h], rcx
 * 0000000140C6D5C5: xor     edx, edx
 * 0000000140C6D5C7: mov     r9d, 100h
 * 0000000140C6D5CD: mov     rcx, rsi
 * 0000000140C6D5D0: call    sub_140C7903C
 * 0000000140C6D5D5: jmp     short loc_140C6D5DA
 * 0000000140C6D5D7: xor     r12d, r12d
 * 0000000140C6D5DA: cmp     r14, [rsi+4D8h]
 * 0000000140C6D5E1: jz      loc_140C6D829
 * 0000000140C6D5E7: mov     rax, [rsi+3E0h]
 * 0000000140C6D5EE: mov     edx, 1
 * 0000000140C6D5F3: mov     rcx, r14
 * 0000000140C6D5F6: call    KeGuardDispatchICall
 * 0000000140C6D5FB: mov     rbx, rax
 * 0000000140C6D5FE: test    rax, rax
 * 0000000140C6D601: jz      loc_140C6D829
 * 0000000140C6D607: mov     rcx, [rax]
 * 0000000140C6D60A: mov     r15, rax
 * 0000000140C6D60D: test    rcx, rcx
 * 0000000140C6D610: jz      loc_140C6D81A
 * 0000000140C6D616: mov     r15, [rbp+7B0h+var_808]
 * 0000000140C6D61A: mov     r12, [rbp+7B0h+arg_8]
 * 0000000140C6D621: mov     [rbp+7B0h+var_820], rax
 * 0000000140C6D625: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140C6D629: mov     [rbx], rcx
 * 0000000140C6D62C: mov     rax, [rsi+1F0h]
 * 0000000140C6D633: call    KeGuardDispatchICall
 * 0000000140C6D638: mov     rcx, [rbx+8]
 * 0000000140C6D63C: movzx   edx, [rbp+7B0h+var_7FF]
 * 0000000140C6D640: mov     r14, rcx
 * 0000000140C6D643: mov     rax, [rsi+400h]
 * 0000000140C6D64A: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140C6D651: cmp     r14, r12
 * 0000000140C6D654: cmovz   edx, edi
 * 0000000140C6D657: shr     rcx, 6
 * 0000000140C6D65B: and     cl, 0Fh
 * 0000000140C6D65E: call    KeGuardDispatchICall
 * 0000000140C6D663: xor     r11d, r11d
 * 0000000140C6D666: test    eax, eax
 * 0000000140C6D668: jnz     loc_140C6D7FF
 * 0000000140C6D66E: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6D678: lea     r9d, [r11+1]
 * 0000000140C6D67C: jz      short loc_140C6D6CC
 * 0000000140C6D67E: mov     rcx, [rsi+0AC8h]
 * 0000000140C6D685: lea     edx, [rax+30h]
 * 0000000140C6D688: lea     r8d, [r11+6]
 * 0000000140C6D68C: mov     rax, [r13+0]
 * 0000000140C6D690: add     edx, 0FFFFFFF8h
 * 0000000140C6D693: mov     [rcx], rax
 * 0000000140C6D696: add     r13, 8
 * 0000000140C6D69A: add     rcx, 8
 * 0000000140C6D69E: sub     r8, r9
 * 0000000140C6D6A1: jnz     short loc_140C6D68C
 * 0000000140C6D6A3: test    edx, edx
 * 0000000140C6D6A5: jz      short loc_140C6D6C5
 * 0000000140C6D6A7: mov     r12d, 0FFFFFFFFh
 * 0000000140C6D6AD: mov     al, [r13+0]
 * 0000000140C6D6B1: add     r13, r9
 * 0000000140C6D6B4: mov     [rcx], al
 * 0000000140C6D6B6: add     rcx, r9
 * 0000000140C6D6B9: add     edx, r12d
 * 0000000140C6D6BC: jnz     short loc_140C6D6AD
 * 0000000140C6D6BE: mov     r12, [rbp+7B0h+arg_8]
 * 0000000140C6D6C5: mov     r13, [rsi+0AC8h]
 * 0000000140C6D6CC: mov     [r13+18h], r14
 * 0000000140C6D6D0: mov     rax, [rbx]
 * 0000000140C6D6D3: mov     [r13+20h], rax
 * 0000000140C6D6D7: mov     eax, [rbx+8]
 * 0000000140C6D6DA: shr     rax, 6
 * 0000000140C6D6DE: and     al, 0Fh
 * 0000000140C6D6E0: mov     [r13+28h], al
 * 0000000140C6D6E4: cmp     [rsi+918h], r11d
 * 0000000140C6D6EB: jnz     loc_140C6D7FF
 * 0000000140C6D6F1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6D6FB: add     rax, rsi
 * 0000000140C6D6FE: mov     [rsi+920h], rax
 * 0000000140C6D705: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6D70F: add     rax, r13
 * 0000000140C6D712: mov     [rsi+928h], rax
 * 0000000140C6D719: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6D71D: mov     [rsi+930h], rax
 * 0000000140C6D724: mov     [rsi+938h], r15
 * 0000000140C6D72B: mov     [rsi+918h], r9d
 * 0000000140C6D732: mov     ecx, [rsi+9D8h]
 * 0000000140C6D738: bt      ecx, 1Dh
 * 0000000140C6D73C: jb      loc_140C6D7FF
 * 0000000140C6D742: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D74C: jz      loc_140C6D7FF
 * 0000000140C6D752: test    r9b, cl
 * 0000000140C6D755: jz      loc_140C6D7FF
 * 0000000140C6D75B: mov     ecx, [rsi+0A74h]
 * 0000000140C6D761: mov     eax, [rsi+804h]
 * 0000000140C6D767: mov     r10, [rsi+838h]
 * 0000000140C6D76E: sub     eax, ecx
 * 0000000140C6D770: mov     r8, [rsi+0A78h]
 * 0000000140C6D777: lea     rdx, [rcx+rsi]
 * 0000000140C6D77B: mov     ecx, eax
 * 0000000140C6D77D: shr     rcx, 3
 * 0000000140C6D781: lea     r9, [rdx+rcx*8]
 * 0000000140C6D785: jmp     short loc_140C6D7A8
 * 0000000140C6D787: xor     [rdx], r8
 * 0000000140C6D78A: mov     rax, [rdx]
 * 0000000140C6D78D: movzx   ecx, r8b
 * 0000000140C6D791: xor     rax, r10
 * 0000000140C6D794: and     ecx, 3Fh
 * 0000000140C6D797: ror     r8, cl
 * 0000000140C6D79A: add     r8, rax
 * 0000000140C6D79D: xor     r8, 0F05h
 * 0000000140C6D7A4: add     rdx, 8
 * 0000000140C6D7A8: cmp     rdx, r9
 * 0000000140C6D7AB: jnz     short loc_140C6D787
 * 0000000140C6D7AD: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6D7B5: cmp     r8, [rsi+0A80h]
 * 0000000140C6D7BC: jz      short loc_140C6D7FF
 * 0000000140C6D7BE: mov     ecx, [rsi+804h]
 * 0000000140C6D7C4: mov     rax, [rsi+588h]
 * 0000000140C6D7CB: mov     [rax], rsi
 * 0000000140C6D7CE: mov     [rax+10h], ecx
 * 0000000140C6D7D1: mov     rcx, [rsi+0A80h]
 * 0000000140C6D7D8: cmp     [rsi+918h], r11d
 * 0000000140C6D7DF: jnz     short loc_140C6D7EF
 * 0000000140C6D7E1: mov     rax, [rsi+588h]
 * 0000000140C6D7E8: xor     rcx, r8
 * 0000000140C6D7EB: mov     [rax+18h], rcx
 * 0000000140C6D7EF: xor     edx, edx
 * 0000000140C6D7F1: mov     r9d, 100h
 * 0000000140C6D7F7: mov     rcx, rsi
 * 0000000140C6D7FA: call    sub_140C7903C
 * 0000000140C6D7FF: add     rbx, 30h ; '0'
 * 0000000140C6D803: mov     rcx, [rbx]
 * 0000000140C6D806: test    rcx, rcx
 * 0000000140C6D809: jnz     loc_140C6D625
 * 0000000140C6D80F: mov     r15, [rbp+7B0h+var_820]
 * 0000000140C6D813: mov     r14, [rbp+7B0h+var_808]
 * 0000000140C6D817: xor     r12d, r12d
 * 0000000140C6D81A: mov     rax, [rsi+108h]
 * 0000000140C6D821: mov     rcx, r15
 * 0000000140C6D824: call    KeGuardDispatchICall
 * 0000000140C6D829: mov     rax, [rsi+3B0h]
 * 0000000140C6D830: mov     rcx, r14
 * 0000000140C6D833: call    KeGuardDispatchICall
 * 0000000140C6D838: mov     r15d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6D83D: mov     eax, 8000h
 * 0000000140C6D842: add     [rsi+848h], eax
 * 0000000140C6D848: mov     rbx, [rsp+8B0h+var_858]
 * 0000000140C6D84D: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6D852: mov     rax, [rsi+3B8h]
 * 0000000140C6D859: inc     r15d
 * 0000000140C6D85C: mov     rcx, r14
 * 0000000140C6D85F: mov     dword ptr [rsp+8B0h+var_848], r15d
 * 0000000140C6D864: call    KeGuardDispatchICall
 * 0000000140C6D869: mov     [rbp+7B0h+var_808], rax
 * 0000000140C6D86D: mov     r14, rax
 * 0000000140C6D870: test    rax, rax
 * 0000000140C6D873: jnz     loc_140C6C85A
 * 0000000140C6D879: lea     edi, [rax+2]
 * 0000000140C6D87C: mov     r13, [rsi+4D8h]
 * 0000000140C6D883: mov     rax, [rsi+3A8h]
 * 0000000140C6D88A: mov     rcx, r13
 * 0000000140C6D88D: call    KeGuardDispatchICall
 * 0000000140C6D892: test    eax, eax
 * 0000000140C6D894: js      loc_140C6E074
 * 0000000140C6D89A: mov     rax, [rsi+3E8h]
 * 0000000140C6D8A1: mov     rcx, r13
 * 0000000140C6D8A4: call    KeGuardDispatchICall
 * 0000000140C6D8A9: movzx   ebx, al
 * 0000000140C6D8AC: lea     rdx, [rbp+7B0h+var_800]
 * 0000000140C6D8B0: mov     rax, [rsi+3F0h]
 * 0000000140C6D8B7: mov     rcx, r13
 * 0000000140C6D8BA: call    KeGuardDispatchICall
 * 0000000140C6D8BF: mov     byte ptr [rbp+7B0h+arg_8], al
 * 0000000140C6D8C5: mov     rcx, r13
 * 0000000140C6D8C8: mov     rax, [rsi+3F8h]
 * 0000000140C6D8CF: call    KeGuardDispatchICall
 * 0000000140C6D8D4: mov     [rbp+7B0h+var_820], rax
 * 0000000140C6D8D8: cmp     bl, 72h ; 'r'
 * 0000000140C6D8DB: jz      loc_140C6DA26
 * 0000000140C6D8E1: cmp     [rsi+918h], r12d
 * 0000000140C6D8E8: jnz     loc_140C6DA26
 * 0000000140C6D8EE: mov     rax, [rsi+588h]
 * 0000000140C6D8F5: mov     ecx, ebx
 * 0000000140C6D8F7: xor     rcx, 72h
 * 0000000140C6D8FB: mov     [rax+18h], rcx
 * 0000000140C6D8FF: cmp     [rsi+918h], r12d
 * 0000000140C6D906: jnz     loc_140C6DA26
 * 0000000140C6D90C: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6D911: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6D91B: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6D925: mov     r8d, 1
 * 0000000140C6D92B: lea     rax, [rsi+r10]
 * 0000000140C6D92F: mov     [rsi+920h], rax
 * 0000000140C6D936: lea     rax, [rdx+r9]
 * 0000000140C6D93A: mov     [rsi+928h], rax
 * 0000000140C6D941: movsxd  rax, dword ptr [rdx]
 * 0000000140C6D944: mov     [rsi+930h], rax
 * 0000000140C6D94B: mov     [rsi+938h], r13
 * 0000000140C6D952: mov     [rsi+918h], r8d
 * 0000000140C6D959: mov     ecx, [rsi+9D8h]
 * 0000000140C6D95F: bt      ecx, 1Dh
 * 0000000140C6D963: jb      loc_140C6DA45
 * 0000000140C6D969: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D973: jz      loc_140C6DA45
 * 0000000140C6D979: test    r8b, cl
 * 0000000140C6D97C: jz      loc_140C6DA45
 * 0000000140C6D982: mov     ecx, [rsi+0A74h]
 * 0000000140C6D988: mov     eax, [rsi+804h]
 * 0000000140C6D98E: mov     r10, [rsi+838h]
 * 0000000140C6D995: sub     eax, ecx
 * 0000000140C6D997: mov     r8, [rsi+0A78h]
 * 0000000140C6D99E: lea     rdx, [rcx+rsi]
 * 0000000140C6D9A2: mov     ecx, eax
 * 0000000140C6D9A4: shr     rcx, 3
 * 0000000140C6D9A8: lea     r9, [rdx+rcx*8]
 * 0000000140C6D9AC: jmp     short loc_140C6D9CF
 * 0000000140C6D9AE: xor     [rdx], r8
 * 0000000140C6D9B1: mov     rax, [rdx]
 * 0000000140C6D9B4: movzx   ecx, r8b
 * 0000000140C6D9B8: xor     rax, r10
 * 0000000140C6D9BB: and     ecx, 3Fh
 * 0000000140C6D9BE: ror     r8, cl
 * 0000000140C6D9C1: add     r8, rax
 * 0000000140C6D9C4: xor     r8, 0F05h
 * 0000000140C6D9CB: add     rdx, 8
 * 0000000140C6D9CF: cmp     rdx, r9
 * 0000000140C6D9D2: jnz     short loc_140C6D9AE
 * 0000000140C6D9D4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6D9DC: cmp     r8, [rsi+0A80h]
 * 0000000140C6D9E3: jz      short loc_140C6DA26
 * 0000000140C6D9E5: mov     ecx, [rsi+804h]
 * 0000000140C6D9EB: mov     rax, [rsi+588h]
 * 0000000140C6D9F2: mov     [rax], rsi
 * 0000000140C6D9F5: mov     [rax+10h], ecx
 * 0000000140C6D9F8: mov     rcx, [rsi+0A80h]
 * 0000000140C6D9FF: cmp     [rsi+918h], r12d
 * 0000000140C6DA06: jnz     short loc_140C6DA16
 * 0000000140C6DA08: mov     rax, [rsi+588h]
 * 0000000140C6DA0F: xor     rcx, r8
 * 0000000140C6DA12: mov     [rax+18h], rcx
 * 0000000140C6DA16: xor     edx, edx
 * 0000000140C6DA18: mov     r9d, 100h
 * 0000000140C6DA1E: mov     rcx, rsi
 * 0000000140C6DA21: call    sub_140C7903C
 * 0000000140C6DA26: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6DA2B: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6DA35: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6DA3F: mov     r8d, 1
 * 0000000140C6DA45: mov     ecx, ebx
 * 0000000140C6DA47: mov     r14b, r12b
 * 0000000140C6DA4A: and     ecx, 7
 * 0000000140C6DA4D: sub     ecx, 1
 * 0000000140C6DA50: jz      loc_140C6DB82
 * 0000000140C6DA56: xor     r11d, r11d
 * 0000000140C6DA59: cmp     ecx, 1
 * 0000000140C6DA5C: jz      loc_140C6DB75
 * 0000000140C6DA62: test    bl, 7
 * 0000000140C6DA65: jz      loc_140C6DB88
 * 0000000140C6DA6B: cmp     [rsi+918h], r11d
 * 0000000140C6DA72: jnz     loc_140C6DB88
 * 0000000140C6DA78: lea     rax, [rsi+r10]
 * 0000000140C6DA7C: mov     [rsi+920h], rax
 * 0000000140C6DA83: lea     rax, [rdx+r9]
 * 0000000140C6DA87: mov     [rsi+928h], rax
 * 0000000140C6DA8E: movsxd  rax, dword ptr [rdx]
 * 0000000140C6DA91: mov     [rsi+930h], rax
 * 0000000140C6DA98: mov     [rsi+938h], r13
 * 0000000140C6DA9F: mov     [rsi+918h], r8d
 * 0000000140C6DAA6: mov     ecx, [rsi+9D8h]
 * 0000000140C6DAAC: bt      ecx, 1Dh
 * 0000000140C6DAB0: jb      loc_140C6DB88
 * 0000000140C6DAB6: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6DAC0: jz      loc_140C6DB88
 * 0000000140C6DAC6: test    r8b, cl
 * 0000000140C6DAC9: jz      loc_140C6DB88
 * 0000000140C6DACF: mov     ecx, [rsi+0A74h]
 * 0000000140C6DAD5: mov     eax, [rsi+804h]
 * 0000000140C6DADB: mov     r10, [rsi+838h]
 * 0000000140C6DAE2: sub     eax, ecx
 * 0000000140C6DAE4: mov     r8, [rsi+0A78h]
 * 0000000140C6DAEB: lea     rdx, [rcx+rsi]
 * 0000000140C6DAEF: mov     ecx, eax
 * 0000000140C6DAF1: shr     rcx, 3
 * 0000000140C6DAF5: lea     r9, [rdx+rcx*8]
 * 0000000140C6DAF9: jmp     short loc_140C6DB1C
 * 0000000140C6DAFB: xor     [rdx], r8
 * 0000000140C6DAFE: mov     rax, [rdx]
 * 0000000140C6DB01: movzx   ecx, r8b
 * 0000000140C6DB05: xor     rax, r10
 * 0000000140C6DB08: and     ecx, 3Fh
 * 0000000140C6DB0B: ror     r8, cl
 * 0000000140C6DB0E: add     r8, rax
 * 0000000140C6DB11: xor     r8, 0F05h
 * 0000000140C6DB18: add     rdx, 8
 * 0000000140C6DB1C: cmp     rdx, r9
 * 0000000140C6DB1F: jnz     short loc_140C6DAFB
 * 0000000140C6DB21: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6DB29: cmp     r8, [rsi+0A80h]
 * 0000000140C6DB30: jz      short loc_140C6DB88
 * 0000000140C6DB32: mov     ecx, [rsi+804h]
 * 0000000140C6DB38: mov     rax, [rsi+588h]
 * 0000000140C6DB3F: mov     [rax], rsi
 * 0000000140C6DB42: mov     [rax+10h], ecx
 * 0000000140C6DB45: mov     rcx, [rsi+0A80h]
 * 0000000140C6DB4C: cmp     [rsi+918h], r11d
 * 0000000140C6DB53: jnz     short loc_140C6DB63
 * 0000000140C6DB55: mov     rax, [rsi+588h]
 * 0000000140C6DB5C: xor     rcx, r8
 * 0000000140C6DB5F: mov     [rax+18h], rcx
 * 0000000140C6DB63: xor     edx, edx
 * 0000000140C6DB65: mov     r9d, 100h
 * 0000000140C6DB6B: mov     rcx, rsi
 * 0000000140C6DB6E: call    sub_140C7903C
 * 0000000140C6DB73: jmp     short loc_140C6DB85
 * 0000000140C6DB75: mov     eax, 10h
 * 0000000140C6DB7A: mov     r14b, al
 * 0000000140C6DB7D: mov     r12b, al
 * 0000000140C6DB80: jmp     short loc_140C6DB88
 * 0000000140C6DB82: mov     r14b, 30h ; '0'
 * 0000000140C6DB85: xor     r11d, r11d
 * 0000000140C6DB88: mov     r15, [rsi+5C0h]
 * 0000000140C6DB8F: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140C6DB99: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6DB9E: mov     r8, 0B3B74BDEE4453415h
 * 0000000140C6DBA8: shr     rbx, 4
 * 0000000140C6DBAC: or      r14b, [r15+rbx*2]
 * 0000000140C6DBB0: cmp     r14b, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C6DBB7: mov     r14d, 1
 * 0000000140C6DBBD: jz      loc_140C6DCE4
 * 0000000140C6DBC3: cmp     [rsi+918h], r11d
 * 0000000140C6DBCA: jnz     loc_140C6DCE4
 * 0000000140C6DBD0: lea     rax, [rsi+r9]
 * 0000000140C6DBD4: mov     [rsi+920h], rax
 * 0000000140C6DBDB: lea     rax, [rdx+r8]
 * 0000000140C6DBDF: mov     [rsi+928h], rax
 * 0000000140C6DBE6: movsxd  rax, dword ptr [rdx]
 * 0000000140C6DBE9: mov     [rsi+930h], rax
 * 0000000140C6DBF0: mov     [rsi+938h], r13
 * 0000000140C6DBF7: mov     [rsi+918h], r14d
 * 0000000140C6DBFE: mov     ecx, [rsi+9D8h]
 * 0000000140C6DC04: bt      ecx, 1Dh
 * 0000000140C6DC08: jb      loc_140C6DCE4
 * 0000000140C6DC0E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6DC18: jz      loc_140C6DCE4
 * 0000000140C6DC1E: test    r14b, cl
 * 0000000140C6DC21: jz      loc_140C6DCE4
 * 0000000140C6DC27: mov     ecx, [rsi+0A74h]
 * 0000000140C6DC2D: mov     eax, [rsi+804h]
 * 0000000140C6DC33: mov     r10, [rsi+838h]
 * 0000000140C6DC3A: sub     eax, ecx
 * 0000000140C6DC3C: mov     r8, [rsi+0A78h]
 * 0000000140C6DC43: lea     rdx, [rcx+rsi]
 * 0000000140C6DC47: mov     ecx, eax
 * 0000000140C6DC49: shr     rcx, 3
 * 0000000140C6DC4D: lea     r9, [rdx+rcx*8]
 * 0000000140C6DC51: jmp     short loc_140C6DC74
 * 0000000140C6DC53: xor     [rdx], r8
 * 0000000140C6DC56: mov     rax, [rdx]
 * 0000000140C6DC59: movzx   ecx, r8b
 * 0000000140C6DC5D: xor     rax, r10
 * 0000000140C6DC60: and     ecx, 3Fh
 * 0000000140C6DC63: ror     r8, cl
 * 0000000140C6DC66: add     r8, rax
 * 0000000140C6DC69: xor     r8, 0F05h
 * 0000000140C6DC70: add     rdx, 8
 * 0000000140C6DC74: cmp     rdx, r9
 * 0000000140C6DC77: jnz     short loc_140C6DC53
 * 0000000140C6DC79: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6DC81: cmp     r8, [rsi+0A80h]
 * 0000000140C6DC88: jz      short loc_140C6DCCB
 * 0000000140C6DC8A: mov     ecx, [rsi+804h]
 * 0000000140C6DC90: mov     rax, [rsi+588h]
 * 0000000140C6DC97: mov     [rax], rsi
 * 0000000140C6DC9A: mov     [rax+10h], ecx
 * 0000000140C6DC9D: mov     rcx, [rsi+0A80h]
 * 0000000140C6DCA4: cmp     [rsi+918h], r11d
 * 0000000140C6DCAB: jnz     short loc_140C6DCBB
 * 0000000140C6DCAD: mov     rax, [rsi+588h]
 * 0000000140C6DCB4: xor     rcx, r8
 * 0000000140C6DCB7: mov     [rax+18h], rcx
 * 0000000140C6DCBB: xor     edx, edx
 * 0000000140C6DCBD: mov     r9d, 100h
 * 0000000140C6DCC3: mov     rcx, rsi
 * 0000000140C6DCC6: call    sub_140C7903C
 * 0000000140C6DCCB: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6DCD0: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140C6DCDA: mov     r8, 0B3B74BDEE4453415h
 * 0000000140C6DCE4: or      r12b, [r15+rbx*2+1]
 * 0000000140C6DCE9: cmp     r12b, [rbp+7B0h+var_800]
 * 0000000140C6DCED: jz      loc_140C6DE00
 * 0000000140C6DCF3: xor     r12d, r12d
 * 0000000140C6DCF6: cmp     [rsi+918h], r12d
 * 0000000140C6DCFD: jnz     loc_140C6DE03
 * 0000000140C6DD03: lea     rax, [rsi+r9]
 * 0000000140C6DD07: mov     [rsi+920h], rax
 * 0000000140C6DD0E: lea     rax, [rdx+r8]
 * 0000000140C6DD12: mov     [rsi+928h], rax
 * 0000000140C6DD19: movsxd  rax, dword ptr [rdx]
 * 0000000140C6DD1C: mov     [rsi+930h], rax
 * 0000000140C6DD23: mov     [rsi+938h], r13
 * 0000000140C6DD2A: mov     [rsi+918h], r14d
 * 0000000140C6DD31: mov     ecx, [rsi+9D8h]
 * 0000000140C6DD37: bt      ecx, 1Dh
 * 0000000140C6DD3B: jb      loc_140C6DE03
 * 0000000140C6DD41: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6DD4B: jz      loc_140C6DE03
 * 0000000140C6DD51: test    r14b, cl
 * 0000000140C6DD54: jz      loc_140C6DE03
 * 0000000140C6DD5A: mov     ecx, [rsi+0A74h]
 * 0000000140C6DD60: mov     eax, [rsi+804h]
 * 0000000140C6DD66: mov     r10, [rsi+838h]
 * 0000000140C6DD6D: sub     eax, ecx
 * 0000000140C6DD6F: mov     r8, [rsi+0A78h]
 * 0000000140C6DD76: lea     rdx, [rcx+rsi]
 * 0000000140C6DD7A: mov     ecx, eax
 * 0000000140C6DD7C: shr     rcx, 3
 * 0000000140C6DD80: lea     r9, [rdx+rcx*8]
 * 0000000140C6DD84: jmp     short loc_140C6DDA7
 * 0000000140C6DD86: xor     [rdx], r8
 * 0000000140C6DD89: mov     rax, [rdx]
 * 0000000140C6DD8C: movzx   ecx, r8b
 * 0000000140C6DD90: xor     rax, r10
 * 0000000140C6DD93: and     ecx, 3Fh
 * 0000000140C6DD96: ror     r8, cl
 * 0000000140C6DD99: add     r8, rax
 * 0000000140C6DD9C: xor     r8, 0F05h
 * 0000000140C6DDA3: add     rdx, 8
 * 0000000140C6DDA7: cmp     rdx, r9
 * 0000000140C6DDAA: jnz     short loc_140C6DD86
 * 0000000140C6DDAC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6DDB4: cmp     r8, [rsi+0A80h]
 * 0000000140C6DDBB: jz      short loc_140C6DE03
 * 0000000140C6DDBD: mov     ecx, [rsi+804h]
 * 0000000140C6DDC3: mov     rax, [rsi+588h]
 * 0000000140C6DDCA: mov     [rax], rsi
 * 0000000140C6DDCD: mov     [rax+10h], ecx
 * 0000000140C6DDD0: mov     rcx, [rsi+0A80h]
 * 0000000140C6DDD7: cmp     [rsi+918h], r12d
 * 0000000140C6DDDE: jnz     short loc_140C6DDEE
 * 0000000140C6DDE0: mov     rax, [rsi+588h]
 * 0000000140C6DDE7: xor     rcx, r8
 * 0000000140C6DDEA: mov     [rax+18h], rcx
 * 0000000140C6DDEE: xor     edx, edx
 * 0000000140C6DDF0: mov     r9d, 100h
 * 0000000140C6DDF6: mov     rcx, rsi
 * 0000000140C6DDF9: call    sub_140C7903C
 * 0000000140C6DDFE: jmp     short loc_140C6DE03
 * 0000000140C6DE00: xor     r12d, r12d
 * 0000000140C6DE03: cmp     r13, [rsi+4D8h]
 * 0000000140C6DE0A: jz      loc_140C6E055
 * 0000000140C6DE10: mov     rax, [rsi+3E0h]
 * 0000000140C6DE17: mov     edx, r14d
 * 0000000140C6DE1A: mov     rcx, r13
 * 0000000140C6DE1D: call    KeGuardDispatchICall
 * 0000000140C6DE22: mov     rbx, rax
 * 0000000140C6DE25: test    rax, rax
 * 0000000140C6DE28: jz      loc_140C6E055
 * 0000000140C6DE2E: mov     rcx, [rax]
 * 0000000140C6DE31: mov     r15, rax
 * 0000000140C6DE34: test    rcx, rcx
 * 0000000140C6DE37: jz      loc_140C6E046
 * 0000000140C6DE3D: mov     dil, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C6DE44: mov     r12, [rbp+7B0h+var_820]
 * 0000000140C6DE48: mov     r15, [rsp+8B0h+var_860]
 * 0000000140C6DE4D: mov     [rsp+8B0h+var_840], rax
 * 0000000140C6DE52: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140C6DE56: mov     [rbx], rcx
 * 0000000140C6DE59: mov     rax, [rsi+1F0h]
 * 0000000140C6DE60: call    KeGuardDispatchICall
 * 0000000140C6DE65: mov     rcx, [rbx+8]
 * 0000000140C6DE69: movzx   edx, [rbp+7B0h+var_800]
 * 0000000140C6DE6D: mov     r14, rcx
 * 0000000140C6DE70: movzx   eax, dil
 * 0000000140C6DE74: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140C6DE7B: cmp     r14, r12
 * 0000000140C6DE7E: cmovz   edx, eax
 * 0000000140C6DE81: mov     rax, [rsi+400h]
 * 0000000140C6DE88: shr     rcx, 6
 * 0000000140C6DE8C: and     cl, 0Fh
 * 0000000140C6DE8F: call    KeGuardDispatchICall
 * 0000000140C6DE94: xor     r11d, r11d
 * 0000000140C6DE97: test    eax, eax
 * 0000000140C6DE99: jnz     loc_140C6E02B
 * 0000000140C6DE9F: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6DEA9: lea     r9d, [r11+1]
 * 0000000140C6DEAD: jz      short loc_140C6DEF9
 * 0000000140C6DEAF: mov     rcx, [rsi+0AC8h]
 * 0000000140C6DEB6: lea     edx, [rax+30h]
 * 0000000140C6DEB9: lea     r8d, [r11+6]
 * 0000000140C6DEBD: mov     rax, [r15]
 * 0000000140C6DEC0: add     edx, 0FFFFFFF8h
 * 0000000140C6DEC3: mov     [rcx], rax
 * 0000000140C6DEC6: add     r15, 8
 * 0000000140C6DECA: add     rcx, 8
 * 0000000140C6DECE: sub     r8, r9
 * 0000000140C6DED1: jnz     short loc_140C6DEBD
 * 0000000140C6DED3: test    edx, edx
 * 0000000140C6DED5: jz      short loc_140C6DEF2
 * 0000000140C6DED7: mov     edi, 0FFFFFFFFh
 * 0000000140C6DEDC: mov     al, [r15]
 * 0000000140C6DEDF: add     r15, r9
 * 0000000140C6DEE2: mov     [rcx], al
 * 0000000140C6DEE4: add     rcx, r9
 * 0000000140C6DEE7: add     edx, edi
 * 0000000140C6DEE9: jnz     short loc_140C6DEDC
 * 0000000140C6DEEB: mov     dil, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C6DEF2: mov     r15, [rsi+0AC8h]
 * 0000000140C6DEF9: mov     [r15+18h], r14
 * 0000000140C6DEFD: mov     rax, [rbx]
 * 0000000140C6DF00: mov     [r15+20h], rax
 * 0000000140C6DF04: mov     eax, [rbx+8]
 * 0000000140C6DF07: shr     rax, 6
 * 0000000140C6DF0B: and     al, 0Fh
 * 0000000140C6DF0D: mov     [r15+28h], al
 * 0000000140C6DF11: cmp     [rsi+918h], r11d
 * 0000000140C6DF18: jnz     loc_140C6E02B
 * 0000000140C6DF1E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6DF28: add     rax, rsi
 * 0000000140C6DF2B: mov     [rsi+920h], rax
 * 0000000140C6DF32: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6DF3C: add     rax, r15
 * 0000000140C6DF3F: mov     [rsi+928h], rax
 * 0000000140C6DF46: movsxd  rax, dword ptr [r15]
 * 0000000140C6DF49: mov     [rsi+930h], rax
 * 0000000140C6DF50: mov     [rsi+938h], r13
 * 0000000140C6DF57: mov     [rsi+918h], r9d
 * 0000000140C6DF5E: mov     ecx, [rsi+9D8h]
 * 0000000140C6DF64: bt      ecx, 1Dh
 * 0000000140C6DF68: jb      loc_140C6E02B
 * 0000000140C6DF6E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6DF78: jz      loc_140C6E02B
 * 0000000140C6DF7E: test    r9b, cl
 * 0000000140C6DF81: jz      loc_140C6E02B
 * 0000000140C6DF87: mov     ecx, [rsi+0A74h]
 * 0000000140C6DF8D: mov     eax, [rsi+804h]
 * 0000000140C6DF93: mov     r10, [rsi+838h]
 * 0000000140C6DF9A: sub     eax, ecx
 * 0000000140C6DF9C: mov     r8, [rsi+0A78h]
 * 0000000140C6DFA3: lea     rdx, [rcx+rsi]
 * 0000000140C6DFA7: mov     ecx, eax
 * 0000000140C6DFA9: shr     rcx, 3
 * 0000000140C6DFAD: lea     r9, [rdx+rcx*8]
 * 0000000140C6DFB1: jmp     short loc_140C6DFD4
 * 0000000140C6DFB3: xor     [rdx], r8
 * 0000000140C6DFB6: mov     rax, [rdx]
 * 0000000140C6DFB9: movzx   ecx, r8b
 * 0000000140C6DFBD: xor     rax, r10
 * 0000000140C6DFC0: and     ecx, 3Fh
 * 0000000140C6DFC3: ror     r8, cl
 * 0000000140C6DFC6: add     r8, rax
 * 0000000140C6DFC9: xor     r8, 0F05h
 * 0000000140C6DFD0: add     rdx, 8
 * 0000000140C6DFD4: cmp     rdx, r9
 * 0000000140C6DFD7: jnz     short loc_140C6DFB3
 * 0000000140C6DFD9: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6DFE1: cmp     r8, [rsi+0A80h]
 * 0000000140C6DFE8: jz      short loc_140C6E02B
 * 0000000140C6DFEA: mov     ecx, [rsi+804h]
 * 0000000140C6DFF0: mov     rax, [rsi+588h]
 * 0000000140C6DFF7: mov     [rax], rsi
 * 0000000140C6DFFA: mov     [rax+10h], ecx
 * 0000000140C6DFFD: mov     rcx, [rsi+0A80h]
 * 0000000140C6E004: cmp     [rsi+918h], r11d
 * 0000000140C6E00B: jnz     short loc_140C6E01B
 * 0000000140C6E00D: mov     rax, [rsi+588h]
 * 0000000140C6E014: xor     rcx, r8
 * 0000000140C6E017: mov     [rax+18h], rcx
 * 0000000140C6E01B: xor     edx, edx
 * 0000000140C6E01D: mov     r9d, 100h
 * 0000000140C6E023: mov     rcx, rsi
 * 0000000140C6E026: call    sub_140C7903C
 * 0000000140C6E02B: add     rbx, 30h ; '0'
 * 0000000140C6E02F: mov     rcx, [rbx]
 * 0000000140C6E032: test    rcx, rcx
 * 0000000140C6E035: jnz     loc_140C6DE52
 * 0000000140C6E03B: mov     r15, [rsp+8B0h+var_840]
 * 0000000140C6E040: lea     edi, [rcx+2]
 * 0000000140C6E043: xor     r12d, r12d
 * 0000000140C6E046: mov     rax, [rsi+108h]
 * 0000000140C6E04D: mov     rcx, r15
 * 0000000140C6E050: call    KeGuardDispatchICall
 * 0000000140C6E055: mov     rax, [rsi+3B0h]
 * 0000000140C6E05C: mov     rcx, r13
 * 0000000140C6E05F: call    KeGuardDispatchICall
 * 0000000140C6E064: mov     r15d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6E069: mov     eax, 8000h
 * 0000000140C6E06E: add     [rsi+848h], eax
 * 0000000140C6E074: mov     rcx, [rsp+8B0h+var_858]
 * 0000000140C6E079: test    rcx, rcx
 * 0000000140C6E07C: jz      short loc_140C6E08A
 * 0000000140C6E07E: mov     rax, [rsi+1F0h]
 * 0000000140C6E085: call    KeGuardDispatchICall
 * 0000000140C6E08A: shl     r15d, 8
 * 0000000140C6E08E: add     [rsi+848h], r15d
 * 0000000140C6E095: jmp     loc_140C710FB
 * 0000000140C6E09A: mov     ecx, r10d
 * 0000000140C6E09D: sub     ecx, 29h ; ')'
 * 0000000140C6E0A0: jz      loc_140C6B635
 * 0000000140C6E0A6: sub     ecx, 1
 * 0000000140C6E0A9: jz      loc_140C6B635
 * 0000000140C6E0AF: sub     ecx, 1
 * 0000000140C6E0B2: jz      loc_140C703EA
 * 0000000140C6E0B8: sub     ecx, 1
 * 0000000140C6E0BB: jz      loc_140C6FA94
 * 0000000140C6E0C1: sub     ecx, edi
 * 0000000140C6E0C3: jz      loc_140C6F99D
 * 0000000140C6E0C9: sub     ecx, 1
 * 0000000140C6E0CC: jz      loc_140C6F708
 * 0000000140C6E0D2: cmp     ecx, 1
 * 0000000140C6E0D5: jz      loc_140C6F35F
 * 0000000140C6E0DB: sub     r10d, edi
 * 0000000140C6E0DE: jz      loc_140C6EBCC
 * 0000000140C6E0E4: sub     r10d, 1
 * 0000000140C6E0E8: jz      loc_140C6E6E6
 * 0000000140C6E0EE: cmp     r10d, 14h
 * 0000000140C6E0F2: jz      loc_140C6E1DB
 * 0000000140C6E0F8: cmp     [rsi+918h], r12d
 * 0000000140C6E0FF: jnz     loc_140C713A3
 * 0000000140C6E105: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6E10F: add     rax, rsi
 * 0000000140C6E112: mov     [rsi+920h], rax
 * 0000000140C6E119: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6E123: add     rax, r13
 * 0000000140C6E126: mov     [rsi+928h], rax
 * 0000000140C6E12D: mov     qword ptr [rsi+930h], 101h
 * 0000000140C6E138: mov     [rsi+938h], r12
 * 0000000140C6E13F: mov     [rsi+918h], r15d
 * 0000000140C6E146: mov     ecx, [rsi+9D8h]
 * 0000000140C6E14C: bt      ecx, 1Dh
 * 0000000140C6E150: jb      loc_140C713A3
 * 0000000140C6E156: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6E160: jz      loc_140C713A3
 * 0000000140C6E166: test    r15b, cl
 * 0000000140C6E169: jz      loc_140C713A3
 * 0000000140C6E16F: mov     ecx, [rsi+0A74h]
 * 0000000140C6E175: mov     eax, [rsi+804h]
 * 0000000140C6E17B: mov     r10, [rsi+838h]
 * 0000000140C6E182: sub     eax, ecx
 * 0000000140C6E184: mov     r8, [rsi+0A78h]
 * 0000000140C6E18B: lea     rdx, [rcx+rsi]
 * 0000000140C6E18F: mov     ecx, eax
 * 0000000140C6E191: shr     rcx, 3
 * 0000000140C6E195: lea     r9, [rdx+rcx*8]
 * 0000000140C6E199: jmp     short loc_140C6E1BC
 * 0000000140C6E19B: xor     [rdx], r8
 * 0000000140C6E19E: mov     rax, [rdx]
 * 0000000140C6E1A1: movzx   ecx, r8b
 * 0000000140C6E1A5: xor     rax, r10
 * 0000000140C6E1A8: and     ecx, 3Fh
 * 0000000140C6E1AB: ror     r8, cl
 * 0000000140C6E1AE: add     r8, rax
 * 0000000140C6E1B1: xor     r8, 0F05h
 * 0000000140C6E1B8: add     rdx, 8
 * 0000000140C6E1BC: cmp     rdx, r9
 * 0000000140C6E1BF: jnz     short loc_140C6E19B
 * 0000000140C6E1C1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6E1C9: cmp     r8, [rsi+0A80h]
 * 0000000140C6E1D0: jz      loc_140C713A3
 * 0000000140C6E1D6: jmp     loc_140C65A63
 * 0000000140C6E1DB: mov     edx, [r13+28h]
 * 0000000140C6E1DF: lea     rcx, [rbp+7B0h+var_2A8]
 * 0000000140C6E1E6: mov     rax, [rsi+1B0h]
 * 0000000140C6E1ED: call    KeGuardDispatchICall
 * 0000000140C6E1F2: mov     rax, [rsi+1E0h]
 * 0000000140C6E1F9: lea     rdx, [rbp+7B0h+var_298]
 * 0000000140C6E200: lea     rcx, [rbp+7B0h+var_2A8]
 * 0000000140C6E207: call    KeGuardDispatchICall
 * 0000000140C6E20C: mov     rax, [rsi+0A58h]
 * 0000000140C6E213: test    rax, rax
 * 0000000140C6E216: jz      short loc_140C6E220
 * 0000000140C6E218: mov     ebx, [rax+320h]
 * 0000000140C6E21E: jmp     short loc_140C6E231
 * 0000000140C6E220: mov     ecx, 832h
 * 0000000140C6E225: rdmsr
 * 0000000140C6E227: shl     rdx, 20h
 * 0000000140C6E22B: or      rax, rdx
 * 0000000140C6E22E: mov     rbx, rax
 * 0000000140C6E231: mov     rax, [rsi+0A58h]
 * 0000000140C6E238: test    rax, rax
 * 0000000140C6E23B: jz      short loc_140C6E246
 * 0000000140C6E23D: mov     r14d, [rax+340h]
 * 0000000140C6E244: jmp     short loc_140C6E257
 * 0000000140C6E246: mov     ecx, 834h
 * 0000000140C6E24B: rdmsr
 * 0000000140C6E24D: shl     rdx, 20h
 * 0000000140C6E251: or      rax, rdx
 * 0000000140C6E254: mov     r14, rax
 * 0000000140C6E257: mov     rax, [rsi+1A8h]
 * 0000000140C6E25E: lea     rcx, [rbp+7B0h+var_298]
 * 0000000140C6E265: call    KeGuardDispatchICall
 * 0000000140C6E26A: mov     ecx, 10h
 * 0000000140C6E26F: test    [rsi+89Bh], cl
 * 0000000140C6E275: jz      loc_140C6E3BA
 * 0000000140C6E27B: cli
 * 0000000140C6E27C: mov     rdx, [rsi+900h]
 * 0000000140C6E283: mov     ecx, 130h
 * 0000000140C6E288: mov     rax, rdx
 * 0000000140C6E28B: mov     r8d, 26h ; '&'
 * 0000000140C6E291: mov     [rax], r12
 * 0000000140C6E294: add     ecx, 0FFFFFFF8h
 * 0000000140C6E297: add     rax, 8
 * 0000000140C6E29B: sub     r8, r15
 * 0000000140C6E29E: jnz     short loc_140C6E291
 * 0000000140C6E2A0: test    ecx, ecx
 * 0000000140C6E2A2: jz      short loc_140C6E2B5
 * 0000000140C6E2A4: mov     r8d, 0FFFFFFFFh
 * 0000000140C6E2AA: mov     [rax], r12b
 * 0000000140C6E2AD: add     rax, r15
 * 0000000140C6E2B0: add     ecx, r8d
 * 0000000140C6E2B3: jnz     short loc_140C6E2AA
 * 0000000140C6E2B5: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140C6E2BC: mov     eax, 12Fh
 * 0000000140C6E2C1: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140C6E2C6: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140C6E2CD: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140C6E2D2: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140C6E2D9: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140C6E2E1: mov     word ptr [rbp+7B0h+var_600], ax
 * 0000000140C6E2E8: lea     rax, [rsi+898h]
 * 0000000140C6E2EF: mov     [rbp+1B2h], rdx
 * 0000000140C6E2F6: mov     rcx, rax
 * 0000000140C6E2F9: mov     [rdx+10h], ax
 * 0000000140C6E2FD: shr     rcx, 10h
 * 0000000140C6E301: mov     [rbp+7B0h+var_3E8], rax
 * 0000000140C6E308: shr     rax, 20h
 * 0000000140C6E30C: mov     [rdx+16h], cx
 * 0000000140C6E310: mov     [rdx+18h], eax
 * 0000000140C6E313: sidt    fword ptr [rbp+7B0h+var_530]
 * 0000000140C6E31A: lidt    fword ptr [rbp+7B0h+var_600]
 * 0000000140C6E321: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C6E32B: jnz     short loc_140C6E36F
 * 0000000140C6E32D: mov     rdx, gs:20h
 * 0000000140C6E336: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C6E340: mov     rax, [rsi+4B8h]
 * 0000000140C6E347: add     rcx, rsi
 * 0000000140C6E34A: mov     [rax], rcx
 * 0000000140C6E34D: mov     rax, [rsi+4C0h]
 * 0000000140C6E354: mov     [rax], rdx
 * 0000000140C6E357: mov     rax, [rsi+4C8h]
 * 0000000140C6E35E: mov     [rax], r12
 * 0000000140C6E361: mov     rax, [rsi+4D0h]
 * 0000000140C6E368: mov     qword ptr [rax], 115h
 * 0000000140C6E36F: call    KiErrata361Present
 * 0000000140C6E374: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C6E37E: jnz     short loc_140C6E3B2
 * 0000000140C6E380: mov     rax, [rsi+4B8h]
 * 0000000140C6E387: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C6E391: mov     [rax], rcx
 * 0000000140C6E394: mov     rax, [rsi+4C0h]
 * 0000000140C6E39B: mov     [rax], r12
 * 0000000140C6E39E: mov     rax, [rsi+4C8h]
 * 0000000140C6E3A5: mov     [rax], r12
 * 0000000140C6E3A8: mov     rax, [rsi+4D0h]
 * 0000000140C6E3AF: mov     [rax], r12
 * 0000000140C6E3B2: lidt    fword ptr [rbp+7B0h+var_530]
 * 0000000140C6E3B9: sti
 * 0000000140C6E3BA: mov     eax, [r13+1Ch]
 * 0000000140C6E3BE: mov     r8d, [r13+18h]
 * 0000000140C6E3C2: and     eax, ebx
 * 0000000140C6E3C4: cmp     eax, r8d
 * 0000000140C6E3C7: jnz     short loc_140C6E3F4
 * 0000000140C6E3C9: bt      ebx, 10h
 * 0000000140C6E3CD: jb      loc_140C6E546
 * 0000000140C6E3D3: movzx   ecx, bl
 * 0000000140C6E3D6: sub     ecx, 0D1h
 * 0000000140C6E3DC: jz      loc_140C6E546
 * 0000000140C6E3E2: sub     ecx, 2Ch ; ','
 * 0000000140C6E3E5: jz      loc_140C6E546
 * 0000000140C6E3EB: cmp     ecx, 1
 * 0000000140C6E3EE: jz      loc_140C6E546
 * 0000000140C6E3F4: mov     edx, [r13+28h]
 * 0000000140C6E3F8: mov     rax, 32000000000h
 * 0000000140C6E402: shl     rdx, 30h
 * 0000000140C6E406: or      rdx, r8
 * 0000000140C6E409: or      rdx, rax
 * 0000000140C6E40C: cmp     [rsi+918h], r12d
 * 0000000140C6E413: jnz     loc_140C6E546
 * 0000000140C6E419: mov     rax, [rsi+588h]
 * 0000000140C6E420: mov     ecx, ebx
 * 0000000140C6E422: xor     rcx, r8
 * 0000000140C6E425: mov     [rax+18h], rcx
 * 0000000140C6E429: cmp     [rsi+918h], r12d
 * 0000000140C6E430: jnz     loc_140C6E546
 * 0000000140C6E436: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6E440: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6E44A: lea     rax, [rsi+r10]
 * 0000000140C6E44E: mov     [rsi+920h], rax
 * 0000000140C6E455: lea     rax, [r9+r13]
 * 0000000140C6E459: mov     [rsi+928h], rax
 * 0000000140C6E460: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6E464: mov     [rsi+930h], rax
 * 0000000140C6E46B: mov     [rsi+938h], rdx
 * 0000000140C6E472: mov     [rsi+918h], r15d
 * 0000000140C6E479: mov     ecx, [rsi+9D8h]
 * 0000000140C6E47F: bt      ecx, 1Dh
 * 0000000140C6E483: jb      loc_140C6E55A
 * 0000000140C6E489: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6E493: jz      loc_140C6E55A
 * 0000000140C6E499: test    r15b, cl
 * 0000000140C6E49C: jz      loc_140C6E55A
 * 0000000140C6E4A2: mov     ecx, [rsi+0A74h]
 * 0000000140C6E4A8: mov     eax, [rsi+804h]
 * 0000000140C6E4AE: mov     r10, [rsi+838h]
 * 0000000140C6E4B5: sub     eax, ecx
 * 0000000140C6E4B7: mov     r8, [rsi+0A78h]
 * 0000000140C6E4BE: lea     rdx, [rcx+rsi]
 * 0000000140C6E4C2: mov     ecx, eax
 * 0000000140C6E4C4: shr     rcx, 3
 * 0000000140C6E4C8: lea     r9, [rdx+rcx*8]
 * 0000000140C6E4CC: jmp     short loc_140C6E4EF
 * 0000000140C6E4CE: xor     [rdx], r8
 * 0000000140C6E4D1: mov     rax, [rdx]
 * 0000000140C6E4D4: movzx   ecx, r8b
 * 0000000140C6E4D8: xor     rax, r10
 * 0000000140C6E4DB: and     ecx, 3Fh
 * 0000000140C6E4DE: ror     r8, cl
 * 0000000140C6E4E1: add     r8, rax
 * 0000000140C6E4E4: xor     r8, 0F05h
 * 0000000140C6E4EB: add     rdx, 8
 * 0000000140C6E4EF: cmp     rdx, r9
 * 0000000140C6E4F2: jnz     short loc_140C6E4CE
 * 0000000140C6E4F4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6E4FC: cmp     r8, [rsi+0A80h]
 * 0000000140C6E503: jz      short loc_140C6E546
 * 0000000140C6E505: mov     ecx, [rsi+804h]
 * 0000000140C6E50B: mov     rax, [rsi+588h]
 * 0000000140C6E512: mov     [rax], rsi
 * 0000000140C6E515: mov     [rax+10h], ecx
 * 0000000140C6E518: mov     rcx, [rsi+0A80h]
 * 0000000140C6E51F: cmp     [rsi+918h], r12d
 * 0000000140C6E526: jnz     short loc_140C6E536
 * 0000000140C6E528: mov     rax, [rsi+588h]
 * 0000000140C6E52F: xor     rcx, r8
 * 0000000140C6E532: mov     [rax+18h], rcx
 * 0000000140C6E536: xor     edx, edx
 * 0000000140C6E538: mov     r9d, 100h
 * 0000000140C6E53E: mov     rcx, rsi
 * 0000000140C6E541: call    sub_140C7903C
 * 0000000140C6E546: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C6E550: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C6E55A: mov     eax, [r13+24h]
 * 0000000140C6E55E: mov     r8d, [r13+20h]
 * 0000000140C6E562: and     eax, r14d
 * 0000000140C6E565: cmp     eax, r8d
 * 0000000140C6E568: jnz     short loc_140C6E597
 * 0000000140C6E56A: bt      r14d, 10h
 * 0000000140C6E56F: jb      loc_140C6E6D6
 * 0000000140C6E575: movzx   ecx, r14b
 * 0000000140C6E579: sub     ecx, 0D1h
 * 0000000140C6E57F: jz      loc_140C6E6D6
 * 0000000140C6E585: sub     ecx, 2Ch ; ','
 * 0000000140C6E588: jz      loc_140C6E6D6
 * 0000000140C6E58E: cmp     ecx, 1
 * 0000000140C6E591: jz      loc_140C6E6D6
 * 0000000140C6E597: mov     edx, [r13+28h]
 * 0000000140C6E59B: mov     rax, 34000000000h
 * 0000000140C6E5A5: shl     rdx, 30h
 * 0000000140C6E5A9: or      rdx, r8
 * 0000000140C6E5AC: or      rdx, rax
 * 0000000140C6E5AF: cmp     [rsi+918h], r12d
 * 0000000140C6E5B6: jnz     loc_140C6E6D6
 * 0000000140C6E5BC: mov     rax, [rsi+588h]
 * 0000000140C6E5C3: mov     ecx, r14d
 * 0000000140C6E5C6: xor     rcx, r8
 * 0000000140C6E5C9: mov     [rax+18h], rcx
 * 0000000140C6E5CD: cmp     [rsi+918h], r12d
 * 0000000140C6E5D4: jnz     loc_140C6E6D6
 * 0000000140C6E5DA: lea     rax, [rsi+r10]
 * 0000000140C6E5DE: mov     [rsi+920h], rax
 * 0000000140C6E5E5: lea     rax, [r9+r13]
 * 0000000140C6E5E9: mov     [rsi+928h], rax
 * 0000000140C6E5F0: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6E5F4: mov     [rsi+930h], rax
 * 0000000140C6E5FB: mov     [rsi+938h], rdx
 * 0000000140C6E602: mov     [rsi+918h], r15d
 * 0000000140C6E609: mov     ecx, [rsi+9D8h]
 * 0000000140C6E60F: bt      ecx, 1Dh
 * 0000000140C6E613: jb      loc_140C6E6D6
 * 0000000140C6E619: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6E623: jz      loc_140C6E6D6
 * 0000000140C6E629: test    r15b, cl
 * 0000000140C6E62C: jz      loc_140C6E6D6
 * 0000000140C6E632: mov     ecx, [rsi+0A74h]
 * 0000000140C6E638: mov     eax, [rsi+804h]
 * 0000000140C6E63E: mov     r10, [rsi+838h]
 * 0000000140C6E645: sub     eax, ecx
 * 0000000140C6E647: mov     r8, [rsi+0A78h]
 * 0000000140C6E64E: lea     rdx, [rcx+rsi]
 * 0000000140C6E652: mov     ecx, eax
 * 0000000140C6E654: shr     rcx, 3
 * 0000000140C6E658: lea     r9, [rdx+rcx*8]
 * 0000000140C6E65C: jmp     short loc_140C6E67F
 * 0000000140C6E65E: xor     [rdx], r8
 * 0000000140C6E661: mov     rax, [rdx]
 * 0000000140C6E664: movzx   ecx, r8b
 * 0000000140C6E668: xor     rax, r10
 * 0000000140C6E66B: and     ecx, 3Fh
 * 0000000140C6E66E: ror     r8, cl
 * 0000000140C6E671: add     r8, rax
 * 0000000140C6E674: xor     r8, 0F05h
 * 0000000140C6E67B: add     rdx, 8
 * 0000000140C6E67F: cmp     rdx, r9
 * 0000000140C6E682: jnz     short loc_140C6E65E
 * 0000000140C6E684: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6E68C: cmp     r8, [rsi+0A80h]
 * 0000000140C6E693: jz      short loc_140C6E6D6
 * 0000000140C6E695: mov     ecx, [rsi+804h]
 * 0000000140C6E69B: mov     rax, [rsi+588h]
 * 0000000140C6E6A2: mov     [rax], rsi
 * 0000000140C6E6A5: mov     [rax+10h], ecx
 * 0000000140C6E6A8: mov     rcx, [rsi+0A80h]
 * 0000000140C6E6AF: cmp     [rsi+918h], r12d
 * 0000000140C6E6B6: jnz     short loc_140C6E6C6
 * 0000000140C6E6B8: mov     rax, [rsi+588h]
 * 0000000140C6E6BF: xor     rcx, r8
 * 0000000140C6E6C2: mov     [rax+18h], rcx
 * 0000000140C6E6C6: xor     edx, edx
 * 0000000140C6E6C8: mov     r9d, 100h
 * 0000000140C6E6CE: mov     rcx, rsi
 * 0000000140C6E6D1: call    sub_140C7903C
 * 0000000140C6E6D6: mov     eax, 8000h
 * 0000000140C6E6DB: add     [rsi+848h], eax
 * 0000000140C6E6E1: jmp     loc_140C6F354
 * 0000000140C6E6E6: mov     edx, [r13+28h]
 * 0000000140C6E6EA: lea     rcx, [rbp+7B0h+var_208]
 * 0000000140C6E6F1: mov     rax, [rsi+1B0h]
 * 0000000140C6E6F8: call    KeGuardDispatchICall
 * 0000000140C6E6FD: mov     rax, [rsi+1E0h]
 * 0000000140C6E704: lea     rdx, [rbp+7B0h+var_280]
 * 0000000140C6E70B: lea     rcx, [rbp+7B0h+var_208]
 * 0000000140C6E712: call    KeGuardDispatchICall
 * 0000000140C6E717: lea     rdx, [rbp+7B0h+var_1E8]
 * 0000000140C6E71E: lea     rcx, [rbp+7B0h+var_688]
 * 0000000140C6E725: call    KiGetGdtIdt
 * 0000000140C6E72A: mov     r12, [rbp+7B0h+var_686]
 * 0000000140C6E731: mov     r14d, [r13+10h]
 * 0000000140C6E735: test    [rsi+89Bh], dil
 * 0000000140C6E73C: jz      loc_140C6E88C
 * 0000000140C6E742: mov     rdx, [rsi+900h]
 * 0000000140C6E749: mov     ecx, 130h
 * 0000000140C6E74E: mov     rax, rdx
 * 0000000140C6E751: mov     r8d, 26h ; '&'
 * 0000000140C6E757: xor     r13d, r13d
 * 0000000140C6E75A: mov     [rax], r13
 * 0000000140C6E75D: add     ecx, 0FFFFFFF8h
 * 0000000140C6E760: add     rax, 8
 * 0000000140C6E764: sub     r8, r15
 * 0000000140C6E767: jnz     short loc_140C6E75A
 * 0000000140C6E769: test    ecx, ecx
 * 0000000140C6E76B: jz      short loc_140C6E777
 * 0000000140C6E76D: mov     [rax], r13b
 * 0000000140C6E770: add     rax, r15
 * 0000000140C6E773: add     ecx, ebx
 * 0000000140C6E775: jnz     short loc_140C6E76D
 * 0000000140C6E777: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140C6E77E: mov     eax, 12Fh
 * 0000000140C6E783: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140C6E788: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140C6E78F: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140C6E794: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140C6E79B: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140C6E7A3: mov     word ptr [rbp+7B0h+var_5F0], ax
 * 0000000140C6E7AA: lea     rax, [rsi+898h]
 * 0000000140C6E7B1: mov     [rbp+1C2h], rdx
 * 0000000140C6E7B8: mov     rcx, rax
 * 0000000140C6E7BB: mov     [rdx+10h], ax
 * 0000000140C6E7BF: shr     rcx, 10h
 * 0000000140C6E7C3: mov     [rbp+7B0h+var_3E0], rax
 * 0000000140C6E7CA: shr     rax, 20h
 * 0000000140C6E7CE: mov     [rdx+16h], cx
 * 0000000140C6E7D2: mov     [rdx+18h], eax
 * 0000000140C6E7D5: cli
 * 0000000140C6E7D6: mov     rcx, rsi
 * 0000000140C6E7D9: call    sub_140C7902C
 * 0000000140C6E7DE: mov     r15d, eax
 * 0000000140C6E7E1: sidt    fword ptr [rbp+7B0h+var_520]
 * 0000000140C6E7E8: lidt    fword ptr [rbp+7B0h+var_5F0]
 * 0000000140C6E7EF: mov     dr7, r13
 * 0000000140C6E7F3: lea     rax, [rsi+89Eh]
 * 0000000140C6E7FA: mov     [rdx+10h], ax
 * 0000000140C6E7FE: mov     rcx, rax
 * 0000000140C6E801: shr     rcx, 10h
 * 0000000140C6E805: shr     rax, 20h
 * 0000000140C6E809: mov     [rdx+16h], cx
 * 0000000140C6E80D: mov     [rdx+18h], eax
 * 0000000140C6E810: test    byte ptr [rsi+89Bh], 20h
 * 0000000140C6E817: jnz     short loc_140C6E827
 * 0000000140C6E819: call    KiErrata704Present
 * 0000000140C6E81E: mov     [rsi+908h], rax
 * 0000000140C6E825: jmp     short loc_140C6E858
 * 0000000140C6E827: lea     rbx, [rsi+8CAh]
 * 0000000140C6E82E: call    KiGetSs
 * 0000000140C6E833: mov     [rbx], ax
 * 0000000140C6E836: mov     dr0, rbx
 * 0000000140C6E839: mov     eax, 70001h
 * 0000000140C6E83E: mov     dr7, rax
 * 0000000140C6E841: mov     rcx, rbx
 * 0000000140C6E844: call    KiErrataSkx55Present
 * 0000000140C6E849: mov     [rsi+908h], rax
 * 0000000140C6E850: mov     dr7, r13
 * 0000000140C6E854: mov     dr0, r13
 * 0000000140C6E858: mov     eax, gs:1A4h
 * 0000000140C6E860: mov     [rsi+910h], eax
 * 0000000140C6E866: lidt    fword ptr [rbp+7B0h+var_520]
 * 0000000140C6E86D: mov     ebx, 40h ; '@'
 * 0000000140C6E872: test    [rsi+89Bh], bl
 * 0000000140C6E878: jz      short loc_140C6E889
 * 0000000140C6E87A: bt      r15d, 12h
 * 0000000140C6E87F: jb      short loc_140C6E886
 * 0000000140C6E881: clac
 * 0000000140C6E884: jmp     short loc_140C6E889
 * 0000000140C6E886: stac
 * 0000000140C6E889: sti
 * 0000000140C6E88A: jmp     short loc_140C6E891
 * 0000000140C6E88C: mov     ebx, 40h ; '@'
 * 0000000140C6E891: call    KiGetLdtr
 * 0000000140C6E896: movzx   r15d, ax
 * 0000000140C6E89A: call    KiGetTr
 * 0000000140C6E89F: add     [rsi+848h], r14d
 * 0000000140C6E8A6: lea     rcx, [r12+r14]
 * 0000000140C6E8AA: mov     r10d, [rsi+834h]
 * 0000000140C6E8B1: mov     r8, r12
 * 0000000140C6E8B4: mov     r11, [rsi+838h]
 * 0000000140C6E8BB: movzx   r13d, ax
 * 0000000140C6E8BF: mov     rax, r12
 * 0000000140C6E8C2: cmp     r12, rcx
 * 0000000140C6E8C5: jnb     short loc_140C6E8D2
 * 0000000140C6E8C7: prefetchnta byte ptr [rax]
 * 0000000140C6E8CA: add     rax, rbx
 * 0000000140C6E8CD: cmp     rax, rcx
 * 0000000140C6E8D0: jb      short loc_140C6E8C7
 * 0000000140C6E8D2: mov     r9d, r14d
 * 0000000140C6E8D5: mov     rbx, r11
 * 0000000140C6E8D8: shr     r9d, 7
 * 0000000140C6E8DC: mov     edx, 1
 * 0000000140C6E8E1: test    r9d, r9d
 * 0000000140C6E8E4: jz      short loc_140C6E953
 * 0000000140C6E8E6: mov     edi, 0FFFFFFFFh
 * 0000000140C6E8EB: mov     rsi, 7010008004002001h
 * 0000000140C6E8F5: mov     eax, 8
 * 0000000140C6E8FA: xor     rbx, [r8]
 * 0000000140C6E8FD: mov     ecx, r10d
 * 0000000140C6E900: rol     rbx, cl
 * 0000000140C6E903: xor     rbx, [r8+8]
 * 0000000140C6E907: add     r8, 10h
 * 0000000140C6E90B: rol     rbx, cl
 * 0000000140C6E90E: sub     rax, rdx
 * 0000000140C6E911: jnz     short loc_140C6E8FA
 * 0000000140C6E913: mov     rcx, r8
 * 0000000140C6E916: sub     rcx, r12
 * 0000000140C6E919: xor     rcx, r11
 * 0000000140C6E91C: mov     rax, rcx
 * 0000000140C6E91F: rol     rax, 11h
 * 0000000140C6E923: xor     rcx, rax
 * 0000000140C6E926: mov     rax, rsi
 * 0000000140C6E929: mul     rcx
 * 0000000140C6E92C: mov     [rbp+7B0h+var_3D8], rdx
 * 0000000140C6E933: xor     rdx, rax
 * 0000000140C6E936: xor     r10d, edx
 * 0000000140C6E939: mov     edx, 1
 * 0000000140C6E93E: and     r10d, 3Fh
 * 0000000140C6E942: cmovz   r10d, edx
 * 0000000140C6E946: add     r9d, edi
 * 0000000140C6E949: jnz     short loc_140C6E8F5
 * 0000000140C6E94B: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6E950: lea     edi, [rdx+1]
 * 0000000140C6E953: and     r14d, 7Fh
 * 0000000140C6E957: cmp     r14d, 8
 * 0000000140C6E95B: jb      short loc_140C6E97A
 * 0000000140C6E95D: mov     eax, r14d
 * 0000000140C6E960: shr     rax, 3
 * 0000000140C6E964: xor     rbx, [r8]
 * 0000000140C6E967: mov     ecx, r10d
 * 0000000140C6E96A: rol     rbx, cl
 * 0000000140C6E96D: add     r8, 8
 * 0000000140C6E971: add     r14d, 0FFFFFFF8h
 * 0000000140C6E975: sub     rax, rdx
 * 0000000140C6E978: jnz     short loc_140C6E964
 * 0000000140C6E97A: xor     r12d, r12d
 * 0000000140C6E97D: test    r14d, r14d
 * 0000000140C6E980: jz      short loc_140C6E9A0
 * 0000000140C6E982: mov     edi, 0FFFFFFFFh
 * 0000000140C6E987: movzx   eax, byte ptr [r8]
 * 0000000140C6E98B: mov     ecx, r10d
 * 0000000140C6E98E: xor     rbx, rax
 * 0000000140C6E991: add     r8, rdx
 * 0000000140C6E994: rol     rbx, cl
 * 0000000140C6E997: add     r14d, edi
 * 0000000140C6E99A: jnz     short loc_140C6E987
 * 0000000140C6E99C: lea     edi, [r14+2]
 * 0000000140C6E9A0: mov     rax, rbx
 * 0000000140C6E9A3: jmp     short loc_140C6E9A7
 * 0000000140C6E9A5: xor     ebx, eax
 * 0000000140C6E9A7: shr     rax, 1Fh
 * 0000000140C6E9AB: test    rax, rax
 * 0000000140C6E9AE: jnz     short loc_140C6E9A5
 * 0000000140C6E9B0: mov     rax, [rsi+1A8h]
 * 0000000140C6E9B7: lea     rcx, [rbp+7B0h+var_280]
 * 0000000140C6E9BE: btr     ebx, 1Fh
 * 0000000140C6E9C2: call    KeGuardDispatchICall
 * 0000000140C6E9C7: mov     r9, [rsp+8B0h+var_860]
 * 0000000140C6E9CC: mov     r11d, 40h ; '@'
 * 0000000140C6E9D2: cmp     ebx, [r9+14h]
 * 0000000140C6E9D6: jnz     short loc_140C6E9F6
 * 0000000140C6E9D8: movzx   eax, word ptr [r9+2Ch]
 * 0000000140C6E9DD: cmp     [rbp+7B0h+var_688], ax
 * 0000000140C6E9E4: jnz     short loc_140C6E9F6
 * 0000000140C6E9E6: test    r15w, r15w
 * 0000000140C6E9EA: jnz     short loc_140C6E9F6
 * 0000000140C6E9EC: cmp     r13w, r11w
 * 0000000140C6E9F0: jz      loc_140C6EBB6
 * 0000000140C6E9F6: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6EA00: jz      short loc_140C6EA4E
 * 0000000140C6EA02: mov     rcx, [rsi+0AC8h]
 * 0000000140C6EA09: mov     edx, 30h ; '0'
 * 0000000140C6EA0E: lea     r8d, [rdx-2Ah]
 * 0000000140C6EA12: lea     r10d, [rdx-2Fh]
 * 0000000140C6EA16: mov     rax, [r9]
 * 0000000140C6EA19: add     edx, 0FFFFFFF8h
 * 0000000140C6EA1C: mov     [rcx], rax
 * 0000000140C6EA1F: add     r9, 8
 * 0000000140C6EA23: add     rcx, 8
 * 0000000140C6EA27: sub     r8, r10
 * 0000000140C6EA2A: jnz     short loc_140C6EA16
 * 0000000140C6EA2C: test    edx, edx
 * 0000000140C6EA2E: jz      short loc_140C6EA47
 * 0000000140C6EA30: mov     edi, 0FFFFFFFFh
 * 0000000140C6EA35: mov     al, [r9]
 * 0000000140C6EA38: add     r9, r10
 * 0000000140C6EA3B: mov     [rcx], al
 * 0000000140C6EA3D: add     rcx, r10
 * 0000000140C6EA40: add     edx, edi
 * 0000000140C6EA42: jnz     short loc_140C6EA35
 * 0000000140C6EA44: lea     edi, [rdx+2]
 * 0000000140C6EA47: mov     r9, [rsi+0AC8h]
 * 0000000140C6EA4E: mov     rax, [rbp+7B0h+var_686]
 * 0000000140C6EA55: mov     edx, ebx
 * 0000000140C6EA57: mov     [r9+18h], rax
 * 0000000140C6EA5B: mov     [r9+20h], rdx
 * 0000000140C6EA5F: test    r15w, r15w
 * 0000000140C6EA63: jz      short loc_140C6EA6B
 * 0000000140C6EA65: mov     [r9+18h], r15
 * 0000000140C6EA69: jmp     short loc_140C6EA75
 * 0000000140C6EA6B: cmp     r13w, r11w
 * 0000000140C6EA6F: jz      short loc_140C6EA75
 * 0000000140C6EA71: mov     [r9+18h], r13
 * 0000000140C6EA75: mov     ecx, [r9+14h]
 * 0000000140C6EA79: cmp     [rsi+918h], r12d
 * 0000000140C6EA80: jnz     short loc_140C6EA90
 * 0000000140C6EA82: mov     rax, [rsi+588h]
 * 0000000140C6EA89: xor     rcx, rdx
 * 0000000140C6EA8C: mov     [rax+18h], rcx
 * 0000000140C6EA90: mov     r15d, 1
 * 0000000140C6EA96: mov     rcx, [r9+8]
 * 0000000140C6EA9A: cmp     [rsi+918h], r12d
 * 0000000140C6EAA1: jnz     loc_140C6EBBC
 * 0000000140C6EAA7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6EAB1: add     rax, rsi
 * 0000000140C6EAB4: mov     [rsi+920h], rax
 * 0000000140C6EABB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6EAC5: add     rax, r9
 * 0000000140C6EAC8: mov     [rsi+928h], rax
 * 0000000140C6EACF: movsxd  rax, dword ptr [r9]
 * 0000000140C6EAD2: mov     [rsi+930h], rax
 * 0000000140C6EAD9: mov     [rsi+938h], rcx
 * 0000000140C6EAE0: mov     [rsi+918h], r15d
 * 0000000140C6EAE7: mov     ecx, [rsi+9D8h]
 * 0000000140C6EAED: bt      ecx, 1Dh
 * 0000000140C6EAF1: jb      loc_140C6EBBC
 * 0000000140C6EAF7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6EB01: jz      loc_140C6EBBC
 * 0000000140C6EB07: test    r15b, cl
 * 0000000140C6EB0A: jz      loc_140C6EBBC
 * 0000000140C6EB10: mov     ecx, [rsi+0A74h]
 * 0000000140C6EB16: mov     eax, [rsi+804h]
 * 0000000140C6EB1C: mov     r10, [rsi+838h]
 * 0000000140C6EB23: sub     eax, ecx
 * 0000000140C6EB25: mov     r8, [rsi+0A78h]
 * 0000000140C6EB2C: lea     rdx, [rcx+rsi]
 * 0000000140C6EB30: mov     ecx, eax
 * 0000000140C6EB32: shr     rcx, 3
 * 0000000140C6EB36: lea     r9, [rdx+rcx*8]
 * 0000000140C6EB3A: jmp     short loc_140C6EB5D
 * 0000000140C6EB3C: xor     [rdx], r8
 * 0000000140C6EB3F: mov     rax, [rdx]
 * 0000000140C6EB42: movzx   ecx, r8b
 * 0000000140C6EB46: xor     rax, r10
 * 0000000140C6EB49: and     ecx, 3Fh
 * 0000000140C6EB4C: ror     r8, cl
 * 0000000140C6EB4F: add     r8, rax
 * 0000000140C6EB52: xor     r8, 0F05h
 * 0000000140C6EB59: add     rdx, 8
 * 0000000140C6EB5D: cmp     rdx, r9
 * 0000000140C6EB60: jnz     short loc_140C6EB3C
 * 0000000140C6EB62: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6EB6A: cmp     r8, [rsi+0A80h]
 * 0000000140C6EB71: jz      short loc_140C6EBBC
 * 0000000140C6EB73: mov     ecx, [rsi+804h]
 * 0000000140C6EB79: mov     rax, [rsi+588h]
 * 0000000140C6EB80: mov     [rax], rsi
 * 0000000140C6EB83: mov     [rax+10h], ecx
 * 0000000140C6EB86: mov     rcx, [rsi+0A80h]
 * 0000000140C6EB8D: cmp     [rsi+918h], r12d
 * 0000000140C6EB94: jnz     short loc_140C6EBA4
 * 0000000140C6EB96: mov     rax, [rsi+588h]
 * 0000000140C6EB9D: xor     rcx, r8
 * 0000000140C6EBA0: mov     [rax+18h], rcx
 * 0000000140C6EBA4: xor     edx, edx
 * 0000000140C6EBA6: mov     r9d, 100h
 * 0000000140C6EBAC: mov     rcx, rsi
 * 0000000140C6EBAF: call    sub_140C7903C
 * 0000000140C6EBB4: jmp     short loc_140C6EBBC
 * 0000000140C6EBB6: mov     r15d, 1
 * 0000000140C6EBBC: mov     ecx, 8000h
 * 0000000140C6EBC1: add     [rsi+848h], ecx
 * 0000000140C6EBC7: jmp     loc_140C6F354
 * 0000000140C6EBCC: mov     edx, [r13+28h]
 * 0000000140C6EBD0: lea     rcx, [rbp+7B0h+var_270]
 * 0000000140C6EBD7: mov     rax, [rsi+1B0h]
 * 0000000140C6EBDE: mov     [rbp+7B0h+var_818], r12d
 * 0000000140C6EBE2: call    KeGuardDispatchICall
 * 0000000140C6EBE7: mov     rax, [rsi+1E0h]
 * 0000000140C6EBEE: lea     rdx, [rbp+7B0h+var_260]
 * 0000000140C6EBF5: lea     rcx, [rbp+7B0h+var_270]
 * 0000000140C6EBFC: call    KeGuardDispatchICall
 * 0000000140C6EC01: lea     rdx, [rbp+7B0h+var_5D0]
 * 0000000140C6EC08: lea     rcx, [rbp+7B0h+var_1D8]
 * 0000000140C6EC0F: call    KiGetGdtIdt
 * 0000000140C6EC14: mov     rcx, [rbp+7B0h+var_5CE]
 * 0000000140C6EC1B: mov     edi, r12d
 * 0000000140C6EC1E: mov     [rbp+7B0h+var_820], rcx
 * 0000000140C6EC22: add     rcx, 4
 * 0000000140C6EC26: mov     [rsp+8B0h+var_858], rcx
 * 0000000140C6EC2B: mov     rax, [rsi+8E8h]
 * 0000000140C6EC32: mov     r9, r12
 * 0000000140C6EC35: mov     [rbp+7B0h+var_738], rax
 * 0000000140C6EC39: mov     r14, r12
 * 0000000140C6EC3C: mov     r8, [rsi+8F0h]
 * 0000000140C6EC43: xor     eax, eax
 * 0000000140C6EC45: mov     r13d, [rsi+8D0h]
 * 0000000140C6EC4C: mov     [rbp+7B0h+var_830], r12d
 * 0000000140C6EC50: mov     [rsp+8B0h+var_848], r12
 * 0000000140C6EC55: mov     r12d, [rsi+8CCh]
 * 0000000140C6EC5C: mov     [rsp+8B0h+var_840], r8
 * 0000000140C6EC61: mov     [rbp+7B0h+var_828], rax
 * 0000000140C6EC65: mov     r15, cr8
 * 0000000140C6EC69: mov     eax, 0Fh
 * 0000000140C6EC6E: mov     cr8, rax
 * 0000000140C6EC72: movzx   eax, word ptr [rcx-4]
 * 0000000140C6EC76: movzx   r10d, word ptr [rcx]
 * 0000000140C6EC7A: mov     word ptr [rbp+7B0h+var_780], ax
 * 0000000140C6EC7E: movzx   eax, word ptr [rcx+2]
 * 0000000140C6EC82: mov     word ptr [rbp+7B0h+var_780+2], ax
 * 0000000140C6EC86: mov     eax, [rcx+4]
 * 0000000140C6EC89: mov     rcx, [rsi+628h]
 * 0000000140C6EC90: mov     dword ptr [rbp+7B0h+var_780+4], eax
 * 0000000140C6EC93: mov     rbx, [rbp+7B0h+var_780]
 * 0000000140C6EC97: mov     eax, edi
 * 0000000140C6EC99: mov     word ptr [rbp+7B0h+arg_8], r10w
 * 0000000140C6ECA1: lea     rdx, [rcx+rax*8]
 * 0000000140C6ECA5: cmp     rbx, rdx
 * 0000000140C6ECA8: jnz     loc_140C6ED4A
 * 0000000140C6ECAE: mov     eax, 6000h
 * 0000000140C6ECB3: test    ax, r10w
 * 0000000140C6ECB7: jz      short loc_140C6ECC3
 * 0000000140C6ECB9: movzx   eax, r15b
 * 0000000140C6ECBD: mov     cr8, rax
 * 0000000140C6ECC1: jmp     short loc_140C6ECF6
 * 0000000140C6ECC3: mov     rax, [rsi+470h]
 * 0000000140C6ECCA: mov     ecx, edi
 * 0000000140C6ECCC: call    KeGuardDispatchICall
 * 0000000140C6ECD1: mov     r14, [rax]
 * 0000000140C6ECD4: xor     eax, eax
 * 0000000140C6ECD6: test    r14, r14
 * 0000000140C6ECD9: jz      short loc_140C6ED3C
 * 0000000140C6ECDB: mov     r12, [r12+r14]
 * 0000000140C6ECDF: mov     [rsp+8B0h+var_848], r12
 * 0000000140C6ECE4: cmp     edi, 30h ; '0'
 * 0000000140C6ECE7: jnb     short loc_140C6ED30
 * 0000000140C6ECE9: movzx   eax, r15b
 * 0000000140C6ECED: mov     cr8, rax
 * 0000000140C6ECF1: mov     r9, [rsp+8B0h+var_848]
 * 0000000140C6ECF6: xor     r12d, r12d
 * 0000000140C6ECF9: mov     rax, [rsi+588h]
 * 0000000140C6ED00: mov     [rax], rbx
 * 0000000140C6ED03: mov     dword ptr [rax+10h], 80h
 * 0000000140C6ED0A: test    r9, r9
 * 0000000140C6ED0D: jz      short loc_140C6ED21
 * 0000000140C6ED0F: mov     rax, [rsi+588h]
 * 0000000140C6ED16: mov     [rax+8], r9
 * 0000000140C6ED1A: mov     dword ptr [rax+14h], 80h
 * 0000000140C6ED21: mov     r13d, 1
 * 0000000140C6ED27: mov     [rbp+7B0h+var_818], r13d
 * 0000000140C6ED2B: jmp     loc_140C6EE3B
 * 0000000140C6ED30: mov     r13, [r13+r14+0]
 * 0000000140C6ED35: mov     r8, [rsp+8B0h+var_840]
 * 0000000140C6ED3A: jmp     short loc_140C6ED53
 * 0000000140C6ED3C: mov     r8, [rsp+8B0h+var_840]
 * 0000000140C6ED41: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140C6ED45: mov     r13, rax
 * 0000000140C6ED48: jmp     short loc_140C6ED4E
 * 0000000140C6ED4A: mov     r13, [rbp+7B0h+var_828]
 * 0000000140C6ED4E: mov     r12, [rsp+8B0h+var_848]
 * 0000000140C6ED53: movzx   eax, r15b
 * 0000000140C6ED57: mov     cr8, rax
 * 0000000140C6ED5B: xor     r15d, r15d
 * 0000000140C6ED5E: test    r14, r14
 * 0000000140C6ED61: jnz     short loc_140C6EDA3
 * 0000000140C6ED63: mov     rdx, [rbp+7B0h+var_738]
 * 0000000140C6ED67: cmp     rbx, rdx
 * 0000000140C6ED6A: jb      short loc_140C6ECF1
 * 0000000140C6ED6C: cmp     rbx, r8
 * 0000000140C6ED6F: ja      short loc_140C6ECF1
 * 0000000140C6ED71: mov     r8d, dword ptr [rbp+7B0h+var_780]
 * 0000000140C6ED75: mov     rcx, [rsi+8F8h]
 * 0000000140C6ED7C: sub     r8d, edx
 * 0000000140C6ED7F: mov     rax, [rsi+220h]
 * 0000000140C6ED86: call    KeGuardDispatchICall
 * 0000000140C6ED8B: test    rax, rax
 * 0000000140C6ED8E: jz      loc_140C6ECF1
 * 0000000140C6ED94: test    dword ptr [rax+24h], 2000000h
 * 0000000140C6ED9B: jnz     loc_140C6ECF1
 * 0000000140C6EDA1: jmp     short loc_140C6EDA7
 * 0000000140C6EDA3: mov     r15d, [rbp+7B0h+var_830]
 * 0000000140C6EDA7: mov     rcx, [rsp+8B0h+var_858]
 * 0000000140C6EDAC: mov     eax, 10h
 * 0000000140C6EDB1: cmp     [rcx-2], ax
 * 0000000140C6EDB5: jnz     loc_140C6ECF1
 * 0000000140C6EDBB: movzx   ecx, word ptr [rcx]
 * 0000000140C6EDBE: mov     edx, 1F00h
 * 0000000140C6EDC3: movzx   eax, cx
 * 0000000140C6EDC6: and     ax, dx
 * 0000000140C6EDC9: mov     edx, 0E00h
 * 0000000140C6EDCE: cmp     ax, dx
 * 0000000140C6EDD1: jnz     loc_140C6ECF1
 * 0000000140C6EDD7: bt      cx, 0Fh
 * 0000000140C6EDDC: jnb     loc_140C6ECF1
 * 0000000140C6EDE2: mov     rax, [rsi+278h]
 * 0000000140C6EDE9: lea     rdx, [rbp+7B0h+var_738]
 * 0000000140C6EDED: xor     r8d, r8d
 * 0000000140C6EDF0: mov     rcx, rbx
 * 0000000140C6EDF3: call    KeGuardDispatchICall
 * 0000000140C6EDF8: test    rax, rax
 * 0000000140C6EDFB: jz      loc_140C6EF63
 * 0000000140C6EE01: test    r15d, r15d
 * 0000000140C6EE04: jnz     loc_140C6EF63
 * 0000000140C6EE0A: mov     eax, [rax]
 * 0000000140C6EE0C: mov     rcx, [rbp+7B0h+var_738]
 * 0000000140C6EE10: add     rax, rcx
 * 0000000140C6EE13: cmp     rax, rbx
 * 0000000140C6EE16: jnz     loc_140C6EF63
 * 0000000140C6EE1C: cmp     rcx, [rsi+8E8h]
 * 0000000140C6EE23: jnz     loc_140C6EF63
 * 0000000140C6EE29: test    r14, r14
 * 0000000140C6EE2C: jnz     loc_140C6EF6C
 * 0000000140C6EE32: xor     r12d, r12d
 * 0000000140C6EE35: mov     r13d, 1
 * 0000000140C6EE3B: mov     rcx, [rsp+8B0h+var_858]
 * 0000000140C6EE40: add     edi, r13d
 * 0000000140C6EE43: add     rcx, 10h
 * 0000000140C6EE47: mov     [rsp+8B0h+var_858], rcx
 * 0000000140C6EE4C: cmp     edi, 0FFh
 * 0000000140C6EE52: jbe     loc_140C6EC2B
 * 0000000140C6EE58: test    [rsi+89Bh], r13b
 * 0000000140C6EE5F: jz      loc_140C6F01A
 * 0000000140C6EE65: cli
 * 0000000140C6EE66: mov     rcx, rsi
 * 0000000140C6EE69: call    sub_140C7902C
 * 0000000140C6EE6E: mov     r9d, 0C0000082h
 * 0000000140C6EE74: mov     r14d, eax
 * 0000000140C6EE77: mov     ecx, r9d
 * 0000000140C6EE7A: rdmsr
 * 0000000140C6EE7C: shl     rdx, 20h
 * 0000000140C6EE80: or      rax, rdx
 * 0000000140C6EE83: lea     rdx, [rsi+89Ah]
 * 0000000140C6EE8A: mov     rbx, rax
 * 0000000140C6EE8D: mov     rax, rdx
 * 0000000140C6EE90: shr     rdx, 20h
 * 0000000140C6EE94: wrmsr
 * 0000000140C6EE96: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C6EEA0: jnz     short loc_140C6EEE4
 * 0000000140C6EEA2: mov     rdx, gs:20h
 * 0000000140C6EEAB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C6EEB5: mov     rax, [rsi+4B8h]
 * 0000000140C6EEBC: add     rcx, rsi
 * 0000000140C6EEBF: mov     [rax], rcx
 * 0000000140C6EEC2: mov     rax, [rsi+4C0h]
 * 0000000140C6EEC9: mov     [rax], rdx
 * 0000000140C6EECC: mov     rax, [rsi+4C8h]
 * 0000000140C6EED3: mov     [rax], r9
 * 0000000140C6EED6: mov     rax, [rsi+4D0h]
 * 0000000140C6EEDD: mov     qword ptr [rax], 112h
 * 0000000140C6EEE4: lea     rax, [rsi+89Ch]
 * 0000000140C6EEEB: call    KeGuardDispatchICall
 * 0000000140C6EEF0: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C6EEFA: jnz     short loc_140C6EF2E
 * 0000000140C6EEFC: mov     rax, [rsi+4B8h]
 * 0000000140C6EF03: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C6EF0D: mov     [rax], rcx
 * 0000000140C6EF10: mov     rax, [rsi+4C0h]
 * 0000000140C6EF17: mov     [rax], r12
 * 0000000140C6EF1A: mov     rax, [rsi+4C8h]
 * 0000000140C6EF21: mov     [rax], r12
 * 0000000140C6EF24: mov     rax, [rsi+4D0h]
 * 0000000140C6EF2B: mov     [rax], r12
 * 0000000140C6EF2E: mov     rdx, rbx
 * 0000000140C6EF31: mov     rax, rbx
 * 0000000140C6EF34: shr     rdx, 20h
 * 0000000140C6EF38: mov     ecx, 0C0000082h
 * 0000000140C6EF3D: wrmsr
 * 0000000140C6EF3F: mov     edx, 40h ; '@'
 * 0000000140C6EF44: test    [rsi+89Bh], dl
 * 0000000140C6EF4A: jz      loc_140C6F017
 * 0000000140C6EF50: bt      r14d, 12h
 * 0000000140C6EF55: jb      loc_140C6F014
 * 0000000140C6EF5B: clac
 * 0000000140C6EF5E: jmp     loc_140C6F017
 * 0000000140C6EF63: test    r14, r14
 * 0000000140C6EF66: jz      loc_140C6ECF1
 * 0000000140C6EF6C: mov     eax, 6000h
 * 0000000140C6EF71: test    word ptr [rbp+7B0h+arg_8], ax
 * 0000000140C6EF78: jnz     loc_140C6ECF1
 * 0000000140C6EF7E: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140C6EF82: jz      loc_140C6EE32
 * 0000000140C6EF88: mov     rax, [rsi+278h]
 * 0000000140C6EF8F: lea     rdx, [rbp+7B0h+var_738]
 * 0000000140C6EF93: xor     r8d, r8d
 * 0000000140C6EF96: mov     rcx, r12
 * 0000000140C6EF99: call    KeGuardDispatchICall
 * 0000000140C6EF9E: test    rax, rax
 * 0000000140C6EFA1: jz      loc_140C6ECF1
 * 0000000140C6EFA7: mov     eax, [rax]
 * 0000000140C6EFA9: mov     rdx, [rbp+7B0h+var_738]
 * 0000000140C6EFAD: add     rax, rdx
 * 0000000140C6EFB0: cmp     rax, r12
 * 0000000140C6EFB3: jnz     short loc_140C6F007
 * 0000000140C6EFB5: cmp     rdx, [rsi+8E8h]
 * 0000000140C6EFBC: jnz     loc_140C6ECF1
 * 0000000140C6EFC2: mov     rcx, [rsi+8F8h]
 * 0000000140C6EFC9: mov     r8d, r12d
 * 0000000140C6EFCC: mov     rax, [rsi+220h]
 * 0000000140C6EFD3: sub     r8d, edx
 * 0000000140C6EFD6: call    KeGuardDispatchICall
 * 0000000140C6EFDB: xor     r12d, r12d
 * 0000000140C6EFDE: test    rax, rax
 * 0000000140C6EFE1: jz      short loc_140C6F00A
 * 0000000140C6EFE3: test    dword ptr [rax+24h], 2000000h
 * 0000000140C6EFEA: jnz     short loc_140C6F00A
 * 0000000140C6EFEC: cmp     edi, 0FEh
 * 0000000140C6EFF2: jnz     loc_140C6EE35
 * 0000000140C6EFF8: cmp     r13, [rsi+8D8h]
 * 0000000140C6EFFF: jz      loc_140C6EE35
 * 0000000140C6F005: jmp     short loc_140C6F00A
 * 0000000140C6F007: xor     r12d, r12d
 * 0000000140C6F00A: mov     r9, [rsp+8B0h+var_848]
 * 0000000140C6F00F: jmp     loc_140C6ECF9
 * 0000000140C6F014: stac
 * 0000000140C6F017: sti
 * 0000000140C6F018: jmp     short loc_140C6F01F
 * 0000000140C6F01A: mov     edx, 40h ; '@'
 * 0000000140C6F01F: mov     r14, [rbp+7B0h+var_820]
 * 0000000140C6F023: add     dword ptr [rsi+848h], 350h
 * 0000000140C6F02D: mov     r8, r14
 * 0000000140C6F030: mov     r9d, [rsi+834h]
 * 0000000140C6F037: mov     rax, r14
 * 0000000140C6F03A: mov     r11, [rsi+838h]
 * 0000000140C6F041: lea     rcx, [r14+350h]
 * 0000000140C6F048: cmp     r14, rcx
 * 0000000140C6F04B: jnb     short loc_140C6F058
 * 0000000140C6F04D: prefetchnta byte ptr [rax]
 * 0000000140C6F050: add     rax, rdx
 * 0000000140C6F053: cmp     rax, rcx
 * 0000000140C6F056: jb      short loc_140C6F04D
 * 0000000140C6F058: mov     rbx, r11
 * 0000000140C6F05B: mov     edi, 0FFFFFFFFh
 * 0000000140C6F060: mov     r10d, 6
 * 0000000140C6F066: mov     r15, 7010008004002001h
 * 0000000140C6F070: mov     eax, 8
 * 0000000140C6F075: xor     rbx, [r8]
 * 0000000140C6F078: mov     ecx, r9d
 * 0000000140C6F07B: rol     rbx, cl
 * 0000000140C6F07E: xor     rbx, [r8+8]
 * 0000000140C6F082: add     r8, 10h
 * 0000000140C6F086: rol     rbx, cl
 * 0000000140C6F089: sub     rax, r13
 * 0000000140C6F08C: jnz     short loc_140C6F075
 * 0000000140C6F08E: mov     rcx, r8
 * 0000000140C6F091: sub     rcx, r14
 * 0000000140C6F094: xor     rcx, r11
 * 0000000140C6F097: mov     rax, rcx
 * 0000000140C6F09A: rol     rax, 11h
 * 0000000140C6F09E: xor     rcx, rax
 * 0000000140C6F0A1: mov     rax, r15
 * 0000000140C6F0A4: mul     rcx
 * 0000000140C6F0A7: mov     [rbp+7B0h+var_3D0], rdx
 * 0000000140C6F0AE: xor     rdx, rax
 * 0000000140C6F0B1: xor     r9d, edx
 * 0000000140C6F0B4: and     r9d, 3Fh
 * 0000000140C6F0B8: cmovz   r9d, r13d
 * 0000000140C6F0BC: add     r10d, edi
 * 0000000140C6F0BF: jnz     short loc_140C6F070
 * 0000000140C6F0C1: mov     r15d, [rbp+7B0h+var_818]
 * 0000000140C6F0C5: lea     edi, [r10+2]
 * 0000000140C6F0C9: lea     edx, [rdi+4Eh]
 * 0000000140C6F0CC: mov     r11d, 0FFFFFFF8h
 * 0000000140C6F0D2: lea     eax, [rdi+8]
 * 0000000140C6F0D5: xor     rbx, [r8]
 * 0000000140C6F0D8: mov     ecx, r9d
 * 0000000140C6F0DB: rol     rbx, cl
 * 0000000140C6F0DE: add     r8, 8
 * 0000000140C6F0E2: add     edx, r11d
 * 0000000140C6F0E5: sub     rax, r13
 * 0000000140C6F0E8: jnz     short loc_140C6F0D5
 * 0000000140C6F0EA: mov     r10d, 0FFFFFFFFh
 * 0000000140C6F0F0: test    edx, edx
 * 0000000140C6F0F2: jz      short loc_140C6F109
 * 0000000140C6F0F4: movzx   eax, byte ptr [r8]
 * 0000000140C6F0F8: mov     ecx, r9d
 * 0000000140C6F0FB: xor     rbx, rax
 * 0000000140C6F0FE: add     r8, r13
 * 0000000140C6F101: rol     rbx, cl
 * 0000000140C6F104: add     edx, r10d
 * 0000000140C6F107: jnz     short loc_140C6F0F4
 * 0000000140C6F109: mov     rax, rbx
 * 0000000140C6F10C: jmp     short loc_140C6F110
 * 0000000140C6F10E: xor     ebx, eax
 * 0000000140C6F110: shr     rax, 1Fh
 * 0000000140C6F114: test    rax, rax
 * 0000000140C6F117: jnz     short loc_140C6F10E
 * 0000000140C6F119: lea     rdx, [r14+0E10h]
 * 0000000140C6F120: btr     ebx, 1Fh
 * 0000000140C6F124: lea     ecx, [rax+10h]
 * 0000000140C6F127: mov     rax, rdx
 * 0000000140C6F12A: add     [rsi+848h], ecx
 * 0000000140C6F130: lea     rcx, [rdx+10h]
 * 0000000140C6F134: mov     r9d, [rsi+834h]
 * 0000000140C6F13B: mov     r14, [rsi+838h]
 * 0000000140C6F142: cmp     rdx, rcx
 * 0000000140C6F145: jnb     short loc_140C6F158
 * 0000000140C6F147: mov     r8d, 40h ; '@'
 * 0000000140C6F14D: prefetchnta byte ptr [rax]
 * 0000000140C6F150: add     rax, r8
 * 0000000140C6F153: cmp     rax, rcx
 * 0000000140C6F156: jb      short loc_140C6F14D
 * 0000000140C6F158: mov     r8d, 10h
 * 0000000140C6F15E: mov     rax, rdi
 * 0000000140C6F161: xor     r14, [rdx]
 * 0000000140C6F164: mov     ecx, r9d
 * 0000000140C6F167: rol     r14, cl
 * 0000000140C6F16A: add     rdx, 8
 * 0000000140C6F16E: add     r8d, r11d
 * 0000000140C6F171: sub     rax, r13
 * 0000000140C6F174: jnz     short loc_140C6F161
 * 0000000140C6F176: test    r8d, r8d
 * 0000000140C6F179: jz      short loc_140C6F18F
 * 0000000140C6F17B: movzx   eax, byte ptr [rdx]
 * 0000000140C6F17E: mov     ecx, r9d
 * 0000000140C6F181: xor     r14, rax
 * 0000000140C6F184: add     rdx, r13
 * 0000000140C6F187: rol     r14, cl
 * 0000000140C6F18A: add     r8d, r10d
 * 0000000140C6F18D: jnz     short loc_140C6F17B
 * 0000000140C6F18F: mov     rax, r14
 * 0000000140C6F192: jmp     short loc_140C6F197
 * 0000000140C6F194: xor     r14d, eax
 * 0000000140C6F197: shr     rax, 1Fh
 * 0000000140C6F19B: test    rax, rax
 * 0000000140C6F19E: jnz     short loc_140C6F194
 * 0000000140C6F1A0: mov     rax, [rsi+1A8h]
 * 0000000140C6F1A7: lea     rcx, [rbp+7B0h+var_260]
 * 0000000140C6F1AE: btr     r14d, 1Fh
 * 0000000140C6F1B3: call    KeGuardDispatchICall
 * 0000000140C6F1B8: mov     r8, [rsp+8B0h+var_860]
 * 0000000140C6F1BD: mov     edx, [r8+14h]
 * 0000000140C6F1C1: cmp     ebx, edx
 * 0000000140C6F1C3: jnz     short loc_140C6F1E5
 * 0000000140C6F1C5: mov     eax, r14d
 * 0000000140C6F1C8: cmp     rax, [r8+18h]
 * 0000000140C6F1CC: jnz     short loc_140C6F1E5
 * 0000000140C6F1CE: movzx   eax, word ptr [r8+2Ch]
 * 0000000140C6F1D3: cmp     [rbp+7B0h+var_5D0], ax
 * 0000000140C6F1DA: jnz     short loc_140C6F1E5
 * 0000000140C6F1DC: test    r15d, r15d
 * 0000000140C6F1DF: jz      loc_140C6F344
 * 0000000140C6F1E5: test    r15d, r15d
 * 0000000140C6F1E8: jnz     short loc_140C6F21E
 * 0000000140C6F1EA: mov     ecx, r14d
 * 0000000140C6F1ED: cmp     rcx, [r8+18h]
 * 0000000140C6F1F1: jnz     short loc_140C6F203
 * 0000000140C6F1F3: cmp     [rsi+918h], r12d
 * 0000000140C6F1FA: jnz     short loc_140C6F21E
 * 0000000140C6F1FC: mov     ecx, ebx
 * 0000000140C6F1FE: xor     rcx, rdx
 * 0000000140C6F201: jmp     short loc_140C6F213
 * 0000000140C6F203: mov     eax, [r8+18h]
 * 0000000140C6F207: cmp     [rsi+918h], r12d
 * 0000000140C6F20E: jnz     short loc_140C6F21E
 * 0000000140C6F210: xor     rcx, rax
 * 0000000140C6F213: mov     rax, [rsi+588h]
 * 0000000140C6F21A: mov     [rax+18h], rcx
 * 0000000140C6F21E: mov     r15d, 1
 * 0000000140C6F224: mov     rcx, [r8+8]
 * 0000000140C6F228: cmp     [rsi+918h], r12d
 * 0000000140C6F22F: jnz     loc_140C6F34A
 * 0000000140C6F235: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F23F: add     rax, rsi
 * 0000000140C6F242: mov     [rsi+920h], rax
 * 0000000140C6F249: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6F253: add     rax, r8
 * 0000000140C6F256: mov     [rsi+928h], rax
 * 0000000140C6F25D: movsxd  rax, dword ptr [r8]
 * 0000000140C6F260: mov     [rsi+930h], rax
 * 0000000140C6F267: mov     [rsi+938h], rcx
 * 0000000140C6F26E: mov     [rsi+918h], r15d
 * 0000000140C6F275: mov     ecx, [rsi+9D8h]
 * 0000000140C6F27B: bt      ecx, 1Dh
 * 0000000140C6F27F: jb      loc_140C6F34A
 * 0000000140C6F285: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6F28F: jz      loc_140C6F34A
 * 0000000140C6F295: test    r15b, cl
 * 0000000140C6F298: jz      loc_140C6F34A
 * 0000000140C6F29E: mov     ecx, [rsi+0A74h]
 * 0000000140C6F2A4: mov     eax, [rsi+804h]
 * 0000000140C6F2AA: mov     r10, [rsi+838h]
 * 0000000140C6F2B1: sub     eax, ecx
 * 0000000140C6F2B3: mov     r8, [rsi+0A78h]
 * 0000000140C6F2BA: lea     rdx, [rcx+rsi]
 * 0000000140C6F2BE: mov     ecx, eax
 * 0000000140C6F2C0: shr     rcx, 3
 * 0000000140C6F2C4: lea     r9, [rdx+rcx*8]
 * 0000000140C6F2C8: jmp     short loc_140C6F2EB
 * 0000000140C6F2CA: xor     [rdx], r8
 * 0000000140C6F2CD: mov     rax, [rdx]
 * 0000000140C6F2D0: movzx   ecx, r8b
 * 0000000140C6F2D4: xor     rax, r10
 * 0000000140C6F2D7: and     ecx, 3Fh
 * 0000000140C6F2DA: ror     r8, cl
 * 0000000140C6F2DD: add     r8, rax
 * 0000000140C6F2E0: xor     r8, 0F05h
 * 0000000140C6F2E7: add     rdx, 8
 * 0000000140C6F2EB: cmp     rdx, r9
 * 0000000140C6F2EE: jnz     short loc_140C6F2CA
 * 0000000140C6F2F0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6F2F8: cmp     r8, [rsi+0A80h]
 * 0000000140C6F2FF: jz      short loc_140C6F34A
 * 0000000140C6F301: mov     ecx, [rsi+804h]
 * 0000000140C6F307: mov     rax, [rsi+588h]
 * 0000000140C6F30E: mov     [rax], rsi
 * 0000000140C6F311: mov     [rax+10h], ecx
 * 0000000140C6F314: mov     rcx, [rsi+0A80h]
 * 0000000140C6F31B: cmp     [rsi+918h], r12d
 * 0000000140C6F322: jnz     short loc_140C6F332
 * 0000000140C6F324: mov     rax, [rsi+588h]
 * 0000000140C6F32B: xor     rcx, r8
 * 0000000140C6F32E: mov     [rax+18h], rcx
 * 0000000140C6F332: xor     edx, edx
 * 0000000140C6F334: mov     r9d, 100h
 * 0000000140C6F33A: mov     rcx, rsi
 * 0000000140C6F33D: call    sub_140C7903C
 * 0000000140C6F342: jmp     short loc_140C6F34A
 * 0000000140C6F344: mov     r15d, 1
 * 0000000140C6F34A: add     dword ptr [rsi+848h], 10000h
 * 0000000140C6F354: mov     r11d, 1000h
 * 0000000140C6F35A: jmp     loc_140C713A3
 * 0000000140C6F35F: cmp     [r13+10h], r12d
 * 0000000140C6F363: jz      loc_140C713A3
 * 0000000140C6F369: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140C6F373: jz      short loc_140C6F394
 * 0000000140C6F375: mov     rcx, [rsi+4D8h]
 * 0000000140C6F37C: cli
 * 0000000140C6F37D: mov     eax, [rsi+9D8h]
 * 0000000140C6F383: shr     eax, 9
 * 0000000140C6F386: and     eax, 1Fh
 * 0000000140C6F389: lock bts [rcx], eax
 * 0000000140C6F38D: jnb     short loc_140C6F394
 * 0000000140C6F38F: sti
 * 0000000140C6F390: pause
 * 0000000140C6F392: jmp     short loc_140C6F37C
 * 0000000140C6F394: mov     r14, [r13+8]
 * 0000000140C6F398: mov     r8d, [r13+10h]
 * 0000000140C6F39C: mov     r9, r14
 * 0000000140C6F39F: add     [rsi+848h], r8d
 * 0000000140C6F3A6: mov     rax, r14
 * 0000000140C6F3A9: mov     r10d, [rsi+834h]
 * 0000000140C6F3B0: mov     r15, [rsi+838h]
 * 0000000140C6F3B7: lea     rcx, [r14+r8]
 * 0000000140C6F3BB: cmp     r14, rcx
 * 0000000140C6F3BE: jnb     short loc_140C6F3D0
 * 0000000140C6F3C0: mov     edx, 40h ; '@'
 * 0000000140C6F3C5: prefetchnta byte ptr [rax]
 * 0000000140C6F3C8: add     rax, rdx
 * 0000000140C6F3CB: cmp     rax, rcx
 * 0000000140C6F3CE: jb      short loc_140C6F3C5
 * 0000000140C6F3D0: mov     r11d, r8d
 * 0000000140C6F3D3: mov     rbx, r15
 * 0000000140C6F3D6: shr     r11d, 7
 * 0000000140C6F3DA: mov     edx, 1
 * 0000000140C6F3DF: test    r11d, r11d
 * 0000000140C6F3E2: jz      short loc_140C6F451
 * 0000000140C6F3E4: mov     edi, 0FFFFFFFFh
 * 0000000140C6F3E9: mov     rsi, 7010008004002001h
 * 0000000140C6F3F3: mov     eax, 8
 * 0000000140C6F3F8: xor     rbx, [r9]
 * 0000000140C6F3FB: mov     ecx, r10d
 * 0000000140C6F3FE: rol     rbx, cl
 * 0000000140C6F401: xor     rbx, [r9+8]
 * 0000000140C6F405: add     r9, 10h
 * 0000000140C6F409: rol     rbx, cl
 * 0000000140C6F40C: sub     rax, rdx
 * 0000000140C6F40F: jnz     short loc_140C6F3F8
 * 0000000140C6F411: mov     rcx, r9
 * 0000000140C6F414: sub     rcx, r14
 * 0000000140C6F417: xor     rcx, r15
 * 0000000140C6F41A: mov     rax, rcx
 * 0000000140C6F41D: rol     rax, 11h
 * 0000000140C6F421: xor     rcx, rax
 * 0000000140C6F424: mov     rax, rsi
 * 0000000140C6F427: mul     rcx
 * 0000000140C6F42A: mov     [rbp+7B0h+var_3C8], rdx
 * 0000000140C6F431: xor     rdx, rax
 * 0000000140C6F434: xor     r10d, edx
 * 0000000140C6F437: mov     edx, 1
 * 0000000140C6F43C: and     r10d, 3Fh
 * 0000000140C6F440: cmovz   r10d, edx
 * 0000000140C6F444: add     r11d, edi
 * 0000000140C6F447: jnz     short loc_140C6F3F3
 * 0000000140C6F449: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6F44E: lea     edi, [rdx+1]
 * 0000000140C6F451: and     r8d, 7Fh
 * 0000000140C6F455: cmp     r8d, 8
 * 0000000140C6F459: jb      short loc_140C6F478
 * 0000000140C6F45B: mov     eax, r8d
 * 0000000140C6F45E: shr     rax, 3
 * 0000000140C6F462: xor     rbx, [r9]
 * 0000000140C6F465: mov     ecx, r10d
 * 0000000140C6F468: rol     rbx, cl
 * 0000000140C6F46B: add     r9, 8
 * 0000000140C6F46F: add     r8d, 0FFFFFFF8h
 * 0000000140C6F473: sub     rax, rdx
 * 0000000140C6F476: jnz     short loc_140C6F462
 * 0000000140C6F478: test    r8d, r8d
 * 0000000140C6F47B: jz      short loc_140C6F49B
 * 0000000140C6F47D: mov     edi, 0FFFFFFFFh
 * 0000000140C6F482: movzx   eax, byte ptr [r9]
 * 0000000140C6F486: mov     ecx, r10d
 * 0000000140C6F489: xor     rbx, rax
 * 0000000140C6F48C: add     r9, rdx
 * 0000000140C6F48F: rol     rbx, cl
 * 0000000140C6F492: add     r8d, edi
 * 0000000140C6F495: jnz     short loc_140C6F482
 * 0000000140C6F497: lea     edi, [r8+2]
 * 0000000140C6F49B: mov     rax, rbx
 * 0000000140C6F49E: jmp     short loc_140C6F4A2
 * 0000000140C6F4A0: xor     ebx, eax
 * 0000000140C6F4A2: shr     rax, 1Fh
 * 0000000140C6F4A6: test    rax, rax
 * 0000000140C6F4A9: jnz     short loc_140C6F4A0
 * 0000000140C6F4AB: btr     ebx, 1Fh
 * 0000000140C6F4AF: cmp     ebx, [r13+14h]
 * 0000000140C6F4B3: jz      loc_140C6F6C7
 * 0000000140C6F4B9: cmp     [r13+0], eax
 * 0000000140C6F4BD: jnz     short loc_140C6F4C7
 * 0000000140C6F4BF: cmp     [r13+18h], eax
 * 0000000140C6F4C3: cmovnz  r12d, edx
 * 0000000140C6F4C7: mov     ecx, [r13+10h]
 * 0000000140C6F4CB: mov     rdx, [r13+8]
 * 0000000140C6F4CF: test    rcx, rcx
 * 0000000140C6F4D2: jz      loc_140C6F580
 * 0000000140C6F4D8: mov     eax, [rsi+9DCh]
 * 0000000140C6F4DE: mov     r8d, 40h ; '@'
 * 0000000140C6F4E4: test    r8b, al
 * 0000000140C6F4E7: jz      loc_140C6F580
 * 0000000140C6F4ED: mov     r15, cr8
 * 0000000140C6F4F1: mov     r14, rdx
 * 0000000140C6F4F4: lea     rax, [rcx-1]
 * 0000000140C6F4F8: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6F4FF: add     rax, rdx
 * 0000000140C6F502: or      rax, 0FFFh
 * 0000000140C6F508: mov     [rbp+7B0h+var_820], rax
 * 0000000140C6F50C: lea     r13, [r14-1]
 * 0000000140C6F510: mov     cr8, rdi
 * 0000000140C6F514: mov     rax, [rsi+468h]
 * 0000000140C6F51B: xor     edx, edx
 * 0000000140C6F51D: mov     rcx, r14
 * 0000000140C6F520: call    KeGuardDispatchICall
 * 0000000140C6F525: cmp     eax, 0C000022Dh
 * 0000000140C6F52A: jnz     short loc_140C6F548
 * 0000000140C6F52C: test    r12d, r12d
 * 0000000140C6F52F: jnz     short loc_140C6F573
 * 0000000140C6F531: lea     eax, [r12+1]
 * 0000000140C6F536: cmp     r15b, al
 * 0000000140C6F539: ja      short loc_140C6F54C
 * 0000000140C6F53B: movzx   eax, r15b
 * 0000000140C6F53F: mov     cr8, rax
 * 0000000140C6F543: mov     al, [r14]
 * 0000000140C6F546: jmp     short loc_140C6F510
 * 0000000140C6F548: test    eax, eax
 * 0000000140C6F54A: js      short loc_140C6F573
 * 0000000140C6F54C: mov     r11d, 1000h
 * 0000000140C6F552: add     r14, r11
 * 0000000140C6F555: add     r13, r11
 * 0000000140C6F558: cmp     r13, [rbp+7B0h+var_820]
 * 0000000140C6F55C: jnz     short loc_140C6F514
 * 0000000140C6F55E: movzx   eax, r15b
 * 0000000140C6F562: mov     cr8, rax
 * 0000000140C6F566: xor     r12d, r12d
 * 0000000140C6F569: lea     r15d, [r12+1]
 * 0000000140C6F56E: jmp     loc_140C6F6D5
 * 0000000140C6F573: movzx   eax, r15b
 * 0000000140C6F577: mov     cr8, rax
 * 0000000140C6F57B: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6F580: mov     eax, [r13+14h]
 * 0000000140C6F584: xor     r12d, r12d
 * 0000000140C6F587: cmp     [rsi+918h], r12d
 * 0000000140C6F58E: jnz     short loc_140C6F5A0
 * 0000000140C6F590: mov     ecx, ebx
 * 0000000140C6F592: xor     rcx, rax
 * 0000000140C6F595: mov     rax, [rsi+588h]
 * 0000000140C6F59C: mov     [rax+18h], rcx
 * 0000000140C6F5A0: mov     r15d, 1
 * 0000000140C6F5A6: mov     rcx, [r13+8]
 * 0000000140C6F5AA: cmp     [rsi+918h], r12d
 * 0000000140C6F5B1: jnz     loc_140C6F6CF
 * 0000000140C6F5B7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F5C1: add     rax, rsi
 * 0000000140C6F5C4: mov     [rsi+920h], rax
 * 0000000140C6F5CB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6F5D5: add     rax, r13
 * 0000000140C6F5D8: mov     [rsi+928h], rax
 * 0000000140C6F5DF: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6F5E3: mov     [rsi+930h], rax
 * 0000000140C6F5EA: mov     [rsi+938h], rcx
 * 0000000140C6F5F1: mov     [rsi+918h], r15d
 * 0000000140C6F5F8: mov     ecx, [rsi+9D8h]
 * 0000000140C6F5FE: bt      ecx, 1Dh
 * 0000000140C6F602: jb      loc_140C6F6CF
 * 0000000140C6F608: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6F612: jz      loc_140C6F6CF
 * 0000000140C6F618: test    r15b, cl
 * 0000000140C6F61B: jz      loc_140C6F6CF
 * 0000000140C6F621: mov     ecx, [rsi+0A74h]
 * 0000000140C6F627: mov     eax, [rsi+804h]
 * 0000000140C6F62D: mov     r10, [rsi+838h]
 * 0000000140C6F634: sub     eax, ecx
 * 0000000140C6F636: mov     r8, [rsi+0A78h]
 * 0000000140C6F63D: lea     rdx, [rcx+rsi]
 * 0000000140C6F641: mov     ecx, eax
 * 0000000140C6F643: shr     rcx, 3
 * 0000000140C6F647: lea     r9, [rdx+rcx*8]
 * 0000000140C6F64B: jmp     short loc_140C6F66E
 * 0000000140C6F64D: xor     [rdx], r8
 * 0000000140C6F650: mov     rax, [rdx]
 * 0000000140C6F653: movzx   ecx, r8b
 * 0000000140C6F657: xor     rax, r10
 * 0000000140C6F65A: and     ecx, 3Fh
 * 0000000140C6F65D: ror     r8, cl
 * 0000000140C6F660: add     r8, rax
 * 0000000140C6F663: xor     r8, 0F05h
 * 0000000140C6F66A: add     rdx, 8
 * 0000000140C6F66E: cmp     rdx, r9
 * 0000000140C6F671: jnz     short loc_140C6F64D
 * 0000000140C6F673: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6F67B: cmp     r8, [rsi+0A80h]
 * 0000000140C6F682: jz      short loc_140C6F6CF
 * 0000000140C6F684: mov     ecx, [rsi+804h]
 * 0000000140C6F68A: mov     rax, [rsi+588h]
 * 0000000140C6F691: mov     [rax], rsi
 * 0000000140C6F694: mov     [rax+10h], ecx
 * 0000000140C6F697: mov     rcx, [rsi+0A80h]
 * 0000000140C6F69E: cmp     [rsi+918h], r12d
 * 0000000140C6F6A5: jnz     short loc_140C6F6B5
 * 0000000140C6F6A7: mov     rax, [rsi+588h]
 * 0000000140C6F6AE: xor     rcx, r8
 * 0000000140C6F6B1: mov     [rax+18h], rcx
 * 0000000140C6F6B5: xor     edx, edx
 * 0000000140C6F6B7: mov     r9d, 100h
 * 0000000140C6F6BD: mov     rcx, rsi
 * 0000000140C6F6C0: call    sub_140C7903C
 * 0000000140C6F6C5: jmp     short loc_140C6F6CF
 * 0000000140C6F6C7: xor     r12d, r12d
 * 0000000140C6F6CA: lea     r15d, [r12+1]
 * 0000000140C6F6CF: mov     r11d, 1000h
 * 0000000140C6F6D5: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140C6F6DF: jz      loc_140C713A3
 * 0000000140C6F6E5: mov     ecx, [rsi+9D8h]
 * 0000000140C6F6EB: mov     eax, r15d
 * 0000000140C6F6EE: mov     rdx, [rsi+4D8h]
 * 0000000140C6F6F5: shr     ecx, 9
 * 0000000140C6F6F8: and     ecx, 1Fh
 * 0000000140C6F6FB: shl     eax, cl
 * 0000000140C6F6FD: not     eax
 * 0000000140C6F6FF: lock and [rdx], eax
 * 0000000140C6F702: sti
 * 0000000140C6F703: jmp     loc_140C713A3
 * 0000000140C6F708: mov     rcx, gs:20h
 * 0000000140C6F711: mov     rax, [rsi+658h]
 * 0000000140C6F718: mov     rcx, [rax+rcx]
 * 0000000140C6F71C: mov     rax, [rsi+698h]
 * 0000000140C6F723: add     rcx, [rsi+6B8h]
 * 0000000140C6F72A: mov     rcx, [rcx+rax]
 * 0000000140C6F72E: mov     [rbp+7B0h+var_7C0], rcx
 * 0000000140C6F732: mov     rax, [rsi+490h]
 * 0000000140C6F739: call    KeGuardDispatchICall
 * 0000000140C6F73E: mov     r14, rax
 * 0000000140C6F741: cmp     rax, rbx
 * 0000000140C6F744: jnz     loc_140C6F87B
 * 0000000140C6F74A: mov     [rbp+7B0h+var_7C0], r12
 * 0000000140C6F74E: mov     rcx, [rsi+9D0h]
 * 0000000140C6F755: test    rcx, rcx
 * 0000000140C6F758: jz      short loc_140C6F780
 * 0000000140C6F75A: mov     rax, [rsi+480h]
 * 0000000140C6F761: lea     rdx, [rbp+7B0h+var_7C0]
 * 0000000140C6F765: call    KeGuardDispatchICall
 * 0000000140C6F76A: test    eax, eax
 * 0000000140C6F76C: jns     short loc_140C6F777
 * 0000000140C6F76E: mov     rax, r12
 * 0000000140C6F771: mov     [rbp+7B0h+var_7C0], rax
 * 0000000140C6F775: jmp     short loc_140C6F77B
 * 0000000140C6F777: mov     rax, [rbp+7B0h+var_7C0]
 * 0000000140C6F77B: test    rax, rax
 * 0000000140C6F77E: jnz     short loc_140C6F792
 * 0000000140C6F780: mov     rax, [rsi+3C8h]
 * 0000000140C6F787: xor     ecx, ecx
 * 0000000140C6F789: call    KeGuardDispatchICall
 * 0000000140C6F78E: mov     [rbp+7B0h+var_7C0], rax
 * 0000000140C6F792: mov     [rsi+9D0h], r12
 * 0000000140C6F799: mov     ebx, r12d
 * 0000000140C6F79C: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C6F7A0: test    rcx, rcx
 * 0000000140C6F7A3: jz      loc_140C6F86A
 * 0000000140C6F7A9: mov     rax, [rsi+3A8h]
 * 0000000140C6F7B0: add     ebx, r15d
 * 0000000140C6F7B3: call    KeGuardDispatchICall
 * 0000000140C6F7B8: test    eax, eax
 * 0000000140C6F7BA: js      short loc_140C6F817
 * 0000000140C6F7BC: mov     rax, [rsi+440h]
 * 0000000140C6F7C3: lea     rdx, [rbp+7B0h+var_A0]
 * 0000000140C6F7CA: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C6F7CE: call    KeGuardDispatchICall
 * 0000000140C6F7D3: mov     rax, [rsi+490h]
 * 0000000140C6F7DA: call    KeGuardDispatchICall
 * 0000000140C6F7DF: mov     r14, rax
 * 0000000140C6F7E2: lea     rcx, [rbp+7B0h+var_A0]
 * 0000000140C6F7E9: mov     rax, [rsi+448h]
 * 0000000140C6F7F0: call    KeGuardDispatchICall
 * 0000000140C6F7F5: mov     rax, [rsi+3B0h]
 * 0000000140C6F7FC: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C6F800: call    KeGuardDispatchICall
 * 0000000140C6F805: mov     eax, 0FFFFFFFFh
 * 0000000140C6F80A: cmp     r14, rax
 * 0000000140C6F80D: jnz     short loc_140C6F839
 * 0000000140C6F80F: cmp     ebx, 100h
 * 0000000140C6F815: ja      short loc_140C6F839
 * 0000000140C6F817: mov     rax, [rsi+3C8h]
 * 0000000140C6F81E: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C6F822: call    KeGuardDispatchICall
 * 0000000140C6F827: mov     [rbp+7B0h+var_7C0], rax
 * 0000000140C6F82B: mov     rcx, rax
 * 0000000140C6F82E: test    rax, rax
 * 0000000140C6F831: jnz     loc_140C6F7A9
 * 0000000140C6F837: jmp     short loc_140C6F86A
 * 0000000140C6F839: mov     rax, [rsi+488h]
 * 0000000140C6F840: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C6F844: call    KeGuardDispatchICall
 * 0000000140C6F849: mov     [rsi+9D0h], rax
 * 0000000140C6F850: mov     rax, [rsi+1F0h]
 * 0000000140C6F857: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C6F85B: call    KeGuardDispatchICall
 * 0000000140C6F860: mov     eax, 0FFFFFFFFh
 * 0000000140C6F865: cmp     r14, rax
 * 0000000140C6F868: jnz     short loc_140C6F878
 * 0000000140C6F86A: shl     ebx, 0Ch
 * 0000000140C6F86D: add     [rsi+848h], ebx
 * 0000000140C6F873: jmp     loc_140C6F354
 * 0000000140C6F878: mov     rbx, rax
 * 0000000140C6F87B: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140C6F883: jnb     short loc_140C6F8C7
 * 0000000140C6F885: mov     rcx, [rsi+0AC8h]
 * 0000000140C6F88C: mov     edx, 30h ; '0'
 * 0000000140C6F891: lea     r8d, [rdx-2Ah]
 * 0000000140C6F895: mov     rax, [r13+0]
 * 0000000140C6F899: add     edx, 0FFFFFFF8h
 * 0000000140C6F89C: mov     [rcx], rax
 * 0000000140C6F89F: add     r13, 8
 * 0000000140C6F8A3: add     rcx, 8
 * 0000000140C6F8A7: sub     r8, r15
 * 0000000140C6F8AA: jnz     short loc_140C6F895
 * 0000000140C6F8AC: test    edx, edx
 * 0000000140C6F8AE: jz      short loc_140C6F8C0
 * 0000000140C6F8B0: mov     al, [r13+0]
 * 0000000140C6F8B4: add     r13, r15
 * 0000000140C6F8B7: mov     [rcx], al
 * 0000000140C6F8B9: add     rcx, r15
 * 0000000140C6F8BC: add     edx, ebx
 * 0000000140C6F8BE: jnz     short loc_140C6F8B0
 * 0000000140C6F8C0: mov     r13, [rsi+0AC8h]
 * 0000000140C6F8C7: mov     [r13+18h], r14
 * 0000000140C6F8CB: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C6F8CF: cmp     [rsi+918h], r12d
 * 0000000140C6F8D6: jnz     loc_140C6F354
 * 0000000140C6F8DC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F8E6: add     rax, rsi
 * 0000000140C6F8E9: mov     [rsi+920h], rax
 * 0000000140C6F8F0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6F8FA: add     rax, r13
 * 0000000140C6F8FD: mov     [rsi+928h], rax
 * 0000000140C6F904: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6F908: mov     [rsi+930h], rax
 * 0000000140C6F90F: mov     [rsi+938h], rcx
 * 0000000140C6F916: mov     [rsi+918h], r15d
 * 0000000140C6F91D: mov     ecx, [rsi+9D8h]
 * 0000000140C6F923: bt      ecx, 1Dh
 * 0000000140C6F927: jb      loc_140C6F354
 * 0000000140C6F92D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6F937: jz      loc_140C6F354
 * 0000000140C6F93D: test    r15b, cl
 * 0000000140C6F940: jz      loc_140C6F354
 * 0000000140C6F946: mov     ecx, [rsi+0A74h]
 * 0000000140C6F94C: mov     eax, [rsi+804h]
 * 0000000140C6F952: mov     r10, [rsi+838h]
 * 0000000140C6F959: sub     eax, ecx
 * 0000000140C6F95B: mov     r8, [rsi+0A78h]
 * 0000000140C6F962: lea     rdx, [rcx+rsi]
 * 0000000140C6F966: mov     ecx, eax
 * 0000000140C6F968: shr     rcx, 3
 * 0000000140C6F96C: lea     r9, [rdx+rcx*8]
 * 0000000140C6F970: jmp     short loc_140C6F993
 * 0000000140C6F972: xor     [rdx], r8
 * 0000000140C6F975: mov     rax, [rdx]
 * 0000000140C6F978: movzx   ecx, r8b
 * 0000000140C6F97C: xor     rax, r10
 * 0000000140C6F97F: and     ecx, 3Fh
 * 0000000140C6F982: ror     r8, cl
 * 0000000140C6F985: add     r8, rax
 * 0000000140C6F988: xor     r8, 0F05h
 * 0000000140C6F98F: add     rdx, 8
 * 0000000140C6F993: cmp     rdx, r9
 * 0000000140C6F996: jnz     short loc_140C6F972
 * 0000000140C6F998: jmp     loc_140C65A4E
 * 0000000140C6F99D: mov     eax, [rsi+850h]
 * 0000000140C6F9A3: test    r15b, al
 * 0000000140C6F9A6: jnz     loc_140C713A3
 * 0000000140C6F9AC: mov     rax, [rsi+188h]
 * 0000000140C6F9B3: mov     r14d, r12d
 * 0000000140C6F9B6: mov     r15, [rsi+540h]
 * 0000000140C6F9BD: call    KeGuardDispatchICall
 * 0000000140C6F9C2: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6F9CC: jnz     short loc_140C6F9E2
 * 0000000140C6F9CE: mov     ecx, [rsi+978h]
 * 0000000140C6F9D4: cmp     ecx, 7
 * 0000000140C6F9D7: jnb     short loc_140C6F9E2
 * 0000000140C6F9D9: mov     ebx, 1
 * 0000000140C6F9DE: shl     bl, cl
 * 0000000140C6F9E0: jmp     short loc_140C6F9F9
 * 0000000140C6F9E2: mov     rax, [rsi+138h]
 * 0000000140C6F9E9: xor     edx, edx
 * 0000000140C6F9EB: mov     rcx, [rsi+0A48h]
 * 0000000140C6F9F2: call    KeGuardDispatchICall
 * 0000000140C6F9F7: mov     bl, 80h
 * 0000000140C6F9F9: mov     rax, [rsi+148h]
 * 0000000140C6FA00: xor     edx, edx
 * 0000000140C6FA02: mov     rcx, r15
 * 0000000140C6FA05: call    KeGuardDispatchICall
 * 0000000140C6FA0A: cmp     bl, 80h
 * 0000000140C6FA0D: jz      short loc_140C6FA48
 * 0000000140C6FA0F: mov     r8, [rsi+518h]
 * 0000000140C6FA16: mov     r15d, 1
 * 0000000140C6FA1C: mov     rdx, [r8]
 * 0000000140C6FA1F: cmp     rdx, r8
 * 0000000140C6FA22: jz      short loc_140C6FA63
 * 0000000140C6FA24: not     bl
 * 0000000140C6FA26: mov     rax, [rsi+6C8h]
 * 0000000140C6FA2D: mov     rcx, rdx
 * 0000000140C6FA30: sub     rcx, [rsi+6E0h]
 * 0000000140C6FA37: lock and [rcx+rax], bl
 * 0000000140C6FA3B: mov     rdx, [rdx]
 * 0000000140C6FA3E: add     r14d, r15d
 * 0000000140C6FA41: cmp     rdx, r8
 * 0000000140C6FA44: jnz     short loc_140C6FA26
 * 0000000140C6FA46: jmp     short loc_140C6FA63
 * 0000000140C6FA48: mov     rax, [rsi+140h]
 * 0000000140C6FA4F: xor     edx, edx
 * 0000000140C6FA51: mov     rcx, [rsi+0A48h]
 * 0000000140C6FA58: call    KeGuardDispatchICall
 * 0000000140C6FA5D: mov     r15d, 1
 * 0000000140C6FA63: mov     rcx, [rsi+540h]
 * 0000000140C6FA6A: xor     edx, edx
 * 0000000140C6FA6C: mov     rax, [rsi+150h]
 * 0000000140C6FA73: call    KeGuardDispatchICall
 * 0000000140C6FA78: mov     rax, [rsi+190h]
 * 0000000140C6FA7F: call    KeGuardDispatchICall
 * 0000000140C6FA84: shl     r14d, 7
 * 0000000140C6FA88: add     [rsi+848h], r14d
 * 0000000140C6FA8F: jmp     loc_140C6F354
 * 0000000140C6FA94: mov     r15, [r13+8]
 * 0000000140C6FA98: mov     r14, rsi
 * 0000000140C6FA9B: mov     r8d, [r13+10h]
 * 0000000140C6FA9F: mov     r9, r15
 * 0000000140C6FAA2: add     [rsi+848h], r8d
 * 0000000140C6FAA9: mov     rax, r15
 * 0000000140C6FAAC: mov     r10d, [rsi+834h]
 * 0000000140C6FAB3: mov     r12, [rsi+838h]
 * 0000000140C6FABA: lea     rcx, [r15+r8]
 * 0000000140C6FABE: cmp     r15, rcx
 * 0000000140C6FAC1: jnb     short loc_140C6FAD3
 * 0000000140C6FAC3: mov     edx, 40h ; '@'
 * 0000000140C6FAC8: prefetchnta byte ptr [rax]
 * 0000000140C6FACB: add     rax, rdx
 * 0000000140C6FACE: cmp     rax, rcx
 * 0000000140C6FAD1: jb      short loc_140C6FAC8
 * 0000000140C6FAD3: mov     r11d, r8d
 * 0000000140C6FAD6: mov     rbx, r12
 * 0000000140C6FAD9: shr     r11d, 7
 * 0000000140C6FADD: mov     edx, 1
 * 0000000140C6FAE2: mov     r13d, 0FFFFFFFFh
 * 0000000140C6FAE8: test    r11d, r11d
 * 0000000140C6FAEB: jz      short loc_140C6FB50
 * 0000000140C6FAED: mov     rdi, 7010008004002001h
 * 0000000140C6FAF7: mov     eax, 8
 * 0000000140C6FAFC: xor     rbx, [r9]
 * 0000000140C6FAFF: mov     ecx, r10d
 * 0000000140C6FB02: rol     rbx, cl
 * 0000000140C6FB05: xor     rbx, [r9+8]
 * 0000000140C6FB09: add     r9, 10h
 * 0000000140C6FB0D: rol     rbx, cl
 * 0000000140C6FB10: sub     rax, rdx
 * 0000000140C6FB13: jnz     short loc_140C6FAFC
 * 0000000140C6FB15: mov     rcx, r9
 * 0000000140C6FB18: sub     rcx, r15
 * 0000000140C6FB1B: xor     rcx, r12
 * 0000000140C6FB1E: mov     rax, rcx
 * 0000000140C6FB21: rol     rax, 11h
 * 0000000140C6FB25: xor     rcx, rax
 * 0000000140C6FB28: mov     rax, rdi
 * 0000000140C6FB2B: mul     rcx
 * 0000000140C6FB2E: mov     [rbp+7B0h+var_3C0], rdx
 * 0000000140C6FB35: xor     rdx, rax
 * 0000000140C6FB38: xor     r10d, edx
 * 0000000140C6FB3B: mov     edx, 1
 * 0000000140C6FB40: and     r10d, 3Fh
 * 0000000140C6FB44: cmovz   r10d, edx
 * 0000000140C6FB48: add     r11d, r13d
 * 0000000140C6FB4B: jnz     short loc_140C6FAF7
 * 0000000140C6FB4D: lea     edi, [rdx+1]
 * 0000000140C6FB50: and     r8d, 7Fh
 * 0000000140C6FB54: cmp     r8d, 8
 * 0000000140C6FB58: jb      short loc_140C6FB77
 * 0000000140C6FB5A: mov     eax, r8d
 * 0000000140C6FB5D: shr     rax, 3
 * 0000000140C6FB61: xor     rbx, [r9]
 * 0000000140C6FB64: mov     ecx, r10d
 * 0000000140C6FB67: rol     rbx, cl
 * 0000000140C6FB6A: add     r9, 8
 * 0000000140C6FB6E: add     r8d, 0FFFFFFF8h
 * 0000000140C6FB72: sub     rax, rdx
 * 0000000140C6FB75: jnz     short loc_140C6FB61
 * 0000000140C6FB77: xor     r12d, r12d
 * 0000000140C6FB7A: test    r8d, r8d
 * 0000000140C6FB7D: jz      short loc_140C6FB94
 * 0000000140C6FB7F: movzx   eax, byte ptr [r9]
 * 0000000140C6FB83: mov     ecx, r10d
 * 0000000140C6FB86: xor     rbx, rax
 * 0000000140C6FB89: add     r9, rdx
 * 0000000140C6FB8C: rol     rbx, cl
 * 0000000140C6FB8F: add     r8d, r13d
 * 0000000140C6FB92: jnz     short loc_140C6FB7F
 * 0000000140C6FB94: mov     rax, rbx
 * 0000000140C6FB97: jmp     short loc_140C6FB9B
 * 0000000140C6FB99: xor     ebx, eax
 * 0000000140C6FB9B: shr     rax, 1Fh
 * 0000000140C6FB9F: test    rax, rax
 * 0000000140C6FBA2: jnz     short loc_140C6FB99
 * 0000000140C6FBA4: mov     r15, [rsp+8B0h+var_860]
 * 0000000140C6FBA9: btr     ebx, 1Fh
 * 0000000140C6FBAD: mov     r13d, r12d
 * 0000000140C6FBB0: cmp     ebx, [r15+14h]
 * 0000000140C6FBB4: jz      loc_140C6FDD4
 * 0000000140C6FBBA: cmp     [r15], r12d
 * 0000000140C6FBBD: jnz     short loc_140C6FBC7
 * 0000000140C6FBBF: cmp     [r15+18h], r12d
 * 0000000140C6FBC3: cmovnz  r13d, edx
 * 0000000140C6FBC7: mov     ecx, [r15+10h]
 * 0000000140C6FBCB: mov     rdx, [r15+8]
 * 0000000140C6FBCF: test    rcx, rcx
 * 0000000140C6FBD2: jz      loc_140C6FC91
 * 0000000140C6FBD8: mov     eax, [rsi+9DCh]
 * 0000000140C6FBDE: mov     r8d, 40h ; '@'
 * 0000000140C6FBE4: test    r8b, al
 * 0000000140C6FBE7: jz      loc_140C6FC91
 * 0000000140C6FBED: mov     r12, cr8
 * 0000000140C6FBF1: mov     r15, rdx
 * 0000000140C6FBF4: lea     rax, [rcx-1]
 * 0000000140C6FBF8: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140C6FBFF: add     rax, rdx
 * 0000000140C6FC02: or      rax, 0FFFh
 * 0000000140C6FC08: mov     [rbp+7B0h+var_820], rax
 * 0000000140C6FC0C: lea     rax, [r15-1]
 * 0000000140C6FC10: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6FC15: mov     cr8, rdi
 * 0000000140C6FC19: mov     rax, [rsi+468h]
 * 0000000140C6FC20: xor     edx, edx
 * 0000000140C6FC22: mov     rcx, r15
 * 0000000140C6FC25: call    KeGuardDispatchICall
 * 0000000140C6FC2A: cmp     eax, 0C000022Dh
 * 0000000140C6FC2F: jnz     short loc_140C6FC4C
 * 0000000140C6FC31: test    r13d, r13d
 * 0000000140C6FC34: jnz     short loc_140C6FC81
 * 0000000140C6FC36: lea     eax, [r13+1]
 * 0000000140C6FC3A: cmp     r12b, al
 * 0000000140C6FC3D: ja      short loc_140C6FC50
 * 0000000140C6FC3F: movzx   eax, r12b
 * 0000000140C6FC43: mov     cr8, rax
 * 0000000140C6FC47: mov     al, [r15]
 * 0000000140C6FC4A: jmp     short loc_140C6FC15
 * 0000000140C6FC4C: test    eax, eax
 * 0000000140C6FC4E: js      short loc_140C6FC81
 * 0000000140C6FC50: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C6FC55: mov     r11d, 1000h
 * 0000000140C6FC5B: add     rax, r11
 * 0000000140C6FC5E: add     r15, r11
 * 0000000140C6FC61: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6FC66: cmp     rax, [rbp+7B0h+var_820]
 * 0000000140C6FC6A: jnz     short loc_140C6FC19
 * 0000000140C6FC6C: movzx   eax, r12b
 * 0000000140C6FC70: mov     cr8, rax
 * 0000000140C6FC74: mov     r15, [rsp+8B0h+var_860]
 * 0000000140C6FC79: xor     r12d, r12d
 * 0000000140C6FC7C: jmp     loc_140C6FDDA
 * 0000000140C6FC81: movzx   eax, r12b
 * 0000000140C6FC85: mov     cr8, rax
 * 0000000140C6FC89: mov     r15, [rsp+8B0h+var_860]
 * 0000000140C6FC8E: xor     r12d, r12d
 * 0000000140C6FC91: mov     eax, [r15+14h]
 * 0000000140C6FC95: cmp     [rsi+918h], r12d
 * 0000000140C6FC9C: jnz     short loc_140C6FCB0
 * 0000000140C6FC9E: mov     ecx, eax
 * 0000000140C6FCA0: mov     eax, ebx
 * 0000000140C6FCA2: xor     rcx, rax
 * 0000000140C6FCA5: mov     rax, [rsi+588h]
 * 0000000140C6FCAC: mov     [rax+18h], rcx
 * 0000000140C6FCB0: mov     rcx, [r15+8]
 * 0000000140C6FCB4: cmp     [rsi+918h], r12d
 * 0000000140C6FCBB: jnz     loc_140C6FDD4
 * 0000000140C6FCC1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6FCCB: mov     r11d, 1
 * 0000000140C6FCD1: add     rax, rsi
 * 0000000140C6FCD4: mov     [rsi+920h], rax
 * 0000000140C6FCDB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6FCE5: add     rax, r15
 * 0000000140C6FCE8: mov     [rsi+928h], rax
 * 0000000140C6FCEF: movsxd  rax, dword ptr [r15]
 * 0000000140C6FCF2: mov     [rsi+930h], rax
 * 0000000140C6FCF9: mov     [rsi+938h], rcx
 * 0000000140C6FD00: mov     [rsi+918h], r11d
 * 0000000140C6FD07: mov     ecx, [rsi+9D8h]
 * 0000000140C6FD0D: bt      ecx, 1Dh
 * 0000000140C6FD11: jb      loc_140C6FDD4
 * 0000000140C6FD17: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6FD21: jz      loc_140C6FDD4
 * 0000000140C6FD27: test    r11b, cl
 * 0000000140C6FD2A: jz      loc_140C6FDD4
 * 0000000140C6FD30: mov     ecx, [rsi+0A74h]
 * 0000000140C6FD36: mov     eax, [rsi+804h]
 * 0000000140C6FD3C: mov     r10, [rsi+838h]
 * 0000000140C6FD43: sub     eax, ecx
 * 0000000140C6FD45: mov     r8, [rsi+0A78h]
 * 0000000140C6FD4C: lea     rdx, [rcx+rsi]
 * 0000000140C6FD50: mov     ecx, eax
 * 0000000140C6FD52: shr     rcx, 3
 * 0000000140C6FD56: lea     r9, [rdx+rcx*8]
 * 0000000140C6FD5A: jmp     short loc_140C6FD7D
 * 0000000140C6FD5C: xor     [rdx], r8
 * 0000000140C6FD5F: mov     rax, [rdx]
 * 0000000140C6FD62: movzx   ecx, r8b
 * 0000000140C6FD66: xor     rax, r10
 * 0000000140C6FD69: and     ecx, 3Fh
 * 0000000140C6FD6C: ror     r8, cl
 * 0000000140C6FD6F: add     r8, rax
 * 0000000140C6FD72: xor     r8, 0F05h
 * 0000000140C6FD79: add     rdx, 8
 * 0000000140C6FD7D: cmp     rdx, r9
 * 0000000140C6FD80: jnz     short loc_140C6FD5C
 * 0000000140C6FD82: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6FD8A: cmp     r8, [rsi+0A80h]
 * 0000000140C6FD91: jz      short loc_140C6FDD4
 * 0000000140C6FD93: mov     ecx, [rsi+804h]
 * 0000000140C6FD99: mov     rax, [rsi+588h]
 * 0000000140C6FDA0: mov     [rax], rsi
 * 0000000140C6FDA3: mov     [rax+10h], ecx
 * 0000000140C6FDA6: mov     rcx, [rsi+0A80h]
 * 0000000140C6FDAD: cmp     [rsi+918h], r12d
 * 0000000140C6FDB4: jnz     short loc_140C6FDC4
 * 0000000140C6FDB6: mov     rax, [rsi+588h]
 * 0000000140C6FDBD: xor     rcx, r8
 * 0000000140C6FDC0: mov     [rax+18h], rcx
 * 0000000140C6FDC4: xor     edx, edx
 * 0000000140C6FDC6: mov     r9d, 100h
 * 0000000140C6FDCC: mov     rcx, rsi
 * 0000000140C6FDCF: call    sub_140C7903C
 * 0000000140C6FDD4: mov     r11d, 1000h
 * 0000000140C6FDDA: mov     eax, [r15+20h]
 * 0000000140C6FDDE: mov     ecx, 1
 * 0000000140C6FDE3: test    cl, al
 * 0000000140C6FDE5: jz      loc_140C713A0
 * 0000000140C6FDEB: mov     rbx, [r15+18h]
 * 0000000140C6FDEF: mov     rax, [rsi+208h]
 * 0000000140C6FDF6: mov     rcx, rbx
 * 0000000140C6FDF9: mov     [rbp+7B0h+var_820], rbx
 * 0000000140C6FDFD: call    KeGuardDispatchICall
 * 0000000140C6FE02: mov     r11d, 1000h
 * 0000000140C6FE08: movzx   r15d, word ptr [rax+14h]
 * 0000000140C6FE0D: add     r15, 18h
 * 0000000140C6FE11: add     r15, rax
 * 0000000140C6FE14: movzx   eax, word ptr [rax+6]
 * 0000000140C6FE18: lea     rcx, [rax+rax*4]
 * 0000000140C6FE1C: lea     rax, [r15+rcx*8]
 * 0000000140C6FE20: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6FE25: cmp     r15, rax
 * 0000000140C6FE28: jz      loc_140C71101
 * 0000000140C6FE2E: mov     r13d, [rsi+844h]
 * 0000000140C6FE35: test    r13d, r13d
 * 0000000140C6FE38: jnz     short loc_140C6FE44
 * 0000000140C6FE3A: mov     [rsi+844h], r11d
 * 0000000140C6FE41: mov     r13d, r11d
 * 0000000140C6FE44: cmp     rbx, [rsi+5E0h]
 * 0000000140C6FE4B: jz      short loc_140C6FE5D
 * 0000000140C6FE4D: mov     dword ptr [rbp+7B0h+arg_8], r12d
 * 0000000140C6FE54: cmp     rbx, [rsi+5E8h]
 * 0000000140C6FE5B: jnz     short loc_140C6FE67
 * 0000000140C6FE5D: mov     dword ptr [rbp+7B0h+arg_8], 1
 * 0000000140C6FE67: mov     esi, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6FE6D: mov     edx, [r15+0Ch]
 * 0000000140C6FE71: mov     ecx, [r15+10h]
 * 0000000140C6FE75: mov     eax, [r15+8]
 * 0000000140C6FE79: cmp     ecx, eax
 * 0000000140C6FE7B: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C6FE81: cmovbe  ecx, eax
 * 0000000140C6FE84: lea     r12d, [rdx+0FFFh]
 * 0000000140C6FE8B: add     r12d, ecx
 * 0000000140C6FE8E: and     r12d, 0FFFFF000h
 * 0000000140C6FE95: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C6FE9A: cmp     r13d, r12d
 * 0000000140C6FE9D: jnb     loc_140C6FF31
 * 0000000140C6FEA3: test    dword ptr [r15+24h], 2000000h
 * 0000000140C6FEAB: jnz     short loc_140C6FF28
 * 0000000140C6FEAD: mov     eax, [r15]
 * 0000000140C6FEB0: cmp     eax, 54494E49h
 * 0000000140C6FEB5: jnz     short loc_140C6FEFE
 * 0000000140C6FEB7: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140C6FEBF: jz      short loc_140C6FF28
 * 0000000140C6FEC1: cmp     eax, 41525245h
 * 0000000140C6FEC6: jnz     short loc_140C6FED4
 * 0000000140C6FEC8: mov     eax, 4154h
 * 0000000140C6FECD: cmp     [r15+4], ax
 * 0000000140C6FED2: jz      short loc_140C6FF28
 * 0000000140C6FED4: test    r14, r14
 * 0000000140C6FED7: jz      loc_140C6FF6B
 * 0000000140C6FEDD: mov     rdx, [r14+950h]
 * 0000000140C6FEE4: mov     r9, [r14+958h]
 * 0000000140C6FEEB: mov     r11, [r14+960h]
 * 0000000140C6FEF2: mov     rbx, [r14+968h]
 * 0000000140C6FEF9: jmp     loc_140C6FF87
 * 0000000140C6FEFE: cmp     eax, 45474150h
 * 0000000140C6FF03: jnz     short loc_140C6FEC1
 * 0000000140C6FF05: movzx   eax, word ptr [r15+4]
 * 0000000140C6FF0A: mov     ecx, 7877h
 * 0000000140C6FF0F: cmp     ax, cx
 * 0000000140C6FF12: jz      short loc_140C6FF28
 * 0000000140C6FF14: mov     ecx, 7277h
 * 0000000140C6FF19: cmp     ax, cx
 * 0000000140C6FF1C: jz      short loc_140C6FF28
 * 0000000140C6FF1E: mov     ecx, 7777h
 * 0000000140C6FF23: cmp     ax, cx
 * 0000000140C6FF26: jnz     short loc_140C6FED4
 * 0000000140C6FF28: mov     r11d, 1000h
 * 0000000140C6FF2E: mov     r13d, r12d
 * 0000000140C6FF31: mov     ecx, r12d
 * 0000000140C6FF34: add     r15, 28h ; '('
 * 0000000140C6FF38: cmp     r15, [rsp+8B0h+var_858]
 * 0000000140C6FF3D: jnz     loc_140C6FE6D
 * 0000000140C6FF43: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6FF48: cmp     r15, [rsp+8B0h+var_858]
 * 0000000140C6FF4D: jnz     loc_140C703DE
 * 0000000140C6FF53: cmp     r13d, ecx
 * 0000000140C6FF56: jb      loc_140C703DE
 * 0000000140C6FF5C: xor     r12d, r12d
 * 0000000140C6FF5F: mov     [r14+844h], r12d
 * 0000000140C6FF66: jmp     loc_140C71101
 * 0000000140C6FF6B: mov     rdx, cs:VfExcludeSections
 * 0000000140C6FF72: mov     r9, cs:off_140E0A060; "PAGESPEC"
 * 0000000140C6FF79: mov     r11, cs:off_140E0A068; "INIT"
 * 0000000140C6FF80: mov     rbx, cs:off_140E0A070; "PAGEKD"
 * 0000000140C6FF87: mov     r10d, 7
 * 0000000140C6FF8D: mov     r8, r15
 * 0000000140C6FF90: mov     cl, [r8]
 * 0000000140C6FF93: inc     r8
 * 0000000140C6FF96: mov     al, [rdx]
 * 0000000140C6FF98: inc     rdx
 * 0000000140C6FF9B: cmp     cl, al
 * 0000000140C6FF9D: jnz     short loc_140C6FFAE
 * 0000000140C6FF9F: mov     eax, 0FFFFFFFFh
 * 0000000140C6FFA4: add     r10d, eax
 * 0000000140C6FFA7: jnz     short loc_140C6FF90
 * 0000000140C6FFA9: jmp     loc_140C6FF28
 * 0000000140C6FFAE: mov     edx, 8
 * 0000000140C6FFB3: mov     r8, r15
 * 0000000140C6FFB6: mov     rcx, [r8]
 * 0000000140C6FFB9: add     r8, 8
 * 0000000140C6FFBD: mov     rax, [r9]
 * 0000000140C6FFC0: add     r9, 8
 * 0000000140C6FFC4: cmp     rcx, rax
 * 0000000140C6FFC7: jnz     short loc_140C6FFFA
 * 0000000140C6FFC9: add     edx, 0FFFFFFF8h
 * 0000000140C6FFCC: cmp     edx, 8
 * 0000000140C6FFCF: jnb     short loc_140C6FFB6
 * 0000000140C6FFD1: xor     r10d, r10d
 * 0000000140C6FFD4: test    edx, edx
 * 0000000140C6FFD6: jz      loc_140C6FF28
 * 0000000140C6FFDC: mov     cl, [r8]
 * 0000000140C6FFDF: inc     r8
 * 0000000140C6FFE2: mov     al, [r9]
 * 0000000140C6FFE5: inc     r9
 * 0000000140C6FFE8: cmp     cl, al
 * 0000000140C6FFEA: jnz     short loc_140C6FFFD
 * 0000000140C6FFEC: mov     eax, 0FFFFFFFFh
 * 0000000140C6FFF1: add     edx, eax
 * 0000000140C6FFF3: jnz     short loc_140C6FFDC
 * 0000000140C6FFF5: jmp     loc_140C6FF28
 * 0000000140C6FFFA: xor     r10d, r10d
 * 0000000140C6FFFD: mov     r8d, 4
 * 0000000140C70003: mov     rdx, r15
 * 0000000140C70006: lea     r9d, [r8-3]
 * 0000000140C7000A: mov     cl, [rdx]
 * 0000000140C7000C: add     rdx, r9
 * 0000000140C7000F: mov     al, [r11]
 * 0000000140C70012: add     r11, r9
 * 0000000140C70015: cmp     cl, al
 * 0000000140C70017: jnz     short loc_140C70028
 * 0000000140C70019: mov     eax, 0FFFFFFFFh
 * 0000000140C7001E: add     r8d, eax
 * 0000000140C70021: jnz     short loc_140C7000A
 * 0000000140C70023: jmp     loc_140C6FF28
 * 0000000140C70028: mov     r9d, 6
 * 0000000140C7002E: mov     rdx, r15
 * 0000000140C70031: mov     r8d, r9d
 * 0000000140C70034: lea     r11d, [r9-5]
 * 0000000140C70038: mov     cl, [rdx]
 * 0000000140C7003A: add     rdx, r11
 * 0000000140C7003D: mov     al, [rbx]
 * 0000000140C7003F: add     rbx, r11
 * 0000000140C70042: cmp     cl, al
 * 0000000140C70044: jnz     short loc_140C70055
 * 0000000140C70046: mov     eax, 0FFFFFFFFh
 * 0000000140C7004B: add     r8d, eax
 * 0000000140C7004E: jnz     short loc_140C70038
 * 0000000140C70050: jmp     loc_140C6FF28
 * 0000000140C70055: mov     eax, [r15+24h]
 * 0000000140C70059: test    eax, eax
 * 0000000140C7005B: js      loc_140C6FF28
 * 0000000140C70061: bt      eax, 1Dh
 * 0000000140C70065: jnb     loc_140C6FF28
 * 0000000140C7006B: mov     r8, r11
 * 0000000140C7006E: mov     r12d, r8d
 * 0000000140C70071: test    esi, esi
 * 0000000140C70073: jz      short loc_140C70088
 * 0000000140C70075: mov     eax, [r15]
 * 0000000140C70078: cmp     eax, 2E656461h
 * 0000000140C7007D: jz      short loc_140C70088
 * 0000000140C7007F: cmp     eax, 45474150h
 * 0000000140C70084: cmovnz  r12d, r10d
 * 0000000140C70088: cmp     r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C7008F: mov     r11d, 1000h
 * 0000000140C70095: cmovb   r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C7009D: mov     ebx, r13d
 * 0000000140C700A0: add     rbx, [rbp+7B0h+var_820]
 * 0000000140C700A4: test    byte ptr [r14+89Bh], 4
 * 0000000140C700AC: jz      short loc_140C70110
 * 0000000140C700AE: mov     ecx, 0FFFFFFFFh
 * 0000000140C700B3: mov     eax, ecx
 * 0000000140C700B5: xbegin  $+6
 * 0000000140C700BB: cmp     eax, ecx
 * 0000000140C700BD: jnz     short loc_140C700C6
 * 0000000140C700BF: mov     al, [rbx]
 * 0000000140C700C1: xend
 * 0000000140C700C4: jmp     short loc_140C700F9
 * 0000000140C700C6: rdtsc
 * 0000000140C700C8: shl     rdx, 20h
 * 0000000140C700CC: or      rax, rdx
 * 0000000140C700CF: mov     rcx, rax
 * 0000000140C700D2: ror     rcx, 3
 * 0000000140C700D6: xor     rcx, rax
 * 0000000140C700D9: mov     rax, 7010008004002001h
 * 0000000140C700E3: mul     rcx
 * 0000000140C700E6: mov     [rbp+7B0h+var_3B8], rdx
 * 0000000140C700ED: xor     rdx, rax
 * 0000000140C700F0: mov     eax, 0Fh
 * 0000000140C700F5: test    al, dl
 * 0000000140C700F7: jz      short loc_140C70110
 * 0000000140C700F9: add     [r14+85Ch], r8d
 * 0000000140C70100: add     dword ptr [r14+848h], 100h
 * 0000000140C7010B: jmp     loc_140C702EC
 * 0000000140C70110: mov     ecx, 0FFFh
 * 0000000140C70115: mov     [rbp+7B0h+var_648], r10
 * 0000000140C7011C: mov     rax, rbx
 * 0000000140C7011F: mov     [rbp+7B0h+var_63E], r10w
 * 0000000140C70127: and     rax, rcx
 * 0000000140C7012A: mov     [rbp+7B0h+var_620], r11d
 * 0000000140C70131: add     rax, 1FFFh
 * 0000000140C70137: shr     rax, 0Ch
 * 0000000140C7013B: add     ax, r9w
 * 0000000140C7013F: shl     ax, 3
 * 0000000140C70143: mov     [rbp+7B0h+var_640], ax
 * 0000000140C7014A: mov     rax, rbx
 * 0000000140C7014D: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140C70153: mov     [rbp+7B0h+var_628], rax
 * 0000000140C7015A: mov     eax, ebx
 * 0000000140C7015C: and     eax, ecx
 * 0000000140C7015E: mov     [rbp+7B0h+var_61C], eax
 * 0000000140C70164: test    r12d, r12d
 * 0000000140C70167: jz      loc_140C70315
 * 0000000140C7016D: mov     rax, [r14+240h]
 * 0000000140C70174: lea     rcx, [rbp+7B0h+var_648]
 * 0000000140C7017B: mov     rdx, rdi
 * 0000000140C7017E: call    KeGuardDispatchICall
 * 0000000140C70183: xor     r10d, r10d
 * 0000000140C70186: test    eax, eax
 * 0000000140C70188: jns     loc_140C7032F
 * 0000000140C7018E: cmp     eax, 0C0000005h
 * 0000000140C70193: jnz     loc_140C702DA
 * 0000000140C70199: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C7019E: mov     eax, [rcx+20h]
 * 0000000140C701A1: test    al, 4
 * 0000000140C701A3: jz      short loc_140C701AF
 * 0000000140C701A5: cmp     [r15+24h], r10d
 * 0000000140C701A9: jge     loc_140C702DA
 * 0000000140C701AF: mov     r8d, 1
 * 0000000140C701B5: cmp     [r14+918h], r10d
 * 0000000140C701BC: jnz     loc_140C702E0
 * 0000000140C701C2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C701CC: add     rax, r14
 * 0000000140C701CF: mov     [r14+920h], rax
 * 0000000140C701D6: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C701E0: add     rax, rcx
 * 0000000140C701E3: mov     [r14+928h], rax
 * 0000000140C701EA: movsxd  rax, dword ptr [rcx]
 * 0000000140C701ED: mov     [r14+930h], rax
 * 0000000140C701F4: mov     [r14+938h], rbx
 * 0000000140C701FB: mov     [r14+918h], r8d
 * 0000000140C70202: mov     ecx, [r14+9D8h]
 * 0000000140C70209: bt      ecx, 1Dh
 * 0000000140C7020D: jb      loc_140C702E0
 * 0000000140C70213: test    dword ptr [r14+9DCh], 200000h
 * 0000000140C7021E: jz      loc_140C702E0
 * 0000000140C70224: test    r8b, cl
 * 0000000140C70227: jz      loc_140C702E0
 * 0000000140C7022D: mov     ecx, [r14+0A74h]
 * 0000000140C70234: mov     eax, [r14+804h]
 * 0000000140C7023B: mov     r10, [r14+838h]
 * 0000000140C70242: sub     eax, ecx
 * 0000000140C70244: mov     r8, [r14+0A78h]
 * 0000000140C7024B: lea     rdx, [rcx+r14]
 * 0000000140C7024F: mov     ecx, eax
 * 0000000140C70251: shr     rcx, 3
 * 0000000140C70255: lea     r9, [rdx+rcx*8]
 * 0000000140C70259: jmp     short loc_140C7027C
 * 0000000140C7025B: xor     [rdx], r8
 * 0000000140C7025E: mov     rax, [rdx]
 * 0000000140C70261: movzx   ecx, r8b
 * 0000000140C70265: xor     rax, r10
 * 0000000140C70268: and     ecx, 3Fh
 * 0000000140C7026B: ror     r8, cl
 * 0000000140C7026E: add     r8, rax
 * 0000000140C70271: xor     r8, 0F05h
 * 0000000140C70278: add     rdx, 8
 * 0000000140C7027C: cmp     rdx, r9
 * 0000000140C7027F: jnz     short loc_140C7025B
 * 0000000140C70281: btr     dword ptr [r14+9DCh], 15h
 * 0000000140C7028A: cmp     r8, [r14+0A80h]
 * 0000000140C70291: jz      short loc_140C702D7
 * 0000000140C70293: mov     rax, [r14+588h]
 * 0000000140C7029A: mov     ecx, [r14+804h]
 * 0000000140C702A1: mov     [rax], r14
 * 0000000140C702A4: mov     [rax+10h], ecx
 * 0000000140C702A7: xor     eax, eax
 * 0000000140C702A9: mov     rcx, [r14+0A80h]
 * 0000000140C702B0: cmp     [r14+918h], eax
 * 0000000140C702B7: jnz     short loc_140C702C7
 * 0000000140C702B9: mov     rax, [r14+588h]
 * 0000000140C702C0: xor     rcx, r8
 * 0000000140C702C3: mov     [rax+18h], rcx
 * 0000000140C702C7: xor     edx, edx
 * 0000000140C702C9: mov     r9d, 100h
 * 0000000140C702CF: mov     rcx, r14
 * 0000000140C702D2: call    sub_140C7903C
 * 0000000140C702D7: xor     r10d, r10d
 * 0000000140C702DA: mov     r8d, 1
 * 0000000140C702E0: mov     r11d, 1000h
 * 0000000140C702E6: mov     r9d, 6
 * 0000000140C702EC: mov     ecx, dword ptr [rsp+8B0h+var_848]
 * 0000000140C702F0: add     r13d, r11d
 * 0000000140C702F3: mov     eax, [r14+84Ch]
 * 0000000140C702FA: cmp     r13d, ecx
 * 0000000140C702FD: jnb     loc_140C703CC
 * 0000000140C70303: cmp     [r14+848h], eax
 * 0000000140C7030A: jl      loc_140C7009D
 * 0000000140C70310: jmp     loc_140C6FF43
 * 0000000140C70315: mov     rax, [r14+458h]
 * 0000000140C7031C: mov     rcx, rbx
 * 0000000140C7031F: call    KeGuardDispatchICall
 * 0000000140C70324: shr     rax, 0Ch
 * 0000000140C70328: mov     [rbp+7B0h+var_618], rax
 * 0000000140C7032F: mov     eax, 1
 * 0000000140C70334: add     [r14+860h], eax
 * 0000000140C7033B: mov     eax, [rbp+7B0h+var_61C]
 * 0000000140C70341: add     rax, [rbp+7B0h+var_628]
 * 0000000140C70348: mov     [r14+0AB0h], rax
 * 0000000140C7034F: mov     rax, [rsp+8B0h+var_860]
 * 0000000140C70354: mov     [r14+0AA8h], rax
 * 0000000140C7035B: mov     rbx, cr8
 * 0000000140C7035F: mov     cr8, rdi
 * 0000000140C70363: mov     rdx, [r14+5F0h]
 * 0000000140C7036A: lea     rcx, [r14+0A88h]
 * 0000000140C70371: xor     r8d, r8d
 * 0000000140C70374: mov     edx, [rdx]
 * 0000000140C70376: call    RtlInitMinimalBarrier
 * 0000000140C7037B: mov     ecx, [r14+814h]
 * 0000000140C70382: mov     rdx, r14
 * 0000000140C70385: mov     rax, [r14+450h]
 * 0000000140C7038C: add     rcx, r14
 * 0000000140C7038F: call    KeGuardDispatchICall
 * 0000000140C70394: mov     r14, rax
 * 0000000140C70397: movzx   eax, bl
 * 0000000140C7039A: mov     cr8, rax
 * 0000000140C7039E: xor     r10d, r10d
 * 0000000140C703A1: test    r12d, r12d
 * 0000000140C703A4: jz      short loc_140C703BC
 * 0000000140C703A6: mov     rax, [r14+460h]
 * 0000000140C703AD: lea     rcx, [rbp+7B0h+var_648]
 * 0000000140C703B4: call    KeGuardDispatchICall
 * 0000000140C703B9: xor     r10d, r10d
 * 0000000140C703BC: add     dword ptr [r14+848h], 14000h
 * 0000000140C703C7: jmp     loc_140C702DA
 * 0000000140C703CC: cmp     [r14+848h], eax
 * 0000000140C703D3: jge     loc_140C6FF43
 * 0000000140C703D9: jmp     loc_140C6FF34
 * 0000000140C703DE: mov     [r14+844h], r13d
 * 0000000140C703E5: jmp     loc_140C643EF
 * 0000000140C703EA: cmp     [rsi+844h], r12d
 * 0000000140C703F1: jnz     loc_140C705E0
 * 0000000140C703F7: mov     r14, [r13+8]
 * 0000000140C703FB: mov     r8d, [r13+10h]
 * 0000000140C703FF: mov     r9, r14
 * 0000000140C70402: add     [rsi+848h], r8d
 * 0000000140C70409: mov     rax, r14
 * 0000000140C7040C: mov     r10d, [rsi+834h]
 * 0000000140C70413: mov     r15, [rsi+838h]
 * 0000000140C7041A: lea     rcx, [r14+r8]
 * 0000000140C7041E: cmp     r14, rcx
 * 0000000140C70421: jnb     short loc_140C70433
 * 0000000140C70423: mov     edx, 40h ; '@'
 * 0000000140C70428: prefetchnta byte ptr [rax]
 * 0000000140C7042B: add     rax, rdx
 * 0000000140C7042E: cmp     rax, rcx
 * 0000000140C70431: jb      short loc_140C70428
 * 0000000140C70433: mov     r11d, r8d
 * 0000000140C70436: mov     rbx, r15
 * 0000000140C70439: shr     r11d, 7
 * 0000000140C7043D: test    r11d, r11d
 * 0000000140C70440: jz      short loc_140C704B2
 * 0000000140C70442: mov     edi, 1
 * 0000000140C70447: mov     rsi, 7010008004002001h
 * 0000000140C70451: mov     eax, 8
 * 0000000140C70456: xor     rbx, [r9]
 * 0000000140C70459: mov     ecx, r10d
 * 0000000140C7045C: rol     rbx, cl
 * 0000000140C7045F: xor     rbx, [r9+8]
 * 0000000140C70463: add     r9, 10h
 * 0000000140C70467: rol     rbx, cl
 * 0000000140C7046A: sub     rax, rdi
 * 0000000140C7046D: jnz     short loc_140C70456
 * 0000000140C7046F: mov     rcx, r9
 * 0000000140C70472: sub     rcx, r14
 * 0000000140C70475: xor     rcx, r15
 * 0000000140C70478: mov     rax, rcx
 * 0000000140C7047B: rol     rax, 11h
 * 0000000140C7047F: xor     rcx, rax
 * 0000000140C70482: mov     rax, rsi
 * 0000000140C70485: mul     rcx
 * 0000000140C70488: mov     [rbp+7B0h+var_3B0], rdx
 * 0000000140C7048F: xor     rdx, rax
 * 0000000140C70492: xor     r10d, edx
 * 0000000140C70495: mov     edx, 0FFFFFFFFh
 * 0000000140C7049A: and     r10d, 3Fh
 * 0000000140C7049E: cmovz   r10d, edi
 * 0000000140C704A2: add     r11d, edx
 * 0000000140C704A5: jnz     short loc_140C70451
 * 0000000140C704A7: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C704AC: lea     edi, [r11+2]
 * 0000000140C704B0: jmp     short loc_140C704B7
 * 0000000140C704B2: mov     edx, 0FFFFFFFFh
 * 0000000140C704B7: and     r8d, 7Fh
 * 0000000140C704BB: mov     r15d, 1
 * 0000000140C704C1: cmp     r8d, 8
 * 0000000140C704C5: jb      short loc_140C704E4
 * 0000000140C704C7: mov     eax, r8d
 * 0000000140C704CA: shr     rax, 3
 * 0000000140C704CE: xor     rbx, [r9]
 * 0000000140C704D1: mov     ecx, r10d
 * 0000000140C704D4: rol     rbx, cl
 * 0000000140C704D7: add     r9, 8
 * 0000000140C704DB: add     r8d, 0FFFFFFF8h
 * 0000000140C704DF: sub     rax, r15
 * 0000000140C704E2: jnz     short loc_140C704CE
 * 0000000140C704E4: test    r8d, r8d
 * 0000000140C704E7: jz      short loc_140C704FE
 * 0000000140C704E9: movzx   eax, byte ptr [r9]
 * 0000000140C704ED: mov     ecx, r10d
 * 0000000140C704F0: xor     rbx, rax
 * 0000000140C704F3: add     r9, r15
 * 0000000140C704F6: rol     rbx, cl
 * 0000000140C704F9: add     r8d, edx
 * 0000000140C704FC: jnz     short loc_140C704E9
 * 0000000140C704FE: mov     rax, rbx
 * 0000000140C70501: jmp     short loc_140C70505
 * 0000000140C70503: xor     ebx, eax
 * 0000000140C70505: shr     rax, 1Fh
 * 0000000140C70509: test    rax, rax
 * 0000000140C7050C: jnz     short loc_140C70503
 * 0000000140C7050E: btr     ebx, 1Fh
 * 0000000140C70512: xor     r11d, r11d
 * 0000000140C70515: cmp     ebx, [r13+14h]
 * 0000000140C70519: jz      loc_140C708CB
 * 0000000140C7051F: cmp     [r13+0], r11d
 * 0000000140C70523: jnz     short loc_140C7052D
 * 0000000140C70525: cmp     [r13+18h], r11d
 * 0000000140C70529: cmovnz  r12d, r15d
 * 0000000140C7052D: mov     ecx, [r13+10h]
 * 0000000140C70531: mov     rdx, [r13+8]
 * 0000000140C70535: test    rcx, rcx
 * 0000000140C70538: jz      loc_140C7077F
 * 0000000140C7053E: mov     eax, [rsi+9DCh]
 * 0000000140C70544: mov     r8d, 40h ; '@'
 * 0000000140C7054A: test    r8b, al
 * 0000000140C7054D: jz      loc_140C7077F
 * 0000000140C70553: mov     r15, cr8
 * 0000000140C70557: mov     r14, rdx
 * 0000000140C7055A: lea     rax, [rcx-1]
 * 0000000140C7055E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C70565: add     rax, rdx
 * 0000000140C70568: or      rax, 0FFFh
 * 0000000140C7056E: mov     [rbp+7B0h+var_820], rax
 * 0000000140C70572: lea     r13, [r14-1]
 * 0000000140C70576: mov     cr8, rdi
 * 0000000140C7057A: mov     rax, [rsi+468h]
 * 0000000140C70581: xor     edx, edx
 * 0000000140C70583: mov     rcx, r14
 * 0000000140C70586: call    KeGuardDispatchICall
 * 0000000140C7058B: xor     r11d, r11d
 * 0000000140C7058E: cmp     eax, 0C000022Dh
 * 0000000140C70593: jnz     short loc_140C705B4
 * 0000000140C70595: test    r12d, r12d
 * 0000000140C70598: jnz     loc_140C70772
 * 0000000140C7059E: lea     eax, [r11+1]
 * 0000000140C705A2: cmp     r15b, al
 * 0000000140C705A5: ja      short loc_140C705BC
 * 0000000140C705A7: movzx   eax, r15b
 * 0000000140C705AB: mov     cr8, rax
 * 0000000140C705AF: mov     al, [r14]
 * 0000000140C705B2: jmp     short loc_140C70576
 * 0000000140C705B4: test    eax, eax
 * 0000000140C705B6: js      loc_140C70772
 * 0000000140C705BC: mov     r11d, 1000h
 * 0000000140C705C2: add     r14, r11
 * 0000000140C705C5: add     r13, r11
 * 0000000140C705C8: cmp     r13, [rbp+7B0h+var_820]
 * 0000000140C705CC: jnz     short loc_140C7057A
 * 0000000140C705CE: movzx   eax, r15b
 * 0000000140C705D2: mov     cr8, rax
 * 0000000140C705D6: mov     r10d, [rsp+8B0h+var_850]
 * 0000000140C705DB: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C705E0: xor     r11d, r11d
 * 0000000140C705E3: mov     r9, [r13+8]
 * 0000000140C705E7: mov     r8d, [rsi+844h]
 * 0000000140C705EE: mov     ecx, [r13+10h]
 * 0000000140C705F2: mov     [rbp+7B0h+var_828], r9
 * 0000000140C705F6: lea     rax, [r8+r8*2]
 * 0000000140C705FA: lea     r14, [r9+rax*4]
 * 0000000140C705FE: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C70608: mul     rcx
 * 0000000140C7060B: mov     [rsp+8B0h+var_840], r14
 * 0000000140C70610: shr     rdx, 3
 * 0000000140C70614: lea     rax, [rdx+rdx*2]
 * 0000000140C70618: lea     r12, [r9+rax*4]
 * 0000000140C7061C: mov     [rbp+7B0h+var_810], r12
 * 0000000140C70620: lea     r12, ds:30h[r8*4]
 * 0000000140C70628: mov     rax, [rbp+7B0h+var_810]
 * 0000000140C7062C: add     r12, r13
 * 0000000140C7062F: mov     [rsp+8B0h+var_858], r12
 * 0000000140C70634: cmp     r14, rax
 * 0000000140C70637: jz      loc_140C70EDA
 * 0000000140C7063D: cmp     [r12], r11d
 * 0000000140C70641: jl      loc_140C70DF4
 * 0000000140C70647: mov     eax, [r14]
 * 0000000140C7064A: mov     ebx, [r14+4]
 * 0000000140C7064E: mov     r15d, eax
 * 0000000140C70651: add     r15, [r13+20h]
 * 0000000140C70655: sub     ebx, eax
 * 0000000140C70657: mov     [rbp+7B0h+var_820], r15
 * 0000000140C7065B: cmp     r10d, 2Bh ; '+'
 * 0000000140C7065F: jz      loc_140C708EB
 * 0000000140C70665: add     [rsi+848h], ebx
 * 0000000140C7066B: mov     r8, r15
 * 0000000140C7066E: mov     r10d, [rsi+834h]
 * 0000000140C70675: mov     rax, r15
 * 0000000140C70678: mov     r11, [rsi+838h]
 * 0000000140C7067F: mov     ecx, ebx
 * 0000000140C70681: add     rcx, r15
 * 0000000140C70684: cmp     r15, rcx
 * 0000000140C70687: jnb     short loc_140C70699
 * 0000000140C70689: mov     edx, 40h ; '@'
 * 0000000140C7068E: prefetchnta byte ptr [rax]
 * 0000000140C70691: add     rax, rdx
 * 0000000140C70694: cmp     rax, rcx
 * 0000000140C70697: jb      short loc_140C7068E
 * 0000000140C70699: mov     r9d, ebx
 * 0000000140C7069C: mov     r13, r11
 * 0000000140C7069F: shr     r9d, 7
 * 0000000140C706A3: test    r9d, r9d
 * 0000000140C706A6: jz      short loc_140C7071C
 * 0000000140C706A8: mov     edi, 1
 * 0000000140C706AD: mov     rsi, 7010008004002001h
 * 0000000140C706B7: mov     r12d, 0FFFFFFFFh
 * 0000000140C706BD: mov     eax, 8
 * 0000000140C706C2: xor     r13, [r8]
 * 0000000140C706C5: mov     ecx, r10d
 * 0000000140C706C8: rol     r13, cl
 * 0000000140C706CB: xor     r13, [r8+8]
 * 0000000140C706CF: add     r8, 10h
 * 0000000140C706D3: rol     r13, cl
 * 0000000140C706D6: sub     rax, rdi
 * 0000000140C706D9: jnz     short loc_140C706C2
 * 0000000140C706DB: mov     rcx, r8
 * 0000000140C706DE: sub     rcx, r15
 * 0000000140C706E1: xor     rcx, r11
 * 0000000140C706E4: mov     rax, rcx
 * 0000000140C706E7: rol     rax, 11h
 * 0000000140C706EB: xor     rcx, rax
 * 0000000140C706EE: mov     rax, rsi
 * 0000000140C706F1: mul     rcx
 * 0000000140C706F4: mov     [rbp+7B0h+var_3A8], rdx
 * 0000000140C706FB: xor     rdx, rax
 * 0000000140C706FE: xor     r10d, edx
 * 0000000140C70701: and     r10d, 3Fh
 * 0000000140C70705: cmovz   r10d, edi
 * 0000000140C70709: add     r9d, r12d
 * 0000000140C7070C: jnz     short loc_140C706BD
 * 0000000140C7070E: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C70713: lea     edi, [r9+2]
 * 0000000140C70717: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C7071C: mov     edx, ebx
 * 0000000140C7071E: mov     r9d, 1
 * 0000000140C70724: and     edx, 7Fh
 * 0000000140C70727: cmp     edx, 8
 * 0000000140C7072A: jb      short loc_140C70747
 * 0000000140C7072C: mov     eax, edx
 * 0000000140C7072E: shr     rax, 3
 * 0000000140C70732: xor     r13, [r8]
 * 0000000140C70735: mov     ecx, r10d
 * 0000000140C70738: rol     r13, cl
 * 0000000140C7073B: add     r8, 8
 * 0000000140C7073F: add     edx, 0FFFFFFF8h
 * 0000000140C70742: sub     rax, r9
 * 0000000140C70745: jnz     short loc_140C70732
 * 0000000140C70747: xor     r11d, r11d
 * 0000000140C7074A: test    edx, edx
 * 0000000140C7074C: jz      short loc_140C7076A
 * 0000000140C7074E: mov     edi, 0FFFFFFFFh
 * 0000000140C70753: movzx   eax, byte ptr [r8]
 * 0000000140C70757: mov     ecx, r10d
 * 0000000140C7075A: xor     r13, rax
 * 0000000140C7075D: add     r8, r9
 * 0000000140C70760: rol     r13, cl
 * 0000000140C70763: add     edx, edi
 * 0000000140C70765: jnz     short loc_140C70753
 * 0000000140C70767: lea     edi, [rdx+2]
 * 0000000140C7076A: mov     rax, r13
 * 0000000140C7076D: jmp     loc_140C708D8
 * 0000000140C70772: movzx   eax, r15b
 * 0000000140C70776: mov     cr8, rax
 * 0000000140C7077A: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C7077F: mov     eax, [r13+14h]
 * 0000000140C70783: cmp     [rsi+918h], r11d
 * 0000000140C7078A: jnz     short loc_140C7079C
 * 0000000140C7078C: mov     ecx, ebx
 * 0000000140C7078E: xor     rcx, rax
 * 0000000140C70791: mov     rax, [rsi+588h]
 * 0000000140C70798: mov     [rax+18h], rcx
 * 0000000140C7079C: mov     rcx, [r13+8]
 * 0000000140C707A0: cmp     [rsi+918h], r11d
 * 0000000140C707A7: jnz     loc_140C708CB
 * 0000000140C707AD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C707B7: mov     r15d, 1
 * 0000000140C707BD: add     rax, rsi
 * 0000000140C707C0: mov     [rsi+920h], rax
 * 0000000140C707C7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C707D1: add     rax, r13
 * 0000000140C707D4: mov     [rsi+928h], rax
 * 0000000140C707DB: movsxd  rax, dword ptr [r13+0]
 * 0000000140C707DF: mov     [rsi+930h], rax
 * 0000000140C707E6: mov     [rsi+938h], rcx
 * 0000000140C707ED: mov     [rsi+918h], r15d
 * 0000000140C707F4: mov     ecx, [rsi+9D8h]
 * 0000000140C707FA: bt      ecx, 1Dh
 * 0000000140C707FE: jb      loc_140C708CB
 * 0000000140C70804: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7080E: jz      loc_140C708CB
 * 0000000140C70814: test    r15b, cl
 * 0000000140C70817: jz      loc_140C708CB
 * 0000000140C7081D: mov     ecx, [rsi+0A74h]
 * 0000000140C70823: mov     eax, [rsi+804h]
 * 0000000140C70829: mov     r10, [rsi+838h]
 * 0000000140C70830: sub     eax, ecx
 * 0000000140C70832: mov     r8, [rsi+0A78h]
 * 0000000140C70839: lea     rdx, [rcx+rsi]
 * 0000000140C7083D: mov     ecx, eax
 * 0000000140C7083F: shr     rcx, 3
 * 0000000140C70843: lea     r9, [rdx+rcx*8]
 * 0000000140C70847: jmp     short loc_140C7086A
 * 0000000140C70849: xor     [rdx], r8
 * 0000000140C7084C: mov     rax, [rdx]
 * 0000000140C7084F: movzx   ecx, r8b
 * 0000000140C70853: xor     rax, r10
 * 0000000140C70856: and     ecx, 3Fh
 * 0000000140C70859: ror     r8, cl
 * 0000000140C7085C: add     r8, rax
 * 0000000140C7085F: xor     r8, 0F05h
 * 0000000140C70866: add     rdx, 8
 * 0000000140C7086A: cmp     rdx, r9
 * 0000000140C7086D: jnz     short loc_140C70849
 * 0000000140C7086F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C70877: cmp     r8, [rsi+0A80h]
 * 0000000140C7087E: jz      short loc_140C708CB
 * 0000000140C70880: mov     ecx, [rsi+804h]
 * 0000000140C70886: mov     rax, [rsi+588h]
 * 0000000140C7088D: mov     [rax], rsi
 * 0000000140C70890: mov     [rax+10h], ecx
 * 0000000140C70893: mov     rcx, [rsi+0A80h]
 * 0000000140C7089A: cmp     [rsi+918h], r11d
 * 0000000140C708A1: jnz     short loc_140C708B1
 * 0000000140C708A3: mov     rax, [rsi+588h]
 * 0000000140C708AA: xor     rcx, r8
 * 0000000140C708AD: mov     [rax+18h], rcx
 * 0000000140C708B1: xor     edx, edx
 * 0000000140C708B3: mov     r9d, 100h
 * 0000000140C708B9: mov     rcx, rsi
 * 0000000140C708BC: call    sub_140C7903C
 * 0000000140C708C1: mov     r10d, [rsp+8B0h+var_850]
 * 0000000140C708C6: jmp     loc_140C705E0
 * 0000000140C708CB: mov     r10d, [rsp+8B0h+var_850]
 * 0000000140C708D0: jmp     loc_140C705E3
 * 0000000140C708D5: xor     r13d, eax
 * 0000000140C708D8: shr     rax, 1Fh
 * 0000000140C708DC: test    rax, rax
 * 0000000140C708DF: jnz     short loc_140C708D5
 * 0000000140C708E1: btr     r13d, 1Fh
 * 0000000140C708E6: jmp     loc_140C70C56
 * 0000000140C708EB: mov     r8d, ebx
 * 0000000140C708EE: mov     rdx, r15
 * 0000000140C708F1: mov     rcx, rsi
 * 0000000140C708F4: call    sub_140C79338
 * 0000000140C708F9: mov     r13d, eax
 * 0000000140C708FC: xor     r11d, r11d
 * 0000000140C708FF: mov     eax, [rsi+848h]
 * 0000000140C70905: lea     ecx, [rax+rbx*8]
 * 0000000140C70908: mov     [rsi+848h], ecx
 * 0000000140C7090E: test    dword ptr [rsi+9DCh], 800h
 * 0000000140C70918: jz      loc_140C70C56
 * 0000000140C7091E: mov     al, [r15-1]
 * 0000000140C70922: cmp     byte ptr [r15-6], 4Ch ; 'L'
 * 0000000140C70927: jnz     loc_140C70B2A
 * 0000000140C7092D: cmp     byte ptr [r15-5], 87h
 * 0000000140C70932: jnz     loc_140C70B2A
 * 0000000140C70938: cmp     [r15-4], r11b
 * 0000000140C7093C: jnz     loc_140C70B2A
 * 0000000140C70942: cmp     byte ptr [r15-3], 98h
 * 0000000140C70947: jnz     loc_140C70B2A
 * 0000000140C7094D: cmp     byte ptr [r15-2], 0C3h
 * 0000000140C70952: jnz     loc_140C70B2A
 * 0000000140C70958: cmp     al, 90h
 * 0000000140C7095A: jz      short loc_140C70964
 * 0000000140C7095C: cmp     al, 0F1h
 * 0000000140C7095E: jnz     loc_140C70B2A
 * 0000000140C70964: mov     rcx, [rsi+4D8h]
 * 0000000140C7096B: cli
 * 0000000140C7096C: mov     eax, [rsi+9D8h]
 * 0000000140C70972: shr     eax, 9
 * 0000000140C70975: and     eax, 1Fh
 * 0000000140C70978: lock bts [rcx], eax
 * 0000000140C7097C: jnb     short loc_140C70983
 * 0000000140C7097E: sti
 * 0000000140C7097F: pause
 * 0000000140C70981: jmp     short loc_140C7096B
 * 0000000140C70983: mov     rdx, [rsi+900h]
 * 0000000140C7098A: mov     r8d, 26h ; '&'
 * 0000000140C70990: mov     ecx, 130h
 * 0000000140C70995: mov     rax, rdx
 * 0000000140C70998: lea     r9d, [r8-25h]
 * 0000000140C7099C: mov     [rax], r11
 * 0000000140C7099F: add     ecx, 0FFFFFFF8h
 * 0000000140C709A2: add     rax, 8
 * 0000000140C709A6: sub     r8, r9
 * 0000000140C709A9: jnz     short loc_140C7099C
 * 0000000140C709AB: test    ecx, ecx
 * 0000000140C709AD: jz      short loc_140C709C0
 * 0000000140C709AF: mov     r8d, 0FFFFFFFFh
 * 0000000140C709B5: mov     [rax], r11b
 * 0000000140C709B8: add     rax, r9
 * 0000000140C709BB: add     ecx, r8d
 * 0000000140C709BE: jnz     short loc_140C709B5
 * 0000000140C709C0: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140C709C7: mov     eax, 12Fh
 * 0000000140C709CC: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140C709D1: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140C709D8: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140C709DD: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140C709E4: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140C709EC: mov     word ptr [rbp+7B0h+var_5E0], ax
 * 0000000140C709F3: lea     rax, [rsi+8ACh]
 * 0000000140C709FA: mov     [rbp+1D2h], rdx
 * 0000000140C70A01: mov     rcx, rax
 * 0000000140C70A04: mov     [rdx+10h], ax
 * 0000000140C70A08: shr     rcx, 10h
 * 0000000140C70A0C: mov     [rbp+7B0h+var_3A0], rax
 * 0000000140C70A13: shr     rax, 20h
 * 0000000140C70A17: mov     [rdx+16h], cx
 * 0000000140C70A1B: mov     [rdx+18h], eax
 * 0000000140C70A1E: sidt    fword ptr [rbp+7B0h+var_510]
 * 0000000140C70A25: lidt    fword ptr [rbp+7B0h+var_5E0]
 * 0000000140C70A2C: mov     byte ptr [r15-1], 0F1h
 * 0000000140C70A31: mov     al, [r15-1]
 * 0000000140C70A35: cmp     al, 0F1h
 * 0000000140C70A37: jnz     loc_140C70AE3
 * 0000000140C70A3D: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C70A47: jnz     short loc_140C70A8B
 * 0000000140C70A49: mov     rdx, gs:20h
 * 0000000140C70A52: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C70A5C: mov     rax, [rsi+4B8h]
 * 0000000140C70A63: add     rcx, rsi
 * 0000000140C70A66: mov     [rax], rcx
 * 0000000140C70A69: mov     rax, [rsi+4C0h]
 * 0000000140C70A70: mov     [rax], rdx
 * 0000000140C70A73: mov     rax, [rsi+4C8h]
 * 0000000140C70A7A: mov     [rax], r15
 * 0000000140C70A7D: mov     rax, [rsi+4D0h]
 * 0000000140C70A84: mov     qword ptr [rax], 113h
 * 0000000140C70A8B: lea     rax, [r15-1]
 * 0000000140C70A8F: call    KeGuardDispatchICall
 * 0000000140C70A94: xor     r11d, r11d
 * 0000000140C70A97: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C70AA1: jnz     short loc_140C70AD5
 * 0000000140C70AA3: mov     rax, [rsi+4B8h]
 * 0000000140C70AAA: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C70AB4: mov     [rax], rcx
 * 0000000140C70AB7: mov     rax, [rsi+4C0h]
 * 0000000140C70ABE: mov     [rax], r11
 * 0000000140C70AC1: mov     rax, [rsi+4C8h]
 * 0000000140C70AC8: mov     [rax], r11
 * 0000000140C70ACB: mov     rax, [rsi+4D0h]
 * 0000000140C70AD2: mov     [rax], r11
 * 0000000140C70AD5: mov     al, [r15-1]
 * 0000000140C70AD9: mov     r9d, 1
 * 0000000140C70ADF: cmp     al, 0F1h
 * 0000000140C70AE1: jz      short loc_140C70AE8
 * 0000000140C70AE3: mov     r8d, r11d
 * 0000000140C70AE6: jmp     short loc_140C70AFA
 * 0000000140C70AE8: mov     byte ptr [r15-1], 90h
 * 0000000140C70AED: mov     r8d, r9d
 * 0000000140C70AF0: mov     al, [r15-1]
 * 0000000140C70AF4: cmp     al, 90h
 * 0000000140C70AF6: cmovnz  r8d, r11d
 * 0000000140C70AFA: lidt    fword ptr [rbp+7B0h+var_510]
 * 0000000140C70B01: mov     ecx, [rsi+9D8h]
 * 0000000140C70B07: mov     eax, r9d
 * 0000000140C70B0A: mov     rdx, [rsi+4D8h]
 * 0000000140C70B11: shr     ecx, 9
 * 0000000140C70B14: and     ecx, 1Fh
 * 0000000140C70B17: shl     eax, cl
 * 0000000140C70B19: not     eax
 * 0000000140C70B1B: lock and [rdx], eax
 * 0000000140C70B1E: sti
 * 0000000140C70B1F: test    r8d, r8d
 * 0000000140C70B22: jnz     loc_140C70C56
 * 0000000140C70B28: jmp     short loc_140C70B30
 * 0000000140C70B2A: mov     r9d, 1
 * 0000000140C70B30: cmp     [rsi+918h], r11d
 * 0000000140C70B37: jnz     loc_140C70C56
 * 0000000140C70B3D: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C70B42: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C70B4C: add     rax, rsi
 * 0000000140C70B4F: mov     [rsi+920h], rax
 * 0000000140C70B56: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C70B60: add     rax, rcx
 * 0000000140C70B63: mov     [rsi+928h], rax
 * 0000000140C70B6A: movsxd  rax, dword ptr [rcx]
 * 0000000140C70B6D: mov     [rsi+930h], rax
 * 0000000140C70B74: lea     rax, [r15-6]
 * 0000000140C70B78: mov     [rsi+938h], rax
 * 0000000140C70B7F: mov     [rsi+918h], r9d
 * 0000000140C70B86: mov     ecx, [rsi+9D8h]
 * 0000000140C70B8C: bt      ecx, 1Dh
 * 0000000140C70B90: jb      loc_140C70C56
 * 0000000140C70B96: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C70BA0: jz      loc_140C70C56
 * 0000000140C70BA6: test    r9b, cl
 * 0000000140C70BA9: jz      loc_140C70C56
 * 0000000140C70BAF: mov     ecx, [rsi+0A74h]
 * 0000000140C70BB5: mov     eax, [rsi+804h]
 * 0000000140C70BBB: mov     r10, [rsi+838h]
 * 0000000140C70BC2: sub     eax, ecx
 * 0000000140C70BC4: mov     r8, [rsi+0A78h]
 * 0000000140C70BCB: lea     rdx, [rcx+rsi]
 * 0000000140C70BCF: mov     ecx, eax
 * 0000000140C70BD1: shr     rcx, 3
 * 0000000140C70BD5: lea     r9, [rdx+rcx*8]
 * 0000000140C70BD9: jmp     short loc_140C70BFC
 * 0000000140C70BDB: xor     [rdx], r8
 * 0000000140C70BDE: mov     rax, [rdx]
 * 0000000140C70BE1: movzx   ecx, r8b
 * 0000000140C70BE5: xor     rax, r10
 * 0000000140C70BE8: and     ecx, 3Fh
 * 0000000140C70BEB: ror     r8, cl
 * 0000000140C70BEE: add     r8, rax
 * 0000000140C70BF1: xor     r8, 0F05h
 * 0000000140C70BF8: add     rdx, 8
 * 0000000140C70BFC: cmp     rdx, r9
 * 0000000140C70BFF: jnz     short loc_140C70BDB
 * 0000000140C70C01: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C70C09: cmp     r8, [rsi+0A80h]
 * 0000000140C70C10: jz      short loc_140C70C56
 * 0000000140C70C12: mov     ecx, [rsi+804h]
 * 0000000140C70C18: mov     rax, [rsi+588h]
 * 0000000140C70C1F: mov     [rax], rsi
 * 0000000140C70C22: mov     [rax+10h], ecx
 * 0000000140C70C25: mov     rcx, [rsi+0A80h]
 * 0000000140C70C2C: cmp     [rsi+918h], r11d
 * 0000000140C70C33: jnz     short loc_140C70C43
 * 0000000140C70C35: mov     rax, [rsi+588h]
 * 0000000140C70C3C: xor     rcx, r8
 * 0000000140C70C3F: mov     [rax+18h], rcx
 * 0000000140C70C43: xor     edx, edx
 * 0000000140C70C45: mov     r9d, 100h
 * 0000000140C70C4B: mov     rcx, rsi
 * 0000000140C70C4E: call    sub_140C7903C
 * 0000000140C70C53: xor     r11d, r11d
 * 0000000140C70C56: mov     eax, [r12]
 * 0000000140C70C5A: btr     eax, 1Fh
 * 0000000140C70C5E: cmp     r13d, eax
 * 0000000140C70C61: jz      loc_140C70DEB
 * 0000000140C70C67: mov     ecx, ebx
 * 0000000140C70C69: test    ebx, ebx
 * 0000000140C70C6B: jz      loc_140C70CF7
 * 0000000140C70C71: mov     eax, [rsi+9DCh]
 * 0000000140C70C77: mov     edx, 40h ; '@'
 * 0000000140C70C7C: test    dl, al
 * 0000000140C70C7E: jz      short loc_140C70CF7
 * 0000000140C70C80: mov     r14, cr8
 * 0000000140C70C84: mov     rbx, r15
 * 0000000140C70C87: lea     r12, [r15-1]
 * 0000000140C70C8B: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140C70C92: add     r12, rcx
 * 0000000140C70C95: or      r12, 0FFFh
 * 0000000140C70C9C: lea     r15, [rbx-1]
 * 0000000140C70CA0: mov     cr8, rdi
 * 0000000140C70CA4: mov     rax, [rsi+468h]
 * 0000000140C70CAB: xor     edx, edx
 * 0000000140C70CAD: mov     rcx, rbx
 * 0000000140C70CB0: call    KeGuardDispatchICall
 * 0000000140C70CB5: cmp     eax, 0C000022Dh
 * 0000000140C70CBA: jnz     short loc_140C70CD6
 * 0000000140C70CBC: mov     eax, 1
 * 0000000140C70CC1: cmp     r14b, al
 * 0000000140C70CC4: ja      loc_140C70DC2
 * 0000000140C70CCA: movzx   eax, r14b
 * 0000000140C70CCE: mov     cr8, rax
 * 0000000140C70CD2: mov     al, [rbx]
 * 0000000140C70CD4: jmp     short loc_140C70CA0
 * 0000000140C70CD6: xor     r11d, r11d
 * 0000000140C70CD9: test    eax, eax
 * 0000000140C70CDB: jns     loc_140C70DC5
 * 0000000140C70CE1: movzx   eax, r14b
 * 0000000140C70CE5: mov     cr8, rax
 * 0000000140C70CE9: mov     r15, [rbp+7B0h+var_820]
 * 0000000140C70CED: mov     r14, [rsp+8B0h+var_840]
 * 0000000140C70CF2: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C70CF7: mov     eax, [r12]
 * 0000000140C70CFB: btr     eax, 1Fh
 * 0000000140C70CFF: cmp     [rsi+918h], r11d
 * 0000000140C70D06: jnz     loc_140C70DEB
 * 0000000140C70D0C: mov     ecx, r13d
 * 0000000140C70D0F: xor     rcx, rax
 * 0000000140C70D12: mov     rax, [rsi+588h]
 * 0000000140C70D19: mov     [rax+18h], rcx
 * 0000000140C70D1D: cmp     [rsi+918h], r11d
 * 0000000140C70D24: jnz     loc_140C70DEB
 * 0000000140C70D2A: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C70D2F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C70D39: add     rax, rsi
 * 0000000140C70D3C: mov     [rsi+920h], rax
 * 0000000140C70D43: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C70D4D: add     rax, r13
 * 0000000140C70D50: mov     [rsi+928h], rax
 * 0000000140C70D57: movsxd  rax, dword ptr [r13+0]
 * 0000000140C70D5B: mov     [rsi+930h], rax
 * 0000000140C70D62: mov     [rsi+938h], r15
 * 0000000140C70D69: mov     r15d, 1
 * 0000000140C70D6F: mov     [rsi+918h], r15d
 * 0000000140C70D76: mov     ecx, [rsi+9D8h]
 * 0000000140C70D7C: bt      ecx, 1Dh
 * 0000000140C70D80: jb      short loc_140C70DF0
 * 0000000140C70D82: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C70D8C: jz      short loc_140C70DF0
 * 0000000140C70D8E: test    r15b, cl
 * 0000000140C70D91: jz      short loc_140C70DF0
 * 0000000140C70D93: mov     ecx, [rsi+0A74h]
 * 0000000140C70D99: mov     eax, [rsi+804h]
 * 0000000140C70D9F: mov     r10, [rsi+838h]
 * 0000000140C70DA6: sub     eax, ecx
 * 0000000140C70DA8: mov     r8, [rsi+0A78h]
 * 0000000140C70DAF: lea     rdx, [rcx+rsi]
 * 0000000140C70DB3: mov     ecx, eax
 * 0000000140C70DB5: shr     rcx, 3
 * 0000000140C70DB9: lea     r9, [rdx+rcx*8]
 * 0000000140C70DBD: jmp     loc_140C70E77
 * 0000000140C70DC2: xor     r11d, r11d
 * 0000000140C70DC5: mov     eax, 1000h
 * 0000000140C70DCA: add     rbx, rax
 * 0000000140C70DCD: add     r15, rax
 * 0000000140C70DD0: cmp     r15, r12
 * 0000000140C70DD3: jnz     loc_140C70CA4
 * 0000000140C70DD9: movzx   eax, r14b
 * 0000000140C70DDD: mov     cr8, rax
 * 0000000140C70DE1: mov     r14, [rsp+8B0h+var_840]
 * 0000000140C70DE6: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C70DEB: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C70DF0: mov     rax, [rbp+7B0h+var_810]
 * 0000000140C70DF4: add     r12, 4
 * 0000000140C70DF8: add     r14, 0Ch
 * 0000000140C70DFC: mov     [rsp+8B0h+var_858], r12
 * 0000000140C70E01: mov     [rsp+8B0h+var_840], r14
 * 0000000140C70E06: cmp     r14, rax
 * 0000000140C70E09: jnb     short loc_140C70E26
 * 0000000140C70E0B: mov     eax, [rsi+84Ch]
 * 0000000140C70E11: cmp     [rsi+848h], eax
 * 0000000140C70E17: mov     rax, [rbp+7B0h+var_810]
 * 0000000140C70E1B: mov     r10d, [rsp+8B0h+var_850]
 * 0000000140C70E20: jl      loc_140C7063D
 * 0000000140C70E26: cmp     r14, [rbp+7B0h+var_810]
 * 0000000140C70E2A: jz      loc_140C70EDA
 * 0000000140C70E30: sub     r14, [rbp+7B0h+var_828]
 * 0000000140C70E34: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140C70E3E: imul    r14
 * 0000000140C70E41: sar     rdx, 1
 * 0000000140C70E44: mov     rax, rdx
 * 0000000140C70E47: shr     rax, 3Fh
 * 0000000140C70E4B: add     rdx, rax
 * 0000000140C70E4E: xor     r12d, r12d
 * 0000000140C70E51: jmp     loc_140C710F0
 * 0000000140C70E56: xor     [rdx], r8
 * 0000000140C70E59: mov     rax, [rdx]
 * 0000000140C70E5C: movzx   ecx, r8b
 * 0000000140C70E60: xor     rax, r10
 * 0000000140C70E63: and     ecx, 3Fh
 * 0000000140C70E66: ror     r8, cl
 * 0000000140C70E69: add     r8, rax
 * 0000000140C70E6C: xor     r8, 0F05h
 * 0000000140C70E73: add     rdx, 8
 * 0000000140C70E77: cmp     rdx, r9
 * 0000000140C70E7A: jnz     short loc_140C70E56
 * 0000000140C70E7C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C70E84: cmp     r8, [rsi+0A80h]
 * 0000000140C70E8B: jz      loc_140C70DF0
 * 0000000140C70E91: mov     ecx, [rsi+804h]
 * 0000000140C70E97: mov     rax, [rsi+588h]
 * 0000000140C70E9E: mov     [rax], rsi
 * 0000000140C70EA1: mov     [rax+10h], ecx
 * 0000000140C70EA4: mov     rcx, [rsi+0A80h]
 * 0000000140C70EAB: cmp     [rsi+918h], r11d
 * 0000000140C70EB2: jnz     short loc_140C70EC2
 * 0000000140C70EB4: mov     rax, [rsi+588h]
 * 0000000140C70EBB: xor     rcx, r8
 * 0000000140C70EBE: mov     [rax+18h], rcx
 * 0000000140C70EC2: xor     edx, edx
 * 0000000140C70EC4: mov     r9d, 100h
 * 0000000140C70ECA: mov     rcx, rsi
 * 0000000140C70ECD: call    sub_140C7903C
 * 0000000140C70ED2: xor     r11d, r11d
 * 0000000140C70ED5: jmp     loc_140C70DF0
 * 0000000140C70EDA: mov     rcx, [rsi+538h]
 * 0000000140C70EE1: mov     rbx, cr8
 * 0000000140C70EE5: mov     eax, 0Fh
 * 0000000140C70EEA: mov     cr8, rax
 * 0000000140C70EEE: mov     rax, [rsi+160h]
 * 0000000140C70EF5: call    KeGuardDispatchICall
 * 0000000140C70EFA: mov     rax, [rsi+620h]
 * 0000000140C70F01: mov     rcx, [rax]
 * 0000000140C70F04: mov     eax, [rcx]
 * 0000000140C70F06: lea     r15, [rcx+10h]
 * 0000000140C70F0A: mov     r14b, [rcx+0Ch]
 * 0000000140C70F0E: lea     rcx, [rax+rax*2]
 * 0000000140C70F12: lea     r12, [r15+rcx*8]
 * 0000000140C70F16: mov     edx, 18h
 * 0000000140C70F1B: lea     r8, [r13+18h]
 * 0000000140C70F1F: mov     r9, r15
 * 0000000140C70F22: mov     rcx, [r9]
 * 0000000140C70F25: add     r9, 8
 * 0000000140C70F29: mov     rax, [r8]
 * 0000000140C70F2C: add     r8, 8
 * 0000000140C70F30: cmp     rcx, rax
 * 0000000140C70F33: jnz     short loc_140C70F62
 * 0000000140C70F35: add     edx, 0FFFFFFF8h
 * 0000000140C70F38: cmp     edx, 8
 * 0000000140C70F3B: jnb     short loc_140C70F22
 * 0000000140C70F3D: test    edx, edx
 * 0000000140C70F3F: jz      short loc_140C70F6B
 * 0000000140C70F41: mov     r11d, 1
 * 0000000140C70F47: mov     cl, [r9]
 * 0000000140C70F4A: add     r9, r11
 * 0000000140C70F4D: mov     al, [r8]
 * 0000000140C70F50: add     r8, r11
 * 0000000140C70F53: cmp     cl, al
 * 0000000140C70F55: jnz     short loc_140C70F62
 * 0000000140C70F57: mov     eax, 0FFFFFFFFh
 * 0000000140C70F5C: add     edx, eax
 * 0000000140C70F5E: jnz     short loc_140C70F47
 * 0000000140C70F60: jmp     short loc_140C70F6B
 * 0000000140C70F62: add     r15, 18h
 * 0000000140C70F66: cmp     r15, r12
 * 0000000140C70F69: jb      short loc_140C70F16
 * 0000000140C70F6B: mov     rcx, [rsi+538h]
 * 0000000140C70F72: mov     rax, [rsi+1A0h]
 * 0000000140C70F79: call    KeGuardDispatchICall
 * 0000000140C70F7E: movzx   eax, bl
 * 0000000140C70F81: mov     cr8, rax
 * 0000000140C70F85: xor     r11d, r11d
 * 0000000140C70F88: lea     edi, [r11+2]
 * 0000000140C70F8C: test    r14b, r14b
 * 0000000140C70F8F: jz      loc_140C7110C
 * 0000000140C70F95: mov     eax, [rsi+9DCh]
 * 0000000140C70F9B: lea     ecx, [rdi+0Eh]
 * 0000000140C70F9E: test    cl, al
 * 0000000140C70FA0: jz      loc_140C710DF
 * 0000000140C70FA6: cmp     [rsi+918h], r11d
 * 0000000140C70FAD: jnz     loc_140C710DF
 * 0000000140C70FB3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C70FBD: add     rax, rsi
 * 0000000140C70FC0: mov     [rsi+920h], rax
 * 0000000140C70FC7: test    r13, r13
 * 0000000140C70FCA: jz      short loc_140C70FDB
 * 0000000140C70FCC: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140C70FD6: add     rcx, r13
 * 0000000140C70FD9: jmp     short loc_140C70FDE
 * 0000000140C70FDB: mov     rcx, r11
 * 0000000140C70FDE: mov     [rsi+928h], rcx
 * 0000000140C70FE5: mov     rcx, rsi
 * 0000000140C70FE8: mov     edx, 930h
 * 0000000140C70FED: test    r13, r13
 * 0000000140C70FF0: jz      short loc_140C70FF8
 * 0000000140C70FF2: movsxd  rax, dword ptr [r13+0]
 * 0000000140C70FF6: jmp     short loc_140C70FFB
 * 0000000140C70FF8: mov     rax, r11
 * 0000000140C70FFB: mov     [rcx+rdx], rax
 * 0000000140C70FFF: mov     ebx, 1
 * 0000000140C71004: mov     [rsi+938h], rbx
 * 0000000140C7100B: mov     [rsi+918h], ebx
 * 0000000140C71011: mov     ecx, [rsi+9D8h]
 * 0000000140C71017: bt      ecx, 1Dh
 * 0000000140C7101B: jb      loc_140C710E4
 * 0000000140C71021: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7102B: jz      loc_140C710E4
 * 0000000140C71031: test    bl, cl
 * 0000000140C71033: jz      loc_140C710E4
 * 0000000140C71039: mov     ecx, [rsi+0A74h]
 * 0000000140C7103F: mov     eax, [rsi+804h]
 * 0000000140C71045: mov     r10, [rsi+838h]
 * 0000000140C7104C: sub     eax, ecx
 * 0000000140C7104E: mov     r8, [rsi+0A78h]
 * 0000000140C71055: lea     rdx, [rcx+rsi]
 * 0000000140C71059: mov     ecx, eax
 * 0000000140C7105B: shr     rcx, 3
 * 0000000140C7105F: lea     r9, [rdx+rcx*8]
 * 0000000140C71063: jmp     short loc_140C71086
 * 0000000140C71065: xor     [rdx], r8
 * 0000000140C71068: mov     rax, [rdx]
 * 0000000140C7106B: movzx   ecx, r8b
 * 0000000140C7106F: xor     rax, r10
 * 0000000140C71072: and     ecx, 3Fh
 * 0000000140C71075: ror     r8, cl
 * 0000000140C71078: add     r8, rax
 * 0000000140C7107B: xor     r8, 0F05h
 * 0000000140C71082: add     rdx, 8
 * 0000000140C71086: cmp     rdx, r9
 * 0000000140C71089: jnz     short loc_140C71065
 * 0000000140C7108B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C71093: cmp     r8, [rsi+0A80h]
 * 0000000140C7109A: jz      short loc_140C710E4
 * 0000000140C7109C: mov     ecx, [rsi+804h]
 * 0000000140C710A2: mov     rax, [rsi+588h]
 * 0000000140C710A9: mov     [rax], rsi
 * 0000000140C710AC: mov     [rax+10h], ecx
 * 0000000140C710AF: mov     rcx, [rsi+0A80h]
 * 0000000140C710B6: cmp     [rsi+918h], r11d
 * 0000000140C710BD: jnz     short loc_140C710CD
 * 0000000140C710BF: mov     rax, [rsi+588h]
 * 0000000140C710C6: xor     rcx, r8
 * 0000000140C710C9: mov     [rax+18h], rcx
 * 0000000140C710CD: xor     edx, edx
 * 0000000140C710CF: mov     r9d, 100h
 * 0000000140C710D5: mov     rcx, rsi
 * 0000000140C710D8: call    sub_140C7903C
 * 0000000140C710DD: jmp     short loc_140C710E4
 * 0000000140C710DF: mov     ebx, 1
 * 0000000140C710E4: cmp     [r13+18h], rbx
 * 0000000140C710E8: jnz     short loc_140C71111
 * 0000000140C710EA: xor     r12d, r12d
 * 0000000140C710ED: mov     edx, r12d
 * 0000000140C710F0: mov     ecx, 844h
 * 0000000140C710F5: mov     rax, rsi
 * 0000000140C710F8: mov     [rcx+rax], edx
 * 0000000140C710FB: mov     r11d, 1000h
 * 0000000140C71101: mov     r15d, 1
 * 0000000140C71107: jmp     loc_140C713A3
 * 0000000140C7110C: mov     ebx, 1
 * 0000000140C71111: cmp     r15, r12
 * 0000000140C71114: jnz     short loc_140C710EA
 * 0000000140C71116: xor     r12d, r12d
 * 0000000140C71119: cmp     [rsi+918h], r12d
 * 0000000140C71120: jnz     short loc_140C710ED
 * 0000000140C71122: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C7112C: add     rax, rsi
 * 0000000140C7112F: mov     [rsi+920h], rax
 * 0000000140C71136: test    r13, r13
 * 0000000140C71139: jz      short loc_140C7114A
 * 0000000140C7113B: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140C71145: add     rcx, r13
 * 0000000140C71148: jmp     short loc_140C7114D
 * 0000000140C7114A: mov     rcx, r12
 * 0000000140C7114D: mov     [rsi+928h], rcx
 * 0000000140C71154: mov     rcx, rsi
 * 0000000140C71157: mov     edx, 930h
 * 0000000140C7115C: test    r13, r13
 * 0000000140C7115F: jz      short loc_140C71167
 * 0000000140C71161: movsxd  rax, dword ptr [r13+0]
 * 0000000140C71165: jmp     short loc_140C7116A
 * 0000000140C71167: mov     rax, r12
 * 0000000140C7116A: mov     [rdx+rcx], rax
 * 0000000140C7116E: mov     [rsi+938h], r15
 * 0000000140C71175: mov     [rsi+918h], ebx
 * 0000000140C7117B: mov     ecx, [rsi+9D8h]
 * 0000000140C71181: bt      ecx, 1Dh
 * 0000000140C71185: jb      loc_140C710ED
 * 0000000140C7118B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C71195: jz      loc_140C710ED
 * 0000000140C7119B: test    bl, cl
 * 0000000140C7119D: jz      loc_140C710ED
 * 0000000140C711A3: mov     ecx, [rsi+0A74h]
 * 0000000140C711A9: mov     eax, [rsi+804h]
 * 0000000140C711AF: mov     r10, [rsi+838h]
 * 0000000140C711B6: sub     eax, ecx
 * 0000000140C711B8: mov     r8, [rsi+0A78h]
 * 0000000140C711BF: lea     rdx, [rcx+rsi]
 * 0000000140C711C3: mov     ecx, eax
 * 0000000140C711C5: shr     rcx, 3
 * 0000000140C711C9: lea     r9, [rdx+rcx*8]
 * 0000000140C711CD: jmp     short loc_140C711F0
 * 0000000140C711CF: xor     [rdx], r8
 * 0000000140C711D2: mov     rax, [rdx]
 * 0000000140C711D5: movzx   ecx, r8b
 * 0000000140C711D9: xor     rax, r10
 * 0000000140C711DC: and     ecx, 3Fh
 * 0000000140C711DF: ror     r8, cl
 * 0000000140C711E2: add     r8, rax
 * 0000000140C711E5: xor     r8, 0F05h
 * 0000000140C711EC: add     rdx, 8
 * 0000000140C711F0: cmp     rdx, r9
 * 0000000140C711F3: jnz     short loc_140C711CF
 * 0000000140C711F5: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C711FD: cmp     r8, [rsi+0A80h]
 * 0000000140C71204: jz      loc_140C710ED
 * 0000000140C7120A: mov     ecx, [rsi+804h]
 * 0000000140C71210: mov     rax, [rsi+588h]
 * 0000000140C71217: mov     [rax], rsi
 * 0000000140C7121A: mov     [rax+10h], ecx
 * 0000000140C7121D: mov     rcx, [rsi+0A80h]
 * 0000000140C71224: cmp     [rsi+918h], r12d
 * 0000000140C7122B: jnz     short loc_140C7123B
 * 0000000140C7122D: mov     rax, [rsi+588h]
 * 0000000140C71234: xor     rcx, r8
 * 0000000140C71237: mov     [rax+18h], rcx
 * 0000000140C7123B: xor     edx, edx
 * 0000000140C7123D: mov     r9d, 100h
 * 0000000140C71243: mov     rcx, rsi
 * 0000000140C71246: call    sub_140C7903C
 * 0000000140C7124B: jmp     loc_140C710ED
 * 0000000140C71250: mov     edx, 0FFFFFFFFh
 * 0000000140C71255: and     r10d, 7Fh
 * 0000000140C71259: mov     r15d, 1
 * 0000000140C7125F: cmp     r10d, 8
 * 0000000140C71263: jb      short loc_140C71282
 * 0000000140C71265: mov     eax, r10d
 * 0000000140C71268: shr     rax, 3
 * 0000000140C7126C: xor     r8, [r9]
 * 0000000140C7126F: mov     ecx, r11d
 * 0000000140C71272: rol     r8, cl
 * 0000000140C71275: add     r9, 8
 * 0000000140C71279: add     r10d, 0FFFFFFF8h
 * 0000000140C7127D: sub     rax, r15
 * 0000000140C71280: jnz     short loc_140C7126C
 * 0000000140C71282: test    r10d, r10d
 * 0000000140C71285: jz      short loc_140C7129C
 * 0000000140C71287: movzx   eax, byte ptr [r9]
 * 0000000140C7128B: mov     ecx, r11d
 * 0000000140C7128E: xor     r8, rax
 * 0000000140C71291: add     r9, r15
 * 0000000140C71294: rol     r8, cl
 * 0000000140C71297: add     r10d, edx
 * 0000000140C7129A: jnz     short loc_140C71287
 * 0000000140C7129C: mov     rcx, [r13+18h]
 * 0000000140C712A0: cmp     r8, rcx
 * 0000000140C712A3: jz      loc_140C6F354
 * 0000000140C712A9: cmp     [rsi+918h], r12d
 * 0000000140C712B0: jnz     short loc_140C712C0
 * 0000000140C712B2: mov     rax, [rsi+588h]
 * 0000000140C712B9: xor     rcx, r8
 * 0000000140C712BC: mov     [rax+18h], rcx
 * 0000000140C712C0: mov     ecx, [r13+20h]
 * 0000000140C712C4: add     rcx, rsi
 * 0000000140C712C7: cmp     [rsi+918h], r12d
 * 0000000140C712CE: jnz     loc_140C6F354
 * 0000000140C712D4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C712DE: add     rax, rsi
 * 0000000140C712E1: mov     [rsi+920h], rax
 * 0000000140C712E8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C712F2: add     rax, r13
 * 0000000140C712F5: mov     [rsi+928h], rax
 * 0000000140C712FC: movsxd  rax, dword ptr [r13+0]
 * 0000000140C71300: mov     [rsi+930h], rax
 * 0000000140C71307: mov     [rsi+938h], rcx
 * 0000000140C7130E: mov     [rsi+918h], r15d
 * 0000000140C71315: mov     ecx, [rsi+9D8h]
 * 0000000140C7131B: bt      ecx, 1Dh
 * 0000000140C7131F: jb      loc_140C6F354
 * 0000000140C71325: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7132F: jz      loc_140C6F354
 * 0000000140C71335: test    r15b, cl
 * 0000000140C71338: jz      loc_140C6F354
 * 0000000140C7133E: mov     ecx, [rsi+0A74h]
 * 0000000140C71344: mov     eax, [rsi+804h]
 * 0000000140C7134A: mov     r10, [rsi+838h]
 * 0000000140C71351: sub     eax, ecx
 * 0000000140C71353: mov     r8, [rsi+0A78h]
 * 0000000140C7135A: lea     rdx, [rcx+rsi]
 * 0000000140C7135E: mov     ecx, eax
 * 0000000140C71360: shr     rcx, 3
 * 0000000140C71364: lea     r9, [rdx+rcx*8]
 * 0000000140C71368: jmp     short loc_140C7138B
 * 0000000140C7136A: xor     [rdx], r8
 * 0000000140C7136D: mov     rax, [rdx]
 * 0000000140C71370: movzx   ecx, r8b
 * 0000000140C71374: xor     rax, r10
 * 0000000140C71377: and     ecx, 3Fh
 * 0000000140C7137A: ror     r8, cl
 * 0000000140C7137D: add     r8, rax
 * 0000000140C71380: xor     r8, 0F05h
 * 0000000140C71387: add     rdx, 8
 * 0000000140C7138B: cmp     rdx, r9
 * 0000000140C7138E: jnz     short loc_140C7136A
 * 0000000140C71390: jmp     loc_140C65A4E
 * 0000000140C71395: mov     r11d, 1000h
 * 0000000140C7139B: jmp     loc_140C643EF
 * 0000000140C713A0: mov     r15, rcx
 * 0000000140C713A3: mov     ebx, 0FFFFFFFFh
 * 0000000140C713A8: mov     ecx, [rbp+7B0h+var_7C8]
 * 0000000140C713AB: cmp     [rsi+844h], r12d
 * 0000000140C713B2: jz      short loc_140C713B6
 * 0000000140C713B4: add     ecx, ebx
 * 0000000140C713B6: add     ecx, r15d
 * 0000000140C713B9: mov     [rbp+7B0h+var_7C8], ecx
 * 0000000140C713BC: cmp     [rsi+918h], r12d
 * 0000000140C713C3: jnz     short loc_140C713E1
 * 0000000140C713C5: mov     eax, [rsi+84Ch]
 * 0000000140C713CB: cmp     [rsi+848h], eax
 * 0000000140C713D1: jge     short loc_140C713E1
 * 0000000140C713D3: mov     edx, 28h ; '('
 * 0000000140C713D8: lea     r14d, [rdx-23h]
 * 0000000140C713DC: jmp     loc_140C6384F
 * 0000000140C713E1: mov     [rsi+840h], ecx
 * 0000000140C713E7: cmp     [rbp+7B0h+var_7B0], r12d
 * 0000000140C713EB: jz      short loc_140C71457
 * 0000000140C713ED: mov     rcx, gs:20h
 * 0000000140C713F6: mov     rax, [rsi+658h]
 * 0000000140C713FD: mov     rdx, [rax+rcx]
 * 0000000140C71401: lea     rcx, [rbp+7B0h+var_250]
 * 0000000140C71408: mov     rax, [rsi+698h]
 * 0000000140C7140F: add     rdx, [rsi+6B8h]
 * 0000000140C71416: mov     rbx, [rdx+rax]
 * 0000000140C7141A: mov     rax, [rsi+1A8h]
 * 0000000140C71421: call    KeGuardDispatchICall
 * 0000000140C71426: mov     rax, [rsi+448h]
 * 0000000140C7142D: lea     rcx, [rbp+7B0h+var_70]
 * 0000000140C71434: call    KeGuardDispatchICall
 * 0000000140C71439: mov     rax, [rsi+3B0h]
 * 0000000140C71440: mov     rcx, rbx
 * 0000000140C71443: call    KeGuardDispatchICall
 * 0000000140C71448: mov     rax, [rsi+3C0h]
 * 0000000140C7144F: mov     rcx, rbx
 * 0000000140C71452: call    KeGuardDispatchICall
 * 0000000140C71457: mov     eax, [rsi+9D8h]
 * 0000000140C7145D: mov     ecx, 400004h
 * 0000000140C71462: and     eax, ecx
 * 0000000140C71464: cmp     eax, ecx
 * 0000000140C71466: jnz     loc_140C718DB
 * 0000000140C7146C: mov     r10, [rsi+0AB8h]
 * 0000000140C71473: mov     eax, [rsi+9DCh]
 * 0000000140C71479: mov     r14d, [rsi+804h]
 * 0000000140C71480: mov     r11, [rsi+0A40h]
 * 0000000140C71487: mov     r12d, [rsi+828h]
 * 0000000140C7148E: mov     [rbp+7B0h+arg_8], r10
 * 0000000140C71495: test    dil, al
 * 0000000140C71498: jz      short loc_140C714A1
 * 0000000140C7149A: mov     r11, [rsi+5D0h]
 * 0000000140C714A1: mov     rax, [rsi+2D0h]
 * 0000000140C714A8: mov     r9, [rsi+170h]
 * 0000000140C714AF: mov     [rbp+7B0h+var_7A0], rax
 * 0000000140C714B3: mov     rax, [rsi+348h]
 * 0000000140C714BA: mov     [rbp+7B0h+var_7A8], rax
 * 0000000140C714BE: mov     [rbp+7B0h+var_820], r9
 * 0000000140C714C2: rdtsc
 * 0000000140C714C4: shl     rdx, 20h
 * 0000000140C714C8: mov     rbx, 7010008004002001h
 * 0000000140C714D2: or      rax, rdx
 * 0000000140C714D5: mov     rcx, rax
 * 0000000140C714D8: ror     rax, 3
 * 0000000140C714DC: xor     rcx, rax
 * 0000000140C714DF: mov     rax, rbx
 * 0000000140C714E2: mul     rcx
 * 0000000140C714E5: mov     rcx, rdx
 * 0000000140C714E8: xor     rcx, rax
 * 0000000140C714EB: mov     rax, 0ABCC77118461CEFDh
 * 0000000140C714F5: mul     rcx
 * 0000000140C714F8: shr     rdx, 1Ah
 * 0000000140C714FC: sub     rdx, 0Ch
 * 0000000140C71500: imul    r8, rdx, 5F5E100h
 * 0000000140C71507: sub     r8, rcx
 * 0000000140C7150A: mov     [rbp+7B0h+var_700], r8
 * 0000000140C71511: test    dword ptr [rsi+9D8h], 2000000h
 * 0000000140C7151B: jz      loc_140C715A4
 * 0000000140C71521: rdtsc
 * 0000000140C71523: shl     rdx, 20h
 * 0000000140C71527: mov     r13, 0CCCCCCCCCCCCCCCDh
 * 0000000140C71531: or      rax, rdx
 * 0000000140C71534: mov     rcx, rax
 * 0000000140C71537: ror     rax, 3
 * 0000000140C7153B: xor     rcx, rax
 * 0000000140C7153E: mov     rax, rbx
 * 0000000140C71541: mul     rcx
 * 0000000140C71544: mov     rcx, rdx
 * 0000000140C71547: xor     rcx, rax
 * 0000000140C7154A: mov     rax, r13
 * 0000000140C7154D: mul     rcx
 * 0000000140C71550: shr     rdx, 3
 * 0000000140C71554: lea     rax, [rdx+rdx*4]
 * 0000000140C71558: add     rax, rax
 * 0000000140C7155B: sub     rcx, rax
 * 0000000140C7155E: cmp     rcx, rdi
 * 0000000140C71561: jnb     short loc_140C715A4
 * 0000000140C71563: rdtsc
 * 0000000140C71565: shl     rdx, 20h
 * 0000000140C71569: or      rax, rdx
 * 0000000140C7156C: mov     rcx, rax
 * 0000000140C7156F: ror     rax, 3
 * 0000000140C71573: xor     rcx, rax
 * 0000000140C71576: mov     rax, rbx
 * 0000000140C71579: mul     rcx
 * 0000000140C7157C: mov     rcx, rdx
 * 0000000140C7157F: xor     rcx, rax
 * 0000000140C71582: mov     rax, r13
 * 0000000140C71585: mul     rcx
 * 0000000140C71588: shr     rdx, 3
 * 0000000140C7158C: lea     rax, [rdx+rdx*4]
 * 0000000140C71590: add     rax, rax
 * 0000000140C71593: sub     rcx, rax
 * 0000000140C71596: add     rcx, r15
 * 0000000140C71599: imul    rcx, r8
 * 0000000140C7159D: mov     [rbp+7B0h+var_700], rcx
 * 0000000140C715A4: mov     eax, [rsi+9D8h]
 * 0000000140C715AA: xor     r8d, r8d
 * 0000000140C715AD: mov     ebx, r8d
 * 0000000140C715B0: mov     r15d, r8d
 * 0000000140C715B3: lea     ecx, [r8+1]
 * 0000000140C715B7: test    cl, al
 * 0000000140C715B9: lea     edx, [rcx+3Fh]
 * 0000000140C715BC: cmovz   r14d, r12d
 * 0000000140C715C0: test    dl, al
 * 0000000140C715C2: jnz     short loc_140C715CC
 * 0000000140C715C4: mov     r13d, r8d
 * 0000000140C715C7: jmp     loc_140C71697
 * 0000000140C715CC: mov     r13d, ecx
 * 0000000140C715CF: rdtsc
 * 0000000140C715D1: shl     rdx, 20h
 * 0000000140C715D5: mov     r15, rsi
 * 0000000140C715D8: or      rax, rdx
 * 0000000140C715DB: mov     rcx, rax
 * 0000000140C715DE: ror     rax, 3
 * 0000000140C715E2: xor     rcx, rax
 * 0000000140C715E5: mov     rax, 7010008004002001h
 * 0000000140C715EF: mul     rcx
 * 0000000140C715F2: mov     ecx, 15Dh
 * 0000000140C715F7: mov     rbx, rdx
 * 0000000140C715FA: mov     edx, r13d
 * 0000000140C715FD: xor     rbx, rax
 * 0000000140C71600: lea     rax, [rsi+0AE0h]
 * 0000000140C71607: mov     r9, rbx
 * 0000000140C7160A: xor     r15, rbx
 * 0000000140C7160D: xor     [rax], r9
 * 0000000140C71610: lea     rax, [rax-8]
 * 0000000140C71614: ror     r9, cl
 * 0000000140C71617: sub     ecx, edx
 * 0000000140C71619: jnz     short loc_140C7160D
 * 0000000140C7161B: lea     r8, [r12-0AE8h]
 * 0000000140C71623: shr     r8, 3
 * 0000000140C71627: test    r8d, r8d
 * 0000000140C7162A: jz      short loc_140C71669
 * 0000000140C7162C: add     rsi, 0AE0h
 * 0000000140C71633: movsxd  r10, r8d
 * 0000000140C71636: lea     r10, [rsi+r10*8]
 * 0000000140C7163A: mov     rsi, rdx
 * 0000000140C7163D: mov     rdx, [r10]
 * 0000000140C71640: lea     rax, [r15+r15]
 * 0000000140C71644: mov     ecx, r8d
 * 0000000140C71647: lea     r10, [r10-8]
 * 0000000140C7164B: ror     rdx, cl
 * 0000000140C7164E: mov     r15, rdx
 * 0000000140C71651: xor     r15, rax
 * 0000000140C71654: sub     r8d, esi
 * 0000000140C71657: jnz     short loc_140C7163D
 * 0000000140C71659: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C7165E: lea     edi, [r8+2]
 * 0000000140C71662: mov     r10, [rbp+7B0h+arg_8]
 * 0000000140C71669: mov     ecx, r14d
 * 0000000140C7166C: lea     rdx, [rsi+r12]
 * 0000000140C71670: sub     ecx, r12d
 * 0000000140C71673: shr     ecx, 3
 * 0000000140C71676: test    ecx, ecx
 * 0000000140C71678: jz      short loc_140C71693
 * 0000000140C7167A: lea     rdx, [rdx+rcx*8]
 * 0000000140C7167E: mov     rax, r13
 * 0000000140C71681: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140C71685: xor     [rdx], r9
 * 0000000140C71688: lea     rdx, [rdx-8]
 * 0000000140C7168C: ror     r9, cl
 * 0000000140C7168F: sub     ecx, eax
 * 0000000140C71691: jnz     short loc_140C71685
 * 0000000140C71693: mov     r9, [rbp+7B0h+var_820]
 * 0000000140C71697: test    r10, r10
 * 0000000140C7169A: jz      short loc_140C716B9
 * 0000000140C7169C: mov     rax, [rbp+7B0h+var_7A8]
 * 0000000140C716A0: lea     r8, [rbp+7B0h+var_700]
 * 0000000140C716A7: mov     edx, r14d
 * 0000000140C716AA: mov     [rsp+8B0h+BugCheckParameter4], r10
 * 0000000140C716AF: mov     rcx, rsi
 * 0000000140C716B2: call    KeGuardDispatchICall
 * 0000000140C716B7: jmp     short loc_140C716F1
 * 0000000140C716B9: xor     edx, edx
 * 0000000140C716BB: test    r11, r11
 * 0000000140C716BE: jnz     short loc_140C716D3
 * 0000000140C716C0: lea     r8, [rbp+7B0h+var_700]
 * 0000000140C716C7: xor     ecx, ecx
 * 0000000140C716C9: mov     rax, r9
 * 0000000140C716CC: call    KeGuardDispatchICall
 * 0000000140C716D1: jmp     short loc_140C716F1
 * 0000000140C716D3: lea     rax, [rbp+7B0h+var_700]
 * 0000000140C716DA: xor     r9d, r9d
 * 0000000140C716DD: mov     [rsp+8B0h+BugCheckParameter4], rax
 * 0000000140C716E2: xor     r8d, r8d
 * 0000000140C716E5: mov     rax, [rbp+7B0h+var_7A0]
 * 0000000140C716E9: mov     rcx, r11
 * 0000000140C716EC: call    KeGuardDispatchICall
 * 0000000140C716F1: test    r13d, r13d
 * 0000000140C716F4: mov     r13d, 1
 * 0000000140C716FA: jz      loc_140C718D6
 * 0000000140C71700: mov     r9, rsi
 * 0000000140C71703: lea     rax, [rsi+0AE0h]
 * 0000000140C7170A: xor     r9, rbx
 * 0000000140C7170D: mov     ecx, 15Dh
 * 0000000140C71712: xor     [rax], rbx
 * 0000000140C71715: lea     rax, [rax-8]
 * 0000000140C71719: ror     rbx, cl
 * 0000000140C7171C: sub     ecx, r13d
 * 0000000140C7171F: jnz     short loc_140C71712
 * 0000000140C71721: lea     r8, [r12-0AE8h]
 * 0000000140C71729: shr     r8, 3
 * 0000000140C7172D: test    r8d, r8d
 * 0000000140C71730: jz      short loc_140C7175C
 * 0000000140C71732: movsxd  r10, r8d
 * 0000000140C71735: add     r10, 15Ch
 * 0000000140C7173C: lea     r10, [rsi+r10*8]
 * 0000000140C71740: mov     rdx, [r10]
 * 0000000140C71743: lea     rax, [r9+r9]
 * 0000000140C71747: mov     ecx, r8d
 * 0000000140C7174A: lea     r10, [r10-8]
 * 0000000140C7174E: ror     rdx, cl
 * 0000000140C71751: mov     r9, rdx
 * 0000000140C71754: xor     r9, rax
 * 0000000140C71757: sub     r8d, r13d
 * 0000000140C7175A: jnz     short loc_140C71740
 * 0000000140C7175C: sub     r14d, r12d
 * 0000000140C7175F: lea     rcx, [rsi+r12]
 * 0000000140C71763: shr     r14d, 3
 * 0000000140C71767: xor     r12d, r12d
 * 0000000140C7176A: test    r14d, r14d
 * 0000000140C7176D: jz      short loc_140C7178B
 * 0000000140C7176F: mov     edx, r14d
 * 0000000140C71772: dec     rdx
 * 0000000140C71775: lea     rdx, [rcx+rdx*8]
 * 0000000140C71779: xor     [rdx], rbx
 * 0000000140C7177C: mov     ecx, r14d
 * 0000000140C7177F: ror     rbx, cl
 * 0000000140C71782: lea     rdx, [rdx-8]
 * 0000000140C71786: sub     r14d, r13d
 * 0000000140C71789: jnz     short loc_140C71779
 * 0000000140C7178B: cmp     r9, r15
 * 0000000140C7178E: jz      loc_140C718E1
 * 0000000140C71794: mov     rax, [rsi+588h]
 * 0000000140C7179B: mov     ecx, [rsi+804h]
 * 0000000140C717A1: mov     [rax], rsi
 * 0000000140C717A4: mov     [rax+10h], ecx
 * 0000000140C717A7: cmp     [rsi+918h], r12d
 * 0000000140C717AE: jnz     loc_140C718E1
 * 0000000140C717B4: mov     rax, [rsi+588h]
 * 0000000140C717BB: mov     rcx, r9
 * 0000000140C717BE: xor     rcx, r15
 * 0000000140C717C1: mov     [rax+18h], rcx
 * 0000000140C717C5: cmp     [rsi+918h], r12d
 * 0000000140C717CC: jnz     loc_140C718E1
 * 0000000140C717D2: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C717DC: lea     rax, [rsi+r14]
 * 0000000140C717E0: mov     [rsi+920h], rax
 * 0000000140C717E7: mov     [rsi+928h], r12
 * 0000000140C717EE: mov     qword ptr [rsi+930h], 10Eh
 * 0000000140C717F9: mov     [rsi+938h], r9
 * 0000000140C71800: mov     [rsi+918h], r13d
 * 0000000140C71807: mov     ecx, [rsi+9D8h]
 * 0000000140C7180D: bt      ecx, 1Dh
 * 0000000140C71811: jb      loc_140C718EB
 * 0000000140C71817: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C71821: jz      loc_140C718EB
 * 0000000140C71827: test    r13b, cl
 * 0000000140C7182A: jz      loc_140C718EB
 * 0000000140C71830: mov     ecx, [rsi+0A74h]
 * 0000000140C71836: mov     eax, [rsi+804h]
 * 0000000140C7183C: mov     r10, [rsi+838h]
 * 0000000140C71843: sub     eax, ecx
 * 0000000140C71845: mov     r8, [rsi+0A78h]
 * 0000000140C7184C: lea     rdx, [rcx+rsi]
 * 0000000140C71850: mov     ecx, eax
 * 0000000140C71852: shr     rcx, 3
 * 0000000140C71856: lea     r9, [rdx+rcx*8]
 * 0000000140C7185A: jmp     short loc_140C7187D
 * 0000000140C7185C: xor     [rdx], r8
 * 0000000140C7185F: mov     rax, [rdx]
 * 0000000140C71862: movzx   ecx, r8b
 * 0000000140C71866: xor     rax, r10
 * 0000000140C71869: and     ecx, 3Fh
 * 0000000140C7186C: ror     r8, cl
 * 0000000140C7186F: add     r8, rax
 * 0000000140C71872: xor     r8, 0F05h
 * 0000000140C71879: add     rdx, 8
 * 0000000140C7187D: cmp     rdx, r9
 * 0000000140C71880: jnz     short loc_140C7185C
 * 0000000140C71882: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C7188A: cmp     r8, [rsi+0A80h]
 * 0000000140C71891: jz      short loc_140C718EB
 * 0000000140C71893: mov     ecx, [rsi+804h]
 * 0000000140C71899: mov     rax, [rsi+588h]
 * 0000000140C718A0: mov     [rax], rsi
 * 0000000140C718A3: mov     [rax+10h], ecx
 * 0000000140C718A6: mov     rcx, [rsi+0A80h]
 * 0000000140C718AD: cmp     [rsi+918h], r12d
 * 0000000140C718B4: jnz     short loc_140C718C4
 * 0000000140C718B6: mov     rax, [rsi+588h]
 * 0000000140C718BD: xor     rcx, r8
 * 0000000140C718C0: mov     [rax+18h], rcx
 * 0000000140C718C4: xor     edx, edx
 * 0000000140C718C6: mov     r9d, 100h
 * 0000000140C718CC: mov     rcx, rsi
 * 0000000140C718CF: call    sub_140C7903C
 * 0000000140C718D4: jmp     short loc_140C718EB
 * 0000000140C718D6: xor     r12d, r12d
 * 0000000140C718D9: jmp     short loc_140C718E1
 * 0000000140C718DB: mov     r13d, 1
 * 0000000140C718E1: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C718EB: test    dword ptr [rsi+9D8h], 1000000h
 * 0000000140C718F5: jz      loc_140C71A3A
 * 0000000140C718FB: mov     rbx, [rsi+9E0h]
 * 0000000140C71902: mov     rax, [rsi+398h]
 * 0000000140C71909: mov     rcx, rbx
 * 0000000140C7190C: call    KeGuardDispatchICall
 * 0000000140C71911: test    eax, eax
 * 0000000140C71913: jz      loc_140C71A1E
 * 0000000140C71919: cmp     [rsi+918h], r12d
 * 0000000140C71920: jnz     loc_140C71A1E
 * 0000000140C71926: lea     rax, [rsi+r14]
 * 0000000140C7192A: mov     [rsi+920h], rax
 * 0000000140C71931: mov     [rsi+928h], r12
 * 0000000140C71938: mov     qword ptr [rsi+930h], 110h
 * 0000000140C71943: mov     [rsi+938h], r12
 * 0000000140C7194A: mov     [rsi+918h], r13d
 * 0000000140C71951: mov     ecx, [rsi+9D8h]
 * 0000000140C71957: bt      ecx, 1Dh
 * 0000000140C7195B: jb      loc_140C71A1E
 * 0000000140C71961: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7196B: jz      loc_140C71A1E
 * 0000000140C71971: test    r13b, cl
 * 0000000140C71974: jz      loc_140C71A1E
 * 0000000140C7197A: mov     ecx, [rsi+0A74h]
 * 0000000140C71980: mov     eax, [rsi+804h]
 * 0000000140C71986: mov     r10, [rsi+838h]
 * 0000000140C7198D: sub     eax, ecx
 * 0000000140C7198F: mov     r8, [rsi+0A78h]
 * 0000000140C71996: lea     rdx, [rcx+rsi]
 * 0000000140C7199A: mov     ecx, eax
 * 0000000140C7199C: shr     rcx, 3
 * 0000000140C719A0: lea     r9, [rdx+rcx*8]
 * 0000000140C719A4: jmp     short loc_140C719C7
 * 0000000140C719A6: xor     [rdx], r8
 * 0000000140C719A9: mov     rax, [rdx]
 * 0000000140C719AC: movzx   ecx, r8b
 * 0000000140C719B0: xor     rax, r10
 * 0000000140C719B3: and     ecx, 3Fh
 * 0000000140C719B6: ror     r8, cl
 * 0000000140C719B9: add     r8, rax
 * 0000000140C719BC: xor     r8, 0F05h
 * 0000000140C719C3: add     rdx, 8
 * 0000000140C719C7: cmp     rdx, r9
 * 0000000140C719CA: jnz     short loc_140C719A6
 * 0000000140C719CC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C719D4: cmp     r8, [rsi+0A80h]
 * 0000000140C719DB: jz      short loc_140C71A1E
 * 0000000140C719DD: mov     ecx, [rsi+804h]
 * 0000000140C719E3: mov     rax, [rsi+588h]
 * 0000000140C719EA: mov     [rax], rsi
 * 0000000140C719ED: mov     [rax+10h], ecx
 * 0000000140C719F0: mov     rcx, [rsi+0A80h]
 * 0000000140C719F7: cmp     [rsi+918h], r12d
 * 0000000140C719FE: jnz     short loc_140C71A0E
 * 0000000140C71A00: mov     rax, [rsi+588h]
 * 0000000140C71A07: xor     rcx, r8
 * 0000000140C71A0A: mov     [rax+18h], rcx
 * 0000000140C71A0E: xor     edx, edx
 * 0000000140C71A10: mov     r9d, 100h
 * 0000000140C71A16: mov     rcx, rsi
 * 0000000140C71A19: call    sub_140C7903C
 * 0000000140C71A1E: mov     rax, [rsi+390h]
 * 0000000140C71A25: lea     rdx, sub_140C7B1E0
 * 0000000140C71A2C: xor     r9d, r9d
 * 0000000140C71A2F: mov     r8, rsi
 * 0000000140C71A32: mov     rcx, rbx
 * 0000000140C71A35: call    KeGuardDispatchICall
 * 0000000140C71A3A: mov     ecx, [rsi+9D8h]
 * 0000000140C71A40: bt      ecx, 1Dh
 * 0000000140C71A44: jb      loc_140C71AF1
 * 0000000140C71A4A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C71A54: jnz     loc_140C71AF1
 * 0000000140C71A5A: mov     rbx, 7010008004002001h
 * 0000000140C71A64: test    r13b, cl
 * 0000000140C71A67: jz      loc_140C71AFB
 * 0000000140C71A6D: mov     ecx, [rsi+0A74h]
 * 0000000140C71A73: mov     eax, [rsi+804h]
 * 0000000140C71A79: mov     r11, [rsi+838h]
 * 0000000140C71A80: sub     eax, ecx
 * 0000000140C71A82: lea     r9, [rcx+rsi]
 * 0000000140C71A86: mov     ecx, eax
 * 0000000140C71A88: shr     rcx, 3
 * 0000000140C71A8C: lea     r10, [r9+rcx*8]
 * 0000000140C71A90: rdtsc
 * 0000000140C71A92: shl     rdx, 20h
 * 0000000140C71A96: or      rax, rdx
 * 0000000140C71A99: mov     rcx, rax
 * 0000000140C71A9C: ror     rax, 3
 * 0000000140C71AA0: xor     rcx, rax
 * 0000000140C71AA3: mov     rax, rbx
 * 0000000140C71AA6: mul     rcx
 * 0000000140C71AA9: xor     rdx, rax
 * 0000000140C71AAC: mov     [rsi+0A78h], rdx
 * 0000000140C71AB3: jmp     short loc_140C71ADB
 * 0000000140C71AB5: mov     r8, [r9]
 * 0000000140C71AB8: mov     rax, rdx
 * 0000000140C71ABB: movzx   ecx, dl
 * 0000000140C71ABE: xor     rax, r8
 * 0000000140C71AC1: and     ecx, 3Fh
 * 0000000140C71AC4: mov     [r9], rax
 * 0000000140C71AC7: ror     rdx, cl
 * 0000000140C71ACA: xor     r8, r11
 * 0000000140C71ACD: add     rdx, r8
 * 0000000140C71AD0: xor     rdx, 0F05h
 * 0000000140C71AD7: add     r9, 8
 * 0000000140C71ADB: cmp     r9, r10
 * 0000000140C71ADE: jnz     short loc_140C71AB5
 * 0000000140C71AE0: bts     dword ptr [rsi+9DCh], 15h
 * 0000000140C71AE8: mov     [rsi+0A80h], rdx
 * 0000000140C71AEF: jmp     short loc_140C71AFB
 * 0000000140C71AF1: mov     rbx, 7010008004002001h
 * 0000000140C71AFB: test    dword ptr [rsi+9DCh], 100h
 * 0000000140C71B05: jz      short loc_140C71B12
 * 0000000140C71B07: mov     rax, [rbp+7B0h+var_768]
 * 0000000140C71B0B: mov     [rbp+7B8h], rax
 * 0000000140C71B12: mov     r8d, [rsi+9D8h]
 * 0000000140C71B19: bt      r8d, 11h
 * 0000000140C71B1E: jnb     loc_140C71C6A
 * 0000000140C71B24: rdtsc
 * 0000000140C71B26: shl     rdx, 20h
 * 0000000140C71B2A: or      rax, rdx
 * 0000000140C71B2D: mov     rcx, rax
 * 0000000140C71B30: mov     rdx, rax
 * 0000000140C71B33: ror     rcx, 3
 * 0000000140C71B37: mov     rax, rbx
 * 0000000140C71B3A: xor     rdx, rcx
 * 0000000140C71B3D: mul     rdx
 * 0000000140C71B40: mov     rcx, rdx
 * 0000000140C71B43: xor     rcx, rax
 * 0000000140C71B46: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140C71B50: mul     rcx
 * 0000000140C71B53: shr     rdx, 3
 * 0000000140C71B57: lea     rax, [rdx+rdx*4]
 * 0000000140C71B5B: add     rax, rax
 * 0000000140C71B5E: sub     rcx, rax
 * 0000000140C71B61: cmp     rcx, rdi
 * 0000000140C71B64: jnb     loc_140C71C6A
 * 0000000140C71B6A: cmp     [rsi+918h], r12d
 * 0000000140C71B71: jnz     loc_140C71C6A
 * 0000000140C71B77: lea     rax, [rsi+r14]
 * 0000000140C71B7B: mov     [rsi+920h], rax
 * 0000000140C71B82: mov     [rsi+928h], r12
 * 0000000140C71B89: mov     qword ptr [rsi+930h], 108h
 * 0000000140C71B94: mov     [rsi+938h], r12
 * 0000000140C71B9B: mov     [rsi+918h], r13d
 * 0000000140C71BA2: bt      r8d, 1Dh
 * 0000000140C71BA7: jb      loc_140C71C6A
 * 0000000140C71BAD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C71BB7: jz      loc_140C71C6A
 * 0000000140C71BBD: test    r13b, r8b
 * 0000000140C71BC0: jz      loc_140C71C6A
 * 0000000140C71BC6: mov     ecx, [rsi+0A74h]
 * 0000000140C71BCC: mov     eax, [rsi+804h]
 * 0000000140C71BD2: mov     r10, [rsi+838h]
 * 0000000140C71BD9: sub     eax, ecx
 * 0000000140C71BDB: mov     r8, [rsi+0A78h]
 * 0000000140C71BE2: lea     rdx, [rcx+rsi]
 * 0000000140C71BE6: mov     ecx, eax
 * 0000000140C71BE8: shr     rcx, 3
 * 0000000140C71BEC: lea     r9, [rdx+rcx*8]
 * 0000000140C71BF0: jmp     short loc_140C71C13
 * 0000000140C71BF2: xor     [rdx], r8
 * 0000000140C71BF5: mov     rax, [rdx]
 * 0000000140C71BF8: movzx   ecx, r8b
 * 0000000140C71BFC: xor     rax, r10
 * 0000000140C71BFF: and     ecx, 3Fh
 * 0000000140C71C02: ror     r8, cl
 * 0000000140C71C05: add     r8, rax
 * 0000000140C71C08: xor     r8, 0F05h
 * 0000000140C71C0F: add     rdx, 8
 * 0000000140C71C13: cmp     rdx, r9
 * 0000000140C71C16: jnz     short loc_140C71BF2
 * 0000000140C71C18: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C71C20: cmp     r8, [rsi+0A80h]
 * 0000000140C71C27: jz      short loc_140C71C6A
 * 0000000140C71C29: mov     ecx, [rsi+804h]
 * 0000000140C71C2F: mov     rax, [rsi+588h]
 * 0000000140C71C36: mov     [rax], rsi
 * 0000000140C71C39: mov     [rax+10h], ecx
 * 0000000140C71C3C: mov     rcx, [rsi+0A80h]
 * 0000000140C71C43: cmp     [rsi+918h], r12d
 * 0000000140C71C4A: jnz     short loc_140C71C5A
 * 0000000140C71C4C: mov     rax, [rsi+588h]
 * 0000000140C71C53: xor     rcx, r8
 * 0000000140C71C56: mov     [rax+18h], rcx
 * 0000000140C71C5A: xor     edx, edx
 * 0000000140C71C5C: mov     r9d, 100h
 * 0000000140C71C62: mov     rcx, rsi
 * 0000000140C71C65: call    sub_140C7903C
 * 0000000140C71C6A: mov     eax, [rsi+9D8h]
 * 0000000140C71C70: mov     r10d, 4000h
 * 0000000140C71C76: bt      eax, 1Dh
 * 0000000140C71C7A: jb      short loc_140C71CEB
 * 0000000140C71C7C: test    r10d, eax
 * 0000000140C71C7F: jnz     short loc_140C71CEB
 * 0000000140C71C81: lea     rcx, [rsi+918h]
 * 0000000140C71C88: cmp     [rcx], r12d
 * 0000000140C71C8B: jz      short loc_140C71CEB
 * 0000000140C71C8D: mov     rdx, [rbp+7B0h+arg_0]
 * 0000000140C71C94: test    [rdx+9D8h], r10d
 * 0000000140C71C9B: jnz     short loc_140C71CA6
 * 0000000140C71C9D: cmp     [rdx+918h], r12d
 * 0000000140C71CA4: jnz     short loc_140C71CEB
 * 0000000140C71CA6: mov     r8d, 28h ; '('
 * 0000000140C71CAC: add     rdx, 918h
 * 0000000140C71CB3: lea     r9d, [r8-23h]
 * 0000000140C71CB7: mov     rax, [rcx]
 * 0000000140C71CBA: add     r8d, 0FFFFFFF8h
 * 0000000140C71CBE: mov     [rdx], rax
 * 0000000140C71CC1: add     rcx, 8
 * 0000000140C71CC5: add     rdx, 8
 * 0000000140C71CC9: sub     r9, r13
 * 0000000140C71CCC: jnz     short loc_140C71CB7
 * 0000000140C71CCE: test    r8d, r8d
 * 0000000140C71CD1: jz      short loc_140C71CEB
 * 0000000140C71CD3: mov     edi, 0FFFFFFFFh
 * 0000000140C71CD8: mov     al, [rcx]
 * 0000000140C71CDA: add     rcx, r13
 * 0000000140C71CDD: mov     [rdx], al
 * 0000000140C71CDF: add     rdx, r13
 * 0000000140C71CE2: add     r8d, edi
 * 0000000140C71CE5: jnz     short loc_140C71CD8
 * 0000000140C71CE7: lea     edi, [r8+2]
 * 0000000140C71CEB: test    [rsi+9D8h], r10d
 * 0000000140C71CF2: jnz     short loc_140C71D01
 * 0000000140C71CF4: cmp     [rsi+918h], r12d
 * 0000000140C71CFB: jnz     loc_140C7280E
 * 0000000140C71D01: mov     eax, [rsi+0A70h]
 * 0000000140C71D07: test    eax, eax
 * 0000000140C71D09: jz      loc_140C7280E
 * 0000000140C71D0F: lea     r14, [rsi+rax]
 * 0000000140C71D13: mov     r11, [r14+8]
 * 0000000140C71D17: mov     [rsp+8B0h+var_858], r14
 * 0000000140C71D1C: test    r11, r11
 * 0000000140C71D1F: jz      loc_140C7209E
 * 0000000140C71D25: mov     r9d, [r14+10h]
 * 0000000140C71D29: mov     r8, r11
 * 0000000140C71D2C: add     [rsi+848h], r9d
 * 0000000140C71D33: mov     rax, r11
 * 0000000140C71D36: mov     r10d, [rsi+834h]
 * 0000000140C71D3D: mov     r12, [rsi+838h]
 * 0000000140C71D44: lea     rcx, [r11+r9]
 * 0000000140C71D48: cmp     r11, rcx
 * 0000000140C71D4B: jnb     short loc_140C71D5D
 * 0000000140C71D4D: mov     edx, 40h ; '@'
 * 0000000140C71D52: prefetchnta byte ptr [rax]
 * 0000000140C71D55: add     rax, rdx
 * 0000000140C71D58: cmp     rax, rcx
 * 0000000140C71D5B: jb      short loc_140C71D52
 * 0000000140C71D5D: xor     r13d, r13d
 * 0000000140C71D60: mov     r15d, r9d
 * 0000000140C71D63: shr     r15d, 7
 * 0000000140C71D67: mov     rbx, r12
 * 0000000140C71D6A: lea     edx, [r13+1]
 * 0000000140C71D6E: test    r15d, r15d
 * 0000000140C71D71: jz      short loc_140C71DD9
 * 0000000140C71D73: mov     edi, 0FFFFFFFFh
 * 0000000140C71D78: mov     rsi, 7010008004002001h
 * 0000000140C71D82: mov     eax, 8
 * 0000000140C71D87: xor     rbx, [r8]
 * 0000000140C71D8A: mov     ecx, r10d
 * 0000000140C71D8D: rol     rbx, cl
 * 0000000140C71D90: xor     rbx, [r8+8]
 * 0000000140C71D94: add     r8, 10h
 * 0000000140C71D98: rol     rbx, cl
 * 0000000140C71D9B: sub     rax, rdx
 * 0000000140C71D9E: jnz     short loc_140C71D87
 * 0000000140C71DA0: mov     rcx, r8
 * 0000000140C71DA3: sub     rcx, r11
 * 0000000140C71DA6: xor     rcx, r12
 * 0000000140C71DA9: mov     rax, rcx
 * 0000000140C71DAC: rol     rax, 11h
 * 0000000140C71DB0: xor     rcx, rax
 * 0000000140C71DB3: mov     rax, rsi
 * 0000000140C71DB6: mul     rcx
 * 0000000140C71DB9: xor     r10d, eax
 * 0000000140C71DBC: xor     r10d, edx
 * 0000000140C71DBF: mov     edx, 1
 * 0000000140C71DC4: and     r10d, 3Fh
 * 0000000140C71DC8: cmovz   r10d, edx
 * 0000000140C71DCC: add     r15d, edi
 * 0000000140C71DCF: jnz     short loc_140C71D82
 * 0000000140C71DD1: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C71DD6: lea     edi, [rdx+1]
 * 0000000140C71DD9: and     r9d, 7Fh
 * 0000000140C71DDD: cmp     r9d, 8
 * 0000000140C71DE1: jb      short loc_140C71E00
 * 0000000140C71DE3: mov     eax, r9d
 * 0000000140C71DE6: shr     rax, 3
 * 0000000140C71DEA: xor     rbx, [r8]
 * 0000000140C71DED: mov     ecx, r10d
 * 0000000140C71DF0: rol     rbx, cl
 * 0000000140C71DF3: add     r8, 8
 * 0000000140C71DF7: add     r9d, 0FFFFFFF8h
 * 0000000140C71DFB: sub     rax, rdx
 * 0000000140C71DFE: jnz     short loc_140C71DEA
 * 0000000140C71E00: test    r9d, r9d
 * 0000000140C71E03: jz      short loc_140C71E23
 * 0000000140C71E05: mov     edi, 0FFFFFFFFh
 * 0000000140C71E0A: movzx   eax, byte ptr [r8]
 * 0000000140C71E0E: mov     ecx, r10d
 * 0000000140C71E11: xor     rbx, rax
 * 0000000140C71E14: add     r8, rdx
 * 0000000140C71E17: rol     rbx, cl
 * 0000000140C71E1A: add     r9d, edi
 * 0000000140C71E1D: jnz     short loc_140C71E0A
 * 0000000140C71E1F: lea     edi, [r9+2]
 * 0000000140C71E23: mov     rax, rbx
 * 0000000140C71E26: jmp     short loc_140C71E2A
 * 0000000140C71E28: xor     ebx, eax
 * 0000000140C71E2A: shr     rax, 1Fh
 * 0000000140C71E2E: test    rax, rax
 * 0000000140C71E31: jnz     short loc_140C71E28
 * 0000000140C71E33: btr     ebx, 1Fh
 * 0000000140C71E37: mov     r12d, r13d
 * 0000000140C71E3A: cmp     ebx, [r14+14h]
 * 0000000140C71E3E: jz      loc_140C7205B
 * 0000000140C71E44: cmp     [r14], r13d
 * 0000000140C71E47: jnz     short loc_140C71E51
 * 0000000140C71E49: cmp     [r14+18h], r13d
 * 0000000140C71E4D: cmovnz  r12d, edx
 * 0000000140C71E51: mov     ecx, [r14+10h]
 * 0000000140C71E55: mov     rdx, [r14+8]
 * 0000000140C71E59: test    rcx, rcx
 * 0000000140C71E5C: jz      loc_140C71F18
 * 0000000140C71E62: mov     eax, [rsi+9DCh]
 * 0000000140C71E68: mov     r8d, 40h ; '@'
 * 0000000140C71E6E: test    r8b, al
 * 0000000140C71E71: jz      loc_140C71F18
 * 0000000140C71E77: mov     r13, cr8
 * 0000000140C71E7B: mov     r15, rdx
 * 0000000140C71E7E: lea     rax, [rcx-1]
 * 0000000140C71E82: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140C71E89: add     rax, rdx
 * 0000000140C71E8C: or      rax, 0FFFh
 * 0000000140C71E92: mov     [rbp+7B0h+var_820], rax
 * 0000000140C71E96: lea     rax, [r15-1]
 * 0000000140C71E9A: mov     [rbp+7B0h+arg_8], rax
 * 0000000140C71EA1: mov     cr8, rdi
 * 0000000140C71EA5: mov     rax, [rsi+468h]
 * 0000000140C71EAC: xor     edx, edx
 * 0000000140C71EAE: mov     rcx, r15
 * 0000000140C71EB1: call    KeGuardDispatchICall
 * 0000000140C71EB6: cmp     eax, 0C000022Dh
 * 0000000140C71EBB: jnz     short loc_140C71EDD
 * 0000000140C71EBD: test    r12d, r12d
 * 0000000140C71EC0: jnz     short loc_140C71F10
 * 0000000140C71EC2: lea     eax, [r12+1]
 * 0000000140C71EC7: cmp     r13b, al
 * 0000000140C71ECA: ja      short loc_140C71EE1
 * 0000000140C71ECC: movzx   eax, r13b
 * 0000000140C71ED0: mov     cr8, rax
 * 0000000140C71ED4: mov     al, [r15]
 * 0000000140C71ED7: mov     rax, cr8
 * 0000000140C71EDB: jmp     short loc_140C71EA1
 * 0000000140C71EDD: test    eax, eax
 * 0000000140C71EDF: js      short loc_140C71F10
 * 0000000140C71EE1: mov     rax, [rbp+7B0h+arg_8]
 * 0000000140C71EE8: mov     ecx, 1000h
 * 0000000140C71EED: add     rax, rcx
 * 0000000140C71EF0: add     r15, rcx
 * 0000000140C71EF3: mov     [rbp+7B0h+arg_8], rax
 * 0000000140C71EFA: cmp     rax, [rbp+7B0h+var_820]
 * 0000000140C71EFE: jnz     short loc_140C71EA5
 * 0000000140C71F00: movzx   eax, r13b
 * 0000000140C71F04: mov     cr8, rax
 * 0000000140C71F08: xor     r12d, r12d
 * 0000000140C71F0B: jmp     loc_140C7205B
 * 0000000140C71F10: movzx   eax, r13b
 * 0000000140C71F14: mov     cr8, rax
 * 0000000140C71F18: mov     eax, [r14+14h]
 * 0000000140C71F1C: xor     r12d, r12d
 * 0000000140C71F1F: cmp     [rsi+918h], r12d
 * 0000000140C71F26: jnz     short loc_140C71F3A
 * 0000000140C71F28: mov     ecx, eax
 * 0000000140C71F2A: mov     eax, ebx
 * 0000000140C71F2C: xor     rcx, rax
 * 0000000140C71F2F: mov     rax, [rsi+588h]
 * 0000000140C71F36: mov     [rax+18h], rcx
 * 0000000140C71F3A: mov     rcx, [r14+8]
 * 0000000140C71F3E: cmp     [rsi+918h], r12d
 * 0000000140C71F45: jnz     loc_140C7205B
 * 0000000140C71F4B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C71F55: mov     edx, 1
 * 0000000140C71F5A: add     rax, rsi
 * 0000000140C71F5D: mov     [rsi+920h], rax
 * 0000000140C71F64: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C71F6E: add     rax, r14
 * 0000000140C71F71: mov     [rsi+928h], rax
 * 0000000140C71F78: movsxd  rax, dword ptr [r14]
 * 0000000140C71F7B: mov     [rsi+930h], rax
 * 0000000140C71F82: mov     [rsi+938h], rcx
 * 0000000140C71F89: mov     [rsi+918h], edx
 * 0000000140C71F8F: mov     ecx, [rsi+9D8h]
 * 0000000140C71F95: bt      ecx, 1Dh
 * 0000000140C71F99: jb      loc_140C7205B
 * 0000000140C71F9F: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C71FA9: jz      loc_140C7205B
 * 0000000140C71FAF: test    dl, cl
 * 0000000140C71FB1: jz      loc_140C7205B
 * 0000000140C71FB7: mov     ecx, [rsi+0A74h]
 * 0000000140C71FBD: mov     eax, [rsi+804h]
 * 0000000140C71FC3: mov     r10, [rsi+838h]
 * 0000000140C71FCA: sub     eax, ecx
 * 0000000140C71FCC: mov     r8, [rsi+0A78h]
 * 0000000140C71FD3: lea     rdx, [rcx+rsi]
 * 0000000140C71FD7: mov     ecx, eax
 * 0000000140C71FD9: shr     rcx, 3
 * 0000000140C71FDD: lea     r9, [rdx+rcx*8]
 * 0000000140C71FE1: jmp     short loc_140C72004
 * 0000000140C71FE3: xor     [rdx], r8
 * 0000000140C71FE6: mov     rax, [rdx]
 * 0000000140C71FE9: movzx   ecx, r8b
 * 0000000140C71FED: xor     rax, r10
 * 0000000140C71FF0: and     ecx, 3Fh
 * 0000000140C71FF3: ror     r8, cl
 * 0000000140C71FF6: add     r8, rax
 * 0000000140C71FF9: xor     r8, 0F05h
 * 0000000140C72000: add     rdx, 8
 * 0000000140C72004: cmp     rdx, r9
 * 0000000140C72007: jnz     short loc_140C71FE3
 * 0000000140C72009: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C72011: cmp     r8, [rsi+0A80h]
 * 0000000140C72018: jz      short loc_140C7205B
 * 0000000140C7201A: mov     ecx, [rsi+804h]
 * 0000000140C72020: mov     rax, [rsi+588h]
 * 0000000140C72027: mov     [rax], rsi
 * 0000000140C7202A: mov     [rax+10h], ecx
 * 0000000140C7202D: mov     rcx, [rsi+0A80h]
 * 0000000140C72034: cmp     [rsi+918h], r12d
 * 0000000140C7203B: jnz     short loc_140C7204B
 * 0000000140C7203D: mov     rax, [rsi+588h]
 * 0000000140C72044: xor     rcx, r8
 * 0000000140C72047: mov     [rax+18h], rcx
 * 0000000140C7204B: xor     edx, edx
 * 0000000140C7204D: mov     r9d, 100h
 * 0000000140C72053: mov     rcx, rsi
 * 0000000140C72056: call    sub_140C7903C
 * 0000000140C7205B: mov     rcx, [r14+18h]
 * 0000000140C7205F: mov     rax, [rsi+108h]
 * 0000000140C72066: call    KeGuardDispatchICall
 * 0000000140C7206B: mov     [r14+8], r12
 * 0000000140C7206F: mov     [r14+10h], r12d
 * 0000000140C72073: mov     eax, [rsi+848h]
 * 0000000140C72079: mov     [rsi+848h], eax
 * 0000000140C7207F: mov     rcx, [rsi+838h]
 * 0000000140C72086: mov     rax, rcx
 * 0000000140C72089: jmp     short loc_140C7208D
 * 0000000140C7208B: xor     ecx, eax
 * 0000000140C7208D: shr     rax, 1Fh
 * 0000000140C72091: test    rax, rax
 * 0000000140C72094: jnz     short loc_140C7208B
 * 0000000140C72096: btr     ecx, 1Fh
 * 0000000140C7209A: mov     [r14+14h], ecx
 * 0000000140C7209E: rdtsc
 * 0000000140C720A0: shl     rdx, 20h
 * 0000000140C720A4: mov     r8, 7010008004002001h
 * 0000000140C720AE: or      rax, rdx
 * 0000000140C720B1: mov     rcx, rax
 * 0000000140C720B4: ror     rax, 3
 * 0000000140C720B8: xor     rcx, rax
 * 0000000140C720BB: mov     rax, r8
 * 0000000140C720BE: mul     rcx
 * 0000000140C720C1: mov     rcx, rdx
 * 0000000140C720C4: xor     rcx, rax
 * 0000000140C720C7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C720D1: mul     rcx
 * 0000000140C720D4: shr     rdx, 1
 * 0000000140C720D7: lea     rax, [rdx+rdx*2]
 * 0000000140C720DB: cmp     rcx, rax
 * 0000000140C720DE: jnz     loc_140C72818
 * 0000000140C720E4: lea     r12, [r14+18h]
 * 0000000140C720E8: rdtsc
 * 0000000140C720EA: shl     rdx, 20h
 * 0000000140C720EE: or      rax, rdx
 * 0000000140C720F1: mov     rcx, rax
 * 0000000140C720F4: ror     rax, 3
 * 0000000140C720F8: xor     rcx, rax
 * 0000000140C720FB: mov     rax, r8
 * 0000000140C720FE: mul     rcx
 * 0000000140C72101: mov     rbx, rax
 * 0000000140C72104: xor     ebx, edx
 * 0000000140C72106: and     ebx, 7FFh
 * 0000000140C7210C: rdtsc
 * 0000000140C7210E: shl     rdx, 20h
 * 0000000140C72112: or      rax, rdx
 * 0000000140C72115: mov     rcx, rax
 * 0000000140C72118: ror     rax, 3
 * 0000000140C7211C: xor     rcx, rax
 * 0000000140C7211F: mov     rax, r8
 * 0000000140C72122: mul     rcx
 * 0000000140C72125: lea     r8d, [rbx+1]
 * 0000000140C72129: xor     rax, rdx
 * 0000000140C7212C: xor     edx, edx
 * 0000000140C7212E: div     r8
 * 0000000140C72131: mov     eax, [rsi+9D8h]
 * 0000000140C72137: mov     r8d, [rsi+830h]
 * 0000000140C7213E: and     eax, 8000000h
 * 0000000140C72143: neg     eax
 * 0000000140C72145: mov     r15, rdx
 * 0000000140C72148: mov     rax, [rsi+100h]
 * 0000000140C7214F: lea     edx, [rbx+0AE8h]
 * 0000000140C72155: sbb     rcx, rcx
 * 0000000140C72158: and     rcx, 0FFFFFFFFFFFFFFC0h
 * 0000000140C7215C: add     rcx, 82h
 * 0000000140C72163: call    KeGuardDispatchICall
 * 0000000140C72168: mov     r11, rax
 * 0000000140C7216B: test    rax, rax
 * 0000000140C7216E: jnz     short loc_140C7218A
 * 0000000140C72170: lea     r11d, [rax+1]
 * 0000000140C72174: add     [rsi+0A60h], r11d
 * 0000000140C7217B: mov     r8, 7010008004002001h
 * 0000000140C72185: jmp     loc_140C7281E
 * 0000000140C7218A: mov     r9d, r15d
 * 0000000140C7218D: mov     r8, r11
 * 0000000140C72190: cmp     r15d, 8
 * 0000000140C72194: jb      short loc_140C721E1
 * 0000000140C72196: mov     r10d, r15d
 * 0000000140C72199: mov     edi, 1
 * 0000000140C7219E: shr     r10, 3
 * 0000000140C721A2: mov     rsi, 7010008004002001h
 * 0000000140C721AC: rdtsc
 * 0000000140C721AE: shl     rdx, 20h
 * 0000000140C721B2: add     r9d, 0FFFFFFF8h
 * 0000000140C721B6: or      rax, rdx
 * 0000000140C721B9: mov     rcx, rax
 * 0000000140C721BC: ror     rax, 3
 * 0000000140C721C0: xor     rcx, rax
 * 0000000140C721C3: mov     rax, rsi
 * 0000000140C721C6: mul     rcx
 * 0000000140C721C9: xor     rdx, rax
 * 0000000140C721CC: mov     [r8], rdx
 * 0000000140C721CF: add     r8, 8
 * 0000000140C721D3: sub     r10, rdi
 * 0000000140C721D6: jnz     short loc_140C721AC
 * 0000000140C721D8: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C721DD: lea     edi, [r10+2]
 * 0000000140C721E1: mov     r10d, 1
 * 0000000140C721E7: test    r9d, r9d
 * 0000000140C721EA: jz      short loc_140C72223
 * 0000000140C721EC: rdtsc
 * 0000000140C721EE: shl     rdx, 20h
 * 0000000140C721F2: or      rax, rdx
 * 0000000140C721F5: mov     rcx, rax
 * 0000000140C721F8: ror     rax, 3
 * 0000000140C721FC: xor     rcx, rax
 * 0000000140C721FF: mov     rax, 7010008004002001h
 * 0000000140C72209: mul     rcx
 * 0000000140C7220C: xor     rdx, rax
 * 0000000140C7220F: mov     eax, 0FFFFFFFFh
 * 0000000140C72214: mov     [r8], dl
 * 0000000140C72217: add     r8, r10
 * 0000000140C7221A: shr     rdx, 8
 * 0000000140C7221E: add     r9d, eax
 * 0000000140C72221: jnz     short loc_140C72214
 * 0000000140C72223: mov     r8d, r15d
 * 0000000140C72226: sub     ebx, r15d
 * 0000000140C72229: add     r8, 0AE8h
 * 0000000140C72230: add     r8, r11
 * 0000000140C72233: cmp     ebx, 8
 * 0000000140C72236: jb      short loc_140C72278
 * 0000000140C72238: mov     r9d, ebx
 * 0000000140C7223B: mov     rdi, 7010008004002001h
 * 0000000140C72245: shr     r9, 3
 * 0000000140C72249: rdtsc
 * 0000000140C7224B: shl     rdx, 20h
 * 0000000140C7224F: add     ebx, 0FFFFFFF8h
 * 0000000140C72252: or      rax, rdx
 * 0000000140C72255: mov     rcx, rax
 * 0000000140C72258: ror     rax, 3
 * 0000000140C7225C: xor     rcx, rax
 * 0000000140C7225F: mov     rax, rdi
 * 0000000140C72262: mul     rcx
 * 0000000140C72265: xor     rdx, rax
 * 0000000140C72268: mov     [r8], rdx
 * 0000000140C7226B: add     r8, 8
 * 0000000140C7226F: sub     r9, r10
 * 0000000140C72272: jnz     short loc_140C72249
 * 0000000140C72274: lea     edi, [r9+2]
 * 0000000140C72278: test    ebx, ebx
 * 0000000140C7227A: jz      short loc_140C722B2
 * 0000000140C7227C: rdtsc
 * 0000000140C7227E: shl     rdx, 20h
 * 0000000140C72282: or      rax, rdx
 * 0000000140C72285: mov     rcx, rax
 * 0000000140C72288: ror     rax, 3
 * 0000000140C7228C: xor     rcx, rax
 * 0000000140C7228F: mov     rax, 7010008004002001h
 * 0000000140C72299: mul     rcx
 * 0000000140C7229C: xor     rdx, rax
 * 0000000140C7229F: mov     eax, 0FFFFFFFFh
 * 0000000140C722A4: mov     [r8], dl
 * 0000000140C722A7: add     r8, r10
 * 0000000140C722AA: shr     rdx, 8
 * 0000000140C722AE: add     ebx, eax
 * 0000000140C722B0: jnz     short loc_140C722A4
 * 0000000140C722B2: test    r12, r12
 * 0000000140C722B5: jz      short loc_140C722BB
 * 0000000140C722B7: mov     [r12], r11
 * 0000000140C722BB: xor     r12d, r12d
 * 0000000140C722BE: mov     ecx, r15d
 * 0000000140C722C1: add     rcx, r11
 * 0000000140C722C4: lea     r11d, [r12+1]
 * 0000000140C722C9: jz      loc_140C7217B
 * 0000000140C722CF: mov     r10d, 0AE8h
 * 0000000140C722D5: mov     [r14+8], rcx
 * 0000000140C722D9: mov     [r14+10h], r10d
 * 0000000140C722DD: mov     r8d, r10d
 * 0000000140C722E0: mov     rdx, rsi
 * 0000000140C722E3: mov     r9, rcx
 * 0000000140C722E6: mov     edi, 15Dh
 * 0000000140C722EB: mov     rax, [rdx]
 * 0000000140C722EE: add     r8d, 0FFFFFFF8h
 * 0000000140C722F2: mov     [rcx], rax
 * 0000000140C722F5: add     rdx, 8
 * 0000000140C722F9: add     rcx, 8
 * 0000000140C722FD: sub     rdi, r11
 * 0000000140C72300: jnz     short loc_140C722EB
 * 0000000140C72302: test    r8d, r8d
 * 0000000140C72305: jz      short loc_140C7231B
 * 0000000140C72307: mov     edi, 0FFFFFFFFh
 * 0000000140C7230C: mov     al, [rdx]
 * 0000000140C7230E: add     rdx, r11
 * 0000000140C72311: mov     [rcx], al
 * 0000000140C72313: add     rcx, r11
 * 0000000140C72316: add     r8d, edi
 * 0000000140C72319: jnz     short loc_140C7230C
 * 0000000140C7231B: mov     r13d, [r9+9D8h]
 * 0000000140C72322: mov     r14, 7010008004002001h
 * 0000000140C7232C: mov     [r9+804h], r10d
 * 0000000140C72333: and     r13d, 0FFFFFFFEh
 * 0000000140C72337: mov     [r9+828h], r10d
 * 0000000140C7233E: bts     r13d, 12h
 * 0000000140C72343: mov     [r9+9D8h], r13d
 * 0000000140C7234A: mov     [r9+0A74h], r10d
 * 0000000140C72351: mov     eax, [r9+97Ch]
 * 0000000140C72358: mov     [rbp+7B0h+var_7F8], eax
 * 0000000140C7235B: mov     rax, [r9+4E0h]
 * 0000000140C72362: mov     [rbp+7B0h+var_768], rax
 * 0000000140C72366: mov     rax, [r9+5B8h]
 * 0000000140C7236D: mov     [rbp+7B0h+var_7A0], rax
 * 0000000140C72371: mov     dword ptr [r9+0C4h], 144h
 * 0000000140C7237C: rdtsc
 * 0000000140C7237E: shl     rdx, 20h
 * 0000000140C72382: or      rax, rdx
 * 0000000140C72385: mov     rcx, rax
 * 0000000140C72388: ror     rax, 3
 * 0000000140C7238C: xor     rcx, rax
 * 0000000140C7238F: mov     rax, r14
 * 0000000140C72392: mul     rcx
 * 0000000140C72395: mov     r15, rdx
 * 0000000140C72398: xor     r15, rax
 * 0000000140C7239B: jz      short loc_140C7237C
 * 0000000140C7239D: mov     rax, [r9+7D8h]
 * 0000000140C723A4: lea     rcx, [r9+7B8h]
 * 0000000140C723AB: mov     r14, [rsp+8B0h+var_858]
 * 0000000140C723B0: lea     rdx, [rbp+7B0h+var_120]
 * 0000000140C723B7: mov     r11d, 20h ; ' '
 * 0000000140C723BD: mov     [rbp+7B0h+var_7A8], rax
 * 0000000140C723C1: mov     eax, [r9+848h]
 * 0000000140C723C8: mov     r8d, r11d
 * 0000000140C723CB: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C723D1: lea     ebx, [r11-1Ch]
 * 0000000140C723D5: mov     r10d, ebx
 * 0000000140C723D8: lea     edi, [rbx-3]
 * 0000000140C723DB: mov     rax, [rcx]
 * 0000000140C723DE: add     r8d, 0FFFFFFF8h
 * 0000000140C723E2: mov     [rdx], rax
 * 0000000140C723E5: add     rcx, 8
 * 0000000140C723E9: add     rdx, 8
 * 0000000140C723ED: sub     r10, rdi
 * 0000000140C723F0: jnz     short loc_140C723DB
 * 0000000140C723F2: lea     edi, [r10+2]
 * 0000000140C723F6: lea     r10d, [rdi-1]
 * 0000000140C723FA: test    r8d, r8d
 * 0000000140C723FD: jz      short loc_140C72417
 * 0000000140C723FF: mov     edi, 0FFFFFFFFh
 * 0000000140C72404: mov     al, [rcx]
 * 0000000140C72406: add     rcx, r10
 * 0000000140C72409: mov     [rdx], al
 * 0000000140C7240B: add     rdx, r10
 * 0000000140C7240E: add     r8d, edi
 * 0000000140C72411: jnz     short loc_140C72404
 * 0000000140C72413: lea     edi, [r8+2]
 * 0000000140C72417: mov     [r9+7D8h], r12
 * 0000000140C7241E: lea     rax, [r9+7B8h]
 * 0000000140C72425: mov     [r9+848h], r12d
 * 0000000140C7242C: mov     ecx, r11d
 * 0000000140C7242F: mov     rdx, rbx
 * 0000000140C72432: mov     [rax], r12
 * 0000000140C72435: add     ecx, 0FFFFFFF8h
 * 0000000140C72438: add     rax, 8
 * 0000000140C7243C: sub     rdx, r10
 * 0000000140C7243F: jnz     short loc_140C72432
 * 0000000140C72441: mov     edx, 1
 * 0000000140C72446: test    ecx, ecx
 * 0000000140C72448: jz      short loc_140C7245B
 * 0000000140C7244A: mov     r8d, 0FFFFFFFFh
 * 0000000140C72450: mov     [rax], r12b
 * 0000000140C72453: add     rax, rdx
 * 0000000140C72456: add     ecx, r8d
 * 0000000140C72459: jnz     short loc_140C72450
 * 0000000140C7245B: mov     r11d, [r9+804h]
 * 0000000140C72462: mov     r10, r9
 * 0000000140C72465: add     [r9+848h], r11d
 * 0000000140C7246C: mov     rax, r9
 * 0000000140C7246F: mov     ebx, [r9+834h]
 * 0000000140C72476: mov     r8, [r9+838h]
 * 0000000140C7247D: lea     rcx, [r9+r11]
 * 0000000140C72481: cmp     r9, rcx
 * 0000000140C72484: jnb     short loc_140C72492
 * 0000000140C72486: prefetchnta byte ptr [rax]
 * 0000000140C72489: add     rax, 40h ; '@'
 * 0000000140C7248D: cmp     rax, rcx
 * 0000000140C72490: jb      short loc_140C72486
 * 0000000140C72492: mov     r12d, r11d
 * 0000000140C72495: shr     r12d, 7
 * 0000000140C72499: test    r12d, r12d
 * 0000000140C7249C: jz      short loc_140C72508
 * 0000000140C7249E: mov     rdi, r8
 * 0000000140C724A1: mov     rsi, 7010008004002001h
 * 0000000140C724AB: mov     r14d, 0FFFFFFFFh
 * 0000000140C724B1: mov     eax, 8
 * 0000000140C724B6: xor     r8, [r10]
 * 0000000140C724B9: mov     ecx, ebx
 * 0000000140C724BB: rol     r8, cl
 * 0000000140C724BE: xor     r8, [r10+8]
 * 0000000140C724C2: add     r10, 10h
 * 0000000140C724C6: rol     r8, cl
 * 0000000140C724C9: sub     rax, rdx
 * 0000000140C724CC: jnz     short loc_140C724B6
 * 0000000140C724CE: mov     rcx, r10
 * 0000000140C724D1: sub     rcx, r9
 * 0000000140C724D4: xor     rcx, rdi
 * 0000000140C724D7: mov     rax, rcx
 * 0000000140C724DA: rol     rax, 11h
 * 0000000140C724DE: xor     rcx, rax
 * 0000000140C724E1: mov     rax, rsi
 * 0000000140C724E4: mul     rcx
 * 0000000140C724E7: xor     ebx, eax
 * 0000000140C724E9: xor     ebx, edx
 * 0000000140C724EB: mov     edx, 1
 * 0000000140C724F0: and     ebx, 3Fh
 * 0000000140C724F3: cmovz   ebx, edx
 * 0000000140C724F6: add     r12d, r14d
 * 0000000140C724F9: jnz     short loc_140C724B1
 * 0000000140C724FB: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C72500: lea     edi, [rdx+1]
 * 0000000140C72503: mov     r14, [rsp+8B0h+var_858]
 * 0000000140C72508: and     r11d, 7Fh
 * 0000000140C7250C: cmp     r11d, 8
 * 0000000140C72510: jb      short loc_140C7252E
 * 0000000140C72512: mov     eax, r11d
 * 0000000140C72515: shr     rax, 3
 * 0000000140C72519: xor     r8, [r10]
 * 0000000140C7251C: mov     ecx, ebx
 * 0000000140C7251E: rol     r8, cl
 * 0000000140C72521: add     r10, 8
 * 0000000140C72525: add     r11d, 0FFFFFFF8h
 * 0000000140C72529: sub     rax, rdx
 * 0000000140C7252C: jnz     short loc_140C72519
 * 0000000140C7252E: xor     r12d, r12d
 * 0000000140C72531: test    r11d, r11d
 * 0000000140C72534: jz      short loc_140C72553
 * 0000000140C72536: mov     edi, 0FFFFFFFFh
 * 0000000140C7253B: movzx   eax, byte ptr [r10]
 * 0000000140C7253F: mov     ecx, ebx
 * 0000000140C72541: xor     r8, rax
 * 0000000140C72544: add     r10, rdx
 * 0000000140C72547: rol     r8, cl
 * 0000000140C7254A: add     r11d, edi
 * 0000000140C7254D: jnz     short loc_140C7253B
 * 0000000140C7254F: lea     edi, [r11+2]
 * 0000000140C72553: mov     ecx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C72559: lea     rdx, [r9+7B8h]
 * 0000000140C72560: mov     rax, [rbp+7B0h+var_7A8]
 * 0000000140C72564: mov     r10d, 20h ; ' '
 * 0000000140C7256A: mov     [r9+7D8h], rax
 * 0000000140C72571: add     [r9+848h], ecx
 * 0000000140C72578: lea     rcx, [rbp+7B0h+var_120]
 * 0000000140C7257F: lea     ebx, [r10-1Fh]
 * 0000000140C72583: lea     r11d, [r10-1Ch]
 * 0000000140C72587: mov     rax, [rcx]
 * 0000000140C7258A: add     r10d, 0FFFFFFF8h
 * 0000000140C7258E: mov     [rdx], rax
 * 0000000140C72591: add     rcx, 8
 * 0000000140C72595: add     rdx, 8
 * 0000000140C72599: sub     r11, rbx
 * 0000000140C7259C: jnz     short loc_140C72587
 * 0000000140C7259E: test    r10d, r10d
 * 0000000140C725A1: jz      short loc_140C725BB
 * 0000000140C725A3: mov     edi, 0FFFFFFFFh
 * 0000000140C725A8: mov     al, [rcx]
 * 0000000140C725AA: add     rcx, rbx
 * 0000000140C725AD: mov     [rdx], al
 * 0000000140C725AF: add     rdx, rbx
 * 0000000140C725B2: add     r10d, edi
 * 0000000140C725B5: jnz     short loc_140C725A8
 * 0000000140C725B7: lea     edi, [r10+2]
 * 0000000140C725BB: mov     [r9+7D8h], r8
 * 0000000140C725C2: test    dword ptr [r9+9D8h], 20000000h
 * 0000000140C725CD: jnz     loc_140C726FB
 * 0000000140C725D3: mov     rax, r9
 * 0000000140C725D6: mov     ecx, r12d
 * 0000000140C725D9: xor     [rax], r15
 * 0000000140C725DC: add     ecx, ebx
 * 0000000140C725DE: add     rax, 8
 * 0000000140C725E2: cmp     ecx, 19h
 * 0000000140C725E5: jb      short loc_140C725D9
 * 0000000140C725E7: add     rax, 0A18h
 * 0000000140C725ED: mov     ecx, 144h
 * 0000000140C725F2: xor     [rax], r15
 * 0000000140C725F5: lea     rdx, [rbp+7B0h+var_788]
 * 0000000140C725F9: ror     r15, cl
 * 0000000140C725FC: lea     rax, [rax-8]
 * 0000000140C72600: mov     [rbp+7B0h+var_788], r15
 * 0000000140C72604: and     r15d, 3Fh
 * 0000000140C72608: btc     [rdx], r15
 * 0000000140C7260C: sub     ecx, ebx
 * 0000000140C7260E: jz      short loc_140C72616
 * 0000000140C72610: mov     r15, [rbp+7B0h+var_788]
 * 0000000140C72614: jmp     short loc_140C725F2
 * 0000000140C72616: rdtsc
 * 0000000140C72618: shl     rdx, 20h
 * 0000000140C7261C: or      rax, rdx
 * 0000000140C7261F: mov     rcx, rax
 * 0000000140C72622: ror     rax, 3
 * 0000000140C72626: xor     rcx, rax
 * 0000000140C72629: mov     rax, 7010008004002001h
 * 0000000140C72633: mul     rcx
 * 0000000140C72636: mov     rcx, rdx
 * 0000000140C72639: xor     rcx, rax
 * 0000000140C7263C: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C72646: mul     rcx
 * 0000000140C72649: shr     rdx, 1
 * 0000000140C7264C: lea     rax, [rdx+rdx*2]
 * 0000000140C72650: cmp     rcx, rax
 * 0000000140C72653: jnz     loc_140C726FB
 * 0000000140C72659: mov     r15d, [rbp+7B0h+var_7F8]
 * 0000000140C7265D: mov     ecx, r9d
 * 0000000140C72660: mov     rdi, [rbp+7B0h+var_768]
 * 0000000140C72664: mov     r10, r9
 * 0000000140C72667: mov     r11d, r12d
 * 0000000140C7266A: ror     r10, cl
 * 0000000140C7266D: mov     r12, [rbp+7B0h+var_7A0]
 * 0000000140C72671: mov     rbx, r9
 * 0000000140C72674: mov     r14d, 1
 * 0000000140C7267A: mov     eax, r11d
 * 0000000140C7267D: add     rax, rbx
 * 0000000140C72680: sub     [r9], rax
 * 0000000140C72683: mov     rcx, [r9]
 * 0000000140C72686: bt      r13d, 8
 * 0000000140C7268B: jb      short loc_140C726A4
 * 0000000140C7268D: mov     rax, rdi
 * 0000000140C72690: xor     rax, rcx
 * 0000000140C72693: mov     ecx, r12d
 * 0000000140C72696: bswap   rax
 * 0000000140C72699: xor     rax, r10
 * 0000000140C7269C: ror     rax, cl
 * 0000000140C7269F: xor     rax, r12
 * 0000000140C726A2: jmp     short loc_140C726AA
 * 0000000140C726A4: mov     rax, r10
 * 0000000140C726A7: xor     rax, rcx
 * 0000000140C726AA: mov     rcx, r9
 * 0000000140C726AD: mov     edx, 0C8h
 * 0000000140C726B2: sub     edx, r11d
 * 0000000140C726B5: mov     [rcx], rax
 * 0000000140C726B8: mov     ecx, [r9]
 * 0000000140C726BB: mov     r8d, ecx
 * 0000000140C726BE: mov     eax, r11d
 * 0000000140C726C1: not     ecx
 * 0000000140C726C3: xor     rdx, rax
 * 0000000140C726C6: xor     r8d, 0F05h
 * 0000000140C726CD: ror     rdx, cl
 * 0000000140C726D0: add     r9, 8
 * 0000000140C726D4: xor     r10, rdx
 * 0000000140C726D7: mov     cl, r8b
 * 0000000140C726DA: rol     r10, cl
 * 0000000140C726DD: add     r11d, r14d
 * 0000000140C726E0: add     r10, rbx
 * 0000000140C726E3: xor     r10, r15
 * 0000000140C726E6: cmp     r11d, 19h
 * 0000000140C726EA: jb      short loc_140C7267A
 * 0000000140C726EC: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C726F1: mov     edi, 2
 * 0000000140C726F6: mov     r14, [rsp+8B0h+var_858]
 * 0000000140C726FB: mov     r15, [r14+8]
 * 0000000140C726FF: mov     r10d, [r14+10h]
 * 0000000140C72703: mov     r9, r15
 * 0000000140C72706: add     [rsi+848h], r10d
 * 0000000140C7270D: mov     rax, r15
 * 0000000140C72710: mov     r11d, [rsi+834h]
 * 0000000140C72717: mov     r12, [rsi+838h]
 * 0000000140C7271E: lea     rcx, [r15+r10]
 * 0000000140C72722: cmp     r15, rcx
 * 0000000140C72725: jnb     short loc_140C72737
 * 0000000140C72727: mov     edx, 40h ; '@'
 * 0000000140C7272C: prefetchnta byte ptr [rax]
 * 0000000140C7272F: add     rax, rdx
 * 0000000140C72732: cmp     rax, rcx
 * 0000000140C72735: jb      short loc_140C7272C
 * 0000000140C72737: mov     ebx, r10d
 * 0000000140C7273A: mov     r8, r12
 * 0000000140C7273D: shr     ebx, 7
 * 0000000140C72740: mov     r13d, 1
 * 0000000140C72746: test    ebx, ebx
 * 0000000140C72748: jz      short loc_140C727AA
 * 0000000140C7274A: mov     edi, 0FFFFFFFFh
 * 0000000140C7274F: mov     rsi, 7010008004002001h
 * 0000000140C72759: mov     eax, 8
 * 0000000140C7275E: xor     r8, [r9]
 * 0000000140C72761: mov     ecx, r11d
 * 0000000140C72764: rol     r8, cl
 * 0000000140C72767: xor     r8, [r9+8]
 * 0000000140C7276B: add     r9, 10h
 * 0000000140C7276F: rol     r8, cl
 * 0000000140C72772: sub     rax, r13
 * 0000000140C72775: jnz     short loc_140C7275E
 * 0000000140C72777: mov     rcx, r9
 * 0000000140C7277A: sub     rcx, r15
 * 0000000140C7277D: xor     rcx, r12
 * 0000000140C72780: mov     rax, rcx
 * 0000000140C72783: rol     rax, 11h
 * 0000000140C72787: xor     rcx, rax
 * 0000000140C7278A: mov     rax, rsi
 * 0000000140C7278D: mul     rcx
 * 0000000140C72790: xor     r11d, eax
 * 0000000140C72793: xor     r11d, edx
 * 0000000140C72796: and     r11d, 3Fh
 * 0000000140C7279A: cmovz   r11d, r13d
 * 0000000140C7279E: add     ebx, edi
 * 0000000140C727A0: jnz     short loc_140C72759
 * 0000000140C727A2: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C727A7: lea     edi, [rbx+2]
 * 0000000140C727AA: and     r10d, 7Fh
 * 0000000140C727AE: cmp     r10d, 8
 * 0000000140C727B2: jb      short loc_140C727D1
 * 0000000140C727B4: mov     eax, r10d
 * 0000000140C727B7: shr     rax, 3
 * 0000000140C727BB: xor     r8, [r9]
 * 0000000140C727BE: mov     ecx, r11d
 * 0000000140C727C1: rol     r8, cl
 * 0000000140C727C4: add     r9, 8
 * 0000000140C727C8: add     r10d, 0FFFFFFF8h
 * 0000000140C727CC: sub     rax, r13
 * 0000000140C727CF: jnz     short loc_140C727BB
 * 0000000140C727D1: test    r10d, r10d
 * 0000000140C727D4: jz      short loc_140C727F4
 * 0000000140C727D6: mov     edi, 0FFFFFFFFh
 * 0000000140C727DB: movzx   eax, byte ptr [r9]
 * 0000000140C727DF: mov     ecx, r11d
 * 0000000140C727E2: xor     r8, rax
 * 0000000140C727E5: add     r9, r13
 * 0000000140C727E8: rol     r8, cl
 * 0000000140C727EB: add     r10d, edi
 * 0000000140C727EE: jnz     short loc_140C727DB
 * 0000000140C727F0: lea     edi, [r10+2]
 * 0000000140C727F4: mov     rax, r8
 * 0000000140C727F7: jmp     short loc_140C727FC
 * 0000000140C727F9: xor     r8d, eax
 * 0000000140C727FC: shr     rax, 1Fh
 * 0000000140C72800: test    rax, rax
 * 0000000140C72803: jnz     short loc_140C727F9
 * 0000000140C72805: btr     r8d, 1Fh
 * 0000000140C7280A: mov     [r14+14h], r8d
 * 0000000140C7280E: mov     r8, 7010008004002001h
 * 0000000140C72818: mov     r11d, 1
 * 0000000140C7281E: mov     r12d, [rsi+9D8h]
 * 0000000140C72825: xor     r14d, r14d
 * 0000000140C72828: mov     dword ptr [rbp+7B0h+arg_8], r14d
 * 0000000140C7282F: mov     [rsp+8B0h+var_858], r14
 * 0000000140C72834: mov     [rbp+7B0h+var_7F8], r12d
 * 0000000140C72838: bt      r12d, 1Dh
 * 0000000140C7283D: jb      loc_140C72E8D
 * 0000000140C72843: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C7284A: cmp     rsi, r13
 * 0000000140C7284D: jnz     loc_140C72F06
 * 0000000140C72853: bt      r12d, 0Eh
 * 0000000140C72858: jb      short loc_140C72867
 * 0000000140C7285A: cmp     [rsi+918h], r14d
 * 0000000140C72861: jnz     loc_140C72C90
 * 0000000140C72867: mov     r8d, [r13+944h]
 * 0000000140C7286E: mov     rcx, r13
 * 0000000140C72871: mov     edx, [r13+804h]
 * 0000000140C72878: call    sub_140C787A8
 * 0000000140C7287D: mov     rsi, rax
 * 0000000140C72880: test    rax, rax
 * 0000000140C72883: jz      loc_140C72C90
 * 0000000140C72889: mov     ecx, [rsi+97Ch]
 * 0000000140C7288F: mov     rdi, 7010008004002001h
 * 0000000140C72899: mov     r15d, [rsi+0A74h]
 * 0000000140C728A0: mov     rax, [rax+7E8h]
 * 0000000140C728A7: add     r15d, 0FFFFFF38h
 * 0000000140C728AE: mov     r13d, [rsi+9D8h]
 * 0000000140C728B5: mov     [rbp+7B0h+var_7C4], ecx
 * 0000000140C728B8: mov     rcx, [rsi+4E0h]
 * 0000000140C728BF: mov     [rbp+7B0h+var_788], rcx
 * 0000000140C728C3: mov     rcx, [rsi+5B8h]
 * 0000000140C728CA: shr     r15d, 3
 * 0000000140C728CE: mov     [rbp+7B0h+var_7A8], rcx
 * 0000000140C728D2: mov     [rsp+8B0h+var_858], rax
 * 0000000140C728D7: mov     dword ptr [rbp+7B0h+arg_8], r13d
 * 0000000140C728DE: mov     [rsi+0C4h], r15d
 * 0000000140C728E5: rdtsc
 * 0000000140C728E7: shl     rdx, 20h
 * 0000000140C728EB: or      rax, rdx
 * 0000000140C728EE: mov     rcx, rax
 * 0000000140C728F1: ror     rax, 3
 * 0000000140C728F5: xor     rcx, rax
 * 0000000140C728F8: mov     rax, rdi
 * 0000000140C728FB: mul     rcx
 * 0000000140C728FE: mov     rbx, rdx
 * 0000000140C72901: xor     rbx, rax
 * 0000000140C72904: jz      short loc_140C728E5
 * 0000000140C72906: mov     rax, [rsi+7D8h]
 * 0000000140C7290D: lea     rcx, [rsi+7B8h]
 * 0000000140C72914: mov     r10d, 20h ; ' '
 * 0000000140C7291A: mov     [rbp+7B0h+var_820], rax
 * 0000000140C7291E: mov     eax, [rsi+848h]
 * 0000000140C72924: lea     rdx, [rbp+7B0h+var_100]
 * 0000000140C7292B: mov     [rbp+7B0h+var_7F8], eax
 * 0000000140C7292E: mov     r8d, r10d
 * 0000000140C72931: lea     r11d, [r10-1Ch]
 * 0000000140C72935: mov     r9d, r11d
 * 0000000140C72938: lea     edi, [r10-1Eh]
 * 0000000140C7293C: lea     r12d, [r10-1Fh]
 * 0000000140C72940: mov     rax, [rcx]
 * 0000000140C72943: add     r8d, 0FFFFFFF8h
 * 0000000140C72947: mov     [rdx], rax
 * 0000000140C7294A: add     rcx, 8
 * 0000000140C7294E: add     rdx, 8
 * 0000000140C72952: sub     r9, r12
 * 0000000140C72955: jnz     short loc_140C72940
 * 0000000140C72957: test    r8d, r8d
 * 0000000140C7295A: jz      short loc_140C72974
 * 0000000140C7295C: mov     edi, 0FFFFFFFFh
 * 0000000140C72961: mov     al, [rcx]
 * 0000000140C72963: add     rcx, r12
 * 0000000140C72966: mov     [rdx], al
 * 0000000140C72968: add     rdx, r12
 * 0000000140C7296B: add     r8d, edi
 * 0000000140C7296E: jnz     short loc_140C72961
 * 0000000140C72970: lea     edi, [r8+2]
 * 0000000140C72974: mov     [rsi+7D8h], r14
 * 0000000140C7297B: lea     rax, [rsi+7B8h]
 * 0000000140C72982: mov     [rsi+848h], r14d
 * 0000000140C72989: mov     ecx, r10d
 * 0000000140C7298C: mov     rdx, r11
 * 0000000140C7298F: mov     [rax], r14
 * 0000000140C72992: add     ecx, 0FFFFFFF8h
 * 0000000140C72995: add     rax, 8
 * 0000000140C72999: sub     rdx, r12
 * 0000000140C7299C: jnz     short loc_140C7298F
 * 0000000140C7299E: mov     edx, 0FFFFFFFFh
 * 0000000140C729A3: test    ecx, ecx
 * 0000000140C729A5: jz      short loc_140C729B1
 * 0000000140C729A7: mov     [rax], r14b
 * 0000000140C729AA: add     rax, r12
 * 0000000140C729AD: add     ecx, edx
 * 0000000140C729AF: jnz     short loc_140C729A7
 * 0000000140C729B1: mov     r11d, [rsi+804h]
 * 0000000140C729B8: mov     r9, rsi
 * 0000000140C729BB: add     [rsi+848h], r11d
 * 0000000140C729C2: mov     rax, rsi
 * 0000000140C729C5: mov     r10d, [rsi+834h]
 * 0000000140C729CC: mov     r12, [rsi+838h]
 * 0000000140C729D3: lea     rcx, [rsi+r11]
 * 0000000140C729D7: cmp     rsi, rcx
 * 0000000140C729DA: jnb     short loc_140C729ED
 * 0000000140C729DC: mov     r8d, 40h ; '@'
 * 0000000140C729E2: prefetchnta byte ptr [rax]
 * 0000000140C729E5: add     rax, r8
 * 0000000140C729E8: cmp     rax, rcx
 * 0000000140C729EB: jb      short loc_140C729E2
 * 0000000140C729ED: mov     r14d, r11d
 * 0000000140C729F0: mov     r8, r12
 * 0000000140C729F3: shr     r14d, 7
 * 0000000140C729F7: test    r14d, r14d
 * 0000000140C729FA: jz      short loc_140C72A65
 * 0000000140C729FC: mov     edi, 1
 * 0000000140C72A01: mov     r13, 7010008004002001h
 * 0000000140C72A0B: mov     eax, 8
 * 0000000140C72A10: xor     r8, [r9]
 * 0000000140C72A13: mov     ecx, r10d
 * 0000000140C72A16: rol     r8, cl
 * 0000000140C72A19: xor     r8, [r9+8]
 * 0000000140C72A1D: add     r9, 10h
 * 0000000140C72A21: rol     r8, cl
 * 0000000140C72A24: sub     rax, rdi
 * 0000000140C72A27: jnz     short loc_140C72A10
 * 0000000140C72A29: mov     rcx, r9
 * 0000000140C72A2C: sub     rcx, rsi
 * 0000000140C72A2F: xor     rcx, r12
 * 0000000140C72A32: mov     rax, rcx
 * 0000000140C72A35: rol     rax, 11h
 * 0000000140C72A39: xor     rcx, rax
 * 0000000140C72A3C: mov     rax, r13
 * 0000000140C72A3F: mul     rcx
 * 0000000140C72A42: xor     r10d, eax
 * 0000000140C72A45: xor     r10d, edx
 * 0000000140C72A48: mov     edx, 0FFFFFFFFh
 * 0000000140C72A4D: and     r10d, 3Fh
 * 0000000140C72A51: cmovz   r10d, edi
 * 0000000140C72A55: add     r14d, edx
 * 0000000140C72A58: jnz     short loc_140C72A0B
 * 0000000140C72A5A: mov     r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C72A61: lea     edi, [r14+2]
 * 0000000140C72A65: and     r11d, 7Fh
 * 0000000140C72A69: mov     r12d, 1
 * 0000000140C72A6F: cmp     r11d, 8
 * 0000000140C72A73: jb      short loc_140C72A92
 * 0000000140C72A75: mov     eax, r11d
 * 0000000140C72A78: shr     rax, 3
 * 0000000140C72A7C: xor     r8, [r9]
 * 0000000140C72A7F: mov     ecx, r10d
 * 0000000140C72A82: rol     r8, cl
 * 0000000140C72A85: add     r9, 8
 * 0000000140C72A89: add     r11d, 0FFFFFFF8h
 * 0000000140C72A8D: sub     rax, r12
 * 0000000140C72A90: jnz     short loc_140C72A7C
 * 0000000140C72A92: xor     r14d, r14d
 * 0000000140C72A95: test    r11d, r11d
 * 0000000140C72A98: jz      short loc_140C72AAF
 * 0000000140C72A9A: movzx   eax, byte ptr [r9]
 * 0000000140C72A9E: mov     ecx, r10d
 * 0000000140C72AA1: xor     r8, rax
 * 0000000140C72AA4: add     r9, r12
 * 0000000140C72AA7: rol     r8, cl
 * 0000000140C72AAA: add     r11d, edx
 * 0000000140C72AAD: jnz     short loc_140C72A9A
 * 0000000140C72AAF: mov     ecx, [rbp+7B0h+var_7F8]
 * 0000000140C72AB2: lea     rdx, [rsi+7B8h]
 * 0000000140C72AB9: mov     rax, [rbp+7B0h+var_820]
 * 0000000140C72ABD: mov     r9d, 4
 * 0000000140C72AC3: mov     [rsi+7D8h], rax
 * 0000000140C72ACA: add     [rsi+848h], ecx
 * 0000000140C72AD0: lea     rcx, [rbp+7B0h+var_100]
 * 0000000140C72AD7: lea     r10d, [r9+1Ch]
 * 0000000140C72ADB: mov     rax, [rcx]
 * 0000000140C72ADE: add     r10d, 0FFFFFFF8h
 * 0000000140C72AE2: mov     [rdx], rax
 * 0000000140C72AE5: add     rcx, 8
 * 0000000140C72AE9: add     rdx, 8
 * 0000000140C72AED: sub     r9, r12
 * 0000000140C72AF0: jnz     short loc_140C72ADB
 * 0000000140C72AF2: test    r10d, r10d
 * 0000000140C72AF5: jz      short loc_140C72B0F
 * 0000000140C72AF7: mov     edi, 0FFFFFFFFh
 * 0000000140C72AFC: mov     al, [rcx]
 * 0000000140C72AFE: add     rcx, r12
 * 0000000140C72B01: mov     [rdx], al
 * 0000000140C72B03: add     rdx, r12
 * 0000000140C72B06: add     r10d, edi
 * 0000000140C72B09: jnz     short loc_140C72AFC
 * 0000000140C72B0B: lea     edi, [r10+2]
 * 0000000140C72B0F: mov     [rsi+7D8h], r8
 * 0000000140C72B16: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C72B20: jnz     loc_140C72C84
 * 0000000140C72B26: mov     rcx, rsi
 * 0000000140C72B29: mov     eax, r14d
 * 0000000140C72B2C: mov     r11d, 19h
 * 0000000140C72B32: xor     [rcx], rbx
 * 0000000140C72B35: add     eax, r12d
 * 0000000140C72B38: lea     rcx, [rcx+8]
 * 0000000140C72B3C: cmp     eax, r11d
 * 0000000140C72B3F: jb      short loc_140C72B32
 * 0000000140C72B41: mov     r8d, r15d
 * 0000000140C72B44: test    r15d, r15d
 * 0000000140C72B47: jz      short loc_140C72B7A
 * 0000000140C72B49: mov     edx, r15d
 * 0000000140C72B4C: dec     rdx
 * 0000000140C72B4F: lea     rdx, [rcx+rdx*8]
 * 0000000140C72B53: xor     [rdx], rbx
 * 0000000140C72B56: lea     rax, [rbp+7B0h+var_7A0]
 * 0000000140C72B5A: mov     ecx, r8d
 * 0000000140C72B5D: lea     rdx, [rdx-8]
 * 0000000140C72B61: ror     rbx, cl
 * 0000000140C72B64: mov     [rbp+7B0h+var_7A0], rbx
 * 0000000140C72B68: and     ebx, 3Fh
 * 0000000140C72B6B: btc     [rax], rbx
 * 0000000140C72B6F: sub     r8d, r12d
 * 0000000140C72B72: jz      short loc_140C72B7A
 * 0000000140C72B74: mov     rbx, [rbp+7B0h+var_7A0]
 * 0000000140C72B78: jmp     short loc_140C72B53
 * 0000000140C72B7A: bt      r13d, 12h
 * 0000000140C72B7F: jnb     short loc_140C72BC8
 * 0000000140C72B81: rdtsc
 * 0000000140C72B83: shl     rdx, 20h
 * 0000000140C72B87: or      rax, rdx
 * 0000000140C72B8A: mov     rcx, rax
 * 0000000140C72B8D: mov     rdx, rax
 * 0000000140C72B90: ror     rcx, 3
 * 0000000140C72B94: mov     rax, 7010008004002001h
 * 0000000140C72B9E: xor     rdx, rcx
 * 0000000140C72BA1: mul     rdx
 * 0000000140C72BA4: mov     rcx, rdx
 * 0000000140C72BA7: xor     rcx, rax
 * 0000000140C72BAA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C72BB4: mul     rcx
 * 0000000140C72BB7: shr     rdx, 1
 * 0000000140C72BBA: lea     rax, [rdx+rdx*2]
 * 0000000140C72BBE: cmp     rcx, rax
 * 0000000140C72BC1: jz      short loc_140C72BD1
 * 0000000140C72BC3: jmp     loc_140C72C84
 * 0000000140C72BC8: test    r13b, r13b
 * 0000000140C72BCB: js      loc_140C72C84
 * 0000000140C72BD1: mov     r12, [rbp+7B0h+var_7A8]
 * 0000000140C72BD5: mov     ecx, esi
 * 0000000140C72BD7: mov     rdi, [rbp+7B0h+var_788]
 * 0000000140C72BDB: mov     r9, rsi
 * 0000000140C72BDE: mov     ebx, r11d
 * 0000000140C72BE1: ror     r9, cl
 * 0000000140C72BE4: mov     r11d, r14d
 * 0000000140C72BE7: mov     r10, rsi
 * 0000000140C72BEA: mov     r14d, [rbp+7B0h+var_7C4]
 * 0000000140C72BEE: mov     eax, r11d
 * 0000000140C72BF1: add     rax, rsi
 * 0000000140C72BF4: sub     [r10], rax
 * 0000000140C72BF7: mov     rcx, [r10]
 * 0000000140C72BFA: bt      r13d, 8
 * 0000000140C72BFF: jb      short loc_140C72C18
 * 0000000140C72C01: mov     rax, rdi
 * 0000000140C72C04: xor     rax, rcx
 * 0000000140C72C07: mov     ecx, r12d
 * 0000000140C72C0A: bswap   rax
 * 0000000140C72C0D: xor     rax, r9
 * 0000000140C72C10: ror     rax, cl
 * 0000000140C72C13: xor     rax, r12
 * 0000000140C72C16: jmp     short loc_140C72C1E
 * 0000000140C72C18: mov     rax, r9
 * 0000000140C72C1B: xor     rax, rcx
 * 0000000140C72C1E: mov     rcx, r10
 * 0000000140C72C21: mov     edx, 0C8h
 * 0000000140C72C26: sub     edx, r11d
 * 0000000140C72C29: mov     [rcx], rax
 * 0000000140C72C2C: mov     ecx, [r10]
 * 0000000140C72C2F: mov     r8d, ecx
 * 0000000140C72C32: mov     eax, r11d
 * 0000000140C72C35: not     ecx
 * 0000000140C72C37: xor     rdx, rax
 * 0000000140C72C3A: xor     r8d, 0F05h
 * 0000000140C72C41: ror     rdx, cl
 * 0000000140C72C44: lea     eax, [r11+1]
 * 0000000140C72C48: xor     r9, rdx
 * 0000000140C72C4B: mov     cl, r8b
 * 0000000140C72C4E: rol     r9, cl
 * 0000000140C72C51: add     r10, 8
 * 0000000140C72C55: add     r9, rsi
 * 0000000140C72C58: mov     r11d, eax
 * 0000000140C72C5B: xor     r9, r14
 * 0000000140C72C5E: cmp     eax, 19h
 * 0000000140C72C61: jnz     short loc_140C72C72
 * 0000000140C72C63: bt      r13d, 12h
 * 0000000140C72C68: lea     eax, [r11-19h]
 * 0000000140C72C6C: cmovnb  eax, r15d
 * 0000000140C72C70: add     ebx, eax
 * 0000000140C72C72: cmp     r11d, ebx
 * 0000000140C72C75: jb      loc_140C72BEE
 * 0000000140C72C7B: mov     edi, 2
 * 0000000140C72C80: lea     r12d, [rdi-1]
 * 0000000140C72C84: mov     dword ptr [rbp+7B0h+arg_8], r12d
 * 0000000140C72C8B: jmp     loc_140C732F2
 * 0000000140C72C90: mov     ebx, 1
 * 0000000140C72C95: lea     rcx, [r13+7B8h]
 * 0000000140C72C9C: mov     [r13+0C4h], ebx
 * 0000000140C72CA3: lea     rdx, [rbp+7B0h+var_E0]
 * 0000000140C72CAA: mov     r12d, [r13+848h]
 * 0000000140C72CB1: mov     rsi, r13
 * 0000000140C72CB4: mov     r15, [r13+7D8h]
 * 0000000140C72CBB: lea     r10d, [rbx+1Fh]
 * 0000000140C72CBF: mov     [rbp+7B0h+var_7F8], r12d
 * 0000000140C72CC3: lea     r11d, [rbx+3]
 * 0000000140C72CC7: mov     r8d, r10d
 * 0000000140C72CCA: mov     r9d, r11d
 * 0000000140C72CCD: mov     rax, [rcx]
 * 0000000140C72CD0: add     r8d, 0FFFFFFF8h
 * 0000000140C72CD4: mov     [rdx], rax
 * 0000000140C72CD7: add     rcx, 8
 * 0000000140C72CDB: add     rdx, 8
 * 0000000140C72CDF: sub     r9, rbx
 * 0000000140C72CE2: jnz     short loc_140C72CCD
 * 0000000140C72CE4: mov     r9d, 0FFFFFFFFh
 * 0000000140C72CEA: test    r8d, r8d
 * 0000000140C72CED: jz      short loc_140C72CFE
 * 0000000140C72CEF: mov     al, [rcx]
 * 0000000140C72CF1: add     rcx, rbx
 * 0000000140C72CF4: mov     [rdx], al
 * 0000000140C72CF6: add     rdx, rbx
 * 0000000140C72CF9: add     r8d, r9d
 * 0000000140C72CFC: jnz     short loc_140C72CEF
 * 0000000140C72CFE: mov     [r13+7D8h], r14
 * 0000000140C72D05: lea     rax, [r13+7B8h]
 * 0000000140C72D0C: mov     [r13+848h], r14d
 * 0000000140C72D13: mov     ecx, r10d
 * 0000000140C72D16: mov     rdx, r11
 * 0000000140C72D19: mov     [rax], r14
 * 0000000140C72D1C: add     ecx, 0FFFFFFF8h
 * 0000000140C72D1F: add     rax, 8
 * 0000000140C72D23: sub     rdx, rbx
 * 0000000140C72D26: jnz     short loc_140C72D19
 * 0000000140C72D28: test    ecx, ecx
 * 0000000140C72D2A: jz      short loc_140C72D37
 * 0000000140C72D2C: mov     [rax], r14b
 * 0000000140C72D2F: add     rax, rbx
 * 0000000140C72D32: add     ecx, r9d
 * 0000000140C72D35: jnz     short loc_140C72D2C
 * 0000000140C72D37: mov     r11d, [r13+804h]
 * 0000000140C72D3E: mov     r10, r13
 * 0000000140C72D41: add     [r13+848h], r11d
 * 0000000140C72D48: mov     rax, r13
 * 0000000140C72D4B: mov     r9d, [r13+834h]
 * 0000000140C72D52: mov     r14, [r13+838h]
 * 0000000140C72D59: lea     rcx, [r11+r13]
 * 0000000140C72D5D: cmp     r13, rcx
 * 0000000140C72D60: jnb     short loc_140C72D72
 * 0000000140C72D62: mov     edx, 40h ; '@'
 * 0000000140C72D67: prefetchnta byte ptr [rax]
 * 0000000140C72D6A: add     rax, rdx
 * 0000000140C72D6D: cmp     rax, rcx
 * 0000000140C72D70: jb      short loc_140C72D67
 * 0000000140C72D72: mov     ebx, r11d
 * 0000000140C72D75: mov     r8, r14
 * 0000000140C72D78: shr     ebx, 7
 * 0000000140C72D7B: mov     edx, 1
 * 0000000140C72D80: test    ebx, ebx
 * 0000000140C72D82: jz      short loc_140C72DE8
 * 0000000140C72D84: mov     edi, 0FFFFFFFFh
 * 0000000140C72D89: mov     r12, 7010008004002001h
 * 0000000140C72D93: mov     eax, 8
 * 0000000140C72D98: xor     r8, [r10]
 * 0000000140C72D9B: mov     ecx, r9d
 * 0000000140C72D9E: rol     r8, cl
 * 0000000140C72DA1: xor     r8, [r10+8]
 * 0000000140C72DA5: add     r10, 10h
 * 0000000140C72DA9: rol     r8, cl
 * 0000000140C72DAC: sub     rax, rdx
 * 0000000140C72DAF: jnz     short loc_140C72D98
 * 0000000140C72DB1: mov     rcx, r10
 * 0000000140C72DB4: sub     rcx, r13
 * 0000000140C72DB7: xor     rcx, r14
 * 0000000140C72DBA: mov     rax, rcx
 * 0000000140C72DBD: rol     rax, 11h
 * 0000000140C72DC1: xor     rcx, rax
 * 0000000140C72DC4: mov     rax, r12
 * 0000000140C72DC7: mul     rcx
 * 0000000140C72DCA: xor     r9d, eax
 * 0000000140C72DCD: xor     r9d, edx
 * 0000000140C72DD0: mov     edx, 1
 * 0000000140C72DD5: and     r9d, 3Fh
 * 0000000140C72DD9: cmovz   r9d, edx
 * 0000000140C72DDD: add     ebx, edi
 * 0000000140C72DDF: jnz     short loc_140C72D93
 * 0000000140C72DE1: mov     r12d, [rbp+7B0h+var_7F8]
 * 0000000140C72DE5: lea     edi, [rdx+1]
 * 0000000140C72DE8: and     r11d, 7Fh
 * 0000000140C72DEC: cmp     r11d, 8
 * 0000000140C72DF0: jb      short loc_140C72E0F
 * 0000000140C72DF2: mov     eax, r11d
 * 0000000140C72DF5: shr     rax, 3
 * 0000000140C72DF9: xor     r8, [r10]
 * 0000000140C72DFC: mov     ecx, r9d
 * 0000000140C72DFF: rol     r8, cl
 * 0000000140C72E02: add     r10, 8
 * 0000000140C72E06: add     r11d, 0FFFFFFF8h
 * 0000000140C72E0A: sub     rax, rdx
 * 0000000140C72E0D: jnz     short loc_140C72DF9
 * 0000000140C72E0F: xor     r14d, r14d
 * 0000000140C72E12: mov     ebx, 0FFFFFFFFh
 * 0000000140C72E17: test    r11d, r11d
 * 0000000140C72E1A: jz      short loc_140C72E31
 * 0000000140C72E1C: movzx   eax, byte ptr [r10]
 * 0000000140C72E20: mov     ecx, r9d
 * 0000000140C72E23: xor     r8, rax
 * 0000000140C72E26: add     r10, rdx
 * 0000000140C72E29: rol     r8, cl
 * 0000000140C72E2C: add     r11d, ebx
 * 0000000140C72E2F: jnz     short loc_140C72E1C
 * 0000000140C72E31: mov     r9d, 4
 * 0000000140C72E37: mov     [r13+7D8h], r15
 * 0000000140C72E3E: add     [r13+848h], r12d
 * 0000000140C72E45: lea     rcx, [rbp+7B0h+var_E0]
 * 0000000140C72E4C: lea     rdx, [r13+7B8h]
 * 0000000140C72E53: lea     r10d, [r9+1Ch]
 * 0000000140C72E57: lea     r11d, [r9-3]
 * 0000000140C72E5B: mov     rax, [rcx]
 * 0000000140C72E5E: add     r10d, 0FFFFFFF8h
 * 0000000140C72E62: mov     [rdx], rax
 * 0000000140C72E65: add     rcx, 8
 * 0000000140C72E69: add     rdx, 8
 * 0000000140C72E6D: sub     r9, r11
 * 0000000140C72E70: jnz     short loc_140C72E5B
 * 0000000140C72E72: test    r10d, r10d
 * 0000000140C72E75: jz      short loc_140C72E86
 * 0000000140C72E77: mov     al, [rcx]
 * 0000000140C72E79: add     rcx, r11
 * 0000000140C72E7C: mov     [rdx], al
 * 0000000140C72E7E: add     rdx, r11
 * 0000000140C72E81: add     r10d, ebx
 * 0000000140C72E84: jnz     short loc_140C72E77
 * 0000000140C72E86: mov     [r13+7D8h], r8
 * 0000000140C72E8D: mov     r15, r14
 * 0000000140C72E90: mov     r14d, [rsi+9D8h]
 * 0000000140C72E97: bt      r14d, 1Dh
 * 0000000140C72E9C: jb      loc_140C7338E
 * 0000000140C72EA2: test    r14b, r14b
 * 0000000140C72EA5: js      loc_140C73375
 * 0000000140C72EAB: mov     eax, [rsi+97Ch]
 * 0000000140C72EB1: mov     ecx, esi
 * 0000000140C72EB3: mov     r12, [rsi+5B8h]
 * 0000000140C72EBA: mov     r9, rsi
 * 0000000140C72EBD: mov     r13, [rsi+4E0h]
 * 0000000140C72EC4: mov     r10, rsi
 * 0000000140C72EC7: ror     r9, cl
 * 0000000140C72ECA: xor     ecx, ecx
 * 0000000140C72ECC: mov     [rbp+7B0h+var_820], rax
 * 0000000140C72ED0: mov     ebx, ecx
 * 0000000140C72ED2: mov     r11d, ecx
 * 0000000140C72ED5: mov     rcx, [r10]
 * 0000000140C72ED8: sub     rcx, r11
 * 0000000140C72EDB: sub     rcx, rsi
 * 0000000140C72EDE: mov     [r10], rcx
 * 0000000140C72EE1: bt      r14d, 8
 * 0000000140C72EE6: jb      loc_140C73326
 * 0000000140C72EEC: mov     rax, r13
 * 0000000140C72EEF: xor     rax, rcx
 * 0000000140C72EF2: mov     ecx, r12d
 * 0000000140C72EF5: bswap   rax
 * 0000000140C72EF8: xor     rax, r9
 * 0000000140C72EFB: ror     rax, cl
 * 0000000140C72EFE: xor     rax, r12
 * 0000000140C72F01: jmp     loc_140C7332C
 * 0000000140C72F06: mov     ecx, [rsi+97Ch]
 * 0000000140C72F0C: mov     r15d, [rsi+0A74h]
 * 0000000140C72F13: mov     rax, [rsi+7E8h]
 * 0000000140C72F1A: add     r15d, 0FFFFFF38h
 * 0000000140C72F21: mov     [rbp+7B0h+var_7C4], ecx
 * 0000000140C72F24: mov     rcx, [rsi+4E0h]
 * 0000000140C72F2B: mov     [rbp+7B0h+var_788], rcx
 * 0000000140C72F2F: mov     rcx, [rsi+5B8h]
 * 0000000140C72F36: shr     r15d, 3
 * 0000000140C72F3A: mov     [rbp+7B0h+var_7A0], rcx
 * 0000000140C72F3E: mov     [rsp+8B0h+var_858], rax
 * 0000000140C72F43: mov     [rsi+0C4h], r15d
 * 0000000140C72F4A: rdtsc
 * 0000000140C72F4C: shl     rdx, 20h
 * 0000000140C72F50: or      rax, rdx
 * 0000000140C72F53: mov     rcx, rax
 * 0000000140C72F56: mov     rdx, rax
 * 0000000140C72F59: ror     rcx, 3
 * 0000000140C72F5D: mov     rax, r8
 * 0000000140C72F60: xor     rdx, rcx
 * 0000000140C72F63: mul     rdx
 * 0000000140C72F66: mov     rbx, rdx
 * 0000000140C72F69: xor     rbx, rax
 * 0000000140C72F6C: jz      short loc_140C72F4A
 * 0000000140C72F6E: mov     rax, [rsi+7D8h]
 * 0000000140C72F75: lea     rcx, [rsi+7B8h]
 * 0000000140C72F7C: mov     r10d, 20h ; ' '
 * 0000000140C72F82: mov     [rbp+7B0h+var_820], rax
 * 0000000140C72F86: mov     eax, [rsi+848h]
 * 0000000140C72F8C: lea     rdx, [rbp+7B0h+var_C0]
 * 0000000140C72F93: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C72F99: mov     r8d, r10d
 * 0000000140C72F9C: lea     r11d, [r10-1Ch]
 * 0000000140C72FA0: mov     r9d, r11d
 * 0000000140C72FA3: lea     r13d, [r10-1Fh]
 * 0000000140C72FA7: mov     rax, [rcx]
 * 0000000140C72FAA: add     r8d, 0FFFFFFF8h
 * 0000000140C72FAE: mov     [rdx], rax
 * 0000000140C72FB1: add     rcx, 8
 * 0000000140C72FB5: add     rdx, 8
 * 0000000140C72FB9: sub     r9, r13
 * 0000000140C72FBC: jnz     short loc_140C72FA7
 * 0000000140C72FBE: test    r8d, r8d
 * 0000000140C72FC1: jz      short loc_140C72FDB
 * 0000000140C72FC3: mov     edi, 0FFFFFFFFh
 * 0000000140C72FC8: mov     al, [rcx]
 * 0000000140C72FCA: add     rcx, r13
 * 0000000140C72FCD: mov     [rdx], al
 * 0000000140C72FCF: add     rdx, r13
 * 0000000140C72FD2: add     r8d, edi
 * 0000000140C72FD5: jnz     short loc_140C72FC8
 * 0000000140C72FD7: lea     edi, [r8+2]
 * 0000000140C72FDB: mov     [rsi+7D8h], r14
 * 0000000140C72FE2: lea     rax, [rsi+7B8h]
 * 0000000140C72FE9: mov     [rsi+848h], r14d
 * 0000000140C72FF0: mov     ecx, r10d
 * 0000000140C72FF3: mov     rdx, r11
 * 0000000140C72FF6: mov     [rax], r14
 * 0000000140C72FF9: add     ecx, 0FFFFFFF8h
 * 0000000140C72FFC: add     rax, 8
 * 0000000140C73000: sub     rdx, r13
 * 0000000140C73003: jnz     short loc_140C72FF6
 * 0000000140C73005: mov     edx, 0FFFFFFFFh
 * 0000000140C7300A: test    ecx, ecx
 * 0000000140C7300C: jz      short loc_140C73018
 * 0000000140C7300E: mov     [rax], r14b
 * 0000000140C73011: add     rax, r13
 * 0000000140C73014: add     ecx, edx
 * 0000000140C73016: jnz     short loc_140C7300E
 * 0000000140C73018: mov     r10d, [rsi+804h]
 * 0000000140C7301F: mov     r9, rsi
 * 0000000140C73022: add     [rsi+848h], r10d
 * 0000000140C73029: mov     rax, rsi
 * 0000000140C7302C: mov     r11d, [rsi+834h]
 * 0000000140C73033: mov     r13, [rsi+838h]
 * 0000000140C7303A: lea     rcx, [rsi+r10]
 * 0000000140C7303E: cmp     rsi, rcx
 * 0000000140C73041: jnb     short loc_140C73054
 * 0000000140C73043: mov     r8d, 40h ; '@'
 * 0000000140C73049: prefetchnta byte ptr [rax]
 * 0000000140C7304C: add     rax, r8
 * 0000000140C7304F: cmp     rax, rcx
 * 0000000140C73052: jb      short loc_140C73049
 * 0000000140C73054: mov     r14d, r10d
 * 0000000140C73057: mov     r8, r13
 * 0000000140C7305A: shr     r14d, 7
 * 0000000140C7305E: test    r14d, r14d
 * 0000000140C73061: jz      short loc_140C730C9
 * 0000000140C73063: mov     edi, 1
 * 0000000140C73068: mov     r12, 7010008004002001h
 * 0000000140C73072: mov     eax, 8
 * 0000000140C73077: xor     r8, [r9]
 * 0000000140C7307A: mov     ecx, r11d
 * 0000000140C7307D: rol     r8, cl
 * 0000000140C73080: xor     r8, [r9+8]
 * 0000000140C73084: add     r9, 10h
 * 0000000140C73088: rol     r8, cl
 * 0000000140C7308B: sub     rax, rdi
 * 0000000140C7308E: jnz     short loc_140C73077
 * 0000000140C73090: mov     rcx, r9
 * 0000000140C73093: sub     rcx, rsi
 * 0000000140C73096: xor     rcx, r13
 * 0000000140C73099: mov     rax, rcx
 * 0000000140C7309C: rol     rax, 11h
 * 0000000140C730A0: xor     rcx, rax
 * 0000000140C730A3: mov     rax, r12
 * 0000000140C730A6: mul     rcx
 * 0000000140C730A9: xor     r11d, eax
 * 0000000140C730AC: xor     r11d, edx
 * 0000000140C730AF: mov     edx, 0FFFFFFFFh
 * 0000000140C730B4: and     r11d, 3Fh
 * 0000000140C730B8: cmovz   r11d, edi
 * 0000000140C730BC: add     r14d, edx
 * 0000000140C730BF: jnz     short loc_140C73072
 * 0000000140C730C1: mov     r12d, [rbp+7B0h+var_7F8]
 * 0000000140C730C5: lea     edi, [r14+2]
 * 0000000140C730C9: and     r10d, 7Fh
 * 0000000140C730CD: mov     r13d, 1
 * 0000000140C730D3: cmp     r10d, 8
 * 0000000140C730D7: jb      short loc_140C730F6
 * 0000000140C730D9: mov     eax, r10d
 * 0000000140C730DC: shr     rax, 3
 * 0000000140C730E0: xor     r8, [r9]
 * 0000000140C730E3: mov     ecx, r11d
 * 0000000140C730E6: rol     r8, cl
 * 0000000140C730E9: add     r9, 8
 * 0000000140C730ED: add     r10d, 0FFFFFFF8h
 * 0000000140C730F1: sub     rax, r13
 * 0000000140C730F4: jnz     short loc_140C730E0
 * 0000000140C730F6: xor     r14d, r14d
 * 0000000140C730F9: test    r10d, r10d
 * 0000000140C730FC: jz      short loc_140C73113
 * 0000000140C730FE: movzx   eax, byte ptr [r9]
 * 0000000140C73102: mov     ecx, r11d
 * 0000000140C73105: xor     r8, rax
 * 0000000140C73108: add     r9, r13
 * 0000000140C7310B: rol     r8, cl
 * 0000000140C7310E: add     r10d, edx
 * 0000000140C73111: jnz     short loc_140C730FE
 * 0000000140C73113: mov     ecx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C73119: lea     rdx, [rsi+7B8h]
 * 0000000140C73120: mov     rax, [rbp+7B0h+var_820]
 * 0000000140C73124: mov     r9d, 4
 * 0000000140C7312A: mov     [rsi+7D8h], rax
 * 0000000140C73131: add     [rsi+848h], ecx
 * 0000000140C73137: lea     rcx, [rbp+7B0h+var_C0]
 * 0000000140C7313E: lea     r10d, [r9+1Ch]
 * 0000000140C73142: mov     rax, [rcx]
 * 0000000140C73145: add     r10d, 0FFFFFFF8h
 * 0000000140C73149: mov     [rdx], rax
 * 0000000140C7314C: add     rcx, 8
 * 0000000140C73150: add     rdx, 8
 * 0000000140C73154: sub     r9, r13
 * 0000000140C73157: jnz     short loc_140C73142
 * 0000000140C73159: test    r10d, r10d
 * 0000000140C7315C: jz      short loc_140C73176
 * 0000000140C7315E: mov     edi, 0FFFFFFFFh
 * 0000000140C73163: mov     al, [rcx]
 * 0000000140C73165: add     rcx, r13
 * 0000000140C73168: mov     [rdx], al
 * 0000000140C7316A: add     rdx, r13
 * 0000000140C7316D: add     r10d, edi
 * 0000000140C73170: jnz     short loc_140C73163
 * 0000000140C73172: lea     edi, [r10+2]
 * 0000000140C73176: mov     [rsi+7D8h], r8
 * 0000000140C7317D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C73187: jnz     loc_140C732EB
 * 0000000140C7318D: mov     rcx, rsi
 * 0000000140C73190: mov     eax, r14d
 * 0000000140C73193: mov     r11d, 19h
 * 0000000140C73199: xor     [rcx], rbx
 * 0000000140C7319C: add     eax, r13d
 * 0000000140C7319F: lea     rcx, [rcx+8]
 * 0000000140C731A3: cmp     eax, r11d
 * 0000000140C731A6: jb      short loc_140C73199
 * 0000000140C731A8: mov     r8d, r15d
 * 0000000140C731AB: test    r15d, r15d
 * 0000000140C731AE: jz      short loc_140C731E1
 * 0000000140C731B0: mov     edx, r15d
 * 0000000140C731B3: dec     rdx
 * 0000000140C731B6: lea     rdx, [rcx+rdx*8]
 * 0000000140C731BA: xor     [rdx], rbx
 * 0000000140C731BD: lea     rax, [rbp+7B0h+var_7A8]
 * 0000000140C731C1: mov     ecx, r8d
 * 0000000140C731C4: lea     rdx, [rdx-8]
 * 0000000140C731C8: ror     rbx, cl
 * 0000000140C731CB: mov     [rbp+7B0h+var_7A8], rbx
 * 0000000140C731CF: and     ebx, 3Fh
 * 0000000140C731D2: btc     [rax], rbx
 * 0000000140C731D6: sub     r8d, r13d
 * 0000000140C731D9: jz      short loc_140C731E1
 * 0000000140C731DB: mov     rbx, [rbp+7B0h+var_7A8]
 * 0000000140C731DF: jmp     short loc_140C731BA
 * 0000000140C731E1: bt      r12d, 12h
 * 0000000140C731E6: jnb     short loc_140C7322F
 * 0000000140C731E8: rdtsc
 * 0000000140C731EA: shl     rdx, 20h
 * 0000000140C731EE: or      rax, rdx
 * 0000000140C731F1: mov     rcx, rax
 * 0000000140C731F4: mov     rdx, rax
 * 0000000140C731F7: ror     rcx, 3
 * 0000000140C731FB: mov     rax, 7010008004002001h
 * 0000000140C73205: xor     rdx, rcx
 * 0000000140C73208: mul     rdx
 * 0000000140C7320B: mov     rcx, rdx
 * 0000000140C7320E: xor     rcx, rax
 * 0000000140C73211: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C7321B: mul     rcx
 * 0000000140C7321E: shr     rdx, 1
 * 0000000140C73221: lea     rax, [rdx+rdx*2]
 * 0000000140C73225: cmp     rcx, rax
 * 0000000140C73228: jz      short loc_140C73238
 * 0000000140C7322A: jmp     loc_140C732EB
 * 0000000140C7322F: test    r12b, r12b
 * 0000000140C73232: js      loc_140C732EB
 * 0000000140C73238: mov     r13, [rbp+7B0h+var_7A0]
 * 0000000140C7323C: mov     ecx, esi
 * 0000000140C7323E: mov     rdi, [rbp+7B0h+var_788]
 * 0000000140C73242: mov     r9, rsi
 * 0000000140C73245: mov     ebx, r11d
 * 0000000140C73248: ror     r9, cl
 * 0000000140C7324B: mov     r11d, r14d
 * 0000000140C7324E: mov     r10, rsi
 * 0000000140C73251: mov     r14d, [rbp+7B0h+var_7C4]
 * 0000000140C73255: mov     eax, r11d
 * 0000000140C73258: add     rax, rsi
 * 0000000140C7325B: sub     [r10], rax
 * 0000000140C7325E: mov     rcx, [r10]
 * 0000000140C73261: bt      r12d, 8
 * 0000000140C73266: jb      short loc_140C7327F
 * 0000000140C73268: mov     rax, rdi
 * 0000000140C7326B: xor     rax, rcx
 * 0000000140C7326E: mov     ecx, r13d
 * 0000000140C73271: bswap   rax
 * 0000000140C73274: xor     rax, r9
 * 0000000140C73277: ror     rax, cl
 * 0000000140C7327A: xor     rax, r13
 * 0000000140C7327D: jmp     short loc_140C73285
 * 0000000140C7327F: mov     rax, r9
 * 0000000140C73282: xor     rax, rcx
 * 0000000140C73285: mov     rcx, r10
 * 0000000140C73288: mov     edx, 0C8h
 * 0000000140C7328D: sub     edx, r11d
 * 0000000140C73290: mov     [rcx], rax
 * 0000000140C73293: mov     ecx, [r10]
 * 0000000140C73296: mov     r8d, ecx
 * 0000000140C73299: mov     eax, r11d
 * 0000000140C7329C: not     ecx
 * 0000000140C7329E: xor     rdx, rax
 * 0000000140C732A1: xor     r8d, 0F05h
 * 0000000140C732A8: ror     rdx, cl
 * 0000000140C732AB: lea     eax, [r11+1]
 * 0000000140C732AF: xor     r9, rdx
 * 0000000140C732B2: mov     cl, r8b
 * 0000000140C732B5: rol     r9, cl
 * 0000000140C732B8: add     r10, 8
 * 0000000140C732BC: add     r9, rsi
 * 0000000140C732BF: mov     r11d, eax
 * 0000000140C732C2: xor     r9, r14
 * 0000000140C732C5: cmp     eax, 19h
 * 0000000140C732C8: jnz     short loc_140C732D9
 * 0000000140C732CA: bt      r12d, 12h
 * 0000000140C732CF: lea     eax, [r11-19h]
 * 0000000140C732D3: cmovnb  eax, r15d
 * 0000000140C732D7: add     ebx, eax
 * 0000000140C732D9: cmp     r11d, ebx
 * 0000000140C732DC: jb      loc_140C73255
 * 0000000140C732E2: mov     edi, 2
 * 0000000140C732E7: lea     r13d, [rdi-1]
 * 0000000140C732EB: mov     dword ptr [rbp+7B0h+arg_8], r13d
 * 0000000140C732F2: rdtsc
 * 0000000140C732F4: shl     rdx, 20h
 * 0000000140C732F8: mov     r10, 7010008004002001h
 * 0000000140C73302: or      rax, rdx
 * 0000000140C73305: mov     r11d, 1
 * 0000000140C7330B: mov     rcx, rax
 * 0000000140C7330E: mov     rdx, rax
 * 0000000140C73311: ror     rcx, 3
 * 0000000140C73315: mov     rax, r10
 * 0000000140C73318: xor     rdx, rcx
 * 0000000140C7331B: mul     rdx
 * 0000000140C7331E: mov     r15, rax
 * 0000000140C73321: xor     r15, rdx
 * 0000000140C73324: jmp     short loc_140C73398
 * 0000000140C73326: mov     rax, r9
 * 0000000140C73329: xor     rax, rcx
 * 0000000140C7332C: mov     rcx, r10
 * 0000000140C7332F: mov     edx, 0C8h
 * 0000000140C73334: sub     edx, ebx
 * 0000000140C73336: xor     rdx, r11
 * 0000000140C73339: mov     [rcx], rax
 * 0000000140C7333C: mov     eax, 1
 * 0000000140C73341: mov     ecx, [r10]
 * 0000000140C73344: add     ebx, eax
 * 0000000140C73346: mov     r8d, ecx
 * 0000000140C73349: add     r10, 8
 * 0000000140C7334D: not     ecx
 * 0000000140C7334F: xor     r8d, 0F05h
 * 0000000140C73356: ror     rdx, cl
 * 0000000140C73359: add     r11, rax
 * 0000000140C7335C: xor     r9, rdx
 * 0000000140C7335F: mov     cl, r8b
 * 0000000140C73362: rol     r9, cl
 * 0000000140C73365: add     r9, rsi
 * 0000000140C73368: xor     r9, [rbp+7B0h+var_820]
 * 0000000140C7336C: cmp     ebx, 19h
 * 0000000140C7336F: jb      loc_140C72ED5
 * 0000000140C73375: mov     rax, [rsi+280h]
 * 0000000140C7337C: lea     rcx, [rsi+820h]
 * 0000000140C73383: call    KeGuardDispatchICall
 * 0000000140C73388: mov     r11d, 1
 * 0000000140C7338E: mov     r10, 7010008004002001h
 * 0000000140C73398: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C7339F: test    dword ptr [r13+9D8h], 8000000h
 * 0000000140C733AA: mov     r14, [r13+7F8h]
 * 0000000140C733B1: jz      short loc_140C733E4
 * 0000000140C733B3: rdtsc
 * 0000000140C733B5: shl     rdx, 20h
 * 0000000140C733B9: or      rax, rdx
 * 0000000140C733BC: mov     rcx, rax
 * 0000000140C733BF: mov     rdx, rax
 * 0000000140C733C2: ror     rcx, 3
 * 0000000140C733C6: mov     rax, r10
 * 0000000140C733C9: xor     rdx, rcx
 * 0000000140C733CC: mul     rdx
 * 0000000140C733CF: mov     r14, rdx
 * 0000000140C733D2: xor     r14, rax
 * 0000000140C733D5: and     r14, 0Fh
 * 0000000140C733D9: shl     r14, 4
 * 0000000140C733DD: add     r14, [r13+5C8h]
 * 0000000140C733E4: mov     r8d, 28h ; '('
 * 0000000140C733EA: lea     rcx, [r13+918h]
 * 0000000140C733F1: lea     rdx, [rbp+7B0h+var_500]
 * 0000000140C733F8: lea     r9d, [r8-23h]
 * 0000000140C733FC: mov     rax, [rcx]
 * 0000000140C733FF: add     r8d, 0FFFFFFF8h
 * 0000000140C73403: mov     [rdx], rax
 * 0000000140C73406: add     rcx, 8
 * 0000000140C7340A: add     rdx, 8
 * 0000000140C7340E: sub     r9, r11
 * 0000000140C73411: jnz     short loc_140C733FC
 * 0000000140C73413: xor     r12d, r12d
 * 0000000140C73416: test    r8d, r8d
 * 0000000140C73419: jz      short loc_140C73433
 * 0000000140C7341B: mov     edi, 0FFFFFFFFh
 * 0000000140C73420: mov     al, [rcx]
 * 0000000140C73422: add     rcx, r11
 * 0000000140C73425: mov     [rdx], al
 * 0000000140C73427: add     rdx, r11
 * 0000000140C7342A: add     r8d, edi
 * 0000000140C7342D: jnz     short loc_140C73420
 * 0000000140C7342F: lea     edi, [r8+2]
 * 0000000140C73433: mov     eax, [r13+9D8h]
 * 0000000140C7343A: bt      eax, 0Eh
 * 0000000140C7343E: jb      short loc_140C7344D
 * 0000000140C73440: cmp     [r13+918h], r12d
 * 0000000140C73447: jnz     loc_140C73C05
 * 0000000140C7344D: bt      eax, 1Dh
 * 0000000140C73451: jb      loc_140C7418C
 * 0000000140C73457: mov     al, [r13+940h]
 * 0000000140C7345E: mov     r9, r15
 * 0000000140C73461: sub     al, r11b
 * 0000000140C73464: xor     r9, rsi
 * 0000000140C73467: movzx   r11d, al
 * 0000000140C7346B: mov     ebx, 3Fh ; '?'
 * 0000000140C73470: sub     ebx, r11d
 * 0000000140C73473: rdtsc
 * 0000000140C73475: shl     rdx, 20h
 * 0000000140C73479: mov     rdi, 7010008004002001h
 * 0000000140C73483: or      rax, rdx
 * 0000000140C73486: mov     rcx, rax
 * 0000000140C73489: mov     rdx, rax
 * 0000000140C7348C: ror     rcx, 3
 * 0000000140C73490: mov     rax, r10
 * 0000000140C73493: xor     rdx, rcx
 * 0000000140C73496: mul     rdx
 * 0000000140C73499: xor     rax, rdx
 * 0000000140C7349C: xor     edx, edx
 * 0000000140C7349E: div     rbx
 * 0000000140C734A1: lea     r10d, [r11+rdx]
 * 0000000140C734A5: rdtsc
 * 0000000140C734A7: shl     rdx, 20h
 * 0000000140C734AB: or      rax, rdx
 * 0000000140C734AE: mov     rcx, rax
 * 0000000140C734B1: mov     r8, rax
 * 0000000140C734B4: ror     rcx, 3
 * 0000000140C734B8: mov     rax, rdi
 * 0000000140C734BB: xor     r8, rcx
 * 0000000140C734BE: mul     r8
 * 0000000140C734C1: xor     rax, rdx
 * 0000000140C734C4: xor     edx, edx
 * 0000000140C734C6: div     rbx
 * 0000000140C734C9: add     edx, r11d
 * 0000000140C734CC: cmp     edx, r10d
 * 0000000140C734CF: jz      short loc_140C734A5
 * 0000000140C734D1: mov     rbx, [r13+7B0h]
 * 0000000140C734D8: mov     edi, 2
 * 0000000140C734DD: mov     rsi, [r13+7A8h]
 * 0000000140C734E4: mov     eax, r10d
 * 0000000140C734E7: bts     r9, rax
 * 0000000140C734EB: mov     eax, edx
 * 0000000140C734ED: btr     r9, rax
 * 0000000140C734F1: cmp     dword ptr [r13+944h], 3
 * 0000000140C734F9: jnz     loc_140C735FE
 * 0000000140C734FF: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C73504: xor     ecx, ecx
 * 0000000140C73506: test    r12, r12
 * 0000000140C73509: jz      loc_140C735FE
 * 0000000140C7350F: mov     rax, [r13+378h]
 * 0000000140C73516: mov     byte ptr [rbx], 13h
 * 0000000140C73519: mov     byte ptr [rbx+1], 1
 * 0000000140C7351D: mov     [rbx+2], cx
 * 0000000140C73521: mov     [rbx+18h], rax
 * 0000000140C73525: mov     [rbx+20h], r12
 * 0000000140C73529: mov     [rbx+38h], rcx
 * 0000000140C7352D: mov     [rbx+10h], rcx
 * 0000000140C73531: mov     [rbx+28h], r9
 * 0000000140C73535: mov     rax, [r13+368h]
 * 0000000140C7353C: mov     r8, [r12]
 * 0000000140C73540: mov     edx, [r12+10h]
 * 0000000140C73545: mov     rcx, [r12+8]
 * 0000000140C7354A: call    KeGuardDispatchICall
 * 0000000140C7354F: mov     r9, [r12]
 * 0000000140C73553: lea     r11d, [rdi-1]
 * 0000000140C73557: mov     rcx, r12
 * 0000000140C7355A: mov     r10, 7010008004002001h
 * 0000000140C73564: rol     rcx, 11h
 * 0000000140C73568: mov     rax, r10
 * 0000000140C7356B: xor     rcx, r12
 * 0000000140C7356E: mul     rcx
 * 0000000140C73571: lea     ecx, [rdi+2]
 * 0000000140C73574: xor     rdx, rax
 * 0000000140C73577: lea     rax, [r12+18h]
 * 0000000140C7357C: mov     r8, rdx
 * 0000000140C7357F: xor     r12d, r12d
 * 0000000140C73582: xor     [rax], r8
 * 0000000140C73585: lea     rax, [rax-8]
 * 0000000140C73589: rol     r8, cl
 * 0000000140C7358C: sub     ecx, r11d
 * 0000000140C7358F: jnz     short loc_140C73582
 * 0000000140C73591: and     dl, 0Fh
 * 0000000140C73594: cmp     dl, 7
 * 0000000140C73597: jnb     loc_140C73620
 * 0000000140C7359D: mov     rax, r10
 * 0000000140C735A0: mov     rcx, r9
 * 0000000140C735A3: rol     rcx, 11h
 * 0000000140C735A7: mov     r10d, 6
 * 0000000140C735AD: xor     rcx, r9
 * 0000000140C735B0: mul     rcx
 * 0000000140C735B3: xor     rdx, rax
 * 0000000140C735B6: lea     rax, [r9+28h]
 * 0000000140C735BA: add     r8, rdx
 * 0000000140C735BD: movsx   edx, word ptr [r9+8]
 * 0000000140C735C2: xor     [rax], r8
 * 0000000140C735C5: mov     ecx, r10d
 * 0000000140C735C8: rol     r8, cl
 * 0000000140C735CB: lea     rax, [rax-8]
 * 0000000140C735CF: sub     r10d, r11d
 * 0000000140C735D2: jnz     short loc_140C735C2
 * 0000000140C735D4: sub     rdx, 30h ; '0'
 * 0000000140C735D8: shr     rdx, 3
 * 0000000140C735DC: test    edx, edx
 * 0000000140C735DE: jz      short loc_140C73620
 * 0000000140C735E0: movsxd  r10, edx
 * 0000000140C735E3: add     r10, 5
 * 0000000140C735E7: lea     r10, [r9+r10*8]
 * 0000000140C735EB: xor     [r10], r8
 * 0000000140C735EE: mov     ecx, edx
 * 0000000140C735F0: rol     r8, cl
 * 0000000140C735F3: lea     r10, [r10-8]
 * 0000000140C735F7: sub     edx, r11d
 * 0000000140C735FA: jnz     short loc_140C735EB
 * 0000000140C735FC: jmp     short loc_140C73620
 * 0000000140C735FE: mov     byte ptr [rbx], 13h
 * 0000000140C73601: mov     r11d, 1
 * 0000000140C73607: mov     [rbx+1], r11b
 * 0000000140C7360B: mov     [rbx+2], r12w
 * 0000000140C73610: mov     [rbx+18h], r14
 * 0000000140C73614: mov     [rbx+20h], r9
 * 0000000140C73618: mov     [rbx+38h], r12
 * 0000000140C7361C: mov     [rbx+10h], r12
 * 0000000140C73620: mov     [rbx+40h], r15
 * 0000000140C73624: mov     eax, [r13+9D8h]
 * 0000000140C7362B: test    al, al
 * 0000000140C7362D: jns     short loc_140C73683
 * 0000000140C7362F: lea     r8, [r14-48h]
 * 0000000140C73633: mov     [r8+40h], rbx
 * 0000000140C73637: rdtsc
 * 0000000140C73639: shl     rdx, 20h
 * 0000000140C7363D: mov     r14, 7010008004002001h
 * 0000000140C73647: or      rax, rdx
 * 0000000140C7364A: mov     rcx, rax
 * 0000000140C7364D: mov     rdx, rax
 * 0000000140C73650: ror     rcx, 3
 * 0000000140C73654: mov     rax, r14
 * 0000000140C73657: xor     rdx, rcx
 * 0000000140C7365A: mov     ecx, 19h
 * 0000000140C7365F: mul     rdx
 * 0000000140C73662: xor     rdx, rax
 * 0000000140C73665: lea     rax, [r8+48h]
 * 0000000140C73669: xor     [rax], rdx
 * 0000000140C7366C: lea     rax, [rax+8]
 * 0000000140C73670: sub     rcx, r11
 * 0000000140C73673: jnz     short loc_140C73669
 * 0000000140C73675: mov     dword ptr [r8+48h], 48513148h
 * 0000000140C7367D: mov     [r8+20h], rdx
 * 0000000140C73681: jmp     short loc_140C73690
 * 0000000140C73683: mov     r8, rbx
 * 0000000140C73686: mov     r14, 7010008004002001h
 * 0000000140C73690: mov     rdx, [r13+0AE0h]
 * 0000000140C73697: test    rdx, rdx
 * 0000000140C7369A: jz      short loc_140C73713
 * 0000000140C7369C: mov     rdx, [rdx+20h]
 * 0000000140C736A0: mov     eax, 0E1961900h
 * 0000000140C736A5: mov     rcx, rdx
 * 0000000140C736A8: mov     edi, 0Fh
 * 0000000140C736AD: xor     rcx, rax
 * 0000000140C736B0: shr     rcx, 4
 * 0000000140C736B4: xor     rcx, rdx
 * 0000000140C736B7: shr     rcx, 4
 * 0000000140C736BB: xor     rcx, [r13+588h]
 * 0000000140C736C2: mov     r10b, cl
 * 0000000140C736C5: mov     r11, rcx
 * 0000000140C736C8: and     r10b, dil
 * 0000000140C736CB: jnz     short loc_140C736D1
 * 0000000140C736CD: lea     r10d, [rdi-0Eh]
 * 0000000140C736D1: mov     r9, rcx
 * 0000000140C736D4: and     r9, rdi
 * 0000000140C736D7: add     r9, rdx
 * 0000000140C736DA: mov     rdx, [r9]
 * 0000000140C736DD: mov     rax, rdx
 * 0000000140C736E0: xor     rax, 1E0A00h
 * 0000000140C736E6: shr     rax, 4
 * 0000000140C736EA: xor     rax, rdx
 * 0000000140C736ED: shr     rax, 4
 * 0000000140C736F1: xor     rcx, rax
 * 0000000140C736F4: add     r10b, 0FFh
 * 0000000140C736F8: jnz     short loc_140C736D1
 * 0000000140C736FA: mov     edi, 2
 * 0000000140C736FF: bt      r11, 0Ch
 * 0000000140C73704: jnb     short loc_140C73709
 * 0000000140C73706: xor     r8, r11
 * 0000000140C73709: mov     [r9], r8
 * 0000000140C7370C: mov     r8, [r13+0AE0h]
 * 0000000140C73713: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C73718: mov     ecx, [r13+858h]
 * 0000000140C7371F: test    ecx, ecx
 * 0000000140C73721: jz      loc_140C73B6E
 * 0000000140C73727: sub     ecx, 1
 * 0000000140C7372A: jz      loc_140C73B57
 * 0000000140C73730: sub     ecx, 1
 * 0000000140C73733: jz      loc_140C73B44
 * 0000000140C73739: sub     ecx, 1
 * 0000000140C7373C: jz      loc_140C739A4
 * 0000000140C73742: cmp     ecx, 1
 * 0000000140C73745: jz      short loc_140C737C2
 * 0000000140C73747: mov     r9, [r13+9E0h]
 * 0000000140C7374E: mov     [r9+48h], r8
 * 0000000140C73752: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C73757: rdtsc
 * 0000000140C73759: shl     rdx, 20h
 * 0000000140C7375D: or      rax, rdx
 * 0000000140C73760: mov     rcx, rax
 * 0000000140C73763: mov     rdx, rax
 * 0000000140C73766: ror     rcx, 3
 * 0000000140C7376A: mov     rax, r14
 * 0000000140C7376D: xor     rdx, rcx
 * 0000000140C73770: mul     rdx
 * 0000000140C73773: mov     r8, rdx
 * 0000000140C73776: xor     r8, rax
 * 0000000140C73779: mov     rax, 0ABCC77118461CEFDh
 * 0000000140C73783: mul     r8
 * 0000000140C73786: mov     eax, 0Ch
 * 0000000140C7378B: shr     rdx, 1Ah
 * 0000000140C7378F: sub     rax, rdx
 * 0000000140C73792: imul    rcx, rax, 5F5E100h
 * 0000000140C73799: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140C737A3: add     rcx, r8
 * 0000000140C737A6: imul    rcx
 * 0000000140C737A9: add     rdx, rcx
 * 0000000140C737AC: sar     rdx, 17h
 * 0000000140C737B0: mov     rax, rdx
 * 0000000140C737B3: shr     rax, 3Fh
 * 0000000140C737B7: add     rdx, rax
 * 0000000140C737BA: mov     [r9], edx
 * 0000000140C737BD: jmp     loc_140C73C05
 * 0000000140C737C2: mov     r8, [r13+0A28h]
 * 0000000140C737C9: xor     r9d, r9d
 * 0000000140C737CC: mov     rcx, [r13+0A38h]
 * 0000000140C737D3: mov     rdx, rbx
 * 0000000140C737D6: mov     rax, [r13+0A30h]
 * 0000000140C737DD: mov     rsi, [r13+9E0h]
 * 0000000140C737E4: mov     byte ptr [r8], 12h
 * 0000000140C737E8: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140C737ED: mov     [r8+50h], r12b
 * 0000000140C737F1: mov     [r8+8], rsi
 * 0000000140C737F5: mov     [r8+20h], rax
 * 0000000140C737F9: mov     [r8+28h], r12
 * 0000000140C737FD: mov     [r8+30h], rcx
 * 0000000140C73801: mov     [r8+51h], r12b
 * 0000000140C73805: mov     [r8+38h], r12
 * 0000000140C73809: mov     [r8+52h], r12b
 * 0000000140C7380D: xor     r8d, r8d
 * 0000000140C73810: mov     rax, [r13+2C8h]
 * 0000000140C73817: mov     rcx, [r13+0A28h]
 * 0000000140C7381E: call    KeGuardDispatchICall
 * 0000000140C73823: test    al, al
 * 0000000140C73825: jnz     loc_140C73C05
 * 0000000140C7382B: mov     r11d, 1
 * 0000000140C73831: cmp     [r13+918h], r12d
 * 0000000140C73838: jnz     loc_140C7394B
 * 0000000140C7383E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C73848: add     rax, r13
 * 0000000140C7384B: mov     [r13+920h], rax
 * 0000000140C73852: mov     [r13+928h], r12
 * 0000000140C73859: mov     qword ptr [r13+930h], 104h
 * 0000000140C73864: mov     [r13+938h], rsi
 * 0000000140C7386B: mov     [r13+918h], r11d
 * 0000000140C73872: mov     ecx, [r13+9D8h]
 * 0000000140C73879: bt      ecx, 1Dh
 * 0000000140C7387D: jb      loc_140C7394B
 * 0000000140C73883: test    dword ptr [r13+9DCh], 200000h
 * 0000000140C7388E: jz      loc_140C7394B
 * 0000000140C73894: test    r11b, cl
 * 0000000140C73897: jz      loc_140C7394B
 * 0000000140C7389D: mov     ecx, [r13+0A74h]
 * 0000000140C738A4: mov     eax, [r13+804h]
 * 0000000140C738AB: mov     r10, [r13+838h]
 * 0000000140C738B2: sub     eax, ecx
 * 0000000140C738B4: mov     r8, [r13+0A78h]
 * 0000000140C738BB: lea     rdx, [rcx+r13]
 * 0000000140C738BF: mov     ecx, eax
 * 0000000140C738C1: shr     rcx, 3
 * 0000000140C738C5: lea     r9, [rdx+rcx*8]
 * 0000000140C738C9: jmp     short loc_140C738EC
 * 0000000140C738CB: xor     [rdx], r8
 * 0000000140C738CE: mov     rax, [rdx]
 * 0000000140C738D1: movzx   ecx, r8b
 * 0000000140C738D5: xor     rax, r10
 * 0000000140C738D8: and     ecx, 3Fh
 * 0000000140C738DB: ror     r8, cl
 * 0000000140C738DE: add     r8, rax
 * 0000000140C738E1: xor     r8, 0F05h
 * 0000000140C738E8: add     rdx, 8
 * 0000000140C738EC: cmp     rdx, r9
 * 0000000140C738EF: jnz     short loc_140C738CB
 * 0000000140C738F1: btr     dword ptr [r13+9DCh], 15h
 * 0000000140C738FA: cmp     r8, [r13+0A80h]
 * 0000000140C73901: jz      short loc_140C7394B
 * 0000000140C73903: mov     ecx, [r13+804h]
 * 0000000140C7390A: mov     rax, [r13+588h]
 * 0000000140C73911: mov     [rax], r13
 * 0000000140C73914: mov     [rax+10h], ecx
 * 0000000140C73917: mov     rcx, [r13+0A80h]
 * 0000000140C7391E: cmp     [r13+918h], r12d
 * 0000000140C73925: jnz     short loc_140C73935
 * 0000000140C73927: mov     rax, [r13+588h]
 * 0000000140C7392E: xor     rcx, r8
 * 0000000140C73931: mov     [rax+18h], rcx
 * 0000000140C73935: xor     edx, edx
 * 0000000140C73937: mov     r9d, 100h
 * 0000000140C7393D: mov     rcx, r13
 * 0000000140C73940: call    sub_140C7903C
 * 0000000140C73945: mov     r11d, 1
 * 0000000140C7394B: mov     edi, 5
 * 0000000140C73950: lea     rcx, [r13+918h]
 * 0000000140C73957: lea     rdx, [rbp+7B0h+var_500]
 * 0000000140C7395E: lea     r8d, [rdi+23h]
 * 0000000140C73962: mov     rax, [rcx]
 * 0000000140C73965: add     r8d, 0FFFFFFF8h
 * 0000000140C73969: mov     [rdx], rax
 * 0000000140C7396C: add     rcx, 8
 * 0000000140C73970: add     rdx, 8
 * 0000000140C73974: sub     rdi, r11
 * 0000000140C73977: jnz     short loc_140C73962
 * 0000000140C73979: mov     edi, 2
 * 0000000140C7397E: test    r8d, r8d
 * 0000000140C73981: jz      loc_140C73C05
 * 0000000140C73987: mov     edi, 0FFFFFFFFh
 * 0000000140C7398C: mov     al, [rcx]
 * 0000000140C7398E: add     rcx, r11
 * 0000000140C73991: mov     [rdx], al
 * 0000000140C73993: add     rdx, r11
 * 0000000140C73996: add     r8d, edi
 * 0000000140C73999: jnz     short loc_140C7398C
 * 0000000140C7399B: lea     edi, [r8+2]
 * 0000000140C7399F: jmp     loc_140C73C05
 * 0000000140C739A4: mov     rsi, [r13+9E0h]
 * 0000000140C739AB: mov     rax, [r13+6A8h]
 * 0000000140C739B2: mov     rcx, [rsi+rax]
 * 0000000140C739B6: test    rcx, rcx
 * 0000000140C739B9: jz      loc_140C73B2F
 * 0000000140C739BF: mov     r11d, 1
 * 0000000140C739C5: cmp     [r13+918h], r12d
 * 0000000140C739CC: jnz     loc_140C73ADF
 * 0000000140C739D2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C739DC: add     rax, r13
 * 0000000140C739DF: mov     [r13+920h], rax
 * 0000000140C739E6: mov     [r13+928h], r12
 * 0000000140C739ED: mov     qword ptr [r13+930h], 104h
 * 0000000140C739F8: mov     [r13+938h], rcx
 * 0000000140C739FF: mov     [r13+918h], r11d
 * 0000000140C73A06: mov     ecx, [r13+9D8h]
 * 0000000140C73A0D: bt      ecx, 1Dh
 * 0000000140C73A11: jb      loc_140C73ADF
 * 0000000140C73A17: test    dword ptr [r13+9DCh], 200000h
 * 0000000140C73A22: jz      loc_140C73ADF
 * 0000000140C73A28: test    r11b, cl
 * 0000000140C73A2B: jz      loc_140C73ADF
 * 0000000140C73A31: mov     ecx, [r13+0A74h]
 * 0000000140C73A38: mov     eax, [r13+804h]
 * 0000000140C73A3F: mov     r10, [r13+838h]
 * 0000000140C73A46: sub     eax, ecx
 * 0000000140C73A48: mov     r8, [r13+0A78h]
 * 0000000140C73A4F: lea     rdx, [rcx+r13]
 * 0000000140C73A53: mov     ecx, eax
 * 0000000140C73A55: shr     rcx, 3
 * 0000000140C73A59: lea     r9, [rdx+rcx*8]
 * 0000000140C73A5D: jmp     short loc_140C73A80
 * 0000000140C73A5F: xor     [rdx], r8
 * 0000000140C73A62: mov     rax, [rdx]
 * 0000000140C73A65: movzx   ecx, r8b
 * 0000000140C73A69: xor     rax, r10
 * 0000000140C73A6C: and     ecx, 3Fh
 * 0000000140C73A6F: ror     r8, cl
 * 0000000140C73A72: add     r8, rax
 * 0000000140C73A75: xor     r8, 0F05h
 * 0000000140C73A7C: add     rdx, 8
 * 0000000140C73A80: cmp     rdx, r9
 * 0000000140C73A83: jnz     short loc_140C73A5F
 * 0000000140C73A85: btr     dword ptr [r13+9DCh], 15h
 * 0000000140C73A8E: cmp     r8, [r13+0A80h]
 * 0000000140C73A95: jz      short loc_140C73ADF
 * 0000000140C73A97: mov     ecx, [r13+804h]
 * 0000000140C73A9E: mov     rax, [r13+588h]
 * 0000000140C73AA5: mov     [rax], r13
 * 0000000140C73AA8: mov     [rax+10h], ecx
 * 0000000140C73AAB: mov     rcx, [r13+0A80h]
 * 0000000140C73AB2: cmp     [r13+918h], r12d
 * 0000000140C73AB9: jnz     short loc_140C73AC9
 * 0000000140C73ABB: mov     rax, [r13+588h]
 * 0000000140C73AC2: xor     rcx, r8
 * 0000000140C73AC5: mov     [rax+18h], rcx
 * 0000000140C73AC9: xor     edx, edx
 * 0000000140C73ACB: mov     r9d, 100h
 * 0000000140C73AD1: mov     rcx, r13
 * 0000000140C73AD4: call    sub_140C7903C
 * 0000000140C73AD9: mov     r11d, 1
 * 0000000140C73ADF: mov     edi, 5
 * 0000000140C73AE4: lea     rcx, [r13+918h]
 * 0000000140C73AEB: lea     rdx, [rbp+7B0h+var_500]
 * 0000000140C73AF2: lea     r8d, [rdi+23h]
 * 0000000140C73AF6: mov     rax, [rcx]
 * 0000000140C73AF9: add     r8d, 0FFFFFFF8h
 * 0000000140C73AFD: mov     [rdx], rax
 * 0000000140C73B00: add     rcx, 8
 * 0000000140C73B04: add     rdx, 8
 * 0000000140C73B08: sub     rdi, r11
 * 0000000140C73B0B: jnz     short loc_140C73AF6
 * 0000000140C73B0D: mov     edi, 2
 * 0000000140C73B12: test    r8d, r8d
 * 0000000140C73B15: jz      short loc_140C73B2F
 * 0000000140C73B17: mov     edi, 0FFFFFFFFh
 * 0000000140C73B1C: mov     al, [rcx]
 * 0000000140C73B1E: add     rcx, r11
 * 0000000140C73B21: mov     [rdx], al
 * 0000000140C73B23: add     rdx, r11
 * 0000000140C73B26: add     r8d, edi
 * 0000000140C73B29: jnz     short loc_140C73B1C
 * 0000000140C73B2B: lea     edi, [r8+2]
 * 0000000140C73B2F: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C73B34: mov     rax, [r13+6A8h]
 * 0000000140C73B3B: mov     [rsi+rax], rbx
 * 0000000140C73B3F: jmp     loc_140C73C05
 * 0000000140C73B44: mov     rax, [r13+7E0h]
 * 0000000140C73B4B: mov     [rax+80h], r8
 * 0000000140C73B52: jmp     loc_140C73C05
 * 0000000140C73B57: mov     rcx, [r13+7E0h]
 * 0000000140C73B5E: mov     rax, [r13+638h]
 * 0000000140C73B65: mov     [rcx+rax], r8
 * 0000000140C73B69: jmp     loc_140C73C05
 * 0000000140C73B6E: rdtsc
 * 0000000140C73B70: shl     rdx, 20h
 * 0000000140C73B74: or      rax, rdx
 * 0000000140C73B77: mov     rcx, rax
 * 0000000140C73B7A: mov     rdx, rax
 * 0000000140C73B7D: ror     rcx, 3
 * 0000000140C73B81: mov     rax, r14
 * 0000000140C73B84: xor     rdx, rcx
 * 0000000140C73B87: mul     rdx
 * 0000000140C73B8A: mov     rcx, rdx
 * 0000000140C73B8D: xor     rcx, rax
 * 0000000140C73B90: mov     rax, 0ABCC77118461CEFDh
 * 0000000140C73B9A: mul     rcx
 * 0000000140C73B9D: shr     rdx, 1Ah
 * 0000000140C73BA1: sub     rdx, 0Ch
 * 0000000140C73BA5: imul    r10, rdx, 5F5E100h
 * 0000000140C73BAC: sub     r10, rcx
 * 0000000140C73BAF: rdtsc
 * 0000000140C73BB1: shl     rdx, 20h
 * 0000000140C73BB5: or      rax, rdx
 * 0000000140C73BB8: mov     [rsp+8B0h+BugCheckParameter4], r8
 * 0000000140C73BBD: mov     rcx, rax
 * 0000000140C73BC0: mov     rdx, rax
 * 0000000140C73BC3: ror     rcx, 3
 * 0000000140C73BC7: mov     rax, r14
 * 0000000140C73BCA: xor     rdx, rcx
 * 0000000140C73BCD: xor     r8d, r8d
 * 0000000140C73BD0: mul     rdx
 * 0000000140C73BD3: mov     rcx, rsi
 * 0000000140C73BD6: mov     r9, rdx
 * 0000000140C73BD9: xor     r9, rax
 * 0000000140C73BDC: mov     rax, 346DC5D63886594Bh
 * 0000000140C73BE6: mul     r9
 * 0000000140C73BE9: shr     rdx, 0Bh
 * 0000000140C73BED: imul    eax, edx, 2710h
 * 0000000140C73BF3: mov     rdx, r10
 * 0000000140C73BF6: sub     r9d, eax
 * 0000000140C73BF9: mov     rax, [r13+1E8h]
 * 0000000140C73C00: call    KeGuardDispatchICall
 * 0000000140C73C05: cmp     [rbp+7B0h+var_500], r12d
 * 0000000140C73C0C: jz      loc_140C7418C
 * 0000000140C73C12: mov     r9d, [r13+9D8h]
 * 0000000140C73C19: bt      r9d, 0Eh
 * 0000000140C73C1E: jb      loc_140C7418C
 * 0000000140C73C24: mov     rbx, [rbp+7B0h+var_4E8]
 * 0000000140C73C2B: mov     rsi, [rbp+7B0h+var_4E0]
 * 0000000140C73C32: mov     r14, [rbp+7B0h+var_4F0]
 * 0000000140C73C39: mov     r15, [rbp+7B0h+var_4F8]
 * 0000000140C73C40: mov     [rbp+7B0h+var_768], rbx
 * 0000000140C73C44: mov     [rbp+7B0h+var_7D0], rsi
 * 0000000140C73C48: mov     [rbp+7B0h+var_7E8], r14
 * 0000000140C73C4C: mov     [rbp+7B0h+var_730], r15
 * 0000000140C73C53: mov     rax, cr8
 * 0000000140C73C57: cmp     al, dil
 * 0000000140C73C5A: jnb     short loc_140C73C6B
 * 0000000140C73C5C: mov     rax, cr8
 * 0000000140C73C60: mov     cr8, rdi
 * 0000000140C73C64: mov     r9d, [r13+9D8h]
 * 0000000140C73C6B: mov     r8, gs:20h
 * 0000000140C73C74: mov     rax, [r13+640h]
 * 0000000140C73C7B: mov     rcx, gs:20h
 * 0000000140C73C84: mov     r10, [r8+rax]
 * 0000000140C73C88: mov     rax, [r13+648h]
 * 0000000140C73C8F: mov     [rbp+7B0h+var_828], r10
 * 0000000140C73C93: mov     rdx, [rax+r8]
 * 0000000140C73C97: mov     rax, [r13+658h]
 * 0000000140C73C9E: add     rdx, [r13+788h]
 * 0000000140C73CA5: mov     r11, [rcx+rax]
 * 0000000140C73CA9: lea     rax, [rbp+7B0h+var_6F8]
 * 0000000140C73CB0: mov     [rsp+8B0h+var_840], r11
 * 0000000140C73CB5: cmp     rax, r10
 * 0000000140C73CB8: ja      short loc_140C73CD3
 * 0000000140C73CBA: mov     eax, [r13+5FCh]
 * 0000000140C73CC1: mov     rcx, r10
 * 0000000140C73CC4: sub     rcx, rax
 * 0000000140C73CC7: lea     rax, [rbp+7B0h+var_6F8]
 * 0000000140C73CCE: cmp     rax, rcx
 * 0000000140C73CD1: jnb     short loc_140C73D1A
 * 0000000140C73CD3: mov     rax, [r13+650h]
 * 0000000140C73CDA: cmp     [r8+rax], r12b
 * 0000000140C73CDE: jz      short loc_140C73D0B
 * 0000000140C73CE0: lea     rax, [rbp+7B0h+var_6F8]
 * 0000000140C73CE7: cmp     rax, rdx
 * 0000000140C73CEA: ja      short loc_140C73D0B
 * 0000000140C73CEC: mov     eax, [r13+5F8h]
 * 0000000140C73CF3: mov     rcx, rdx
 * 0000000140C73CF6: sub     rcx, rax
 * 0000000140C73CF9: lea     rax, [rbp+7B0h+var_6F8]
 * 0000000140C73D00: cmp     rax, rcx
 * 0000000140C73D03: jb      short loc_140C73D0B
 * 0000000140C73D05: mov     [rbp+7B0h+var_828], rdx
 * 0000000140C73D09: jmp     short loc_140C73D1A
 * 0000000140C73D0B: mov     rax, [r13+688h]
 * 0000000140C73D12: mov     rax, [r11+rax]
 * 0000000140C73D16: mov     [rbp+7B0h+var_828], rax
 * 0000000140C73D1A: bt      r9d, 1Ah
 * 0000000140C73D1F: jb      loc_140C743AE
 * 0000000140C73D25: test    dword ptr [r13+9DCh], 400000h
 * 0000000140C73D30: mov     [rbp+7B0h+var_728], r12
 * 0000000140C73D37: jnz     short loc_140C73D4E
 * 0000000140C73D39: mov     rcx, cr0
 * 0000000140C73D3C: mov     rax, rcx
 * 0000000140C73D3F: mov     [rbp+7B0h+var_728], rcx
 * 0000000140C73D46: btr     rax, 10h
 * 0000000140C73D4B: mov     cr0, rax
 * 0000000140C73D4E: mov     esi, [r13+0AE8h]
 * 0000000140C73D55: lea     r11, [r13+0AF0h]
 * 0000000140C73D5C: shl     rsi, 4
 * 0000000140C73D60: mov     edx, r12d
 * 0000000140C73D63: add     rsi, r11
 * 0000000140C73D66: mov     [rbp+7B0h+var_788], r11
 * 0000000140C73D6A: mov     r9, rsi
 * 0000000140C73D6D: mov     [rbp+7B0h+var_7A0], rsi
 * 0000000140C73D71: mov     [rsp+8B0h+var_858], rsi
 * 0000000140C73D76: cmp     [r13+0AECh], r12d
 * 0000000140C73D7D: jbe     short loc_140C73DCF
 * 0000000140C73D7F: mov     edi, 1
 * 0000000140C73D84: lea     ebx, [rdi+0Fh]
 * 0000000140C73D87: mov     rcx, [r9]
 * 0000000140C73D8A: mov     rax, [r9+8]
 * 0000000140C73D8E: mov     [rcx], rax
 * 0000000140C73D91: mov     rcx, cr4
 * 0000000140C73D94: test    rcx, 20080h
 * 0000000140C73D9B: jz      short loc_140C73DAD
 * 0000000140C73D9D: mov     rax, rcx
 * 0000000140C73DA0: btc     rax, 7
 * 0000000140C73DA5: mov     cr4, rax
 * 0000000140C73DA8: mov     cr4, rcx
 * 0000000140C73DAB: jmp     short loc_140C73DB3
 * 0000000140C73DAD: mov     rax, cr3
 * 0000000140C73DB0: mov     cr3, rax
 * 0000000140C73DB3: add     r9, rbx
 * 0000000140C73DB6: add     edx, edi
 * 0000000140C73DB8: cmp     edx, [r13+0AECh]
 * 0000000140C73DBF: jb      short loc_140C73D87
 * 0000000140C73DC1: mov     rbx, [rbp+7B0h+var_768]
 * 0000000140C73DC5: mov     edi, 2
 * 0000000140C73DCA: mov     [rsp+8B0h+var_858], r9
 * 0000000140C73DCF: mov     rcx, 7FFFFFFFF8h
 * 0000000140C73DD9: cmp     r11, rsi
 * 0000000140C73DDC: jnb     loc_140C7404A
 * 0000000140C73DE2: test    dword ptr [r13+9DCh], 400000h
 * 0000000140C73DED: mov     r14d, [r11+8]
 * 0000000140C73DF1: mov     r8, [r11]
 * 0000000140C73DF4: mov     dword ptr [rbp+7B0h+arg_8], r14d
 * 0000000140C73DFB: jnz     short loc_140C73E51
 * 0000000140C73DFD: mov     edx, r14d
 * 0000000140C73E00: mov     rcx, r9
 * 0000000140C73E03: mov     ebx, 1
 * 0000000140C73E08: cmp     r14d, 8
 * 0000000140C73E0C: jb      short loc_140C73E2B
 * 0000000140C73E0E: mov     r10d, r14d
 * 0000000140C73E11: shr     r10, 3
 * 0000000140C73E15: mov     rax, [rcx]
 * 0000000140C73E18: add     edx, 0FFFFFFF8h
 * 0000000140C73E1B: mov     [r8], rax
 * 0000000140C73E1E: add     rcx, 8
 * 0000000140C73E22: add     r8, 8
 * 0000000140C73E26: sub     r10, rbx
 * 0000000140C73E29: jnz     short loc_140C73E15
 * 0000000140C73E2B: test    edx, edx
 * 0000000140C73E2D: jz      loc_140C74010
 * 0000000140C73E33: sub     r8, rcx
 * 0000000140C73E36: mov     esi, 0FFFFFFFFh
 * 0000000140C73E3B: mov     al, [rcx]
 * 0000000140C73E3D: mov     [rcx+r8], al
 * 0000000140C73E41: add     rcx, rbx
 * 0000000140C73E44: add     edx, esi
 * 0000000140C73E46: jnz     short loc_140C73E3B
 * 0000000140C73E48: mov     rsi, [rbp+7B0h+var_7A0]
 * 0000000140C73E4C: jmp     loc_140C74010
 * 0000000140C73E51: mov     rcx, r8
 * 0000000140C73E54: mov     [rbp+7B0h+var_780], r9
 * 0000000140C73E58: and     ecx, 0FFFh
 * 0000000140C73E5E: lea     rdx, [r14+0FFFh]
 * 0000000140C73E65: add     rdx, rcx
 * 0000000140C73E68: mov     r13d, r14d
 * 0000000140C73E6B: shr     rdx, 0Ch
 * 0000000140C73E6F: test    edx, edx
 * 0000000140C73E71: jz      loc_140C74009
 * 0000000140C73E77: mov     rdi, [rbp+7B0h+arg_0]
 * 0000000140C73E7E: mov     r14d, 4
 * 0000000140C73E84: mov     eax, edx
 * 0000000140C73E86: mov     esi, 20080h
 * 0000000140C73E8B: mov     [rbp+7B0h+var_7A8], rax
 * 0000000140C73E8F: mov     r9, 7FFFFFFFF8h
 * 0000000140C73E99: lea     r15d, [r14-3]
 * 0000000140C73E9D: mov     rbx, [rdi+5D8h]
 * 0000000140C73EA4: lea     rcx, [rbp+7B0h+var_1C8]
 * 0000000140C73EAB: mov     rax, r8
 * 0000000140C73EAE: mov     rdx, r14
 * 0000000140C73EB1: shr     rax, 9
 * 0000000140C73EB5: mov     r10d, r14d
 * 0000000140C73EB8: and     rax, r9
 * 0000000140C73EBB: add     rax, rbx
 * 0000000140C73EBE: mov     [rcx], rax
 * 0000000140C73EC1: lea     rcx, [rcx+8]
 * 0000000140C73EC5: shr     rax, 9
 * 0000000140C73EC9: and     rax, r9
 * 0000000140C73ECC: add     rax, rbx
 * 0000000140C73ECF: sub     rdx, r15
 * 0000000140C73ED2: jnz     short loc_140C73EBE
 * 0000000140C73ED4: mov     eax, 0FFFFFFFFh
 * 0000000140C73ED9: add     r10d, eax
 * 0000000140C73EDC: jz      short loc_140C73EF0
 * 0000000140C73EDE: mov     rax, [rbp+r10*8+7B0h+var_1C8]
 * 0000000140C73EE6: mov     ecx, [rax]
 * 0000000140C73EE8: shr     cl, 7
 * 0000000140C73EEB: test    r15b, cl
 * 0000000140C73EEE: jz      short loc_140C73ED4
 * 0000000140C73EF0: mov     r12, [rbp+r10*8+7B0h+var_1C8]
 * 0000000140C73EF8: mov     [rbp+7B0h+var_820], r12
 * 0000000140C73EFC: mov     rax, [r12]
 * 0000000140C73F00: or      rax, 62h
 * 0000000140C73F04: mov     [r12], rax
 * 0000000140C73F08: mov     rdx, cr4
 * 0000000140C73F0B: test    rsi, rdx
 * 0000000140C73F0E: jz      short loc_140C73F20
 * 0000000140C73F10: mov     rcx, rdx
 * 0000000140C73F13: btc     rcx, 7
 * 0000000140C73F18: mov     cr4, rcx
 * 0000000140C73F1B: mov     cr4, rdx
 * 0000000140C73F1E: jmp     short loc_140C73F26
 * 0000000140C73F20: mov     rcx, cr3
 * 0000000140C73F23: mov     cr3, rcx
 * 0000000140C73F26: mov     edx, 1000h
 * 0000000140C73F2B: mov     ecx, r8d
 * 0000000140C73F2E: and     ecx, 0FFFh
 * 0000000140C73F34: mov     r10d, r13d
 * 0000000140C73F37: sub     edx, ecx
 * 0000000140C73F39: mov     rbx, r8
 * 0000000140C73F3C: cmp     edx, r13d
 * 0000000140C73F3F: cmovb   r10d, edx
 * 0000000140C73F43: mov     rdx, [rbp+7B0h+var_780]
 * 0000000140C73F47: mov     r15d, r10d
 * 0000000140C73F4A: cmp     r10d, 8
 * 0000000140C73F4E: jb      short loc_140C73F82
 * 0000000140C73F50: mov     r12d, r10d
 * 0000000140C73F53: mov     r9d, 1
 * 0000000140C73F59: shr     r12, 3
 * 0000000140C73F5D: mov     rcx, [rdx]
 * 0000000140C73F60: add     r15d, 0FFFFFFF8h
 * 0000000140C73F64: mov     [rbx], rcx
 * 0000000140C73F67: add     rdx, 8
 * 0000000140C73F6B: add     rbx, 8
 * 0000000140C73F6F: sub     r12, r9
 * 0000000140C73F72: jnz     short loc_140C73F5D
 * 0000000140C73F74: mov     r12, [rbp+7B0h+var_820]
 * 0000000140C73F78: mov     r9, 7FFFFFFFF8h
 * 0000000140C73F82: test    r15d, r15d
 * 0000000140C73F85: jz      short loc_140C73FB3
 * 0000000140C73F87: sub     rbx, rdx
 * 0000000140C73F8A: mov     edi, 0FFFFFFFFh
 * 0000000140C73F8F: mov     r9d, 1
 * 0000000140C73F95: mov     cl, [rdx]
 * 0000000140C73F97: mov     [rbx+rdx], cl
 * 0000000140C73F9A: add     rdx, r9
 * 0000000140C73F9D: add     r15d, edi
 * 0000000140C73FA0: jnz     short loc_140C73F95
 * 0000000140C73FA2: mov     rdi, [rbp+7B0h+arg_0]
 * 0000000140C73FA9: mov     r9, 7FFFFFFFF8h
 * 0000000140C73FB3: mov     ecx, r10d
 * 0000000140C73FB6: add     [rbp+7B0h+var_780], rcx
 * 0000000140C73FBA: add     r8, rcx
 * 0000000140C73FBD: sub     r13d, r10d
 * 0000000140C73FC0: mov     [r12], rax
 * 0000000140C73FC4: mov     rcx, cr4
 * 0000000140C73FC7: test    rsi, rcx
 * 0000000140C73FCA: jz      short loc_140C73FDC
 * 0000000140C73FCC: mov     rax, rcx
 * 0000000140C73FCF: btc     rax, 7
 * 0000000140C73FD4: mov     cr4, rax
 * 0000000140C73FD7: mov     cr4, rcx
 * 0000000140C73FDA: jmp     short loc_140C73FE2
 * 0000000140C73FDC: mov     rax, cr3
 * 0000000140C73FDF: mov     cr3, rax
 * 0000000140C73FE2: mov     r15d, 1
 * 0000000140C73FE8: sub     [rbp+7B0h+var_7A8], r15
 * 0000000140C73FEC: jnz     loc_140C73E9D
 * 0000000140C73FF2: mov     r9, [rsp+8B0h+var_858]
 * 0000000140C73FF7: xor     r12d, r12d
 * 0000000140C73FFA: mov     r11, [rbp+7B0h+var_788]
 * 0000000140C73FFE: mov     rsi, [rbp+7B0h+var_7A0]
 * 0000000140C74002: mov     r14d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C74009: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C74010: add     r11, 10h
 * 0000000140C74014: mov     eax, r14d
 * 0000000140C74017: add     r9, rax
 * 0000000140C7401A: mov     [rbp+7B0h+var_788], r11
 * 0000000140C7401E: mov     [rsp+8B0h+var_858], r9
 * 0000000140C74023: cmp     r11, rsi
 * 0000000140C74026: jb      loc_140C73DE2
 * 0000000140C7402C: mov     rbx, [rbp+7B0h+var_768]
 * 0000000140C74030: mov     edi, 2
 * 0000000140C74035: mov     r14, [rbp+7B0h+var_7E8]
 * 0000000140C74039: mov     rcx, 7FFFFFFFF8h
 * 0000000140C74043: mov     r15, [rbp+7B0h+var_730]
 * 0000000140C7404A: test    dword ptr [r13+9DCh], 400000h
 * 0000000140C74055: jnz     short loc_140C74070
 * 0000000140C74057: mov     rax, [r13+228h]
 * 0000000140C7405E: mov     byte ptr [rax], 0C3h
 * 0000000140C74061: mov     rax, [rbp+7B0h+var_728]
 * 0000000140C74068: mov     cr0, rax
 * 0000000140C7406B: jmp     loc_140C743A5
 * 0000000140C74070: mov     [rbp+7B0h+var_7E0], 0C3h
 * 0000000140C74074: lea     r8, [rbp+7B0h+var_7E0]
 * 0000000140C74078: mov     r9, [r13+228h]
 * 0000000140C7407F: mov     r11d, 4
 * 0000000140C74085: mov     rdx, [r13+5D8h]
 * 0000000140C7408C: mov     rax, r9
 * 0000000140C7408F: shr     rax, 9
 * 0000000140C74093: mov     r10d, r11d
 * 0000000140C74096: and     rax, rcx
 * 0000000140C74099: mov     rsi, 7FFFFFFFF8h
 * 0000000140C740A3: add     rax, rdx
 * 0000000140C740A6: lea     rcx, [rbp+7B0h+var_1A8]
 * 0000000140C740AD: mov     [rcx], rax
 * 0000000140C740B0: lea     rcx, [rcx+8]
 * 0000000140C740B4: shr     rax, 9
 * 0000000140C740B8: and     rax, rsi
 * 0000000140C740BB: add     rax, rdx
 * 0000000140C740BE: sub     r11, 1
 * 0000000140C740C2: jnz     short loc_140C740AD
 * 0000000140C740C4: mov     eax, 0FFFFFFFFh
 * 0000000140C740C9: add     r10d, eax
 * 0000000140C740CC: jz      short loc_140C740E4
 * 0000000140C740CE: mov     rax, [rbp+r10*8+7B0h+var_1A8]
 * 0000000140C740D6: mov     ecx, [rax]
 * 0000000140C740D8: mov     eax, 1
 * 0000000140C740DD: shr     cl, 7
 * 0000000140C740E0: test    al, cl
 * 0000000140C740E2: jz      short loc_140C740C4
 * 0000000140C740E4: mov     r11, [rbp+r10*8+7B0h+var_1A8]
 * 0000000140C740EC: mov     rax, [r11]
 * 0000000140C740EF: or      rax, 62h
 * 0000000140C740F3: mov     [r11], rax
 * 0000000140C740F6: mov     rdx, cr4
 * 0000000140C740F9: mov     esi, 20080h
 * 0000000140C740FE: test    rsi, rdx
 * 0000000140C74101: jz      short loc_140C74113
 * 0000000140C74103: mov     rcx, rdx
 * 0000000140C74106: btc     rcx, 7
 * 0000000140C7410B: mov     cr4, rcx
 * 0000000140C7410E: mov     cr4, rdx
 * 0000000140C74111: jmp     short loc_140C74119
 * 0000000140C74113: mov     rcx, cr3
 * 0000000140C74116: mov     cr3, rcx
 * 0000000140C74119: mov     ecx, r9d
 * 0000000140C7411C: mov     r10d, 1000h
 * 0000000140C74122: and     ecx, 0FFFh
 * 0000000140C74128: sub     r10d, ecx
 * 0000000140C7412B: mov     ecx, 1
 * 0000000140C74130: cmp     r10d, ecx
 * 0000000140C74133: mov     edx, ecx
 * 0000000140C74135: cmovb   edx, r10d
 * 0000000140C74139: cmp     edx, 8
 * 0000000140C7413C: jb      short loc_140C74161
 * 0000000140C7413E: mov     r10d, edx
 * 0000000140C74141: mov     edi, ecx
 * 0000000140C74143: shr     r10, 3
 * 0000000140C74147: mov     rcx, [r8]
 * 0000000140C7414A: add     edx, 0FFFFFFF8h
 * 0000000140C7414D: mov     [r9], rcx
 * 0000000140C74150: add     r8, 8
 * 0000000140C74154: add     r9, 8
 * 0000000140C74158: sub     r10, rdi
 * 0000000140C7415B: jnz     short loc_140C74147
 * 0000000140C7415D: lea     edi, [r10+2]
 * 0000000140C74161: test    edx, edx
 * 0000000140C74163: jz      loc_140C74384
 * 0000000140C74169: sub     r9, r8
 * 0000000140C7416C: mov     edi, 1
 * 0000000140C74171: mov     r15d, 0FFFFFFFFh
 * 0000000140C74177: mov     cl, [r8]
 * 0000000140C7417A: mov     [r9+r8], cl
 * 0000000140C7417E: add     r8, rdi
 * 0000000140C74181: add     edx, r15d
 * 0000000140C74184: jz      loc_140C74378
 * 0000000140C7418A: jmp     short loc_140C74177
 * 0000000140C7418C: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140C74197: jnz     short loc_140C741E8
 * 0000000140C74199: cmp     dword ptr [rbp+7B0h+arg_8], r12d
 * 0000000140C741A0: jz      short loc_140C741E8
 * 0000000140C741A2: mov     ecx, [r13+944h]
 * 0000000140C741A9: sub     ecx, 1
 * 0000000140C741AC: jz      short loc_140C741C2
 * 0000000140C741AE: cmp     ecx, edi
 * 0000000140C741B0: jnz     short loc_140C741E8
 * 0000000140C741B2: mov     rax, [r13+370h]
 * 0000000140C741B9: mov     [r13+108h], rax
 * 0000000140C741C0: jmp     short loc_140C741E8
 * 0000000140C741C2: add     qword ptr [r13+7E8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140C741CA: mov     rcx, [r13+7E8h]
 * 0000000140C741D1: mov     edx, [rcx]
 * 0000000140C741D3: mov     [r13+7F0h], edx
 * 0000000140C741DA: mov     rcx, [r13+238h]
 * 0000000140C741E1: mov     [r13+108h], rcx
 * 0000000140C741E8: mov     rax, r13
 * 0000000140C741EB: add     rsp, 878h
 * 0000000140C741F2: pop     r15
 * 0000000140C741F4: pop     r14
 * 0000000140C741F6: pop     r13
 * 0000000140C741F8: pop     r12
 * 0000000140C741FA: pop     rdi
 * 0000000140C741FB: pop     rsi
 * 0000000140C741FC: pop     rbx
 * 0000000140C741FD: pop     rbp
 * 0000000140C741FE: retn
 * 0000000140C74200: mov     r9d, 5; BugCheckParameter3
 * 0000000140C74206: mov     [rsp+8B0h+BugCheckParameter4], r8; BugCheckParameter4
 * 0000000140C7420B: mov     [rbp+7B0h+var_6E0], 0E8000009h
 * 0000000140C74215: mov     r8, rbx; BugCheckParameter2
 * 0000000140C74218: mov     ecx, [rbp+7B0h+var_6E0]
 * 0000000140C7421E: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C74221: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140C74225: call    KeBugCheckEx
 * 0000000140C7422B: mov     r9d, 7; BugCheckParameter3
 * 0000000140C74231: mov     [rbp+7B0h+var_6DC], 0E8000009h
 * 0000000140C7423B: mov     ecx, [rbp+7B0h+var_6DC]
 * 0000000140C74241: mov     r8, r15; BugCheckParameter2
 * 0000000140C74244: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C74247: mov     [rsp+8B0h+BugCheckParameter4], r12; BugCheckParameter4
 * 0000000140C7424C: lea     edx, [r9+3]; BugCheckParameter1
 * 0000000140C74250: call    KeBugCheckEx
 * 0000000140C74256: xor     r9d, r9d; BugCheckParameter3
 * 0000000140C74259: mov     [rsp+8B0h+BugCheckParameter4], r8; BugCheckParameter4
 * 0000000140C7425E: mov     [rbp+7B0h+var_6D8], 0E8000009h
 * 0000000140C74268: mov     r8, r15; BugCheckParameter2
 * 0000000140C7426B: mov     ecx, [rbp+7B0h+var_6D8]
 * 0000000140C74271: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C74274: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140C74278: call    KeBugCheckEx
 * 0000000140C7427E: mov     r9d, 1; BugCheckParameter3
 * 0000000140C74284: mov     [rbp+7B0h+var_6D4], 0E8000009h
 * 0000000140C7428E: mov     ecx, [rbp+7B0h+var_6D4]
 * 0000000140C74294: mov     r8, r15; BugCheckParameter2
 * 0000000140C74297: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7429A: mov     [rsp+8B0h+BugCheckParameter4], r12; BugCheckParameter4
 * 0000000140C7429F: lea     edx, [r9+9]; BugCheckParameter1
 * 0000000140C742A3: call    KeBugCheckEx
 * 0000000140C742A9: mov     r9d, eax; BugCheckParameter3
 * 0000000140C742AC: mov     r8, r15; BugCheckParameter2
 * 0000000140C742AF: xor     eax, eax
 * 0000000140C742B1: mov     [rbp+7B0h+var_6D0], 0E8000009h
 * 0000000140C742BB: mov     ecx, [rbp+7B0h+var_6D0]
 * 0000000140C742C1: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C742C4: mov     [rsp+8B0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140C742C9: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140C742CC: call    KeBugCheckEx
 * 0000000140C742D2: mov     r9d, eax; BugCheckParameter3
 * 0000000140C742D5: xor     eax, eax
 * 0000000140C742D7: mov     [rbp+7B0h+var_6CC], 0E8000009h
 * 0000000140C742E1: mov     ecx, [rbp+7B0h+var_6CC]
 * 0000000140C742E7: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C742EA: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140C742ED: mov     [rsp+8B0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140C742F2: call    KeBugCheckEx
 * 0000000140C742F8: mov     [rbp+7B0h+var_6A8], 0E8000009h
 * 0000000140C74302: mov     r9, rdi; BugCheckParameter3
 * 0000000140C74305: mov     ecx, [rbp+7B0h+var_6A8]
 * 0000000140C7430B: mov     r8, r15; BugCheckParameter2
 * 0000000140C7430E: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C74311: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140C74316: mov     [rsp+8B0h+BugCheckParameter4], r12; BugCheckParameter4
 * 0000000140C7431B: call    KeBugCheckEx
 * 0000000140C74321: mov     r9d, 3; BugCheckParameter3
 * 0000000140C74327: mov     [rsp+8B0h+BugCheckParameter4], r8; BugCheckParameter4
 * 0000000140C7432C: mov     [rbp+7B0h+var_6AC], 0E8000009h
 * 0000000140C74336: mov     r8, r15; BugCheckParameter2
 * 0000000140C74339: mov     ecx, [rbp+7B0h+var_6AC]
 * 0000000140C7433F: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C74342: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140C74346: call    KeBugCheckEx
 * 0000000140C7434C: mov     r8, [rbp+7B0h+var_7F0]; BugCheckParameter2
 * 0000000140C74350: mov     r9d, 6; BugCheckParameter3
 * 0000000140C74356: mov     [rbp+7B0h+var_6B0], 0E8000009h
 * 0000000140C74360: mov     ecx, [rbp+7B0h+var_6B0]
 * 0000000140C74366: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C74369: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140C7436D: mov     [rsp+8B0h+BugCheckParameter4], rbx; BugCheckParameter4
 * 0000000140C74372: call    KeBugCheckEx
 * 0000000140C74378: mov     r15, [rbp+7B0h+var_730]
 * 0000000140C7437F: mov     edi, 2
 * 0000000140C74384: mov     [r11], rax
 * 0000000140C74387: mov     rcx, cr4
 * 0000000140C7438A: test    rsi, rcx
 * 0000000140C7438D: jz      short loc_140C7439F
 * 0000000140C7438F: mov     rax, rcx
 * 0000000140C74392: btc     rax, 7
 * 0000000140C74397: mov     cr4, rax
 * 0000000140C7439A: mov     cr4, rcx
 * 0000000140C7439D: jmp     short loc_140C743A5
 * 0000000140C7439F: mov     rax, cr3
 * 0000000140C743A2: mov     cr3, rax
 * 0000000140C743A5: mov     r11, [rsp+8B0h+var_840]
 * 0000000140C743AA: mov     rsi, [rbp+7B0h+var_7D0]
 * 0000000140C743AE: cmp     [r13+948h], r12d
 * 0000000140C743B5: jz      short loc_140C743C8
 * 0000000140C743B7: mov     rax, cr8
 * 0000000140C743BB: cmp     al, dil
 * 0000000140C743BE: jnb     short loc_140C743C8
 * 0000000140C743C0: mov     rax, cr8
 * 0000000140C743C4: mov     cr8, rdi
 * 0000000140C743C8: mov     ecx, [r13+948h]
 * 0000000140C743CF: test    ecx, ecx
 * 0000000140C743D1: jz      loc_140C74497
 * 0000000140C743D7: sub     ecx, 1
 * 0000000140C743DA: jz      loc_140C7448A
 * 0000000140C743E0: sub     ecx, 1
 * 0000000140C743E3: jz      loc_140C74481
 * 0000000140C743E9: sub     ecx, 1
 * 0000000140C743EC: jz      loc_140C74478
 * 0000000140C743F2: sub     ecx, 1
 * 0000000140C743F5: jz      short loc_140C7443C
 * 0000000140C743F7: cmp     ecx, 1
 * 0000000140C743FA: jz      short loc_140C74415
 * 0000000140C743FC: mov     rax, [r13+5B0h]
 * 0000000140C74403: mov     ecx, 1
 * 0000000140C74408: lock or [rax+340h], rcx
 * 0000000140C74410: jmp     loc_140C74497
 * 0000000140C74415: mov     rcx, gs:20h
 * 0000000140C7441E: mov     rax, [r13+658h]
 * 0000000140C74425: mov     edx, [r13+9D8h]
 * 0000000140C7442C: shr     edx, 9
 * 0000000140C7442F: and     edx, 1Fh
 * 0000000140C74432: mov     rcx, [rax+rcx]
 * 0000000140C74436: lock bts [rcx], edx
 * 0000000140C7443A: jmp     short loc_140C74497
 * 0000000140C7443C: mov     rcx, gs:20h
 * 0000000140C74445: mov     rax, [r13+658h]
 * 0000000140C7444C: mov     r8d, [r13+9D8h]
 * 0000000140C74453: shr     r8d, 9
 * 0000000140C74457: and     r8d, 1Fh
 * 0000000140C7445B: mov     rcx, [rax+rcx]
 * 0000000140C7445F: add     rcx, [r13+6B8h]
 * 0000000140C74466: mov     rax, [r13+698h]
 * 0000000140C7446D: mov     rdx, [rcx+rax]
 * 0000000140C74471: lock bts [rdx], r8d
 * 0000000140C74476: jmp     short loc_140C74497
 * 0000000140C74478: mov     rax, [r13+558h]
 * 0000000140C7447F: jmp     short loc_140C74491
 * 0000000140C74481: mov     rax, [r13+550h]
 * 0000000140C74488: jmp     short loc_140C74491
 * 0000000140C7448A: mov     rax, [r13+540h]
 * 0000000140C74491: lock bts qword ptr [rax], 0
 * 0000000140C74497: mov     rax, [r13+6A0h]
 * 0000000140C7449E: mov     [r11+rax], r12
 * 0000000140C744A2: mov     rax, [r13+6B0h]
 * 0000000140C744A9: mov     [r11+rax], r12
 * 0000000140C744AD: mov     rcx, [r13+168h]
 * 0000000140C744B4: call    KeGuardCheckICall
 * 0000000140C744B9: mov     rax, [rbp+7B0h+var_828]
 * 0000000140C744BD: mov     r9, rsi
 * 0000000140C744C0: add     rax, 0FFFFFFFFFFFFFFF8h
 * 0000000140C744C4: mov     r8, r14
 * 0000000140C744C7: mov     [rsp+8B0h+var_880], rax
 * 0000000140C744CC: mov     rdx, r15
 * 0000000140C744CF: mov     rax, [r13+168h]
 * 0000000140C744D6: mov     ecx, 109h
 * 0000000140C744DB: mov     [rsp+8B0h+var_888], rax
 * 0000000140C744E0: mov     [rsp+8B0h+BugCheckParameter4], rbx
 * 0000000140C744E5: call    SdbpCheckDll
 */
