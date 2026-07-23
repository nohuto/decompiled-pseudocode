/*
 * XREFs of FsRtlMdlReadCompleteDevEx @ 0x140C68010
 * Callers:
 *     KiDecodeMcaFault @ 0x1405428C0 (KiDecodeMcaFault.c)
 *     sub_140553B50 @ 0x140553B50 (sub_140553B50.c)
 *     FsRtlUninitializeSmallMcb @ 0x140C81490 (FsRtlUninitializeSmallMcb.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     sub_140553D6C @ 0x140553D6C (sub_140553D6C.c)
 *     sub_140553E5C @ 0x140553E5C (sub_140553E5C.c)
 *     sub_140554F64 @ 0x140554F64 (sub_140554F64.c)
 *     sub_140C7CE10 @ 0x140C7CE10 (sub_140C7CE10.c)
 *     sub_140C7E7A8 @ 0x140C7E7A8 (sub_140C7E7A8.c)
 *     sub_140C7F02C @ 0x140C7F02C (sub_140C7F02C.c)
 *     sub_140C7F03C @ 0x140C7F03C (sub_140C7F03C.c)
 *     sub_140C7F180 @ 0x140C7F180 (sub_140C7F180.c)
 *     sub_140C7F338 @ 0x140C7F338 (sub_140C7F338.c)
 *     sub_140C7F9D0 @ 0x140C7F9D0 (sub_140C7F9D0.c)
 *     KiGetGdtIdt @ 0x140C81320 (KiGetGdtIdt.c)
 *     KiGetLdtr @ 0x140C81330 (KiGetLdtr.c)
 *     KiGetSs @ 0x140C81340 (KiGetSs.c)
 *     KiGetTr @ 0x140C81350 (KiGetTr.c)
 *     KiErrata361Present @ 0x140C81360 (KiErrata361Present.c)
 *     KiErrataSkx55Present @ 0x140C81380 (KiErrataSkx55Present.c)
 *     KiErrata704Present @ 0x140C81390 (KiErrata704Present.c)
 *     SdbpCheckDll @ 0x140C81440 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x140C816F0 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x140C81700 (KeGuardCheckICall.c)
 *     RtlInitMinimalBarrier @ 0x140C8189C (RtlInitMinimalBarrier.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
 */

/*
 * Hex-Rays decompilation failed for FsRtlMdlReadCompleteDevEx @ 0x140C68010
 * Reason: Hex-Rays returned no pseudocode for 0x140C68010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140C68010: mov     [rsp-8+arg_0], rcx
 * 0000000140C68015: push    rbp
 * 0000000140C68016: push    rbx
 * 0000000140C68017: push    rsi
 * 0000000140C68018: push    rdi
 * 0000000140C68019: push    r12
 * 0000000140C6801B: push    r13
 * 0000000140C6801D: push    r14
 * 0000000140C6801F: push    r15
 * 0000000140C68021: lea     rbp, [rsp-778h]
 * 0000000140C68029: sub     rsp, 878h
 * 0000000140C68030: mov     eax, [rcx+9D8h]
 * 0000000140C68036: xor     r9d, r9d
 * 0000000140C68039: mov     r12, rcx
 * 0000000140C6803C: mov     esi, 0FFFFFFFFh
 * 0000000140C68041: mov     ecx, 88000h
 * 0000000140C68046: mov     ebx, 12Fh
 * 0000000140C6804B: and     eax, ecx
 * 0000000140C6804D: mov     r10d, 0FFFFFFF8h
 * 0000000140C68053: lea     r11d, [r9+1]
 * 0000000140C68057: cmp     eax, ecx
 * 0000000140C68059: jz      loc_140C68126
 * 0000000140C6805F: mov     rdx, [r12+900h]
 * 0000000140C68067: lea     ecx, [rbx+1]
 * 0000000140C6806A: mov     rax, rdx
 * 0000000140C6806D: lea     r8d, [r9+26h]
 * 0000000140C68071: mov     [rax], r9
 * 0000000140C68074: add     ecx, r10d
 * 0000000140C68077: add     rax, 8
 * 0000000140C6807B: sub     r8, r11
 * 0000000140C6807E: jnz     short loc_140C68071
 * 0000000140C68080: test    ecx, ecx
 * 0000000140C68082: jz      short loc_140C6808E
 * 0000000140C68084: mov     [rax], r9b
 * 0000000140C68087: add     rax, r11
 * 0000000140C6808A: add     ecx, esi
 * 0000000140C6808C: jnz     short loc_140C68084
 * 0000000140C6808E: movups  xmm0, xmmword ptr [r12+868h]
 * 0000000140C68097: lea     rax, [r12+898h]
 * 0000000140C6809F: mov     rcx, rax
 * 0000000140C680A2: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140C680A7: shr     rcx, 10h
 * 0000000140C680AB: movups  xmm1, xmmword ptr [r12+878h]
 * 0000000140C680B4: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140C680B9: movups  xmm0, xmmword ptr [r12+888h]
 * 0000000140C680C2: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140C680CA: mov     [rbp+1A2h], rdx
 * 0000000140C680D1: mov     word ptr [rbp+7B0h+var_610], bx
 * 0000000140C680D8: mov     [rdx+10h], ax
 * 0000000140C680DC: shr     rax, 20h
 * 0000000140C680E0: mov     [rdx+16h], cx
 * 0000000140C680E4: mov     [rdx+18h], eax
 * 0000000140C680E7: cli
 * 0000000140C680E8: test    dword ptr [r12+9D8h], 40000000h
 * 0000000140C680F4: jnz     short loc_140C68121
 * 0000000140C680F6: test    dword ptr [r12+9DCh], 800000h
 * 0000000140C68102: jnz     short loc_140C68121
 * 0000000140C68104: sidt    fword ptr [rbp+7B0h+var_540]
 * 0000000140C6810B: lidt    fword ptr [rbp+7B0h+var_610]
 * 0000000140C68112: xor     eax, eax
 * 0000000140C68114: mov     dr7, rax
 * 0000000140C68117: lidt    fword ptr [rbp+7B0h+var_540]
 * 0000000140C6811E: sti
 * 0000000140C6811F: jmp     short loc_140C68128
 * 0000000140C68121: mov     dr7, r9
 * 0000000140C68125: sti
 * 0000000140C68126: xor     eax, eax
 * 0000000140C68128: test    dword ptr [r12+9DCh], 100h
 * 0000000140C68134: mov     [rbp+7B0h+var_768], rax
 * 0000000140C68138: jz      short loc_140C68150
 * 0000000140C6813A: mov     rax, [rbp+7B8h]
 * 0000000140C68141: mov     [rbp+7B0h+var_768], rax
 * 0000000140C68145: xor     eax, eax
 * 0000000140C68147: mov     [rbp+7B8h], rax
 * 0000000140C6814E: jmp     short loc_140C68152
 * 0000000140C68150: xor     eax, eax
 * 0000000140C68152: mov     edi, 40h ; '@'
 * 0000000140C68157: mov     [r12+848h], eax
 * 0000000140C6815F: test    dword ptr [r12+9D8h], 20000000h
 * 0000000140C6816B: mov     rbx, 7010008004002001h
 * 0000000140C68175: lea     r15d, [rdi-20h]
 * 0000000140C68179: lea     r13d, [rdi-3Ch]
 * 0000000140C6817D: jz      short loc_140C6818F
 * 0000000140C6817F: xor     eax, eax
 * 0000000140C68181: cmp     [r12+0AC0h], rax
 * 0000000140C68189: jnz     loc_140C684EF
 * 0000000140C6818F: mov     r14, [r12+7D8h]
 * 0000000140C68197: lea     rbx, [r12+7B8h]
 * 0000000140C6819F: mov     [rbp+7B0h+arg_8], r14
 * 0000000140C681A6: lea     rdx, [rbp+7B0h+var_140]
 * 0000000140C681AD: mov     rcx, rbx
 * 0000000140C681B0: mov     r8d, r15d
 * 0000000140C681B3: mov     r9, r13
 * 0000000140C681B6: mov     rax, [rcx]
 * 0000000140C681B9: add     r8d, r10d
 * 0000000140C681BC: mov     [rdx], rax
 * 0000000140C681BF: add     rcx, 8
 * 0000000140C681C3: add     rdx, 8
 * 0000000140C681C7: sub     r9, r11
 * 0000000140C681CA: jnz     short loc_140C681B6
 * 0000000140C681CC: xor     eax, eax
 * 0000000140C681CE: test    r8d, r8d
 * 0000000140C681D1: jz      short loc_140C681E4
 * 0000000140C681D3: mov     al, [rcx]
 * 0000000140C681D5: add     rcx, r11
 * 0000000140C681D8: mov     [rdx], al
 * 0000000140C681DA: add     rdx, r11
 * 0000000140C681DD: add     r8d, esi
 * 0000000140C681E0: jnz     short loc_140C681D3
 * 0000000140C681E2: xor     eax, eax
 * 0000000140C681E4: mov     [r12+7D8h], rax
 * 0000000140C681EC: mov     ecx, r15d
 * 0000000140C681EF: mov     [r12+848h], eax
 * 0000000140C681F7: mov     rdx, r13
 * 0000000140C681FA: mov     rax, rbx
 * 0000000140C681FD: mov     qword ptr [rax], 0
 * 0000000140C68204: add     ecx, r10d
 * 0000000140C68207: add     rax, 8
 * 0000000140C6820B: sub     rdx, r11
 * 0000000140C6820E: jnz     short loc_140C681FD
 * 0000000140C68210: test    ecx, ecx
 * 0000000140C68212: jz      short loc_140C6821D
 * 0000000140C68214: mov     [rax], dl
 * 0000000140C68216: add     rax, r11
 * 0000000140C68219: add     ecx, esi
 * 0000000140C6821B: jnz     short loc_140C68214
 * 0000000140C6821D: mov     r10d, [r12+804h]
 * 0000000140C68225: mov     r9, r12
 * 0000000140C68228: add     [r12+848h], r10d
 * 0000000140C68230: mov     rax, r12
 * 0000000140C68233: mov     r11d, [r12+834h]
 * 0000000140C6823B: mov     rsi, [r12+838h]
 * 0000000140C68243: lea     rcx, [r12+r10]
 * 0000000140C68247: cmp     r12, rcx
 * 0000000140C6824A: jnb     short loc_140C68257
 * 0000000140C6824C: prefetchnta byte ptr [rax]
 * 0000000140C6824F: add     rax, rdi
 * 0000000140C68252: cmp     rax, rcx
 * 0000000140C68255: jb      short loc_140C6824C
 * 0000000140C68257: mov     edi, r10d
 * 0000000140C6825A: mov     r8, rsi
 * 0000000140C6825D: shr     edi, 7
 * 0000000140C68260: mov     edx, 1
 * 0000000140C68265: test    edi, edi
 * 0000000140C68267: jz      short loc_140C682DE
 * 0000000140C68269: mov     rbx, 7010008004002001h
 * 0000000140C68273: mov     r14d, 0FFFFFFFFh
 * 0000000140C68279: mov     eax, 8
 * 0000000140C6827E: xor     r8, [r9]
 * 0000000140C68281: mov     ecx, r11d
 * 0000000140C68284: rol     r8, cl
 * 0000000140C68287: xor     r8, [r9+8]
 * 0000000140C6828B: add     r9, 10h
 * 0000000140C6828F: rol     r8, cl
 * 0000000140C68292: sub     rax, rdx
 * 0000000140C68295: jnz     short loc_140C6827E
 * 0000000140C68297: mov     rcx, r9
 * 0000000140C6829A: sub     rcx, r12
 * 0000000140C6829D: xor     rcx, rsi
 * 0000000140C682A0: mov     rax, rcx
 * 0000000140C682A3: rol     rax, 11h
 * 0000000140C682A7: xor     rcx, rax
 * 0000000140C682AA: mov     rax, rbx
 * 0000000140C682AD: mul     rcx
 * 0000000140C682B0: mov     [rbp+7B0h+var_360], rdx
 * 0000000140C682B7: xor     rdx, rax
 * 0000000140C682BA: xor     r11d, edx
 * 0000000140C682BD: mov     edx, 1
 * 0000000140C682C2: and     r11d, 3Fh
 * 0000000140C682C6: cmovz   r11d, edx
 * 0000000140C682CA: add     edi, r14d
 * 0000000140C682CD: jnz     short loc_140C68279
 * 0000000140C682CF: mov     r14, [rbp+7B0h+arg_8]
 * 0000000140C682D6: lea     rbx, [r12+7B8h]
 * 0000000140C682DE: and     r10d, 7Fh
 * 0000000140C682E2: cmp     r10d, 8
 * 0000000140C682E6: jb      short loc_140C68305
 * 0000000140C682E8: mov     eax, r10d
 * 0000000140C682EB: shr     rax, 3
 * 0000000140C682EF: xor     r8, [r9]
 * 0000000140C682F2: mov     ecx, r11d
 * 0000000140C682F5: rol     r8, cl
 * 0000000140C682F8: add     r9, 8
 * 0000000140C682FC: add     r10d, 0FFFFFFF8h
 * 0000000140C68300: sub     rax, rdx
 * 0000000140C68303: jnz     short loc_140C682EF
 * 0000000140C68305: xor     edi, edi
 * 0000000140C68307: mov     esi, 0FFFFFFFFh
 * 0000000140C6830C: test    r10d, r10d
 * 0000000140C6830F: jz      short loc_140C68326
 * 0000000140C68311: movzx   eax, byte ptr [r9]
 * 0000000140C68315: mov     ecx, r11d
 * 0000000140C68318: xor     r8, rax
 * 0000000140C6831B: add     r9, rdx
 * 0000000140C6831E: rol     r8, cl
 * 0000000140C68321: add     r10d, esi
 * 0000000140C68324: jnz     short loc_140C68311
 * 0000000140C68326: mov     [r12+7D8h], r14
 * 0000000140C6832E: lea     rcx, [rbp+7B0h+var_140]
 * 0000000140C68335: mov     edx, r15d
 * 0000000140C68338: mov     r9, r13
 * 0000000140C6833B: mov     r11d, 1
 * 0000000140C68341: mov     r10d, 0FFFFFFF8h
 * 0000000140C68347: mov     rax, [rcx]
 * 0000000140C6834A: add     edx, r10d
 * 0000000140C6834D: mov     [rbx], rax
 * 0000000140C68350: add     rcx, 8
 * 0000000140C68354: add     rbx, 8
 * 0000000140C68358: sub     r9, r11
 * 0000000140C6835B: jnz     short loc_140C68347
 * 0000000140C6835D: test    edx, edx
 * 0000000140C6835F: jz      short loc_140C6836F
 * 0000000140C68361: mov     al, [rcx]
 * 0000000140C68363: add     rcx, r11
 * 0000000140C68366: mov     [rbx], al
 * 0000000140C68368: add     rbx, r11
 * 0000000140C6836B: add     edx, esi
 * 0000000140C6836D: jnz     short loc_140C68361
 * 0000000140C6836F: cmp     [r12+7D8h], r8
 * 0000000140C68377: jz      loc_140C684E5
 * 0000000140C6837D: mov     ecx, [r12+804h]
 * 0000000140C68385: mov     rax, [r12+588h]
 * 0000000140C6838D: mov     [rax], r12
 * 0000000140C68390: mov     [rax+10h], ecx
 * 0000000140C68393: mov     rcx, [r12+7D8h]
 * 0000000140C6839B: cmp     [r12+918h], edi
 * 0000000140C683A3: jnz     loc_140C684E5
 * 0000000140C683A9: mov     rax, [r12+588h]
 * 0000000140C683B1: xor     rcx, r8
 * 0000000140C683B4: mov     [rax+18h], rcx
 * 0000000140C683B8: cmp     [r12+918h], edi
 * 0000000140C683C0: jnz     loc_140C684E5
 * 0000000140C683C6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C683D0: add     rax, r12
 * 0000000140C683D3: mov     [r12+920h], rax
 * 0000000140C683DB: mov     [r12+928h], rdi
 * 0000000140C683E3: mov     qword ptr [r12+930h], 101h
 * 0000000140C683EF: mov     [r12+938h], r8
 * 0000000140C683F7: mov     [r12+918h], r11d
 * 0000000140C683FF: mov     ecx, [r12+9D8h]
 * 0000000140C68407: bt      ecx, 1Dh
 * 0000000140C6840B: jb      loc_140C684E5
 * 0000000140C68411: test    dword ptr [r12+9DCh], 200000h
 * 0000000140C6841D: jz      loc_140C684E5
 * 0000000140C68423: test    r11b, cl
 * 0000000140C68426: jz      loc_140C684E5
 * 0000000140C6842C: mov     ecx, [r12+0A74h]
 * 0000000140C68434: mov     eax, [r12+804h]
 * 0000000140C6843C: mov     r10, [r12+838h]
 * 0000000140C68444: sub     eax, ecx
 * 0000000140C68446: mov     r8, [r12+0A78h]
 * 0000000140C6844E: lea     rdx, [rcx+r12]
 * 0000000140C68452: mov     ecx, eax
 * 0000000140C68454: shr     rcx, 3
 * 0000000140C68458: lea     r9, [rdx+rcx*8]
 * 0000000140C6845C: jmp     short loc_140C6847F
 * 0000000140C6845E: xor     [rdx], r8
 * 0000000140C68461: mov     rax, [rdx]
 * 0000000140C68464: movzx   ecx, r8b
 * 0000000140C68468: xor     rax, r10
 * 0000000140C6846B: and     ecx, 3Fh
 * 0000000140C6846E: ror     r8, cl
 * 0000000140C68471: add     r8, rax
 * 0000000140C68474: xor     r8, 0F05h
 * 0000000140C6847B: add     rdx, 8
 * 0000000140C6847F: cmp     rdx, r9
 * 0000000140C68482: jnz     short loc_140C6845E
 * 0000000140C68484: btr     dword ptr [r12+9DCh], 15h
 * 0000000140C6848E: cmp     r8, [r12+0A80h]
 * 0000000140C68496: jz      short loc_140C684E5
 * 0000000140C68498: mov     ecx, [r12+804h]
 * 0000000140C684A0: mov     rax, [r12+588h]
 * 0000000140C684A8: mov     [rax], r12
 * 0000000140C684AB: mov     [rax+10h], ecx
 * 0000000140C684AE: mov     rcx, [r12+0A80h]
 * 0000000140C684B6: cmp     [r12+918h], edi
 * 0000000140C684BE: jnz     short loc_140C684CF
 * 0000000140C684C0: mov     rax, [r12+588h]
 * 0000000140C684C8: xor     rcx, r8
 * 0000000140C684CB: mov     [rax+18h], rcx
 * 0000000140C684CF: xor     edx, edx
 * 0000000140C684D1: mov     r9d, 100h
 * 0000000140C684D7: mov     rcx, r12
 * 0000000140C684DA: call    sub_140C7F03C
 * 0000000140C684DF: mov     r11d, 1
 * 0000000140C684E5: mov     rbx, 7010008004002001h
 * 0000000140C684EF: mov     r8d, [r12+9D8h]
 * 0000000140C684F7: mov     edi, 2
 * 0000000140C684FC: or      r8d, edi
 * 0000000140C684FF: mov     r9, 0ABCC77118461CEFDh
 * 0000000140C68509: mov     [r12+9D8h], r8d
 * 0000000140C68511: add     [r12+854h], r11d
 * 0000000140C68519: lea     r14d, [rdi+0Ah]
 * 0000000140C6851D: test    r13b, r8b
 * 0000000140C68520: jz      loc_140C68A19
 * 0000000140C68526: bt      r8d, 16h
 * 0000000140C6852B: jb      loc_140C68A19
 * 0000000140C68531: mov     r15, [rbp+7B0h+arg_0]
 * 0000000140C68538: mov     esi, [r12+804h]
 * 0000000140C68540: mov     r11, [r12+0A40h]
 * 0000000140C68548: mov     r12d, [r12+828h]
 * 0000000140C68550: mov     r10, [r15+0AB8h]
 * 0000000140C68557: mov     eax, [r15+9DCh]
 * 0000000140C6855E: mov     [rsp+8B0h+var_858], r10
 * 0000000140C68563: test    dil, al
 * 0000000140C68566: jz      short loc_140C6856F
 * 0000000140C68568: mov     r11, [r15+5D0h]
 * 0000000140C6856F: mov     rax, [r15+2D0h]
 * 0000000140C68576: mov     r13, [r15+170h]
 * 0000000140C6857D: mov     [rbp+7B0h+var_7E8], rax
 * 0000000140C68581: mov     rax, [r15+348h]
 * 0000000140C68588: mov     [rbp+7B0h+var_828], rax
 * 0000000140C6858C: mov     [rsp+8B0h+var_840], r13
 * 0000000140C68591: rdtsc
 * 0000000140C68593: shl     rdx, 20h
 * 0000000140C68597: or      rax, rdx
 * 0000000140C6859A: mov     rcx, rax
 * 0000000140C6859D: ror     rcx, 3
 * 0000000140C685A1: xor     rcx, rax
 * 0000000140C685A4: mov     rax, rbx
 * 0000000140C685A7: mul     rcx
 * 0000000140C685AA: mov     rcx, rdx
 * 0000000140C685AD: mov     [rbp+7B0h+var_358], rdx
 * 0000000140C685B4: xor     rcx, rax
 * 0000000140C685B7: mov     rax, r9
 * 0000000140C685BA: mul     rcx
 * 0000000140C685BD: shr     rdx, 1Ah
 * 0000000140C685C1: sub     rdx, r14
 * 0000000140C685C4: imul    r9, rdx, 5F5E100h
 * 0000000140C685CB: sub     r9, rcx
 * 0000000140C685CE: mov     [rbp+7B0h+var_6F0], r9
 * 0000000140C685D5: bt      r8d, 19h
 * 0000000140C685DA: jnb     loc_140C68671
 * 0000000140C685E0: rdtsc
 * 0000000140C685E2: shl     rdx, 20h
 * 0000000140C685E6: mov     r14, 0CCCCCCCCCCCCCCCDh
 * 0000000140C685F0: or      rax, rdx
 * 0000000140C685F3: mov     rcx, rax
 * 0000000140C685F6: ror     rcx, 3
 * 0000000140C685FA: xor     rcx, rax
 * 0000000140C685FD: mov     rax, rbx
 * 0000000140C68600: mul     rcx
 * 0000000140C68603: mov     rcx, rdx
 * 0000000140C68606: mov     [rbp+7B0h+var_350], rdx
 * 0000000140C6860D: xor     rcx, rax
 * 0000000140C68610: mov     rax, r14
 * 0000000140C68613: mul     rcx
 * 0000000140C68616: shr     rdx, 3
 * 0000000140C6861A: lea     rax, [rdx+rdx*4]
 * 0000000140C6861E: add     rax, rax
 * 0000000140C68621: sub     rcx, rax
 * 0000000140C68624: cmp     rcx, rdi
 * 0000000140C68627: jnb     short loc_140C68671
 * 0000000140C68629: rdtsc
 * 0000000140C6862B: shl     rdx, 20h
 * 0000000140C6862F: or      rax, rdx
 * 0000000140C68632: mov     rcx, rax
 * 0000000140C68635: ror     rcx, 3
 * 0000000140C68639: xor     rcx, rax
 * 0000000140C6863C: mov     rax, rbx
 * 0000000140C6863F: mul     rcx
 * 0000000140C68642: mov     rcx, rdx
 * 0000000140C68645: mov     [rbp+7B0h+var_348], rdx
 * 0000000140C6864C: xor     rcx, rax
 * 0000000140C6864F: mov     rax, r14
 * 0000000140C68652: mul     rcx
 * 0000000140C68655: shr     rdx, 3
 * 0000000140C68659: lea     rax, [rdx+rdx*4]
 * 0000000140C6865D: add     rax, rax
 * 0000000140C68660: sub     rcx, rax
 * 0000000140C68663: inc     rcx
 * 0000000140C68666: imul    rcx, r9
 * 0000000140C6866A: mov     [rbp+7B0h+var_6F0], rcx
 * 0000000140C68671: xor     r9d, r9d
 * 0000000140C68674: mov     ebx, r9d
 * 0000000140C68677: mov     r14d, r9d
 * 0000000140C6867A: lea     ecx, [r9+1]
 * 0000000140C6867E: test    cl, r8b
 * 0000000140C68681: lea     eax, [rcx+3Fh]
 * 0000000140C68684: cmovz   esi, r12d
 * 0000000140C68688: test    al, r8b
 * 0000000140C6868B: jnz     short loc_140C686A0
 * 0000000140C6868D: mov     dword ptr [rbp+7B0h+arg_8], r9d
 * 0000000140C68694: add     r15, 0AE0h
 * 0000000140C6869B: jmp     loc_140C68784
 * 0000000140C686A0: mov     dword ptr [rbp+7B0h+arg_8], ecx
 * 0000000140C686A6: rdtsc
 * 0000000140C686A8: shl     rdx, 20h
 * 0000000140C686AC: or      rax, rdx
 * 0000000140C686AF: mov     rcx, rax
 * 0000000140C686B2: ror     rcx, 3
 * 0000000140C686B6: xor     rcx, rax
 * 0000000140C686B9: mov     rax, 7010008004002001h
 * 0000000140C686C3: mul     rcx
 * 0000000140C686C6: mov     ecx, 15Dh
 * 0000000140C686CB: mov     rbx, rdx
 * 0000000140C686CE: mov     [rbp+7B0h+var_330], rdx
 * 0000000140C686D5: xor     rbx, rax
 * 0000000140C686D8: mov     edx, 1
 * 0000000140C686DD: mov     r14, rbx
 * 0000000140C686E0: mov     r8, rbx
 * 0000000140C686E3: xor     r14, r15
 * 0000000140C686E6: add     r15, 0AE0h
 * 0000000140C686ED: mov     rax, r15
 * 0000000140C686F0: xor     [rax], r8
 * 0000000140C686F3: lea     rax, [rax-8]
 * 0000000140C686F7: ror     r8, cl
 * 0000000140C686FA: sub     ecx, edx
 * 0000000140C686FC: jnz     short loc_140C686F0
 * 0000000140C686FE: lea     r9, [r12-0AE8h]
 * 0000000140C68706: mov     r13, r12
 * 0000000140C68709: shr     r9, 3
 * 0000000140C6870D: test    r9d, r9d
 * 0000000140C68710: jz      short loc_140C6874E
 * 0000000140C68712: mov     rcx, [rbp+7B0h+arg_0]
 * 0000000140C68719: mov     r13, rdx
 * 0000000140C6871C: add     rcx, 0AE0h
 * 0000000140C68723: movsxd  r10, r9d
 * 0000000140C68726: lea     r10, [rcx+r10*8]
 * 0000000140C6872A: mov     rdx, [r10]
 * 0000000140C6872D: lea     rax, [r14+r14]
 * 0000000140C68731: mov     ecx, r9d
 * 0000000140C68734: lea     r10, [r10-8]
 * 0000000140C68738: ror     rdx, cl
 * 0000000140C6873B: mov     r14, rdx
 * 0000000140C6873E: xor     r14, rax
 * 0000000140C68741: sub     r9d, r13d
 * 0000000140C68744: jnz     short loc_140C6872A
 * 0000000140C68746: mov     r10, [rsp+8B0h+var_858]
 * 0000000140C6874B: mov     r13, r12
 * 0000000140C6874E: mov     rdx, [rbp+7B0h+arg_0]
 * 0000000140C68755: mov     ecx, esi
 * 0000000140C68757: sub     ecx, r12d
 * 0000000140C6875A: add     rdx, r13
 * 0000000140C6875D: shr     ecx, 3
 * 0000000140C68760: test    ecx, ecx
 * 0000000140C68762: jz      short loc_140C6877F
 * 0000000140C68764: lea     rdx, [rdx+rcx*8]
 * 0000000140C68768: mov     eax, 1
 * 0000000140C6876D: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140C68771: xor     [rdx], r8
 * 0000000140C68774: lea     rdx, [rdx-8]
 * 0000000140C68778: ror     r8, cl
 * 0000000140C6877B: sub     ecx, eax
 * 0000000140C6877D: jnz     short loc_140C68771
 * 0000000140C6877F: mov     r13, [rsp+8B0h+var_840]
 * 0000000140C68784: test    r10, r10
 * 0000000140C68787: jz      short loc_140C687AF
 * 0000000140C68789: mov     rax, [rbp+7B0h+var_828]
 * 0000000140C6878D: lea     r8, [rbp+7B0h+var_6F0]
 * 0000000140C68794: mov     r9, r13
 * 0000000140C68797: mov     [rsp+8B0h+BugCheckParameter4], r10
 * 0000000140C6879C: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C687A3: mov     edx, esi
 * 0000000140C687A5: mov     rcx, r13
 * 0000000140C687A8: call    KeGuardDispatchICall
 * 0000000140C687AD: jmp     short loc_140C687EE
 * 0000000140C687AF: xor     edx, edx
 * 0000000140C687B1: test    r11, r11
 * 0000000140C687B4: jnz     short loc_140C687C9
 * 0000000140C687B6: lea     r8, [rbp+7B0h+var_6F0]
 * 0000000140C687BD: xor     ecx, ecx
 * 0000000140C687BF: mov     rax, r13
 * 0000000140C687C2: call    KeGuardDispatchICall
 * 0000000140C687C7: jmp     short loc_140C687E7
 * 0000000140C687C9: lea     rax, [rbp+7B0h+var_6F0]
 * 0000000140C687D0: xor     r9d, r9d
 * 0000000140C687D3: mov     [rsp+8B0h+BugCheckParameter4], rax
 * 0000000140C687D8: xor     r8d, r8d
 * 0000000140C687DB: mov     rax, [rbp+7B0h+var_7E8]
 * 0000000140C687DF: mov     rcx, r11
 * 0000000140C687E2: call    KeGuardDispatchICall
 * 0000000140C687E7: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C687EE: xor     eax, eax
 * 0000000140C687F0: cmp     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C687F6: jz      loc_140C68A08
 * 0000000140C687FC: mov     r8, rbx
 * 0000000140C687FF: lea     edx, [rax+1]
 * 0000000140C68802: xor     r8, r13
 * 0000000140C68805: mov     ecx, 15Dh
 * 0000000140C6880A: xor     [r15], rbx
 * 0000000140C6880D: lea     r15, [r15-8]
 * 0000000140C68811: ror     rbx, cl
 * 0000000140C68814: sub     ecx, edx
 * 0000000140C68816: jnz     short loc_140C6880A
 * 0000000140C68818: lea     r9, [r12-0AE8h]
 * 0000000140C68820: mov     r11, r12
 * 0000000140C68823: shr     r9, 3
 * 0000000140C68827: test    r9d, r9d
 * 0000000140C6882A: jz      short loc_140C6885E
 * 0000000140C6882C: movsxd  rax, r9d
 * 0000000140C6882F: mov     rdi, rdx
 * 0000000140C68832: lea     r10, ds:0AE0h[rax*8]
 * 0000000140C6883A: add     r10, r13
 * 0000000140C6883D: xor     r13d, r13d
 * 0000000140C68840: mov     rdx, [r10]
 * 0000000140C68843: lea     rax, [r8+r8]
 * 0000000140C68847: mov     ecx, r9d
 * 0000000140C6884A: lea     r10, [r10-8]
 * 0000000140C6884E: ror     rdx, cl
 * 0000000140C68851: mov     r8, rdx
 * 0000000140C68854: xor     r8, rax
 * 0000000140C68857: sub     r9d, edi
 * 0000000140C6885A: jnz     short loc_140C68840
 * 0000000140C6885C: jmp     short loc_140C68861
 * 0000000140C6885E: xor     r13d, r13d
 * 0000000140C68861: sub     esi, r12d
 * 0000000140C68864: mov     r12, [rbp+7B0h+arg_0]
 * 0000000140C6886B: shr     esi, 3
 * 0000000140C6886E: lea     rcx, [r11+r12]
 * 0000000140C68872: mov     r11d, 1
 * 0000000140C68878: test    esi, esi
 * 0000000140C6887A: jz      short loc_140C68896
 * 0000000140C6887C: mov     edx, esi
 * 0000000140C6887E: dec     rdx
 * 0000000140C68881: lea     rdx, [rcx+rdx*8]
 * 0000000140C68885: xor     [rdx], rbx
 * 0000000140C68888: mov     ecx, esi
 * 0000000140C6888A: ror     rbx, cl
 * 0000000140C6888D: lea     rdx, [rdx-8]
 * 0000000140C68891: sub     esi, r11d
 * 0000000140C68894: jnz     short loc_140C68885
 * 0000000140C68896: cmp     r8, r14
 * 0000000140C68899: jz      loc_140C689FC
 * 0000000140C6889F: mov     rax, [r12+588h]
 * 0000000140C688A7: mov     ecx, [r12+804h]
 * 0000000140C688AF: mov     [rax], r12
 * 0000000140C688B2: mov     [rax+10h], ecx
 * 0000000140C688B5: cmp     [r12+918h], r13d
 * 0000000140C688BD: jnz     loc_140C689FC
 * 0000000140C688C3: mov     rax, [r12+588h]
 * 0000000140C688CB: mov     rcx, r8
 * 0000000140C688CE: xor     rcx, r14
 * 0000000140C688D1: mov     [rax+18h], rcx
 * 0000000140C688D5: cmp     [r12+918h], r13d
 * 0000000140C688DD: jnz     loc_140C689FC
 * 0000000140C688E3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C688ED: add     rax, r12
 * 0000000140C688F0: mov     [r12+920h], rax
 * 0000000140C688F8: mov     [r12+928h], r13
 * 0000000140C68900: mov     qword ptr [r12+930h], 10Eh
 * 0000000140C6890C: mov     [r12+938h], r8
 * 0000000140C68914: mov     [r12+918h], r11d
 * 0000000140C6891C: mov     ecx, [r12+9D8h]
 * 0000000140C68924: bt      ecx, 1Dh
 * 0000000140C68928: jb      loc_140C689FC
 * 0000000140C6892E: test    dword ptr [r12+9DCh], 200000h
 * 0000000140C6893A: jz      loc_140C689FC
 * 0000000140C68940: test    r11b, cl
 * 0000000140C68943: jz      loc_140C689FC
 * 0000000140C68949: mov     ecx, [r12+0A74h]
 * 0000000140C68951: mov     eax, [r12+804h]
 * 0000000140C68959: mov     r10, [r12+838h]
 * 0000000140C68961: sub     eax, ecx
 * 0000000140C68963: mov     r8, [r12+0A78h]
 * 0000000140C6896B: lea     rdx, [rcx+r12]
 * 0000000140C6896F: mov     ecx, eax
 * 0000000140C68971: shr     rcx, 3
 * 0000000140C68975: lea     r9, [rdx+rcx*8]
 * 0000000140C68979: jmp     short loc_140C6899C
 * 0000000140C6897B: xor     [rdx], r8
 * 0000000140C6897E: mov     rax, [rdx]
 * 0000000140C68981: movzx   ecx, r8b
 * 0000000140C68985: xor     rax, r10
 * 0000000140C68988: and     ecx, 3Fh
 * 0000000140C6898B: ror     r8, cl
 * 0000000140C6898E: add     r8, rax
 * 0000000140C68991: xor     r8, 0F05h
 * 0000000140C68998: add     rdx, 8
 * 0000000140C6899C: cmp     rdx, r9
 * 0000000140C6899F: jnz     short loc_140C6897B
 * 0000000140C689A1: btr     dword ptr [r12+9DCh], 15h
 * 0000000140C689AB: cmp     r8, [r12+0A80h]
 * 0000000140C689B3: jz      short loc_140C689FC
 * 0000000140C689B5: mov     ecx, [r12+804h]
 * 0000000140C689BD: mov     rax, [r12+588h]
 * 0000000140C689C5: mov     [rax], r12
 * 0000000140C689C8: mov     [rax+10h], ecx
 * 0000000140C689CB: mov     rcx, [r12+0A80h]
 * 0000000140C689D3: cmp     [r12+918h], r13d
 * 0000000140C689DB: jnz     short loc_140C689EC
 * 0000000140C689DD: mov     rax, [r12+588h]
 * 0000000140C689E5: xor     rcx, r8
 * 0000000140C689E8: mov     [rax+18h], rcx
 * 0000000140C689EC: xor     edx, edx
 * 0000000140C689EE: mov     r9d, 100h
 * 0000000140C689F4: mov     rcx, r12
 * 0000000140C689F7: call    sub_140C7F03C
 * 0000000140C689FC: mov     r15d, 20h ; ' '
 * 0000000140C68A02: lea     r14d, [r15-14h]
 * 0000000140C68A06: jmp     short loc_140C68A1C
 * 0000000140C68A08: mov     r12, [rbp+7B0h+arg_0]
 * 0000000140C68A0F: mov     r15d, 20h ; ' '
 * 0000000140C68A15: lea     r14d, [r15-14h]
 * 0000000140C68A19: xor     r13d, r13d
 * 0000000140C68A1C: mov     esi, [r12+0C4h]
 * 0000000140C68A24: lea     rcx, [r12+630h]
 * 0000000140C68A2C: mov     [r12+0C4h], r13d
 * 0000000140C68A34: mov     r9, r12
 * 0000000140C68A37: add     dword ptr [r12+848h], 630h
 * 0000000140C68A43: mov     rax, r12
 * 0000000140C68A46: mov     r10d, [r12+834h]
 * 0000000140C68A4E: mov     rbx, [r12+838h]
 * 0000000140C68A56: mov     dword ptr [rbp+7B0h+arg_8], esi
 * 0000000140C68A5C: cmp     r12, rcx
 * 0000000140C68A5F: jnb     short loc_140C68A71
 * 0000000140C68A61: mov     edx, 40h ; '@'
 * 0000000140C68A66: prefetchnta byte ptr [rax]
 * 0000000140C68A69: add     rax, rdx
 * 0000000140C68A6C: cmp     rax, rcx
 * 0000000140C68A6F: jb      short loc_140C68A66
 * 0000000140C68A71: mov     r11d, r14d
 * 0000000140C68A74: mov     r8, rbx
 * 0000000140C68A77: mov     r14d, 1
 * 0000000140C68A7D: mov     edi, 0FFFFFFFFh
 * 0000000140C68A82: mov     rsi, 7010008004002001h
 * 0000000140C68A8C: mov     eax, 8
 * 0000000140C68A91: xor     r8, [r9]
 * 0000000140C68A94: mov     ecx, r10d
 * 0000000140C68A97: rol     r8, cl
 * 0000000140C68A9A: xor     r8, [r9+8]
 * 0000000140C68A9E: add     r9, 10h
 * 0000000140C68AA2: rol     r8, cl
 * 0000000140C68AA5: sub     rax, r14
 * 0000000140C68AA8: jnz     short loc_140C68A91
 * 0000000140C68AAA: mov     rcx, r9
 * 0000000140C68AAD: sub     rcx, r12
 * 0000000140C68AB0: xor     rcx, rbx
 * 0000000140C68AB3: mov     rax, rcx
 * 0000000140C68AB6: rol     rax, 11h
 * 0000000140C68ABA: xor     rcx, rax
 * 0000000140C68ABD: mov     rax, rsi
 * 0000000140C68AC0: mul     rcx
 * 0000000140C68AC3: mov     [rbp+7B0h+var_328], rdx
 * 0000000140C68ACA: xor     rdx, rax
 * 0000000140C68ACD: xor     r10d, edx
 * 0000000140C68AD0: and     r10d, 3Fh
 * 0000000140C68AD4: cmovz   r10d, r14d
 * 0000000140C68AD8: add     r11d, edi
 * 0000000140C68ADB: jnz     short loc_140C68A8C
 * 0000000140C68ADD: mov     esi, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C68AE3: lea     edx, [r11+30h]
 * 0000000140C68AE7: lea     eax, [rdx-2Ah]
 * 0000000140C68AEA: lea     edi, [rdx-2Eh]
 * 0000000140C68AED: xor     r8, [r9]
 * 0000000140C68AF0: mov     ecx, r10d
 * 0000000140C68AF3: rol     r8, cl
 * 0000000140C68AF6: add     r9, 8
 * 0000000140C68AFA: add     edx, 0FFFFFFF8h
 * 0000000140C68AFD: sub     rax, r14
 * 0000000140C68B00: jnz     short loc_140C68AED
 * 0000000140C68B02: test    edx, edx
 * 0000000140C68B04: jz      short loc_140C68B22
 * 0000000140C68B06: mov     edi, 0FFFFFFFFh
 * 0000000140C68B0B: movzx   eax, byte ptr [r9]
 * 0000000140C68B0F: mov     ecx, r10d
 * 0000000140C68B12: xor     r8, rax
 * 0000000140C68B15: add     r9, r14
 * 0000000140C68B18: rol     r8, cl
 * 0000000140C68B1B: add     edx, edi
 * 0000000140C68B1D: jnz     short loc_140C68B0B
 * 0000000140C68B1F: lea     edi, [rdx+2]
 * 0000000140C68B22: mov     [r12+0C4h], esi
 * 0000000140C68B2A: cmp     [r12+0A68h], r8
 * 0000000140C68B32: jz      loc_140C68C9B
 * 0000000140C68B38: mov     ecx, [r12+804h]
 * 0000000140C68B40: mov     rax, [r12+588h]
 * 0000000140C68B48: mov     [rax], r12
 * 0000000140C68B4B: mov     [rax+10h], ecx
 * 0000000140C68B4E: mov     rcx, [r12+0A68h]
 * 0000000140C68B56: cmp     [r12+918h], r13d
 * 0000000140C68B5E: jnz     loc_140C68C9B
 * 0000000140C68B64: mov     rax, [r12+588h]
 * 0000000140C68B6C: xor     rcx, r8
 * 0000000140C68B6F: mov     [rax+18h], rcx
 * 0000000140C68B73: cmp     [r12+918h], r13d
 * 0000000140C68B7B: jnz     loc_140C68C9B
 * 0000000140C68B81: mov     r11, 0A3A03F5891C8B4E8h
 * 0000000140C68B8B: lea     rax, [r12+r11]
 * 0000000140C68B8F: mov     [r12+920h], rax
 * 0000000140C68B97: mov     [r12+928h], r13
 * 0000000140C68B9F: mov     qword ptr [r12+930h], 109h
 * 0000000140C68BAB: mov     [r12+938h], r8
 * 0000000140C68BB3: mov     [r12+918h], r14d
 * 0000000140C68BBB: mov     ecx, [r12+9D8h]
 * 0000000140C68BC3: bt      ecx, 1Dh
 * 0000000140C68BC7: jb      loc_140C68CA5
 * 0000000140C68BCD: test    dword ptr [r12+9DCh], 200000h
 * 0000000140C68BD9: jz      loc_140C68CA5
 * 0000000140C68BDF: test    r14b, cl
 * 0000000140C68BE2: jz      loc_140C68CA5
 * 0000000140C68BE8: mov     ecx, [r12+0A74h]
 * 0000000140C68BF0: mov     eax, [r12+804h]
 * 0000000140C68BF8: mov     r10, [r12+838h]
 * 0000000140C68C00: sub     eax, ecx
 * 0000000140C68C02: mov     r8, [r12+0A78h]
 * 0000000140C68C0A: lea     rdx, [rcx+r12]
 * 0000000140C68C0E: mov     ecx, eax
 * 0000000140C68C10: shr     rcx, 3
 * 0000000140C68C14: lea     r9, [rdx+rcx*8]
 * 0000000140C68C18: jmp     short loc_140C68C3B
 * 0000000140C68C1A: xor     [rdx], r8
 * 0000000140C68C1D: mov     rax, [rdx]
 * 0000000140C68C20: movzx   ecx, r8b
 * 0000000140C68C24: xor     rax, r10
 * 0000000140C68C27: and     ecx, 3Fh
 * 0000000140C68C2A: ror     r8, cl
 * 0000000140C68C2D: add     r8, rax
 * 0000000140C68C30: xor     r8, 0F05h
 * 0000000140C68C37: add     rdx, 8
 * 0000000140C68C3B: cmp     rdx, r9
 * 0000000140C68C3E: jnz     short loc_140C68C1A
 * 0000000140C68C40: btr     dword ptr [r12+9DCh], 15h
 * 0000000140C68C4A: cmp     r8, [r12+0A80h]
 * 0000000140C68C52: jz      short loc_140C68CA5
 * 0000000140C68C54: mov     ecx, [r12+804h]
 * 0000000140C68C5C: mov     rax, [r12+588h]
 * 0000000140C68C64: mov     [rax], r12
 * 0000000140C68C67: mov     [rax+10h], ecx
 * 0000000140C68C6A: mov     rcx, [r12+0A80h]
 * 0000000140C68C72: cmp     [r12+918h], r13d
 * 0000000140C68C7A: jnz     short loc_140C68C8B
 * 0000000140C68C7C: mov     rax, [r12+588h]
 * 0000000140C68C84: xor     rcx, r8
 * 0000000140C68C87: mov     [rax+18h], rcx
 * 0000000140C68C8B: xor     edx, edx
 * 0000000140C68C8D: mov     r9d, 100h
 * 0000000140C68C93: mov     rcx, r12
 * 0000000140C68C96: call    sub_140C7F03C
 * 0000000140C68C9B: mov     r11, 0A3A03F5891C8B4E8h
 * 0000000140C68CA5: mov     ecx, [r12+9D8h]
 * 0000000140C68CAD: bt      ecx, 1Dh
 * 0000000140C68CB1: jb      loc_140C68DB8
 * 0000000140C68CB7: test    dword ptr [r12+9DCh], 200000h
 * 0000000140C68CC3: jz      loc_140C68DB8
 * 0000000140C68CC9: test    r14b, cl
 * 0000000140C68CCC: jz      loc_140C68DB8
 * 0000000140C68CD2: mov     ecx, [r12+0A74h]
 * 0000000140C68CDA: mov     eax, [r12+804h]
 * 0000000140C68CE2: mov     r10, [r12+838h]
 * 0000000140C68CEA: sub     eax, ecx
 * 0000000140C68CEC: mov     rdx, [r12+0A78h]
 * 0000000140C68CF4: lea     r8, [rcx+r12]
 * 0000000140C68CF8: mov     ecx, eax
 * 0000000140C68CFA: shr     rcx, 3
 * 0000000140C68CFE: lea     r9, [r8+rcx*8]
 * 0000000140C68D02: jmp     short loc_140C68D24
 * 0000000140C68D04: xor     [r8], rdx
 * 0000000140C68D07: mov     rax, [r8]
 * 0000000140C68D0A: movzx   ecx, dl
 * 0000000140C68D0D: xor     rax, r10
 * 0000000140C68D10: and     ecx, 3Fh
 * 0000000140C68D13: ror     rdx, cl
 * 0000000140C68D16: add     rdx, rax
 * 0000000140C68D19: xor     rdx, 0F05h
 * 0000000140C68D20: add     r8, 8
 * 0000000140C68D24: cmp     r8, r9
 * 0000000140C68D27: jnz     short loc_140C68D04
 * 0000000140C68D29: btr     dword ptr [r12+9DCh], 15h
 * 0000000140C68D33: cmp     rdx, [r12+0A80h]
 * 0000000140C68D3B: jz      short loc_140C68DB8
 * 0000000140C68D3D: mov     ecx, [r12+804h]
 * 0000000140C68D45: mov     rax, [r12+588h]
 * 0000000140C68D4D: mov     [rax], r12
 * 0000000140C68D50: mov     [rax+10h], ecx
 * 0000000140C68D53: mov     rcx, [r12+0A80h]
 * 0000000140C68D5B: cmp     [r12+918h], r13d
 * 0000000140C68D63: jnz     short loc_140C68DB8
 * 0000000140C68D65: mov     rax, [r12+588h]
 * 0000000140C68D6D: xor     rcx, rdx
 * 0000000140C68D70: mov     [rax+18h], rcx
 * 0000000140C68D74: cmp     [r12+918h], r13d
 * 0000000140C68D7C: jnz     short loc_140C68DB8
 * 0000000140C68D7E: lea     rax, [r12+r11]
 * 0000000140C68D82: mov     rcx, r12
 * 0000000140C68D85: mov     [r12+920h], rax
 * 0000000140C68D8D: mov     [r12+928h], r13
 * 0000000140C68D95: mov     qword ptr [r12+930h], 100h
 * 0000000140C68DA1: mov     [r12+938h], rdx
 * 0000000140C68DA9: xor     edx, edx
 * 0000000140C68DAB: mov     [r12+918h], r14d
 * 0000000140C68DB3: call    sub_140C7F180
 * 0000000140C68DB8: test    dword ptr [r12+9D8h], 20000000h
 * 0000000140C68DC4: mov     rsi, r12
 * 0000000140C68DC7: mov     [rsp+8B0h+var_838], r12
 * 0000000140C68DCC: mov     rbx, r12
 * 0000000140C68DCF: jz      short loc_140C68DDB
 * 0000000140C68DD1: mov     [rsp+8B0h+var_838], r12
 * 0000000140C68DD6: jmp     loc_140C69595
 * 0000000140C68DDB: mov     ecx, [r12+9B8h]
 * 0000000140C68DE3: test    ecx, ecx
 * 0000000140C68DE5: jz      loc_140C68ED4
 * 0000000140C68DEB: cmp     ecx, r14d
 * 0000000140C68DEE: jnz     loc_140C6958D
 * 0000000140C68DF4: mov     r12d, 1
 * 0000000140C68DFA: mov     rax, [rsi+610h]
 * 0000000140C68E01: mov     rbx, rsi
 * 0000000140C68E04: test    rax, rax
 * 0000000140C68E07: jz      loc_140C6958D
 * 0000000140C68E0D: mov     rax, [rax]
 * 0000000140C68E10: test    rax, rax
 * 0000000140C68E13: jz      loc_140C6958D
 * 0000000140C68E19: mov     rax, [rsi+610h]
 * 0000000140C68E20: mov     r14, [rax]
 * 0000000140C68E23: lock or [rsp+8B0h+var_8B0], r13d
 * 0000000140C68E28: mov     r10d, [r14+804h]
 * 0000000140C68E2F: mov     r9, r14
 * 0000000140C68E32: mov     r11d, [r14+834h]
 * 0000000140C68E39: mov     rax, r14
 * 0000000140C68E3C: mov     r15, [r14+838h]
 * 0000000140C68E43: lea     rcx, [r14+r10]
 * 0000000140C68E47: cmp     r14, rcx
 * 0000000140C68E4A: jnb     short loc_140C68E5C
 * 0000000140C68E4C: mov     edx, 40h ; '@'
 * 0000000140C68E51: prefetchnta byte ptr [rax]
 * 0000000140C68E54: add     rax, rdx
 * 0000000140C68E57: cmp     rax, rcx
 * 0000000140C68E5A: jb      short loc_140C68E51
 * 0000000140C68E5C: mov     ebx, r10d
 * 0000000140C68E5F: mov     r8, r15
 * 0000000140C68E62: shr     ebx, 7
 * 0000000140C68E65: test    ebx, ebx
 * 0000000140C68E67: jz      loc_140C69105
 * 0000000140C68E6D: mov     rdi, 7010008004002001h
 * 0000000140C68E77: mov     eax, 8
 * 0000000140C68E7C: xor     r8, [r9]
 * 0000000140C68E7F: mov     ecx, r11d
 * 0000000140C68E82: rol     r8, cl
 * 0000000140C68E85: xor     r8, [r9+8]
 * 0000000140C68E89: add     r9, 10h
 * 0000000140C68E8D: rol     r8, cl
 * 0000000140C68E90: sub     rax, r12
 * 0000000140C68E93: jnz     short loc_140C68E7C
 * 0000000140C68E95: mov     rcx, r9
 * 0000000140C68E98: sub     rcx, r14
 * 0000000140C68E9B: xor     rcx, r15
 * 0000000140C68E9E: mov     rax, rcx
 * 0000000140C68EA1: rol     rax, 11h
 * 0000000140C68EA5: xor     rcx, rax
 * 0000000140C68EA8: mov     rax, rdi
 * 0000000140C68EAB: mul     rcx
 * 0000000140C68EAE: mov     [rbp+7B0h+var_1F8], rdx
 * 0000000140C68EB5: xor     rdx, rax
 * 0000000140C68EB8: xor     r11d, edx
 * 0000000140C68EBB: mov     edx, 0FFFFFFFFh
 * 0000000140C68EC0: and     r11d, 3Fh
 * 0000000140C68EC4: cmovz   r11d, r12d
 * 0000000140C68EC8: add     ebx, edx
 * 0000000140C68ECA: jnz     short loc_140C68E77
 * 0000000140C68ECC: lea     edi, [rbx+2]
 * 0000000140C68ECF: jmp     loc_140C6910A
 * 0000000140C68ED4: mov     r14, [r12+610h]
 * 0000000140C68EDC: test    r14, r14
 * 0000000140C68EDF: jz      loc_140C6958D
 * 0000000140C68EE5: cmp     [r14], r13
 * 0000000140C68EE8: jz      loc_140C6958D
 * 0000000140C68EEE: mov     ebx, [r12+804h]
 * 0000000140C68EF6: mov     r10d, 0
 * 0000000140C68EFC: mov     r13d, [r12+858h]
 * 0000000140C68F04: cmp     r13d, 7
 * 0000000140C68F08: mov     r8d, [r12+944h]
 * 0000000140C68F10: cmovnz  r15d, r10d
 * 0000000140C68F14: lea     eax, [rbx+30h]
 * 0000000140C68F17: cmp     eax, [r12+0A64h]
 * 0000000140C68F1F: jbe     loc_140C69016
 * 0000000140C68F25: mov     edx, eax
 * 0000000140C68F27: mov     rcx, r12
 * 0000000140C68F2A: call    sub_140C7E7A8
 * 0000000140C68F2F: xor     r10d, r10d
 * 0000000140C68F32: mov     [rsp+8B0h+var_838], rax
 * 0000000140C68F37: mov     rsi, rax
 * 0000000140C68F3A: test    rax, rax
 * 0000000140C68F3D: jz      loc_140C6903D
 * 0000000140C68F43: mov     ecx, [r12+9D8h]
 * 0000000140C68F4B: test    dil, cl
 * 0000000140C68F4E: jnz     loc_140C6900D
 * 0000000140C68F54: mov     eax, [r12+804h]
 * 0000000140C68F5C: lea     r11d, [r10+1]
 * 0000000140C68F60: mov     r9, [r12+7E8h]
 * 0000000140C68F68: and     ecx, 10000000h
 * 0000000140C68F6E: neg     ecx
 * 0000000140C68F70: mov     rcx, r12
 * 0000000140C68F73: sbb     edx, edx
 * 0000000140C68F75: and     edx, [r12+944h]
 * 0000000140C68F7D: cmp     eax, 8
 * 0000000140C68F80: jb      short loc_140C68F98
 * 0000000140C68F82: mov     r8d, eax
 * 0000000140C68F85: shr     r8, 3
 * 0000000140C68F89: mov     [rcx], r10
 * 0000000140C68F8C: add     eax, 0FFFFFFF8h
 * 0000000140C68F8F: add     rcx, 8
 * 0000000140C68F93: sub     r8, r11
 * 0000000140C68F96: jnz     short loc_140C68F89
 * 0000000140C68F98: test    eax, eax
 * 0000000140C68F9A: jz      short loc_140C68FAD
 * 0000000140C68F9C: mov     r8d, 0FFFFFFFFh
 * 0000000140C68FA2: mov     [rcx], r10b
 * 0000000140C68FA5: add     rcx, r11
 * 0000000140C68FA8: add     eax, r8d
 * 0000000140C68FAB: jnz     short loc_140C68FA2
 * 0000000140C68FAD: mov     r12d, [rsi+944h]
 * 0000000140C68FB4: mov     [rsi+944h], edx
 * 0000000140C68FBA: cmp     edx, 3
 * 0000000140C68FBD: jz      short loc_140C68FED
 * 0000000140C68FBF: test    dword ptr [rsi+9D8h], 8000000h
 * 0000000140C68FC9: jnz     short loc_140C68FE4
 * 0000000140C68FCB: test    edx, edx
 * 0000000140C68FCD: jz      short loc_140C68FE4
 * 0000000140C68FCF: mov     rax, [rsi+238h]
 * 0000000140C68FD6: lea     rcx, [r9-8]
 * 0000000140C68FDA: mov     rdx, [rcx]
 * 0000000140C68FDD: call    KeGuardDispatchICall
 * 0000000140C68FE2: jmp     short loc_140C68FFC
 * 0000000140C68FE4: mov     rax, [rsi+108h]
 * 0000000140C68FEB: jmp     short loc_140C68FF4
 * 0000000140C68FED: mov     rax, [rsi+370h]
 * 0000000140C68FF4: mov     rcx, r9
 * 0000000140C68FF7: call    KeGuardDispatchICall
 * 0000000140C68FFC: mov     [rsi+944h], r12d
 * 0000000140C69003: xor     r10d, r10d
 * 0000000140C69006: mov     r12, [rbp+7B0h+arg_0]
 * 0000000140C6900D: and     dword ptr [rsi+9D8h], 0FFFFFFFDh
 * 0000000140C69014: jmp     short loc_140C69023
 * 0000000140C69016: mov     [rsp+8B0h+var_838], r12
 * 0000000140C6901B: mov     [r12+804h], eax
 * 0000000140C69023: add     rbx, rsi
 * 0000000140C69026: mov     eax, 1
 * 0000000140C6902B: add     [rsi+82Ch], eax
 * 0000000140C69031: mov     [rbp+7B0h+var_320], rbx
 * 0000000140C69038: test    rsi, rsi
 * 0000000140C6903B: jnz     short loc_140C69045
 * 0000000140C6903D: mov     rsi, r12
 * 0000000140C69040: jmp     loc_140C68DD1
 * 0000000140C69045: mov     ecx, 30h ; '0'
 * 0000000140C6904A: mov     rax, rbx
 * 0000000140C6904D: lea     edx, [rcx-2Ah]
 * 0000000140C69050: lea     r12d, [rcx-2Fh]
 * 0000000140C69054: mov     [rax], r10
 * 0000000140C69057: add     ecx, 0FFFFFFF8h
 * 0000000140C6905A: add     rax, 8
 * 0000000140C6905E: sub     rdx, r12
 * 0000000140C69061: jnz     short loc_140C69054
 * 0000000140C69063: test    ecx, ecx
 * 0000000140C69065: jz      short loc_140C69076
 * 0000000140C69067: mov     edx, 0FFFFFFFFh
 * 0000000140C6906C: mov     [rax], r10b
 * 0000000140C6906F: add     rax, r12
 * 0000000140C69072: add     ecx, edx
 * 0000000140C69074: jnz     short loc_140C6906C
 * 0000000140C69076: mov     [rbx], r15d
 * 0000000140C69079: mov     [rbx+8], r14
 * 0000000140C6907D: cmp     r13d, 7
 * 0000000140C69081: jnz     short loc_140C69096
 * 0000000140C69083: lea     r9, [rbx+18h]
 * 0000000140C69087: mov     rdx, r14
 * 0000000140C6908A: lea     r8d, [r13+1]
 * 0000000140C6908E: mov     rcx, rsi
 * 0000000140C69091: call    sub_140553D6C
 * 0000000140C69096: mov     dword ptr [rbx+10h], 8
 * 0000000140C6909D: lea     r8, [r14+8]
 * 0000000140C690A1: add     dword ptr [rsi+848h], 8
 * 0000000140C690A8: mov     rdx, r14
 * 0000000140C690AB: mov     ecx, [rsi+834h]
 * 0000000140C690B1: mov     rax, [rsi+838h]
 * 0000000140C690B8: cmp     r14, r8
 * 0000000140C690BB: jnb     short loc_140C690CE
 * 0000000140C690BD: mov     r9d, 40h ; '@'
 * 0000000140C690C3: prefetchnta byte ptr [rdx]
 * 0000000140C690C6: add     rdx, r9
 * 0000000140C690C9: cmp     rdx, r8
 * 0000000140C690CC: jb      short loc_140C690C3
 * 0000000140C690CE: xor     rax, [r14]
 * 0000000140C690D1: rol     rax, cl
 * 0000000140C690D4: mov     rcx, rax
 * 0000000140C690D7: shr     rcx, 1Fh
 * 0000000140C690DB: xor     r13d, r13d
 * 0000000140C690DE: jmp     short loc_140C690E6
 * 0000000140C690E0: xor     eax, ecx
 * 0000000140C690E2: shr     rcx, 1Fh
 * 0000000140C690E6: test    rcx, rcx
 * 0000000140C690E9: jnz     short loc_140C690E0
 * 0000000140C690EB: btr     eax, 1Fh
 * 0000000140C690EF: mov     [rbx+14h], eax
 * 0000000140C690F2: add     dword ptr [rsi+848h], 8
 * 0000000140C690F9: add     [rsi+9B8h], r12d
 * 0000000140C69100: jmp     loc_140C68DFA
 * 0000000140C69105: mov     edx, 0FFFFFFFFh
 * 0000000140C6910A: and     r10d, 7Fh
 * 0000000140C6910E: cmp     r10d, 8
 * 0000000140C69112: jb      short loc_140C69131
 * 0000000140C69114: mov     eax, r10d
 * 0000000140C69117: shr     rax, 3
 * 0000000140C6911B: xor     r8, [r9]
 * 0000000140C6911E: mov     ecx, r11d
 * 0000000140C69121: rol     r8, cl
 * 0000000140C69124: add     r9, 8
 * 0000000140C69128: add     r10d, 0FFFFFFF8h
 * 0000000140C6912C: sub     rax, r12
 * 0000000140C6912F: jnz     short loc_140C6911B
 * 0000000140C69131: test    r10d, r10d
 * 0000000140C69134: jz      short loc_140C6914B
 * 0000000140C69136: movzx   eax, byte ptr [r9]
 * 0000000140C6913A: mov     ecx, r11d
 * 0000000140C6913D: xor     r8, rax
 * 0000000140C69140: add     r9, r12
 * 0000000140C69143: rol     r8, cl
 * 0000000140C69146: add     r10d, edx
 * 0000000140C69149: jnz     short loc_140C69136
 * 0000000140C6914B: mov     rax, [rsi+618h]
 * 0000000140C69152: mov     r12d, [r14+804h]
 * 0000000140C69159: mov     [rbp+7B0h+var_7C8], r12d
 * 0000000140C6915D: cmp     r8, [rax]
 * 0000000140C69160: jz      loc_140C692B2
 * 0000000140C69166: mov     rax, [rsi+588h]
 * 0000000140C6916D: mov     [rax], r14
 * 0000000140C69170: mov     [rax+10h], r12d
 * 0000000140C69174: mov     rax, [rsi+618h]
 * 0000000140C6917B: mov     rcx, [rax]
 * 0000000140C6917E: cmp     [rsi+918h], r13d
 * 0000000140C69185: jnz     loc_140C692AA
 * 0000000140C6918B: mov     rax, [rsi+588h]
 * 0000000140C69192: xor     rcx, r8
 * 0000000140C69195: mov     [rax+18h], rcx
 * 0000000140C69199: cmp     [rsi+918h], r13d
 * 0000000140C691A0: jnz     loc_140C692AA
 * 0000000140C691A6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C691B0: mov     edx, 1
 * 0000000140C691B5: add     rax, rsi
 * 0000000140C691B8: mov     [rsi+920h], rax
 * 0000000140C691BF: mov     [rsi+928h], r13
 * 0000000140C691C6: mov     qword ptr [rsi+930h], 111h
 * 0000000140C691D1: mov     [rsi+938h], r8
 * 0000000140C691D8: mov     [rsi+918h], edx
 * 0000000140C691DE: mov     ecx, [rsi+9D8h]
 * 0000000140C691E4: bt      ecx, 1Dh
 * 0000000140C691E8: jb      loc_140C692AA
 * 0000000140C691EE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C691F8: jz      loc_140C692AA
 * 0000000140C691FE: test    dl, cl
 * 0000000140C69200: jz      loc_140C692AA
 * 0000000140C69206: mov     ecx, [rsi+0A74h]
 * 0000000140C6920C: mov     eax, [rsi+804h]
 * 0000000140C69212: mov     r10, [rsi+838h]
 * 0000000140C69219: sub     eax, ecx
 * 0000000140C6921B: mov     r8, [rsi+0A78h]
 * 0000000140C69222: lea     rdx, [rcx+rsi]
 * 0000000140C69226: mov     ecx, eax
 * 0000000140C69228: shr     rcx, 3
 * 0000000140C6922C: lea     r9, [rdx+rcx*8]
 * 0000000140C69230: jmp     short loc_140C69253
 * 0000000140C69232: xor     [rdx], r8
 * 0000000140C69235: mov     rax, [rdx]
 * 0000000140C69238: movzx   ecx, r8b
 * 0000000140C6923C: xor     rax, r10
 * 0000000140C6923F: and     ecx, 3Fh
 * 0000000140C69242: ror     r8, cl
 * 0000000140C69245: add     r8, rax
 * 0000000140C69248: xor     r8, 0F05h
 * 0000000140C6924F: add     rdx, 8
 * 0000000140C69253: cmp     rdx, r9
 * 0000000140C69256: jnz     short loc_140C69232
 * 0000000140C69258: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C69260: cmp     r8, [rsi+0A80h]
 * 0000000140C69267: jz      short loc_140C692AA
 * 0000000140C69269: mov     ecx, [rsi+804h]
 * 0000000140C6926F: mov     rax, [rsi+588h]
 * 0000000140C69276: mov     [rax], rsi
 * 0000000140C69279: mov     [rax+10h], ecx
 * 0000000140C6927C: mov     rcx, [rsi+0A80h]
 * 0000000140C69283: cmp     [rsi+918h], r13d
 * 0000000140C6928A: jnz     short loc_140C6929A
 * 0000000140C6928C: mov     rax, [rsi+588h]
 * 0000000140C69293: xor     rcx, r8
 * 0000000140C69296: mov     [rax+18h], rcx
 * 0000000140C6929A: xor     edx, edx
 * 0000000140C6929C: mov     r9d, 100h
 * 0000000140C692A2: mov     rcx, rsi
 * 0000000140C692A5: call    sub_140C7F03C
 * 0000000140C692AA: mov     rbx, rsi
 * 0000000140C692AD: jmp     loc_140C6958D
 * 0000000140C692B2: mov     r15d, [rsi+804h]
 * 0000000140C692B9: mov     r13d, 20h ; ' '
 * 0000000140C692BF: mov     r9d, [rsi+858h]
 * 0000000140C692C6: cmp     r9d, 7
 * 0000000140C692CA: mov     r8d, [rsi+944h]
 * 0000000140C692D1: mov     [rbp+7B0h+var_830], r9d
 * 0000000140C692D5: lea     r10d, [r13-20h]
 * 0000000140C692D9: mov     dword ptr [rbp+7B0h+arg_8], r15d
 * 0000000140C692E0: lea     eax, [r15+30h]
 * 0000000140C692E4: cmovnz  r13d, r10d
 * 0000000140C692E8: cmp     eax, [rsi+0A64h]
 * 0000000140C692EE: jbe     loc_140C693DD
 * 0000000140C692F4: mov     edx, eax
 * 0000000140C692F6: mov     rcx, rsi
 * 0000000140C692F9: call    sub_140C7E7A8
 * 0000000140C692FE: xor     r10d, r10d
 * 0000000140C69301: mov     rbx, rax
 * 0000000140C69304: test    rax, rax
 * 0000000140C69307: jz      loc_140C69595
 * 0000000140C6930D: mov     ecx, [rsi+9D8h]
 * 0000000140C69313: test    dil, cl
 * 0000000140C69316: jnz     loc_140C693D0
 * 0000000140C6931C: mov     eax, [rsi+804h]
 * 0000000140C69322: lea     r11d, [r10+1]
 * 0000000140C69326: mov     r9, [rsi+7E8h]
 * 0000000140C6932D: and     ecx, 10000000h
 * 0000000140C69333: neg     ecx
 * 0000000140C69335: mov     rcx, rsi
 * 0000000140C69338: sbb     edx, edx
 * 0000000140C6933A: and     edx, [rsi+944h]
 * 0000000140C69340: cmp     eax, 8
 * 0000000140C69343: jb      short loc_140C6935B
 * 0000000140C69345: mov     r8d, eax
 * 0000000140C69348: shr     r8, 3
 * 0000000140C6934C: mov     [rcx], r10
 * 0000000140C6934F: add     eax, 0FFFFFFF8h
 * 0000000140C69352: add     rcx, 8
 * 0000000140C69356: sub     r8, r11
 * 0000000140C69359: jnz     short loc_140C6934C
 * 0000000140C6935B: test    eax, eax
 * 0000000140C6935D: jz      short loc_140C69370
 * 0000000140C6935F: mov     r8d, 0FFFFFFFFh
 * 0000000140C69365: mov     [rcx], r10b
 * 0000000140C69368: add     rcx, r11
 * 0000000140C6936B: add     eax, r8d
 * 0000000140C6936E: jnz     short loc_140C69365
 * 0000000140C69370: mov     r15d, [rbx+944h]
 * 0000000140C69377: mov     [rbx+944h], edx
 * 0000000140C6937D: cmp     edx, 3
 * 0000000140C69380: jz      short loc_140C693B0
 * 0000000140C69382: test    dword ptr [rbx+9D8h], 8000000h
 * 0000000140C6938C: jnz     short loc_140C693A7
 * 0000000140C6938E: test    edx, edx
 * 0000000140C69390: jz      short loc_140C693A7
 * 0000000140C69392: mov     rax, [rbx+238h]
 * 0000000140C69399: lea     rcx, [r9-8]
 * 0000000140C6939D: mov     rdx, [rcx]
 * 0000000140C693A0: call    KeGuardDispatchICall
 * 0000000140C693A5: jmp     short loc_140C693BF
 * 0000000140C693A7: mov     rax, [rbx+108h]
 * 0000000140C693AE: jmp     short loc_140C693B7
 * 0000000140C693B0: mov     rax, [rbx+370h]
 * 0000000140C693B7: mov     rcx, r9
 * 0000000140C693BA: call    KeGuardDispatchICall
 * 0000000140C693BF: mov     [rbx+944h], r15d
 * 0000000140C693C6: xor     r10d, r10d
 * 0000000140C693C9: mov     r15d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C693D0: and     dword ptr [rbx+9D8h], 0FFFFFFFDh
 * 0000000140C693D7: mov     r9d, [rbp+7B0h+var_830]
 * 0000000140C693DB: jmp     short loc_140C693E6
 * 0000000140C693DD: mov     rbx, rsi
 * 0000000140C693E0: mov     [rsi+804h], eax
 * 0000000140C693E6: add     r15, rbx
 * 0000000140C693E9: mov     r8d, 1
 * 0000000140C693EF: add     [rbx+82Ch], r8d
 * 0000000140C693F6: mov     [rbp+7B0h+arg_8], r15
 * 0000000140C693FD: mov     [rbp+7B0h+var_1F0], r15
 * 0000000140C69404: test    rbx, rbx
 * 0000000140C69407: jz      loc_140C69595
 * 0000000140C6940D: lea     ecx, [r8+2Fh]
 * 0000000140C69411: mov     rax, r15
 * 0000000140C69414: lea     edx, [rcx-2Ah]
 * 0000000140C69417: mov     [rax], r10
 * 0000000140C6941A: add     ecx, 0FFFFFFF8h
 * 0000000140C6941D: add     rax, 8
 * 0000000140C69421: sub     rdx, r8
 * 0000000140C69424: jnz     short loc_140C69417
 * 0000000140C69426: test    ecx, ecx
 * 0000000140C69428: jz      short loc_140C69439
 * 0000000140C6942A: mov     edx, 0FFFFFFFFh
 * 0000000140C6942F: mov     [rax], r10b
 * 0000000140C69432: add     rax, r8
 * 0000000140C69435: add     ecx, edx
 * 0000000140C69437: jnz     short loc_140C6942F
 * 0000000140C69439: mov     [r15], r13d
 * 0000000140C6943C: mov     [r15+8], r14
 * 0000000140C69440: cmp     r9d, 7
 * 0000000140C69444: jnz     short loc_140C6945D
 * 0000000140C69446: test    r12d, r12d
 * 0000000140C69449: jz      short loc_140C6945D
 * 0000000140C6944B: lea     r9, [r15+18h]
 * 0000000140C6944F: mov     r8d, r12d
 * 0000000140C69452: mov     rdx, r14
 * 0000000140C69455: mov     rcx, rbx
 * 0000000140C69458: call    sub_140553D6C
 * 0000000140C6945D: mov     [r15+10h], r12d
 * 0000000140C69461: lea     rcx, [r14+r12]
 * 0000000140C69465: add     [rbx+848h], r12d
 * 0000000140C6946C: mov     r9, r14
 * 0000000140C6946F: mov     r10d, [rbx+834h]
 * 0000000140C69476: mov     rax, r14
 * 0000000140C69479: mov     rsi, [rbx+838h]
 * 0000000140C69480: cmp     r14, rcx
 * 0000000140C69483: jnb     short loc_140C69495
 * 0000000140C69485: mov     edx, 40h ; '@'
 * 0000000140C6948A: prefetchnta byte ptr [rax]
 * 0000000140C6948D: add     rax, rdx
 * 0000000140C69490: cmp     rax, rcx
 * 0000000140C69493: jb      short loc_140C6948A
 * 0000000140C69495: mov     r11d, r12d
 * 0000000140C69498: mov     r8, rsi
 * 0000000140C6949B: shr     r11d, 7
 * 0000000140C6949F: test    r11d, r11d
 * 0000000140C694A2: jz      short loc_140C69519
 * 0000000140C694A4: mov     edi, 1
 * 0000000140C694A9: mov     r15d, 0FFFFFFFFh
 * 0000000140C694AF: mov     r12, 7010008004002001h
 * 0000000140C694B9: mov     eax, 8
 * 0000000140C694BE: xor     r8, [r9]
 * 0000000140C694C1: mov     ecx, r10d
 * 0000000140C694C4: rol     r8, cl
 * 0000000140C694C7: xor     r8, [r9+8]
 * 0000000140C694CB: add     r9, 10h
 * 0000000140C694CF: rol     r8, cl
 * 0000000140C694D2: sub     rax, rdi
 * 0000000140C694D5: jnz     short loc_140C694BE
 * 0000000140C694D7: mov     rcx, r9
 * 0000000140C694DA: sub     rcx, r14
 * 0000000140C694DD: xor     rcx, rsi
 * 0000000140C694E0: mov     rax, rcx
 * 0000000140C694E3: rol     rax, 11h
 * 0000000140C694E7: xor     rcx, rax
 * 0000000140C694EA: mov     rax, r12
 * 0000000140C694ED: mul     rcx
 * 0000000140C694F0: mov     [rbp+7B0h+var_4C8], rdx
 * 0000000140C694F7: xor     rdx, rax
 * 0000000140C694FA: xor     r10d, edx
 * 0000000140C694FD: and     r10d, 3Fh
 * 0000000140C69501: cmovz   r10d, edi
 * 0000000140C69505: add     r11d, r15d
 * 0000000140C69508: jnz     short loc_140C694B9
 * 0000000140C6950A: mov     r15, [rbp+7B0h+arg_8]
 * 0000000140C69511: lea     edi, [r11+2]
 * 0000000140C69515: mov     r12d, [rbp+7B0h+var_7C8]
 * 0000000140C69519: mov     edx, r12d
 * 0000000140C6951C: mov     r11d, 1
 * 0000000140C69522: and     edx, 7Fh
 * 0000000140C69525: cmp     edx, 8
 * 0000000140C69528: jb      short loc_140C69545
 * 0000000140C6952A: mov     eax, edx
 * 0000000140C6952C: shr     rax, 3
 * 0000000140C69530: xor     r8, [r9]
 * 0000000140C69533: mov     ecx, r10d
 * 0000000140C69536: rol     r8, cl
 * 0000000140C69539: add     r9, 8
 * 0000000140C6953D: add     edx, 0FFFFFFF8h
 * 0000000140C69540: sub     rax, r11
 * 0000000140C69543: jnz     short loc_140C69530
 * 0000000140C69545: test    edx, edx
 * 0000000140C69547: jz      short loc_140C69565
 * 0000000140C69549: mov     edi, 0FFFFFFFFh
 * 0000000140C6954E: movzx   eax, byte ptr [r9]
 * 0000000140C69552: mov     ecx, r10d
 * 0000000140C69555: xor     r8, rax
 * 0000000140C69558: add     r9, r11
 * 0000000140C6955B: rol     r8, cl
 * 0000000140C6955E: add     edx, edi
 * 0000000140C69560: jnz     short loc_140C6954E
 * 0000000140C69562: lea     edi, [rdx+2]
 * 0000000140C69565: mov     rax, r8
 * 0000000140C69568: jmp     short loc_140C6956D
 * 0000000140C6956A: xor     r8d, eax
 * 0000000140C6956D: shr     rax, 1Fh
 * 0000000140C69571: test    rax, rax
 * 0000000140C69574: jnz     short loc_140C6956A
 * 0000000140C69576: btr     r8d, 1Fh
 * 0000000140C6957B: mov     [r15+14h], r8d
 * 0000000140C6957F: add     [rbx+848h], r12d
 * 0000000140C69586: add     [rbx+9B8h], r11d
 * 0000000140C6958D: mov     rsi, rbx
 * 0000000140C69590: mov     [rsp+8B0h+var_838], rbx
 * 0000000140C69595: mov     eax, [rsi+9DCh]
 * 0000000140C6959B: mov     r11d, 1000h
 * 0000000140C695A1: test    al, 8
 * 0000000140C695A3: jz      loc_140C69802
 * 0000000140C695A9: test    r11d, eax
 * 0000000140C695AC: jnz     loc_140C69802
 * 0000000140C695B2: rdtsc
 * 0000000140C695B4: shl     rdx, 20h
 * 0000000140C695B8: mov     rbx, 7010008004002001h
 * 0000000140C695C2: or      rax, rdx
 * 0000000140C695C5: mov     rcx, rax
 * 0000000140C695C8: ror     rcx, 3
 * 0000000140C695CC: xor     rcx, rax
 * 0000000140C695CF: mov     rax, rbx
 * 0000000140C695D2: mul     rcx
 * 0000000140C695D5: mov     [rbp+7B0h+var_4C0], rdx
 * 0000000140C695DC: xor     rdx, rax
 * 0000000140C695DF: test    dl, 3
 * 0000000140C695E2: jnz     loc_140C69802
 * 0000000140C695E8: mov     rax, [rsi+100h]
 * 0000000140C695EF: mov     ecx, 40h ; '@'
 * 0000000140C695F4: mov     r8d, [rsi+830h]
 * 0000000140C695FB: mov     rdx, [rsi+778h]
 * 0000000140C69602: call    KeGuardDispatchICall
 * 0000000140C69607: xor     r12d, r12d
 * 0000000140C6960A: mov     r15, rax
 * 0000000140C6960D: test    rax, rax
 * 0000000140C69610: jnz     short loc_140C6961D
 * 0000000140C69612: mov     r11d, 1000h
 * 0000000140C69618: jmp     loc_140C69805
 * 0000000140C6961D: mov     rax, [rsi+1B8h]
 * 0000000140C69624: mov     rcx, r15
 * 0000000140C69627: movzx   edx, word ptr [rsi+780h]
 * 0000000140C6962E: call    KeGuardDispatchICall
 * 0000000140C69633: mov     rcx, [rsi+6F8h]
 * 0000000140C6963A: mov     rax, [rsi+510h]
 * 0000000140C69641: mov     r14d, [rcx+rax]
 * 0000000140C69645: test    r14d, r14d
 * 0000000140C69648: jz      short loc_140C69675
 * 0000000140C6964A: rdtsc
 * 0000000140C6964C: shl     rdx, 20h
 * 0000000140C69650: or      rax, rdx
 * 0000000140C69653: mov     rcx, rax
 * 0000000140C69656: ror     rcx, 3
 * 0000000140C6965A: xor     rcx, rax
 * 0000000140C6965D: mov     rax, rbx
 * 0000000140C69660: mul     rcx
 * 0000000140C69663: mov     [rbp+7B0h+var_4B8], rdx
 * 0000000140C6966A: xor     rax, rdx
 * 0000000140C6966D: xor     edx, edx
 * 0000000140C6966F: div     r14
 * 0000000140C69672: mov     r14, rdx
 * 0000000140C69675: mov     rax, [rsi+3B8h]
 * 0000000140C6967C: xor     ecx, ecx
 * 0000000140C6967E: call    KeGuardDispatchICall
 * 0000000140C69683: mov     rbx, rax
 * 0000000140C69686: test    rax, rax
 * 0000000140C69689: jz      short loc_140C696B0
 * 0000000140C6968B: mov     r13d, 0FFFFFFFFh
 * 0000000140C69691: mov     rcx, rbx
 * 0000000140C69694: test    r14d, r14d
 * 0000000140C69697: jz      short loc_140C696C4
 * 0000000140C69699: mov     rax, [rsi+3B8h]
 * 0000000140C696A0: add     r14d, r13d
 * 0000000140C696A3: call    KeGuardDispatchICall
 * 0000000140C696A8: mov     rbx, rax
 * 0000000140C696AB: test    rax, rax
 * 0000000140C696AE: jnz     short loc_140C69691
 * 0000000140C696B0: mov     rax, [rsi+108h]
 * 0000000140C696B7: mov     rcx, r15
 * 0000000140C696BA: call    KeGuardDispatchICall
 * 0000000140C696BF: jmp     loc_140C69612
 * 0000000140C696C4: mov     rax, [rsi+3A8h]
 * 0000000140C696CB: call    KeGuardDispatchICall
 * 0000000140C696D0: mov     rcx, rbx
 * 0000000140C696D3: test    eax, eax
 * 0000000140C696D5: jns     short loc_140C696E5
 * 0000000140C696D7: mov     rax, [rsi+3C0h]
 * 0000000140C696DE: call    KeGuardDispatchICall
 * 0000000140C696E3: jmp     short loc_140C696B0
 * 0000000140C696E5: mov     rax, [rsi+440h]
 * 0000000140C696EC: lea     rdx, [rbp+7B0h+var_70]
 * 0000000140C696F3: call    KeGuardDispatchICall
 * 0000000140C696F8: mov     rax, [rsi+1D8h]
 * 0000000140C696FF: xor     r9d, r9d
 * 0000000140C69702: xor     r8d, r8d
 * 0000000140C69705: mov     [rsp+8B0h+BugCheckParameter4], r12
 * 0000000140C6970A: mov     rdx, r15
 * 0000000140C6970D: mov     rcx, rbx
 * 0000000140C69710: call    KeGuardDispatchICall
 * 0000000140C69715: rdtsc
 * 0000000140C69717: shl     rdx, 20h
 * 0000000140C6971B: or      rax, rdx
 * 0000000140C6971E: mov     rcx, rax
 * 0000000140C69721: ror     rcx, 3
 * 0000000140C69725: xor     rcx, rax
 * 0000000140C69728: mov     rax, 7010008004002001h
 * 0000000140C69732: mul     rcx
 * 0000000140C69735: mov     rcx, r15
 * 0000000140C69738: mov     rbx, rdx
 * 0000000140C6973B: mov     [rbp+7B0h+var_240], rdx
 * 0000000140C69742: xor     rbx, rax
 * 0000000140C69745: mov     rax, [rsi+1D0h]
 * 0000000140C6974C: call    KeGuardDispatchICall
 * 0000000140C69751: mov     ecx, eax
 * 0000000140C69753: xor     edx, edx
 * 0000000140C69755: mov     rax, rbx
 * 0000000140C69758: div     rcx
 * 0000000140C6975B: mov     rbx, rdx
 * 0000000140C6975E: cli
 * 0000000140C6975F: sti
 * 0000000140C69760: mov     rax, [rsi+1B0h]
 * 0000000140C69767: lea     rcx, [rbp+7B0h+var_4D8]
 * 0000000140C6976E: xor     edx, edx
 * 0000000140C69770: call    KeGuardDispatchICall
 * 0000000140C69775: mov     rax, [rsi+1C0h]
 * 0000000140C6977C: lea     rcx, [rbp+7B0h+var_238]
 * 0000000140C69783: mov     rdx, r15
 * 0000000140C69786: call    KeGuardDispatchICall
 * 0000000140C6978B: jmp     short loc_140C69794
 * 0000000140C6978D: test    ebx, ebx
 * 0000000140C6978F: jz      short loc_140C697B1
 * 0000000140C69791: add     ebx, r13d
 * 0000000140C69794: mov     rax, [rsi+1C8h]
 * 0000000140C6979B: lea     rdx, [rbp+7B0h+var_238]
 * 0000000140C697A2: lea     rcx, [rbp+7B0h+var_758]
 * 0000000140C697A6: call    KeGuardDispatchICall
 * 0000000140C697AB: test    eax, eax
 * 0000000140C697AD: jns     short loc_140C6978D
 * 0000000140C697AF: jmp     short loc_140C697C7
 * 0000000140C697B1: mov     rax, [rsi+1B0h]
 * 0000000140C697B8: lea     rcx, [rbp+7B0h+var_4D8]
 * 0000000140C697BF: mov     edx, [rbp+7B0h+var_758]
 * 0000000140C697C2: call    KeGuardDispatchICall
 * 0000000140C697C7: mov     rax, [rsi+1E0h]
 * 0000000140C697CE: lea     rdx, [rbp+7B0h+var_250]
 * 0000000140C697D5: lea     rcx, [rbp+7B0h+var_4D8]
 * 0000000140C697DC: call    KeGuardDispatchICall
 * 0000000140C697E1: mov     rax, [rsi+108h]
 * 0000000140C697E8: mov     rcx, r15
 * 0000000140C697EB: call    KeGuardDispatchICall
 * 0000000140C697F0: mov     r15d, 1
 * 0000000140C697F6: mov     r11d, 1000h
 * 0000000140C697FC: mov     [rbp+7B0h+var_7B0], r15d
 * 0000000140C69800: jmp     short loc_140C6980F
 * 0000000140C69802: xor     r12d, r12d
 * 0000000140C69805: mov     r15d, 1
 * 0000000140C6980B: mov     [rbp+7B0h+var_7B0], r12d
 * 0000000140C6980F: mov     [rbp+7B0h+var_750], r12
 * 0000000140C69813: lea     rax, [rbp+7B0h+var_748]
 * 0000000140C69817: mov     ecx, 4
 * 0000000140C6981C: mov     ebx, 0FFFFFFFFh
 * 0000000140C69821: mov     [rax], r12b
 * 0000000140C69824: add     rax, r15
 * 0000000140C69827: add     ecx, ebx
 * 0000000140C69829: jnz     short loc_140C69821
 * 0000000140C6982B: mov     eax, [rsi+84Ch]
 * 0000000140C69831: mov     edx, 28h ; '('
 * 0000000140C69836: mov     ecx, [rsi+840h]
 * 0000000140C6983C: mov     [rbp+7B0h+var_7C8], ecx
 * 0000000140C6983F: lea     r14d, [rdx-23h]
 * 0000000140C69843: cmp     [rsi+848h], eax
 * 0000000140C69849: jge     loc_140C773E1
 * 0000000140C6984F: mov     eax, [rsi+9D8h]
 * 0000000140C69855: mov     r8d, 88000h
 * 0000000140C6985B: and     eax, r8d
 * 0000000140C6985E: cmp     eax, r8d
 * 0000000140C69861: jz      short loc_140C69867
 * 0000000140C69863: mov     dr7, r12
 * 0000000140C69867: cmp     ecx, [rsi+82Ch]
 * 0000000140C6986D: jnz     short loc_140C6987C
 * 0000000140C6986F: add     [rsi+850h], r15d
 * 0000000140C69876: mov     ecx, r12d
 * 0000000140C69879: mov     [rbp+7B0h+var_7C8], ecx
 * 0000000140C6987C: mov     rax, [rsi+0AC0h]
 * 0000000140C69883: mov     r8, rsi
 * 0000000140C69886: test    rax, rax
 * 0000000140C69889: mov     r9d, r12d
 * 0000000140C6988C: cmovnz  r8, rax
 * 0000000140C69890: mov     r13d, [r8+828h]
 * 0000000140C69897: add     r13, r8
 * 0000000140C6989A: mov     [rsp+8B0h+var_860], r13
 * 0000000140C6989F: cmp     dword ptr [rbp+7B0h+var_750], r12d
 * 0000000140C698A3: jz      short loc_140C698BA
 * 0000000140C698A5: cmp     dword ptr [rbp+7B0h+var_750+4], ecx
 * 0000000140C698A8: ja      short loc_140C698BA
 * 0000000140C698AA: mov     r13d, [rbp+7B0h+var_748]
 * 0000000140C698AE: mov     r9d, dword ptr [rbp+7B0h+var_750+4]
 * 0000000140C698B2: add     r13, r8
 * 0000000140C698B5: mov     [rsp+8B0h+var_860], r13
 * 0000000140C698BA: cmp     r9d, ecx
 * 0000000140C698BD: jz      loc_140C699D0
 * 0000000140C698C3: mov     r10d, ecx
 * 0000000140C698C6: mov     rbx, 0AAAAAAAAAAAAAAABh
 * 0000000140C698D0: sub     r10d, r9d
 * 0000000140C698D3: mov     r9d, ecx
 * 0000000140C698D6: mov     ecx, [r13+0]
 * 0000000140C698DA: sub     ecx, 1
 * 0000000140C698DD: jz      loc_140C6999C
 * 0000000140C698E3: sub     ecx, 6
 * 0000000140C698E6: jz      loc_140C6998E
 * 0000000140C698EC: sub     ecx, 1
 * 0000000140C698EF: jz      loc_140C69981
 * 0000000140C698F5: sub     ecx, edi
 * 0000000140C698F7: jz      short loc_140C69975
 * 0000000140C698F9: sub     ecx, 12h
 * 0000000140C698FC: jz      short loc_140C6996E
 * 0000000140C698FE: sub     ecx, edi
 * 0000000140C69900: jz      short loc_140C69942
 * 0000000140C69902: sub     ecx, 3
 * 0000000140C69905: jz      short loc_140C6991A
 * 0000000140C69907: cmp     ecx, 0Ah
 * 0000000140C6990A: jz      loc_140C6999C
 * 0000000140C69910: mov     eax, 30h ; '0'
 * 0000000140C69915: jmp     loc_140C699B1
 * 0000000140C6991A: mov     ecx, [r13+20h]
 * 0000000140C6991E: mov     edx, [r13+28h]
 * 0000000140C69922: and     ecx, 0FFFh
 * 0000000140C69928: add     rdx, 0FFFh
 * 0000000140C6992F: add     rdx, rcx
 * 0000000140C69932: shr     rdx, 0Ch
 * 0000000140C69936: lea     eax, [rdx+rdx*4]
 * 0000000140C69939: lea     eax, ds:30h[rax*4]
 * 0000000140C69940: jmp     short loc_140C699B1
 * 0000000140C69942: mov     eax, [r13+24h]
 * 0000000140C69946: lea     ecx, [rax-1]
 * 0000000140C69949: neg     eax
 * 0000000140C6994B: sbb     eax, eax
 * 0000000140C6994D: and     ecx, eax
 * 0000000140C6994F: mov     rax, rbx
 * 0000000140C69952: mul     rcx
 * 0000000140C69955: movzx   eax, word ptr [r13+28h]
 * 0000000140C6995A: shr     rdx, 3
 * 0000000140C6995E: add     edx, 7
 * 0000000140C69961: and     edx, 0FFFFFFF8h
 * 0000000140C69964: add     eax, edi
 * 0000000140C69966: lea     eax, [rax+rax*2]
 * 0000000140C69969: lea     eax, [rdx+rax*8]
 * 0000000140C6996C: jmp     short loc_140C699B1
 * 0000000140C6996E: movzx   eax, word ptr [r13+28h]
 * 0000000140C69973: jmp     short loc_140C69986
 * 0000000140C69975: mov     eax, [r13+1Ch]
 * 0000000140C69979: add     eax, 3
 * 0000000140C6997C: shl     eax, 4
 * 0000000140C6997F: jmp     short loc_140C699B1
 * 0000000140C69981: movzx   eax, word ptr [r13+20h]
 * 0000000140C69986: add     eax, 37h ; '7'
 * 0000000140C69989: and     eax, 0FFFFFFF8h
 * 0000000140C6998C: jmp     short loc_140C699B1
 * 0000000140C6998E: mov     eax, [r13+18h]
 * 0000000140C69992: add     eax, edi
 * 0000000140C69994: lea     eax, [rax+rax*2]
 * 0000000140C69997: shl     eax, 3
 * 0000000140C6999A: jmp     short loc_140C699B1
 * 0000000140C6999C: mov     ecx, [r13+10h]
 * 0000000140C699A0: mov     rax, rbx
 * 0000000140C699A3: mul     rcx
 * 0000000140C699A6: shr     rdx, 3
 * 0000000140C699AA: lea     eax, ds:30h[rdx*4]
 * 0000000140C699B1: add     r13, rax
 * 0000000140C699B4: sub     r10, r15
 * 0000000140C699B7: jnz     loc_140C698D6
 * 0000000140C699BD: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C699C2: lea     edx, [r10+28h]
 * 0000000140C699C6: mov     [rsp+8B0h+var_860], r13
 * 0000000140C699CB: mov     ebx, 0FFFFFFFFh
 * 0000000140C699D0: mov     eax, r13d
 * 0000000140C699D3: mov     dword ptr [rbp+7B0h+var_750], r15d
 * 0000000140C699D7: sub     eax, r8d
 * 0000000140C699DA: mov     dword ptr [rbp+7B0h+var_750+4], r9d
 * 0000000140C699DE: mov     [rbp+7B0h+var_748], eax
 * 0000000140C699E1: mov     r10d, [r13+0]
 * 0000000140C699E5: mov     [rsp+8B0h+var_850], r10d
 * 0000000140C699EA: cmp     r10d, 1Eh
 * 0000000140C699EE: jg      loc_140C715E0
 * 0000000140C699F4: jz      loc_140C70D43
 * 0000000140C699FA: mov     eax, 0Fh
 * 0000000140C699FF: cmp     r10d, eax
 * 0000000140C69A02: jg      loc_140C6BD95
 * 0000000140C69A08: jz      loc_140C6BAA9
 * 0000000140C69A0E: mov     ecx, r10d
 * 0000000140C69A11: test    r10d, r10d
 * 0000000140C69A14: jz      loc_140C6B775
 * 0000000140C69A1A: sub     ecx, 1
 * 0000000140C69A1D: jz      loc_140C763EA
 * 0000000140C69A23: sub     ecx, 3
 * 0000000140C69A26: jz      loc_140C6B337
 * 0000000140C69A2C: sub     ecx, 1
 * 0000000140C69A2F: jz      loc_140C6AD8A
 * 0000000140C69A35: sub     ecx, edi
 * 0000000140C69A37: jz      loc_140C6AB66
 * 0000000140C69A3D: sub     ecx, 1
 * 0000000140C69A40: jz      loc_140C6A3F7
 * 0000000140C69A46: sub     ecx, edi
 * 0000000140C69A48: jz      loc_140C6A035
 * 0000000140C69A4E: cmp     ecx, 3
 * 0000000140C69A51: jnz     loc_140C740DB
 * 0000000140C69A57: mov     r14, [r13+8]
 * 0000000140C69A5B: mov     r8d, [r13+10h]
 * 0000000140C69A5F: mov     r9, r14
 * 0000000140C69A62: add     [rsi+848h], r8d
 * 0000000140C69A69: mov     rax, r14
 * 0000000140C69A6C: mov     r10d, [rsi+834h]
 * 0000000140C69A73: mov     r15, [rsi+838h]
 * 0000000140C69A7A: lea     rcx, [r14+r8]
 * 0000000140C69A7E: cmp     r14, rcx
 * 0000000140C69A81: jnb     short loc_140C69A93
 * 0000000140C69A83: mov     edx, 40h ; '@'
 * 0000000140C69A88: prefetchnta byte ptr [rax]
 * 0000000140C69A8B: add     rax, rdx
 * 0000000140C69A8E: cmp     rax, rcx
 * 0000000140C69A91: jb      short loc_140C69A88
 * 0000000140C69A93: mov     r11d, r8d
 * 0000000140C69A96: mov     rbx, r15
 * 0000000140C69A99: shr     r11d, 7
 * 0000000140C69A9D: mov     edx, 1
 * 0000000140C69AA2: test    r11d, r11d
 * 0000000140C69AA5: jz      short loc_140C69B14
 * 0000000140C69AA7: mov     edi, 0FFFFFFFFh
 * 0000000140C69AAC: mov     rsi, 7010008004002001h
 * 0000000140C69AB6: mov     eax, 8
 * 0000000140C69ABB: xor     rbx, [r9]
 * 0000000140C69ABE: mov     ecx, r10d
 * 0000000140C69AC1: rol     rbx, cl
 * 0000000140C69AC4: xor     rbx, [r9+8]
 * 0000000140C69AC8: add     r9, 10h
 * 0000000140C69ACC: rol     rbx, cl
 * 0000000140C69ACF: sub     rax, rdx
 * 0000000140C69AD2: jnz     short loc_140C69ABB
 * 0000000140C69AD4: mov     rcx, r9
 * 0000000140C69AD7: sub     rcx, r14
 * 0000000140C69ADA: xor     rcx, r15
 * 0000000140C69ADD: mov     rax, rcx
 * 0000000140C69AE0: rol     rax, 11h
 * 0000000140C69AE4: xor     rcx, rax
 * 0000000140C69AE7: mov     rax, rsi
 * 0000000140C69AEA: mul     rcx
 * 0000000140C69AED: mov     [rbp+7B0h+var_338], rdx
 * 0000000140C69AF4: xor     rdx, rax
 * 0000000140C69AF7: xor     r10d, edx
 * 0000000140C69AFA: mov     edx, 1
 * 0000000140C69AFF: and     r10d, 3Fh
 * 0000000140C69B03: cmovz   r10d, edx
 * 0000000140C69B07: add     r11d, edi
 * 0000000140C69B0A: jnz     short loc_140C69AB6
 * 0000000140C69B0C: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C69B11: lea     edi, [rdx+1]
 * 0000000140C69B14: and     r8d, 7Fh
 * 0000000140C69B18: cmp     r8d, 8
 * 0000000140C69B1C: jb      short loc_140C69B3B
 * 0000000140C69B1E: mov     eax, r8d
 * 0000000140C69B21: shr     rax, 3
 * 0000000140C69B25: xor     rbx, [r9]
 * 0000000140C69B28: mov     ecx, r10d
 * 0000000140C69B2B: rol     rbx, cl
 * 0000000140C69B2E: add     r9, 8
 * 0000000140C69B32: add     r8d, 0FFFFFFF8h
 * 0000000140C69B36: sub     rax, rdx
 * 0000000140C69B39: jnz     short loc_140C69B25
 * 0000000140C69B3B: test    r8d, r8d
 * 0000000140C69B3E: jz      short loc_140C69B5E
 * 0000000140C69B40: mov     edi, 0FFFFFFFFh
 * 0000000140C69B45: movzx   eax, byte ptr [r9]
 * 0000000140C69B49: mov     ecx, r10d
 * 0000000140C69B4C: xor     rbx, rax
 * 0000000140C69B4F: add     r9, rdx
 * 0000000140C69B52: rol     rbx, cl
 * 0000000140C69B55: add     r8d, edi
 * 0000000140C69B58: jnz     short loc_140C69B45
 * 0000000140C69B5A: lea     edi, [r8+2]
 * 0000000140C69B5E: mov     rax, rbx
 * 0000000140C69B61: jmp     short loc_140C69B65
 * 0000000140C69B63: xor     ebx, eax
 * 0000000140C69B65: shr     rax, 1Fh
 * 0000000140C69B69: test    rax, rax
 * 0000000140C69B6C: jnz     short loc_140C69B63
 * 0000000140C69B6E: btr     ebx, 1Fh
 * 0000000140C69B72: cmp     ebx, [r13+14h]
 * 0000000140C69B76: jz      loc_140C69C5A
 * 0000000140C69B7C: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C69B81: mov     eax, [r13+18h]
 * 0000000140C69B85: test    dl, al
 * 0000000140C69B87: jz      short loc_140C69B9A
 * 0000000140C69B89: mov     rax, [rsi+578h]
 * 0000000140C69B90: mov     cl, [rax]
 * 0000000140C69B92: test    cl, cl
 * 0000000140C69B94: jnz     loc_140C69C5A
 * 0000000140C69B9A: mov     ecx, [r13+10h]
 * 0000000140C69B9E: mov     rdx, [r13+8]
 * 0000000140C69BA2: test    rcx, rcx
 * 0000000140C69BA5: jz      loc_140C69CF4
 * 0000000140C69BAB: mov     eax, [rsi+9DCh]
 * 0000000140C69BB1: mov     r8d, 40h ; '@'
 * 0000000140C69BB7: test    r8b, al
 * 0000000140C69BBA: jz      loc_140C69CF4
 * 0000000140C69BC0: mov     r13, cr8
 * 0000000140C69BC4: mov     cr8, rdi
 * 0000000140C69BC8: mov     r14, rdx
 * 0000000140C69BCB: lea     rax, [rcx-1]
 * 0000000140C69BCF: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C69BD6: add     rax, rdx
 * 0000000140C69BD9: or      rax, 0FFFh
 * 0000000140C69BDF: mov     [rsp+8B0h+var_840], rax
 * 0000000140C69BE4: lea     rax, [r14-1]
 * 0000000140C69BE8: mov     [rsp+8B0h+var_858], rax
 * 0000000140C69BED: movzx   r12d, r13b
 * 0000000140C69BF1: mov     r15d, r12d
 * 0000000140C69BF4: mov     rax, [rsi+468h]
 * 0000000140C69BFB: xor     edx, edx
 * 0000000140C69BFD: mov     rcx, r14
 * 0000000140C69C00: call    KeGuardDispatchICall
 * 0000000140C69C05: cmp     eax, 0C000022Dh
 * 0000000140C69C0A: jnz     short loc_140C69C27
 * 0000000140C69C0C: mov     eax, 1
 * 0000000140C69C11: cmp     r13b, al
 * 0000000140C69C14: ja      short loc_140C69C32
 * 0000000140C69C16: movzx   r15d, r13b
 * 0000000140C69C1A: mov     cr8, r15
 * 0000000140C69C1E: mov     al, [r14]
 * 0000000140C69C21: mov     cr8, rdi
 * 0000000140C69C25: jmp     short loc_140C69BF4
 * 0000000140C69C27: mov     r15, r12
 * 0000000140C69C2A: test    eax, eax
 * 0000000140C69C2C: js      loc_140C69CE8
 * 0000000140C69C32: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C69C37: mov     ecx, 1000h
 * 0000000140C69C3C: add     rax, rcx
 * 0000000140C69C3F: add     r14, rcx
 * 0000000140C69C42: mov     [rsp+8B0h+var_858], rax
 * 0000000140C69C47: cmp     rax, [rsp+8B0h+var_840]
 * 0000000140C69C4C: jnz     short loc_140C69BED
 * 0000000140C69C4E: mov     cr8, r15
 * 0000000140C69C52: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C69C57: xor     r12d, r12d
 * 0000000140C69C5A: mov     ebx, 1
 * 0000000140C69C5F: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C69C69: jz      loc_140C770FB
 * 0000000140C69C6F: mov     r8d, [r13+10h]
 * 0000000140C69C73: test    r8d, r8d
 * 0000000140C69C76: jz      loc_140C770FB
 * 0000000140C69C7C: mov     rdx, [r13+8]
 * 0000000140C69C80: lea     r9, [rbp+7B0h+var_318]
 * 0000000140C69C87: mov     rcx, rsi
 * 0000000140C69C8A: call    sub_140553D6C
 * 0000000140C69C8F: mov     edx, 10h
 * 0000000140C69C94: lea     r8, [r13+1Ch]
 * 0000000140C69C98: lea     r9, [rbp+7B0h+var_318]
 * 0000000140C69C9F: mov     rcx, [r9]
 * 0000000140C69CA2: add     r9, 8
 * 0000000140C69CA6: mov     rax, [r8]
 * 0000000140C69CA9: add     r8, 8
 * 0000000140C69CAD: cmp     rcx, rax
 * 0000000140C69CB0: jnz     loc_140C69E3C
 * 0000000140C69CB6: add     edx, 0FFFFFFF8h
 * 0000000140C69CB9: cmp     edx, 8
 * 0000000140C69CBC: jnb     short loc_140C69C9F
 * 0000000140C69CBE: test    edx, edx
 * 0000000140C69CC0: jz      loc_140C6A023
 * 0000000140C69CC6: mov     cl, [r9]
 * 0000000140C69CC9: add     r9, rbx
 * 0000000140C69CCC: mov     al, [r8]
 * 0000000140C69CCF: add     r8, rbx
 * 0000000140C69CD2: cmp     cl, al
 * 0000000140C69CD4: jnz     loc_140C69E3C
 * 0000000140C69CDA: mov     eax, 0FFFFFFFFh
 * 0000000140C69CDF: add     edx, eax
 * 0000000140C69CE1: jnz     short loc_140C69CC6
 * 0000000140C69CE3: jmp     loc_140C6A023
 * 0000000140C69CE8: mov     cr8, r12
 * 0000000140C69CEC: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C69CF1: xor     r12d, r12d
 * 0000000140C69CF4: mov     eax, [r13+14h]
 * 0000000140C69CF8: cmp     [rsi+918h], r12d
 * 0000000140C69CFF: jnz     short loc_140C69D11
 * 0000000140C69D01: mov     ecx, ebx
 * 0000000140C69D03: xor     rcx, rax
 * 0000000140C69D06: mov     rax, [rsi+588h]
 * 0000000140C69D0D: mov     [rax+18h], rcx
 * 0000000140C69D11: mov     ebx, 1
 * 0000000140C69D16: mov     rcx, [r13+8]
 * 0000000140C69D1A: cmp     [rsi+918h], r12d
 * 0000000140C69D21: jnz     loc_140C69C5F
 * 0000000140C69D27: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C69D31: add     rax, rsi
 * 0000000140C69D34: mov     [rsi+920h], rax
 * 0000000140C69D3B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C69D45: add     rax, r13
 * 0000000140C69D48: mov     [rsi+928h], rax
 * 0000000140C69D4F: movsxd  rax, dword ptr [r13+0]
 * 0000000140C69D53: mov     [rsi+930h], rax
 * 0000000140C69D5A: mov     [rsi+938h], rcx
 * 0000000140C69D61: mov     [rsi+918h], ebx
 * 0000000140C69D67: mov     ecx, [rsi+9D8h]
 * 0000000140C69D6D: bt      ecx, 1Dh
 * 0000000140C69D71: jb      loc_140C69C5F
 * 0000000140C69D77: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C69D81: jz      loc_140C69C5F
 * 0000000140C69D87: test    bl, cl
 * 0000000140C69D89: jz      loc_140C69C5F
 * 0000000140C69D8F: mov     ecx, [rsi+0A74h]
 * 0000000140C69D95: mov     eax, [rsi+804h]
 * 0000000140C69D9B: mov     r10, [rsi+838h]
 * 0000000140C69DA2: sub     eax, ecx
 * 0000000140C69DA4: mov     r8, [rsi+0A78h]
 * 0000000140C69DAB: lea     rdx, [rcx+rsi]
 * 0000000140C69DAF: mov     ecx, eax
 * 0000000140C69DB1: shr     rcx, 3
 * 0000000140C69DB5: lea     r9, [rdx+rcx*8]
 * 0000000140C69DB9: jmp     short loc_140C69DDC
 * 0000000140C69DBB: xor     [rdx], r8
 * 0000000140C69DBE: mov     rax, [rdx]
 * 0000000140C69DC1: movzx   ecx, r8b
 * 0000000140C69DC5: xor     rax, r10
 * 0000000140C69DC8: and     ecx, 3Fh
 * 0000000140C69DCB: ror     r8, cl
 * 0000000140C69DCE: add     r8, rax
 * 0000000140C69DD1: xor     r8, 0F05h
 * 0000000140C69DD8: add     rdx, 8
 * 0000000140C69DDC: cmp     rdx, r9
 * 0000000140C69DDF: jnz     short loc_140C69DBB
 * 0000000140C69DE1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C69DE9: cmp     r8, [rsi+0A80h]
 * 0000000140C69DF0: jz      loc_140C69C5F
 * 0000000140C69DF6: mov     ecx, [rsi+804h]
 * 0000000140C69DFC: mov     rax, [rsi+588h]
 * 0000000140C69E03: mov     [rax], rsi
 * 0000000140C69E06: mov     [rax+10h], ecx
 * 0000000140C69E09: mov     rcx, [rsi+0A80h]
 * 0000000140C69E10: cmp     [rsi+918h], r12d
 * 0000000140C69E17: jnz     short loc_140C69E27
 * 0000000140C69E19: mov     rax, [rsi+588h]
 * 0000000140C69E20: xor     rcx, r8
 * 0000000140C69E23: mov     [rax+18h], rcx
 * 0000000140C69E27: xor     edx, edx
 * 0000000140C69E29: mov     r9d, 100h
 * 0000000140C69E2F: mov     rcx, rsi
 * 0000000140C69E32: call    sub_140C7F03C
 * 0000000140C69E37: jmp     loc_140C69C5F
 * 0000000140C69E3C: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C69E41: mov     eax, [r13+18h]
 * 0000000140C69E45: test    bl, al
 * 0000000140C69E47: jz      short loc_140C69E5A
 * 0000000140C69E49: mov     rax, [rsi+578h]
 * 0000000140C69E50: mov     cl, [rax]
 * 0000000140C69E52: test    cl, cl
 * 0000000140C69E54: jnz     loc_140C6A023
 * 0000000140C69E5A: mov     ecx, [r13+10h]
 * 0000000140C69E5E: mov     rdx, [r13+8]
 * 0000000140C69E62: test    rcx, rcx
 * 0000000140C69E65: jz      loc_140C69F06
 * 0000000140C69E6B: mov     eax, [rsi+9DCh]
 * 0000000140C69E71: mov     r8d, 40h ; '@'
 * 0000000140C69E77: test    r8b, al
 * 0000000140C69E7A: jz      loc_140C69F06
 * 0000000140C69E80: mov     r14, cr8
 * 0000000140C69E84: mov     rbx, rdx
 * 0000000140C69E87: lea     r12, [rcx-1]
 * 0000000140C69E8B: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140C69E92: add     r12, rdx
 * 0000000140C69E95: or      r12, 0FFFh
 * 0000000140C69E9C: lea     r15, [rbx-1]
 * 0000000140C69EA0: mov     cr8, rdi
 * 0000000140C69EA4: mov     rax, [rsi+468h]
 * 0000000140C69EAB: xor     edx, edx
 * 0000000140C69EAD: mov     rcx, rbx
 * 0000000140C69EB0: call    KeGuardDispatchICall
 * 0000000140C69EB5: cmp     eax, 0C000022Dh
 * 0000000140C69EBA: jnz     short loc_140C69ED2
 * 0000000140C69EBC: mov     eax, 1
 * 0000000140C69EC1: cmp     r14b, al
 * 0000000140C69EC4: ja      short loc_140C69ED6
 * 0000000140C69EC6: movzx   eax, r14b
 * 0000000140C69ECA: mov     cr8, rax
 * 0000000140C69ECE: mov     al, [rbx]
 * 0000000140C69ED0: jmp     short loc_140C69EA0
 * 0000000140C69ED2: test    eax, eax
 * 0000000140C69ED4: js      short loc_140C69EF6
 * 0000000140C69ED6: mov     eax, 1000h
 * 0000000140C69EDB: add     rbx, rax
 * 0000000140C69EDE: add     r15, rax
 * 0000000140C69EE1: cmp     r15, r12
 * 0000000140C69EE4: jnz     short loc_140C69EA4
 * 0000000140C69EE6: movzx   eax, r14b
 * 0000000140C69EEA: mov     cr8, rax
 * 0000000140C69EEE: xor     r12d, r12d
 * 0000000140C69EF1: jmp     loc_140C6A023
 * 0000000140C69EF6: movzx   eax, r14b
 * 0000000140C69EFA: mov     cr8, rax
 * 0000000140C69EFE: xor     r12d, r12d
 * 0000000140C69F01: lea     ebx, [r12+1]
 * 0000000140C69F06: mov     rcx, [r13+8]
 * 0000000140C69F0A: cmp     [rsi+918h], r12d
 * 0000000140C69F11: jnz     loc_140C6A023
 * 0000000140C69F17: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C69F21: add     rax, rsi
 * 0000000140C69F24: mov     [rsi+920h], rax
 * 0000000140C69F2B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C69F35: add     rax, r13
 * 0000000140C69F38: mov     [rsi+928h], rax
 * 0000000140C69F3F: movsxd  rax, dword ptr [r13+0]
 * 0000000140C69F43: mov     [rsi+930h], rax
 * 0000000140C69F4A: mov     [rsi+938h], rcx
 * 0000000140C69F51: mov     [rsi+918h], ebx
 * 0000000140C69F57: mov     ecx, [rsi+9D8h]
 * 0000000140C69F5D: bt      ecx, 1Dh
 * 0000000140C69F61: jb      loc_140C6A023
 * 0000000140C69F67: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C69F71: jz      loc_140C6A023
 * 0000000140C69F77: test    bl, cl
 * 0000000140C69F79: jz      loc_140C6A023
 * 0000000140C69F7F: mov     ecx, [rsi+0A74h]
 * 0000000140C69F85: mov     eax, [rsi+804h]
 * 0000000140C69F8B: mov     r10, [rsi+838h]
 * 0000000140C69F92: sub     eax, ecx
 * 0000000140C69F94: mov     r8, [rsi+0A78h]
 * 0000000140C69F9B: lea     rdx, [rcx+rsi]
 * 0000000140C69F9F: mov     ecx, eax
 * 0000000140C69FA1: shr     rcx, 3
 * 0000000140C69FA5: lea     r9, [rdx+rcx*8]
 * 0000000140C69FA9: jmp     short loc_140C69FCC
 * 0000000140C69FAB: xor     [rdx], r8
 * 0000000140C69FAE: mov     rax, [rdx]
 * 0000000140C69FB1: movzx   ecx, r8b
 * 0000000140C69FB5: xor     rax, r10
 * 0000000140C69FB8: and     ecx, 3Fh
 * 0000000140C69FBB: ror     r8, cl
 * 0000000140C69FBE: add     r8, rax
 * 0000000140C69FC1: xor     r8, 0F05h
 * 0000000140C69FC8: add     rdx, 8
 * 0000000140C69FCC: cmp     rdx, r9
 * 0000000140C69FCF: jnz     short loc_140C69FAB
 * 0000000140C69FD1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C69FD9: cmp     r8, [rsi+0A80h]
 * 0000000140C69FE0: jz      short loc_140C6A023
 * 0000000140C69FE2: mov     ecx, [rsi+804h]
 * 0000000140C69FE8: mov     rax, [rsi+588h]
 * 0000000140C69FEF: mov     [rax], rsi
 * 0000000140C69FF2: mov     [rax+10h], ecx
 * 0000000140C69FF5: mov     rcx, [rsi+0A80h]
 * 0000000140C69FFC: cmp     [rsi+918h], r12d
 * 0000000140C6A003: jnz     short loc_140C6A013
 * 0000000140C6A005: mov     rax, [rsi+588h]
 * 0000000140C6A00C: xor     rcx, r8
 * 0000000140C6A00F: mov     [rax+18h], rcx
 * 0000000140C6A013: xor     edx, edx
 * 0000000140C6A015: mov     r9d, 100h
 * 0000000140C6A01B: mov     rcx, rsi
 * 0000000140C6A01E: call    sub_140C7F03C
 * 0000000140C6A023: mov     eax, [r13+10h]
 * 0000000140C6A027: shl     eax, 4
 * 0000000140C6A02A: add     [rsi+848h], eax
 * 0000000140C6A030: jmp     loc_140C770FB
 * 0000000140C6A035: mov     r15d, [rsi+844h]
 * 0000000140C6A03C: lea     rax, [r13+30h]
 * 0000000140C6A040: mov     r12d, [r13+1Ch]
 * 0000000140C6A044: shl     r15, 4
 * 0000000140C6A048: shl     r12, 4
 * 0000000140C6A04C: add     r15, rax
 * 0000000140C6A04F: add     r12, rax
 * 0000000140C6A052: mov     [rsp+8B0h+var_858], r12
 * 0000000140C6A057: xor     r10d, r10d
 * 0000000140C6A05A: cmp     [r15], r10d
 * 0000000140C6A05D: jl      loc_140C6A322
 * 0000000140C6A063: mov     r13, [r15+8]
 * 0000000140C6A067: mov     r14d, [r15+4]
 * 0000000140C6A06B: mov     r8, r13
 * 0000000140C6A06E: add     [rsi+848h], r14d
 * 0000000140C6A075: mov     rax, r13
 * 0000000140C6A078: mov     r9d, [rsi+834h]
 * 0000000140C6A07F: mov     r11, [rsi+838h]
 * 0000000140C6A086: lea     rcx, [r14+r13]
 * 0000000140C6A08A: mov     [rbp+7B0h+var_828], r13
 * 0000000140C6A08E: cmp     r13, rcx
 * 0000000140C6A091: jnb     short loc_140C6A0A3
 * 0000000140C6A093: mov     edx, 40h ; '@'
 * 0000000140C6A098: prefetchnta byte ptr [rax]
 * 0000000140C6A09B: add     rax, rdx
 * 0000000140C6A09E: cmp     rax, rcx
 * 0000000140C6A0A1: jb      short loc_140C6A098
 * 0000000140C6A0A3: mov     r10d, r14d
 * 0000000140C6A0A6: mov     rbx, r11
 * 0000000140C6A0A9: shr     r10d, 7
 * 0000000140C6A0AD: test    r10d, r10d
 * 0000000140C6A0B0: jz      short loc_140C6A126
 * 0000000140C6A0B2: mov     edi, 1
 * 0000000140C6A0B7: mov     rsi, 7010008004002001h
 * 0000000140C6A0C1: mov     r12d, 0FFFFFFFFh
 * 0000000140C6A0C7: mov     eax, 8
 * 0000000140C6A0CC: xor     rbx, [r8]
 * 0000000140C6A0CF: mov     ecx, r9d
 * 0000000140C6A0D2: rol     rbx, cl
 * 0000000140C6A0D5: xor     rbx, [r8+8]
 * 0000000140C6A0D9: add     r8, 10h
 * 0000000140C6A0DD: rol     rbx, cl
 * 0000000140C6A0E0: sub     rax, rdi
 * 0000000140C6A0E3: jnz     short loc_140C6A0CC
 * 0000000140C6A0E5: mov     rcx, r8
 * 0000000140C6A0E8: sub     rcx, r13
 * 0000000140C6A0EB: xor     rcx, r11
 * 0000000140C6A0EE: mov     rax, rcx
 * 0000000140C6A0F1: rol     rax, 11h
 * 0000000140C6A0F5: xor     rcx, rax
 * 0000000140C6A0F8: mov     rax, rsi
 * 0000000140C6A0FB: mul     rcx
 * 0000000140C6A0FE: mov     [rbp+7B0h+var_340], rdx
 * 0000000140C6A105: xor     rdx, rax
 * 0000000140C6A108: xor     r9d, edx
 * 0000000140C6A10B: and     r9d, 3Fh
 * 0000000140C6A10F: cmovz   r9d, edi
 * 0000000140C6A113: add     r10d, r12d
 * 0000000140C6A116: jnz     short loc_140C6A0C7
 * 0000000140C6A118: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6A11D: lea     edi, [r10+2]
 * 0000000140C6A121: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C6A126: mov     edx, r14d
 * 0000000140C6A129: mov     r11d, 1
 * 0000000140C6A12F: and     edx, 7Fh
 * 0000000140C6A132: cmp     edx, 8
 * 0000000140C6A135: jb      short loc_140C6A152
 * 0000000140C6A137: mov     eax, edx
 * 0000000140C6A139: shr     rax, 3
 * 0000000140C6A13D: xor     rbx, [r8]
 * 0000000140C6A140: mov     ecx, r9d
 * 0000000140C6A143: rol     rbx, cl
 * 0000000140C6A146: add     r8, 8
 * 0000000140C6A14A: add     edx, 0FFFFFFF8h
 * 0000000140C6A14D: sub     rax, r11
 * 0000000140C6A150: jnz     short loc_140C6A13D
 * 0000000140C6A152: xor     r10d, r10d
 * 0000000140C6A155: test    edx, edx
 * 0000000140C6A157: jz      short loc_140C6A175
 * 0000000140C6A159: mov     edi, 0FFFFFFFFh
 * 0000000140C6A15E: movzx   eax, byte ptr [r8]
 * 0000000140C6A162: mov     ecx, r9d
 * 0000000140C6A165: xor     rbx, rax
 * 0000000140C6A168: add     r8, r11
 * 0000000140C6A16B: rol     rbx, cl
 * 0000000140C6A16E: add     edx, edi
 * 0000000140C6A170: jnz     short loc_140C6A15E
 * 0000000140C6A172: lea     edi, [rdx+2]
 * 0000000140C6A175: mov     rax, rbx
 * 0000000140C6A178: jmp     short loc_140C6A17C
 * 0000000140C6A17A: xor     ebx, eax
 * 0000000140C6A17C: shr     rax, 1Fh
 * 0000000140C6A180: test    rax, rax
 * 0000000140C6A183: jnz     short loc_140C6A17A
 * 0000000140C6A185: mov     eax, [r15]
 * 0000000140C6A188: btr     ebx, 1Fh
 * 0000000140C6A18C: btr     eax, 1Fh
 * 0000000140C6A190: cmp     ebx, eax
 * 0000000140C6A192: jz      loc_140C6A3A8
 * 0000000140C6A198: mov     rcx, r14
 * 0000000140C6A19B: test    r14d, r14d
 * 0000000140C6A19E: jz      loc_140C6A22A
 * 0000000140C6A1A4: mov     eax, [rsi+9DCh]
 * 0000000140C6A1AA: mov     edx, 40h ; '@'
 * 0000000140C6A1AF: test    dl, al
 * 0000000140C6A1B1: jz      short loc_140C6A22A
 * 0000000140C6A1B3: mov     r12, cr8
 * 0000000140C6A1B7: mov     r14, r13
 * 0000000140C6A1BA: lea     rax, [r13-1]
 * 0000000140C6A1BE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6A1C5: add     rax, rcx
 * 0000000140C6A1C8: or      rax, 0FFFh
 * 0000000140C6A1CE: mov     [rsp+8B0h+var_840], rax
 * 0000000140C6A1D3: lea     r13, [r14-1]
 * 0000000140C6A1D7: mov     cr8, rdi
 * 0000000140C6A1DB: mov     rax, [rsi+468h]
 * 0000000140C6A1E2: xor     edx, edx
 * 0000000140C6A1E4: mov     rcx, r14
 * 0000000140C6A1E7: call    KeGuardDispatchICall
 * 0000000140C6A1EC: cmp     eax, 0C000022Dh
 * 0000000140C6A1F1: jnz     short loc_140C6A20E
 * 0000000140C6A1F3: mov     eax, 1
 * 0000000140C6A1F8: cmp     r12b, al
 * 0000000140C6A1FB: ja      loc_140C6A2FB
 * 0000000140C6A201: movzx   eax, r12b
 * 0000000140C6A205: mov     cr8, rax
 * 0000000140C6A209: mov     al, [r14]
 * 0000000140C6A20C: jmp     short loc_140C6A1D7
 * 0000000140C6A20E: xor     r10d, r10d
 * 0000000140C6A211: test    eax, eax
 * 0000000140C6A213: jns     loc_140C6A2FE
 * 0000000140C6A219: movzx   eax, r12b
 * 0000000140C6A21D: mov     cr8, rax
 * 0000000140C6A221: mov     r13, [rbp+7B0h+var_828]
 * 0000000140C6A225: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C6A22A: mov     eax, [r15]
 * 0000000140C6A22D: btr     eax, 1Fh
 * 0000000140C6A231: cmp     [rsi+918h], r10d
 * 0000000140C6A238: jnz     loc_140C6A3A8
 * 0000000140C6A23E: mov     ecx, ebx
 * 0000000140C6A240: xor     rcx, rax
 * 0000000140C6A243: mov     rax, [rsi+588h]
 * 0000000140C6A24A: mov     [rax+18h], rcx
 * 0000000140C6A24E: cmp     [rsi+918h], r10d
 * 0000000140C6A255: jnz     loc_140C6A3A8
 * 0000000140C6A25B: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6A260: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6A26A: add     rax, rsi
 * 0000000140C6A26D: mov     r8d, 1
 * 0000000140C6A273: mov     [rsi+920h], rax
 * 0000000140C6A27A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6A284: add     rax, rdx
 * 0000000140C6A287: mov     [rsi+928h], rax
 * 0000000140C6A28E: movsxd  rax, dword ptr [rdx]
 * 0000000140C6A291: mov     [rsi+930h], rax
 * 0000000140C6A298: mov     [rsi+938h], r13
 * 0000000140C6A29F: mov     [rsi+918h], r8d
 * 0000000140C6A2A6: mov     ecx, [rsi+9D8h]
 * 0000000140C6A2AC: bt      ecx, 1Dh
 * 0000000140C6A2B0: jb      loc_140C6A3AD
 * 0000000140C6A2B6: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6A2C0: jz      loc_140C6A3AD
 * 0000000140C6A2C6: test    r8b, cl
 * 0000000140C6A2C9: jz      loc_140C6A3AD
 * 0000000140C6A2CF: mov     ecx, [rsi+0A74h]
 * 0000000140C6A2D5: mov     eax, [rsi+804h]
 * 0000000140C6A2DB: mov     r10, [rsi+838h]
 * 0000000140C6A2E2: sub     eax, ecx
 * 0000000140C6A2E4: mov     r8, [rsi+0A78h]
 * 0000000140C6A2EB: lea     rdx, [rcx+rsi]
 * 0000000140C6A2EF: mov     ecx, eax
 * 0000000140C6A2F1: shr     rcx, 3
 * 0000000140C6A2F5: lea     r9, [rdx+rcx*8]
 * 0000000140C6A2F9: jmp     short loc_140C6A34D
 * 0000000140C6A2FB: xor     r10d, r10d
 * 0000000140C6A2FE: mov     r11d, 1000h
 * 0000000140C6A304: add     r14, r11
 * 0000000140C6A307: add     r13, r11
 * 0000000140C6A30A: cmp     r13, [rsp+8B0h+var_840]
 * 0000000140C6A30F: jnz     loc_140C6A1DB
 * 0000000140C6A315: movzx   eax, r12b
 * 0000000140C6A319: mov     cr8, rax
 * 0000000140C6A31D: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C6A322: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6A327: jmp     loc_140C6A3B3
 * 0000000140C6A32C: xor     [rdx], r8
 * 0000000140C6A32F: mov     rax, [rdx]
 * 0000000140C6A332: movzx   ecx, r8b
 * 0000000140C6A336: xor     rax, r10
 * 0000000140C6A339: and     ecx, 3Fh
 * 0000000140C6A33C: ror     r8, cl
 * 0000000140C6A33F: add     r8, rax
 * 0000000140C6A342: xor     r8, 0F05h
 * 0000000140C6A349: add     rdx, 8
 * 0000000140C6A34D: cmp     rdx, r9
 * 0000000140C6A350: jnz     short loc_140C6A32C
 * 0000000140C6A352: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6A35A: cmp     r8, [rsi+0A80h]
 * 0000000140C6A361: jz      short loc_140C6A3A5
 * 0000000140C6A363: mov     rax, [rsi+588h]
 * 0000000140C6A36A: mov     ecx, [rsi+804h]
 * 0000000140C6A370: mov     [rax], rsi
 * 0000000140C6A373: mov     [rax+10h], ecx
 * 0000000140C6A376: xor     eax, eax
 * 0000000140C6A378: mov     rcx, [rsi+0A80h]
 * 0000000140C6A37F: cmp     [rsi+918h], eax
 * 0000000140C6A385: jnz     short loc_140C6A395
 * 0000000140C6A387: mov     rax, [rsi+588h]
 * 0000000140C6A38E: xor     rcx, r8
 * 0000000140C6A391: mov     [rax+18h], rcx
 * 0000000140C6A395: xor     edx, edx
 * 0000000140C6A397: mov     r9d, 100h
 * 0000000140C6A39D: mov     rcx, rsi
 * 0000000140C6A3A0: call    sub_140C7F03C
 * 0000000140C6A3A5: xor     r10d, r10d
 * 0000000140C6A3A8: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C6A3AD: mov     r11d, 1000h
 * 0000000140C6A3B3: add     r15, 10h
 * 0000000140C6A3B7: cmp     r15, r12
 * 0000000140C6A3BA: jnb     short loc_140C6A3D1
 * 0000000140C6A3BC: mov     eax, [rsi+84Ch]
 * 0000000140C6A3C2: cmp     [rsi+848h], eax
 * 0000000140C6A3C8: jl      loc_140C6A05A
 * 0000000140C6A3CE: cmp     r15, r12
 * 0000000140C6A3D1: mov     ecx, 844h
 * 0000000140C6A3D6: jnz     short loc_140C6A3DD
 * 0000000140C6A3D8: mov     r15d, r10d
 * 0000000140C6A3DB: jmp     short loc_140C6A3E8
 * 0000000140C6A3DD: lea     rax, [rdx+30h]
 * 0000000140C6A3E1: sub     r15, rax
 * 0000000140C6A3E4: sar     r15, 4
 * 0000000140C6A3E8: mov     rax, rsi
 * 0000000140C6A3EB: mov     [rax+rcx], r15d
 * 0000000140C6A3EF: xor     r12d, r12d
 * 0000000140C6A3F2: jmp     loc_140C77101
 * 0000000140C6A3F7: mov     rbx, [r13+18h]
 * 0000000140C6A3FB: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140C6A405: mov     rdx, [rsi+700h]
 * 0000000140C6A40C: mov     rcx, [rsi+730h]
 * 0000000140C6A413: add     rdx, rbx
 * 0000000140C6A416: movzx   eax, word ptr [r13+22h]
 * 0000000140C6A41B: cmp     [rdx+rcx], ax
 * 0000000140C6A41F: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140C6A429: jz      loc_140C6A54C
 * 0000000140C6A42F: cmp     [rsi+918h], r12d
 * 0000000140C6A436: jnz     loc_140C6A54C
 * 0000000140C6A43C: lea     rax, [rsi+r8]
 * 0000000140C6A440: mov     [rsi+920h], rax
 * 0000000140C6A447: lea     rax, [rdx+r13]
 * 0000000140C6A44B: mov     [rsi+928h], rax
 * 0000000140C6A452: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6A456: mov     [rsi+930h], rax
 * 0000000140C6A45D: mov     [rsi+938h], rbx
 * 0000000140C6A464: mov     [rsi+918h], r15d
 * 0000000140C6A46B: mov     ecx, [rsi+9D8h]
 * 0000000140C6A471: bt      ecx, 1Dh
 * 0000000140C6A475: jb      loc_140C6A54C
 * 0000000140C6A47B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6A485: jz      loc_140C6A54C
 * 0000000140C6A48B: test    r15b, cl
 * 0000000140C6A48E: jz      loc_140C6A54C
 * 0000000140C6A494: mov     ecx, [rsi+0A74h]
 * 0000000140C6A49A: mov     eax, [rsi+804h]
 * 0000000140C6A4A0: mov     r10, [rsi+838h]
 * 0000000140C6A4A7: sub     eax, ecx
 * 0000000140C6A4A9: mov     r8, [rsi+0A78h]
 * 0000000140C6A4B0: lea     rdx, [rcx+rsi]
 * 0000000140C6A4B4: mov     ecx, eax
 * 0000000140C6A4B6: shr     rcx, 3
 * 0000000140C6A4BA: lea     r9, [rdx+rcx*8]
 * 0000000140C6A4BE: jmp     short loc_140C6A4E1
 * 0000000140C6A4C0: xor     [rdx], r8
 * 0000000140C6A4C3: mov     rax, [rdx]
 * 0000000140C6A4C6: movzx   ecx, r8b
 * 0000000140C6A4CA: xor     rax, r10
 * 0000000140C6A4CD: and     ecx, 3Fh
 * 0000000140C6A4D0: ror     r8, cl
 * 0000000140C6A4D3: add     r8, rax
 * 0000000140C6A4D6: xor     r8, 0F05h
 * 0000000140C6A4DD: add     rdx, 8
 * 0000000140C6A4E1: cmp     rdx, r9
 * 0000000140C6A4E4: jnz     short loc_140C6A4C0
 * 0000000140C6A4E6: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6A4EE: cmp     r8, [rsi+0A80h]
 * 0000000140C6A4F5: jz      short loc_140C6A538
 * 0000000140C6A4F7: mov     ecx, [rsi+804h]
 * 0000000140C6A4FD: mov     rax, [rsi+588h]
 * 0000000140C6A504: mov     [rax], rsi
 * 0000000140C6A507: mov     [rax+10h], ecx
 * 0000000140C6A50A: mov     rcx, [rsi+0A80h]
 * 0000000140C6A511: cmp     [rsi+918h], r12d
 * 0000000140C6A518: jnz     short loc_140C6A528
 * 0000000140C6A51A: mov     rax, [rsi+588h]
 * 0000000140C6A521: xor     rcx, r8
 * 0000000140C6A524: mov     [rax+18h], rcx
 * 0000000140C6A528: xor     edx, edx
 * 0000000140C6A52A: mov     r9d, 100h
 * 0000000140C6A530: mov     rcx, rsi
 * 0000000140C6A533: call    sub_140C7F03C
 * 0000000140C6A538: mov     r8, 0A3A03F5891C8B4E8h
 * 0000000140C6A542: mov     rdx, 0B3B74BDEE4453415h
 * 0000000140C6A54C: movzx   eax, word ptr [r13+22h]
 * 0000000140C6A551: test    [rsi+738h], ax
 * 0000000140C6A558: jnz     loc_140C6A67A
 * 0000000140C6A55E: mov     rcx, [rsi+708h]
 * 0000000140C6A565: add     rcx, rbx
 * 0000000140C6A568: cmp     [rcx], rcx
 * 0000000140C6A56B: jz      loc_140C6A67A
 * 0000000140C6A571: cmp     [rsi+918h], r12d
 * 0000000140C6A578: jnz     loc_140C6A67A
 * 0000000140C6A57E: lea     rax, [rsi+r8]
 * 0000000140C6A582: mov     [rsi+920h], rax
 * 0000000140C6A589: lea     rax, [rdx+r13]
 * 0000000140C6A58D: mov     [rsi+928h], rax
 * 0000000140C6A594: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6A598: mov     [rsi+930h], rax
 * 0000000140C6A59F: mov     [rsi+938h], rbx
 * 0000000140C6A5A6: mov     [rsi+918h], r15d
 * 0000000140C6A5AD: mov     ecx, [rsi+9D8h]
 * 0000000140C6A5B3: bt      ecx, 1Dh
 * 0000000140C6A5B7: jb      loc_140C6A67A
 * 0000000140C6A5BD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6A5C7: jz      loc_140C6A67A
 * 0000000140C6A5CD: test    r15b, cl
 * 0000000140C6A5D0: jz      loc_140C6A67A
 * 0000000140C6A5D6: mov     ecx, [rsi+0A74h]
 * 0000000140C6A5DC: mov     eax, [rsi+804h]
 * 0000000140C6A5E2: mov     r10, [rsi+838h]
 * 0000000140C6A5E9: sub     eax, ecx
 * 0000000140C6A5EB: mov     r8, [rsi+0A78h]
 * 0000000140C6A5F2: lea     rdx, [rcx+rsi]
 * 0000000140C6A5F6: mov     ecx, eax
 * 0000000140C6A5F8: shr     rcx, 3
 * 0000000140C6A5FC: lea     r9, [rdx+rcx*8]
 * 0000000140C6A600: jmp     short loc_140C6A623
 * 0000000140C6A602: xor     [rdx], r8
 * 0000000140C6A605: mov     rax, [rdx]
 * 0000000140C6A608: movzx   ecx, r8b
 * 0000000140C6A60C: xor     rax, r10
 * 0000000140C6A60F: and     ecx, 3Fh
 * 0000000140C6A612: ror     r8, cl
 * 0000000140C6A615: add     r8, rax
 * 0000000140C6A618: xor     r8, 0F05h
 * 0000000140C6A61F: add     rdx, 8
 * 0000000140C6A623: cmp     rdx, r9
 * 0000000140C6A626: jnz     short loc_140C6A602
 * 0000000140C6A628: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6A630: cmp     r8, [rsi+0A80h]
 * 0000000140C6A637: jz      short loc_140C6A67A
 * 0000000140C6A639: mov     ecx, [rsi+804h]
 * 0000000140C6A63F: mov     rax, [rsi+588h]
 * 0000000140C6A646: mov     [rax], rsi
 * 0000000140C6A649: mov     [rax+10h], ecx
 * 0000000140C6A64C: mov     rcx, [rsi+0A80h]
 * 0000000140C6A653: cmp     [rsi+918h], r12d
 * 0000000140C6A65A: jnz     short loc_140C6A66A
 * 0000000140C6A65C: mov     rax, [rsi+588h]
 * 0000000140C6A663: xor     rcx, r8
 * 0000000140C6A666: mov     [rax+18h], rcx
 * 0000000140C6A66A: xor     edx, edx
 * 0000000140C6A66C: mov     r9d, 100h
 * 0000000140C6A672: mov     rcx, rsi
 * 0000000140C6A675: call    sub_140C7F03C
 * 0000000140C6A67A: mov     r14, [r13+8]
 * 0000000140C6A67E: mov     r8d, [r13+10h]
 * 0000000140C6A682: mov     r9, r14
 * 0000000140C6A685: add     [rsi+848h], r8d
 * 0000000140C6A68C: mov     rax, r14
 * 0000000140C6A68F: mov     r10d, [rsi+834h]
 * 0000000140C6A696: mov     r15, [rsi+838h]
 * 0000000140C6A69D: lea     rcx, [r14+r8]
 * 0000000140C6A6A1: cmp     r14, rcx
 * 0000000140C6A6A4: jnb     short loc_140C6A6B6
 * 0000000140C6A6A6: mov     edx, 40h ; '@'
 * 0000000140C6A6AB: prefetchnta byte ptr [rax]
 * 0000000140C6A6AE: add     rax, rdx
 * 0000000140C6A6B1: cmp     rax, rcx
 * 0000000140C6A6B4: jb      short loc_140C6A6AB
 * 0000000140C6A6B6: mov     r11d, r8d
 * 0000000140C6A6B9: mov     rbx, r15
 * 0000000140C6A6BC: shr     r11d, 7
 * 0000000140C6A6C0: mov     edx, 1
 * 0000000140C6A6C5: test    r11d, r11d
 * 0000000140C6A6C8: jz      short loc_140C6A737
 * 0000000140C6A6CA: mov     edi, 0FFFFFFFFh
 * 0000000140C6A6CF: mov     rsi, 7010008004002001h
 * 0000000140C6A6D9: mov     eax, 8
 * 0000000140C6A6DE: xor     rbx, [r9]
 * 0000000140C6A6E1: mov     ecx, r10d
 * 0000000140C6A6E4: rol     rbx, cl
 * 0000000140C6A6E7: xor     rbx, [r9+8]
 * 0000000140C6A6EB: add     r9, 10h
 * 0000000140C6A6EF: rol     rbx, cl
 * 0000000140C6A6F2: sub     rax, rdx
 * 0000000140C6A6F5: jnz     short loc_140C6A6DE
 * 0000000140C6A6F7: mov     rcx, r9
 * 0000000140C6A6FA: sub     rcx, r14
 * 0000000140C6A6FD: xor     rcx, r15
 * 0000000140C6A700: mov     rax, rcx
 * 0000000140C6A703: rol     rax, 11h
 * 0000000140C6A707: xor     rcx, rax
 * 0000000140C6A70A: mov     rax, rsi
 * 0000000140C6A70D: mul     rcx
 * 0000000140C6A710: mov     [rbp+7B0h+var_370], rdx
 * 0000000140C6A717: xor     rdx, rax
 * 0000000140C6A71A: xor     r10d, edx
 * 0000000140C6A71D: mov     edx, 1
 * 0000000140C6A722: and     r10d, 3Fh
 * 0000000140C6A726: cmovz   r10d, edx
 * 0000000140C6A72A: add     r11d, edi
 * 0000000140C6A72D: jnz     short loc_140C6A6D9
 * 0000000140C6A72F: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6A734: lea     edi, [rdx+1]
 * 0000000140C6A737: and     r8d, 7Fh
 * 0000000140C6A73B: cmp     r8d, 8
 * 0000000140C6A73F: jb      short loc_140C6A75E
 * 0000000140C6A741: mov     eax, r8d
 * 0000000140C6A744: shr     rax, 3
 * 0000000140C6A748: xor     rbx, [r9]
 * 0000000140C6A74B: mov     ecx, r10d
 * 0000000140C6A74E: rol     rbx, cl
 * 0000000140C6A751: add     r9, 8
 * 0000000140C6A755: add     r8d, 0FFFFFFF8h
 * 0000000140C6A759: sub     rax, rdx
 * 0000000140C6A75C: jnz     short loc_140C6A748
 * 0000000140C6A75E: test    r8d, r8d
 * 0000000140C6A761: jz      short loc_140C6A781
 * 0000000140C6A763: mov     edi, 0FFFFFFFFh
 * 0000000140C6A768: movzx   eax, byte ptr [r9]
 * 0000000140C6A76C: mov     ecx, r10d
 * 0000000140C6A76F: xor     rbx, rax
 * 0000000140C6A772: add     r9, rdx
 * 0000000140C6A775: rol     rbx, cl
 * 0000000140C6A778: add     r8d, edi
 * 0000000140C6A77B: jnz     short loc_140C6A768
 * 0000000140C6A77D: lea     edi, [r8+2]
 * 0000000140C6A781: mov     rax, rbx
 * 0000000140C6A784: jmp     short loc_140C6A788
 * 0000000140C6A786: xor     ebx, eax
 * 0000000140C6A788: shr     rax, 1Fh
 * 0000000140C6A78C: test    rax, rax
 * 0000000140C6A78F: jnz     short loc_140C6A786
 * 0000000140C6A791: btr     ebx, 1Fh
 * 0000000140C6A795: cmp     ebx, [r13+14h]
 * 0000000140C6A799: jz      loc_140C6A85A
 * 0000000140C6A79F: cmp     [r13+0], eax
 * 0000000140C6A7A3: jnz     short loc_140C6A7AD
 * 0000000140C6A7A5: cmp     [r13+18h], eax
 * 0000000140C6A7A9: cmovnz  r12d, edx
 * 0000000140C6A7AD: mov     ecx, [r13+10h]
 * 0000000140C6A7B1: mov     rdx, [r13+8]
 * 0000000140C6A7B5: test    rcx, rcx
 * 0000000140C6A7B8: jz      loc_140C6A989
 * 0000000140C6A7BE: mov     eax, [rsi+9DCh]
 * 0000000140C6A7C4: mov     r8d, 40h ; '@'
 * 0000000140C6A7CA: test    r8b, al
 * 0000000140C6A7CD: jz      loc_140C6A989
 * 0000000140C6A7D3: mov     r15, cr8
 * 0000000140C6A7D7: mov     r14, rdx
 * 0000000140C6A7DA: lea     rax, [rcx-1]
 * 0000000140C6A7DE: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6A7E5: add     rax, rdx
 * 0000000140C6A7E8: or      rax, 0FFFh
 * 0000000140C6A7EE: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6A7F3: lea     r13, [r14-1]
 * 0000000140C6A7F7: mov     cr8, rdi
 * 0000000140C6A7FB: mov     rax, [rsi+468h]
 * 0000000140C6A802: xor     edx, edx
 * 0000000140C6A804: mov     rcx, r14
 * 0000000140C6A807: call    KeGuardDispatchICall
 * 0000000140C6A80C: cmp     eax, 0C000022Dh
 * 0000000140C6A811: jnz     short loc_140C6A833
 * 0000000140C6A813: test    r12d, r12d
 * 0000000140C6A816: jnz     loc_140C6A97C
 * 0000000140C6A81C: lea     eax, [r12+1]
 * 0000000140C6A821: cmp     r15b, al
 * 0000000140C6A824: ja      short loc_140C6A83B
 * 0000000140C6A826: movzx   eax, r15b
 * 0000000140C6A82A: mov     cr8, rax
 * 0000000140C6A82E: mov     al, [r14]
 * 0000000140C6A831: jmp     short loc_140C6A7F7
 * 0000000140C6A833: test    eax, eax
 * 0000000140C6A835: js      loc_140C6A97C
 * 0000000140C6A83B: mov     eax, 1000h
 * 0000000140C6A840: add     r14, rax
 * 0000000140C6A843: add     r13, rax
 * 0000000140C6A846: cmp     r13, [rsp+8B0h+var_858]
 * 0000000140C6A84B: jnz     short loc_140C6A7FB
 * 0000000140C6A84D: movzx   eax, r15b
 * 0000000140C6A851: mov     cr8, rax
 * 0000000140C6A855: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6A85A: xor     r12d, r12d
 * 0000000140C6A85D: mov     ebx, 1
 * 0000000140C6A862: mov     r14, 0B3B74BDEE4453415h
 * 0000000140C6A86C: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140C6A876: lea     rax, [r13+30h]
 * 0000000140C6A87A: xor     r9d, r9d
 * 0000000140C6A87D: mov     [rbp+7B0h+var_588], rax
 * 0000000140C6A884: lea     rcx, [rbp+7B0h+var_590]
 * 0000000140C6A88B: movzx   eax, word ptr [r13+20h]
 * 0000000140C6A890: xor     r8d, r8d
 * 0000000140C6A893: mov     [rbp+7B0h+var_590], ax
 * 0000000140C6A89A: xor     edx, edx
 * 0000000140C6A89C: mov     [rbp+7B0h+var_58E], ax
 * 0000000140C6A8A3: lea     rax, [rbp+7B0h+var_6C8]
 * 0000000140C6A8AA: mov     [rsp+8B0h+var_878], rax
 * 0000000140C6A8AF: mov     rax, [rsi+500h]
 * 0000000140C6A8B6: mov     [rsp+8B0h+var_880], r12
 * 0000000140C6A8BB: mov     byte ptr [rsp+8B0h+var_888], r12b
 * 0000000140C6A8C0: mov     [rsp+8B0h+BugCheckParameter4], rax
 * 0000000140C6A8C5: mov     rax, [rsi+1F8h]
 * 0000000140C6A8CC: call    KeGuardDispatchICall
 * 0000000140C6A8D1: test    eax, eax
 * 0000000140C6A8D3: js      loc_140C770FB
 * 0000000140C6A8D9: mov     rcx, [rbp+7B0h+var_6C8]
 * 0000000140C6A8E0: cmp     rcx, [r13+18h]
 * 0000000140C6A8E4: jz      loc_140C6AB55
 * 0000000140C6A8EA: cmp     [rsi+918h], r12d
 * 0000000140C6A8F1: jnz     loc_140C6AB55
 * 0000000140C6A8F7: lea     rax, [rsi+r15]
 * 0000000140C6A8FB: mov     [rsi+920h], rax
 * 0000000140C6A902: lea     rax, [r14+r13]
 * 0000000140C6A906: mov     [rsi+928h], rax
 * 0000000140C6A90D: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6A911: mov     [rsi+930h], rax
 * 0000000140C6A918: mov     [rsi+938h], rcx
 * 0000000140C6A91F: mov     [rsi+918h], ebx
 * 0000000140C6A925: mov     ecx, [rsi+9D8h]
 * 0000000140C6A92B: bt      ecx, 1Dh
 * 0000000140C6A92F: jb      loc_140C6AB4E
 * 0000000140C6A935: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6A93F: jz      loc_140C6AB4E
 * 0000000140C6A945: test    bl, cl
 * 0000000140C6A947: jz      loc_140C6AB4E
 * 0000000140C6A94D: mov     ecx, [rsi+0A74h]
 * 0000000140C6A953: mov     eax, [rsi+804h]
 * 0000000140C6A959: mov     r10, [rsi+838h]
 * 0000000140C6A960: sub     eax, ecx
 * 0000000140C6A962: mov     r8, [rsi+0A78h]
 * 0000000140C6A969: lea     rdx, [rcx+rsi]
 * 0000000140C6A96D: mov     ecx, eax
 * 0000000140C6A96F: shr     rcx, 3
 * 0000000140C6A973: lea     r9, [rdx+rcx*8]
 * 0000000140C6A977: jmp     loc_140C6AAF7
 * 0000000140C6A97C: movzx   eax, r15b
 * 0000000140C6A980: mov     cr8, rax
 * 0000000140C6A984: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6A989: mov     eax, [r13+14h]
 * 0000000140C6A98D: xor     r12d, r12d
 * 0000000140C6A990: cmp     [rsi+918h], r12d
 * 0000000140C6A997: jnz     short loc_140C6A9A9
 * 0000000140C6A999: mov     ecx, ebx
 * 0000000140C6A99B: xor     rcx, rax
 * 0000000140C6A99E: mov     rax, [rsi+588h]
 * 0000000140C6A9A5: mov     [rax+18h], rcx
 * 0000000140C6A9A9: mov     rcx, [r13+8]
 * 0000000140C6A9AD: cmp     [rsi+918h], r12d
 * 0000000140C6A9B4: jnz     loc_140C6A85D
 * 0000000140C6A9BA: mov     r15, 0A3A03F5891C8B4E8h
 * 0000000140C6A9C4: mov     r14, 0B3B74BDEE4453415h
 * 0000000140C6A9CE: mov     ebx, 1
 * 0000000140C6A9D3: lea     rax, [rsi+r15]
 * 0000000140C6A9D7: mov     [rsi+920h], rax
 * 0000000140C6A9DE: lea     rax, [r14+r13]
 * 0000000140C6A9E2: mov     [rsi+928h], rax
 * 0000000140C6A9E9: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6A9ED: mov     [rsi+930h], rax
 * 0000000140C6A9F4: mov     [rsi+938h], rcx
 * 0000000140C6A9FB: mov     [rsi+918h], ebx
 * 0000000140C6AA01: mov     ecx, [rsi+9D8h]
 * 0000000140C6AA07: bt      ecx, 1Dh
 * 0000000140C6AA0B: jb      loc_140C6A876
 * 0000000140C6AA11: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6AA1B: jz      loc_140C6A876
 * 0000000140C6AA21: test    bl, cl
 * 0000000140C6AA23: jz      loc_140C6A876
 * 0000000140C6AA29: mov     ecx, [rsi+0A74h]
 * 0000000140C6AA2F: mov     eax, [rsi+804h]
 * 0000000140C6AA35: mov     r10, [rsi+838h]
 * 0000000140C6AA3C: sub     eax, ecx
 * 0000000140C6AA3E: mov     r8, [rsi+0A78h]
 * 0000000140C6AA45: lea     rdx, [rcx+rsi]
 * 0000000140C6AA49: mov     ecx, eax
 * 0000000140C6AA4B: shr     rcx, 3
 * 0000000140C6AA4F: lea     r9, [rdx+rcx*8]
 * 0000000140C6AA53: jmp     short loc_140C6AA76
 * 0000000140C6AA55: xor     [rdx], r8
 * 0000000140C6AA58: mov     rax, [rdx]
 * 0000000140C6AA5B: movzx   ecx, r8b
 * 0000000140C6AA5F: xor     rax, r10
 * 0000000140C6AA62: and     ecx, 3Fh
 * 0000000140C6AA65: ror     r8, cl
 * 0000000140C6AA68: add     r8, rax
 * 0000000140C6AA6B: xor     r8, 0F05h
 * 0000000140C6AA72: add     rdx, 8
 * 0000000140C6AA76: cmp     rdx, r9
 * 0000000140C6AA79: jnz     short loc_140C6AA55
 * 0000000140C6AA7B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6AA83: cmp     r8, [rsi+0A80h]
 * 0000000140C6AA8A: jz      loc_140C6A876
 * 0000000140C6AA90: mov     ecx, [rsi+804h]
 * 0000000140C6AA96: mov     rax, [rsi+588h]
 * 0000000140C6AA9D: mov     [rax], rsi
 * 0000000140C6AAA0: mov     [rax+10h], ecx
 * 0000000140C6AAA3: mov     rcx, [rsi+0A80h]
 * 0000000140C6AAAA: cmp     [rsi+918h], r12d
 * 0000000140C6AAB1: jnz     short loc_140C6AAC1
 * 0000000140C6AAB3: mov     rax, [rsi+588h]
 * 0000000140C6AABA: xor     rcx, r8
 * 0000000140C6AABD: mov     [rax+18h], rcx
 * 0000000140C6AAC1: xor     edx, edx
 * 0000000140C6AAC3: mov     r9d, 100h
 * 0000000140C6AAC9: mov     rcx, rsi
 * 0000000140C6AACC: call    sub_140C7F03C
 * 0000000140C6AAD1: jmp     loc_140C6A876
 * 0000000140C6AAD6: xor     [rdx], r8
 * 0000000140C6AAD9: mov     rax, [rdx]
 * 0000000140C6AADC: movzx   ecx, r8b
 * 0000000140C6AAE0: xor     rax, r10
 * 0000000140C6AAE3: and     ecx, 3Fh
 * 0000000140C6AAE6: ror     r8, cl
 * 0000000140C6AAE9: add     r8, rax
 * 0000000140C6AAEC: xor     r8, 0F05h
 * 0000000140C6AAF3: add     rdx, 8
 * 0000000140C6AAF7: cmp     rdx, r9
 * 0000000140C6AAFA: jnz     short loc_140C6AAD6
 * 0000000140C6AAFC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6AB04: cmp     r8, [rsi+0A80h]
 * 0000000140C6AB0B: jz      short loc_140C6AB4E
 * 0000000140C6AB0D: mov     ecx, [rsi+804h]
 * 0000000140C6AB13: mov     rax, [rsi+588h]
 * 0000000140C6AB1A: mov     [rax], rsi
 * 0000000140C6AB1D: mov     [rax+10h], ecx
 * 0000000140C6AB20: mov     rcx, [rsi+0A80h]
 * 0000000140C6AB27: cmp     [rsi+918h], r12d
 * 0000000140C6AB2E: jnz     short loc_140C6AB3E
 * 0000000140C6AB30: mov     rax, [rsi+588h]
 * 0000000140C6AB37: xor     rcx, r8
 * 0000000140C6AB3A: mov     [rax+18h], rcx
 * 0000000140C6AB3E: xor     edx, edx
 * 0000000140C6AB40: mov     r9d, 100h
 * 0000000140C6AB46: mov     rcx, rsi
 * 0000000140C6AB49: call    sub_140C7F03C
 * 0000000140C6AB4E: mov     rcx, [rbp+7B0h+var_6C8]
 * 0000000140C6AB55: mov     rax, [rsi+1F0h]
 * 0000000140C6AB5C: call    KeGuardDispatchICall
 * 0000000140C6AB61: jmp     loc_140C770FB
 * 0000000140C6AB66: mov     rax, [rsi+1B0h]
 * 0000000140C6AB6D: lea     rcx, [rbp+7B0h+var_308]
 * 0000000140C6AB74: mov     edx, [r13+1Ch]
 * 0000000140C6AB78: call    KeGuardDispatchICall
 * 0000000140C6AB7D: mov     rax, [rsi+1E0h]
 * 0000000140C6AB84: lea     rdx, [rbp+7B0h+var_2F8]
 * 0000000140C6AB8B: lea     rcx, [rbp+7B0h+var_308]
 * 0000000140C6AB92: call    KeGuardDispatchICall
 * 0000000140C6AB97: mov     ebx, r12d
 * 0000000140C6AB9A: cmp     [r13+18h], r12d
 * 0000000140C6AB9E: jbe     loc_140C6AD6B
 * 0000000140C6ABA4: mov     eax, ebx
 * 0000000140C6ABA6: lea     r8, [rax+rax*2]
 * 0000000140C6ABAA: mov     r9d, [r13+r8*8+40h]
 * 0000000140C6ABAF: test    [rsi+89Bh], dil
 * 0000000140C6ABB6: jz      short loc_140C6ABDB
 * 0000000140C6ABB8: mov     eax, 0C0000082h
 * 0000000140C6ABBD: cmp     r9d, eax
 * 0000000140C6ABC0: jnz     short loc_140C6ABDB
 * 0000000140C6ABC2: mov     eax, gs:1A4h
 * 0000000140C6ABCA: cmp     eax, [rsi+910h]
 * 0000000140C6ABD0: jnz     short loc_140C6ABDB
 * 0000000140C6ABD2: mov     rdx, [rsi+908h]
 * 0000000140C6ABD9: jmp     short loc_140C6ABE7
 * 0000000140C6ABDB: mov     ecx, r9d
 * 0000000140C6ABDE: rdmsr
 * 0000000140C6ABE0: shl     rdx, 20h
 * 0000000140C6ABE4: or      rdx, rax
 * 0000000140C6ABE7: mov     rcx, [r13+r8*8+30h]
 * 0000000140C6ABEC: mov     r8, [r13+r8*8+38h]
 * 0000000140C6ABF1: and     rdx, rcx
 * 0000000140C6ABF4: cmp     rdx, r8
 * 0000000140C6ABF7: jz      loc_140C6AD40
 * 0000000140C6ABFD: mov     ecx, [r13+1Ch]
 * 0000000140C6AC01: shl     rcx, 20h
 * 0000000140C6AC05: or      rcx, r9
 * 0000000140C6AC08: cmp     [rsi+918h], r12d
 * 0000000140C6AC0F: jnz     loc_140C6AD5E
 * 0000000140C6AC15: mov     rax, [rsi+588h]
 * 0000000140C6AC1C: xor     r8, rdx
 * 0000000140C6AC1F: mov     [rax+18h], r8
 * 0000000140C6AC23: cmp     [rsi+918h], r12d
 * 0000000140C6AC2A: jnz     loc_140C6AD5E
 * 0000000140C6AC30: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6AC3A: add     rax, rsi
 * 0000000140C6AC3D: mov     [rsi+920h], rax
 * 0000000140C6AC44: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6AC4E: add     rax, r13
 * 0000000140C6AC51: mov     [rsi+928h], rax
 * 0000000140C6AC58: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6AC5C: mov     [rsi+930h], rax
 * 0000000140C6AC63: mov     [rsi+938h], rcx
 * 0000000140C6AC6A: mov     [rsi+918h], r15d
 * 0000000140C6AC71: mov     ecx, [rsi+9D8h]
 * 0000000140C6AC77: bt      ecx, 1Dh
 * 0000000140C6AC7B: jb      loc_140C6AD5E
 * 0000000140C6AC81: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6AC8B: jz      loc_140C6AD5E
 * 0000000140C6AC91: test    r15b, cl
 * 0000000140C6AC94: jz      loc_140C6AD5E
 * 0000000140C6AC9A: mov     ecx, [rsi+0A74h]
 * 0000000140C6ACA0: mov     eax, [rsi+804h]
 * 0000000140C6ACA6: mov     r10, [rsi+838h]
 * 0000000140C6ACAD: sub     eax, ecx
 * 0000000140C6ACAF: mov     r8, [rsi+0A78h]
 * 0000000140C6ACB6: lea     rdx, [rcx+rsi]
 * 0000000140C6ACBA: mov     ecx, eax
 * 0000000140C6ACBC: shr     rcx, 3
 * 0000000140C6ACC0: lea     r9, [rdx+rcx*8]
 * 0000000140C6ACC4: jmp     short loc_140C6ACE7
 * 0000000140C6ACC6: xor     [rdx], r8
 * 0000000140C6ACC9: mov     rax, [rdx]
 * 0000000140C6ACCC: movzx   ecx, r8b
 * 0000000140C6ACD0: xor     rax, r10
 * 0000000140C6ACD3: and     ecx, 3Fh
 * 0000000140C6ACD6: ror     r8, cl
 * 0000000140C6ACD9: add     r8, rax
 * 0000000140C6ACDC: xor     r8, 0F05h
 * 0000000140C6ACE3: add     rdx, 8
 * 0000000140C6ACE7: cmp     rdx, r9
 * 0000000140C6ACEA: jnz     short loc_140C6ACC6
 * 0000000140C6ACEC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6ACF4: cmp     r8, [rsi+0A80h]
 * 0000000140C6ACFB: jz      short loc_140C6AD5E
 * 0000000140C6ACFD: mov     ecx, [rsi+804h]
 * 0000000140C6AD03: mov     rax, [rsi+588h]
 * 0000000140C6AD0A: mov     [rax], rsi
 * 0000000140C6AD0D: mov     [rax+10h], ecx
 * 0000000140C6AD10: mov     rcx, [rsi+0A80h]
 * 0000000140C6AD17: cmp     [rsi+918h], r12d
 * 0000000140C6AD1E: jnz     short loc_140C6AD2E
 * 0000000140C6AD20: mov     rax, [rsi+588h]
 * 0000000140C6AD27: xor     rcx, r8
 * 0000000140C6AD2A: mov     [rax+18h], rcx
 * 0000000140C6AD2E: xor     edx, edx
 * 0000000140C6AD30: mov     r9d, 100h
 * 0000000140C6AD36: mov     rcx, rsi
 * 0000000140C6AD39: call    sub_140C7F03C
 * 0000000140C6AD3E: jmp     short loc_140C6AD5E
 * 0000000140C6AD40: test    dword ptr [rsi+9DCh], 200h
 * 0000000140C6AD4A: jz      short loc_140C6AD5E
 * 0000000140C6AD4C: cmp     rcx, 0FFFFFFFFFFFFFFFFh
 * 0000000140C6AD50: jnz     short loc_140C6AD5E
 * 0000000140C6AD52: mov     rax, rdx
 * 0000000140C6AD55: mov     ecx, r9d
 * 0000000140C6AD58: shr     rdx, 20h
 * 0000000140C6AD5C: wrmsr
 * 0000000140C6AD5E: add     ebx, r15d
 * 0000000140C6AD61: cmp     ebx, [r13+18h]
 * 0000000140C6AD65: jb      loc_140C6ABA4
 * 0000000140C6AD6B: mov     rax, [rsi+1A8h]
 * 0000000140C6AD72: lea     rcx, [rbp+7B0h+var_2F8]
 * 0000000140C6AD79: call    KeGuardDispatchICall
 * 0000000140C6AD7E: mov     eax, [r13+18h]
 * 0000000140C6AD82: shl     eax, 0Fh
 * 0000000140C6AD85: jmp     loc_140C746DB
 * 0000000140C6AD8A: mov     ecx, [rsi+850h]
 * 0000000140C6AD90: test    r15b, cl
 * 0000000140C6AD93: jz      loc_140C773A3
 * 0000000140C6AD99: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6ADA3: jnz     short loc_140C6ADBB
 * 0000000140C6ADA5: mov     r14d, r12d
 * 0000000140C6ADA8: and     ecx, 3
 * 0000000140C6ADAB: cmp     cl, 3
 * 0000000140C6ADAE: setz    r14b
 * 0000000140C6ADB2: mov     dword ptr [rbp+7B0h+arg_8], r14d
 * 0000000140C6ADB9: jmp     short loc_140C6AE0B
 * 0000000140C6ADBB: rdtsc
 * 0000000140C6ADBD: shl     rdx, 20h
 * 0000000140C6ADC1: or      rax, rdx
 * 0000000140C6ADC4: mov     rcx, rax
 * 0000000140C6ADC7: ror     rcx, 3
 * 0000000140C6ADCB: xor     rcx, rax
 * 0000000140C6ADCE: mov     rax, 7010008004002001h
 * 0000000140C6ADD8: mul     rcx
 * 0000000140C6ADDB: mov     rcx, rdx
 * 0000000140C6ADDE: mov     [rbp+7B0h+var_390], rdx
 * 0000000140C6ADE5: xor     rcx, rax
 * 0000000140C6ADE8: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C6ADF2: mul     rcx
 * 0000000140C6ADF5: shr     rdx, 1
 * 0000000140C6ADF8: lea     rax, [rdx+rdx*2]
 * 0000000140C6ADFC: mov     edx, r12d
 * 0000000140C6ADFF: cmp     rcx, rax
 * 0000000140C6AE02: setz    dl
 * 0000000140C6AE05: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C6AE0B: mov     rax, [rsi+188h]
 * 0000000140C6AE12: mov     r13d, r12d
 * 0000000140C6AE15: mov     rbx, [rsi+540h]
 * 0000000140C6AE1C: mov     [rbp+7B0h+var_830], r12d
 * 0000000140C6AE20: call    KeGuardDispatchICall
 * 0000000140C6AE25: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6AE2F: jnz     short loc_140C6AE44
 * 0000000140C6AE31: mov     ecx, [rsi+978h]
 * 0000000140C6AE37: cmp     ecx, 7
 * 0000000140C6AE3A: jnb     short loc_140C6AE44
 * 0000000140C6AE3C: mov     r14d, r15d
 * 0000000140C6AE3F: shl     r14b, cl
 * 0000000140C6AE42: jmp     short loc_140C6AE5C
 * 0000000140C6AE44: mov     rax, [rsi+138h]
 * 0000000140C6AE4B: xor     edx, edx
 * 0000000140C6AE4D: mov     rcx, [rsi+0A48h]
 * 0000000140C6AE54: call    KeGuardDispatchICall
 * 0000000140C6AE59: mov     r14b, 80h
 * 0000000140C6AE5C: mov     rax, [rsi+148h]
 * 0000000140C6AE63: xor     edx, edx
 * 0000000140C6AE65: mov     rcx, rbx
 * 0000000140C6AE68: call    KeGuardDispatchICall
 * 0000000140C6AE6D: mov     r8, [rsi+518h]
 * 0000000140C6AE74: mov     rdx, [r8]
 * 0000000140C6AE77: cmp     rdx, r8
 * 0000000140C6AE7A: jz      short loc_140C6AEA1
 * 0000000140C6AE7C: mov     rax, [rsi+6C8h]
 * 0000000140C6AE83: mov     rcx, rdx
 * 0000000140C6AE86: sub     rcx, [rsi+6E0h]
 * 0000000140C6AE8D: lock or [rcx+rax], r14b
 * 0000000140C6AE92: mov     rdx, [rdx]
 * 0000000140C6AE95: add     r13d, r15d
 * 0000000140C6AE98: cmp     rdx, r8
 * 0000000140C6AE9B: jnz     short loc_140C6AE7C
 * 0000000140C6AE9D: mov     [rbp+7B0h+var_830], r13d
 * 0000000140C6AEA1: mov     rax, [rsi+548h]
 * 0000000140C6AEA8: mov     r15d, 4
 * 0000000140C6AEAE: mov     r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6AEB5: mov     rdi, [rax]
 * 0000000140C6AEB8: mov     rax, [rsi+740h]
 * 0000000140C6AEBF: mov     ebx, [rax+rdi]
 * 0000000140C6AEC2: mov     [rsp+8B0h+var_858], rbx
 * 0000000140C6AEC7: mov     rax, [rsi+110h]
 * 0000000140C6AECE: mov     rdx, r15
 * 0000000140C6AED1: mov     rcx, rdi
 * 0000000140C6AED4: call    KeGuardDispatchICall
 * 0000000140C6AED9: mov     r12, rax
 * 0000000140C6AEDC: test    rax, rax
 * 0000000140C6AEDF: jz      loc_140C6B2CB
 * 0000000140C6AEE5: mov     rax, [rsi+118h]
 * 0000000140C6AEEC: mov     rcx, r12
 * 0000000140C6AEEF: call    KeGuardDispatchICall
 * 0000000140C6AEF4: mov     rbx, rax
 * 0000000140C6AEF7: mov     al, [rax]
 * 0000000140C6AEF9: and     al, 7Fh
 * 0000000140C6AEFB: cmp     al, 3
 * 0000000140C6AEFD: jnz     loc_140C6B063
 * 0000000140C6AF03: mov     rax, [rsi+6C8h]
 * 0000000140C6AF0A: test    [rbx+rax], r14b
 * 0000000140C6AF0E: jnz     loc_140C6B04E
 * 0000000140C6AF14: mov     rax, [rsi+6D0h]
 * 0000000140C6AF1B: mov     ecx, [rbx+rax]
 * 0000000140C6AF1E: test    [rsi+6E8h], ecx
 * 0000000140C6AF24: jz      loc_140C6B04E
 * 0000000140C6AF2A: xor     r11d, r11d
 * 0000000140C6AF2D: cmp     [rsi+918h], r11d
 * 0000000140C6AF34: jnz     loc_140C6B04E
 * 0000000140C6AF3A: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C6AF3F: lea     edx, [r11+1]
 * 0000000140C6AF43: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6AF4D: add     rax, rsi
 * 0000000140C6AF50: mov     [rsi+920h], rax
 * 0000000140C6AF57: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6AF61: add     rax, rcx
 * 0000000140C6AF64: mov     [rsi+928h], rax
 * 0000000140C6AF6B: movsxd  rax, dword ptr [rcx]
 * 0000000140C6AF6E: mov     [rsi+930h], rax
 * 0000000140C6AF75: mov     [rsi+938h], rbx
 * 0000000140C6AF7C: mov     [rsi+918h], edx
 * 0000000140C6AF82: mov     ecx, [rsi+9D8h]
 * 0000000140C6AF88: bt      ecx, 1Dh
 * 0000000140C6AF8C: jb      loc_140C6B04E
 * 0000000140C6AF92: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6AF9C: jz      loc_140C6B04E
 * 0000000140C6AFA2: test    dl, cl
 * 0000000140C6AFA4: jz      loc_140C6B04E
 * 0000000140C6AFAA: mov     ecx, [rsi+0A74h]
 * 0000000140C6AFB0: mov     eax, [rsi+804h]
 * 0000000140C6AFB6: mov     r10, [rsi+838h]
 * 0000000140C6AFBD: sub     eax, ecx
 * 0000000140C6AFBF: mov     r8, [rsi+0A78h]
 * 0000000140C6AFC6: lea     rdx, [rcx+rsi]
 * 0000000140C6AFCA: mov     ecx, eax
 * 0000000140C6AFCC: shr     rcx, 3
 * 0000000140C6AFD0: lea     r9, [rdx+rcx*8]
 * 0000000140C6AFD4: jmp     short loc_140C6AFF7
 * 0000000140C6AFD6: xor     [rdx], r8
 * 0000000140C6AFD9: mov     rax, [rdx]
 * 0000000140C6AFDC: movzx   ecx, r8b
 * 0000000140C6AFE0: xor     rax, r10
 * 0000000140C6AFE3: and     ecx, 3Fh
 * 0000000140C6AFE6: ror     r8, cl
 * 0000000140C6AFE9: add     r8, rax
 * 0000000140C6AFEC: xor     r8, 0F05h
 * 0000000140C6AFF3: add     rdx, 8
 * 0000000140C6AFF7: cmp     rdx, r9
 * 0000000140C6AFFA: jnz     short loc_140C6AFD6
 * 0000000140C6AFFC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6B004: cmp     r8, [rsi+0A80h]
 * 0000000140C6B00B: jz      short loc_140C6B04E
 * 0000000140C6B00D: mov     ecx, [rsi+804h]
 * 0000000140C6B013: mov     rax, [rsi+588h]
 * 0000000140C6B01A: mov     [rax], rsi
 * 0000000140C6B01D: mov     [rax+10h], ecx
 * 0000000140C6B020: mov     rcx, [rsi+0A80h]
 * 0000000140C6B027: cmp     [rsi+918h], r11d
 * 0000000140C6B02E: jnz     short loc_140C6B03E
 * 0000000140C6B030: mov     rax, [rsi+588h]
 * 0000000140C6B037: xor     rcx, r8
 * 0000000140C6B03A: mov     [rax+18h], rcx
 * 0000000140C6B03E: xor     edx, edx
 * 0000000140C6B040: mov     r9d, 100h
 * 0000000140C6B046: mov     rcx, rsi
 * 0000000140C6B049: call    sub_140C7F03C
 * 0000000140C6B04E: mov     rax, [rsi+6C8h]
 * 0000000140C6B055: mov     cl, r14b
 * 0000000140C6B058: not     cl
 * 0000000140C6B05A: lock and [rbx+rax], cl
 * 0000000140C6B05E: jmp     loc_140C6B2B4
 * 0000000140C6B063: xor     r11d, r11d
 * 0000000140C6B066: cmp     al, 6
 * 0000000140C6B068: jnz     loc_140C6B18A
 * 0000000140C6B06E: test    r13d, r13d
 * 0000000140C6B071: jz      loc_140C6B2B4
 * 0000000140C6B077: mov     rcx, [rsi+690h]
 * 0000000140C6B07E: mov     rax, [rbx+rcx+20h]
 * 0000000140C6B083: cmp     rax, [rsi+328h]
 * 0000000140C6B08A: jz      short loc_140C6B095
 * 0000000140C6B08C: cmp     rax, [rsi+330h]
 * 0000000140C6B093: jnz     short loc_140C6B0B5
 * 0000000140C6B095: mov     rax, [rsi+338h]
 * 0000000140C6B09C: cmp     [rbx+rcx+30h], rax
 * 0000000140C6B0A1: jnz     short loc_140C6B0B5
 * 0000000140C6B0A3: mov     rax, [rsi+340h]
 * 0000000140C6B0AA: cmp     [rbx+rcx+28h], rax
 * 0000000140C6B0AF: jz      loc_140C6B2B4
 * 0000000140C6B0B5: cmp     [rsi+918h], r11d
 * 0000000140C6B0BC: jnz     loc_140C6B2B4
 * 0000000140C6B0C2: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C6B0C7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B0D1: add     rax, rsi
 * 0000000140C6B0D4: mov     [rsi+920h], rax
 * 0000000140C6B0DB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B0E5: add     rax, rcx
 * 0000000140C6B0E8: mov     [rsi+928h], rax
 * 0000000140C6B0EF: movsxd  rax, dword ptr [rcx]
 * 0000000140C6B0F2: mov     [rsi+930h], rax
 * 0000000140C6B0F9: mov     [rsi+938h], rbx
 * 0000000140C6B100: mov     ebx, 1
 * 0000000140C6B105: mov     [rsi+918h], ebx
 * 0000000140C6B10B: mov     ecx, [rsi+9D8h]
 * 0000000140C6B111: bt      ecx, 1Dh
 * 0000000140C6B115: jb      loc_140C6B2B4
 * 0000000140C6B11B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B125: jz      loc_140C6B2B4
 * 0000000140C6B12B: test    bl, cl
 * 0000000140C6B12D: jz      loc_140C6B2B4
 * 0000000140C6B133: mov     ecx, [rsi+0A74h]
 * 0000000140C6B139: mov     eax, [rsi+804h]
 * 0000000140C6B13F: mov     r10, [rsi+838h]
 * 0000000140C6B146: sub     eax, ecx
 * 0000000140C6B148: mov     r8, [rsi+0A78h]
 * 0000000140C6B14F: lea     rdx, [rcx+rsi]
 * 0000000140C6B153: mov     ecx, eax
 * 0000000140C6B155: shr     rcx, 3
 * 0000000140C6B159: lea     r9, [rdx+rcx*8]
 * 0000000140C6B15D: jmp     short loc_140C6B180
 * 0000000140C6B15F: xor     [rdx], r8
 * 0000000140C6B162: mov     rax, [rdx]
 * 0000000140C6B165: movzx   ecx, r8b
 * 0000000140C6B169: xor     rax, r10
 * 0000000140C6B16C: and     ecx, 3Fh
 * 0000000140C6B16F: ror     r8, cl
 * 0000000140C6B172: add     r8, rax
 * 0000000140C6B175: xor     r8, 0F05h
 * 0000000140C6B17C: add     rdx, 8
 * 0000000140C6B180: cmp     rdx, r9
 * 0000000140C6B183: jnz     short loc_140C6B15F
 * 0000000140C6B185: jmp     loc_140C6B262
 * 0000000140C6B18A: test    al, al
 * 0000000140C6B18C: jz      loc_140C6B2B4
 * 0000000140C6B192: cmp     [rsi+918h], r11d
 * 0000000140C6B199: jnz     loc_140C6B2B4
 * 0000000140C6B19F: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C6B1A4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B1AE: add     rax, rsi
 * 0000000140C6B1B1: mov     [rsi+920h], rax
 * 0000000140C6B1B8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B1C2: add     rax, rcx
 * 0000000140C6B1C5: mov     [rsi+928h], rax
 * 0000000140C6B1CC: movsxd  rax, dword ptr [rcx]
 * 0000000140C6B1CF: mov     [rsi+930h], rax
 * 0000000140C6B1D6: mov     [rsi+938h], rbx
 * 0000000140C6B1DD: mov     ebx, 1
 * 0000000140C6B1E2: mov     [rsi+918h], ebx
 * 0000000140C6B1E8: mov     ecx, [rsi+9D8h]
 * 0000000140C6B1EE: bt      ecx, 1Dh
 * 0000000140C6B1F2: jb      loc_140C6B2B4
 * 0000000140C6B1F8: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B202: jz      loc_140C6B2B4
 * 0000000140C6B208: test    bl, cl
 * 0000000140C6B20A: jz      loc_140C6B2B4
 * 0000000140C6B210: mov     ecx, [rsi+0A74h]
 * 0000000140C6B216: mov     eax, [rsi+804h]
 * 0000000140C6B21C: mov     r10, [rsi+838h]
 * 0000000140C6B223: sub     eax, ecx
 * 0000000140C6B225: mov     r8, [rsi+0A78h]
 * 0000000140C6B22C: lea     rdx, [rcx+rsi]
 * 0000000140C6B230: mov     ecx, eax
 * 0000000140C6B232: shr     rcx, 3
 * 0000000140C6B236: lea     r9, [rdx+rcx*8]
 * 0000000140C6B23A: jmp     short loc_140C6B25D
 * 0000000140C6B23C: xor     [rdx], r8
 * 0000000140C6B23F: mov     rax, [rdx]
 * 0000000140C6B242: movzx   ecx, r8b
 * 0000000140C6B246: xor     rax, r10
 * 0000000140C6B249: and     ecx, 3Fh
 * 0000000140C6B24C: ror     r8, cl
 * 0000000140C6B24F: add     r8, rax
 * 0000000140C6B252: xor     r8, 0F05h
 * 0000000140C6B259: add     rdx, 8
 * 0000000140C6B25D: cmp     rdx, r9
 * 0000000140C6B260: jnz     short loc_140C6B23C
 * 0000000140C6B262: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6B26A: cmp     r8, [rsi+0A80h]
 * 0000000140C6B271: jz      short loc_140C6B2B4
 * 0000000140C6B273: mov     ecx, [rsi+804h]
 * 0000000140C6B279: mov     rax, [rsi+588h]
 * 0000000140C6B280: mov     [rax], rsi
 * 0000000140C6B283: mov     [rax+10h], ecx
 * 0000000140C6B286: mov     rcx, [rsi+0A80h]
 * 0000000140C6B28D: cmp     [rsi+918h], r11d
 * 0000000140C6B294: jnz     short loc_140C6B2A4
 * 0000000140C6B296: mov     rax, [rsi+588h]
 * 0000000140C6B29D: xor     rcx, r8
 * 0000000140C6B2A0: mov     [rax+18h], rcx
 * 0000000140C6B2A4: mov     r9d, 100h
 * 0000000140C6B2AA: xor     edx, edx
 * 0000000140C6B2AC: mov     rcx, rsi
 * 0000000140C6B2AF: call    sub_140C7F03C
 * 0000000140C6B2B4: mov     rax, [rsi+130h]
 * 0000000140C6B2BB: mov     rdx, r12
 * 0000000140C6B2BE: mov     rcx, rdi
 * 0000000140C6B2C1: call    KeGuardDispatchICall
 * 0000000140C6B2C6: mov     rbx, [rsp+8B0h+var_858]
 * 0000000140C6B2CB: add     r15, 4
 * 0000000140C6B2CF: cmp     r15, rbx
 * 0000000140C6B2D2: jb      loc_140C6AEC7
 * 0000000140C6B2D8: mov     r13d, [rbp+7B0h+var_830]
 * 0000000140C6B2DC: mov     edi, 2
 * 0000000140C6B2E1: cmp     r14b, 80h
 * 0000000140C6B2E5: jnz     short loc_140C6B2FC
 * 0000000140C6B2E7: mov     rax, [rsi+140h]
 * 0000000140C6B2EE: xor     edx, edx
 * 0000000140C6B2F0: mov     rcx, [rsi+0A48h]
 * 0000000140C6B2F7: call    KeGuardDispatchICall
 * 0000000140C6B2FC: mov     rcx, [rsi+540h]
 * 0000000140C6B303: xor     edx, edx
 * 0000000140C6B305: mov     rax, [rsi+150h]
 * 0000000140C6B30C: call    KeGuardDispatchICall
 * 0000000140C6B311: mov     rax, [rsi+190h]
 * 0000000140C6B318: call    KeGuardDispatchICall
 * 0000000140C6B31D: shr     rbx, 2
 * 0000000140C6B321: add     r13d, ebx
 * 0000000140C6B324: shl     r13d, 8
 * 0000000140C6B328: add     [rsi+848h], r13d
 * 0000000140C6B32F: xor     r12d, r12d
 * 0000000140C6B332: jmp     loc_140C770FB
 * 0000000140C6B337: mov     eax, [rsi+850h]
 * 0000000140C6B33D: test    r15b, al
 * 0000000140C6B340: jnz     loc_140C773A3
 * 0000000140C6B346: mov     rax, [rsi+188h]
 * 0000000140C6B34D: mov     r13d, r12d
 * 0000000140C6B350: mov     rbx, [rsi+540h]
 * 0000000140C6B357: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C6B35C: call    KeGuardDispatchICall
 * 0000000140C6B361: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6B36B: jnz     short loc_140C6B37D
 * 0000000140C6B36D: mov     ecx, [rsi+978h]
 * 0000000140C6B373: cmp     ecx, 7
 * 0000000140C6B376: jnb     short loc_140C6B37D
 * 0000000140C6B378: shl     r15b, cl
 * 0000000140C6B37B: jmp     short loc_140C6B395
 * 0000000140C6B37D: mov     rax, [rsi+138h]
 * 0000000140C6B384: xor     edx, edx
 * 0000000140C6B386: mov     rcx, [rsi+0A48h]
 * 0000000140C6B38D: call    KeGuardDispatchICall
 * 0000000140C6B392: mov     r15b, 80h
 * 0000000140C6B395: mov     rax, [rsi+148h]
 * 0000000140C6B39C: xor     edx, edx
 * 0000000140C6B39E: mov     rcx, rbx
 * 0000000140C6B3A1: mov     [rbp+7B0h+var_830], r15d
 * 0000000140C6B3A5: call    KeGuardDispatchICall
 * 0000000140C6B3AA: mov     r12, [rsi+518h]
 * 0000000140C6B3B1: mov     r14, [r12]
 * 0000000140C6B3B5: cmp     r14, r12
 * 0000000140C6B3B8: jz      loc_140C6B54C
 * 0000000140C6B3BE: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6B3C3: mov     rbx, r14
 * 0000000140C6B3C6: sub     rbx, [rsi+6E0h]
 * 0000000140C6B3CD: cmp     r15b, 80h
 * 0000000140C6B3D1: jz      loc_140C6B527
 * 0000000140C6B3D7: mov     rax, [rsi+6C8h]
 * 0000000140C6B3DE: test    [rbx+rax], r15b
 * 0000000140C6B3E2: jz      loc_140C6B527
 * 0000000140C6B3E8: mov     rax, [rsi+6D0h]
 * 0000000140C6B3EF: mov     ecx, [rbx+rax]
 * 0000000140C6B3F2: test    [rsi+6E8h], ecx
 * 0000000140C6B3F8: jz      loc_140C6B527
 * 0000000140C6B3FE: xor     r11d, r11d
 * 0000000140C6B401: cmp     [rsi+918h], r11d
 * 0000000140C6B408: jnz     loc_140C6B527
 * 0000000140C6B40E: lea     ecx, [r11+1]
 * 0000000140C6B412: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B41C: add     rax, rsi
 * 0000000140C6B41F: mov     [rsi+920h], rax
 * 0000000140C6B426: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B430: add     rax, rdi
 * 0000000140C6B433: mov     [rsi+928h], rax
 * 0000000140C6B43A: movsxd  rax, dword ptr [rdi]
 * 0000000140C6B43D: mov     [rsi+930h], rax
 * 0000000140C6B444: mov     rax, rbx
 * 0000000140C6B447: or      rax, rcx
 * 0000000140C6B44A: mov     [rsi+938h], rax
 * 0000000140C6B451: mov     [rsi+918h], ecx
 * 0000000140C6B457: mov     ecx, [rsi+9D8h]
 * 0000000140C6B45D: bt      ecx, 1Dh
 * 0000000140C6B461: jb      loc_140C6B527
 * 0000000140C6B467: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B471: jz      loc_140C6B527
 * 0000000140C6B477: lea     eax, [r11+1]
 * 0000000140C6B47B: test    al, cl
 * 0000000140C6B47D: jz      loc_140C6B527
 * 0000000140C6B483: mov     ecx, [rsi+0A74h]
 * 0000000140C6B489: mov     eax, [rsi+804h]
 * 0000000140C6B48F: mov     r10, [rsi+838h]
 * 0000000140C6B496: sub     eax, ecx
 * 0000000140C6B498: mov     r8, [rsi+0A78h]
 * 0000000140C6B49F: lea     rdx, [rcx+rsi]
 * 0000000140C6B4A3: mov     ecx, eax
 * 0000000140C6B4A5: shr     rcx, 3
 * 0000000140C6B4A9: lea     r9, [rdx+rcx*8]
 * 0000000140C6B4AD: jmp     short loc_140C6B4D0
 * 0000000140C6B4AF: xor     [rdx], r8
 * 0000000140C6B4B2: mov     rax, [rdx]
 * 0000000140C6B4B5: movzx   ecx, r8b
 * 0000000140C6B4B9: xor     rax, r10
 * 0000000140C6B4BC: and     ecx, 3Fh
 * 0000000140C6B4BF: ror     r8, cl
 * 0000000140C6B4C2: add     r8, rax
 * 0000000140C6B4C5: xor     r8, 0F05h
 * 0000000140C6B4CC: add     rdx, 8
 * 0000000140C6B4D0: cmp     rdx, r9
 * 0000000140C6B4D3: jnz     short loc_140C6B4AF
 * 0000000140C6B4D5: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6B4DD: cmp     r8, [rsi+0A80h]
 * 0000000140C6B4E4: jz      short loc_140C6B527
 * 0000000140C6B4E6: mov     ecx, [rsi+804h]
 * 0000000140C6B4EC: mov     rax, [rsi+588h]
 * 0000000140C6B4F3: mov     [rax], rsi
 * 0000000140C6B4F6: mov     [rax+10h], ecx
 * 0000000140C6B4F9: mov     rcx, [rsi+0A80h]
 * 0000000140C6B500: cmp     [rsi+918h], r11d
 * 0000000140C6B507: jnz     short loc_140C6B517
 * 0000000140C6B509: mov     rax, [rsi+588h]
 * 0000000140C6B510: xor     rcx, r8
 * 0000000140C6B513: mov     [rax+18h], rcx
 * 0000000140C6B517: xor     edx, edx
 * 0000000140C6B519: mov     r9d, 100h
 * 0000000140C6B51F: mov     rcx, rsi
 * 0000000140C6B522: call    sub_140C7F03C
 * 0000000140C6B527: mov     rax, [rsi+6C8h]
 * 0000000140C6B52E: lock or [rbx+rax], r15b
 * 0000000140C6B533: mov     r14, [r14]
 * 0000000140C6B536: inc     r13d
 * 0000000140C6B539: cmp     r14, r12
 * 0000000140C6B53C: jnz     loc_140C6B3C3
 * 0000000140C6B542: mov     dword ptr [rsp+8B0h+var_848], r13d
 * 0000000140C6B547: mov     edi, 2
 * 0000000140C6B54C: mov     rcx, [rsi+4F8h]
 * 0000000140C6B553: mov     rax, cr8
 * 0000000140C6B557: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6B55C: mov     eax, 0Ch
 * 0000000140C6B561: mov     cr8, rax
 * 0000000140C6B565: mov     rax, [rsi+158h]
 * 0000000140C6B56C: lea     rdx, [rbp+7B0h+var_170]
 * 0000000140C6B573: call    KeGuardDispatchICall
 * 0000000140C6B578: mov     r13, [rsi+4F0h]
 * 0000000140C6B57F: mov     r14, [r13+0]
 * 0000000140C6B583: cmp     r14, r13
 * 0000000140C6B586: jz      loc_140C6B70B
 * 0000000140C6B58C: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6B591: mov     r12b, r15b
 * 0000000140C6B594: movzx   edx, r15b
 * 0000000140C6B598: not     r12b
 * 0000000140C6B59B: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C6B5A1: xor     r15d, r15d
 * 0000000140C6B5A4: mov     rax, [rsi+6C8h]
 * 0000000140C6B5AB: mov     rbx, r14
 * 0000000140C6B5AE: sub     rbx, [rsi+6C0h]
 * 0000000140C6B5B5: movsx   ecx, byte ptr [rbx+rax]
 * 0000000140C6B5B9: test    edx, ecx
 * 0000000140C6B5BB: jnz     loc_140C6B6EA
 * 0000000140C6B5C1: cmp     [rsi+918h], r15d
 * 0000000140C6B5C8: jnz     loc_140C6B6EA
 * 0000000140C6B5CE: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B5D8: mov     r8d, 1
 * 0000000140C6B5DE: add     rax, rsi
 * 0000000140C6B5E1: mov     [rsi+920h], rax
 * 0000000140C6B5E8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B5F2: add     rax, rdi
 * 0000000140C6B5F5: mov     [rsi+928h], rax
 * 0000000140C6B5FC: movsxd  rax, dword ptr [rdi]
 * 0000000140C6B5FF: mov     [rsi+930h], rax
 * 0000000140C6B606: mov     [rsi+938h], rbx
 * 0000000140C6B60D: mov     [rsi+918h], r8d
 * 0000000140C6B614: mov     ecx, [rsi+9D8h]
 * 0000000140C6B61A: bt      ecx, 1Dh
 * 0000000140C6B61E: jb      loc_140C6B6EA
 * 0000000140C6B624: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B62E: jz      loc_140C6B6EA
 * 0000000140C6B634: test    r8b, cl
 * 0000000140C6B637: jz      loc_140C6B6EA
 * 0000000140C6B63D: mov     ecx, [rsi+0A74h]
 * 0000000140C6B643: mov     eax, [rsi+804h]
 * 0000000140C6B649: mov     r10, [rsi+838h]
 * 0000000140C6B650: sub     eax, ecx
 * 0000000140C6B652: mov     r8, [rsi+0A78h]
 * 0000000140C6B659: lea     rdx, [rcx+rsi]
 * 0000000140C6B65D: mov     ecx, eax
 * 0000000140C6B65F: shr     rcx, 3
 * 0000000140C6B663: lea     r9, [rdx+rcx*8]
 * 0000000140C6B667: jmp     short loc_140C6B68A
 * 0000000140C6B669: xor     [rdx], r8
 * 0000000140C6B66C: mov     rax, [rdx]
 * 0000000140C6B66F: movzx   ecx, r8b
 * 0000000140C6B673: xor     rax, r10
 * 0000000140C6B676: and     ecx, 3Fh
 * 0000000140C6B679: ror     r8, cl
 * 0000000140C6B67C: add     r8, rax
 * 0000000140C6B67F: xor     r8, 0F05h
 * 0000000140C6B686: add     rdx, 8
 * 0000000140C6B68A: cmp     rdx, r9
 * 0000000140C6B68D: jnz     short loc_140C6B669
 * 0000000140C6B68F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6B697: cmp     r8, [rsi+0A80h]
 * 0000000140C6B69E: jz      short loc_140C6B6E4
 * 0000000140C6B6A0: mov     rax, [rsi+588h]
 * 0000000140C6B6A7: mov     ecx, [rsi+804h]
 * 0000000140C6B6AD: mov     [rax], rsi
 * 0000000140C6B6B0: mov     [rax+10h], ecx
 * 0000000140C6B6B3: mov     rax, [rsi+0A80h]
 * 0000000140C6B6BA: cmp     [rsi+918h], r15d
 * 0000000140C6B6C1: jnz     short loc_140C6B6D4
 * 0000000140C6B6C3: mov     rcx, r8
 * 0000000140C6B6C6: xor     rcx, rax
 * 0000000140C6B6C9: mov     rax, [rsi+588h]
 * 0000000140C6B6D0: mov     [rax+18h], rcx
 * 0000000140C6B6D4: xor     edx, edx
 * 0000000140C6B6D6: mov     r9d, 100h
 * 0000000140C6B6DC: mov     rcx, rsi
 * 0000000140C6B6DF: call    sub_140C7F03C
 * 0000000140C6B6E4: mov     edx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6B6EA: mov     rax, [rsi+6C8h]
 * 0000000140C6B6F1: lock and [rbx+rax], r12b
 * 0000000140C6B6F6: mov     r14, [r14]
 * 0000000140C6B6F9: cmp     r14, r13
 * 0000000140C6B6FC: jnz     loc_140C6B5A4
 * 0000000140C6B702: mov     r15d, [rbp+7B0h+var_830]
 * 0000000140C6B706: mov     edi, 2
 * 0000000140C6B70B: mov     rax, [rsi+198h]
 * 0000000140C6B712: lea     rcx, [rbp+7B0h+var_170]
 * 0000000140C6B719: call    KeGuardDispatchICall
 * 0000000140C6B71E: movzx   eax, byte ptr [rsp+8B0h+var_858]
 * 0000000140C6B723: mov     cr8, rax
 * 0000000140C6B727: cmp     r15b, 80h
 * 0000000140C6B72B: jnz     short loc_140C6B742
 * 0000000140C6B72D: mov     rax, [rsi+140h]
 * 0000000140C6B734: xor     edx, edx
 * 0000000140C6B736: mov     rcx, [rsi+0A48h]
 * 0000000140C6B73D: call    KeGuardDispatchICall
 * 0000000140C6B742: mov     rcx, [rsi+540h]
 * 0000000140C6B749: xor     edx, edx
 * 0000000140C6B74B: mov     rax, [rsi+150h]
 * 0000000140C6B752: call    KeGuardDispatchICall
 * 0000000140C6B757: mov     rax, [rsi+190h]
 * 0000000140C6B75E: call    KeGuardDispatchICall
 * 0000000140C6B763: mov     eax, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6B767: shl     eax, 8
 * 0000000140C6B76A: add     [rsi+848h], eax
 * 0000000140C6B770: jmp     loc_140C6B32F
 * 0000000140C6B775: mov     r14, [r13+8]
 * 0000000140C6B779: mov     r8d, [r13+10h]
 * 0000000140C6B77D: mov     r9, r14
 * 0000000140C6B780: add     [rsi+848h], r8d
 * 0000000140C6B787: mov     rax, r14
 * 0000000140C6B78A: mov     r10d, [rsi+834h]
 * 0000000140C6B791: mov     r15, [rsi+838h]
 * 0000000140C6B798: lea     rcx, [r14+r8]
 * 0000000140C6B79C: cmp     r14, rcx
 * 0000000140C6B79F: jnb     short loc_140C6B7B1
 * 0000000140C6B7A1: mov     edx, 40h ; '@'
 * 0000000140C6B7A6: prefetchnta byte ptr [rax]
 * 0000000140C6B7A9: add     rax, rdx
 * 0000000140C6B7AC: cmp     rax, rcx
 * 0000000140C6B7AF: jb      short loc_140C6B7A6
 * 0000000140C6B7B1: mov     r11d, r8d
 * 0000000140C6B7B4: mov     rbx, r15
 * 0000000140C6B7B7: shr     r11d, 7
 * 0000000140C6B7BB: mov     edx, 1
 * 0000000140C6B7C0: test    r11d, r11d
 * 0000000140C6B7C3: jz      short loc_140C6B832
 * 0000000140C6B7C5: mov     edi, 0FFFFFFFFh
 * 0000000140C6B7CA: mov     rsi, 7010008004002001h
 * 0000000140C6B7D4: mov     eax, 8
 * 0000000140C6B7D9: xor     rbx, [r9]
 * 0000000140C6B7DC: mov     ecx, r10d
 * 0000000140C6B7DF: rol     rbx, cl
 * 0000000140C6B7E2: xor     rbx, [r9+8]
 * 0000000140C6B7E6: add     r9, 10h
 * 0000000140C6B7EA: rol     rbx, cl
 * 0000000140C6B7ED: sub     rax, rdx
 * 0000000140C6B7F0: jnz     short loc_140C6B7D9
 * 0000000140C6B7F2: mov     rcx, r9
 * 0000000140C6B7F5: sub     rcx, r14
 * 0000000140C6B7F8: xor     rcx, r15
 * 0000000140C6B7FB: mov     rax, rcx
 * 0000000140C6B7FE: rol     rax, 11h
 * 0000000140C6B802: xor     rcx, rax
 * 0000000140C6B805: mov     rax, rsi
 * 0000000140C6B808: mul     rcx
 * 0000000140C6B80B: mov     [rbp+7B0h+var_288], rdx
 * 0000000140C6B812: xor     rdx, rax
 * 0000000140C6B815: xor     r10d, edx
 * 0000000140C6B818: mov     edx, 1
 * 0000000140C6B81D: and     r10d, 3Fh
 * 0000000140C6B821: cmovz   r10d, edx
 * 0000000140C6B825: add     r11d, edi
 * 0000000140C6B828: jnz     short loc_140C6B7D4
 * 0000000140C6B82A: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6B82F: lea     edi, [rdx+1]
 * 0000000140C6B832: and     r8d, 7Fh
 * 0000000140C6B836: cmp     r8d, 8
 * 0000000140C6B83A: jb      short loc_140C6B859
 * 0000000140C6B83C: mov     eax, r8d
 * 0000000140C6B83F: shr     rax, 3
 * 0000000140C6B843: xor     rbx, [r9]
 * 0000000140C6B846: mov     ecx, r10d
 * 0000000140C6B849: rol     rbx, cl
 * 0000000140C6B84C: add     r9, 8
 * 0000000140C6B850: add     r8d, 0FFFFFFF8h
 * 0000000140C6B854: sub     rax, rdx
 * 0000000140C6B857: jnz     short loc_140C6B843
 * 0000000140C6B859: test    r8d, r8d
 * 0000000140C6B85C: jz      short loc_140C6B87C
 * 0000000140C6B85E: mov     edi, 0FFFFFFFFh
 * 0000000140C6B863: movzx   eax, byte ptr [r9]
 * 0000000140C6B867: mov     ecx, r10d
 * 0000000140C6B86A: xor     rbx, rax
 * 0000000140C6B86D: add     r9, rdx
 * 0000000140C6B870: rol     rbx, cl
 * 0000000140C6B873: add     r8d, edi
 * 0000000140C6B876: jnz     short loc_140C6B863
 * 0000000140C6B878: lea     edi, [r8+2]
 * 0000000140C6B87C: mov     rax, rbx
 * 0000000140C6B87F: jmp     short loc_140C6B883
 * 0000000140C6B881: xor     ebx, eax
 * 0000000140C6B883: shr     rax, 1Fh
 * 0000000140C6B887: test    rax, rax
 * 0000000140C6B88A: jnz     short loc_140C6B881
 * 0000000140C6B88C: btr     ebx, 1Fh
 * 0000000140C6B890: cmp     ebx, [r13+14h]
 * 0000000140C6B894: jz      loc_140C77395
 * 0000000140C6B89A: cmp     [r13+0], eax
 * 0000000140C6B89E: jnz     short loc_140C6B8A8
 * 0000000140C6B8A0: cmp     [r13+18h], eax
 * 0000000140C6B8A4: cmovnz  r12d, edx
 * 0000000140C6B8A8: mov     ecx, [r13+10h]
 * 0000000140C6B8AC: mov     rdx, [r13+8]
 * 0000000140C6B8B0: test    rcx, rcx
 * 0000000140C6B8B3: jz      loc_140C6B95B
 * 0000000140C6B8B9: mov     eax, [rsi+9DCh]
 * 0000000140C6B8BF: mov     r8d, 40h ; '@'
 * 0000000140C6B8C5: test    r8b, al
 * 0000000140C6B8C8: jz      loc_140C6B95B
 * 0000000140C6B8CE: mov     r15, cr8
 * 0000000140C6B8D2: mov     r14, rdx
 * 0000000140C6B8D5: lea     rax, [rcx-1]
 * 0000000140C6B8D9: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6B8E0: add     rax, rdx
 * 0000000140C6B8E3: or      rax, 0FFFh
 * 0000000140C6B8E9: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6B8EE: lea     r13, [r14-1]
 * 0000000140C6B8F2: mov     cr8, rdi
 * 0000000140C6B8F6: mov     rax, [rsi+468h]
 * 0000000140C6B8FD: xor     edx, edx
 * 0000000140C6B8FF: mov     rcx, r14
 * 0000000140C6B902: call    KeGuardDispatchICall
 * 0000000140C6B907: cmp     eax, 0C000022Dh
 * 0000000140C6B90C: jnz     short loc_140C6B92A
 * 0000000140C6B90E: test    r12d, r12d
 * 0000000140C6B911: jnz     short loc_140C6B94E
 * 0000000140C6B913: lea     eax, [r12+1]
 * 0000000140C6B918: cmp     r15b, al
 * 0000000140C6B91B: ja      short loc_140C6B92E
 * 0000000140C6B91D: movzx   eax, r15b
 * 0000000140C6B921: mov     cr8, rax
 * 0000000140C6B925: mov     al, [r14]
 * 0000000140C6B928: jmp     short loc_140C6B8F2
 * 0000000140C6B92A: test    eax, eax
 * 0000000140C6B92C: js      short loc_140C6B94E
 * 0000000140C6B92E: mov     r11d, 1000h
 * 0000000140C6B934: add     r14, r11
 * 0000000140C6B937: add     r13, r11
 * 0000000140C6B93A: cmp     r13, [rsp+8B0h+var_858]
 * 0000000140C6B93F: jnz     short loc_140C6B8F6
 * 0000000140C6B941: movzx   eax, r15b
 * 0000000140C6B945: mov     cr8, rax
 * 0000000140C6B949: jmp     loc_140C6A3EF
 * 0000000140C6B94E: movzx   eax, r15b
 * 0000000140C6B952: mov     cr8, rax
 * 0000000140C6B956: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6B95B: mov     eax, [r13+14h]
 * 0000000140C6B95F: xor     r12d, r12d
 * 0000000140C6B962: cmp     [rsi+918h], r12d
 * 0000000140C6B969: jnz     short loc_140C6B97B
 * 0000000140C6B96B: mov     ecx, ebx
 * 0000000140C6B96D: xor     rcx, rax
 * 0000000140C6B970: mov     rax, [rsi+588h]
 * 0000000140C6B977: mov     [rax+18h], rcx
 * 0000000140C6B97B: mov     r15d, 1
 * 0000000140C6B981: mov     rcx, [r13+8]
 * 0000000140C6B985: cmp     [rsi+918h], r12d
 * 0000000140C6B98C: jnz     loc_140C75354
 * 0000000140C6B992: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6B99C: add     rax, rsi
 * 0000000140C6B99F: mov     [rsi+920h], rax
 * 0000000140C6B9A6: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6B9B0: add     rax, r13
 * 0000000140C6B9B3: mov     [rsi+928h], rax
 * 0000000140C6B9BA: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6B9BE: mov     [rsi+930h], rax
 * 0000000140C6B9C5: mov     [rsi+938h], rcx
 * 0000000140C6B9CC: mov     [rsi+918h], r15d
 * 0000000140C6B9D3: mov     ecx, [rsi+9D8h]
 * 0000000140C6B9D9: bt      ecx, 1Dh
 * 0000000140C6B9DD: jb      loc_140C75354
 * 0000000140C6B9E3: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6B9ED: jz      loc_140C75354
 * 0000000140C6B9F3: test    r15b, cl
 * 0000000140C6B9F6: jz      loc_140C75354
 * 0000000140C6B9FC: mov     ecx, [rsi+0A74h]
 * 0000000140C6BA02: mov     eax, [rsi+804h]
 * 0000000140C6BA08: mov     r10, [rsi+838h]
 * 0000000140C6BA0F: sub     eax, ecx
 * 0000000140C6BA11: mov     r8, [rsi+0A78h]
 * 0000000140C6BA18: lea     rdx, [rcx+rsi]
 * 0000000140C6BA1C: mov     ecx, eax
 * 0000000140C6BA1E: shr     rcx, 3
 * 0000000140C6BA22: lea     r9, [rdx+rcx*8]
 * 0000000140C6BA26: jmp     short loc_140C6BA49
 * 0000000140C6BA28: xor     [rdx], r8
 * 0000000140C6BA2B: mov     rax, [rdx]
 * 0000000140C6BA2E: movzx   ecx, r8b
 * 0000000140C6BA32: xor     rax, r10
 * 0000000140C6BA35: and     ecx, 3Fh
 * 0000000140C6BA38: ror     r8, cl
 * 0000000140C6BA3B: add     r8, rax
 * 0000000140C6BA3E: xor     r8, 0F05h
 * 0000000140C6BA45: add     rdx, 8
 * 0000000140C6BA49: cmp     rdx, r9
 * 0000000140C6BA4C: jnz     short loc_140C6BA28
 * 0000000140C6BA4E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6BA56: cmp     r8, [rsi+0A80h]
 * 0000000140C6BA5D: jz      loc_140C75354
 * 0000000140C6BA63: mov     ecx, [rsi+804h]
 * 0000000140C6BA69: mov     rax, [rsi+588h]
 * 0000000140C6BA70: mov     [rax], rsi
 * 0000000140C6BA73: mov     [rax+10h], ecx
 * 0000000140C6BA76: mov     rcx, [rsi+0A80h]
 * 0000000140C6BA7D: cmp     [rsi+918h], r12d
 * 0000000140C6BA84: jnz     short loc_140C6BA94
 * 0000000140C6BA86: xor     rcx, r8
 * 0000000140C6BA89: mov     rax, [rsi+588h]
 * 0000000140C6BA90: mov     [rax+18h], rcx
 * 0000000140C6BA94: xor     edx, edx
 * 0000000140C6BA96: mov     r9d, 100h
 * 0000000140C6BA9C: mov     rcx, rsi
 * 0000000140C6BA9F: call    sub_140C7F03C
 * 0000000140C6BAA4: jmp     loc_140C75354
 * 0000000140C6BAA9: mov     rax, [rsi+568h]
 * 0000000140C6BAB0: cmp     [rax+20h], r12
 * 0000000140C6BAB4: jz      loc_140C773A3
 * 0000000140C6BABA: add     dword ptr [rsi+848h], 100h
 * 0000000140C6BAC4: mov     r15, [rsi+580h]
 * 0000000140C6BACB: mov     rax, [rsi+2E0h]
 * 0000000140C6BAD2: mov     rcx, r15
 * 0000000140C6BAD5: call    KeGuardDispatchICall
 * 0000000140C6BADA: mov     r14, rax
 * 0000000140C6BADD: test    rax, rax
 * 0000000140C6BAE0: jz      loc_140C770FB
 * 0000000140C6BAE6: mov     rax, [rsi+2E8h]
 * 0000000140C6BAED: mov     rcx, r14
 * 0000000140C6BAF0: call    KeGuardDispatchICall
 * 0000000140C6BAF5: mov     rbx, rax
 * 0000000140C6BAF8: mov     rax, [r13+18h]
 * 0000000140C6BAFC: test    rax, rax
 * 0000000140C6BAFF: jz      loc_140C6BC35
 * 0000000140C6BB05: cmp     rax, rbx
 * 0000000140C6BB08: jz      loc_140C6BD7E
 * 0000000140C6BB0E: cmp     [rsi+918h], r12d
 * 0000000140C6BB15: jnz     loc_140C6BD7E
 * 0000000140C6BB1B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6BB25: mov     edx, 1
 * 0000000140C6BB2A: add     rax, rsi
 * 0000000140C6BB2D: mov     [rsi+920h], rax
 * 0000000140C6BB34: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6BB3E: add     rax, r13
 * 0000000140C6BB41: mov     [rsi+928h], rax
 * 0000000140C6BB48: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6BB4C: mov     [rsi+930h], rax
 * 0000000140C6BB53: mov     [rsi+938h], rbx
 * 0000000140C6BB5A: mov     [rsi+918h], edx
 * 0000000140C6BB60: mov     ecx, [rsi+9D8h]
 * 0000000140C6BB66: bt      ecx, 1Dh
 * 0000000140C6BB6A: jb      loc_140C6BD7E
 * 0000000140C6BB70: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6BB7A: jz      loc_140C6BD7E
 * 0000000140C6BB80: test    dl, cl
 * 0000000140C6BB82: jz      loc_140C6BD7E
 * 0000000140C6BB88: mov     ecx, [rsi+0A74h]
 * 0000000140C6BB8E: mov     eax, [rsi+804h]
 * 0000000140C6BB94: mov     r10, [rsi+838h]
 * 0000000140C6BB9B: sub     eax, ecx
 * 0000000140C6BB9D: mov     r8, [rsi+0A78h]
 * 0000000140C6BBA4: lea     rdx, [rcx+rsi]
 * 0000000140C6BBA8: mov     ecx, eax
 * 0000000140C6BBAA: shr     rcx, 3
 * 0000000140C6BBAE: lea     r9, [rdx+rcx*8]
 * 0000000140C6BBB2: jmp     short loc_140C6BBD5
 * 0000000140C6BBB4: xor     [rdx], r8
 * 0000000140C6BBB7: mov     rax, [rdx]
 * 0000000140C6BBBA: movzx   ecx, r8b
 * 0000000140C6BBBE: xor     rax, r10
 * 0000000140C6BBC1: and     ecx, 3Fh
 * 0000000140C6BBC4: ror     r8, cl
 * 0000000140C6BBC7: add     r8, rax
 * 0000000140C6BBCA: xor     r8, 0F05h
 * 0000000140C6BBD1: add     rdx, 8
 * 0000000140C6BBD5: cmp     rdx, r9
 * 0000000140C6BBD8: jnz     short loc_140C6BBB4
 * 0000000140C6BBDA: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6BBE2: cmp     r8, [rsi+0A80h]
 * 0000000140C6BBE9: jz      loc_140C6BD7E
 * 0000000140C6BBEF: mov     ecx, [rsi+804h]
 * 0000000140C6BBF5: mov     rax, [rsi+588h]
 * 0000000140C6BBFC: mov     [rax], rsi
 * 0000000140C6BBFF: mov     [rax+10h], ecx
 * 0000000140C6BC02: mov     rcx, [rsi+0A80h]
 * 0000000140C6BC09: cmp     [rsi+918h], r12d
 * 0000000140C6BC10: jnz     short loc_140C6BC20
 * 0000000140C6BC12: mov     rax, [rsi+588h]
 * 0000000140C6BC19: xor     rcx, r8
 * 0000000140C6BC1C: mov     [rax+18h], rcx
 * 0000000140C6BC20: xor     edx, edx
 * 0000000140C6BC22: mov     r9d, 100h
 * 0000000140C6BC28: mov     rcx, rsi
 * 0000000140C6BC2B: call    sub_140C7F03C
 * 0000000140C6BC30: jmp     loc_140C6BD7E
 * 0000000140C6BC35: mov     eax, [rsi+9C0h]
 * 0000000140C6BC3B: mov     rcx, [rsi+9C8h]
 * 0000000140C6BC42: test    rax, rax
 * 0000000140C6BC45: jz      short loc_140C6BC5C
 * 0000000140C6BC47: lea     rdx, [rax-1]
 * 0000000140C6BC4B: add     rdx, rcx
 * 0000000140C6BC4E: cmp     rbx, rcx
 * 0000000140C6BC51: jb      short loc_140C6BC5C
 * 0000000140C6BC53: cmp     rbx, rdx
 * 0000000140C6BC56: jbe     loc_140C6BD7A
 * 0000000140C6BC5C: cmp     [rsi+918h], r12d
 * 0000000140C6BC63: jnz     loc_140C6BD7A
 * 0000000140C6BC69: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6BC73: mov     edx, 1
 * 0000000140C6BC78: add     rax, rsi
 * 0000000140C6BC7B: mov     [rsi+920h], rax
 * 0000000140C6BC82: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6BC8C: add     rax, r13
 * 0000000140C6BC8F: mov     [rsi+928h], rax
 * 0000000140C6BC96: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6BC9A: mov     [rsi+930h], rax
 * 0000000140C6BCA1: mov     [rsi+938h], rbx
 * 0000000140C6BCA8: mov     [rsi+918h], edx
 * 0000000140C6BCAE: mov     ecx, [rsi+9D8h]
 * 0000000140C6BCB4: bt      ecx, 1Dh
 * 0000000140C6BCB8: jb      loc_140C6BD7A
 * 0000000140C6BCBE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6BCC8: jz      loc_140C6BD7A
 * 0000000140C6BCCE: test    dl, cl
 * 0000000140C6BCD0: jz      loc_140C6BD7A
 * 0000000140C6BCD6: mov     ecx, [rsi+0A74h]
 * 0000000140C6BCDC: mov     eax, [rsi+804h]
 * 0000000140C6BCE2: mov     r10, [rsi+838h]
 * 0000000140C6BCE9: sub     eax, ecx
 * 0000000140C6BCEB: mov     r8, [rsi+0A78h]
 * 0000000140C6BCF2: lea     rdx, [rcx+rsi]
 * 0000000140C6BCF6: mov     ecx, eax
 * 0000000140C6BCF8: shr     rcx, 3
 * 0000000140C6BCFC: lea     r9, [rdx+rcx*8]
 * 0000000140C6BD00: jmp     short loc_140C6BD23
 * 0000000140C6BD02: xor     [rdx], r8
 * 0000000140C6BD05: mov     rax, [rdx]
 * 0000000140C6BD08: movzx   ecx, r8b
 * 0000000140C6BD0C: xor     rax, r10
 * 0000000140C6BD0F: and     ecx, 3Fh
 * 0000000140C6BD12: ror     r8, cl
 * 0000000140C6BD15: add     r8, rax
 * 0000000140C6BD18: xor     r8, 0F05h
 * 0000000140C6BD1F: add     rdx, 8
 * 0000000140C6BD23: cmp     rdx, r9
 * 0000000140C6BD26: jnz     short loc_140C6BD02
 * 0000000140C6BD28: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6BD30: cmp     r8, [rsi+0A80h]
 * 0000000140C6BD37: jz      short loc_140C6BD7A
 * 0000000140C6BD39: mov     ecx, [rsi+804h]
 * 0000000140C6BD3F: mov     rax, [rsi+588h]
 * 0000000140C6BD46: mov     [rax], rsi
 * 0000000140C6BD49: mov     [rax+10h], ecx
 * 0000000140C6BD4C: mov     rcx, [rsi+0A80h]
 * 0000000140C6BD53: cmp     [rsi+918h], r12d
 * 0000000140C6BD5A: jnz     short loc_140C6BD6A
 * 0000000140C6BD5C: mov     rax, [rsi+588h]
 * 0000000140C6BD63: xor     rcx, r8
 * 0000000140C6BD66: mov     [rax+18h], rcx
 * 0000000140C6BD6A: xor     edx, edx
 * 0000000140C6BD6C: mov     r9d, 100h
 * 0000000140C6BD72: mov     rcx, rsi
 * 0000000140C6BD75: call    sub_140C7F03C
 * 0000000140C6BD7A: mov     [r13+18h], rbx
 * 0000000140C6BD7E: mov     rax, [rsi+2F0h]
 * 0000000140C6BD85: mov     rdx, r14
 * 0000000140C6BD88: mov     rcx, r15
 * 0000000140C6BD8B: call    KeGuardDispatchICall
 * 0000000140C6BD90: jmp     loc_140C770FB
 * 0000000140C6BD95: mov     ecx, r10d
 * 0000000140C6BD98: sub     ecx, 15h
 * 0000000140C6BD9B: jz      loc_140C70BA3
 * 0000000140C6BDA1: sub     ecx, 3
 * 0000000140C6BDA4: jz      loc_140C6DAF8
 * 0000000140C6BDAA: sub     ecx, 1
 * 0000000140C6BDAD: jz      loc_140C6D626
 * 0000000140C6BDB3: sub     ecx, 1
 * 0000000140C6BDB6: jz      loc_140C6D342
 * 0000000140C6BDBC: sub     ecx, 1
 * 0000000140C6BDBF: jz      loc_140C6CFF7
 * 0000000140C6BDC5: sub     ecx, 1
 * 0000000140C6BDC8: jz      loc_140C6C3A3
 * 0000000140C6BDCE: cmp     ecx, 1
 * 0000000140C6BDD1: jnz     loc_140C740DB
 * 0000000140C6BDD7: mov     r14, [r13+8]
 * 0000000140C6BDDB: mov     r8d, [r13+10h]
 * 0000000140C6BDDF: mov     r9, r14
 * 0000000140C6BDE2: add     [rsi+848h], r8d
 * 0000000140C6BDE9: mov     rax, r14
 * 0000000140C6BDEC: mov     r10d, [rsi+834h]
 * 0000000140C6BDF3: mov     r15, [rsi+838h]
 * 0000000140C6BDFA: lea     rcx, [r14+r8]
 * 0000000140C6BDFE: cmp     r14, rcx
 * 0000000140C6BE01: jnb     short loc_140C6BE13
 * 0000000140C6BE03: mov     edx, 40h ; '@'
 * 0000000140C6BE08: prefetchnta byte ptr [rax]
 * 0000000140C6BE0B: add     rax, rdx
 * 0000000140C6BE0E: cmp     rax, rcx
 * 0000000140C6BE11: jb      short loc_140C6BE08
 * 0000000140C6BE13: mov     r11d, r8d
 * 0000000140C6BE16: mov     rbx, r15
 * 0000000140C6BE19: shr     r11d, 7
 * 0000000140C6BE1D: mov     edx, 1
 * 0000000140C6BE22: test    r11d, r11d
 * 0000000140C6BE25: jz      short loc_140C6BE94
 * 0000000140C6BE27: mov     edi, 0FFFFFFFFh
 * 0000000140C6BE2C: mov     rsi, 7010008004002001h
 * 0000000140C6BE36: mov     eax, 8
 * 0000000140C6BE3B: xor     rbx, [r9]
 * 0000000140C6BE3E: mov     ecx, r10d
 * 0000000140C6BE41: rol     rbx, cl
 * 0000000140C6BE44: xor     rbx, [r9+8]
 * 0000000140C6BE48: add     r9, 10h
 * 0000000140C6BE4C: rol     rbx, cl
 * 0000000140C6BE4F: sub     rax, rdx
 * 0000000140C6BE52: jnz     short loc_140C6BE3B
 * 0000000140C6BE54: mov     rcx, r9
 * 0000000140C6BE57: sub     rcx, r14
 * 0000000140C6BE5A: xor     rcx, r15
 * 0000000140C6BE5D: mov     rax, rcx
 * 0000000140C6BE60: rol     rax, 11h
 * 0000000140C6BE64: xor     rcx, rax
 * 0000000140C6BE67: mov     rax, rsi
 * 0000000140C6BE6A: mul     rcx
 * 0000000140C6BE6D: mov     [rbp+7B0h+var_388], rdx
 * 0000000140C6BE74: xor     rdx, rax
 * 0000000140C6BE77: xor     r10d, edx
 * 0000000140C6BE7A: mov     edx, 1
 * 0000000140C6BE7F: and     r10d, 3Fh
 * 0000000140C6BE83: cmovz   r10d, edx
 * 0000000140C6BE87: add     r11d, edi
 * 0000000140C6BE8A: jnz     short loc_140C6BE36
 * 0000000140C6BE8C: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6BE91: lea     edi, [rdx+1]
 * 0000000140C6BE94: and     r8d, 7Fh
 * 0000000140C6BE98: cmp     r8d, 8
 * 0000000140C6BE9C: jb      short loc_140C6BEBB
 * 0000000140C6BE9E: mov     eax, r8d
 * 0000000140C6BEA1: shr     rax, 3
 * 0000000140C6BEA5: xor     rbx, [r9]
 * 0000000140C6BEA8: mov     ecx, r10d
 * 0000000140C6BEAB: rol     rbx, cl
 * 0000000140C6BEAE: add     r9, 8
 * 0000000140C6BEB2: add     r8d, 0FFFFFFF8h
 * 0000000140C6BEB6: sub     rax, rdx
 * 0000000140C6BEB9: jnz     short loc_140C6BEA5
 * 0000000140C6BEBB: test    r8d, r8d
 * 0000000140C6BEBE: jz      short loc_140C6BEDE
 * 0000000140C6BEC0: mov     edi, 0FFFFFFFFh
 * 0000000140C6BEC5: movzx   eax, byte ptr [r9]
 * 0000000140C6BEC9: mov     ecx, r10d
 * 0000000140C6BECC: xor     rbx, rax
 * 0000000140C6BECF: add     r9, rdx
 * 0000000140C6BED2: rol     rbx, cl
 * 0000000140C6BED5: add     r8d, edi
 * 0000000140C6BED8: jnz     short loc_140C6BEC5
 * 0000000140C6BEDA: lea     edi, [r8+2]
 * 0000000140C6BEDE: mov     rax, rbx
 * 0000000140C6BEE1: jmp     short loc_140C6BEE5
 * 0000000140C6BEE3: xor     ebx, eax
 * 0000000140C6BEE5: shr     rax, 1Fh
 * 0000000140C6BEE9: test    rax, rax
 * 0000000140C6BEEC: jnz     short loc_140C6BEE3
 * 0000000140C6BEEE: btr     ebx, 1Fh
 * 0000000140C6BEF2: cmp     ebx, [r13+14h]
 * 0000000140C6BEF6: jz      loc_140C6C111
 * 0000000140C6BEFC: xor     r11d, r11d
 * 0000000140C6BEFF: cmp     [r13+0], r11d
 * 0000000140C6BF03: jnz     short loc_140C6BF0D
 * 0000000140C6BF05: cmp     [r13+18h], r11d
 * 0000000140C6BF09: cmovnz  r12d, edx
 * 0000000140C6BF0D: mov     ecx, [r13+10h]
 * 0000000140C6BF11: mov     rdx, [r13+8]
 * 0000000140C6BF15: test    rcx, rcx
 * 0000000140C6BF18: jz      loc_140C6BFCD
 * 0000000140C6BF1E: mov     eax, [rsi+9DCh]
 * 0000000140C6BF24: mov     r8d, 40h ; '@'
 * 0000000140C6BF2A: test    r8b, al
 * 0000000140C6BF2D: jz      loc_140C6BFCD
 * 0000000140C6BF33: mov     r15, cr8
 * 0000000140C6BF37: mov     r14, rdx
 * 0000000140C6BF3A: lea     rax, [rcx-1]
 * 0000000140C6BF3E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6BF45: add     rax, rdx
 * 0000000140C6BF48: or      rax, 0FFFh
 * 0000000140C6BF4E: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6BF53: lea     r13, [r14-1]
 * 0000000140C6BF57: mov     cr8, rdi
 * 0000000140C6BF5B: mov     rax, [rsi+468h]
 * 0000000140C6BF62: xor     edx, edx
 * 0000000140C6BF64: mov     rcx, r14
 * 0000000140C6BF67: call    KeGuardDispatchICall
 * 0000000140C6BF6C: xor     r11d, r11d
 * 0000000140C6BF6F: cmp     eax, 0C000022Dh
 * 0000000140C6BF74: jnz     short loc_140C6BF91
 * 0000000140C6BF76: test    r12d, r12d
 * 0000000140C6BF79: jnz     short loc_140C6BFC0
 * 0000000140C6BF7B: lea     eax, [r11+1]
 * 0000000140C6BF7F: cmp     r15b, al
 * 0000000140C6BF82: ja      short loc_140C6BF95
 * 0000000140C6BF84: movzx   eax, r15b
 * 0000000140C6BF88: mov     cr8, rax
 * 0000000140C6BF8C: mov     al, [r14]
 * 0000000140C6BF8F: jmp     short loc_140C6BF57
 * 0000000140C6BF91: test    eax, eax
 * 0000000140C6BF93: js      short loc_140C6BFC0
 * 0000000140C6BF95: mov     r11d, 1000h
 * 0000000140C6BF9B: add     r14, r11
 * 0000000140C6BF9E: add     r13, r11
 * 0000000140C6BFA1: cmp     r13, [rsp+8B0h+var_858]
 * 0000000140C6BFA6: jnz     short loc_140C6BF5B
 * 0000000140C6BFA8: movzx   eax, r15b
 * 0000000140C6BFAC: mov     cr8, rax
 * 0000000140C6BFB0: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6BFB5: mov     r15d, 1
 * 0000000140C6BFBB: jmp     loc_140C6C11D
 * 0000000140C6BFC0: movzx   eax, r15b
 * 0000000140C6BFC4: mov     cr8, rax
 * 0000000140C6BFC8: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6BFCD: mov     eax, [r13+14h]
 * 0000000140C6BFD1: cmp     [rsi+918h], r11d
 * 0000000140C6BFD8: jnz     short loc_140C6BFEA
 * 0000000140C6BFDA: mov     ecx, ebx
 * 0000000140C6BFDC: xor     rcx, rax
 * 0000000140C6BFDF: mov     rax, [rsi+588h]
 * 0000000140C6BFE6: mov     [rax+18h], rcx
 * 0000000140C6BFEA: mov     r15d, 1
 * 0000000140C6BFF0: mov     rcx, [r13+8]
 * 0000000140C6BFF4: cmp     [rsi+918h], r11d
 * 0000000140C6BFFB: jnz     loc_140C6C117
 * 0000000140C6C001: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6C00B: add     rax, rsi
 * 0000000140C6C00E: mov     [rsi+920h], rax
 * 0000000140C6C015: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6C01F: add     rax, r13
 * 0000000140C6C022: mov     [rsi+928h], rax
 * 0000000140C6C029: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6C02D: mov     [rsi+930h], rax
 * 0000000140C6C034: mov     [rsi+938h], rcx
 * 0000000140C6C03B: mov     [rsi+918h], r15d
 * 0000000140C6C042: mov     ecx, [rsi+9D8h]
 * 0000000140C6C048: bt      ecx, 1Dh
 * 0000000140C6C04C: jb      loc_140C6C117
 * 0000000140C6C052: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6C05C: jz      loc_140C6C117
 * 0000000140C6C062: test    r15b, cl
 * 0000000140C6C065: jz      loc_140C6C117
 * 0000000140C6C06B: mov     ecx, [rsi+0A74h]
 * 0000000140C6C071: mov     eax, [rsi+804h]
 * 0000000140C6C077: mov     r10, [rsi+838h]
 * 0000000140C6C07E: sub     eax, ecx
 * 0000000140C6C080: mov     r8, [rsi+0A78h]
 * 0000000140C6C087: lea     rdx, [rcx+rsi]
 * 0000000140C6C08B: mov     ecx, eax
 * 0000000140C6C08D: shr     rcx, 3
 * 0000000140C6C091: lea     r9, [rdx+rcx*8]
 * 0000000140C6C095: jmp     short loc_140C6C0B8
 * 0000000140C6C097: xor     [rdx], r8
 * 0000000140C6C09A: mov     rax, [rdx]
 * 0000000140C6C09D: movzx   ecx, r8b
 * 0000000140C6C0A1: xor     rax, r10
 * 0000000140C6C0A4: and     ecx, 3Fh
 * 0000000140C6C0A7: ror     r8, cl
 * 0000000140C6C0AA: add     r8, rax
 * 0000000140C6C0AD: xor     r8, 0F05h
 * 0000000140C6C0B4: add     rdx, 8
 * 0000000140C6C0B8: cmp     rdx, r9
 * 0000000140C6C0BB: jnz     short loc_140C6C097
 * 0000000140C6C0BD: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6C0C5: cmp     r8, [rsi+0A80h]
 * 0000000140C6C0CC: jz      short loc_140C6C117
 * 0000000140C6C0CE: mov     ecx, [rsi+804h]
 * 0000000140C6C0D4: mov     rax, [rsi+588h]
 * 0000000140C6C0DB: mov     [rax], rsi
 * 0000000140C6C0DE: mov     [rax+10h], ecx
 * 0000000140C6C0E1: mov     rcx, [rsi+0A80h]
 * 0000000140C6C0E8: cmp     [rsi+918h], r11d
 * 0000000140C6C0EF: jnz     short loc_140C6C0FF
 * 0000000140C6C0F1: mov     rax, [rsi+588h]
 * 0000000140C6C0F8: xor     rcx, r8
 * 0000000140C6C0FB: mov     [rax+18h], rcx
 * 0000000140C6C0FF: xor     edx, edx
 * 0000000140C6C101: mov     r9d, 100h
 * 0000000140C6C107: mov     rcx, rsi
 * 0000000140C6C10A: call    sub_140C7F03C
 * 0000000140C6C10F: jmp     short loc_140C6C117
 * 0000000140C6C111: mov     r15d, 1
 * 0000000140C6C117: mov     r11d, 1000h
 * 0000000140C6C11D: mov     eax, [r13+10h]
 * 0000000140C6C121: xor     ecx, ecx
 * 0000000140C6C123: mov     r12, [r13+8]
 * 0000000140C6C127: shr     eax, 4
 * 0000000140C6C12A: mov     [rbp+7B0h+arg_8], r12
 * 0000000140C6C131: test    eax, eax
 * 0000000140C6C133: jz      loc_140C6C39B
 * 0000000140C6C139: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6C13E: mov     r13d, eax
 * 0000000140C6C141: mov     [rsp+8B0h+var_858], r13
 * 0000000140C6C146: mov     rax, [r12]
 * 0000000140C6C14A: lea     rdx, [rbp+7B0h+var_678]
 * 0000000140C6C151: mov     rbx, rdi
 * 0000000140C6C154: mov     r15, [rax]
 * 0000000140C6C157: mov     [rbp+7B0h+var_678], rcx
 * 0000000140C6C15E: mov     rcx, r15
 * 0000000140C6C161: mov     rax, [rsi+318h]
 * 0000000140C6C168: call    KeGuardDispatchICall
 * 0000000140C6C16D: xor     ecx, ecx
 * 0000000140C6C16F: mov     r14, rax
 * 0000000140C6C172: test    rax, rax
 * 0000000140C6C175: jz      loc_140C6C372
 * 0000000140C6C17B: lea     r12d, [rcx+6]
 * 0000000140C6C17F: xor     r13d, r13d
 * 0000000140C6C182: mov     rdi, 0B3B74BDEE4453415h
 * 0000000140C6C18C: mov     rax, [rsi+218h]
 * 0000000140C6C193: lea     rdx, [rbp+7B0h+var_380]
 * 0000000140C6C19A: mov     rcx, r14
 * 0000000140C6C19D: call    KeGuardDispatchICall
 * 0000000140C6C1A2: test    rax, rax
 * 0000000140C6C1A5: jnz     loc_140C6C33D
 * 0000000140C6C1AB: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6C1B5: lea     r9d, [rax+1]
 * 0000000140C6C1B9: jz      short loc_140C6C201
 * 0000000140C6C1BB: mov     rcx, [rsi+0AC8h]
 * 0000000140C6C1C2: lea     edx, [rax+30h]
 * 0000000140C6C1C5: mov     r8, r12
 * 0000000140C6C1C8: mov     rax, [rbx]
 * 0000000140C6C1CB: add     edx, 0FFFFFFF8h
 * 0000000140C6C1CE: mov     [rcx], rax
 * 0000000140C6C1D1: add     rbx, 8
 * 0000000140C6C1D5: add     rcx, 8
 * 0000000140C6C1D9: sub     r8, r9
 * 0000000140C6C1DC: jnz     short loc_140C6C1C8
 * 0000000140C6C1DE: test    edx, edx
 * 0000000140C6C1E0: jz      short loc_140C6C1FA
 * 0000000140C6C1E2: mov     esi, 0FFFFFFFFh
 * 0000000140C6C1E7: mov     al, [rbx]
 * 0000000140C6C1E9: add     rbx, r9
 * 0000000140C6C1EC: mov     [rcx], al
 * 0000000140C6C1EE: add     rcx, r9
 * 0000000140C6C1F1: add     edx, esi
 * 0000000140C6C1F3: jnz     short loc_140C6C1E7
 * 0000000140C6C1F5: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6C1FA: mov     rbx, [rsi+0AC8h]
 * 0000000140C6C201: mov     [rbx+18h], r14
 * 0000000140C6C205: mov     [rbx+20h], r15
 * 0000000140C6C209: mov     rax, [rsi+588h]
 * 0000000140C6C210: mov     [rax], rbx
 * 0000000140C6C213: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6C21A: mov     rax, [rsi+588h]
 * 0000000140C6C221: mov     [rax+8], r14
 * 0000000140C6C225: mov     dword ptr [rax+14h], 1000h
 * 0000000140C6C22C: cmp     [rsi+918h], r13d
 * 0000000140C6C233: jnz     loc_140C6C33D
 * 0000000140C6C239: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6C243: add     rax, rsi
 * 0000000140C6C246: mov     [rsi+920h], rax
 * 0000000140C6C24D: lea     rax, [rbx+rdi]
 * 0000000140C6C251: mov     [rsi+928h], rax
 * 0000000140C6C258: movsxd  rax, dword ptr [rbx]
 * 0000000140C6C25B: mov     [rsi+930h], rax
 * 0000000140C6C262: mov     [rsi+938h], r12
 * 0000000140C6C269: mov     [rsi+918h], r9d
 * 0000000140C6C270: mov     ecx, [rsi+9D8h]
 * 0000000140C6C276: bt      ecx, 1Dh
 * 0000000140C6C27A: jb      loc_140C6C33D
 * 0000000140C6C280: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6C28A: jz      loc_140C6C33D
 * 0000000140C6C290: test    r9b, cl
 * 0000000140C6C293: jz      loc_140C6C33D
 * 0000000140C6C299: mov     ecx, [rsi+0A74h]
 * 0000000140C6C29F: mov     eax, [rsi+804h]
 * 0000000140C6C2A5: mov     r10, [rsi+838h]
 * 0000000140C6C2AC: sub     eax, ecx
 * 0000000140C6C2AE: mov     r8, [rsi+0A78h]
 * 0000000140C6C2B5: lea     rdx, [rcx+rsi]
 * 0000000140C6C2B9: mov     ecx, eax
 * 0000000140C6C2BB: shr     rcx, 3
 * 0000000140C6C2BF: lea     r9, [rdx+rcx*8]
 * 0000000140C6C2C3: jmp     short loc_140C6C2E6
 * 0000000140C6C2C5: xor     [rdx], r8
 * 0000000140C6C2C8: mov     rax, [rdx]
 * 0000000140C6C2CB: movzx   ecx, r8b
 * 0000000140C6C2CF: xor     rax, r10
 * 0000000140C6C2D2: and     ecx, 3Fh
 * 0000000140C6C2D5: ror     r8, cl
 * 0000000140C6C2D8: add     r8, rax
 * 0000000140C6C2DB: xor     r8, 0F05h
 * 0000000140C6C2E2: add     rdx, 8
 * 0000000140C6C2E6: cmp     rdx, r9
 * 0000000140C6C2E9: jnz     short loc_140C6C2C5
 * 0000000140C6C2EB: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6C2F3: cmp     r8, [rsi+0A80h]
 * 0000000140C6C2FA: jz      short loc_140C6C33D
 * 0000000140C6C2FC: mov     ecx, [rsi+804h]
 * 0000000140C6C302: mov     rax, [rsi+588h]
 * 0000000140C6C309: mov     [rax], rsi
 * 0000000140C6C30C: mov     [rax+10h], ecx
 * 0000000140C6C30F: mov     rcx, [rsi+0A80h]
 * 0000000140C6C316: cmp     [rsi+918h], r13d
 * 0000000140C6C31D: jnz     short loc_140C6C32D
 * 0000000140C6C31F: mov     rax, [rsi+588h]
 * 0000000140C6C326: xor     rcx, r8
 * 0000000140C6C329: mov     [rax+18h], rcx
 * 0000000140C6C32D: xor     edx, edx
 * 0000000140C6C32F: mov     r9d, 100h
 * 0000000140C6C335: mov     rcx, rsi
 * 0000000140C6C338: call    sub_140C7F03C
 * 0000000140C6C33D: mov     rax, [rsi+318h]
 * 0000000140C6C344: lea     rdx, [rbp+7B0h+var_678]
 * 0000000140C6C34B: mov     rcx, r15
 * 0000000140C6C34E: call    KeGuardDispatchICall
 * 0000000140C6C353: mov     r14, rax
 * 0000000140C6C356: test    rax, rax
 * 0000000140C6C359: jnz     loc_140C6C18C
 * 0000000140C6C35F: mov     r12, [rbp+7B0h+arg_8]
 * 0000000140C6C366: xor     ecx, ecx
 * 0000000140C6C368: mov     r13, [rsp+8B0h+var_858]
 * 0000000140C6C36D: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6C372: add     r12, 10h
 * 0000000140C6C376: mov     r15d, 1
 * 0000000140C6C37C: sub     r13, r15
 * 0000000140C6C37F: mov     [rbp+7B0h+arg_8], r12
 * 0000000140C6C386: mov     [rsp+8B0h+var_858], r13
 * 0000000140C6C38B: jnz     loc_140C6C146
 * 0000000140C6C391: lea     edi, [r15+1]
 * 0000000140C6C395: mov     r11d, 1000h
 * 0000000140C6C39B: xor     r12d, r12d
 * 0000000140C6C39E: jmp     loc_140C773A3
 * 0000000140C6C3A3: mov     r8d, [r13+10h]
 * 0000000140C6C3A7: test    r8d, r8d
 * 0000000140C6C3AA: jnz     loc_140C6CA8A
 * 0000000140C6C3B0: lea     rax, [r13+30h]
 * 0000000140C6C3B4: xor     r9d, r9d
 * 0000000140C6C3B7: mov     [rbp+7B0h+var_578], rax
 * 0000000140C6C3BE: lea     rcx, [rbp+7B0h+var_580]
 * 0000000140C6C3C5: movzx   eax, word ptr [r13+28h]
 * 0000000140C6C3CA: xor     r8d, r8d
 * 0000000140C6C3CD: mov     [rbp+7B0h+var_580], ax
 * 0000000140C6C3D4: xor     edx, edx
 * 0000000140C6C3D6: mov     [rbp+7B0h+var_57E], ax
 * 0000000140C6C3DD: lea     rax, [rbp+7B0h+var_760]
 * 0000000140C6C3E1: mov     [rsp+8B0h+var_878], rax
 * 0000000140C6C3E6: mov     rax, [rsi+508h]
 * 0000000140C6C3ED: mov     [rsp+8B0h+var_880], r12
 * 0000000140C6C3F2: mov     byte ptr [rsp+8B0h+var_888], r12b
 * 0000000140C6C3F7: mov     [rsp+8B0h+BugCheckParameter4], rax
 * 0000000140C6C3FC: mov     rax, [rsi+1F8h]
 * 0000000140C6C403: call    KeGuardDispatchICall
 * 0000000140C6C408: test    eax, eax
 * 0000000140C6C40A: js      loc_140C75354
 * 0000000140C6C410: mov     rax, [rbp+7B0h+var_760]
 * 0000000140C6C414: mov     ecx, [rax+10h]
 * 0000000140C6C417: mov     eax, 10h
 * 0000000140C6C41C: test    al, cl
 * 0000000140C6C41E: jnz     short loc_140C6C435
 * 0000000140C6C420: mov     rax, [rsi+1F0h]
 * 0000000140C6C427: mov     rcx, [rbp+7B0h+var_760]
 * 0000000140C6C42B: call    KeGuardDispatchICall
 * 0000000140C6C430: jmp     loc_140C75354
 * 0000000140C6C435: mov     rcx, [rsi+1F8h]
 * 0000000140C6C43C: lea     rdx, [rbp+7B0h+var_158]
 * 0000000140C6C443: mov     rax, [rsi+210h]
 * 0000000140C6C44A: call    KeGuardDispatchICall
 * 0000000140C6C44F: mov     rax, [rbp+7B0h+var_150]
 * 0000000140C6C456: test    rax, rax
 * 0000000140C6C459: jz      short loc_140C6C486
 * 0000000140C6C45B: mov     r12, rax
 * 0000000140C6C45E: mov     [rbp+7B0h+var_730], rax
 * 0000000140C6C465: mov     rax, [rsi+208h]
 * 0000000140C6C46C: mov     rcx, r12
 * 0000000140C6C46F: call    KeGuardDispatchICall
 * 0000000140C6C474: xor     r15d, r15d
 * 0000000140C6C477: test    rax, rax
 * 0000000140C6C47A: jz      short loc_140C6C490
 * 0000000140C6C47C: mov     r14d, [rax+50h]
 * 0000000140C6C480: mov     [rbp+7B0h+var_770], r14d
 * 0000000140C6C484: jmp     short loc_140C6C494
 * 0000000140C6C486: mov     r12, [rbp+7B0h+var_730]
 * 0000000140C6C48D: xor     r15d, r15d
 * 0000000140C6C490: mov     r14d, [rbp+7B0h+var_770]
 * 0000000140C6C494: mov     rcx, [r13+18h]
 * 0000000140C6C498: lea     rdx, [rbp+7B0h+var_188]
 * 0000000140C6C49F: mov     rax, [rsi+210h]
 * 0000000140C6C4A6: call    KeGuardDispatchICall
 * 0000000140C6C4AB: mov     rax, [rbp+7B0h+var_180]
 * 0000000140C6C4B2: test    rax, rax
 * 0000000140C6C4B5: jz      short loc_140C6C4DF
 * 0000000140C6C4B7: mov     rbx, rax
 * 0000000140C6C4BA: mov     [rbp+7B0h+var_728], rax
 * 0000000140C6C4C1: mov     rax, [rsi+208h]
 * 0000000140C6C4C8: mov     rcx, rbx
 * 0000000140C6C4CB: call    KeGuardDispatchICall
 * 0000000140C6C4D0: test    rax, rax
 * 0000000140C6C4D3: jz      short loc_140C6C4E6
 * 0000000140C6C4D5: mov     r9d, [rax+50h]
 * 0000000140C6C4D9: mov     [rbp+7B0h+var_798], r9d
 * 0000000140C6C4DD: jmp     short loc_140C6C4EA
 * 0000000140C6C4DF: mov     rbx, [rbp+7B0h+var_728]
 * 0000000140C6C4E6: mov     r9d, [rbp+7B0h+var_798]
 * 0000000140C6C4EA: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140C6C4F2: jb      short loc_140C6C508
 * 0000000140C6C4F4: mov     rax, [rbp+7B0h+var_760]
 * 0000000140C6C4F8: add     rax, 70h ; 'p'
 * 0000000140C6C4FC: mov     [r13+8], rax
 * 0000000140C6C500: mov     dword ptr [r13+10h], 0E0h
 * 0000000140C6C508: mov     rcx, [rbp+7B0h+var_760]
 * 0000000140C6C50C: mov     dl, r15b
 * 0000000140C6C50F: mov     r10d, r14d
 * 0000000140C6C512: movzx   eax, dl
 * 0000000140C6C515: mov     r8, [rcx+rax*8+70h]
 * 0000000140C6C51A: test    r14d, r14d
 * 0000000140C6C51D: jz      short loc_140C6C531
 * 0000000140C6C51F: lea     rax, [r12-1]
 * 0000000140C6C524: add     rax, r10
 * 0000000140C6C527: cmp     r8, r12
 * 0000000140C6C52A: jb      short loc_140C6C531
 * 0000000140C6C52C: cmp     r8, rax
 * 0000000140C6C52F: jbe     short loc_140C6C556
 * 0000000140C6C531: mov     eax, r9d
 * 0000000140C6C534: test    r9d, r9d
 * 0000000140C6C537: jz      loc_140C6C942
 * 0000000140C6C53D: lea     r9, [rbx-1]
 * 0000000140C6C541: add     r9, rax
 * 0000000140C6C544: cmp     r8, rbx
 * 0000000140C6C547: jb      loc_140C6C942
 * 0000000140C6C54D: cmp     r8, r9
 * 0000000140C6C550: ja      loc_140C6C942
 * 0000000140C6C556: mov     r9d, [rbp+7B0h+var_798]
 * 0000000140C6C55A: add     dl, 1
 * 0000000140C6C55D: cmp     dl, 1Ch
 * 0000000140C6C560: jb      short loc_140C6C512
 * 0000000140C6C562: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140C6C56A: jnb     short loc_140C6C57D
 * 0000000140C6C56C: mov     rax, [rsi+1F0h]
 * 0000000140C6C573: call    KeGuardDispatchICall
 * 0000000140C6C578: jmp     loc_140C6B32F
 * 0000000140C6C57D: mov     r14, [r13+8]
 * 0000000140C6C581: mov     r9d, [r13+10h]
 * 0000000140C6C585: mov     r10, r14
 * 0000000140C6C588: add     [rsi+848h], r9d
 * 0000000140C6C58F: mov     rax, r14
 * 0000000140C6C592: mov     r11d, [rsi+834h]
 * 0000000140C6C599: mov     r15, [rsi+838h]
 * 0000000140C6C5A0: lea     rcx, [r14+r9]
 * 0000000140C6C5A4: cmp     r14, rcx
 * 0000000140C6C5A7: jnb     short loc_140C6C5B9
 * 0000000140C6C5A9: mov     edx, 40h ; '@'
 * 0000000140C6C5AE: prefetchnta byte ptr [rax]
 * 0000000140C6C5B1: add     rax, rdx
 * 0000000140C6C5B4: cmp     rax, rcx
 * 0000000140C6C5B7: jb      short loc_140C6C5AE
 * 0000000140C6C5B9: mov     ebx, r9d
 * 0000000140C6C5BC: mov     r8, r15
 * 0000000140C6C5BF: shr     ebx, 7
 * 0000000140C6C5C2: test    ebx, ebx
 * 0000000140C6C5C4: jz      short loc_140C6C639
 * 0000000140C6C5C6: mov     edi, 1
 * 0000000140C6C5CB: mov     esi, 0FFFFFFFFh
 * 0000000140C6C5D0: mov     r12, 7010008004002001h
 * 0000000140C6C5DA: mov     eax, 8
 * 0000000140C6C5DF: xor     r8, [r10]
 * 0000000140C6C5E2: mov     ecx, r11d
 * 0000000140C6C5E5: rol     r8, cl
 * 0000000140C6C5E8: xor     r8, [r10+8]
 * 0000000140C6C5EC: add     r10, 10h
 * 0000000140C6C5F0: rol     r8, cl
 * 0000000140C6C5F3: sub     rax, rdi
 * 0000000140C6C5F6: jnz     short loc_140C6C5DF
 * 0000000140C6C5F8: mov     rcx, r10
 * 0000000140C6C5FB: sub     rcx, r14
 * 0000000140C6C5FE: xor     rcx, r15
 * 0000000140C6C601: mov     rax, rcx
 * 0000000140C6C604: rol     rax, 11h
 * 0000000140C6C608: xor     rcx, rax
 * 0000000140C6C60B: mov     rax, r12
 * 0000000140C6C60E: mul     rcx
 * 0000000140C6C611: mov     [rbp+7B0h+var_378], rdx
 * 0000000140C6C618: xor     rdx, rax
 * 0000000140C6C61B: xor     r11d, edx
 * 0000000140C6C61E: and     r11d, 3Fh
 * 0000000140C6C622: cmovz   r11d, edi
 * 0000000140C6C626: add     ebx, esi
 * 0000000140C6C628: jnz     short loc_140C6C5DA
 * 0000000140C6C62A: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6C62F: lea     edi, [rbx+2]
 * 0000000140C6C632: mov     r12, [rbp+7B0h+var_730]
 * 0000000140C6C639: and     r9d, 7Fh
 * 0000000140C6C63D: mov     ebx, 1
 * 0000000140C6C642: cmp     r9d, 8
 * 0000000140C6C646: jb      short loc_140C6C665
 * 0000000140C6C648: mov     eax, r9d
 * 0000000140C6C64B: shr     rax, 3
 * 0000000140C6C64F: xor     r8, [r10]
 * 0000000140C6C652: mov     ecx, r11d
 * 0000000140C6C655: rol     r8, cl
 * 0000000140C6C658: add     r10, 8
 * 0000000140C6C65C: add     r9d, 0FFFFFFF8h
 * 0000000140C6C660: sub     rax, rbx
 * 0000000140C6C663: jnz     short loc_140C6C64F
 * 0000000140C6C665: test    r9d, r9d
 * 0000000140C6C668: jz      short loc_140C6C688
 * 0000000140C6C66A: mov     edi, 0FFFFFFFFh
 * 0000000140C6C66F: movzx   eax, byte ptr [r10]
 * 0000000140C6C673: mov     ecx, r11d
 * 0000000140C6C676: xor     r8, rax
 * 0000000140C6C679: add     r10, rbx
 * 0000000140C6C67C: rol     r8, cl
 * 0000000140C6C67F: add     r9d, edi
 * 0000000140C6C682: jnz     short loc_140C6C66F
 * 0000000140C6C684: lea     edi, [r9+2]
 * 0000000140C6C688: mov     rax, r8
 * 0000000140C6C68B: shr     rax, 1Fh
 * 0000000140C6C68F: xor     r9d, r9d
 * 0000000140C6C692: jmp     short loc_140C6C69B
 * 0000000140C6C694: xor     r8d, eax
 * 0000000140C6C697: shr     rax, 1Fh
 * 0000000140C6C69B: test    rax, rax
 * 0000000140C6C69E: jnz     short loc_140C6C694
 * 0000000140C6C6A0: btr     r8d, 1Fh
 * 0000000140C6C6A5: mov     r10d, r9d
 * 0000000140C6C6A8: mov     [r13+14h], r8d
 * 0000000140C6C6AC: mov     rax, [rbp+7B0h+var_760]
 * 0000000140C6C6B0: mov     r14, [rax+50h]
 * 0000000140C6C6B4: test    r14, r14
 * 0000000140C6C6B7: jz      short loc_140C6C731
 * 0000000140C6C6B9: mov     r10d, [r14]
 * 0000000140C6C6BC: mov     dl, r9b
 * 0000000140C6C6BF: lea     r8d, [r10-8]
 * 0000000140C6C6C3: shr     r8d, 3
 * 0000000140C6C6C7: test    r8d, r8d
 * 0000000140C6C6CA: jz      short loc_140C6C731
 * 0000000140C6C6CC: mov     r11d, [rbp+7B0h+var_770]
 * 0000000140C6C6D0: mov     rbx, [rbp+7B0h+var_728]
 * 0000000140C6C6D7: mov     r15d, [rbp+7B0h+var_798]
 * 0000000140C6C6DB: movzx   eax, dl
 * 0000000140C6C6DE: mov     rcx, [r14+rax*8+8]
 * 0000000140C6C6E3: test    rcx, rcx
 * 0000000140C6C6E6: jz      short loc_140C6C726
 * 0000000140C6C6E8: test    r11, r11
 * 0000000140C6C6EB: jz      short loc_140C6C6FE
 * 0000000140C6C6ED: lea     rax, [r11-1]
 * 0000000140C6C6F1: add     rax, r12
 * 0000000140C6C6F4: cmp     rcx, r12
 * 0000000140C6C6F7: jb      short loc_140C6C6FE
 * 0000000140C6C6F9: cmp     rcx, rax
 * 0000000140C6C6FC: jbe     short loc_140C6C726
 * 0000000140C6C6FE: mov     rax, r15
 * 0000000140C6C701: test    r15d, r15d
 * 0000000140C6C704: jz      loc_140C6C7EC
 * 0000000140C6C70A: lea     r9, [rbx-1]
 * 0000000140C6C70E: add     r9, rax
 * 0000000140C6C711: cmp     rcx, rbx
 * 0000000140C6C714: jb      loc_140C6C7EC
 * 0000000140C6C71A: cmp     rcx, r9
 * 0000000140C6C71D: ja      loc_140C6C7EC
 * 0000000140C6C723: xor     r9d, r9d
 * 0000000140C6C726: add     dl, 1
 * 0000000140C6C729: movzx   eax, dl
 * 0000000140C6C72C: cmp     eax, r8d
 * 0000000140C6C72F: jb      short loc_140C6C6DB
 * 0000000140C6C731: add     [rsi+848h], r10d
 * 0000000140C6C738: mov     r9, r14
 * 0000000140C6C73B: mov     r11d, [rsi+834h]
 * 0000000140C6C742: mov     rax, r14
 * 0000000140C6C745: mov     r15, [rsi+838h]
 * 0000000140C6C74C: mov     ecx, r10d
 * 0000000140C6C74F: add     rcx, r14
 * 0000000140C6C752: cmp     r14, rcx
 * 0000000140C6C755: jnb     short loc_140C6C767
 * 0000000140C6C757: mov     edx, 40h ; '@'
 * 0000000140C6C75C: prefetchnta byte ptr [rax]
 * 0000000140C6C75F: add     rax, rdx
 * 0000000140C6C762: cmp     rax, rcx
 * 0000000140C6C765: jb      short loc_140C6C75C
 * 0000000140C6C767: mov     ebx, r10d
 * 0000000140C6C76A: xor     r12d, r12d
 * 0000000140C6C76D: shr     ebx, 7
 * 0000000140C6C770: mov     r8, r15
 * 0000000140C6C773: test    ebx, ebx
 * 0000000140C6C775: jz      loc_140C6C8D7
 * 0000000140C6C77B: lea     edi, [r12+1]
 * 0000000140C6C780: mov     rsi, 7010008004002001h
 * 0000000140C6C78A: mov     eax, 8
 * 0000000140C6C78F: xor     r8, [r9]
 * 0000000140C6C792: mov     ecx, r11d
 * 0000000140C6C795: rol     r8, cl
 * 0000000140C6C798: xor     r8, [r9+8]
 * 0000000140C6C79C: add     r9, 10h
 * 0000000140C6C7A0: rol     r8, cl
 * 0000000140C6C7A3: sub     rax, rdi
 * 0000000140C6C7A6: jnz     short loc_140C6C78F
 * 0000000140C6C7A8: mov     rcx, r9
 * 0000000140C6C7AB: sub     rcx, r14
 * 0000000140C6C7AE: xor     rcx, r15
 * 0000000140C6C7B1: mov     rax, rcx
 * 0000000140C6C7B4: rol     rax, 11h
 * 0000000140C6C7B8: xor     rcx, rax
 * 0000000140C6C7BB: mov     rax, rsi
 * 0000000140C6C7BE: mul     rcx
 * 0000000140C6C7C1: mov     [rbp+7B0h+var_368], rdx
 * 0000000140C6C7C8: xor     rdx, rax
 * 0000000140C6C7CB: xor     r11d, edx
 * 0000000140C6C7CE: mov     edx, 0FFFFFFFFh
 * 0000000140C6C7D3: and     r11d, 3Fh
 * 0000000140C6C7D7: cmovz   r11d, edi
 * 0000000140C6C7DB: add     ebx, edx
 * 0000000140C6C7DD: jnz     short loc_140C6C78A
 * 0000000140C6C7DF: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6C7E4: lea     edi, [rbx+2]
 * 0000000140C6C7E7: jmp     loc_140C6C8DC
 * 0000000140C6C7EC: mov     [r13+20h], rcx
 * 0000000140C6C7F0: xor     r12d, r12d
 * 0000000140C6C7F3: mov     rax, [rsi+588h]
 * 0000000140C6C7FA: lea     r15d, [r12+1]
 * 0000000140C6C7FF: mov     [rax], r13
 * 0000000140C6C802: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6C809: cmp     [rsi+918h], r12d
 * 0000000140C6C810: jnz     loc_140C75354
 * 0000000140C6C816: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6C820: add     rax, rsi
 * 0000000140C6C823: mov     [rsi+920h], rax
 * 0000000140C6C82A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6C834: add     rax, r13
 * 0000000140C6C837: mov     [rsi+928h], rax
 * 0000000140C6C83E: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6C842: mov     [rsi+930h], rax
 * 0000000140C6C849: mov     [rsi+938h], r14
 * 0000000140C6C850: mov     [rsi+918h], r15d
 * 0000000140C6C857: mov     ecx, [rsi+9D8h]
 * 0000000140C6C85D: bt      ecx, 1Dh
 * 0000000140C6C861: jb      loc_140C75354
 * 0000000140C6C867: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6C871: jz      loc_140C75354
 * 0000000140C6C877: test    r15b, cl
 * 0000000140C6C87A: jz      loc_140C75354
 * 0000000140C6C880: mov     ecx, [rsi+0A74h]
 * 0000000140C6C886: mov     eax, [rsi+804h]
 * 0000000140C6C88C: mov     r10, [rsi+838h]
 * 0000000140C6C893: sub     eax, ecx
 * 0000000140C6C895: mov     r8, [rsi+0A78h]
 * 0000000140C6C89C: lea     rdx, [rcx+rsi]
 * 0000000140C6C8A0: mov     ecx, eax
 * 0000000140C6C8A2: shr     rcx, 3
 * 0000000140C6C8A6: lea     r9, [rdx+rcx*8]
 * 0000000140C6C8AA: jmp     short loc_140C6C8CD
 * 0000000140C6C8AC: xor     [rdx], r8
 * 0000000140C6C8AF: mov     rax, [rdx]
 * 0000000140C6C8B2: movzx   ecx, r8b
 * 0000000140C6C8B6: xor     rax, r10
 * 0000000140C6C8B9: and     ecx, 3Fh
 * 0000000140C6C8BC: ror     r8, cl
 * 0000000140C6C8BF: add     r8, rax
 * 0000000140C6C8C2: xor     r8, 0F05h
 * 0000000140C6C8C9: add     rdx, 8
 * 0000000140C6C8CD: cmp     rdx, r9
 * 0000000140C6C8D0: jnz     short loc_140C6C8AC
 * 0000000140C6C8D2: jmp     loc_140C6BA4E
 * 0000000140C6C8D7: mov     edx, 0FFFFFFFFh
 * 0000000140C6C8DC: and     r10d, 7Fh
 * 0000000140C6C8E0: mov     r15d, 1
 * 0000000140C6C8E6: cmp     r10d, 8
 * 0000000140C6C8EA: jb      short loc_140C6C909
 * 0000000140C6C8EC: mov     eax, r10d
 * 0000000140C6C8EF: shr     rax, 3
 * 0000000140C6C8F3: xor     r8, [r9]
 * 0000000140C6C8F6: mov     ecx, r11d
 * 0000000140C6C8F9: rol     r8, cl
 * 0000000140C6C8FC: add     r9, 8
 * 0000000140C6C900: add     r10d, 0FFFFFFF8h
 * 0000000140C6C904: sub     rax, r15
 * 0000000140C6C907: jnz     short loc_140C6C8F3
 * 0000000140C6C909: test    r10d, r10d
 * 0000000140C6C90C: jz      short loc_140C6C923
 * 0000000140C6C90E: movzx   eax, byte ptr [r9]
 * 0000000140C6C912: mov     ecx, r11d
 * 0000000140C6C915: xor     r8, rax
 * 0000000140C6C918: add     r9, r15
 * 0000000140C6C91B: rol     r8, cl
 * 0000000140C6C91E: add     r10d, edx
 * 0000000140C6C921: jnz     short loc_140C6C90E
 * 0000000140C6C923: mov     rax, r8
 * 0000000140C6C926: jmp     short loc_140C6C92B
 * 0000000140C6C928: xor     r8d, eax
 * 0000000140C6C92B: shr     rax, 1Fh
 * 0000000140C6C92F: test    rax, rax
 * 0000000140C6C932: jnz     short loc_140C6C928
 * 0000000140C6C934: btr     r8d, 1Fh
 * 0000000140C6C939: mov     [r13+2Ch], r8d
 * 0000000140C6C93D: jmp     loc_140C75354
 * 0000000140C6C942: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140C6C94A: mov     r15d, 1
 * 0000000140C6C950: jnb     short loc_140C6C9A0
 * 0000000140C6C952: mov     rcx, [rsi+0AC8h]
 * 0000000140C6C959: lea     edx, [r15+2Fh]
 * 0000000140C6C95D: lea     r9d, [r15+5]
 * 0000000140C6C961: mov     rax, [r13+0]
 * 0000000140C6C965: add     edx, 0FFFFFFF8h
 * 0000000140C6C968: mov     [rcx], rax
 * 0000000140C6C96B: add     r13, 8
 * 0000000140C6C96F: add     rcx, 8
 * 0000000140C6C973: sub     r9, r15
 * 0000000140C6C976: jnz     short loc_140C6C961
 * 0000000140C6C978: xor     r12d, r12d
 * 0000000140C6C97B: test    edx, edx
 * 0000000140C6C97D: jz      short loc_140C6C997
 * 0000000140C6C97F: mov     edi, 0FFFFFFFFh
 * 0000000140C6C984: mov     al, [r13+0]
 * 0000000140C6C988: add     r13, r15
 * 0000000140C6C98B: mov     [rcx], al
 * 0000000140C6C98D: add     rcx, r15
 * 0000000140C6C990: add     edx, edi
 * 0000000140C6C992: jnz     short loc_140C6C984
 * 0000000140C6C994: lea     edi, [rdx+2]
 * 0000000140C6C997: mov     r13, [rsi+0AC8h]
 * 0000000140C6C99E: jmp     short loc_140C6C9A3
 * 0000000140C6C9A0: xor     r12d, r12d
 * 0000000140C6C9A3: mov     [r13+20h], r8
 * 0000000140C6C9A7: mov     rax, [rsi+588h]
 * 0000000140C6C9AE: mov     [rax], r13
 * 0000000140C6C9B1: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6C9B8: mov     rcx, [r13+8]
 * 0000000140C6C9BC: cmp     [rsi+918h], r12d
 * 0000000140C6C9C3: jnz     loc_140C75354
 * 0000000140C6C9C9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6C9D3: add     rax, rsi
 * 0000000140C6C9D6: mov     [rsi+920h], rax
 * 0000000140C6C9DD: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6C9E7: add     rax, r13
 * 0000000140C6C9EA: mov     [rsi+928h], rax
 * 0000000140C6C9F1: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6C9F5: mov     [rsi+930h], rax
 * 0000000140C6C9FC: mov     [rsi+938h], rcx
 * 0000000140C6CA03: mov     [rsi+918h], r15d
 * 0000000140C6CA0A: mov     ecx, [rsi+9D8h]
 * 0000000140C6CA10: bt      ecx, 1Dh
 * 0000000140C6CA14: jb      loc_140C75354
 * 0000000140C6CA1A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6CA24: jz      loc_140C75354
 * 0000000140C6CA2A: test    r15b, cl
 * 0000000140C6CA2D: jz      loc_140C75354
 * 0000000140C6CA33: mov     ecx, [rsi+0A74h]
 * 0000000140C6CA39: mov     eax, [rsi+804h]
 * 0000000140C6CA3F: mov     r10, [rsi+838h]
 * 0000000140C6CA46: sub     eax, ecx
 * 0000000140C6CA48: mov     r8, [rsi+0A78h]
 * 0000000140C6CA4F: lea     rdx, [rcx+rsi]
 * 0000000140C6CA53: mov     ecx, eax
 * 0000000140C6CA55: shr     rcx, 3
 * 0000000140C6CA59: lea     r9, [rdx+rcx*8]
 * 0000000140C6CA5D: jmp     short loc_140C6CA80
 * 0000000140C6CA5F: xor     [rdx], r8
 * 0000000140C6CA62: mov     rax, [rdx]
 * 0000000140C6CA65: movzx   ecx, r8b
 * 0000000140C6CA69: xor     rax, r10
 * 0000000140C6CA6C: and     ecx, 3Fh
 * 0000000140C6CA6F: ror     r8, cl
 * 0000000140C6CA72: add     r8, rax
 * 0000000140C6CA75: xor     r8, 0F05h
 * 0000000140C6CA7C: add     rdx, 8
 * 0000000140C6CA80: cmp     rdx, r9
 * 0000000140C6CA83: jnz     short loc_140C6CA5F
 * 0000000140C6CA85: jmp     loc_140C6BA4E
 * 0000000140C6CA8A: mov     r14, [r13+8]
 * 0000000140C6CA8E: add     [rsi+848h], r8d
 * 0000000140C6CA95: mov     r9, r14
 * 0000000140C6CA98: mov     r10d, [rsi+834h]
 * 0000000140C6CA9F: mov     rax, r14
 * 0000000140C6CAA2: mov     r15, [rsi+838h]
 * 0000000140C6CAA9: lea     rcx, [r14+r8]
 * 0000000140C6CAAD: cmp     r14, rcx
 * 0000000140C6CAB0: jnb     short loc_140C6CAC2
 * 0000000140C6CAB2: mov     edx, 40h ; '@'
 * 0000000140C6CAB7: prefetchnta byte ptr [rax]
 * 0000000140C6CABA: add     rax, rdx
 * 0000000140C6CABD: cmp     rax, rcx
 * 0000000140C6CAC0: jb      short loc_140C6CAB7
 * 0000000140C6CAC2: mov     r11d, r8d
 * 0000000140C6CAC5: mov     rbx, r15
 * 0000000140C6CAC8: shr     r11d, 7
 * 0000000140C6CACC: mov     edx, 1
 * 0000000140C6CAD1: test    r11d, r11d
 * 0000000140C6CAD4: jz      short loc_140C6CB43
 * 0000000140C6CAD6: mov     edi, 0FFFFFFFFh
 * 0000000140C6CADB: mov     rsi, 7010008004002001h
 * 0000000140C6CAE5: mov     eax, 8
 * 0000000140C6CAEA: xor     rbx, [r9]
 * 0000000140C6CAED: mov     ecx, r10d
 * 0000000140C6CAF0: rol     rbx, cl
 * 0000000140C6CAF3: xor     rbx, [r9+8]
 * 0000000140C6CAF7: add     r9, 10h
 * 0000000140C6CAFB: rol     rbx, cl
 * 0000000140C6CAFE: sub     rax, rdx
 * 0000000140C6CB01: jnz     short loc_140C6CAEA
 * 0000000140C6CB03: mov     rcx, r9
 * 0000000140C6CB06: sub     rcx, r14
 * 0000000140C6CB09: xor     rcx, r15
 * 0000000140C6CB0C: mov     rax, rcx
 * 0000000140C6CB0F: rol     rax, 11h
 * 0000000140C6CB13: xor     rcx, rax
 * 0000000140C6CB16: mov     rax, rsi
 * 0000000140C6CB19: mul     rcx
 * 0000000140C6CB1C: mov     [rbp+7B0h+var_4B0], rdx
 * 0000000140C6CB23: xor     rdx, rax
 * 0000000140C6CB26: xor     r10d, edx
 * 0000000140C6CB29: mov     edx, 1
 * 0000000140C6CB2E: and     r10d, 3Fh
 * 0000000140C6CB32: cmovz   r10d, edx
 * 0000000140C6CB36: add     r11d, edi
 * 0000000140C6CB39: jnz     short loc_140C6CAE5
 * 0000000140C6CB3B: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6CB40: lea     edi, [rdx+1]
 * 0000000140C6CB43: and     r8d, 7Fh
 * 0000000140C6CB47: cmp     r8d, 8
 * 0000000140C6CB4B: jb      short loc_140C6CB6A
 * 0000000140C6CB4D: mov     eax, r8d
 * 0000000140C6CB50: shr     rax, 3
 * 0000000140C6CB54: xor     rbx, [r9]
 * 0000000140C6CB57: mov     ecx, r10d
 * 0000000140C6CB5A: rol     rbx, cl
 * 0000000140C6CB5D: add     r9, 8
 * 0000000140C6CB61: add     r8d, 0FFFFFFF8h
 * 0000000140C6CB65: sub     rax, rdx
 * 0000000140C6CB68: jnz     short loc_140C6CB54
 * 0000000140C6CB6A: test    r8d, r8d
 * 0000000140C6CB6D: jz      short loc_140C6CB8D
 * 0000000140C6CB6F: mov     edi, 0FFFFFFFFh
 * 0000000140C6CB74: movzx   eax, byte ptr [r9]
 * 0000000140C6CB78: mov     ecx, r10d
 * 0000000140C6CB7B: xor     rbx, rax
 * 0000000140C6CB7E: add     r9, rdx
 * 0000000140C6CB81: rol     rbx, cl
 * 0000000140C6CB84: add     r8d, edi
 * 0000000140C6CB87: jnz     short loc_140C6CB74
 * 0000000140C6CB89: lea     edi, [r8+2]
 * 0000000140C6CB8D: mov     rax, rbx
 * 0000000140C6CB90: jmp     short loc_140C6CB94
 * 0000000140C6CB92: xor     ebx, eax
 * 0000000140C6CB94: shr     rax, 1Fh
 * 0000000140C6CB98: test    rax, rax
 * 0000000140C6CB9B: jnz     short loc_140C6CB92
 * 0000000140C6CB9D: btr     ebx, 1Fh
 * 0000000140C6CBA1: cmp     ebx, [r13+14h]
 * 0000000140C6CBA5: jz      loc_140C6CC66
 * 0000000140C6CBAB: cmp     [r13+0], eax
 * 0000000140C6CBAF: jnz     short loc_140C6CBB9
 * 0000000140C6CBB1: cmp     [r13+18h], eax
 * 0000000140C6CBB5: cmovnz  r12d, edx
 * 0000000140C6CBB9: mov     ecx, [r13+10h]
 * 0000000140C6CBBD: mov     rdx, [r13+8]
 * 0000000140C6CBC1: test    rcx, rcx
 * 0000000140C6CBC4: jz      loc_140C6CD9E
 * 0000000140C6CBCA: mov     eax, [rsi+9DCh]
 * 0000000140C6CBD0: mov     r8d, 40h ; '@'
 * 0000000140C6CBD6: test    r8b, al
 * 0000000140C6CBD9: jz      loc_140C6CD9E
 * 0000000140C6CBDF: mov     r15, cr8
 * 0000000140C6CBE3: mov     r14, rdx
 * 0000000140C6CBE6: lea     rax, [rcx-1]
 * 0000000140C6CBEA: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C6CBF1: add     rax, rdx
 * 0000000140C6CBF4: or      rax, 0FFFh
 * 0000000140C6CBFA: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6CBFF: lea     r13, [r14-1]
 * 0000000140C6CC03: mov     cr8, rdi
 * 0000000140C6CC07: mov     rax, [rsi+468h]
 * 0000000140C6CC0E: xor     edx, edx
 * 0000000140C6CC10: mov     rcx, r14
 * 0000000140C6CC13: call    KeGuardDispatchICall
 * 0000000140C6CC18: cmp     eax, 0C000022Dh
 * 0000000140C6CC1D: jnz     short loc_140C6CC3F
 * 0000000140C6CC1F: test    r12d, r12d
 * 0000000140C6CC22: jnz     loc_140C6CD91
 * 0000000140C6CC28: lea     eax, [r12+1]
 * 0000000140C6CC2D: cmp     r15b, al
 * 0000000140C6CC30: ja      short loc_140C6CC47
 * 0000000140C6CC32: movzx   eax, r15b
 * 0000000140C6CC36: mov     cr8, rax
 * 0000000140C6CC3A: mov     al, [r14]
 * 0000000140C6CC3D: jmp     short loc_140C6CC03
 * 0000000140C6CC3F: test    eax, eax
 * 0000000140C6CC41: js      loc_140C6CD91
 * 0000000140C6CC47: mov     eax, 1000h
 * 0000000140C6CC4C: add     r14, rax
 * 0000000140C6CC4F: add     r13, rax
 * 0000000140C6CC52: cmp     r13, [rsp+8B0h+var_858]
 * 0000000140C6CC57: jnz     short loc_140C6CC07
 * 0000000140C6CC59: movzx   eax, r15b
 * 0000000140C6CC5D: mov     cr8, rax
 * 0000000140C6CC61: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6CC66: xor     r12d, r12d
 * 0000000140C6CC69: mov     edx, 1
 * 0000000140C6CC6E: mov     rax, [r13+8]
 * 0000000140C6CC72: mov     r9d, r12d
 * 0000000140C6CC75: add     rax, 0FFFFFFFFFFFFFF90h
 * 0000000140C6CC79: mov     [rbp+7B0h+var_760], rax
 * 0000000140C6CC7D: mov     r14, [rax+50h]
 * 0000000140C6CC81: test    r14, r14
 * 0000000140C6CC84: jz      short loc_140C6CC89
 * 0000000140C6CC86: mov     r9d, [r14]
 * 0000000140C6CC89: add     [rsi+848h], r9d
 * 0000000140C6CC90: mov     r10, r14
 * 0000000140C6CC93: mov     r11d, [rsi+834h]
 * 0000000140C6CC9A: mov     rax, r14
 * 0000000140C6CC9D: mov     r15, [rsi+838h]
 * 0000000140C6CCA4: mov     ecx, r9d
 * 0000000140C6CCA7: add     rcx, r14
 * 0000000140C6CCAA: cmp     r14, rcx
 * 0000000140C6CCAD: jnb     short loc_140C6CCC0
 * 0000000140C6CCAF: mov     r8d, 40h ; '@'
 * 0000000140C6CCB5: prefetchnta byte ptr [rax]
 * 0000000140C6CCB8: add     rax, r8
 * 0000000140C6CCBB: cmp     rax, rcx
 * 0000000140C6CCBE: jb      short loc_140C6CCB5
 * 0000000140C6CCC0: mov     ebx, r9d
 * 0000000140C6CCC3: mov     r8, r15
 * 0000000140C6CCC6: shr     ebx, 7
 * 0000000140C6CCC9: test    ebx, ebx
 * 0000000140C6CCCB: jz      short loc_140C6CD39
 * 0000000140C6CCCD: mov     edi, 0FFFFFFFFh
 * 0000000140C6CCD2: mov     rsi, 7010008004002001h
 * 0000000140C6CCDC: mov     eax, 8
 * 0000000140C6CCE1: xor     r8, [r10]
 * 0000000140C6CCE4: mov     ecx, r11d
 * 0000000140C6CCE7: rol     r8, cl
 * 0000000140C6CCEA: xor     r8, [r10+8]
 * 0000000140C6CCEE: add     r10, 10h
 * 0000000140C6CCF2: rol     r8, cl
 * 0000000140C6CCF5: sub     rax, rdx
 * 0000000140C6CCF8: jnz     short loc_140C6CCE1
 * 0000000140C6CCFA: mov     rcx, r10
 * 0000000140C6CCFD: sub     rcx, r14
 * 0000000140C6CD00: xor     rcx, r15
 * 0000000140C6CD03: mov     rax, rcx
 * 0000000140C6CD06: rol     rax, 11h
 * 0000000140C6CD0A: xor     rcx, rax
 * 0000000140C6CD0D: mov     rax, rsi
 * 0000000140C6CD10: mul     rcx
 * 0000000140C6CD13: mov     [rbp+7B0h+var_4A8], rdx
 * 0000000140C6CD1A: xor     rdx, rax
 * 0000000140C6CD1D: xor     r11d, edx
 * 0000000140C6CD20: mov     edx, 1
 * 0000000140C6CD25: and     r11d, 3Fh
 * 0000000140C6CD29: cmovz   r11d, edx
 * 0000000140C6CD2D: add     ebx, edi
 * 0000000140C6CD2F: jnz     short loc_140C6CCDC
 * 0000000140C6CD31: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6CD36: lea     edi, [rdx+1]
 * 0000000140C6CD39: and     r9d, 7Fh
 * 0000000140C6CD3D: mov     r15d, 1
 * 0000000140C6CD43: cmp     r9d, 8
 * 0000000140C6CD47: jb      short loc_140C6CD66
 * 0000000140C6CD49: mov     eax, r9d
 * 0000000140C6CD4C: shr     rax, 3
 * 0000000140C6CD50: xor     r8, [r10]
 * 0000000140C6CD53: mov     ecx, r11d
 * 0000000140C6CD56: rol     r8, cl
 * 0000000140C6CD59: add     r10, 8
 * 0000000140C6CD5D: add     r9d, 0FFFFFFF8h
 * 0000000140C6CD61: sub     rax, r15
 * 0000000140C6CD64: jnz     short loc_140C6CD50
 * 0000000140C6CD66: test    r9d, r9d
 * 0000000140C6CD69: jz      short loc_140C6CD89
 * 0000000140C6CD6B: mov     edi, 0FFFFFFFFh
 * 0000000140C6CD70: movzx   eax, byte ptr [r10]
 * 0000000140C6CD74: mov     ecx, r11d
 * 0000000140C6CD77: xor     r8, rax
 * 0000000140C6CD7A: add     r10, r15
 * 0000000140C6CD7D: rol     r8, cl
 * 0000000140C6CD80: add     r9d, edi
 * 0000000140C6CD83: jnz     short loc_140C6CD70
 * 0000000140C6CD85: lea     edi, [r9+2]
 * 0000000140C6CD89: mov     rax, r8
 * 0000000140C6CD8C: jmp     loc_140C6CEEE
 * 0000000140C6CD91: movzx   eax, r15b
 * 0000000140C6CD95: mov     cr8, rax
 * 0000000140C6CD99: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C6CD9E: mov     eax, [r13+14h]
 * 0000000140C6CDA2: xor     r12d, r12d
 * 0000000140C6CDA5: cmp     [rsi+918h], r12d
 * 0000000140C6CDAC: jnz     short loc_140C6CDC0
 * 0000000140C6CDAE: mov     ecx, eax
 * 0000000140C6CDB0: mov     eax, ebx
 * 0000000140C6CDB2: xor     rcx, rax
 * 0000000140C6CDB5: mov     rax, [rsi+588h]
 * 0000000140C6CDBC: mov     [rax+18h], rcx
 * 0000000140C6CDC0: mov     edx, 1
 * 0000000140C6CDC5: mov     rcx, [r13+8]
 * 0000000140C6CDC9: cmp     [rsi+918h], r12d
 * 0000000140C6CDD0: jnz     loc_140C6CC6E
 * 0000000140C6CDD6: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6CDE0: add     rax, rsi
 * 0000000140C6CDE3: mov     [rsi+920h], rax
 * 0000000140C6CDEA: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6CDF4: add     rax, r13
 * 0000000140C6CDF7: mov     [rsi+928h], rax
 * 0000000140C6CDFE: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6CE02: mov     [rsi+930h], rax
 * 0000000140C6CE09: mov     [rsi+938h], rcx
 * 0000000140C6CE10: mov     [rsi+918h], edx
 * 0000000140C6CE16: mov     ecx, [rsi+9D8h]
 * 0000000140C6CE1C: bt      ecx, 1Dh
 * 0000000140C6CE20: jb      loc_140C6CC6E
 * 0000000140C6CE26: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6CE30: jz      loc_140C6CC6E
 * 0000000140C6CE36: test    dl, cl
 * 0000000140C6CE38: jz      loc_140C6CC6E
 * 0000000140C6CE3E: mov     ecx, [rsi+0A74h]
 * 0000000140C6CE44: mov     eax, [rsi+804h]
 * 0000000140C6CE4A: mov     r10, [rsi+838h]
 * 0000000140C6CE51: sub     eax, ecx
 * 0000000140C6CE53: mov     r8, [rsi+0A78h]
 * 0000000140C6CE5A: lea     rdx, [rcx+rsi]
 * 0000000140C6CE5E: mov     ecx, eax
 * 0000000140C6CE60: shr     rcx, 3
 * 0000000140C6CE64: lea     r9, [rdx+rcx*8]
 * 0000000140C6CE68: jmp     short loc_140C6CE8B
 * 0000000140C6CE6A: xor     [rdx], r8
 * 0000000140C6CE6D: mov     rax, [rdx]
 * 0000000140C6CE70: movzx   ecx, r8b
 * 0000000140C6CE74: xor     rax, r10
 * 0000000140C6CE77: and     ecx, 3Fh
 * 0000000140C6CE7A: ror     r8, cl
 * 0000000140C6CE7D: add     r8, rax
 * 0000000140C6CE80: xor     r8, 0F05h
 * 0000000140C6CE87: add     rdx, 8
 * 0000000140C6CE8B: cmp     rdx, r9
 * 0000000140C6CE8E: jnz     short loc_140C6CE6A
 * 0000000140C6CE90: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6CE98: cmp     r8, [rsi+0A80h]
 * 0000000140C6CE9F: jz      loc_140C6CC69
 * 0000000140C6CEA5: mov     ecx, [rsi+804h]
 * 0000000140C6CEAB: mov     rax, [rsi+588h]
 * 0000000140C6CEB2: mov     [rax], rsi
 * 0000000140C6CEB5: mov     [rax+10h], ecx
 * 0000000140C6CEB8: mov     rcx, [rsi+0A80h]
 * 0000000140C6CEBF: cmp     [rsi+918h], r12d
 * 0000000140C6CEC6: jnz     short loc_140C6CED6
 * 0000000140C6CEC8: mov     rax, [rsi+588h]
 * 0000000140C6CECF: xor     rcx, r8
 * 0000000140C6CED2: mov     [rax+18h], rcx
 * 0000000140C6CED6: xor     edx, edx
 * 0000000140C6CED8: mov     r9d, 100h
 * 0000000140C6CEDE: mov     rcx, rsi
 * 0000000140C6CEE1: call    sub_140C7F03C
 * 0000000140C6CEE6: jmp     loc_140C6CC69
 * 0000000140C6CEEB: xor     r8d, eax
 * 0000000140C6CEEE: shr     rax, 1Fh
 * 0000000140C6CEF2: test    rax, rax
 * 0000000140C6CEF5: jnz     short loc_140C6CEEB
 * 0000000140C6CEF7: mov     eax, [r13+2Ch]
 * 0000000140C6CEFB: btr     r8d, 1Fh
 * 0000000140C6CF00: cmp     r8d, eax
 * 0000000140C6CF03: jz      loc_140C75354
 * 0000000140C6CF09: cmp     [rsi+918h], r12d
 * 0000000140C6CF10: jnz     loc_140C75354
 * 0000000140C6CF16: mov     ecx, eax
 * 0000000140C6CF18: mov     eax, r8d
 * 0000000140C6CF1B: xor     rcx, rax
 * 0000000140C6CF1E: mov     rax, [rsi+588h]
 * 0000000140C6CF25: mov     [rax+18h], rcx
 * 0000000140C6CF29: cmp     [rsi+918h], r12d
 * 0000000140C6CF30: jnz     loc_140C75354
 * 0000000140C6CF36: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6CF40: add     rax, rsi
 * 0000000140C6CF43: mov     [rsi+920h], rax
 * 0000000140C6CF4A: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6CF54: add     rax, r13
 * 0000000140C6CF57: mov     [rsi+928h], rax
 * 0000000140C6CF5E: movsxd  rax, dword ptr [r13+0]
 * 0000000140C6CF62: mov     [rsi+930h], rax
 * 0000000140C6CF69: mov     [rsi+938h], r14
 * 0000000140C6CF70: mov     [rsi+918h], r15d
 * 0000000140C6CF77: mov     ecx, [rsi+9D8h]
 * 0000000140C6CF7D: bt      ecx, 1Dh
 * 0000000140C6CF81: jb      loc_140C75354
 * 0000000140C6CF87: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6CF91: jz      loc_140C75354
 * 0000000140C6CF97: test    r15b, cl
 * 0000000140C6CF9A: jz      loc_140C75354
 * 0000000140C6CFA0: mov     ecx, [rsi+0A74h]
 * 0000000140C6CFA6: mov     eax, [rsi+804h]
 * 0000000140C6CFAC: mov     r10, [rsi+838h]
 * 0000000140C6CFB3: sub     eax, ecx
 * 0000000140C6CFB5: mov     r8, [rsi+0A78h]
 * 0000000140C6CFBC: lea     rdx, [rcx+rsi]
 * 0000000140C6CFC0: mov     ecx, eax
 * 0000000140C6CFC2: shr     rcx, 3
 * 0000000140C6CFC6: lea     r9, [rdx+rcx*8]
 * 0000000140C6CFCA: jmp     short loc_140C6CFED
 * 0000000140C6CFCC: xor     [rdx], r8
 * 0000000140C6CFCF: mov     rax, [rdx]
 * 0000000140C6CFD2: movzx   ecx, r8b
 * 0000000140C6CFD6: xor     rax, r10
 * 0000000140C6CFD9: and     ecx, 3Fh
 * 0000000140C6CFDC: ror     r8, cl
 * 0000000140C6CFDF: add     r8, rax
 * 0000000140C6CFE2: xor     r8, 0F05h
 * 0000000140C6CFE9: add     rdx, 8
 * 0000000140C6CFED: cmp     rdx, r9
 * 0000000140C6CFF0: jnz     short loc_140C6CFCC
 * 0000000140C6CFF2: jmp     loc_140C6BA4E
 * 0000000140C6CFF7: mov     eax, [rsi+850h]
 * 0000000140C6CFFD: test    r15b, al
 * 0000000140C6D000: jz      loc_140C773A3
 * 0000000140C6D006: mov     r14, [rsi+5A8h]
 * 0000000140C6D00D: mov     rax, [rsi+188h]
 * 0000000140C6D014: mov     rbx, [rsi+540h]
 * 0000000140C6D01B: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C6D020: mov     r12, [rsi+5A0h]
 * 0000000140C6D027: mov     [rbp+7B0h+var_828], r12
 * 0000000140C6D02B: mov     [rsp+8B0h+var_858], r14
 * 0000000140C6D030: call    KeGuardDispatchICall
 * 0000000140C6D035: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6D03F: jnz     short loc_140C6D051
 * 0000000140C6D041: mov     ecx, [rsi+978h]
 * 0000000140C6D047: cmp     ecx, 7
 * 0000000140C6D04A: jnb     short loc_140C6D051
 * 0000000140C6D04C: shl     r15b, cl
 * 0000000140C6D04F: jmp     short loc_140C6D069
 * 0000000140C6D051: mov     rax, [rsi+138h]
 * 0000000140C6D058: xor     edx, edx
 * 0000000140C6D05A: mov     rcx, [rsi+0A48h]
 * 0000000140C6D061: call    KeGuardDispatchICall
 * 0000000140C6D066: mov     r15b, 80h
 * 0000000140C6D069: mov     rax, [rsi+148h]
 * 0000000140C6D070: xor     edx, edx
 * 0000000140C6D072: mov     rcx, rbx
 * 0000000140C6D075: mov     [rbp+7B0h+var_818], r15d
 * 0000000140C6D079: call    KeGuardDispatchICall
 * 0000000140C6D07E: mov     rax, [rsi+148h]
 * 0000000140C6D085: xor     edx, edx
 * 0000000140C6D087: mov     rcx, r12
 * 0000000140C6D08A: call    KeGuardDispatchICall
 * 0000000140C6D08F: mov     r9, [rsi+598h]
 * 0000000140C6D096: xor     r11d, r11d
 * 0000000140C6D099: mov     r12d, r11d
 * 0000000140C6D09C: mov     [rsp+8B0h+var_840], r11
 * 0000000140C6D0A1: mov     r8, [r9]
 * 0000000140C6D0A4: cmp     r8, r9
 * 0000000140C6D0A7: jz      short loc_140C6D0FE
 * 0000000140C6D0A9: lea     edi, [r11+1]
 * 0000000140C6D0AD: lea     rdx, [r8-18h]
 * 0000000140C6D0B1: cmp     rdx, r14
 * 0000000140C6D0B4: jz      short loc_140C6D0EC
 * 0000000140C6D0B6: mov     rax, [rsi+748h]
 * 0000000140C6D0BD: mov     rdx, [rdx+rax]
 * 0000000140C6D0C1: mov     rax, [rsi+6D0h]
 * 0000000140C6D0C8: mov     ecx, [rdx+rax]
 * 0000000140C6D0CB: test    [rsi+6E8h], ecx
 * 0000000140C6D0D1: jnz     short loc_140C6D0E0
 * 0000000140C6D0D3: test    r12, r12
 * 0000000140C6D0D6: mov     rax, rdx
 * 0000000140C6D0D9: cmovnz  rax, rdi
 * 0000000140C6D0DD: mov     r12, rax
 * 0000000140C6D0E0: mov     rax, [rsi+6C8h]
 * 0000000140C6D0E7: lock or [rdx+rax], r15b
 * 0000000140C6D0EC: mov     r8, [r8]
 * 0000000140C6D0EF: cmp     r8, r9
 * 0000000140C6D0F2: jnz     short loc_140C6D0AD
 * 0000000140C6D0F4: mov     [rsp+8B0h+var_840], r12
 * 0000000140C6D0F9: mov     edi, 2
 * 0000000140C6D0FE: mov     r13, [rsi+518h]
 * 0000000140C6D105: mov     r14, [r13+0]
 * 0000000140C6D109: cmp     r14, r13
 * 0000000140C6D10C: jz      loc_140C6D2C3
 * 0000000140C6D112: mov     r12d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6D117: mov     al, r15b
 * 0000000140C6D11A: movzx   edx, r15b
 * 0000000140C6D11E: not     al
 * 0000000140C6D120: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C6D125: mov     dil, al
 * 0000000140C6D128: mov     [rbp+7B0h+var_830], edx
 * 0000000140C6D12B: mov     rax, [rsi+6C8h]
 * 0000000140C6D132: mov     rbx, r14
 * 0000000140C6D135: sub     rbx, [rsi+6E0h]
 * 0000000140C6D13C: movsx   ecx, byte ptr [rbx+rax]
 * 0000000140C6D140: test    edx, ecx
 * 0000000140C6D142: jnz     loc_140C6D290
 * 0000000140C6D148: mov     rax, [rsi+6D8h]
 * 0000000140C6D14F: mov     rcx, [rbx+rax]
 * 0000000140C6D153: test    rcx, rcx
 * 0000000140C6D156: jz      loc_140C6D290
 * 0000000140C6D15C: cmp     rcx, r15
 * 0000000140C6D15F: jz      loc_140C6D290
 * 0000000140C6D165: cmp     [rsi+918h], r11d
 * 0000000140C6D16C: jnz     loc_140C6D290
 * 0000000140C6D172: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C6D177: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6D181: add     rax, rsi
 * 0000000140C6D184: mov     r8d, 1
 * 0000000140C6D18A: mov     [rsi+920h], rax
 * 0000000140C6D191: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6D19B: add     rax, rcx
 * 0000000140C6D19E: mov     [rsi+928h], rax
 * 0000000140C6D1A5: movsxd  rax, dword ptr [rcx]
 * 0000000140C6D1A8: mov     [rsi+930h], rax
 * 0000000140C6D1AF: mov     [rsi+938h], rbx
 * 0000000140C6D1B6: mov     [rsi+918h], r8d
 * 0000000140C6D1BD: mov     ecx, [rsi+9D8h]
 * 0000000140C6D1C3: bt      ecx, 1Dh
 * 0000000140C6D1C7: jb      loc_140C6D290
 * 0000000140C6D1CD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D1D7: jz      loc_140C6D290
 * 0000000140C6D1DD: test    r8b, cl
 * 0000000140C6D1E0: jz      loc_140C6D290
 * 0000000140C6D1E6: mov     ecx, [rsi+0A74h]
 * 0000000140C6D1EC: mov     eax, [rsi+804h]
 * 0000000140C6D1F2: mov     r10, [rsi+838h]
 * 0000000140C6D1F9: sub     eax, ecx
 * 0000000140C6D1FB: mov     r8, [rsi+0A78h]
 * 0000000140C6D202: lea     rdx, [rcx+rsi]
 * 0000000140C6D206: mov     ecx, eax
 * 0000000140C6D208: shr     rcx, 3
 * 0000000140C6D20C: lea     r9, [rdx+rcx*8]
 * 0000000140C6D210: jmp     short loc_140C6D233
 * 0000000140C6D212: xor     [rdx], r8
 * 0000000140C6D215: mov     rax, [rdx]
 * 0000000140C6D218: movzx   ecx, r8b
 * 0000000140C6D21C: xor     rax, r10
 * 0000000140C6D21F: and     ecx, 3Fh
 * 0000000140C6D222: ror     r8, cl
 * 0000000140C6D225: add     r8, rax
 * 0000000140C6D228: xor     r8, 0F05h
 * 0000000140C6D22F: add     rdx, 8
 * 0000000140C6D233: cmp     rdx, r9
 * 0000000140C6D236: jnz     short loc_140C6D212
 * 0000000140C6D238: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6D240: cmp     r8, [rsi+0A80h]
 * 0000000140C6D247: jz      short loc_140C6D28D
 * 0000000140C6D249: mov     ecx, [rsi+804h]
 * 0000000140C6D24F: mov     rax, [rsi+588h]
 * 0000000140C6D256: mov     [rax], rsi
 * 0000000140C6D259: mov     [rax+10h], ecx
 * 0000000140C6D25C: mov     rcx, [rsi+0A80h]
 * 0000000140C6D263: cmp     [rsi+918h], r11d
 * 0000000140C6D26A: jnz     short loc_140C6D27A
 * 0000000140C6D26C: mov     rax, [rsi+588h]
 * 0000000140C6D273: xor     rcx, r8
 * 0000000140C6D276: mov     [rax+18h], rcx
 * 0000000140C6D27A: xor     edx, edx
 * 0000000140C6D27C: mov     r9d, 100h
 * 0000000140C6D282: mov     rcx, rsi
 * 0000000140C6D285: call    sub_140C7F03C
 * 0000000140C6D28A: xor     r11d, r11d
 * 0000000140C6D28D: mov     edx, [rbp+7B0h+var_830]
 * 0000000140C6D290: mov     rax, [rsi+6C8h]
 * 0000000140C6D297: lock and [rbx+rax], dil
 * 0000000140C6D29C: mov     r14, [r14]
 * 0000000140C6D29F: mov     eax, 1
 * 0000000140C6D2A4: add     r12d, eax
 * 0000000140C6D2A7: cmp     r14, r13
 * 0000000140C6D2AA: jnz     loc_140C6D12B
 * 0000000140C6D2B0: mov     r15d, [rbp+7B0h+var_818]
 * 0000000140C6D2B4: lea     edi, [rax+1]
 * 0000000140C6D2B7: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C6D2BC: mov     r12, [rsp+8B0h+var_840]
 * 0000000140C6D2C1: jmp     short loc_140C6D2C8
 * 0000000140C6D2C3: mov     eax, 1
 * 0000000140C6D2C8: test    r12, r12
 * 0000000140C6D2CB: jz      short loc_140C6D32B
 * 0000000140C6D2CD: cmp     r12, rax
 * 0000000140C6D2D0: jz      short loc_140C6D2E5
 * 0000000140C6D2D2: mov     rax, [rsi+6C8h]
 * 0000000140C6D2D9: mov     cl, r15b
 * 0000000140C6D2DC: not     cl
 * 0000000140C6D2DE: lock and [r12+rax], cl
 * 0000000140C6D2E3: jmp     short loc_140C6D32B
 * 0000000140C6D2E5: mov     r10, [rsi+598h]
 * 0000000140C6D2EC: mov     r9, [r10]
 * 0000000140C6D2EF: cmp     r9, r10
 * 0000000140C6D2F2: jz      short loc_140C6D32B
 * 0000000140C6D2F4: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C6D2F9: lea     r8, [r9-18h]
 * 0000000140C6D2FD: cmp     r8, rax
 * 0000000140C6D300: jz      short loc_140C6D323
 * 0000000140C6D302: mov     rax, [rsi+748h]
 * 0000000140C6D309: mov     dl, r15b
 * 0000000140C6D30C: not     dl
 * 0000000140C6D30E: mov     r8, [r8+rax]
 * 0000000140C6D312: mov     rax, [rsi+6C8h]
 * 0000000140C6D319: lock and [r8+rax], dl
 * 0000000140C6D31E: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C6D323: mov     r9, [r9]
 * 0000000140C6D326: cmp     r9, r10
 * 0000000140C6D329: jnz     short loc_140C6D2F9
 * 0000000140C6D32B: mov     rax, [rsi+150h]
 * 0000000140C6D332: xor     edx, edx
 * 0000000140C6D334: mov     rcx, [rbp+7B0h+var_828]
 * 0000000140C6D338: call    KeGuardDispatchICall
 * 0000000140C6D33D: jmp     loc_140C6B727
 * 0000000140C6D342: mov     eax, [rsi+850h]
 * 0000000140C6D348: test    r15b, al
 * 0000000140C6D34B: jnz     loc_140C773A3
 * 0000000140C6D351: mov     rax, [rsi+5A8h]
 * 0000000140C6D358: mov     r13d, r12d
 * 0000000140C6D35B: mov     r15, [rsi+5A0h]
 * 0000000140C6D362: mov     rbx, [rsi+540h]
 * 0000000140C6D369: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6D36E: mov     rax, [rsi+188h]
 * 0000000140C6D375: mov     dword ptr [rbp+7B0h+arg_8], r12d
 * 0000000140C6D37C: mov     [rsp+8B0h+var_840], r15
 * 0000000140C6D381: call    KeGuardDispatchICall
 * 0000000140C6D386: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6D390: jnz     short loc_140C6D3AB
 * 0000000140C6D392: mov     ecx, [rsi+978h]
 * 0000000140C6D398: cmp     ecx, 7
 * 0000000140C6D39B: jnb     short loc_140C6D3AB
 * 0000000140C6D39D: mov     r12d, 1
 * 0000000140C6D3A3: mov     r14d, r12d
 * 0000000140C6D3A6: shl     r14b, cl
 * 0000000140C6D3A9: jmp     short loc_140C6D3C9
 * 0000000140C6D3AB: mov     rax, [rsi+138h]
 * 0000000140C6D3B2: xor     edx, edx
 * 0000000140C6D3B4: mov     rcx, [rsi+0A48h]
 * 0000000140C6D3BB: call    KeGuardDispatchICall
 * 0000000140C6D3C0: mov     r14b, 80h
 * 0000000140C6D3C3: mov     r12d, 1
 * 0000000140C6D3C9: mov     rax, [rsi+148h]
 * 0000000140C6D3D0: xor     edx, edx
 * 0000000140C6D3D2: mov     rcx, rbx
 * 0000000140C6D3D5: call    KeGuardDispatchICall
 * 0000000140C6D3DA: mov     r8, [rsi+518h]
 * 0000000140C6D3E1: mov     rdx, [r8]
 * 0000000140C6D3E4: cmp     rdx, r8
 * 0000000140C6D3E7: jz      short loc_140C6D411
 * 0000000140C6D3E9: mov     rax, [rsi+6C8h]
 * 0000000140C6D3F0: mov     rcx, rdx
 * 0000000140C6D3F3: sub     rcx, [rsi+6E0h]
 * 0000000140C6D3FA: lock or [rcx+rax], r14b
 * 0000000140C6D3FF: mov     rdx, [rdx]
 * 0000000140C6D402: add     r13d, r12d
 * 0000000140C6D405: cmp     rdx, r8
 * 0000000140C6D408: jnz     short loc_140C6D3E9
 * 0000000140C6D40A: mov     dword ptr [rbp+7B0h+arg_8], r13d
 * 0000000140C6D411: mov     rax, [rsi+148h]
 * 0000000140C6D418: xor     edx, edx
 * 0000000140C6D41A: mov     rcx, r15
 * 0000000140C6D41D: call    KeGuardDispatchICall
 * 0000000140C6D422: mov     r12, [rsi+598h]
 * 0000000140C6D429: mov     r15, [r12]
 * 0000000140C6D42D: cmp     r15, r12
 * 0000000140C6D430: jz      loc_140C6D5D2
 * 0000000140C6D436: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C6D43B: xor     r13d, r13d
 * 0000000140C6D43E: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6D443: mov     rcx, r15
 * 0000000140C6D446: sub     rcx, [rsi+750h]
 * 0000000140C6D44D: cmp     rcx, rax
 * 0000000140C6D450: jz      loc_140C6D5BA
 * 0000000140C6D456: mov     rax, [rsi+748h]
 * 0000000140C6D45D: mov     rbx, [rcx+rax]
 * 0000000140C6D461: mov     rax, [rsi+6C8h]
 * 0000000140C6D468: test    [rbx+rax], r14b
 * 0000000140C6D46C: jnz     loc_140C6D5A5
 * 0000000140C6D472: mov     rax, [rsi+6D0h]
 * 0000000140C6D479: mov     ecx, [rbx+rax]
 * 0000000140C6D47C: test    [rsi+6E8h], ecx
 * 0000000140C6D482: jz      loc_140C6D5A5
 * 0000000140C6D488: cmp     [rsi+918h], r13d
 * 0000000140C6D48F: jnz     loc_140C6D5A5
 * 0000000140C6D495: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6D49F: mov     edx, 1
 * 0000000140C6D4A4: add     rax, rsi
 * 0000000140C6D4A7: mov     [rsi+920h], rax
 * 0000000140C6D4AE: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6D4B8: add     rax, rdi
 * 0000000140C6D4BB: mov     [rsi+928h], rax
 * 0000000140C6D4C2: movsxd  rax, dword ptr [rdi]
 * 0000000140C6D4C5: mov     [rsi+930h], rax
 * 0000000140C6D4CC: mov     [rsi+938h], rbx
 * 0000000140C6D4D3: mov     [rsi+918h], edx
 * 0000000140C6D4D9: mov     ecx, [rsi+9D8h]
 * 0000000140C6D4DF: bt      ecx, 1Dh
 * 0000000140C6D4E3: jb      loc_140C6D5A5
 * 0000000140C6D4E9: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D4F3: jz      loc_140C6D5A5
 * 0000000140C6D4F9: test    dl, cl
 * 0000000140C6D4FB: jz      loc_140C6D5A5
 * 0000000140C6D501: mov     ecx, [rsi+0A74h]
 * 0000000140C6D507: mov     eax, [rsi+804h]
 * 0000000140C6D50D: mov     r10, [rsi+838h]
 * 0000000140C6D514: sub     eax, ecx
 * 0000000140C6D516: mov     r8, [rsi+0A78h]
 * 0000000140C6D51D: lea     rdx, [rcx+rsi]
 * 0000000140C6D521: mov     ecx, eax
 * 0000000140C6D523: shr     rcx, 3
 * 0000000140C6D527: lea     r9, [rdx+rcx*8]
 * 0000000140C6D52B: jmp     short loc_140C6D54E
 * 0000000140C6D52D: xor     [rdx], r8
 * 0000000140C6D530: mov     rax, [rdx]
 * 0000000140C6D533: movzx   ecx, r8b
 * 0000000140C6D537: xor     rax, r10
 * 0000000140C6D53A: and     ecx, 3Fh
 * 0000000140C6D53D: ror     r8, cl
 * 0000000140C6D540: add     r8, rax
 * 0000000140C6D543: xor     r8, 0F05h
 * 0000000140C6D54A: add     rdx, 8
 * 0000000140C6D54E: cmp     rdx, r9
 * 0000000140C6D551: jnz     short loc_140C6D52D
 * 0000000140C6D553: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6D55B: cmp     r8, [rsi+0A80h]
 * 0000000140C6D562: jz      short loc_140C6D5A5
 * 0000000140C6D564: mov     ecx, [rsi+804h]
 * 0000000140C6D56A: mov     rax, [rsi+588h]
 * 0000000140C6D571: mov     [rax], rsi
 * 0000000140C6D574: mov     [rax+10h], ecx
 * 0000000140C6D577: mov     rcx, [rsi+0A80h]
 * 0000000140C6D57E: cmp     [rsi+918h], r13d
 * 0000000140C6D585: jnz     short loc_140C6D595
 * 0000000140C6D587: mov     rax, [rsi+588h]
 * 0000000140C6D58E: xor     rcx, r8
 * 0000000140C6D591: mov     [rax+18h], rcx
 * 0000000140C6D595: xor     edx, edx
 * 0000000140C6D597: mov     r9d, 100h
 * 0000000140C6D59D: mov     rcx, rsi
 * 0000000140C6D5A0: call    sub_140C7F03C
 * 0000000140C6D5A5: mov     rax, [rsi+6C8h]
 * 0000000140C6D5AC: mov     dl, r14b
 * 0000000140C6D5AF: not     dl
 * 0000000140C6D5B1: lock and [rbx+rax], dl
 * 0000000140C6D5B5: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C6D5BA: mov     r15, [r15]
 * 0000000140C6D5BD: cmp     r15, r12
 * 0000000140C6D5C0: jnz     loc_140C6D443
 * 0000000140C6D5C6: mov     r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6D5CD: mov     edi, 2
 * 0000000140C6D5D2: mov     rax, [rsi+150h]
 * 0000000140C6D5D9: xor     edx, edx
 * 0000000140C6D5DB: mov     rcx, [rsp+8B0h+var_840]
 * 0000000140C6D5E0: call    KeGuardDispatchICall
 * 0000000140C6D5E5: cmp     r14b, 80h
 * 0000000140C6D5E9: jnz     short loc_140C6D600
 * 0000000140C6D5EB: mov     rax, [rsi+140h]
 * 0000000140C6D5F2: xor     edx, edx
 * 0000000140C6D5F4: mov     rcx, [rsi+0A48h]
 * 0000000140C6D5FB: call    KeGuardDispatchICall
 * 0000000140C6D600: mov     rcx, [rsi+540h]
 * 0000000140C6D607: xor     edx, edx
 * 0000000140C6D609: mov     rax, [rsi+150h]
 * 0000000140C6D610: call    KeGuardDispatchICall
 * 0000000140C6D615: mov     rax, [rsi+190h]
 * 0000000140C6D61C: call    KeGuardDispatchICall
 * 0000000140C6D621: jmp     loc_140C6B324
 * 0000000140C6D626: mov     rax, [rsi+380h]
 * 0000000140C6D62D: xor     ebx, ebx
 * 0000000140C6D62F: mov     r12, [rsi+528h]
 * 0000000140C6D636: mov     dword ptr [rbp+7B0h+arg_8], ebx
 * 0000000140C6D63C: call    KeGuardDispatchICall
 * 0000000140C6D641: mov     [rbp+7B0h+var_828], rax
 * 0000000140C6D645: cli
 * 0000000140C6D646: mov     rcx, gs:20h
 * 0000000140C6D64F: mov     rax, [rsi+658h]
 * 0000000140C6D656: mov     rcx, [rcx+rax]
 * 0000000140C6D65A: sti
 * 0000000140C6D65B: mov     rax, [rsi+178h]
 * 0000000140C6D662: call    KeGuardDispatchICall
 * 0000000140C6D667: mov     rcx, [rsi+530h]
 * 0000000140C6D66E: mov     dl, r15b
 * 0000000140C6D671: mov     rax, [rsi+0F8h]
 * 0000000140C6D678: call    KeGuardDispatchICall
 * 0000000140C6D67D: mov     rax, [rsi+620h]
 * 0000000140C6D684: mov     [rbp+7B0h+var_830], ebx
 * 0000000140C6D687: mov     rcx, [rax]
 * 0000000140C6D68A: mov     r13d, [rcx]
 * 0000000140C6D68D: lea     rdx, [rcx+10h]
 * 0000000140C6D691: mov     [rsp+8B0h+var_858], rdx
 * 0000000140C6D696: lea     rax, ds:0[r13*2]
 * 0000000140C6D69E: add     rax, r13
 * 0000000140C6D6A1: lea     rax, [rdx+rax*8]
 * 0000000140C6D6A5: mov     [rsp+8B0h+var_840], rax
 * 0000000140C6D6AA: cmp     [rcx+0Ch], bl
 * 0000000140C6D6AD: jz      short loc_140C6D6C3
 * 0000000140C6D6AF: mov     rax, [r12]
 * 0000000140C6D6B3: mov     r13d, ebx
 * 0000000140C6D6B6: jmp     short loc_140C6D6BE
 * 0000000140C6D6B8: mov     rax, [rax]
 * 0000000140C6D6BB: add     r13d, r15d
 * 0000000140C6D6BE: cmp     rax, r12
 * 0000000140C6D6C1: jnz     short loc_140C6D6B8
 * 0000000140C6D6C3: mov     r8d, [rsi+830h]
 * 0000000140C6D6CA: lea     r15d, ds:0[r13*8]
 * 0000000140C6D6D2: rdtsc
 * 0000000140C6D6D4: shl     rdx, 20h
 * 0000000140C6D6D8: mov     r9, 7010008004002001h
 * 0000000140C6D6E2: or      rax, rdx
 * 0000000140C6D6E5: mov     rcx, rax
 * 0000000140C6D6E8: ror     rcx, 3
 * 0000000140C6D6EC: xor     rcx, rax
 * 0000000140C6D6EF: mov     rax, r9
 * 0000000140C6D6F2: mul     rcx
 * 0000000140C6D6F5: mov     rbx, rdx
 * 0000000140C6D6F8: mov     [rbp+7B0h+var_4A0], rdx
 * 0000000140C6D6FF: xor     rbx, rax
 * 0000000140C6D702: and     ebx, 7FFh
 * 0000000140C6D708: rdtsc
 * 0000000140C6D70A: shl     rdx, 20h
 * 0000000140C6D70E: or      rax, rdx
 * 0000000140C6D711: mov     rcx, rax
 * 0000000140C6D714: ror     rcx, 3
 * 0000000140C6D718: xor     rcx, rax
 * 0000000140C6D71B: mov     rax, r9
 * 0000000140C6D71E: mul     rcx
 * 0000000140C6D721: lea     ecx, [rbx+1]
 * 0000000140C6D724: xor     rax, rdx
 * 0000000140C6D727: mov     [rbp+7B0h+var_498], rdx
 * 0000000140C6D72E: xor     edx, edx
 * 0000000140C6D730: div     rcx
 * 0000000140C6D733: mov     rax, [rsi+100h]
 * 0000000140C6D73A: mov     ecx, 42h ; 'B'
 * 0000000140C6D73F: mov     r14, rdx
 * 0000000140C6D742: lea     edx, [rbx+r15]
 * 0000000140C6D746: call    KeGuardDispatchICall
 * 0000000140C6D74B: mov     r11, rax
 * 0000000140C6D74E: test    rax, rax
 * 0000000140C6D751: jnz     short loc_140C6D762
 * 0000000140C6D753: lea     eax, [r11+1]
 * 0000000140C6D757: add     [rsi+0A60h], eax
 * 0000000140C6D75D: jmp     loc_140C6D8AE
 * 0000000140C6D762: mov     r10d, r14d
 * 0000000140C6D765: mov     r8, r11
 * 0000000140C6D768: cmp     r14d, 8
 * 0000000140C6D76C: jb      short loc_140C6D7C0
 * 0000000140C6D76E: mov     r9d, r14d
 * 0000000140C6D771: mov     edi, 1
 * 0000000140C6D776: shr     r9, 3
 * 0000000140C6D77A: mov     rsi, 7010008004002001h
 * 0000000140C6D784: rdtsc
 * 0000000140C6D786: shl     rdx, 20h
 * 0000000140C6D78A: add     r10d, 0FFFFFFF8h
 * 0000000140C6D78E: or      rax, rdx
 * 0000000140C6D791: mov     rcx, rax
 * 0000000140C6D794: ror     rcx, 3
 * 0000000140C6D798: xor     rcx, rax
 * 0000000140C6D79B: mov     rax, rsi
 * 0000000140C6D79E: mul     rcx
 * 0000000140C6D7A1: mov     [rbp+7B0h+var_490], rdx
 * 0000000140C6D7A8: xor     rdx, rax
 * 0000000140C6D7AB: mov     [r8], rdx
 * 0000000140C6D7AE: add     r8, 8
 * 0000000140C6D7B2: sub     r9, rdi
 * 0000000140C6D7B5: jnz     short loc_140C6D784
 * 0000000140C6D7B7: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6D7BC: lea     edi, [r9+2]
 * 0000000140C6D7C0: test    r10d, r10d
 * 0000000140C6D7C3: jz      short loc_140C6D808
 * 0000000140C6D7C5: rdtsc
 * 0000000140C6D7C7: shl     rdx, 20h
 * 0000000140C6D7CB: or      rax, rdx
 * 0000000140C6D7CE: mov     rcx, rax
 * 0000000140C6D7D1: ror     rcx, 3
 * 0000000140C6D7D5: xor     rcx, rax
 * 0000000140C6D7D8: mov     rax, 7010008004002001h
 * 0000000140C6D7E2: mul     rcx
 * 0000000140C6D7E5: mov     ecx, 0FFFFFFFFh
 * 0000000140C6D7EA: mov     [rbp+7B0h+var_488], rdx
 * 0000000140C6D7F1: xor     rdx, rax
 * 0000000140C6D7F4: mov     eax, 1
 * 0000000140C6D7F9: mov     [r8], dl
 * 0000000140C6D7FC: add     r8, rax
 * 0000000140C6D7FF: shr     rdx, 8
 * 0000000140C6D803: add     r10d, ecx
 * 0000000140C6D806: jnz     short loc_140C6D7F9
 * 0000000140C6D808: mov     r8d, r15d
 * 0000000140C6D80B: sub     ebx, r14d
 * 0000000140C6D80E: mov     eax, r14d
 * 0000000140C6D811: mov     r10d, 1
 * 0000000140C6D817: add     rax, r11
 * 0000000140C6D81A: mov     r15, 7010008004002001h
 * 0000000140C6D824: add     r8, rax
 * 0000000140C6D827: cmp     ebx, 8
 * 0000000140C6D82A: jb      short loc_140C6D865
 * 0000000140C6D82C: mov     r9d, ebx
 * 0000000140C6D82F: shr     r9, 3
 * 0000000140C6D833: rdtsc
 * 0000000140C6D835: shl     rdx, 20h
 * 0000000140C6D839: add     ebx, 0FFFFFFF8h
 * 0000000140C6D83C: or      rax, rdx
 * 0000000140C6D83F: mov     rcx, rax
 * 0000000140C6D842: ror     rcx, 3
 * 0000000140C6D846: xor     rcx, rax
 * 0000000140C6D849: mov     rax, r15
 * 0000000140C6D84C: mul     rcx
 * 0000000140C6D84F: mov     [rbp+7B0h+var_480], rdx
 * 0000000140C6D856: xor     rdx, rax
 * 0000000140C6D859: mov     [r8], rdx
 * 0000000140C6D85C: add     r8, 8
 * 0000000140C6D860: sub     r9, r10
 * 0000000140C6D863: jnz     short loc_140C6D833
 * 0000000140C6D865: test    ebx, ebx
 * 0000000140C6D867: jz      short loc_140C6D89F
 * 0000000140C6D869: rdtsc
 * 0000000140C6D86B: shl     rdx, 20h
 * 0000000140C6D86F: or      rax, rdx
 * 0000000140C6D872: mov     rcx, rax
 * 0000000140C6D875: ror     rcx, 3
 * 0000000140C6D879: xor     rcx, rax
 * 0000000140C6D87C: mov     rax, r15
 * 0000000140C6D87F: mul     rcx
 * 0000000140C6D882: mov     [rbp+7B0h+var_478], rdx
 * 0000000140C6D889: xor     rdx, rax
 * 0000000140C6D88C: mov     eax, 0FFFFFFFFh
 * 0000000140C6D891: mov     [r8], dl
 * 0000000140C6D894: add     r8, r10
 * 0000000140C6D897: shr     rdx, 8
 * 0000000140C6D89B: add     ebx, eax
 * 0000000140C6D89D: jnz     short loc_140C6D891
 * 0000000140C6D89F: mov     ebx, r14d
 * 0000000140C6D8A2: mov     [rbp+7B0h+var_6B8], r11
 * 0000000140C6D8A9: add     rbx, r11
 * 0000000140C6D8AC: jnz     short loc_140C6D8BD
 * 0000000140C6D8AE: xor     r12d, r12d
 * 0000000140C6D8B1: mov     [rbp+7B0h+var_6B8], r12
 * 0000000140C6D8B8: jmp     loc_140C6DA9A
 * 0000000140C6D8BD: mov     rdx, [r12]
 * 0000000140C6D8C1: mov     r14d, [rbp+7B0h+var_830]
 * 0000000140C6D8C5: cmp     rdx, r12
 * 0000000140C6D8C8: jz      short loc_140C6D908
 * 0000000140C6D8CA: mov     eax, r14d
 * 0000000140C6D8CD: mov     r8, rdx
 * 0000000140C6D8D0: sub     r8, [rsi+758h]
 * 0000000140C6D8D7: cmp     r14d, r13d
 * 0000000140C6D8DA: jnb     short loc_140C6D8F7
 * 0000000140C6D8DC: mov     rax, [rsi+760h]
 * 0000000140C6D8E3: mov     ecx, r14d
 * 0000000140C6D8E6: add     r14d, r10d
 * 0000000140C6D8E9: mov     rax, [r8+rax]
 * 0000000140C6D8ED: mov     [rbx+rcx*8], rax
 * 0000000140C6D8F1: mov     eax, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6D8F7: mov     rdx, [rdx]
 * 0000000140C6D8FA: add     eax, r10d
 * 0000000140C6D8FD: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C6D903: cmp     rdx, r12
 * 0000000140C6D906: jnz     short loc_140C6D8CD
 * 0000000140C6D908: mov     rax, [rsi+3A0h]
 * 0000000140C6D90F: mov     edx, r14d
 * 0000000140C6D912: mov     rcx, rbx
 * 0000000140C6D915: call    KeGuardDispatchICall
 * 0000000140C6D91A: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C6D91F: dec     r14d
 * 0000000140C6D922: mov     r12, [rsp+8B0h+var_840]
 * 0000000140C6D927: xor     r11d, r11d
 * 0000000140C6D92A: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6D92F: mov     r10, [r15+8]
 * 0000000140C6D933: mov     r8d, r11d
 * 0000000140C6D936: mov     edx, r14d
 * 0000000140C6D939: test    r14d, r14d
 * 0000000140C6D93C: js      short loc_140C6D965
 * 0000000140C6D93E: lea     ecx, [rdx+r8]
 * 0000000140C6D942: sar     ecx, 1
 * 0000000140C6D944: movsxd  rax, ecx
 * 0000000140C6D947: cmp     r10, [rbx+rax*8]
 * 0000000140C6D94B: jnb     short loc_140C6D956
 * 0000000140C6D94D: test    ecx, ecx
 * 0000000140C6D94F: jz      short loc_140C6D965
 * 0000000140C6D951: lea     edx, [rcx-1]
 * 0000000140C6D954: jmp     short loc_140C6D960
 * 0000000140C6D956: jbe     loc_140C6DA85
 * 0000000140C6D95C: lea     r8d, [rcx+1]
 * 0000000140C6D960: cmp     edx, r8d
 * 0000000140C6D963: jge     short loc_140C6D93E
 * 0000000140C6D965: cmp     [rsi+918h], r11d
 * 0000000140C6D96C: jnz     loc_140C6DA85
 * 0000000140C6D972: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6D97C: mov     edx, 1
 * 0000000140C6D981: add     rax, rsi
 * 0000000140C6D984: mov     [rsi+920h], rax
 * 0000000140C6D98B: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6D995: add     rax, rdi
 * 0000000140C6D998: mov     [rsi+928h], rax
 * 0000000140C6D99F: movsxd  rax, dword ptr [rdi]
 * 0000000140C6D9A2: mov     [rsi+930h], rax
 * 0000000140C6D9A9: mov     [rsi+938h], r10
 * 0000000140C6D9B0: mov     [rsi+918h], edx
 * 0000000140C6D9B6: mov     ecx, [rsi+9D8h]
 * 0000000140C6D9BC: bt      ecx, 1Dh
 * 0000000140C6D9C0: jb      loc_140C6DA85
 * 0000000140C6D9C6: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6D9D0: jz      loc_140C6DA85
 * 0000000140C6D9D6: test    dl, cl
 * 0000000140C6D9D8: jz      loc_140C6DA85
 * 0000000140C6D9DE: mov     ecx, [rsi+0A74h]
 * 0000000140C6D9E4: mov     eax, [rsi+804h]
 * 0000000140C6D9EA: mov     r10, [rsi+838h]
 * 0000000140C6D9F1: sub     eax, ecx
 * 0000000140C6D9F3: mov     r8, [rsi+0A78h]
 * 0000000140C6D9FA: lea     rdx, [rcx+rsi]
 * 0000000140C6D9FE: mov     ecx, eax
 * 0000000140C6DA00: shr     rcx, 3
 * 0000000140C6DA04: lea     r9, [rdx+rcx*8]
 * 0000000140C6DA08: jmp     short loc_140C6DA2B
 * 0000000140C6DA0A: xor     [rdx], r8
 * 0000000140C6DA0D: mov     rax, [rdx]
 * 0000000140C6DA10: movzx   ecx, r8b
 * 0000000140C6DA14: xor     rax, r10
 * 0000000140C6DA17: and     ecx, 3Fh
 * 0000000140C6DA1A: ror     r8, cl
 * 0000000140C6DA1D: add     r8, rax
 * 0000000140C6DA20: xor     r8, 0F05h
 * 0000000140C6DA27: add     rdx, 8
 * 0000000140C6DA2B: cmp     rdx, r9
 * 0000000140C6DA2E: jnz     short loc_140C6DA0A
 * 0000000140C6DA30: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6DA38: cmp     r8, [rsi+0A80h]
 * 0000000140C6DA3F: jz      short loc_140C6DA85
 * 0000000140C6DA41: mov     ecx, [rsi+804h]
 * 0000000140C6DA47: mov     rax, [rsi+588h]
 * 0000000140C6DA4E: mov     [rax], rsi
 * 0000000140C6DA51: mov     [rax+10h], ecx
 * 0000000140C6DA54: mov     rcx, [rsi+0A80h]
 * 0000000140C6DA5B: cmp     [rsi+918h], r11d
 * 0000000140C6DA62: jnz     short loc_140C6DA72
 * 0000000140C6DA64: mov     rax, [rsi+588h]
 * 0000000140C6DA6B: xor     rcx, r8
 * 0000000140C6DA6E: mov     [rax+18h], rcx
 * 0000000140C6DA72: xor     edx, edx
 * 0000000140C6DA74: mov     r9d, 100h
 * 0000000140C6DA7A: mov     rcx, rsi
 * 0000000140C6DA7D: call    sub_140C7F03C
 * 0000000140C6DA82: xor     r11d, r11d
 * 0000000140C6DA85: add     r15, 18h
 * 0000000140C6DA89: cmp     r15, r12
 * 0000000140C6DA8C: jb      loc_140C6D92F
 * 0000000140C6DA92: mov     edi, 2
 * 0000000140C6DA97: xor     r12d, r12d
 * 0000000140C6DA9A: mov     rcx, [rsi+530h]
 * 0000000140C6DAA1: mov     rax, [rsi+128h]
 * 0000000140C6DAA8: call    KeGuardDispatchICall
 * 0000000140C6DAAD: mov     rax, [rsi+180h]
 * 0000000140C6DAB4: call    KeGuardDispatchICall
 * 0000000140C6DAB9: mov     rax, [rsi+388h]
 * 0000000140C6DAC0: mov     rcx, [rbp+7B0h+var_828]
 * 0000000140C6DAC4: call    KeGuardDispatchICall
 * 0000000140C6DAC9: cmp     [rbp+7B0h+var_6B8], r12
 * 0000000140C6DAD0: jz      loc_140C770FB
 * 0000000140C6DAD6: mov     eax, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6DADC: shl     eax, 9
 * 0000000140C6DADF: add     [rsi+848h], eax
 * 0000000140C6DAE5: mov     rax, [rsi+108h]
 * 0000000140C6DAEC: mov     rcx, [rbp+7B0h+var_6B8]
 * 0000000140C6DAF3: jmp     loc_140C6AB5C
 * 0000000140C6DAF8: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6DB02: jz      short loc_140C6DB56
 * 0000000140C6DB04: test    [rsi+9DCh], r11d
 * 0000000140C6DB0B: jnz     short loc_140C6DB56
 * 0000000140C6DB0D: rdtsc
 * 0000000140C6DB0F: shl     rdx, 20h
 * 0000000140C6DB13: or      rax, rdx
 * 0000000140C6DB16: mov     rcx, rax
 * 0000000140C6DB19: ror     rcx, 3
 * 0000000140C6DB1D: xor     rcx, rax
 * 0000000140C6DB20: mov     rax, 7010008004002001h
 * 0000000140C6DB2A: mul     rcx
 * 0000000140C6DB2D: mov     rcx, rdx
 * 0000000140C6DB30: mov     [rbp+7B0h+var_470], rdx
 * 0000000140C6DB37: xor     rcx, rax
 * 0000000140C6DB3A: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140C6DB44: mul     rcx
 * 0000000140C6DB47: shr     rdx, 2
 * 0000000140C6DB4B: lea     eax, [rdx+rdx*4]
 * 0000000140C6DB4E: sub     ecx, eax
 * 0000000140C6DB50: mov     [rsi+844h], ecx
 * 0000000140C6DB56: mov     ecx, [rsi+844h]
 * 0000000140C6DB5C: test    ecx, ecx
 * 0000000140C6DB5E: jz      loc_140C70950
 * 0000000140C6DB64: sub     ecx, 1
 * 0000000140C6DB67: jz      loc_140C70716
 * 0000000140C6DB6D: sub     ecx, 1
 * 0000000140C6DB70: jz      loc_140C704C8
 * 0000000140C6DB76: sub     ecx, 1
 * 0000000140C6DB79: jz      loc_140C6E028
 * 0000000140C6DB7F: sub     ecx, 1
 * 0000000140C6DB82: jz      loc_140C6DDB6
 * 0000000140C6DB88: cmp     ecx, 1
 * 0000000140C6DB8B: jnz     loc_140C70B92
 * 0000000140C6DB91: mov     rbx, r13
 * 0000000140C6DB94: mov     [rbp+7B0h+arg_10], 0FFh
 * 0000000140C6DB9B: mov     r13d, r12d
 * 0000000140C6DB9E: mov     r14d, r12d
 * 0000000140C6DBA1: mov     [rbp+7B0h+var_670], r12
 * 0000000140C6DBA8: jmp     loc_140C6DD78
 * 0000000140C6DBAD: mov     rax, [rsi+218h]
 * 0000000140C6DBB4: lea     rdx, [rbp+7B0h+var_468]
 * 0000000140C6DBBB: mov     rcx, [rbp+7B0h+var_6E8]
 * 0000000140C6DBC2: add     r13d, r15d
 * 0000000140C6DBC5: call    KeGuardDispatchICall
 * 0000000140C6DBCA: test    rax, rax
 * 0000000140C6DBCD: jnz     loc_140C6DD78
 * 0000000140C6DBD3: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6DBDD: jz      short loc_140C6DC26
 * 0000000140C6DBDF: mov     rcx, [rsi+0AC8h]
 * 0000000140C6DBE6: lea     edx, [rax+30h]
 * 0000000140C6DBE9: lea     r8d, [rax+6]
 * 0000000140C6DBED: mov     rax, [rbx]
 * 0000000140C6DBF0: add     edx, 0FFFFFFF8h
 * 0000000140C6DBF3: mov     [rcx], rax
 * 0000000140C6DBF6: add     rbx, 8
 * 0000000140C6DBFA: add     rcx, 8
 * 0000000140C6DBFE: sub     r8, r15
 * 0000000140C6DC01: jnz     short loc_140C6DBED
 * 0000000140C6DC03: test    edx, edx
 * 0000000140C6DC05: jz      short loc_140C6DC1F
 * 0000000140C6DC07: mov     esi, 0FFFFFFFFh
 * 0000000140C6DC0C: mov     al, [rbx]
 * 0000000140C6DC0E: add     rbx, r15
 * 0000000140C6DC11: mov     [rcx], al
 * 0000000140C6DC13: add     rcx, r15
 * 0000000140C6DC16: add     edx, esi
 * 0000000140C6DC18: jnz     short loc_140C6DC0C
 * 0000000140C6DC1A: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6DC1F: mov     rbx, [rsi+0AC8h]
 * 0000000140C6DC26: mov     rax, [rbp+7B0h+var_6E8]
 * 0000000140C6DC2D: mov     [rbx+18h], rax
 * 0000000140C6DC31: mov     rax, [rsi+588h]
 * 0000000140C6DC38: mov     [rax], rbx
 * 0000000140C6DC3B: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6DC42: mov     rcx, [rsi+588h]
 * 0000000140C6DC49: mov     rax, [rbp+7B0h+var_6E8]
 * 0000000140C6DC50: mov     [rcx+8], rax
 * 0000000140C6DC54: mov     dword ptr [rcx+14h], 1000h
 * 0000000140C6DC5B: mov     ecx, r14d
 * 0000000140C6DC5E: cmp     [rsi+918h], r12d
 * 0000000140C6DC65: jnz     loc_140C6DD78
 * 0000000140C6DC6B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6DC75: add     rax, rsi
 * 0000000140C6DC78: mov     [rsi+920h], rax
 * 0000000140C6DC7F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6DC89: add     rax, rbx
 * 0000000140C6DC8C: mov     [rsi+928h], rax
 * 0000000140C6DC93: movsxd  rax, dword ptr [rbx]
 * 0000000140C6DC96: mov     [rsi+930h], rax
 * 0000000140C6DC9D: mov     [rsi+938h], rcx
 * 0000000140C6DCA4: mov     [rsi+918h], r15d
 * 0000000140C6DCAB: mov     ecx, [rsi+9D8h]
 * 0000000140C6DCB1: bt      ecx, 1Dh
 * 0000000140C6DCB5: jb      loc_140C6DD78
 * 0000000140C6DCBB: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6DCC5: jz      loc_140C6DD78
 * 0000000140C6DCCB: test    r15b, cl
 * 0000000140C6DCCE: jz      loc_140C6DD78
 * 0000000140C6DCD4: mov     ecx, [rsi+0A74h]
 * 0000000140C6DCDA: mov     eax, [rsi+804h]
 * 0000000140C6DCE0: mov     r10, [rsi+838h]
 * 0000000140C6DCE7: sub     eax, ecx
 * 0000000140C6DCE9: mov     r8, [rsi+0A78h]
 * 0000000140C6DCF0: lea     rdx, [rcx+rsi]
 * 0000000140C6DCF4: mov     ecx, eax
 * 0000000140C6DCF6: shr     rcx, 3
 * 0000000140C6DCFA: lea     r9, [rdx+rcx*8]
 * 0000000140C6DCFE: jmp     short loc_140C6DD21
 * 0000000140C6DD00: xor     [rdx], r8
 * 0000000140C6DD03: mov     rax, [rdx]
 * 0000000140C6DD06: movzx   ecx, r8b
 * 0000000140C6DD0A: xor     rax, r10
 * 0000000140C6DD0D: and     ecx, 3Fh
 * 0000000140C6DD10: ror     r8, cl
 * 0000000140C6DD13: add     r8, rax
 * 0000000140C6DD16: xor     r8, 0F05h
 * 0000000140C6DD1D: add     rdx, 8
 * 0000000140C6DD21: cmp     rdx, r9
 * 0000000140C6DD24: jnz     short loc_140C6DD00
 * 0000000140C6DD26: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6DD2E: cmp     r8, [rsi+0A80h]
 * 0000000140C6DD35: jz      short loc_140C6DD78
 * 0000000140C6DD37: mov     ecx, [rsi+804h]
 * 0000000140C6DD3D: mov     rax, [rsi+588h]
 * 0000000140C6DD44: mov     [rax], rsi
 * 0000000140C6DD47: mov     [rax+10h], ecx
 * 0000000140C6DD4A: mov     rcx, [rsi+0A80h]
 * 0000000140C6DD51: cmp     [rsi+918h], r12d
 * 0000000140C6DD58: jnz     short loc_140C6DD68
 * 0000000140C6DD5A: mov     rax, [rsi+588h]
 * 0000000140C6DD61: xor     rcx, r8
 * 0000000140C6DD64: mov     [rax+18h], rcx
 * 0000000140C6DD68: xor     edx, edx
 * 0000000140C6DD6A: mov     r9d, 100h
 * 0000000140C6DD70: mov     rcx, rsi
 * 0000000140C6DD73: call    sub_140C7F03C
 * 0000000140C6DD78: mov     rax, [rsi+438h]
 * 0000000140C6DD7F: lea     r9, [rbp+7B0h+var_6E8]
 * 0000000140C6DD86: lea     r8, [rbp+7B0h+arg_10]
 * 0000000140C6DD8D: mov     ecx, r14d
 * 0000000140C6DD90: lea     rdx, [rbp+7B0h+var_670]
 * 0000000140C6DD97: call    KeGuardDispatchICall
 * 0000000140C6DD9C: test    eax, eax
 * 0000000140C6DD9E: jnz     loc_140C6DBAD
 * 0000000140C6DDA4: add     r14d, r15d
 * 0000000140C6DDA7: cmp     r14d, 3
 * 0000000140C6DDAB: jb      loc_140C6DBA1
 * 0000000140C6DDB1: jmp     loc_140C70B55
 * 0000000140C6DDB6: mov     rax, [rsi+320h]
 * 0000000140C6DDBD: xor     ecx, ecx
 * 0000000140C6DDBF: mov     r13d, r12d
 * 0000000140C6DDC2: mov     [rbp+7B0h+var_818], r12d
 * 0000000140C6DDC6: call    KeGuardDispatchICall
 * 0000000140C6DDCB: mov     r15, rax
 * 0000000140C6DDCE: test    rax, rax
 * 0000000140C6DDD1: jz      loc_140C70945
 * 0000000140C6DDD7: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6DDDC: mov     [rbp+7B0h+var_668], r12
 * 0000000140C6DDE3: lea     rdx, [rbp+7B0h+var_668]
 * 0000000140C6DDEA: mov     rax, [rsi+318h]
 * 0000000140C6DDF1: mov     rcx, r15
 * 0000000140C6DDF4: mov     rbx, rdi
 * 0000000140C6DDF7: mov     r12d, 1
 * 0000000140C6DDFD: call    KeGuardDispatchICall
 * 0000000140C6DE02: mov     r14, rax
 * 0000000140C6DE05: test    rax, rax
 * 0000000140C6DE08: jz      loc_140C6DFFB
 * 0000000140C6DE0E: xor     edi, edi
 * 0000000140C6DE10: lea     r13d, [r12+5]
 * 0000000140C6DE15: mov     rax, [rsi+218h]
 * 0000000140C6DE1C: lea     rdx, [rbp+7B0h+var_460]
 * 0000000140C6DE23: mov     rcx, r14
 * 0000000140C6DE26: inc     r12d
 * 0000000140C6DE29: call    KeGuardDispatchICall
 * 0000000140C6DE2E: test    rax, rax
 * 0000000140C6DE31: jnz     loc_140C6DFD0
 * 0000000140C6DE37: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6DE41: lea     r9d, [rax+1]
 * 0000000140C6DE45: jz      short loc_140C6DE8D
 * 0000000140C6DE47: mov     rcx, [rsi+0AC8h]
 * 0000000140C6DE4E: lea     edx, [rax+30h]
 * 0000000140C6DE51: mov     r8, r13
 * 0000000140C6DE54: mov     rax, [rbx]
 * 0000000140C6DE57: add     edx, 0FFFFFFF8h
 * 0000000140C6DE5A: mov     [rcx], rax
 * 0000000140C6DE5D: add     rbx, 8
 * 0000000140C6DE61: add     rcx, 8
 * 0000000140C6DE65: sub     r8, r9
 * 0000000140C6DE68: jnz     short loc_140C6DE54
 * 0000000140C6DE6A: test    edx, edx
 * 0000000140C6DE6C: jz      short loc_140C6DE86
 * 0000000140C6DE6E: mov     esi, 0FFFFFFFFh
 * 0000000140C6DE73: mov     al, [rbx]
 * 0000000140C6DE75: add     rbx, r9
 * 0000000140C6DE78: mov     [rcx], al
 * 0000000140C6DE7A: add     rcx, r9
 * 0000000140C6DE7D: add     edx, esi
 * 0000000140C6DE7F: jnz     short loc_140C6DE73
 * 0000000140C6DE81: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6DE86: mov     rbx, [rsi+0AC8h]
 * 0000000140C6DE8D: mov     [rbx+18h], r14
 * 0000000140C6DE91: mov     [rbx+20h], r15
 * 0000000140C6DE95: mov     rax, [rsi+588h]
 * 0000000140C6DE9C: mov     [rax], rbx
 * 0000000140C6DE9F: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6DEA6: mov     rax, [rsi+588h]
 * 0000000140C6DEAD: mov     [rax+8], r14
 * 0000000140C6DEB1: mov     dword ptr [rax+14h], 1000h
 * 0000000140C6DEB8: cmp     [rsi+918h], edi
 * 0000000140C6DEBE: jnz     loc_140C6DFD0
 * 0000000140C6DEC4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6DECE: add     rax, rsi
 * 0000000140C6DED1: mov     [rsi+920h], rax
 * 0000000140C6DED8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6DEE2: add     rax, rbx
 * 0000000140C6DEE5: mov     [rsi+928h], rax
 * 0000000140C6DEEC: movsxd  rax, dword ptr [rbx]
 * 0000000140C6DEEF: mov     [rsi+930h], rax
 * 0000000140C6DEF6: mov     [rsi+938h], r13
 * 0000000140C6DEFD: mov     [rsi+918h], r9d
 * 0000000140C6DF04: mov     ecx, [rsi+9D8h]
 * 0000000140C6DF0A: bt      ecx, 1Dh
 * 0000000140C6DF0E: jb      loc_140C6DFD0
 * 0000000140C6DF14: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6DF1E: jz      loc_140C6DFD0
 * 0000000140C6DF24: test    r9b, cl
 * 0000000140C6DF27: jz      loc_140C6DFD0
 * 0000000140C6DF2D: mov     ecx, [rsi+0A74h]
 * 0000000140C6DF33: mov     eax, [rsi+804h]
 * 0000000140C6DF39: mov     r10, [rsi+838h]
 * 0000000140C6DF40: sub     eax, ecx
 * 0000000140C6DF42: mov     r8, [rsi+0A78h]
 * 0000000140C6DF49: lea     rdx, [rcx+rsi]
 * 0000000140C6DF4D: mov     ecx, eax
 * 0000000140C6DF4F: shr     rcx, 3
 * 0000000140C6DF53: lea     r9, [rdx+rcx*8]
 * 0000000140C6DF57: jmp     short loc_140C6DF7A
 * 0000000140C6DF59: xor     [rdx], r8
 * 0000000140C6DF5C: mov     rax, [rdx]
 * 0000000140C6DF5F: movzx   ecx, r8b
 * 0000000140C6DF63: xor     rax, r10
 * 0000000140C6DF66: and     ecx, 3Fh
 * 0000000140C6DF69: ror     r8, cl
 * 0000000140C6DF6C: add     r8, rax
 * 0000000140C6DF6F: xor     r8, 0F05h
 * 0000000140C6DF76: add     rdx, 8
 * 0000000140C6DF7A: cmp     rdx, r9
 * 0000000140C6DF7D: jnz     short loc_140C6DF59
 * 0000000140C6DF7F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6DF87: cmp     r8, [rsi+0A80h]
 * 0000000140C6DF8E: jz      short loc_140C6DFD0
 * 0000000140C6DF90: mov     ecx, [rsi+804h]
 * 0000000140C6DF96: mov     rax, [rsi+588h]
 * 0000000140C6DF9D: mov     [rax], rsi
 * 0000000140C6DFA0: mov     [rax+10h], ecx
 * 0000000140C6DFA3: mov     rcx, [rsi+0A80h]
 * 0000000140C6DFAA: cmp     [rsi+918h], edi
 * 0000000140C6DFB0: jnz     short loc_140C6DFC0
 * 0000000140C6DFB2: mov     rax, [rsi+588h]
 * 0000000140C6DFB9: xor     rcx, r8
 * 0000000140C6DFBC: mov     [rax+18h], rcx
 * 0000000140C6DFC0: xor     edx, edx
 * 0000000140C6DFC2: mov     r9d, 100h
 * 0000000140C6DFC8: mov     rcx, rsi
 * 0000000140C6DFCB: call    sub_140C7F03C
 * 0000000140C6DFD0: mov     rax, [rsi+318h]
 * 0000000140C6DFD7: lea     rdx, [rbp+7B0h+var_668]
 * 0000000140C6DFDE: mov     rcx, r15
 * 0000000140C6DFE1: call    KeGuardDispatchICall
 * 0000000140C6DFE6: mov     r14, rax
 * 0000000140C6DFE9: test    rax, rax
 * 0000000140C6DFEC: jnz     loc_140C6DE15
 * 0000000140C6DFF2: mov     r13d, [rbp+7B0h+var_818]
 * 0000000140C6DFF6: mov     rdi, [rsp+8B0h+var_860]
 * 0000000140C6DFFB: mov     rax, [rsi+320h]
 * 0000000140C6E002: add     r13d, r12d
 * 0000000140C6E005: mov     rcx, r15
 * 0000000140C6E008: mov     [rbp+7B0h+var_818], r13d
 * 0000000140C6E00C: call    KeGuardDispatchICall
 * 0000000140C6E011: xor     r12d, r12d
 * 0000000140C6E014: mov     r15, rax
 * 0000000140C6E017: test    rax, rax
 * 0000000140C6E01A: jnz     loc_140C6DDDC
 * 0000000140C6E020: lea     edi, [rax+2]
 * 0000000140C6E023: jmp     loc_140C70945
 * 0000000140C6E028: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6E032: mov     r13, rsi
 * 0000000140C6E035: mov     rax, [rsi+4E8h]
 * 0000000140C6E03C: mov     [rbp+7B0h+var_7D0], rsi
 * 0000000140C6E040: mov     rbx, [rax]
 * 0000000140C6E043: mov     [rbp+7B0h+var_7E8], rbx
 * 0000000140C6E047: jnz     loc_140C704C0
 * 0000000140C6E04D: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C6E052: mov     rax, [rcx+28h]
 * 0000000140C6E056: test    rax, rax
 * 0000000140C6E059: jz      loc_140C6E1B2
 * 0000000140C6E05F: mov     r13d, r15d
 * 0000000140C6E062: cmp     rbx, rax
 * 0000000140C6E065: jz      loc_140C70B5A
 * 0000000140C6E06B: mov     [rcx+18h], rbx
 * 0000000140C6E06F: mov     rax, [rsi+588h]
 * 0000000140C6E076: mov     [rax], rcx
 * 0000000140C6E079: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C6E080: mov     rax, [rsi+588h]
 * 0000000140C6E087: mov     [rax+8], rbx
 * 0000000140C6E08B: mov     [rax+14h], r11d
 * 0000000140C6E08F: cmp     [rsi+918h], r12d
 * 0000000140C6E096: jnz     loc_140C70B5A
 * 0000000140C6E09C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6E0A6: add     rax, rsi
 * 0000000140C6E0A9: mov     [rsi+920h], rax
 * 0000000140C6E0B0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C6E0BA: add     rax, rcx
 * 0000000140C6E0BD: mov     [rsi+928h], rax
 * 0000000140C6E0C4: movsxd  rax, dword ptr [rcx]
 * 0000000140C6E0C7: mov     [rsi+930h], rax
 * 0000000140C6E0CE: mov     [rsi+938h], r14
 * 0000000140C6E0D5: mov     [rsi+918h], r15d
 * 0000000140C6E0DC: mov     ecx, [rsi+9D8h]
 * 0000000140C6E0E2: bt      ecx, 1Dh
 * 0000000140C6E0E6: jb      loc_140C70B5A
 * 0000000140C6E0EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6E0F6: jz      loc_140C70B5A
 * 0000000140C6E0FC: test    r15b, cl
 * 0000000140C6E0FF: jz      loc_140C70B5A
 * 0000000140C6E105: mov     ecx, [rsi+0A74h]
 * 0000000140C6E10B: mov     eax, [rsi+804h]
 * 0000000140C6E111: mov     r10, [rsi+838h]
 * 0000000140C6E118: sub     eax, ecx
 * 0000000140C6E11A: mov     r8, [rsi+0A78h]
 * 0000000140C6E121: lea     rdx, [rcx+rsi]
 * 0000000140C6E125: mov     ecx, eax
 * 0000000140C6E127: shr     rcx, 3
 * 0000000140C6E12B: lea     r9, [rdx+rcx*8]
 * 0000000140C6E12F: jmp     short loc_140C6E152
 * 0000000140C6E131: xor     [rdx], r8
 * 0000000140C6E134: mov     rax, [rdx]
 * 0000000140C6E137: movzx   ecx, r8b
 * 0000000140C6E13B: xor     rax, r10
 * 0000000140C6E13E: and     ecx, 3Fh
 * 0000000140C6E141: ror     r8, cl
 * 0000000140C6E144: add     r8, rax
 * 0000000140C6E147: xor     r8, 0F05h
 * 0000000140C6E14E: add     rdx, 8
 * 0000000140C6E152: cmp     rdx, r9
 * 0000000140C6E155: jnz     short loc_140C6E131
 * 0000000140C6E157: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6E15F: cmp     r8, [rsi+0A80h]
 * 0000000140C6E166: jz      loc_140C70B5A
 * 0000000140C6E16C: mov     ecx, [rsi+804h]
 * 0000000140C6E172: mov     rax, [rsi+588h]
 * 0000000140C6E179: mov     [rax], rsi
 * 0000000140C6E17C: mov     [rax+10h], ecx
 * 0000000140C6E17F: mov     rcx, [rsi+0A80h]
 * 0000000140C6E186: cmp     [rsi+918h], r12d
 * 0000000140C6E18D: jnz     short loc_140C6E19D
 * 0000000140C6E18F: mov     rax, [rsi+588h]
 * 0000000140C6E196: xor     rcx, r8
 * 0000000140C6E199: mov     [rax+18h], rcx
 * 0000000140C6E19D: xor     edx, edx
 * 0000000140C6E19F: mov     r9d, 100h
 * 0000000140C6E1A5: mov     rcx, rsi
 * 0000000140C6E1A8: call    sub_140C7F03C
 * 0000000140C6E1AD: jmp     loc_140C70B5A
 * 0000000140C6E1B2: test    rbx, rbx
 * 0000000140C6E1B5: jz      loc_140C704C0
 * 0000000140C6E1BB: mov     rax, [rsi+210h]
 * 0000000140C6E1C2: lea     rdx, [rbp+7B0h+var_220]
 * 0000000140C6E1C9: mov     rcx, rbx
 * 0000000140C6E1CC: mov     [rbp+7B0h+var_818], r15d
 * 0000000140C6E1D0: mov     [rbp+7B0h+var_790], rsi
 * 0000000140C6E1D4: call    KeGuardDispatchICall
 * 0000000140C6E1D9: mov     r15, [rbp+7B0h+BugCheckParameter2]
 * 0000000140C6E1E0: xor     r8d, r8d
 * 0000000140C6E1E3: mov     r14d, [rbp+7B0h+var_20C]
 * 0000000140C6E1EA: mov     r12, rax
 * 0000000140C6E1ED: mov     [rbp+7B0h+var_7D8], rax
 * 0000000140C6E1F1: mov     [rbp+7B0h+var_7FC], r14d
 * 0000000140C6E1F5: mov     [rbp+7B0h+var_7F0], r15
 * 0000000140C6E1F9: test    r15, r15
 * 0000000140C6E1FC: jnz     short loc_140C6E218
 * 0000000140C6E1FE: test    dword ptr [rsi+9D8h], 100000h
 * 0000000140C6E208: jz      loc_140C7A200
 * 0000000140C6E20E: mov     ecx, 0C000007Bh
 * 0000000140C6E213: jmp     loc_140C70481
 * 0000000140C6E218: mov     ecx, 4
 * 0000000140C6E21D: mov     [rbp+7B0h+var_720], r8
 * 0000000140C6E224: lea     rax, [rbp+7B0h+var_718]
 * 0000000140C6E22B: mov     r9d, 0FFFFFFFFh
 * 0000000140C6E231: lea     edx, [rcx-3]
 * 0000000140C6E234: mov     [rax], r8b
 * 0000000140C6E237: add     rax, rdx
 * 0000000140C6E23A: add     ecx, r9d
 * 0000000140C6E23D: jnz     short loc_140C6E234
 * 0000000140C6E23F: mov     ebx, r8d
 * 0000000140C6E242: cmp     [rsi+82Ch], r8d
 * 0000000140C6E249: jbe     loc_140C6E422
 * 0000000140C6E24F: mov     ecx, [rbp+7B0h+var_718]
 * 0000000140C6E255: mov     edx, dword ptr [rbp+7B0h+var_720+4]
 * 0000000140C6E25B: mov     r9d, dword ptr [rbp+7B0h+var_720]
 * 0000000140C6E262: mov     rax, [rsi+0AC0h]
 * 0000000140C6E269: mov     r10d, r8d
 * 0000000140C6E26C: test    rax, rax
 * 0000000140C6E26F: mov     r11, rsi
 * 0000000140C6E272: cmovnz  r11, rax
 * 0000000140C6E276: mov     r8d, [r11+828h]
 * 0000000140C6E27D: add     r8, r11
 * 0000000140C6E280: test    r9d, r9d
 * 0000000140C6E283: jz      short loc_140C6E292
 * 0000000140C6E285: cmp     edx, ebx
 * 0000000140C6E287: ja      short loc_140C6E292
 * 0000000140C6E289: mov     r8d, ecx
 * 0000000140C6E28C: mov     r10d, edx
 * 0000000140C6E28F: add     r8, r11
 * 0000000140C6E292: cmp     r10d, ebx
 * 0000000140C6E295: jz      loc_140C6E3A7
 * 0000000140C6E29B: mov     r9d, ebx
 * 0000000140C6E29E: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 0000000140C6E2A8: sub     r9d, r10d
 * 0000000140C6E2AB: mov     r12d, 1
 * 0000000140C6E2B1: mov     r10d, ebx
 * 0000000140C6E2B4: mov     ecx, [r8]
 * 0000000140C6E2B7: sub     ecx, r12d
 * 0000000140C6E2BA: jz      loc_140C6E379
 * 0000000140C6E2C0: sub     ecx, 6
 * 0000000140C6E2C3: jz      loc_140C6E36B
 * 0000000140C6E2C9: sub     ecx, r12d
 * 0000000140C6E2CC: jz      loc_140C6E35E
 * 0000000140C6E2D2: sub     ecx, edi
 * 0000000140C6E2D4: jz      short loc_140C6E352
 * 0000000140C6E2D6: sub     ecx, 12h
 * 0000000140C6E2D9: jz      short loc_140C6E34B
 * 0000000140C6E2DB: sub     ecx, edi
 * 0000000140C6E2DD: jz      short loc_140C6E31F
 * 0000000140C6E2DF: sub     ecx, 3
 * 0000000140C6E2E2: jz      short loc_140C6E2F7
 * 0000000140C6E2E4: cmp     ecx, 0Ah
 * 0000000140C6E2E7: jz      loc_140C6E379
 * 0000000140C6E2ED: mov     eax, 30h ; '0'
 * 0000000140C6E2F2: jmp     loc_140C6E38E
 * 0000000140C6E2F7: mov     ecx, [r8+20h]
 * 0000000140C6E2FB: mov     edx, [r8+28h]
 * 0000000140C6E2FF: and     ecx, 0FFFh
 * 0000000140C6E305: add     rdx, 0FFFh
 * 0000000140C6E30C: add     rdx, rcx
 * 0000000140C6E30F: shr     rdx, 0Ch
 * 0000000140C6E313: lea     eax, [rdx+rdx*4]
 * 0000000140C6E316: lea     eax, ds:30h[rax*4]
 * 0000000140C6E31D: jmp     short loc_140C6E38E
 * 0000000140C6E31F: mov     eax, [r8+24h]
 * 0000000140C6E323: lea     ecx, [rax-1]
 * 0000000140C6E326: neg     eax
 * 0000000140C6E328: sbb     eax, eax
 * 0000000140C6E32A: and     ecx, eax
 * 0000000140C6E32C: mov     rax, rsi
 * 0000000140C6E32F: mul     rcx
 * 0000000140C6E332: movzx   eax, word ptr [r8+28h]
 * 0000000140C6E337: shr     rdx, 3
 * 0000000140C6E33B: add     edx, 7
 * 0000000140C6E33E: and     edx, 0FFFFFFF8h
 * 0000000140C6E341: add     eax, edi
 * 0000000140C6E343: lea     eax, [rax+rax*2]
 * 0000000140C6E346: lea     eax, [rdx+rax*8]
 * 0000000140C6E349: jmp     short loc_140C6E38E
 * 0000000140C6E34B: movzx   eax, word ptr [r8+28h]
 * 0000000140C6E350: jmp     short loc_140C6E363
 * 0000000140C6E352: mov     eax, [r8+1Ch]
 * 0000000140C6E356: add     eax, 3
 * 0000000140C6E359: shl     eax, 4
 * 0000000140C6E35C: jmp     short loc_140C6E38E
 * 0000000140C6E35E: movzx   eax, word ptr [r8+20h]
 * 0000000140C6E363: add     eax, 37h ; '7'
 * 0000000140C6E366: and     eax, 0FFFFFFF8h
 * 0000000140C6E369: jmp     short loc_140C6E38E
 * 0000000140C6E36B: mov     eax, [r8+18h]
 * 0000000140C6E36F: add     eax, edi
 * 0000000140C6E371: lea     eax, [rax+rax*2]
 * 0000000140C6E374: shl     eax, 3
 * 0000000140C6E377: jmp     short loc_140C6E38E
 * 0000000140C6E379: mov     ecx, [r8+10h]
 * 0000000140C6E37D: mov     rax, rsi
 * 0000000140C6E380: mul     rcx
 * 0000000140C6E383: shr     rdx, 3
 * 0000000140C6E387: lea     eax, ds:30h[rdx*4]
 * 0000000140C6E38E: add     r8, rax
 * 0000000140C6E391: sub     r9, r12
 * 0000000140C6E394: jnz     loc_140C6E2B4
 * 0000000140C6E39A: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6E39F: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C6E3A3: mov     r12, [rbp+7B0h+var_7D8]
 * 0000000140C6E3A7: mov     eax, 1
 * 0000000140C6E3AC: mov     edx, r10d
 * 0000000140C6E3AF: mov     r9d, eax
 * 0000000140C6E3B2: mov     dword ptr [rbp+7B0h+var_720], eax
 * 0000000140C6E3B8: mov     ecx, r8d
 * 0000000140C6E3BB: mov     dword ptr [rbp+7B0h+var_720+4], edx
 * 0000000140C6E3C1: sub     ecx, r11d
 * 0000000140C6E3C4: mov     r10d, r9d
 * 0000000140C6E3C7: mov     [rbp+7B0h+var_718], ecx
 * 0000000140C6E3CD: mov     eax, [r8]
 * 0000000140C6E3D0: cmp     eax, r10d
 * 0000000140C6E3D3: jz      short loc_140C6E3DF
 * 0000000140C6E3D5: cmp     eax, 0Ch
 * 0000000140C6E3D8: jz      short loc_140C6E3DF
 * 0000000140C6E3DA: cmp     eax, 2Bh ; '+'
 * 0000000140C6E3DD: jnz     short loc_140C6E3EB
 * 0000000140C6E3DF: cmp     [r8+8], r12
 * 0000000140C6E3E3: jnz     short loc_140C6E3EB
 * 0000000140C6E3E5: cmp     [r8+10h], r14d
 * 0000000140C6E3E9: jz      short loc_140C6E40C
 * 0000000140C6E3EB: add     eax, 0FFFFFFDFh
 * 0000000140C6E3EE: cmp     eax, r10d
 * 0000000140C6E3F1: ja      short loc_140C6E3F9
 * 0000000140C6E3F3: cmp     [r8+20h], r15
 * 0000000140C6E3F7: jz      short loc_140C6E40C
 * 0000000140C6E3F9: add     ebx, r10d
 * 0000000140C6E3FC: cmp     ebx, [rsi+82Ch]
 * 0000000140C6E402: jnb     short loc_140C6E422
 * 0000000140C6E404: xor     r8d, r8d
 * 0000000140C6E407: jmp     loc_140C6E262
 * 0000000140C6E40C: xor     r12d, r12d
 * 0000000140C6E40F: mov     [rbp+7B0h+var_778], r8
 * 0000000140C6E413: test    r8, r8
 * 0000000140C6E416: jz      short loc_140C6E429
 * 0000000140C6E418: mov     ecx, 0C000010Eh
 * 0000000140C6E41D: jmp     loc_140C7047D
 * 0000000140C6E422: xor     r12d, r12d
 * 0000000140C6E425: mov     [rbp+7B0h+var_778], r12
 * 0000000140C6E429: mov     eax, [rbp+7B0h+var_7FC]
 * 0000000140C6E42C: mov     rbx, [rsi+528h]
 * 0000000140C6E433: mov     [rbp+7B0h+var_830], eax
 * 0000000140C6E436: cli
 * 0000000140C6E437: mov     rcx, gs:20h
 * 0000000140C6E440: mov     rax, [rsi+658h]
 * 0000000140C6E447: mov     rcx, [rcx+rax]
 * 0000000140C6E44B: sti
 * 0000000140C6E44C: mov     rax, [rsi+178h]
 * 0000000140C6E453: call    KeGuardDispatchICall
 * 0000000140C6E458: mov     rcx, [rsi+530h]
 * 0000000140C6E45F: mov     r14d, 1
 * 0000000140C6E465: mov     rax, [rsi+0F8h]
 * 0000000140C6E46C: mov     dl, r14b
 * 0000000140C6E46F: call    KeGuardDispatchICall
 * 0000000140C6E474: mov     rdx, [rbx]
 * 0000000140C6E477: cmp     rdx, rbx
 * 0000000140C6E47A: jz      short loc_140C6E4C5
 * 0000000140C6E47C: mov     r9, [rsi+758h]
 * 0000000140C6E483: mov     r10, [rsi+760h]
 * 0000000140C6E48A: mov     r11, [rsi+768h]
 * 0000000140C6E491: mov     rcx, rdx
 * 0000000140C6E494: sub     rcx, r9
 * 0000000140C6E497: mov     rax, [rcx+r10]
 * 0000000140C6E49B: mov     r8d, [rcx+r11]
 * 0000000140C6E49F: add     r8, rax
 * 0000000140C6E4A2: cmp     r15, rax
 * 0000000140C6E4A5: jb      short loc_140C6E4AC
 * 0000000140C6E4A7: cmp     r15, r8
 * 0000000140C6E4AA: jb      short loc_140C6E4B6
 * 0000000140C6E4AC: mov     rdx, [rdx]
 * 0000000140C6E4AF: cmp     rdx, rbx
 * 0000000140C6E4B2: jnz     short loc_140C6E491
 * 0000000140C6E4B4: jmp     short loc_140C6E4C5
 * 0000000140C6E4B6: mov     rax, [rsi+0E8h]
 * 0000000140C6E4BD: mov     edx, r14d
 * 0000000140C6E4C0: call    KeGuardDispatchICall
 * 0000000140C6E4C5: mov     rcx, [rsi+530h]
 * 0000000140C6E4CC: mov     rax, [rsi+128h]
 * 0000000140C6E4D3: call    KeGuardDispatchICall
 * 0000000140C6E4D8: mov     rax, [rsi+180h]
 * 0000000140C6E4DF: call    KeGuardDispatchICall
 * 0000000140C6E4E4: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C6E4EE: jz      short loc_140C6E50D
 * 0000000140C6E4F0: mov     r8d, 9
 * 0000000140C6E4F6: lea     rcx, [rbp+7B0h+var_7D0]
 * 0000000140C6E4FA: mov     rdx, r15
 * 0000000140C6E4FD: call    sub_140C8713C
 * 0000000140C6E502: mov     r13, [rbp+7B0h+var_7D0]
 * 0000000140C6E506: mov     ecx, eax
 * 0000000140C6E508: jmp     loc_140C7047D
 * 0000000140C6E50D: mov     rax, [rsi+200h]
 * 0000000140C6E514: lea     r9, [rbp+7B0h+var_7FC]
 * 0000000140C6E518: xor     r8d, r8d
 * 0000000140C6E51B: mov     [rbp+7B0h+var_550], r12
 * 0000000140C6E522: mov     dl, r14b
 * 0000000140C6E525: mov     [rbp+7B0h+var_690], r12d
 * 0000000140C6E52C: mov     rcx, r15
 * 0000000140C6E52F: call    KeGuardDispatchICall
 * 0000000140C6E534: mov     rcx, rax
 * 0000000140C6E537: test    rax, rax
 * 0000000140C6E53A: jnz     short loc_140C6E544
 * 0000000140C6E53C: mov     eax, r12d
 * 0000000140C6E53F: mov     [rbp+7B0h+var_7FC], eax
 * 0000000140C6E542: jmp     short loc_140C6E547
 * 0000000140C6E544: mov     eax, [rbp+7B0h+var_7FC]
 * 0000000140C6E547: mov     [rbp+7B0h+var_568], rcx
 * 0000000140C6E54E: lea     r9, [rbp+7B0h+var_7FC]
 * 0000000140C6E552: mov     [rbp+7B0h+var_69C], eax
 * 0000000140C6E558: mov     rcx, r15
 * 0000000140C6E55B: mov     rax, [rsi+200h]
 * 0000000140C6E562: mov     r8d, 0Ch
 * 0000000140C6E568: mov     dl, r14b
 * 0000000140C6E56B: call    KeGuardDispatchICall
 * 0000000140C6E570: mov     [rbp+7B0h+var_828], rax
 * 0000000140C6E574: mov     rcx, rax
 * 0000000140C6E577: test    rax, rax
 * 0000000140C6E57A: jnz     short loc_140C6E584
 * 0000000140C6E57C: mov     eax, r12d
 * 0000000140C6E57F: mov     [rbp+7B0h+var_7FC], eax
 * 0000000140C6E582: jmp     short loc_140C6E587
 * 0000000140C6E584: mov     eax, [rbp+7B0h+var_7FC]
 * 0000000140C6E587: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C6E58D: lea     r9, [rbp+7B0h+var_7FC]
 * 0000000140C6E591: mov     [rbp+7B0h+var_560], rcx
 * 0000000140C6E598: mov     r8d, 0Ah
 * 0000000140C6E59E: mov     [rbp+7B0h+var_698], eax
 * 0000000140C6E5A4: mov     rcx, r15
 * 0000000140C6E5A7: mov     rax, [rsi+200h]
 * 0000000140C6E5AE: mov     dl, r14b
 * 0000000140C6E5B1: call    KeGuardDispatchICall
 * 0000000140C6E5B6: mov     rcx, rax
 * 0000000140C6E5B9: test    rax, rax
 * 0000000140C6E5BC: jnz     short loc_140C6E5C6
 * 0000000140C6E5BE: mov     eax, r12d
 * 0000000140C6E5C1: mov     [rbp+7B0h+var_7FC], eax
 * 0000000140C6E5C4: jmp     short loc_140C6E5C9
 * 0000000140C6E5C6: mov     eax, [rbp+7B0h+var_7FC]
 * 0000000140C6E5C9: mov     [rbp+7B0h+var_558], rcx
 * 0000000140C6E5D0: mov     rcx, r15
 * 0000000140C6E5D3: mov     [rbp+7B0h+var_694], eax
 * 0000000140C6E5D9: mov     rax, [rsi+208h]
 * 0000000140C6E5E0: call    KeGuardDispatchICall
 * 0000000140C6E5E5: mov     rbx, rax
 * 0000000140C6E5E8: test    rax, rax
 * 0000000140C6E5EB: jnz     loc_140C6E713
 * 0000000140C6E5F1: mov     ecx, [rsi+9D8h]
 * 0000000140C6E5F7: bt      ecx, 14h
 * 0000000140C6E5FB: jnb     loc_140C7A22B
 * 0000000140C6E601: cmp     [rsi+918h], r12d
 * 0000000140C6E608: jnz     loc_140C6E709
 * 0000000140C6E60E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6E618: add     rax, rsi
 * 0000000140C6E61B: mov     [rsi+920h], rax
 * 0000000140C6E622: mov     [rsi+928h], r12
 * 0000000140C6E629: mov     qword ptr [rsi+930h], 10Fh
 * 0000000140C6E634: mov     [rsi+938h], r15
 * 0000000140C6E63B: mov     [rsi+918h], r14d
 * 0000000140C6E642: bt      ecx, 1Dh
 * 0000000140C6E646: jb      loc_140C6E709
 * 0000000140C6E64C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C6E656: jz      loc_140C6E709
 * 0000000140C6E65C: test    r14b, cl
 * 0000000140C6E65F: jz      loc_140C6E709
 * 0000000140C6E665: mov     ecx, [rsi+0A74h]
 * 0000000140C6E66B: mov     eax, [rsi+804h]
 * 0000000140C6E671: mov     r10, [rsi+838h]
 * 0000000140C6E678: sub     eax, ecx
 * 0000000140C6E67A: mov     r8, [rsi+0A78h]
 * 0000000140C6E681: lea     rdx, [rcx+rsi]
 * 0000000140C6E685: mov     ecx, eax
 * 0000000140C6E687: shr     rcx, 3
 * 0000000140C6E68B: lea     r9, [rdx+rcx*8]
 * 0000000140C6E68F: jmp     short loc_140C6E6B2
 * 0000000140C6E691: xor     [rdx], r8
 * 0000000140C6E694: mov     rax, [rdx]
 * 0000000140C6E697: movzx   ecx, r8b
 * 0000000140C6E69B: xor     rax, r10
 * 0000000140C6E69E: and     ecx, 3Fh
 * 0000000140C6E6A1: ror     r8, cl
 * 0000000140C6E6A4: add     r8, rax
 * 0000000140C6E6A7: xor     r8, 0F05h
 * 0000000140C6E6AE: add     rdx, 8
 * 0000000140C6E6B2: cmp     rdx, r9
 * 0000000140C6E6B5: jnz     short loc_140C6E691
 * 0000000140C6E6B7: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C6E6BF: cmp     r8, [rsi+0A80h]
 * 0000000140C6E6C6: jz      short loc_140C6E709
 * 0000000140C6E6C8: mov     ecx, [rsi+804h]
 * 0000000140C6E6CE: mov     rax, [rsi+588h]
 * 0000000140C6E6D5: mov     [rax], rsi
 * 0000000140C6E6D8: mov     [rax+10h], ecx
 * 0000000140C6E6DB: mov     rcx, [rsi+0A80h]
 * 0000000140C6E6E2: cmp     [rsi+918h], r12d
 * 0000000140C6E6E9: jnz     short loc_140C6E6F9
 * 0000000140C6E6EB: mov     rax, [rsi+588h]
 * 0000000140C6E6F2: xor     rcx, r8
 * 0000000140C6E6F5: mov     [rax+18h], rcx
 * 0000000140C6E6F9: mov     rcx, rsi
 * 0000000140C6E6FC: mov     r9d, 100h
 * 0000000140C6E702: xor     edx, edx
 * 0000000140C6E704: call    sub_140C7F03C
 * 0000000140C6E709: mov     ecx, 0C000007Bh
 * 0000000140C6E70E: jmp     loc_140C7047D
 * 0000000140C6E713: mov     rax, [rsi+498h]
 * 0000000140C6E71A: lea     rdx, [rbp+7B0h+var_5B0]
 * 0000000140C6E721: mov     rcx, r15
 * 0000000140C6E724: call    KeGuardDispatchICall
 * 0000000140C6E729: mov     r8d, [rsi+944h]
 * 0000000140C6E730: mov     [rbp+7B0h+var_548], rax
 * 0000000140C6E737: mov     eax, [rbp+7B0h+var_5B0]
 * 0000000140C6E73D: mov     [rbp+7B0h+var_68C], eax
 * 0000000140C6E743: mov     eax, [rbx+54h]
 * 0000000140C6E746: mov     [rbp+7B0h+var_570], r15
 * 0000000140C6E74D: mov     r15d, [rsi+804h]
 * 0000000140C6E754: mov     [rbp+7B0h+var_6A0], eax
 * 0000000140C6E75A: lea     eax, [r15+120h]
 * 0000000140C6E761: cmp     eax, [rsi+0A64h]
 * 0000000140C6E767: jbe     loc_140C6E848
 * 0000000140C6E76D: mov     edx, eax
 * 0000000140C6E76F: mov     rcx, rsi
 * 0000000140C6E772: call    sub_140C7E7A8
 * 0000000140C6E777: mov     [rsp+8B0h+var_858], rax
 * 0000000140C6E77C: mov     rbx, rax
 * 0000000140C6E77F: test    rax, rax
 * 0000000140C6E782: jz      loc_140C6E871
 * 0000000140C6E788: mov     ecx, [rsi+9D8h]
 * 0000000140C6E78E: test    dil, cl
 * 0000000140C6E791: jnz     loc_140C6E83F
 * 0000000140C6E797: mov     eax, [rsi+804h]
 * 0000000140C6E79D: and     ecx, 10000000h
 * 0000000140C6E7A3: mov     r9, [rsi+7E8h]
 * 0000000140C6E7AA: neg     ecx
 * 0000000140C6E7AC: mov     rcx, rsi
 * 0000000140C6E7AF: sbb     r8d, r8d
 * 0000000140C6E7B2: and     r8d, [rsi+944h]
 * 0000000140C6E7B9: cmp     eax, 8
 * 0000000140C6E7BC: jb      short loc_140C6E7D3
 * 0000000140C6E7BE: mov     edx, eax
 * 0000000140C6E7C0: shr     rdx, 3
 * 0000000140C6E7C4: mov     [rcx], r12
 * 0000000140C6E7C7: add     eax, 0FFFFFFF8h
 * 0000000140C6E7CA: add     rcx, 8
 * 0000000140C6E7CE: sub     rdx, r14
 * 0000000140C6E7D1: jnz     short loc_140C6E7C4
 * 0000000140C6E7D3: test    eax, eax
 * 0000000140C6E7D5: jz      short loc_140C6E7E6
 * 0000000140C6E7D7: mov     edx, 0FFFFFFFFh
 * 0000000140C6E7DC: mov     [rcx], r12b
 * 0000000140C6E7DF: add     rcx, r14
 * 0000000140C6E7E2: add     eax, edx
 * 0000000140C6E7E4: jnz     short loc_140C6E7DC
 * 0000000140C6E7E6: mov     r14d, [rbx+944h]
 * 0000000140C6E7ED: mov     [rbx+944h], r8d
 * 0000000140C6E7F4: cmp     r8d, 3
 * 0000000140C6E7F8: jz      short loc_140C6E829
 * 0000000140C6E7FA: test    dword ptr [rbx+9D8h], 8000000h
 * 0000000140C6E804: jnz     short loc_140C6E820
 * 0000000140C6E806: test    r8d, r8d
 * 0000000140C6E809: jz      short loc_140C6E820
 * 0000000140C6E80B: mov     rax, [rbx+238h]
 * 0000000140C6E812: lea     rcx, [r9-8]
 * 0000000140C6E816: mov     rdx, [rcx]
 * 0000000140C6E819: call    KeGuardDispatchICall
 * 0000000140C6E81E: jmp     short loc_140C6E838
 * 0000000140C6E820: mov     rax, [rbx+108h]
 * 0000000140C6E827: jmp     short loc_140C6E830
 * 0000000140C6E829: mov     rax, [rbx+370h]
 * 0000000140C6E830: mov     rcx, r9
 * 0000000140C6E833: call    KeGuardDispatchICall
 * 0000000140C6E838: mov     [rbx+944h], r14d
 * 0000000140C6E83F: and     dword ptr [rbx+9D8h], 0FFFFFFFDh
 * 0000000140C6E846: jmp     short loc_140C6E856
 * 0000000140C6E848: mov     rbx, rsi
 * 0000000140C6E84B: mov     [rsi+804h], eax
 * 0000000140C6E851: mov     [rsp+8B0h+var_858], rbx
 * 0000000140C6E856: mov     eax, 6
 * 0000000140C6E85B: lea     r14, [rbx+r15]
 * 0000000140C6E85F: add     [rbx+82Ch], eax
 * 0000000140C6E865: mov     [rbp+7B0h+var_660], r14
 * 0000000140C6E86C: test    rbx, rbx
 * 0000000140C6E86F: jnz     short loc_140C6E87F
 * 0000000140C6E871: mov     [rbp+7B0h+var_790], r12
 * 0000000140C6E875: mov     ecx, 0C000009Ah
 * 0000000140C6E87A: jmp     loc_140C7047D
 * 0000000140C6E87F: lea     rdi, [rbp+7B0h+var_570]
 * 0000000140C6E886: mov     [rbp+7B0h+var_778], r14
 * 0000000140C6E88A: mov     [rsp+8B0h+var_840], rdi
 * 0000000140C6E88F: lea     rsi, [rbp+7B0h+var_6A0]
 * 0000000140C6E896: mov     [rbp+7B0h+var_7D0], rax
 * 0000000140C6E89A: mov     r10d, 1
 * 0000000140C6E8A0: mov     [rbp+7B0h+var_810], rbx
 * 0000000140C6E8A4: mov     r13d, [rsi]
 * 0000000140C6E8A7: mov     rdx, rax
 * 0000000140C6E8AA: mov     r15, [rdi]
 * 0000000140C6E8AD: mov     ecx, 30h ; '0'
 * 0000000140C6E8B2: mov     dword ptr [rsp+8B0h+var_848], r13d
 * 0000000140C6E8B7: mov     rax, r14
 * 0000000140C6E8BA: mov     [rax], r12
 * 0000000140C6E8BD: add     ecx, 0FFFFFFF8h
 * 0000000140C6E8C0: add     rax, 8
 * 0000000140C6E8C4: sub     rdx, r10
 * 0000000140C6E8C7: jnz     short loc_140C6E8BA
 * 0000000140C6E8C9: test    ecx, ecx
 * 0000000140C6E8CB: jz      short loc_140C6E8DC
 * 0000000140C6E8CD: mov     edx, 0FFFFFFFFh
 * 0000000140C6E8D2: mov     [rax], r12b
 * 0000000140C6E8D5: add     rax, r10
 * 0000000140C6E8D8: add     ecx, edx
 * 0000000140C6E8DA: jnz     short loc_140C6E8D2
 * 0000000140C6E8DC: mov     [r14], r12d
 * 0000000140C6E8DF: lea     rcx, [r15+r13]
 * 0000000140C6E8E3: mov     [r14+8], r15
 * 0000000140C6E8E7: mov     r9, r15
 * 0000000140C6E8EA: mov     [r14+10h], r13d
 * 0000000140C6E8EE: mov     rax, r15
 * 0000000140C6E8F1: add     [rbx+848h], r13d
 * 0000000140C6E8F8: mov     r11d, [rbx+834h]
 * 0000000140C6E8FF: mov     r12, [rbx+838h]
 * 0000000140C6E906: cmp     r15, rcx
 * 0000000140C6E909: jnb     short loc_140C6E91B
 * 0000000140C6E90B: mov     edx, 40h ; '@'
 * 0000000140C6E910: prefetchnta byte ptr [rax]
 * 0000000140C6E913: add     rax, rdx
 * 0000000140C6E916: cmp     rax, rcx
 * 0000000140C6E919: jb      short loc_140C6E910
 * 0000000140C6E91B: mov     r10d, r13d
 * 0000000140C6E91E: mov     r8, r12
 * 0000000140C6E921: shr     r10d, 7
 * 0000000140C6E925: test    r10d, r10d
 * 0000000140C6E928: jz      short loc_140C6E99F
 * 0000000140C6E92A: mov     ebx, 1
 * 0000000140C6E92F: mov     rdi, 7010008004002001h
 * 0000000140C6E939: mov     r13d, 0FFFFFFFFh
 * 0000000140C6E93F: mov     eax, 8
 * 0000000140C6E944: xor     r8, [r9]
 * 0000000140C6E947: mov     ecx, r11d
 * 0000000140C6E94A: rol     r8, cl
 * 0000000140C6E94D: xor     r8, [r9+8]
 * 0000000140C6E951: add     r9, 10h
 * 0000000140C6E955: rol     r8, cl
 * 0000000140C6E958: sub     rax, rbx
 * 0000000140C6E95B: jnz     short loc_140C6E944
 * 0000000140C6E95D: mov     rcx, r9
 * 0000000140C6E960: sub     rcx, r15
 * 0000000140C6E963: xor     rcx, r12
 * 0000000140C6E966: mov     rax, rcx
 * 0000000140C6E969: rol     rax, 11h
 * 0000000140C6E96D: xor     rcx, rax
 * 0000000140C6E970: mov     rax, rdi
 * 0000000140C6E973: mul     rcx
 * 0000000140C6E976: mov     [rbp+7B0h+var_458], rdx
 * 0000000140C6E97D: xor     rdx, rax
 * 0000000140C6E980: xor     r11d, edx
 * 0000000140C6E983: and     r11d, 3Fh
 * 0000000140C6E987: cmovz   r11d, ebx
 * 0000000140C6E98B: add     r10d, r13d
 * 0000000140C6E98E: jnz     short loc_140C6E93F
 * 0000000140C6E990: mov     rbx, [rsp+8B0h+var_858]
 * 0000000140C6E995: mov     r13d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6E99A: mov     rdi, [rsp+8B0h+var_840]
 * 0000000140C6E99F: mov     edx, r13d
 * 0000000140C6E9A2: mov     r10d, 1
 * 0000000140C6E9A8: and     edx, 7Fh
 * 0000000140C6E9AB: cmp     edx, 8
 * 0000000140C6E9AE: jb      short loc_140C6E9CB
 * 0000000140C6E9B0: mov     eax, edx
 * 0000000140C6E9B2: shr     rax, 3
 * 0000000140C6E9B6: xor     r8, [r9]
 * 0000000140C6E9B9: mov     ecx, r11d
 * 0000000140C6E9BC: rol     r8, cl
 * 0000000140C6E9BF: add     r9, 8
 * 0000000140C6E9C3: add     edx, 0FFFFFFF8h
 * 0000000140C6E9C6: sub     rax, r10
 * 0000000140C6E9C9: jnz     short loc_140C6E9B6
 * 0000000140C6E9CB: xor     r12d, r12d
 * 0000000140C6E9CE: test    edx, edx
 * 0000000140C6E9D0: jz      short loc_140C6E9F0
 * 0000000140C6E9D2: mov     ebx, 0FFFFFFFFh
 * 0000000140C6E9D7: movzx   eax, byte ptr [r9]
 * 0000000140C6E9DB: mov     ecx, r11d
 * 0000000140C6E9DE: xor     r8, rax
 * 0000000140C6E9E1: add     r9, r10
 * 0000000140C6E9E4: rol     r8, cl
 * 0000000140C6E9E7: add     edx, ebx
 * 0000000140C6E9E9: jnz     short loc_140C6E9D7
 * 0000000140C6E9EB: mov     rbx, [rsp+8B0h+var_858]
 * 0000000140C6E9F0: mov     rax, r8
 * 0000000140C6E9F3: jmp     short loc_140C6E9F8
 * 0000000140C6E9F5: xor     r8d, eax
 * 0000000140C6E9F8: shr     rax, 1Fh
 * 0000000140C6E9FC: test    rax, rax
 * 0000000140C6E9FF: jnz     short loc_140C6E9F5
 * 0000000140C6EA01: btr     r8d, 1Fh
 * 0000000140C6EA06: add     rdi, 8
 * 0000000140C6EA0A: mov     [r14+14h], r8d
 * 0000000140C6EA0E: add     rsi, 4
 * 0000000140C6EA12: add     [rbx+848h], r13d
 * 0000000140C6EA19: mov     eax, 6
 * 0000000140C6EA1E: mov     r14, [rbp+7B0h+var_660]
 * 0000000140C6EA25: add     r14, 30h ; '0'
 * 0000000140C6EA29: mov     [rsp+8B0h+var_840], rdi
 * 0000000140C6EA2E: sub     [rbp+7B0h+var_7D0], r10
 * 0000000140C6EA32: mov     [rbp+7B0h+var_660], r14
 * 0000000140C6EA39: jnz     loc_140C6E8A4
 * 0000000140C6EA3F: mov     rbx, [rbp+7B0h+var_778]
 * 0000000140C6EA43: lea     edi, [rax-4]
 * 0000000140C6EA46: mov     r13, [rbp+7B0h+var_810]
 * 0000000140C6EA4A: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C6EA4E: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6EA53: mov     dword ptr [rbx], 2Ch ; ','
 * 0000000140C6EA59: mov     [rbx+18h], r15
 * 0000000140C6EA5D: test    dword ptr [r13+9D8h], 8100000h
 * 0000000140C6EA68: jnz     short loc_140C6EA8C
 * 0000000140C6EA6A: bt      dword ptr [r13+9DCh], 0Fh
 * 0000000140C6EA73: jnb     short loc_140C6EA8C
 * 0000000140C6EA75: or      [rbx+20h], r10d
 * 0000000140C6EA79: mov     rdx, r15
 * 0000000140C6EA7C: mov     rcx, r13
 * 0000000140C6EA7F: call    sub_140C7F9D0
 * 0000000140C6EA84: test    eax, eax
 * 0000000140C6EA86: jz      short loc_140C6EA8C
 * 0000000140C6EA88: or      dword ptr [rbx+20h], 4
 * 0000000140C6EA8C: mov     r8d, [rbp+7B0h+var_830]
 * 0000000140C6EA90: lea     rax, [rbp+7B0h+var_7F8]
 * 0000000140C6EA94: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C6EA98: lea     rcx, [rbp+7B0h+var_790]
 * 0000000140C6EA9C: mov     [rsp+8B0h+var_880], rax
 * 0000000140C6EAA1: mov     r9, r15
 * 0000000140C6EAA4: lea     rax, [rbp+7B0h+var_7C4]
 * 0000000140C6EAA8: mov     [rbp+7B0h+var_790], r13
 * 0000000140C6EAAC: mov     [rsp+8B0h+var_888], rax
 * 0000000140C6EAB1: mov     dword ptr [rsp+8B0h+BugCheckParameter4], 9
 * 0000000140C6EAB9: mov     [rbp+7B0h+var_7D0], r13
 * 0000000140C6EABD: call    sub_140C7CE10
 * 0000000140C6EAC2: mov     ecx, eax
 * 0000000140C6EAC4: test    eax, eax
 * 0000000140C6EAC6: js      loc_140C7047D
 * 0000000140C6EACC: mov     rcx, [rbp+7B0h+var_778]
 * 0000000140C6EAD0: mov     rbx, [rbp+7B0h+var_790]
 * 0000000140C6EAD4: mov     r9d, [rbp+7B0h+var_7F8]
 * 0000000140C6EAD8: mov     rax, rbx
 * 0000000140C6EADB: sub     r9d, [rbp+7B0h+var_7C4]
 * 0000000140C6EADF: sub     rax, r13
 * 0000000140C6EAE2: mov     r14d, [rbp+7B0h+var_7C4]
 * 0000000140C6EAE6: add     rcx, rax
 * 0000000140C6EAE9: mov     [rbp+7B0h+var_778], rcx
 * 0000000140C6EAED: add     r14, r15
 * 0000000140C6EAF0: lea     r13, [rcx+0C0h]
 * 0000000140C6EAF7: mov     ecx, 30h ; '0'
 * 0000000140C6EAFC: mov     [rsp+8B0h+var_858], r13
 * 0000000140C6EB01: mov     rax, r13
 * 0000000140C6EB04: lea     edx, [rcx-2Ah]
 * 0000000140C6EB07: lea     r8d, [rcx-2Fh]
 * 0000000140C6EB0B: mov     [rax], r12
 * 0000000140C6EB0E: add     ecx, 0FFFFFFF8h
 * 0000000140C6EB11: add     rax, 8
 * 0000000140C6EB15: sub     rdx, r8
 * 0000000140C6EB18: jnz     short loc_140C6EB0B
 * 0000000140C6EB1A: test    ecx, ecx
 * 0000000140C6EB1C: jz      short loc_140C6EB2D
 * 0000000140C6EB1E: mov     edx, 0FFFFFFFFh
 * 0000000140C6EB23: mov     [rax], r12b
 * 0000000140C6EB26: add     rax, r8
 * 0000000140C6EB29: add     ecx, edx
 * 0000000140C6EB2B: jnz     short loc_140C6EB23
 * 0000000140C6EB2D: mov     [r13+0], r12d
 * 0000000140C6EB31: mov     r10, r14
 * 0000000140C6EB34: mov     [r13+8], r14
 * 0000000140C6EB38: mov     rax, r14
 * 0000000140C6EB3B: mov     [r13+10h], r9d
 * 0000000140C6EB3F: add     [rbx+848h], r9d
 * 0000000140C6EB46: mov     r15d, [rbx+834h]
 * 0000000140C6EB4D: mov     r12, [rbx+838h]
 * 0000000140C6EB54: mov     ecx, r9d
 * 0000000140C6EB57: add     rcx, r14
 * 0000000140C6EB5A: cmp     r14, rcx
 * 0000000140C6EB5D: jnb     short loc_140C6EB6F
 * 0000000140C6EB5F: mov     edx, 40h ; '@'
 * 0000000140C6EB64: prefetchnta byte ptr [rax]
 * 0000000140C6EB67: add     rax, rdx
 * 0000000140C6EB6A: cmp     rax, rcx
 * 0000000140C6EB6D: jb      short loc_140C6EB64
 * 0000000140C6EB6F: mov     r11d, r9d
 * 0000000140C6EB72: mov     r8, r12
 * 0000000140C6EB75: shr     r11d, 7
 * 0000000140C6EB79: test    r11d, r11d
 * 0000000140C6EB7C: jz      short loc_140C6EBF1
 * 0000000140C6EB7E: mov     edi, 1
 * 0000000140C6EB83: mov     esi, 0FFFFFFFFh
 * 0000000140C6EB88: mov     r13, 7010008004002001h
 * 0000000140C6EB92: mov     eax, 8
 * 0000000140C6EB97: xor     r8, [r10]
 * 0000000140C6EB9A: mov     ecx, r15d
 * 0000000140C6EB9D: rol     r8, cl
 * 0000000140C6EBA0: xor     r8, [r10+8]
 * 0000000140C6EBA4: add     r10, 10h
 * 0000000140C6EBA8: rol     r8, cl
 * 0000000140C6EBAB: sub     rax, rdi
 * 0000000140C6EBAE: jnz     short loc_140C6EB97
 * 0000000140C6EBB0: mov     rcx, r10
 * 0000000140C6EBB3: sub     rcx, r14
 * 0000000140C6EBB6: xor     rcx, r12
 * 0000000140C6EBB9: mov     rax, rcx
 * 0000000140C6EBBC: rol     rax, 11h
 * 0000000140C6EBC0: xor     rcx, rax
 * 0000000140C6EBC3: mov     rax, r13
 * 0000000140C6EBC6: mul     rcx
 * 0000000140C6EBC9: mov     [rbp+7B0h+var_450], rdx
 * 0000000140C6EBD0: xor     rdx, rax
 * 0000000140C6EBD3: xor     r15d, edx
 * 0000000140C6EBD6: and     r15d, 3Fh
 * 0000000140C6EBDA: cmovz   r15d, edi
 * 0000000140C6EBDE: add     r11d, esi
 * 0000000140C6EBE1: jnz     short loc_140C6EB92
 * 0000000140C6EBE3: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6EBE8: lea     edi, [r11+2]
 * 0000000140C6EBEC: mov     r13, [rsp+8B0h+var_858]
 * 0000000140C6EBF1: and     r9d, 7Fh
 * 0000000140C6EBF5: mov     r12d, 1
 * 0000000140C6EBFB: cmp     r9d, 8
 * 0000000140C6EBFF: jb      short loc_140C6EC1E
 * 0000000140C6EC01: mov     eax, r9d
 * 0000000140C6EC04: shr     rax, 3
 * 0000000140C6EC08: xor     r8, [r10]
 * 0000000140C6EC0B: mov     ecx, r15d
 * 0000000140C6EC0E: rol     r8, cl
 * 0000000140C6EC11: add     r10, 8
 * 0000000140C6EC15: add     r9d, 0FFFFFFF8h
 * 0000000140C6EC19: sub     rax, r12
 * 0000000140C6EC1C: jnz     short loc_140C6EC08
 * 0000000140C6EC1E: test    r9d, r9d
 * 0000000140C6EC21: jz      short loc_140C6EC41
 * 0000000140C6EC23: mov     edi, 0FFFFFFFFh
 * 0000000140C6EC28: movzx   eax, byte ptr [r10]
 * 0000000140C6EC2C: mov     ecx, r15d
 * 0000000140C6EC2F: xor     r8, rax
 * 0000000140C6EC32: add     r10, r12
 * 0000000140C6EC35: rol     r8, cl
 * 0000000140C6EC38: add     r9d, edi
 * 0000000140C6EC3B: jnz     short loc_140C6EC28
 * 0000000140C6EC3D: lea     edi, [r9+2]
 * 0000000140C6EC41: mov     rax, r8
 * 0000000140C6EC44: shr     rax, 1Fh
 * 0000000140C6EC48: xor     r10d, r10d
 * 0000000140C6EC4B: jmp     short loc_140C6EC54
 * 0000000140C6EC4D: xor     r8d, eax
 * 0000000140C6EC50: shr     rax, 1Fh
 * 0000000140C6EC54: test    rax, rax
 * 0000000140C6EC57: jnz     short loc_140C6EC4D
 * 0000000140C6EC59: btr     r8d, 1Fh
 * 0000000140C6EC5E: mov     [rbp+7B0h+var_810], rbx
 * 0000000140C6EC62: mov     [r13+14h], r8d
 * 0000000140C6EC66: mov     r13, rbx
 * 0000000140C6EC69: mov     rax, [rbp+7B0h+var_778]
 * 0000000140C6EC6D: mov     [rbp+7B0h+var_7D0], rbx
 * 0000000140C6EC71: mov     dword ptr [rax+0F0h], 30h ; '0'
 * 0000000140C6EC7B: mov     rax, [rbp+7B0h+var_778]
 * 0000000140C6EC7F: add     rax, 60h ; '`'
 * 0000000140C6EC83: mov     [rbp+7B0h+var_710], rax
 * 0000000140C6EC8A: jnz     loc_140C6EF28
 * 0000000140C6EC90: mov     r15d, [rbx+804h]
 * 0000000140C6EC97: mov     r8d, [rbx+944h]
 * 0000000140C6EC9E: lea     eax, [r15+30h]
 * 0000000140C6ECA2: cmp     eax, [rbx+0A64h]
 * 0000000140C6ECA8: jbe     loc_140C6ED85
 * 0000000140C6ECAE: mov     edx, eax
 * 0000000140C6ECB0: mov     rcx, rbx
 * 0000000140C6ECB3: call    sub_140C7E7A8
 * 0000000140C6ECB8: xor     r10d, r10d
 * 0000000140C6ECBB: mov     r14, rax
 * 0000000140C6ECBE: test    rax, rax
 * 0000000140C6ECC1: jz      loc_140C6EDA4
 * 0000000140C6ECC7: mov     ecx, [rbx+9D8h]
 * 0000000140C6ECCD: test    dil, cl
 * 0000000140C6ECD0: jnz     loc_140C6ED7B
 * 0000000140C6ECD6: mov     eax, [rbx+804h]
 * 0000000140C6ECDC: and     ecx, 10000000h
 * 0000000140C6ECE2: mov     r8, [rbx+7E8h]
 * 0000000140C6ECE9: neg     ecx
 * 0000000140C6ECEB: sbb     edx, edx
 * 0000000140C6ECED: and     edx, [rbx+944h]
 * 0000000140C6ECF3: cmp     eax, 8
 * 0000000140C6ECF6: jb      short loc_140C6ED0D
 * 0000000140C6ECF8: mov     ecx, eax
 * 0000000140C6ECFA: shr     rcx, 3
 * 0000000140C6ECFE: mov     [rbx], r10
 * 0000000140C6ED01: add     eax, 0FFFFFFF8h
 * 0000000140C6ED04: add     rbx, 8
 * 0000000140C6ED08: sub     rcx, r12
 * 0000000140C6ED0B: jnz     short loc_140C6ECFE
 * 0000000140C6ED0D: test    eax, eax
 * 0000000140C6ED0F: jz      short loc_140C6ED20
 * 0000000140C6ED11: mov     ecx, 0FFFFFFFFh
 * 0000000140C6ED16: mov     [rbx], r10b
 * 0000000140C6ED19: add     rbx, r12
 * 0000000140C6ED1C: add     eax, ecx
 * 0000000140C6ED1E: jnz     short loc_140C6ED16
 * 0000000140C6ED20: mov     ebx, [r14+944h]
 * 0000000140C6ED27: mov     [r14+944h], edx
 * 0000000140C6ED2E: cmp     edx, 3
 * 0000000140C6ED31: jz      short loc_140C6ED62
 * 0000000140C6ED33: test    dword ptr [r14+9D8h], 8000000h
 * 0000000140C6ED3E: jnz     short loc_140C6ED59
 * 0000000140C6ED40: test    edx, edx
 * 0000000140C6ED42: jz      short loc_140C6ED59
 * 0000000140C6ED44: mov     rax, [r14+238h]
 * 0000000140C6ED4B: lea     rcx, [r8-8]
 * 0000000140C6ED4F: mov     rdx, [rcx]
 * 0000000140C6ED52: call    KeGuardDispatchICall
 * 0000000140C6ED57: jmp     short loc_140C6ED71
 * 0000000140C6ED59: mov     rax, [r14+108h]
 * 0000000140C6ED60: jmp     short loc_140C6ED69
 * 0000000140C6ED62: mov     rax, [r14+370h]
 * 0000000140C6ED69: mov     rcx, r8
 * 0000000140C6ED6C: call    KeGuardDispatchICall
 * 0000000140C6ED71: mov     [r14+944h], ebx
 * 0000000140C6ED78: xor     r10d, r10d
 * 0000000140C6ED7B: and     dword ptr [r14+9D8h], 0FFFFFFFDh
 * 0000000140C6ED83: jmp     short loc_140C6ED8E
 * 0000000140C6ED85: mov     r14, rbx
 * 0000000140C6ED88: mov     [rbx+804h], eax
 * 0000000140C6ED8E: add     [r14+82Ch], r12d
 * 0000000140C6ED95: add     r15, r14
 * 0000000140C6ED98: mov     [rbp+7B0h+var_5A8], r15
 * 0000000140C6ED9F: test    r14, r14
 * 0000000140C6EDA2: jnz     short loc_140C6EDAD
 * 0000000140C6EDA4: mov     [rbp+7B0h+var_790], r10
 * 0000000140C6EDA8: jmp     loc_140C6E875
 * 0000000140C6EDAD: mov     ecx, 30h ; '0'
 * 0000000140C6EDB2: mov     rax, r15
 * 0000000140C6EDB5: lea     edx, [rcx-2Ah]
 * 0000000140C6EDB8: mov     [rax], r10
 * 0000000140C6EDBB: add     ecx, 0FFFFFFF8h
 * 0000000140C6EDBE: add     rax, 8
 * 0000000140C6EDC2: sub     rdx, r12
 * 0000000140C6EDC5: jnz     short loc_140C6EDB8
 * 0000000140C6EDC7: test    ecx, ecx
 * 0000000140C6EDC9: jz      short loc_140C6EDDA
 * 0000000140C6EDCB: mov     edx, 0FFFFFFFFh
 * 0000000140C6EDD0: mov     [rax], r10b
 * 0000000140C6EDD3: add     rax, r12
 * 0000000140C6EDD6: add     ecx, edx
 * 0000000140C6EDD8: jnz     short loc_140C6EDD0
 * 0000000140C6EDDA: mov     r13, [rbp+7B0h+var_828]
 * 0000000140C6EDDE: mov     r12d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6EDE5: mov     r9, r13
 * 0000000140C6EDE8: mov     dword ptr [r15], 0Dh
 * 0000000140C6EDEF: mov     [r15+8], r13
 * 0000000140C6EDF3: mov     [r15+10h], r12d
 * 0000000140C6EDF7: add     [r14+848h], r12d
 * 0000000140C6EDFE: lea     rcx, [r12+r13]
 * 0000000140C6EE02: mov     r11d, [r14+834h]
 * 0000000140C6EE09: mov     rbx, [r14+838h]
 * 0000000140C6EE10: cmp     r13, rcx
 * 0000000140C6EE13: jnb     short loc_140C6EE28
 * 0000000140C6EE15: mov     rax, r13
 * 0000000140C6EE18: mov     edx, 40h ; '@'
 * 0000000140C6EE1D: prefetchnta byte ptr [rax]
 * 0000000140C6EE20: add     rax, rdx
 * 0000000140C6EE23: cmp     rax, rcx
 * 0000000140C6EE26: jb      short loc_140C6EE1D
 * 0000000140C6EE28: mov     r10d, r12d
 * 0000000140C6EE2B: mov     r8, rbx
 * 0000000140C6EE2E: shr     r10d, 7
 * 0000000140C6EE32: test    r10d, r10d
 * 0000000140C6EE35: jz      short loc_140C6EEAC
 * 0000000140C6EE37: mov     edi, 1
 * 0000000140C6EE3C: mov     esi, 0FFFFFFFFh
 * 0000000140C6EE41: mov     r12, 7010008004002001h
 * 0000000140C6EE4B: mov     eax, 8
 * 0000000140C6EE50: xor     r8, [r9]
 * 0000000140C6EE53: mov     ecx, r11d
 * 0000000140C6EE56: rol     r8, cl
 * 0000000140C6EE59: xor     r8, [r9+8]
 * 0000000140C6EE5D: add     r9, 10h
 * 0000000140C6EE61: rol     r8, cl
 * 0000000140C6EE64: sub     rax, rdi
 * 0000000140C6EE67: jnz     short loc_140C6EE50
 * 0000000140C6EE69: mov     rcx, r9
 * 0000000140C6EE6C: sub     rcx, r13
 * 0000000140C6EE6F: xor     rcx, rbx
 * 0000000140C6EE72: mov     rax, rcx
 * 0000000140C6EE75: rol     rax, 11h
 * 0000000140C6EE79: xor     rcx, rax
 * 0000000140C6EE7C: mov     rax, r12
 * 0000000140C6EE7F: mul     rcx
 * 0000000140C6EE82: mov     [rbp+7B0h+var_448], rdx
 * 0000000140C6EE89: xor     rdx, rax
 * 0000000140C6EE8C: xor     r11d, edx
 * 0000000140C6EE8F: and     r11d, 3Fh
 * 0000000140C6EE93: cmovz   r11d, edi
 * 0000000140C6EE97: add     r10d, esi
 * 0000000140C6EE9A: jnz     short loc_140C6EE4B
 * 0000000140C6EE9C: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6EEA1: lea     edi, [r10+2]
 * 0000000140C6EEA5: mov     r12d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6EEAC: mov     edx, r12d
 * 0000000140C6EEAF: mov     ebx, 1
 * 0000000140C6EEB4: and     edx, 7Fh
 * 0000000140C6EEB7: cmp     edx, 8
 * 0000000140C6EEBA: jb      short loc_140C6EED7
 * 0000000140C6EEBC: mov     eax, edx
 * 0000000140C6EEBE: shr     rax, 3
 * 0000000140C6EEC2: xor     r8, [r9]
 * 0000000140C6EEC5: mov     ecx, r11d
 * 0000000140C6EEC8: rol     r8, cl
 * 0000000140C6EECB: add     r9, 8
 * 0000000140C6EECF: add     edx, 0FFFFFFF8h
 * 0000000140C6EED2: sub     rax, rbx
 * 0000000140C6EED5: jnz     short loc_140C6EEC2
 * 0000000140C6EED7: test    edx, edx
 * 0000000140C6EED9: jz      short loc_140C6EEF7
 * 0000000140C6EEDB: mov     edi, 0FFFFFFFFh
 * 0000000140C6EEE0: movzx   eax, byte ptr [r9]
 * 0000000140C6EEE4: mov     ecx, r11d
 * 0000000140C6EEE7: xor     r8, rax
 * 0000000140C6EEEA: add     r9, rbx
 * 0000000140C6EEED: rol     r8, cl
 * 0000000140C6EEF0: add     edx, edi
 * 0000000140C6EEF2: jnz     short loc_140C6EEE0
 * 0000000140C6EEF4: lea     edi, [rdx+2]
 * 0000000140C6EEF7: mov     rax, r8
 * 0000000140C6EEFA: jmp     short loc_140C6EEFF
 * 0000000140C6EEFC: xor     r8d, eax
 * 0000000140C6EEFF: shr     rax, 1Fh
 * 0000000140C6EF03: test    rax, rax
 * 0000000140C6EF06: jnz     short loc_140C6EEFC
 * 0000000140C6EF08: btr     r8d, 1Fh
 * 0000000140C6EF0D: mov     [r15+14h], r8d
 * 0000000140C6EF11: mov     rax, [rbp+7B0h+var_5A8]
 * 0000000140C6EF18: mov     [rbp+7B0h+var_710], rax
 * 0000000140C6EF1F: add     [r14+848h], r12d
 * 0000000140C6EF26: jmp     short loc_140C6EF3C
 * 0000000140C6EF28: mov     r12d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6EF2F: mov     r14, rbx
 * 0000000140C6EF32: mov     r13, [rbp+7B0h+var_828]
 * 0000000140C6EF36: mov     dword ptr [rax], 0Dh
 * 0000000140C6EF3C: test    dword ptr [r14+9D8h], 20000000h
 * 0000000140C6EF47: jz      short loc_140C6EF67
 * 0000000140C6EF49: test    r12d, r12d
 * 0000000140C6EF4C: jz      short loc_140C6EF67
 * 0000000140C6EF4E: mov     r9, [rbp+7B0h+var_710]
 * 0000000140C6EF55: mov     r8d, r12d
 * 0000000140C6EF58: add     r9, 1Ch
 * 0000000140C6EF5C: mov     rdx, r13
 * 0000000140C6EF5F: mov     rcx, r14
 * 0000000140C6EF62: call    sub_140553D6C
 * 0000000140C6EF67: mov     rax, [rbp+7B0h+var_710]
 * 0000000140C6EF6E: xor     ecx, ecx
 * 0000000140C6EF70: mov     [rbp+7B0h+var_790], r14
 * 0000000140C6EF74: mov     [rax+18h], ecx
 * 0000000140C6EF77: lea     edx, [rcx+1]
 * 0000000140C6EF7A: mov     rax, [rbp+7B0h+var_710]
 * 0000000140C6EF81: or      [rax+18h], edx
 * 0000000140C6EF84: test    r14, r14
 * 0000000140C6EF87: jnz     short loc_140C6EF92
 * 0000000140C6EF89: mov     r13, [rbp+7B0h+var_810]
 * 0000000140C6EF8D: jmp     loc_140C6E875
 * 0000000140C6EF92: mov     rbx, [rbp+7B0h+var_778]
 * 0000000140C6EF96: mov     r13, r14
 * 0000000140C6EF99: mov     [rbp+7B0h+var_7D0], r14
 * 0000000140C6EF9D: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140C6EFA7: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140C6EFB1: jb      loc_140C6F040
 * 0000000140C6EFB7: mov     r12, [rbp+7B0h+var_7F0]
 * 0000000140C6EFBB: mov     rax, [r14+208h]
 * 0000000140C6EFC2: mov     rcx, r12
 * 0000000140C6EFC5: mov     r15, [rbx+98h]
 * 0000000140C6EFCC: call    KeGuardDispatchICall
 * 0000000140C6EFD1: xor     ecx, ecx
 * 0000000140C6EFD3: test    rax, rax
 * 0000000140C6EFD6: jnz     short loc_140C6EFE1
 * 0000000140C6EFD8: mov     [rbp+7B0h+var_790], rcx
 * 0000000140C6EFDC: jmp     loc_140C6E875
 * 0000000140C6EFE1: mov     r8d, [rax+50h]
 * 0000000140C6EFE5: mov     edx, [rbx+0B8h]
 * 0000000140C6EFEB: add     r8, r12
 * 0000000140C6EFEE: or      edx, edi
 * 0000000140C6EFF0: mov     [rbx+0B8h], edx
 * 0000000140C6EFF6: mov     ecx, edx
 * 0000000140C6EFF8: mov     rax, [r15+70h]
 * 0000000140C6EFFC: cmp     rax, r12
 * 0000000140C6EFFF: jb      short loc_140C6F019
 * 0000000140C6F001: cmp     rax, r8
 * 0000000140C6F004: jnb     short loc_140C6F019
 * 0000000140C6F006: mov     rax, [rax]
 * 0000000140C6F009: or      ecx, 4
 * 0000000140C6F00C: mov     [rbx+0A8h], rax
 * 0000000140C6F013: mov     [rbx+0B8h], ecx
 * 0000000140C6F019: mov     rax, [r15+78h]
 * 0000000140C6F01D: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C6F021: cmp     rax, r15
 * 0000000140C6F024: jb      short loc_140C6F044
 * 0000000140C6F026: cmp     rax, r8
 * 0000000140C6F029: jnb     short loc_140C6F044
 * 0000000140C6F02B: mov     rax, [rax]
 * 0000000140C6F02E: or      ecx, 8
 * 0000000140C6F031: mov     [rbx+0B0h], rax
 * 0000000140C6F038: mov     [rbx+0B8h], ecx
 * 0000000140C6F03E: jmp     short loc_140C6F044
 * 0000000140C6F040: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C6F044: bt      dword ptr [r14+9D8h], 15h
 * 0000000140C6F04D: mov     [rbp+7B0h+var_810], r13
 * 0000000140C6F051: mov     [rbp+7B0h+var_7D0], r13
 * 0000000140C6F055: jnb     loc_140C70470
 * 0000000140C6F05B: mov     rax, [r14+208h]
 * 0000000140C6F062: mov     rcx, r15
 * 0000000140C6F065: call    KeGuardDispatchICall
 * 0000000140C6F06A: xor     r8d, r8d
 * 0000000140C6F06D: mov     [rsp+8B0h+var_840], rax
 * 0000000140C6F072: mov     r12, rax
 * 0000000140C6F075: test    rax, rax
 * 0000000140C6F078: jz      loc_140C6E709
 * 0000000140C6F07E: movzx   r10d, word ptr [r12+6]
 * 0000000140C6F084: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C6F08E: mov     ecx, [rbp+7B0h+var_830]
 * 0000000140C6F091: mul     rcx
 * 0000000140C6F094: mov     word ptr [rbp+7B0h+arg_8], r10w
 * 0000000140C6F09C: mov     r9, rdx
 * 0000000140C6F09F: shr     r9, 3
 * 0000000140C6F0A3: mov     [rsp+8B0h+var_858], r9
 * 0000000140C6F0A8: test    r10w, r10w
 * 0000000140C6F0AC: jnz     loc_140C6F1D3
 * 0000000140C6F0B2: mov     ecx, [r14+9D8h]
 * 0000000140C6F0B9: bt      ecx, 14h
 * 0000000140C6F0BD: jnb     loc_140C7A256
 * 0000000140C6F0C3: xor     r12d, r12d
 * 0000000140C6F0C6: cmp     [r14+918h], r12d
 * 0000000140C6F0CD: jnz     loc_140C6E709
 * 0000000140C6F0D3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F0DD: lea     edx, [r8+1]
 * 0000000140C6F0E1: add     rax, r13
 * 0000000140C6F0E4: mov     [r14+920h], rax
 * 0000000140C6F0EB: mov     [r14+928h], r12
 * 0000000140C6F0F2: mov     qword ptr [r14+930h], 10Fh
 * 0000000140C6F0FD: mov     [r14+938h], r15
 * 0000000140C6F104: mov     [r14+918h], edx
 * 0000000140C6F10B: bt      ecx, 1Dh
 * 0000000140C6F10F: jb      loc_140C6E709
 * 0000000140C6F115: bt      dword ptr [r14+9DCh], 15h
 * 0000000140C6F11E: jnb     loc_140C6E709
 * 0000000140C6F124: test    dl, cl
 * 0000000140C6F126: jz      loc_140C6E709
 * 0000000140C6F12C: mov     ecx, [r14+0A74h]
 * 0000000140C6F133: mov     r10, r13
 * 0000000140C6F136: mov     eax, [r14+804h]
 * 0000000140C6F13D: mov     r11, [r14+838h]
 * 0000000140C6F144: sub     eax, ecx
 * 0000000140C6F146: mov     r8, [r14+0A78h]
 * 0000000140C6F14D: lea     rdx, [rcx+r14]
 * 0000000140C6F151: mov     ecx, eax
 * 0000000140C6F153: shr     rcx, 3
 * 0000000140C6F157: lea     r9, [rdx+rcx*8]
 * 0000000140C6F15B: jmp     short loc_140C6F17E
 * 0000000140C6F15D: xor     [rdx], r8
 * 0000000140C6F160: mov     rax, [rdx]
 * 0000000140C6F163: movzx   ecx, r8b
 * 0000000140C6F167: xor     rax, r11
 * 0000000140C6F16A: and     ecx, 3Fh
 * 0000000140C6F16D: ror     r8, cl
 * 0000000140C6F170: add     r8, rax
 * 0000000140C6F173: xor     r8, 0F05h
 * 0000000140C6F17A: add     rdx, 8
 * 0000000140C6F17E: cmp     rdx, r9
 * 0000000140C6F181: jnz     short loc_140C6F15D
 * 0000000140C6F183: btr     dword ptr [r10+9DCh], 15h
 * 0000000140C6F18C: cmp     r8, [r10+0A80h]
 * 0000000140C6F193: jz      loc_140C6E709
 * 0000000140C6F199: mov     ecx, [r10+804h]
 * 0000000140C6F1A0: mov     rax, [r10+588h]
 * 0000000140C6F1A7: mov     [rax], r10
 * 0000000140C6F1AA: mov     [rax+10h], ecx
 * 0000000140C6F1AD: mov     rcx, [r10+0A80h]
 * 0000000140C6F1B4: cmp     [r10+918h], r12d
 * 0000000140C6F1BB: jnz     short loc_140C6F1CB
 * 0000000140C6F1BD: mov     rax, [r10+588h]
 * 0000000140C6F1C4: xor     rcx, r8
 * 0000000140C6F1C7: mov     [rax+18h], rcx
 * 0000000140C6F1CB: mov     rcx, r10
 * 0000000140C6F1CE: jmp     loc_140C6E6FC
 * 0000000140C6F1D3: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C6F1D7: movzx   r11d, word ptr [r12+14h]
 * 0000000140C6F1DD: mov     r13, rdx
 * 0000000140C6F1E0: mov     eax, r9d
 * 0000000140C6F1E3: add     r11, 18h
 * 0000000140C6F1E7: add     r11, r12
 * 0000000140C6F1EA: mov     [rbp+7B0h+var_7B8], r11
 * 0000000140C6F1EE: lea     rcx, [rax+rax*2]
 * 0000000140C6F1F2: lea     rax, [rdx+rcx*4]
 * 0000000140C6F1F6: mov     rdx, [rbp+7B0h+var_810]
 * 0000000140C6F1FA: mov     [rbp+7B0h+var_808], rax
 * 0000000140C6F1FE: mov     ecx, r8d
 * 0000000140C6F201: mov     dword ptr [rsp+8B0h+var_848], ecx
 * 0000000140C6F205: mov     rbx, rdx
 * 0000000140C6F208: test    r10w, r10w
 * 0000000140C6F20C: jz      loc_140C6F7B5
 * 0000000140C6F212: mov     r14, rax
 * 0000000140C6F215: xor     r12d, r12d
 * 0000000140C6F218: mov     eax, ecx
 * 0000000140C6F21A: lea     r8, [rax+rax*4]
 * 0000000140C6F21E: mov     edx, [r11+r8*8+10h]
 * 0000000140C6F223: mov     eax, [r11+r8*8+8]
 * 0000000140C6F228: cmp     edx, eax
 * 0000000140C6F22A: mov     r9d, [r11+r8*8+0Ch]
 * 0000000140C6F22F: cmovbe  edx, eax
 * 0000000140C6F232: mov     [rbp+7B0h+var_828], r8
 * 0000000140C6F236: add     edx, r9d
 * 0000000140C6F239: mov     [rbp+7B0h+var_7F4], r9d
 * 0000000140C6F23D: mov     [rsp+8B0h+var_850], edx
 * 0000000140C6F241: test    ecx, ecx
 * 0000000140C6F243: jz      short loc_140C6F25B
 * 0000000140C6F245: lea     eax, [rcx-1]
 * 0000000140C6F248: lea     rax, [rax+rax*4]
 * 0000000140C6F24C: cmp     edx, [r11+rax*8+0Ch]
 * 0000000140C6F251: jb      loc_140C6F5D2
 * 0000000140C6F257: mov     ecx, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6F25B: cmp     r13, r14
 * 0000000140C6F25E: jz      loc_140C6F5A9
 * 0000000140C6F264: mov     ecx, [r13+0]
 * 0000000140C6F268: mov     eax, [r13+4]
 * 0000000140C6F26C: cmp     ecx, edx
 * 0000000140C6F26E: jnb     loc_140C6F599
 * 0000000140C6F274: cmp     eax, r9d
 * 0000000140C6F277: jbe     loc_140C6F599
 * 0000000140C6F27D: cmp     ecx, r9d
 * 0000000140C6F280: jb      loc_140C6F6F7
 * 0000000140C6F286: cmp     eax, edx
 * 0000000140C6F288: ja      loc_140C6F6F7
 * 0000000140C6F28E: mov     eax, [r13+8]
 * 0000000140C6F292: mov     ecx, 1
 * 0000000140C6F297: mov     [rbp+7B0h+var_440], r13
 * 0000000140C6F29E: test    cl, al
 * 0000000140C6F2A0: jnz     short loc_140C6F2AD
 * 0000000140C6F2A2: test    byte ptr [rax+r15], 20h
 * 0000000140C6F2A7: jz      loc_140C6F58B
 * 0000000140C6F2AD: mov     eax, [r11+r8*8+8]
 * 0000000140C6F2B2: mov     rdx, r15
 * 0000000140C6F2B5: mov     r14d, [r11+r8*8+10h]
 * 0000000140C6F2BA: mov     rcx, r13
 * 0000000140C6F2BD: mov     r12d, [r11+r8*8+0Ch]
 * 0000000140C6F2C2: cmp     r14d, eax
 * 0000000140C6F2C5: cmovbe  r14d, eax
 * 0000000140C6F2C9: mov     rax, [rbx+420h]
 * 0000000140C6F2D0: add     r14d, r12d
 * 0000000140C6F2D3: call    KeGuardDispatchICall
 * 0000000140C6F2D8: mov     r15, rax
 * 0000000140C6F2DB: cmp     [rax], r12d
 * 0000000140C6F2DE: jb      short loc_140C6F2EA
 * 0000000140C6F2E0: cmp     [rax+4], r14d
 * 0000000140C6F2E4: jbe     loc_140C6F419
 * 0000000140C6F2EA: mov     r8, [rbp+7B0h+var_7F0]; BugCheckParameter2
 * 0000000140C6F2EE: mov     ecx, 80000000h
 * 0000000140C6F2F3: sub     eax, r8d
 * 0000000140C6F2F6: or      eax, ecx
 * 0000000140C6F2F8: mov     rcx, [rbp+7B0h+var_810]
 * 0000000140C6F2FC: mov     ecx, [rcx+9D8h]
 * 0000000140C6F302: bt      ecx, 14h
 * 0000000140C6F306: jnb     loc_140C7A2D2
 * 0000000140C6F30C: xor     r11d, r11d
 * 0000000140C6F30F: cmp     [rbx+918h], r11d
 * 0000000140C6F316: jnz     loc_140C6F419
 * 0000000140C6F31C: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F326: lea     edx, [r11+1]
 * 0000000140C6F32A: add     rax, rbx
 * 0000000140C6F32D: mov     [rbx+920h], rax
 * 0000000140C6F334: mov     [rbx+928h], r11
 * 0000000140C6F33B: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6F346: mov     [rbx+938h], r8
 * 0000000140C6F34D: mov     [rbx+918h], edx
 * 0000000140C6F353: bt      ecx, 1Dh
 * 0000000140C6F357: jb      loc_140C6F419
 * 0000000140C6F35D: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C6F367: jz      loc_140C6F419
 * 0000000140C6F36D: test    dl, cl
 * 0000000140C6F36F: jz      loc_140C6F419
 * 0000000140C6F375: mov     ecx, [rbx+0A74h]
 * 0000000140C6F37B: mov     eax, [rbx+804h]
 * 0000000140C6F381: mov     r10, [rbx+838h]
 * 0000000140C6F388: sub     eax, ecx
 * 0000000140C6F38A: mov     r8, [rbx+0A78h]
 * 0000000140C6F391: lea     rdx, [rcx+rbx]
 * 0000000140C6F395: mov     ecx, eax
 * 0000000140C6F397: shr     rcx, 3
 * 0000000140C6F39B: lea     r9, [rdx+rcx*8]
 * 0000000140C6F39F: jmp     short loc_140C6F3C2
 * 0000000140C6F3A1: xor     [rdx], r8
 * 0000000140C6F3A4: mov     rax, [rdx]
 * 0000000140C6F3A7: movzx   ecx, r8b
 * 0000000140C6F3AB: xor     rax, r10
 * 0000000140C6F3AE: and     ecx, 3Fh
 * 0000000140C6F3B1: ror     r8, cl
 * 0000000140C6F3B4: add     r8, rax
 * 0000000140C6F3B7: xor     r8, 0F05h
 * 0000000140C6F3BE: add     rdx, 8
 * 0000000140C6F3C2: cmp     rdx, r9
 * 0000000140C6F3C5: jnz     short loc_140C6F3A1
 * 0000000140C6F3C7: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140C6F3CF: cmp     r8, [rbx+0A80h]
 * 0000000140C6F3D6: jz      short loc_140C6F419
 * 0000000140C6F3D8: mov     ecx, [rbx+804h]
 * 0000000140C6F3DE: mov     rax, [rbx+588h]
 * 0000000140C6F3E5: mov     [rax], rbx
 * 0000000140C6F3E8: mov     [rax+10h], ecx
 * 0000000140C6F3EB: mov     rcx, [rbx+0A80h]
 * 0000000140C6F3F2: cmp     [rbx+918h], r11d
 * 0000000140C6F3F9: jnz     short loc_140C6F409
 * 0000000140C6F3FB: mov     rax, [rbx+588h]
 * 0000000140C6F402: xor     rcx, r8
 * 0000000140C6F405: mov     [rax+18h], rcx
 * 0000000140C6F409: xor     edx, edx
 * 0000000140C6F40B: mov     r9d, 100h
 * 0000000140C6F411: mov     rcx, rbx
 * 0000000140C6F414: call    sub_140C7F03C
 * 0000000140C6F419: mov     r8d, [r15]
 * 0000000140C6F41C: mov     rcx, r15
 * 0000000140C6F41F: add     r8, [rbp+7B0h+var_7F0]
 * 0000000140C6F423: mov     rax, [rbx+428h]
 * 0000000140C6F42A: mov     rdx, [rbp+7B0h+var_7F0]
 * 0000000140C6F42E: call    KeGuardDispatchICall
 * 0000000140C6F433: cmp     [rax], r12d
 * 0000000140C6F436: jb      short loc_140C6F442
 * 0000000140C6F438: cmp     [rax+4], r14d
 * 0000000140C6F43C: jbe     loc_140C6F574
 * 0000000140C6F442: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C6F446: mov     ecx, 80000000h
 * 0000000140C6F44B: sub     eax, r15d
 * 0000000140C6F44E: or      eax, ecx
 * 0000000140C6F450: mov     rcx, [rbp+7B0h+var_810]
 * 0000000140C6F454: mov     ecx, [rcx+9D8h]
 * 0000000140C6F45A: bt      ecx, 14h
 * 0000000140C6F45E: jnb     loc_140C7A2A9
 * 0000000140C6F464: xor     r12d, r12d
 * 0000000140C6F467: cmp     [rbx+918h], r12d
 * 0000000140C6F46E: jnz     loc_140C6F57B
 * 0000000140C6F474: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F47E: lea     edx, [r12+1]
 * 0000000140C6F483: add     rax, rbx
 * 0000000140C6F486: mov     [rbx+920h], rax
 * 0000000140C6F48D: mov     [rbx+928h], r12
 * 0000000140C6F494: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6F49F: mov     [rbx+938h], r15
 * 0000000140C6F4A6: mov     [rbx+918h], edx
 * 0000000140C6F4AC: bt      ecx, 1Dh
 * 0000000140C6F4B0: jb      loc_140C6F57B
 * 0000000140C6F4B6: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C6F4C0: jz      loc_140C6F57B
 * 0000000140C6F4C6: test    dl, cl
 * 0000000140C6F4C8: jz      loc_140C6F57B
 * 0000000140C6F4CE: mov     ecx, [rbx+0A74h]
 * 0000000140C6F4D4: mov     eax, [rbx+804h]
 * 0000000140C6F4DA: mov     r10, [rbx+838h]
 * 0000000140C6F4E1: sub     eax, ecx
 * 0000000140C6F4E3: mov     r8, [rbx+0A78h]
 * 0000000140C6F4EA: lea     rdx, [rcx+rbx]
 * 0000000140C6F4EE: mov     ecx, eax
 * 0000000140C6F4F0: shr     rcx, 3
 * 0000000140C6F4F4: lea     r9, [rdx+rcx*8]
 * 0000000140C6F4F8: jmp     short loc_140C6F51B
 * 0000000140C6F4FA: xor     [rdx], r8
 * 0000000140C6F4FD: mov     rax, [rdx]
 * 0000000140C6F500: movzx   ecx, r8b
 * 0000000140C6F504: xor     rax, r10
 * 0000000140C6F507: and     ecx, 3Fh
 * 0000000140C6F50A: ror     r8, cl
 * 0000000140C6F50D: add     r8, rax
 * 0000000140C6F510: xor     r8, 0F05h
 * 0000000140C6F517: add     rdx, 8
 * 0000000140C6F51B: cmp     rdx, r9
 * 0000000140C6F51E: jnz     short loc_140C6F4FA
 * 0000000140C6F520: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140C6F528: cmp     r8, [rbx+0A80h]
 * 0000000140C6F52F: jz      short loc_140C6F57B
 * 0000000140C6F531: mov     ecx, [rbx+804h]
 * 0000000140C6F537: mov     rax, [rbx+588h]
 * 0000000140C6F53E: mov     [rax], rbx
 * 0000000140C6F541: mov     [rax+10h], ecx
 * 0000000140C6F544: mov     rcx, [rbx+0A80h]
 * 0000000140C6F54B: cmp     [rbx+918h], r12d
 * 0000000140C6F552: jnz     short loc_140C6F562
 * 0000000140C6F554: mov     rax, [rbx+588h]
 * 0000000140C6F55B: xor     rcx, r8
 * 0000000140C6F55E: mov     [rax+18h], rcx
 * 0000000140C6F562: xor     edx, edx
 * 0000000140C6F564: mov     r9d, 100h
 * 0000000140C6F56A: mov     rcx, rbx
 * 0000000140C6F56D: call    sub_140C7F03C
 * 0000000140C6F572: jmp     short loc_140C6F57B
 * 0000000140C6F574: mov     r15, [rbp+7B0h+var_7F0]
 * 0000000140C6F578: xor     r12d, r12d
 * 0000000140C6F57B: mov     edx, [rsp+8B0h+var_850]
 * 0000000140C6F57F: mov     r8, [rbp+7B0h+var_828]
 * 0000000140C6F583: mov     r9d, [rbp+7B0h+var_7F4]
 * 0000000140C6F587: mov     r11, [rbp+7B0h+var_7B8]
 * 0000000140C6F58B: add     r13, 0Ch
 * 0000000140C6F58F: cmp     r13, [rbp+7B0h+var_808]
 * 0000000140C6F593: jnz     loc_140C6F264
 * 0000000140C6F599: mov     ecx, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6F59D: movzx   r10d, word ptr [rbp+7B0h+arg_8]
 * 0000000140C6F5A5: mov     r14, [rbp+7B0h+var_808]
 * 0000000140C6F5A9: mov     edx, 1
 * 0000000140C6F5AE: movzx   eax, r10w
 * 0000000140C6F5B2: add     ecx, edx
 * 0000000140C6F5B4: mov     dword ptr [rsp+8B0h+var_848], ecx
 * 0000000140C6F5B8: cmp     ecx, eax
 * 0000000140C6F5BA: jb      loc_140C6F218
 * 0000000140C6F5C0: mov     r9, [rsp+8B0h+var_858]
 * 0000000140C6F5C5: xor     r8d, r8d
 * 0000000140C6F5C8: mov     r12, [rsp+8B0h+var_840]
 * 0000000140C6F5CD: jmp     loc_140C6F7BA
 * 0000000140C6F5D2: mov     ecx, [rbx+9D8h]
 * 0000000140C6F5D8: bt      ecx, 14h
 * 0000000140C6F5DC: jnb     loc_140C7A27E
 * 0000000140C6F5E2: cmp     [rbx+918h], r12d
 * 0000000140C6F5E9: jnz     loc_140C6F6ED
 * 0000000140C6F5EF: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F5F9: mov     edx, 1
 * 0000000140C6F5FE: add     rax, rbx
 * 0000000140C6F601: mov     [rbx+920h], rax
 * 0000000140C6F608: mov     [rbx+928h], r12
 * 0000000140C6F60F: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6F61A: mov     [rbx+938h], r15
 * 0000000140C6F621: mov     [rbx+918h], edx
 * 0000000140C6F627: bt      ecx, 1Dh
 * 0000000140C6F62B: jb      loc_140C6F6ED
 * 0000000140C6F631: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C6F63B: jz      loc_140C6F6ED
 * 0000000140C6F641: test    dl, cl
 * 0000000140C6F643: jz      loc_140C6F6ED
 * 0000000140C6F649: mov     ecx, [rbx+0A74h]
 * 0000000140C6F64F: mov     eax, [rbx+804h]
 * 0000000140C6F655: mov     r10, [rbx+838h]
 * 0000000140C6F65C: sub     eax, ecx
 * 0000000140C6F65E: mov     r8, [rbx+0A78h]
 * 0000000140C6F665: lea     rdx, [rcx+rbx]
 * 0000000140C6F669: mov     ecx, eax
 * 0000000140C6F66B: shr     rcx, 3
 * 0000000140C6F66F: lea     r9, [rdx+rcx*8]
 * 0000000140C6F673: jmp     short loc_140C6F696
 * 0000000140C6F675: xor     [rdx], r8
 * 0000000140C6F678: mov     rax, [rdx]
 * 0000000140C6F67B: movzx   ecx, r8b
 * 0000000140C6F67F: xor     rax, r10
 * 0000000140C6F682: and     ecx, 3Fh
 * 0000000140C6F685: ror     r8, cl
 * 0000000140C6F688: add     r8, rax
 * 0000000140C6F68B: xor     r8, 0F05h
 * 0000000140C6F692: add     rdx, 8
 * 0000000140C6F696: cmp     rdx, r9
 * 0000000140C6F699: jnz     short loc_140C6F675
 * 0000000140C6F69B: btr     dword ptr [rbx+9DCh], 15h
 * 0000000140C6F6A3: cmp     r8, [rbx+0A80h]
 * 0000000140C6F6AA: jz      short loc_140C6F6ED
 * 0000000140C6F6AC: mov     ecx, [rbx+804h]
 * 0000000140C6F6B2: mov     rax, [rbx+588h]
 * 0000000140C6F6B9: mov     [rax], rbx
 * 0000000140C6F6BC: mov     [rax+10h], ecx
 * 0000000140C6F6BF: mov     rcx, [rbx+0A80h]
 * 0000000140C6F6C6: cmp     [rbx+918h], r12d
 * 0000000140C6F6CD: jnz     short loc_140C6F6DD
 * 0000000140C6F6CF: mov     rax, [rbx+588h]
 * 0000000140C6F6D6: xor     rcx, r8
 * 0000000140C6F6D9: mov     [rax+18h], rcx
 * 0000000140C6F6DD: xor     edx, edx
 * 0000000140C6F6DF: mov     r9d, 100h
 * 0000000140C6F6E5: mov     rcx, rbx
 * 0000000140C6F6E8: call    sub_140C7F03C
 * 0000000140C6F6ED: mov     ecx, 0C000007Bh
 * 0000000140C6F6F2: jmp     loc_140C6F8E8
 * 0000000140C6F6F7: mov     ecx, [rbx+9D8h]
 * 0000000140C6F6FD: bt      ecx, 14h
 * 0000000140C6F701: jnb     loc_140C7A2F8
 * 0000000140C6F707: cmp     [rbx+918h], r12d
 * 0000000140C6F70E: jnz     short loc_140C6F6ED
 * 0000000140C6F710: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F71A: mov     edx, 1
 * 0000000140C6F71F: add     rax, rbx
 * 0000000140C6F722: mov     [rbx+920h], rax
 * 0000000140C6F729: mov     [rbx+928h], r12
 * 0000000140C6F730: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6F73B: mov     [rbx+938h], r15
 * 0000000140C6F742: mov     [rbx+918h], edx
 * 0000000140C6F748: bt      ecx, 1Dh
 * 0000000140C6F74C: jb      short loc_140C6F6ED
 * 0000000140C6F74E: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C6F758: jz      short loc_140C6F6ED
 * 0000000140C6F75A: test    dl, cl
 * 0000000140C6F75C: jz      short loc_140C6F6ED
 * 0000000140C6F75E: mov     ecx, [rbx+0A74h]
 * 0000000140C6F764: mov     eax, [rbx+804h]
 * 0000000140C6F76A: mov     r10, [rbx+838h]
 * 0000000140C6F771: sub     eax, ecx
 * 0000000140C6F773: mov     r8, [rbx+0A78h]
 * 0000000140C6F77A: lea     rdx, [rcx+rbx]
 * 0000000140C6F77E: mov     ecx, eax
 * 0000000140C6F780: shr     rcx, 3
 * 0000000140C6F784: lea     r9, [rdx+rcx*8]
 * 0000000140C6F788: jmp     short loc_140C6F7AB
 * 0000000140C6F78A: xor     [rdx], r8
 * 0000000140C6F78D: mov     rax, [rdx]
 * 0000000140C6F790: movzx   ecx, r8b
 * 0000000140C6F794: xor     rax, r10
 * 0000000140C6F797: and     ecx, 3Fh
 * 0000000140C6F79A: ror     r8, cl
 * 0000000140C6F79D: add     r8, rax
 * 0000000140C6F7A0: xor     r8, 0F05h
 * 0000000140C6F7A7: add     rdx, 8
 * 0000000140C6F7AB: cmp     rdx, r9
 * 0000000140C6F7AE: jnz     short loc_140C6F78A
 * 0000000140C6F7B0: jmp     loc_140C6F69B
 * 0000000140C6F7B5: mov     edx, 1
 * 0000000140C6F7BA: mov     r11, [rbp+7B0h+var_808]
 * 0000000140C6F7BE: cmp     r13, r11
 * 0000000140C6F7C1: jz      loc_140C6F893
 * 0000000140C6F7C7: mov     ecx, [rbx+9D8h]
 * 0000000140C6F7CD: bt      ecx, 14h
 * 0000000140C6F7D1: jnb     loc_140C7A321
 * 0000000140C6F7D7: xor     r12d, r12d
 * 0000000140C6F7DA: cmp     [rbx+918h], r12d
 * 0000000140C6F7E1: jnz     loc_140C6F6ED
 * 0000000140C6F7E7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6F7F1: add     rax, rbx
 * 0000000140C6F7F4: mov     [rbx+920h], rax
 * 0000000140C6F7FB: mov     [rbx+928h], r12
 * 0000000140C6F802: mov     qword ptr [rbx+930h], 10Fh
 * 0000000140C6F80D: mov     [rbx+938h], r15
 * 0000000140C6F814: mov     [rbx+918h], edx
 * 0000000140C6F81A: bt      ecx, 1Dh
 * 0000000140C6F81E: jb      loc_140C6F6ED
 * 0000000140C6F824: test    dword ptr [rbx+9DCh], 200000h
 * 0000000140C6F82E: jz      loc_140C6F6ED
 * 0000000140C6F834: test    dl, cl
 * 0000000140C6F836: jz      loc_140C6F6ED
 * 0000000140C6F83C: mov     ecx, [rbx+0A74h]
 * 0000000140C6F842: mov     eax, [rbx+804h]
 * 0000000140C6F848: mov     r10, [rbx+838h]
 * 0000000140C6F84F: sub     eax, ecx
 * 0000000140C6F851: mov     r8, [rbx+0A78h]
 * 0000000140C6F858: lea     rdx, [rcx+rbx]
 * 0000000140C6F85C: mov     ecx, eax
 * 0000000140C6F85E: shr     rcx, 3
 * 0000000140C6F862: lea     r9, [rdx+rcx*8]
 * 0000000140C6F866: jmp     short loc_140C6F889
 * 0000000140C6F868: xor     [rdx], r8
 * 0000000140C6F86B: mov     rax, [rdx]
 * 0000000140C6F86E: movzx   ecx, r8b
 * 0000000140C6F872: xor     rax, r10
 * 0000000140C6F875: and     ecx, 3Fh
 * 0000000140C6F878: ror     r8, cl
 * 0000000140C6F87B: add     r8, rax
 * 0000000140C6F87E: xor     r8, 0F05h
 * 0000000140C6F885: add     rdx, 8
 * 0000000140C6F889: cmp     rdx, r9
 * 0000000140C6F88C: jnz     short loc_140C6F868
 * 0000000140C6F88E: jmp     loc_140C6F69B
 * 0000000140C6F893: xor     r13d, r13d
 * 0000000140C6F896: test    r9d, r9d
 * 0000000140C6F899: jz      short loc_140C6F8A4
 * 0000000140C6F89B: lea     edx, [r9+6]
 * 0000000140C6F89F: and     edx, 0FFFFFFF8h
 * 0000000140C6F8A2: jmp     short loc_140C6F8A7
 * 0000000140C6F8A4: mov     edx, r13d
 * 0000000140C6F8A7: mov     r15d, [rbx+804h]
 * 0000000140C6F8AE: mov     r8d, [rbx+944h]
 * 0000000140C6F8B5: movzx   eax, r10w
 * 0000000140C6F8B9: lea     ecx, [rax+rax*2]
 * 0000000140C6F8BC: lea     eax, [rdx+rcx*8]
 * 0000000140C6F8BF: lea     ecx, [r15+30h]
 * 0000000140C6F8C3: add     ecx, eax
 * 0000000140C6F8C5: cmp     ecx, [rbx+0A64h]
 * 0000000140C6F8CB: jbe     loc_140C6F9C3
 * 0000000140C6F8D1: mov     edx, ecx
 * 0000000140C6F8D3: mov     rcx, rbx
 * 0000000140C6F8D6: call    sub_140C7E7A8
 * 0000000140C6F8DB: mov     r14, rax
 * 0000000140C6F8DE: test    rax, rax
 * 0000000140C6F8E1: jnz     short loc_140C6F8F1
 * 0000000140C6F8E3: mov     ecx, 0C000009Ah
 * 0000000140C6F8E8: mov     r13, [rbp+7B0h+var_810]
 * 0000000140C6F8EC: jmp     loc_140C7047D
 * 0000000140C6F8F1: mov     ecx, [rbx+9D8h]
 * 0000000140C6F8F7: test    dil, cl
 * 0000000140C6F8FA: jnz     loc_140C6F9A8
 * 0000000140C6F900: mov     eax, [rbx+804h]
 * 0000000140C6F906: and     ecx, 10000000h
 * 0000000140C6F90C: mov     r8, [rbx+7E8h]
 * 0000000140C6F913: neg     ecx
 * 0000000140C6F915: mov     r9d, 1
 * 0000000140C6F91B: sbb     edx, edx
 * 0000000140C6F91D: and     edx, [rbx+944h]
 * 0000000140C6F923: cmp     eax, 8
 * 0000000140C6F926: jb      short loc_140C6F93D
 * 0000000140C6F928: mov     ecx, eax
 * 0000000140C6F92A: shr     rcx, 3
 * 0000000140C6F92E: mov     [rbx], r13
 * 0000000140C6F931: add     eax, 0FFFFFFF8h
 * 0000000140C6F934: add     rbx, 8
 * 0000000140C6F938: sub     rcx, r9
 * 0000000140C6F93B: jnz     short loc_140C6F92E
 * 0000000140C6F93D: test    eax, eax
 * 0000000140C6F93F: jz      short loc_140C6F950
 * 0000000140C6F941: mov     ecx, 0FFFFFFFFh
 * 0000000140C6F946: mov     [rbx], r13b
 * 0000000140C6F949: add     rbx, r9
 * 0000000140C6F94C: add     eax, ecx
 * 0000000140C6F94E: jnz     short loc_140C6F946
 * 0000000140C6F950: mov     ebx, [r14+944h]
 * 0000000140C6F957: mov     [r14+944h], edx
 * 0000000140C6F95E: cmp     edx, 3
 * 0000000140C6F961: jz      short loc_140C6F992
 * 0000000140C6F963: test    dword ptr [r14+9D8h], 8000000h
 * 0000000140C6F96E: jnz     short loc_140C6F989
 * 0000000140C6F970: test    edx, edx
 * 0000000140C6F972: jz      short loc_140C6F989
 * 0000000140C6F974: mov     rax, [r14+238h]
 * 0000000140C6F97B: lea     rcx, [r8-8]
 * 0000000140C6F97F: mov     rdx, [rcx]
 * 0000000140C6F982: call    KeGuardDispatchICall
 * 0000000140C6F987: jmp     short loc_140C6F9A1
 * 0000000140C6F989: mov     rax, [r14+108h]
 * 0000000140C6F990: jmp     short loc_140C6F999
 * 0000000140C6F992: mov     rax, [r14+370h]
 * 0000000140C6F999: mov     rcx, r8
 * 0000000140C6F99C: call    KeGuardDispatchICall
 * 0000000140C6F9A1: mov     [r14+944h], ebx
 * 0000000140C6F9A8: and     dword ptr [r14+9D8h], 0FFFFFFFDh
 * 0000000140C6F9B0: mov     r9, [rsp+8B0h+var_858]
 * 0000000140C6F9B5: movzx   r10d, word ptr [rbp+7B0h+arg_8]
 * 0000000140C6F9BD: mov     r11, [rbp+7B0h+var_808]
 * 0000000140C6F9C1: jmp     short loc_140C6F9CC
 * 0000000140C6F9C3: mov     r14, rbx
 * 0000000140C6F9C6: mov     [rbx+804h], ecx
 * 0000000140C6F9CC: mov     ebx, 1
 * 0000000140C6F9D1: lea     rdx, [r14+r15]
 * 0000000140C6F9D5: add     [r14+82Ch], ebx
 * 0000000140C6F9DC: mov     rax, rdx
 * 0000000140C6F9DF: mov     [rbp+7B0h+var_5A0], rdx
 * 0000000140C6F9E6: lea     ecx, [rbx+2Fh]
 * 0000000140C6F9E9: lea     r8d, [rbx+5]
 * 0000000140C6F9ED: mov     [rax], r13
 * 0000000140C6F9F0: add     ecx, 0FFFFFFF8h
 * 0000000140C6F9F3: add     rax, 8
 * 0000000140C6F9F7: sub     r8, rbx
 * 0000000140C6F9FA: jnz     short loc_140C6F9ED
 * 0000000140C6F9FC: test    ecx, ecx
 * 0000000140C6F9FE: jz      short loc_140C6FA11
 * 0000000140C6FA00: mov     r8d, 0FFFFFFFFh
 * 0000000140C6FA06: mov     [rax], r13b
 * 0000000140C6FA09: add     rax, rbx
 * 0000000140C6FA0C: add     ecx, r8d
 * 0000000140C6FA0F: jnz     short loc_140C6FA06
 * 0000000140C6FA11: mov     r15, [rbp+7B0h+var_7D8]
 * 0000000140C6FA15: mov     dword ptr [rdx], 1Eh
 * 0000000140C6FA1B: mov     [rdx+8], r15
 * 0000000140C6FA1F: mov     [rdx+10h], r13d
 * 0000000140C6FA23: mov     rcx, [r14+838h]
 * 0000000140C6FA2A: mov     rax, rcx
 * 0000000140C6FA2D: jmp     short loc_140C6FA31
 * 0000000140C6FA2F: xor     ecx, eax
 * 0000000140C6FA31: shr     rax, 1Fh
 * 0000000140C6FA35: test    rax, rax
 * 0000000140C6FA38: jnz     short loc_140C6FA2F
 * 0000000140C6FA3A: mov     rax, [rbp+7B0h+var_7F0]
 * 0000000140C6FA3E: btr     ecx, 1Fh
 * 0000000140C6FA42: mov     [rdx+14h], ecx
 * 0000000140C6FA45: mov     rcx, [rbp+7B0h+var_5A0]
 * 0000000140C6FA4C: mov     [rbp+7B0h+var_708], rcx
 * 0000000140C6FA53: mov     [rbp+7B0h+var_790], r14
 * 0000000140C6FA57: mov     [rcx+18h], rax
 * 0000000140C6FA5B: mov     ecx, [r12+50h]
 * 0000000140C6FA60: xor     r12d, r12d
 * 0000000140C6FA63: mov     rax, [rbp+7B0h+var_708]
 * 0000000140C6FA6A: mov     [rax+20h], ecx
 * 0000000140C6FA6D: mov     rax, [rbp+7B0h+var_708]
 * 0000000140C6FA74: mov     ecx, [rbp+7B0h+var_830]
 * 0000000140C6FA77: mov     [rax+24h], ecx
 * 0000000140C6FA7A: mov     rax, [rbp+7B0h+var_708]
 * 0000000140C6FA81: mov     [rax+28h], r10w
 * 0000000140C6FA86: mov     rcx, [rbp+7B0h+var_708]
 * 0000000140C6FA8D: lea     rdx, [rcx+30h]
 * 0000000140C6FA91: mov     [rbp+7B0h+var_828], rdx
 * 0000000140C6FA95: test    r9d, r9d
 * 0000000140C6FA98: jz      short loc_140C6FAAB
 * 0000000140C6FA9A: lea     ebx, [r9-1]
 * 0000000140C6FA9E: add     rbx, 7
 * 0000000140C6FAA2: and     rbx, 0FFFFFFFFFFFFFFF8h
 * 0000000140C6FAA6: add     rbx, rdx
 * 0000000140C6FAA9: jmp     short loc_140C6FAAE
 * 0000000140C6FAAB: mov     rbx, rdx
 * 0000000140C6FAAE: movzx   eax, word ptr [rcx+28h]
 * 0000000140C6FAB2: mov     [rbp+7B0h+var_810], rbx
 * 0000000140C6FAB6: lea     rcx, [rax+rax*2]
 * 0000000140C6FABA: lea     r8, [rbx+rcx*8]
 * 0000000140C6FABE: mov     [rbp+7B0h+var_820], r8
 * 0000000140C6FAC2: test    r9d, r9d
 * 0000000140C6FAC5: jz      short loc_140C6FAD2
 * 0000000140C6FAC7: lea     rax, [r15+0Ch]
 * 0000000140C6FACB: mov     [rsp+8B0h+var_840], rax
 * 0000000140C6FAD0: jmp     short loc_140C6FAD7
 * 0000000140C6FAD2: mov     [rsp+8B0h+var_840], r11
 * 0000000140C6FAD7: mov     r13, r14
 * 0000000140C6FADA: cmp     r12w, r10w
 * 0000000140C6FADE: jnb     short loc_140C6FB0F
 * 0000000140C6FAE0: movzx   edx, r10w
 * 0000000140C6FAE4: lea     rax, [rbx+8]
 * 0000000140C6FAE8: mov     r10d, 1
 * 0000000140C6FAEE: mov     rcx, rdi
 * 0000000140C6FAF1: mov     [rax-8], r12d
 * 0000000140C6FAF5: mov     [rax-4], r12d
 * 0000000140C6FAF9: mov     dword ptr [rax], 80000000h
 * 0000000140C6FAFF: add     rax, 0Ch
 * 0000000140C6FB03: sub     rcx, r10
 * 0000000140C6FB06: jnz     short loc_140C6FAF1
 * 0000000140C6FB08: sub     rdx, r10
 * 0000000140C6FB0B: jnz     short loc_140C6FAEE
 * 0000000140C6FB0D: jmp     short loc_140C6FB15
 * 0000000140C6FB0F: mov     r10d, 1
 * 0000000140C6FB15: cmp     rbx, r8
 * 0000000140C6FB18: jz      loc_140C70473
 * 0000000140C6FB1E: mov     r12, [rbp+7B0h+var_7B8]
 * 0000000140C6FB22: lea     r11, [r13+9DCh]
 * 0000000140C6FB29: mov     [rsp+8B0h+var_858], r11
 * 0000000140C6FB2E: xor     r14d, r14d
 * 0000000140C6FB31: test    dword ptr [r12+24h], 2000000h
 * 0000000140C6FB3A: mov     r15d, r14d
 * 0000000140C6FB3D: mov     [rsp+8B0h+var_850], r14d
 * 0000000140C6FB42: jnz     loc_140C6FC1F
 * 0000000140C6FB48: mov     ecx, [r12]
 * 0000000140C6FB4C: lea     rax, [r12+4]
 * 0000000140C6FB51: cmp     ecx, 54494E49h
 * 0000000140C6FB57: jnz     loc_140C6FBEE
 * 0000000140C6FB5D: cmp     dword ptr [rax], 4742444Bh
 * 0000000140C6FB63: jz      loc_140C6FC1F
 * 0000000140C6FB69: cmp     ecx, 41525245h
 * 0000000140C6FB6F: jnz     short loc_140C6FB7F
 * 0000000140C6FB71: mov     ecx, 4154h
 * 0000000140C6FB76: cmp     [rax], cx
 * 0000000140C6FB79: jz      loc_140C6FC1F
 * 0000000140C6FB7F: mov     rdx, [r13+950h]
 * 0000000140C6FB86: mov     r10d, 7
 * 0000000140C6FB8C: mov     r9, [r13+958h]
 * 0000000140C6FB93: mov     r8, r12
 * 0000000140C6FB96: mov     r11, [r13+960h]
 * 0000000140C6FB9D: mov     rbx, [r13+968h]
 * 0000000140C6FBA4: mov     cl, [r8]
 * 0000000140C6FBA7: inc     r8
 * 0000000140C6FBAA: mov     al, [rdx]
 * 0000000140C6FBAC: inc     rdx
 * 0000000140C6FBAF: cmp     cl, al
 * 0000000140C6FBB1: jnz     short loc_140C6FC29
 * 0000000140C6FBB3: mov     eax, 0FFFFFFFFh
 * 0000000140C6FBB8: add     r10d, eax
 * 0000000140C6FBBB: jnz     short loc_140C6FBA4
 * 0000000140C6FBBD: mov     r10d, 1
 * 0000000140C6FBC3: mov     r15d, r10d
 * 0000000140C6FBC6: mov     [rsp+8B0h+var_850], r10d
 * 0000000140C6FBCB: mov     r11, [rsp+8B0h+var_858]
 * 0000000140C6FBD0: mov     rbx, [rbp+7B0h+var_810]
 * 0000000140C6FBD4: mov     ecx, [r12+24h]
 * 0000000140C6FBD9: test    ecx, ecx
 * 0000000140C6FBDB: jns     loc_140C6FCCB
 * 0000000140C6FBE1: mov     r15d, r10d
 * 0000000140C6FBE4: mov     [rsp+8B0h+var_850], r10d
 * 0000000140C6FBE9: jmp     loc_140C6FCD0
 * 0000000140C6FBEE: cmp     ecx, 45474150h
 * 0000000140C6FBF4: jnz     loc_140C6FB69
 * 0000000140C6FBFA: movzx   ecx, word ptr [rax]
 * 0000000140C6FBFD: mov     eax, 7877h
 * 0000000140C6FC02: cmp     cx, ax
 * 0000000140C6FC05: jz      short loc_140C6FC1F
 * 0000000140C6FC07: mov     eax, 7277h
 * 0000000140C6FC0C: cmp     cx, ax
 * 0000000140C6FC0F: jz      short loc_140C6FC1F
 * 0000000140C6FC11: mov     eax, 7777h
 * 0000000140C6FC16: cmp     cx, ax
 * 0000000140C6FC19: jnz     loc_140C6FB7F
 * 0000000140C6FC1F: mov     r15d, r10d
 * 0000000140C6FC22: mov     [rsp+8B0h+var_850], r10d
 * 0000000140C6FC27: jmp     short loc_140C6FBD4
 * 0000000140C6FC29: mov     edx, 8
 * 0000000140C6FC2E: mov     r8, r12
 * 0000000140C6FC31: mov     rcx, [r8]
 * 0000000140C6FC34: add     r8, 8
 * 0000000140C6FC38: mov     rax, [r9]
 * 0000000140C6FC3B: add     r9, 8
 * 0000000140C6FC3F: cmp     rcx, rax
 * 0000000140C6FC42: jnz     short loc_140C6FC78
 * 0000000140C6FC44: add     edx, 0FFFFFFF8h
 * 0000000140C6FC47: cmp     edx, 8
 * 0000000140C6FC4A: jnb     short loc_140C6FC31
 * 0000000140C6FC4C: test    edx, edx
 * 0000000140C6FC4E: jz      loc_140C6FBBD
 * 0000000140C6FC54: mov     r10d, 1
 * 0000000140C6FC5A: mov     cl, [r8]
 * 0000000140C6FC5D: add     r8, r10
 * 0000000140C6FC60: mov     al, [r9]
 * 0000000140C6FC63: add     r9, r10
 * 0000000140C6FC66: cmp     cl, al
 * 0000000140C6FC68: jnz     short loc_140C6FC7E
 * 0000000140C6FC6A: mov     eax, 0FFFFFFFFh
 * 0000000140C6FC6F: add     edx, eax
 * 0000000140C6FC71: jnz     short loc_140C6FC5A
 * 0000000140C6FC73: jmp     loc_140C6FBC3
 * 0000000140C6FC78: mov     r10d, 1
 * 0000000140C6FC7E: mov     r8d, 4
 * 0000000140C6FC84: mov     rdx, r12
 * 0000000140C6FC87: mov     r9d, 0FFFFFFFFh
 * 0000000140C6FC8D: mov     cl, [rdx]
 * 0000000140C6FC8F: add     rdx, r10
 * 0000000140C6FC92: mov     al, [r11]
 * 0000000140C6FC95: add     r11, r10
 * 0000000140C6FC98: cmp     cl, al
 * 0000000140C6FC9A: jnz     short loc_140C6FCA6
 * 0000000140C6FC9C: add     r8d, r9d
 * 0000000140C6FC9F: jnz     short loc_140C6FC8D
 * 0000000140C6FCA1: jmp     loc_140C6FBC3
 * 0000000140C6FCA6: mov     r8d, 6
 * 0000000140C6FCAC: mov     rdx, r12
 * 0000000140C6FCAF: mov     cl, [rdx]
 * 0000000140C6FCB1: add     rdx, r10
 * 0000000140C6FCB4: mov     al, [rbx]
 * 0000000140C6FCB6: add     rbx, r10
 * 0000000140C6FCB9: cmp     cl, al
 * 0000000140C6FCBB: jnz     loc_140C6FBCB
 * 0000000140C6FCC1: add     r8d, r9d
 * 0000000140C6FCC4: jnz     short loc_140C6FCAF
 * 0000000140C6FCC6: jmp     loc_140C6FBC3
 * 0000000140C6FCCB: test    r15d, r15d
 * 0000000140C6FCCE: jz      short loc_140C6FD01
 * 0000000140C6FCD0: cmp     dword ptr [r12], 54494E49h
 * 0000000140C6FCD8: jnz     short loc_140C6FD01
 * 0000000140C6FCDA: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140C6FCE3: jnz     short loc_140C6FD01
 * 0000000140C6FCE5: lea     r11, [r13+9DCh]
 * 0000000140C6FCEC: test    dword ptr [r11], 2000h
 * 0000000140C6FCF3: mov     [rsp+8B0h+var_858], r11
 * 0000000140C6FCF8: cmovnz  r15d, r14d
 * 0000000140C6FCFC: mov     [rsp+8B0h+var_850], r15d
 * 0000000140C6FD01: test    dword ptr [r11], 4000h
 * 0000000140C6FD08: mov     r10, [rbp+7B0h+var_7F0]
 * 0000000140C6FD0C: jz      short loc_140C6FD32
 * 0000000140C6FD0E: bt      ecx, 1Dh
 * 0000000140C6FD12: jnb     short loc_140C6FD32
 * 0000000140C6FD14: cmp     r10, [r13+5E0h]
 * 0000000140C6FD1B: jz      short loc_140C6FD26
 * 0000000140C6FD1D: cmp     r10, [r13+5E8h]
 * 0000000140C6FD24: jnz     short loc_140C6FD32
 * 0000000140C6FD26: mov     eax, 1
 * 0000000140C6FD2B: mov     r15d, eax
 * 0000000140C6FD2E: mov     [rsp+8B0h+var_850], eax
 * 0000000140C6FD32: mov     edx, [r12+0Ch]
 * 0000000140C6FD37: mov     r14d, [r12+10h]
 * 0000000140C6FD3C: mov     eax, [r12+8]
 * 0000000140C6FD41: cmp     r14d, eax
 * 0000000140C6FD44: mov     r9, [rbp+7B0h+var_808]
 * 0000000140C6FD48: mov     rcx, [rbp+7B0h+var_7D8]
 * 0000000140C6FD4C: cmovbe  r14d, eax
 * 0000000140C6FD50: add     r14d, edx
 * 0000000140C6FD53: mov     [rbp+7B0h+var_7F4], edx
 * 0000000140C6FD56: mov     dword ptr [rsp+8B0h+var_848], r14d
 * 0000000140C6FD5B: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C6FD61: cmp     rcx, r9
 * 0000000140C6FD64: jz      loc_140C6FF29
 * 0000000140C6FD6A: mov     eax, [rcx]
 * 0000000140C6FD6C: mov     ecx, [rcx+4]
 * 0000000140C6FD6F: mov     r12d, ecx
 * 0000000140C6FD72: cmp     eax, edx
 * 0000000140C6FD74: jbe     loc_140C6FF30
 * 0000000140C6FD7A: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C6FD80: cmp     ecx, r14d
 * 0000000140C6FD83: ja      loc_140C6FF3C
 * 0000000140C6FD89: xor     r12d, r12d
 * 0000000140C6FD8C: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C6FD92: test    r15d, r15d
 * 0000000140C6FD95: jnz     loc_140C6FF56
 * 0000000140C6FD9B: mov     [rbx], edx
 * 0000000140C6FD9D: mov     r9d, eax
 * 0000000140C6FDA0: sub     r9d, edx
 * 0000000140C6FDA3: mov     [rbx+4], eax
 * 0000000140C6FDA6: lea     rbx, [r10+rdx]
 * 0000000140C6FDAA: mov     [rbp+7B0h+var_830], r9d
 * 0000000140C6FDAE: mov     r10d, r9d
 * 0000000140C6FDB1: mov     edx, r12d
 * 0000000140C6FDB4: add     r10, rbx
 * 0000000140C6FDB7: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C6FDBD: mov     r12d, ecx
 * 0000000140C6FDC0: mov     eax, edx
 * 0000000140C6FDC2: mov     r8, [rbp+rax*8+7B0h+var_570]
 * 0000000140C6FDCA: mov     ecx, [rbp+rax*4+7B0h+var_6A0]
 * 0000000140C6FDD1: add     rcx, r8
 * 0000000140C6FDD4: cmp     rbx, rcx
 * 0000000140C6FDD7: jnb     short loc_140C6FDE2
 * 0000000140C6FDD9: cmp     r10, r8
 * 0000000140C6FDDC: ja      loc_140C6FF1D
 * 0000000140C6FDE2: inc     edx
 * 0000000140C6FDE4: cmp     edx, 6
 * 0000000140C6FDE7: jb      short loc_140C6FDC0
 * 0000000140C6FDE9: add     [r13+848h], r9d
 * 0000000140C6FDF0: mov     r10, rbx
 * 0000000140C6FDF3: mov     r14d, [r13+834h]
 * 0000000140C6FDFA: mov     rax, rbx
 * 0000000140C6FDFD: mov     r15, [r13+838h]
 * 0000000140C6FE04: mov     ecx, r9d
 * 0000000140C6FE07: add     rcx, rbx
 * 0000000140C6FE0A: cmp     rbx, rcx
 * 0000000140C6FE0D: jnb     short loc_140C6FE1F
 * 0000000140C6FE0F: mov     edx, 40h ; '@'
 * 0000000140C6FE14: prefetchnta byte ptr [rax]
 * 0000000140C6FE17: add     rax, rdx
 * 0000000140C6FE1A: cmp     rax, rcx
 * 0000000140C6FE1D: jb      short loc_140C6FE14
 * 0000000140C6FE1F: mov     r11d, r9d
 * 0000000140C6FE22: mov     r8, r15
 * 0000000140C6FE25: shr     r11d, 7
 * 0000000140C6FE29: test    r11d, r11d
 * 0000000140C6FE2C: jz      short loc_140C6FEA0
 * 0000000140C6FE2E: mov     edi, 1
 * 0000000140C6FE33: mov     esi, 0FFFFFFFFh
 * 0000000140C6FE38: mov     r9, 7010008004002001h
 * 0000000140C6FE42: mov     eax, 8
 * 0000000140C6FE47: xor     r8, [r10]
 * 0000000140C6FE4A: mov     ecx, r14d
 * 0000000140C6FE4D: rol     r8, cl
 * 0000000140C6FE50: xor     r8, [r10+8]
 * 0000000140C6FE54: add     r10, 10h
 * 0000000140C6FE58: rol     r8, cl
 * 0000000140C6FE5B: sub     rax, rdi
 * 0000000140C6FE5E: jnz     short loc_140C6FE47
 * 0000000140C6FE60: mov     rcx, r10
 * 0000000140C6FE63: sub     rcx, rbx
 * 0000000140C6FE66: xor     rcx, r15
 * 0000000140C6FE69: mov     rax, rcx
 * 0000000140C6FE6C: rol     rax, 11h
 * 0000000140C6FE70: xor     rcx, rax
 * 0000000140C6FE73: mov     rax, r9
 * 0000000140C6FE76: mul     rcx
 * 0000000140C6FE79: mov     [rbp+7B0h+var_438], rdx
 * 0000000140C6FE80: xor     rdx, rax
 * 0000000140C6FE83: xor     r14d, edx
 * 0000000140C6FE86: and     r14d, 3Fh
 * 0000000140C6FE8A: cmovz   r14d, edi
 * 0000000140C6FE8E: add     r11d, esi
 * 0000000140C6FE91: jnz     short loc_140C6FE42
 * 0000000140C6FE93: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C6FE98: lea     edi, [r11+2]
 * 0000000140C6FE9C: mov     r9d, [rbp+7B0h+var_830]
 * 0000000140C6FEA0: and     r9d, 7Fh
 * 0000000140C6FEA4: mov     r11d, 1
 * 0000000140C6FEAA: cmp     r9d, 8
 * 0000000140C6FEAE: jb      short loc_140C6FECD
 * 0000000140C6FEB0: mov     eax, r9d
 * 0000000140C6FEB3: shr     rax, 3
 * 0000000140C6FEB7: xor     r8, [r10]
 * 0000000140C6FEBA: mov     ecx, r14d
 * 0000000140C6FEBD: rol     r8, cl
 * 0000000140C6FEC0: add     r10, 8
 * 0000000140C6FEC4: add     r9d, 0FFFFFFF8h
 * 0000000140C6FEC8: sub     rax, r11
 * 0000000140C6FECB: jnz     short loc_140C6FEB7
 * 0000000140C6FECD: test    r9d, r9d
 * 0000000140C6FED0: jz      short loc_140C6FEF0
 * 0000000140C6FED2: mov     edi, 0FFFFFFFFh
 * 0000000140C6FED7: movzx   eax, byte ptr [r10]
 * 0000000140C6FEDB: mov     ecx, r14d
 * 0000000140C6FEDE: xor     r8, rax
 * 0000000140C6FEE1: add     r10, r11
 * 0000000140C6FEE4: rol     r8, cl
 * 0000000140C6FEE7: add     r9d, edi
 * 0000000140C6FEEA: jnz     short loc_140C6FED7
 * 0000000140C6FEEC: lea     edi, [r9+2]
 * 0000000140C6FEF0: mov     rax, r8
 * 0000000140C6FEF3: jmp     short loc_140C6FEF8
 * 0000000140C6FEF5: xor     r8d, eax
 * 0000000140C6FEF8: shr     rax, 1Fh
 * 0000000140C6FEFC: test    rax, rax
 * 0000000140C6FEFF: jnz     short loc_140C6FEF5
 * 0000000140C6FF01: mov     rcx, [rbp+7B0h+var_810]
 * 0000000140C6FF05: btr     r8d, 1Fh
 * 0000000140C6FF0A: mov     r14d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C6FF0F: mov     r15d, [rsp+8B0h+var_850]
 * 0000000140C6FF14: mov     r11, [rsp+8B0h+var_858]
 * 0000000140C6FF19: mov     [rcx+8], r8d
 * 0000000140C6FF1D: mov     ecx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C6FF23: mov     r9, [rbp+7B0h+var_808]
 * 0000000140C6FF27: jmp     short loc_140C6FF3E
 * 0000000140C6FF29: xor     ecx, ecx
 * 0000000140C6FF2B: mov     eax, ecx
 * 0000000140C6FF2D: mov     r12d, ecx
 * 0000000140C6FF30: mov     ecx, edx
 * 0000000140C6FF32: cmp     eax, edx
 * 0000000140C6FF34: jb      loc_140C70279
 * 0000000140C6FF3A: jmp     short loc_140C6FF3E
 * 0000000140C6FF3C: mov     ecx, edx
 * 0000000140C6FF3E: cmp     r12d, r14d
 * 0000000140C6FF41: ja      loc_140C70279
 * 0000000140C6FF47: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C6FF4B: cmp     rdx, r9
 * 0000000140C6FF4E: jz      loc_140C70279
 * 0000000140C6FF54: jmp     short loc_140C6FF5C
 * 0000000140C6FF56: mov     ecx, edx
 * 0000000140C6FF58: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C6FF5C: mov     rax, [rsp+8B0h+var_840]
 * 0000000140C6FF61: cmp     rax, r9
 * 0000000140C6FF64: jz      loc_140C70279
 * 0000000140C6FF6A: mov     r12d, [rax+4]
 * 0000000140C6FF6E: cmp     r12d, r14d
 * 0000000140C6FF71: ja      loc_140C70279
 * 0000000140C6FF77: cmp     rax, r9
 * 0000000140C6FF7A: jz      loc_140C70273
 * 0000000140C6FF80: xor     ebx, ebx
 * 0000000140C6FF82: test    r15d, r15d
 * 0000000140C6FF85: jz      short loc_140C6FF8F
 * 0000000140C6FF87: mov     r8b, 80h
 * 0000000140C6FF8A: jmp     loc_140C7023B
 * 0000000140C6FF8F: mov     r15d, [rax]
 * 0000000140C6FF92: mov     r14d, [rdx+4]
 * 0000000140C6FF96: mov     dword ptr [rbp+7B0h+arg_8], r15d
 * 0000000140C6FF9D: cmp     r15d, r14d
 * 0000000140C6FFA0: jnb     loc_140C700C4
 * 0000000140C6FFA6: mov     ecx, [r13+9D8h]
 * 0000000140C6FFAD: bt      ecx, 14h
 * 0000000140C6FFB1: jnb     loc_140C7A34C
 * 0000000140C6FFB7: cmp     [r13+918h], ebx
 * 0000000140C6FFBE: jnz     loc_140C700C4
 * 0000000140C6FFC4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C6FFCE: mov     edx, 1
 * 0000000140C6FFD3: add     rax, r13
 * 0000000140C6FFD6: mov     [r13+920h], rax
 * 0000000140C6FFDD: mov     rax, [rbp+7B0h+var_7F0]
 * 0000000140C6FFE1: mov     [r13+928h], rbx
 * 0000000140C6FFE8: mov     qword ptr [r13+930h], 10Fh
 * 0000000140C6FFF3: mov     [r13+938h], rax
 * 0000000140C6FFFA: mov     [r13+918h], edx
 * 0000000140C70001: bt      ecx, 1Dh
 * 0000000140C70005: jb      loc_140C700C4
 * 0000000140C7000B: test    dword ptr [r11], 200000h
 * 0000000140C70012: jz      loc_140C700C4
 * 0000000140C70018: test    dl, cl
 * 0000000140C7001A: jz      loc_140C700C4
 * 0000000140C70020: mov     ecx, [r13+0A74h]
 * 0000000140C70027: mov     eax, [r13+804h]
 * 0000000140C7002E: mov     r10, [r13+838h]
 * 0000000140C70035: sub     eax, ecx
 * 0000000140C70037: mov     r8, [r13+0A78h]
 * 0000000140C7003E: lea     rdx, [rcx+r13]
 * 0000000140C70042: mov     ecx, eax
 * 0000000140C70044: shr     rcx, 3
 * 0000000140C70048: lea     r9, [rdx+rcx*8]
 * 0000000140C7004C: jmp     short loc_140C7006F
 * 0000000140C7004E: xor     [rdx], r8
 * 0000000140C70051: mov     rax, [rdx]
 * 0000000140C70054: movzx   ecx, r8b
 * 0000000140C70058: xor     rax, r10
 * 0000000140C7005B: and     ecx, 3Fh
 * 0000000140C7005E: ror     r8, cl
 * 0000000140C70061: add     r8, rax
 * 0000000140C70064: xor     r8, 0F05h
 * 0000000140C7006B: add     rdx, 8
 * 0000000140C7006F: cmp     rdx, r9
 * 0000000140C70072: jnz     short loc_140C7004E
 * 0000000140C70074: btr     dword ptr [r11], 15h
 * 0000000140C70079: cmp     r8, [r13+0A80h]
 * 0000000140C70080: jz      short loc_140C700C4
 * 0000000140C70082: mov     ecx, [r13+804h]
 * 0000000140C70089: mov     rax, [r13+588h]
 * 0000000140C70090: mov     [rax], r13
 * 0000000140C70093: mov     [rax+10h], ecx
 * 0000000140C70096: mov     rcx, [r13+0A80h]
 * 0000000140C7009D: cmp     [r13+918h], ebx
 * 0000000140C700A4: jnz     short loc_140C700B4
 * 0000000140C700A6: mov     rax, [r13+588h]
 * 0000000140C700AD: xor     rcx, r8
 * 0000000140C700B0: mov     [rax+18h], rcx
 * 0000000140C700B4: xor     edx, edx
 * 0000000140C700B6: mov     r9d, 100h
 * 0000000140C700BC: mov     rcx, r13
 * 0000000140C700BF: call    sub_140C7F03C
 * 0000000140C700C4: mov     r9d, r15d
 * 0000000140C700C7: mov     rbx, r14
 * 0000000140C700CA: add     rbx, [rbp+7B0h+var_7F0]
 * 0000000140C700CE: sub     r9d, r14d
 * 0000000140C700D1: mov     r10d, r9d
 * 0000000140C700D4: add     r10, rbx
 * 0000000140C700D7: xor     eax, eax
 * 0000000140C700D9: mov     edx, eax
 * 0000000140C700DB: mov     eax, edx
 * 0000000140C700DD: mov     r8, [rbp+rax*8+7B0h+var_570]
 * 0000000140C700E5: mov     ecx, [rbp+rax*4+7B0h+var_6A0]
 * 0000000140C700EC: add     rcx, r8
 * 0000000140C700EF: cmp     rbx, rcx
 * 0000000140C700F2: jnb     short loc_140C700FD
 * 0000000140C700F4: cmp     r10, r8
 * 0000000140C700F7: ja      loc_140C70226
 * 0000000140C700FD: inc     edx
 * 0000000140C700FF: cmp     edx, 6
 * 0000000140C70102: jb      short loc_140C700DB
 * 0000000140C70104: cmp     r9d, 4
 * 0000000140C70108: jb      loc_140C70226
 * 0000000140C7010E: add     [r13+848h], r9d
 * 0000000140C70115: mov     r10, rbx
 * 0000000140C70118: mov     r14d, [r13+834h]
 * 0000000140C7011F: mov     rax, rbx
 * 0000000140C70122: mov     r15, [r13+838h]
 * 0000000140C70129: mov     ecx, r9d
 * 0000000140C7012C: add     rcx, rbx
 * 0000000140C7012F: cmp     rbx, rcx
 * 0000000140C70132: jnb     short loc_140C70144
 * 0000000140C70134: mov     edx, 40h ; '@'
 * 0000000140C70139: prefetchnta byte ptr [rax]
 * 0000000140C7013C: add     rax, rdx
 * 0000000140C7013F: cmp     rax, rcx
 * 0000000140C70142: jb      short loc_140C70139
 * 0000000140C70144: mov     r11d, r9d
 * 0000000140C70147: mov     r8, r15
 * 0000000140C7014A: shr     r11d, 7
 * 0000000140C7014E: mov     edx, 1
 * 0000000140C70153: test    r11d, r11d
 * 0000000140C70156: jz      short loc_140C701C5
 * 0000000140C70158: mov     edi, 0FFFFFFFFh
 * 0000000140C7015D: mov     rsi, 7010008004002001h
 * 0000000140C70167: mov     eax, 8
 * 0000000140C7016C: xor     r8, [r10]
 * 0000000140C7016F: mov     ecx, r14d
 * 0000000140C70172: rol     r8, cl
 * 0000000140C70175: xor     r8, [r10+8]
 * 0000000140C70179: add     r10, 10h
 * 0000000140C7017D: rol     r8, cl
 * 0000000140C70180: sub     rax, rdx
 * 0000000140C70183: jnz     short loc_140C7016C
 * 0000000140C70185: mov     rcx, r10
 * 0000000140C70188: sub     rcx, rbx
 * 0000000140C7018B: xor     rcx, r15
 * 0000000140C7018E: mov     rax, rcx
 * 0000000140C70191: rol     rax, 11h
 * 0000000140C70195: xor     rcx, rax
 * 0000000140C70198: mov     rax, rsi
 * 0000000140C7019B: mul     rcx
 * 0000000140C7019E: mov     [rbp+7B0h+var_430], rdx
 * 0000000140C701A5: xor     rdx, rax
 * 0000000140C701A8: xor     r14d, edx
 * 0000000140C701AB: mov     edx, 1
 * 0000000140C701B0: and     r14d, 3Fh
 * 0000000140C701B4: cmovz   r14d, edx
 * 0000000140C701B8: add     r11d, edi
 * 0000000140C701BB: jnz     short loc_140C70167
 * 0000000140C701BD: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C701C2: lea     edi, [rdx+1]
 * 0000000140C701C5: and     r9d, 7Fh
 * 0000000140C701C9: cmp     r9d, 8
 * 0000000140C701CD: jb      short loc_140C701EC
 * 0000000140C701CF: mov     eax, r9d
 * 0000000140C701D2: shr     rax, 3
 * 0000000140C701D6: xor     r8, [r10]
 * 0000000140C701D9: mov     ecx, r14d
 * 0000000140C701DC: rol     r8, cl
 * 0000000140C701DF: add     r10, 8
 * 0000000140C701E3: add     r9d, 0FFFFFFF8h
 * 0000000140C701E7: sub     rax, rdx
 * 0000000140C701EA: jnz     short loc_140C701D6
 * 0000000140C701EC: test    r9d, r9d
 * 0000000140C701EF: jz      short loc_140C7020F
 * 0000000140C701F1: mov     edi, 0FFFFFFFFh
 * 0000000140C701F6: movzx   eax, byte ptr [r10]
 * 0000000140C701FA: mov     ecx, r14d
 * 0000000140C701FD: xor     r8, rax
 * 0000000140C70200: add     r10, rdx
 * 0000000140C70203: rol     r8, cl
 * 0000000140C70206: add     r9d, edi
 * 0000000140C70209: jnz     short loc_140C701F6
 * 0000000140C7020B: lea     edi, [r9+2]
 * 0000000140C7020F: mov     rax, r8
 * 0000000140C70212: jmp     short loc_140C70217
 * 0000000140C70214: xor     r8b, al
 * 0000000140C70217: shr     rax, 7
 * 0000000140C7021B: test    rax, rax
 * 0000000140C7021E: jnz     short loc_140C70214
 * 0000000140C70220: and     r8b, 7Fh
 * 0000000140C70224: jmp     short loc_140C70229
 * 0000000140C70226: mov     r8b, 80h
 * 0000000140C70229: mov     rdx, [rbp+7B0h+var_7D8]
 * 0000000140C7022D: mov     r9, [rbp+7B0h+var_808]
 * 0000000140C70231: mov     r15d, [rsp+8B0h+var_850]
 * 0000000140C70236: mov     r14d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C7023B: mov     rax, [rbp+7B0h+var_828]
 * 0000000140C7023F: add     rdx, 0Ch
 * 0000000140C70243: mov     [rbp+7B0h+var_7D8], rdx
 * 0000000140C70247: mov     [rax], r8b
 * 0000000140C7024A: mov     rax, [rsp+8B0h+var_840]
 * 0000000140C7024F: inc     [rbp+7B0h+var_828]
 * 0000000140C70253: add     rax, 0Ch
 * 0000000140C70257: mov     [rsp+8B0h+var_840], rax
 * 0000000140C7025C: cmp     rax, r9
 * 0000000140C7025F: jz      short loc_140C70265
 * 0000000140C70261: mov     r12d, [rax+4]
 * 0000000140C70265: mov     r11, [rsp+8B0h+var_858]
 * 0000000140C7026A: cmp     r12d, r14d
 * 0000000140C7026D: jbe     loc_140C6FF77
 * 0000000140C70273: mov     ecx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C70279: mov     rbx, [rbp+7B0h+var_810]
 * 0000000140C7027D: xor     r12d, r12d
 * 0000000140C70280: test    r15d, r15d
 * 0000000140C70283: jnz     loc_140C703FC
 * 0000000140C70289: cmp     ecx, r14d
 * 0000000140C7028C: jz      loc_140C703FC
 * 0000000140C70292: mov     [rbx+0Ch], ecx
 * 0000000140C70295: mov     r9d, r14d
 * 0000000140C70298: mov     [rbx+10h], r14d
 * 0000000140C7029C: mov     edx, r12d
 * 0000000140C7029F: mov     eax, [rbx+0Ch]
 * 0000000140C702A2: sub     r9d, eax
 * 0000000140C702A5: mov     r11d, eax
 * 0000000140C702A8: add     r11, [rbp+7B0h+var_7F0]
 * 0000000140C702AC: mov     r10d, r9d
 * 0000000140C702AF: add     r10, r11
 * 0000000140C702B2: mov     eax, edx
 * 0000000140C702B4: mov     r8, [rbp+rax*8+7B0h+var_570]
 * 0000000140C702BC: mov     ecx, [rbp+rax*4+7B0h+var_6A0]
 * 0000000140C702C3: add     rcx, r8
 * 0000000140C702C6: cmp     r11, rcx
 * 0000000140C702C9: jnb     short loc_140C702D4
 * 0000000140C702CB: cmp     r10, r8
 * 0000000140C702CE: ja      loc_140C703FC
 * 0000000140C702D4: inc     edx
 * 0000000140C702D6: cmp     edx, 6
 * 0000000140C702D9: jb      short loc_140C702B2
 * 0000000140C702DB: add     [r13+848h], r9d
 * 0000000140C702E2: mov     r10, r11
 * 0000000140C702E5: mov     r14d, [r13+834h]
 * 0000000140C702EC: mov     rax, r11
 * 0000000140C702EF: mov     r15, [r13+838h]
 * 0000000140C702F6: mov     ecx, r9d
 * 0000000140C702F9: add     rcx, r11
 * 0000000140C702FC: cmp     r11, rcx
 * 0000000140C702FF: jnb     short loc_140C70311
 * 0000000140C70301: mov     edx, 40h ; '@'
 * 0000000140C70306: prefetchnta byte ptr [rax]
 * 0000000140C70309: add     rax, rdx
 * 0000000140C7030C: cmp     rax, rcx
 * 0000000140C7030F: jb      short loc_140C70306
 * 0000000140C70311: mov     ebx, r9d
 * 0000000140C70314: mov     r8, r15
 * 0000000140C70317: shr     ebx, 7
 * 0000000140C7031A: mov     edx, 1
 * 0000000140C7031F: test    ebx, ebx
 * 0000000140C70321: jz      short loc_140C7038F
 * 0000000140C70323: mov     edi, 0FFFFFFFFh
 * 0000000140C70328: mov     rsi, 7010008004002001h
 * 0000000140C70332: mov     eax, 8
 * 0000000140C70337: xor     r8, [r10]
 * 0000000140C7033A: mov     ecx, r14d
 * 0000000140C7033D: rol     r8, cl
 * 0000000140C70340: xor     r8, [r10+8]
 * 0000000140C70344: add     r10, 10h
 * 0000000140C70348: rol     r8, cl
 * 0000000140C7034B: sub     rax, rdx
 * 0000000140C7034E: jnz     short loc_140C70337
 * 0000000140C70350: mov     rcx, r10
 * 0000000140C70353: sub     rcx, r11
 * 0000000140C70356: xor     rcx, r15
 * 0000000140C70359: mov     rax, rcx
 * 0000000140C7035C: rol     rax, 11h
 * 0000000140C70360: xor     rcx, rax
 * 0000000140C70363: mov     rax, rsi
 * 0000000140C70366: mul     rcx
 * 0000000140C70369: mov     [rbp+7B0h+var_428], rdx
 * 0000000140C70370: xor     rdx, rax
 * 0000000140C70373: xor     r14d, edx
 * 0000000140C70376: mov     edx, 1
 * 0000000140C7037B: and     r14d, 3Fh
 * 0000000140C7037F: cmovz   r14d, edx
 * 0000000140C70383: add     ebx, edi
 * 0000000140C70385: jnz     short loc_140C70332
 * 0000000140C70387: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C7038C: lea     edi, [rdx+1]
 * 0000000140C7038F: and     r9d, 7Fh
 * 0000000140C70393: cmp     r9d, 8
 * 0000000140C70397: jb      short loc_140C703B6
 * 0000000140C70399: mov     eax, r9d
 * 0000000140C7039C: shr     rax, 3
 * 0000000140C703A0: xor     r8, [r10]
 * 0000000140C703A3: mov     ecx, r14d
 * 0000000140C703A6: rol     r8, cl
 * 0000000140C703A9: add     r10, 8
 * 0000000140C703AD: add     r9d, 0FFFFFFF8h
 * 0000000140C703B1: sub     rax, rdx
 * 0000000140C703B4: jnz     short loc_140C703A0
 * 0000000140C703B6: test    r9d, r9d
 * 0000000140C703B9: jz      short loc_140C703D9
 * 0000000140C703BB: mov     edi, 0FFFFFFFFh
 * 0000000140C703C0: movzx   eax, byte ptr [r10]
 * 0000000140C703C4: mov     ecx, r14d
 * 0000000140C703C7: xor     r8, rax
 * 0000000140C703CA: add     r10, rdx
 * 0000000140C703CD: rol     r8, cl
 * 0000000140C703D0: add     r9d, edi
 * 0000000140C703D3: jnz     short loc_140C703C0
 * 0000000140C703D5: lea     edi, [r9+2]
 * 0000000140C703D9: mov     rax, r8
 * 0000000140C703DC: jmp     short loc_140C703E1
 * 0000000140C703DE: xor     r8d, eax
 * 0000000140C703E1: shr     rax, 1Fh
 * 0000000140C703E5: test    rax, rax
 * 0000000140C703E8: jnz     short loc_140C703DE
 * 0000000140C703EA: mov     rbx, [rbp+7B0h+var_810]
 * 0000000140C703EE: btr     r8d, 1Fh
 * 0000000140C703F3: mov     r14d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C703F8: mov     [rbx+14h], r8d
 * 0000000140C703FC: mov     rdx, [rbp+7B0h+var_808]
 * 0000000140C70400: mov     r9, [rbp+7B0h+var_7D8]
 * 0000000140C70404: cmp     r9, rdx
 * 0000000140C70407: jz      short loc_140C70443
 * 0000000140C70409: mov     eax, [r9]
 * 0000000140C7040C: mov     ecx, [r9+4]
 * 0000000140C70410: cmp     eax, [rbp+7B0h+var_7F4]
 * 0000000140C70413: jb      short loc_140C70443
 * 0000000140C70415: cmp     ecx, r14d
 * 0000000140C70418: ja      short loc_140C70443
 * 0000000140C7041A: mov     r8, [rsp+8B0h+var_840]
 * 0000000140C7041F: cmp     r8, rdx
 * 0000000140C70422: jz      short loc_140C7043B
 * 0000000140C70424: mov     rax, [rbp+7B0h+var_828]
 * 0000000140C70428: mov     byte ptr [rax], 80h
 * 0000000140C7042B: inc     rax
 * 0000000140C7042E: add     r8, 0Ch
 * 0000000140C70432: mov     [rbp+7B0h+var_828], rax
 * 0000000140C70436: mov     [rsp+8B0h+var_840], r8
 * 0000000140C7043B: add     r9, 0Ch
 * 0000000140C7043F: mov     [rbp+7B0h+var_7D8], r9
 * 0000000140C70443: mov     r12, [rbp+7B0h+var_7B8]
 * 0000000140C70447: add     rbx, 18h
 * 0000000140C7044B: mov     r11, [rsp+8B0h+var_858]
 * 0000000140C70450: add     r12, 28h ; '('
 * 0000000140C70454: mov     r10d, 1
 * 0000000140C7045A: mov     [rbp+7B0h+var_810], rbx
 * 0000000140C7045E: mov     [rbp+7B0h+var_7B8], r12
 * 0000000140C70462: cmp     rbx, [rbp+7B0h+var_820]
 * 0000000140C70466: jnz     loc_140C6FB2E
 * 0000000140C7046C: mov     r14, [rbp+7B0h+var_790]
 * 0000000140C70470: xor     r12d, r12d
 * 0000000140C70473: mov     r13, r14
 * 0000000140C70476: mov     [rbp+7B0h+var_7D0], r14
 * 0000000140C7047A: mov     ecx, r12d
 * 0000000140C7047D: mov     rbx, [rbp+7B0h+var_7E8]
 * 0000000140C70481: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C70486: mov     r8d, 80000000h
 * 0000000140C7048C: mov     rax, r13
 * 0000000140C7048F: mov     [rsp+8B0h+var_838], r13
 * 0000000140C70494: sub     rax, rsi
 * 0000000140C70497: mov     rsi, r13
 * 0000000140C7049A: add     rdx, rax
 * 0000000140C7049D: lea     eax, [rcx+r8]
 * 0000000140C704A1: mov     [rsp+8B0h+var_860], rdx
 * 0000000140C704A6: test    r8d, eax
 * 0000000140C704A9: jnz     short loc_140C704B3
 * 0000000140C704AB: cmp     ecx, 0C000010Eh
 * 0000000140C704B1: jnz     short loc_140C704B7
 * 0000000140C704B3: mov     [rdx+28h], rbx
 * 0000000140C704B7: mov     r13d, [rbp+7B0h+var_818]
 * 0000000140C704BB: jmp     loc_140C70945
 * 0000000140C704C0: mov     r13d, r12d
 * 0000000140C704C3: jmp     loc_140C70B5A
 * 0000000140C704C8: mov     rbx, r13
 * 0000000140C704CB: xor     edi, edi
 * 0000000140C704CD: mov     r13d, r12d
 * 0000000140C704D0: mov     [rbp+7B0h+var_740], edi
 * 0000000140C704D3: jmp     short loc_140C7053C
 * 0000000140C704D5: mov     rax, [rsi+2E0h]
 * 0000000140C704DC: mov     rcx, [rbp+7B0h+var_6C0]
 * 0000000140C704E3: call    KeGuardDispatchICall
 * 0000000140C704E8: mov     r14, rax
 * 0000000140C704EB: test    rax, rax
 * 0000000140C704EE: jz      short loc_140C7053C
 * 0000000140C704F0: mov     rax, [rsi+2E8h]
 * 0000000140C704F7: mov     rcx, r14
 * 0000000140C704FA: add     r13d, r15d
 * 0000000140C704FD: call    KeGuardDispatchICall
 * 0000000140C70502: mov     r15, rax
 * 0000000140C70505: lea     rdx, [rbp+7B0h+var_420]
 * 0000000140C7050C: mov     rax, [rsi+218h]
 * 0000000140C70513: mov     rcx, r15
 * 0000000140C70516: call    KeGuardDispatchICall
 * 0000000140C7051B: test    rax, rax
 * 0000000140C7051E: jz      short loc_140C70563
 * 0000000140C70520: mov     rax, [rsi+2F0h]
 * 0000000140C70527: mov     rdx, r14
 * 0000000140C7052A: mov     rcx, [rbp+7B0h+var_6C0]
 * 0000000140C70531: call    KeGuardDispatchICall
 * 0000000140C70536: mov     r15d, 1
 * 0000000140C7053C: mov     rax, [rsi+300h]
 * 0000000140C70543: lea     r8, [rbp+7B0h+var_6C0]
 * 0000000140C7054A: lea     rdx, [rbp+7B0h+var_740]
 * 0000000140C7054E: mov     ecx, r12d
 * 0000000140C70551: call    KeGuardDispatchICall
 * 0000000140C70556: test    eax, eax
 * 0000000140C70558: jnz     loc_140C704D5
 * 0000000140C7055E: jmp     loc_140C70704
 * 0000000140C70563: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C7056D: jz      short loc_140C705BC
 * 0000000140C7056F: mov     rcx, [rsi+0AC8h]
 * 0000000140C70576: mov     edx, 30h ; '0'
 * 0000000140C7057B: lea     r8d, [rdx-2Ah]
 * 0000000140C7057F: lea     r9d, [rdx-2Fh]
 * 0000000140C70583: mov     rax, [rbx]
 * 0000000140C70586: add     edx, 0FFFFFFF8h
 * 0000000140C70589: mov     [rcx], rax
 * 0000000140C7058C: add     rbx, 8
 * 0000000140C70590: add     rcx, 8
 * 0000000140C70594: sub     r8, r9
 * 0000000140C70597: jnz     short loc_140C70583
 * 0000000140C70599: test    edx, edx
 * 0000000140C7059B: jz      short loc_140C705B5
 * 0000000140C7059D: mov     esi, 0FFFFFFFFh
 * 0000000140C705A2: mov     al, [rbx]
 * 0000000140C705A4: add     rbx, r9
 * 0000000140C705A7: mov     [rcx], al
 * 0000000140C705A9: add     rcx, r9
 * 0000000140C705AC: add     edx, esi
 * 0000000140C705AE: jnz     short loc_140C705A2
 * 0000000140C705B0: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C705B5: mov     rbx, [rsi+0AC8h]
 * 0000000140C705BC: mov     [rbx+18h], r15
 * 0000000140C705C0: mov     rax, [rsi+588h]
 * 0000000140C705C7: mov     ecx, r12d
 * 0000000140C705CA: mov     [rax], rbx
 * 0000000140C705CD: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C705D4: mov     rax, [rsi+588h]
 * 0000000140C705DB: mov     [rax+8], r15
 * 0000000140C705DF: mov     r15d, 1
 * 0000000140C705E5: mov     dword ptr [rax+14h], 1000h
 * 0000000140C705EC: cmp     [rsi+918h], edi
 * 0000000140C705F2: jnz     loc_140C70704
 * 0000000140C705F8: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C70602: add     rax, rsi
 * 0000000140C70605: mov     [rsi+920h], rax
 * 0000000140C7060C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C70616: add     rax, rbx
 * 0000000140C70619: mov     [rsi+928h], rax
 * 0000000140C70620: movsxd  rax, dword ptr [rbx]
 * 0000000140C70623: mov     [rsi+930h], rax
 * 0000000140C7062A: mov     [rsi+938h], rcx
 * 0000000140C70631: mov     [rsi+918h], r15d
 * 0000000140C70638: mov     ecx, [rsi+9D8h]
 * 0000000140C7063E: bt      ecx, 1Dh
 * 0000000140C70642: jb      loc_140C70704
 * 0000000140C70648: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C70652: jz      loc_140C70704
 * 0000000140C70658: test    r15b, cl
 * 0000000140C7065B: jz      loc_140C70704
 * 0000000140C70661: mov     ecx, [rsi+0A74h]
 * 0000000140C70667: mov     eax, [rsi+804h]
 * 0000000140C7066D: mov     r10, [rsi+838h]
 * 0000000140C70674: sub     eax, ecx
 * 0000000140C70676: mov     r8, [rsi+0A78h]
 * 0000000140C7067D: lea     rdx, [rcx+rsi]
 * 0000000140C70681: mov     ecx, eax
 * 0000000140C70683: shr     rcx, 3
 * 0000000140C70687: lea     r9, [rdx+rcx*8]
 * 0000000140C7068B: jmp     short loc_140C706AE
 * 0000000140C7068D: xor     [rdx], r8
 * 0000000140C70690: mov     rax, [rdx]
 * 0000000140C70693: movzx   ecx, r8b
 * 0000000140C70697: xor     rax, r10
 * 0000000140C7069A: and     ecx, 3Fh
 * 0000000140C7069D: ror     r8, cl
 * 0000000140C706A0: add     r8, rax
 * 0000000140C706A3: xor     r8, 0F05h
 * 0000000140C706AA: add     rdx, 8
 * 0000000140C706AE: cmp     rdx, r9
 * 0000000140C706B1: jnz     short loc_140C7068D
 * 0000000140C706B3: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C706BB: cmp     r8, [rsi+0A80h]
 * 0000000140C706C2: jz      short loc_140C70704
 * 0000000140C706C4: mov     ecx, [rsi+804h]
 * 0000000140C706CA: mov     rax, [rsi+588h]
 * 0000000140C706D1: mov     [rax], rsi
 * 0000000140C706D4: mov     [rax+10h], ecx
 * 0000000140C706D7: mov     rcx, [rsi+0A80h]
 * 0000000140C706DE: cmp     [rsi+918h], edi
 * 0000000140C706E4: jnz     short loc_140C706F4
 * 0000000140C706E6: mov     rax, [rsi+588h]
 * 0000000140C706ED: xor     rcx, r8
 * 0000000140C706F0: mov     [rax+18h], rcx
 * 0000000140C706F4: xor     edx, edx
 * 0000000140C706F6: mov     r9d, 100h
 * 0000000140C706FC: mov     rcx, rsi
 * 0000000140C706FF: call    sub_140C7F03C
 * 0000000140C70704: add     r12d, r15d
 * 0000000140C70707: cmp     r12d, 3
 * 0000000140C7070B: jb      loc_140C704D0
 * 0000000140C70711: jmp     loc_140C70B55
 * 0000000140C70716: mov     rbx, r13
 * 0000000140C70719: mov     [rbp+7B0h+var_650], r12
 * 0000000140C70720: mov     r13d, r12d
 * 0000000140C70723: mov     r15, cr8
 * 0000000140C70727: mov     [rbp+7B0h+arg_8], r15
 * 0000000140C7072E: mov     eax, 0Ch
 * 0000000140C70733: mov     cr8, rax
 * 0000000140C70737: mov     rax, [rsi+310h]
 * 0000000140C7073E: lea     rcx, [rbp+7B0h+var_650]
 * 0000000140C70745: call    KeGuardDispatchICall
 * 0000000140C7074A: mov     r14, rax
 * 0000000140C7074D: test    rax, rax
 * 0000000140C70750: jz      loc_140C7093D
 * 0000000140C70756: mov     edi, 1
 * 0000000140C7075B: mov     rax, [rsi+218h]
 * 0000000140C70762: lea     rdx, [rbp+7B0h+var_418]
 * 0000000140C70769: mov     rcx, r14
 * 0000000140C7076C: add     r13d, edi
 * 0000000140C7076F: call    KeGuardDispatchICall
 * 0000000140C70774: test    rax, rax
 * 0000000140C70777: jnz     loc_140C70914
 * 0000000140C7077D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C70787: jz      short loc_140C707D0
 * 0000000140C70789: mov     rcx, [rsi+0AC8h]
 * 0000000140C70790: lea     edx, [rax+30h]
 * 0000000140C70793: lea     r8d, [rax+6]
 * 0000000140C70797: mov     rax, [rbx]
 * 0000000140C7079A: add     edx, 0FFFFFFF8h
 * 0000000140C7079D: mov     [rcx], rax
 * 0000000140C707A0: add     rbx, 8
 * 0000000140C707A4: add     rcx, 8
 * 0000000140C707A8: sub     r8, rdi
 * 0000000140C707AB: jnz     short loc_140C70797
 * 0000000140C707AD: test    edx, edx
 * 0000000140C707AF: jz      short loc_140C707C9
 * 0000000140C707B1: mov     esi, 0FFFFFFFFh
 * 0000000140C707B6: mov     al, [rbx]
 * 0000000140C707B8: add     rbx, rdi
 * 0000000140C707BB: mov     [rcx], al
 * 0000000140C707BD: add     rcx, rdi
 * 0000000140C707C0: add     edx, esi
 * 0000000140C707C2: jnz     short loc_140C707B6
 * 0000000140C707C4: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C707C9: mov     rbx, [rsi+0AC8h]
 * 0000000140C707D0: mov     [rbx+18h], r14
 * 0000000140C707D4: mov     rax, [rsi+588h]
 * 0000000140C707DB: mov     [rax], rbx
 * 0000000140C707DE: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C707E5: mov     rax, [rsi+588h]
 * 0000000140C707EC: mov     [rax+8], r14
 * 0000000140C707F0: mov     dword ptr [rax+14h], 1000h
 * 0000000140C707F7: cmp     [rsi+918h], r12d
 * 0000000140C707FE: jnz     loc_140C70914
 * 0000000140C70804: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C7080E: add     rax, rsi
 * 0000000140C70811: mov     [rsi+920h], rax
 * 0000000140C70818: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C70822: add     rax, rbx
 * 0000000140C70825: mov     [rsi+928h], rax
 * 0000000140C7082C: movsxd  rax, dword ptr [rbx]
 * 0000000140C7082F: mov     [rsi+930h], rax
 * 0000000140C70836: mov     qword ptr [rsi+938h], 4
 * 0000000140C70841: mov     [rsi+918h], edi
 * 0000000140C70847: mov     ecx, [rsi+9D8h]
 * 0000000140C7084D: bt      ecx, 1Dh
 * 0000000140C70851: jb      loc_140C70914
 * 0000000140C70857: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C70861: jz      loc_140C70914
 * 0000000140C70867: test    dil, cl
 * 0000000140C7086A: jz      loc_140C70914
 * 0000000140C70870: mov     ecx, [rsi+0A74h]
 * 0000000140C70876: mov     eax, [rsi+804h]
 * 0000000140C7087C: mov     r10, [rsi+838h]
 * 0000000140C70883: sub     eax, ecx
 * 0000000140C70885: mov     r8, [rsi+0A78h]
 * 0000000140C7088C: lea     rdx, [rcx+rsi]
 * 0000000140C70890: mov     ecx, eax
 * 0000000140C70892: shr     rcx, 3
 * 0000000140C70896: lea     r9, [rdx+rcx*8]
 * 0000000140C7089A: jmp     short loc_140C708BD
 * 0000000140C7089C: xor     [rdx], r8
 * 0000000140C7089F: mov     rax, [rdx]
 * 0000000140C708A2: movzx   ecx, r8b
 * 0000000140C708A6: xor     rax, r10
 * 0000000140C708A9: and     ecx, 3Fh
 * 0000000140C708AC: ror     r8, cl
 * 0000000140C708AF: add     r8, rax
 * 0000000140C708B2: xor     r8, 0F05h
 * 0000000140C708B9: add     rdx, 8
 * 0000000140C708BD: cmp     rdx, r9
 * 0000000140C708C0: jnz     short loc_140C7089C
 * 0000000140C708C2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C708CA: cmp     r8, [rsi+0A80h]
 * 0000000140C708D1: jz      short loc_140C70914
 * 0000000140C708D3: mov     ecx, [rsi+804h]
 * 0000000140C708D9: mov     rax, [rsi+588h]
 * 0000000140C708E0: mov     [rax], rsi
 * 0000000140C708E3: mov     [rax+10h], ecx
 * 0000000140C708E6: mov     rcx, [rsi+0A80h]
 * 0000000140C708ED: cmp     [rsi+918h], r12d
 * 0000000140C708F4: jnz     short loc_140C70904
 * 0000000140C708F6: mov     rax, [rsi+588h]
 * 0000000140C708FD: xor     rcx, r8
 * 0000000140C70900: mov     [rax+18h], rcx
 * 0000000140C70904: xor     edx, edx
 * 0000000140C70906: mov     r9d, 100h
 * 0000000140C7090C: mov     rcx, rsi
 * 0000000140C7090F: call    sub_140C7F03C
 * 0000000140C70914: mov     rax, [rsi+310h]
 * 0000000140C7091B: lea     rcx, [rbp+7B0h+var_650]
 * 0000000140C70922: call    KeGuardDispatchICall
 * 0000000140C70927: mov     r14, rax
 * 0000000140C7092A: test    rax, rax
 * 0000000140C7092D: jnz     loc_140C7075B
 * 0000000140C70933: mov     r15, [rbp+7B0h+arg_8]
 * 0000000140C7093A: lea     edi, [rax+2]
 * 0000000140C7093D: movzx   eax, r15b
 * 0000000140C70941: mov     cr8, rax
 * 0000000140C70945: mov     r15d, 1
 * 0000000140C7094B: jmp     loc_140C70B5A
 * 0000000140C70950: mov     [rbp+7B0h+var_658], r12
 * 0000000140C70957: lea     rcx, [rbp+7B0h+var_658]
 * 0000000140C7095E: mov     rax, [rsi+308h]
 * 0000000140C70965: mov     rbx, r13
 * 0000000140C70968: mov     r13d, r12d
 * 0000000140C7096B: call    KeGuardDispatchICall
 * 0000000140C70970: mov     r14, rax
 * 0000000140C70973: test    rax, rax
 * 0000000140C70976: jz      loc_140C70B5A
 * 0000000140C7097C: mov     rax, [rsi+218h]
 * 0000000140C70983: lea     rdx, [rbp+7B0h+var_410]
 * 0000000140C7098A: mov     rcx, r14
 * 0000000140C7098D: add     r13d, r15d
 * 0000000140C70990: call    KeGuardDispatchICall
 * 0000000140C70995: test    rax, rax
 * 0000000140C70998: jnz     loc_140C70B36
 * 0000000140C7099E: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C709A8: jz      short loc_140C709F1
 * 0000000140C709AA: mov     rcx, [rsi+0AC8h]
 * 0000000140C709B1: lea     edx, [rax+30h]
 * 0000000140C709B4: lea     r8d, [rax+6]
 * 0000000140C709B8: mov     rax, [rbx]
 * 0000000140C709BB: add     edx, 0FFFFFFF8h
 * 0000000140C709BE: mov     [rcx], rax
 * 0000000140C709C1: add     rbx, 8
 * 0000000140C709C5: add     rcx, 8
 * 0000000140C709C9: sub     r8, r15
 * 0000000140C709CC: jnz     short loc_140C709B8
 * 0000000140C709CE: test    edx, edx
 * 0000000140C709D0: jz      short loc_140C709EA
 * 0000000140C709D2: mov     esi, 0FFFFFFFFh
 * 0000000140C709D7: mov     al, [rbx]
 * 0000000140C709D9: add     rbx, r15
 * 0000000140C709DC: mov     [rcx], al
 * 0000000140C709DE: add     rcx, r15
 * 0000000140C709E1: add     edx, esi
 * 0000000140C709E3: jnz     short loc_140C709D7
 * 0000000140C709E5: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C709EA: mov     rbx, [rsi+0AC8h]
 * 0000000140C709F1: mov     [rbx+18h], r14
 * 0000000140C709F5: mov     rax, [rsi+588h]
 * 0000000140C709FC: mov     [rax], rbx
 * 0000000140C709FF: mov     dword ptr [rax+10h], 30h ; '0'
 * 0000000140C70A06: mov     rax, [rsi+588h]
 * 0000000140C70A0D: mov     [rax+8], r14
 * 0000000140C70A11: mov     dword ptr [rax+14h], 1000h
 * 0000000140C70A18: cmp     [rsi+918h], r12d
 * 0000000140C70A1F: jnz     loc_140C70B36
 * 0000000140C70A25: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C70A2F: add     rax, rsi
 * 0000000140C70A32: mov     [rsi+920h], rax
 * 0000000140C70A39: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C70A43: add     rax, rbx
 * 0000000140C70A46: mov     [rsi+928h], rax
 * 0000000140C70A4D: movsxd  rax, dword ptr [rbx]
 * 0000000140C70A50: mov     [rsi+930h], rax
 * 0000000140C70A57: mov     qword ptr [rsi+938h], 3
 * 0000000140C70A62: mov     [rsi+918h], r15d
 * 0000000140C70A69: mov     ecx, [rsi+9D8h]
 * 0000000140C70A6F: bt      ecx, 1Dh
 * 0000000140C70A73: jb      loc_140C70B36
 * 0000000140C70A79: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C70A83: jz      loc_140C70B36
 * 0000000140C70A89: test    r15b, cl
 * 0000000140C70A8C: jz      loc_140C70B36
 * 0000000140C70A92: mov     ecx, [rsi+0A74h]
 * 0000000140C70A98: mov     eax, [rsi+804h]
 * 0000000140C70A9E: mov     r10, [rsi+838h]
 * 0000000140C70AA5: sub     eax, ecx
 * 0000000140C70AA7: mov     r8, [rsi+0A78h]
 * 0000000140C70AAE: lea     rdx, [rcx+rsi]
 * 0000000140C70AB2: mov     ecx, eax
 * 0000000140C70AB4: shr     rcx, 3
 * 0000000140C70AB8: lea     r9, [rdx+rcx*8]
 * 0000000140C70ABC: jmp     short loc_140C70ADF
 * 0000000140C70ABE: xor     [rdx], r8
 * 0000000140C70AC1: mov     rax, [rdx]
 * 0000000140C70AC4: movzx   ecx, r8b
 * 0000000140C70AC8: xor     rax, r10
 * 0000000140C70ACB: and     ecx, 3Fh
 * 0000000140C70ACE: ror     r8, cl
 * 0000000140C70AD1: add     r8, rax
 * 0000000140C70AD4: xor     r8, 0F05h
 * 0000000140C70ADB: add     rdx, 8
 * 0000000140C70ADF: cmp     rdx, r9
 * 0000000140C70AE2: jnz     short loc_140C70ABE
 * 0000000140C70AE4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C70AEC: cmp     r8, [rsi+0A80h]
 * 0000000140C70AF3: jz      short loc_140C70B36
 * 0000000140C70AF5: mov     ecx, [rsi+804h]
 * 0000000140C70AFB: mov     rax, [rsi+588h]
 * 0000000140C70B02: mov     [rax], rsi
 * 0000000140C70B05: mov     [rax+10h], ecx
 * 0000000140C70B08: mov     rcx, [rsi+0A80h]
 * 0000000140C70B0F: cmp     [rsi+918h], r12d
 * 0000000140C70B16: jnz     short loc_140C70B26
 * 0000000140C70B18: mov     rax, [rsi+588h]
 * 0000000140C70B1F: xor     rcx, r8
 * 0000000140C70B22: mov     [rax+18h], rcx
 * 0000000140C70B26: xor     edx, edx
 * 0000000140C70B28: mov     r9d, 100h
 * 0000000140C70B2E: mov     rcx, rsi
 * 0000000140C70B31: call    sub_140C7F03C
 * 0000000140C70B36: mov     rax, [rsi+308h]
 * 0000000140C70B3D: lea     rcx, [rbp+7B0h+var_658]
 * 0000000140C70B44: call    KeGuardDispatchICall
 * 0000000140C70B49: mov     r14, rax
 * 0000000140C70B4C: test    rax, rax
 * 0000000140C70B4F: jnz     loc_140C7097C
 * 0000000140C70B55: mov     edi, 2
 * 0000000140C70B5A: shl     r13d, 0Ch
 * 0000000140C70B5E: xor     r12d, r12d
 * 0000000140C70B61: add     [rsi+848h], r13d
 * 0000000140C70B68: mov     eax, [rsi+848h]
 * 0000000140C70B6E: add     [rsi+844h], r15d
 * 0000000140C70B75: cmp     eax, [rsi+84Ch]
 * 0000000140C70B7B: jge     short loc_140C70B99
 * 0000000140C70B7D: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C70B82: lea     r14d, [r12+5]
 * 0000000140C70B87: mov     r11d, 1000h
 * 0000000140C70B8D: jmp     loc_140C6DB56
 * 0000000140C70B92: mov     [rsi+844h], r12d
 * 0000000140C70B99: mov     [rsp+8B0h+var_838], rsi
 * 0000000140C70B9E: jmp     loc_140C75354
 * 0000000140C70BA3: mov     edx, [r13+2Ch]
 * 0000000140C70BA7: lea     rcx, [rbp+7B0h+var_2E8]
 * 0000000140C70BAE: mov     rax, [rsi+1B0h]
 * 0000000140C70BB5: mov     ebx, [r13+28h]
 * 0000000140C70BB9: call    KeGuardDispatchICall
 * 0000000140C70BBE: mov     rax, [rsi+1E0h]
 * 0000000140C70BC5: lea     rdx, [rbp+7B0h+var_2D8]
 * 0000000140C70BCC: lea     rcx, [rbp+7B0h+var_2E8]
 * 0000000140C70BD3: call    KeGuardDispatchICall
 * 0000000140C70BD8: test    ebx, ebx
 * 0000000140C70BDA: mov     rbx, cr4
 * 0000000140C70BDD: jnz     short loc_140C70BE2
 * 0000000140C70BDF: mov     rbx, cr0
 * 0000000140C70BE2: mov     rax, [rsi+1A8h]
 * 0000000140C70BE9: lea     rcx, [rbp+7B0h+var_2D8]
 * 0000000140C70BF0: call    KeGuardDispatchICall
 * 0000000140C70BF5: mov     r8, [r13+18h]
 * 0000000140C70BF9: mov     rdx, [r13+20h]
 * 0000000140C70BFD: and     r8, rbx
 * 0000000140C70C00: cmp     r8, rdx
 * 0000000140C70C03: jz      loc_140C75354
 * 0000000140C70C09: mov     ecx, [r13+2Ch]
 * 0000000140C70C0D: mov     eax, [r13+28h]
 * 0000000140C70C11: shl     rcx, 20h
 * 0000000140C70C15: or      rcx, rax
 * 0000000140C70C18: cmp     [rsi+918h], r12d
 * 0000000140C70C1F: jnz     loc_140C75354
 * 0000000140C70C25: mov     rax, [rsi+588h]
 * 0000000140C70C2C: xor     rdx, r8
 * 0000000140C70C2F: mov     [rax+18h], rdx
 * 0000000140C70C33: cmp     [rsi+918h], r12d
 * 0000000140C70C3A: jnz     loc_140C75354
 * 0000000140C70C40: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C70C4A: add     rax, rsi
 * 0000000140C70C4D: mov     [rsi+920h], rax
 * 0000000140C70C54: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C70C5E: add     rax, r13
 * 0000000140C70C61: mov     [rsi+928h], rax
 * 0000000140C70C68: movsxd  rax, dword ptr [r13+0]
 * 0000000140C70C6C: mov     [rsi+930h], rax
 * 0000000140C70C73: mov     [rsi+938h], rcx
 * 0000000140C70C7A: mov     [rsi+918h], r15d
 * 0000000140C70C81: mov     ecx, [rsi+9D8h]
 * 0000000140C70C87: bt      ecx, 1Dh
 * 0000000140C70C8B: jb      loc_140C75354
 * 0000000140C70C91: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C70C9B: jz      loc_140C75354
 * 0000000140C70CA1: test    r15b, cl
 * 0000000140C70CA4: jz      loc_140C75354
 * 0000000140C70CAA: mov     ecx, [rsi+0A74h]
 * 0000000140C70CB0: mov     eax, [rsi+804h]
 * 0000000140C70CB6: mov     r10, [rsi+838h]
 * 0000000140C70CBD: sub     eax, ecx
 * 0000000140C70CBF: mov     r8, [rsi+0A78h]
 * 0000000140C70CC6: lea     rdx, [rcx+rsi]
 * 0000000140C70CCA: mov     ecx, eax
 * 0000000140C70CCC: shr     rcx, 3
 * 0000000140C70CD0: lea     r9, [rdx+rcx*8]
 * 0000000140C70CD4: jmp     short loc_140C70CF7
 * 0000000140C70CD6: xor     [rdx], r8
 * 0000000140C70CD9: mov     rax, [rdx]
 * 0000000140C70CDC: movzx   ecx, r8b
 * 0000000140C70CE0: xor     rax, r10
 * 0000000140C70CE3: and     ecx, 3Fh
 * 0000000140C70CE6: ror     r8, cl
 * 0000000140C70CE9: add     r8, rax
 * 0000000140C70CEC: xor     r8, 0F05h
 * 0000000140C70CF3: add     rdx, 8
 * 0000000140C70CF7: cmp     rdx, r9
 * 0000000140C70CFA: jnz     short loc_140C70CD6
 * 0000000140C70CFC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C70D04: cmp     r8, [rsi+0A80h]
 * 0000000140C70D0B: jz      loc_140C75354
 * 0000000140C70D11: mov     rax, [rsi+588h]
 * 0000000140C70D18: mov     ecx, [rsi+804h]
 * 0000000140C70D1E: mov     [rax], rsi
 * 0000000140C70D21: mov     [rax+10h], ecx
 * 0000000140C70D24: mov     rax, [rsi+0A80h]
 * 0000000140C70D2B: cmp     [rsi+918h], r12d
 * 0000000140C70D32: jnz     loc_140C6BA94
 * 0000000140C70D38: mov     rcx, r8
 * 0000000140C70D3B: xor     rcx, rax
 * 0000000140C70D3E: jmp     loc_140C6BA89
 * 0000000140C70D43: mov     r9, [r13+8]
 * 0000000140C70D47: xor     r14d, r14d
 * 0000000140C70D4A: mov     r8d, [rsi+844h]
 * 0000000140C70D51: mov     ecx, [r13+24h]
 * 0000000140C70D55: mov     [rbp+7B0h+var_810], r9
 * 0000000140C70D59: lea     rax, [r8+r8*2]
 * 0000000140C70D5D: lea     r11, [r9+rax*4]
 * 0000000140C70D61: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C70D6B: mul     rcx
 * 0000000140C70D6E: lea     rbx, [r11+0Ch]
 * 0000000140C70D72: mov     [rsp+8B0h+var_840], r11
 * 0000000140C70D77: mov     r10, rdx
 * 0000000140C70D7A: mov     [rbp+7B0h+var_828], rbx
 * 0000000140C70D7E: shr     r10, 3
 * 0000000140C70D82: mov     eax, r10d
 * 0000000140C70D85: mov     [rbp+7B0h+var_7D8], r10
 * 0000000140C70D89: lea     rcx, [rax+rax*2]
 * 0000000140C70D8D: lea     rax, [r9+rcx*4]
 * 0000000140C70D91: mov     [rbp+7B0h+var_7B8], rax
 * 0000000140C70D95: lea     rax, [r13+30h]
 * 0000000140C70D99: lea     r12, [r8+rax]
 * 0000000140C70D9D: mov     [rsp+8B0h+var_858], r12
 * 0000000140C70DA2: lea     r9d, [r10-1]
 * 0000000140C70DA6: test    r10d, r10d
 * 0000000140C70DA9: jz      short loc_140C70DBB
 * 0000000140C70DAB: mov     edx, r9d
 * 0000000140C70DAE: add     rdx, 7
 * 0000000140C70DB2: and     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140C70DB6: add     rdx, rax
 * 0000000140C70DB9: jmp     short loc_140C70DBE
 * 0000000140C70DBB: mov     rdx, rax
 * 0000000140C70DBE: movzx   eax, word ptr [r13+28h]
 * 0000000140C70DC3: mov     [rbp+7B0h+var_7E8], rdx
 * 0000000140C70DC7: lea     rcx, [rax+rax*2]
 * 0000000140C70DCB: lea     rax, [rdx+rcx*8]
 * 0000000140C70DCF: mov     [rbp+7B0h+var_808], rax
 * 0000000140C70DD3: test    r10d, r10d
 * 0000000140C70DD6: jz      loc_140C71056
 * 0000000140C70DDC: cmp     r8d, r9d
 * 0000000140C70DDF: jnb     loc_140C71049
 * 0000000140C70DE5: cmp     [r12], r14b
 * 0000000140C70DE9: jl      loc_140C70FE6
 * 0000000140C70DEF: mov     eax, [r11+4]
 * 0000000140C70DF3: mov     r14d, [rbx]
 * 0000000140C70DF6: mov     r15d, eax
 * 0000000140C70DF9: add     r15, [r13+18h]
 * 0000000140C70DFD: sub     r14d, eax
 * 0000000140C70E00: add     [rsi+848h], r14d
 * 0000000140C70E07: mov     r9, r15
 * 0000000140C70E0A: mov     r10d, [rsi+834h]
 * 0000000140C70E11: mov     rax, r15
 * 0000000140C70E14: mov     rbx, [rsi+838h]
 * 0000000140C70E1B: mov     ecx, r14d
 * 0000000140C70E1E: add     rcx, r15
 * 0000000140C70E21: mov     [rbp+7B0h+var_820], r15
 * 0000000140C70E25: cmp     r15, rcx
 * 0000000140C70E28: jnb     short loc_140C70E3A
 * 0000000140C70E2A: mov     edx, 40h ; '@'
 * 0000000140C70E2F: prefetchnta byte ptr [rax]
 * 0000000140C70E32: add     rax, rdx
 * 0000000140C70E35: cmp     rax, rcx
 * 0000000140C70E38: jb      short loc_140C70E2F
 * 0000000140C70E3A: mov     r11d, r14d
 * 0000000140C70E3D: mov     r8, rbx
 * 0000000140C70E40: shr     r11d, 7
 * 0000000140C70E44: mov     r13d, 1
 * 0000000140C70E4A: test    r11d, r11d
 * 0000000140C70E4D: jz      short loc_140C70EB8
 * 0000000140C70E4F: mov     edi, 0FFFFFFFFh
 * 0000000140C70E54: mov     r12, 7010008004002001h
 * 0000000140C70E5E: mov     eax, 8
 * 0000000140C70E63: xor     r8, [r9]
 * 0000000140C70E66: mov     ecx, r10d
 * 0000000140C70E69: rol     r8, cl
 * 0000000140C70E6C: xor     r8, [r9+8]
 * 0000000140C70E70: add     r9, 10h
 * 0000000140C70E74: rol     r8, cl
 * 0000000140C70E77: sub     rax, r13
 * 0000000140C70E7A: jnz     short loc_140C70E63
 * 0000000140C70E7C: mov     rcx, r9
 * 0000000140C70E7F: sub     rcx, r15
 * 0000000140C70E82: xor     rcx, rbx
 * 0000000140C70E85: mov     rax, rcx
 * 0000000140C70E88: rol     rax, 11h
 * 0000000140C70E8C: xor     rcx, rax
 * 0000000140C70E8F: mov     rax, r12
 * 0000000140C70E92: mul     rcx
 * 0000000140C70E95: mov     [rbp+7B0h+var_408], rdx
 * 0000000140C70E9C: xor     rdx, rax
 * 0000000140C70E9F: xor     r10d, edx
 * 0000000140C70EA2: and     r10d, 3Fh
 * 0000000140C70EA6: cmovz   r10d, r13d
 * 0000000140C70EAA: add     r11d, edi
 * 0000000140C70EAD: jnz     short loc_140C70E5E
 * 0000000140C70EAF: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C70EB4: lea     edi, [r11+2]
 * 0000000140C70EB8: mov     edx, r14d
 * 0000000140C70EBB: and     edx, 7Fh
 * 0000000140C70EBE: cmp     edx, 8
 * 0000000140C70EC1: jb      short loc_140C70EDE
 * 0000000140C70EC3: mov     eax, edx
 * 0000000140C70EC5: shr     rax, 3
 * 0000000140C70EC9: xor     r8, [r9]
 * 0000000140C70ECC: mov     ecx, r10d
 * 0000000140C70ECF: rol     r8, cl
 * 0000000140C70ED2: add     r9, 8
 * 0000000140C70ED6: add     edx, 0FFFFFFF8h
 * 0000000140C70ED9: sub     rax, r13
 * 0000000140C70EDC: jnz     short loc_140C70EC9
 * 0000000140C70EDE: xor     r11d, r11d
 * 0000000140C70EE1: test    edx, edx
 * 0000000140C70EE3: jz      short loc_140C70F01
 * 0000000140C70EE5: mov     edi, 0FFFFFFFFh
 * 0000000140C70EEA: movzx   eax, byte ptr [r9]
 * 0000000140C70EEE: mov     ecx, r10d
 * 0000000140C70EF1: xor     r8, rax
 * 0000000140C70EF4: add     r9, r13
 * 0000000140C70EF7: rol     r8, cl
 * 0000000140C70EFA: add     edx, edi
 * 0000000140C70EFC: jnz     short loc_140C70EEA
 * 0000000140C70EFE: lea     edi, [rdx+2]
 * 0000000140C70F01: mov     rax, r8
 * 0000000140C70F04: jmp     short loc_140C70F09
 * 0000000140C70F06: xor     r8b, al
 * 0000000140C70F09: shr     rax, 7
 * 0000000140C70F0D: test    rax, rax
 * 0000000140C70F10: jnz     short loc_140C70F06
 * 0000000140C70F12: movzx   eax, byte ptr [r12]
 * 0000000140C70F17: and     r8b, 7Fh
 * 0000000140C70F1B: movzx   r13d, r8b
 * 0000000140C70F1F: and     eax, 7Fh
 * 0000000140C70F22: cmp     r13d, eax
 * 0000000140C70F25: jz      loc_140C70FC4
 * 0000000140C70F2B: mov     ecx, r14d
 * 0000000140C70F2E: test    r14d, r14d
 * 0000000140C70F31: jz      loc_140C71094
 * 0000000140C70F37: mov     eax, [rsi+9DCh]
 * 0000000140C70F3D: mov     edx, 40h ; '@'
 * 0000000140C70F42: test    dl, al
 * 0000000140C70F44: jz      loc_140C71094
 * 0000000140C70F4A: mov     r14, cr8
 * 0000000140C70F4E: mov     rbx, r15
 * 0000000140C70F51: lea     r12, [r15-1]
 * 0000000140C70F55: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140C70F5C: add     r12, rcx
 * 0000000140C70F5F: or      r12, 0FFFh
 * 0000000140C70F66: lea     r15, [rbx-1]
 * 0000000140C70F6A: mov     cr8, rdi
 * 0000000140C70F6E: mov     rax, [rsi+468h]
 * 0000000140C70F75: xor     edx, edx
 * 0000000140C70F77: mov     rcx, rbx
 * 0000000140C70F7A: call    KeGuardDispatchICall
 * 0000000140C70F7F: cmp     eax, 0C000022Dh
 * 0000000140C70F84: jnz     short loc_140C70F9C
 * 0000000140C70F86: mov     eax, 1
 * 0000000140C70F8B: cmp     r14b, al
 * 0000000140C70F8E: ja      short loc_140C70FA7
 * 0000000140C70F90: movzx   eax, r14b
 * 0000000140C70F94: mov     cr8, rax
 * 0000000140C70F98: mov     al, [rbx]
 * 0000000140C70F9A: jmp     short loc_140C70F6A
 * 0000000140C70F9C: xor     r11d, r11d
 * 0000000140C70F9F: test    eax, eax
 * 0000000140C70FA1: js      loc_140C71083
 * 0000000140C70FA7: mov     eax, 1000h
 * 0000000140C70FAC: add     rbx, rax
 * 0000000140C70FAF: add     r15, rax
 * 0000000140C70FB2: cmp     r15, r12
 * 0000000140C70FB5: jnz     short loc_140C70F6E
 * 0000000140C70FB7: movzx   eax, r14b
 * 0000000140C70FBB: mov     cr8, rax
 * 0000000140C70FBF: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C70FC4: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C70FC9: mov     r15d, 1
 * 0000000140C70FCF: mov     r11, [rsp+8B0h+var_840]
 * 0000000140C70FD4: mov     ecx, 40h ; '@'
 * 0000000140C70FD9: add     [rsi+848h], ecx
 * 0000000140C70FDF: mov     rbx, [rbp+7B0h+var_828]
 * 0000000140C70FE3: xor     r14d, r14d
 * 0000000140C70FE6: mov     eax, 0Ch
 * 0000000140C70FEB: add     r12, r15
 * 0000000140C70FEE: add     r11, rax
 * 0000000140C70FF1: mov     [rsp+8B0h+var_858], r12
 * 0000000140C70FF6: add     rbx, rax
 * 0000000140C70FF9: mov     [rsp+8B0h+var_840], r11
 * 0000000140C70FFE: mov     [rbp+7B0h+var_828], rbx
 * 0000000140C71002: cmp     rbx, [rbp+7B0h+var_7B8]
 * 0000000140C71006: jnb     short loc_140C7101A
 * 0000000140C71008: mov     eax, [rsi+84Ch]
 * 0000000140C7100E: cmp     [rsi+848h], eax
 * 0000000140C71014: jl      loc_140C70DE5
 * 0000000140C7101A: sub     r11, [rbp+7B0h+var_810]
 * 0000000140C7101E: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140C71028: mov     r10, [rbp+7B0h+var_7D8]
 * 0000000140C7102C: imul    r11
 * 0000000140C7102F: sar     rdx, 1
 * 0000000140C71032: mov     rax, rdx
 * 0000000140C71035: shr     rax, 3Fh
 * 0000000140C71039: add     rdx, rax
 * 0000000140C7103C: mov     [rsi+844h], edx
 * 0000000140C71042: mov     r8d, edx
 * 0000000140C71045: mov     rdx, [rbp+7B0h+var_7E8]
 * 0000000140C71049: lea     eax, [r10-1]
 * 0000000140C7104D: cmp     r8d, eax
 * 0000000140C71050: jb      loc_140C6C395
 * 0000000140C71056: mov     eax, [rsi+84Ch]
 * 0000000140C7105C: xor     r12d, r12d
 * 0000000140C7105F: cmp     [rsi+848h], eax
 * 0000000140C71065: jge     loc_140C75354
 * 0000000140C7106B: test    r10d, r10d
 * 0000000140C7106E: jz      loc_140C711E9
 * 0000000140C71074: sub     r8d, r10d
 * 0000000140C71077: add     r8d, r15d
 * 0000000140C7107A: lea     rcx, [r8+r8*2]
 * 0000000140C7107E: jmp     loc_140C711F0
 * 0000000140C71083: movzx   eax, r14b
 * 0000000140C71087: mov     cr8, rax
 * 0000000140C7108B: mov     r15, [rbp+7B0h+var_820]
 * 0000000140C7108F: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C71094: movzx   eax, byte ptr [r12]
 * 0000000140C71099: and     eax, 7Fh
 * 0000000140C7109C: cmp     [rsi+918h], r11d
 * 0000000140C710A3: jnz     loc_140C70FC4
 * 0000000140C710A9: mov     rcx, r13
 * 0000000140C710AC: xor     rcx, rax
 * 0000000140C710AF: mov     rax, [rsi+588h]
 * 0000000140C710B6: mov     [rax+18h], rcx
 * 0000000140C710BA: cmp     [rsi+918h], r11d
 * 0000000140C710C1: jnz     loc_140C70FC4
 * 0000000140C710C7: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C710CC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C710D6: add     rax, rsi
 * 0000000140C710D9: mov     [rsi+920h], rax
 * 0000000140C710E0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C710EA: add     rax, r13
 * 0000000140C710ED: mov     [rsi+928h], rax
 * 0000000140C710F4: movsxd  rax, dword ptr [r13+0]
 * 0000000140C710F8: mov     [rsi+930h], rax
 * 0000000140C710FF: mov     [rsi+938h], r15
 * 0000000140C71106: mov     r15d, 1
 * 0000000140C7110C: mov     [rsi+918h], r15d
 * 0000000140C71113: mov     ecx, [rsi+9D8h]
 * 0000000140C71119: bt      ecx, 1Dh
 * 0000000140C7111D: jb      loc_140C70FCF
 * 0000000140C71123: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7112D: jz      loc_140C70FCF
 * 0000000140C71133: test    r15b, cl
 * 0000000140C71136: jz      loc_140C70FCF
 * 0000000140C7113C: mov     ecx, [rsi+0A74h]
 * 0000000140C71142: mov     eax, [rsi+804h]
 * 0000000140C71148: mov     r10, [rsi+838h]
 * 0000000140C7114F: sub     eax, ecx
 * 0000000140C71151: mov     r8, [rsi+0A78h]
 * 0000000140C71158: lea     rdx, [rcx+rsi]
 * 0000000140C7115C: mov     ecx, eax
 * 0000000140C7115E: shr     rcx, 3
 * 0000000140C71162: lea     r9, [rdx+rcx*8]
 * 0000000140C71166: jmp     short loc_140C71189
 * 0000000140C71168: xor     [rdx], r8
 * 0000000140C7116B: mov     rax, [rdx]
 * 0000000140C7116E: movzx   ecx, r8b
 * 0000000140C71172: xor     rax, r10
 * 0000000140C71175: and     ecx, 3Fh
 * 0000000140C71178: ror     r8, cl
 * 0000000140C7117B: add     r8, rax
 * 0000000140C7117E: xor     r8, 0F05h
 * 0000000140C71185: add     rdx, 8
 * 0000000140C71189: cmp     rdx, r9
 * 0000000140C7118C: jnz     short loc_140C71168
 * 0000000140C7118E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C71196: cmp     r8, [rsi+0A80h]
 * 0000000140C7119D: jz      loc_140C70FCF
 * 0000000140C711A3: mov     ecx, [rsi+804h]
 * 0000000140C711A9: mov     rax, [rsi+588h]
 * 0000000140C711B0: mov     [rax], rsi
 * 0000000140C711B3: mov     [rax+10h], ecx
 * 0000000140C711B6: mov     rcx, [rsi+0A80h]
 * 0000000140C711BD: cmp     [rsi+918h], r11d
 * 0000000140C711C4: jnz     short loc_140C711D4
 * 0000000140C711C6: mov     rax, [rsi+588h]
 * 0000000140C711CD: xor     rcx, r8
 * 0000000140C711D0: mov     [rax+18h], rcx
 * 0000000140C711D4: xor     edx, edx
 * 0000000140C711D6: mov     r9d, 100h
 * 0000000140C711DC: mov     rcx, rsi
 * 0000000140C711DF: call    sub_140C7F03C
 * 0000000140C711E4: jmp     loc_140C70FCF
 * 0000000140C711E9: mov     eax, r8d
 * 0000000140C711EC: lea     rcx, [rax+rax*2]
 * 0000000140C711F0: lea     rcx, [rdx+rcx*8]
 * 0000000140C711F4: mov     [rbp+7B0h+var_828], rcx
 * 0000000140C711F8: lea     r15, [rcx+8]
 * 0000000140C711FC: mov     [rsp+8B0h+var_840], rdi
 * 0000000140C71201: mov     [rsp+8B0h+var_858], r15
 * 0000000140C71206: mov     r13, rdi
 * 0000000140C71209: mov     eax, 1
 * 0000000140C7120E: cmp     [r15], r12d
 * 0000000140C71211: jl      loc_140C71571
 * 0000000140C71217: mov     eax, [r15-8]
 * 0000000140C7121B: mov     r14d, [r15-4]
 * 0000000140C7121F: mov     r12d, eax
 * 0000000140C71222: sub     r14d, eax
 * 0000000140C71225: mov     rax, [rsp+8B0h+var_860]
 * 0000000140C7122A: mov     ecx, r14d
 * 0000000140C7122D: add     r12, [rax+18h]
 * 0000000140C71231: add     [rsi+848h], r14d
 * 0000000140C71238: add     rcx, r12
 * 0000000140C7123B: mov     r9d, [rsi+834h]
 * 0000000140C71242: mov     r8, r12
 * 0000000140C71245: mov     r11, [rsi+838h]
 * 0000000140C7124C: mov     rax, r12
 * 0000000140C7124F: mov     [rbp+7B0h+var_820], r12
 * 0000000140C71253: cmp     r12, rcx
 * 0000000140C71256: jnb     short loc_140C71268
 * 0000000140C71258: mov     edx, 40h ; '@'
 * 0000000140C7125D: prefetchnta byte ptr [rax]
 * 0000000140C71260: add     rax, rdx
 * 0000000140C71263: cmp     rax, rcx
 * 0000000140C71266: jb      short loc_140C7125D
 * 0000000140C71268: mov     r10d, r14d
 * 0000000140C7126B: mov     rbx, r11
 * 0000000140C7126E: shr     r10d, 7
 * 0000000140C71272: test    r10d, r10d
 * 0000000140C71275: jz      short loc_140C712EB
 * 0000000140C71277: mov     edi, 1
 * 0000000140C7127C: mov     r13d, 0FFFFFFFFh
 * 0000000140C71282: mov     r15, 7010008004002001h
 * 0000000140C7128C: mov     eax, 8
 * 0000000140C71291: xor     rbx, [r8]
 * 0000000140C71294: mov     ecx, r9d
 * 0000000140C71297: rol     rbx, cl
 * 0000000140C7129A: xor     rbx, [r8+8]
 * 0000000140C7129E: add     r8, 10h
 * 0000000140C712A2: rol     rbx, cl
 * 0000000140C712A5: sub     rax, rdi
 * 0000000140C712A8: jnz     short loc_140C71291
 * 0000000140C712AA: mov     rcx, r8
 * 0000000140C712AD: sub     rcx, r12
 * 0000000140C712B0: xor     rcx, r11
 * 0000000140C712B3: mov     rax, rcx
 * 0000000140C712B6: rol     rax, 11h
 * 0000000140C712BA: xor     rcx, rax
 * 0000000140C712BD: mov     rax, r15
 * 0000000140C712C0: mul     rcx
 * 0000000140C712C3: mov     [rbp+7B0h+var_400], rdx
 * 0000000140C712CA: xor     rdx, rax
 * 0000000140C712CD: xor     r9d, edx
 * 0000000140C712D0: and     r9d, 3Fh
 * 0000000140C712D4: cmovz   r9d, edi
 * 0000000140C712D8: add     r10d, r13d
 * 0000000140C712DB: jnz     short loc_140C7128C
 * 0000000140C712DD: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C712E2: lea     edi, [r10+2]
 * 0000000140C712E6: mov     r13, [rsp+8B0h+var_840]
 * 0000000140C712EB: mov     edx, r14d
 * 0000000140C712EE: mov     r11d, 1
 * 0000000140C712F4: and     edx, 7Fh
 * 0000000140C712F7: cmp     edx, 8
 * 0000000140C712FA: jb      short loc_140C71317
 * 0000000140C712FC: mov     eax, edx
 * 0000000140C712FE: shr     rax, 3
 * 0000000140C71302: xor     rbx, [r8]
 * 0000000140C71305: mov     ecx, r9d
 * 0000000140C71308: rol     rbx, cl
 * 0000000140C7130B: add     r8, 8
 * 0000000140C7130F: add     edx, 0FFFFFFF8h
 * 0000000140C71312: sub     rax, r11
 * 0000000140C71315: jnz     short loc_140C71302
 * 0000000140C71317: xor     r10d, r10d
 * 0000000140C7131A: test    edx, edx
 * 0000000140C7131C: jz      short loc_140C7133A
 * 0000000140C7131E: mov     edi, 0FFFFFFFFh
 * 0000000140C71323: movzx   eax, byte ptr [r8]
 * 0000000140C71327: mov     ecx, r9d
 * 0000000140C7132A: xor     rbx, rax
 * 0000000140C7132D: add     r8, r11
 * 0000000140C71330: rol     rbx, cl
 * 0000000140C71333: add     edx, edi
 * 0000000140C71335: jnz     short loc_140C71323
 * 0000000140C71337: lea     edi, [rdx+2]
 * 0000000140C7133A: mov     rax, rbx
 * 0000000140C7133D: jmp     short loc_140C71341
 * 0000000140C7133F: xor     ebx, eax
 * 0000000140C71341: shr     rax, 1Fh
 * 0000000140C71345: test    rax, rax
 * 0000000140C71348: jnz     short loc_140C7133F
 * 0000000140C7134A: mov     eax, [r15]
 * 0000000140C7134D: btr     ebx, 1Fh
 * 0000000140C71351: btr     eax, 1Fh
 * 0000000140C71355: cmp     ebx, eax
 * 0000000140C71357: jz      loc_140C71579
 * 0000000140C7135D: mov     ecx, r14d
 * 0000000140C71360: test    r14d, r14d
 * 0000000140C71363: jz      loc_140C71415
 * 0000000140C71369: mov     eax, [rsi+9DCh]
 * 0000000140C7136F: mov     edx, 40h ; '@'
 * 0000000140C71374: test    dl, al
 * 0000000140C71376: jz      loc_140C71415
 * 0000000140C7137C: mov     r15, cr8
 * 0000000140C71380: mov     r14, r12
 * 0000000140C71383: lea     r13, [r12-1]
 * 0000000140C71388: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C7138F: add     r13, rcx
 * 0000000140C71392: or      r13, 0FFFh
 * 0000000140C71399: lea     r12, [r14-1]
 * 0000000140C7139D: mov     cr8, rdi
 * 0000000140C713A1: mov     rax, [rsi+468h]
 * 0000000140C713A8: xor     edx, edx
 * 0000000140C713AA: mov     rcx, r14
 * 0000000140C713AD: call    KeGuardDispatchICall
 * 0000000140C713B2: cmp     eax, 0C000022Dh
 * 0000000140C713B7: jnz     short loc_140C713D0
 * 0000000140C713B9: mov     eax, 1
 * 0000000140C713BE: cmp     r15b, al
 * 0000000140C713C1: ja      short loc_140C713D7
 * 0000000140C713C3: movzx   eax, r15b
 * 0000000140C713C7: mov     cr8, rax
 * 0000000140C713CB: mov     al, [r14]
 * 0000000140C713CE: jmp     short loc_140C7139D
 * 0000000140C713D0: xor     r10d, r10d
 * 0000000140C713D3: test    eax, eax
 * 0000000140C713D5: js      short loc_140C713FF
 * 0000000140C713D7: mov     r11d, 1000h
 * 0000000140C713DD: add     r14, r11
 * 0000000140C713E0: add     r12, r11
 * 0000000140C713E3: cmp     r12, r13
 * 0000000140C713E6: jnz     short loc_140C713A1
 * 0000000140C713E8: movzx   eax, r15b
 * 0000000140C713EC: mov     cr8, rax
 * 0000000140C713F0: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C713F5: mov     r13, [rsp+8B0h+var_840]
 * 0000000140C713FA: jmp     loc_140C7157F
 * 0000000140C713FF: movzx   eax, r15b
 * 0000000140C71403: mov     cr8, rax
 * 0000000140C71407: mov     r12, [rbp+7B0h+var_820]
 * 0000000140C7140B: mov     r15, [rsp+8B0h+var_858]
 * 0000000140C71410: mov     r13, [rsp+8B0h+var_840]
 * 0000000140C71415: mov     eax, [r15]
 * 0000000140C71418: btr     eax, 1Fh
 * 0000000140C7141C: cmp     [rsi+918h], r10d
 * 0000000140C71423: jnz     loc_140C71579
 * 0000000140C71429: mov     ecx, ebx
 * 0000000140C7142B: xor     rcx, rax
 * 0000000140C7142E: mov     rax, [rsi+588h]
 * 0000000140C71435: mov     [rax+18h], rcx
 * 0000000140C71439: cmp     [rsi+918h], r10d
 * 0000000140C71440: jnz     loc_140C71579
 * 0000000140C71446: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C7144B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C71455: add     rax, rsi
 * 0000000140C71458: mov     r11d, 1
 * 0000000140C7145E: mov     [rsi+920h], rax
 * 0000000140C71465: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C7146F: add     rax, rcx
 * 0000000140C71472: mov     [rsi+928h], rax
 * 0000000140C71479: movsxd  rax, dword ptr [rcx]
 * 0000000140C7147C: mov     [rsi+930h], rax
 * 0000000140C71483: mov     [rsi+938h], r12
 * 0000000140C7148A: mov     [rsi+918h], r11d
 * 0000000140C71491: mov     ecx, [rsi+9D8h]
 * 0000000140C71497: bt      ecx, 1Dh
 * 0000000140C7149B: jb      loc_140C71579
 * 0000000140C714A1: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C714AB: jz      loc_140C71569
 * 0000000140C714B1: test    r11b, cl
 * 0000000140C714B4: jz      loc_140C71579
 * 0000000140C714BA: mov     ecx, [rsi+0A74h]
 * 0000000140C714C0: mov     eax, [rsi+804h]
 * 0000000140C714C6: mov     r10, [rsi+838h]
 * 0000000140C714CD: sub     eax, ecx
 * 0000000140C714CF: mov     r8, [rsi+0A78h]
 * 0000000140C714D6: lea     rdx, [rcx+rsi]
 * 0000000140C714DA: mov     ecx, eax
 * 0000000140C714DC: shr     rcx, 3
 * 0000000140C714E0: lea     r9, [rdx+rcx*8]
 * 0000000140C714E4: jmp     short loc_140C71507
 * 0000000140C714E6: xor     [rdx], r8
 * 0000000140C714E9: mov     rax, [rdx]
 * 0000000140C714EC: movzx   ecx, r8b
 * 0000000140C714F0: xor     rax, r10
 * 0000000140C714F3: and     ecx, 3Fh
 * 0000000140C714F6: ror     r8, cl
 * 0000000140C714F9: add     r8, rax
 * 0000000140C714FC: xor     r8, 0F05h
 * 0000000140C71503: add     rdx, 8
 * 0000000140C71507: cmp     rdx, r9
 * 0000000140C7150A: jnz     short loc_140C714E6
 * 0000000140C7150C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C71514: xor     r12d, r12d
 * 0000000140C71517: cmp     r8, [rsi+0A80h]
 * 0000000140C7151E: jz      short loc_140C71561
 * 0000000140C71520: mov     ecx, [rsi+804h]
 * 0000000140C71526: mov     rax, [rsi+588h]
 * 0000000140C7152D: mov     [rax], rsi
 * 0000000140C71530: mov     [rax+10h], ecx
 * 0000000140C71533: mov     rcx, [rsi+0A80h]
 * 0000000140C7153A: cmp     [rsi+918h], r12d
 * 0000000140C71541: jnz     short loc_140C71551
 * 0000000140C71543: mov     rax, [rsi+588h]
 * 0000000140C7154A: xor     rcx, r8
 * 0000000140C7154D: mov     [rax+18h], rcx
 * 0000000140C71551: xor     edx, edx
 * 0000000140C71553: mov     r9d, 100h
 * 0000000140C71559: mov     rcx, rsi
 * 0000000140C7155C: call    sub_140C7F03C
 * 0000000140C71561: mov     r11d, 1000h
 * 0000000140C71567: jmp     short loc_140C71582
 * 0000000140C71569: xor     r12d, r12d
 * 0000000140C7156C: lea     eax, [r12+1]
 * 0000000140C71571: mov     r11d, 1000h
 * 0000000140C71577: jmp     short loc_140C71587
 * 0000000140C71579: mov     r11d, 1000h
 * 0000000140C7157F: xor     r12d, r12d
 * 0000000140C71582: mov     eax, 1
 * 0000000140C71587: add     r15, 0Ch
 * 0000000140C7158B: sub     r13, rax
 * 0000000140C7158E: mov     [rsp+8B0h+var_858], r15
 * 0000000140C71593: mov     [rsp+8B0h+var_840], r13
 * 0000000140C71598: jnz     loc_140C7120E
 * 0000000140C7159E: mov     rcx, [rbp+7B0h+var_828]
 * 0000000140C715A2: mov     r15d, 1
 * 0000000140C715A8: add     [rsi+844h], r15d
 * 0000000140C715AF: add     rcx, 18h
 * 0000000140C715B3: mov     [rbp+7B0h+var_828], rcx
 * 0000000140C715B7: cmp     rcx, [rbp+7B0h+var_808]
 * 0000000140C715BB: jz      short loc_140C715D4
 * 0000000140C715BD: mov     eax, [rsi+84Ch]
 * 0000000140C715C3: cmp     [rsi+848h], eax
 * 0000000140C715C9: jl      loc_140C711F8
 * 0000000140C715CF: jmp     loc_140C773A3
 * 0000000140C715D4: mov     [rsi+844h], r12d
 * 0000000140C715DB: jmp     loc_140C773A3
 * 0000000140C715E0: cmp     r10d, edx
 * 0000000140C715E3: jg      loc_140C7409A
 * 0000000140C715E9: jz      short loc_140C71635
 * 0000000140C715EB: mov     ecx, r10d
 * 0000000140C715EE: sub     ecx, 1Fh
 * 0000000140C715F1: jz      loc_140C726FF
 * 0000000140C715F7: sub     ecx, 1
 * 0000000140C715FA: jz      loc_140C726EF
 * 0000000140C71600: sub     ecx, 1
 * 0000000140C71603: jz      loc_140C726DF
 * 0000000140C71609: sub     ecx, edi
 * 0000000140C7160B: jz      loc_140C720FE
 * 0000000140C71611: sub     ecx, 1
 * 0000000140C71614: jz      loc_140C7194C
 * 0000000140C7161A: sub     ecx, 1
 * 0000000140C7161D: jz      loc_140C7185C
 * 0000000140C71623: sub     ecx, 1
 * 0000000140C71626: jz      loc_140C716FD
 * 0000000140C7162C: cmp     ecx, 1
 * 0000000140C7162F: jnz     loc_140C740DB
 * 0000000140C71635: mov     eax, [r13+24h]
 * 0000000140C71639: add     [rsi+848h], eax
 * 0000000140C7163F: mov     ebx, [r13+20h]
 * 0000000140C71643: mov     r10d, [r13+24h]
 * 0000000140C71647: add     rbx, rsi
 * 0000000140C7164A: mov     r11d, [rsi+834h]
 * 0000000140C71651: mov     r9, rbx
 * 0000000140C71654: mov     r15, [rsi+838h]
 * 0000000140C7165B: mov     rax, rbx
 * 0000000140C7165E: lea     rcx, [rbx+r10]
 * 0000000140C71662: cmp     rbx, rcx
 * 0000000140C71665: jnb     short loc_140C71677
 * 0000000140C71667: mov     edx, 40h ; '@'
 * 0000000140C7166C: prefetchnta byte ptr [rax]
 * 0000000140C7166F: add     rax, rdx
 * 0000000140C71672: cmp     rax, rcx
 * 0000000140C71675: jb      short loc_140C7166C
 * 0000000140C71677: mov     r14d, r10d
 * 0000000140C7167A: mov     r8, r15
 * 0000000140C7167D: shr     r14d, 7
 * 0000000140C71681: test    r14d, r14d
 * 0000000140C71684: jz      loc_140C77250
 * 0000000140C7168A: mov     edi, 1
 * 0000000140C7168F: mov     rsi, 7010008004002001h
 * 0000000140C71699: mov     eax, 8
 * 0000000140C7169E: xor     r8, [r9]
 * 0000000140C716A1: mov     ecx, r11d
 * 0000000140C716A4: rol     r8, cl
 * 0000000140C716A7: xor     r8, [r9+8]
 * 0000000140C716AB: add     r9, 10h
 * 0000000140C716AF: rol     r8, cl
 * 0000000140C716B2: sub     rax, rdi
 * 0000000140C716B5: jnz     short loc_140C7169E
 * 0000000140C716B7: mov     rcx, r9
 * 0000000140C716BA: sub     rcx, rbx
 * 0000000140C716BD: xor     rcx, r15
 * 0000000140C716C0: mov     rax, rcx
 * 0000000140C716C3: rol     rax, 11h
 * 0000000140C716C7: xor     rcx, rax
 * 0000000140C716CA: mov     rax, rsi
 * 0000000140C716CD: mul     rcx
 * 0000000140C716D0: mov     [rbp+7B0h+var_398], rdx
 * 0000000140C716D7: xor     rdx, rax
 * 0000000140C716DA: xor     r11d, edx
 * 0000000140C716DD: mov     edx, 0FFFFFFFFh
 * 0000000140C716E2: and     r11d, 3Fh
 * 0000000140C716E6: cmovz   r11d, edi
 * 0000000140C716EA: add     r14d, edx
 * 0000000140C716ED: jnz     short loc_140C71699
 * 0000000140C716EF: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C716F4: lea     edi, [r14+2]
 * 0000000140C716F8: jmp     loc_140C77255
 * 0000000140C716FD: mov     edx, [r13+2Ch]
 * 0000000140C71701: lea     rcx, [rbp+7B0h+var_2C8]
 * 0000000140C71708: mov     rax, [rsi+1B0h]
 * 0000000140C7170F: call    KeGuardDispatchICall
 * 0000000140C71714: mov     rax, [rsi+1E0h]
 * 0000000140C7171B: lea     rdx, [rbp+7B0h+var_2B8]
 * 0000000140C71722: lea     rcx, [rbp+7B0h+var_2C8]
 * 0000000140C71729: call    KeGuardDispatchICall
 * 0000000140C7172E: xor     ecx, ecx
 * 0000000140C71730: xgetbv
 * 0000000140C71733: shl     rdx, 20h
 * 0000000140C71737: lea     rcx, [rbp+7B0h+var_2B8]
 * 0000000140C7173E: or      rdx, rax
 * 0000000140C71741: mov     rax, [rsi+1A8h]
 * 0000000140C71748: mov     rbx, rdx
 * 0000000140C7174B: call    KeGuardDispatchICall
 * 0000000140C71750: mov     r8, [r13+18h]
 * 0000000140C71754: mov     rdx, [r13+20h]
 * 0000000140C71758: and     r8, rbx
 * 0000000140C7175B: cmp     r8, rdx
 * 0000000140C7175E: jz      loc_140C75354
 * 0000000140C71764: mov     ecx, [r13+2Ch]
 * 0000000140C71768: mov     eax, [r13+28h]
 * 0000000140C7176C: shl     rcx, 20h
 * 0000000140C71770: or      rcx, rax
 * 0000000140C71773: cmp     [rsi+918h], r12d
 * 0000000140C7177A: jnz     loc_140C75354
 * 0000000140C71780: mov     rax, [rsi+588h]
 * 0000000140C71787: xor     rdx, r8
 * 0000000140C7178A: mov     [rax+18h], rdx
 * 0000000140C7178E: cmp     [rsi+918h], r12d
 * 0000000140C71795: jnz     loc_140C75354
 * 0000000140C7179B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C717A5: add     rax, rsi
 * 0000000140C717A8: mov     [rsi+920h], rax
 * 0000000140C717AF: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C717B9: add     rax, r13
 * 0000000140C717BC: mov     [rsi+928h], rax
 * 0000000140C717C3: movsxd  rax, dword ptr [r13+0]
 * 0000000140C717C7: mov     [rsi+930h], rax
 * 0000000140C717CE: mov     [rsi+938h], rcx
 * 0000000140C717D5: mov     [rsi+918h], r15d
 * 0000000140C717DC: mov     ecx, [rsi+9D8h]
 * 0000000140C717E2: bt      ecx, 1Dh
 * 0000000140C717E6: jb      loc_140C75354
 * 0000000140C717EC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C717F6: jz      loc_140C75354
 * 0000000140C717FC: test    r15b, cl
 * 0000000140C717FF: jz      loc_140C75354
 * 0000000140C71805: mov     ecx, [rsi+0A74h]
 * 0000000140C7180B: mov     eax, [rsi+804h]
 * 0000000140C71811: mov     r10, [rsi+838h]
 * 0000000140C71818: sub     eax, ecx
 * 0000000140C7181A: mov     r8, [rsi+0A78h]
 * 0000000140C71821: lea     rdx, [rcx+rsi]
 * 0000000140C71825: mov     ecx, eax
 * 0000000140C71827: shr     rcx, 3
 * 0000000140C7182B: lea     r9, [rdx+rcx*8]
 * 0000000140C7182F: jmp     short loc_140C71852
 * 0000000140C71831: xor     [rdx], r8
 * 0000000140C71834: mov     rax, [rdx]
 * 0000000140C71837: movzx   ecx, r8b
 * 0000000140C7183B: xor     rax, r10
 * 0000000140C7183E: and     ecx, 3Fh
 * 0000000140C71841: ror     r8, cl
 * 0000000140C71844: add     r8, rax
 * 0000000140C71847: xor     r8, 0F05h
 * 0000000140C7184E: add     rdx, 8
 * 0000000140C71852: cmp     rdx, r9
 * 0000000140C71855: jnz     short loc_140C71831
 * 0000000140C71857: jmp     loc_140C6BA4E
 * 0000000140C7185C: mov     eax, [rsi+9DCh]
 * 0000000140C71862: test    al, 4
 * 0000000140C71864: jnz     loc_140C773A3
 * 0000000140C7186A: mov     rax, [rsi+430h]
 * 0000000140C71871: call    KeGuardDispatchICall
 * 0000000140C71876: test    al, al
 * 0000000140C71878: jz      loc_140C75354
 * 0000000140C7187E: cmp     [rsi+918h], r12d
 * 0000000140C71885: jnz     loc_140C75354
 * 0000000140C7188B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C71895: add     rax, rsi
 * 0000000140C71898: mov     [rsi+920h], rax
 * 0000000140C7189F: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C718A9: add     rax, r13
 * 0000000140C718AC: mov     [rsi+928h], rax
 * 0000000140C718B3: movsxd  rax, dword ptr [r13+0]
 * 0000000140C718B7: mov     [rsi+930h], rax
 * 0000000140C718BE: mov     [rsi+938h], r12
 * 0000000140C718C5: mov     [rsi+918h], r15d
 * 0000000140C718CC: mov     ecx, [rsi+9D8h]
 * 0000000140C718D2: bt      ecx, 1Dh
 * 0000000140C718D6: jb      loc_140C75354
 * 0000000140C718DC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C718E6: jz      loc_140C75354
 * 0000000140C718EC: test    r15b, cl
 * 0000000140C718EF: jz      loc_140C75354
 * 0000000140C718F5: mov     ecx, [rsi+0A74h]
 * 0000000140C718FB: mov     eax, [rsi+804h]
 * 0000000140C71901: mov     r10, [rsi+838h]
 * 0000000140C71908: sub     eax, ecx
 * 0000000140C7190A: mov     r8, [rsi+0A78h]
 * 0000000140C71911: lea     rdx, [rcx+rsi]
 * 0000000140C71915: mov     ecx, eax
 * 0000000140C71917: shr     rcx, 3
 * 0000000140C7191B: lea     r9, [rdx+rcx*8]
 * 0000000140C7191F: jmp     short loc_140C71942
 * 0000000140C71921: xor     [rdx], r8
 * 0000000140C71924: mov     rax, [rdx]
 * 0000000140C71927: movzx   ecx, r8b
 * 0000000140C7192B: xor     rax, r10
 * 0000000140C7192E: and     ecx, 3Fh
 * 0000000140C71931: ror     r8, cl
 * 0000000140C71934: add     r8, rax
 * 0000000140C71937: xor     r8, 0F05h
 * 0000000140C7193E: add     rdx, 8
 * 0000000140C71942: cmp     rdx, r9
 * 0000000140C71945: jnz     short loc_140C71921
 * 0000000140C71947: jmp     loc_140C6BA4E
 * 0000000140C7194C: mov     r14, [r13+8]
 * 0000000140C71950: mov     r8d, [r13+10h]
 * 0000000140C71954: mov     r9, r14
 * 0000000140C71957: add     [rsi+848h], r8d
 * 0000000140C7195E: mov     rax, r14
 * 0000000140C71961: mov     r10d, [rsi+834h]
 * 0000000140C71968: mov     r15, [rsi+838h]
 * 0000000140C7196F: lea     rcx, [r14+r8]
 * 0000000140C71973: cmp     r14, rcx
 * 0000000140C71976: jnb     short loc_140C71988
 * 0000000140C71978: mov     edx, 40h ; '@'
 * 0000000140C7197D: prefetchnta byte ptr [rax]
 * 0000000140C71980: add     rax, rdx
 * 0000000140C71983: cmp     rax, rcx
 * 0000000140C71986: jb      short loc_140C7197D
 * 0000000140C71988: mov     r11d, r8d
 * 0000000140C7198B: mov     rbx, r15
 * 0000000140C7198E: shr     r11d, 7
 * 0000000140C71992: mov     edx, 1
 * 0000000140C71997: test    r11d, r11d
 * 0000000140C7199A: jz      short loc_140C71A09
 * 0000000140C7199C: mov     edi, 0FFFFFFFFh
 * 0000000140C719A1: mov     rsi, 7010008004002001h
 * 0000000140C719AB: mov     eax, 8
 * 0000000140C719B0: xor     rbx, [r9]
 * 0000000140C719B3: mov     ecx, r10d
 * 0000000140C719B6: rol     rbx, cl
 * 0000000140C719B9: xor     rbx, [r9+8]
 * 0000000140C719BD: add     r9, 10h
 * 0000000140C719C1: rol     rbx, cl
 * 0000000140C719C4: sub     rax, rdx
 * 0000000140C719C7: jnz     short loc_140C719B0
 * 0000000140C719C9: mov     rcx, r9
 * 0000000140C719CC: sub     rcx, r14
 * 0000000140C719CF: xor     rcx, r15
 * 0000000140C719D2: mov     rax, rcx
 * 0000000140C719D5: rol     rax, 11h
 * 0000000140C719D9: xor     rcx, rax
 * 0000000140C719DC: mov     rax, rsi
 * 0000000140C719DF: mul     rcx
 * 0000000140C719E2: mov     [rbp+7B0h+var_3F8], rdx
 * 0000000140C719E9: xor     rdx, rax
 * 0000000140C719EC: xor     r10d, edx
 * 0000000140C719EF: mov     edx, 1
 * 0000000140C719F4: and     r10d, 3Fh
 * 0000000140C719F8: cmovz   r10d, edx
 * 0000000140C719FC: add     r11d, edi
 * 0000000140C719FF: jnz     short loc_140C719AB
 * 0000000140C71A01: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C71A06: lea     edi, [rdx+1]
 * 0000000140C71A09: and     r8d, 7Fh
 * 0000000140C71A0D: cmp     r8d, 8
 * 0000000140C71A11: jb      short loc_140C71A30
 * 0000000140C71A13: mov     eax, r8d
 * 0000000140C71A16: shr     rax, 3
 * 0000000140C71A1A: xor     rbx, [r9]
 * 0000000140C71A1D: mov     ecx, r10d
 * 0000000140C71A20: rol     rbx, cl
 * 0000000140C71A23: add     r9, 8
 * 0000000140C71A27: add     r8d, 0FFFFFFF8h
 * 0000000140C71A2B: sub     rax, rdx
 * 0000000140C71A2E: jnz     short loc_140C71A1A
 * 0000000140C71A30: test    r8d, r8d
 * 0000000140C71A33: jz      short loc_140C71A53
 * 0000000140C71A35: mov     edi, 0FFFFFFFFh
 * 0000000140C71A3A: movzx   eax, byte ptr [r9]
 * 0000000140C71A3E: mov     ecx, r10d
 * 0000000140C71A41: xor     rbx, rax
 * 0000000140C71A44: add     r9, rdx
 * 0000000140C71A47: rol     rbx, cl
 * 0000000140C71A4A: add     r8d, edi
 * 0000000140C71A4D: jnz     short loc_140C71A3A
 * 0000000140C71A4F: lea     edi, [r8+2]
 * 0000000140C71A53: mov     rax, rbx
 * 0000000140C71A56: jmp     short loc_140C71A5A
 * 0000000140C71A58: xor     ebx, eax
 * 0000000140C71A5A: shr     rax, 1Fh
 * 0000000140C71A5E: test    rax, rax
 * 0000000140C71A61: jnz     short loc_140C71A58
 * 0000000140C71A63: btr     ebx, 1Fh
 * 0000000140C71A67: cmp     ebx, [r13+14h]
 * 0000000140C71A6B: jz      loc_140C71C7A
 * 0000000140C71A71: xor     r11d, r11d
 * 0000000140C71A74: cmp     [r13+0], r11d
 * 0000000140C71A78: jnz     short loc_140C71A82
 * 0000000140C71A7A: cmp     [r13+18h], r11d
 * 0000000140C71A7E: cmovnz  r12d, edx
 * 0000000140C71A82: mov     ecx, [r13+10h]
 * 0000000140C71A86: mov     rdx, [r13+8]
 * 0000000140C71A8A: test    rcx, rcx
 * 0000000140C71A8D: jz      loc_140C71B39
 * 0000000140C71A93: mov     eax, [rsi+9DCh]
 * 0000000140C71A99: mov     r8d, 40h ; '@'
 * 0000000140C71A9F: test    r8b, al
 * 0000000140C71AA2: jz      loc_140C71B39
 * 0000000140C71AA8: mov     r15, cr8
 * 0000000140C71AAC: mov     r14, rdx
 * 0000000140C71AAF: lea     rax, [rcx-1]
 * 0000000140C71AB3: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C71ABA: add     rax, rdx
 * 0000000140C71ABD: or      rax, 0FFFh
 * 0000000140C71AC3: mov     [rbp+7B0h+var_820], rax
 * 0000000140C71AC7: lea     r13, [r14-1]
 * 0000000140C71ACB: mov     cr8, rdi
 * 0000000140C71ACF: mov     rax, [rsi+468h]
 * 0000000140C71AD6: xor     edx, edx
 * 0000000140C71AD8: mov     rcx, r14
 * 0000000140C71ADB: call    KeGuardDispatchICall
 * 0000000140C71AE0: xor     r11d, r11d
 * 0000000140C71AE3: cmp     eax, 0C000022Dh
 * 0000000140C71AE8: jnz     short loc_140C71B05
 * 0000000140C71AEA: test    r12d, r12d
 * 0000000140C71AED: jnz     short loc_140C71B2C
 * 0000000140C71AEF: lea     eax, [r11+1]
 * 0000000140C71AF3: cmp     r15b, al
 * 0000000140C71AF6: ja      short loc_140C71B09
 * 0000000140C71AF8: movzx   eax, r15b
 * 0000000140C71AFC: mov     cr8, rax
 * 0000000140C71B00: mov     al, [r14]
 * 0000000140C71B03: jmp     short loc_140C71ACB
 * 0000000140C71B05: test    eax, eax
 * 0000000140C71B07: js      short loc_140C71B2C
 * 0000000140C71B09: mov     eax, 1000h
 * 0000000140C71B0E: add     r14, rax
 * 0000000140C71B11: add     r13, rax
 * 0000000140C71B14: cmp     r13, [rbp+7B0h+var_820]
 * 0000000140C71B18: jnz     short loc_140C71ACF
 * 0000000140C71B1A: movzx   eax, r15b
 * 0000000140C71B1E: mov     cr8, rax
 * 0000000140C71B22: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C71B27: jmp     loc_140C71C7A
 * 0000000140C71B2C: movzx   eax, r15b
 * 0000000140C71B30: mov     cr8, rax
 * 0000000140C71B34: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C71B39: mov     eax, [r13+14h]
 * 0000000140C71B3D: cmp     [rsi+918h], r11d
 * 0000000140C71B44: jnz     short loc_140C71B58
 * 0000000140C71B46: mov     ecx, eax
 * 0000000140C71B48: mov     eax, ebx
 * 0000000140C71B4A: xor     rcx, rax
 * 0000000140C71B4D: mov     rax, [rsi+588h]
 * 0000000140C71B54: mov     [rax+18h], rcx
 * 0000000140C71B58: mov     rcx, [r13+8]
 * 0000000140C71B5C: cmp     [rsi+918h], r11d
 * 0000000140C71B63: jnz     loc_140C71C7A
 * 0000000140C71B69: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C71B73: mov     edx, 1
 * 0000000140C71B78: add     rax, rsi
 * 0000000140C71B7B: mov     [rsi+920h], rax
 * 0000000140C71B82: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C71B8C: add     rax, r13
 * 0000000140C71B8F: mov     [rsi+928h], rax
 * 0000000140C71B96: movsxd  rax, dword ptr [r13+0]
 * 0000000140C71B9A: mov     [rsi+930h], rax
 * 0000000140C71BA1: mov     [rsi+938h], rcx
 * 0000000140C71BA8: mov     [rsi+918h], edx
 * 0000000140C71BAE: mov     ecx, [rsi+9D8h]
 * 0000000140C71BB4: bt      ecx, 1Dh
 * 0000000140C71BB8: jb      loc_140C71C7A
 * 0000000140C71BBE: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C71BC8: jz      loc_140C71C7A
 * 0000000140C71BCE: test    dl, cl
 * 0000000140C71BD0: jz      loc_140C71C7A
 * 0000000140C71BD6: mov     ecx, [rsi+0A74h]
 * 0000000140C71BDC: mov     eax, [rsi+804h]
 * 0000000140C71BE2: mov     r10, [rsi+838h]
 * 0000000140C71BE9: sub     eax, ecx
 * 0000000140C71BEB: mov     r8, [rsi+0A78h]
 * 0000000140C71BF2: lea     rdx, [rcx+rsi]
 * 0000000140C71BF6: mov     ecx, eax
 * 0000000140C71BF8: shr     rcx, 3
 * 0000000140C71BFC: lea     r9, [rdx+rcx*8]
 * 0000000140C71C00: jmp     short loc_140C71C23
 * 0000000140C71C02: xor     [rdx], r8
 * 0000000140C71C05: mov     rax, [rdx]
 * 0000000140C71C08: movzx   ecx, r8b
 * 0000000140C71C0C: xor     rax, r10
 * 0000000140C71C0F: and     ecx, 3Fh
 * 0000000140C71C12: ror     r8, cl
 * 0000000140C71C15: add     r8, rax
 * 0000000140C71C18: xor     r8, 0F05h
 * 0000000140C71C1F: add     rdx, 8
 * 0000000140C71C23: cmp     rdx, r9
 * 0000000140C71C26: jnz     short loc_140C71C02
 * 0000000140C71C28: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C71C30: cmp     r8, [rsi+0A80h]
 * 0000000140C71C37: jz      short loc_140C71C7A
 * 0000000140C71C39: mov     ecx, [rsi+804h]
 * 0000000140C71C3F: mov     rax, [rsi+588h]
 * 0000000140C71C46: mov     [rax], rsi
 * 0000000140C71C49: mov     [rax+10h], ecx
 * 0000000140C71C4C: mov     rcx, [rsi+0A80h]
 * 0000000140C71C53: cmp     [rsi+918h], r11d
 * 0000000140C71C5A: jnz     short loc_140C71C6A
 * 0000000140C71C5C: mov     rax, [rsi+588h]
 * 0000000140C71C63: xor     rcx, r8
 * 0000000140C71C66: mov     [rax+18h], rcx
 * 0000000140C71C6A: xor     edx, edx
 * 0000000140C71C6C: mov     r9d, 100h
 * 0000000140C71C72: mov     rcx, rsi
 * 0000000140C71C75: call    sub_140C7F03C
 * 0000000140C71C7A: mov     rcx, [rsi+538h]
 * 0000000140C71C81: mov     r14, cr8
 * 0000000140C71C85: mov     eax, 0Fh
 * 0000000140C71C8A: mov     cr8, rax
 * 0000000140C71C8E: mov     rax, [rsi+160h]
 * 0000000140C71C95: call    KeGuardDispatchICall
 * 0000000140C71C9A: mov     rax, [rsi+620h]
 * 0000000140C71CA1: mov     rcx, [rax]
 * 0000000140C71CA4: mov     eax, [rcx]
 * 0000000140C71CA6: lea     rbx, [rcx+10h]
 * 0000000140C71CAA: mov     r15b, [rcx+0Ch]
 * 0000000140C71CAE: lea     rcx, [rax+rax*2]
 * 0000000140C71CB2: lea     r12, [rbx+rcx*8]
 * 0000000140C71CB6: mov     edx, 18h
 * 0000000140C71CBB: lea     r8, [r13+18h]
 * 0000000140C71CBF: mov     r9, rbx
 * 0000000140C71CC2: mov     rcx, [r9]
 * 0000000140C71CC5: add     r9, 8
 * 0000000140C71CC9: mov     rax, [r8]
 * 0000000140C71CCC: add     r8, 8
 * 0000000140C71CD0: cmp     rcx, rax
 * 0000000140C71CD3: jnz     short loc_140C71D02
 * 0000000140C71CD5: add     edx, 0FFFFFFF8h
 * 0000000140C71CD8: cmp     edx, 8
 * 0000000140C71CDB: jnb     short loc_140C71CC2
 * 0000000140C71CDD: test    edx, edx
 * 0000000140C71CDF: jz      short loc_140C71D0B
 * 0000000140C71CE1: mov     r11d, 1
 * 0000000140C71CE7: mov     cl, [r9]
 * 0000000140C71CEA: add     r9, r11
 * 0000000140C71CED: mov     al, [r8]
 * 0000000140C71CF0: add     r8, r11
 * 0000000140C71CF3: cmp     cl, al
 * 0000000140C71CF5: jnz     short loc_140C71D02
 * 0000000140C71CF7: mov     eax, 0FFFFFFFFh
 * 0000000140C71CFC: add     edx, eax
 * 0000000140C71CFE: jnz     short loc_140C71CE7
 * 0000000140C71D00: jmp     short loc_140C71D0B
 * 0000000140C71D02: add     rbx, 18h
 * 0000000140C71D06: cmp     rbx, r12
 * 0000000140C71D09: jb      short loc_140C71CB6
 * 0000000140C71D0B: mov     rcx, [rsi+538h]
 * 0000000140C71D12: mov     rax, [rsi+1A0h]
 * 0000000140C71D19: call    KeGuardDispatchICall
 * 0000000140C71D1E: movzx   eax, r14b
 * 0000000140C71D22: mov     cr8, rax
 * 0000000140C71D26: xor     r11d, r11d
 * 0000000140C71D29: lea     edi, [r11+2]
 * 0000000140C71D2D: lea     r14d, [r11+1]
 * 0000000140C71D31: test    r15b, r15b
 * 0000000140C71D34: jz      loc_140C71E6A
 * 0000000140C71D3A: mov     ecx, [rsi+9DCh]
 * 0000000140C71D40: lea     eax, [rdi+0Eh]
 * 0000000140C71D43: test    al, cl
 * 0000000140C71D45: jz      loc_140C71E60
 * 0000000140C71D4B: cmp     [rsi+918h], r11d
 * 0000000140C71D52: jnz     loc_140C71E60
 * 0000000140C71D58: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C71D62: add     rax, rsi
 * 0000000140C71D65: mov     [rsi+920h], rax
 * 0000000140C71D6C: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C71D76: add     rax, r13
 * 0000000140C71D79: mov     [rsi+928h], rax
 * 0000000140C71D80: movsxd  rax, dword ptr [r13+0]
 * 0000000140C71D84: mov     [rsi+930h], rax
 * 0000000140C71D8B: mov     [rsi+938h], r14
 * 0000000140C71D92: mov     [rsi+918h], r14d
 * 0000000140C71D99: mov     eax, [rsi+9D8h]
 * 0000000140C71D9F: bt      eax, 1Dh
 * 0000000140C71DA3: jb      loc_140C71E60
 * 0000000140C71DA9: bt      ecx, 15h
 * 0000000140C71DAD: jnb     loc_140C71E60
 * 0000000140C71DB3: test    r14b, al
 * 0000000140C71DB6: jz      loc_140C71E60
 * 0000000140C71DBC: mov     ecx, [rsi+0A74h]
 * 0000000140C71DC2: mov     eax, [rsi+804h]
 * 0000000140C71DC8: mov     r10, [rsi+838h]
 * 0000000140C71DCF: sub     eax, ecx
 * 0000000140C71DD1: mov     r8, [rsi+0A78h]
 * 0000000140C71DD8: lea     rdx, [rcx+rsi]
 * 0000000140C71DDC: mov     ecx, eax
 * 0000000140C71DDE: shr     rcx, 3
 * 0000000140C71DE2: lea     r9, [rdx+rcx*8]
 * 0000000140C71DE6: jmp     short loc_140C71E09
 * 0000000140C71DE8: xor     [rdx], r8
 * 0000000140C71DEB: mov     rax, [rdx]
 * 0000000140C71DEE: movzx   ecx, r8b
 * 0000000140C71DF2: xor     rax, r10
 * 0000000140C71DF5: and     ecx, 3Fh
 * 0000000140C71DF8: ror     r8, cl
 * 0000000140C71DFB: add     r8, rax
 * 0000000140C71DFE: xor     r8, 0F05h
 * 0000000140C71E05: add     rdx, 8
 * 0000000140C71E09: cmp     rdx, r9
 * 0000000140C71E0C: jnz     short loc_140C71DE8
 * 0000000140C71E0E: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C71E16: cmp     r8, [rsi+0A80h]
 * 0000000140C71E1D: jz      short loc_140C71E60
 * 0000000140C71E1F: mov     ecx, [rsi+804h]
 * 0000000140C71E25: mov     rax, [rsi+588h]
 * 0000000140C71E2C: mov     [rax], rsi
 * 0000000140C71E2F: mov     [rax+10h], ecx
 * 0000000140C71E32: mov     rcx, [rsi+0A80h]
 * 0000000140C71E39: cmp     [rsi+918h], r11d
 * 0000000140C71E40: jnz     short loc_140C71E50
 * 0000000140C71E42: mov     rax, [rsi+588h]
 * 0000000140C71E49: xor     rcx, r8
 * 0000000140C71E4C: mov     [rax+18h], rcx
 * 0000000140C71E50: xor     edx, edx
 * 0000000140C71E52: mov     r9d, 100h
 * 0000000140C71E58: mov     rcx, rsi
 * 0000000140C71E5B: call    sub_140C7F03C
 * 0000000140C71E60: cmp     [r13+18h], r14
 * 0000000140C71E64: jz      loc_140C71F93
 * 0000000140C71E6A: cmp     rbx, r12
 * 0000000140C71E6D: jnz     loc_140C71F93
 * 0000000140C71E73: xor     r12d, r12d
 * 0000000140C71E76: cmp     [rsi+918h], r12d
 * 0000000140C71E7D: jnz     loc_140C71F96
 * 0000000140C71E83: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C71E8D: add     rax, rsi
 * 0000000140C71E90: mov     [rsi+920h], rax
 * 0000000140C71E97: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C71EA1: add     rax, r13
 * 0000000140C71EA4: mov     [rsi+928h], rax
 * 0000000140C71EAB: movsxd  rax, dword ptr [r13+0]
 * 0000000140C71EAF: mov     [rsi+930h], rax
 * 0000000140C71EB6: mov     [rsi+938h], rbx
 * 0000000140C71EBD: mov     [rsi+918h], r14d
 * 0000000140C71EC4: mov     ecx, [rsi+9D8h]
 * 0000000140C71ECA: bt      ecx, 1Dh
 * 0000000140C71ECE: jb      loc_140C71F96
 * 0000000140C71ED4: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C71EDE: jz      loc_140C71F96
 * 0000000140C71EE4: test    r14b, cl
 * 0000000140C71EE7: jz      loc_140C71F96
 * 0000000140C71EED: mov     ecx, [rsi+0A74h]
 * 0000000140C71EF3: mov     eax, [rsi+804h]
 * 0000000140C71EF9: mov     r10, [rsi+838h]
 * 0000000140C71F00: sub     eax, ecx
 * 0000000140C71F02: mov     r8, [rsi+0A78h]
 * 0000000140C71F09: lea     rdx, [rcx+rsi]
 * 0000000140C71F0D: mov     ecx, eax
 * 0000000140C71F0F: shr     rcx, 3
 * 0000000140C71F13: lea     r9, [rdx+rcx*8]
 * 0000000140C71F17: jmp     short loc_140C71F3A
 * 0000000140C71F19: xor     [rdx], r8
 * 0000000140C71F1C: mov     rax, [rdx]
 * 0000000140C71F1F: movzx   ecx, r8b
 * 0000000140C71F23: xor     rax, r10
 * 0000000140C71F26: and     ecx, 3Fh
 * 0000000140C71F29: ror     r8, cl
 * 0000000140C71F2C: add     r8, rax
 * 0000000140C71F2F: xor     r8, 0F05h
 * 0000000140C71F36: add     rdx, 8
 * 0000000140C71F3A: cmp     rdx, r9
 * 0000000140C71F3D: jnz     short loc_140C71F19
 * 0000000140C71F3F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C71F47: cmp     r8, [rsi+0A80h]
 * 0000000140C71F4E: jz      short loc_140C71F96
 * 0000000140C71F50: mov     ecx, [rsi+804h]
 * 0000000140C71F56: mov     rax, [rsi+588h]
 * 0000000140C71F5D: mov     [rax], rsi
 * 0000000140C71F60: mov     [rax+10h], ecx
 * 0000000140C71F63: mov     rcx, [rsi+0A80h]
 * 0000000140C71F6A: cmp     [rsi+918h], r12d
 * 0000000140C71F71: jnz     short loc_140C71F81
 * 0000000140C71F73: mov     rax, [rsi+588h]
 * 0000000140C71F7A: xor     rcx, r8
 * 0000000140C71F7D: mov     [rax+18h], rcx
 * 0000000140C71F81: xor     edx, edx
 * 0000000140C71F83: mov     r9d, 100h
 * 0000000140C71F89: mov     rcx, rsi
 * 0000000140C71F8C: call    sub_140C7F03C
 * 0000000140C71F91: jmp     short loc_140C71F96
 * 0000000140C71F93: xor     r12d, r12d
 * 0000000140C71F96: mov     rcx, [rsi+538h]
 * 0000000140C71F9D: mov     r15, cr8
 * 0000000140C71FA1: mov     eax, 0Fh
 * 0000000140C71FA6: mov     cr8, rax
 * 0000000140C71FAA: mov     rax, [rsi+160h]
 * 0000000140C71FB1: call    KeGuardDispatchICall
 * 0000000140C71FB6: mov     rax, [rsi+620h]
 * 0000000140C71FBD: mov     rdx, r12
 * 0000000140C71FC0: mov     rcx, [rax]
 * 0000000140C71FC3: mov     eax, [rcx]
 * 0000000140C71FC5: lea     rbx, [rcx+10h]
 * 0000000140C71FC9: lea     rcx, [rax+rax*2]
 * 0000000140C71FCD: lea     r14, [rbx+rcx*8]
 * 0000000140C71FD1: jmp     short loc_140C71FFD
 * 0000000140C71FD3: mov     rcx, [rbx+8]
 * 0000000140C71FD7: cmp     rcx, rdx
 * 0000000140C71FDA: jb      short loc_140C72006
 * 0000000140C71FDC: mov     rax, rcx
 * 0000000140C71FDF: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140C71FE5: cmp     rax, rcx
 * 0000000140C71FE8: jnz     short loc_140C72006
 * 0000000140C71FEA: mov     eax, [rbx+10h]
 * 0000000140C71FED: add     rax, rcx
 * 0000000140C71FF0: cmp     rax, rcx
 * 0000000140C71FF3: jbe     short loc_140C72006
 * 0000000140C71FF5: cmp     rax, rdx
 * 0000000140C71FF8: jz      short loc_140C72006
 * 0000000140C71FFA: mov     rdx, rax
 * 0000000140C71FFD: add     rbx, 18h
 * 0000000140C72001: cmp     rbx, r14
 * 0000000140C72004: jb      short loc_140C71FD3
 * 0000000140C72006: mov     rcx, [rsi+538h]
 * 0000000140C7200D: mov     rax, [rsi+1A0h]
 * 0000000140C72014: call    KeGuardDispatchICall
 * 0000000140C72019: movzx   eax, r15b
 * 0000000140C7201D: mov     cr8, rax
 * 0000000140C72021: cmp     rbx, r14
 * 0000000140C72024: jz      loc_140C770FB
 * 0000000140C7202A: mov     r15d, 1
 * 0000000140C72030: cmp     [rsi+918h], r12d
 * 0000000140C72037: jnz     loc_140C75354
 * 0000000140C7203D: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C72047: add     rax, rsi
 * 0000000140C7204A: mov     [rsi+920h], rax
 * 0000000140C72051: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C7205B: add     rax, r13
 * 0000000140C7205E: mov     [rsi+928h], rax
 * 0000000140C72065: movsxd  rax, dword ptr [r13+0]
 * 0000000140C72069: mov     [rsi+930h], rax
 * 0000000140C72070: mov     [rsi+938h], rbx
 * 0000000140C72077: mov     [rsi+918h], r15d
 * 0000000140C7207E: mov     ecx, [rsi+9D8h]
 * 0000000140C72084: bt      ecx, 1Dh
 * 0000000140C72088: jb      loc_140C75354
 * 0000000140C7208E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C72098: jz      loc_140C75354
 * 0000000140C7209E: test    r15b, cl
 * 0000000140C720A1: jz      loc_140C75354
 * 0000000140C720A7: mov     ecx, [rsi+0A74h]
 * 0000000140C720AD: mov     eax, [rsi+804h]
 * 0000000140C720B3: mov     r10, [rsi+838h]
 * 0000000140C720BA: sub     eax, ecx
 * 0000000140C720BC: mov     r8, [rsi+0A78h]
 * 0000000140C720C3: lea     rdx, [rcx+rsi]
 * 0000000140C720C7: mov     ecx, eax
 * 0000000140C720C9: shr     rcx, 3
 * 0000000140C720CD: lea     r9, [rdx+rcx*8]
 * 0000000140C720D1: jmp     short loc_140C720F4
 * 0000000140C720D3: xor     [rdx], r8
 * 0000000140C720D6: mov     rax, [rdx]
 * 0000000140C720D9: movzx   ecx, r8b
 * 0000000140C720DD: xor     rax, r10
 * 0000000140C720E0: and     ecx, 3Fh
 * 0000000140C720E3: ror     r8, cl
 * 0000000140C720E6: add     r8, rax
 * 0000000140C720E9: xor     r8, 0F05h
 * 0000000140C720F0: add     rdx, 8
 * 0000000140C720F4: cmp     rdx, r9
 * 0000000140C720F7: jnz     short loc_140C720D3
 * 0000000140C720F9: jmp     loc_140C6BA4E
 * 0000000140C720FE: mov     r14, [r13+8]
 * 0000000140C72102: mov     r8d, [r13+10h]
 * 0000000140C72106: mov     r9, r14
 * 0000000140C72109: add     [rsi+848h], r8d
 * 0000000140C72110: mov     rax, r14
 * 0000000140C72113: mov     r10d, [rsi+834h]
 * 0000000140C7211A: mov     r15, [rsi+838h]
 * 0000000140C72121: lea     rcx, [r14+r8]
 * 0000000140C72125: cmp     r14, rcx
 * 0000000140C72128: jnb     short loc_140C7213A
 * 0000000140C7212A: mov     edx, 40h ; '@'
 * 0000000140C7212F: prefetchnta byte ptr [rax]
 * 0000000140C72132: add     rax, rdx
 * 0000000140C72135: cmp     rax, rcx
 * 0000000140C72138: jb      short loc_140C7212F
 * 0000000140C7213A: mov     r11d, r8d
 * 0000000140C7213D: mov     rbx, r15
 * 0000000140C72140: shr     r11d, 7
 * 0000000140C72144: mov     edx, 1
 * 0000000140C72149: test    r11d, r11d
 * 0000000140C7214C: jz      short loc_140C721BB
 * 0000000140C7214E: mov     edi, 0FFFFFFFFh
 * 0000000140C72153: mov     rsi, 7010008004002001h
 * 0000000140C7215D: mov     eax, 8
 * 0000000140C72162: xor     rbx, [r9]
 * 0000000140C72165: mov     ecx, r10d
 * 0000000140C72168: rol     rbx, cl
 * 0000000140C7216B: xor     rbx, [r9+8]
 * 0000000140C7216F: add     r9, 10h
 * 0000000140C72173: rol     rbx, cl
 * 0000000140C72176: sub     rax, rdx
 * 0000000140C72179: jnz     short loc_140C72162
 * 0000000140C7217B: mov     rcx, r9
 * 0000000140C7217E: sub     rcx, r14
 * 0000000140C72181: xor     rcx, r15
 * 0000000140C72184: mov     rax, rcx
 * 0000000140C72187: rol     rax, 11h
 * 0000000140C7218B: xor     rcx, rax
 * 0000000140C7218E: mov     rax, rsi
 * 0000000140C72191: mul     rcx
 * 0000000140C72194: mov     [rbp+7B0h+var_3F0], rdx
 * 0000000140C7219B: xor     rdx, rax
 * 0000000140C7219E: xor     r10d, edx
 * 0000000140C721A1: mov     edx, 1
 * 0000000140C721A6: and     r10d, 3Fh
 * 0000000140C721AA: cmovz   r10d, edx
 * 0000000140C721AE: add     r11d, edi
 * 0000000140C721B1: jnz     short loc_140C7215D
 * 0000000140C721B3: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C721B8: lea     edi, [rdx+1]
 * 0000000140C721BB: and     r8d, 7Fh
 * 0000000140C721BF: cmp     r8d, 8
 * 0000000140C721C3: jb      short loc_140C721E2
 * 0000000140C721C5: mov     eax, r8d
 * 0000000140C721C8: shr     rax, 3
 * 0000000140C721CC: xor     rbx, [r9]
 * 0000000140C721CF: mov     ecx, r10d
 * 0000000140C721D2: rol     rbx, cl
 * 0000000140C721D5: add     r9, 8
 * 0000000140C721D9: add     r8d, 0FFFFFFF8h
 * 0000000140C721DD: sub     rax, rdx
 * 0000000140C721E0: jnz     short loc_140C721CC
 * 0000000140C721E2: test    r8d, r8d
 * 0000000140C721E5: jz      short loc_140C72205
 * 0000000140C721E7: mov     edi, 0FFFFFFFFh
 * 0000000140C721EC: movzx   eax, byte ptr [r9]
 * 0000000140C721F0: mov     ecx, r10d
 * 0000000140C721F3: xor     rbx, rax
 * 0000000140C721F6: add     r9, rdx
 * 0000000140C721F9: rol     rbx, cl
 * 0000000140C721FC: add     r8d, edi
 * 0000000140C721FF: jnz     short loc_140C721EC
 * 0000000140C72201: lea     edi, [r8+2]
 * 0000000140C72205: mov     rax, rbx
 * 0000000140C72208: jmp     short loc_140C7220C
 * 0000000140C7220A: xor     ebx, eax
 * 0000000140C7220C: shr     rax, 1Fh
 * 0000000140C72210: test    rax, rax
 * 0000000140C72213: jnz     short loc_140C7220A
 * 0000000140C72215: btr     ebx, 1Fh
 * 0000000140C72219: cmp     ebx, [r13+14h]
 * 0000000140C7221D: jz      loc_140C7244A
 * 0000000140C72223: cmp     [r13+0], eax
 * 0000000140C72227: jnz     short loc_140C72231
 * 0000000140C72229: cmp     [r13+18h], eax
 * 0000000140C7222D: cmovnz  r12d, edx
 * 0000000140C72231: mov     ecx, [r13+10h]
 * 0000000140C72235: mov     rdx, [r13+8]
 * 0000000140C72239: test    rcx, rcx
 * 0000000140C7223C: jz      loc_140C722F9
 * 0000000140C72242: mov     eax, [rsi+9DCh]
 * 0000000140C72248: mov     r8d, 40h ; '@'
 * 0000000140C7224E: test    r8b, al
 * 0000000140C72251: jz      loc_140C722F9
 * 0000000140C72257: mov     r15, cr8
 * 0000000140C7225B: mov     r14, rdx
 * 0000000140C7225E: lea     rax, [rcx-1]
 * 0000000140C72262: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C72269: add     rax, rdx
 * 0000000140C7226C: or      rax, 0FFFh
 * 0000000140C72272: mov     [rbp+7B0h+var_820], rax
 * 0000000140C72276: lea     r13, [r14-1]
 * 0000000140C7227A: mov     cr8, rdi
 * 0000000140C7227E: mov     rax, [rsi+468h]
 * 0000000140C72285: xor     edx, edx
 * 0000000140C72287: mov     rcx, r14
 * 0000000140C7228A: call    KeGuardDispatchICall
 * 0000000140C7228F: cmp     eax, 0C000022Dh
 * 0000000140C72294: jnz     short loc_140C722B2
 * 0000000140C72296: test    r12d, r12d
 * 0000000140C72299: jnz     short loc_140C722EC
 * 0000000140C7229B: lea     eax, [r12+1]
 * 0000000140C722A0: cmp     r15b, al
 * 0000000140C722A3: ja      short loc_140C722B6
 * 0000000140C722A5: movzx   eax, r15b
 * 0000000140C722A9: mov     cr8, rax
 * 0000000140C722AD: mov     al, [r14]
 * 0000000140C722B0: jmp     short loc_140C7227A
 * 0000000140C722B2: test    eax, eax
 * 0000000140C722B4: js      short loc_140C722EC
 * 0000000140C722B6: mov     r11d, 1000h
 * 0000000140C722BC: add     r14, r11
 * 0000000140C722BF: add     r13, r11
 * 0000000140C722C2: cmp     r13, [rbp+7B0h+var_820]
 * 0000000140C722C6: jnz     short loc_140C7227E
 * 0000000140C722C8: movzx   eax, r15b
 * 0000000140C722CC: mov     cr8, rax
 * 0000000140C722D0: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C722D5: xor     r12d, r12d
 * 0000000140C722D8: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C722E2: lea     r15d, [r12+1]
 * 0000000140C722E7: jmp     loc_140C72462
 * 0000000140C722EC: movzx   eax, r15b
 * 0000000140C722F0: mov     cr8, rax
 * 0000000140C722F4: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C722F9: mov     eax, [r13+14h]
 * 0000000140C722FD: xor     r12d, r12d
 * 0000000140C72300: cmp     [rsi+918h], r12d
 * 0000000140C72307: jnz     short loc_140C72319
 * 0000000140C72309: mov     ecx, ebx
 * 0000000140C7230B: xor     rcx, rax
 * 0000000140C7230E: mov     rax, [rsi+588h]
 * 0000000140C72315: mov     [rax+18h], rcx
 * 0000000140C72319: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C72323: mov     rcx, [r13+8]
 * 0000000140C72327: mov     r8, 0B3B74BDEE4453415h
 * 0000000140C72331: mov     r15d, 1
 * 0000000140C72337: cmp     [rsi+918h], r12d
 * 0000000140C7233E: jnz     loc_140C72442
 * 0000000140C72344: lea     rax, [rsi+r14]
 * 0000000140C72348: mov     [rsi+920h], rax
 * 0000000140C7234F: lea     rax, [r8+r13]
 * 0000000140C72353: mov     [rsi+928h], rax
 * 0000000140C7235A: movsxd  rax, dword ptr [r13+0]
 * 0000000140C7235E: mov     [rsi+930h], rax
 * 0000000140C72365: mov     [rsi+938h], rcx
 * 0000000140C7236C: mov     [rsi+918h], r15d
 * 0000000140C72373: mov     ecx, [rsi+9D8h]
 * 0000000140C72379: bt      ecx, 1Dh
 * 0000000140C7237D: jb      loc_140C72442
 * 0000000140C72383: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7238D: jz      loc_140C72442
 * 0000000140C72393: test    r15b, cl
 * 0000000140C72396: jz      loc_140C72442
 * 0000000140C7239C: mov     ecx, [rsi+0A74h]
 * 0000000140C723A2: mov     eax, [rsi+804h]
 * 0000000140C723A8: mov     r10, [rsi+838h]
 * 0000000140C723AF: sub     eax, ecx
 * 0000000140C723B1: mov     r8, [rsi+0A78h]
 * 0000000140C723B8: lea     rdx, [rcx+rsi]
 * 0000000140C723BC: mov     ecx, eax
 * 0000000140C723BE: shr     rcx, 3
 * 0000000140C723C2: lea     r9, [rdx+rcx*8]
 * 0000000140C723C6: jmp     short loc_140C723E9
 * 0000000140C723C8: xor     [rdx], r8
 * 0000000140C723CB: mov     rax, [rdx]
 * 0000000140C723CE: movzx   ecx, r8b
 * 0000000140C723D2: xor     rax, r10
 * 0000000140C723D5: and     ecx, 3Fh
 * 0000000140C723D8: ror     r8, cl
 * 0000000140C723DB: add     r8, rax
 * 0000000140C723DE: xor     r8, 0F05h
 * 0000000140C723E5: add     rdx, 8
 * 0000000140C723E9: cmp     rdx, r9
 * 0000000140C723EC: jnz     short loc_140C723C8
 * 0000000140C723EE: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C723F6: cmp     r8, [rsi+0A80h]
 * 0000000140C723FD: jz      short loc_140C7245C
 * 0000000140C723FF: mov     ecx, [rsi+804h]
 * 0000000140C72405: mov     rax, [rsi+588h]
 * 0000000140C7240C: mov     [rax], rsi
 * 0000000140C7240F: mov     [rax+10h], ecx
 * 0000000140C72412: mov     rcx, [rsi+0A80h]
 * 0000000140C72419: cmp     [rsi+918h], r12d
 * 0000000140C72420: jnz     short loc_140C72430
 * 0000000140C72422: mov     rax, [rsi+588h]
 * 0000000140C72429: xor     rcx, r8
 * 0000000140C7242C: mov     [rax+18h], rcx
 * 0000000140C72430: xor     edx, edx
 * 0000000140C72432: mov     r9d, 100h
 * 0000000140C72438: mov     rcx, rsi
 * 0000000140C7243B: call    sub_140C7F03C
 * 0000000140C72440: jmp     short loc_140C7245C
 * 0000000140C72442: mov     r11d, 1000h
 * 0000000140C72448: jmp     short loc_140C7246C
 * 0000000140C7244A: xor     r12d, r12d
 * 0000000140C7244D: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C72457: lea     r15d, [r12+1]
 * 0000000140C7245C: mov     r11d, 1000h
 * 0000000140C72462: mov     r8, 0B3B74BDEE4453415h
 * 0000000140C7246C: mov     eax, [r13+28h]
 * 0000000140C72470: test    dil, al
 * 0000000140C72473: jz      loc_140C773A3
 * 0000000140C72479: mov     rbx, [r13+8]
 * 0000000140C7247D: test    al, 4
 * 0000000140C7247F: jz      loc_140C725CE
 * 0000000140C72485: mov     rax, [rbx+70h]
 * 0000000140C72489: mov     rcx, [r13+18h]
 * 0000000140C7248D: mov     rdx, [rax]
 * 0000000140C72490: cmp     rdx, rcx
 * 0000000140C72493: jz      loc_140C725CE
 * 0000000140C72499: mov     rax, [rsi+588h]
 * 0000000140C724A0: mov     [rax], rdx
 * 0000000140C724A3: mov     dword ptr [rax+10h], 100h
 * 0000000140C724AA: cmp     [rsi+918h], r12d
 * 0000000140C724B1: jnz     short loc_140C724C1
 * 0000000140C724B3: mov     rax, [rsi+588h]
 * 0000000140C724BA: xor     rcx, rdx
 * 0000000140C724BD: mov     [rax+18h], rcx
 * 0000000140C724C1: mov     rcx, [rbx+70h]
 * 0000000140C724C5: cmp     [rsi+918h], r12d
 * 0000000140C724CC: jnz     loc_140C725CE
 * 0000000140C724D2: lea     rax, [rsi+r14]
 * 0000000140C724D6: mov     [rsi+920h], rax
 * 0000000140C724DD: lea     rax, [r8+r13]
 * 0000000140C724E1: mov     [rsi+928h], rax
 * 0000000140C724E8: movsxd  rax, dword ptr [r13+0]
 * 0000000140C724EC: mov     [rsi+930h], rax
 * 0000000140C724F3: mov     [rsi+938h], rcx
 * 0000000140C724FA: mov     [rsi+918h], r15d
 * 0000000140C72501: mov     ecx, [rsi+9D8h]
 * 0000000140C72507: bt      ecx, 1Dh
 * 0000000140C7250B: jb      loc_140C725CE
 * 0000000140C72511: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7251B: jz      loc_140C725CE
 * 0000000140C72521: test    r15b, cl
 * 0000000140C72524: jz      loc_140C725CE
 * 0000000140C7252A: mov     ecx, [rsi+0A74h]
 * 0000000140C72530: mov     eax, [rsi+804h]
 * 0000000140C72536: mov     r10, [rsi+838h]
 * 0000000140C7253D: sub     eax, ecx
 * 0000000140C7253F: mov     r8, [rsi+0A78h]
 * 0000000140C72546: lea     rdx, [rcx+rsi]
 * 0000000140C7254A: mov     ecx, eax
 * 0000000140C7254C: shr     rcx, 3
 * 0000000140C72550: lea     r9, [rdx+rcx*8]
 * 0000000140C72554: jmp     short loc_140C72577
 * 0000000140C72556: xor     [rdx], r8
 * 0000000140C72559: mov     rax, [rdx]
 * 0000000140C7255C: movzx   ecx, r8b
 * 0000000140C72560: xor     rax, r10
 * 0000000140C72563: and     ecx, 3Fh
 * 0000000140C72566: ror     r8, cl
 * 0000000140C72569: add     r8, rax
 * 0000000140C7256C: xor     r8, 0F05h
 * 0000000140C72573: add     rdx, 8
 * 0000000140C72577: cmp     rdx, r9
 * 0000000140C7257A: jnz     short loc_140C72556
 * 0000000140C7257C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C72584: cmp     r8, [rsi+0A80h]
 * 0000000140C7258B: jz      short loc_140C725CE
 * 0000000140C7258D: mov     ecx, [rsi+804h]
 * 0000000140C72593: mov     rax, [rsi+588h]
 * 0000000140C7259A: mov     [rax], rsi
 * 0000000140C7259D: mov     [rax+10h], ecx
 * 0000000140C725A0: mov     rcx, [rsi+0A80h]
 * 0000000140C725A7: cmp     [rsi+918h], r12d
 * 0000000140C725AE: jnz     short loc_140C725BE
 * 0000000140C725B0: mov     rax, [rsi+588h]
 * 0000000140C725B7: xor     rcx, r8
 * 0000000140C725BA: mov     [rax+18h], rcx
 * 0000000140C725BE: xor     edx, edx
 * 0000000140C725C0: mov     r9d, 100h
 * 0000000140C725C6: mov     rcx, rsi
 * 0000000140C725C9: call    sub_140C7F03C
 * 0000000140C725CE: mov     eax, [r13+28h]
 * 0000000140C725D2: test    al, 8
 * 0000000140C725D4: jz      loc_140C75354
 * 0000000140C725DA: mov     rax, [rbx+78h]
 * 0000000140C725DE: mov     rcx, [r13+20h]
 * 0000000140C725E2: mov     rdx, [rax]
 * 0000000140C725E5: cmp     rdx, rcx
 * 0000000140C725E8: jz      loc_140C75354
 * 0000000140C725EE: mov     rax, [rsi+588h]
 * 0000000140C725F5: mov     [rax], rdx
 * 0000000140C725F8: mov     dword ptr [rax+10h], 100h
 * 0000000140C725FF: cmp     [rsi+918h], r12d
 * 0000000140C72606: jnz     short loc_140C72616
 * 0000000140C72608: mov     rax, [rsi+588h]
 * 0000000140C7260F: xor     rcx, rdx
 * 0000000140C72612: mov     [rax+18h], rcx
 * 0000000140C72616: mov     rcx, [rbx+78h]
 * 0000000140C7261A: cmp     [rsi+918h], r12d
 * 0000000140C72621: jnz     loc_140C75354
 * 0000000140C72627: lea     rax, [rsi+r14]
 * 0000000140C7262B: mov     [rsi+920h], rax
 * 0000000140C72632: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C7263C: add     rax, r13
 * 0000000140C7263F: mov     [rsi+928h], rax
 * 0000000140C72646: movsxd  rax, dword ptr [r13+0]
 * 0000000140C7264A: mov     [rsi+930h], rax
 * 0000000140C72651: mov     [rsi+938h], rcx
 * 0000000140C72658: mov     [rsi+918h], r15d
 * 0000000140C7265F: mov     ecx, [rsi+9D8h]
 * 0000000140C72665: bt      ecx, 1Dh
 * 0000000140C72669: jb      loc_140C75354
 * 0000000140C7266F: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C72679: jz      loc_140C75354
 * 0000000140C7267F: test    r15b, cl
 * 0000000140C72682: jz      loc_140C75354
 * 0000000140C72688: mov     ecx, [rsi+0A74h]
 * 0000000140C7268E: mov     eax, [rsi+804h]
 * 0000000140C72694: mov     r10, [rsi+838h]
 * 0000000140C7269B: sub     eax, ecx
 * 0000000140C7269D: mov     r8, [rsi+0A78h]
 * 0000000140C726A4: lea     rdx, [rcx+rsi]
 * 0000000140C726A8: mov     ecx, eax
 * 0000000140C726AA: shr     rcx, 3
 * 0000000140C726AE: lea     r9, [rdx+rcx*8]
 * 0000000140C726B2: jmp     short loc_140C726D5
 * 0000000140C726B4: xor     [rdx], r8
 * 0000000140C726B7: mov     rax, [rdx]
 * 0000000140C726BA: movzx   ecx, r8b
 * 0000000140C726BE: xor     rax, r10
 * 0000000140C726C1: and     ecx, 3Fh
 * 0000000140C726C4: ror     r8, cl
 * 0000000140C726C7: add     r8, rax
 * 0000000140C726CA: xor     r8, 0F05h
 * 0000000140C726D1: add     rdx, 8
 * 0000000140C726D5: cmp     rdx, r9
 * 0000000140C726D8: jnz     short loc_140C726B4
 * 0000000140C726DA: jmp     loc_140C6BA4E
 * 0000000140C726DF: mov     rdx, r13
 * 0000000140C726E2: mov     rcx, rsi
 * 0000000140C726E5: call    sub_140553E5C
 * 0000000140C726EA: jmp     loc_140C75354
 * 0000000140C726EF: mov     rdx, r13
 * 0000000140C726F2: mov     rcx, rsi
 * 0000000140C726F5: call    sub_140554F64
 * 0000000140C726FA: jmp     loc_140C75354
 * 0000000140C726FF: mov     eax, [rsi+850h]
 * 0000000140C72705: test    r15b, al
 * 0000000140C72708: jz      loc_140C773A3
 * 0000000140C7270E: mov     rax, [rsi+568h]
 * 0000000140C72715: cmp     [rax+20h], r12
 * 0000000140C72719: jnz     short loc_140C72723
 * 0000000140C7271B: mov     rbx, r12
 * 0000000140C7271E: jmp     loc_140C7282F
 * 0000000140C72723: mov     ecx, [rsi+9BCh]
 * 0000000140C72729: cmp     ecx, ebx
 * 0000000140C7272B: jnz     short loc_140C72737
 * 0000000140C7272D: mov     [rsi+9BCh], r12d
 * 0000000140C72734: mov     ecx, r12d
 * 0000000140C72737: mov     rax, [rsi+290h]
 * 0000000140C7273E: call    KeGuardDispatchICall
 * 0000000140C72743: mov     rbx, rax
 * 0000000140C72746: test    rax, rax
 * 0000000140C72749: jnz     short loc_140C72761
 * 0000000140C7274B: mov     rax, [rsi+298h]
 * 0000000140C72752: xor     ecx, ecx
 * 0000000140C72754: call    KeGuardDispatchICall
 * 0000000140C72759: mov     rbx, rax
 * 0000000140C7275C: test    rax, rax
 * 0000000140C7275F: jz      short loc_140C7271B
 * 0000000140C72761: lea     r14, [rsi+988h]
 * 0000000140C72768: jmp     short loc_140C72785
 * 0000000140C7276A: mov     rax, [rsi+298h]
 * 0000000140C72771: mov     rcx, rbx
 * 0000000140C72774: call    KeGuardDispatchICall
 * 0000000140C72779: mov     rbx, rax
 * 0000000140C7277C: test    rax, rax
 * 0000000140C7277F: jz      loc_140C7280E
 * 0000000140C72785: mov     rax, [rsi+2A8h]
 * 0000000140C7278C: mov     rdx, r14
 * 0000000140C7278F: mov     rcx, rbx
 * 0000000140C72792: call    KeGuardDispatchICall
 * 0000000140C72797: test    eax, eax
 * 0000000140C72799: js      short loc_140C7276A
 * 0000000140C7279B: mov     rax, [rsi+3D8h]
 * 0000000140C727A2: lea     rdx, [rbp+7B0h+var_598]
 * 0000000140C727A9: xor     r9d, r9d
 * 0000000140C727AC: xor     r8d, r8d
 * 0000000140C727AF: lea     ecx, [r9+1Ah]
 * 0000000140C727B3: call    KeGuardDispatchICall
 * 0000000140C727B8: mov     r14d, eax
 * 0000000140C727BB: lea     rdx, [rsi+988h]
 * 0000000140C727C2: mov     rax, [rsi+2B0h]
 * 0000000140C727C9: mov     rcx, rbx
 * 0000000140C727CC: call    KeGuardDispatchICall
 * 0000000140C727D1: mov     rax, [rsi+298h]
 * 0000000140C727D8: mov     rcx, rbx
 * 0000000140C727DB: call    KeGuardDispatchICall
 * 0000000140C727E0: mov     rbx, rax
 * 0000000140C727E3: test    rax, rax
 * 0000000140C727E6: jz      short loc_140C7281A
 * 0000000140C727E8: mov     rax, [rsi+2B8h]
 * 0000000140C727EF: mov     rcx, rbx
 * 0000000140C727F2: call    KeGuardDispatchICall
 * 0000000140C727F7: mov     [rsi+9BCh], eax
 * 0000000140C727FD: mov     rcx, rbx
 * 0000000140C72800: mov     rax, [rsi+2A0h]
 * 0000000140C72807: call    KeGuardDispatchICall
 * 0000000140C7280C: jmp     short loc_140C72821
 * 0000000140C7280E: or      dword ptr [rsi+9BCh], 0FFFFFFFFh
 * 0000000140C72815: jmp     loc_140C7271B
 * 0000000140C7281A: or      dword ptr [rsi+9BCh], 0FFFFFFFFh
 * 0000000140C72821: mov     rbx, [rbp+7B0h+var_598]
 * 0000000140C72828: test    r14d, r14d
 * 0000000140C7282B: cmovs   rbx, r12
 * 0000000140C7282F: mov     rax, [rsi+3B8h]
 * 0000000140C72836: xor     ecx, ecx
 * 0000000140C72838: mov     [rsp+8B0h+var_858], rbx
 * 0000000140C7283D: mov     r15d, r12d
 * 0000000140C72840: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C72845: call    KeGuardDispatchICall
 * 0000000140C7284A: mov     [rbp+7B0h+var_808], rax
 * 0000000140C7284E: mov     r14, rax
 * 0000000140C72851: test    rax, rax
 * 0000000140C72854: jz      loc_140C7387C
 * 0000000140C7285A: mov     rcx, r14
 * 0000000140C7285D: cmp     rbx, r14
 * 0000000140C72860: jnz     loc_140C7303C
 * 0000000140C72866: mov     rax, [rsi+3A8h]
 * 0000000140C7286D: call    KeGuardDispatchICall
 * 0000000140C72872: test    eax, eax
 * 0000000140C72874: js      loc_140C7384D
 * 0000000140C7287A: mov     rax, [rsi+3E8h]
 * 0000000140C72881: mov     rcx, r14
 * 0000000140C72884: call    KeGuardDispatchICall
 * 0000000140C72889: movzx   ebx, al
 * 0000000140C7288C: lea     rdx, [rbp+7B0h+arg_18]
 * 0000000140C72893: mov     rax, [rsi+3F0h]
 * 0000000140C7289A: mov     rcx, r14
 * 0000000140C7289D: call    KeGuardDispatchICall
 * 0000000140C728A2: mov     byte ptr [rbp+7B0h+arg_8], al
 * 0000000140C728A8: mov     rcx, r14
 * 0000000140C728AB: mov     rax, [rsi+3F8h]
 * 0000000140C728B2: call    KeGuardDispatchICall
 * 0000000140C728B7: mov     [rbp+7B0h+var_820], rax
 * 0000000140C728BB: cmp     bl, 61h ; 'a'
 * 0000000140C728BE: jz      loc_140C72A09
 * 0000000140C728C4: cmp     [rsi+918h], r12d
 * 0000000140C728CB: jnz     loc_140C72A09
 * 0000000140C728D1: mov     rax, [rsi+588h]
 * 0000000140C728D8: mov     ecx, ebx
 * 0000000140C728DA: xor     rcx, 61h
 * 0000000140C728DE: mov     [rax+18h], rcx
 * 0000000140C728E2: cmp     [rsi+918h], r12d
 * 0000000140C728E9: jnz     loc_140C72A09
 * 0000000140C728EF: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C728F4: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C728FE: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C72908: mov     r8d, 1
 * 0000000140C7290E: lea     rax, [rsi+r10]
 * 0000000140C72912: mov     [rsi+920h], rax
 * 0000000140C72919: lea     rax, [rdx+r9]
 * 0000000140C7291D: mov     [rsi+928h], rax
 * 0000000140C72924: movsxd  rax, dword ptr [rdx]
 * 0000000140C72927: mov     [rsi+930h], rax
 * 0000000140C7292E: mov     [rsi+938h], r14
 * 0000000140C72935: mov     [rsi+918h], r8d
 * 0000000140C7293C: mov     ecx, [rsi+9D8h]
 * 0000000140C72942: bt      ecx, 1Dh
 * 0000000140C72946: jb      loc_140C72A28
 * 0000000140C7294C: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C72956: jz      loc_140C72A28
 * 0000000140C7295C: test    r8b, cl
 * 0000000140C7295F: jz      loc_140C72A28
 * 0000000140C72965: mov     ecx, [rsi+0A74h]
 * 0000000140C7296B: mov     eax, [rsi+804h]
 * 0000000140C72971: mov     r10, [rsi+838h]
 * 0000000140C72978: sub     eax, ecx
 * 0000000140C7297A: mov     r8, [rsi+0A78h]
 * 0000000140C72981: lea     rdx, [rcx+rsi]
 * 0000000140C72985: mov     ecx, eax
 * 0000000140C72987: shr     rcx, 3
 * 0000000140C7298B: lea     r9, [rdx+rcx*8]
 * 0000000140C7298F: jmp     short loc_140C729B2
 * 0000000140C72991: xor     [rdx], r8
 * 0000000140C72994: mov     rax, [rdx]
 * 0000000140C72997: movzx   ecx, r8b
 * 0000000140C7299B: xor     rax, r10
 * 0000000140C7299E: and     ecx, 3Fh
 * 0000000140C729A1: ror     r8, cl
 * 0000000140C729A4: add     r8, rax
 * 0000000140C729A7: xor     r8, 0F05h
 * 0000000140C729AE: add     rdx, 8
 * 0000000140C729B2: cmp     rdx, r9
 * 0000000140C729B5: jnz     short loc_140C72991
 * 0000000140C729B7: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C729BF: cmp     r8, [rsi+0A80h]
 * 0000000140C729C6: jz      short loc_140C72A09
 * 0000000140C729C8: mov     ecx, [rsi+804h]
 * 0000000140C729CE: mov     rax, [rsi+588h]
 * 0000000140C729D5: mov     [rax], rsi
 * 0000000140C729D8: mov     [rax+10h], ecx
 * 0000000140C729DB: mov     rcx, [rsi+0A80h]
 * 0000000140C729E2: cmp     [rsi+918h], r12d
 * 0000000140C729E9: jnz     short loc_140C729F9
 * 0000000140C729EB: mov     rax, [rsi+588h]
 * 0000000140C729F2: xor     rcx, r8
 * 0000000140C729F5: mov     [rax+18h], rcx
 * 0000000140C729F9: xor     edx, edx
 * 0000000140C729FB: mov     r9d, 100h
 * 0000000140C72A01: mov     rcx, rsi
 * 0000000140C72A04: call    sub_140C7F03C
 * 0000000140C72A09: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C72A0E: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C72A18: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C72A22: mov     r8d, 1
 * 0000000140C72A28: mov     ecx, ebx
 * 0000000140C72A2A: mov     r14b, r12b
 * 0000000140C72A2D: and     ecx, 7
 * 0000000140C72A30: sub     ecx, 1
 * 0000000140C72A33: jz      loc_140C72B69
 * 0000000140C72A39: xor     r11d, r11d
 * 0000000140C72A3C: cmp     ecx, 1
 * 0000000140C72A3F: jz      loc_140C72B5C
 * 0000000140C72A45: test    bl, 7
 * 0000000140C72A48: jz      loc_140C72B6F
 * 0000000140C72A4E: cmp     [rsi+918h], r11d
 * 0000000140C72A55: jnz     loc_140C72B6F
 * 0000000140C72A5B: lea     rax, [rsi+r10]
 * 0000000140C72A5F: mov     [rsi+920h], rax
 * 0000000140C72A66: lea     rax, [rdx+r9]
 * 0000000140C72A6A: mov     [rsi+928h], rax
 * 0000000140C72A71: movsxd  rax, dword ptr [rdx]
 * 0000000140C72A74: mov     [rsi+930h], rax
 * 0000000140C72A7B: mov     rax, [rbp+7B0h+var_808]
 * 0000000140C72A7F: mov     [rsi+938h], rax
 * 0000000140C72A86: mov     [rsi+918h], r8d
 * 0000000140C72A8D: mov     ecx, [rsi+9D8h]
 * 0000000140C72A93: bt      ecx, 1Dh
 * 0000000140C72A97: jb      loc_140C72B6F
 * 0000000140C72A9D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C72AA7: jz      loc_140C72B6F
 * 0000000140C72AAD: test    r8b, cl
 * 0000000140C72AB0: jz      loc_140C72B6F
 * 0000000140C72AB6: mov     ecx, [rsi+0A74h]
 * 0000000140C72ABC: mov     eax, [rsi+804h]
 * 0000000140C72AC2: mov     r10, [rsi+838h]
 * 0000000140C72AC9: sub     eax, ecx
 * 0000000140C72ACB: mov     r8, [rsi+0A78h]
 * 0000000140C72AD2: lea     rdx, [rcx+rsi]
 * 0000000140C72AD6: mov     ecx, eax
 * 0000000140C72AD8: shr     rcx, 3
 * 0000000140C72ADC: lea     r9, [rdx+rcx*8]
 * 0000000140C72AE0: jmp     short loc_140C72B03
 * 0000000140C72AE2: xor     [rdx], r8
 * 0000000140C72AE5: mov     rax, [rdx]
 * 0000000140C72AE8: movzx   ecx, r8b
 * 0000000140C72AEC: xor     rax, r10
 * 0000000140C72AEF: and     ecx, 3Fh
 * 0000000140C72AF2: ror     r8, cl
 * 0000000140C72AF5: add     r8, rax
 * 0000000140C72AF8: xor     r8, 0F05h
 * 0000000140C72AFF: add     rdx, 8
 * 0000000140C72B03: cmp     rdx, r9
 * 0000000140C72B06: jnz     short loc_140C72AE2
 * 0000000140C72B08: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C72B10: cmp     r8, [rsi+0A80h]
 * 0000000140C72B17: jz      short loc_140C72B6F
 * 0000000140C72B19: mov     ecx, [rsi+804h]
 * 0000000140C72B1F: mov     rax, [rsi+588h]
 * 0000000140C72B26: mov     [rax], rsi
 * 0000000140C72B29: mov     [rax+10h], ecx
 * 0000000140C72B2C: mov     rcx, [rsi+0A80h]
 * 0000000140C72B33: cmp     [rsi+918h], r11d
 * 0000000140C72B3A: jnz     short loc_140C72B4A
 * 0000000140C72B3C: mov     rax, [rsi+588h]
 * 0000000140C72B43: xor     rcx, r8
 * 0000000140C72B46: mov     [rax+18h], rcx
 * 0000000140C72B4A: xor     edx, edx
 * 0000000140C72B4C: mov     r9d, 100h
 * 0000000140C72B52: mov     rcx, rsi
 * 0000000140C72B55: call    sub_140C7F03C
 * 0000000140C72B5A: jmp     short loc_140C72B6C
 * 0000000140C72B5C: mov     eax, 10h
 * 0000000140C72B61: mov     r14b, al
 * 0000000140C72B64: mov     r12b, al
 * 0000000140C72B67: jmp     short loc_140C72B6F
 * 0000000140C72B69: mov     r14b, 30h ; '0'
 * 0000000140C72B6C: xor     r11d, r11d
 * 0000000140C72B6F: mov     r15, [rsi+5C0h]
 * 0000000140C72B76: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C72B80: mov     dil, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C72B87: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C72B91: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C72B96: mov     r8d, 1
 * 0000000140C72B9C: shr     rbx, 4
 * 0000000140C72BA0: or      r14b, [r15+rbx*2]
 * 0000000140C72BA4: cmp     r14b, dil
 * 0000000140C72BA7: mov     r14, [rbp+7B0h+var_808]
 * 0000000140C72BAB: jz      loc_140C72CD8
 * 0000000140C72BB1: cmp     [rsi+918h], r11d
 * 0000000140C72BB8: jnz     loc_140C72CD8
 * 0000000140C72BBE: lea     rax, [rsi+r10]
 * 0000000140C72BC2: mov     [rsi+920h], rax
 * 0000000140C72BC9: lea     rax, [rdx+r9]
 * 0000000140C72BCD: mov     [rsi+928h], rax
 * 0000000140C72BD4: movsxd  rax, dword ptr [rdx]
 * 0000000140C72BD7: mov     [rsi+930h], rax
 * 0000000140C72BDE: mov     [rsi+938h], r14
 * 0000000140C72BE5: mov     [rsi+918h], r8d
 * 0000000140C72BEC: mov     ecx, [rsi+9D8h]
 * 0000000140C72BF2: bt      ecx, 1Dh
 * 0000000140C72BF6: jb      loc_140C72CD8
 * 0000000140C72BFC: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C72C06: jz      loc_140C72CD8
 * 0000000140C72C0C: test    r8b, cl
 * 0000000140C72C0F: jz      loc_140C72CD8
 * 0000000140C72C15: mov     ecx, [rsi+0A74h]
 * 0000000140C72C1B: mov     eax, [rsi+804h]
 * 0000000140C72C21: mov     r10, [rsi+838h]
 * 0000000140C72C28: sub     eax, ecx
 * 0000000140C72C2A: mov     r8, [rsi+0A78h]
 * 0000000140C72C31: lea     rdx, [rcx+rsi]
 * 0000000140C72C35: mov     ecx, eax
 * 0000000140C72C37: shr     rcx, 3
 * 0000000140C72C3B: lea     r9, [rdx+rcx*8]
 * 0000000140C72C3F: jmp     short loc_140C72C62
 * 0000000140C72C41: xor     [rdx], r8
 * 0000000140C72C44: mov     rax, [rdx]
 * 0000000140C72C47: movzx   ecx, r8b
 * 0000000140C72C4B: xor     rax, r10
 * 0000000140C72C4E: and     ecx, 3Fh
 * 0000000140C72C51: ror     r8, cl
 * 0000000140C72C54: add     r8, rax
 * 0000000140C72C57: xor     r8, 0F05h
 * 0000000140C72C5E: add     rdx, 8
 * 0000000140C72C62: cmp     rdx, r9
 * 0000000140C72C65: jnz     short loc_140C72C41
 * 0000000140C72C67: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C72C6F: cmp     r8, [rsi+0A80h]
 * 0000000140C72C76: jz      short loc_140C72CB9
 * 0000000140C72C78: mov     ecx, [rsi+804h]
 * 0000000140C72C7E: mov     rax, [rsi+588h]
 * 0000000140C72C85: mov     [rax], rsi
 * 0000000140C72C88: mov     [rax+10h], ecx
 * 0000000140C72C8B: mov     rcx, [rsi+0A80h]
 * 0000000140C72C92: cmp     [rsi+918h], r11d
 * 0000000140C72C99: jnz     short loc_140C72CA9
 * 0000000140C72C9B: mov     rax, [rsi+588h]
 * 0000000140C72CA2: xor     rcx, r8
 * 0000000140C72CA5: mov     [rax+18h], rcx
 * 0000000140C72CA9: xor     edx, edx
 * 0000000140C72CAB: mov     r9d, 100h
 * 0000000140C72CB1: mov     rcx, rsi
 * 0000000140C72CB4: call    sub_140C7F03C
 * 0000000140C72CB9: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C72CBE: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C72CC8: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C72CD2: mov     r8d, 1
 * 0000000140C72CD8: or      r12b, [r15+rbx*2+1]
 * 0000000140C72CDD: cmp     r12b, [rbp+7B0h+arg_18]
 * 0000000140C72CE4: jz      loc_140C72DF7
 * 0000000140C72CEA: xor     r12d, r12d
 * 0000000140C72CED: cmp     [rsi+918h], r12d
 * 0000000140C72CF4: jnz     loc_140C72DFA
 * 0000000140C72CFA: lea     rax, [rsi+r10]
 * 0000000140C72CFE: mov     [rsi+920h], rax
 * 0000000140C72D05: lea     rax, [rdx+r9]
 * 0000000140C72D09: mov     [rsi+928h], rax
 * 0000000140C72D10: movsxd  rax, dword ptr [rdx]
 * 0000000140C72D13: mov     [rsi+930h], rax
 * 0000000140C72D1A: mov     [rsi+938h], r14
 * 0000000140C72D21: mov     [rsi+918h], r8d
 * 0000000140C72D28: mov     ecx, [rsi+9D8h]
 * 0000000140C72D2E: bt      ecx, 1Dh
 * 0000000140C72D32: jb      loc_140C72DFA
 * 0000000140C72D38: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C72D42: jz      loc_140C72DFA
 * 0000000140C72D48: test    r8b, cl
 * 0000000140C72D4B: jz      loc_140C72DFA
 * 0000000140C72D51: mov     ecx, [rsi+0A74h]
 * 0000000140C72D57: mov     eax, [rsi+804h]
 * 0000000140C72D5D: mov     r10, [rsi+838h]
 * 0000000140C72D64: sub     eax, ecx
 * 0000000140C72D66: mov     r8, [rsi+0A78h]
 * 0000000140C72D6D: lea     rdx, [rcx+rsi]
 * 0000000140C72D71: mov     ecx, eax
 * 0000000140C72D73: shr     rcx, 3
 * 0000000140C72D77: lea     r9, [rdx+rcx*8]
 * 0000000140C72D7B: jmp     short loc_140C72D9E
 * 0000000140C72D7D: xor     [rdx], r8
 * 0000000140C72D80: mov     rax, [rdx]
 * 0000000140C72D83: movzx   ecx, r8b
 * 0000000140C72D87: xor     rax, r10
 * 0000000140C72D8A: and     ecx, 3Fh
 * 0000000140C72D8D: ror     r8, cl
 * 0000000140C72D90: add     r8, rax
 * 0000000140C72D93: xor     r8, 0F05h
 * 0000000140C72D9A: add     rdx, 8
 * 0000000140C72D9E: cmp     rdx, r9
 * 0000000140C72DA1: jnz     short loc_140C72D7D
 * 0000000140C72DA3: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C72DAB: cmp     r8, [rsi+0A80h]
 * 0000000140C72DB2: jz      short loc_140C72DFA
 * 0000000140C72DB4: mov     ecx, [rsi+804h]
 * 0000000140C72DBA: mov     rax, [rsi+588h]
 * 0000000140C72DC1: mov     [rax], rsi
 * 0000000140C72DC4: mov     [rax+10h], ecx
 * 0000000140C72DC7: mov     rcx, [rsi+0A80h]
 * 0000000140C72DCE: cmp     [rsi+918h], r12d
 * 0000000140C72DD5: jnz     short loc_140C72DE5
 * 0000000140C72DD7: mov     rax, [rsi+588h]
 * 0000000140C72DDE: xor     rcx, r8
 * 0000000140C72DE1: mov     [rax+18h], rcx
 * 0000000140C72DE5: xor     edx, edx
 * 0000000140C72DE7: mov     r9d, 100h
 * 0000000140C72DED: mov     rcx, rsi
 * 0000000140C72DF0: call    sub_140C7F03C
 * 0000000140C72DF5: jmp     short loc_140C72DFA
 * 0000000140C72DF7: xor     r12d, r12d
 * 0000000140C72DFA: cmp     r14, [rsi+4D8h]
 * 0000000140C72E01: jz      loc_140C73829
 * 0000000140C72E07: mov     rax, [rsi+3E0h]
 * 0000000140C72E0E: mov     edx, 1
 * 0000000140C72E13: mov     rcx, r14
 * 0000000140C72E16: call    KeGuardDispatchICall
 * 0000000140C72E1B: mov     rbx, rax
 * 0000000140C72E1E: test    rax, rax
 * 0000000140C72E21: jz      loc_140C73829
 * 0000000140C72E27: mov     rcx, [rax]
 * 0000000140C72E2A: mov     r15, rax
 * 0000000140C72E2D: test    rcx, rcx
 * 0000000140C72E30: jz      loc_140C7381A
 * 0000000140C72E36: mov     r15, [rbp+7B0h+var_808]
 * 0000000140C72E3A: mov     r12, [rbp+7B0h+var_820]
 * 0000000140C72E3E: mov     [rsp+8B0h+var_840], rax
 * 0000000140C72E43: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140C72E47: mov     [rbx], rcx
 * 0000000140C72E4A: mov     rax, [rsi+1F0h]
 * 0000000140C72E51: call    KeGuardDispatchICall
 * 0000000140C72E56: mov     rcx, [rbx+8]
 * 0000000140C72E5A: movzx   edx, [rbp+7B0h+arg_18]
 * 0000000140C72E61: mov     r14, rcx
 * 0000000140C72E64: movzx   eax, dil
 * 0000000140C72E68: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140C72E6F: cmp     r14, r12
 * 0000000140C72E72: cmovz   edx, eax
 * 0000000140C72E75: mov     rax, [rsi+400h]
 * 0000000140C72E7C: shr     rcx, 6
 * 0000000140C72E80: and     cl, 0Fh
 * 0000000140C72E83: call    KeGuardDispatchICall
 * 0000000140C72E88: xor     r11d, r11d
 * 0000000140C72E8B: test    eax, eax
 * 0000000140C72E8D: jnz     loc_140C73022
 * 0000000140C72E93: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C72E9D: lea     r9d, [r11+1]
 * 0000000140C72EA1: jz      short loc_140C72EEF
 * 0000000140C72EA3: mov     rcx, [rsi+0AC8h]
 * 0000000140C72EAA: lea     edx, [rax+30h]
 * 0000000140C72EAD: lea     r8d, [r11+6]
 * 0000000140C72EB1: mov     rax, [r13+0]
 * 0000000140C72EB5: add     edx, 0FFFFFFF8h
 * 0000000140C72EB8: mov     [rcx], rax
 * 0000000140C72EBB: add     r13, 8
 * 0000000140C72EBF: add     rcx, 8
 * 0000000140C72EC3: sub     r8, r9
 * 0000000140C72EC6: jnz     short loc_140C72EB1
 * 0000000140C72EC8: test    edx, edx
 * 0000000140C72ECA: jz      short loc_140C72EE8
 * 0000000140C72ECC: mov     edi, 0FFFFFFFFh
 * 0000000140C72ED1: mov     al, [r13+0]
 * 0000000140C72ED5: add     r13, r9
 * 0000000140C72ED8: mov     [rcx], al
 * 0000000140C72EDA: add     rcx, r9
 * 0000000140C72EDD: add     edx, edi
 * 0000000140C72EDF: jnz     short loc_140C72ED1
 * 0000000140C72EE1: mov     dil, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C72EE8: mov     r13, [rsi+0AC8h]
 * 0000000140C72EEF: mov     [r13+18h], r14
 * 0000000140C72EF3: mov     rax, [rbx]
 * 0000000140C72EF6: mov     [r13+20h], rax
 * 0000000140C72EFA: mov     eax, [rbx+8]
 * 0000000140C72EFD: shr     rax, 6
 * 0000000140C72F01: and     al, 0Fh
 * 0000000140C72F03: mov     [r13+28h], al
 * 0000000140C72F07: cmp     [rsi+918h], r11d
 * 0000000140C72F0E: jnz     loc_140C73022
 * 0000000140C72F14: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C72F1E: add     rax, rsi
 * 0000000140C72F21: mov     [rsi+920h], rax
 * 0000000140C72F28: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C72F32: add     rax, r13
 * 0000000140C72F35: mov     [rsi+928h], rax
 * 0000000140C72F3C: movsxd  rax, dword ptr [r13+0]
 * 0000000140C72F40: mov     [rsi+930h], rax
 * 0000000140C72F47: mov     [rsi+938h], r15
 * 0000000140C72F4E: mov     [rsi+918h], r9d
 * 0000000140C72F55: mov     ecx, [rsi+9D8h]
 * 0000000140C72F5B: bt      ecx, 1Dh
 * 0000000140C72F5F: jb      loc_140C73022
 * 0000000140C72F65: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C72F6F: jz      loc_140C73022
 * 0000000140C72F75: test    r9b, cl
 * 0000000140C72F78: jz      loc_140C73022
 * 0000000140C72F7E: mov     ecx, [rsi+0A74h]
 * 0000000140C72F84: mov     eax, [rsi+804h]
 * 0000000140C72F8A: mov     r10, [rsi+838h]
 * 0000000140C72F91: sub     eax, ecx
 * 0000000140C72F93: mov     r8, [rsi+0A78h]
 * 0000000140C72F9A: lea     rdx, [rcx+rsi]
 * 0000000140C72F9E: mov     ecx, eax
 * 0000000140C72FA0: shr     rcx, 3
 * 0000000140C72FA4: lea     r9, [rdx+rcx*8]
 * 0000000140C72FA8: jmp     short loc_140C72FCB
 * 0000000140C72FAA: xor     [rdx], r8
 * 0000000140C72FAD: mov     rax, [rdx]
 * 0000000140C72FB0: movzx   ecx, r8b
 * 0000000140C72FB4: xor     rax, r10
 * 0000000140C72FB7: and     ecx, 3Fh
 * 0000000140C72FBA: ror     r8, cl
 * 0000000140C72FBD: add     r8, rax
 * 0000000140C72FC0: xor     r8, 0F05h
 * 0000000140C72FC7: add     rdx, 8
 * 0000000140C72FCB: cmp     rdx, r9
 * 0000000140C72FCE: jnz     short loc_140C72FAA
 * 0000000140C72FD0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C72FD8: cmp     r8, [rsi+0A80h]
 * 0000000140C72FDF: jz      short loc_140C73022
 * 0000000140C72FE1: mov     ecx, [rsi+804h]
 * 0000000140C72FE7: mov     rax, [rsi+588h]
 * 0000000140C72FEE: mov     [rax], rsi
 * 0000000140C72FF1: mov     [rax+10h], ecx
 * 0000000140C72FF4: mov     rcx, [rsi+0A80h]
 * 0000000140C72FFB: cmp     [rsi+918h], r11d
 * 0000000140C73002: jnz     short loc_140C73012
 * 0000000140C73004: mov     rax, [rsi+588h]
 * 0000000140C7300B: xor     rcx, r8
 * 0000000140C7300E: mov     [rax+18h], rcx
 * 0000000140C73012: xor     edx, edx
 * 0000000140C73014: mov     r9d, 100h
 * 0000000140C7301A: mov     rcx, rsi
 * 0000000140C7301D: call    sub_140C7F03C
 * 0000000140C73022: add     rbx, 30h ; '0'
 * 0000000140C73026: mov     rcx, [rbx]
 * 0000000140C73029: test    rcx, rcx
 * 0000000140C7302C: jnz     loc_140C72E43
 * 0000000140C73032: mov     r15, [rsp+8B0h+var_840]
 * 0000000140C73037: jmp     loc_140C73813
 * 0000000140C7303C: mov     rax, [rsi+3D0h]
 * 0000000140C73043: call    KeGuardDispatchICall
 * 0000000140C73048: test    eax, eax
 * 0000000140C7304A: jz      loc_140C73852
 * 0000000140C73050: mov     rax, [rsi+3A8h]
 * 0000000140C73057: mov     rcx, r14
 * 0000000140C7305A: call    KeGuardDispatchICall
 * 0000000140C7305F: test    eax, eax
 * 0000000140C73061: js      loc_140C7384D
 * 0000000140C73067: mov     rax, [rsi+3E8h]
 * 0000000140C7306E: mov     rcx, r14
 * 0000000140C73071: call    KeGuardDispatchICall
 * 0000000140C73076: movzx   ebx, al
 * 0000000140C73079: lea     rdx, [rbp+7B0h+var_7FF]
 * 0000000140C7307D: mov     rax, [rsi+3F0h]
 * 0000000140C73084: mov     rcx, r14
 * 0000000140C73087: call    KeGuardDispatchICall
 * 0000000140C7308C: movzx   edi, al
 * 0000000140C7308F: mov     rcx, r14
 * 0000000140C73092: mov     rax, [rsi+3F8h]
 * 0000000140C73099: call    KeGuardDispatchICall
 * 0000000140C7309E: mov     [rbp+7B0h+arg_8], rax
 * 0000000140C730A5: cmp     bl, 61h ; 'a'
 * 0000000140C730A8: jz      loc_140C731F3
 * 0000000140C730AE: cmp     [rsi+918h], r12d
 * 0000000140C730B5: jnz     loc_140C731F3
 * 0000000140C730BB: mov     rax, [rsi+588h]
 * 0000000140C730C2: mov     ecx, ebx
 * 0000000140C730C4: xor     rcx, 61h
 * 0000000140C730C8: mov     [rax+18h], rcx
 * 0000000140C730CC: cmp     [rsi+918h], r12d
 * 0000000140C730D3: jnz     loc_140C731F3
 * 0000000140C730D9: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C730DE: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C730E8: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C730F2: mov     r8d, 1
 * 0000000140C730F8: lea     rax, [rsi+r10]
 * 0000000140C730FC: mov     [rsi+920h], rax
 * 0000000140C73103: lea     rax, [rdx+r9]
 * 0000000140C73107: mov     [rsi+928h], rax
 * 0000000140C7310E: movsxd  rax, dword ptr [rdx]
 * 0000000140C73111: mov     [rsi+930h], rax
 * 0000000140C73118: mov     [rsi+938h], r14
 * 0000000140C7311F: mov     [rsi+918h], r8d
 * 0000000140C73126: mov     ecx, [rsi+9D8h]
 * 0000000140C7312C: bt      ecx, 1Dh
 * 0000000140C73130: jb      loc_140C73212
 * 0000000140C73136: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C73140: jz      loc_140C73212
 * 0000000140C73146: test    r8b, cl
 * 0000000140C73149: jz      loc_140C73212
 * 0000000140C7314F: mov     ecx, [rsi+0A74h]
 * 0000000140C73155: mov     eax, [rsi+804h]
 * 0000000140C7315B: mov     r10, [rsi+838h]
 * 0000000140C73162: sub     eax, ecx
 * 0000000140C73164: mov     r8, [rsi+0A78h]
 * 0000000140C7316B: lea     rdx, [rcx+rsi]
 * 0000000140C7316F: mov     ecx, eax
 * 0000000140C73171: shr     rcx, 3
 * 0000000140C73175: lea     r9, [rdx+rcx*8]
 * 0000000140C73179: jmp     short loc_140C7319C
 * 0000000140C7317B: xor     [rdx], r8
 * 0000000140C7317E: mov     rax, [rdx]
 * 0000000140C73181: movzx   ecx, r8b
 * 0000000140C73185: xor     rax, r10
 * 0000000140C73188: and     ecx, 3Fh
 * 0000000140C7318B: ror     r8, cl
 * 0000000140C7318E: add     r8, rax
 * 0000000140C73191: xor     r8, 0F05h
 * 0000000140C73198: add     rdx, 8
 * 0000000140C7319C: cmp     rdx, r9
 * 0000000140C7319F: jnz     short loc_140C7317B
 * 0000000140C731A1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C731A9: cmp     r8, [rsi+0A80h]
 * 0000000140C731B0: jz      short loc_140C731F3
 * 0000000140C731B2: mov     ecx, [rsi+804h]
 * 0000000140C731B8: mov     rax, [rsi+588h]
 * 0000000140C731BF: mov     [rax], rsi
 * 0000000140C731C2: mov     [rax+10h], ecx
 * 0000000140C731C5: mov     rcx, [rsi+0A80h]
 * 0000000140C731CC: cmp     [rsi+918h], r12d
 * 0000000140C731D3: jnz     short loc_140C731E3
 * 0000000140C731D5: mov     rax, [rsi+588h]
 * 0000000140C731DC: xor     rcx, r8
 * 0000000140C731DF: mov     [rax+18h], rcx
 * 0000000140C731E3: xor     edx, edx
 * 0000000140C731E5: mov     r9d, 100h
 * 0000000140C731EB: mov     rcx, rsi
 * 0000000140C731EE: call    sub_140C7F03C
 * 0000000140C731F3: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C731F8: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C73202: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C7320C: mov     r8d, 1
 * 0000000140C73212: mov     ecx, ebx
 * 0000000140C73214: mov     r14b, r12b
 * 0000000140C73217: and     ecx, 7
 * 0000000140C7321A: sub     ecx, 1
 * 0000000140C7321D: jz      loc_140C73353
 * 0000000140C73223: xor     r11d, r11d
 * 0000000140C73226: cmp     ecx, 1
 * 0000000140C73229: jz      loc_140C73346
 * 0000000140C7322F: test    bl, 7
 * 0000000140C73232: jz      loc_140C73359
 * 0000000140C73238: cmp     [rsi+918h], r11d
 * 0000000140C7323F: jnz     loc_140C73359
 * 0000000140C73245: lea     rax, [rsi+r10]
 * 0000000140C73249: mov     [rsi+920h], rax
 * 0000000140C73250: lea     rax, [rdx+r9]
 * 0000000140C73254: mov     [rsi+928h], rax
 * 0000000140C7325B: movsxd  rax, dword ptr [rdx]
 * 0000000140C7325E: mov     [rsi+930h], rax
 * 0000000140C73265: mov     rax, [rbp+7B0h+var_808]
 * 0000000140C73269: mov     [rsi+938h], rax
 * 0000000140C73270: mov     [rsi+918h], r8d
 * 0000000140C73277: mov     ecx, [rsi+9D8h]
 * 0000000140C7327D: bt      ecx, 1Dh
 * 0000000140C73281: jb      loc_140C73359
 * 0000000140C73287: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C73291: jz      loc_140C73359
 * 0000000140C73297: test    r8b, cl
 * 0000000140C7329A: jz      loc_140C73359
 * 0000000140C732A0: mov     ecx, [rsi+0A74h]
 * 0000000140C732A6: mov     eax, [rsi+804h]
 * 0000000140C732AC: mov     r10, [rsi+838h]
 * 0000000140C732B3: sub     eax, ecx
 * 0000000140C732B5: mov     r8, [rsi+0A78h]
 * 0000000140C732BC: lea     rdx, [rcx+rsi]
 * 0000000140C732C0: mov     ecx, eax
 * 0000000140C732C2: shr     rcx, 3
 * 0000000140C732C6: lea     r9, [rdx+rcx*8]
 * 0000000140C732CA: jmp     short loc_140C732ED
 * 0000000140C732CC: xor     [rdx], r8
 * 0000000140C732CF: mov     rax, [rdx]
 * 0000000140C732D2: movzx   ecx, r8b
 * 0000000140C732D6: xor     rax, r10
 * 0000000140C732D9: and     ecx, 3Fh
 * 0000000140C732DC: ror     r8, cl
 * 0000000140C732DF: add     r8, rax
 * 0000000140C732E2: xor     r8, 0F05h
 * 0000000140C732E9: add     rdx, 8
 * 0000000140C732ED: cmp     rdx, r9
 * 0000000140C732F0: jnz     short loc_140C732CC
 * 0000000140C732F2: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C732FA: cmp     r8, [rsi+0A80h]
 * 0000000140C73301: jz      short loc_140C73359
 * 0000000140C73303: mov     ecx, [rsi+804h]
 * 0000000140C73309: mov     rax, [rsi+588h]
 * 0000000140C73310: mov     [rax], rsi
 * 0000000140C73313: mov     [rax+10h], ecx
 * 0000000140C73316: mov     rcx, [rsi+0A80h]
 * 0000000140C7331D: cmp     [rsi+918h], r11d
 * 0000000140C73324: jnz     short loc_140C73334
 * 0000000140C73326: mov     rax, [rsi+588h]
 * 0000000140C7332D: xor     rcx, r8
 * 0000000140C73330: mov     [rax+18h], rcx
 * 0000000140C73334: xor     edx, edx
 * 0000000140C73336: mov     r9d, 100h
 * 0000000140C7333C: mov     rcx, rsi
 * 0000000140C7333F: call    sub_140C7F03C
 * 0000000140C73344: jmp     short loc_140C73356
 * 0000000140C73346: mov     eax, 10h
 * 0000000140C7334B: mov     r14b, al
 * 0000000140C7334E: mov     r12b, al
 * 0000000140C73351: jmp     short loc_140C73359
 * 0000000140C73353: mov     r14b, 30h ; '0'
 * 0000000140C73356: xor     r11d, r11d
 * 0000000140C73359: mov     r15, [rsi+5C0h]
 * 0000000140C73360: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C7336A: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C7336F: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C73379: shr     rbx, 4
 * 0000000140C7337D: mov     r8d, 1
 * 0000000140C73383: or      r14b, [r15+rbx*2]
 * 0000000140C73387: cmp     r14b, dil
 * 0000000140C7338A: mov     r14, [rbp+7B0h+var_808]
 * 0000000140C7338E: jz      loc_140C734BB
 * 0000000140C73394: cmp     [rsi+918h], r11d
 * 0000000140C7339B: jnz     loc_140C734BB
 * 0000000140C733A1: lea     rax, [rsi+r10]
 * 0000000140C733A5: mov     [rsi+920h], rax
 * 0000000140C733AC: lea     rax, [rdx+r9]
 * 0000000140C733B0: mov     [rsi+928h], rax
 * 0000000140C733B7: movsxd  rax, dword ptr [rdx]
 * 0000000140C733BA: mov     [rsi+930h], rax
 * 0000000140C733C1: mov     [rsi+938h], r14
 * 0000000140C733C8: mov     [rsi+918h], r8d
 * 0000000140C733CF: mov     ecx, [rsi+9D8h]
 * 0000000140C733D5: bt      ecx, 1Dh
 * 0000000140C733D9: jb      loc_140C734BB
 * 0000000140C733DF: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C733E9: jz      loc_140C734BB
 * 0000000140C733EF: test    r8b, cl
 * 0000000140C733F2: jz      loc_140C734BB
 * 0000000140C733F8: mov     ecx, [rsi+0A74h]
 * 0000000140C733FE: mov     eax, [rsi+804h]
 * 0000000140C73404: mov     r10, [rsi+838h]
 * 0000000140C7340B: sub     eax, ecx
 * 0000000140C7340D: mov     r8, [rsi+0A78h]
 * 0000000140C73414: lea     rdx, [rcx+rsi]
 * 0000000140C73418: mov     ecx, eax
 * 0000000140C7341A: shr     rcx, 3
 * 0000000140C7341E: lea     r9, [rdx+rcx*8]
 * 0000000140C73422: jmp     short loc_140C73445
 * 0000000140C73424: xor     [rdx], r8
 * 0000000140C73427: mov     rax, [rdx]
 * 0000000140C7342A: movzx   ecx, r8b
 * 0000000140C7342E: xor     rax, r10
 * 0000000140C73431: and     ecx, 3Fh
 * 0000000140C73434: ror     r8, cl
 * 0000000140C73437: add     r8, rax
 * 0000000140C7343A: xor     r8, 0F05h
 * 0000000140C73441: add     rdx, 8
 * 0000000140C73445: cmp     rdx, r9
 * 0000000140C73448: jnz     short loc_140C73424
 * 0000000140C7344A: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C73452: cmp     r8, [rsi+0A80h]
 * 0000000140C73459: jz      short loc_140C7349C
 * 0000000140C7345B: mov     ecx, [rsi+804h]
 * 0000000140C73461: mov     rax, [rsi+588h]
 * 0000000140C73468: mov     [rax], rsi
 * 0000000140C7346B: mov     [rax+10h], ecx
 * 0000000140C7346E: mov     rcx, [rsi+0A80h]
 * 0000000140C73475: cmp     [rsi+918h], r11d
 * 0000000140C7347C: jnz     short loc_140C7348C
 * 0000000140C7347E: mov     rax, [rsi+588h]
 * 0000000140C73485: xor     rcx, r8
 * 0000000140C73488: mov     [rax+18h], rcx
 * 0000000140C7348C: xor     edx, edx
 * 0000000140C7348E: mov     r9d, 100h
 * 0000000140C73494: mov     rcx, rsi
 * 0000000140C73497: call    sub_140C7F03C
 * 0000000140C7349C: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C734A1: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C734AB: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C734B5: mov     r8d, 1
 * 0000000140C734BB: or      r12b, [r15+rbx*2+1]
 * 0000000140C734C0: cmp     r12b, [rbp+7B0h+var_7FF]
 * 0000000140C734C4: jz      loc_140C735D7
 * 0000000140C734CA: xor     r12d, r12d
 * 0000000140C734CD: cmp     [rsi+918h], r12d
 * 0000000140C734D4: jnz     loc_140C735DA
 * 0000000140C734DA: lea     rax, [rsi+r10]
 * 0000000140C734DE: mov     [rsi+920h], rax
 * 0000000140C734E5: lea     rax, [rdx+r9]
 * 0000000140C734E9: mov     [rsi+928h], rax
 * 0000000140C734F0: movsxd  rax, dword ptr [rdx]
 * 0000000140C734F3: mov     [rsi+930h], rax
 * 0000000140C734FA: mov     [rsi+938h], r14
 * 0000000140C73501: mov     [rsi+918h], r8d
 * 0000000140C73508: mov     ecx, [rsi+9D8h]
 * 0000000140C7350E: bt      ecx, 1Dh
 * 0000000140C73512: jb      loc_140C735DA
 * 0000000140C73518: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C73522: jz      loc_140C735DA
 * 0000000140C73528: test    r8b, cl
 * 0000000140C7352B: jz      loc_140C735DA
 * 0000000140C73531: mov     ecx, [rsi+0A74h]
 * 0000000140C73537: mov     eax, [rsi+804h]
 * 0000000140C7353D: mov     r10, [rsi+838h]
 * 0000000140C73544: sub     eax, ecx
 * 0000000140C73546: mov     r8, [rsi+0A78h]
 * 0000000140C7354D: lea     rdx, [rcx+rsi]
 * 0000000140C73551: mov     ecx, eax
 * 0000000140C73553: shr     rcx, 3
 * 0000000140C73557: lea     r9, [rdx+rcx*8]
 * 0000000140C7355B: jmp     short loc_140C7357E
 * 0000000140C7355D: xor     [rdx], r8
 * 0000000140C73560: mov     rax, [rdx]
 * 0000000140C73563: movzx   ecx, r8b
 * 0000000140C73567: xor     rax, r10
 * 0000000140C7356A: and     ecx, 3Fh
 * 0000000140C7356D: ror     r8, cl
 * 0000000140C73570: add     r8, rax
 * 0000000140C73573: xor     r8, 0F05h
 * 0000000140C7357A: add     rdx, 8
 * 0000000140C7357E: cmp     rdx, r9
 * 0000000140C73581: jnz     short loc_140C7355D
 * 0000000140C73583: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C7358B: cmp     r8, [rsi+0A80h]
 * 0000000140C73592: jz      short loc_140C735DA
 * 0000000140C73594: mov     ecx, [rsi+804h]
 * 0000000140C7359A: mov     rax, [rsi+588h]
 * 0000000140C735A1: mov     [rax], rsi
 * 0000000140C735A4: mov     [rax+10h], ecx
 * 0000000140C735A7: mov     rcx, [rsi+0A80h]
 * 0000000140C735AE: cmp     [rsi+918h], r12d
 * 0000000140C735B5: jnz     short loc_140C735C5
 * 0000000140C735B7: mov     rax, [rsi+588h]
 * 0000000140C735BE: xor     rcx, r8
 * 0000000140C735C1: mov     [rax+18h], rcx
 * 0000000140C735C5: xor     edx, edx
 * 0000000140C735C7: mov     r9d, 100h
 * 0000000140C735CD: mov     rcx, rsi
 * 0000000140C735D0: call    sub_140C7F03C
 * 0000000140C735D5: jmp     short loc_140C735DA
 * 0000000140C735D7: xor     r12d, r12d
 * 0000000140C735DA: cmp     r14, [rsi+4D8h]
 * 0000000140C735E1: jz      loc_140C73829
 * 0000000140C735E7: mov     rax, [rsi+3E0h]
 * 0000000140C735EE: mov     edx, 1
 * 0000000140C735F3: mov     rcx, r14
 * 0000000140C735F6: call    KeGuardDispatchICall
 * 0000000140C735FB: mov     rbx, rax
 * 0000000140C735FE: test    rax, rax
 * 0000000140C73601: jz      loc_140C73829
 * 0000000140C73607: mov     rcx, [rax]
 * 0000000140C7360A: mov     r15, rax
 * 0000000140C7360D: test    rcx, rcx
 * 0000000140C73610: jz      loc_140C7381A
 * 0000000140C73616: mov     r15, [rbp+7B0h+var_808]
 * 0000000140C7361A: mov     r12, [rbp+7B0h+arg_8]
 * 0000000140C73621: mov     [rbp+7B0h+var_820], rax
 * 0000000140C73625: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140C73629: mov     [rbx], rcx
 * 0000000140C7362C: mov     rax, [rsi+1F0h]
 * 0000000140C73633: call    KeGuardDispatchICall
 * 0000000140C73638: mov     rcx, [rbx+8]
 * 0000000140C7363C: movzx   edx, [rbp+7B0h+var_7FF]
 * 0000000140C73640: mov     r14, rcx
 * 0000000140C73643: mov     rax, [rsi+400h]
 * 0000000140C7364A: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140C73651: cmp     r14, r12
 * 0000000140C73654: cmovz   edx, edi
 * 0000000140C73657: shr     rcx, 6
 * 0000000140C7365B: and     cl, 0Fh
 * 0000000140C7365E: call    KeGuardDispatchICall
 * 0000000140C73663: xor     r11d, r11d
 * 0000000140C73666: test    eax, eax
 * 0000000140C73668: jnz     loc_140C737FF
 * 0000000140C7366E: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C73678: lea     r9d, [r11+1]
 * 0000000140C7367C: jz      short loc_140C736CC
 * 0000000140C7367E: mov     rcx, [rsi+0AC8h]
 * 0000000140C73685: lea     edx, [rax+30h]
 * 0000000140C73688: lea     r8d, [r11+6]
 * 0000000140C7368C: mov     rax, [r13+0]
 * 0000000140C73690: add     edx, 0FFFFFFF8h
 * 0000000140C73693: mov     [rcx], rax
 * 0000000140C73696: add     r13, 8
 * 0000000140C7369A: add     rcx, 8
 * 0000000140C7369E: sub     r8, r9
 * 0000000140C736A1: jnz     short loc_140C7368C
 * 0000000140C736A3: test    edx, edx
 * 0000000140C736A5: jz      short loc_140C736C5
 * 0000000140C736A7: mov     r12d, 0FFFFFFFFh
 * 0000000140C736AD: mov     al, [r13+0]
 * 0000000140C736B1: add     r13, r9
 * 0000000140C736B4: mov     [rcx], al
 * 0000000140C736B6: add     rcx, r9
 * 0000000140C736B9: add     edx, r12d
 * 0000000140C736BC: jnz     short loc_140C736AD
 * 0000000140C736BE: mov     r12, [rbp+7B0h+arg_8]
 * 0000000140C736C5: mov     r13, [rsi+0AC8h]
 * 0000000140C736CC: mov     [r13+18h], r14
 * 0000000140C736D0: mov     rax, [rbx]
 * 0000000140C736D3: mov     [r13+20h], rax
 * 0000000140C736D7: mov     eax, [rbx+8]
 * 0000000140C736DA: shr     rax, 6
 * 0000000140C736DE: and     al, 0Fh
 * 0000000140C736E0: mov     [r13+28h], al
 * 0000000140C736E4: cmp     [rsi+918h], r11d
 * 0000000140C736EB: jnz     loc_140C737FF
 * 0000000140C736F1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C736FB: add     rax, rsi
 * 0000000140C736FE: mov     [rsi+920h], rax
 * 0000000140C73705: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C7370F: add     rax, r13
 * 0000000140C73712: mov     [rsi+928h], rax
 * 0000000140C73719: movsxd  rax, dword ptr [r13+0]
 * 0000000140C7371D: mov     [rsi+930h], rax
 * 0000000140C73724: mov     [rsi+938h], r15
 * 0000000140C7372B: mov     [rsi+918h], r9d
 * 0000000140C73732: mov     ecx, [rsi+9D8h]
 * 0000000140C73738: bt      ecx, 1Dh
 * 0000000140C7373C: jb      loc_140C737FF
 * 0000000140C73742: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7374C: jz      loc_140C737FF
 * 0000000140C73752: test    r9b, cl
 * 0000000140C73755: jz      loc_140C737FF
 * 0000000140C7375B: mov     ecx, [rsi+0A74h]
 * 0000000140C73761: mov     eax, [rsi+804h]
 * 0000000140C73767: mov     r10, [rsi+838h]
 * 0000000140C7376E: sub     eax, ecx
 * 0000000140C73770: mov     r8, [rsi+0A78h]
 * 0000000140C73777: lea     rdx, [rcx+rsi]
 * 0000000140C7377B: mov     ecx, eax
 * 0000000140C7377D: shr     rcx, 3
 * 0000000140C73781: lea     r9, [rdx+rcx*8]
 * 0000000140C73785: jmp     short loc_140C737A8
 * 0000000140C73787: xor     [rdx], r8
 * 0000000140C7378A: mov     rax, [rdx]
 * 0000000140C7378D: movzx   ecx, r8b
 * 0000000140C73791: xor     rax, r10
 * 0000000140C73794: and     ecx, 3Fh
 * 0000000140C73797: ror     r8, cl
 * 0000000140C7379A: add     r8, rax
 * 0000000140C7379D: xor     r8, 0F05h
 * 0000000140C737A4: add     rdx, 8
 * 0000000140C737A8: cmp     rdx, r9
 * 0000000140C737AB: jnz     short loc_140C73787
 * 0000000140C737AD: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C737B5: cmp     r8, [rsi+0A80h]
 * 0000000140C737BC: jz      short loc_140C737FF
 * 0000000140C737BE: mov     ecx, [rsi+804h]
 * 0000000140C737C4: mov     rax, [rsi+588h]
 * 0000000140C737CB: mov     [rax], rsi
 * 0000000140C737CE: mov     [rax+10h], ecx
 * 0000000140C737D1: mov     rcx, [rsi+0A80h]
 * 0000000140C737D8: cmp     [rsi+918h], r11d
 * 0000000140C737DF: jnz     short loc_140C737EF
 * 0000000140C737E1: mov     rax, [rsi+588h]
 * 0000000140C737E8: xor     rcx, r8
 * 0000000140C737EB: mov     [rax+18h], rcx
 * 0000000140C737EF: xor     edx, edx
 * 0000000140C737F1: mov     r9d, 100h
 * 0000000140C737F7: mov     rcx, rsi
 * 0000000140C737FA: call    sub_140C7F03C
 * 0000000140C737FF: add     rbx, 30h ; '0'
 * 0000000140C73803: mov     rcx, [rbx]
 * 0000000140C73806: test    rcx, rcx
 * 0000000140C73809: jnz     loc_140C73625
 * 0000000140C7380F: mov     r15, [rbp+7B0h+var_820]
 * 0000000140C73813: mov     r14, [rbp+7B0h+var_808]
 * 0000000140C73817: xor     r12d, r12d
 * 0000000140C7381A: mov     rax, [rsi+108h]
 * 0000000140C73821: mov     rcx, r15
 * 0000000140C73824: call    KeGuardDispatchICall
 * 0000000140C73829: mov     rax, [rsi+3B0h]
 * 0000000140C73830: mov     rcx, r14
 * 0000000140C73833: call    KeGuardDispatchICall
 * 0000000140C73838: mov     r15d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C7383D: mov     eax, 8000h
 * 0000000140C73842: add     [rsi+848h], eax
 * 0000000140C73848: mov     rbx, [rsp+8B0h+var_858]
 * 0000000140C7384D: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C73852: mov     rax, [rsi+3B8h]
 * 0000000140C73859: inc     r15d
 * 0000000140C7385C: mov     rcx, r14
 * 0000000140C7385F: mov     dword ptr [rsp+8B0h+var_848], r15d
 * 0000000140C73864: call    KeGuardDispatchICall
 * 0000000140C73869: mov     [rbp+7B0h+var_808], rax
 * 0000000140C7386D: mov     r14, rax
 * 0000000140C73870: test    rax, rax
 * 0000000140C73873: jnz     loc_140C7285A
 * 0000000140C73879: lea     edi, [rax+2]
 * 0000000140C7387C: mov     r13, [rsi+4D8h]
 * 0000000140C73883: mov     rax, [rsi+3A8h]
 * 0000000140C7388A: mov     rcx, r13
 * 0000000140C7388D: call    KeGuardDispatchICall
 * 0000000140C73892: test    eax, eax
 * 0000000140C73894: js      loc_140C74074
 * 0000000140C7389A: mov     rax, [rsi+3E8h]
 * 0000000140C738A1: mov     rcx, r13
 * 0000000140C738A4: call    KeGuardDispatchICall
 * 0000000140C738A9: movzx   ebx, al
 * 0000000140C738AC: lea     rdx, [rbp+7B0h+var_800]
 * 0000000140C738B0: mov     rax, [rsi+3F0h]
 * 0000000140C738B7: mov     rcx, r13
 * 0000000140C738BA: call    KeGuardDispatchICall
 * 0000000140C738BF: mov     byte ptr [rbp+7B0h+arg_8], al
 * 0000000140C738C5: mov     rcx, r13
 * 0000000140C738C8: mov     rax, [rsi+3F8h]
 * 0000000140C738CF: call    KeGuardDispatchICall
 * 0000000140C738D4: mov     [rbp+7B0h+var_820], rax
 * 0000000140C738D8: cmp     bl, 72h ; 'r'
 * 0000000140C738DB: jz      loc_140C73A26
 * 0000000140C738E1: cmp     [rsi+918h], r12d
 * 0000000140C738E8: jnz     loc_140C73A26
 * 0000000140C738EE: mov     rax, [rsi+588h]
 * 0000000140C738F5: mov     ecx, ebx
 * 0000000140C738F7: xor     rcx, 72h
 * 0000000140C738FB: mov     [rax+18h], rcx
 * 0000000140C738FF: cmp     [rsi+918h], r12d
 * 0000000140C73906: jnz     loc_140C73A26
 * 0000000140C7390C: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C73911: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C7391B: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C73925: mov     r8d, 1
 * 0000000140C7392B: lea     rax, [rsi+r10]
 * 0000000140C7392F: mov     [rsi+920h], rax
 * 0000000140C73936: lea     rax, [rdx+r9]
 * 0000000140C7393A: mov     [rsi+928h], rax
 * 0000000140C73941: movsxd  rax, dword ptr [rdx]
 * 0000000140C73944: mov     [rsi+930h], rax
 * 0000000140C7394B: mov     [rsi+938h], r13
 * 0000000140C73952: mov     [rsi+918h], r8d
 * 0000000140C73959: mov     ecx, [rsi+9D8h]
 * 0000000140C7395F: bt      ecx, 1Dh
 * 0000000140C73963: jb      loc_140C73A45
 * 0000000140C73969: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C73973: jz      loc_140C73A45
 * 0000000140C73979: test    r8b, cl
 * 0000000140C7397C: jz      loc_140C73A45
 * 0000000140C73982: mov     ecx, [rsi+0A74h]
 * 0000000140C73988: mov     eax, [rsi+804h]
 * 0000000140C7398E: mov     r10, [rsi+838h]
 * 0000000140C73995: sub     eax, ecx
 * 0000000140C73997: mov     r8, [rsi+0A78h]
 * 0000000140C7399E: lea     rdx, [rcx+rsi]
 * 0000000140C739A2: mov     ecx, eax
 * 0000000140C739A4: shr     rcx, 3
 * 0000000140C739A8: lea     r9, [rdx+rcx*8]
 * 0000000140C739AC: jmp     short loc_140C739CF
 * 0000000140C739AE: xor     [rdx], r8
 * 0000000140C739B1: mov     rax, [rdx]
 * 0000000140C739B4: movzx   ecx, r8b
 * 0000000140C739B8: xor     rax, r10
 * 0000000140C739BB: and     ecx, 3Fh
 * 0000000140C739BE: ror     r8, cl
 * 0000000140C739C1: add     r8, rax
 * 0000000140C739C4: xor     r8, 0F05h
 * 0000000140C739CB: add     rdx, 8
 * 0000000140C739CF: cmp     rdx, r9
 * 0000000140C739D2: jnz     short loc_140C739AE
 * 0000000140C739D4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C739DC: cmp     r8, [rsi+0A80h]
 * 0000000140C739E3: jz      short loc_140C73A26
 * 0000000140C739E5: mov     ecx, [rsi+804h]
 * 0000000140C739EB: mov     rax, [rsi+588h]
 * 0000000140C739F2: mov     [rax], rsi
 * 0000000140C739F5: mov     [rax+10h], ecx
 * 0000000140C739F8: mov     rcx, [rsi+0A80h]
 * 0000000140C739FF: cmp     [rsi+918h], r12d
 * 0000000140C73A06: jnz     short loc_140C73A16
 * 0000000140C73A08: mov     rax, [rsi+588h]
 * 0000000140C73A0F: xor     rcx, r8
 * 0000000140C73A12: mov     [rax+18h], rcx
 * 0000000140C73A16: xor     edx, edx
 * 0000000140C73A18: mov     r9d, 100h
 * 0000000140C73A1E: mov     rcx, rsi
 * 0000000140C73A21: call    sub_140C7F03C
 * 0000000140C73A26: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C73A2B: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C73A35: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C73A3F: mov     r8d, 1
 * 0000000140C73A45: mov     ecx, ebx
 * 0000000140C73A47: mov     r14b, r12b
 * 0000000140C73A4A: and     ecx, 7
 * 0000000140C73A4D: sub     ecx, 1
 * 0000000140C73A50: jz      loc_140C73B82
 * 0000000140C73A56: xor     r11d, r11d
 * 0000000140C73A59: cmp     ecx, 1
 * 0000000140C73A5C: jz      loc_140C73B75
 * 0000000140C73A62: test    bl, 7
 * 0000000140C73A65: jz      loc_140C73B88
 * 0000000140C73A6B: cmp     [rsi+918h], r11d
 * 0000000140C73A72: jnz     loc_140C73B88
 * 0000000140C73A78: lea     rax, [rsi+r10]
 * 0000000140C73A7C: mov     [rsi+920h], rax
 * 0000000140C73A83: lea     rax, [rdx+r9]
 * 0000000140C73A87: mov     [rsi+928h], rax
 * 0000000140C73A8E: movsxd  rax, dword ptr [rdx]
 * 0000000140C73A91: mov     [rsi+930h], rax
 * 0000000140C73A98: mov     [rsi+938h], r13
 * 0000000140C73A9F: mov     [rsi+918h], r8d
 * 0000000140C73AA6: mov     ecx, [rsi+9D8h]
 * 0000000140C73AAC: bt      ecx, 1Dh
 * 0000000140C73AB0: jb      loc_140C73B88
 * 0000000140C73AB6: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C73AC0: jz      loc_140C73B88
 * 0000000140C73AC6: test    r8b, cl
 * 0000000140C73AC9: jz      loc_140C73B88
 * 0000000140C73ACF: mov     ecx, [rsi+0A74h]
 * 0000000140C73AD5: mov     eax, [rsi+804h]
 * 0000000140C73ADB: mov     r10, [rsi+838h]
 * 0000000140C73AE2: sub     eax, ecx
 * 0000000140C73AE4: mov     r8, [rsi+0A78h]
 * 0000000140C73AEB: lea     rdx, [rcx+rsi]
 * 0000000140C73AEF: mov     ecx, eax
 * 0000000140C73AF1: shr     rcx, 3
 * 0000000140C73AF5: lea     r9, [rdx+rcx*8]
 * 0000000140C73AF9: jmp     short loc_140C73B1C
 * 0000000140C73AFB: xor     [rdx], r8
 * 0000000140C73AFE: mov     rax, [rdx]
 * 0000000140C73B01: movzx   ecx, r8b
 * 0000000140C73B05: xor     rax, r10
 * 0000000140C73B08: and     ecx, 3Fh
 * 0000000140C73B0B: ror     r8, cl
 * 0000000140C73B0E: add     r8, rax
 * 0000000140C73B11: xor     r8, 0F05h
 * 0000000140C73B18: add     rdx, 8
 * 0000000140C73B1C: cmp     rdx, r9
 * 0000000140C73B1F: jnz     short loc_140C73AFB
 * 0000000140C73B21: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C73B29: cmp     r8, [rsi+0A80h]
 * 0000000140C73B30: jz      short loc_140C73B88
 * 0000000140C73B32: mov     ecx, [rsi+804h]
 * 0000000140C73B38: mov     rax, [rsi+588h]
 * 0000000140C73B3F: mov     [rax], rsi
 * 0000000140C73B42: mov     [rax+10h], ecx
 * 0000000140C73B45: mov     rcx, [rsi+0A80h]
 * 0000000140C73B4C: cmp     [rsi+918h], r11d
 * 0000000140C73B53: jnz     short loc_140C73B63
 * 0000000140C73B55: mov     rax, [rsi+588h]
 * 0000000140C73B5C: xor     rcx, r8
 * 0000000140C73B5F: mov     [rax+18h], rcx
 * 0000000140C73B63: xor     edx, edx
 * 0000000140C73B65: mov     r9d, 100h
 * 0000000140C73B6B: mov     rcx, rsi
 * 0000000140C73B6E: call    sub_140C7F03C
 * 0000000140C73B73: jmp     short loc_140C73B85
 * 0000000140C73B75: mov     eax, 10h
 * 0000000140C73B7A: mov     r14b, al
 * 0000000140C73B7D: mov     r12b, al
 * 0000000140C73B80: jmp     short loc_140C73B88
 * 0000000140C73B82: mov     r14b, 30h ; '0'
 * 0000000140C73B85: xor     r11d, r11d
 * 0000000140C73B88: mov     r15, [rsi+5C0h]
 * 0000000140C73B8F: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140C73B99: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C73B9E: mov     r8, 0B3B74BDEE4453415h
 * 0000000140C73BA8: shr     rbx, 4
 * 0000000140C73BAC: or      r14b, [r15+rbx*2]
 * 0000000140C73BB0: cmp     r14b, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C73BB7: mov     r14d, 1
 * 0000000140C73BBD: jz      loc_140C73CE4
 * 0000000140C73BC3: cmp     [rsi+918h], r11d
 * 0000000140C73BCA: jnz     loc_140C73CE4
 * 0000000140C73BD0: lea     rax, [rsi+r9]
 * 0000000140C73BD4: mov     [rsi+920h], rax
 * 0000000140C73BDB: lea     rax, [rdx+r8]
 * 0000000140C73BDF: mov     [rsi+928h], rax
 * 0000000140C73BE6: movsxd  rax, dword ptr [rdx]
 * 0000000140C73BE9: mov     [rsi+930h], rax
 * 0000000140C73BF0: mov     [rsi+938h], r13
 * 0000000140C73BF7: mov     [rsi+918h], r14d
 * 0000000140C73BFE: mov     ecx, [rsi+9D8h]
 * 0000000140C73C04: bt      ecx, 1Dh
 * 0000000140C73C08: jb      loc_140C73CE4
 * 0000000140C73C0E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C73C18: jz      loc_140C73CE4
 * 0000000140C73C1E: test    r14b, cl
 * 0000000140C73C21: jz      loc_140C73CE4
 * 0000000140C73C27: mov     ecx, [rsi+0A74h]
 * 0000000140C73C2D: mov     eax, [rsi+804h]
 * 0000000140C73C33: mov     r10, [rsi+838h]
 * 0000000140C73C3A: sub     eax, ecx
 * 0000000140C73C3C: mov     r8, [rsi+0A78h]
 * 0000000140C73C43: lea     rdx, [rcx+rsi]
 * 0000000140C73C47: mov     ecx, eax
 * 0000000140C73C49: shr     rcx, 3
 * 0000000140C73C4D: lea     r9, [rdx+rcx*8]
 * 0000000140C73C51: jmp     short loc_140C73C74
 * 0000000140C73C53: xor     [rdx], r8
 * 0000000140C73C56: mov     rax, [rdx]
 * 0000000140C73C59: movzx   ecx, r8b
 * 0000000140C73C5D: xor     rax, r10
 * 0000000140C73C60: and     ecx, 3Fh
 * 0000000140C73C63: ror     r8, cl
 * 0000000140C73C66: add     r8, rax
 * 0000000140C73C69: xor     r8, 0F05h
 * 0000000140C73C70: add     rdx, 8
 * 0000000140C73C74: cmp     rdx, r9
 * 0000000140C73C77: jnz     short loc_140C73C53
 * 0000000140C73C79: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C73C81: cmp     r8, [rsi+0A80h]
 * 0000000140C73C88: jz      short loc_140C73CCB
 * 0000000140C73C8A: mov     ecx, [rsi+804h]
 * 0000000140C73C90: mov     rax, [rsi+588h]
 * 0000000140C73C97: mov     [rax], rsi
 * 0000000140C73C9A: mov     [rax+10h], ecx
 * 0000000140C73C9D: mov     rcx, [rsi+0A80h]
 * 0000000140C73CA4: cmp     [rsi+918h], r11d
 * 0000000140C73CAB: jnz     short loc_140C73CBB
 * 0000000140C73CAD: mov     rax, [rsi+588h]
 * 0000000140C73CB4: xor     rcx, r8
 * 0000000140C73CB7: mov     [rax+18h], rcx
 * 0000000140C73CBB: xor     edx, edx
 * 0000000140C73CBD: mov     r9d, 100h
 * 0000000140C73CC3: mov     rcx, rsi
 * 0000000140C73CC6: call    sub_140C7F03C
 * 0000000140C73CCB: mov     rdx, [rsp+8B0h+var_860]
 * 0000000140C73CD0: mov     r9, 0A3A03F5891C8B4E8h
 * 0000000140C73CDA: mov     r8, 0B3B74BDEE4453415h
 * 0000000140C73CE4: or      r12b, [r15+rbx*2+1]
 * 0000000140C73CE9: cmp     r12b, [rbp+7B0h+var_800]
 * 0000000140C73CED: jz      loc_140C73E00
 * 0000000140C73CF3: xor     r12d, r12d
 * 0000000140C73CF6: cmp     [rsi+918h], r12d
 * 0000000140C73CFD: jnz     loc_140C73E03
 * 0000000140C73D03: lea     rax, [rsi+r9]
 * 0000000140C73D07: mov     [rsi+920h], rax
 * 0000000140C73D0E: lea     rax, [rdx+r8]
 * 0000000140C73D12: mov     [rsi+928h], rax
 * 0000000140C73D19: movsxd  rax, dword ptr [rdx]
 * 0000000140C73D1C: mov     [rsi+930h], rax
 * 0000000140C73D23: mov     [rsi+938h], r13
 * 0000000140C73D2A: mov     [rsi+918h], r14d
 * 0000000140C73D31: mov     ecx, [rsi+9D8h]
 * 0000000140C73D37: bt      ecx, 1Dh
 * 0000000140C73D3B: jb      loc_140C73E03
 * 0000000140C73D41: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C73D4B: jz      loc_140C73E03
 * 0000000140C73D51: test    r14b, cl
 * 0000000140C73D54: jz      loc_140C73E03
 * 0000000140C73D5A: mov     ecx, [rsi+0A74h]
 * 0000000140C73D60: mov     eax, [rsi+804h]
 * 0000000140C73D66: mov     r10, [rsi+838h]
 * 0000000140C73D6D: sub     eax, ecx
 * 0000000140C73D6F: mov     r8, [rsi+0A78h]
 * 0000000140C73D76: lea     rdx, [rcx+rsi]
 * 0000000140C73D7A: mov     ecx, eax
 * 0000000140C73D7C: shr     rcx, 3
 * 0000000140C73D80: lea     r9, [rdx+rcx*8]
 * 0000000140C73D84: jmp     short loc_140C73DA7
 * 0000000140C73D86: xor     [rdx], r8
 * 0000000140C73D89: mov     rax, [rdx]
 * 0000000140C73D8C: movzx   ecx, r8b
 * 0000000140C73D90: xor     rax, r10
 * 0000000140C73D93: and     ecx, 3Fh
 * 0000000140C73D96: ror     r8, cl
 * 0000000140C73D99: add     r8, rax
 * 0000000140C73D9C: xor     r8, 0F05h
 * 0000000140C73DA3: add     rdx, 8
 * 0000000140C73DA7: cmp     rdx, r9
 * 0000000140C73DAA: jnz     short loc_140C73D86
 * 0000000140C73DAC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C73DB4: cmp     r8, [rsi+0A80h]
 * 0000000140C73DBB: jz      short loc_140C73E03
 * 0000000140C73DBD: mov     ecx, [rsi+804h]
 * 0000000140C73DC3: mov     rax, [rsi+588h]
 * 0000000140C73DCA: mov     [rax], rsi
 * 0000000140C73DCD: mov     [rax+10h], ecx
 * 0000000140C73DD0: mov     rcx, [rsi+0A80h]
 * 0000000140C73DD7: cmp     [rsi+918h], r12d
 * 0000000140C73DDE: jnz     short loc_140C73DEE
 * 0000000140C73DE0: mov     rax, [rsi+588h]
 * 0000000140C73DE7: xor     rcx, r8
 * 0000000140C73DEA: mov     [rax+18h], rcx
 * 0000000140C73DEE: xor     edx, edx
 * 0000000140C73DF0: mov     r9d, 100h
 * 0000000140C73DF6: mov     rcx, rsi
 * 0000000140C73DF9: call    sub_140C7F03C
 * 0000000140C73DFE: jmp     short loc_140C73E03
 * 0000000140C73E00: xor     r12d, r12d
 * 0000000140C73E03: cmp     r13, [rsi+4D8h]
 * 0000000140C73E0A: jz      loc_140C74055
 * 0000000140C73E10: mov     rax, [rsi+3E0h]
 * 0000000140C73E17: mov     edx, r14d
 * 0000000140C73E1A: mov     rcx, r13
 * 0000000140C73E1D: call    KeGuardDispatchICall
 * 0000000140C73E22: mov     rbx, rax
 * 0000000140C73E25: test    rax, rax
 * 0000000140C73E28: jz      loc_140C74055
 * 0000000140C73E2E: mov     rcx, [rax]
 * 0000000140C73E31: mov     r15, rax
 * 0000000140C73E34: test    rcx, rcx
 * 0000000140C73E37: jz      loc_140C74046
 * 0000000140C73E3D: mov     dil, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C73E44: mov     r12, [rbp+7B0h+var_820]
 * 0000000140C73E48: mov     r15, [rsp+8B0h+var_860]
 * 0000000140C73E4D: mov     [rsp+8B0h+var_840], rax
 * 0000000140C73E52: and     rcx, 0FFFFFFFFFFFFFFFCh
 * 0000000140C73E56: mov     [rbx], rcx
 * 0000000140C73E59: mov     rax, [rsi+1F0h]
 * 0000000140C73E60: call    KeGuardDispatchICall
 * 0000000140C73E65: mov     rcx, [rbx+8]
 * 0000000140C73E69: movzx   edx, [rbp+7B0h+var_800]
 * 0000000140C73E6D: mov     r14, rcx
 * 0000000140C73E70: movzx   eax, dil
 * 0000000140C73E74: and     r14, 0FFFFFFFFFFFF0000h
 * 0000000140C73E7B: cmp     r14, r12
 * 0000000140C73E7E: cmovz   edx, eax
 * 0000000140C73E81: mov     rax, [rsi+400h]
 * 0000000140C73E88: shr     rcx, 6
 * 0000000140C73E8C: and     cl, 0Fh
 * 0000000140C73E8F: call    KeGuardDispatchICall
 * 0000000140C73E94: xor     r11d, r11d
 * 0000000140C73E97: test    eax, eax
 * 0000000140C73E99: jnz     loc_140C7402B
 * 0000000140C73E9F: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C73EA9: lea     r9d, [r11+1]
 * 0000000140C73EAD: jz      short loc_140C73EF9
 * 0000000140C73EAF: mov     rcx, [rsi+0AC8h]
 * 0000000140C73EB6: lea     edx, [rax+30h]
 * 0000000140C73EB9: lea     r8d, [r11+6]
 * 0000000140C73EBD: mov     rax, [r15]
 * 0000000140C73EC0: add     edx, 0FFFFFFF8h
 * 0000000140C73EC3: mov     [rcx], rax
 * 0000000140C73EC6: add     r15, 8
 * 0000000140C73ECA: add     rcx, 8
 * 0000000140C73ECE: sub     r8, r9
 * 0000000140C73ED1: jnz     short loc_140C73EBD
 * 0000000140C73ED3: test    edx, edx
 * 0000000140C73ED5: jz      short loc_140C73EF2
 * 0000000140C73ED7: mov     edi, 0FFFFFFFFh
 * 0000000140C73EDC: mov     al, [r15]
 * 0000000140C73EDF: add     r15, r9
 * 0000000140C73EE2: mov     [rcx], al
 * 0000000140C73EE4: add     rcx, r9
 * 0000000140C73EE7: add     edx, edi
 * 0000000140C73EE9: jnz     short loc_140C73EDC
 * 0000000140C73EEB: mov     dil, byte ptr [rbp+7B0h+arg_8]
 * 0000000140C73EF2: mov     r15, [rsi+0AC8h]
 * 0000000140C73EF9: mov     [r15+18h], r14
 * 0000000140C73EFD: mov     rax, [rbx]
 * 0000000140C73F00: mov     [r15+20h], rax
 * 0000000140C73F04: mov     eax, [rbx+8]
 * 0000000140C73F07: shr     rax, 6
 * 0000000140C73F0B: and     al, 0Fh
 * 0000000140C73F0D: mov     [r15+28h], al
 * 0000000140C73F11: cmp     [rsi+918h], r11d
 * 0000000140C73F18: jnz     loc_140C7402B
 * 0000000140C73F1E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C73F28: add     rax, rsi
 * 0000000140C73F2B: mov     [rsi+920h], rax
 * 0000000140C73F32: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C73F3C: add     rax, r15
 * 0000000140C73F3F: mov     [rsi+928h], rax
 * 0000000140C73F46: movsxd  rax, dword ptr [r15]
 * 0000000140C73F49: mov     [rsi+930h], rax
 * 0000000140C73F50: mov     [rsi+938h], r13
 * 0000000140C73F57: mov     [rsi+918h], r9d
 * 0000000140C73F5E: mov     ecx, [rsi+9D8h]
 * 0000000140C73F64: bt      ecx, 1Dh
 * 0000000140C73F68: jb      loc_140C7402B
 * 0000000140C73F6E: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C73F78: jz      loc_140C7402B
 * 0000000140C73F7E: test    r9b, cl
 * 0000000140C73F81: jz      loc_140C7402B
 * 0000000140C73F87: mov     ecx, [rsi+0A74h]
 * 0000000140C73F8D: mov     eax, [rsi+804h]
 * 0000000140C73F93: mov     r10, [rsi+838h]
 * 0000000140C73F9A: sub     eax, ecx
 * 0000000140C73F9C: mov     r8, [rsi+0A78h]
 * 0000000140C73FA3: lea     rdx, [rcx+rsi]
 * 0000000140C73FA7: mov     ecx, eax
 * 0000000140C73FA9: shr     rcx, 3
 * 0000000140C73FAD: lea     r9, [rdx+rcx*8]
 * 0000000140C73FB1: jmp     short loc_140C73FD4
 * 0000000140C73FB3: xor     [rdx], r8
 * 0000000140C73FB6: mov     rax, [rdx]
 * 0000000140C73FB9: movzx   ecx, r8b
 * 0000000140C73FBD: xor     rax, r10
 * 0000000140C73FC0: and     ecx, 3Fh
 * 0000000140C73FC3: ror     r8, cl
 * 0000000140C73FC6: add     r8, rax
 * 0000000140C73FC9: xor     r8, 0F05h
 * 0000000140C73FD0: add     rdx, 8
 * 0000000140C73FD4: cmp     rdx, r9
 * 0000000140C73FD7: jnz     short loc_140C73FB3
 * 0000000140C73FD9: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C73FE1: cmp     r8, [rsi+0A80h]
 * 0000000140C73FE8: jz      short loc_140C7402B
 * 0000000140C73FEA: mov     ecx, [rsi+804h]
 * 0000000140C73FF0: mov     rax, [rsi+588h]
 * 0000000140C73FF7: mov     [rax], rsi
 * 0000000140C73FFA: mov     [rax+10h], ecx
 * 0000000140C73FFD: mov     rcx, [rsi+0A80h]
 * 0000000140C74004: cmp     [rsi+918h], r11d
 * 0000000140C7400B: jnz     short loc_140C7401B
 * 0000000140C7400D: mov     rax, [rsi+588h]
 * 0000000140C74014: xor     rcx, r8
 * 0000000140C74017: mov     [rax+18h], rcx
 * 0000000140C7401B: xor     edx, edx
 * 0000000140C7401D: mov     r9d, 100h
 * 0000000140C74023: mov     rcx, rsi
 * 0000000140C74026: call    sub_140C7F03C
 * 0000000140C7402B: add     rbx, 30h ; '0'
 * 0000000140C7402F: mov     rcx, [rbx]
 * 0000000140C74032: test    rcx, rcx
 * 0000000140C74035: jnz     loc_140C73E52
 * 0000000140C7403B: mov     r15, [rsp+8B0h+var_840]
 * 0000000140C74040: lea     edi, [rcx+2]
 * 0000000140C74043: xor     r12d, r12d
 * 0000000140C74046: mov     rax, [rsi+108h]
 * 0000000140C7404D: mov     rcx, r15
 * 0000000140C74050: call    KeGuardDispatchICall
 * 0000000140C74055: mov     rax, [rsi+3B0h]
 * 0000000140C7405C: mov     rcx, r13
 * 0000000140C7405F: call    KeGuardDispatchICall
 * 0000000140C74064: mov     r15d, dword ptr [rsp+8B0h+var_848]
 * 0000000140C74069: mov     eax, 8000h
 * 0000000140C7406E: add     [rsi+848h], eax
 * 0000000140C74074: mov     rcx, [rsp+8B0h+var_858]
 * 0000000140C74079: test    rcx, rcx
 * 0000000140C7407C: jz      short loc_140C7408A
 * 0000000140C7407E: mov     rax, [rsi+1F0h]
 * 0000000140C74085: call    KeGuardDispatchICall
 * 0000000140C7408A: shl     r15d, 8
 * 0000000140C7408E: add     [rsi+848h], r15d
 * 0000000140C74095: jmp     loc_140C770FB
 * 0000000140C7409A: mov     ecx, r10d
 * 0000000140C7409D: sub     ecx, 29h ; ')'
 * 0000000140C740A0: jz      loc_140C71635
 * 0000000140C740A6: sub     ecx, 1
 * 0000000140C740A9: jz      loc_140C71635
 * 0000000140C740AF: sub     ecx, 1
 * 0000000140C740B2: jz      loc_140C763EA
 * 0000000140C740B8: sub     ecx, 1
 * 0000000140C740BB: jz      loc_140C75A94
 * 0000000140C740C1: sub     ecx, edi
 * 0000000140C740C3: jz      loc_140C7599D
 * 0000000140C740C9: sub     ecx, 1
 * 0000000140C740CC: jz      loc_140C75708
 * 0000000140C740D2: cmp     ecx, 1
 * 0000000140C740D5: jz      loc_140C7535F
 * 0000000140C740DB: sub     r10d, edi
 * 0000000140C740DE: jz      loc_140C74BCC
 * 0000000140C740E4: sub     r10d, 1
 * 0000000140C740E8: jz      loc_140C746E6
 * 0000000140C740EE: cmp     r10d, 14h
 * 0000000140C740F2: jz      loc_140C741DB
 * 0000000140C740F8: cmp     [rsi+918h], r12d
 * 0000000140C740FF: jnz     loc_140C773A3
 * 0000000140C74105: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C7410F: add     rax, rsi
 * 0000000140C74112: mov     [rsi+920h], rax
 * 0000000140C74119: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C74123: add     rax, r13
 * 0000000140C74126: mov     [rsi+928h], rax
 * 0000000140C7412D: mov     qword ptr [rsi+930h], 101h
 * 0000000140C74138: mov     [rsi+938h], r12
 * 0000000140C7413F: mov     [rsi+918h], r15d
 * 0000000140C74146: mov     ecx, [rsi+9D8h]
 * 0000000140C7414C: bt      ecx, 1Dh
 * 0000000140C74150: jb      loc_140C773A3
 * 0000000140C74156: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C74160: jz      loc_140C773A3
 * 0000000140C74166: test    r15b, cl
 * 0000000140C74169: jz      loc_140C773A3
 * 0000000140C7416F: mov     ecx, [rsi+0A74h]
 * 0000000140C74175: mov     eax, [rsi+804h]
 * 0000000140C7417B: mov     r10, [rsi+838h]
 * 0000000140C74182: sub     eax, ecx
 * 0000000140C74184: mov     r8, [rsi+0A78h]
 * 0000000140C7418B: lea     rdx, [rcx+rsi]
 * 0000000140C7418F: mov     ecx, eax
 * 0000000140C74191: shr     rcx, 3
 * 0000000140C74195: lea     r9, [rdx+rcx*8]
 * 0000000140C74199: jmp     short loc_140C741BC
 * 0000000140C7419B: xor     [rdx], r8
 * 0000000140C7419E: mov     rax, [rdx]
 * 0000000140C741A1: movzx   ecx, r8b
 * 0000000140C741A5: xor     rax, r10
 * 0000000140C741A8: and     ecx, 3Fh
 * 0000000140C741AB: ror     r8, cl
 * 0000000140C741AE: add     r8, rax
 * 0000000140C741B1: xor     r8, 0F05h
 * 0000000140C741B8: add     rdx, 8
 * 0000000140C741BC: cmp     rdx, r9
 * 0000000140C741BF: jnz     short loc_140C7419B
 * 0000000140C741C1: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C741C9: cmp     r8, [rsi+0A80h]
 * 0000000140C741D0: jz      loc_140C773A3
 * 0000000140C741D6: jmp     loc_140C6BA63
 * 0000000140C741DB: mov     edx, [r13+28h]
 * 0000000140C741DF: lea     rcx, [rbp+7B0h+var_2A8]
 * 0000000140C741E6: mov     rax, [rsi+1B0h]
 * 0000000140C741ED: call    KeGuardDispatchICall
 * 0000000140C741F2: mov     rax, [rsi+1E0h]
 * 0000000140C741F9: lea     rdx, [rbp+7B0h+var_298]
 * 0000000140C74200: lea     rcx, [rbp+7B0h+var_2A8]
 * 0000000140C74207: call    KeGuardDispatchICall
 * 0000000140C7420C: mov     rax, [rsi+0A58h]
 * 0000000140C74213: test    rax, rax
 * 0000000140C74216: jz      short loc_140C74220
 * 0000000140C74218: mov     ebx, [rax+320h]
 * 0000000140C7421E: jmp     short loc_140C74231
 * 0000000140C74220: mov     ecx, 832h
 * 0000000140C74225: rdmsr
 * 0000000140C74227: shl     rdx, 20h
 * 0000000140C7422B: or      rax, rdx
 * 0000000140C7422E: mov     rbx, rax
 * 0000000140C74231: mov     rax, [rsi+0A58h]
 * 0000000140C74238: test    rax, rax
 * 0000000140C7423B: jz      short loc_140C74246
 * 0000000140C7423D: mov     r14d, [rax+340h]
 * 0000000140C74244: jmp     short loc_140C74257
 * 0000000140C74246: mov     ecx, 834h
 * 0000000140C7424B: rdmsr
 * 0000000140C7424D: shl     rdx, 20h
 * 0000000140C74251: or      rax, rdx
 * 0000000140C74254: mov     r14, rax
 * 0000000140C74257: mov     rax, [rsi+1A8h]
 * 0000000140C7425E: lea     rcx, [rbp+7B0h+var_298]
 * 0000000140C74265: call    KeGuardDispatchICall
 * 0000000140C7426A: mov     ecx, 10h
 * 0000000140C7426F: test    [rsi+89Bh], cl
 * 0000000140C74275: jz      loc_140C743BA
 * 0000000140C7427B: cli
 * 0000000140C7427C: mov     rdx, [rsi+900h]
 * 0000000140C74283: mov     ecx, 130h
 * 0000000140C74288: mov     rax, rdx
 * 0000000140C7428B: mov     r8d, 26h ; '&'
 * 0000000140C74291: mov     [rax], r12
 * 0000000140C74294: add     ecx, 0FFFFFFF8h
 * 0000000140C74297: add     rax, 8
 * 0000000140C7429B: sub     r8, r15
 * 0000000140C7429E: jnz     short loc_140C74291
 * 0000000140C742A0: test    ecx, ecx
 * 0000000140C742A2: jz      short loc_140C742B5
 * 0000000140C742A4: mov     r8d, 0FFFFFFFFh
 * 0000000140C742AA: mov     [rax], r12b
 * 0000000140C742AD: add     rax, r15
 * 0000000140C742B0: add     ecx, r8d
 * 0000000140C742B3: jnz     short loc_140C742AA
 * 0000000140C742B5: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140C742BC: mov     eax, 12Fh
 * 0000000140C742C1: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140C742C6: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140C742CD: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140C742D2: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140C742D9: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140C742E1: mov     word ptr [rbp+7B0h+var_600], ax
 * 0000000140C742E8: lea     rax, [rsi+898h]
 * 0000000140C742EF: mov     [rbp+1B2h], rdx
 * 0000000140C742F6: mov     rcx, rax
 * 0000000140C742F9: mov     [rdx+10h], ax
 * 0000000140C742FD: shr     rcx, 10h
 * 0000000140C74301: mov     [rbp+7B0h+var_3E8], rax
 * 0000000140C74308: shr     rax, 20h
 * 0000000140C7430C: mov     [rdx+16h], cx
 * 0000000140C74310: mov     [rdx+18h], eax
 * 0000000140C74313: sidt    fword ptr [rbp+7B0h+var_530]
 * 0000000140C7431A: lidt    fword ptr [rbp+7B0h+var_600]
 * 0000000140C74321: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C7432B: jnz     short loc_140C7436F
 * 0000000140C7432D: mov     rdx, gs:20h
 * 0000000140C74336: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C74340: mov     rax, [rsi+4B8h]
 * 0000000140C74347: add     rcx, rsi
 * 0000000140C7434A: mov     [rax], rcx
 * 0000000140C7434D: mov     rax, [rsi+4C0h]
 * 0000000140C74354: mov     [rax], rdx
 * 0000000140C74357: mov     rax, [rsi+4C8h]
 * 0000000140C7435E: mov     [rax], r12
 * 0000000140C74361: mov     rax, [rsi+4D0h]
 * 0000000140C74368: mov     qword ptr [rax], 115h
 * 0000000140C7436F: call    KiErrata361Present
 * 0000000140C74374: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C7437E: jnz     short loc_140C743B2
 * 0000000140C74380: mov     rax, [rsi+4B8h]
 * 0000000140C74387: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C74391: mov     [rax], rcx
 * 0000000140C74394: mov     rax, [rsi+4C0h]
 * 0000000140C7439B: mov     [rax], r12
 * 0000000140C7439E: mov     rax, [rsi+4C8h]
 * 0000000140C743A5: mov     [rax], r12
 * 0000000140C743A8: mov     rax, [rsi+4D0h]
 * 0000000140C743AF: mov     [rax], r12
 * 0000000140C743B2: lidt    fword ptr [rbp+7B0h+var_530]
 * 0000000140C743B9: sti
 * 0000000140C743BA: mov     eax, [r13+1Ch]
 * 0000000140C743BE: mov     r8d, [r13+18h]
 * 0000000140C743C2: and     eax, ebx
 * 0000000140C743C4: cmp     eax, r8d
 * 0000000140C743C7: jnz     short loc_140C743F4
 * 0000000140C743C9: bt      ebx, 10h
 * 0000000140C743CD: jb      loc_140C74546
 * 0000000140C743D3: movzx   ecx, bl
 * 0000000140C743D6: sub     ecx, 0D1h
 * 0000000140C743DC: jz      loc_140C74546
 * 0000000140C743E2: sub     ecx, 2Ch ; ','
 * 0000000140C743E5: jz      loc_140C74546
 * 0000000140C743EB: cmp     ecx, 1
 * 0000000140C743EE: jz      loc_140C74546
 * 0000000140C743F4: mov     edx, [r13+28h]
 * 0000000140C743F8: mov     rax, 32000000000h
 * 0000000140C74402: shl     rdx, 30h
 * 0000000140C74406: or      rdx, r8
 * 0000000140C74409: or      rdx, rax
 * 0000000140C7440C: cmp     [rsi+918h], r12d
 * 0000000140C74413: jnz     loc_140C74546
 * 0000000140C74419: mov     rax, [rsi+588h]
 * 0000000140C74420: mov     ecx, ebx
 * 0000000140C74422: xor     rcx, r8
 * 0000000140C74425: mov     [rax+18h], rcx
 * 0000000140C74429: cmp     [rsi+918h], r12d
 * 0000000140C74430: jnz     loc_140C74546
 * 0000000140C74436: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C74440: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C7444A: lea     rax, [rsi+r10]
 * 0000000140C7444E: mov     [rsi+920h], rax
 * 0000000140C74455: lea     rax, [r9+r13]
 * 0000000140C74459: mov     [rsi+928h], rax
 * 0000000140C74460: movsxd  rax, dword ptr [r13+0]
 * 0000000140C74464: mov     [rsi+930h], rax
 * 0000000140C7446B: mov     [rsi+938h], rdx
 * 0000000140C74472: mov     [rsi+918h], r15d
 * 0000000140C74479: mov     ecx, [rsi+9D8h]
 * 0000000140C7447F: bt      ecx, 1Dh
 * 0000000140C74483: jb      loc_140C7455A
 * 0000000140C74489: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C74493: jz      loc_140C7455A
 * 0000000140C74499: test    r15b, cl
 * 0000000140C7449C: jz      loc_140C7455A
 * 0000000140C744A2: mov     ecx, [rsi+0A74h]
 * 0000000140C744A8: mov     eax, [rsi+804h]
 * 0000000140C744AE: mov     r10, [rsi+838h]
 * 0000000140C744B5: sub     eax, ecx
 * 0000000140C744B7: mov     r8, [rsi+0A78h]
 * 0000000140C744BE: lea     rdx, [rcx+rsi]
 * 0000000140C744C2: mov     ecx, eax
 * 0000000140C744C4: shr     rcx, 3
 * 0000000140C744C8: lea     r9, [rdx+rcx*8]
 * 0000000140C744CC: jmp     short loc_140C744EF
 * 0000000140C744CE: xor     [rdx], r8
 * 0000000140C744D1: mov     rax, [rdx]
 * 0000000140C744D4: movzx   ecx, r8b
 * 0000000140C744D8: xor     rax, r10
 * 0000000140C744DB: and     ecx, 3Fh
 * 0000000140C744DE: ror     r8, cl
 * 0000000140C744E1: add     r8, rax
 * 0000000140C744E4: xor     r8, 0F05h
 * 0000000140C744EB: add     rdx, 8
 * 0000000140C744EF: cmp     rdx, r9
 * 0000000140C744F2: jnz     short loc_140C744CE
 * 0000000140C744F4: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C744FC: cmp     r8, [rsi+0A80h]
 * 0000000140C74503: jz      short loc_140C74546
 * 0000000140C74505: mov     ecx, [rsi+804h]
 * 0000000140C7450B: mov     rax, [rsi+588h]
 * 0000000140C74512: mov     [rax], rsi
 * 0000000140C74515: mov     [rax+10h], ecx
 * 0000000140C74518: mov     rcx, [rsi+0A80h]
 * 0000000140C7451F: cmp     [rsi+918h], r12d
 * 0000000140C74526: jnz     short loc_140C74536
 * 0000000140C74528: mov     rax, [rsi+588h]
 * 0000000140C7452F: xor     rcx, r8
 * 0000000140C74532: mov     [rax+18h], rcx
 * 0000000140C74536: xor     edx, edx
 * 0000000140C74538: mov     r9d, 100h
 * 0000000140C7453E: mov     rcx, rsi
 * 0000000140C74541: call    sub_140C7F03C
 * 0000000140C74546: mov     r9, 0B3B74BDEE4453415h
 * 0000000140C74550: mov     r10, 0A3A03F5891C8B4E8h
 * 0000000140C7455A: mov     eax, [r13+24h]
 * 0000000140C7455E: mov     r8d, [r13+20h]
 * 0000000140C74562: and     eax, r14d
 * 0000000140C74565: cmp     eax, r8d
 * 0000000140C74568: jnz     short loc_140C74597
 * 0000000140C7456A: bt      r14d, 10h
 * 0000000140C7456F: jb      loc_140C746D6
 * 0000000140C74575: movzx   ecx, r14b
 * 0000000140C74579: sub     ecx, 0D1h
 * 0000000140C7457F: jz      loc_140C746D6
 * 0000000140C74585: sub     ecx, 2Ch ; ','
 * 0000000140C74588: jz      loc_140C746D6
 * 0000000140C7458E: cmp     ecx, 1
 * 0000000140C74591: jz      loc_140C746D6
 * 0000000140C74597: mov     edx, [r13+28h]
 * 0000000140C7459B: mov     rax, 34000000000h
 * 0000000140C745A5: shl     rdx, 30h
 * 0000000140C745A9: or      rdx, r8
 * 0000000140C745AC: or      rdx, rax
 * 0000000140C745AF: cmp     [rsi+918h], r12d
 * 0000000140C745B6: jnz     loc_140C746D6
 * 0000000140C745BC: mov     rax, [rsi+588h]
 * 0000000140C745C3: mov     ecx, r14d
 * 0000000140C745C6: xor     rcx, r8
 * 0000000140C745C9: mov     [rax+18h], rcx
 * 0000000140C745CD: cmp     [rsi+918h], r12d
 * 0000000140C745D4: jnz     loc_140C746D6
 * 0000000140C745DA: lea     rax, [rsi+r10]
 * 0000000140C745DE: mov     [rsi+920h], rax
 * 0000000140C745E5: lea     rax, [r9+r13]
 * 0000000140C745E9: mov     [rsi+928h], rax
 * 0000000140C745F0: movsxd  rax, dword ptr [r13+0]
 * 0000000140C745F4: mov     [rsi+930h], rax
 * 0000000140C745FB: mov     [rsi+938h], rdx
 * 0000000140C74602: mov     [rsi+918h], r15d
 * 0000000140C74609: mov     ecx, [rsi+9D8h]
 * 0000000140C7460F: bt      ecx, 1Dh
 * 0000000140C74613: jb      loc_140C746D6
 * 0000000140C74619: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C74623: jz      loc_140C746D6
 * 0000000140C74629: test    r15b, cl
 * 0000000140C7462C: jz      loc_140C746D6
 * 0000000140C74632: mov     ecx, [rsi+0A74h]
 * 0000000140C74638: mov     eax, [rsi+804h]
 * 0000000140C7463E: mov     r10, [rsi+838h]
 * 0000000140C74645: sub     eax, ecx
 * 0000000140C74647: mov     r8, [rsi+0A78h]
 * 0000000140C7464E: lea     rdx, [rcx+rsi]
 * 0000000140C74652: mov     ecx, eax
 * 0000000140C74654: shr     rcx, 3
 * 0000000140C74658: lea     r9, [rdx+rcx*8]
 * 0000000140C7465C: jmp     short loc_140C7467F
 * 0000000140C7465E: xor     [rdx], r8
 * 0000000140C74661: mov     rax, [rdx]
 * 0000000140C74664: movzx   ecx, r8b
 * 0000000140C74668: xor     rax, r10
 * 0000000140C7466B: and     ecx, 3Fh
 * 0000000140C7466E: ror     r8, cl
 * 0000000140C74671: add     r8, rax
 * 0000000140C74674: xor     r8, 0F05h
 * 0000000140C7467B: add     rdx, 8
 * 0000000140C7467F: cmp     rdx, r9
 * 0000000140C74682: jnz     short loc_140C7465E
 * 0000000140C74684: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C7468C: cmp     r8, [rsi+0A80h]
 * 0000000140C74693: jz      short loc_140C746D6
 * 0000000140C74695: mov     ecx, [rsi+804h]
 * 0000000140C7469B: mov     rax, [rsi+588h]
 * 0000000140C746A2: mov     [rax], rsi
 * 0000000140C746A5: mov     [rax+10h], ecx
 * 0000000140C746A8: mov     rcx, [rsi+0A80h]
 * 0000000140C746AF: cmp     [rsi+918h], r12d
 * 0000000140C746B6: jnz     short loc_140C746C6
 * 0000000140C746B8: mov     rax, [rsi+588h]
 * 0000000140C746BF: xor     rcx, r8
 * 0000000140C746C2: mov     [rax+18h], rcx
 * 0000000140C746C6: xor     edx, edx
 * 0000000140C746C8: mov     r9d, 100h
 * 0000000140C746CE: mov     rcx, rsi
 * 0000000140C746D1: call    sub_140C7F03C
 * 0000000140C746D6: mov     eax, 8000h
 * 0000000140C746DB: add     [rsi+848h], eax
 * 0000000140C746E1: jmp     loc_140C75354
 * 0000000140C746E6: mov     edx, [r13+28h]
 * 0000000140C746EA: lea     rcx, [rbp+7B0h+var_208]
 * 0000000140C746F1: mov     rax, [rsi+1B0h]
 * 0000000140C746F8: call    KeGuardDispatchICall
 * 0000000140C746FD: mov     rax, [rsi+1E0h]
 * 0000000140C74704: lea     rdx, [rbp+7B0h+var_280]
 * 0000000140C7470B: lea     rcx, [rbp+7B0h+var_208]
 * 0000000140C74712: call    KeGuardDispatchICall
 * 0000000140C74717: lea     rdx, [rbp+7B0h+var_1E8]
 * 0000000140C7471E: lea     rcx, [rbp+7B0h+var_688]
 * 0000000140C74725: call    KiGetGdtIdt
 * 0000000140C7472A: mov     r12, [rbp+7B0h+var_686]
 * 0000000140C74731: mov     r14d, [r13+10h]
 * 0000000140C74735: test    [rsi+89Bh], dil
 * 0000000140C7473C: jz      loc_140C7488C
 * 0000000140C74742: mov     rdx, [rsi+900h]
 * 0000000140C74749: mov     ecx, 130h
 * 0000000140C7474E: mov     rax, rdx
 * 0000000140C74751: mov     r8d, 26h ; '&'
 * 0000000140C74757: xor     r13d, r13d
 * 0000000140C7475A: mov     [rax], r13
 * 0000000140C7475D: add     ecx, 0FFFFFFF8h
 * 0000000140C74760: add     rax, 8
 * 0000000140C74764: sub     r8, r15
 * 0000000140C74767: jnz     short loc_140C7475A
 * 0000000140C74769: test    ecx, ecx
 * 0000000140C7476B: jz      short loc_140C74777
 * 0000000140C7476D: mov     [rax], r13b
 * 0000000140C74770: add     rax, r15
 * 0000000140C74773: add     ecx, ebx
 * 0000000140C74775: jnz     short loc_140C7476D
 * 0000000140C74777: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140C7477E: mov     eax, 12Fh
 * 0000000140C74783: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140C74788: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140C7478F: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140C74794: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140C7479B: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140C747A3: mov     word ptr [rbp+7B0h+var_5F0], ax
 * 0000000140C747AA: lea     rax, [rsi+898h]
 * 0000000140C747B1: mov     [rbp+1C2h], rdx
 * 0000000140C747B8: mov     rcx, rax
 * 0000000140C747BB: mov     [rdx+10h], ax
 * 0000000140C747BF: shr     rcx, 10h
 * 0000000140C747C3: mov     [rbp+7B0h+var_3E0], rax
 * 0000000140C747CA: shr     rax, 20h
 * 0000000140C747CE: mov     [rdx+16h], cx
 * 0000000140C747D2: mov     [rdx+18h], eax
 * 0000000140C747D5: cli
 * 0000000140C747D6: mov     rcx, rsi
 * 0000000140C747D9: call    sub_140C7F02C
 * 0000000140C747DE: mov     r15d, eax
 * 0000000140C747E1: sidt    fword ptr [rbp+7B0h+var_520]
 * 0000000140C747E8: lidt    fword ptr [rbp+7B0h+var_5F0]
 * 0000000140C747EF: mov     dr7, r13
 * 0000000140C747F3: lea     rax, [rsi+89Eh]
 * 0000000140C747FA: mov     [rdx+10h], ax
 * 0000000140C747FE: mov     rcx, rax
 * 0000000140C74801: shr     rcx, 10h
 * 0000000140C74805: shr     rax, 20h
 * 0000000140C74809: mov     [rdx+16h], cx
 * 0000000140C7480D: mov     [rdx+18h], eax
 * 0000000140C74810: test    byte ptr [rsi+89Bh], 20h
 * 0000000140C74817: jnz     short loc_140C74827
 * 0000000140C74819: call    KiErrata704Present
 * 0000000140C7481E: mov     [rsi+908h], rax
 * 0000000140C74825: jmp     short loc_140C74858
 * 0000000140C74827: lea     rbx, [rsi+8CAh]
 * 0000000140C7482E: call    KiGetSs
 * 0000000140C74833: mov     [rbx], ax
 * 0000000140C74836: mov     dr0, rbx
 * 0000000140C74839: mov     eax, 70001h
 * 0000000140C7483E: mov     dr7, rax
 * 0000000140C74841: mov     rcx, rbx
 * 0000000140C74844: call    KiErrataSkx55Present
 * 0000000140C74849: mov     [rsi+908h], rax
 * 0000000140C74850: mov     dr7, r13
 * 0000000140C74854: mov     dr0, r13
 * 0000000140C74858: mov     eax, gs:1A4h
 * 0000000140C74860: mov     [rsi+910h], eax
 * 0000000140C74866: lidt    fword ptr [rbp+7B0h+var_520]
 * 0000000140C7486D: mov     ebx, 40h ; '@'
 * 0000000140C74872: test    [rsi+89Bh], bl
 * 0000000140C74878: jz      short loc_140C74889
 * 0000000140C7487A: bt      r15d, 12h
 * 0000000140C7487F: jb      short loc_140C74886
 * 0000000140C74881: clac
 * 0000000140C74884: jmp     short loc_140C74889
 * 0000000140C74886: stac
 * 0000000140C74889: sti
 * 0000000140C7488A: jmp     short loc_140C74891
 * 0000000140C7488C: mov     ebx, 40h ; '@'
 * 0000000140C74891: call    KiGetLdtr
 * 0000000140C74896: movzx   r15d, ax
 * 0000000140C7489A: call    KiGetTr
 * 0000000140C7489F: add     [rsi+848h], r14d
 * 0000000140C748A6: lea     rcx, [r12+r14]
 * 0000000140C748AA: mov     r10d, [rsi+834h]
 * 0000000140C748B1: mov     r8, r12
 * 0000000140C748B4: mov     r11, [rsi+838h]
 * 0000000140C748BB: movzx   r13d, ax
 * 0000000140C748BF: mov     rax, r12
 * 0000000140C748C2: cmp     r12, rcx
 * 0000000140C748C5: jnb     short loc_140C748D2
 * 0000000140C748C7: prefetchnta byte ptr [rax]
 * 0000000140C748CA: add     rax, rbx
 * 0000000140C748CD: cmp     rax, rcx
 * 0000000140C748D0: jb      short loc_140C748C7
 * 0000000140C748D2: mov     r9d, r14d
 * 0000000140C748D5: mov     rbx, r11
 * 0000000140C748D8: shr     r9d, 7
 * 0000000140C748DC: mov     edx, 1
 * 0000000140C748E1: test    r9d, r9d
 * 0000000140C748E4: jz      short loc_140C74953
 * 0000000140C748E6: mov     edi, 0FFFFFFFFh
 * 0000000140C748EB: mov     rsi, 7010008004002001h
 * 0000000140C748F5: mov     eax, 8
 * 0000000140C748FA: xor     rbx, [r8]
 * 0000000140C748FD: mov     ecx, r10d
 * 0000000140C74900: rol     rbx, cl
 * 0000000140C74903: xor     rbx, [r8+8]
 * 0000000140C74907: add     r8, 10h
 * 0000000140C7490B: rol     rbx, cl
 * 0000000140C7490E: sub     rax, rdx
 * 0000000140C74911: jnz     short loc_140C748FA
 * 0000000140C74913: mov     rcx, r8
 * 0000000140C74916: sub     rcx, r12
 * 0000000140C74919: xor     rcx, r11
 * 0000000140C7491C: mov     rax, rcx
 * 0000000140C7491F: rol     rax, 11h
 * 0000000140C74923: xor     rcx, rax
 * 0000000140C74926: mov     rax, rsi
 * 0000000140C74929: mul     rcx
 * 0000000140C7492C: mov     [rbp+7B0h+var_3D8], rdx
 * 0000000140C74933: xor     rdx, rax
 * 0000000140C74936: xor     r10d, edx
 * 0000000140C74939: mov     edx, 1
 * 0000000140C7493E: and     r10d, 3Fh
 * 0000000140C74942: cmovz   r10d, edx
 * 0000000140C74946: add     r9d, edi
 * 0000000140C74949: jnz     short loc_140C748F5
 * 0000000140C7494B: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C74950: lea     edi, [rdx+1]
 * 0000000140C74953: and     r14d, 7Fh
 * 0000000140C74957: cmp     r14d, 8
 * 0000000140C7495B: jb      short loc_140C7497A
 * 0000000140C7495D: mov     eax, r14d
 * 0000000140C74960: shr     rax, 3
 * 0000000140C74964: xor     rbx, [r8]
 * 0000000140C74967: mov     ecx, r10d
 * 0000000140C7496A: rol     rbx, cl
 * 0000000140C7496D: add     r8, 8
 * 0000000140C74971: add     r14d, 0FFFFFFF8h
 * 0000000140C74975: sub     rax, rdx
 * 0000000140C74978: jnz     short loc_140C74964
 * 0000000140C7497A: xor     r12d, r12d
 * 0000000140C7497D: test    r14d, r14d
 * 0000000140C74980: jz      short loc_140C749A0
 * 0000000140C74982: mov     edi, 0FFFFFFFFh
 * 0000000140C74987: movzx   eax, byte ptr [r8]
 * 0000000140C7498B: mov     ecx, r10d
 * 0000000140C7498E: xor     rbx, rax
 * 0000000140C74991: add     r8, rdx
 * 0000000140C74994: rol     rbx, cl
 * 0000000140C74997: add     r14d, edi
 * 0000000140C7499A: jnz     short loc_140C74987
 * 0000000140C7499C: lea     edi, [r14+2]
 * 0000000140C749A0: mov     rax, rbx
 * 0000000140C749A3: jmp     short loc_140C749A7
 * 0000000140C749A5: xor     ebx, eax
 * 0000000140C749A7: shr     rax, 1Fh
 * 0000000140C749AB: test    rax, rax
 * 0000000140C749AE: jnz     short loc_140C749A5
 * 0000000140C749B0: mov     rax, [rsi+1A8h]
 * 0000000140C749B7: lea     rcx, [rbp+7B0h+var_280]
 * 0000000140C749BE: btr     ebx, 1Fh
 * 0000000140C749C2: call    KeGuardDispatchICall
 * 0000000140C749C7: mov     r9, [rsp+8B0h+var_860]
 * 0000000140C749CC: mov     r11d, 40h ; '@'
 * 0000000140C749D2: cmp     ebx, [r9+14h]
 * 0000000140C749D6: jnz     short loc_140C749F6
 * 0000000140C749D8: movzx   eax, word ptr [r9+2Ch]
 * 0000000140C749DD: cmp     [rbp+7B0h+var_688], ax
 * 0000000140C749E4: jnz     short loc_140C749F6
 * 0000000140C749E6: test    r15w, r15w
 * 0000000140C749EA: jnz     short loc_140C749F6
 * 0000000140C749EC: cmp     r13w, r11w
 * 0000000140C749F0: jz      loc_140C74BB6
 * 0000000140C749F6: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C74A00: jz      short loc_140C74A4E
 * 0000000140C74A02: mov     rcx, [rsi+0AC8h]
 * 0000000140C74A09: mov     edx, 30h ; '0'
 * 0000000140C74A0E: lea     r8d, [rdx-2Ah]
 * 0000000140C74A12: lea     r10d, [rdx-2Fh]
 * 0000000140C74A16: mov     rax, [r9]
 * 0000000140C74A19: add     edx, 0FFFFFFF8h
 * 0000000140C74A1C: mov     [rcx], rax
 * 0000000140C74A1F: add     r9, 8
 * 0000000140C74A23: add     rcx, 8
 * 0000000140C74A27: sub     r8, r10
 * 0000000140C74A2A: jnz     short loc_140C74A16
 * 0000000140C74A2C: test    edx, edx
 * 0000000140C74A2E: jz      short loc_140C74A47
 * 0000000140C74A30: mov     edi, 0FFFFFFFFh
 * 0000000140C74A35: mov     al, [r9]
 * 0000000140C74A38: add     r9, r10
 * 0000000140C74A3B: mov     [rcx], al
 * 0000000140C74A3D: add     rcx, r10
 * 0000000140C74A40: add     edx, edi
 * 0000000140C74A42: jnz     short loc_140C74A35
 * 0000000140C74A44: lea     edi, [rdx+2]
 * 0000000140C74A47: mov     r9, [rsi+0AC8h]
 * 0000000140C74A4E: mov     rax, [rbp+7B0h+var_686]
 * 0000000140C74A55: mov     edx, ebx
 * 0000000140C74A57: mov     [r9+18h], rax
 * 0000000140C74A5B: mov     [r9+20h], rdx
 * 0000000140C74A5F: test    r15w, r15w
 * 0000000140C74A63: jz      short loc_140C74A6B
 * 0000000140C74A65: mov     [r9+18h], r15
 * 0000000140C74A69: jmp     short loc_140C74A75
 * 0000000140C74A6B: cmp     r13w, r11w
 * 0000000140C74A6F: jz      short loc_140C74A75
 * 0000000140C74A71: mov     [r9+18h], r13
 * 0000000140C74A75: mov     ecx, [r9+14h]
 * 0000000140C74A79: cmp     [rsi+918h], r12d
 * 0000000140C74A80: jnz     short loc_140C74A90
 * 0000000140C74A82: mov     rax, [rsi+588h]
 * 0000000140C74A89: xor     rcx, rdx
 * 0000000140C74A8C: mov     [rax+18h], rcx
 * 0000000140C74A90: mov     r15d, 1
 * 0000000140C74A96: mov     rcx, [r9+8]
 * 0000000140C74A9A: cmp     [rsi+918h], r12d
 * 0000000140C74AA1: jnz     loc_140C74BBC
 * 0000000140C74AA7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C74AB1: add     rax, rsi
 * 0000000140C74AB4: mov     [rsi+920h], rax
 * 0000000140C74ABB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C74AC5: add     rax, r9
 * 0000000140C74AC8: mov     [rsi+928h], rax
 * 0000000140C74ACF: movsxd  rax, dword ptr [r9]
 * 0000000140C74AD2: mov     [rsi+930h], rax
 * 0000000140C74AD9: mov     [rsi+938h], rcx
 * 0000000140C74AE0: mov     [rsi+918h], r15d
 * 0000000140C74AE7: mov     ecx, [rsi+9D8h]
 * 0000000140C74AED: bt      ecx, 1Dh
 * 0000000140C74AF1: jb      loc_140C74BBC
 * 0000000140C74AF7: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C74B01: jz      loc_140C74BBC
 * 0000000140C74B07: test    r15b, cl
 * 0000000140C74B0A: jz      loc_140C74BBC
 * 0000000140C74B10: mov     ecx, [rsi+0A74h]
 * 0000000140C74B16: mov     eax, [rsi+804h]
 * 0000000140C74B1C: mov     r10, [rsi+838h]
 * 0000000140C74B23: sub     eax, ecx
 * 0000000140C74B25: mov     r8, [rsi+0A78h]
 * 0000000140C74B2C: lea     rdx, [rcx+rsi]
 * 0000000140C74B30: mov     ecx, eax
 * 0000000140C74B32: shr     rcx, 3
 * 0000000140C74B36: lea     r9, [rdx+rcx*8]
 * 0000000140C74B3A: jmp     short loc_140C74B5D
 * 0000000140C74B3C: xor     [rdx], r8
 * 0000000140C74B3F: mov     rax, [rdx]
 * 0000000140C74B42: movzx   ecx, r8b
 * 0000000140C74B46: xor     rax, r10
 * 0000000140C74B49: and     ecx, 3Fh
 * 0000000140C74B4C: ror     r8, cl
 * 0000000140C74B4F: add     r8, rax
 * 0000000140C74B52: xor     r8, 0F05h
 * 0000000140C74B59: add     rdx, 8
 * 0000000140C74B5D: cmp     rdx, r9
 * 0000000140C74B60: jnz     short loc_140C74B3C
 * 0000000140C74B62: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C74B6A: cmp     r8, [rsi+0A80h]
 * 0000000140C74B71: jz      short loc_140C74BBC
 * 0000000140C74B73: mov     ecx, [rsi+804h]
 * 0000000140C74B79: mov     rax, [rsi+588h]
 * 0000000140C74B80: mov     [rax], rsi
 * 0000000140C74B83: mov     [rax+10h], ecx
 * 0000000140C74B86: mov     rcx, [rsi+0A80h]
 * 0000000140C74B8D: cmp     [rsi+918h], r12d
 * 0000000140C74B94: jnz     short loc_140C74BA4
 * 0000000140C74B96: mov     rax, [rsi+588h]
 * 0000000140C74B9D: xor     rcx, r8
 * 0000000140C74BA0: mov     [rax+18h], rcx
 * 0000000140C74BA4: xor     edx, edx
 * 0000000140C74BA6: mov     r9d, 100h
 * 0000000140C74BAC: mov     rcx, rsi
 * 0000000140C74BAF: call    sub_140C7F03C
 * 0000000140C74BB4: jmp     short loc_140C74BBC
 * 0000000140C74BB6: mov     r15d, 1
 * 0000000140C74BBC: mov     ecx, 8000h
 * 0000000140C74BC1: add     [rsi+848h], ecx
 * 0000000140C74BC7: jmp     loc_140C75354
 * 0000000140C74BCC: mov     edx, [r13+28h]
 * 0000000140C74BD0: lea     rcx, [rbp+7B0h+var_270]
 * 0000000140C74BD7: mov     rax, [rsi+1B0h]
 * 0000000140C74BDE: mov     [rbp+7B0h+var_818], r12d
 * 0000000140C74BE2: call    KeGuardDispatchICall
 * 0000000140C74BE7: mov     rax, [rsi+1E0h]
 * 0000000140C74BEE: lea     rdx, [rbp+7B0h+var_260]
 * 0000000140C74BF5: lea     rcx, [rbp+7B0h+var_270]
 * 0000000140C74BFC: call    KeGuardDispatchICall
 * 0000000140C74C01: lea     rdx, [rbp+7B0h+var_5D0]
 * 0000000140C74C08: lea     rcx, [rbp+7B0h+var_1D8]
 * 0000000140C74C0F: call    KiGetGdtIdt
 * 0000000140C74C14: mov     rcx, [rbp+7B0h+var_5CE]
 * 0000000140C74C1B: mov     edi, r12d
 * 0000000140C74C1E: mov     [rbp+7B0h+var_820], rcx
 * 0000000140C74C22: add     rcx, 4
 * 0000000140C74C26: mov     [rsp+8B0h+var_858], rcx
 * 0000000140C74C2B: mov     rax, [rsi+8E8h]
 * 0000000140C74C32: mov     r9, r12
 * 0000000140C74C35: mov     [rbp+7B0h+var_738], rax
 * 0000000140C74C39: mov     r14, r12
 * 0000000140C74C3C: mov     r8, [rsi+8F0h]
 * 0000000140C74C43: xor     eax, eax
 * 0000000140C74C45: mov     r13d, [rsi+8D0h]
 * 0000000140C74C4C: mov     [rbp+7B0h+var_830], r12d
 * 0000000140C74C50: mov     [rsp+8B0h+var_848], r12
 * 0000000140C74C55: mov     r12d, [rsi+8CCh]
 * 0000000140C74C5C: mov     [rsp+8B0h+var_840], r8
 * 0000000140C74C61: mov     [rbp+7B0h+var_828], rax
 * 0000000140C74C65: mov     r15, cr8
 * 0000000140C74C69: mov     eax, 0Fh
 * 0000000140C74C6E: mov     cr8, rax
 * 0000000140C74C72: movzx   eax, word ptr [rcx-4]
 * 0000000140C74C76: movzx   r10d, word ptr [rcx]
 * 0000000140C74C7A: mov     word ptr [rbp+7B0h+var_780], ax
 * 0000000140C74C7E: movzx   eax, word ptr [rcx+2]
 * 0000000140C74C82: mov     word ptr [rbp+7B0h+var_780+2], ax
 * 0000000140C74C86: mov     eax, [rcx+4]
 * 0000000140C74C89: mov     rcx, [rsi+628h]
 * 0000000140C74C90: mov     dword ptr [rbp+7B0h+var_780+4], eax
 * 0000000140C74C93: mov     rbx, [rbp+7B0h+var_780]
 * 0000000140C74C97: mov     eax, edi
 * 0000000140C74C99: mov     word ptr [rbp+7B0h+arg_8], r10w
 * 0000000140C74CA1: lea     rdx, [rcx+rax*8]
 * 0000000140C74CA5: cmp     rbx, rdx
 * 0000000140C74CA8: jnz     loc_140C74D4A
 * 0000000140C74CAE: mov     eax, 6000h
 * 0000000140C74CB3: test    ax, r10w
 * 0000000140C74CB7: jz      short loc_140C74CC3
 * 0000000140C74CB9: movzx   eax, r15b
 * 0000000140C74CBD: mov     cr8, rax
 * 0000000140C74CC1: jmp     short loc_140C74CF6
 * 0000000140C74CC3: mov     rax, [rsi+470h]
 * 0000000140C74CCA: mov     ecx, edi
 * 0000000140C74CCC: call    KeGuardDispatchICall
 * 0000000140C74CD1: mov     r14, [rax]
 * 0000000140C74CD4: xor     eax, eax
 * 0000000140C74CD6: test    r14, r14
 * 0000000140C74CD9: jz      short loc_140C74D3C
 * 0000000140C74CDB: mov     r12, [r12+r14]
 * 0000000140C74CDF: mov     [rsp+8B0h+var_848], r12
 * 0000000140C74CE4: cmp     edi, 30h ; '0'
 * 0000000140C74CE7: jnb     short loc_140C74D30
 * 0000000140C74CE9: movzx   eax, r15b
 * 0000000140C74CED: mov     cr8, rax
 * 0000000140C74CF1: mov     r9, [rsp+8B0h+var_848]
 * 0000000140C74CF6: xor     r12d, r12d
 * 0000000140C74CF9: mov     rax, [rsi+588h]
 * 0000000140C74D00: mov     [rax], rbx
 * 0000000140C74D03: mov     dword ptr [rax+10h], 80h
 * 0000000140C74D0A: test    r9, r9
 * 0000000140C74D0D: jz      short loc_140C74D21
 * 0000000140C74D0F: mov     rax, [rsi+588h]
 * 0000000140C74D16: mov     [rax+8], r9
 * 0000000140C74D1A: mov     dword ptr [rax+14h], 80h
 * 0000000140C74D21: mov     r13d, 1
 * 0000000140C74D27: mov     [rbp+7B0h+var_818], r13d
 * 0000000140C74D2B: jmp     loc_140C74E3B
 * 0000000140C74D30: mov     r13, [r13+r14+0]
 * 0000000140C74D35: mov     r8, [rsp+8B0h+var_840]
 * 0000000140C74D3A: jmp     short loc_140C74D53
 * 0000000140C74D3C: mov     r8, [rsp+8B0h+var_840]
 * 0000000140C74D41: or      r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140C74D45: mov     r13, rax
 * 0000000140C74D48: jmp     short loc_140C74D4E
 * 0000000140C74D4A: mov     r13, [rbp+7B0h+var_828]
 * 0000000140C74D4E: mov     r12, [rsp+8B0h+var_848]
 * 0000000140C74D53: movzx   eax, r15b
 * 0000000140C74D57: mov     cr8, rax
 * 0000000140C74D5B: xor     r15d, r15d
 * 0000000140C74D5E: test    r14, r14
 * 0000000140C74D61: jnz     short loc_140C74DA3
 * 0000000140C74D63: mov     rdx, [rbp+7B0h+var_738]
 * 0000000140C74D67: cmp     rbx, rdx
 * 0000000140C74D6A: jb      short loc_140C74CF1
 * 0000000140C74D6C: cmp     rbx, r8
 * 0000000140C74D6F: ja      short loc_140C74CF1
 * 0000000140C74D71: mov     r8d, dword ptr [rbp+7B0h+var_780]
 * 0000000140C74D75: mov     rcx, [rsi+8F8h]
 * 0000000140C74D7C: sub     r8d, edx
 * 0000000140C74D7F: mov     rax, [rsi+220h]
 * 0000000140C74D86: call    KeGuardDispatchICall
 * 0000000140C74D8B: test    rax, rax
 * 0000000140C74D8E: jz      loc_140C74CF1
 * 0000000140C74D94: test    dword ptr [rax+24h], 2000000h
 * 0000000140C74D9B: jnz     loc_140C74CF1
 * 0000000140C74DA1: jmp     short loc_140C74DA7
 * 0000000140C74DA3: mov     r15d, [rbp+7B0h+var_830]
 * 0000000140C74DA7: mov     rcx, [rsp+8B0h+var_858]
 * 0000000140C74DAC: mov     eax, 10h
 * 0000000140C74DB1: cmp     [rcx-2], ax
 * 0000000140C74DB5: jnz     loc_140C74CF1
 * 0000000140C74DBB: movzx   ecx, word ptr [rcx]
 * 0000000140C74DBE: mov     edx, 1F00h
 * 0000000140C74DC3: movzx   eax, cx
 * 0000000140C74DC6: and     ax, dx
 * 0000000140C74DC9: mov     edx, 0E00h
 * 0000000140C74DCE: cmp     ax, dx
 * 0000000140C74DD1: jnz     loc_140C74CF1
 * 0000000140C74DD7: bt      cx, 0Fh
 * 0000000140C74DDC: jnb     loc_140C74CF1
 * 0000000140C74DE2: mov     rax, [rsi+278h]
 * 0000000140C74DE9: lea     rdx, [rbp+7B0h+var_738]
 * 0000000140C74DED: xor     r8d, r8d
 * 0000000140C74DF0: mov     rcx, rbx
 * 0000000140C74DF3: call    KeGuardDispatchICall
 * 0000000140C74DF8: test    rax, rax
 * 0000000140C74DFB: jz      loc_140C74F63
 * 0000000140C74E01: test    r15d, r15d
 * 0000000140C74E04: jnz     loc_140C74F63
 * 0000000140C74E0A: mov     eax, [rax]
 * 0000000140C74E0C: mov     rcx, [rbp+7B0h+var_738]
 * 0000000140C74E10: add     rax, rcx
 * 0000000140C74E13: cmp     rax, rbx
 * 0000000140C74E16: jnz     loc_140C74F63
 * 0000000140C74E1C: cmp     rcx, [rsi+8E8h]
 * 0000000140C74E23: jnz     loc_140C74F63
 * 0000000140C74E29: test    r14, r14
 * 0000000140C74E2C: jnz     loc_140C74F6C
 * 0000000140C74E32: xor     r12d, r12d
 * 0000000140C74E35: mov     r13d, 1
 * 0000000140C74E3B: mov     rcx, [rsp+8B0h+var_858]
 * 0000000140C74E40: add     edi, r13d
 * 0000000140C74E43: add     rcx, 10h
 * 0000000140C74E47: mov     [rsp+8B0h+var_858], rcx
 * 0000000140C74E4C: cmp     edi, 0FFh
 * 0000000140C74E52: jbe     loc_140C74C2B
 * 0000000140C74E58: test    [rsi+89Bh], r13b
 * 0000000140C74E5F: jz      loc_140C7501A
 * 0000000140C74E65: cli
 * 0000000140C74E66: mov     rcx, rsi
 * 0000000140C74E69: call    sub_140C7F02C
 * 0000000140C74E6E: mov     r9d, 0C0000082h
 * 0000000140C74E74: mov     r14d, eax
 * 0000000140C74E77: mov     ecx, r9d
 * 0000000140C74E7A: rdmsr
 * 0000000140C74E7C: shl     rdx, 20h
 * 0000000140C74E80: or      rax, rdx
 * 0000000140C74E83: lea     rdx, [rsi+89Ah]
 * 0000000140C74E8A: mov     rbx, rax
 * 0000000140C74E8D: mov     rax, rdx
 * 0000000140C74E90: shr     rdx, 20h
 * 0000000140C74E94: wrmsr
 * 0000000140C74E96: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C74EA0: jnz     short loc_140C74EE4
 * 0000000140C74EA2: mov     rdx, gs:20h
 * 0000000140C74EAB: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C74EB5: mov     rax, [rsi+4B8h]
 * 0000000140C74EBC: add     rcx, rsi
 * 0000000140C74EBF: mov     [rax], rcx
 * 0000000140C74EC2: mov     rax, [rsi+4C0h]
 * 0000000140C74EC9: mov     [rax], rdx
 * 0000000140C74ECC: mov     rax, [rsi+4C8h]
 * 0000000140C74ED3: mov     [rax], r9
 * 0000000140C74ED6: mov     rax, [rsi+4D0h]
 * 0000000140C74EDD: mov     qword ptr [rax], 112h
 * 0000000140C74EE4: lea     rax, [rsi+89Ch]
 * 0000000140C74EEB: call    KeGuardDispatchICall
 * 0000000140C74EF0: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C74EFA: jnz     short loc_140C74F2E
 * 0000000140C74EFC: mov     rax, [rsi+4B8h]
 * 0000000140C74F03: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C74F0D: mov     [rax], rcx
 * 0000000140C74F10: mov     rax, [rsi+4C0h]
 * 0000000140C74F17: mov     [rax], r12
 * 0000000140C74F1A: mov     rax, [rsi+4C8h]
 * 0000000140C74F21: mov     [rax], r12
 * 0000000140C74F24: mov     rax, [rsi+4D0h]
 * 0000000140C74F2B: mov     [rax], r12
 * 0000000140C74F2E: mov     rdx, rbx
 * 0000000140C74F31: mov     rax, rbx
 * 0000000140C74F34: shr     rdx, 20h
 * 0000000140C74F38: mov     ecx, 0C0000082h
 * 0000000140C74F3D: wrmsr
 * 0000000140C74F3F: mov     edx, 40h ; '@'
 * 0000000140C74F44: test    [rsi+89Bh], dl
 * 0000000140C74F4A: jz      loc_140C75017
 * 0000000140C74F50: bt      r14d, 12h
 * 0000000140C74F55: jb      loc_140C75014
 * 0000000140C74F5B: clac
 * 0000000140C74F5E: jmp     loc_140C75017
 * 0000000140C74F63: test    r14, r14
 * 0000000140C74F66: jz      loc_140C74CF1
 * 0000000140C74F6C: mov     eax, 6000h
 * 0000000140C74F71: test    word ptr [rbp+7B0h+arg_8], ax
 * 0000000140C74F78: jnz     loc_140C74CF1
 * 0000000140C74F7E: cmp     r14, 0FFFFFFFFFFFFFFFFh
 * 0000000140C74F82: jz      loc_140C74E32
 * 0000000140C74F88: mov     rax, [rsi+278h]
 * 0000000140C74F8F: lea     rdx, [rbp+7B0h+var_738]
 * 0000000140C74F93: xor     r8d, r8d
 * 0000000140C74F96: mov     rcx, r12
 * 0000000140C74F99: call    KeGuardDispatchICall
 * 0000000140C74F9E: test    rax, rax
 * 0000000140C74FA1: jz      loc_140C74CF1
 * 0000000140C74FA7: mov     eax, [rax]
 * 0000000140C74FA9: mov     rdx, [rbp+7B0h+var_738]
 * 0000000140C74FAD: add     rax, rdx
 * 0000000140C74FB0: cmp     rax, r12
 * 0000000140C74FB3: jnz     short loc_140C75007
 * 0000000140C74FB5: cmp     rdx, [rsi+8E8h]
 * 0000000140C74FBC: jnz     loc_140C74CF1
 * 0000000140C74FC2: mov     rcx, [rsi+8F8h]
 * 0000000140C74FC9: mov     r8d, r12d
 * 0000000140C74FCC: mov     rax, [rsi+220h]
 * 0000000140C74FD3: sub     r8d, edx
 * 0000000140C74FD6: call    KeGuardDispatchICall
 * 0000000140C74FDB: xor     r12d, r12d
 * 0000000140C74FDE: test    rax, rax
 * 0000000140C74FE1: jz      short loc_140C7500A
 * 0000000140C74FE3: test    dword ptr [rax+24h], 2000000h
 * 0000000140C74FEA: jnz     short loc_140C7500A
 * 0000000140C74FEC: cmp     edi, 0FEh
 * 0000000140C74FF2: jnz     loc_140C74E35
 * 0000000140C74FF8: cmp     r13, [rsi+8D8h]
 * 0000000140C74FFF: jz      loc_140C74E35
 * 0000000140C75005: jmp     short loc_140C7500A
 * 0000000140C75007: xor     r12d, r12d
 * 0000000140C7500A: mov     r9, [rsp+8B0h+var_848]
 * 0000000140C7500F: jmp     loc_140C74CF9
 * 0000000140C75014: stac
 * 0000000140C75017: sti
 * 0000000140C75018: jmp     short loc_140C7501F
 * 0000000140C7501A: mov     edx, 40h ; '@'
 * 0000000140C7501F: mov     r14, [rbp+7B0h+var_820]
 * 0000000140C75023: add     dword ptr [rsi+848h], 350h
 * 0000000140C7502D: mov     r8, r14
 * 0000000140C75030: mov     r9d, [rsi+834h]
 * 0000000140C75037: mov     rax, r14
 * 0000000140C7503A: mov     r11, [rsi+838h]
 * 0000000140C75041: lea     rcx, [r14+350h]
 * 0000000140C75048: cmp     r14, rcx
 * 0000000140C7504B: jnb     short loc_140C75058
 * 0000000140C7504D: prefetchnta byte ptr [rax]
 * 0000000140C75050: add     rax, rdx
 * 0000000140C75053: cmp     rax, rcx
 * 0000000140C75056: jb      short loc_140C7504D
 * 0000000140C75058: mov     rbx, r11
 * 0000000140C7505B: mov     edi, 0FFFFFFFFh
 * 0000000140C75060: mov     r10d, 6
 * 0000000140C75066: mov     r15, 7010008004002001h
 * 0000000140C75070: mov     eax, 8
 * 0000000140C75075: xor     rbx, [r8]
 * 0000000140C75078: mov     ecx, r9d
 * 0000000140C7507B: rol     rbx, cl
 * 0000000140C7507E: xor     rbx, [r8+8]
 * 0000000140C75082: add     r8, 10h
 * 0000000140C75086: rol     rbx, cl
 * 0000000140C75089: sub     rax, r13
 * 0000000140C7508C: jnz     short loc_140C75075
 * 0000000140C7508E: mov     rcx, r8
 * 0000000140C75091: sub     rcx, r14
 * 0000000140C75094: xor     rcx, r11
 * 0000000140C75097: mov     rax, rcx
 * 0000000140C7509A: rol     rax, 11h
 * 0000000140C7509E: xor     rcx, rax
 * 0000000140C750A1: mov     rax, r15
 * 0000000140C750A4: mul     rcx
 * 0000000140C750A7: mov     [rbp+7B0h+var_3D0], rdx
 * 0000000140C750AE: xor     rdx, rax
 * 0000000140C750B1: xor     r9d, edx
 * 0000000140C750B4: and     r9d, 3Fh
 * 0000000140C750B8: cmovz   r9d, r13d
 * 0000000140C750BC: add     r10d, edi
 * 0000000140C750BF: jnz     short loc_140C75070
 * 0000000140C750C1: mov     r15d, [rbp+7B0h+var_818]
 * 0000000140C750C5: lea     edi, [r10+2]
 * 0000000140C750C9: lea     edx, [rdi+4Eh]
 * 0000000140C750CC: mov     r11d, 0FFFFFFF8h
 * 0000000140C750D2: lea     eax, [rdi+8]
 * 0000000140C750D5: xor     rbx, [r8]
 * 0000000140C750D8: mov     ecx, r9d
 * 0000000140C750DB: rol     rbx, cl
 * 0000000140C750DE: add     r8, 8
 * 0000000140C750E2: add     edx, r11d
 * 0000000140C750E5: sub     rax, r13
 * 0000000140C750E8: jnz     short loc_140C750D5
 * 0000000140C750EA: mov     r10d, 0FFFFFFFFh
 * 0000000140C750F0: test    edx, edx
 * 0000000140C750F2: jz      short loc_140C75109
 * 0000000140C750F4: movzx   eax, byte ptr [r8]
 * 0000000140C750F8: mov     ecx, r9d
 * 0000000140C750FB: xor     rbx, rax
 * 0000000140C750FE: add     r8, r13
 * 0000000140C75101: rol     rbx, cl
 * 0000000140C75104: add     edx, r10d
 * 0000000140C75107: jnz     short loc_140C750F4
 * 0000000140C75109: mov     rax, rbx
 * 0000000140C7510C: jmp     short loc_140C75110
 * 0000000140C7510E: xor     ebx, eax
 * 0000000140C75110: shr     rax, 1Fh
 * 0000000140C75114: test    rax, rax
 * 0000000140C75117: jnz     short loc_140C7510E
 * 0000000140C75119: lea     rdx, [r14+0E10h]
 * 0000000140C75120: btr     ebx, 1Fh
 * 0000000140C75124: lea     ecx, [rax+10h]
 * 0000000140C75127: mov     rax, rdx
 * 0000000140C7512A: add     [rsi+848h], ecx
 * 0000000140C75130: lea     rcx, [rdx+10h]
 * 0000000140C75134: mov     r9d, [rsi+834h]
 * 0000000140C7513B: mov     r14, [rsi+838h]
 * 0000000140C75142: cmp     rdx, rcx
 * 0000000140C75145: jnb     short loc_140C75158
 * 0000000140C75147: mov     r8d, 40h ; '@'
 * 0000000140C7514D: prefetchnta byte ptr [rax]
 * 0000000140C75150: add     rax, r8
 * 0000000140C75153: cmp     rax, rcx
 * 0000000140C75156: jb      short loc_140C7514D
 * 0000000140C75158: mov     r8d, 10h
 * 0000000140C7515E: mov     rax, rdi
 * 0000000140C75161: xor     r14, [rdx]
 * 0000000140C75164: mov     ecx, r9d
 * 0000000140C75167: rol     r14, cl
 * 0000000140C7516A: add     rdx, 8
 * 0000000140C7516E: add     r8d, r11d
 * 0000000140C75171: sub     rax, r13
 * 0000000140C75174: jnz     short loc_140C75161
 * 0000000140C75176: test    r8d, r8d
 * 0000000140C75179: jz      short loc_140C7518F
 * 0000000140C7517B: movzx   eax, byte ptr [rdx]
 * 0000000140C7517E: mov     ecx, r9d
 * 0000000140C75181: xor     r14, rax
 * 0000000140C75184: add     rdx, r13
 * 0000000140C75187: rol     r14, cl
 * 0000000140C7518A: add     r8d, r10d
 * 0000000140C7518D: jnz     short loc_140C7517B
 * 0000000140C7518F: mov     rax, r14
 * 0000000140C75192: jmp     short loc_140C75197
 * 0000000140C75194: xor     r14d, eax
 * 0000000140C75197: shr     rax, 1Fh
 * 0000000140C7519B: test    rax, rax
 * 0000000140C7519E: jnz     short loc_140C75194
 * 0000000140C751A0: mov     rax, [rsi+1A8h]
 * 0000000140C751A7: lea     rcx, [rbp+7B0h+var_260]
 * 0000000140C751AE: btr     r14d, 1Fh
 * 0000000140C751B3: call    KeGuardDispatchICall
 * 0000000140C751B8: mov     r8, [rsp+8B0h+var_860]
 * 0000000140C751BD: mov     edx, [r8+14h]
 * 0000000140C751C1: cmp     ebx, edx
 * 0000000140C751C3: jnz     short loc_140C751E5
 * 0000000140C751C5: mov     eax, r14d
 * 0000000140C751C8: cmp     rax, [r8+18h]
 * 0000000140C751CC: jnz     short loc_140C751E5
 * 0000000140C751CE: movzx   eax, word ptr [r8+2Ch]
 * 0000000140C751D3: cmp     [rbp+7B0h+var_5D0], ax
 * 0000000140C751DA: jnz     short loc_140C751E5
 * 0000000140C751DC: test    r15d, r15d
 * 0000000140C751DF: jz      loc_140C75344
 * 0000000140C751E5: test    r15d, r15d
 * 0000000140C751E8: jnz     short loc_140C7521E
 * 0000000140C751EA: mov     ecx, r14d
 * 0000000140C751ED: cmp     rcx, [r8+18h]
 * 0000000140C751F1: jnz     short loc_140C75203
 * 0000000140C751F3: cmp     [rsi+918h], r12d
 * 0000000140C751FA: jnz     short loc_140C7521E
 * 0000000140C751FC: mov     ecx, ebx
 * 0000000140C751FE: xor     rcx, rdx
 * 0000000140C75201: jmp     short loc_140C75213
 * 0000000140C75203: mov     eax, [r8+18h]
 * 0000000140C75207: cmp     [rsi+918h], r12d
 * 0000000140C7520E: jnz     short loc_140C7521E
 * 0000000140C75210: xor     rcx, rax
 * 0000000140C75213: mov     rax, [rsi+588h]
 * 0000000140C7521A: mov     [rax+18h], rcx
 * 0000000140C7521E: mov     r15d, 1
 * 0000000140C75224: mov     rcx, [r8+8]
 * 0000000140C75228: cmp     [rsi+918h], r12d
 * 0000000140C7522F: jnz     loc_140C7534A
 * 0000000140C75235: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C7523F: add     rax, rsi
 * 0000000140C75242: mov     [rsi+920h], rax
 * 0000000140C75249: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C75253: add     rax, r8
 * 0000000140C75256: mov     [rsi+928h], rax
 * 0000000140C7525D: movsxd  rax, dword ptr [r8]
 * 0000000140C75260: mov     [rsi+930h], rax
 * 0000000140C75267: mov     [rsi+938h], rcx
 * 0000000140C7526E: mov     [rsi+918h], r15d
 * 0000000140C75275: mov     ecx, [rsi+9D8h]
 * 0000000140C7527B: bt      ecx, 1Dh
 * 0000000140C7527F: jb      loc_140C7534A
 * 0000000140C75285: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7528F: jz      loc_140C7534A
 * 0000000140C75295: test    r15b, cl
 * 0000000140C75298: jz      loc_140C7534A
 * 0000000140C7529E: mov     ecx, [rsi+0A74h]
 * 0000000140C752A4: mov     eax, [rsi+804h]
 * 0000000140C752AA: mov     r10, [rsi+838h]
 * 0000000140C752B1: sub     eax, ecx
 * 0000000140C752B3: mov     r8, [rsi+0A78h]
 * 0000000140C752BA: lea     rdx, [rcx+rsi]
 * 0000000140C752BE: mov     ecx, eax
 * 0000000140C752C0: shr     rcx, 3
 * 0000000140C752C4: lea     r9, [rdx+rcx*8]
 * 0000000140C752C8: jmp     short loc_140C752EB
 * 0000000140C752CA: xor     [rdx], r8
 * 0000000140C752CD: mov     rax, [rdx]
 * 0000000140C752D0: movzx   ecx, r8b
 * 0000000140C752D4: xor     rax, r10
 * 0000000140C752D7: and     ecx, 3Fh
 * 0000000140C752DA: ror     r8, cl
 * 0000000140C752DD: add     r8, rax
 * 0000000140C752E0: xor     r8, 0F05h
 * 0000000140C752E7: add     rdx, 8
 * 0000000140C752EB: cmp     rdx, r9
 * 0000000140C752EE: jnz     short loc_140C752CA
 * 0000000140C752F0: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C752F8: cmp     r8, [rsi+0A80h]
 * 0000000140C752FF: jz      short loc_140C7534A
 * 0000000140C75301: mov     ecx, [rsi+804h]
 * 0000000140C75307: mov     rax, [rsi+588h]
 * 0000000140C7530E: mov     [rax], rsi
 * 0000000140C75311: mov     [rax+10h], ecx
 * 0000000140C75314: mov     rcx, [rsi+0A80h]
 * 0000000140C7531B: cmp     [rsi+918h], r12d
 * 0000000140C75322: jnz     short loc_140C75332
 * 0000000140C75324: mov     rax, [rsi+588h]
 * 0000000140C7532B: xor     rcx, r8
 * 0000000140C7532E: mov     [rax+18h], rcx
 * 0000000140C75332: xor     edx, edx
 * 0000000140C75334: mov     r9d, 100h
 * 0000000140C7533A: mov     rcx, rsi
 * 0000000140C7533D: call    sub_140C7F03C
 * 0000000140C75342: jmp     short loc_140C7534A
 * 0000000140C75344: mov     r15d, 1
 * 0000000140C7534A: add     dword ptr [rsi+848h], 10000h
 * 0000000140C75354: mov     r11d, 1000h
 * 0000000140C7535A: jmp     loc_140C773A3
 * 0000000140C7535F: cmp     [r13+10h], r12d
 * 0000000140C75363: jz      loc_140C773A3
 * 0000000140C75369: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140C75373: jz      short loc_140C75394
 * 0000000140C75375: mov     rcx, [rsi+4D8h]
 * 0000000140C7537C: cli
 * 0000000140C7537D: mov     eax, [rsi+9D8h]
 * 0000000140C75383: shr     eax, 9
 * 0000000140C75386: and     eax, 1Fh
 * 0000000140C75389: lock bts [rcx], eax
 * 0000000140C7538D: jnb     short loc_140C75394
 * 0000000140C7538F: sti
 * 0000000140C75390: pause
 * 0000000140C75392: jmp     short loc_140C7537C
 * 0000000140C75394: mov     r14, [r13+8]
 * 0000000140C75398: mov     r8d, [r13+10h]
 * 0000000140C7539C: mov     r9, r14
 * 0000000140C7539F: add     [rsi+848h], r8d
 * 0000000140C753A6: mov     rax, r14
 * 0000000140C753A9: mov     r10d, [rsi+834h]
 * 0000000140C753B0: mov     r15, [rsi+838h]
 * 0000000140C753B7: lea     rcx, [r14+r8]
 * 0000000140C753BB: cmp     r14, rcx
 * 0000000140C753BE: jnb     short loc_140C753D0
 * 0000000140C753C0: mov     edx, 40h ; '@'
 * 0000000140C753C5: prefetchnta byte ptr [rax]
 * 0000000140C753C8: add     rax, rdx
 * 0000000140C753CB: cmp     rax, rcx
 * 0000000140C753CE: jb      short loc_140C753C5
 * 0000000140C753D0: mov     r11d, r8d
 * 0000000140C753D3: mov     rbx, r15
 * 0000000140C753D6: shr     r11d, 7
 * 0000000140C753DA: mov     edx, 1
 * 0000000140C753DF: test    r11d, r11d
 * 0000000140C753E2: jz      short loc_140C75451
 * 0000000140C753E4: mov     edi, 0FFFFFFFFh
 * 0000000140C753E9: mov     rsi, 7010008004002001h
 * 0000000140C753F3: mov     eax, 8
 * 0000000140C753F8: xor     rbx, [r9]
 * 0000000140C753FB: mov     ecx, r10d
 * 0000000140C753FE: rol     rbx, cl
 * 0000000140C75401: xor     rbx, [r9+8]
 * 0000000140C75405: add     r9, 10h
 * 0000000140C75409: rol     rbx, cl
 * 0000000140C7540C: sub     rax, rdx
 * 0000000140C7540F: jnz     short loc_140C753F8
 * 0000000140C75411: mov     rcx, r9
 * 0000000140C75414: sub     rcx, r14
 * 0000000140C75417: xor     rcx, r15
 * 0000000140C7541A: mov     rax, rcx
 * 0000000140C7541D: rol     rax, 11h
 * 0000000140C75421: xor     rcx, rax
 * 0000000140C75424: mov     rax, rsi
 * 0000000140C75427: mul     rcx
 * 0000000140C7542A: mov     [rbp+7B0h+var_3C8], rdx
 * 0000000140C75431: xor     rdx, rax
 * 0000000140C75434: xor     r10d, edx
 * 0000000140C75437: mov     edx, 1
 * 0000000140C7543C: and     r10d, 3Fh
 * 0000000140C75440: cmovz   r10d, edx
 * 0000000140C75444: add     r11d, edi
 * 0000000140C75447: jnz     short loc_140C753F3
 * 0000000140C75449: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C7544E: lea     edi, [rdx+1]
 * 0000000140C75451: and     r8d, 7Fh
 * 0000000140C75455: cmp     r8d, 8
 * 0000000140C75459: jb      short loc_140C75478
 * 0000000140C7545B: mov     eax, r8d
 * 0000000140C7545E: shr     rax, 3
 * 0000000140C75462: xor     rbx, [r9]
 * 0000000140C75465: mov     ecx, r10d
 * 0000000140C75468: rol     rbx, cl
 * 0000000140C7546B: add     r9, 8
 * 0000000140C7546F: add     r8d, 0FFFFFFF8h
 * 0000000140C75473: sub     rax, rdx
 * 0000000140C75476: jnz     short loc_140C75462
 * 0000000140C75478: test    r8d, r8d
 * 0000000140C7547B: jz      short loc_140C7549B
 * 0000000140C7547D: mov     edi, 0FFFFFFFFh
 * 0000000140C75482: movzx   eax, byte ptr [r9]
 * 0000000140C75486: mov     ecx, r10d
 * 0000000140C75489: xor     rbx, rax
 * 0000000140C7548C: add     r9, rdx
 * 0000000140C7548F: rol     rbx, cl
 * 0000000140C75492: add     r8d, edi
 * 0000000140C75495: jnz     short loc_140C75482
 * 0000000140C75497: lea     edi, [r8+2]
 * 0000000140C7549B: mov     rax, rbx
 * 0000000140C7549E: jmp     short loc_140C754A2
 * 0000000140C754A0: xor     ebx, eax
 * 0000000140C754A2: shr     rax, 1Fh
 * 0000000140C754A6: test    rax, rax
 * 0000000140C754A9: jnz     short loc_140C754A0
 * 0000000140C754AB: btr     ebx, 1Fh
 * 0000000140C754AF: cmp     ebx, [r13+14h]
 * 0000000140C754B3: jz      loc_140C756C7
 * 0000000140C754B9: cmp     [r13+0], eax
 * 0000000140C754BD: jnz     short loc_140C754C7
 * 0000000140C754BF: cmp     [r13+18h], eax
 * 0000000140C754C3: cmovnz  r12d, edx
 * 0000000140C754C7: mov     ecx, [r13+10h]
 * 0000000140C754CB: mov     rdx, [r13+8]
 * 0000000140C754CF: test    rcx, rcx
 * 0000000140C754D2: jz      loc_140C75580
 * 0000000140C754D8: mov     eax, [rsi+9DCh]
 * 0000000140C754DE: mov     r8d, 40h ; '@'
 * 0000000140C754E4: test    r8b, al
 * 0000000140C754E7: jz      loc_140C75580
 * 0000000140C754ED: mov     r15, cr8
 * 0000000140C754F1: mov     r14, rdx
 * 0000000140C754F4: lea     rax, [rcx-1]
 * 0000000140C754F8: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C754FF: add     rax, rdx
 * 0000000140C75502: or      rax, 0FFFh
 * 0000000140C75508: mov     [rbp+7B0h+var_820], rax
 * 0000000140C7550C: lea     r13, [r14-1]
 * 0000000140C75510: mov     cr8, rdi
 * 0000000140C75514: mov     rax, [rsi+468h]
 * 0000000140C7551B: xor     edx, edx
 * 0000000140C7551D: mov     rcx, r14
 * 0000000140C75520: call    KeGuardDispatchICall
 * 0000000140C75525: cmp     eax, 0C000022Dh
 * 0000000140C7552A: jnz     short loc_140C75548
 * 0000000140C7552C: test    r12d, r12d
 * 0000000140C7552F: jnz     short loc_140C75573
 * 0000000140C75531: lea     eax, [r12+1]
 * 0000000140C75536: cmp     r15b, al
 * 0000000140C75539: ja      short loc_140C7554C
 * 0000000140C7553B: movzx   eax, r15b
 * 0000000140C7553F: mov     cr8, rax
 * 0000000140C75543: mov     al, [r14]
 * 0000000140C75546: jmp     short loc_140C75510
 * 0000000140C75548: test    eax, eax
 * 0000000140C7554A: js      short loc_140C75573
 * 0000000140C7554C: mov     r11d, 1000h
 * 0000000140C75552: add     r14, r11
 * 0000000140C75555: add     r13, r11
 * 0000000140C75558: cmp     r13, [rbp+7B0h+var_820]
 * 0000000140C7555C: jnz     short loc_140C75514
 * 0000000140C7555E: movzx   eax, r15b
 * 0000000140C75562: mov     cr8, rax
 * 0000000140C75566: xor     r12d, r12d
 * 0000000140C75569: lea     r15d, [r12+1]
 * 0000000140C7556E: jmp     loc_140C756D5
 * 0000000140C75573: movzx   eax, r15b
 * 0000000140C75577: mov     cr8, rax
 * 0000000140C7557B: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C75580: mov     eax, [r13+14h]
 * 0000000140C75584: xor     r12d, r12d
 * 0000000140C75587: cmp     [rsi+918h], r12d
 * 0000000140C7558E: jnz     short loc_140C755A0
 * 0000000140C75590: mov     ecx, ebx
 * 0000000140C75592: xor     rcx, rax
 * 0000000140C75595: mov     rax, [rsi+588h]
 * 0000000140C7559C: mov     [rax+18h], rcx
 * 0000000140C755A0: mov     r15d, 1
 * 0000000140C755A6: mov     rcx, [r13+8]
 * 0000000140C755AA: cmp     [rsi+918h], r12d
 * 0000000140C755B1: jnz     loc_140C756CF
 * 0000000140C755B7: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C755C1: add     rax, rsi
 * 0000000140C755C4: mov     [rsi+920h], rax
 * 0000000140C755CB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C755D5: add     rax, r13
 * 0000000140C755D8: mov     [rsi+928h], rax
 * 0000000140C755DF: movsxd  rax, dword ptr [r13+0]
 * 0000000140C755E3: mov     [rsi+930h], rax
 * 0000000140C755EA: mov     [rsi+938h], rcx
 * 0000000140C755F1: mov     [rsi+918h], r15d
 * 0000000140C755F8: mov     ecx, [rsi+9D8h]
 * 0000000140C755FE: bt      ecx, 1Dh
 * 0000000140C75602: jb      loc_140C756CF
 * 0000000140C75608: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C75612: jz      loc_140C756CF
 * 0000000140C75618: test    r15b, cl
 * 0000000140C7561B: jz      loc_140C756CF
 * 0000000140C75621: mov     ecx, [rsi+0A74h]
 * 0000000140C75627: mov     eax, [rsi+804h]
 * 0000000140C7562D: mov     r10, [rsi+838h]
 * 0000000140C75634: sub     eax, ecx
 * 0000000140C75636: mov     r8, [rsi+0A78h]
 * 0000000140C7563D: lea     rdx, [rcx+rsi]
 * 0000000140C75641: mov     ecx, eax
 * 0000000140C75643: shr     rcx, 3
 * 0000000140C75647: lea     r9, [rdx+rcx*8]
 * 0000000140C7564B: jmp     short loc_140C7566E
 * 0000000140C7564D: xor     [rdx], r8
 * 0000000140C75650: mov     rax, [rdx]
 * 0000000140C75653: movzx   ecx, r8b
 * 0000000140C75657: xor     rax, r10
 * 0000000140C7565A: and     ecx, 3Fh
 * 0000000140C7565D: ror     r8, cl
 * 0000000140C75660: add     r8, rax
 * 0000000140C75663: xor     r8, 0F05h
 * 0000000140C7566A: add     rdx, 8
 * 0000000140C7566E: cmp     rdx, r9
 * 0000000140C75671: jnz     short loc_140C7564D
 * 0000000140C75673: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C7567B: cmp     r8, [rsi+0A80h]
 * 0000000140C75682: jz      short loc_140C756CF
 * 0000000140C75684: mov     ecx, [rsi+804h]
 * 0000000140C7568A: mov     rax, [rsi+588h]
 * 0000000140C75691: mov     [rax], rsi
 * 0000000140C75694: mov     [rax+10h], ecx
 * 0000000140C75697: mov     rcx, [rsi+0A80h]
 * 0000000140C7569E: cmp     [rsi+918h], r12d
 * 0000000140C756A5: jnz     short loc_140C756B5
 * 0000000140C756A7: mov     rax, [rsi+588h]
 * 0000000140C756AE: xor     rcx, r8
 * 0000000140C756B1: mov     [rax+18h], rcx
 * 0000000140C756B5: xor     edx, edx
 * 0000000140C756B7: mov     r9d, 100h
 * 0000000140C756BD: mov     rcx, rsi
 * 0000000140C756C0: call    sub_140C7F03C
 * 0000000140C756C5: jmp     short loc_140C756CF
 * 0000000140C756C7: xor     r12d, r12d
 * 0000000140C756CA: lea     r15d, [r12+1]
 * 0000000140C756CF: mov     r11d, 1000h
 * 0000000140C756D5: test    dword ptr [rsi+9DCh], 4000h
 * 0000000140C756DF: jz      loc_140C773A3
 * 0000000140C756E5: mov     ecx, [rsi+9D8h]
 * 0000000140C756EB: mov     eax, r15d
 * 0000000140C756EE: mov     rdx, [rsi+4D8h]
 * 0000000140C756F5: shr     ecx, 9
 * 0000000140C756F8: and     ecx, 1Fh
 * 0000000140C756FB: shl     eax, cl
 * 0000000140C756FD: not     eax
 * 0000000140C756FF: lock and [rdx], eax
 * 0000000140C75702: sti
 * 0000000140C75703: jmp     loc_140C773A3
 * 0000000140C75708: mov     rcx, gs:20h
 * 0000000140C75711: mov     rax, [rsi+658h]
 * 0000000140C75718: mov     rcx, [rax+rcx]
 * 0000000140C7571C: mov     rax, [rsi+698h]
 * 0000000140C75723: add     rcx, [rsi+6B8h]
 * 0000000140C7572A: mov     rcx, [rcx+rax]
 * 0000000140C7572E: mov     [rbp+7B0h+var_7C0], rcx
 * 0000000140C75732: mov     rax, [rsi+490h]
 * 0000000140C75739: call    KeGuardDispatchICall
 * 0000000140C7573E: mov     r14, rax
 * 0000000140C75741: cmp     rax, rbx
 * 0000000140C75744: jnz     loc_140C7587B
 * 0000000140C7574A: mov     [rbp+7B0h+var_7C0], r12
 * 0000000140C7574E: mov     rcx, [rsi+9D0h]
 * 0000000140C75755: test    rcx, rcx
 * 0000000140C75758: jz      short loc_140C75780
 * 0000000140C7575A: mov     rax, [rsi+480h]
 * 0000000140C75761: lea     rdx, [rbp+7B0h+var_7C0]
 * 0000000140C75765: call    KeGuardDispatchICall
 * 0000000140C7576A: test    eax, eax
 * 0000000140C7576C: jns     short loc_140C75777
 * 0000000140C7576E: mov     rax, r12
 * 0000000140C75771: mov     [rbp+7B0h+var_7C0], rax
 * 0000000140C75775: jmp     short loc_140C7577B
 * 0000000140C75777: mov     rax, [rbp+7B0h+var_7C0]
 * 0000000140C7577B: test    rax, rax
 * 0000000140C7577E: jnz     short loc_140C75792
 * 0000000140C75780: mov     rax, [rsi+3C8h]
 * 0000000140C75787: xor     ecx, ecx
 * 0000000140C75789: call    KeGuardDispatchICall
 * 0000000140C7578E: mov     [rbp+7B0h+var_7C0], rax
 * 0000000140C75792: mov     [rsi+9D0h], r12
 * 0000000140C75799: mov     ebx, r12d
 * 0000000140C7579C: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C757A0: test    rcx, rcx
 * 0000000140C757A3: jz      loc_140C7586A
 * 0000000140C757A9: mov     rax, [rsi+3A8h]
 * 0000000140C757B0: add     ebx, r15d
 * 0000000140C757B3: call    KeGuardDispatchICall
 * 0000000140C757B8: test    eax, eax
 * 0000000140C757BA: js      short loc_140C75817
 * 0000000140C757BC: mov     rax, [rsi+440h]
 * 0000000140C757C3: lea     rdx, [rbp+7B0h+var_A0]
 * 0000000140C757CA: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C757CE: call    KeGuardDispatchICall
 * 0000000140C757D3: mov     rax, [rsi+490h]
 * 0000000140C757DA: call    KeGuardDispatchICall
 * 0000000140C757DF: mov     r14, rax
 * 0000000140C757E2: lea     rcx, [rbp+7B0h+var_A0]
 * 0000000140C757E9: mov     rax, [rsi+448h]
 * 0000000140C757F0: call    KeGuardDispatchICall
 * 0000000140C757F5: mov     rax, [rsi+3B0h]
 * 0000000140C757FC: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C75800: call    KeGuardDispatchICall
 * 0000000140C75805: mov     eax, 0FFFFFFFFh
 * 0000000140C7580A: cmp     r14, rax
 * 0000000140C7580D: jnz     short loc_140C75839
 * 0000000140C7580F: cmp     ebx, 100h
 * 0000000140C75815: ja      short loc_140C75839
 * 0000000140C75817: mov     rax, [rsi+3C8h]
 * 0000000140C7581E: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C75822: call    KeGuardDispatchICall
 * 0000000140C75827: mov     [rbp+7B0h+var_7C0], rax
 * 0000000140C7582B: mov     rcx, rax
 * 0000000140C7582E: test    rax, rax
 * 0000000140C75831: jnz     loc_140C757A9
 * 0000000140C75837: jmp     short loc_140C7586A
 * 0000000140C75839: mov     rax, [rsi+488h]
 * 0000000140C75840: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C75844: call    KeGuardDispatchICall
 * 0000000140C75849: mov     [rsi+9D0h], rax
 * 0000000140C75850: mov     rax, [rsi+1F0h]
 * 0000000140C75857: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C7585B: call    KeGuardDispatchICall
 * 0000000140C75860: mov     eax, 0FFFFFFFFh
 * 0000000140C75865: cmp     r14, rax
 * 0000000140C75868: jnz     short loc_140C75878
 * 0000000140C7586A: shl     ebx, 0Ch
 * 0000000140C7586D: add     [rsi+848h], ebx
 * 0000000140C75873: jmp     loc_140C75354
 * 0000000140C75878: mov     rbx, rax
 * 0000000140C7587B: bt      dword ptr [rsi+9D8h], 1Dh
 * 0000000140C75883: jnb     short loc_140C758C7
 * 0000000140C75885: mov     rcx, [rsi+0AC8h]
 * 0000000140C7588C: mov     edx, 30h ; '0'
 * 0000000140C75891: lea     r8d, [rdx-2Ah]
 * 0000000140C75895: mov     rax, [r13+0]
 * 0000000140C75899: add     edx, 0FFFFFFF8h
 * 0000000140C7589C: mov     [rcx], rax
 * 0000000140C7589F: add     r13, 8
 * 0000000140C758A3: add     rcx, 8
 * 0000000140C758A7: sub     r8, r15
 * 0000000140C758AA: jnz     short loc_140C75895
 * 0000000140C758AC: test    edx, edx
 * 0000000140C758AE: jz      short loc_140C758C0
 * 0000000140C758B0: mov     al, [r13+0]
 * 0000000140C758B4: add     r13, r15
 * 0000000140C758B7: mov     [rcx], al
 * 0000000140C758B9: add     rcx, r15
 * 0000000140C758BC: add     edx, ebx
 * 0000000140C758BE: jnz     short loc_140C758B0
 * 0000000140C758C0: mov     r13, [rsi+0AC8h]
 * 0000000140C758C7: mov     [r13+18h], r14
 * 0000000140C758CB: mov     rcx, [rbp+7B0h+var_7C0]
 * 0000000140C758CF: cmp     [rsi+918h], r12d
 * 0000000140C758D6: jnz     loc_140C75354
 * 0000000140C758DC: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C758E6: add     rax, rsi
 * 0000000140C758E9: mov     [rsi+920h], rax
 * 0000000140C758F0: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C758FA: add     rax, r13
 * 0000000140C758FD: mov     [rsi+928h], rax
 * 0000000140C75904: movsxd  rax, dword ptr [r13+0]
 * 0000000140C75908: mov     [rsi+930h], rax
 * 0000000140C7590F: mov     [rsi+938h], rcx
 * 0000000140C75916: mov     [rsi+918h], r15d
 * 0000000140C7591D: mov     ecx, [rsi+9D8h]
 * 0000000140C75923: bt      ecx, 1Dh
 * 0000000140C75927: jb      loc_140C75354
 * 0000000140C7592D: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C75937: jz      loc_140C75354
 * 0000000140C7593D: test    r15b, cl
 * 0000000140C75940: jz      loc_140C75354
 * 0000000140C75946: mov     ecx, [rsi+0A74h]
 * 0000000140C7594C: mov     eax, [rsi+804h]
 * 0000000140C75952: mov     r10, [rsi+838h]
 * 0000000140C75959: sub     eax, ecx
 * 0000000140C7595B: mov     r8, [rsi+0A78h]
 * 0000000140C75962: lea     rdx, [rcx+rsi]
 * 0000000140C75966: mov     ecx, eax
 * 0000000140C75968: shr     rcx, 3
 * 0000000140C7596C: lea     r9, [rdx+rcx*8]
 * 0000000140C75970: jmp     short loc_140C75993
 * 0000000140C75972: xor     [rdx], r8
 * 0000000140C75975: mov     rax, [rdx]
 * 0000000140C75978: movzx   ecx, r8b
 * 0000000140C7597C: xor     rax, r10
 * 0000000140C7597F: and     ecx, 3Fh
 * 0000000140C75982: ror     r8, cl
 * 0000000140C75985: add     r8, rax
 * 0000000140C75988: xor     r8, 0F05h
 * 0000000140C7598F: add     rdx, 8
 * 0000000140C75993: cmp     rdx, r9
 * 0000000140C75996: jnz     short loc_140C75972
 * 0000000140C75998: jmp     loc_140C6BA4E
 * 0000000140C7599D: mov     eax, [rsi+850h]
 * 0000000140C759A3: test    r15b, al
 * 0000000140C759A6: jnz     loc_140C773A3
 * 0000000140C759AC: mov     rax, [rsi+188h]
 * 0000000140C759B3: mov     r14d, r12d
 * 0000000140C759B6: mov     r15, [rsi+540h]
 * 0000000140C759BD: call    KeGuardDispatchICall
 * 0000000140C759C2: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C759CC: jnz     short loc_140C759E2
 * 0000000140C759CE: mov     ecx, [rsi+978h]
 * 0000000140C759D4: cmp     ecx, 7
 * 0000000140C759D7: jnb     short loc_140C759E2
 * 0000000140C759D9: mov     ebx, 1
 * 0000000140C759DE: shl     bl, cl
 * 0000000140C759E0: jmp     short loc_140C759F9
 * 0000000140C759E2: mov     rax, [rsi+138h]
 * 0000000140C759E9: xor     edx, edx
 * 0000000140C759EB: mov     rcx, [rsi+0A48h]
 * 0000000140C759F2: call    KeGuardDispatchICall
 * 0000000140C759F7: mov     bl, 80h
 * 0000000140C759F9: mov     rax, [rsi+148h]
 * 0000000140C75A00: xor     edx, edx
 * 0000000140C75A02: mov     rcx, r15
 * 0000000140C75A05: call    KeGuardDispatchICall
 * 0000000140C75A0A: cmp     bl, 80h
 * 0000000140C75A0D: jz      short loc_140C75A48
 * 0000000140C75A0F: mov     r8, [rsi+518h]
 * 0000000140C75A16: mov     r15d, 1
 * 0000000140C75A1C: mov     rdx, [r8]
 * 0000000140C75A1F: cmp     rdx, r8
 * 0000000140C75A22: jz      short loc_140C75A63
 * 0000000140C75A24: not     bl
 * 0000000140C75A26: mov     rax, [rsi+6C8h]
 * 0000000140C75A2D: mov     rcx, rdx
 * 0000000140C75A30: sub     rcx, [rsi+6E0h]
 * 0000000140C75A37: lock and [rcx+rax], bl
 * 0000000140C75A3B: mov     rdx, [rdx]
 * 0000000140C75A3E: add     r14d, r15d
 * 0000000140C75A41: cmp     rdx, r8
 * 0000000140C75A44: jnz     short loc_140C75A26
 * 0000000140C75A46: jmp     short loc_140C75A63
 * 0000000140C75A48: mov     rax, [rsi+140h]
 * 0000000140C75A4F: xor     edx, edx
 * 0000000140C75A51: mov     rcx, [rsi+0A48h]
 * 0000000140C75A58: call    KeGuardDispatchICall
 * 0000000140C75A5D: mov     r15d, 1
 * 0000000140C75A63: mov     rcx, [rsi+540h]
 * 0000000140C75A6A: xor     edx, edx
 * 0000000140C75A6C: mov     rax, [rsi+150h]
 * 0000000140C75A73: call    KeGuardDispatchICall
 * 0000000140C75A78: mov     rax, [rsi+190h]
 * 0000000140C75A7F: call    KeGuardDispatchICall
 * 0000000140C75A84: shl     r14d, 7
 * 0000000140C75A88: add     [rsi+848h], r14d
 * 0000000140C75A8F: jmp     loc_140C75354
 * 0000000140C75A94: mov     r15, [r13+8]
 * 0000000140C75A98: mov     r14, rsi
 * 0000000140C75A9B: mov     r8d, [r13+10h]
 * 0000000140C75A9F: mov     r9, r15
 * 0000000140C75AA2: add     [rsi+848h], r8d
 * 0000000140C75AA9: mov     rax, r15
 * 0000000140C75AAC: mov     r10d, [rsi+834h]
 * 0000000140C75AB3: mov     r12, [rsi+838h]
 * 0000000140C75ABA: lea     rcx, [r15+r8]
 * 0000000140C75ABE: cmp     r15, rcx
 * 0000000140C75AC1: jnb     short loc_140C75AD3
 * 0000000140C75AC3: mov     edx, 40h ; '@'
 * 0000000140C75AC8: prefetchnta byte ptr [rax]
 * 0000000140C75ACB: add     rax, rdx
 * 0000000140C75ACE: cmp     rax, rcx
 * 0000000140C75AD1: jb      short loc_140C75AC8
 * 0000000140C75AD3: mov     r11d, r8d
 * 0000000140C75AD6: mov     rbx, r12
 * 0000000140C75AD9: shr     r11d, 7
 * 0000000140C75ADD: mov     edx, 1
 * 0000000140C75AE2: mov     r13d, 0FFFFFFFFh
 * 0000000140C75AE8: test    r11d, r11d
 * 0000000140C75AEB: jz      short loc_140C75B50
 * 0000000140C75AED: mov     rdi, 7010008004002001h
 * 0000000140C75AF7: mov     eax, 8
 * 0000000140C75AFC: xor     rbx, [r9]
 * 0000000140C75AFF: mov     ecx, r10d
 * 0000000140C75B02: rol     rbx, cl
 * 0000000140C75B05: xor     rbx, [r9+8]
 * 0000000140C75B09: add     r9, 10h
 * 0000000140C75B0D: rol     rbx, cl
 * 0000000140C75B10: sub     rax, rdx
 * 0000000140C75B13: jnz     short loc_140C75AFC
 * 0000000140C75B15: mov     rcx, r9
 * 0000000140C75B18: sub     rcx, r15
 * 0000000140C75B1B: xor     rcx, r12
 * 0000000140C75B1E: mov     rax, rcx
 * 0000000140C75B21: rol     rax, 11h
 * 0000000140C75B25: xor     rcx, rax
 * 0000000140C75B28: mov     rax, rdi
 * 0000000140C75B2B: mul     rcx
 * 0000000140C75B2E: mov     [rbp+7B0h+var_3C0], rdx
 * 0000000140C75B35: xor     rdx, rax
 * 0000000140C75B38: xor     r10d, edx
 * 0000000140C75B3B: mov     edx, 1
 * 0000000140C75B40: and     r10d, 3Fh
 * 0000000140C75B44: cmovz   r10d, edx
 * 0000000140C75B48: add     r11d, r13d
 * 0000000140C75B4B: jnz     short loc_140C75AF7
 * 0000000140C75B4D: lea     edi, [rdx+1]
 * 0000000140C75B50: and     r8d, 7Fh
 * 0000000140C75B54: cmp     r8d, 8
 * 0000000140C75B58: jb      short loc_140C75B77
 * 0000000140C75B5A: mov     eax, r8d
 * 0000000140C75B5D: shr     rax, 3
 * 0000000140C75B61: xor     rbx, [r9]
 * 0000000140C75B64: mov     ecx, r10d
 * 0000000140C75B67: rol     rbx, cl
 * 0000000140C75B6A: add     r9, 8
 * 0000000140C75B6E: add     r8d, 0FFFFFFF8h
 * 0000000140C75B72: sub     rax, rdx
 * 0000000140C75B75: jnz     short loc_140C75B61
 * 0000000140C75B77: xor     r12d, r12d
 * 0000000140C75B7A: test    r8d, r8d
 * 0000000140C75B7D: jz      short loc_140C75B94
 * 0000000140C75B7F: movzx   eax, byte ptr [r9]
 * 0000000140C75B83: mov     ecx, r10d
 * 0000000140C75B86: xor     rbx, rax
 * 0000000140C75B89: add     r9, rdx
 * 0000000140C75B8C: rol     rbx, cl
 * 0000000140C75B8F: add     r8d, r13d
 * 0000000140C75B92: jnz     short loc_140C75B7F
 * 0000000140C75B94: mov     rax, rbx
 * 0000000140C75B97: jmp     short loc_140C75B9B
 * 0000000140C75B99: xor     ebx, eax
 * 0000000140C75B9B: shr     rax, 1Fh
 * 0000000140C75B9F: test    rax, rax
 * 0000000140C75BA2: jnz     short loc_140C75B99
 * 0000000140C75BA4: mov     r15, [rsp+8B0h+var_860]
 * 0000000140C75BA9: btr     ebx, 1Fh
 * 0000000140C75BAD: mov     r13d, r12d
 * 0000000140C75BB0: cmp     ebx, [r15+14h]
 * 0000000140C75BB4: jz      loc_140C75DD4
 * 0000000140C75BBA: cmp     [r15], r12d
 * 0000000140C75BBD: jnz     short loc_140C75BC7
 * 0000000140C75BBF: cmp     [r15+18h], r12d
 * 0000000140C75BC3: cmovnz  r13d, edx
 * 0000000140C75BC7: mov     ecx, [r15+10h]
 * 0000000140C75BCB: mov     rdx, [r15+8]
 * 0000000140C75BCF: test    rcx, rcx
 * 0000000140C75BD2: jz      loc_140C75C91
 * 0000000140C75BD8: mov     eax, [rsi+9DCh]
 * 0000000140C75BDE: mov     r8d, 40h ; '@'
 * 0000000140C75BE4: test    r8b, al
 * 0000000140C75BE7: jz      loc_140C75C91
 * 0000000140C75BED: mov     r12, cr8
 * 0000000140C75BF1: mov     r15, rdx
 * 0000000140C75BF4: lea     rax, [rcx-1]
 * 0000000140C75BF8: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140C75BFF: add     rax, rdx
 * 0000000140C75C02: or      rax, 0FFFh
 * 0000000140C75C08: mov     [rbp+7B0h+var_820], rax
 * 0000000140C75C0C: lea     rax, [r15-1]
 * 0000000140C75C10: mov     [rsp+8B0h+var_858], rax
 * 0000000140C75C15: mov     cr8, rdi
 * 0000000140C75C19: mov     rax, [rsi+468h]
 * 0000000140C75C20: xor     edx, edx
 * 0000000140C75C22: mov     rcx, r15
 * 0000000140C75C25: call    KeGuardDispatchICall
 * 0000000140C75C2A: cmp     eax, 0C000022Dh
 * 0000000140C75C2F: jnz     short loc_140C75C4C
 * 0000000140C75C31: test    r13d, r13d
 * 0000000140C75C34: jnz     short loc_140C75C81
 * 0000000140C75C36: lea     eax, [r13+1]
 * 0000000140C75C3A: cmp     r12b, al
 * 0000000140C75C3D: ja      short loc_140C75C50
 * 0000000140C75C3F: movzx   eax, r12b
 * 0000000140C75C43: mov     cr8, rax
 * 0000000140C75C47: mov     al, [r15]
 * 0000000140C75C4A: jmp     short loc_140C75C15
 * 0000000140C75C4C: test    eax, eax
 * 0000000140C75C4E: js      short loc_140C75C81
 * 0000000140C75C50: mov     rax, [rsp+8B0h+var_858]
 * 0000000140C75C55: mov     r11d, 1000h
 * 0000000140C75C5B: add     rax, r11
 * 0000000140C75C5E: add     r15, r11
 * 0000000140C75C61: mov     [rsp+8B0h+var_858], rax
 * 0000000140C75C66: cmp     rax, [rbp+7B0h+var_820]
 * 0000000140C75C6A: jnz     short loc_140C75C19
 * 0000000140C75C6C: movzx   eax, r12b
 * 0000000140C75C70: mov     cr8, rax
 * 0000000140C75C74: mov     r15, [rsp+8B0h+var_860]
 * 0000000140C75C79: xor     r12d, r12d
 * 0000000140C75C7C: jmp     loc_140C75DDA
 * 0000000140C75C81: movzx   eax, r12b
 * 0000000140C75C85: mov     cr8, rax
 * 0000000140C75C89: mov     r15, [rsp+8B0h+var_860]
 * 0000000140C75C8E: xor     r12d, r12d
 * 0000000140C75C91: mov     eax, [r15+14h]
 * 0000000140C75C95: cmp     [rsi+918h], r12d
 * 0000000140C75C9C: jnz     short loc_140C75CB0
 * 0000000140C75C9E: mov     ecx, eax
 * 0000000140C75CA0: mov     eax, ebx
 * 0000000140C75CA2: xor     rcx, rax
 * 0000000140C75CA5: mov     rax, [rsi+588h]
 * 0000000140C75CAC: mov     [rax+18h], rcx
 * 0000000140C75CB0: mov     rcx, [r15+8]
 * 0000000140C75CB4: cmp     [rsi+918h], r12d
 * 0000000140C75CBB: jnz     loc_140C75DD4
 * 0000000140C75CC1: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C75CCB: mov     r11d, 1
 * 0000000140C75CD1: add     rax, rsi
 * 0000000140C75CD4: mov     [rsi+920h], rax
 * 0000000140C75CDB: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C75CE5: add     rax, r15
 * 0000000140C75CE8: mov     [rsi+928h], rax
 * 0000000140C75CEF: movsxd  rax, dword ptr [r15]
 * 0000000140C75CF2: mov     [rsi+930h], rax
 * 0000000140C75CF9: mov     [rsi+938h], rcx
 * 0000000140C75D00: mov     [rsi+918h], r11d
 * 0000000140C75D07: mov     ecx, [rsi+9D8h]
 * 0000000140C75D0D: bt      ecx, 1Dh
 * 0000000140C75D11: jb      loc_140C75DD4
 * 0000000140C75D17: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C75D21: jz      loc_140C75DD4
 * 0000000140C75D27: test    r11b, cl
 * 0000000140C75D2A: jz      loc_140C75DD4
 * 0000000140C75D30: mov     ecx, [rsi+0A74h]
 * 0000000140C75D36: mov     eax, [rsi+804h]
 * 0000000140C75D3C: mov     r10, [rsi+838h]
 * 0000000140C75D43: sub     eax, ecx
 * 0000000140C75D45: mov     r8, [rsi+0A78h]
 * 0000000140C75D4C: lea     rdx, [rcx+rsi]
 * 0000000140C75D50: mov     ecx, eax
 * 0000000140C75D52: shr     rcx, 3
 * 0000000140C75D56: lea     r9, [rdx+rcx*8]
 * 0000000140C75D5A: jmp     short loc_140C75D7D
 * 0000000140C75D5C: xor     [rdx], r8
 * 0000000140C75D5F: mov     rax, [rdx]
 * 0000000140C75D62: movzx   ecx, r8b
 * 0000000140C75D66: xor     rax, r10
 * 0000000140C75D69: and     ecx, 3Fh
 * 0000000140C75D6C: ror     r8, cl
 * 0000000140C75D6F: add     r8, rax
 * 0000000140C75D72: xor     r8, 0F05h
 * 0000000140C75D79: add     rdx, 8
 * 0000000140C75D7D: cmp     rdx, r9
 * 0000000140C75D80: jnz     short loc_140C75D5C
 * 0000000140C75D82: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C75D8A: cmp     r8, [rsi+0A80h]
 * 0000000140C75D91: jz      short loc_140C75DD4
 * 0000000140C75D93: mov     ecx, [rsi+804h]
 * 0000000140C75D99: mov     rax, [rsi+588h]
 * 0000000140C75DA0: mov     [rax], rsi
 * 0000000140C75DA3: mov     [rax+10h], ecx
 * 0000000140C75DA6: mov     rcx, [rsi+0A80h]
 * 0000000140C75DAD: cmp     [rsi+918h], r12d
 * 0000000140C75DB4: jnz     short loc_140C75DC4
 * 0000000140C75DB6: mov     rax, [rsi+588h]
 * 0000000140C75DBD: xor     rcx, r8
 * 0000000140C75DC0: mov     [rax+18h], rcx
 * 0000000140C75DC4: xor     edx, edx
 * 0000000140C75DC6: mov     r9d, 100h
 * 0000000140C75DCC: mov     rcx, rsi
 * 0000000140C75DCF: call    sub_140C7F03C
 * 0000000140C75DD4: mov     r11d, 1000h
 * 0000000140C75DDA: mov     eax, [r15+20h]
 * 0000000140C75DDE: mov     ecx, 1
 * 0000000140C75DE3: test    cl, al
 * 0000000140C75DE5: jz      loc_140C773A0
 * 0000000140C75DEB: mov     rbx, [r15+18h]
 * 0000000140C75DEF: mov     rax, [rsi+208h]
 * 0000000140C75DF6: mov     rcx, rbx
 * 0000000140C75DF9: mov     [rbp+7B0h+var_820], rbx
 * 0000000140C75DFD: call    KeGuardDispatchICall
 * 0000000140C75E02: mov     r11d, 1000h
 * 0000000140C75E08: movzx   r15d, word ptr [rax+14h]
 * 0000000140C75E0D: add     r15, 18h
 * 0000000140C75E11: add     r15, rax
 * 0000000140C75E14: movzx   eax, word ptr [rax+6]
 * 0000000140C75E18: lea     rcx, [rax+rax*4]
 * 0000000140C75E1C: lea     rax, [r15+rcx*8]
 * 0000000140C75E20: mov     [rsp+8B0h+var_858], rax
 * 0000000140C75E25: cmp     r15, rax
 * 0000000140C75E28: jz      loc_140C77101
 * 0000000140C75E2E: mov     r13d, [rsi+844h]
 * 0000000140C75E35: test    r13d, r13d
 * 0000000140C75E38: jnz     short loc_140C75E44
 * 0000000140C75E3A: mov     [rsi+844h], r11d
 * 0000000140C75E41: mov     r13d, r11d
 * 0000000140C75E44: cmp     rbx, [rsi+5E0h]
 * 0000000140C75E4B: jz      short loc_140C75E5D
 * 0000000140C75E4D: mov     dword ptr [rbp+7B0h+arg_8], r12d
 * 0000000140C75E54: cmp     rbx, [rsi+5E8h]
 * 0000000140C75E5B: jnz     short loc_140C75E67
 * 0000000140C75E5D: mov     dword ptr [rbp+7B0h+arg_8], 1
 * 0000000140C75E67: mov     esi, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C75E6D: mov     edx, [r15+0Ch]
 * 0000000140C75E71: mov     ecx, [r15+10h]
 * 0000000140C75E75: mov     eax, [r15+8]
 * 0000000140C75E79: cmp     ecx, eax
 * 0000000140C75E7B: mov     dword ptr [rbp+7B0h+arg_8], edx
 * 0000000140C75E81: cmovbe  ecx, eax
 * 0000000140C75E84: lea     r12d, [rdx+0FFFh]
 * 0000000140C75E8B: add     r12d, ecx
 * 0000000140C75E8E: and     r12d, 0FFFFF000h
 * 0000000140C75E95: mov     dword ptr [rsp+8B0h+var_848], r12d
 * 0000000140C75E9A: cmp     r13d, r12d
 * 0000000140C75E9D: jnb     loc_140C75F31
 * 0000000140C75EA3: test    dword ptr [r15+24h], 2000000h
 * 0000000140C75EAB: jnz     short loc_140C75F28
 * 0000000140C75EAD: mov     eax, [r15]
 * 0000000140C75EB0: cmp     eax, 54494E49h
 * 0000000140C75EB5: jnz     short loc_140C75EFE
 * 0000000140C75EB7: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140C75EBF: jz      short loc_140C75F28
 * 0000000140C75EC1: cmp     eax, 41525245h
 * 0000000140C75EC6: jnz     short loc_140C75ED4
 * 0000000140C75EC8: mov     eax, 4154h
 * 0000000140C75ECD: cmp     [r15+4], ax
 * 0000000140C75ED2: jz      short loc_140C75F28
 * 0000000140C75ED4: test    r14, r14
 * 0000000140C75ED7: jz      loc_140C75F6B
 * 0000000140C75EDD: mov     rdx, [r14+950h]
 * 0000000140C75EE4: mov     r9, [r14+958h]
 * 0000000140C75EEB: mov     r11, [r14+960h]
 * 0000000140C75EF2: mov     rbx, [r14+968h]
 * 0000000140C75EF9: jmp     loc_140C75F87
 * 0000000140C75EFE: cmp     eax, 45474150h
 * 0000000140C75F03: jnz     short loc_140C75EC1
 * 0000000140C75F05: movzx   eax, word ptr [r15+4]
 * 0000000140C75F0A: mov     ecx, 7877h
 * 0000000140C75F0F: cmp     ax, cx
 * 0000000140C75F12: jz      short loc_140C75F28
 * 0000000140C75F14: mov     ecx, 7277h
 * 0000000140C75F19: cmp     ax, cx
 * 0000000140C75F1C: jz      short loc_140C75F28
 * 0000000140C75F1E: mov     ecx, 7777h
 * 0000000140C75F23: cmp     ax, cx
 * 0000000140C75F26: jnz     short loc_140C75ED4
 * 0000000140C75F28: mov     r11d, 1000h
 * 0000000140C75F2E: mov     r13d, r12d
 * 0000000140C75F31: mov     ecx, r12d
 * 0000000140C75F34: add     r15, 28h ; '('
 * 0000000140C75F38: cmp     r15, [rsp+8B0h+var_858]
 * 0000000140C75F3D: jnz     loc_140C75E6D
 * 0000000140C75F43: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C75F48: cmp     r15, [rsp+8B0h+var_858]
 * 0000000140C75F4D: jnz     loc_140C763DE
 * 0000000140C75F53: cmp     r13d, ecx
 * 0000000140C75F56: jb      loc_140C763DE
 * 0000000140C75F5C: xor     r12d, r12d
 * 0000000140C75F5F: mov     [r14+844h], r12d
 * 0000000140C75F66: jmp     loc_140C77101
 * 0000000140C75F6B: mov     rdx, cs:VfExcludeSections
 * 0000000140C75F72: mov     r9, cs:off_140E0A060; "PAGESPEC"
 * 0000000140C75F79: mov     r11, cs:off_140E0A068; "INIT"
 * 0000000140C75F80: mov     rbx, cs:off_140E0A070; "PAGEKD"
 * 0000000140C75F87: mov     r10d, 7
 * 0000000140C75F8D: mov     r8, r15
 * 0000000140C75F90: mov     cl, [r8]
 * 0000000140C75F93: inc     r8
 * 0000000140C75F96: mov     al, [rdx]
 * 0000000140C75F98: inc     rdx
 * 0000000140C75F9B: cmp     cl, al
 * 0000000140C75F9D: jnz     short loc_140C75FAE
 * 0000000140C75F9F: mov     eax, 0FFFFFFFFh
 * 0000000140C75FA4: add     r10d, eax
 * 0000000140C75FA7: jnz     short loc_140C75F90
 * 0000000140C75FA9: jmp     loc_140C75F28
 * 0000000140C75FAE: mov     edx, 8
 * 0000000140C75FB3: mov     r8, r15
 * 0000000140C75FB6: mov     rcx, [r8]
 * 0000000140C75FB9: add     r8, 8
 * 0000000140C75FBD: mov     rax, [r9]
 * 0000000140C75FC0: add     r9, 8
 * 0000000140C75FC4: cmp     rcx, rax
 * 0000000140C75FC7: jnz     short loc_140C75FFA
 * 0000000140C75FC9: add     edx, 0FFFFFFF8h
 * 0000000140C75FCC: cmp     edx, 8
 * 0000000140C75FCF: jnb     short loc_140C75FB6
 * 0000000140C75FD1: xor     r10d, r10d
 * 0000000140C75FD4: test    edx, edx
 * 0000000140C75FD6: jz      loc_140C75F28
 * 0000000140C75FDC: mov     cl, [r8]
 * 0000000140C75FDF: inc     r8
 * 0000000140C75FE2: mov     al, [r9]
 * 0000000140C75FE5: inc     r9
 * 0000000140C75FE8: cmp     cl, al
 * 0000000140C75FEA: jnz     short loc_140C75FFD
 * 0000000140C75FEC: mov     eax, 0FFFFFFFFh
 * 0000000140C75FF1: add     edx, eax
 * 0000000140C75FF3: jnz     short loc_140C75FDC
 * 0000000140C75FF5: jmp     loc_140C75F28
 * 0000000140C75FFA: xor     r10d, r10d
 * 0000000140C75FFD: mov     r8d, 4
 * 0000000140C76003: mov     rdx, r15
 * 0000000140C76006: lea     r9d, [r8-3]
 * 0000000140C7600A: mov     cl, [rdx]
 * 0000000140C7600C: add     rdx, r9
 * 0000000140C7600F: mov     al, [r11]
 * 0000000140C76012: add     r11, r9
 * 0000000140C76015: cmp     cl, al
 * 0000000140C76017: jnz     short loc_140C76028
 * 0000000140C76019: mov     eax, 0FFFFFFFFh
 * 0000000140C7601E: add     r8d, eax
 * 0000000140C76021: jnz     short loc_140C7600A
 * 0000000140C76023: jmp     loc_140C75F28
 * 0000000140C76028: mov     r9d, 6
 * 0000000140C7602E: mov     rdx, r15
 * 0000000140C76031: mov     r8d, r9d
 * 0000000140C76034: lea     r11d, [r9-5]
 * 0000000140C76038: mov     cl, [rdx]
 * 0000000140C7603A: add     rdx, r11
 * 0000000140C7603D: mov     al, [rbx]
 * 0000000140C7603F: add     rbx, r11
 * 0000000140C76042: cmp     cl, al
 * 0000000140C76044: jnz     short loc_140C76055
 * 0000000140C76046: mov     eax, 0FFFFFFFFh
 * 0000000140C7604B: add     r8d, eax
 * 0000000140C7604E: jnz     short loc_140C76038
 * 0000000140C76050: jmp     loc_140C75F28
 * 0000000140C76055: mov     eax, [r15+24h]
 * 0000000140C76059: test    eax, eax
 * 0000000140C7605B: js      loc_140C75F28
 * 0000000140C76061: bt      eax, 1Dh
 * 0000000140C76065: jnb     loc_140C75F28
 * 0000000140C7606B: mov     r8, r11
 * 0000000140C7606E: mov     r12d, r8d
 * 0000000140C76071: test    esi, esi
 * 0000000140C76073: jz      short loc_140C76088
 * 0000000140C76075: mov     eax, [r15]
 * 0000000140C76078: cmp     eax, 2E656461h
 * 0000000140C7607D: jz      short loc_140C76088
 * 0000000140C7607F: cmp     eax, 45474150h
 * 0000000140C76084: cmovnz  r12d, r10d
 * 0000000140C76088: cmp     r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C7608F: mov     r11d, 1000h
 * 0000000140C76095: cmovb   r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C7609D: mov     ebx, r13d
 * 0000000140C760A0: add     rbx, [rbp+7B0h+var_820]
 * 0000000140C760A4: test    byte ptr [r14+89Bh], 4
 * 0000000140C760AC: jz      short loc_140C76110
 * 0000000140C760AE: mov     ecx, 0FFFFFFFFh
 * 0000000140C760B3: mov     eax, ecx
 * 0000000140C760B5: xbegin  $+6
 * 0000000140C760BB: cmp     eax, ecx
 * 0000000140C760BD: jnz     short loc_140C760C6
 * 0000000140C760BF: mov     al, [rbx]
 * 0000000140C760C1: xend
 * 0000000140C760C4: jmp     short loc_140C760F9
 * 0000000140C760C6: rdtsc
 * 0000000140C760C8: shl     rdx, 20h
 * 0000000140C760CC: or      rax, rdx
 * 0000000140C760CF: mov     rcx, rax
 * 0000000140C760D2: ror     rcx, 3
 * 0000000140C760D6: xor     rcx, rax
 * 0000000140C760D9: mov     rax, 7010008004002001h
 * 0000000140C760E3: mul     rcx
 * 0000000140C760E6: mov     [rbp+7B0h+var_3B8], rdx
 * 0000000140C760ED: xor     rdx, rax
 * 0000000140C760F0: mov     eax, 0Fh
 * 0000000140C760F5: test    al, dl
 * 0000000140C760F7: jz      short loc_140C76110
 * 0000000140C760F9: add     [r14+85Ch], r8d
 * 0000000140C76100: add     dword ptr [r14+848h], 100h
 * 0000000140C7610B: jmp     loc_140C762EC
 * 0000000140C76110: mov     ecx, 0FFFh
 * 0000000140C76115: mov     [rbp+7B0h+var_648], r10
 * 0000000140C7611C: mov     rax, rbx
 * 0000000140C7611F: mov     [rbp+7B0h+var_63E], r10w
 * 0000000140C76127: and     rax, rcx
 * 0000000140C7612A: mov     [rbp+7B0h+var_620], r11d
 * 0000000140C76131: add     rax, 1FFFh
 * 0000000140C76137: shr     rax, 0Ch
 * 0000000140C7613B: add     ax, r9w
 * 0000000140C7613F: shl     ax, 3
 * 0000000140C76143: mov     [rbp+7B0h+var_640], ax
 * 0000000140C7614A: mov     rax, rbx
 * 0000000140C7614D: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140C76153: mov     [rbp+7B0h+var_628], rax
 * 0000000140C7615A: mov     eax, ebx
 * 0000000140C7615C: and     eax, ecx
 * 0000000140C7615E: mov     [rbp+7B0h+var_61C], eax
 * 0000000140C76164: test    r12d, r12d
 * 0000000140C76167: jz      loc_140C76315
 * 0000000140C7616D: mov     rax, [r14+240h]
 * 0000000140C76174: lea     rcx, [rbp+7B0h+var_648]
 * 0000000140C7617B: mov     rdx, rdi
 * 0000000140C7617E: call    KeGuardDispatchICall
 * 0000000140C76183: xor     r10d, r10d
 * 0000000140C76186: test    eax, eax
 * 0000000140C76188: jns     loc_140C7632F
 * 0000000140C7618E: cmp     eax, 0C0000005h
 * 0000000140C76193: jnz     loc_140C762DA
 * 0000000140C76199: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C7619E: mov     eax, [rcx+20h]
 * 0000000140C761A1: test    al, 4
 * 0000000140C761A3: jz      short loc_140C761AF
 * 0000000140C761A5: cmp     [r15+24h], r10d
 * 0000000140C761A9: jge     loc_140C762DA
 * 0000000140C761AF: mov     r8d, 1
 * 0000000140C761B5: cmp     [r14+918h], r10d
 * 0000000140C761BC: jnz     loc_140C762E0
 * 0000000140C761C2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C761CC: add     rax, r14
 * 0000000140C761CF: mov     [r14+920h], rax
 * 0000000140C761D6: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C761E0: add     rax, rcx
 * 0000000140C761E3: mov     [r14+928h], rax
 * 0000000140C761EA: movsxd  rax, dword ptr [rcx]
 * 0000000140C761ED: mov     [r14+930h], rax
 * 0000000140C761F4: mov     [r14+938h], rbx
 * 0000000140C761FB: mov     [r14+918h], r8d
 * 0000000140C76202: mov     ecx, [r14+9D8h]
 * 0000000140C76209: bt      ecx, 1Dh
 * 0000000140C7620D: jb      loc_140C762E0
 * 0000000140C76213: test    dword ptr [r14+9DCh], 200000h
 * 0000000140C7621E: jz      loc_140C762E0
 * 0000000140C76224: test    r8b, cl
 * 0000000140C76227: jz      loc_140C762E0
 * 0000000140C7622D: mov     ecx, [r14+0A74h]
 * 0000000140C76234: mov     eax, [r14+804h]
 * 0000000140C7623B: mov     r10, [r14+838h]
 * 0000000140C76242: sub     eax, ecx
 * 0000000140C76244: mov     r8, [r14+0A78h]
 * 0000000140C7624B: lea     rdx, [rcx+r14]
 * 0000000140C7624F: mov     ecx, eax
 * 0000000140C76251: shr     rcx, 3
 * 0000000140C76255: lea     r9, [rdx+rcx*8]
 * 0000000140C76259: jmp     short loc_140C7627C
 * 0000000140C7625B: xor     [rdx], r8
 * 0000000140C7625E: mov     rax, [rdx]
 * 0000000140C76261: movzx   ecx, r8b
 * 0000000140C76265: xor     rax, r10
 * 0000000140C76268: and     ecx, 3Fh
 * 0000000140C7626B: ror     r8, cl
 * 0000000140C7626E: add     r8, rax
 * 0000000140C76271: xor     r8, 0F05h
 * 0000000140C76278: add     rdx, 8
 * 0000000140C7627C: cmp     rdx, r9
 * 0000000140C7627F: jnz     short loc_140C7625B
 * 0000000140C76281: btr     dword ptr [r14+9DCh], 15h
 * 0000000140C7628A: cmp     r8, [r14+0A80h]
 * 0000000140C76291: jz      short loc_140C762D7
 * 0000000140C76293: mov     rax, [r14+588h]
 * 0000000140C7629A: mov     ecx, [r14+804h]
 * 0000000140C762A1: mov     [rax], r14
 * 0000000140C762A4: mov     [rax+10h], ecx
 * 0000000140C762A7: xor     eax, eax
 * 0000000140C762A9: mov     rcx, [r14+0A80h]
 * 0000000140C762B0: cmp     [r14+918h], eax
 * 0000000140C762B7: jnz     short loc_140C762C7
 * 0000000140C762B9: mov     rax, [r14+588h]
 * 0000000140C762C0: xor     rcx, r8
 * 0000000140C762C3: mov     [rax+18h], rcx
 * 0000000140C762C7: xor     edx, edx
 * 0000000140C762C9: mov     r9d, 100h
 * 0000000140C762CF: mov     rcx, r14
 * 0000000140C762D2: call    sub_140C7F03C
 * 0000000140C762D7: xor     r10d, r10d
 * 0000000140C762DA: mov     r8d, 1
 * 0000000140C762E0: mov     r11d, 1000h
 * 0000000140C762E6: mov     r9d, 6
 * 0000000140C762EC: mov     ecx, dword ptr [rsp+8B0h+var_848]
 * 0000000140C762F0: add     r13d, r11d
 * 0000000140C762F3: mov     eax, [r14+84Ch]
 * 0000000140C762FA: cmp     r13d, ecx
 * 0000000140C762FD: jnb     loc_140C763CC
 * 0000000140C76303: cmp     [r14+848h], eax
 * 0000000140C7630A: jl      loc_140C7609D
 * 0000000140C76310: jmp     loc_140C75F43
 * 0000000140C76315: mov     rax, [r14+458h]
 * 0000000140C7631C: mov     rcx, rbx
 * 0000000140C7631F: call    KeGuardDispatchICall
 * 0000000140C76324: shr     rax, 0Ch
 * 0000000140C76328: mov     [rbp+7B0h+var_618], rax
 * 0000000140C7632F: mov     eax, 1
 * 0000000140C76334: add     [r14+860h], eax
 * 0000000140C7633B: mov     eax, [rbp+7B0h+var_61C]
 * 0000000140C76341: add     rax, [rbp+7B0h+var_628]
 * 0000000140C76348: mov     [r14+0AB0h], rax
 * 0000000140C7634F: mov     rax, [rsp+8B0h+var_860]
 * 0000000140C76354: mov     [r14+0AA8h], rax
 * 0000000140C7635B: mov     rbx, cr8
 * 0000000140C7635F: mov     cr8, rdi
 * 0000000140C76363: mov     rdx, [r14+5F0h]
 * 0000000140C7636A: lea     rcx, [r14+0A88h]
 * 0000000140C76371: xor     r8d, r8d
 * 0000000140C76374: mov     edx, [rdx]
 * 0000000140C76376: call    RtlInitMinimalBarrier
 * 0000000140C7637B: mov     ecx, [r14+814h]
 * 0000000140C76382: mov     rdx, r14
 * 0000000140C76385: mov     rax, [r14+450h]
 * 0000000140C7638C: add     rcx, r14
 * 0000000140C7638F: call    KeGuardDispatchICall
 * 0000000140C76394: mov     r14, rax
 * 0000000140C76397: movzx   eax, bl
 * 0000000140C7639A: mov     cr8, rax
 * 0000000140C7639E: xor     r10d, r10d
 * 0000000140C763A1: test    r12d, r12d
 * 0000000140C763A4: jz      short loc_140C763BC
 * 0000000140C763A6: mov     rax, [r14+460h]
 * 0000000140C763AD: lea     rcx, [rbp+7B0h+var_648]
 * 0000000140C763B4: call    KeGuardDispatchICall
 * 0000000140C763B9: xor     r10d, r10d
 * 0000000140C763BC: add     dword ptr [r14+848h], 14000h
 * 0000000140C763C7: jmp     loc_140C762DA
 * 0000000140C763CC: cmp     [r14+848h], eax
 * 0000000140C763D3: jge     loc_140C75F43
 * 0000000140C763D9: jmp     loc_140C75F34
 * 0000000140C763DE: mov     [r14+844h], r13d
 * 0000000140C763E5: jmp     loc_140C6A3EF
 * 0000000140C763EA: cmp     [rsi+844h], r12d
 * 0000000140C763F1: jnz     loc_140C765E0
 * 0000000140C763F7: mov     r14, [r13+8]
 * 0000000140C763FB: mov     r8d, [r13+10h]
 * 0000000140C763FF: mov     r9, r14
 * 0000000140C76402: add     [rsi+848h], r8d
 * 0000000140C76409: mov     rax, r14
 * 0000000140C7640C: mov     r10d, [rsi+834h]
 * 0000000140C76413: mov     r15, [rsi+838h]
 * 0000000140C7641A: lea     rcx, [r14+r8]
 * 0000000140C7641E: cmp     r14, rcx
 * 0000000140C76421: jnb     short loc_140C76433
 * 0000000140C76423: mov     edx, 40h ; '@'
 * 0000000140C76428: prefetchnta byte ptr [rax]
 * 0000000140C7642B: add     rax, rdx
 * 0000000140C7642E: cmp     rax, rcx
 * 0000000140C76431: jb      short loc_140C76428
 * 0000000140C76433: mov     r11d, r8d
 * 0000000140C76436: mov     rbx, r15
 * 0000000140C76439: shr     r11d, 7
 * 0000000140C7643D: test    r11d, r11d
 * 0000000140C76440: jz      short loc_140C764B2
 * 0000000140C76442: mov     edi, 1
 * 0000000140C76447: mov     rsi, 7010008004002001h
 * 0000000140C76451: mov     eax, 8
 * 0000000140C76456: xor     rbx, [r9]
 * 0000000140C76459: mov     ecx, r10d
 * 0000000140C7645C: rol     rbx, cl
 * 0000000140C7645F: xor     rbx, [r9+8]
 * 0000000140C76463: add     r9, 10h
 * 0000000140C76467: rol     rbx, cl
 * 0000000140C7646A: sub     rax, rdi
 * 0000000140C7646D: jnz     short loc_140C76456
 * 0000000140C7646F: mov     rcx, r9
 * 0000000140C76472: sub     rcx, r14
 * 0000000140C76475: xor     rcx, r15
 * 0000000140C76478: mov     rax, rcx
 * 0000000140C7647B: rol     rax, 11h
 * 0000000140C7647F: xor     rcx, rax
 * 0000000140C76482: mov     rax, rsi
 * 0000000140C76485: mul     rcx
 * 0000000140C76488: mov     [rbp+7B0h+var_3B0], rdx
 * 0000000140C7648F: xor     rdx, rax
 * 0000000140C76492: xor     r10d, edx
 * 0000000140C76495: mov     edx, 0FFFFFFFFh
 * 0000000140C7649A: and     r10d, 3Fh
 * 0000000140C7649E: cmovz   r10d, edi
 * 0000000140C764A2: add     r11d, edx
 * 0000000140C764A5: jnz     short loc_140C76451
 * 0000000140C764A7: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C764AC: lea     edi, [r11+2]
 * 0000000140C764B0: jmp     short loc_140C764B7
 * 0000000140C764B2: mov     edx, 0FFFFFFFFh
 * 0000000140C764B7: and     r8d, 7Fh
 * 0000000140C764BB: mov     r15d, 1
 * 0000000140C764C1: cmp     r8d, 8
 * 0000000140C764C5: jb      short loc_140C764E4
 * 0000000140C764C7: mov     eax, r8d
 * 0000000140C764CA: shr     rax, 3
 * 0000000140C764CE: xor     rbx, [r9]
 * 0000000140C764D1: mov     ecx, r10d
 * 0000000140C764D4: rol     rbx, cl
 * 0000000140C764D7: add     r9, 8
 * 0000000140C764DB: add     r8d, 0FFFFFFF8h
 * 0000000140C764DF: sub     rax, r15
 * 0000000140C764E2: jnz     short loc_140C764CE
 * 0000000140C764E4: test    r8d, r8d
 * 0000000140C764E7: jz      short loc_140C764FE
 * 0000000140C764E9: movzx   eax, byte ptr [r9]
 * 0000000140C764ED: mov     ecx, r10d
 * 0000000140C764F0: xor     rbx, rax
 * 0000000140C764F3: add     r9, r15
 * 0000000140C764F6: rol     rbx, cl
 * 0000000140C764F9: add     r8d, edx
 * 0000000140C764FC: jnz     short loc_140C764E9
 * 0000000140C764FE: mov     rax, rbx
 * 0000000140C76501: jmp     short loc_140C76505
 * 0000000140C76503: xor     ebx, eax
 * 0000000140C76505: shr     rax, 1Fh
 * 0000000140C76509: test    rax, rax
 * 0000000140C7650C: jnz     short loc_140C76503
 * 0000000140C7650E: btr     ebx, 1Fh
 * 0000000140C76512: xor     r11d, r11d
 * 0000000140C76515: cmp     ebx, [r13+14h]
 * 0000000140C76519: jz      loc_140C768CB
 * 0000000140C7651F: cmp     [r13+0], r11d
 * 0000000140C76523: jnz     short loc_140C7652D
 * 0000000140C76525: cmp     [r13+18h], r11d
 * 0000000140C76529: cmovnz  r12d, r15d
 * 0000000140C7652D: mov     ecx, [r13+10h]
 * 0000000140C76531: mov     rdx, [r13+8]
 * 0000000140C76535: test    rcx, rcx
 * 0000000140C76538: jz      loc_140C7677F
 * 0000000140C7653E: mov     eax, [rsi+9DCh]
 * 0000000140C76544: mov     r8d, 40h ; '@'
 * 0000000140C7654A: test    r8b, al
 * 0000000140C7654D: jz      loc_140C7677F
 * 0000000140C76553: mov     r15, cr8
 * 0000000140C76557: mov     r14, rdx
 * 0000000140C7655A: lea     rax, [rcx-1]
 * 0000000140C7655E: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140C76565: add     rax, rdx
 * 0000000140C76568: or      rax, 0FFFh
 * 0000000140C7656E: mov     [rbp+7B0h+var_820], rax
 * 0000000140C76572: lea     r13, [r14-1]
 * 0000000140C76576: mov     cr8, rdi
 * 0000000140C7657A: mov     rax, [rsi+468h]
 * 0000000140C76581: xor     edx, edx
 * 0000000140C76583: mov     rcx, r14
 * 0000000140C76586: call    KeGuardDispatchICall
 * 0000000140C7658B: xor     r11d, r11d
 * 0000000140C7658E: cmp     eax, 0C000022Dh
 * 0000000140C76593: jnz     short loc_140C765B4
 * 0000000140C76595: test    r12d, r12d
 * 0000000140C76598: jnz     loc_140C76772
 * 0000000140C7659E: lea     eax, [r11+1]
 * 0000000140C765A2: cmp     r15b, al
 * 0000000140C765A5: ja      short loc_140C765BC
 * 0000000140C765A7: movzx   eax, r15b
 * 0000000140C765AB: mov     cr8, rax
 * 0000000140C765AF: mov     al, [r14]
 * 0000000140C765B2: jmp     short loc_140C76576
 * 0000000140C765B4: test    eax, eax
 * 0000000140C765B6: js      loc_140C76772
 * 0000000140C765BC: mov     r11d, 1000h
 * 0000000140C765C2: add     r14, r11
 * 0000000140C765C5: add     r13, r11
 * 0000000140C765C8: cmp     r13, [rbp+7B0h+var_820]
 * 0000000140C765CC: jnz     short loc_140C7657A
 * 0000000140C765CE: movzx   eax, r15b
 * 0000000140C765D2: mov     cr8, rax
 * 0000000140C765D6: mov     r10d, [rsp+8B0h+var_850]
 * 0000000140C765DB: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C765E0: xor     r11d, r11d
 * 0000000140C765E3: mov     r9, [r13+8]
 * 0000000140C765E7: mov     r8d, [rsi+844h]
 * 0000000140C765EE: mov     ecx, [r13+10h]
 * 0000000140C765F2: mov     [rbp+7B0h+var_828], r9
 * 0000000140C765F6: lea     rax, [r8+r8*2]
 * 0000000140C765FA: lea     r14, [r9+rax*4]
 * 0000000140C765FE: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C76608: mul     rcx
 * 0000000140C7660B: mov     [rsp+8B0h+var_840], r14
 * 0000000140C76610: shr     rdx, 3
 * 0000000140C76614: lea     rax, [rdx+rdx*2]
 * 0000000140C76618: lea     r12, [r9+rax*4]
 * 0000000140C7661C: mov     [rbp+7B0h+var_810], r12
 * 0000000140C76620: lea     r12, ds:30h[r8*4]
 * 0000000140C76628: mov     rax, [rbp+7B0h+var_810]
 * 0000000140C7662C: add     r12, r13
 * 0000000140C7662F: mov     [rsp+8B0h+var_858], r12
 * 0000000140C76634: cmp     r14, rax
 * 0000000140C76637: jz      loc_140C76EDA
 * 0000000140C7663D: cmp     [r12], r11d
 * 0000000140C76641: jl      loc_140C76DF4
 * 0000000140C76647: mov     eax, [r14]
 * 0000000140C7664A: mov     ebx, [r14+4]
 * 0000000140C7664E: mov     r15d, eax
 * 0000000140C76651: add     r15, [r13+20h]
 * 0000000140C76655: sub     ebx, eax
 * 0000000140C76657: mov     [rbp+7B0h+var_820], r15
 * 0000000140C7665B: cmp     r10d, 2Bh ; '+'
 * 0000000140C7665F: jz      loc_140C768EB
 * 0000000140C76665: add     [rsi+848h], ebx
 * 0000000140C7666B: mov     r8, r15
 * 0000000140C7666E: mov     r10d, [rsi+834h]
 * 0000000140C76675: mov     rax, r15
 * 0000000140C76678: mov     r11, [rsi+838h]
 * 0000000140C7667F: mov     ecx, ebx
 * 0000000140C76681: add     rcx, r15
 * 0000000140C76684: cmp     r15, rcx
 * 0000000140C76687: jnb     short loc_140C76699
 * 0000000140C76689: mov     edx, 40h ; '@'
 * 0000000140C7668E: prefetchnta byte ptr [rax]
 * 0000000140C76691: add     rax, rdx
 * 0000000140C76694: cmp     rax, rcx
 * 0000000140C76697: jb      short loc_140C7668E
 * 0000000140C76699: mov     r9d, ebx
 * 0000000140C7669C: mov     r13, r11
 * 0000000140C7669F: shr     r9d, 7
 * 0000000140C766A3: test    r9d, r9d
 * 0000000140C766A6: jz      short loc_140C7671C
 * 0000000140C766A8: mov     edi, 1
 * 0000000140C766AD: mov     rsi, 7010008004002001h
 * 0000000140C766B7: mov     r12d, 0FFFFFFFFh
 * 0000000140C766BD: mov     eax, 8
 * 0000000140C766C2: xor     r13, [r8]
 * 0000000140C766C5: mov     ecx, r10d
 * 0000000140C766C8: rol     r13, cl
 * 0000000140C766CB: xor     r13, [r8+8]
 * 0000000140C766CF: add     r8, 10h
 * 0000000140C766D3: rol     r13, cl
 * 0000000140C766D6: sub     rax, rdi
 * 0000000140C766D9: jnz     short loc_140C766C2
 * 0000000140C766DB: mov     rcx, r8
 * 0000000140C766DE: sub     rcx, r15
 * 0000000140C766E1: xor     rcx, r11
 * 0000000140C766E4: mov     rax, rcx
 * 0000000140C766E7: rol     rax, 11h
 * 0000000140C766EB: xor     rcx, rax
 * 0000000140C766EE: mov     rax, rsi
 * 0000000140C766F1: mul     rcx
 * 0000000140C766F4: mov     [rbp+7B0h+var_3A8], rdx
 * 0000000140C766FB: xor     rdx, rax
 * 0000000140C766FE: xor     r10d, edx
 * 0000000140C76701: and     r10d, 3Fh
 * 0000000140C76705: cmovz   r10d, edi
 * 0000000140C76709: add     r9d, r12d
 * 0000000140C7670C: jnz     short loc_140C766BD
 * 0000000140C7670E: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C76713: lea     edi, [r9+2]
 * 0000000140C76717: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C7671C: mov     edx, ebx
 * 0000000140C7671E: mov     r9d, 1
 * 0000000140C76724: and     edx, 7Fh
 * 0000000140C76727: cmp     edx, 8
 * 0000000140C7672A: jb      short loc_140C76747
 * 0000000140C7672C: mov     eax, edx
 * 0000000140C7672E: shr     rax, 3
 * 0000000140C76732: xor     r13, [r8]
 * 0000000140C76735: mov     ecx, r10d
 * 0000000140C76738: rol     r13, cl
 * 0000000140C7673B: add     r8, 8
 * 0000000140C7673F: add     edx, 0FFFFFFF8h
 * 0000000140C76742: sub     rax, r9
 * 0000000140C76745: jnz     short loc_140C76732
 * 0000000140C76747: xor     r11d, r11d
 * 0000000140C7674A: test    edx, edx
 * 0000000140C7674C: jz      short loc_140C7676A
 * 0000000140C7674E: mov     edi, 0FFFFFFFFh
 * 0000000140C76753: movzx   eax, byte ptr [r8]
 * 0000000140C76757: mov     ecx, r10d
 * 0000000140C7675A: xor     r13, rax
 * 0000000140C7675D: add     r8, r9
 * 0000000140C76760: rol     r13, cl
 * 0000000140C76763: add     edx, edi
 * 0000000140C76765: jnz     short loc_140C76753
 * 0000000140C76767: lea     edi, [rdx+2]
 * 0000000140C7676A: mov     rax, r13
 * 0000000140C7676D: jmp     loc_140C768D8
 * 0000000140C76772: movzx   eax, r15b
 * 0000000140C76776: mov     cr8, rax
 * 0000000140C7677A: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C7677F: mov     eax, [r13+14h]
 * 0000000140C76783: cmp     [rsi+918h], r11d
 * 0000000140C7678A: jnz     short loc_140C7679C
 * 0000000140C7678C: mov     ecx, ebx
 * 0000000140C7678E: xor     rcx, rax
 * 0000000140C76791: mov     rax, [rsi+588h]
 * 0000000140C76798: mov     [rax+18h], rcx
 * 0000000140C7679C: mov     rcx, [r13+8]
 * 0000000140C767A0: cmp     [rsi+918h], r11d
 * 0000000140C767A7: jnz     loc_140C768CB
 * 0000000140C767AD: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C767B7: mov     r15d, 1
 * 0000000140C767BD: add     rax, rsi
 * 0000000140C767C0: mov     [rsi+920h], rax
 * 0000000140C767C7: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C767D1: add     rax, r13
 * 0000000140C767D4: mov     [rsi+928h], rax
 * 0000000140C767DB: movsxd  rax, dword ptr [r13+0]
 * 0000000140C767DF: mov     [rsi+930h], rax
 * 0000000140C767E6: mov     [rsi+938h], rcx
 * 0000000140C767ED: mov     [rsi+918h], r15d
 * 0000000140C767F4: mov     ecx, [rsi+9D8h]
 * 0000000140C767FA: bt      ecx, 1Dh
 * 0000000140C767FE: jb      loc_140C768CB
 * 0000000140C76804: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7680E: jz      loc_140C768CB
 * 0000000140C76814: test    r15b, cl
 * 0000000140C76817: jz      loc_140C768CB
 * 0000000140C7681D: mov     ecx, [rsi+0A74h]
 * 0000000140C76823: mov     eax, [rsi+804h]
 * 0000000140C76829: mov     r10, [rsi+838h]
 * 0000000140C76830: sub     eax, ecx
 * 0000000140C76832: mov     r8, [rsi+0A78h]
 * 0000000140C76839: lea     rdx, [rcx+rsi]
 * 0000000140C7683D: mov     ecx, eax
 * 0000000140C7683F: shr     rcx, 3
 * 0000000140C76843: lea     r9, [rdx+rcx*8]
 * 0000000140C76847: jmp     short loc_140C7686A
 * 0000000140C76849: xor     [rdx], r8
 * 0000000140C7684C: mov     rax, [rdx]
 * 0000000140C7684F: movzx   ecx, r8b
 * 0000000140C76853: xor     rax, r10
 * 0000000140C76856: and     ecx, 3Fh
 * 0000000140C76859: ror     r8, cl
 * 0000000140C7685C: add     r8, rax
 * 0000000140C7685F: xor     r8, 0F05h
 * 0000000140C76866: add     rdx, 8
 * 0000000140C7686A: cmp     rdx, r9
 * 0000000140C7686D: jnz     short loc_140C76849
 * 0000000140C7686F: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C76877: cmp     r8, [rsi+0A80h]
 * 0000000140C7687E: jz      short loc_140C768CB
 * 0000000140C76880: mov     ecx, [rsi+804h]
 * 0000000140C76886: mov     rax, [rsi+588h]
 * 0000000140C7688D: mov     [rax], rsi
 * 0000000140C76890: mov     [rax+10h], ecx
 * 0000000140C76893: mov     rcx, [rsi+0A80h]
 * 0000000140C7689A: cmp     [rsi+918h], r11d
 * 0000000140C768A1: jnz     short loc_140C768B1
 * 0000000140C768A3: mov     rax, [rsi+588h]
 * 0000000140C768AA: xor     rcx, r8
 * 0000000140C768AD: mov     [rax+18h], rcx
 * 0000000140C768B1: xor     edx, edx
 * 0000000140C768B3: mov     r9d, 100h
 * 0000000140C768B9: mov     rcx, rsi
 * 0000000140C768BC: call    sub_140C7F03C
 * 0000000140C768C1: mov     r10d, [rsp+8B0h+var_850]
 * 0000000140C768C6: jmp     loc_140C765E0
 * 0000000140C768CB: mov     r10d, [rsp+8B0h+var_850]
 * 0000000140C768D0: jmp     loc_140C765E3
 * 0000000140C768D5: xor     r13d, eax
 * 0000000140C768D8: shr     rax, 1Fh
 * 0000000140C768DC: test    rax, rax
 * 0000000140C768DF: jnz     short loc_140C768D5
 * 0000000140C768E1: btr     r13d, 1Fh
 * 0000000140C768E6: jmp     loc_140C76C56
 * 0000000140C768EB: mov     r8d, ebx
 * 0000000140C768EE: mov     rdx, r15
 * 0000000140C768F1: mov     rcx, rsi
 * 0000000140C768F4: call    sub_140C7F338
 * 0000000140C768F9: mov     r13d, eax
 * 0000000140C768FC: xor     r11d, r11d
 * 0000000140C768FF: mov     eax, [rsi+848h]
 * 0000000140C76905: lea     ecx, [rax+rbx*8]
 * 0000000140C76908: mov     [rsi+848h], ecx
 * 0000000140C7690E: test    dword ptr [rsi+9DCh], 800h
 * 0000000140C76918: jz      loc_140C76C56
 * 0000000140C7691E: mov     al, [r15-1]
 * 0000000140C76922: cmp     byte ptr [r15-6], 4Ch ; 'L'
 * 0000000140C76927: jnz     loc_140C76B2A
 * 0000000140C7692D: cmp     byte ptr [r15-5], 87h
 * 0000000140C76932: jnz     loc_140C76B2A
 * 0000000140C76938: cmp     [r15-4], r11b
 * 0000000140C7693C: jnz     loc_140C76B2A
 * 0000000140C76942: cmp     byte ptr [r15-3], 98h
 * 0000000140C76947: jnz     loc_140C76B2A
 * 0000000140C7694D: cmp     byte ptr [r15-2], 0C3h
 * 0000000140C76952: jnz     loc_140C76B2A
 * 0000000140C76958: cmp     al, 90h
 * 0000000140C7695A: jz      short loc_140C76964
 * 0000000140C7695C: cmp     al, 0F1h
 * 0000000140C7695E: jnz     loc_140C76B2A
 * 0000000140C76964: mov     rcx, [rsi+4D8h]
 * 0000000140C7696B: cli
 * 0000000140C7696C: mov     eax, [rsi+9D8h]
 * 0000000140C76972: shr     eax, 9
 * 0000000140C76975: and     eax, 1Fh
 * 0000000140C76978: lock bts [rcx], eax
 * 0000000140C7697C: jnb     short loc_140C76983
 * 0000000140C7697E: sti
 * 0000000140C7697F: pause
 * 0000000140C76981: jmp     short loc_140C7696B
 * 0000000140C76983: mov     rdx, [rsi+900h]
 * 0000000140C7698A: mov     r8d, 26h ; '&'
 * 0000000140C76990: mov     ecx, 130h
 * 0000000140C76995: mov     rax, rdx
 * 0000000140C76998: lea     r9d, [r8-25h]
 * 0000000140C7699C: mov     [rax], r11
 * 0000000140C7699F: add     ecx, 0FFFFFFF8h
 * 0000000140C769A2: add     rax, 8
 * 0000000140C769A6: sub     r8, r9
 * 0000000140C769A9: jnz     short loc_140C7699C
 * 0000000140C769AB: test    ecx, ecx
 * 0000000140C769AD: jz      short loc_140C769C0
 * 0000000140C769AF: mov     r8d, 0FFFFFFFFh
 * 0000000140C769B5: mov     [rax], r11b
 * 0000000140C769B8: add     rax, r9
 * 0000000140C769BB: add     ecx, r8d
 * 0000000140C769BE: jnz     short loc_140C769B5
 * 0000000140C769C0: movups  xmm0, xmmword ptr [rsi+868h]
 * 0000000140C769C7: mov     eax, 12Fh
 * 0000000140C769CC: movdqu  xmmword ptr [rdx+10h], xmm0
 * 0000000140C769D1: movups  xmm1, xmmword ptr [rsi+878h]
 * 0000000140C769D8: movdqu  xmmword ptr [rdx+20h], xmm1
 * 0000000140C769DD: movups  xmm0, xmmword ptr [rsi+888h]
 * 0000000140C769E4: movdqu  xmmword ptr [rdx+120h], xmm0
 * 0000000140C769EC: mov     word ptr [rbp+7B0h+var_5E0], ax
 * 0000000140C769F3: lea     rax, [rsi+8ACh]
 * 0000000140C769FA: mov     [rbp+1D2h], rdx
 * 0000000140C76A01: mov     rcx, rax
 * 0000000140C76A04: mov     [rdx+10h], ax
 * 0000000140C76A08: shr     rcx, 10h
 * 0000000140C76A0C: mov     [rbp+7B0h+var_3A0], rax
 * 0000000140C76A13: shr     rax, 20h
 * 0000000140C76A17: mov     [rdx+16h], cx
 * 0000000140C76A1B: mov     [rdx+18h], eax
 * 0000000140C76A1E: sidt    fword ptr [rbp+7B0h+var_510]
 * 0000000140C76A25: lidt    fword ptr [rbp+7B0h+var_5E0]
 * 0000000140C76A2C: mov     byte ptr [r15-1], 0F1h
 * 0000000140C76A31: mov     al, [r15-1]
 * 0000000140C76A35: cmp     al, 0F1h
 * 0000000140C76A37: jnz     loc_140C76AE3
 * 0000000140C76A3D: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C76A47: jnz     short loc_140C76A8B
 * 0000000140C76A49: mov     rdx, gs:20h
 * 0000000140C76A52: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C76A5C: mov     rax, [rsi+4B8h]
 * 0000000140C76A63: add     rcx, rsi
 * 0000000140C76A66: mov     [rax], rcx
 * 0000000140C76A69: mov     rax, [rsi+4C0h]
 * 0000000140C76A70: mov     [rax], rdx
 * 0000000140C76A73: mov     rax, [rsi+4C8h]
 * 0000000140C76A7A: mov     [rax], r15
 * 0000000140C76A7D: mov     rax, [rsi+4D0h]
 * 0000000140C76A84: mov     qword ptr [rax], 113h
 * 0000000140C76A8B: lea     rax, [r15-1]
 * 0000000140C76A8F: call    KeGuardDispatchICall
 * 0000000140C76A94: xor     r11d, r11d
 * 0000000140C76A97: test    dword ptr [rsi+9DCh], 20000h
 * 0000000140C76AA1: jnz     short loc_140C76AD5
 * 0000000140C76AA3: mov     rax, [rsi+4B8h]
 * 0000000140C76AAA: mov     rcx, 0A3A03F5891C8B4E8h
 * 0000000140C76AB4: mov     [rax], rcx
 * 0000000140C76AB7: mov     rax, [rsi+4C0h]
 * 0000000140C76ABE: mov     [rax], r11
 * 0000000140C76AC1: mov     rax, [rsi+4C8h]
 * 0000000140C76AC8: mov     [rax], r11
 * 0000000140C76ACB: mov     rax, [rsi+4D0h]
 * 0000000140C76AD2: mov     [rax], r11
 * 0000000140C76AD5: mov     al, [r15-1]
 * 0000000140C76AD9: mov     r9d, 1
 * 0000000140C76ADF: cmp     al, 0F1h
 * 0000000140C76AE1: jz      short loc_140C76AE8
 * 0000000140C76AE3: mov     r8d, r11d
 * 0000000140C76AE6: jmp     short loc_140C76AFA
 * 0000000140C76AE8: mov     byte ptr [r15-1], 90h
 * 0000000140C76AED: mov     r8d, r9d
 * 0000000140C76AF0: mov     al, [r15-1]
 * 0000000140C76AF4: cmp     al, 90h
 * 0000000140C76AF6: cmovnz  r8d, r11d
 * 0000000140C76AFA: lidt    fword ptr [rbp+7B0h+var_510]
 * 0000000140C76B01: mov     ecx, [rsi+9D8h]
 * 0000000140C76B07: mov     eax, r9d
 * 0000000140C76B0A: mov     rdx, [rsi+4D8h]
 * 0000000140C76B11: shr     ecx, 9
 * 0000000140C76B14: and     ecx, 1Fh
 * 0000000140C76B17: shl     eax, cl
 * 0000000140C76B19: not     eax
 * 0000000140C76B1B: lock and [rdx], eax
 * 0000000140C76B1E: sti
 * 0000000140C76B1F: test    r8d, r8d
 * 0000000140C76B22: jnz     loc_140C76C56
 * 0000000140C76B28: jmp     short loc_140C76B30
 * 0000000140C76B2A: mov     r9d, 1
 * 0000000140C76B30: cmp     [rsi+918h], r11d
 * 0000000140C76B37: jnz     loc_140C76C56
 * 0000000140C76B3D: mov     rcx, [rsp+8B0h+var_860]
 * 0000000140C76B42: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C76B4C: add     rax, rsi
 * 0000000140C76B4F: mov     [rsi+920h], rax
 * 0000000140C76B56: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C76B60: add     rax, rcx
 * 0000000140C76B63: mov     [rsi+928h], rax
 * 0000000140C76B6A: movsxd  rax, dword ptr [rcx]
 * 0000000140C76B6D: mov     [rsi+930h], rax
 * 0000000140C76B74: lea     rax, [r15-6]
 * 0000000140C76B78: mov     [rsi+938h], rax
 * 0000000140C76B7F: mov     [rsi+918h], r9d
 * 0000000140C76B86: mov     ecx, [rsi+9D8h]
 * 0000000140C76B8C: bt      ecx, 1Dh
 * 0000000140C76B90: jb      loc_140C76C56
 * 0000000140C76B96: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C76BA0: jz      loc_140C76C56
 * 0000000140C76BA6: test    r9b, cl
 * 0000000140C76BA9: jz      loc_140C76C56
 * 0000000140C76BAF: mov     ecx, [rsi+0A74h]
 * 0000000140C76BB5: mov     eax, [rsi+804h]
 * 0000000140C76BBB: mov     r10, [rsi+838h]
 * 0000000140C76BC2: sub     eax, ecx
 * 0000000140C76BC4: mov     r8, [rsi+0A78h]
 * 0000000140C76BCB: lea     rdx, [rcx+rsi]
 * 0000000140C76BCF: mov     ecx, eax
 * 0000000140C76BD1: shr     rcx, 3
 * 0000000140C76BD5: lea     r9, [rdx+rcx*8]
 * 0000000140C76BD9: jmp     short loc_140C76BFC
 * 0000000140C76BDB: xor     [rdx], r8
 * 0000000140C76BDE: mov     rax, [rdx]
 * 0000000140C76BE1: movzx   ecx, r8b
 * 0000000140C76BE5: xor     rax, r10
 * 0000000140C76BE8: and     ecx, 3Fh
 * 0000000140C76BEB: ror     r8, cl
 * 0000000140C76BEE: add     r8, rax
 * 0000000140C76BF1: xor     r8, 0F05h
 * 0000000140C76BF8: add     rdx, 8
 * 0000000140C76BFC: cmp     rdx, r9
 * 0000000140C76BFF: jnz     short loc_140C76BDB
 * 0000000140C76C01: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C76C09: cmp     r8, [rsi+0A80h]
 * 0000000140C76C10: jz      short loc_140C76C56
 * 0000000140C76C12: mov     ecx, [rsi+804h]
 * 0000000140C76C18: mov     rax, [rsi+588h]
 * 0000000140C76C1F: mov     [rax], rsi
 * 0000000140C76C22: mov     [rax+10h], ecx
 * 0000000140C76C25: mov     rcx, [rsi+0A80h]
 * 0000000140C76C2C: cmp     [rsi+918h], r11d
 * 0000000140C76C33: jnz     short loc_140C76C43
 * 0000000140C76C35: mov     rax, [rsi+588h]
 * 0000000140C76C3C: xor     rcx, r8
 * 0000000140C76C3F: mov     [rax+18h], rcx
 * 0000000140C76C43: xor     edx, edx
 * 0000000140C76C45: mov     r9d, 100h
 * 0000000140C76C4B: mov     rcx, rsi
 * 0000000140C76C4E: call    sub_140C7F03C
 * 0000000140C76C53: xor     r11d, r11d
 * 0000000140C76C56: mov     eax, [r12]
 * 0000000140C76C5A: btr     eax, 1Fh
 * 0000000140C76C5E: cmp     r13d, eax
 * 0000000140C76C61: jz      loc_140C76DEB
 * 0000000140C76C67: mov     ecx, ebx
 * 0000000140C76C69: test    ebx, ebx
 * 0000000140C76C6B: jz      loc_140C76CF7
 * 0000000140C76C71: mov     eax, [rsi+9DCh]
 * 0000000140C76C77: mov     edx, 40h ; '@'
 * 0000000140C76C7C: test    dl, al
 * 0000000140C76C7E: jz      short loc_140C76CF7
 * 0000000140C76C80: mov     r14, cr8
 * 0000000140C76C84: mov     rbx, r15
 * 0000000140C76C87: lea     r12, [r15-1]
 * 0000000140C76C8B: and     rbx, 0FFFFFFFFFFFFF000h
 * 0000000140C76C92: add     r12, rcx
 * 0000000140C76C95: or      r12, 0FFFh
 * 0000000140C76C9C: lea     r15, [rbx-1]
 * 0000000140C76CA0: mov     cr8, rdi
 * 0000000140C76CA4: mov     rax, [rsi+468h]
 * 0000000140C76CAB: xor     edx, edx
 * 0000000140C76CAD: mov     rcx, rbx
 * 0000000140C76CB0: call    KeGuardDispatchICall
 * 0000000140C76CB5: cmp     eax, 0C000022Dh
 * 0000000140C76CBA: jnz     short loc_140C76CD6
 * 0000000140C76CBC: mov     eax, 1
 * 0000000140C76CC1: cmp     r14b, al
 * 0000000140C76CC4: ja      loc_140C76DC2
 * 0000000140C76CCA: movzx   eax, r14b
 * 0000000140C76CCE: mov     cr8, rax
 * 0000000140C76CD2: mov     al, [rbx]
 * 0000000140C76CD4: jmp     short loc_140C76CA0
 * 0000000140C76CD6: xor     r11d, r11d
 * 0000000140C76CD9: test    eax, eax
 * 0000000140C76CDB: jns     loc_140C76DC5
 * 0000000140C76CE1: movzx   eax, r14b
 * 0000000140C76CE5: mov     cr8, rax
 * 0000000140C76CE9: mov     r15, [rbp+7B0h+var_820]
 * 0000000140C76CED: mov     r14, [rsp+8B0h+var_840]
 * 0000000140C76CF2: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C76CF7: mov     eax, [r12]
 * 0000000140C76CFB: btr     eax, 1Fh
 * 0000000140C76CFF: cmp     [rsi+918h], r11d
 * 0000000140C76D06: jnz     loc_140C76DEB
 * 0000000140C76D0C: mov     ecx, r13d
 * 0000000140C76D0F: xor     rcx, rax
 * 0000000140C76D12: mov     rax, [rsi+588h]
 * 0000000140C76D19: mov     [rax+18h], rcx
 * 0000000140C76D1D: cmp     [rsi+918h], r11d
 * 0000000140C76D24: jnz     loc_140C76DEB
 * 0000000140C76D2A: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C76D2F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C76D39: add     rax, rsi
 * 0000000140C76D3C: mov     [rsi+920h], rax
 * 0000000140C76D43: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C76D4D: add     rax, r13
 * 0000000140C76D50: mov     [rsi+928h], rax
 * 0000000140C76D57: movsxd  rax, dword ptr [r13+0]
 * 0000000140C76D5B: mov     [rsi+930h], rax
 * 0000000140C76D62: mov     [rsi+938h], r15
 * 0000000140C76D69: mov     r15d, 1
 * 0000000140C76D6F: mov     [rsi+918h], r15d
 * 0000000140C76D76: mov     ecx, [rsi+9D8h]
 * 0000000140C76D7C: bt      ecx, 1Dh
 * 0000000140C76D80: jb      short loc_140C76DF0
 * 0000000140C76D82: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C76D8C: jz      short loc_140C76DF0
 * 0000000140C76D8E: test    r15b, cl
 * 0000000140C76D91: jz      short loc_140C76DF0
 * 0000000140C76D93: mov     ecx, [rsi+0A74h]
 * 0000000140C76D99: mov     eax, [rsi+804h]
 * 0000000140C76D9F: mov     r10, [rsi+838h]
 * 0000000140C76DA6: sub     eax, ecx
 * 0000000140C76DA8: mov     r8, [rsi+0A78h]
 * 0000000140C76DAF: lea     rdx, [rcx+rsi]
 * 0000000140C76DB3: mov     ecx, eax
 * 0000000140C76DB5: shr     rcx, 3
 * 0000000140C76DB9: lea     r9, [rdx+rcx*8]
 * 0000000140C76DBD: jmp     loc_140C76E77
 * 0000000140C76DC2: xor     r11d, r11d
 * 0000000140C76DC5: mov     eax, 1000h
 * 0000000140C76DCA: add     rbx, rax
 * 0000000140C76DCD: add     r15, rax
 * 0000000140C76DD0: cmp     r15, r12
 * 0000000140C76DD3: jnz     loc_140C76CA4
 * 0000000140C76DD9: movzx   eax, r14b
 * 0000000140C76DDD: mov     cr8, rax
 * 0000000140C76DE1: mov     r14, [rsp+8B0h+var_840]
 * 0000000140C76DE6: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C76DEB: mov     r13, [rsp+8B0h+var_860]
 * 0000000140C76DF0: mov     rax, [rbp+7B0h+var_810]
 * 0000000140C76DF4: add     r12, 4
 * 0000000140C76DF8: add     r14, 0Ch
 * 0000000140C76DFC: mov     [rsp+8B0h+var_858], r12
 * 0000000140C76E01: mov     [rsp+8B0h+var_840], r14
 * 0000000140C76E06: cmp     r14, rax
 * 0000000140C76E09: jnb     short loc_140C76E26
 * 0000000140C76E0B: mov     eax, [rsi+84Ch]
 * 0000000140C76E11: cmp     [rsi+848h], eax
 * 0000000140C76E17: mov     rax, [rbp+7B0h+var_810]
 * 0000000140C76E1B: mov     r10d, [rsp+8B0h+var_850]
 * 0000000140C76E20: jl      loc_140C7663D
 * 0000000140C76E26: cmp     r14, [rbp+7B0h+var_810]
 * 0000000140C76E2A: jz      loc_140C76EDA
 * 0000000140C76E30: sub     r14, [rbp+7B0h+var_828]
 * 0000000140C76E34: mov     rax, 2AAAAAAAAAAAAAABh
 * 0000000140C76E3E: imul    r14
 * 0000000140C76E41: sar     rdx, 1
 * 0000000140C76E44: mov     rax, rdx
 * 0000000140C76E47: shr     rax, 3Fh
 * 0000000140C76E4B: add     rdx, rax
 * 0000000140C76E4E: xor     r12d, r12d
 * 0000000140C76E51: jmp     loc_140C770F0
 * 0000000140C76E56: xor     [rdx], r8
 * 0000000140C76E59: mov     rax, [rdx]
 * 0000000140C76E5C: movzx   ecx, r8b
 * 0000000140C76E60: xor     rax, r10
 * 0000000140C76E63: and     ecx, 3Fh
 * 0000000140C76E66: ror     r8, cl
 * 0000000140C76E69: add     r8, rax
 * 0000000140C76E6C: xor     r8, 0F05h
 * 0000000140C76E73: add     rdx, 8
 * 0000000140C76E77: cmp     rdx, r9
 * 0000000140C76E7A: jnz     short loc_140C76E56
 * 0000000140C76E7C: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C76E84: cmp     r8, [rsi+0A80h]
 * 0000000140C76E8B: jz      loc_140C76DF0
 * 0000000140C76E91: mov     ecx, [rsi+804h]
 * 0000000140C76E97: mov     rax, [rsi+588h]
 * 0000000140C76E9E: mov     [rax], rsi
 * 0000000140C76EA1: mov     [rax+10h], ecx
 * 0000000140C76EA4: mov     rcx, [rsi+0A80h]
 * 0000000140C76EAB: cmp     [rsi+918h], r11d
 * 0000000140C76EB2: jnz     short loc_140C76EC2
 * 0000000140C76EB4: mov     rax, [rsi+588h]
 * 0000000140C76EBB: xor     rcx, r8
 * 0000000140C76EBE: mov     [rax+18h], rcx
 * 0000000140C76EC2: xor     edx, edx
 * 0000000140C76EC4: mov     r9d, 100h
 * 0000000140C76ECA: mov     rcx, rsi
 * 0000000140C76ECD: call    sub_140C7F03C
 * 0000000140C76ED2: xor     r11d, r11d
 * 0000000140C76ED5: jmp     loc_140C76DF0
 * 0000000140C76EDA: mov     rcx, [rsi+538h]
 * 0000000140C76EE1: mov     rbx, cr8
 * 0000000140C76EE5: mov     eax, 0Fh
 * 0000000140C76EEA: mov     cr8, rax
 * 0000000140C76EEE: mov     rax, [rsi+160h]
 * 0000000140C76EF5: call    KeGuardDispatchICall
 * 0000000140C76EFA: mov     rax, [rsi+620h]
 * 0000000140C76F01: mov     rcx, [rax]
 * 0000000140C76F04: mov     eax, [rcx]
 * 0000000140C76F06: lea     r15, [rcx+10h]
 * 0000000140C76F0A: mov     r14b, [rcx+0Ch]
 * 0000000140C76F0E: lea     rcx, [rax+rax*2]
 * 0000000140C76F12: lea     r12, [r15+rcx*8]
 * 0000000140C76F16: mov     edx, 18h
 * 0000000140C76F1B: lea     r8, [r13+18h]
 * 0000000140C76F1F: mov     r9, r15
 * 0000000140C76F22: mov     rcx, [r9]
 * 0000000140C76F25: add     r9, 8
 * 0000000140C76F29: mov     rax, [r8]
 * 0000000140C76F2C: add     r8, 8
 * 0000000140C76F30: cmp     rcx, rax
 * 0000000140C76F33: jnz     short loc_140C76F62
 * 0000000140C76F35: add     edx, 0FFFFFFF8h
 * 0000000140C76F38: cmp     edx, 8
 * 0000000140C76F3B: jnb     short loc_140C76F22
 * 0000000140C76F3D: test    edx, edx
 * 0000000140C76F3F: jz      short loc_140C76F6B
 * 0000000140C76F41: mov     r11d, 1
 * 0000000140C76F47: mov     cl, [r9]
 * 0000000140C76F4A: add     r9, r11
 * 0000000140C76F4D: mov     al, [r8]
 * 0000000140C76F50: add     r8, r11
 * 0000000140C76F53: cmp     cl, al
 * 0000000140C76F55: jnz     short loc_140C76F62
 * 0000000140C76F57: mov     eax, 0FFFFFFFFh
 * 0000000140C76F5C: add     edx, eax
 * 0000000140C76F5E: jnz     short loc_140C76F47
 * 0000000140C76F60: jmp     short loc_140C76F6B
 * 0000000140C76F62: add     r15, 18h
 * 0000000140C76F66: cmp     r15, r12
 * 0000000140C76F69: jb      short loc_140C76F16
 * 0000000140C76F6B: mov     rcx, [rsi+538h]
 * 0000000140C76F72: mov     rax, [rsi+1A0h]
 * 0000000140C76F79: call    KeGuardDispatchICall
 * 0000000140C76F7E: movzx   eax, bl
 * 0000000140C76F81: mov     cr8, rax
 * 0000000140C76F85: xor     r11d, r11d
 * 0000000140C76F88: lea     edi, [r11+2]
 * 0000000140C76F8C: test    r14b, r14b
 * 0000000140C76F8F: jz      loc_140C7710C
 * 0000000140C76F95: mov     eax, [rsi+9DCh]
 * 0000000140C76F9B: lea     ecx, [rdi+0Eh]
 * 0000000140C76F9E: test    cl, al
 * 0000000140C76FA0: jz      loc_140C770DF
 * 0000000140C76FA6: cmp     [rsi+918h], r11d
 * 0000000140C76FAD: jnz     loc_140C770DF
 * 0000000140C76FB3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C76FBD: add     rax, rsi
 * 0000000140C76FC0: mov     [rsi+920h], rax
 * 0000000140C76FC7: test    r13, r13
 * 0000000140C76FCA: jz      short loc_140C76FDB
 * 0000000140C76FCC: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140C76FD6: add     rcx, r13
 * 0000000140C76FD9: jmp     short loc_140C76FDE
 * 0000000140C76FDB: mov     rcx, r11
 * 0000000140C76FDE: mov     [rsi+928h], rcx
 * 0000000140C76FE5: mov     rcx, rsi
 * 0000000140C76FE8: mov     edx, 930h
 * 0000000140C76FED: test    r13, r13
 * 0000000140C76FF0: jz      short loc_140C76FF8
 * 0000000140C76FF2: movsxd  rax, dword ptr [r13+0]
 * 0000000140C76FF6: jmp     short loc_140C76FFB
 * 0000000140C76FF8: mov     rax, r11
 * 0000000140C76FFB: mov     [rcx+rdx], rax
 * 0000000140C76FFF: mov     ebx, 1
 * 0000000140C77004: mov     [rsi+938h], rbx
 * 0000000140C7700B: mov     [rsi+918h], ebx
 * 0000000140C77011: mov     ecx, [rsi+9D8h]
 * 0000000140C77017: bt      ecx, 1Dh
 * 0000000140C7701B: jb      loc_140C770E4
 * 0000000140C77021: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7702B: jz      loc_140C770E4
 * 0000000140C77031: test    bl, cl
 * 0000000140C77033: jz      loc_140C770E4
 * 0000000140C77039: mov     ecx, [rsi+0A74h]
 * 0000000140C7703F: mov     eax, [rsi+804h]
 * 0000000140C77045: mov     r10, [rsi+838h]
 * 0000000140C7704C: sub     eax, ecx
 * 0000000140C7704E: mov     r8, [rsi+0A78h]
 * 0000000140C77055: lea     rdx, [rcx+rsi]
 * 0000000140C77059: mov     ecx, eax
 * 0000000140C7705B: shr     rcx, 3
 * 0000000140C7705F: lea     r9, [rdx+rcx*8]
 * 0000000140C77063: jmp     short loc_140C77086
 * 0000000140C77065: xor     [rdx], r8
 * 0000000140C77068: mov     rax, [rdx]
 * 0000000140C7706B: movzx   ecx, r8b
 * 0000000140C7706F: xor     rax, r10
 * 0000000140C77072: and     ecx, 3Fh
 * 0000000140C77075: ror     r8, cl
 * 0000000140C77078: add     r8, rax
 * 0000000140C7707B: xor     r8, 0F05h
 * 0000000140C77082: add     rdx, 8
 * 0000000140C77086: cmp     rdx, r9
 * 0000000140C77089: jnz     short loc_140C77065
 * 0000000140C7708B: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C77093: cmp     r8, [rsi+0A80h]
 * 0000000140C7709A: jz      short loc_140C770E4
 * 0000000140C7709C: mov     ecx, [rsi+804h]
 * 0000000140C770A2: mov     rax, [rsi+588h]
 * 0000000140C770A9: mov     [rax], rsi
 * 0000000140C770AC: mov     [rax+10h], ecx
 * 0000000140C770AF: mov     rcx, [rsi+0A80h]
 * 0000000140C770B6: cmp     [rsi+918h], r11d
 * 0000000140C770BD: jnz     short loc_140C770CD
 * 0000000140C770BF: mov     rax, [rsi+588h]
 * 0000000140C770C6: xor     rcx, r8
 * 0000000140C770C9: mov     [rax+18h], rcx
 * 0000000140C770CD: xor     edx, edx
 * 0000000140C770CF: mov     r9d, 100h
 * 0000000140C770D5: mov     rcx, rsi
 * 0000000140C770D8: call    sub_140C7F03C
 * 0000000140C770DD: jmp     short loc_140C770E4
 * 0000000140C770DF: mov     ebx, 1
 * 0000000140C770E4: cmp     [r13+18h], rbx
 * 0000000140C770E8: jnz     short loc_140C77111
 * 0000000140C770EA: xor     r12d, r12d
 * 0000000140C770ED: mov     edx, r12d
 * 0000000140C770F0: mov     ecx, 844h
 * 0000000140C770F5: mov     rax, rsi
 * 0000000140C770F8: mov     [rcx+rax], edx
 * 0000000140C770FB: mov     r11d, 1000h
 * 0000000140C77101: mov     r15d, 1
 * 0000000140C77107: jmp     loc_140C773A3
 * 0000000140C7710C: mov     ebx, 1
 * 0000000140C77111: cmp     r15, r12
 * 0000000140C77114: jnz     short loc_140C770EA
 * 0000000140C77116: xor     r12d, r12d
 * 0000000140C77119: cmp     [rsi+918h], r12d
 * 0000000140C77120: jnz     short loc_140C770ED
 * 0000000140C77122: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C7712C: add     rax, rsi
 * 0000000140C7712F: mov     [rsi+920h], rax
 * 0000000140C77136: test    r13, r13
 * 0000000140C77139: jz      short loc_140C7714A
 * 0000000140C7713B: mov     rcx, 0B3B74BDEE4453415h
 * 0000000140C77145: add     rcx, r13
 * 0000000140C77148: jmp     short loc_140C7714D
 * 0000000140C7714A: mov     rcx, r12
 * 0000000140C7714D: mov     [rsi+928h], rcx
 * 0000000140C77154: mov     rcx, rsi
 * 0000000140C77157: mov     edx, 930h
 * 0000000140C7715C: test    r13, r13
 * 0000000140C7715F: jz      short loc_140C77167
 * 0000000140C77161: movsxd  rax, dword ptr [r13+0]
 * 0000000140C77165: jmp     short loc_140C7716A
 * 0000000140C77167: mov     rax, r12
 * 0000000140C7716A: mov     [rdx+rcx], rax
 * 0000000140C7716E: mov     [rsi+938h], r15
 * 0000000140C77175: mov     [rsi+918h], ebx
 * 0000000140C7717B: mov     ecx, [rsi+9D8h]
 * 0000000140C77181: bt      ecx, 1Dh
 * 0000000140C77185: jb      loc_140C770ED
 * 0000000140C7718B: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C77195: jz      loc_140C770ED
 * 0000000140C7719B: test    bl, cl
 * 0000000140C7719D: jz      loc_140C770ED
 * 0000000140C771A3: mov     ecx, [rsi+0A74h]
 * 0000000140C771A9: mov     eax, [rsi+804h]
 * 0000000140C771AF: mov     r10, [rsi+838h]
 * 0000000140C771B6: sub     eax, ecx
 * 0000000140C771B8: mov     r8, [rsi+0A78h]
 * 0000000140C771BF: lea     rdx, [rcx+rsi]
 * 0000000140C771C3: mov     ecx, eax
 * 0000000140C771C5: shr     rcx, 3
 * 0000000140C771C9: lea     r9, [rdx+rcx*8]
 * 0000000140C771CD: jmp     short loc_140C771F0
 * 0000000140C771CF: xor     [rdx], r8
 * 0000000140C771D2: mov     rax, [rdx]
 * 0000000140C771D5: movzx   ecx, r8b
 * 0000000140C771D9: xor     rax, r10
 * 0000000140C771DC: and     ecx, 3Fh
 * 0000000140C771DF: ror     r8, cl
 * 0000000140C771E2: add     r8, rax
 * 0000000140C771E5: xor     r8, 0F05h
 * 0000000140C771EC: add     rdx, 8
 * 0000000140C771F0: cmp     rdx, r9
 * 0000000140C771F3: jnz     short loc_140C771CF
 * 0000000140C771F5: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C771FD: cmp     r8, [rsi+0A80h]
 * 0000000140C77204: jz      loc_140C770ED
 * 0000000140C7720A: mov     ecx, [rsi+804h]
 * 0000000140C77210: mov     rax, [rsi+588h]
 * 0000000140C77217: mov     [rax], rsi
 * 0000000140C7721A: mov     [rax+10h], ecx
 * 0000000140C7721D: mov     rcx, [rsi+0A80h]
 * 0000000140C77224: cmp     [rsi+918h], r12d
 * 0000000140C7722B: jnz     short loc_140C7723B
 * 0000000140C7722D: mov     rax, [rsi+588h]
 * 0000000140C77234: xor     rcx, r8
 * 0000000140C77237: mov     [rax+18h], rcx
 * 0000000140C7723B: xor     edx, edx
 * 0000000140C7723D: mov     r9d, 100h
 * 0000000140C77243: mov     rcx, rsi
 * 0000000140C77246: call    sub_140C7F03C
 * 0000000140C7724B: jmp     loc_140C770ED
 * 0000000140C77250: mov     edx, 0FFFFFFFFh
 * 0000000140C77255: and     r10d, 7Fh
 * 0000000140C77259: mov     r15d, 1
 * 0000000140C7725F: cmp     r10d, 8
 * 0000000140C77263: jb      short loc_140C77282
 * 0000000140C77265: mov     eax, r10d
 * 0000000140C77268: shr     rax, 3
 * 0000000140C7726C: xor     r8, [r9]
 * 0000000140C7726F: mov     ecx, r11d
 * 0000000140C77272: rol     r8, cl
 * 0000000140C77275: add     r9, 8
 * 0000000140C77279: add     r10d, 0FFFFFFF8h
 * 0000000140C7727D: sub     rax, r15
 * 0000000140C77280: jnz     short loc_140C7726C
 * 0000000140C77282: test    r10d, r10d
 * 0000000140C77285: jz      short loc_140C7729C
 * 0000000140C77287: movzx   eax, byte ptr [r9]
 * 0000000140C7728B: mov     ecx, r11d
 * 0000000140C7728E: xor     r8, rax
 * 0000000140C77291: add     r9, r15
 * 0000000140C77294: rol     r8, cl
 * 0000000140C77297: add     r10d, edx
 * 0000000140C7729A: jnz     short loc_140C77287
 * 0000000140C7729C: mov     rcx, [r13+18h]
 * 0000000140C772A0: cmp     r8, rcx
 * 0000000140C772A3: jz      loc_140C75354
 * 0000000140C772A9: cmp     [rsi+918h], r12d
 * 0000000140C772B0: jnz     short loc_140C772C0
 * 0000000140C772B2: mov     rax, [rsi+588h]
 * 0000000140C772B9: xor     rcx, r8
 * 0000000140C772BC: mov     [rax+18h], rcx
 * 0000000140C772C0: mov     ecx, [r13+20h]
 * 0000000140C772C4: add     rcx, rsi
 * 0000000140C772C7: cmp     [rsi+918h], r12d
 * 0000000140C772CE: jnz     loc_140C75354
 * 0000000140C772D4: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C772DE: add     rax, rsi
 * 0000000140C772E1: mov     [rsi+920h], rax
 * 0000000140C772E8: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C772F2: add     rax, r13
 * 0000000140C772F5: mov     [rsi+928h], rax
 * 0000000140C772FC: movsxd  rax, dword ptr [r13+0]
 * 0000000140C77300: mov     [rsi+930h], rax
 * 0000000140C77307: mov     [rsi+938h], rcx
 * 0000000140C7730E: mov     [rsi+918h], r15d
 * 0000000140C77315: mov     ecx, [rsi+9D8h]
 * 0000000140C7731B: bt      ecx, 1Dh
 * 0000000140C7731F: jb      loc_140C75354
 * 0000000140C77325: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7732F: jz      loc_140C75354
 * 0000000140C77335: test    r15b, cl
 * 0000000140C77338: jz      loc_140C75354
 * 0000000140C7733E: mov     ecx, [rsi+0A74h]
 * 0000000140C77344: mov     eax, [rsi+804h]
 * 0000000140C7734A: mov     r10, [rsi+838h]
 * 0000000140C77351: sub     eax, ecx
 * 0000000140C77353: mov     r8, [rsi+0A78h]
 * 0000000140C7735A: lea     rdx, [rcx+rsi]
 * 0000000140C7735E: mov     ecx, eax
 * 0000000140C77360: shr     rcx, 3
 * 0000000140C77364: lea     r9, [rdx+rcx*8]
 * 0000000140C77368: jmp     short loc_140C7738B
 * 0000000140C7736A: xor     [rdx], r8
 * 0000000140C7736D: mov     rax, [rdx]
 * 0000000140C77370: movzx   ecx, r8b
 * 0000000140C77374: xor     rax, r10
 * 0000000140C77377: and     ecx, 3Fh
 * 0000000140C7737A: ror     r8, cl
 * 0000000140C7737D: add     r8, rax
 * 0000000140C77380: xor     r8, 0F05h
 * 0000000140C77387: add     rdx, 8
 * 0000000140C7738B: cmp     rdx, r9
 * 0000000140C7738E: jnz     short loc_140C7736A
 * 0000000140C77390: jmp     loc_140C6BA4E
 * 0000000140C77395: mov     r11d, 1000h
 * 0000000140C7739B: jmp     loc_140C6A3EF
 * 0000000140C773A0: mov     r15, rcx
 * 0000000140C773A3: mov     ebx, 0FFFFFFFFh
 * 0000000140C773A8: mov     ecx, [rbp+7B0h+var_7C8]
 * 0000000140C773AB: cmp     [rsi+844h], r12d
 * 0000000140C773B2: jz      short loc_140C773B6
 * 0000000140C773B4: add     ecx, ebx
 * 0000000140C773B6: add     ecx, r15d
 * 0000000140C773B9: mov     [rbp+7B0h+var_7C8], ecx
 * 0000000140C773BC: cmp     [rsi+918h], r12d
 * 0000000140C773C3: jnz     short loc_140C773E1
 * 0000000140C773C5: mov     eax, [rsi+84Ch]
 * 0000000140C773CB: cmp     [rsi+848h], eax
 * 0000000140C773D1: jge     short loc_140C773E1
 * 0000000140C773D3: mov     edx, 28h ; '('
 * 0000000140C773D8: lea     r14d, [rdx-23h]
 * 0000000140C773DC: jmp     loc_140C6984F
 * 0000000140C773E1: mov     [rsi+840h], ecx
 * 0000000140C773E7: cmp     [rbp+7B0h+var_7B0], r12d
 * 0000000140C773EB: jz      short loc_140C77457
 * 0000000140C773ED: mov     rcx, gs:20h
 * 0000000140C773F6: mov     rax, [rsi+658h]
 * 0000000140C773FD: mov     rdx, [rax+rcx]
 * 0000000140C77401: lea     rcx, [rbp+7B0h+var_250]
 * 0000000140C77408: mov     rax, [rsi+698h]
 * 0000000140C7740F: add     rdx, [rsi+6B8h]
 * 0000000140C77416: mov     rbx, [rdx+rax]
 * 0000000140C7741A: mov     rax, [rsi+1A8h]
 * 0000000140C77421: call    KeGuardDispatchICall
 * 0000000140C77426: mov     rax, [rsi+448h]
 * 0000000140C7742D: lea     rcx, [rbp+7B0h+var_70]
 * 0000000140C77434: call    KeGuardDispatchICall
 * 0000000140C77439: mov     rax, [rsi+3B0h]
 * 0000000140C77440: mov     rcx, rbx
 * 0000000140C77443: call    KeGuardDispatchICall
 * 0000000140C77448: mov     rax, [rsi+3C0h]
 * 0000000140C7744F: mov     rcx, rbx
 * 0000000140C77452: call    KeGuardDispatchICall
 * 0000000140C77457: mov     eax, [rsi+9D8h]
 * 0000000140C7745D: mov     ecx, 400004h
 * 0000000140C77462: and     eax, ecx
 * 0000000140C77464: cmp     eax, ecx
 * 0000000140C77466: jnz     loc_140C778DB
 * 0000000140C7746C: mov     r10, [rsi+0AB8h]
 * 0000000140C77473: mov     eax, [rsi+9DCh]
 * 0000000140C77479: mov     r14d, [rsi+804h]
 * 0000000140C77480: mov     r11, [rsi+0A40h]
 * 0000000140C77487: mov     r12d, [rsi+828h]
 * 0000000140C7748E: mov     [rbp+7B0h+arg_8], r10
 * 0000000140C77495: test    dil, al
 * 0000000140C77498: jz      short loc_140C774A1
 * 0000000140C7749A: mov     r11, [rsi+5D0h]
 * 0000000140C774A1: mov     rax, [rsi+2D0h]
 * 0000000140C774A8: mov     r9, [rsi+170h]
 * 0000000140C774AF: mov     [rbp+7B0h+var_7A0], rax
 * 0000000140C774B3: mov     rax, [rsi+348h]
 * 0000000140C774BA: mov     [rbp+7B0h+var_7A8], rax
 * 0000000140C774BE: mov     [rbp+7B0h+var_820], r9
 * 0000000140C774C2: rdtsc
 * 0000000140C774C4: shl     rdx, 20h
 * 0000000140C774C8: mov     rbx, 7010008004002001h
 * 0000000140C774D2: or      rax, rdx
 * 0000000140C774D5: mov     rcx, rax
 * 0000000140C774D8: ror     rax, 3
 * 0000000140C774DC: xor     rcx, rax
 * 0000000140C774DF: mov     rax, rbx
 * 0000000140C774E2: mul     rcx
 * 0000000140C774E5: mov     rcx, rdx
 * 0000000140C774E8: xor     rcx, rax
 * 0000000140C774EB: mov     rax, 0ABCC77118461CEFDh
 * 0000000140C774F5: mul     rcx
 * 0000000140C774F8: shr     rdx, 1Ah
 * 0000000140C774FC: sub     rdx, 0Ch
 * 0000000140C77500: imul    r8, rdx, 5F5E100h
 * 0000000140C77507: sub     r8, rcx
 * 0000000140C7750A: mov     [rbp+7B0h+var_700], r8
 * 0000000140C77511: test    dword ptr [rsi+9D8h], 2000000h
 * 0000000140C7751B: jz      loc_140C775A4
 * 0000000140C77521: rdtsc
 * 0000000140C77523: shl     rdx, 20h
 * 0000000140C77527: mov     r13, 0CCCCCCCCCCCCCCCDh
 * 0000000140C77531: or      rax, rdx
 * 0000000140C77534: mov     rcx, rax
 * 0000000140C77537: ror     rax, 3
 * 0000000140C7753B: xor     rcx, rax
 * 0000000140C7753E: mov     rax, rbx
 * 0000000140C77541: mul     rcx
 * 0000000140C77544: mov     rcx, rdx
 * 0000000140C77547: xor     rcx, rax
 * 0000000140C7754A: mov     rax, r13
 * 0000000140C7754D: mul     rcx
 * 0000000140C77550: shr     rdx, 3
 * 0000000140C77554: lea     rax, [rdx+rdx*4]
 * 0000000140C77558: add     rax, rax
 * 0000000140C7755B: sub     rcx, rax
 * 0000000140C7755E: cmp     rcx, rdi
 * 0000000140C77561: jnb     short loc_140C775A4
 * 0000000140C77563: rdtsc
 * 0000000140C77565: shl     rdx, 20h
 * 0000000140C77569: or      rax, rdx
 * 0000000140C7756C: mov     rcx, rax
 * 0000000140C7756F: ror     rax, 3
 * 0000000140C77573: xor     rcx, rax
 * 0000000140C77576: mov     rax, rbx
 * 0000000140C77579: mul     rcx
 * 0000000140C7757C: mov     rcx, rdx
 * 0000000140C7757F: xor     rcx, rax
 * 0000000140C77582: mov     rax, r13
 * 0000000140C77585: mul     rcx
 * 0000000140C77588: shr     rdx, 3
 * 0000000140C7758C: lea     rax, [rdx+rdx*4]
 * 0000000140C77590: add     rax, rax
 * 0000000140C77593: sub     rcx, rax
 * 0000000140C77596: add     rcx, r15
 * 0000000140C77599: imul    rcx, r8
 * 0000000140C7759D: mov     [rbp+7B0h+var_700], rcx
 * 0000000140C775A4: mov     eax, [rsi+9D8h]
 * 0000000140C775AA: xor     r8d, r8d
 * 0000000140C775AD: mov     ebx, r8d
 * 0000000140C775B0: mov     r15d, r8d
 * 0000000140C775B3: lea     ecx, [r8+1]
 * 0000000140C775B7: test    cl, al
 * 0000000140C775B9: lea     edx, [rcx+3Fh]
 * 0000000140C775BC: cmovz   r14d, r12d
 * 0000000140C775C0: test    dl, al
 * 0000000140C775C2: jnz     short loc_140C775CC
 * 0000000140C775C4: mov     r13d, r8d
 * 0000000140C775C7: jmp     loc_140C77697
 * 0000000140C775CC: mov     r13d, ecx
 * 0000000140C775CF: rdtsc
 * 0000000140C775D1: shl     rdx, 20h
 * 0000000140C775D5: mov     r15, rsi
 * 0000000140C775D8: or      rax, rdx
 * 0000000140C775DB: mov     rcx, rax
 * 0000000140C775DE: ror     rax, 3
 * 0000000140C775E2: xor     rcx, rax
 * 0000000140C775E5: mov     rax, 7010008004002001h
 * 0000000140C775EF: mul     rcx
 * 0000000140C775F2: mov     ecx, 15Dh
 * 0000000140C775F7: mov     rbx, rdx
 * 0000000140C775FA: mov     edx, r13d
 * 0000000140C775FD: xor     rbx, rax
 * 0000000140C77600: lea     rax, [rsi+0AE0h]
 * 0000000140C77607: mov     r9, rbx
 * 0000000140C7760A: xor     r15, rbx
 * 0000000140C7760D: xor     [rax], r9
 * 0000000140C77610: lea     rax, [rax-8]
 * 0000000140C77614: ror     r9, cl
 * 0000000140C77617: sub     ecx, edx
 * 0000000140C77619: jnz     short loc_140C7760D
 * 0000000140C7761B: lea     r8, [r12-0AE8h]
 * 0000000140C77623: shr     r8, 3
 * 0000000140C77627: test    r8d, r8d
 * 0000000140C7762A: jz      short loc_140C77669
 * 0000000140C7762C: add     rsi, 0AE0h
 * 0000000140C77633: movsxd  r10, r8d
 * 0000000140C77636: lea     r10, [rsi+r10*8]
 * 0000000140C7763A: mov     rsi, rdx
 * 0000000140C7763D: mov     rdx, [r10]
 * 0000000140C77640: lea     rax, [r15+r15]
 * 0000000140C77644: mov     ecx, r8d
 * 0000000140C77647: lea     r10, [r10-8]
 * 0000000140C7764B: ror     rdx, cl
 * 0000000140C7764E: mov     r15, rdx
 * 0000000140C77651: xor     r15, rax
 * 0000000140C77654: sub     r8d, esi
 * 0000000140C77657: jnz     short loc_140C7763D
 * 0000000140C77659: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C7765E: lea     edi, [r8+2]
 * 0000000140C77662: mov     r10, [rbp+7B0h+arg_8]
 * 0000000140C77669: mov     ecx, r14d
 * 0000000140C7766C: lea     rdx, [rsi+r12]
 * 0000000140C77670: sub     ecx, r12d
 * 0000000140C77673: shr     ecx, 3
 * 0000000140C77676: test    ecx, ecx
 * 0000000140C77678: jz      short loc_140C77693
 * 0000000140C7767A: lea     rdx, [rdx+rcx*8]
 * 0000000140C7767E: mov     rax, r13
 * 0000000140C77681: add     rdx, 0FFFFFFFFFFFFFFF8h
 * 0000000140C77685: xor     [rdx], r9
 * 0000000140C77688: lea     rdx, [rdx-8]
 * 0000000140C7768C: ror     r9, cl
 * 0000000140C7768F: sub     ecx, eax
 * 0000000140C77691: jnz     short loc_140C77685
 * 0000000140C77693: mov     r9, [rbp+7B0h+var_820]
 * 0000000140C77697: test    r10, r10
 * 0000000140C7769A: jz      short loc_140C776B9
 * 0000000140C7769C: mov     rax, [rbp+7B0h+var_7A8]
 * 0000000140C776A0: lea     r8, [rbp+7B0h+var_700]
 * 0000000140C776A7: mov     edx, r14d
 * 0000000140C776AA: mov     [rsp+8B0h+BugCheckParameter4], r10
 * 0000000140C776AF: mov     rcx, rsi
 * 0000000140C776B2: call    KeGuardDispatchICall
 * 0000000140C776B7: jmp     short loc_140C776F1
 * 0000000140C776B9: xor     edx, edx
 * 0000000140C776BB: test    r11, r11
 * 0000000140C776BE: jnz     short loc_140C776D3
 * 0000000140C776C0: lea     r8, [rbp+7B0h+var_700]
 * 0000000140C776C7: xor     ecx, ecx
 * 0000000140C776C9: mov     rax, r9
 * 0000000140C776CC: call    KeGuardDispatchICall
 * 0000000140C776D1: jmp     short loc_140C776F1
 * 0000000140C776D3: lea     rax, [rbp+7B0h+var_700]
 * 0000000140C776DA: xor     r9d, r9d
 * 0000000140C776DD: mov     [rsp+8B0h+BugCheckParameter4], rax
 * 0000000140C776E2: xor     r8d, r8d
 * 0000000140C776E5: mov     rax, [rbp+7B0h+var_7A0]
 * 0000000140C776E9: mov     rcx, r11
 * 0000000140C776EC: call    KeGuardDispatchICall
 * 0000000140C776F1: test    r13d, r13d
 * 0000000140C776F4: mov     r13d, 1
 * 0000000140C776FA: jz      loc_140C778D6
 * 0000000140C77700: mov     r9, rsi
 * 0000000140C77703: lea     rax, [rsi+0AE0h]
 * 0000000140C7770A: xor     r9, rbx
 * 0000000140C7770D: mov     ecx, 15Dh
 * 0000000140C77712: xor     [rax], rbx
 * 0000000140C77715: lea     rax, [rax-8]
 * 0000000140C77719: ror     rbx, cl
 * 0000000140C7771C: sub     ecx, r13d
 * 0000000140C7771F: jnz     short loc_140C77712
 * 0000000140C77721: lea     r8, [r12-0AE8h]
 * 0000000140C77729: shr     r8, 3
 * 0000000140C7772D: test    r8d, r8d
 * 0000000140C77730: jz      short loc_140C7775C
 * 0000000140C77732: movsxd  r10, r8d
 * 0000000140C77735: add     r10, 15Ch
 * 0000000140C7773C: lea     r10, [rsi+r10*8]
 * 0000000140C77740: mov     rdx, [r10]
 * 0000000140C77743: lea     rax, [r9+r9]
 * 0000000140C77747: mov     ecx, r8d
 * 0000000140C7774A: lea     r10, [r10-8]
 * 0000000140C7774E: ror     rdx, cl
 * 0000000140C77751: mov     r9, rdx
 * 0000000140C77754: xor     r9, rax
 * 0000000140C77757: sub     r8d, r13d
 * 0000000140C7775A: jnz     short loc_140C77740
 * 0000000140C7775C: sub     r14d, r12d
 * 0000000140C7775F: lea     rcx, [rsi+r12]
 * 0000000140C77763: shr     r14d, 3
 * 0000000140C77767: xor     r12d, r12d
 * 0000000140C7776A: test    r14d, r14d
 * 0000000140C7776D: jz      short loc_140C7778B
 * 0000000140C7776F: mov     edx, r14d
 * 0000000140C77772: dec     rdx
 * 0000000140C77775: lea     rdx, [rcx+rdx*8]
 * 0000000140C77779: xor     [rdx], rbx
 * 0000000140C7777C: mov     ecx, r14d
 * 0000000140C7777F: ror     rbx, cl
 * 0000000140C77782: lea     rdx, [rdx-8]
 * 0000000140C77786: sub     r14d, r13d
 * 0000000140C77789: jnz     short loc_140C77779
 * 0000000140C7778B: cmp     r9, r15
 * 0000000140C7778E: jz      loc_140C778E1
 * 0000000140C77794: mov     rax, [rsi+588h]
 * 0000000140C7779B: mov     ecx, [rsi+804h]
 * 0000000140C777A1: mov     [rax], rsi
 * 0000000140C777A4: mov     [rax+10h], ecx
 * 0000000140C777A7: cmp     [rsi+918h], r12d
 * 0000000140C777AE: jnz     loc_140C778E1
 * 0000000140C777B4: mov     rax, [rsi+588h]
 * 0000000140C777BB: mov     rcx, r9
 * 0000000140C777BE: xor     rcx, r15
 * 0000000140C777C1: mov     [rax+18h], rcx
 * 0000000140C777C5: cmp     [rsi+918h], r12d
 * 0000000140C777CC: jnz     loc_140C778E1
 * 0000000140C777D2: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C777DC: lea     rax, [rsi+r14]
 * 0000000140C777E0: mov     [rsi+920h], rax
 * 0000000140C777E7: mov     [rsi+928h], r12
 * 0000000140C777EE: mov     qword ptr [rsi+930h], 10Eh
 * 0000000140C777F9: mov     [rsi+938h], r9
 * 0000000140C77800: mov     [rsi+918h], r13d
 * 0000000140C77807: mov     ecx, [rsi+9D8h]
 * 0000000140C7780D: bt      ecx, 1Dh
 * 0000000140C77811: jb      loc_140C778EB
 * 0000000140C77817: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C77821: jz      loc_140C778EB
 * 0000000140C77827: test    r13b, cl
 * 0000000140C7782A: jz      loc_140C778EB
 * 0000000140C77830: mov     ecx, [rsi+0A74h]
 * 0000000140C77836: mov     eax, [rsi+804h]
 * 0000000140C7783C: mov     r10, [rsi+838h]
 * 0000000140C77843: sub     eax, ecx
 * 0000000140C77845: mov     r8, [rsi+0A78h]
 * 0000000140C7784C: lea     rdx, [rcx+rsi]
 * 0000000140C77850: mov     ecx, eax
 * 0000000140C77852: shr     rcx, 3
 * 0000000140C77856: lea     r9, [rdx+rcx*8]
 * 0000000140C7785A: jmp     short loc_140C7787D
 * 0000000140C7785C: xor     [rdx], r8
 * 0000000140C7785F: mov     rax, [rdx]
 * 0000000140C77862: movzx   ecx, r8b
 * 0000000140C77866: xor     rax, r10
 * 0000000140C77869: and     ecx, 3Fh
 * 0000000140C7786C: ror     r8, cl
 * 0000000140C7786F: add     r8, rax
 * 0000000140C77872: xor     r8, 0F05h
 * 0000000140C77879: add     rdx, 8
 * 0000000140C7787D: cmp     rdx, r9
 * 0000000140C77880: jnz     short loc_140C7785C
 * 0000000140C77882: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C7788A: cmp     r8, [rsi+0A80h]
 * 0000000140C77891: jz      short loc_140C778EB
 * 0000000140C77893: mov     ecx, [rsi+804h]
 * 0000000140C77899: mov     rax, [rsi+588h]
 * 0000000140C778A0: mov     [rax], rsi
 * 0000000140C778A3: mov     [rax+10h], ecx
 * 0000000140C778A6: mov     rcx, [rsi+0A80h]
 * 0000000140C778AD: cmp     [rsi+918h], r12d
 * 0000000140C778B4: jnz     short loc_140C778C4
 * 0000000140C778B6: mov     rax, [rsi+588h]
 * 0000000140C778BD: xor     rcx, r8
 * 0000000140C778C0: mov     [rax+18h], rcx
 * 0000000140C778C4: xor     edx, edx
 * 0000000140C778C6: mov     r9d, 100h
 * 0000000140C778CC: mov     rcx, rsi
 * 0000000140C778CF: call    sub_140C7F03C
 * 0000000140C778D4: jmp     short loc_140C778EB
 * 0000000140C778D6: xor     r12d, r12d
 * 0000000140C778D9: jmp     short loc_140C778E1
 * 0000000140C778DB: mov     r13d, 1
 * 0000000140C778E1: mov     r14, 0A3A03F5891C8B4E8h
 * 0000000140C778EB: test    dword ptr [rsi+9D8h], 1000000h
 * 0000000140C778F5: jz      loc_140C77A3A
 * 0000000140C778FB: mov     rbx, [rsi+9E0h]
 * 0000000140C77902: mov     rax, [rsi+398h]
 * 0000000140C77909: mov     rcx, rbx
 * 0000000140C7790C: call    KeGuardDispatchICall
 * 0000000140C77911: test    eax, eax
 * 0000000140C77913: jz      loc_140C77A1E
 * 0000000140C77919: cmp     [rsi+918h], r12d
 * 0000000140C77920: jnz     loc_140C77A1E
 * 0000000140C77926: lea     rax, [rsi+r14]
 * 0000000140C7792A: mov     [rsi+920h], rax
 * 0000000140C77931: mov     [rsi+928h], r12
 * 0000000140C77938: mov     qword ptr [rsi+930h], 110h
 * 0000000140C77943: mov     [rsi+938h], r12
 * 0000000140C7794A: mov     [rsi+918h], r13d
 * 0000000140C77951: mov     ecx, [rsi+9D8h]
 * 0000000140C77957: bt      ecx, 1Dh
 * 0000000140C7795B: jb      loc_140C77A1E
 * 0000000140C77961: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C7796B: jz      loc_140C77A1E
 * 0000000140C77971: test    r13b, cl
 * 0000000140C77974: jz      loc_140C77A1E
 * 0000000140C7797A: mov     ecx, [rsi+0A74h]
 * 0000000140C77980: mov     eax, [rsi+804h]
 * 0000000140C77986: mov     r10, [rsi+838h]
 * 0000000140C7798D: sub     eax, ecx
 * 0000000140C7798F: mov     r8, [rsi+0A78h]
 * 0000000140C77996: lea     rdx, [rcx+rsi]
 * 0000000140C7799A: mov     ecx, eax
 * 0000000140C7799C: shr     rcx, 3
 * 0000000140C779A0: lea     r9, [rdx+rcx*8]
 * 0000000140C779A4: jmp     short loc_140C779C7
 * 0000000140C779A6: xor     [rdx], r8
 * 0000000140C779A9: mov     rax, [rdx]
 * 0000000140C779AC: movzx   ecx, r8b
 * 0000000140C779B0: xor     rax, r10
 * 0000000140C779B3: and     ecx, 3Fh
 * 0000000140C779B6: ror     r8, cl
 * 0000000140C779B9: add     r8, rax
 * 0000000140C779BC: xor     r8, 0F05h
 * 0000000140C779C3: add     rdx, 8
 * 0000000140C779C7: cmp     rdx, r9
 * 0000000140C779CA: jnz     short loc_140C779A6
 * 0000000140C779CC: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C779D4: cmp     r8, [rsi+0A80h]
 * 0000000140C779DB: jz      short loc_140C77A1E
 * 0000000140C779DD: mov     ecx, [rsi+804h]
 * 0000000140C779E3: mov     rax, [rsi+588h]
 * 0000000140C779EA: mov     [rax], rsi
 * 0000000140C779ED: mov     [rax+10h], ecx
 * 0000000140C779F0: mov     rcx, [rsi+0A80h]
 * 0000000140C779F7: cmp     [rsi+918h], r12d
 * 0000000140C779FE: jnz     short loc_140C77A0E
 * 0000000140C77A00: mov     rax, [rsi+588h]
 * 0000000140C77A07: xor     rcx, r8
 * 0000000140C77A0A: mov     [rax+18h], rcx
 * 0000000140C77A0E: xor     edx, edx
 * 0000000140C77A10: mov     r9d, 100h
 * 0000000140C77A16: mov     rcx, rsi
 * 0000000140C77A19: call    sub_140C7F03C
 * 0000000140C77A1E: mov     rax, [rsi+390h]
 * 0000000140C77A25: lea     rdx, sub_140C811E0
 * 0000000140C77A2C: xor     r9d, r9d
 * 0000000140C77A2F: mov     r8, rsi
 * 0000000140C77A32: mov     rcx, rbx
 * 0000000140C77A35: call    KeGuardDispatchICall
 * 0000000140C77A3A: mov     ecx, [rsi+9D8h]
 * 0000000140C77A40: bt      ecx, 1Dh
 * 0000000140C77A44: jb      loc_140C77AF1
 * 0000000140C77A4A: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C77A54: jnz     loc_140C77AF1
 * 0000000140C77A5A: mov     rbx, 7010008004002001h
 * 0000000140C77A64: test    r13b, cl
 * 0000000140C77A67: jz      loc_140C77AFB
 * 0000000140C77A6D: mov     ecx, [rsi+0A74h]
 * 0000000140C77A73: mov     eax, [rsi+804h]
 * 0000000140C77A79: mov     r11, [rsi+838h]
 * 0000000140C77A80: sub     eax, ecx
 * 0000000140C77A82: lea     r9, [rcx+rsi]
 * 0000000140C77A86: mov     ecx, eax
 * 0000000140C77A88: shr     rcx, 3
 * 0000000140C77A8C: lea     r10, [r9+rcx*8]
 * 0000000140C77A90: rdtsc
 * 0000000140C77A92: shl     rdx, 20h
 * 0000000140C77A96: or      rax, rdx
 * 0000000140C77A99: mov     rcx, rax
 * 0000000140C77A9C: ror     rax, 3
 * 0000000140C77AA0: xor     rcx, rax
 * 0000000140C77AA3: mov     rax, rbx
 * 0000000140C77AA6: mul     rcx
 * 0000000140C77AA9: xor     rdx, rax
 * 0000000140C77AAC: mov     [rsi+0A78h], rdx
 * 0000000140C77AB3: jmp     short loc_140C77ADB
 * 0000000140C77AB5: mov     r8, [r9]
 * 0000000140C77AB8: mov     rax, rdx
 * 0000000140C77ABB: movzx   ecx, dl
 * 0000000140C77ABE: xor     rax, r8
 * 0000000140C77AC1: and     ecx, 3Fh
 * 0000000140C77AC4: mov     [r9], rax
 * 0000000140C77AC7: ror     rdx, cl
 * 0000000140C77ACA: xor     r8, r11
 * 0000000140C77ACD: add     rdx, r8
 * 0000000140C77AD0: xor     rdx, 0F05h
 * 0000000140C77AD7: add     r9, 8
 * 0000000140C77ADB: cmp     r9, r10
 * 0000000140C77ADE: jnz     short loc_140C77AB5
 * 0000000140C77AE0: bts     dword ptr [rsi+9DCh], 15h
 * 0000000140C77AE8: mov     [rsi+0A80h], rdx
 * 0000000140C77AEF: jmp     short loc_140C77AFB
 * 0000000140C77AF1: mov     rbx, 7010008004002001h
 * 0000000140C77AFB: test    dword ptr [rsi+9DCh], 100h
 * 0000000140C77B05: jz      short loc_140C77B12
 * 0000000140C77B07: mov     rax, [rbp+7B0h+var_768]
 * 0000000140C77B0B: mov     [rbp+7B8h], rax
 * 0000000140C77B12: mov     r8d, [rsi+9D8h]
 * 0000000140C77B19: bt      r8d, 11h
 * 0000000140C77B1E: jnb     loc_140C77C6A
 * 0000000140C77B24: rdtsc
 * 0000000140C77B26: shl     rdx, 20h
 * 0000000140C77B2A: or      rax, rdx
 * 0000000140C77B2D: mov     rcx, rax
 * 0000000140C77B30: mov     rdx, rax
 * 0000000140C77B33: ror     rcx, 3
 * 0000000140C77B37: mov     rax, rbx
 * 0000000140C77B3A: xor     rdx, rcx
 * 0000000140C77B3D: mul     rdx
 * 0000000140C77B40: mov     rcx, rdx
 * 0000000140C77B43: xor     rcx, rax
 * 0000000140C77B46: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140C77B50: mul     rcx
 * 0000000140C77B53: shr     rdx, 3
 * 0000000140C77B57: lea     rax, [rdx+rdx*4]
 * 0000000140C77B5B: add     rax, rax
 * 0000000140C77B5E: sub     rcx, rax
 * 0000000140C77B61: cmp     rcx, rdi
 * 0000000140C77B64: jnb     loc_140C77C6A
 * 0000000140C77B6A: cmp     [rsi+918h], r12d
 * 0000000140C77B71: jnz     loc_140C77C6A
 * 0000000140C77B77: lea     rax, [rsi+r14]
 * 0000000140C77B7B: mov     [rsi+920h], rax
 * 0000000140C77B82: mov     [rsi+928h], r12
 * 0000000140C77B89: mov     qword ptr [rsi+930h], 108h
 * 0000000140C77B94: mov     [rsi+938h], r12
 * 0000000140C77B9B: mov     [rsi+918h], r13d
 * 0000000140C77BA2: bt      r8d, 1Dh
 * 0000000140C77BA7: jb      loc_140C77C6A
 * 0000000140C77BAD: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C77BB7: jz      loc_140C77C6A
 * 0000000140C77BBD: test    r13b, r8b
 * 0000000140C77BC0: jz      loc_140C77C6A
 * 0000000140C77BC6: mov     ecx, [rsi+0A74h]
 * 0000000140C77BCC: mov     eax, [rsi+804h]
 * 0000000140C77BD2: mov     r10, [rsi+838h]
 * 0000000140C77BD9: sub     eax, ecx
 * 0000000140C77BDB: mov     r8, [rsi+0A78h]
 * 0000000140C77BE2: lea     rdx, [rcx+rsi]
 * 0000000140C77BE6: mov     ecx, eax
 * 0000000140C77BE8: shr     rcx, 3
 * 0000000140C77BEC: lea     r9, [rdx+rcx*8]
 * 0000000140C77BF0: jmp     short loc_140C77C13
 * 0000000140C77BF2: xor     [rdx], r8
 * 0000000140C77BF5: mov     rax, [rdx]
 * 0000000140C77BF8: movzx   ecx, r8b
 * 0000000140C77BFC: xor     rax, r10
 * 0000000140C77BFF: and     ecx, 3Fh
 * 0000000140C77C02: ror     r8, cl
 * 0000000140C77C05: add     r8, rax
 * 0000000140C77C08: xor     r8, 0F05h
 * 0000000140C77C0F: add     rdx, 8
 * 0000000140C77C13: cmp     rdx, r9
 * 0000000140C77C16: jnz     short loc_140C77BF2
 * 0000000140C77C18: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C77C20: cmp     r8, [rsi+0A80h]
 * 0000000140C77C27: jz      short loc_140C77C6A
 * 0000000140C77C29: mov     ecx, [rsi+804h]
 * 0000000140C77C2F: mov     rax, [rsi+588h]
 * 0000000140C77C36: mov     [rax], rsi
 * 0000000140C77C39: mov     [rax+10h], ecx
 * 0000000140C77C3C: mov     rcx, [rsi+0A80h]
 * 0000000140C77C43: cmp     [rsi+918h], r12d
 * 0000000140C77C4A: jnz     short loc_140C77C5A
 * 0000000140C77C4C: mov     rax, [rsi+588h]
 * 0000000140C77C53: xor     rcx, r8
 * 0000000140C77C56: mov     [rax+18h], rcx
 * 0000000140C77C5A: xor     edx, edx
 * 0000000140C77C5C: mov     r9d, 100h
 * 0000000140C77C62: mov     rcx, rsi
 * 0000000140C77C65: call    sub_140C7F03C
 * 0000000140C77C6A: mov     eax, [rsi+9D8h]
 * 0000000140C77C70: mov     r10d, 4000h
 * 0000000140C77C76: bt      eax, 1Dh
 * 0000000140C77C7A: jb      short loc_140C77CEB
 * 0000000140C77C7C: test    r10d, eax
 * 0000000140C77C7F: jnz     short loc_140C77CEB
 * 0000000140C77C81: lea     rcx, [rsi+918h]
 * 0000000140C77C88: cmp     [rcx], r12d
 * 0000000140C77C8B: jz      short loc_140C77CEB
 * 0000000140C77C8D: mov     rdx, [rbp+7B0h+arg_0]
 * 0000000140C77C94: test    [rdx+9D8h], r10d
 * 0000000140C77C9B: jnz     short loc_140C77CA6
 * 0000000140C77C9D: cmp     [rdx+918h], r12d
 * 0000000140C77CA4: jnz     short loc_140C77CEB
 * 0000000140C77CA6: mov     r8d, 28h ; '('
 * 0000000140C77CAC: add     rdx, 918h
 * 0000000140C77CB3: lea     r9d, [r8-23h]
 * 0000000140C77CB7: mov     rax, [rcx]
 * 0000000140C77CBA: add     r8d, 0FFFFFFF8h
 * 0000000140C77CBE: mov     [rdx], rax
 * 0000000140C77CC1: add     rcx, 8
 * 0000000140C77CC5: add     rdx, 8
 * 0000000140C77CC9: sub     r9, r13
 * 0000000140C77CCC: jnz     short loc_140C77CB7
 * 0000000140C77CCE: test    r8d, r8d
 * 0000000140C77CD1: jz      short loc_140C77CEB
 * 0000000140C77CD3: mov     edi, 0FFFFFFFFh
 * 0000000140C77CD8: mov     al, [rcx]
 * 0000000140C77CDA: add     rcx, r13
 * 0000000140C77CDD: mov     [rdx], al
 * 0000000140C77CDF: add     rdx, r13
 * 0000000140C77CE2: add     r8d, edi
 * 0000000140C77CE5: jnz     short loc_140C77CD8
 * 0000000140C77CE7: lea     edi, [r8+2]
 * 0000000140C77CEB: test    [rsi+9D8h], r10d
 * 0000000140C77CF2: jnz     short loc_140C77D01
 * 0000000140C77CF4: cmp     [rsi+918h], r12d
 * 0000000140C77CFB: jnz     loc_140C7880E
 * 0000000140C77D01: mov     eax, [rsi+0A70h]
 * 0000000140C77D07: test    eax, eax
 * 0000000140C77D09: jz      loc_140C7880E
 * 0000000140C77D0F: lea     r14, [rsi+rax]
 * 0000000140C77D13: mov     r11, [r14+8]
 * 0000000140C77D17: mov     [rsp+8B0h+var_858], r14
 * 0000000140C77D1C: test    r11, r11
 * 0000000140C77D1F: jz      loc_140C7809E
 * 0000000140C77D25: mov     r9d, [r14+10h]
 * 0000000140C77D29: mov     r8, r11
 * 0000000140C77D2C: add     [rsi+848h], r9d
 * 0000000140C77D33: mov     rax, r11
 * 0000000140C77D36: mov     r10d, [rsi+834h]
 * 0000000140C77D3D: mov     r12, [rsi+838h]
 * 0000000140C77D44: lea     rcx, [r11+r9]
 * 0000000140C77D48: cmp     r11, rcx
 * 0000000140C77D4B: jnb     short loc_140C77D5D
 * 0000000140C77D4D: mov     edx, 40h ; '@'
 * 0000000140C77D52: prefetchnta byte ptr [rax]
 * 0000000140C77D55: add     rax, rdx
 * 0000000140C77D58: cmp     rax, rcx
 * 0000000140C77D5B: jb      short loc_140C77D52
 * 0000000140C77D5D: xor     r13d, r13d
 * 0000000140C77D60: mov     r15d, r9d
 * 0000000140C77D63: shr     r15d, 7
 * 0000000140C77D67: mov     rbx, r12
 * 0000000140C77D6A: lea     edx, [r13+1]
 * 0000000140C77D6E: test    r15d, r15d
 * 0000000140C77D71: jz      short loc_140C77DD9
 * 0000000140C77D73: mov     edi, 0FFFFFFFFh
 * 0000000140C77D78: mov     rsi, 7010008004002001h
 * 0000000140C77D82: mov     eax, 8
 * 0000000140C77D87: xor     rbx, [r8]
 * 0000000140C77D8A: mov     ecx, r10d
 * 0000000140C77D8D: rol     rbx, cl
 * 0000000140C77D90: xor     rbx, [r8+8]
 * 0000000140C77D94: add     r8, 10h
 * 0000000140C77D98: rol     rbx, cl
 * 0000000140C77D9B: sub     rax, rdx
 * 0000000140C77D9E: jnz     short loc_140C77D87
 * 0000000140C77DA0: mov     rcx, r8
 * 0000000140C77DA3: sub     rcx, r11
 * 0000000140C77DA6: xor     rcx, r12
 * 0000000140C77DA9: mov     rax, rcx
 * 0000000140C77DAC: rol     rax, 11h
 * 0000000140C77DB0: xor     rcx, rax
 * 0000000140C77DB3: mov     rax, rsi
 * 0000000140C77DB6: mul     rcx
 * 0000000140C77DB9: xor     r10d, eax
 * 0000000140C77DBC: xor     r10d, edx
 * 0000000140C77DBF: mov     edx, 1
 * 0000000140C77DC4: and     r10d, 3Fh
 * 0000000140C77DC8: cmovz   r10d, edx
 * 0000000140C77DCC: add     r15d, edi
 * 0000000140C77DCF: jnz     short loc_140C77D82
 * 0000000140C77DD1: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C77DD6: lea     edi, [rdx+1]
 * 0000000140C77DD9: and     r9d, 7Fh
 * 0000000140C77DDD: cmp     r9d, 8
 * 0000000140C77DE1: jb      short loc_140C77E00
 * 0000000140C77DE3: mov     eax, r9d
 * 0000000140C77DE6: shr     rax, 3
 * 0000000140C77DEA: xor     rbx, [r8]
 * 0000000140C77DED: mov     ecx, r10d
 * 0000000140C77DF0: rol     rbx, cl
 * 0000000140C77DF3: add     r8, 8
 * 0000000140C77DF7: add     r9d, 0FFFFFFF8h
 * 0000000140C77DFB: sub     rax, rdx
 * 0000000140C77DFE: jnz     short loc_140C77DEA
 * 0000000140C77E00: test    r9d, r9d
 * 0000000140C77E03: jz      short loc_140C77E23
 * 0000000140C77E05: mov     edi, 0FFFFFFFFh
 * 0000000140C77E0A: movzx   eax, byte ptr [r8]
 * 0000000140C77E0E: mov     ecx, r10d
 * 0000000140C77E11: xor     rbx, rax
 * 0000000140C77E14: add     r8, rdx
 * 0000000140C77E17: rol     rbx, cl
 * 0000000140C77E1A: add     r9d, edi
 * 0000000140C77E1D: jnz     short loc_140C77E0A
 * 0000000140C77E1F: lea     edi, [r9+2]
 * 0000000140C77E23: mov     rax, rbx
 * 0000000140C77E26: jmp     short loc_140C77E2A
 * 0000000140C77E28: xor     ebx, eax
 * 0000000140C77E2A: shr     rax, 1Fh
 * 0000000140C77E2E: test    rax, rax
 * 0000000140C77E31: jnz     short loc_140C77E28
 * 0000000140C77E33: btr     ebx, 1Fh
 * 0000000140C77E37: mov     r12d, r13d
 * 0000000140C77E3A: cmp     ebx, [r14+14h]
 * 0000000140C77E3E: jz      loc_140C7805B
 * 0000000140C77E44: cmp     [r14], r13d
 * 0000000140C77E47: jnz     short loc_140C77E51
 * 0000000140C77E49: cmp     [r14+18h], r13d
 * 0000000140C77E4D: cmovnz  r12d, edx
 * 0000000140C77E51: mov     ecx, [r14+10h]
 * 0000000140C77E55: mov     rdx, [r14+8]
 * 0000000140C77E59: test    rcx, rcx
 * 0000000140C77E5C: jz      loc_140C77F18
 * 0000000140C77E62: mov     eax, [rsi+9DCh]
 * 0000000140C77E68: mov     r8d, 40h ; '@'
 * 0000000140C77E6E: test    r8b, al
 * 0000000140C77E71: jz      loc_140C77F18
 * 0000000140C77E77: mov     r13, cr8
 * 0000000140C77E7B: mov     r15, rdx
 * 0000000140C77E7E: lea     rax, [rcx-1]
 * 0000000140C77E82: and     r15, 0FFFFFFFFFFFFF000h
 * 0000000140C77E89: add     rax, rdx
 * 0000000140C77E8C: or      rax, 0FFFh
 * 0000000140C77E92: mov     [rbp+7B0h+var_820], rax
 * 0000000140C77E96: lea     rax, [r15-1]
 * 0000000140C77E9A: mov     [rbp+7B0h+arg_8], rax
 * 0000000140C77EA1: mov     cr8, rdi
 * 0000000140C77EA5: mov     rax, [rsi+468h]
 * 0000000140C77EAC: xor     edx, edx
 * 0000000140C77EAE: mov     rcx, r15
 * 0000000140C77EB1: call    KeGuardDispatchICall
 * 0000000140C77EB6: cmp     eax, 0C000022Dh
 * 0000000140C77EBB: jnz     short loc_140C77EDD
 * 0000000140C77EBD: test    r12d, r12d
 * 0000000140C77EC0: jnz     short loc_140C77F10
 * 0000000140C77EC2: lea     eax, [r12+1]
 * 0000000140C77EC7: cmp     r13b, al
 * 0000000140C77ECA: ja      short loc_140C77EE1
 * 0000000140C77ECC: movzx   eax, r13b
 * 0000000140C77ED0: mov     cr8, rax
 * 0000000140C77ED4: mov     al, [r15]
 * 0000000140C77ED7: mov     rax, cr8
 * 0000000140C77EDB: jmp     short loc_140C77EA1
 * 0000000140C77EDD: test    eax, eax
 * 0000000140C77EDF: js      short loc_140C77F10
 * 0000000140C77EE1: mov     rax, [rbp+7B0h+arg_8]
 * 0000000140C77EE8: mov     ecx, 1000h
 * 0000000140C77EED: add     rax, rcx
 * 0000000140C77EF0: add     r15, rcx
 * 0000000140C77EF3: mov     [rbp+7B0h+arg_8], rax
 * 0000000140C77EFA: cmp     rax, [rbp+7B0h+var_820]
 * 0000000140C77EFE: jnz     short loc_140C77EA5
 * 0000000140C77F00: movzx   eax, r13b
 * 0000000140C77F04: mov     cr8, rax
 * 0000000140C77F08: xor     r12d, r12d
 * 0000000140C77F0B: jmp     loc_140C7805B
 * 0000000140C77F10: movzx   eax, r13b
 * 0000000140C77F14: mov     cr8, rax
 * 0000000140C77F18: mov     eax, [r14+14h]
 * 0000000140C77F1C: xor     r12d, r12d
 * 0000000140C77F1F: cmp     [rsi+918h], r12d
 * 0000000140C77F26: jnz     short loc_140C77F3A
 * 0000000140C77F28: mov     ecx, eax
 * 0000000140C77F2A: mov     eax, ebx
 * 0000000140C77F2C: xor     rcx, rax
 * 0000000140C77F2F: mov     rax, [rsi+588h]
 * 0000000140C77F36: mov     [rax+18h], rcx
 * 0000000140C77F3A: mov     rcx, [r14+8]
 * 0000000140C77F3E: cmp     [rsi+918h], r12d
 * 0000000140C77F45: jnz     loc_140C7805B
 * 0000000140C77F4B: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C77F55: mov     edx, 1
 * 0000000140C77F5A: add     rax, rsi
 * 0000000140C77F5D: mov     [rsi+920h], rax
 * 0000000140C77F64: mov     rax, 0B3B74BDEE4453415h
 * 0000000140C77F6E: add     rax, r14
 * 0000000140C77F71: mov     [rsi+928h], rax
 * 0000000140C77F78: movsxd  rax, dword ptr [r14]
 * 0000000140C77F7B: mov     [rsi+930h], rax
 * 0000000140C77F82: mov     [rsi+938h], rcx
 * 0000000140C77F89: mov     [rsi+918h], edx
 * 0000000140C77F8F: mov     ecx, [rsi+9D8h]
 * 0000000140C77F95: bt      ecx, 1Dh
 * 0000000140C77F99: jb      loc_140C7805B
 * 0000000140C77F9F: test    dword ptr [rsi+9DCh], 200000h
 * 0000000140C77FA9: jz      loc_140C7805B
 * 0000000140C77FAF: test    dl, cl
 * 0000000140C77FB1: jz      loc_140C7805B
 * 0000000140C77FB7: mov     ecx, [rsi+0A74h]
 * 0000000140C77FBD: mov     eax, [rsi+804h]
 * 0000000140C77FC3: mov     r10, [rsi+838h]
 * 0000000140C77FCA: sub     eax, ecx
 * 0000000140C77FCC: mov     r8, [rsi+0A78h]
 * 0000000140C77FD3: lea     rdx, [rcx+rsi]
 * 0000000140C77FD7: mov     ecx, eax
 * 0000000140C77FD9: shr     rcx, 3
 * 0000000140C77FDD: lea     r9, [rdx+rcx*8]
 * 0000000140C77FE1: jmp     short loc_140C78004
 * 0000000140C77FE3: xor     [rdx], r8
 * 0000000140C77FE6: mov     rax, [rdx]
 * 0000000140C77FE9: movzx   ecx, r8b
 * 0000000140C77FED: xor     rax, r10
 * 0000000140C77FF0: and     ecx, 3Fh
 * 0000000140C77FF3: ror     r8, cl
 * 0000000140C77FF6: add     r8, rax
 * 0000000140C77FF9: xor     r8, 0F05h
 * 0000000140C78000: add     rdx, 8
 * 0000000140C78004: cmp     rdx, r9
 * 0000000140C78007: jnz     short loc_140C77FE3
 * 0000000140C78009: btr     dword ptr [rsi+9DCh], 15h
 * 0000000140C78011: cmp     r8, [rsi+0A80h]
 * 0000000140C78018: jz      short loc_140C7805B
 * 0000000140C7801A: mov     ecx, [rsi+804h]
 * 0000000140C78020: mov     rax, [rsi+588h]
 * 0000000140C78027: mov     [rax], rsi
 * 0000000140C7802A: mov     [rax+10h], ecx
 * 0000000140C7802D: mov     rcx, [rsi+0A80h]
 * 0000000140C78034: cmp     [rsi+918h], r12d
 * 0000000140C7803B: jnz     short loc_140C7804B
 * 0000000140C7803D: mov     rax, [rsi+588h]
 * 0000000140C78044: xor     rcx, r8
 * 0000000140C78047: mov     [rax+18h], rcx
 * 0000000140C7804B: xor     edx, edx
 * 0000000140C7804D: mov     r9d, 100h
 * 0000000140C78053: mov     rcx, rsi
 * 0000000140C78056: call    sub_140C7F03C
 * 0000000140C7805B: mov     rcx, [r14+18h]
 * 0000000140C7805F: mov     rax, [rsi+108h]
 * 0000000140C78066: call    KeGuardDispatchICall
 * 0000000140C7806B: mov     [r14+8], r12
 * 0000000140C7806F: mov     [r14+10h], r12d
 * 0000000140C78073: mov     eax, [rsi+848h]
 * 0000000140C78079: mov     [rsi+848h], eax
 * 0000000140C7807F: mov     rcx, [rsi+838h]
 * 0000000140C78086: mov     rax, rcx
 * 0000000140C78089: jmp     short loc_140C7808D
 * 0000000140C7808B: xor     ecx, eax
 * 0000000140C7808D: shr     rax, 1Fh
 * 0000000140C78091: test    rax, rax
 * 0000000140C78094: jnz     short loc_140C7808B
 * 0000000140C78096: btr     ecx, 1Fh
 * 0000000140C7809A: mov     [r14+14h], ecx
 * 0000000140C7809E: rdtsc
 * 0000000140C780A0: shl     rdx, 20h
 * 0000000140C780A4: mov     r8, 7010008004002001h
 * 0000000140C780AE: or      rax, rdx
 * 0000000140C780B1: mov     rcx, rax
 * 0000000140C780B4: ror     rax, 3
 * 0000000140C780B8: xor     rcx, rax
 * 0000000140C780BB: mov     rax, r8
 * 0000000140C780BE: mul     rcx
 * 0000000140C780C1: mov     rcx, rdx
 * 0000000140C780C4: xor     rcx, rax
 * 0000000140C780C7: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C780D1: mul     rcx
 * 0000000140C780D4: shr     rdx, 1
 * 0000000140C780D7: lea     rax, [rdx+rdx*2]
 * 0000000140C780DB: cmp     rcx, rax
 * 0000000140C780DE: jnz     loc_140C78818
 * 0000000140C780E4: lea     r12, [r14+18h]
 * 0000000140C780E8: rdtsc
 * 0000000140C780EA: shl     rdx, 20h
 * 0000000140C780EE: or      rax, rdx
 * 0000000140C780F1: mov     rcx, rax
 * 0000000140C780F4: ror     rax, 3
 * 0000000140C780F8: xor     rcx, rax
 * 0000000140C780FB: mov     rax, r8
 * 0000000140C780FE: mul     rcx
 * 0000000140C78101: mov     rbx, rax
 * 0000000140C78104: xor     ebx, edx
 * 0000000140C78106: and     ebx, 7FFh
 * 0000000140C7810C: rdtsc
 * 0000000140C7810E: shl     rdx, 20h
 * 0000000140C78112: or      rax, rdx
 * 0000000140C78115: mov     rcx, rax
 * 0000000140C78118: ror     rax, 3
 * 0000000140C7811C: xor     rcx, rax
 * 0000000140C7811F: mov     rax, r8
 * 0000000140C78122: mul     rcx
 * 0000000140C78125: lea     r8d, [rbx+1]
 * 0000000140C78129: xor     rax, rdx
 * 0000000140C7812C: xor     edx, edx
 * 0000000140C7812E: div     r8
 * 0000000140C78131: mov     eax, [rsi+9D8h]
 * 0000000140C78137: mov     r8d, [rsi+830h]
 * 0000000140C7813E: and     eax, 8000000h
 * 0000000140C78143: neg     eax
 * 0000000140C78145: mov     r15, rdx
 * 0000000140C78148: mov     rax, [rsi+100h]
 * 0000000140C7814F: lea     edx, [rbx+0AE8h]
 * 0000000140C78155: sbb     rcx, rcx
 * 0000000140C78158: and     rcx, 0FFFFFFFFFFFFFFC0h
 * 0000000140C7815C: add     rcx, 82h
 * 0000000140C78163: call    KeGuardDispatchICall
 * 0000000140C78168: mov     r11, rax
 * 0000000140C7816B: test    rax, rax
 * 0000000140C7816E: jnz     short loc_140C7818A
 * 0000000140C78170: lea     r11d, [rax+1]
 * 0000000140C78174: add     [rsi+0A60h], r11d
 * 0000000140C7817B: mov     r8, 7010008004002001h
 * 0000000140C78185: jmp     loc_140C7881E
 * 0000000140C7818A: mov     r9d, r15d
 * 0000000140C7818D: mov     r8, r11
 * 0000000140C78190: cmp     r15d, 8
 * 0000000140C78194: jb      short loc_140C781E1
 * 0000000140C78196: mov     r10d, r15d
 * 0000000140C78199: mov     edi, 1
 * 0000000140C7819E: shr     r10, 3
 * 0000000140C781A2: mov     rsi, 7010008004002001h
 * 0000000140C781AC: rdtsc
 * 0000000140C781AE: shl     rdx, 20h
 * 0000000140C781B2: add     r9d, 0FFFFFFF8h
 * 0000000140C781B6: or      rax, rdx
 * 0000000140C781B9: mov     rcx, rax
 * 0000000140C781BC: ror     rax, 3
 * 0000000140C781C0: xor     rcx, rax
 * 0000000140C781C3: mov     rax, rsi
 * 0000000140C781C6: mul     rcx
 * 0000000140C781C9: xor     rdx, rax
 * 0000000140C781CC: mov     [r8], rdx
 * 0000000140C781CF: add     r8, 8
 * 0000000140C781D3: sub     r10, rdi
 * 0000000140C781D6: jnz     short loc_140C781AC
 * 0000000140C781D8: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C781DD: lea     edi, [r10+2]
 * 0000000140C781E1: mov     r10d, 1
 * 0000000140C781E7: test    r9d, r9d
 * 0000000140C781EA: jz      short loc_140C78223
 * 0000000140C781EC: rdtsc
 * 0000000140C781EE: shl     rdx, 20h
 * 0000000140C781F2: or      rax, rdx
 * 0000000140C781F5: mov     rcx, rax
 * 0000000140C781F8: ror     rax, 3
 * 0000000140C781FC: xor     rcx, rax
 * 0000000140C781FF: mov     rax, 7010008004002001h
 * 0000000140C78209: mul     rcx
 * 0000000140C7820C: xor     rdx, rax
 * 0000000140C7820F: mov     eax, 0FFFFFFFFh
 * 0000000140C78214: mov     [r8], dl
 * 0000000140C78217: add     r8, r10
 * 0000000140C7821A: shr     rdx, 8
 * 0000000140C7821E: add     r9d, eax
 * 0000000140C78221: jnz     short loc_140C78214
 * 0000000140C78223: mov     r8d, r15d
 * 0000000140C78226: sub     ebx, r15d
 * 0000000140C78229: add     r8, 0AE8h
 * 0000000140C78230: add     r8, r11
 * 0000000140C78233: cmp     ebx, 8
 * 0000000140C78236: jb      short loc_140C78278
 * 0000000140C78238: mov     r9d, ebx
 * 0000000140C7823B: mov     rdi, 7010008004002001h
 * 0000000140C78245: shr     r9, 3
 * 0000000140C78249: rdtsc
 * 0000000140C7824B: shl     rdx, 20h
 * 0000000140C7824F: add     ebx, 0FFFFFFF8h
 * 0000000140C78252: or      rax, rdx
 * 0000000140C78255: mov     rcx, rax
 * 0000000140C78258: ror     rax, 3
 * 0000000140C7825C: xor     rcx, rax
 * 0000000140C7825F: mov     rax, rdi
 * 0000000140C78262: mul     rcx
 * 0000000140C78265: xor     rdx, rax
 * 0000000140C78268: mov     [r8], rdx
 * 0000000140C7826B: add     r8, 8
 * 0000000140C7826F: sub     r9, r10
 * 0000000140C78272: jnz     short loc_140C78249
 * 0000000140C78274: lea     edi, [r9+2]
 * 0000000140C78278: test    ebx, ebx
 * 0000000140C7827A: jz      short loc_140C782B2
 * 0000000140C7827C: rdtsc
 * 0000000140C7827E: shl     rdx, 20h
 * 0000000140C78282: or      rax, rdx
 * 0000000140C78285: mov     rcx, rax
 * 0000000140C78288: ror     rax, 3
 * 0000000140C7828C: xor     rcx, rax
 * 0000000140C7828F: mov     rax, 7010008004002001h
 * 0000000140C78299: mul     rcx
 * 0000000140C7829C: xor     rdx, rax
 * 0000000140C7829F: mov     eax, 0FFFFFFFFh
 * 0000000140C782A4: mov     [r8], dl
 * 0000000140C782A7: add     r8, r10
 * 0000000140C782AA: shr     rdx, 8
 * 0000000140C782AE: add     ebx, eax
 * 0000000140C782B0: jnz     short loc_140C782A4
 * 0000000140C782B2: test    r12, r12
 * 0000000140C782B5: jz      short loc_140C782BB
 * 0000000140C782B7: mov     [r12], r11
 * 0000000140C782BB: xor     r12d, r12d
 * 0000000140C782BE: mov     ecx, r15d
 * 0000000140C782C1: add     rcx, r11
 * 0000000140C782C4: lea     r11d, [r12+1]
 * 0000000140C782C9: jz      loc_140C7817B
 * 0000000140C782CF: mov     r10d, 0AE8h
 * 0000000140C782D5: mov     [r14+8], rcx
 * 0000000140C782D9: mov     [r14+10h], r10d
 * 0000000140C782DD: mov     r8d, r10d
 * 0000000140C782E0: mov     rdx, rsi
 * 0000000140C782E3: mov     r9, rcx
 * 0000000140C782E6: mov     edi, 15Dh
 * 0000000140C782EB: mov     rax, [rdx]
 * 0000000140C782EE: add     r8d, 0FFFFFFF8h
 * 0000000140C782F2: mov     [rcx], rax
 * 0000000140C782F5: add     rdx, 8
 * 0000000140C782F9: add     rcx, 8
 * 0000000140C782FD: sub     rdi, r11
 * 0000000140C78300: jnz     short loc_140C782EB
 * 0000000140C78302: test    r8d, r8d
 * 0000000140C78305: jz      short loc_140C7831B
 * 0000000140C78307: mov     edi, 0FFFFFFFFh
 * 0000000140C7830C: mov     al, [rdx]
 * 0000000140C7830E: add     rdx, r11
 * 0000000140C78311: mov     [rcx], al
 * 0000000140C78313: add     rcx, r11
 * 0000000140C78316: add     r8d, edi
 * 0000000140C78319: jnz     short loc_140C7830C
 * 0000000140C7831B: mov     r13d, [r9+9D8h]
 * 0000000140C78322: mov     r14, 7010008004002001h
 * 0000000140C7832C: mov     [r9+804h], r10d
 * 0000000140C78333: and     r13d, 0FFFFFFFEh
 * 0000000140C78337: mov     [r9+828h], r10d
 * 0000000140C7833E: bts     r13d, 12h
 * 0000000140C78343: mov     [r9+9D8h], r13d
 * 0000000140C7834A: mov     [r9+0A74h], r10d
 * 0000000140C78351: mov     eax, [r9+97Ch]
 * 0000000140C78358: mov     [rbp+7B0h+var_7F8], eax
 * 0000000140C7835B: mov     rax, [r9+4E0h]
 * 0000000140C78362: mov     [rbp+7B0h+var_768], rax
 * 0000000140C78366: mov     rax, [r9+5B8h]
 * 0000000140C7836D: mov     [rbp+7B0h+var_7A0], rax
 * 0000000140C78371: mov     dword ptr [r9+0C4h], 144h
 * 0000000140C7837C: rdtsc
 * 0000000140C7837E: shl     rdx, 20h
 * 0000000140C78382: or      rax, rdx
 * 0000000140C78385: mov     rcx, rax
 * 0000000140C78388: ror     rax, 3
 * 0000000140C7838C: xor     rcx, rax
 * 0000000140C7838F: mov     rax, r14
 * 0000000140C78392: mul     rcx
 * 0000000140C78395: mov     r15, rdx
 * 0000000140C78398: xor     r15, rax
 * 0000000140C7839B: jz      short loc_140C7837C
 * 0000000140C7839D: mov     rax, [r9+7D8h]
 * 0000000140C783A4: lea     rcx, [r9+7B8h]
 * 0000000140C783AB: mov     r14, [rsp+8B0h+var_858]
 * 0000000140C783B0: lea     rdx, [rbp+7B0h+var_120]
 * 0000000140C783B7: mov     r11d, 20h ; ' '
 * 0000000140C783BD: mov     [rbp+7B0h+var_7A8], rax
 * 0000000140C783C1: mov     eax, [r9+848h]
 * 0000000140C783C8: mov     r8d, r11d
 * 0000000140C783CB: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C783D1: lea     ebx, [r11-1Ch]
 * 0000000140C783D5: mov     r10d, ebx
 * 0000000140C783D8: lea     edi, [rbx-3]
 * 0000000140C783DB: mov     rax, [rcx]
 * 0000000140C783DE: add     r8d, 0FFFFFFF8h
 * 0000000140C783E2: mov     [rdx], rax
 * 0000000140C783E5: add     rcx, 8
 * 0000000140C783E9: add     rdx, 8
 * 0000000140C783ED: sub     r10, rdi
 * 0000000140C783F0: jnz     short loc_140C783DB
 * 0000000140C783F2: lea     edi, [r10+2]
 * 0000000140C783F6: lea     r10d, [rdi-1]
 * 0000000140C783FA: test    r8d, r8d
 * 0000000140C783FD: jz      short loc_140C78417
 * 0000000140C783FF: mov     edi, 0FFFFFFFFh
 * 0000000140C78404: mov     al, [rcx]
 * 0000000140C78406: add     rcx, r10
 * 0000000140C78409: mov     [rdx], al
 * 0000000140C7840B: add     rdx, r10
 * 0000000140C7840E: add     r8d, edi
 * 0000000140C78411: jnz     short loc_140C78404
 * 0000000140C78413: lea     edi, [r8+2]
 * 0000000140C78417: mov     [r9+7D8h], r12
 * 0000000140C7841E: lea     rax, [r9+7B8h]
 * 0000000140C78425: mov     [r9+848h], r12d
 * 0000000140C7842C: mov     ecx, r11d
 * 0000000140C7842F: mov     rdx, rbx
 * 0000000140C78432: mov     [rax], r12
 * 0000000140C78435: add     ecx, 0FFFFFFF8h
 * 0000000140C78438: add     rax, 8
 * 0000000140C7843C: sub     rdx, r10
 * 0000000140C7843F: jnz     short loc_140C78432
 * 0000000140C78441: mov     edx, 1
 * 0000000140C78446: test    ecx, ecx
 * 0000000140C78448: jz      short loc_140C7845B
 * 0000000140C7844A: mov     r8d, 0FFFFFFFFh
 * 0000000140C78450: mov     [rax], r12b
 * 0000000140C78453: add     rax, rdx
 * 0000000140C78456: add     ecx, r8d
 * 0000000140C78459: jnz     short loc_140C78450
 * 0000000140C7845B: mov     r11d, [r9+804h]
 * 0000000140C78462: mov     r10, r9
 * 0000000140C78465: add     [r9+848h], r11d
 * 0000000140C7846C: mov     rax, r9
 * 0000000140C7846F: mov     ebx, [r9+834h]
 * 0000000140C78476: mov     r8, [r9+838h]
 * 0000000140C7847D: lea     rcx, [r9+r11]
 * 0000000140C78481: cmp     r9, rcx
 * 0000000140C78484: jnb     short loc_140C78492
 * 0000000140C78486: prefetchnta byte ptr [rax]
 * 0000000140C78489: add     rax, 40h ; '@'
 * 0000000140C7848D: cmp     rax, rcx
 * 0000000140C78490: jb      short loc_140C78486
 * 0000000140C78492: mov     r12d, r11d
 * 0000000140C78495: shr     r12d, 7
 * 0000000140C78499: test    r12d, r12d
 * 0000000140C7849C: jz      short loc_140C78508
 * 0000000140C7849E: mov     rdi, r8
 * 0000000140C784A1: mov     rsi, 7010008004002001h
 * 0000000140C784AB: mov     r14d, 0FFFFFFFFh
 * 0000000140C784B1: mov     eax, 8
 * 0000000140C784B6: xor     r8, [r10]
 * 0000000140C784B9: mov     ecx, ebx
 * 0000000140C784BB: rol     r8, cl
 * 0000000140C784BE: xor     r8, [r10+8]
 * 0000000140C784C2: add     r10, 10h
 * 0000000140C784C6: rol     r8, cl
 * 0000000140C784C9: sub     rax, rdx
 * 0000000140C784CC: jnz     short loc_140C784B6
 * 0000000140C784CE: mov     rcx, r10
 * 0000000140C784D1: sub     rcx, r9
 * 0000000140C784D4: xor     rcx, rdi
 * 0000000140C784D7: mov     rax, rcx
 * 0000000140C784DA: rol     rax, 11h
 * 0000000140C784DE: xor     rcx, rax
 * 0000000140C784E1: mov     rax, rsi
 * 0000000140C784E4: mul     rcx
 * 0000000140C784E7: xor     ebx, eax
 * 0000000140C784E9: xor     ebx, edx
 * 0000000140C784EB: mov     edx, 1
 * 0000000140C784F0: and     ebx, 3Fh
 * 0000000140C784F3: cmovz   ebx, edx
 * 0000000140C784F6: add     r12d, r14d
 * 0000000140C784F9: jnz     short loc_140C784B1
 * 0000000140C784FB: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C78500: lea     edi, [rdx+1]
 * 0000000140C78503: mov     r14, [rsp+8B0h+var_858]
 * 0000000140C78508: and     r11d, 7Fh
 * 0000000140C7850C: cmp     r11d, 8
 * 0000000140C78510: jb      short loc_140C7852E
 * 0000000140C78512: mov     eax, r11d
 * 0000000140C78515: shr     rax, 3
 * 0000000140C78519: xor     r8, [r10]
 * 0000000140C7851C: mov     ecx, ebx
 * 0000000140C7851E: rol     r8, cl
 * 0000000140C78521: add     r10, 8
 * 0000000140C78525: add     r11d, 0FFFFFFF8h
 * 0000000140C78529: sub     rax, rdx
 * 0000000140C7852C: jnz     short loc_140C78519
 * 0000000140C7852E: xor     r12d, r12d
 * 0000000140C78531: test    r11d, r11d
 * 0000000140C78534: jz      short loc_140C78553
 * 0000000140C78536: mov     edi, 0FFFFFFFFh
 * 0000000140C7853B: movzx   eax, byte ptr [r10]
 * 0000000140C7853F: mov     ecx, ebx
 * 0000000140C78541: xor     r8, rax
 * 0000000140C78544: add     r10, rdx
 * 0000000140C78547: rol     r8, cl
 * 0000000140C7854A: add     r11d, edi
 * 0000000140C7854D: jnz     short loc_140C7853B
 * 0000000140C7854F: lea     edi, [r11+2]
 * 0000000140C78553: mov     ecx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C78559: lea     rdx, [r9+7B8h]
 * 0000000140C78560: mov     rax, [rbp+7B0h+var_7A8]
 * 0000000140C78564: mov     r10d, 20h ; ' '
 * 0000000140C7856A: mov     [r9+7D8h], rax
 * 0000000140C78571: add     [r9+848h], ecx
 * 0000000140C78578: lea     rcx, [rbp+7B0h+var_120]
 * 0000000140C7857F: lea     ebx, [r10-1Fh]
 * 0000000140C78583: lea     r11d, [r10-1Ch]
 * 0000000140C78587: mov     rax, [rcx]
 * 0000000140C7858A: add     r10d, 0FFFFFFF8h
 * 0000000140C7858E: mov     [rdx], rax
 * 0000000140C78591: add     rcx, 8
 * 0000000140C78595: add     rdx, 8
 * 0000000140C78599: sub     r11, rbx
 * 0000000140C7859C: jnz     short loc_140C78587
 * 0000000140C7859E: test    r10d, r10d
 * 0000000140C785A1: jz      short loc_140C785BB
 * 0000000140C785A3: mov     edi, 0FFFFFFFFh
 * 0000000140C785A8: mov     al, [rcx]
 * 0000000140C785AA: add     rcx, rbx
 * 0000000140C785AD: mov     [rdx], al
 * 0000000140C785AF: add     rdx, rbx
 * 0000000140C785B2: add     r10d, edi
 * 0000000140C785B5: jnz     short loc_140C785A8
 * 0000000140C785B7: lea     edi, [r10+2]
 * 0000000140C785BB: mov     [r9+7D8h], r8
 * 0000000140C785C2: test    dword ptr [r9+9D8h], 20000000h
 * 0000000140C785CD: jnz     loc_140C786FB
 * 0000000140C785D3: mov     rax, r9
 * 0000000140C785D6: mov     ecx, r12d
 * 0000000140C785D9: xor     [rax], r15
 * 0000000140C785DC: add     ecx, ebx
 * 0000000140C785DE: add     rax, 8
 * 0000000140C785E2: cmp     ecx, 19h
 * 0000000140C785E5: jb      short loc_140C785D9
 * 0000000140C785E7: add     rax, 0A18h
 * 0000000140C785ED: mov     ecx, 144h
 * 0000000140C785F2: xor     [rax], r15
 * 0000000140C785F5: lea     rdx, [rbp+7B0h+var_788]
 * 0000000140C785F9: ror     r15, cl
 * 0000000140C785FC: lea     rax, [rax-8]
 * 0000000140C78600: mov     [rbp+7B0h+var_788], r15
 * 0000000140C78604: and     r15d, 3Fh
 * 0000000140C78608: btc     [rdx], r15
 * 0000000140C7860C: sub     ecx, ebx
 * 0000000140C7860E: jz      short loc_140C78616
 * 0000000140C78610: mov     r15, [rbp+7B0h+var_788]
 * 0000000140C78614: jmp     short loc_140C785F2
 * 0000000140C78616: rdtsc
 * 0000000140C78618: shl     rdx, 20h
 * 0000000140C7861C: or      rax, rdx
 * 0000000140C7861F: mov     rcx, rax
 * 0000000140C78622: ror     rax, 3
 * 0000000140C78626: xor     rcx, rax
 * 0000000140C78629: mov     rax, 7010008004002001h
 * 0000000140C78633: mul     rcx
 * 0000000140C78636: mov     rcx, rdx
 * 0000000140C78639: xor     rcx, rax
 * 0000000140C7863C: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C78646: mul     rcx
 * 0000000140C78649: shr     rdx, 1
 * 0000000140C7864C: lea     rax, [rdx+rdx*2]
 * 0000000140C78650: cmp     rcx, rax
 * 0000000140C78653: jnz     loc_140C786FB
 * 0000000140C78659: mov     r15d, [rbp+7B0h+var_7F8]
 * 0000000140C7865D: mov     ecx, r9d
 * 0000000140C78660: mov     rdi, [rbp+7B0h+var_768]
 * 0000000140C78664: mov     r10, r9
 * 0000000140C78667: mov     r11d, r12d
 * 0000000140C7866A: ror     r10, cl
 * 0000000140C7866D: mov     r12, [rbp+7B0h+var_7A0]
 * 0000000140C78671: mov     rbx, r9
 * 0000000140C78674: mov     r14d, 1
 * 0000000140C7867A: mov     eax, r11d
 * 0000000140C7867D: add     rax, rbx
 * 0000000140C78680: sub     [r9], rax
 * 0000000140C78683: mov     rcx, [r9]
 * 0000000140C78686: bt      r13d, 8
 * 0000000140C7868B: jb      short loc_140C786A4
 * 0000000140C7868D: mov     rax, rdi
 * 0000000140C78690: xor     rax, rcx
 * 0000000140C78693: mov     ecx, r12d
 * 0000000140C78696: bswap   rax
 * 0000000140C78699: xor     rax, r10
 * 0000000140C7869C: ror     rax, cl
 * 0000000140C7869F: xor     rax, r12
 * 0000000140C786A2: jmp     short loc_140C786AA
 * 0000000140C786A4: mov     rax, r10
 * 0000000140C786A7: xor     rax, rcx
 * 0000000140C786AA: mov     rcx, r9
 * 0000000140C786AD: mov     edx, 0C8h
 * 0000000140C786B2: sub     edx, r11d
 * 0000000140C786B5: mov     [rcx], rax
 * 0000000140C786B8: mov     ecx, [r9]
 * 0000000140C786BB: mov     r8d, ecx
 * 0000000140C786BE: mov     eax, r11d
 * 0000000140C786C1: not     ecx
 * 0000000140C786C3: xor     rdx, rax
 * 0000000140C786C6: xor     r8d, 0F05h
 * 0000000140C786CD: ror     rdx, cl
 * 0000000140C786D0: add     r9, 8
 * 0000000140C786D4: xor     r10, rdx
 * 0000000140C786D7: mov     cl, r8b
 * 0000000140C786DA: rol     r10, cl
 * 0000000140C786DD: add     r11d, r14d
 * 0000000140C786E0: add     r10, rbx
 * 0000000140C786E3: xor     r10, r15
 * 0000000140C786E6: cmp     r11d, 19h
 * 0000000140C786EA: jb      short loc_140C7867A
 * 0000000140C786EC: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C786F1: mov     edi, 2
 * 0000000140C786F6: mov     r14, [rsp+8B0h+var_858]
 * 0000000140C786FB: mov     r15, [r14+8]
 * 0000000140C786FF: mov     r10d, [r14+10h]
 * 0000000140C78703: mov     r9, r15
 * 0000000140C78706: add     [rsi+848h], r10d
 * 0000000140C7870D: mov     rax, r15
 * 0000000140C78710: mov     r11d, [rsi+834h]
 * 0000000140C78717: mov     r12, [rsi+838h]
 * 0000000140C7871E: lea     rcx, [r15+r10]
 * 0000000140C78722: cmp     r15, rcx
 * 0000000140C78725: jnb     short loc_140C78737
 * 0000000140C78727: mov     edx, 40h ; '@'
 * 0000000140C7872C: prefetchnta byte ptr [rax]
 * 0000000140C7872F: add     rax, rdx
 * 0000000140C78732: cmp     rax, rcx
 * 0000000140C78735: jb      short loc_140C7872C
 * 0000000140C78737: mov     ebx, r10d
 * 0000000140C7873A: mov     r8, r12
 * 0000000140C7873D: shr     ebx, 7
 * 0000000140C78740: mov     r13d, 1
 * 0000000140C78746: test    ebx, ebx
 * 0000000140C78748: jz      short loc_140C787AA
 * 0000000140C7874A: mov     edi, 0FFFFFFFFh
 * 0000000140C7874F: mov     rsi, 7010008004002001h
 * 0000000140C78759: mov     eax, 8
 * 0000000140C7875E: xor     r8, [r9]
 * 0000000140C78761: mov     ecx, r11d
 * 0000000140C78764: rol     r8, cl
 * 0000000140C78767: xor     r8, [r9+8]
 * 0000000140C7876B: add     r9, 10h
 * 0000000140C7876F: rol     r8, cl
 * 0000000140C78772: sub     rax, r13
 * 0000000140C78775: jnz     short loc_140C7875E
 * 0000000140C78777: mov     rcx, r9
 * 0000000140C7877A: sub     rcx, r15
 * 0000000140C7877D: xor     rcx, r12
 * 0000000140C78780: mov     rax, rcx
 * 0000000140C78783: rol     rax, 11h
 * 0000000140C78787: xor     rcx, rax
 * 0000000140C7878A: mov     rax, rsi
 * 0000000140C7878D: mul     rcx
 * 0000000140C78790: xor     r11d, eax
 * 0000000140C78793: xor     r11d, edx
 * 0000000140C78796: and     r11d, 3Fh
 * 0000000140C7879A: cmovz   r11d, r13d
 * 0000000140C7879E: add     ebx, edi
 * 0000000140C787A0: jnz     short loc_140C78759
 * 0000000140C787A2: mov     rsi, [rsp+8B0h+var_838]
 * 0000000140C787A7: lea     edi, [rbx+2]
 * 0000000140C787AA: and     r10d, 7Fh
 * 0000000140C787AE: cmp     r10d, 8
 * 0000000140C787B2: jb      short loc_140C787D1
 * 0000000140C787B4: mov     eax, r10d
 * 0000000140C787B7: shr     rax, 3
 * 0000000140C787BB: xor     r8, [r9]
 * 0000000140C787BE: mov     ecx, r11d
 * 0000000140C787C1: rol     r8, cl
 * 0000000140C787C4: add     r9, 8
 * 0000000140C787C8: add     r10d, 0FFFFFFF8h
 * 0000000140C787CC: sub     rax, r13
 * 0000000140C787CF: jnz     short loc_140C787BB
 * 0000000140C787D1: test    r10d, r10d
 * 0000000140C787D4: jz      short loc_140C787F4
 * 0000000140C787D6: mov     edi, 0FFFFFFFFh
 * 0000000140C787DB: movzx   eax, byte ptr [r9]
 * 0000000140C787DF: mov     ecx, r11d
 * 0000000140C787E2: xor     r8, rax
 * 0000000140C787E5: add     r9, r13
 * 0000000140C787E8: rol     r8, cl
 * 0000000140C787EB: add     r10d, edi
 * 0000000140C787EE: jnz     short loc_140C787DB
 * 0000000140C787F0: lea     edi, [r10+2]
 * 0000000140C787F4: mov     rax, r8
 * 0000000140C787F7: jmp     short loc_140C787FC
 * 0000000140C787F9: xor     r8d, eax
 * 0000000140C787FC: shr     rax, 1Fh
 * 0000000140C78800: test    rax, rax
 * 0000000140C78803: jnz     short loc_140C787F9
 * 0000000140C78805: btr     r8d, 1Fh
 * 0000000140C7880A: mov     [r14+14h], r8d
 * 0000000140C7880E: mov     r8, 7010008004002001h
 * 0000000140C78818: mov     r11d, 1
 * 0000000140C7881E: mov     r12d, [rsi+9D8h]
 * 0000000140C78825: xor     r14d, r14d
 * 0000000140C78828: mov     dword ptr [rbp+7B0h+arg_8], r14d
 * 0000000140C7882F: mov     [rsp+8B0h+var_858], r14
 * 0000000140C78834: mov     [rbp+7B0h+var_7F8], r12d
 * 0000000140C78838: bt      r12d, 1Dh
 * 0000000140C7883D: jb      loc_140C78E8D
 * 0000000140C78843: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C7884A: cmp     rsi, r13
 * 0000000140C7884D: jnz     loc_140C78F06
 * 0000000140C78853: bt      r12d, 0Eh
 * 0000000140C78858: jb      short loc_140C78867
 * 0000000140C7885A: cmp     [rsi+918h], r14d
 * 0000000140C78861: jnz     loc_140C78C90
 * 0000000140C78867: mov     r8d, [r13+944h]
 * 0000000140C7886E: mov     rcx, r13
 * 0000000140C78871: mov     edx, [r13+804h]
 * 0000000140C78878: call    sub_140C7E7A8
 * 0000000140C7887D: mov     rsi, rax
 * 0000000140C78880: test    rax, rax
 * 0000000140C78883: jz      loc_140C78C90
 * 0000000140C78889: mov     ecx, [rsi+97Ch]
 * 0000000140C7888F: mov     rdi, 7010008004002001h
 * 0000000140C78899: mov     r15d, [rsi+0A74h]
 * 0000000140C788A0: mov     rax, [rax+7E8h]
 * 0000000140C788A7: add     r15d, 0FFFFFF38h
 * 0000000140C788AE: mov     r13d, [rsi+9D8h]
 * 0000000140C788B5: mov     [rbp+7B0h+var_7C4], ecx
 * 0000000140C788B8: mov     rcx, [rsi+4E0h]
 * 0000000140C788BF: mov     [rbp+7B0h+var_788], rcx
 * 0000000140C788C3: mov     rcx, [rsi+5B8h]
 * 0000000140C788CA: shr     r15d, 3
 * 0000000140C788CE: mov     [rbp+7B0h+var_7A8], rcx
 * 0000000140C788D2: mov     [rsp+8B0h+var_858], rax
 * 0000000140C788D7: mov     dword ptr [rbp+7B0h+arg_8], r13d
 * 0000000140C788DE: mov     [rsi+0C4h], r15d
 * 0000000140C788E5: rdtsc
 * 0000000140C788E7: shl     rdx, 20h
 * 0000000140C788EB: or      rax, rdx
 * 0000000140C788EE: mov     rcx, rax
 * 0000000140C788F1: ror     rax, 3
 * 0000000140C788F5: xor     rcx, rax
 * 0000000140C788F8: mov     rax, rdi
 * 0000000140C788FB: mul     rcx
 * 0000000140C788FE: mov     rbx, rdx
 * 0000000140C78901: xor     rbx, rax
 * 0000000140C78904: jz      short loc_140C788E5
 * 0000000140C78906: mov     rax, [rsi+7D8h]
 * 0000000140C7890D: lea     rcx, [rsi+7B8h]
 * 0000000140C78914: mov     r10d, 20h ; ' '
 * 0000000140C7891A: mov     [rbp+7B0h+var_820], rax
 * 0000000140C7891E: mov     eax, [rsi+848h]
 * 0000000140C78924: lea     rdx, [rbp+7B0h+var_100]
 * 0000000140C7892B: mov     [rbp+7B0h+var_7F8], eax
 * 0000000140C7892E: mov     r8d, r10d
 * 0000000140C78931: lea     r11d, [r10-1Ch]
 * 0000000140C78935: mov     r9d, r11d
 * 0000000140C78938: lea     edi, [r10-1Eh]
 * 0000000140C7893C: lea     r12d, [r10-1Fh]
 * 0000000140C78940: mov     rax, [rcx]
 * 0000000140C78943: add     r8d, 0FFFFFFF8h
 * 0000000140C78947: mov     [rdx], rax
 * 0000000140C7894A: add     rcx, 8
 * 0000000140C7894E: add     rdx, 8
 * 0000000140C78952: sub     r9, r12
 * 0000000140C78955: jnz     short loc_140C78940
 * 0000000140C78957: test    r8d, r8d
 * 0000000140C7895A: jz      short loc_140C78974
 * 0000000140C7895C: mov     edi, 0FFFFFFFFh
 * 0000000140C78961: mov     al, [rcx]
 * 0000000140C78963: add     rcx, r12
 * 0000000140C78966: mov     [rdx], al
 * 0000000140C78968: add     rdx, r12
 * 0000000140C7896B: add     r8d, edi
 * 0000000140C7896E: jnz     short loc_140C78961
 * 0000000140C78970: lea     edi, [r8+2]
 * 0000000140C78974: mov     [rsi+7D8h], r14
 * 0000000140C7897B: lea     rax, [rsi+7B8h]
 * 0000000140C78982: mov     [rsi+848h], r14d
 * 0000000140C78989: mov     ecx, r10d
 * 0000000140C7898C: mov     rdx, r11
 * 0000000140C7898F: mov     [rax], r14
 * 0000000140C78992: add     ecx, 0FFFFFFF8h
 * 0000000140C78995: add     rax, 8
 * 0000000140C78999: sub     rdx, r12
 * 0000000140C7899C: jnz     short loc_140C7898F
 * 0000000140C7899E: mov     edx, 0FFFFFFFFh
 * 0000000140C789A3: test    ecx, ecx
 * 0000000140C789A5: jz      short loc_140C789B1
 * 0000000140C789A7: mov     [rax], r14b
 * 0000000140C789AA: add     rax, r12
 * 0000000140C789AD: add     ecx, edx
 * 0000000140C789AF: jnz     short loc_140C789A7
 * 0000000140C789B1: mov     r11d, [rsi+804h]
 * 0000000140C789B8: mov     r9, rsi
 * 0000000140C789BB: add     [rsi+848h], r11d
 * 0000000140C789C2: mov     rax, rsi
 * 0000000140C789C5: mov     r10d, [rsi+834h]
 * 0000000140C789CC: mov     r12, [rsi+838h]
 * 0000000140C789D3: lea     rcx, [rsi+r11]
 * 0000000140C789D7: cmp     rsi, rcx
 * 0000000140C789DA: jnb     short loc_140C789ED
 * 0000000140C789DC: mov     r8d, 40h ; '@'
 * 0000000140C789E2: prefetchnta byte ptr [rax]
 * 0000000140C789E5: add     rax, r8
 * 0000000140C789E8: cmp     rax, rcx
 * 0000000140C789EB: jb      short loc_140C789E2
 * 0000000140C789ED: mov     r14d, r11d
 * 0000000140C789F0: mov     r8, r12
 * 0000000140C789F3: shr     r14d, 7
 * 0000000140C789F7: test    r14d, r14d
 * 0000000140C789FA: jz      short loc_140C78A65
 * 0000000140C789FC: mov     edi, 1
 * 0000000140C78A01: mov     r13, 7010008004002001h
 * 0000000140C78A0B: mov     eax, 8
 * 0000000140C78A10: xor     r8, [r9]
 * 0000000140C78A13: mov     ecx, r10d
 * 0000000140C78A16: rol     r8, cl
 * 0000000140C78A19: xor     r8, [r9+8]
 * 0000000140C78A1D: add     r9, 10h
 * 0000000140C78A21: rol     r8, cl
 * 0000000140C78A24: sub     rax, rdi
 * 0000000140C78A27: jnz     short loc_140C78A10
 * 0000000140C78A29: mov     rcx, r9
 * 0000000140C78A2C: sub     rcx, rsi
 * 0000000140C78A2F: xor     rcx, r12
 * 0000000140C78A32: mov     rax, rcx
 * 0000000140C78A35: rol     rax, 11h
 * 0000000140C78A39: xor     rcx, rax
 * 0000000140C78A3C: mov     rax, r13
 * 0000000140C78A3F: mul     rcx
 * 0000000140C78A42: xor     r10d, eax
 * 0000000140C78A45: xor     r10d, edx
 * 0000000140C78A48: mov     edx, 0FFFFFFFFh
 * 0000000140C78A4D: and     r10d, 3Fh
 * 0000000140C78A51: cmovz   r10d, edi
 * 0000000140C78A55: add     r14d, edx
 * 0000000140C78A58: jnz     short loc_140C78A0B
 * 0000000140C78A5A: mov     r13d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C78A61: lea     edi, [r14+2]
 * 0000000140C78A65: and     r11d, 7Fh
 * 0000000140C78A69: mov     r12d, 1
 * 0000000140C78A6F: cmp     r11d, 8
 * 0000000140C78A73: jb      short loc_140C78A92
 * 0000000140C78A75: mov     eax, r11d
 * 0000000140C78A78: shr     rax, 3
 * 0000000140C78A7C: xor     r8, [r9]
 * 0000000140C78A7F: mov     ecx, r10d
 * 0000000140C78A82: rol     r8, cl
 * 0000000140C78A85: add     r9, 8
 * 0000000140C78A89: add     r11d, 0FFFFFFF8h
 * 0000000140C78A8D: sub     rax, r12
 * 0000000140C78A90: jnz     short loc_140C78A7C
 * 0000000140C78A92: xor     r14d, r14d
 * 0000000140C78A95: test    r11d, r11d
 * 0000000140C78A98: jz      short loc_140C78AAF
 * 0000000140C78A9A: movzx   eax, byte ptr [r9]
 * 0000000140C78A9E: mov     ecx, r10d
 * 0000000140C78AA1: xor     r8, rax
 * 0000000140C78AA4: add     r9, r12
 * 0000000140C78AA7: rol     r8, cl
 * 0000000140C78AAA: add     r11d, edx
 * 0000000140C78AAD: jnz     short loc_140C78A9A
 * 0000000140C78AAF: mov     ecx, [rbp+7B0h+var_7F8]
 * 0000000140C78AB2: lea     rdx, [rsi+7B8h]
 * 0000000140C78AB9: mov     rax, [rbp+7B0h+var_820]
 * 0000000140C78ABD: mov     r9d, 4
 * 0000000140C78AC3: mov     [rsi+7D8h], rax
 * 0000000140C78ACA: add     [rsi+848h], ecx
 * 0000000140C78AD0: lea     rcx, [rbp+7B0h+var_100]
 * 0000000140C78AD7: lea     r10d, [r9+1Ch]
 * 0000000140C78ADB: mov     rax, [rcx]
 * 0000000140C78ADE: add     r10d, 0FFFFFFF8h
 * 0000000140C78AE2: mov     [rdx], rax
 * 0000000140C78AE5: add     rcx, 8
 * 0000000140C78AE9: add     rdx, 8
 * 0000000140C78AED: sub     r9, r12
 * 0000000140C78AF0: jnz     short loc_140C78ADB
 * 0000000140C78AF2: test    r10d, r10d
 * 0000000140C78AF5: jz      short loc_140C78B0F
 * 0000000140C78AF7: mov     edi, 0FFFFFFFFh
 * 0000000140C78AFC: mov     al, [rcx]
 * 0000000140C78AFE: add     rcx, r12
 * 0000000140C78B01: mov     [rdx], al
 * 0000000140C78B03: add     rdx, r12
 * 0000000140C78B06: add     r10d, edi
 * 0000000140C78B09: jnz     short loc_140C78AFC
 * 0000000140C78B0B: lea     edi, [r10+2]
 * 0000000140C78B0F: mov     [rsi+7D8h], r8
 * 0000000140C78B16: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C78B20: jnz     loc_140C78C84
 * 0000000140C78B26: mov     rcx, rsi
 * 0000000140C78B29: mov     eax, r14d
 * 0000000140C78B2C: mov     r11d, 19h
 * 0000000140C78B32: xor     [rcx], rbx
 * 0000000140C78B35: add     eax, r12d
 * 0000000140C78B38: lea     rcx, [rcx+8]
 * 0000000140C78B3C: cmp     eax, r11d
 * 0000000140C78B3F: jb      short loc_140C78B32
 * 0000000140C78B41: mov     r8d, r15d
 * 0000000140C78B44: test    r15d, r15d
 * 0000000140C78B47: jz      short loc_140C78B7A
 * 0000000140C78B49: mov     edx, r15d
 * 0000000140C78B4C: dec     rdx
 * 0000000140C78B4F: lea     rdx, [rcx+rdx*8]
 * 0000000140C78B53: xor     [rdx], rbx
 * 0000000140C78B56: lea     rax, [rbp+7B0h+var_7A0]
 * 0000000140C78B5A: mov     ecx, r8d
 * 0000000140C78B5D: lea     rdx, [rdx-8]
 * 0000000140C78B61: ror     rbx, cl
 * 0000000140C78B64: mov     [rbp+7B0h+var_7A0], rbx
 * 0000000140C78B68: and     ebx, 3Fh
 * 0000000140C78B6B: btc     [rax], rbx
 * 0000000140C78B6F: sub     r8d, r12d
 * 0000000140C78B72: jz      short loc_140C78B7A
 * 0000000140C78B74: mov     rbx, [rbp+7B0h+var_7A0]
 * 0000000140C78B78: jmp     short loc_140C78B53
 * 0000000140C78B7A: bt      r13d, 12h
 * 0000000140C78B7F: jnb     short loc_140C78BC8
 * 0000000140C78B81: rdtsc
 * 0000000140C78B83: shl     rdx, 20h
 * 0000000140C78B87: or      rax, rdx
 * 0000000140C78B8A: mov     rcx, rax
 * 0000000140C78B8D: mov     rdx, rax
 * 0000000140C78B90: ror     rcx, 3
 * 0000000140C78B94: mov     rax, 7010008004002001h
 * 0000000140C78B9E: xor     rdx, rcx
 * 0000000140C78BA1: mul     rdx
 * 0000000140C78BA4: mov     rcx, rdx
 * 0000000140C78BA7: xor     rcx, rax
 * 0000000140C78BAA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C78BB4: mul     rcx
 * 0000000140C78BB7: shr     rdx, 1
 * 0000000140C78BBA: lea     rax, [rdx+rdx*2]
 * 0000000140C78BBE: cmp     rcx, rax
 * 0000000140C78BC1: jz      short loc_140C78BD1
 * 0000000140C78BC3: jmp     loc_140C78C84
 * 0000000140C78BC8: test    r13b, r13b
 * 0000000140C78BCB: js      loc_140C78C84
 * 0000000140C78BD1: mov     r12, [rbp+7B0h+var_7A8]
 * 0000000140C78BD5: mov     ecx, esi
 * 0000000140C78BD7: mov     rdi, [rbp+7B0h+var_788]
 * 0000000140C78BDB: mov     r9, rsi
 * 0000000140C78BDE: mov     ebx, r11d
 * 0000000140C78BE1: ror     r9, cl
 * 0000000140C78BE4: mov     r11d, r14d
 * 0000000140C78BE7: mov     r10, rsi
 * 0000000140C78BEA: mov     r14d, [rbp+7B0h+var_7C4]
 * 0000000140C78BEE: mov     eax, r11d
 * 0000000140C78BF1: add     rax, rsi
 * 0000000140C78BF4: sub     [r10], rax
 * 0000000140C78BF7: mov     rcx, [r10]
 * 0000000140C78BFA: bt      r13d, 8
 * 0000000140C78BFF: jb      short loc_140C78C18
 * 0000000140C78C01: mov     rax, rdi
 * 0000000140C78C04: xor     rax, rcx
 * 0000000140C78C07: mov     ecx, r12d
 * 0000000140C78C0A: bswap   rax
 * 0000000140C78C0D: xor     rax, r9
 * 0000000140C78C10: ror     rax, cl
 * 0000000140C78C13: xor     rax, r12
 * 0000000140C78C16: jmp     short loc_140C78C1E
 * 0000000140C78C18: mov     rax, r9
 * 0000000140C78C1B: xor     rax, rcx
 * 0000000140C78C1E: mov     rcx, r10
 * 0000000140C78C21: mov     edx, 0C8h
 * 0000000140C78C26: sub     edx, r11d
 * 0000000140C78C29: mov     [rcx], rax
 * 0000000140C78C2C: mov     ecx, [r10]
 * 0000000140C78C2F: mov     r8d, ecx
 * 0000000140C78C32: mov     eax, r11d
 * 0000000140C78C35: not     ecx
 * 0000000140C78C37: xor     rdx, rax
 * 0000000140C78C3A: xor     r8d, 0F05h
 * 0000000140C78C41: ror     rdx, cl
 * 0000000140C78C44: lea     eax, [r11+1]
 * 0000000140C78C48: xor     r9, rdx
 * 0000000140C78C4B: mov     cl, r8b
 * 0000000140C78C4E: rol     r9, cl
 * 0000000140C78C51: add     r10, 8
 * 0000000140C78C55: add     r9, rsi
 * 0000000140C78C58: mov     r11d, eax
 * 0000000140C78C5B: xor     r9, r14
 * 0000000140C78C5E: cmp     eax, 19h
 * 0000000140C78C61: jnz     short loc_140C78C72
 * 0000000140C78C63: bt      r13d, 12h
 * 0000000140C78C68: lea     eax, [r11-19h]
 * 0000000140C78C6C: cmovnb  eax, r15d
 * 0000000140C78C70: add     ebx, eax
 * 0000000140C78C72: cmp     r11d, ebx
 * 0000000140C78C75: jb      loc_140C78BEE
 * 0000000140C78C7B: mov     edi, 2
 * 0000000140C78C80: lea     r12d, [rdi-1]
 * 0000000140C78C84: mov     dword ptr [rbp+7B0h+arg_8], r12d
 * 0000000140C78C8B: jmp     loc_140C792F2
 * 0000000140C78C90: mov     ebx, 1
 * 0000000140C78C95: lea     rcx, [r13+7B8h]
 * 0000000140C78C9C: mov     [r13+0C4h], ebx
 * 0000000140C78CA3: lea     rdx, [rbp+7B0h+var_E0]
 * 0000000140C78CAA: mov     r12d, [r13+848h]
 * 0000000140C78CB1: mov     rsi, r13
 * 0000000140C78CB4: mov     r15, [r13+7D8h]
 * 0000000140C78CBB: lea     r10d, [rbx+1Fh]
 * 0000000140C78CBF: mov     [rbp+7B0h+var_7F8], r12d
 * 0000000140C78CC3: lea     r11d, [rbx+3]
 * 0000000140C78CC7: mov     r8d, r10d
 * 0000000140C78CCA: mov     r9d, r11d
 * 0000000140C78CCD: mov     rax, [rcx]
 * 0000000140C78CD0: add     r8d, 0FFFFFFF8h
 * 0000000140C78CD4: mov     [rdx], rax
 * 0000000140C78CD7: add     rcx, 8
 * 0000000140C78CDB: add     rdx, 8
 * 0000000140C78CDF: sub     r9, rbx
 * 0000000140C78CE2: jnz     short loc_140C78CCD
 * 0000000140C78CE4: mov     r9d, 0FFFFFFFFh
 * 0000000140C78CEA: test    r8d, r8d
 * 0000000140C78CED: jz      short loc_140C78CFE
 * 0000000140C78CEF: mov     al, [rcx]
 * 0000000140C78CF1: add     rcx, rbx
 * 0000000140C78CF4: mov     [rdx], al
 * 0000000140C78CF6: add     rdx, rbx
 * 0000000140C78CF9: add     r8d, r9d
 * 0000000140C78CFC: jnz     short loc_140C78CEF
 * 0000000140C78CFE: mov     [r13+7D8h], r14
 * 0000000140C78D05: lea     rax, [r13+7B8h]
 * 0000000140C78D0C: mov     [r13+848h], r14d
 * 0000000140C78D13: mov     ecx, r10d
 * 0000000140C78D16: mov     rdx, r11
 * 0000000140C78D19: mov     [rax], r14
 * 0000000140C78D1C: add     ecx, 0FFFFFFF8h
 * 0000000140C78D1F: add     rax, 8
 * 0000000140C78D23: sub     rdx, rbx
 * 0000000140C78D26: jnz     short loc_140C78D19
 * 0000000140C78D28: test    ecx, ecx
 * 0000000140C78D2A: jz      short loc_140C78D37
 * 0000000140C78D2C: mov     [rax], r14b
 * 0000000140C78D2F: add     rax, rbx
 * 0000000140C78D32: add     ecx, r9d
 * 0000000140C78D35: jnz     short loc_140C78D2C
 * 0000000140C78D37: mov     r11d, [r13+804h]
 * 0000000140C78D3E: mov     r10, r13
 * 0000000140C78D41: add     [r13+848h], r11d
 * 0000000140C78D48: mov     rax, r13
 * 0000000140C78D4B: mov     r9d, [r13+834h]
 * 0000000140C78D52: mov     r14, [r13+838h]
 * 0000000140C78D59: lea     rcx, [r11+r13]
 * 0000000140C78D5D: cmp     r13, rcx
 * 0000000140C78D60: jnb     short loc_140C78D72
 * 0000000140C78D62: mov     edx, 40h ; '@'
 * 0000000140C78D67: prefetchnta byte ptr [rax]
 * 0000000140C78D6A: add     rax, rdx
 * 0000000140C78D6D: cmp     rax, rcx
 * 0000000140C78D70: jb      short loc_140C78D67
 * 0000000140C78D72: mov     ebx, r11d
 * 0000000140C78D75: mov     r8, r14
 * 0000000140C78D78: shr     ebx, 7
 * 0000000140C78D7B: mov     edx, 1
 * 0000000140C78D80: test    ebx, ebx
 * 0000000140C78D82: jz      short loc_140C78DE8
 * 0000000140C78D84: mov     edi, 0FFFFFFFFh
 * 0000000140C78D89: mov     r12, 7010008004002001h
 * 0000000140C78D93: mov     eax, 8
 * 0000000140C78D98: xor     r8, [r10]
 * 0000000140C78D9B: mov     ecx, r9d
 * 0000000140C78D9E: rol     r8, cl
 * 0000000140C78DA1: xor     r8, [r10+8]
 * 0000000140C78DA5: add     r10, 10h
 * 0000000140C78DA9: rol     r8, cl
 * 0000000140C78DAC: sub     rax, rdx
 * 0000000140C78DAF: jnz     short loc_140C78D98
 * 0000000140C78DB1: mov     rcx, r10
 * 0000000140C78DB4: sub     rcx, r13
 * 0000000140C78DB7: xor     rcx, r14
 * 0000000140C78DBA: mov     rax, rcx
 * 0000000140C78DBD: rol     rax, 11h
 * 0000000140C78DC1: xor     rcx, rax
 * 0000000140C78DC4: mov     rax, r12
 * 0000000140C78DC7: mul     rcx
 * 0000000140C78DCA: xor     r9d, eax
 * 0000000140C78DCD: xor     r9d, edx
 * 0000000140C78DD0: mov     edx, 1
 * 0000000140C78DD5: and     r9d, 3Fh
 * 0000000140C78DD9: cmovz   r9d, edx
 * 0000000140C78DDD: add     ebx, edi
 * 0000000140C78DDF: jnz     short loc_140C78D93
 * 0000000140C78DE1: mov     r12d, [rbp+7B0h+var_7F8]
 * 0000000140C78DE5: lea     edi, [rdx+1]
 * 0000000140C78DE8: and     r11d, 7Fh
 * 0000000140C78DEC: cmp     r11d, 8
 * 0000000140C78DF0: jb      short loc_140C78E0F
 * 0000000140C78DF2: mov     eax, r11d
 * 0000000140C78DF5: shr     rax, 3
 * 0000000140C78DF9: xor     r8, [r10]
 * 0000000140C78DFC: mov     ecx, r9d
 * 0000000140C78DFF: rol     r8, cl
 * 0000000140C78E02: add     r10, 8
 * 0000000140C78E06: add     r11d, 0FFFFFFF8h
 * 0000000140C78E0A: sub     rax, rdx
 * 0000000140C78E0D: jnz     short loc_140C78DF9
 * 0000000140C78E0F: xor     r14d, r14d
 * 0000000140C78E12: mov     ebx, 0FFFFFFFFh
 * 0000000140C78E17: test    r11d, r11d
 * 0000000140C78E1A: jz      short loc_140C78E31
 * 0000000140C78E1C: movzx   eax, byte ptr [r10]
 * 0000000140C78E20: mov     ecx, r9d
 * 0000000140C78E23: xor     r8, rax
 * 0000000140C78E26: add     r10, rdx
 * 0000000140C78E29: rol     r8, cl
 * 0000000140C78E2C: add     r11d, ebx
 * 0000000140C78E2F: jnz     short loc_140C78E1C
 * 0000000140C78E31: mov     r9d, 4
 * 0000000140C78E37: mov     [r13+7D8h], r15
 * 0000000140C78E3E: add     [r13+848h], r12d
 * 0000000140C78E45: lea     rcx, [rbp+7B0h+var_E0]
 * 0000000140C78E4C: lea     rdx, [r13+7B8h]
 * 0000000140C78E53: lea     r10d, [r9+1Ch]
 * 0000000140C78E57: lea     r11d, [r9-3]
 * 0000000140C78E5B: mov     rax, [rcx]
 * 0000000140C78E5E: add     r10d, 0FFFFFFF8h
 * 0000000140C78E62: mov     [rdx], rax
 * 0000000140C78E65: add     rcx, 8
 * 0000000140C78E69: add     rdx, 8
 * 0000000140C78E6D: sub     r9, r11
 * 0000000140C78E70: jnz     short loc_140C78E5B
 * 0000000140C78E72: test    r10d, r10d
 * 0000000140C78E75: jz      short loc_140C78E86
 * 0000000140C78E77: mov     al, [rcx]
 * 0000000140C78E79: add     rcx, r11
 * 0000000140C78E7C: mov     [rdx], al
 * 0000000140C78E7E: add     rdx, r11
 * 0000000140C78E81: add     r10d, ebx
 * 0000000140C78E84: jnz     short loc_140C78E77
 * 0000000140C78E86: mov     [r13+7D8h], r8
 * 0000000140C78E8D: mov     r15, r14
 * 0000000140C78E90: mov     r14d, [rsi+9D8h]
 * 0000000140C78E97: bt      r14d, 1Dh
 * 0000000140C78E9C: jb      loc_140C7938E
 * 0000000140C78EA2: test    r14b, r14b
 * 0000000140C78EA5: js      loc_140C79375
 * 0000000140C78EAB: mov     eax, [rsi+97Ch]
 * 0000000140C78EB1: mov     ecx, esi
 * 0000000140C78EB3: mov     r12, [rsi+5B8h]
 * 0000000140C78EBA: mov     r9, rsi
 * 0000000140C78EBD: mov     r13, [rsi+4E0h]
 * 0000000140C78EC4: mov     r10, rsi
 * 0000000140C78EC7: ror     r9, cl
 * 0000000140C78ECA: xor     ecx, ecx
 * 0000000140C78ECC: mov     [rbp+7B0h+var_820], rax
 * 0000000140C78ED0: mov     ebx, ecx
 * 0000000140C78ED2: mov     r11d, ecx
 * 0000000140C78ED5: mov     rcx, [r10]
 * 0000000140C78ED8: sub     rcx, r11
 * 0000000140C78EDB: sub     rcx, rsi
 * 0000000140C78EDE: mov     [r10], rcx
 * 0000000140C78EE1: bt      r14d, 8
 * 0000000140C78EE6: jb      loc_140C79326
 * 0000000140C78EEC: mov     rax, r13
 * 0000000140C78EEF: xor     rax, rcx
 * 0000000140C78EF2: mov     ecx, r12d
 * 0000000140C78EF5: bswap   rax
 * 0000000140C78EF8: xor     rax, r9
 * 0000000140C78EFB: ror     rax, cl
 * 0000000140C78EFE: xor     rax, r12
 * 0000000140C78F01: jmp     loc_140C7932C
 * 0000000140C78F06: mov     ecx, [rsi+97Ch]
 * 0000000140C78F0C: mov     r15d, [rsi+0A74h]
 * 0000000140C78F13: mov     rax, [rsi+7E8h]
 * 0000000140C78F1A: add     r15d, 0FFFFFF38h
 * 0000000140C78F21: mov     [rbp+7B0h+var_7C4], ecx
 * 0000000140C78F24: mov     rcx, [rsi+4E0h]
 * 0000000140C78F2B: mov     [rbp+7B0h+var_788], rcx
 * 0000000140C78F2F: mov     rcx, [rsi+5B8h]
 * 0000000140C78F36: shr     r15d, 3
 * 0000000140C78F3A: mov     [rbp+7B0h+var_7A0], rcx
 * 0000000140C78F3E: mov     [rsp+8B0h+var_858], rax
 * 0000000140C78F43: mov     [rsi+0C4h], r15d
 * 0000000140C78F4A: rdtsc
 * 0000000140C78F4C: shl     rdx, 20h
 * 0000000140C78F50: or      rax, rdx
 * 0000000140C78F53: mov     rcx, rax
 * 0000000140C78F56: mov     rdx, rax
 * 0000000140C78F59: ror     rcx, 3
 * 0000000140C78F5D: mov     rax, r8
 * 0000000140C78F60: xor     rdx, rcx
 * 0000000140C78F63: mul     rdx
 * 0000000140C78F66: mov     rbx, rdx
 * 0000000140C78F69: xor     rbx, rax
 * 0000000140C78F6C: jz      short loc_140C78F4A
 * 0000000140C78F6E: mov     rax, [rsi+7D8h]
 * 0000000140C78F75: lea     rcx, [rsi+7B8h]
 * 0000000140C78F7C: mov     r10d, 20h ; ' '
 * 0000000140C78F82: mov     [rbp+7B0h+var_820], rax
 * 0000000140C78F86: mov     eax, [rsi+848h]
 * 0000000140C78F8C: lea     rdx, [rbp+7B0h+var_C0]
 * 0000000140C78F93: mov     dword ptr [rbp+7B0h+arg_8], eax
 * 0000000140C78F99: mov     r8d, r10d
 * 0000000140C78F9C: lea     r11d, [r10-1Ch]
 * 0000000140C78FA0: mov     r9d, r11d
 * 0000000140C78FA3: lea     r13d, [r10-1Fh]
 * 0000000140C78FA7: mov     rax, [rcx]
 * 0000000140C78FAA: add     r8d, 0FFFFFFF8h
 * 0000000140C78FAE: mov     [rdx], rax
 * 0000000140C78FB1: add     rcx, 8
 * 0000000140C78FB5: add     rdx, 8
 * 0000000140C78FB9: sub     r9, r13
 * 0000000140C78FBC: jnz     short loc_140C78FA7
 * 0000000140C78FBE: test    r8d, r8d
 * 0000000140C78FC1: jz      short loc_140C78FDB
 * 0000000140C78FC3: mov     edi, 0FFFFFFFFh
 * 0000000140C78FC8: mov     al, [rcx]
 * 0000000140C78FCA: add     rcx, r13
 * 0000000140C78FCD: mov     [rdx], al
 * 0000000140C78FCF: add     rdx, r13
 * 0000000140C78FD2: add     r8d, edi
 * 0000000140C78FD5: jnz     short loc_140C78FC8
 * 0000000140C78FD7: lea     edi, [r8+2]
 * 0000000140C78FDB: mov     [rsi+7D8h], r14
 * 0000000140C78FE2: lea     rax, [rsi+7B8h]
 * 0000000140C78FE9: mov     [rsi+848h], r14d
 * 0000000140C78FF0: mov     ecx, r10d
 * 0000000140C78FF3: mov     rdx, r11
 * 0000000140C78FF6: mov     [rax], r14
 * 0000000140C78FF9: add     ecx, 0FFFFFFF8h
 * 0000000140C78FFC: add     rax, 8
 * 0000000140C79000: sub     rdx, r13
 * 0000000140C79003: jnz     short loc_140C78FF6
 * 0000000140C79005: mov     edx, 0FFFFFFFFh
 * 0000000140C7900A: test    ecx, ecx
 * 0000000140C7900C: jz      short loc_140C79018
 * 0000000140C7900E: mov     [rax], r14b
 * 0000000140C79011: add     rax, r13
 * 0000000140C79014: add     ecx, edx
 * 0000000140C79016: jnz     short loc_140C7900E
 * 0000000140C79018: mov     r10d, [rsi+804h]
 * 0000000140C7901F: mov     r9, rsi
 * 0000000140C79022: add     [rsi+848h], r10d
 * 0000000140C79029: mov     rax, rsi
 * 0000000140C7902C: mov     r11d, [rsi+834h]
 * 0000000140C79033: mov     r13, [rsi+838h]
 * 0000000140C7903A: lea     rcx, [rsi+r10]
 * 0000000140C7903E: cmp     rsi, rcx
 * 0000000140C79041: jnb     short loc_140C79054
 * 0000000140C79043: mov     r8d, 40h ; '@'
 * 0000000140C79049: prefetchnta byte ptr [rax]
 * 0000000140C7904C: add     rax, r8
 * 0000000140C7904F: cmp     rax, rcx
 * 0000000140C79052: jb      short loc_140C79049
 * 0000000140C79054: mov     r14d, r10d
 * 0000000140C79057: mov     r8, r13
 * 0000000140C7905A: shr     r14d, 7
 * 0000000140C7905E: test    r14d, r14d
 * 0000000140C79061: jz      short loc_140C790C9
 * 0000000140C79063: mov     edi, 1
 * 0000000140C79068: mov     r12, 7010008004002001h
 * 0000000140C79072: mov     eax, 8
 * 0000000140C79077: xor     r8, [r9]
 * 0000000140C7907A: mov     ecx, r11d
 * 0000000140C7907D: rol     r8, cl
 * 0000000140C79080: xor     r8, [r9+8]
 * 0000000140C79084: add     r9, 10h
 * 0000000140C79088: rol     r8, cl
 * 0000000140C7908B: sub     rax, rdi
 * 0000000140C7908E: jnz     short loc_140C79077
 * 0000000140C79090: mov     rcx, r9
 * 0000000140C79093: sub     rcx, rsi
 * 0000000140C79096: xor     rcx, r13
 * 0000000140C79099: mov     rax, rcx
 * 0000000140C7909C: rol     rax, 11h
 * 0000000140C790A0: xor     rcx, rax
 * 0000000140C790A3: mov     rax, r12
 * 0000000140C790A6: mul     rcx
 * 0000000140C790A9: xor     r11d, eax
 * 0000000140C790AC: xor     r11d, edx
 * 0000000140C790AF: mov     edx, 0FFFFFFFFh
 * 0000000140C790B4: and     r11d, 3Fh
 * 0000000140C790B8: cmovz   r11d, edi
 * 0000000140C790BC: add     r14d, edx
 * 0000000140C790BF: jnz     short loc_140C79072
 * 0000000140C790C1: mov     r12d, [rbp+7B0h+var_7F8]
 * 0000000140C790C5: lea     edi, [r14+2]
 * 0000000140C790C9: and     r10d, 7Fh
 * 0000000140C790CD: mov     r13d, 1
 * 0000000140C790D3: cmp     r10d, 8
 * 0000000140C790D7: jb      short loc_140C790F6
 * 0000000140C790D9: mov     eax, r10d
 * 0000000140C790DC: shr     rax, 3
 * 0000000140C790E0: xor     r8, [r9]
 * 0000000140C790E3: mov     ecx, r11d
 * 0000000140C790E6: rol     r8, cl
 * 0000000140C790E9: add     r9, 8
 * 0000000140C790ED: add     r10d, 0FFFFFFF8h
 * 0000000140C790F1: sub     rax, r13
 * 0000000140C790F4: jnz     short loc_140C790E0
 * 0000000140C790F6: xor     r14d, r14d
 * 0000000140C790F9: test    r10d, r10d
 * 0000000140C790FC: jz      short loc_140C79113
 * 0000000140C790FE: movzx   eax, byte ptr [r9]
 * 0000000140C79102: mov     ecx, r11d
 * 0000000140C79105: xor     r8, rax
 * 0000000140C79108: add     r9, r13
 * 0000000140C7910B: rol     r8, cl
 * 0000000140C7910E: add     r10d, edx
 * 0000000140C79111: jnz     short loc_140C790FE
 * 0000000140C79113: mov     ecx, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C79119: lea     rdx, [rsi+7B8h]
 * 0000000140C79120: mov     rax, [rbp+7B0h+var_820]
 * 0000000140C79124: mov     r9d, 4
 * 0000000140C7912A: mov     [rsi+7D8h], rax
 * 0000000140C79131: add     [rsi+848h], ecx
 * 0000000140C79137: lea     rcx, [rbp+7B0h+var_C0]
 * 0000000140C7913E: lea     r10d, [r9+1Ch]
 * 0000000140C79142: mov     rax, [rcx]
 * 0000000140C79145: add     r10d, 0FFFFFFF8h
 * 0000000140C79149: mov     [rdx], rax
 * 0000000140C7914C: add     rcx, 8
 * 0000000140C79150: add     rdx, 8
 * 0000000140C79154: sub     r9, r13
 * 0000000140C79157: jnz     short loc_140C79142
 * 0000000140C79159: test    r10d, r10d
 * 0000000140C7915C: jz      short loc_140C79176
 * 0000000140C7915E: mov     edi, 0FFFFFFFFh
 * 0000000140C79163: mov     al, [rcx]
 * 0000000140C79165: add     rcx, r13
 * 0000000140C79168: mov     [rdx], al
 * 0000000140C7916A: add     rdx, r13
 * 0000000140C7916D: add     r10d, edi
 * 0000000140C79170: jnz     short loc_140C79163
 * 0000000140C79172: lea     edi, [r10+2]
 * 0000000140C79176: mov     [rsi+7D8h], r8
 * 0000000140C7917D: test    dword ptr [rsi+9D8h], 20000000h
 * 0000000140C79187: jnz     loc_140C792EB
 * 0000000140C7918D: mov     rcx, rsi
 * 0000000140C79190: mov     eax, r14d
 * 0000000140C79193: mov     r11d, 19h
 * 0000000140C79199: xor     [rcx], rbx
 * 0000000140C7919C: add     eax, r13d
 * 0000000140C7919F: lea     rcx, [rcx+8]
 * 0000000140C791A3: cmp     eax, r11d
 * 0000000140C791A6: jb      short loc_140C79199
 * 0000000140C791A8: mov     r8d, r15d
 * 0000000140C791AB: test    r15d, r15d
 * 0000000140C791AE: jz      short loc_140C791E1
 * 0000000140C791B0: mov     edx, r15d
 * 0000000140C791B3: dec     rdx
 * 0000000140C791B6: lea     rdx, [rcx+rdx*8]
 * 0000000140C791BA: xor     [rdx], rbx
 * 0000000140C791BD: lea     rax, [rbp+7B0h+var_7A8]
 * 0000000140C791C1: mov     ecx, r8d
 * 0000000140C791C4: lea     rdx, [rdx-8]
 * 0000000140C791C8: ror     rbx, cl
 * 0000000140C791CB: mov     [rbp+7B0h+var_7A8], rbx
 * 0000000140C791CF: and     ebx, 3Fh
 * 0000000140C791D2: btc     [rax], rbx
 * 0000000140C791D6: sub     r8d, r13d
 * 0000000140C791D9: jz      short loc_140C791E1
 * 0000000140C791DB: mov     rbx, [rbp+7B0h+var_7A8]
 * 0000000140C791DF: jmp     short loc_140C791BA
 * 0000000140C791E1: bt      r12d, 12h
 * 0000000140C791E6: jnb     short loc_140C7922F
 * 0000000140C791E8: rdtsc
 * 0000000140C791EA: shl     rdx, 20h
 * 0000000140C791EE: or      rax, rdx
 * 0000000140C791F1: mov     rcx, rax
 * 0000000140C791F4: mov     rdx, rax
 * 0000000140C791F7: ror     rcx, 3
 * 0000000140C791FB: mov     rax, 7010008004002001h
 * 0000000140C79205: xor     rdx, rcx
 * 0000000140C79208: mul     rdx
 * 0000000140C7920B: mov     rcx, rdx
 * 0000000140C7920E: xor     rcx, rax
 * 0000000140C79211: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140C7921B: mul     rcx
 * 0000000140C7921E: shr     rdx, 1
 * 0000000140C79221: lea     rax, [rdx+rdx*2]
 * 0000000140C79225: cmp     rcx, rax
 * 0000000140C79228: jz      short loc_140C79238
 * 0000000140C7922A: jmp     loc_140C792EB
 * 0000000140C7922F: test    r12b, r12b
 * 0000000140C79232: js      loc_140C792EB
 * 0000000140C79238: mov     r13, [rbp+7B0h+var_7A0]
 * 0000000140C7923C: mov     ecx, esi
 * 0000000140C7923E: mov     rdi, [rbp+7B0h+var_788]
 * 0000000140C79242: mov     r9, rsi
 * 0000000140C79245: mov     ebx, r11d
 * 0000000140C79248: ror     r9, cl
 * 0000000140C7924B: mov     r11d, r14d
 * 0000000140C7924E: mov     r10, rsi
 * 0000000140C79251: mov     r14d, [rbp+7B0h+var_7C4]
 * 0000000140C79255: mov     eax, r11d
 * 0000000140C79258: add     rax, rsi
 * 0000000140C7925B: sub     [r10], rax
 * 0000000140C7925E: mov     rcx, [r10]
 * 0000000140C79261: bt      r12d, 8
 * 0000000140C79266: jb      short loc_140C7927F
 * 0000000140C79268: mov     rax, rdi
 * 0000000140C7926B: xor     rax, rcx
 * 0000000140C7926E: mov     ecx, r13d
 * 0000000140C79271: bswap   rax
 * 0000000140C79274: xor     rax, r9
 * 0000000140C79277: ror     rax, cl
 * 0000000140C7927A: xor     rax, r13
 * 0000000140C7927D: jmp     short loc_140C79285
 * 0000000140C7927F: mov     rax, r9
 * 0000000140C79282: xor     rax, rcx
 * 0000000140C79285: mov     rcx, r10
 * 0000000140C79288: mov     edx, 0C8h
 * 0000000140C7928D: sub     edx, r11d
 * 0000000140C79290: mov     [rcx], rax
 * 0000000140C79293: mov     ecx, [r10]
 * 0000000140C79296: mov     r8d, ecx
 * 0000000140C79299: mov     eax, r11d
 * 0000000140C7929C: not     ecx
 * 0000000140C7929E: xor     rdx, rax
 * 0000000140C792A1: xor     r8d, 0F05h
 * 0000000140C792A8: ror     rdx, cl
 * 0000000140C792AB: lea     eax, [r11+1]
 * 0000000140C792AF: xor     r9, rdx
 * 0000000140C792B2: mov     cl, r8b
 * 0000000140C792B5: rol     r9, cl
 * 0000000140C792B8: add     r10, 8
 * 0000000140C792BC: add     r9, rsi
 * 0000000140C792BF: mov     r11d, eax
 * 0000000140C792C2: xor     r9, r14
 * 0000000140C792C5: cmp     eax, 19h
 * 0000000140C792C8: jnz     short loc_140C792D9
 * 0000000140C792CA: bt      r12d, 12h
 * 0000000140C792CF: lea     eax, [r11-19h]
 * 0000000140C792D3: cmovnb  eax, r15d
 * 0000000140C792D7: add     ebx, eax
 * 0000000140C792D9: cmp     r11d, ebx
 * 0000000140C792DC: jb      loc_140C79255
 * 0000000140C792E2: mov     edi, 2
 * 0000000140C792E7: lea     r13d, [rdi-1]
 * 0000000140C792EB: mov     dword ptr [rbp+7B0h+arg_8], r13d
 * 0000000140C792F2: rdtsc
 * 0000000140C792F4: shl     rdx, 20h
 * 0000000140C792F8: mov     r10, 7010008004002001h
 * 0000000140C79302: or      rax, rdx
 * 0000000140C79305: mov     r11d, 1
 * 0000000140C7930B: mov     rcx, rax
 * 0000000140C7930E: mov     rdx, rax
 * 0000000140C79311: ror     rcx, 3
 * 0000000140C79315: mov     rax, r10
 * 0000000140C79318: xor     rdx, rcx
 * 0000000140C7931B: mul     rdx
 * 0000000140C7931E: mov     r15, rax
 * 0000000140C79321: xor     r15, rdx
 * 0000000140C79324: jmp     short loc_140C79398
 * 0000000140C79326: mov     rax, r9
 * 0000000140C79329: xor     rax, rcx
 * 0000000140C7932C: mov     rcx, r10
 * 0000000140C7932F: mov     edx, 0C8h
 * 0000000140C79334: sub     edx, ebx
 * 0000000140C79336: xor     rdx, r11
 * 0000000140C79339: mov     [rcx], rax
 * 0000000140C7933C: mov     eax, 1
 * 0000000140C79341: mov     ecx, [r10]
 * 0000000140C79344: add     ebx, eax
 * 0000000140C79346: mov     r8d, ecx
 * 0000000140C79349: add     r10, 8
 * 0000000140C7934D: not     ecx
 * 0000000140C7934F: xor     r8d, 0F05h
 * 0000000140C79356: ror     rdx, cl
 * 0000000140C79359: add     r11, rax
 * 0000000140C7935C: xor     r9, rdx
 * 0000000140C7935F: mov     cl, r8b
 * 0000000140C79362: rol     r9, cl
 * 0000000140C79365: add     r9, rsi
 * 0000000140C79368: xor     r9, [rbp+7B0h+var_820]
 * 0000000140C7936C: cmp     ebx, 19h
 * 0000000140C7936F: jb      loc_140C78ED5
 * 0000000140C79375: mov     rax, [rsi+280h]
 * 0000000140C7937C: lea     rcx, [rsi+820h]
 * 0000000140C79383: call    KeGuardDispatchICall
 * 0000000140C79388: mov     r11d, 1
 * 0000000140C7938E: mov     r10, 7010008004002001h
 * 0000000140C79398: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C7939F: test    dword ptr [r13+9D8h], 8000000h
 * 0000000140C793AA: mov     r14, [r13+7F8h]
 * 0000000140C793B1: jz      short loc_140C793E4
 * 0000000140C793B3: rdtsc
 * 0000000140C793B5: shl     rdx, 20h
 * 0000000140C793B9: or      rax, rdx
 * 0000000140C793BC: mov     rcx, rax
 * 0000000140C793BF: mov     rdx, rax
 * 0000000140C793C2: ror     rcx, 3
 * 0000000140C793C6: mov     rax, r10
 * 0000000140C793C9: xor     rdx, rcx
 * 0000000140C793CC: mul     rdx
 * 0000000140C793CF: mov     r14, rdx
 * 0000000140C793D2: xor     r14, rax
 * 0000000140C793D5: and     r14, 0Fh
 * 0000000140C793D9: shl     r14, 4
 * 0000000140C793DD: add     r14, [r13+5C8h]
 * 0000000140C793E4: mov     r8d, 28h ; '('
 * 0000000140C793EA: lea     rcx, [r13+918h]
 * 0000000140C793F1: lea     rdx, [rbp+7B0h+var_500]
 * 0000000140C793F8: lea     r9d, [r8-23h]
 * 0000000140C793FC: mov     rax, [rcx]
 * 0000000140C793FF: add     r8d, 0FFFFFFF8h
 * 0000000140C79403: mov     [rdx], rax
 * 0000000140C79406: add     rcx, 8
 * 0000000140C7940A: add     rdx, 8
 * 0000000140C7940E: sub     r9, r11
 * 0000000140C79411: jnz     short loc_140C793FC
 * 0000000140C79413: xor     r12d, r12d
 * 0000000140C79416: test    r8d, r8d
 * 0000000140C79419: jz      short loc_140C79433
 * 0000000140C7941B: mov     edi, 0FFFFFFFFh
 * 0000000140C79420: mov     al, [rcx]
 * 0000000140C79422: add     rcx, r11
 * 0000000140C79425: mov     [rdx], al
 * 0000000140C79427: add     rdx, r11
 * 0000000140C7942A: add     r8d, edi
 * 0000000140C7942D: jnz     short loc_140C79420
 * 0000000140C7942F: lea     edi, [r8+2]
 * 0000000140C79433: mov     eax, [r13+9D8h]
 * 0000000140C7943A: bt      eax, 0Eh
 * 0000000140C7943E: jb      short loc_140C7944D
 * 0000000140C79440: cmp     [r13+918h], r12d
 * 0000000140C79447: jnz     loc_140C79C05
 * 0000000140C7944D: bt      eax, 1Dh
 * 0000000140C79451: jb      loc_140C7A18C
 * 0000000140C79457: mov     al, [r13+940h]
 * 0000000140C7945E: mov     r9, r15
 * 0000000140C79461: sub     al, r11b
 * 0000000140C79464: xor     r9, rsi
 * 0000000140C79467: movzx   r11d, al
 * 0000000140C7946B: mov     ebx, 3Fh ; '?'
 * 0000000140C79470: sub     ebx, r11d
 * 0000000140C79473: rdtsc
 * 0000000140C79475: shl     rdx, 20h
 * 0000000140C79479: mov     rdi, 7010008004002001h
 * 0000000140C79483: or      rax, rdx
 * 0000000140C79486: mov     rcx, rax
 * 0000000140C79489: mov     rdx, rax
 * 0000000140C7948C: ror     rcx, 3
 * 0000000140C79490: mov     rax, r10
 * 0000000140C79493: xor     rdx, rcx
 * 0000000140C79496: mul     rdx
 * 0000000140C79499: xor     rax, rdx
 * 0000000140C7949C: xor     edx, edx
 * 0000000140C7949E: div     rbx
 * 0000000140C794A1: lea     r10d, [r11+rdx]
 * 0000000140C794A5: rdtsc
 * 0000000140C794A7: shl     rdx, 20h
 * 0000000140C794AB: or      rax, rdx
 * 0000000140C794AE: mov     rcx, rax
 * 0000000140C794B1: mov     r8, rax
 * 0000000140C794B4: ror     rcx, 3
 * 0000000140C794B8: mov     rax, rdi
 * 0000000140C794BB: xor     r8, rcx
 * 0000000140C794BE: mul     r8
 * 0000000140C794C1: xor     rax, rdx
 * 0000000140C794C4: xor     edx, edx
 * 0000000140C794C6: div     rbx
 * 0000000140C794C9: add     edx, r11d
 * 0000000140C794CC: cmp     edx, r10d
 * 0000000140C794CF: jz      short loc_140C794A5
 * 0000000140C794D1: mov     rbx, [r13+7B0h]
 * 0000000140C794D8: mov     edi, 2
 * 0000000140C794DD: mov     rsi, [r13+7A8h]
 * 0000000140C794E4: mov     eax, r10d
 * 0000000140C794E7: bts     r9, rax
 * 0000000140C794EB: mov     eax, edx
 * 0000000140C794ED: btr     r9, rax
 * 0000000140C794F1: cmp     dword ptr [r13+944h], 3
 * 0000000140C794F9: jnz     loc_140C795FE
 * 0000000140C794FF: mov     r12, [rsp+8B0h+var_858]
 * 0000000140C79504: xor     ecx, ecx
 * 0000000140C79506: test    r12, r12
 * 0000000140C79509: jz      loc_140C795FE
 * 0000000140C7950F: mov     rax, [r13+378h]
 * 0000000140C79516: mov     byte ptr [rbx], 13h
 * 0000000140C79519: mov     byte ptr [rbx+1], 1
 * 0000000140C7951D: mov     [rbx+2], cx
 * 0000000140C79521: mov     [rbx+18h], rax
 * 0000000140C79525: mov     [rbx+20h], r12
 * 0000000140C79529: mov     [rbx+38h], rcx
 * 0000000140C7952D: mov     [rbx+10h], rcx
 * 0000000140C79531: mov     [rbx+28h], r9
 * 0000000140C79535: mov     rax, [r13+368h]
 * 0000000140C7953C: mov     r8, [r12]
 * 0000000140C79540: mov     edx, [r12+10h]
 * 0000000140C79545: mov     rcx, [r12+8]
 * 0000000140C7954A: call    KeGuardDispatchICall
 * 0000000140C7954F: mov     r9, [r12]
 * 0000000140C79553: lea     r11d, [rdi-1]
 * 0000000140C79557: mov     rcx, r12
 * 0000000140C7955A: mov     r10, 7010008004002001h
 * 0000000140C79564: rol     rcx, 11h
 * 0000000140C79568: mov     rax, r10
 * 0000000140C7956B: xor     rcx, r12
 * 0000000140C7956E: mul     rcx
 * 0000000140C79571: lea     ecx, [rdi+2]
 * 0000000140C79574: xor     rdx, rax
 * 0000000140C79577: lea     rax, [r12+18h]
 * 0000000140C7957C: mov     r8, rdx
 * 0000000140C7957F: xor     r12d, r12d
 * 0000000140C79582: xor     [rax], r8
 * 0000000140C79585: lea     rax, [rax-8]
 * 0000000140C79589: rol     r8, cl
 * 0000000140C7958C: sub     ecx, r11d
 * 0000000140C7958F: jnz     short loc_140C79582
 * 0000000140C79591: and     dl, 0Fh
 * 0000000140C79594: cmp     dl, 7
 * 0000000140C79597: jnb     loc_140C79620
 * 0000000140C7959D: mov     rax, r10
 * 0000000140C795A0: mov     rcx, r9
 * 0000000140C795A3: rol     rcx, 11h
 * 0000000140C795A7: mov     r10d, 6
 * 0000000140C795AD: xor     rcx, r9
 * 0000000140C795B0: mul     rcx
 * 0000000140C795B3: xor     rdx, rax
 * 0000000140C795B6: lea     rax, [r9+28h]
 * 0000000140C795BA: add     r8, rdx
 * 0000000140C795BD: movsx   edx, word ptr [r9+8]
 * 0000000140C795C2: xor     [rax], r8
 * 0000000140C795C5: mov     ecx, r10d
 * 0000000140C795C8: rol     r8, cl
 * 0000000140C795CB: lea     rax, [rax-8]
 * 0000000140C795CF: sub     r10d, r11d
 * 0000000140C795D2: jnz     short loc_140C795C2
 * 0000000140C795D4: sub     rdx, 30h ; '0'
 * 0000000140C795D8: shr     rdx, 3
 * 0000000140C795DC: test    edx, edx
 * 0000000140C795DE: jz      short loc_140C79620
 * 0000000140C795E0: movsxd  r10, edx
 * 0000000140C795E3: add     r10, 5
 * 0000000140C795E7: lea     r10, [r9+r10*8]
 * 0000000140C795EB: xor     [r10], r8
 * 0000000140C795EE: mov     ecx, edx
 * 0000000140C795F0: rol     r8, cl
 * 0000000140C795F3: lea     r10, [r10-8]
 * 0000000140C795F7: sub     edx, r11d
 * 0000000140C795FA: jnz     short loc_140C795EB
 * 0000000140C795FC: jmp     short loc_140C79620
 * 0000000140C795FE: mov     byte ptr [rbx], 13h
 * 0000000140C79601: mov     r11d, 1
 * 0000000140C79607: mov     [rbx+1], r11b
 * 0000000140C7960B: mov     [rbx+2], r12w
 * 0000000140C79610: mov     [rbx+18h], r14
 * 0000000140C79614: mov     [rbx+20h], r9
 * 0000000140C79618: mov     [rbx+38h], r12
 * 0000000140C7961C: mov     [rbx+10h], r12
 * 0000000140C79620: mov     [rbx+40h], r15
 * 0000000140C79624: mov     eax, [r13+9D8h]
 * 0000000140C7962B: test    al, al
 * 0000000140C7962D: jns     short loc_140C79683
 * 0000000140C7962F: lea     r8, [r14-48h]
 * 0000000140C79633: mov     [r8+40h], rbx
 * 0000000140C79637: rdtsc
 * 0000000140C79639: shl     rdx, 20h
 * 0000000140C7963D: mov     r14, 7010008004002001h
 * 0000000140C79647: or      rax, rdx
 * 0000000140C7964A: mov     rcx, rax
 * 0000000140C7964D: mov     rdx, rax
 * 0000000140C79650: ror     rcx, 3
 * 0000000140C79654: mov     rax, r14
 * 0000000140C79657: xor     rdx, rcx
 * 0000000140C7965A: mov     ecx, 19h
 * 0000000140C7965F: mul     rdx
 * 0000000140C79662: xor     rdx, rax
 * 0000000140C79665: lea     rax, [r8+48h]
 * 0000000140C79669: xor     [rax], rdx
 * 0000000140C7966C: lea     rax, [rax+8]
 * 0000000140C79670: sub     rcx, r11
 * 0000000140C79673: jnz     short loc_140C79669
 * 0000000140C79675: mov     dword ptr [r8+48h], 48513148h
 * 0000000140C7967D: mov     [r8+20h], rdx
 * 0000000140C79681: jmp     short loc_140C79690
 * 0000000140C79683: mov     r8, rbx
 * 0000000140C79686: mov     r14, 7010008004002001h
 * 0000000140C79690: mov     rdx, [r13+0AE0h]
 * 0000000140C79697: test    rdx, rdx
 * 0000000140C7969A: jz      short loc_140C79713
 * 0000000140C7969C: mov     rdx, [rdx+20h]
 * 0000000140C796A0: mov     eax, 0E1961900h
 * 0000000140C796A5: mov     rcx, rdx
 * 0000000140C796A8: mov     edi, 0Fh
 * 0000000140C796AD: xor     rcx, rax
 * 0000000140C796B0: shr     rcx, 4
 * 0000000140C796B4: xor     rcx, rdx
 * 0000000140C796B7: shr     rcx, 4
 * 0000000140C796BB: xor     rcx, [r13+588h]
 * 0000000140C796C2: mov     r10b, cl
 * 0000000140C796C5: mov     r11, rcx
 * 0000000140C796C8: and     r10b, dil
 * 0000000140C796CB: jnz     short loc_140C796D1
 * 0000000140C796CD: lea     r10d, [rdi-0Eh]
 * 0000000140C796D1: mov     r9, rcx
 * 0000000140C796D4: and     r9, rdi
 * 0000000140C796D7: add     r9, rdx
 * 0000000140C796DA: mov     rdx, [r9]
 * 0000000140C796DD: mov     rax, rdx
 * 0000000140C796E0: xor     rax, 1E0A00h
 * 0000000140C796E6: shr     rax, 4
 * 0000000140C796EA: xor     rax, rdx
 * 0000000140C796ED: shr     rax, 4
 * 0000000140C796F1: xor     rcx, rax
 * 0000000140C796F4: add     r10b, 0FFh
 * 0000000140C796F8: jnz     short loc_140C796D1
 * 0000000140C796FA: mov     edi, 2
 * 0000000140C796FF: bt      r11, 0Ch
 * 0000000140C79704: jnb     short loc_140C79709
 * 0000000140C79706: xor     r8, r11
 * 0000000140C79709: mov     [r9], r8
 * 0000000140C7970C: mov     r8, [r13+0AE0h]
 * 0000000140C79713: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C79718: mov     ecx, [r13+858h]
 * 0000000140C7971F: test    ecx, ecx
 * 0000000140C79721: jz      loc_140C79B6E
 * 0000000140C79727: sub     ecx, 1
 * 0000000140C7972A: jz      loc_140C79B57
 * 0000000140C79730: sub     ecx, 1
 * 0000000140C79733: jz      loc_140C79B44
 * 0000000140C79739: sub     ecx, 1
 * 0000000140C7973C: jz      loc_140C799A4
 * 0000000140C79742: cmp     ecx, 1
 * 0000000140C79745: jz      short loc_140C797C2
 * 0000000140C79747: mov     r9, [r13+9E0h]
 * 0000000140C7974E: mov     [r9+48h], r8
 * 0000000140C79752: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C79757: rdtsc
 * 0000000140C79759: shl     rdx, 20h
 * 0000000140C7975D: or      rax, rdx
 * 0000000140C79760: mov     rcx, rax
 * 0000000140C79763: mov     rdx, rax
 * 0000000140C79766: ror     rcx, 3
 * 0000000140C7976A: mov     rax, r14
 * 0000000140C7976D: xor     rdx, rcx
 * 0000000140C79770: mul     rdx
 * 0000000140C79773: mov     r8, rdx
 * 0000000140C79776: xor     r8, rax
 * 0000000140C79779: mov     rax, 0ABCC77118461CEFDh
 * 0000000140C79783: mul     r8
 * 0000000140C79786: mov     eax, 0Ch
 * 0000000140C7978B: shr     rdx, 1Ah
 * 0000000140C7978F: sub     rax, rdx
 * 0000000140C79792: imul    rcx, rax, 5F5E100h
 * 0000000140C79799: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140C797A3: add     rcx, r8
 * 0000000140C797A6: imul    rcx
 * 0000000140C797A9: add     rdx, rcx
 * 0000000140C797AC: sar     rdx, 17h
 * 0000000140C797B0: mov     rax, rdx
 * 0000000140C797B3: shr     rax, 3Fh
 * 0000000140C797B7: add     rdx, rax
 * 0000000140C797BA: mov     [r9], edx
 * 0000000140C797BD: jmp     loc_140C79C05
 * 0000000140C797C2: mov     r8, [r13+0A28h]
 * 0000000140C797C9: xor     r9d, r9d
 * 0000000140C797CC: mov     rcx, [r13+0A38h]
 * 0000000140C797D3: mov     rdx, rbx
 * 0000000140C797D6: mov     rax, [r13+0A30h]
 * 0000000140C797DD: mov     rsi, [r13+9E0h]
 * 0000000140C797E4: mov     byte ptr [r8], 12h
 * 0000000140C797E8: mov     byte ptr [r8+2], 58h ; 'X'
 * 0000000140C797ED: mov     [r8+50h], r12b
 * 0000000140C797F1: mov     [r8+8], rsi
 * 0000000140C797F5: mov     [r8+20h], rax
 * 0000000140C797F9: mov     [r8+28h], r12
 * 0000000140C797FD: mov     [r8+30h], rcx
 * 0000000140C79801: mov     [r8+51h], r12b
 * 0000000140C79805: mov     [r8+38h], r12
 * 0000000140C79809: mov     [r8+52h], r12b
 * 0000000140C7980D: xor     r8d, r8d
 * 0000000140C79810: mov     rax, [r13+2C8h]
 * 0000000140C79817: mov     rcx, [r13+0A28h]
 * 0000000140C7981E: call    KeGuardDispatchICall
 * 0000000140C79823: test    al, al
 * 0000000140C79825: jnz     loc_140C79C05
 * 0000000140C7982B: mov     r11d, 1
 * 0000000140C79831: cmp     [r13+918h], r12d
 * 0000000140C79838: jnz     loc_140C7994B
 * 0000000140C7983E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C79848: add     rax, r13
 * 0000000140C7984B: mov     [r13+920h], rax
 * 0000000140C79852: mov     [r13+928h], r12
 * 0000000140C79859: mov     qword ptr [r13+930h], 104h
 * 0000000140C79864: mov     [r13+938h], rsi
 * 0000000140C7986B: mov     [r13+918h], r11d
 * 0000000140C79872: mov     ecx, [r13+9D8h]
 * 0000000140C79879: bt      ecx, 1Dh
 * 0000000140C7987D: jb      loc_140C7994B
 * 0000000140C79883: test    dword ptr [r13+9DCh], 200000h
 * 0000000140C7988E: jz      loc_140C7994B
 * 0000000140C79894: test    r11b, cl
 * 0000000140C79897: jz      loc_140C7994B
 * 0000000140C7989D: mov     ecx, [r13+0A74h]
 * 0000000140C798A4: mov     eax, [r13+804h]
 * 0000000140C798AB: mov     r10, [r13+838h]
 * 0000000140C798B2: sub     eax, ecx
 * 0000000140C798B4: mov     r8, [r13+0A78h]
 * 0000000140C798BB: lea     rdx, [rcx+r13]
 * 0000000140C798BF: mov     ecx, eax
 * 0000000140C798C1: shr     rcx, 3
 * 0000000140C798C5: lea     r9, [rdx+rcx*8]
 * 0000000140C798C9: jmp     short loc_140C798EC
 * 0000000140C798CB: xor     [rdx], r8
 * 0000000140C798CE: mov     rax, [rdx]
 * 0000000140C798D1: movzx   ecx, r8b
 * 0000000140C798D5: xor     rax, r10
 * 0000000140C798D8: and     ecx, 3Fh
 * 0000000140C798DB: ror     r8, cl
 * 0000000140C798DE: add     r8, rax
 * 0000000140C798E1: xor     r8, 0F05h
 * 0000000140C798E8: add     rdx, 8
 * 0000000140C798EC: cmp     rdx, r9
 * 0000000140C798EF: jnz     short loc_140C798CB
 * 0000000140C798F1: btr     dword ptr [r13+9DCh], 15h
 * 0000000140C798FA: cmp     r8, [r13+0A80h]
 * 0000000140C79901: jz      short loc_140C7994B
 * 0000000140C79903: mov     ecx, [r13+804h]
 * 0000000140C7990A: mov     rax, [r13+588h]
 * 0000000140C79911: mov     [rax], r13
 * 0000000140C79914: mov     [rax+10h], ecx
 * 0000000140C79917: mov     rcx, [r13+0A80h]
 * 0000000140C7991E: cmp     [r13+918h], r12d
 * 0000000140C79925: jnz     short loc_140C79935
 * 0000000140C79927: mov     rax, [r13+588h]
 * 0000000140C7992E: xor     rcx, r8
 * 0000000140C79931: mov     [rax+18h], rcx
 * 0000000140C79935: xor     edx, edx
 * 0000000140C79937: mov     r9d, 100h
 * 0000000140C7993D: mov     rcx, r13
 * 0000000140C79940: call    sub_140C7F03C
 * 0000000140C79945: mov     r11d, 1
 * 0000000140C7994B: mov     edi, 5
 * 0000000140C79950: lea     rcx, [r13+918h]
 * 0000000140C79957: lea     rdx, [rbp+7B0h+var_500]
 * 0000000140C7995E: lea     r8d, [rdi+23h]
 * 0000000140C79962: mov     rax, [rcx]
 * 0000000140C79965: add     r8d, 0FFFFFFF8h
 * 0000000140C79969: mov     [rdx], rax
 * 0000000140C7996C: add     rcx, 8
 * 0000000140C79970: add     rdx, 8
 * 0000000140C79974: sub     rdi, r11
 * 0000000140C79977: jnz     short loc_140C79962
 * 0000000140C79979: mov     edi, 2
 * 0000000140C7997E: test    r8d, r8d
 * 0000000140C79981: jz      loc_140C79C05
 * 0000000140C79987: mov     edi, 0FFFFFFFFh
 * 0000000140C7998C: mov     al, [rcx]
 * 0000000140C7998E: add     rcx, r11
 * 0000000140C79991: mov     [rdx], al
 * 0000000140C79993: add     rdx, r11
 * 0000000140C79996: add     r8d, edi
 * 0000000140C79999: jnz     short loc_140C7998C
 * 0000000140C7999B: lea     edi, [r8+2]
 * 0000000140C7999F: jmp     loc_140C79C05
 * 0000000140C799A4: mov     rsi, [r13+9E0h]
 * 0000000140C799AB: mov     rax, [r13+6A8h]
 * 0000000140C799B2: mov     rcx, [rsi+rax]
 * 0000000140C799B6: test    rcx, rcx
 * 0000000140C799B9: jz      loc_140C79B2F
 * 0000000140C799BF: mov     r11d, 1
 * 0000000140C799C5: cmp     [r13+918h], r12d
 * 0000000140C799CC: jnz     loc_140C79ADF
 * 0000000140C799D2: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140C799DC: add     rax, r13
 * 0000000140C799DF: mov     [r13+920h], rax
 * 0000000140C799E6: mov     [r13+928h], r12
 * 0000000140C799ED: mov     qword ptr [r13+930h], 104h
 * 0000000140C799F8: mov     [r13+938h], rcx
 * 0000000140C799FF: mov     [r13+918h], r11d
 * 0000000140C79A06: mov     ecx, [r13+9D8h]
 * 0000000140C79A0D: bt      ecx, 1Dh
 * 0000000140C79A11: jb      loc_140C79ADF
 * 0000000140C79A17: test    dword ptr [r13+9DCh], 200000h
 * 0000000140C79A22: jz      loc_140C79ADF
 * 0000000140C79A28: test    r11b, cl
 * 0000000140C79A2B: jz      loc_140C79ADF
 * 0000000140C79A31: mov     ecx, [r13+0A74h]
 * 0000000140C79A38: mov     eax, [r13+804h]
 * 0000000140C79A3F: mov     r10, [r13+838h]
 * 0000000140C79A46: sub     eax, ecx
 * 0000000140C79A48: mov     r8, [r13+0A78h]
 * 0000000140C79A4F: lea     rdx, [rcx+r13]
 * 0000000140C79A53: mov     ecx, eax
 * 0000000140C79A55: shr     rcx, 3
 * 0000000140C79A59: lea     r9, [rdx+rcx*8]
 * 0000000140C79A5D: jmp     short loc_140C79A80
 * 0000000140C79A5F: xor     [rdx], r8
 * 0000000140C79A62: mov     rax, [rdx]
 * 0000000140C79A65: movzx   ecx, r8b
 * 0000000140C79A69: xor     rax, r10
 * 0000000140C79A6C: and     ecx, 3Fh
 * 0000000140C79A6F: ror     r8, cl
 * 0000000140C79A72: add     r8, rax
 * 0000000140C79A75: xor     r8, 0F05h
 * 0000000140C79A7C: add     rdx, 8
 * 0000000140C79A80: cmp     rdx, r9
 * 0000000140C79A83: jnz     short loc_140C79A5F
 * 0000000140C79A85: btr     dword ptr [r13+9DCh], 15h
 * 0000000140C79A8E: cmp     r8, [r13+0A80h]
 * 0000000140C79A95: jz      short loc_140C79ADF
 * 0000000140C79A97: mov     ecx, [r13+804h]
 * 0000000140C79A9E: mov     rax, [r13+588h]
 * 0000000140C79AA5: mov     [rax], r13
 * 0000000140C79AA8: mov     [rax+10h], ecx
 * 0000000140C79AAB: mov     rcx, [r13+0A80h]
 * 0000000140C79AB2: cmp     [r13+918h], r12d
 * 0000000140C79AB9: jnz     short loc_140C79AC9
 * 0000000140C79ABB: mov     rax, [r13+588h]
 * 0000000140C79AC2: xor     rcx, r8
 * 0000000140C79AC5: mov     [rax+18h], rcx
 * 0000000140C79AC9: xor     edx, edx
 * 0000000140C79ACB: mov     r9d, 100h
 * 0000000140C79AD1: mov     rcx, r13
 * 0000000140C79AD4: call    sub_140C7F03C
 * 0000000140C79AD9: mov     r11d, 1
 * 0000000140C79ADF: mov     edi, 5
 * 0000000140C79AE4: lea     rcx, [r13+918h]
 * 0000000140C79AEB: lea     rdx, [rbp+7B0h+var_500]
 * 0000000140C79AF2: lea     r8d, [rdi+23h]
 * 0000000140C79AF6: mov     rax, [rcx]
 * 0000000140C79AF9: add     r8d, 0FFFFFFF8h
 * 0000000140C79AFD: mov     [rdx], rax
 * 0000000140C79B00: add     rcx, 8
 * 0000000140C79B04: add     rdx, 8
 * 0000000140C79B08: sub     rdi, r11
 * 0000000140C79B0B: jnz     short loc_140C79AF6
 * 0000000140C79B0D: mov     edi, 2
 * 0000000140C79B12: test    r8d, r8d
 * 0000000140C79B15: jz      short loc_140C79B2F
 * 0000000140C79B17: mov     edi, 0FFFFFFFFh
 * 0000000140C79B1C: mov     al, [rcx]
 * 0000000140C79B1E: add     rcx, r11
 * 0000000140C79B21: mov     [rdx], al
 * 0000000140C79B23: add     rdx, r11
 * 0000000140C79B26: add     r8d, edi
 * 0000000140C79B29: jnz     short loc_140C79B1C
 * 0000000140C79B2B: lea     edi, [r8+2]
 * 0000000140C79B2F: lock or [rsp+8B0h+var_8B0], r12d
 * 0000000140C79B34: mov     rax, [r13+6A8h]
 * 0000000140C79B3B: mov     [rsi+rax], rbx
 * 0000000140C79B3F: jmp     loc_140C79C05
 * 0000000140C79B44: mov     rax, [r13+7E0h]
 * 0000000140C79B4B: mov     [rax+80h], r8
 * 0000000140C79B52: jmp     loc_140C79C05
 * 0000000140C79B57: mov     rcx, [r13+7E0h]
 * 0000000140C79B5E: mov     rax, [r13+638h]
 * 0000000140C79B65: mov     [rcx+rax], r8
 * 0000000140C79B69: jmp     loc_140C79C05
 * 0000000140C79B6E: rdtsc
 * 0000000140C79B70: shl     rdx, 20h
 * 0000000140C79B74: or      rax, rdx
 * 0000000140C79B77: mov     rcx, rax
 * 0000000140C79B7A: mov     rdx, rax
 * 0000000140C79B7D: ror     rcx, 3
 * 0000000140C79B81: mov     rax, r14
 * 0000000140C79B84: xor     rdx, rcx
 * 0000000140C79B87: mul     rdx
 * 0000000140C79B8A: mov     rcx, rdx
 * 0000000140C79B8D: xor     rcx, rax
 * 0000000140C79B90: mov     rax, 0ABCC77118461CEFDh
 * 0000000140C79B9A: mul     rcx
 * 0000000140C79B9D: shr     rdx, 1Ah
 * 0000000140C79BA1: sub     rdx, 0Ch
 * 0000000140C79BA5: imul    r10, rdx, 5F5E100h
 * 0000000140C79BAC: sub     r10, rcx
 * 0000000140C79BAF: rdtsc
 * 0000000140C79BB1: shl     rdx, 20h
 * 0000000140C79BB5: or      rax, rdx
 * 0000000140C79BB8: mov     [rsp+8B0h+BugCheckParameter4], r8
 * 0000000140C79BBD: mov     rcx, rax
 * 0000000140C79BC0: mov     rdx, rax
 * 0000000140C79BC3: ror     rcx, 3
 * 0000000140C79BC7: mov     rax, r14
 * 0000000140C79BCA: xor     rdx, rcx
 * 0000000140C79BCD: xor     r8d, r8d
 * 0000000140C79BD0: mul     rdx
 * 0000000140C79BD3: mov     rcx, rsi
 * 0000000140C79BD6: mov     r9, rdx
 * 0000000140C79BD9: xor     r9, rax
 * 0000000140C79BDC: mov     rax, 346DC5D63886594Bh
 * 0000000140C79BE6: mul     r9
 * 0000000140C79BE9: shr     rdx, 0Bh
 * 0000000140C79BED: imul    eax, edx, 2710h
 * 0000000140C79BF3: mov     rdx, r10
 * 0000000140C79BF6: sub     r9d, eax
 * 0000000140C79BF9: mov     rax, [r13+1E8h]
 * 0000000140C79C00: call    KeGuardDispatchICall
 * 0000000140C79C05: cmp     [rbp+7B0h+var_500], r12d
 * 0000000140C79C0C: jz      loc_140C7A18C
 * 0000000140C79C12: mov     r9d, [r13+9D8h]
 * 0000000140C79C19: bt      r9d, 0Eh
 * 0000000140C79C1E: jb      loc_140C7A18C
 * 0000000140C79C24: mov     rbx, [rbp+7B0h+var_4E8]
 * 0000000140C79C2B: mov     rsi, [rbp+7B0h+var_4E0]
 * 0000000140C79C32: mov     r14, [rbp+7B0h+var_4F0]
 * 0000000140C79C39: mov     r15, [rbp+7B0h+var_4F8]
 * 0000000140C79C40: mov     [rbp+7B0h+var_768], rbx
 * 0000000140C79C44: mov     [rbp+7B0h+var_7D0], rsi
 * 0000000140C79C48: mov     [rbp+7B0h+var_7E8], r14
 * 0000000140C79C4C: mov     [rbp+7B0h+var_730], r15
 * 0000000140C79C53: mov     rax, cr8
 * 0000000140C79C57: cmp     al, dil
 * 0000000140C79C5A: jnb     short loc_140C79C6B
 * 0000000140C79C5C: mov     rax, cr8
 * 0000000140C79C60: mov     cr8, rdi
 * 0000000140C79C64: mov     r9d, [r13+9D8h]
 * 0000000140C79C6B: mov     r8, gs:20h
 * 0000000140C79C74: mov     rax, [r13+640h]
 * 0000000140C79C7B: mov     rcx, gs:20h
 * 0000000140C79C84: mov     r10, [r8+rax]
 * 0000000140C79C88: mov     rax, [r13+648h]
 * 0000000140C79C8F: mov     [rbp+7B0h+var_828], r10
 * 0000000140C79C93: mov     rdx, [rax+r8]
 * 0000000140C79C97: mov     rax, [r13+658h]
 * 0000000140C79C9E: add     rdx, [r13+788h]
 * 0000000140C79CA5: mov     r11, [rcx+rax]
 * 0000000140C79CA9: lea     rax, [rbp+7B0h+var_6F8]
 * 0000000140C79CB0: mov     [rsp+8B0h+var_840], r11
 * 0000000140C79CB5: cmp     rax, r10
 * 0000000140C79CB8: ja      short loc_140C79CD3
 * 0000000140C79CBA: mov     eax, [r13+5FCh]
 * 0000000140C79CC1: mov     rcx, r10
 * 0000000140C79CC4: sub     rcx, rax
 * 0000000140C79CC7: lea     rax, [rbp+7B0h+var_6F8]
 * 0000000140C79CCE: cmp     rax, rcx
 * 0000000140C79CD1: jnb     short loc_140C79D1A
 * 0000000140C79CD3: mov     rax, [r13+650h]
 * 0000000140C79CDA: cmp     [r8+rax], r12b
 * 0000000140C79CDE: jz      short loc_140C79D0B
 * 0000000140C79CE0: lea     rax, [rbp+7B0h+var_6F8]
 * 0000000140C79CE7: cmp     rax, rdx
 * 0000000140C79CEA: ja      short loc_140C79D0B
 * 0000000140C79CEC: mov     eax, [r13+5F8h]
 * 0000000140C79CF3: mov     rcx, rdx
 * 0000000140C79CF6: sub     rcx, rax
 * 0000000140C79CF9: lea     rax, [rbp+7B0h+var_6F8]
 * 0000000140C79D00: cmp     rax, rcx
 * 0000000140C79D03: jb      short loc_140C79D0B
 * 0000000140C79D05: mov     [rbp+7B0h+var_828], rdx
 * 0000000140C79D09: jmp     short loc_140C79D1A
 * 0000000140C79D0B: mov     rax, [r13+688h]
 * 0000000140C79D12: mov     rax, [r11+rax]
 * 0000000140C79D16: mov     [rbp+7B0h+var_828], rax
 * 0000000140C79D1A: bt      r9d, 1Ah
 * 0000000140C79D1F: jb      loc_140C7A3AE
 * 0000000140C79D25: test    dword ptr [r13+9DCh], 400000h
 * 0000000140C79D30: mov     [rbp+7B0h+var_728], r12
 * 0000000140C79D37: jnz     short loc_140C79D4E
 * 0000000140C79D39: mov     rcx, cr0
 * 0000000140C79D3C: mov     rax, rcx
 * 0000000140C79D3F: mov     [rbp+7B0h+var_728], rcx
 * 0000000140C79D46: btr     rax, 10h
 * 0000000140C79D4B: mov     cr0, rax
 * 0000000140C79D4E: mov     esi, [r13+0AE8h]
 * 0000000140C79D55: lea     r11, [r13+0AF0h]
 * 0000000140C79D5C: shl     rsi, 4
 * 0000000140C79D60: mov     edx, r12d
 * 0000000140C79D63: add     rsi, r11
 * 0000000140C79D66: mov     [rbp+7B0h+var_788], r11
 * 0000000140C79D6A: mov     r9, rsi
 * 0000000140C79D6D: mov     [rbp+7B0h+var_7A0], rsi
 * 0000000140C79D71: mov     [rsp+8B0h+var_858], rsi
 * 0000000140C79D76: cmp     [r13+0AECh], r12d
 * 0000000140C79D7D: jbe     short loc_140C79DCF
 * 0000000140C79D7F: mov     edi, 1
 * 0000000140C79D84: lea     ebx, [rdi+0Fh]
 * 0000000140C79D87: mov     rcx, [r9]
 * 0000000140C79D8A: mov     rax, [r9+8]
 * 0000000140C79D8E: mov     [rcx], rax
 * 0000000140C79D91: mov     rcx, cr4
 * 0000000140C79D94: test    rcx, 20080h
 * 0000000140C79D9B: jz      short loc_140C79DAD
 * 0000000140C79D9D: mov     rax, rcx
 * 0000000140C79DA0: btc     rax, 7
 * 0000000140C79DA5: mov     cr4, rax
 * 0000000140C79DA8: mov     cr4, rcx
 * 0000000140C79DAB: jmp     short loc_140C79DB3
 * 0000000140C79DAD: mov     rax, cr3
 * 0000000140C79DB0: mov     cr3, rax
 * 0000000140C79DB3: add     r9, rbx
 * 0000000140C79DB6: add     edx, edi
 * 0000000140C79DB8: cmp     edx, [r13+0AECh]
 * 0000000140C79DBF: jb      short loc_140C79D87
 * 0000000140C79DC1: mov     rbx, [rbp+7B0h+var_768]
 * 0000000140C79DC5: mov     edi, 2
 * 0000000140C79DCA: mov     [rsp+8B0h+var_858], r9
 * 0000000140C79DCF: mov     rcx, 7FFFFFFFF8h
 * 0000000140C79DD9: cmp     r11, rsi
 * 0000000140C79DDC: jnb     loc_140C7A04A
 * 0000000140C79DE2: test    dword ptr [r13+9DCh], 400000h
 * 0000000140C79DED: mov     r14d, [r11+8]
 * 0000000140C79DF1: mov     r8, [r11]
 * 0000000140C79DF4: mov     dword ptr [rbp+7B0h+arg_8], r14d
 * 0000000140C79DFB: jnz     short loc_140C79E51
 * 0000000140C79DFD: mov     edx, r14d
 * 0000000140C79E00: mov     rcx, r9
 * 0000000140C79E03: mov     ebx, 1
 * 0000000140C79E08: cmp     r14d, 8
 * 0000000140C79E0C: jb      short loc_140C79E2B
 * 0000000140C79E0E: mov     r10d, r14d
 * 0000000140C79E11: shr     r10, 3
 * 0000000140C79E15: mov     rax, [rcx]
 * 0000000140C79E18: add     edx, 0FFFFFFF8h
 * 0000000140C79E1B: mov     [r8], rax
 * 0000000140C79E1E: add     rcx, 8
 * 0000000140C79E22: add     r8, 8
 * 0000000140C79E26: sub     r10, rbx
 * 0000000140C79E29: jnz     short loc_140C79E15
 * 0000000140C79E2B: test    edx, edx
 * 0000000140C79E2D: jz      loc_140C7A010
 * 0000000140C79E33: sub     r8, rcx
 * 0000000140C79E36: mov     esi, 0FFFFFFFFh
 * 0000000140C79E3B: mov     al, [rcx]
 * 0000000140C79E3D: mov     [rcx+r8], al
 * 0000000140C79E41: add     rcx, rbx
 * 0000000140C79E44: add     edx, esi
 * 0000000140C79E46: jnz     short loc_140C79E3B
 * 0000000140C79E48: mov     rsi, [rbp+7B0h+var_7A0]
 * 0000000140C79E4C: jmp     loc_140C7A010
 * 0000000140C79E51: mov     rcx, r8
 * 0000000140C79E54: mov     [rbp+7B0h+var_780], r9
 * 0000000140C79E58: and     ecx, 0FFFh
 * 0000000140C79E5E: lea     rdx, [r14+0FFFh]
 * 0000000140C79E65: add     rdx, rcx
 * 0000000140C79E68: mov     r13d, r14d
 * 0000000140C79E6B: shr     rdx, 0Ch
 * 0000000140C79E6F: test    edx, edx
 * 0000000140C79E71: jz      loc_140C7A009
 * 0000000140C79E77: mov     rdi, [rbp+7B0h+arg_0]
 * 0000000140C79E7E: mov     r14d, 4
 * 0000000140C79E84: mov     eax, edx
 * 0000000140C79E86: mov     esi, 20080h
 * 0000000140C79E8B: mov     [rbp+7B0h+var_7A8], rax
 * 0000000140C79E8F: mov     r9, 7FFFFFFFF8h
 * 0000000140C79E99: lea     r15d, [r14-3]
 * 0000000140C79E9D: mov     rbx, [rdi+5D8h]
 * 0000000140C79EA4: lea     rcx, [rbp+7B0h+var_1C8]
 * 0000000140C79EAB: mov     rax, r8
 * 0000000140C79EAE: mov     rdx, r14
 * 0000000140C79EB1: shr     rax, 9
 * 0000000140C79EB5: mov     r10d, r14d
 * 0000000140C79EB8: and     rax, r9
 * 0000000140C79EBB: add     rax, rbx
 * 0000000140C79EBE: mov     [rcx], rax
 * 0000000140C79EC1: lea     rcx, [rcx+8]
 * 0000000140C79EC5: shr     rax, 9
 * 0000000140C79EC9: and     rax, r9
 * 0000000140C79ECC: add     rax, rbx
 * 0000000140C79ECF: sub     rdx, r15
 * 0000000140C79ED2: jnz     short loc_140C79EBE
 * 0000000140C79ED4: mov     eax, 0FFFFFFFFh
 * 0000000140C79ED9: add     r10d, eax
 * 0000000140C79EDC: jz      short loc_140C79EF0
 * 0000000140C79EDE: mov     rax, [rbp+r10*8+7B0h+var_1C8]
 * 0000000140C79EE6: mov     ecx, [rax]
 * 0000000140C79EE8: shr     cl, 7
 * 0000000140C79EEB: test    r15b, cl
 * 0000000140C79EEE: jz      short loc_140C79ED4
 * 0000000140C79EF0: mov     r12, [rbp+r10*8+7B0h+var_1C8]
 * 0000000140C79EF8: mov     [rbp+7B0h+var_820], r12
 * 0000000140C79EFC: mov     rax, [r12]
 * 0000000140C79F00: or      rax, 62h
 * 0000000140C79F04: mov     [r12], rax
 * 0000000140C79F08: mov     rdx, cr4
 * 0000000140C79F0B: test    rsi, rdx
 * 0000000140C79F0E: jz      short loc_140C79F20
 * 0000000140C79F10: mov     rcx, rdx
 * 0000000140C79F13: btc     rcx, 7
 * 0000000140C79F18: mov     cr4, rcx
 * 0000000140C79F1B: mov     cr4, rdx
 * 0000000140C79F1E: jmp     short loc_140C79F26
 * 0000000140C79F20: mov     rcx, cr3
 * 0000000140C79F23: mov     cr3, rcx
 * 0000000140C79F26: mov     edx, 1000h
 * 0000000140C79F2B: mov     ecx, r8d
 * 0000000140C79F2E: and     ecx, 0FFFh
 * 0000000140C79F34: mov     r10d, r13d
 * 0000000140C79F37: sub     edx, ecx
 * 0000000140C79F39: mov     rbx, r8
 * 0000000140C79F3C: cmp     edx, r13d
 * 0000000140C79F3F: cmovb   r10d, edx
 * 0000000140C79F43: mov     rdx, [rbp+7B0h+var_780]
 * 0000000140C79F47: mov     r15d, r10d
 * 0000000140C79F4A: cmp     r10d, 8
 * 0000000140C79F4E: jb      short loc_140C79F82
 * 0000000140C79F50: mov     r12d, r10d
 * 0000000140C79F53: mov     r9d, 1
 * 0000000140C79F59: shr     r12, 3
 * 0000000140C79F5D: mov     rcx, [rdx]
 * 0000000140C79F60: add     r15d, 0FFFFFFF8h
 * 0000000140C79F64: mov     [rbx], rcx
 * 0000000140C79F67: add     rdx, 8
 * 0000000140C79F6B: add     rbx, 8
 * 0000000140C79F6F: sub     r12, r9
 * 0000000140C79F72: jnz     short loc_140C79F5D
 * 0000000140C79F74: mov     r12, [rbp+7B0h+var_820]
 * 0000000140C79F78: mov     r9, 7FFFFFFFF8h
 * 0000000140C79F82: test    r15d, r15d
 * 0000000140C79F85: jz      short loc_140C79FB3
 * 0000000140C79F87: sub     rbx, rdx
 * 0000000140C79F8A: mov     edi, 0FFFFFFFFh
 * 0000000140C79F8F: mov     r9d, 1
 * 0000000140C79F95: mov     cl, [rdx]
 * 0000000140C79F97: mov     [rbx+rdx], cl
 * 0000000140C79F9A: add     rdx, r9
 * 0000000140C79F9D: add     r15d, edi
 * 0000000140C79FA0: jnz     short loc_140C79F95
 * 0000000140C79FA2: mov     rdi, [rbp+7B0h+arg_0]
 * 0000000140C79FA9: mov     r9, 7FFFFFFFF8h
 * 0000000140C79FB3: mov     ecx, r10d
 * 0000000140C79FB6: add     [rbp+7B0h+var_780], rcx
 * 0000000140C79FBA: add     r8, rcx
 * 0000000140C79FBD: sub     r13d, r10d
 * 0000000140C79FC0: mov     [r12], rax
 * 0000000140C79FC4: mov     rcx, cr4
 * 0000000140C79FC7: test    rsi, rcx
 * 0000000140C79FCA: jz      short loc_140C79FDC
 * 0000000140C79FCC: mov     rax, rcx
 * 0000000140C79FCF: btc     rax, 7
 * 0000000140C79FD4: mov     cr4, rax
 * 0000000140C79FD7: mov     cr4, rcx
 * 0000000140C79FDA: jmp     short loc_140C79FE2
 * 0000000140C79FDC: mov     rax, cr3
 * 0000000140C79FDF: mov     cr3, rax
 * 0000000140C79FE2: mov     r15d, 1
 * 0000000140C79FE8: sub     [rbp+7B0h+var_7A8], r15
 * 0000000140C79FEC: jnz     loc_140C79E9D
 * 0000000140C79FF2: mov     r9, [rsp+8B0h+var_858]
 * 0000000140C79FF7: xor     r12d, r12d
 * 0000000140C79FFA: mov     r11, [rbp+7B0h+var_788]
 * 0000000140C79FFE: mov     rsi, [rbp+7B0h+var_7A0]
 * 0000000140C7A002: mov     r14d, dword ptr [rbp+7B0h+arg_8]
 * 0000000140C7A009: mov     r13, [rbp+7B0h+arg_0]
 * 0000000140C7A010: add     r11, 10h
 * 0000000140C7A014: mov     eax, r14d
 * 0000000140C7A017: add     r9, rax
 * 0000000140C7A01A: mov     [rbp+7B0h+var_788], r11
 * 0000000140C7A01E: mov     [rsp+8B0h+var_858], r9
 * 0000000140C7A023: cmp     r11, rsi
 * 0000000140C7A026: jb      loc_140C79DE2
 * 0000000140C7A02C: mov     rbx, [rbp+7B0h+var_768]
 * 0000000140C7A030: mov     edi, 2
 * 0000000140C7A035: mov     r14, [rbp+7B0h+var_7E8]
 * 0000000140C7A039: mov     rcx, 7FFFFFFFF8h
 * 0000000140C7A043: mov     r15, [rbp+7B0h+var_730]
 * 0000000140C7A04A: test    dword ptr [r13+9DCh], 400000h
 * 0000000140C7A055: jnz     short loc_140C7A070
 * 0000000140C7A057: mov     rax, [r13+228h]
 * 0000000140C7A05E: mov     byte ptr [rax], 0C3h
 * 0000000140C7A061: mov     rax, [rbp+7B0h+var_728]
 * 0000000140C7A068: mov     cr0, rax
 * 0000000140C7A06B: jmp     loc_140C7A3A5
 * 0000000140C7A070: mov     [rbp+7B0h+var_7E0], 0C3h
 * 0000000140C7A074: lea     r8, [rbp+7B0h+var_7E0]
 * 0000000140C7A078: mov     r9, [r13+228h]
 * 0000000140C7A07F: mov     r11d, 4
 * 0000000140C7A085: mov     rdx, [r13+5D8h]
 * 0000000140C7A08C: mov     rax, r9
 * 0000000140C7A08F: shr     rax, 9
 * 0000000140C7A093: mov     r10d, r11d
 * 0000000140C7A096: and     rax, rcx
 * 0000000140C7A099: mov     rsi, 7FFFFFFFF8h
 * 0000000140C7A0A3: add     rax, rdx
 * 0000000140C7A0A6: lea     rcx, [rbp+7B0h+var_1A8]
 * 0000000140C7A0AD: mov     [rcx], rax
 * 0000000140C7A0B0: lea     rcx, [rcx+8]
 * 0000000140C7A0B4: shr     rax, 9
 * 0000000140C7A0B8: and     rax, rsi
 * 0000000140C7A0BB: add     rax, rdx
 * 0000000140C7A0BE: sub     r11, 1
 * 0000000140C7A0C2: jnz     short loc_140C7A0AD
 * 0000000140C7A0C4: mov     eax, 0FFFFFFFFh
 * 0000000140C7A0C9: add     r10d, eax
 * 0000000140C7A0CC: jz      short loc_140C7A0E4
 * 0000000140C7A0CE: mov     rax, [rbp+r10*8+7B0h+var_1A8]
 * 0000000140C7A0D6: mov     ecx, [rax]
 * 0000000140C7A0D8: mov     eax, 1
 * 0000000140C7A0DD: shr     cl, 7
 * 0000000140C7A0E0: test    al, cl
 * 0000000140C7A0E2: jz      short loc_140C7A0C4
 * 0000000140C7A0E4: mov     r11, [rbp+r10*8+7B0h+var_1A8]
 * 0000000140C7A0EC: mov     rax, [r11]
 * 0000000140C7A0EF: or      rax, 62h
 * 0000000140C7A0F3: mov     [r11], rax
 * 0000000140C7A0F6: mov     rdx, cr4
 * 0000000140C7A0F9: mov     esi, 20080h
 * 0000000140C7A0FE: test    rsi, rdx
 * 0000000140C7A101: jz      short loc_140C7A113
 * 0000000140C7A103: mov     rcx, rdx
 * 0000000140C7A106: btc     rcx, 7
 * 0000000140C7A10B: mov     cr4, rcx
 * 0000000140C7A10E: mov     cr4, rdx
 * 0000000140C7A111: jmp     short loc_140C7A119
 * 0000000140C7A113: mov     rcx, cr3
 * 0000000140C7A116: mov     cr3, rcx
 * 0000000140C7A119: mov     ecx, r9d
 * 0000000140C7A11C: mov     r10d, 1000h
 * 0000000140C7A122: and     ecx, 0FFFh
 * 0000000140C7A128: sub     r10d, ecx
 * 0000000140C7A12B: mov     ecx, 1
 * 0000000140C7A130: cmp     r10d, ecx
 * 0000000140C7A133: mov     edx, ecx
 * 0000000140C7A135: cmovb   edx, r10d
 * 0000000140C7A139: cmp     edx, 8
 * 0000000140C7A13C: jb      short loc_140C7A161
 * 0000000140C7A13E: mov     r10d, edx
 * 0000000140C7A141: mov     edi, ecx
 * 0000000140C7A143: shr     r10, 3
 * 0000000140C7A147: mov     rcx, [r8]
 * 0000000140C7A14A: add     edx, 0FFFFFFF8h
 * 0000000140C7A14D: mov     [r9], rcx
 * 0000000140C7A150: add     r8, 8
 * 0000000140C7A154: add     r9, 8
 * 0000000140C7A158: sub     r10, rdi
 * 0000000140C7A15B: jnz     short loc_140C7A147
 * 0000000140C7A15D: lea     edi, [r10+2]
 * 0000000140C7A161: test    edx, edx
 * 0000000140C7A163: jz      loc_140C7A384
 * 0000000140C7A169: sub     r9, r8
 * 0000000140C7A16C: mov     edi, 1
 * 0000000140C7A171: mov     r15d, 0FFFFFFFFh
 * 0000000140C7A177: mov     cl, [r8]
 * 0000000140C7A17A: mov     [r9+r8], cl
 * 0000000140C7A17E: add     r8, rdi
 * 0000000140C7A181: add     edx, r15d
 * 0000000140C7A184: jz      loc_140C7A378
 * 0000000140C7A18A: jmp     short loc_140C7A177
 * 0000000140C7A18C: test    dword ptr [r13+9D8h], 20000000h
 * 0000000140C7A197: jnz     short loc_140C7A1E8
 * 0000000140C7A199: cmp     dword ptr [rbp+7B0h+arg_8], r12d
 * 0000000140C7A1A0: jz      short loc_140C7A1E8
 * 0000000140C7A1A2: mov     ecx, [r13+944h]
 * 0000000140C7A1A9: sub     ecx, 1
 * 0000000140C7A1AC: jz      short loc_140C7A1C2
 * 0000000140C7A1AE: cmp     ecx, edi
 * 0000000140C7A1B0: jnz     short loc_140C7A1E8
 * 0000000140C7A1B2: mov     rax, [r13+370h]
 * 0000000140C7A1B9: mov     [r13+108h], rax
 * 0000000140C7A1C0: jmp     short loc_140C7A1E8
 * 0000000140C7A1C2: add     qword ptr [r13+7E8h], 0FFFFFFFFFFFFFFF8h
 * 0000000140C7A1CA: mov     rcx, [r13+7E8h]
 * 0000000140C7A1D1: mov     edx, [rcx]
 * 0000000140C7A1D3: mov     [r13+7F0h], edx
 * 0000000140C7A1DA: mov     rcx, [r13+238h]
 * 0000000140C7A1E1: mov     [r13+108h], rcx
 * 0000000140C7A1E8: mov     rax, r13
 * 0000000140C7A1EB: add     rsp, 878h
 * 0000000140C7A1F2: pop     r15
 * 0000000140C7A1F4: pop     r14
 * 0000000140C7A1F6: pop     r13
 * 0000000140C7A1F8: pop     r12
 * 0000000140C7A1FA: pop     rdi
 * 0000000140C7A1FB: pop     rsi
 * 0000000140C7A1FC: pop     rbx
 * 0000000140C7A1FD: pop     rbp
 * 0000000140C7A1FE: retn
 * 0000000140C7A200: mov     r9d, 5; BugCheckParameter3
 * 0000000140C7A206: mov     [rsp+8B0h+BugCheckParameter4], r8; BugCheckParameter4
 * 0000000140C7A20B: mov     [rbp+7B0h+var_6E0], 0E8000009h
 * 0000000140C7A215: mov     r8, rbx; BugCheckParameter2
 * 0000000140C7A218: mov     ecx, [rbp+7B0h+var_6E0]
 * 0000000140C7A21E: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A221: lea     edx, [r9+5]; BugCheckParameter1
 * 0000000140C7A225: call    KeBugCheckEx
 * 0000000140C7A22B: mov     r9d, 7; BugCheckParameter3
 * 0000000140C7A231: mov     [rbp+7B0h+var_6DC], 0E8000009h
 * 0000000140C7A23B: mov     ecx, [rbp+7B0h+var_6DC]
 * 0000000140C7A241: mov     r8, r15; BugCheckParameter2
 * 0000000140C7A244: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A247: mov     [rsp+8B0h+BugCheckParameter4], r12; BugCheckParameter4
 * 0000000140C7A24C: lea     edx, [r9+3]; BugCheckParameter1
 * 0000000140C7A250: call    KeBugCheckEx
 * 0000000140C7A256: xor     r9d, r9d; BugCheckParameter3
 * 0000000140C7A259: mov     [rsp+8B0h+BugCheckParameter4], r8; BugCheckParameter4
 * 0000000140C7A25E: mov     [rbp+7B0h+var_6D8], 0E8000009h
 * 0000000140C7A268: mov     r8, r15; BugCheckParameter2
 * 0000000140C7A26B: mov     ecx, [rbp+7B0h+var_6D8]
 * 0000000140C7A271: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A274: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140C7A278: call    KeBugCheckEx
 * 0000000140C7A27E: mov     r9d, 1; BugCheckParameter3
 * 0000000140C7A284: mov     [rbp+7B0h+var_6D4], 0E8000009h
 * 0000000140C7A28E: mov     ecx, [rbp+7B0h+var_6D4]
 * 0000000140C7A294: mov     r8, r15; BugCheckParameter2
 * 0000000140C7A297: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A29A: mov     [rsp+8B0h+BugCheckParameter4], r12; BugCheckParameter4
 * 0000000140C7A29F: lea     edx, [r9+9]; BugCheckParameter1
 * 0000000140C7A2A3: call    KeBugCheckEx
 * 0000000140C7A2A9: mov     r9d, eax; BugCheckParameter3
 * 0000000140C7A2AC: mov     r8, r15; BugCheckParameter2
 * 0000000140C7A2AF: xor     eax, eax
 * 0000000140C7A2B1: mov     [rbp+7B0h+var_6D0], 0E8000009h
 * 0000000140C7A2BB: mov     ecx, [rbp+7B0h+var_6D0]
 * 0000000140C7A2C1: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A2C4: mov     [rsp+8B0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140C7A2C9: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140C7A2CC: call    KeBugCheckEx
 * 0000000140C7A2D2: mov     r9d, eax; BugCheckParameter3
 * 0000000140C7A2D5: xor     eax, eax
 * 0000000140C7A2D7: mov     [rbp+7B0h+var_6CC], 0E8000009h
 * 0000000140C7A2E1: mov     ecx, [rbp+7B0h+var_6CC]
 * 0000000140C7A2E7: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A2EA: lea     edx, [rax+0Ah]; BugCheckParameter1
 * 0000000140C7A2ED: mov     [rsp+8B0h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140C7A2F2: call    KeBugCheckEx
 * 0000000140C7A2F8: mov     [rbp+7B0h+var_6A8], 0E8000009h
 * 0000000140C7A302: mov     r9, rdi; BugCheckParameter3
 * 0000000140C7A305: mov     ecx, [rbp+7B0h+var_6A8]
 * 0000000140C7A30B: mov     r8, r15; BugCheckParameter2
 * 0000000140C7A30E: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A311: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140C7A316: mov     [rsp+8B0h+BugCheckParameter4], r12; BugCheckParameter4
 * 0000000140C7A31B: call    KeBugCheckEx
 * 0000000140C7A321: mov     r9d, 3; BugCheckParameter3
 * 0000000140C7A327: mov     [rsp+8B0h+BugCheckParameter4], r8; BugCheckParameter4
 * 0000000140C7A32C: mov     [rbp+7B0h+var_6AC], 0E8000009h
 * 0000000140C7A336: mov     r8, r15; BugCheckParameter2
 * 0000000140C7A339: mov     ecx, [rbp+7B0h+var_6AC]
 * 0000000140C7A33F: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A342: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140C7A346: call    KeBugCheckEx
 * 0000000140C7A34C: mov     r8, [rbp+7B0h+var_7F0]; BugCheckParameter2
 * 0000000140C7A350: mov     r9d, 6; BugCheckParameter3
 * 0000000140C7A356: mov     [rbp+7B0h+var_6B0], 0E8000009h
 * 0000000140C7A360: mov     ecx, [rbp+7B0h+var_6B0]
 * 0000000140C7A366: ror     ecx, 7Bh; BugCheckCode
 * 0000000140C7A369: lea     edx, [r9+4]; BugCheckParameter1
 * 0000000140C7A36D: mov     [rsp+8B0h+BugCheckParameter4], rbx; BugCheckParameter4
 * 0000000140C7A372: call    KeBugCheckEx
 * 0000000140C7A378: mov     r15, [rbp+7B0h+var_730]
 * 0000000140C7A37F: mov     edi, 2
 * 0000000140C7A384: mov     [r11], rax
 * 0000000140C7A387: mov     rcx, cr4
 * 0000000140C7A38A: test    rsi, rcx
 * 0000000140C7A38D: jz      short loc_140C7A39F
 * 0000000140C7A38F: mov     rax, rcx
 * 0000000140C7A392: btc     rax, 7
 * 0000000140C7A397: mov     cr4, rax
 * 0000000140C7A39A: mov     cr4, rcx
 * 0000000140C7A39D: jmp     short loc_140C7A3A5
 * 0000000140C7A39F: mov     rax, cr3
 * 0000000140C7A3A2: mov     cr3, rax
 * 0000000140C7A3A5: mov     r11, [rsp+8B0h+var_840]
 * 0000000140C7A3AA: mov     rsi, [rbp+7B0h+var_7D0]
 * 0000000140C7A3AE: cmp     [r13+948h], r12d
 * 0000000140C7A3B5: jz      short loc_140C7A3C8
 * 0000000140C7A3B7: mov     rax, cr8
 * 0000000140C7A3BB: cmp     al, dil
 * 0000000140C7A3BE: jnb     short loc_140C7A3C8
 * 0000000140C7A3C0: mov     rax, cr8
 * 0000000140C7A3C4: mov     cr8, rdi
 * 0000000140C7A3C8: mov     ecx, [r13+948h]
 * 0000000140C7A3CF: test    ecx, ecx
 * 0000000140C7A3D1: jz      loc_140C7A497
 * 0000000140C7A3D7: sub     ecx, 1
 * 0000000140C7A3DA: jz      loc_140C7A48A
 * 0000000140C7A3E0: sub     ecx, 1
 * 0000000140C7A3E3: jz      loc_140C7A481
 * 0000000140C7A3E9: sub     ecx, 1
 * 0000000140C7A3EC: jz      loc_140C7A478
 * 0000000140C7A3F2: sub     ecx, 1
 * 0000000140C7A3F5: jz      short loc_140C7A43C
 * 0000000140C7A3F7: cmp     ecx, 1
 * 0000000140C7A3FA: jz      short loc_140C7A415
 * 0000000140C7A3FC: mov     rax, [r13+5B0h]
 * 0000000140C7A403: mov     ecx, 1
 * 0000000140C7A408: lock or [rax+340h], rcx
 * 0000000140C7A410: jmp     loc_140C7A497
 * 0000000140C7A415: mov     rcx, gs:20h
 * 0000000140C7A41E: mov     rax, [r13+658h]
 * 0000000140C7A425: mov     edx, [r13+9D8h]
 * 0000000140C7A42C: shr     edx, 9
 * 0000000140C7A42F: and     edx, 1Fh
 * 0000000140C7A432: mov     rcx, [rax+rcx]
 * 0000000140C7A436: lock bts [rcx], edx
 * 0000000140C7A43A: jmp     short loc_140C7A497
 * 0000000140C7A43C: mov     rcx, gs:20h
 * 0000000140C7A445: mov     rax, [r13+658h]
 * 0000000140C7A44C: mov     r8d, [r13+9D8h]
 * 0000000140C7A453: shr     r8d, 9
 * 0000000140C7A457: and     r8d, 1Fh
 * 0000000140C7A45B: mov     rcx, [rax+rcx]
 * 0000000140C7A45F: add     rcx, [r13+6B8h]
 * 0000000140C7A466: mov     rax, [r13+698h]
 * 0000000140C7A46D: mov     rdx, [rcx+rax]
 * 0000000140C7A471: lock bts [rdx], r8d
 * 0000000140C7A476: jmp     short loc_140C7A497
 * 0000000140C7A478: mov     rax, [r13+558h]
 * 0000000140C7A47F: jmp     short loc_140C7A491
 * 0000000140C7A481: mov     rax, [r13+550h]
 * 0000000140C7A488: jmp     short loc_140C7A491
 * 0000000140C7A48A: mov     rax, [r13+540h]
 * 0000000140C7A491: lock bts qword ptr [rax], 0
 * 0000000140C7A497: mov     rax, [r13+6A0h]
 * 0000000140C7A49E: mov     [r11+rax], r12
 * 0000000140C7A4A2: mov     rax, [r13+6B0h]
 * 0000000140C7A4A9: mov     [r11+rax], r12
 * 0000000140C7A4AD: mov     rcx, [r13+168h]
 * 0000000140C7A4B4: call    KeGuardCheckICall
 * 0000000140C7A4B9: mov     rax, [rbp+7B0h+var_828]
 * 0000000140C7A4BD: mov     r9, rsi
 * 0000000140C7A4C0: add     rax, 0FFFFFFFFFFFFFFF8h
 * 0000000140C7A4C4: mov     r8, r14
 * 0000000140C7A4C7: mov     [rsp+8B0h+var_880], rax
 * 0000000140C7A4CC: mov     rdx, r15
 * 0000000140C7A4CF: mov     rax, [r13+168h]
 * 0000000140C7A4D6: mov     ecx, 109h
 * 0000000140C7A4DB: mov     [rsp+8B0h+var_888], rax
 * 0000000140C7A4E0: mov     [rsp+8B0h+BugCheckParameter4], rbx
 * 0000000140C7A4E5: call    SdbpCheckDll
 */
