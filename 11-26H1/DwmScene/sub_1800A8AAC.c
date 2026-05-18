/*
 * XREFs of sub_1800A8AAC @ 0x1800A8AAC
 * Callers:
 *     sub_180002FF0 @ 0x180002FF0 (sub_180002FF0.c)
 *     sub_180003170 @ 0x180003170 (sub_180003170.c)
 *     sub_1800031E0 @ 0x1800031E0 (sub_1800031E0.c)
 *     sub_180003250 @ 0x180003250 (sub_180003250.c)
 *     sub_1800032C0 @ 0x1800032C0 (sub_1800032C0.c)
 *     sub_180003330 @ 0x180003330 (sub_180003330.c)
 *     sub_1800033A0 @ 0x1800033A0 (sub_1800033A0.c)
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_180003480 @ 0x180003480 (sub_180003480.c)
 *     sub_1800034F0 @ 0x1800034F0 (sub_1800034F0.c)
 *     sub_180003560 @ 0x180003560 (sub_180003560.c)
 *     sub_1800035D0 @ 0x1800035D0 (sub_1800035D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011E30 @ 0x180011E30 (sub_180011E30.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_180075D94 @ 0x180075D94 (sub_180075D94.c)
 *     sub_1800A8988 @ 0x1800A8988 (sub_1800A8988.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1800A8AAC @ 0x1800A8AAC
 * Reason: Hex-Rays returned no pseudocode for 0x1800A8AAC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800A8AAC: mov     rax, rsp
 * 00000001800A8AAF: mov     [rax+8], rbx
 * 00000001800A8AB3: mov     [rax+10h], rsi
 * 00000001800A8AB7: mov     [rax+18h], rdi
 * 00000001800A8ABB: push    rbp
 * 00000001800A8ABC: push    r12
 * 00000001800A8ABE: push    r13
 * 00000001800A8AC0: push    r14
 * 00000001800A8AC2: push    r15
 * 00000001800A8AC4: lea     rbp, [rax-8C88h]
 * 00000001800A8ACB: mov     eax, 8D60h
 * 00000001800A8AD0: call    __alloca_probe
 * 00000001800A8AD5: sub     rsp, rax
 * 00000001800A8AD8: mov     rax, cs:__security_cookie
 * 00000001800A8ADF: xor     rax, rsp
 * 00000001800A8AE2: mov     [rbp+8C80h+var_30], rax
 * 00000001800A8AE9: mov     r15d, 10h
 * 00000001800A8AEF: mov     ebx, cs:TlsIndex
 * 00000001800A8AF5: mov     rdi, gs:58h
 * 00000001800A8AFE: mov     rax, [rdi+rbx*8]
 * 00000001800A8B02: or      r14d, 0FFFFFFFFh
 * 00000001800A8B06: lea     esi, [r14+2]
 * 00000001800A8B0A: lea     r12d, [r14+0Ah]
 * 00000001800A8B0E: lea     r13, aStandardshader_1; "StandardShader/ShaderModel40/"
 * 00000001800A8B15: mov     eax, [r15+rax]
 * 00000001800A8B19: cmp     cs:dword_1801CE2B0, eax
 * 00000001800A8B1F: jle     loc_1800A8BED
 * 00000001800A8B25: lea     rcx, dword_1801CE2B0
 * 00000001800A8B2C: call    sub_18000D534
 * 00000001800A8B31: cmp     cs:dword_1801CE2B0, r14d
 * 00000001800A8B38: jnz     loc_1800A8BED
 * 00000001800A8B3E: lea     rax, unk_180188B20
 * 00000001800A8B45: mov     qword ptr [rsp+8D80h+var_8D38+8], rax
 * 00000001800A8B4A: lea     rax, unk_18018EF04
 * 00000001800A8B51: mov     qword ptr [rsp+8D80h+var_8D28], rax
 * 00000001800A8B56: mov     dword ptr [rsp+8D80h+var_8D28+8], 5
 * 00000001800A8B5E: mov     dword ptr [rsp+8D80h+var_8D28+0Ch], esi
 * 00000001800A8B62: call    sub_1800A8988
 * 00000001800A8B67: mov     r8, rax
 * 00000001800A8B6A: mov     r9d, r12d
 * 00000001800A8B6D: xor     edx, edx
 * 00000001800A8B6F: lea     rcx, [rbp+8C80h+var_4650]
 * 00000001800A8B76: call    sub_180075CF8
 * 00000001800A8B7B: nop
 * 00000001800A8B7C: mov     r8, rax
 * 00000001800A8B7F: mov     rdx, r13
 * 00000001800A8B82: lea     rcx, [rbp+8C80h+var_46B0]
 * 00000001800A8B89: call    sub_18001C928
 * 00000001800A8B8E: nop
 * 00000001800A8B8F: lea     r8, aPixel; "/Pixel"
 * 00000001800A8B96: mov     rdx, rax
 * 00000001800A8B99: lea     rcx, [rbp+8C80h+var_69F0]
 * 00000001800A8BA0: call    sub_18001C87C
 * 00000001800A8BA5: movups  xmm0, [rsp+8D80h+var_8D38+8]
 * 00000001800A8BAA: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A8BAF: movups  xmm1, [rsp+8D80h+var_8D28+8]
 * 00000001800A8BB4: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A8BB9: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A8BBE: mov     rcx, rax
 * 00000001800A8BC1: call    sub_180075D94
 * 00000001800A8BC6: nop
 * 00000001800A8BC7: lea     rcx, [rbp+8C80h+var_46B0]
 * 00000001800A8BCE: call    sub_180011E30
 * 00000001800A8BD3: nop
 * 00000001800A8BD4: lea     rcx, [rbp+8C80h+var_4650]
 * 00000001800A8BDB: call    sub_180011E30
 * 00000001800A8BE0: nop
 * 00000001800A8BE1: lea     rcx, dword_1801CE2B0
 * 00000001800A8BE8: call    sub_18000D4CC
 * 00000001800A8BED: mov     rax, [rdi+rbx*8]
 * 00000001800A8BF1: mov     eax, [r15+rax]
 * 00000001800A8BF5: cmp     cs:dword_1801CE2B4, eax
 * 00000001800A8BFB: jle     loc_1800A8CC7
 * 00000001800A8C01: lea     rcx, dword_1801CE2B4
 * 00000001800A8C08: call    sub_18000D534
 * 00000001800A8C0D: cmp     cs:dword_1801CE2B4, r14d
 * 00000001800A8C14: jnz     loc_1800A8CC7
 * 00000001800A8C1A: lea     rax, unk_180188120
 * 00000001800A8C21: mov     qword ptr [rsp+8D80h+var_8D18+8], rax
 * 00000001800A8C26: lea     rax, unk_180188B18
 * 00000001800A8C2D: mov     [rsp+8D80h+var_8D08], rax
 * 00000001800A8C32: mov     dword ptr [rbp+8C80h+var_8D00], 5
 * 00000001800A8C39: mov     dword ptr [rbp+8C80h+var_8D00+4], esi
 * 00000001800A8C3C: call    sub_1800A8988
 * 00000001800A8C41: mov     r8, rax
 * 00000001800A8C44: mov     r9d, r12d
 * 00000001800A8C47: mov     rdx, rsi
 * 00000001800A8C4A: lea     rcx, [rbp+8C80h+var_4590]
 * 00000001800A8C51: call    sub_180075CF8
 * 00000001800A8C56: nop
 * 00000001800A8C57: mov     r8, rax
 * 00000001800A8C5A: mov     rdx, r13
 * 00000001800A8C5D: lea     rcx, [rbp+8C80h+var_45F0]
 * 00000001800A8C64: call    sub_18001C928
 * 00000001800A8C69: nop
 * 00000001800A8C6A: lea     r8, aPixel; "/Pixel"
 * 00000001800A8C71: mov     rdx, rax
 * 00000001800A8C74: lea     rcx, [rbp+8C80h+var_6990]
 * 00000001800A8C7B: call    sub_18001C87C
 * 00000001800A8C80: movups  xmm0, [rsp+8D80h+var_8D18+8]
 * 00000001800A8C85: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A8C8A: movups  xmm1, [rbp+8C80h+var_8D00]
 * 00000001800A8C8E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A8C93: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A8C98: mov     rcx, rax
 * 00000001800A8C9B: call    sub_180075D94
 * 00000001800A8CA0: nop
 * 00000001800A8CA1: lea     rcx, [rbp+8C80h+var_45F0]
 * 00000001800A8CA8: call    sub_180011E30
 * 00000001800A8CAD: nop
 * 00000001800A8CAE: lea     rcx, [rbp+8C80h+var_4590]
 * 00000001800A8CB5: call    sub_180011E30
 * 00000001800A8CBA: nop
 * 00000001800A8CBB: lea     rcx, dword_1801CE2B4
 * 00000001800A8CC2: call    sub_18000D4CC
 * 00000001800A8CC7: mov     rax, [rdi+rbx*8]
 * 00000001800A8CCB: mov     eax, [r15+rax]
 * 00000001800A8CCF: cmp     cs:dword_1801CE2B8, eax
 * 00000001800A8CD5: jle     loc_1800A8DA0
 * 00000001800A8CDB: lea     rcx, dword_1801CE2B8
 * 00000001800A8CE2: call    sub_18000D534
 * 00000001800A8CE7: cmp     cs:dword_1801CE2B8, r14d
 * 00000001800A8CEE: jnz     loc_1800A8DA0
 * 00000001800A8CF4: lea     rax, unk_180188B20
 * 00000001800A8CFB: mov     qword ptr [rbp+8C80h+var_8CF0], rax
 * 00000001800A8CFF: lea     rax, unk_18018EF04
 * 00000001800A8D06: mov     qword ptr [rbp+8C80h+var_8CF0+8], rax
 * 00000001800A8D0A: mov     dword ptr [rbp+8C80h+var_8CE0], 5
 * 00000001800A8D11: mov     dword ptr [rbp+8C80h+var_8CE0+4], esi
 * 00000001800A8D14: call    sub_1800A8988
 * 00000001800A8D19: mov     r8, rax
 * 00000001800A8D1C: mov     r9d, r12d
 * 00000001800A8D1F: mov     edx, 2
 * 00000001800A8D24: lea     rcx, [rbp+8C80h+var_44D0]
 * 00000001800A8D2B: call    sub_180075CF8
 * 00000001800A8D30: nop
 * 00000001800A8D31: mov     r8, rax
 * 00000001800A8D34: mov     rdx, r13
 * 00000001800A8D37: lea     rcx, [rbp+8C80h+var_4530]
 * 00000001800A8D3E: call    sub_18001C928
 * 00000001800A8D43: nop
 * 00000001800A8D44: lea     r8, aPixel; "/Pixel"
 * 00000001800A8D4B: mov     rdx, rax
 * 00000001800A8D4E: lea     rcx, [rbp+8C80h+var_6930]
 * 00000001800A8D55: call    sub_18001C87C
 * 00000001800A8D5A: movups  xmm0, [rbp+8C80h+var_8CF0]
 * 00000001800A8D5E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A8D63: movups  xmm1, [rbp+8C80h+var_8CE0]
 * 00000001800A8D67: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A8D6C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A8D71: mov     rcx, rax
 * 00000001800A8D74: call    sub_180075D94
 * 00000001800A8D79: nop
 * 00000001800A8D7A: lea     rcx, [rbp+8C80h+var_4530]
 * 00000001800A8D81: call    sub_180011E30
 * 00000001800A8D86: nop
 * 00000001800A8D87: lea     rcx, [rbp+8C80h+var_44D0]
 * 00000001800A8D8E: call    sub_180011E30
 * 00000001800A8D93: nop
 * 00000001800A8D94: lea     rcx, dword_1801CE2B8
 * 00000001800A8D9B: call    sub_18000D4CC
 * 00000001800A8DA0: mov     rax, [rdi+rbx*8]
 * 00000001800A8DA4: mov     eax, [r15+rax]
 * 00000001800A8DA8: cmp     cs:dword_1801CE2BC, eax
 * 00000001800A8DAE: jle     loc_1800A8E79
 * 00000001800A8DB4: lea     rcx, dword_1801CE2BC
 * 00000001800A8DBB: call    sub_18000D534
 * 00000001800A8DC0: cmp     cs:dword_1801CE2BC, r14d
 * 00000001800A8DC7: jnz     loc_1800A8E79
 * 00000001800A8DCD: lea     rax, unk_18017D8E0
 * 00000001800A8DD4: mov     qword ptr [rbp+8C80h+var_8CD0], rax
 * 00000001800A8DD8: lea     rax, unk_180180A84
 * 00000001800A8DDF: mov     qword ptr [rbp+8C80h+var_8CD0+8], rax
 * 00000001800A8DE3: mov     dword ptr [rbp+8C80h+var_8CC0], 5
 * 00000001800A8DEA: mov     dword ptr [rbp+8C80h+var_8CC0+4], esi
 * 00000001800A8DED: call    sub_1800A8988
 * 00000001800A8DF2: mov     r8, rax
 * 00000001800A8DF5: mov     r9d, r12d
 * 00000001800A8DF8: mov     edx, 4
 * 00000001800A8DFD: lea     rcx, [rbp+8C80h+var_4410]
 * 00000001800A8E04: call    sub_180075CF8
 * 00000001800A8E09: nop
 * 00000001800A8E0A: mov     r8, rax
 * 00000001800A8E0D: mov     rdx, r13
 * 00000001800A8E10: lea     rcx, [rbp+8C80h+var_4470]
 * 00000001800A8E17: call    sub_18001C928
 * 00000001800A8E1C: nop
 * 00000001800A8E1D: lea     r8, aPixel; "/Pixel"
 * 00000001800A8E24: mov     rdx, rax
 * 00000001800A8E27: lea     rcx, [rbp+8C80h+var_68D0]
 * 00000001800A8E2E: call    sub_18001C87C
 * 00000001800A8E33: movups  xmm0, [rbp+8C80h+var_8CD0]
 * 00000001800A8E37: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A8E3C: movups  xmm1, [rbp+8C80h+var_8CC0]
 * 00000001800A8E40: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A8E45: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A8E4A: mov     rcx, rax
 * 00000001800A8E4D: call    sub_180075D94
 * 00000001800A8E52: nop
 * 00000001800A8E53: lea     rcx, [rbp+8C80h+var_4470]
 * 00000001800A8E5A: call    sub_180011E30
 * 00000001800A8E5F: nop
 * 00000001800A8E60: lea     rcx, [rbp+8C80h+var_4410]
 * 00000001800A8E67: call    sub_180011E30
 * 00000001800A8E6C: nop
 * 00000001800A8E6D: lea     rcx, dword_1801CE2BC
 * 00000001800A8E74: call    sub_18000D4CC
 * 00000001800A8E79: mov     rax, [rdi+rbx*8]
 * 00000001800A8E7D: mov     ecx, [r15+rax]
 * 00000001800A8E81: cmp     cs:dword_1801CE2C0, ecx
 * 00000001800A8E87: jle     loc_1800A8F52
 * 00000001800A8E8D: lea     rcx, dword_1801CE2C0
 * 00000001800A8E94: call    sub_18000D534
 * 00000001800A8E99: cmp     cs:dword_1801CE2C0, r14d
 * 00000001800A8EA0: jnz     loc_1800A8F52
 * 00000001800A8EA6: lea     rax, unk_180176950
 * 00000001800A8EAD: mov     qword ptr [rbp+8C80h+var_8CB0], rax
 * 00000001800A8EB1: lea     rax, unk_180177348
 * 00000001800A8EB8: mov     qword ptr [rbp+8C80h+var_8CB0+8], rax
 * 00000001800A8EBC: mov     dword ptr [rbp+8C80h+var_8CA0], 5
 * 00000001800A8EC3: mov     dword ptr [rbp+8C80h+var_8CA0+4], esi
 * 00000001800A8EC6: call    sub_1800A8988
 * 00000001800A8ECB: mov     r8, rax
 * 00000001800A8ECE: mov     r9d, r12d
 * 00000001800A8ED1: mov     edx, 5
 * 00000001800A8ED6: lea     rcx, [rbp+8C80h+var_4350]
 * 00000001800A8EDD: call    sub_180075CF8
 * 00000001800A8EE2: nop
 * 00000001800A8EE3: mov     r8, rax
 * 00000001800A8EE6: mov     rdx, r13
 * 00000001800A8EE9: lea     rcx, [rbp+8C80h+var_43B0]
 * 00000001800A8EF0: call    sub_18001C928
 * 00000001800A8EF5: nop
 * 00000001800A8EF6: lea     r8, aPixel; "/Pixel"
 * 00000001800A8EFD: mov     rdx, rax
 * 00000001800A8F00: lea     rcx, [rbp+8C80h+var_6870]
 * 00000001800A8F07: call    sub_18001C87C
 * 00000001800A8F0C: movups  xmm0, [rbp+8C80h+var_8CB0]
 * 00000001800A8F10: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A8F15: movups  xmm1, [rbp+8C80h+var_8CA0]
 * 00000001800A8F19: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A8F1E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A8F23: mov     rcx, rax
 * 00000001800A8F26: call    sub_180075D94
 * 00000001800A8F2B: nop
 * 00000001800A8F2C: lea     rcx, [rbp+8C80h+var_43B0]
 * 00000001800A8F33: call    sub_180011E30
 * 00000001800A8F38: nop
 * 00000001800A8F39: lea     rcx, [rbp+8C80h+var_4350]
 * 00000001800A8F40: call    sub_180011E30
 * 00000001800A8F45: nop
 * 00000001800A8F46: lea     rcx, dword_1801CE2C0
 * 00000001800A8F4D: call    sub_18000D4CC
 * 00000001800A8F52: mov     rax, [rdi+rbx*8]
 * 00000001800A8F56: mov     eax, [r15+rax]
 * 00000001800A8F5A: cmp     cs:dword_1801CE2C4, eax
 * 00000001800A8F60: jle     loc_1800A902B
 * 00000001800A8F66: lea     rcx, dword_1801CE2C4
 * 00000001800A8F6D: call    sub_18000D534
 * 00000001800A8F72: cmp     cs:dword_1801CE2C4, r14d
 * 00000001800A8F79: jnz     loc_1800A902B
 * 00000001800A8F7F: lea     rax, unk_18017D8E0
 * 00000001800A8F86: mov     qword ptr [rbp+8C80h+var_8C90], rax
 * 00000001800A8F8A: lea     rax, unk_180180A84
 * 00000001800A8F91: mov     qword ptr [rbp+8C80h+var_8C90+8], rax
 * 00000001800A8F95: mov     dword ptr [rbp+8C80h+var_8C80], 5
 * 00000001800A8F9C: mov     dword ptr [rbp+8C80h+var_8C80+4], esi
 * 00000001800A8F9F: call    sub_1800A8988
 * 00000001800A8FA4: mov     r8, rax
 * 00000001800A8FA7: mov     r9d, r12d
 * 00000001800A8FAA: mov     edx, 6
 * 00000001800A8FAF: lea     rcx, [rbp+8C80h+var_4290]
 * 00000001800A8FB6: call    sub_180075CF8
 * 00000001800A8FBB: nop
 * 00000001800A8FBC: mov     r8, rax
 * 00000001800A8FBF: mov     rdx, r13
 * 00000001800A8FC2: lea     rcx, [rbp+8C80h+var_42F0]
 * 00000001800A8FC9: call    sub_18001C928
 * 00000001800A8FCE: nop
 * 00000001800A8FCF: lea     r8, aPixel; "/Pixel"
 * 00000001800A8FD6: mov     rdx, rax
 * 00000001800A8FD9: lea     rcx, [rbp+8C80h+var_6810]
 * 00000001800A8FE0: call    sub_18001C87C
 * 00000001800A8FE5: movups  xmm0, [rbp+8C80h+var_8C90]
 * 00000001800A8FE9: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A8FEE: movups  xmm1, [rbp+8C80h+var_8C80]
 * 00000001800A8FF2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A8FF7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A8FFC: mov     rcx, rax
 * 00000001800A8FFF: call    sub_180075D94
 * 00000001800A9004: nop
 * 00000001800A9005: lea     rcx, [rbp+8C80h+var_42F0]
 * 00000001800A900C: call    sub_180011E30
 * 00000001800A9011: nop
 * 00000001800A9012: lea     rcx, [rbp+8C80h+var_4290]
 * 00000001800A9019: call    sub_180011E30
 * 00000001800A901E: nop
 * 00000001800A901F: lea     rcx, dword_1801CE2C4
 * 00000001800A9026: call    sub_18000D4CC
 * 00000001800A902B: mov     rax, [rdi+rbx*8]
 * 00000001800A902F: mov     eax, [r15+rax]
 * 00000001800A9033: cmp     cs:dword_1801CE2C8, eax
 * 00000001800A9039: jle     loc_1800A9104
 * 00000001800A903F: lea     rcx, dword_1801CE2C8
 * 00000001800A9046: call    sub_18000D534
 * 00000001800A904B: cmp     cs:dword_1801CE2C8, r14d
 * 00000001800A9052: jnz     loc_1800A9104
 * 00000001800A9058: lea     rax, unk_180177350
 * 00000001800A905F: mov     qword ptr [rbp+8C80h+var_8C70], rax
 * 00000001800A9063: lea     rax, unk_18017D8DC
 * 00000001800A906A: mov     qword ptr [rbp+8C80h+var_8C70+8], rax
 * 00000001800A906E: mov     dword ptr [rbp+8C80h+var_8C60], 5
 * 00000001800A9075: mov     dword ptr [rbp+8C80h+var_8C60+4], esi
 * 00000001800A9078: call    sub_1800A8988
 * 00000001800A907D: mov     r8, rax
 * 00000001800A9080: mov     r9d, r12d
 * 00000001800A9083: mov     edx, 8
 * 00000001800A9088: lea     rcx, [rbp+8C80h+var_41D0]
 * 00000001800A908F: call    sub_180075CF8
 * 00000001800A9094: nop
 * 00000001800A9095: mov     r8, rax
 * 00000001800A9098: mov     rdx, r13
 * 00000001800A909B: lea     rcx, [rbp+8C80h+var_4230]
 * 00000001800A90A2: call    sub_18001C928
 * 00000001800A90A7: nop
 * 00000001800A90A8: lea     r8, aPixel; "/Pixel"
 * 00000001800A90AF: mov     rdx, rax
 * 00000001800A90B2: lea     rcx, [rbp+8C80h+var_67B0]
 * 00000001800A90B9: call    sub_18001C87C
 * 00000001800A90BE: movups  xmm0, [rbp+8C80h+var_8C70]
 * 00000001800A90C2: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A90C7: movups  xmm1, [rbp+8C80h+var_8C60]
 * 00000001800A90CB: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A90D0: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A90D5: mov     rcx, rax
 * 00000001800A90D8: call    sub_180075D94
 * 00000001800A90DD: nop
 * 00000001800A90DE: lea     rcx, [rbp+8C80h+var_4230]
 * 00000001800A90E5: call    sub_180011E30
 * 00000001800A90EA: nop
 * 00000001800A90EB: lea     rcx, [rbp+8C80h+var_41D0]
 * 00000001800A90F2: call    sub_180011E30
 * 00000001800A90F7: nop
 * 00000001800A90F8: lea     rcx, dword_1801CE2C8
 * 00000001800A90FF: call    sub_18000D4CC
 * 00000001800A9104: mov     rax, [rdi+rbx*8]
 * 00000001800A9108: mov     eax, [r15+rax]
 * 00000001800A910C: cmp     cs:dword_1801CE2CC, eax
 * 00000001800A9112: jle     loc_1800A91DB
 * 00000001800A9118: lea     rcx, dword_1801CE2CC
 * 00000001800A911F: call    sub_18000D534
 * 00000001800A9124: cmp     cs:dword_1801CE2CC, r14d
 * 00000001800A912B: jnz     loc_1800A91DB
 * 00000001800A9131: lea     rax, unk_180187050
 * 00000001800A9138: mov     qword ptr [rbp+8C80h+var_8C50], rax
 * 00000001800A913C: lea     rax, unk_180188118
 * 00000001800A9143: mov     qword ptr [rbp+8C80h+var_8C50+8], rax
 * 00000001800A9147: mov     dword ptr [rbp+8C80h+var_8C40], 5
 * 00000001800A914E: mov     dword ptr [rbp+8C80h+var_8C40+4], esi
 * 00000001800A9151: call    sub_1800A8988
 * 00000001800A9156: mov     r8, rax
 * 00000001800A9159: mov     r9d, r12d
 * 00000001800A915C: mov     rdx, r12
 * 00000001800A915F: lea     rcx, [rbp+8C80h+var_4110]
 * 00000001800A9166: call    sub_180075CF8
 * 00000001800A916B: nop
 * 00000001800A916C: mov     r8, rax
 * 00000001800A916F: mov     rdx, r13
 * 00000001800A9172: lea     rcx, [rbp+8C80h+var_4170]
 * 00000001800A9179: call    sub_18001C928
 * 00000001800A917E: nop
 * 00000001800A917F: lea     r8, aPixel; "/Pixel"
 * 00000001800A9186: mov     rdx, rax
 * 00000001800A9189: lea     rcx, [rbp+8C80h+var_6750]
 * 00000001800A9190: call    sub_18001C87C
 * 00000001800A9195: movups  xmm0, [rbp+8C80h+var_8C50]
 * 00000001800A9199: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A919E: movups  xmm1, [rbp+8C80h+var_8C40]
 * 00000001800A91A2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A91A7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A91AC: mov     rcx, rax
 * 00000001800A91AF: call    sub_180075D94
 * 00000001800A91B4: nop
 * 00000001800A91B5: lea     rcx, [rbp+8C80h+var_4170]
 * 00000001800A91BC: call    sub_180011E30
 * 00000001800A91C1: nop
 * 00000001800A91C2: lea     rcx, [rbp+8C80h+var_4110]
 * 00000001800A91C9: call    sub_180011E30
 * 00000001800A91CE: nop
 * 00000001800A91CF: lea     rcx, dword_1801CE2CC
 * 00000001800A91D6: call    sub_18000D4CC
 * 00000001800A91DB: mov     rax, [rdi+rbx*8]
 * 00000001800A91DF: mov     eax, [r15+rax]
 * 00000001800A91E3: cmp     cs:dword_1801CE2D0, eax
 * 00000001800A91E9: jle     loc_1800A92B4
 * 00000001800A91EF: lea     rcx, dword_1801CE2D0
 * 00000001800A91F6: call    sub_18000D534
 * 00000001800A91FB: cmp     cs:dword_1801CE2D0, r14d
 * 00000001800A9202: jnz     loc_1800A92B4
 * 00000001800A9208: lea     rax, unk_180177350
 * 00000001800A920F: mov     qword ptr [rbp+8C80h+var_8C30], rax
 * 00000001800A9213: lea     rax, unk_18017D8DC
 * 00000001800A921A: mov     qword ptr [rbp+8C80h+var_8C30+8], rax
 * 00000001800A921E: mov     dword ptr [rbp+8C80h+var_8C20], 5
 * 00000001800A9225: mov     dword ptr [rbp+8C80h+var_8C20+4], esi
 * 00000001800A9228: call    sub_1800A8988
 * 00000001800A922D: mov     r8, rax
 * 00000001800A9230: mov     r9d, r12d
 * 00000001800A9233: mov     edx, 0Ah
 * 00000001800A9238: lea     rcx, [rbp+8C80h+var_4050]
 * 00000001800A923F: call    sub_180075CF8
 * 00000001800A9244: nop
 * 00000001800A9245: mov     r8, rax
 * 00000001800A9248: mov     rdx, r13
 * 00000001800A924B: lea     rcx, [rbp+8C80h+var_40B0]
 * 00000001800A9252: call    sub_18001C928
 * 00000001800A9257: nop
 * 00000001800A9258: lea     r8, aPixel; "/Pixel"
 * 00000001800A925F: mov     rdx, rax
 * 00000001800A9262: lea     rcx, [rbp+8C80h+var_66F0]
 * 00000001800A9269: call    sub_18001C87C
 * 00000001800A926E: movups  xmm0, [rbp+8C80h+var_8C30]
 * 00000001800A9272: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9277: movups  xmm1, [rbp+8C80h+var_8C20]
 * 00000001800A927B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9280: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9285: mov     rcx, rax
 * 00000001800A9288: call    sub_180075D94
 * 00000001800A928D: nop
 * 00000001800A928E: lea     rcx, [rbp+8C80h+var_40B0]
 * 00000001800A9295: call    sub_180011E30
 * 00000001800A929A: nop
 * 00000001800A929B: lea     rcx, [rbp+8C80h+var_4050]
 * 00000001800A92A2: call    sub_180011E30
 * 00000001800A92A7: nop
 * 00000001800A92A8: lea     rcx, dword_1801CE2D0
 * 00000001800A92AF: call    sub_18000D4CC
 * 00000001800A92B4: mov     rax, [rdi+rbx*8]
 * 00000001800A92B8: mov     eax, [r15+rax]
 * 00000001800A92BC: cmp     cs:dword_1801CE2D4, eax
 * 00000001800A92C2: jle     loc_1800A9396
 * 00000001800A92C8: lea     rcx, dword_1801CE2D4
 * 00000001800A92CF: call    sub_18000D534
 * 00000001800A92D4: cmp     cs:dword_1801CE2D4, r14d
 * 00000001800A92DB: jnz     loc_1800A9396
 * 00000001800A92E1: lea     rax, unk_180180A90
 * 00000001800A92E8: mov     qword ptr [rbp+8C80h+var_8C10], rax
 * 00000001800A92EC: lea     rax, unk_180187048
 * 00000001800A92F3: mov     qword ptr [rbp+8C80h+var_8C10+8], rax
 * 00000001800A92F7: mov     dword ptr [rbp+8C80h+var_8C00], 5
 * 00000001800A9301: mov     dword ptr [rbp+8C80h+var_8C00+4], esi
 * 00000001800A9307: call    sub_1800A8988
 * 00000001800A930C: mov     r8, rax
 * 00000001800A930F: mov     r9d, r12d
 * 00000001800A9312: mov     edx, 10h
 * 00000001800A9317: lea     rcx, [rbp+8C80h+var_3F90]
 * 00000001800A931E: call    sub_180075CF8
 * 00000001800A9323: nop
 * 00000001800A9324: mov     r8, rax
 * 00000001800A9327: mov     rdx, r13
 * 00000001800A932A: lea     rcx, [rbp+8C80h+var_3FF0]
 * 00000001800A9331: call    sub_18001C928
 * 00000001800A9336: nop
 * 00000001800A9337: lea     r8, aPixel; "/Pixel"
 * 00000001800A933E: mov     rdx, rax
 * 00000001800A9341: lea     rcx, [rbp+8C80h+var_6690]
 * 00000001800A9348: call    sub_18001C87C
 * 00000001800A934D: movups  xmm0, [rbp+8C80h+var_8C10]
 * 00000001800A9351: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9356: movups  xmm1, [rbp+8C80h+var_8C00]
 * 00000001800A935D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9362: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9367: mov     rcx, rax
 * 00000001800A936A: call    sub_180075D94
 * 00000001800A936F: nop
 * 00000001800A9370: lea     rcx, [rbp+8C80h+var_3FF0]
 * 00000001800A9377: call    sub_180011E30
 * 00000001800A937C: nop
 * 00000001800A937D: lea     rcx, [rbp+8C80h+var_3F90]
 * 00000001800A9384: call    sub_180011E30
 * 00000001800A9389: nop
 * 00000001800A938A: lea     rcx, dword_1801CE2D4
 * 00000001800A9391: call    sub_18000D4CC
 * 00000001800A9396: mov     rax, [rdi+rbx*8]
 * 00000001800A939A: mov     eax, [r15+rax]
 * 00000001800A939E: cmp     cs:dword_1801CE2D8, eax
 * 00000001800A93A4: jle     loc_1800A9481
 * 00000001800A93AA: lea     rcx, dword_1801CE2D8
 * 00000001800A93B1: call    sub_18000D534
 * 00000001800A93B6: cmp     cs:dword_1801CE2D8, r14d
 * 00000001800A93BD: jnz     loc_1800A9481
 * 00000001800A93C3: lea     rax, unk_180180A90
 * 00000001800A93CA: mov     qword ptr [rbp+8C80h+var_8BF0], rax
 * 00000001800A93D1: lea     rax, unk_180187048
 * 00000001800A93D8: mov     qword ptr [rbp+8C80h+var_8BF0+8], rax
 * 00000001800A93DF: mov     dword ptr [rbp+8C80h+var_8BE0], 5
 * 00000001800A93E9: mov     dword ptr [rbp+8C80h+var_8BE0+4], esi
 * 00000001800A93EF: call    sub_1800A8988
 * 00000001800A93F4: mov     r8, rax
 * 00000001800A93F7: mov     r9d, r12d
 * 00000001800A93FA: mov     edx, 12h
 * 00000001800A93FF: lea     rcx, [rbp+8C80h+var_3ED0]
 * 00000001800A9406: call    sub_180075CF8
 * 00000001800A940B: nop
 * 00000001800A940C: mov     r8, rax
 * 00000001800A940F: mov     rdx, r13
 * 00000001800A9412: lea     rcx, [rbp+8C80h+var_3F30]
 * 00000001800A9419: call    sub_18001C928
 * 00000001800A941E: nop
 * 00000001800A941F: lea     r8, aPixel; "/Pixel"
 * 00000001800A9426: mov     rdx, rax
 * 00000001800A9429: lea     rcx, [rbp+8C80h+var_6630]
 * 00000001800A9430: call    sub_18001C87C
 * 00000001800A9435: movups  xmm0, [rbp+8C80h+var_8BF0]
 * 00000001800A943C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9441: movups  xmm1, [rbp+8C80h+var_8BE0]
 * 00000001800A9448: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A944D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9452: mov     rcx, rax
 * 00000001800A9455: call    sub_180075D94
 * 00000001800A945A: nop
 * 00000001800A945B: lea     rcx, [rbp+8C80h+var_3F30]
 * 00000001800A9462: call    sub_180011E30
 * 00000001800A9467: nop
 * 00000001800A9468: lea     rcx, [rbp+8C80h+var_3ED0]
 * 00000001800A946F: call    sub_180011E30
 * 00000001800A9474: nop
 * 00000001800A9475: lea     rcx, dword_1801CE2D8
 * 00000001800A947C: call    sub_18000D4CC
 * 00000001800A9481: mov     rax, [rdi+rbx*8]
 * 00000001800A9485: mov     eax, [r15+rax]
 * 00000001800A9489: cmp     cs:dword_1801CE2DC, eax
 * 00000001800A948F: jle     loc_1800A956C
 * 00000001800A9495: lea     rcx, dword_1801CE2DC
 * 00000001800A949C: call    sub_18000D534
 * 00000001800A94A1: cmp     cs:dword_1801CE2DC, r14d
 * 00000001800A94A8: jnz     loc_1800A956C
 * 00000001800A94AE: lea     rax, unk_18015C810
 * 00000001800A94B5: mov     qword ptr [rbp+8C80h+var_8BD0], rax
 * 00000001800A94BC: lea     rax, unk_18015FB08
 * 00000001800A94C3: mov     qword ptr [rbp+8C80h+var_8BD0+8], rax
 * 00000001800A94CA: mov     dword ptr [rbp+8C80h+var_8BC0], 5
 * 00000001800A94D4: mov     dword ptr [rbp+8C80h+var_8BC0+4], esi
 * 00000001800A94DA: call    sub_1800A8988
 * 00000001800A94DF: mov     r8, rax
 * 00000001800A94E2: mov     r9d, r12d
 * 00000001800A94E5: mov     edx, 14h
 * 00000001800A94EA: lea     rcx, [rbp+8C80h+var_3E10]
 * 00000001800A94F1: call    sub_180075CF8
 * 00000001800A94F6: nop
 * 00000001800A94F7: mov     r8, rax
 * 00000001800A94FA: mov     rdx, r13
 * 00000001800A94FD: lea     rcx, [rbp+8C80h+var_3E70]
 * 00000001800A9504: call    sub_18001C928
 * 00000001800A9509: nop
 * 00000001800A950A: lea     r8, aPixel; "/Pixel"
 * 00000001800A9511: mov     rdx, rax
 * 00000001800A9514: lea     rcx, [rbp+8C80h+var_65D0]
 * 00000001800A951B: call    sub_18001C87C
 * 00000001800A9520: movups  xmm0, [rbp+8C80h+var_8BD0]
 * 00000001800A9527: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A952C: movups  xmm1, [rbp+8C80h+var_8BC0]
 * 00000001800A9533: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9538: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A953D: mov     rcx, rax
 * 00000001800A9540: call    sub_180075D94
 * 00000001800A9545: nop
 * 00000001800A9546: lea     rcx, [rbp+8C80h+var_3E70]
 * 00000001800A954D: call    sub_180011E30
 * 00000001800A9552: nop
 * 00000001800A9553: lea     rcx, [rbp+8C80h+var_3E10]
 * 00000001800A955A: call    sub_180011E30
 * 00000001800A955F: nop
 * 00000001800A9560: lea     rcx, dword_1801CE2DC
 * 00000001800A9567: call    sub_18000D4CC
 * 00000001800A956C: mov     rax, [rdi+rbx*8]
 * 00000001800A9570: mov     eax, [r15+rax]
 * 00000001800A9574: cmp     cs:dword_1801CE2E0, eax
 * 00000001800A957A: jle     loc_1800A9657
 * 00000001800A9580: lea     rcx, dword_1801CE2E0
 * 00000001800A9587: call    sub_18000D534
 * 00000001800A958C: cmp     cs:dword_1801CE2E0, r14d
 * 00000001800A9593: jnz     loc_1800A9657
 * 00000001800A9599: lea     rax, unk_18015C810
 * 00000001800A95A0: mov     qword ptr [rbp+8C80h+var_8BB0], rax
 * 00000001800A95A7: lea     rax, unk_18015FB08
 * 00000001800A95AE: mov     qword ptr [rbp+8C80h+var_8BB0+8], rax
 * 00000001800A95B5: mov     dword ptr [rbp+8C80h+var_8BA0], 5
 * 00000001800A95BF: mov     dword ptr [rbp+8C80h+var_8BA0+4], esi
 * 00000001800A95C5: call    sub_1800A8988
 * 00000001800A95CA: mov     r8, rax
 * 00000001800A95CD: mov     r9d, r12d
 * 00000001800A95D0: mov     edx, 16h
 * 00000001800A95D5: lea     rcx, [rbp+8C80h+var_3D50]
 * 00000001800A95DC: call    sub_180075CF8
 * 00000001800A95E1: nop
 * 00000001800A95E2: mov     r8, rax
 * 00000001800A95E5: mov     rdx, r13
 * 00000001800A95E8: lea     rcx, [rbp+8C80h+var_3DB0]
 * 00000001800A95EF: call    sub_18001C928
 * 00000001800A95F4: nop
 * 00000001800A95F5: lea     r8, aPixel; "/Pixel"
 * 00000001800A95FC: mov     rdx, rax
 * 00000001800A95FF: lea     rcx, [rbp+8C80h+var_6570]
 * 00000001800A9606: call    sub_18001C87C
 * 00000001800A960B: movups  xmm0, [rbp+8C80h+var_8BB0]
 * 00000001800A9612: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9617: movups  xmm1, [rbp+8C80h+var_8BA0]
 * 00000001800A961E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9623: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9628: mov     rcx, rax
 * 00000001800A962B: call    sub_180075D94
 * 00000001800A9630: nop
 * 00000001800A9631: lea     rcx, [rbp+8C80h+var_3DB0]
 * 00000001800A9638: call    sub_180011E30
 * 00000001800A963D: nop
 * 00000001800A963E: lea     rcx, [rbp+8C80h+var_3D50]
 * 00000001800A9645: call    sub_180011E30
 * 00000001800A964A: nop
 * 00000001800A964B: lea     rcx, dword_1801CE2E0
 * 00000001800A9652: call    sub_18000D4CC
 * 00000001800A9657: mov     rax, [rdi+rbx*8]
 * 00000001800A965B: mov     eax, [r15+rax]
 * 00000001800A965F: cmp     cs:dword_1801CE2E4, eax
 * 00000001800A9665: jle     loc_1800A9742
 * 00000001800A966B: lea     rcx, dword_1801CE2E4
 * 00000001800A9672: call    sub_18000D534
 * 00000001800A9677: cmp     cs:dword_1801CE2E4, r14d
 * 00000001800A967E: jnz     loc_1800A9742
 * 00000001800A9684: lea     rax, unk_18015FB10
 * 00000001800A968B: mov     qword ptr [rbp+8C80h+var_8B90], rax
 * 00000001800A9692: lea     rax, unk_18016629C
 * 00000001800A9699: mov     qword ptr [rbp+8C80h+var_8B90+8], rax
 * 00000001800A96A0: mov     dword ptr [rbp+8C80h+var_8B80], 5
 * 00000001800A96AA: mov     dword ptr [rbp+8C80h+var_8B80+4], esi
 * 00000001800A96B0: call    sub_1800A8988
 * 00000001800A96B5: mov     r8, rax
 * 00000001800A96B8: mov     r9d, r12d
 * 00000001800A96BB: mov     edx, 18h
 * 00000001800A96C0: lea     rcx, [rbp+8C80h+var_3C90]
 * 00000001800A96C7: call    sub_180075CF8
 * 00000001800A96CC: nop
 * 00000001800A96CD: mov     r8, rax
 * 00000001800A96D0: mov     rdx, r13
 * 00000001800A96D3: lea     rcx, [rbp+8C80h+var_3CF0]
 * 00000001800A96DA: call    sub_18001C928
 * 00000001800A96DF: nop
 * 00000001800A96E0: lea     r8, aPixel; "/Pixel"
 * 00000001800A96E7: mov     rdx, rax
 * 00000001800A96EA: lea     rcx, [rbp+8C80h+var_6510]
 * 00000001800A96F1: call    sub_18001C87C
 * 00000001800A96F6: movups  xmm0, [rbp+8C80h+var_8B90]
 * 00000001800A96FD: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9702: movups  xmm1, [rbp+8C80h+var_8B80]
 * 00000001800A9709: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A970E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9713: mov     rcx, rax
 * 00000001800A9716: call    sub_180075D94
 * 00000001800A971B: nop
 * 00000001800A971C: lea     rcx, [rbp+8C80h+var_3CF0]
 * 00000001800A9723: call    sub_180011E30
 * 00000001800A9728: nop
 * 00000001800A9729: lea     rcx, [rbp+8C80h+var_3C90]
 * 00000001800A9730: call    sub_180011E30
 * 00000001800A9735: nop
 * 00000001800A9736: lea     rcx, dword_1801CE2E4
 * 00000001800A973D: call    sub_18000D4CC
 * 00000001800A9742: mov     rax, [rdi+rbx*8]
 * 00000001800A9746: mov     eax, [r15+rax]
 * 00000001800A974A: cmp     cs:dword_1801CE2E8, eax
 * 00000001800A9750: jle     loc_1800A982D
 * 00000001800A9756: lea     rcx, dword_1801CE2E8
 * 00000001800A975D: call    sub_18000D534
 * 00000001800A9762: cmp     cs:dword_1801CE2E8, r14d
 * 00000001800A9769: jnz     loc_1800A982D
 * 00000001800A976F: lea     rax, unk_18015FB10
 * 00000001800A9776: mov     qword ptr [rbp+8C80h+var_8B70], rax
 * 00000001800A977D: lea     rax, unk_18016629C
 * 00000001800A9784: mov     qword ptr [rbp+8C80h+var_8B70+8], rax
 * 00000001800A978B: mov     dword ptr [rbp+8C80h+var_8B60], 5
 * 00000001800A9795: mov     dword ptr [rbp+8C80h+var_8B60+4], esi
 * 00000001800A979B: call    sub_1800A8988
 * 00000001800A97A0: mov     r8, rax
 * 00000001800A97A3: mov     r9d, r12d
 * 00000001800A97A6: mov     edx, 1Ah
 * 00000001800A97AB: lea     rcx, [rbp+8C80h+var_3BD0]
 * 00000001800A97B2: call    sub_180075CF8
 * 00000001800A97B7: nop
 * 00000001800A97B8: mov     r8, rax
 * 00000001800A97BB: mov     rdx, r13
 * 00000001800A97BE: lea     rcx, [rbp+8C80h+var_3C30]
 * 00000001800A97C5: call    sub_18001C928
 * 00000001800A97CA: nop
 * 00000001800A97CB: lea     r8, aPixel; "/Pixel"
 * 00000001800A97D2: mov     rdx, rax
 * 00000001800A97D5: lea     rcx, [rbp+8C80h+var_64B0]
 * 00000001800A97DC: call    sub_18001C87C
 * 00000001800A97E1: movups  xmm0, [rbp+8C80h+var_8B70]
 * 00000001800A97E8: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A97ED: movups  xmm1, [rbp+8C80h+var_8B60]
 * 00000001800A97F4: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A97F9: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A97FE: mov     rcx, rax
 * 00000001800A9801: call    sub_180075D94
 * 00000001800A9806: nop
 * 00000001800A9807: lea     rcx, [rbp+8C80h+var_3C30]
 * 00000001800A980E: call    sub_180011E30
 * 00000001800A9813: nop
 * 00000001800A9814: lea     rcx, [rbp+8C80h+var_3BD0]
 * 00000001800A981B: call    sub_180011E30
 * 00000001800A9820: nop
 * 00000001800A9821: lea     rcx, dword_1801CE2E8
 * 00000001800A9828: call    sub_18000D4CC
 * 00000001800A982D: mov     rax, [rdi+rbx*8]
 * 00000001800A9831: mov     eax, [r15+rax]
 * 00000001800A9835: cmp     cs:dword_1801CE2EC, eax
 * 00000001800A983B: jle     loc_1800A9918
 * 00000001800A9841: lea     rcx, dword_1801CE2EC
 * 00000001800A9848: call    sub_18000D534
 * 00000001800A984D: cmp     cs:dword_1801CE2EC, r14d
 * 00000001800A9854: jnz     loc_1800A9918
 * 00000001800A985A: lea     rax, unk_180188B20
 * 00000001800A9861: mov     qword ptr [rbp+8C80h+var_8B50], rax
 * 00000001800A9868: lea     rax, unk_18018EF04
 * 00000001800A986F: mov     qword ptr [rbp+8C80h+var_8B50+8], rax
 * 00000001800A9876: mov     dword ptr [rbp+8C80h+var_8B40], 5
 * 00000001800A9880: mov     dword ptr [rbp+8C80h+var_8B40+4], esi
 * 00000001800A9886: call    sub_1800A8988
 * 00000001800A988B: mov     r8, rax
 * 00000001800A988E: mov     r9d, r12d
 * 00000001800A9891: mov     edx, 20h ; ' '
 * 00000001800A9896: lea     rcx, [rbp+8C80h+var_3B10]
 * 00000001800A989D: call    sub_180075CF8
 * 00000001800A98A2: nop
 * 00000001800A98A3: mov     r8, rax
 * 00000001800A98A6: mov     rdx, r13
 * 00000001800A98A9: lea     rcx, [rbp+8C80h+var_3B70]
 * 00000001800A98B0: call    sub_18001C928
 * 00000001800A98B5: nop
 * 00000001800A98B6: lea     r8, aPixel; "/Pixel"
 * 00000001800A98BD: mov     rdx, rax
 * 00000001800A98C0: lea     rcx, [rbp+8C80h+var_6450]
 * 00000001800A98C7: call    sub_18001C87C
 * 00000001800A98CC: movups  xmm0, [rbp+8C80h+var_8B50]
 * 00000001800A98D3: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A98D8: movups  xmm1, [rbp+8C80h+var_8B40]
 * 00000001800A98DF: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A98E4: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A98E9: mov     rcx, rax
 * 00000001800A98EC: call    sub_180075D94
 * 00000001800A98F1: nop
 * 00000001800A98F2: lea     rcx, [rbp+8C80h+var_3B70]
 * 00000001800A98F9: call    sub_180011E30
 * 00000001800A98FE: nop
 * 00000001800A98FF: lea     rcx, [rbp+8C80h+var_3B10]
 * 00000001800A9906: call    sub_180011E30
 * 00000001800A990B: nop
 * 00000001800A990C: lea     rcx, dword_1801CE2EC
 * 00000001800A9913: call    sub_18000D4CC
 * 00000001800A9918: mov     rax, [rdi+rbx*8]
 * 00000001800A991C: mov     eax, [r15+rax]
 * 00000001800A9920: cmp     cs:dword_1801CE2F0, eax
 * 00000001800A9926: jle     loc_1800A9A03
 * 00000001800A992C: lea     rcx, dword_1801CE2F0
 * 00000001800A9933: call    sub_18000D534
 * 00000001800A9938: cmp     cs:dword_1801CE2F0, r14d
 * 00000001800A993F: jnz     loc_1800A9A03
 * 00000001800A9945: lea     rax, unk_180188120
 * 00000001800A994C: mov     qword ptr [rbp+8C80h+var_8B30], rax
 * 00000001800A9953: lea     rax, unk_180188B18
 * 00000001800A995A: mov     qword ptr [rbp+8C80h+var_8B30+8], rax
 * 00000001800A9961: mov     dword ptr [rbp+8C80h+var_8B20], 5
 * 00000001800A996B: mov     dword ptr [rbp+8C80h+var_8B20+4], esi
 * 00000001800A9971: call    sub_1800A8988
 * 00000001800A9976: mov     r8, rax
 * 00000001800A9979: mov     r9d, r12d
 * 00000001800A997C: mov     edx, 21h ; '!'
 * 00000001800A9981: lea     rcx, [rbp+8C80h+var_3A50]
 * 00000001800A9988: call    sub_180075CF8
 * 00000001800A998D: nop
 * 00000001800A998E: mov     r8, rax
 * 00000001800A9991: mov     rdx, r13
 * 00000001800A9994: lea     rcx, [rbp+8C80h+var_3AB0]
 * 00000001800A999B: call    sub_18001C928
 * 00000001800A99A0: nop
 * 00000001800A99A1: lea     r8, aPixel; "/Pixel"
 * 00000001800A99A8: mov     rdx, rax
 * 00000001800A99AB: lea     rcx, [rbp+8C80h+var_63F0]
 * 00000001800A99B2: call    sub_18001C87C
 * 00000001800A99B7: movups  xmm0, [rbp+8C80h+var_8B30]
 * 00000001800A99BE: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A99C3: movups  xmm1, [rbp+8C80h+var_8B20]
 * 00000001800A99CA: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A99CF: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A99D4: mov     rcx, rax
 * 00000001800A99D7: call    sub_180075D94
 * 00000001800A99DC: nop
 * 00000001800A99DD: lea     rcx, [rbp+8C80h+var_3AB0]
 * 00000001800A99E4: call    sub_180011E30
 * 00000001800A99E9: nop
 * 00000001800A99EA: lea     rcx, [rbp+8C80h+var_3A50]
 * 00000001800A99F1: call    sub_180011E30
 * 00000001800A99F6: nop
 * 00000001800A99F7: lea     rcx, dword_1801CE2F0
 * 00000001800A99FE: call    sub_18000D4CC
 * 00000001800A9A03: mov     rax, [rdi+rbx*8]
 * 00000001800A9A07: mov     eax, [r15+rax]
 * 00000001800A9A0B: cmp     cs:dword_1801CE2F4, eax
 * 00000001800A9A11: jle     loc_1800A9AEE
 * 00000001800A9A17: lea     rcx, dword_1801CE2F4
 * 00000001800A9A1E: call    sub_18000D534
 * 00000001800A9A23: cmp     cs:dword_1801CE2F4, r14d
 * 00000001800A9A2A: jnz     loc_1800A9AEE
 * 00000001800A9A30: lea     rax, unk_180188B20
 * 00000001800A9A37: mov     qword ptr [rbp+8C80h+var_8B10], rax
 * 00000001800A9A3E: lea     rax, unk_18018EF04
 * 00000001800A9A45: mov     qword ptr [rbp+8C80h+var_8B10+8], rax
 * 00000001800A9A4C: mov     dword ptr [rbp+8C80h+var_8B00], 5
 * 00000001800A9A56: mov     dword ptr [rbp+8C80h+var_8B00+4], esi
 * 00000001800A9A5C: call    sub_1800A8988
 * 00000001800A9A61: mov     r8, rax
 * 00000001800A9A64: mov     r9d, r12d
 * 00000001800A9A67: mov     edx, 22h ; '"'
 * 00000001800A9A6C: lea     rcx, [rbp+8C80h+var_3990]
 * 00000001800A9A73: call    sub_180075CF8
 * 00000001800A9A78: nop
 * 00000001800A9A79: mov     r8, rax
 * 00000001800A9A7C: mov     rdx, r13
 * 00000001800A9A7F: lea     rcx, [rbp+8C80h+var_39F0]
 * 00000001800A9A86: call    sub_18001C928
 * 00000001800A9A8B: nop
 * 00000001800A9A8C: lea     r8, aPixel; "/Pixel"
 * 00000001800A9A93: mov     rdx, rax
 * 00000001800A9A96: lea     rcx, [rbp+8C80h+var_6390]
 * 00000001800A9A9D: call    sub_18001C87C
 * 00000001800A9AA2: movups  xmm0, [rbp+8C80h+var_8B10]
 * 00000001800A9AA9: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9AAE: movups  xmm1, [rbp+8C80h+var_8B00]
 * 00000001800A9AB5: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9ABA: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9ABF: mov     rcx, rax
 * 00000001800A9AC2: call    sub_180075D94
 * 00000001800A9AC7: nop
 * 00000001800A9AC8: lea     rcx, [rbp+8C80h+var_39F0]
 * 00000001800A9ACF: call    sub_180011E30
 * 00000001800A9AD4: nop
 * 00000001800A9AD5: lea     rcx, [rbp+8C80h+var_3990]
 * 00000001800A9ADC: call    sub_180011E30
 * 00000001800A9AE1: nop
 * 00000001800A9AE2: lea     rcx, dword_1801CE2F4
 * 00000001800A9AE9: call    sub_18000D4CC
 * 00000001800A9AEE: mov     rax, [rdi+rbx*8]
 * 00000001800A9AF2: mov     eax, [r15+rax]
 * 00000001800A9AF6: cmp     cs:dword_1801CE2F8, eax
 * 00000001800A9AFC: jle     loc_1800A9BD9
 * 00000001800A9B02: lea     rcx, dword_1801CE2F8
 * 00000001800A9B09: call    sub_18000D534
 * 00000001800A9B0E: cmp     cs:dword_1801CE2F8, r14d
 * 00000001800A9B15: jnz     loc_1800A9BD9
 * 00000001800A9B1B: lea     rax, unk_180177350
 * 00000001800A9B22: mov     qword ptr [rbp+8C80h+var_8AF0], rax
 * 00000001800A9B29: lea     rax, unk_18017D8DC
 * 00000001800A9B30: mov     qword ptr [rbp+8C80h+var_8AF0+8], rax
 * 00000001800A9B37: mov     dword ptr [rbp+8C80h+var_8AE0], 5
 * 00000001800A9B41: mov     dword ptr [rbp+8C80h+var_8AE0+4], esi
 * 00000001800A9B47: call    sub_1800A8988
 * 00000001800A9B4C: mov     r8, rax
 * 00000001800A9B4F: mov     r9d, r12d
 * 00000001800A9B52: mov     edx, 28h ; '('
 * 00000001800A9B57: lea     rcx, [rbp+8C80h+var_38D0]
 * 00000001800A9B5E: call    sub_180075CF8
 * 00000001800A9B63: nop
 * 00000001800A9B64: mov     r8, rax
 * 00000001800A9B67: mov     rdx, r13
 * 00000001800A9B6A: lea     rcx, [rbp+8C80h+var_3930]
 * 00000001800A9B71: call    sub_18001C928
 * 00000001800A9B76: nop
 * 00000001800A9B77: lea     r8, aPixel; "/Pixel"
 * 00000001800A9B7E: mov     rdx, rax
 * 00000001800A9B81: lea     rcx, [rbp+8C80h+var_6330]
 * 00000001800A9B88: call    sub_18001C87C
 * 00000001800A9B8D: movups  xmm0, [rbp+8C80h+var_8AF0]
 * 00000001800A9B94: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9B99: movups  xmm1, [rbp+8C80h+var_8AE0]
 * 00000001800A9BA0: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9BA5: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9BAA: mov     rcx, rax
 * 00000001800A9BAD: call    sub_180075D94
 * 00000001800A9BB2: nop
 * 00000001800A9BB3: lea     rcx, [rbp+8C80h+var_3930]
 * 00000001800A9BBA: call    sub_180011E30
 * 00000001800A9BBF: nop
 * 00000001800A9BC0: lea     rcx, [rbp+8C80h+var_38D0]
 * 00000001800A9BC7: call    sub_180011E30
 * 00000001800A9BCC: nop
 * 00000001800A9BCD: lea     rcx, dword_1801CE2F8
 * 00000001800A9BD4: call    sub_18000D4CC
 * 00000001800A9BD9: mov     rax, [rdi+rbx*8]
 * 00000001800A9BDD: mov     eax, [r15+rax]
 * 00000001800A9BE1: cmp     cs:dword_1801CE2FC, eax
 * 00000001800A9BE7: jle     loc_1800A9CC4
 * 00000001800A9BED: lea     rcx, dword_1801CE2FC
 * 00000001800A9BF4: call    sub_18000D534
 * 00000001800A9BF9: cmp     cs:dword_1801CE2FC, r14d
 * 00000001800A9C00: jnz     loc_1800A9CC4
 * 00000001800A9C06: lea     rax, unk_180187050
 * 00000001800A9C0D: mov     qword ptr [rbp+8C80h+var_8AD0], rax
 * 00000001800A9C14: lea     rax, unk_180188118
 * 00000001800A9C1B: mov     qword ptr [rbp+8C80h+var_8AD0+8], rax
 * 00000001800A9C22: mov     dword ptr [rbp+8C80h+var_8AC0], 5
 * 00000001800A9C2C: mov     dword ptr [rbp+8C80h+var_8AC0+4], esi
 * 00000001800A9C32: call    sub_1800A8988
 * 00000001800A9C37: mov     r8, rax
 * 00000001800A9C3A: mov     r9d, r12d
 * 00000001800A9C3D: mov     edx, 29h ; ')'
 * 00000001800A9C42: lea     rcx, [rbp+8C80h+var_3810]
 * 00000001800A9C49: call    sub_180075CF8
 * 00000001800A9C4E: nop
 * 00000001800A9C4F: mov     r8, rax
 * 00000001800A9C52: mov     rdx, r13
 * 00000001800A9C55: lea     rcx, [rbp+8C80h+var_3870]
 * 00000001800A9C5C: call    sub_18001C928
 * 00000001800A9C61: nop
 * 00000001800A9C62: lea     r8, aPixel; "/Pixel"
 * 00000001800A9C69: mov     rdx, rax
 * 00000001800A9C6C: lea     rcx, [rbp+8C80h+var_62D0]
 * 00000001800A9C73: call    sub_18001C87C
 * 00000001800A9C78: movups  xmm0, [rbp+8C80h+var_8AD0]
 * 00000001800A9C7F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9C84: movups  xmm1, [rbp+8C80h+var_8AC0]
 * 00000001800A9C8B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9C90: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9C95: mov     rcx, rax
 * 00000001800A9C98: call    sub_180075D94
 * 00000001800A9C9D: nop
 * 00000001800A9C9E: lea     rcx, [rbp+8C80h+var_3870]
 * 00000001800A9CA5: call    sub_180011E30
 * 00000001800A9CAA: nop
 * 00000001800A9CAB: lea     rcx, [rbp+8C80h+var_3810]
 * 00000001800A9CB2: call    sub_180011E30
 * 00000001800A9CB7: nop
 * 00000001800A9CB8: lea     rcx, dword_1801CE2FC
 * 00000001800A9CBF: call    sub_18000D4CC
 * 00000001800A9CC4: mov     rax, [rdi+rbx*8]
 * 00000001800A9CC8: mov     eax, [r15+rax]
 * 00000001800A9CCC: cmp     cs:dword_1801CE300, eax
 * 00000001800A9CD2: jle     loc_1800A9DAF
 * 00000001800A9CD8: lea     rcx, dword_1801CE300
 * 00000001800A9CDF: call    sub_18000D534
 * 00000001800A9CE4: cmp     cs:dword_1801CE300, r14d
 * 00000001800A9CEB: jnz     loc_1800A9DAF
 * 00000001800A9CF1: lea     rax, unk_180177350
 * 00000001800A9CF8: mov     qword ptr [rbp+8C80h+var_8AB0], rax
 * 00000001800A9CFF: lea     rax, unk_18017D8DC
 * 00000001800A9D06: mov     qword ptr [rbp+8C80h+var_8AB0+8], rax
 * 00000001800A9D0D: mov     dword ptr [rbp+8C80h+var_8AA0], 5
 * 00000001800A9D17: mov     dword ptr [rbp+8C80h+var_8AA0+4], esi
 * 00000001800A9D1D: call    sub_1800A8988
 * 00000001800A9D22: mov     r8, rax
 * 00000001800A9D25: mov     r9d, r12d
 * 00000001800A9D28: mov     edx, 2Ah ; '*'
 * 00000001800A9D2D: lea     rcx, [rbp+8C80h+var_3750]
 * 00000001800A9D34: call    sub_180075CF8
 * 00000001800A9D39: nop
 * 00000001800A9D3A: mov     r8, rax
 * 00000001800A9D3D: mov     rdx, r13
 * 00000001800A9D40: lea     rcx, [rbp+8C80h+var_37B0]
 * 00000001800A9D47: call    sub_18001C928
 * 00000001800A9D4C: nop
 * 00000001800A9D4D: lea     r8, aPixel; "/Pixel"
 * 00000001800A9D54: mov     rdx, rax
 * 00000001800A9D57: lea     rcx, [rbp+8C80h+var_6270]
 * 00000001800A9D5E: call    sub_18001C87C
 * 00000001800A9D63: movups  xmm0, [rbp+8C80h+var_8AB0]
 * 00000001800A9D6A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9D6F: movups  xmm1, [rbp+8C80h+var_8AA0]
 * 00000001800A9D76: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9D7B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9D80: mov     rcx, rax
 * 00000001800A9D83: call    sub_180075D94
 * 00000001800A9D88: nop
 * 00000001800A9D89: lea     rcx, [rbp+8C80h+var_37B0]
 * 00000001800A9D90: call    sub_180011E30
 * 00000001800A9D95: nop
 * 00000001800A9D96: lea     rcx, [rbp+8C80h+var_3750]
 * 00000001800A9D9D: call    sub_180011E30
 * 00000001800A9DA2: nop
 * 00000001800A9DA3: lea     rcx, dword_1801CE300
 * 00000001800A9DAA: call    sub_18000D4CC
 * 00000001800A9DAF: mov     rax, [rdi+rbx*8]
 * 00000001800A9DB3: mov     eax, [r15+rax]
 * 00000001800A9DB7: cmp     cs:dword_1801CE304, eax
 * 00000001800A9DBD: jle     loc_1800A9E9A
 * 00000001800A9DC3: lea     rcx, dword_1801CE304
 * 00000001800A9DCA: call    sub_18000D534
 * 00000001800A9DCF: cmp     cs:dword_1801CE304, r14d
 * 00000001800A9DD6: jnz     loc_1800A9E9A
 * 00000001800A9DDC: lea     rax, unk_180180A90
 * 00000001800A9DE3: mov     qword ptr [rbp+8C80h+var_8A90], rax
 * 00000001800A9DEA: lea     rax, unk_180187048
 * 00000001800A9DF1: mov     qword ptr [rbp+8C80h+var_8A90+8], rax
 * 00000001800A9DF8: mov     dword ptr [rbp+8C80h+var_8A80], 5
 * 00000001800A9E02: mov     dword ptr [rbp+8C80h+var_8A80+4], esi
 * 00000001800A9E08: call    sub_1800A8988
 * 00000001800A9E0D: mov     r8, rax
 * 00000001800A9E10: mov     r9d, r12d
 * 00000001800A9E13: mov     edx, 30h ; '0'
 * 00000001800A9E18: lea     rcx, [rbp+8C80h+var_3690]
 * 00000001800A9E1F: call    sub_180075CF8
 * 00000001800A9E24: nop
 * 00000001800A9E25: mov     r8, rax
 * 00000001800A9E28: mov     rdx, r13
 * 00000001800A9E2B: lea     rcx, [rbp+8C80h+var_36F0]
 * 00000001800A9E32: call    sub_18001C928
 * 00000001800A9E37: nop
 * 00000001800A9E38: lea     r8, aPixel; "/Pixel"
 * 00000001800A9E3F: mov     rdx, rax
 * 00000001800A9E42: lea     rcx, [rbp+8C80h+var_6210]
 * 00000001800A9E49: call    sub_18001C87C
 * 00000001800A9E4E: movups  xmm0, [rbp+8C80h+var_8A90]
 * 00000001800A9E55: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9E5A: movups  xmm1, [rbp+8C80h+var_8A80]
 * 00000001800A9E61: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9E66: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9E6B: mov     rcx, rax
 * 00000001800A9E6E: call    sub_180075D94
 * 00000001800A9E73: nop
 * 00000001800A9E74: lea     rcx, [rbp+8C80h+var_36F0]
 * 00000001800A9E7B: call    sub_180011E30
 * 00000001800A9E80: nop
 * 00000001800A9E81: lea     rcx, [rbp+8C80h+var_3690]
 * 00000001800A9E88: call    sub_180011E30
 * 00000001800A9E8D: nop
 * 00000001800A9E8E: lea     rcx, dword_1801CE304
 * 00000001800A9E95: call    sub_18000D4CC
 * 00000001800A9E9A: mov     rax, [rdi+rbx*8]
 * 00000001800A9E9E: mov     eax, [r15+rax]
 * 00000001800A9EA2: cmp     cs:dword_1801CE308, eax
 * 00000001800A9EA8: jle     loc_1800A9F85
 * 00000001800A9EAE: lea     rcx, dword_1801CE308
 * 00000001800A9EB5: call    sub_18000D534
 * 00000001800A9EBA: cmp     cs:dword_1801CE308, r14d
 * 00000001800A9EC1: jnz     loc_1800A9F85
 * 00000001800A9EC7: lea     rax, unk_180180A90
 * 00000001800A9ECE: mov     qword ptr [rbp+8C80h+var_8A70], rax
 * 00000001800A9ED5: lea     rax, unk_180187048
 * 00000001800A9EDC: mov     qword ptr [rbp+8C80h+var_8A70+8], rax
 * 00000001800A9EE3: mov     dword ptr [rbp+8C80h+var_8A60], 5
 * 00000001800A9EED: mov     dword ptr [rbp+8C80h+var_8A60+4], esi
 * 00000001800A9EF3: call    sub_1800A8988
 * 00000001800A9EF8: mov     r8, rax
 * 00000001800A9EFB: mov     r9d, r12d
 * 00000001800A9EFE: mov     edx, 32h ; '2'
 * 00000001800A9F03: lea     rcx, [rbp+8C80h+var_35D0]
 * 00000001800A9F0A: call    sub_180075CF8
 * 00000001800A9F0F: nop
 * 00000001800A9F10: mov     r8, rax
 * 00000001800A9F13: mov     rdx, r13
 * 00000001800A9F16: lea     rcx, [rbp+8C80h+var_3630]
 * 00000001800A9F1D: call    sub_18001C928
 * 00000001800A9F22: nop
 * 00000001800A9F23: lea     r8, aPixel; "/Pixel"
 * 00000001800A9F2A: mov     rdx, rax
 * 00000001800A9F2D: lea     rcx, [rbp+8C80h+var_61B0]
 * 00000001800A9F34: call    sub_18001C87C
 * 00000001800A9F39: movups  xmm0, [rbp+8C80h+var_8A70]
 * 00000001800A9F40: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800A9F45: movups  xmm1, [rbp+8C80h+var_8A60]
 * 00000001800A9F4C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800A9F51: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800A9F56: mov     rcx, rax
 * 00000001800A9F59: call    sub_180075D94
 * 00000001800A9F5E: nop
 * 00000001800A9F5F: lea     rcx, [rbp+8C80h+var_3630]
 * 00000001800A9F66: call    sub_180011E30
 * 00000001800A9F6B: nop
 * 00000001800A9F6C: lea     rcx, [rbp+8C80h+var_35D0]
 * 00000001800A9F73: call    sub_180011E30
 * 00000001800A9F78: nop
 * 00000001800A9F79: lea     rcx, dword_1801CE308
 * 00000001800A9F80: call    sub_18000D4CC
 * 00000001800A9F85: mov     rax, [rdi+rbx*8]
 * 00000001800A9F89: mov     eax, [r15+rax]
 * 00000001800A9F8D: cmp     cs:dword_1801CE30C, eax
 * 00000001800A9F93: jle     loc_1800AA070
 * 00000001800A9F99: lea     rcx, dword_1801CE30C
 * 00000001800A9FA0: call    sub_18000D534
 * 00000001800A9FA5: cmp     cs:dword_1801CE30C, r14d
 * 00000001800A9FAC: jnz     loc_1800AA070
 * 00000001800A9FB2: lea     rax, unk_18015FB10
 * 00000001800A9FB9: mov     qword ptr [rbp+8C80h+var_8A50], rax
 * 00000001800A9FC0: lea     rax, unk_18016629C
 * 00000001800A9FC7: mov     qword ptr [rbp+8C80h+var_8A50+8], rax
 * 00000001800A9FCE: mov     dword ptr [rbp+8C80h+var_8A40], 5
 * 00000001800A9FD8: mov     dword ptr [rbp+8C80h+var_8A40+4], esi
 * 00000001800A9FDE: call    sub_1800A8988
 * 00000001800A9FE3: mov     r8, rax
 * 00000001800A9FE6: mov     r9d, r12d
 * 00000001800A9FE9: mov     edx, 38h ; '8'
 * 00000001800A9FEE: lea     rcx, [rbp+8C80h+var_3510]
 * 00000001800A9FF5: call    sub_180075CF8
 * 00000001800A9FFA: nop
 * 00000001800A9FFB: mov     r8, rax
 * 00000001800A9FFE: mov     rdx, r13
 * 00000001800AA001: lea     rcx, [rbp+8C80h+var_3570]
 * 00000001800AA008: call    sub_18001C928
 * 00000001800AA00D: nop
 * 00000001800AA00E: lea     r8, aPixel; "/Pixel"
 * 00000001800AA015: mov     rdx, rax
 * 00000001800AA018: lea     rcx, [rbp+8C80h+var_6150]
 * 00000001800AA01F: call    sub_18001C87C
 * 00000001800AA024: movups  xmm0, [rbp+8C80h+var_8A50]
 * 00000001800AA02B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA030: movups  xmm1, [rbp+8C80h+var_8A40]
 * 00000001800AA037: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA03C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA041: mov     rcx, rax
 * 00000001800AA044: call    sub_180075D94
 * 00000001800AA049: nop
 * 00000001800AA04A: lea     rcx, [rbp+8C80h+var_3570]
 * 00000001800AA051: call    sub_180011E30
 * 00000001800AA056: nop
 * 00000001800AA057: lea     rcx, [rbp+8C80h+var_3510]
 * 00000001800AA05E: call    sub_180011E30
 * 00000001800AA063: nop
 * 00000001800AA064: lea     rcx, dword_1801CE30C
 * 00000001800AA06B: call    sub_18000D4CC
 * 00000001800AA070: mov     rax, [rdi+rbx*8]
 * 00000001800AA074: mov     eax, [r15+rax]
 * 00000001800AA078: cmp     cs:dword_1801CE310, eax
 * 00000001800AA07E: jle     loc_1800AA15B
 * 00000001800AA084: lea     rcx, dword_1801CE310
 * 00000001800AA08B: call    sub_18000D534
 * 00000001800AA090: cmp     cs:dword_1801CE310, r14d
 * 00000001800AA097: jnz     loc_1800AA15B
 * 00000001800AA09D: lea     rax, unk_18015FB10
 * 00000001800AA0A4: mov     qword ptr [rbp+8C80h+var_8A30], rax
 * 00000001800AA0AB: lea     rax, unk_18016629C
 * 00000001800AA0B2: mov     qword ptr [rbp+8C80h+var_8A30+8], rax
 * 00000001800AA0B9: mov     dword ptr [rbp+8C80h+var_8A20], 5
 * 00000001800AA0C3: mov     dword ptr [rbp+8C80h+var_8A20+4], esi
 * 00000001800AA0C9: call    sub_1800A8988
 * 00000001800AA0CE: mov     r8, rax
 * 00000001800AA0D1: mov     r9d, r12d
 * 00000001800AA0D4: mov     edx, 3Ah ; ':'
 * 00000001800AA0D9: lea     rcx, [rbp+8C80h+var_3450]
 * 00000001800AA0E0: call    sub_180075CF8
 * 00000001800AA0E5: nop
 * 00000001800AA0E6: mov     r8, rax
 * 00000001800AA0E9: mov     rdx, r13
 * 00000001800AA0EC: lea     rcx, [rbp+8C80h+var_34B0]
 * 00000001800AA0F3: call    sub_18001C928
 * 00000001800AA0F8: nop
 * 00000001800AA0F9: lea     r8, aPixel; "/Pixel"
 * 00000001800AA100: mov     rdx, rax
 * 00000001800AA103: lea     rcx, [rbp+8C80h+var_60F0]
 * 00000001800AA10A: call    sub_18001C87C
 * 00000001800AA10F: movups  xmm0, [rbp+8C80h+var_8A30]
 * 00000001800AA116: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA11B: movups  xmm1, [rbp+8C80h+var_8A20]
 * 00000001800AA122: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA127: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA12C: mov     rcx, rax
 * 00000001800AA12F: call    sub_180075D94
 * 00000001800AA134: nop
 * 00000001800AA135: lea     rcx, [rbp+8C80h+var_34B0]
 * 00000001800AA13C: call    sub_180011E30
 * 00000001800AA141: nop
 * 00000001800AA142: lea     rcx, [rbp+8C80h+var_3450]
 * 00000001800AA149: call    sub_180011E30
 * 00000001800AA14E: nop
 * 00000001800AA14F: lea     rcx, dword_1801CE310
 * 00000001800AA156: call    sub_18000D4CC
 * 00000001800AA15B: mov     rax, [rdi+rbx*8]
 * 00000001800AA15F: mov     eax, [r15+rax]
 * 00000001800AA163: cmp     cs:dword_1801CE314, eax
 * 00000001800AA169: jle     loc_1800AA246
 * 00000001800AA16F: lea     rcx, dword_1801CE314
 * 00000001800AA176: call    sub_18000D534
 * 00000001800AA17B: cmp     cs:dword_1801CE314, r14d
 * 00000001800AA182: jnz     loc_1800AA246
 * 00000001800AA188: lea     rax, unk_180188B20
 * 00000001800AA18F: mov     qword ptr [rbp+8C80h+var_8A10], rax
 * 00000001800AA196: lea     rax, unk_18018EF04
 * 00000001800AA19D: mov     qword ptr [rbp+8C80h+var_8A10+8], rax
 * 00000001800AA1A4: mov     dword ptr [rbp+8C80h+var_8A00], 5
 * 00000001800AA1AE: mov     dword ptr [rbp+8C80h+var_8A00+4], esi
 * 00000001800AA1B4: call    sub_1800A8988
 * 00000001800AA1B9: mov     r8, rax
 * 00000001800AA1BC: mov     r9d, r12d
 * 00000001800AA1BF: mov     edx, 40h ; '@'
 * 00000001800AA1C4: lea     rcx, [rbp+8C80h+var_3390]
 * 00000001800AA1CB: call    sub_180075CF8
 * 00000001800AA1D0: nop
 * 00000001800AA1D1: mov     r8, rax
 * 00000001800AA1D4: mov     rdx, r13
 * 00000001800AA1D7: lea     rcx, [rbp+8C80h+var_33F0]
 * 00000001800AA1DE: call    sub_18001C928
 * 00000001800AA1E3: nop
 * 00000001800AA1E4: lea     r8, aPixel; "/Pixel"
 * 00000001800AA1EB: mov     rdx, rax
 * 00000001800AA1EE: lea     rcx, [rbp+8C80h+var_6090]
 * 00000001800AA1F5: call    sub_18001C87C
 * 00000001800AA1FA: movups  xmm0, [rbp+8C80h+var_8A10]
 * 00000001800AA201: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA206: movups  xmm1, [rbp+8C80h+var_8A00]
 * 00000001800AA20D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA212: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA217: mov     rcx, rax
 * 00000001800AA21A: call    sub_180075D94
 * 00000001800AA21F: nop
 * 00000001800AA220: lea     rcx, [rbp+8C80h+var_33F0]
 * 00000001800AA227: call    sub_180011E30
 * 00000001800AA22C: nop
 * 00000001800AA22D: lea     rcx, [rbp+8C80h+var_3390]
 * 00000001800AA234: call    sub_180011E30
 * 00000001800AA239: nop
 * 00000001800AA23A: lea     rcx, dword_1801CE314
 * 00000001800AA241: call    sub_18000D4CC
 * 00000001800AA246: mov     rax, [rdi+rbx*8]
 * 00000001800AA24A: mov     eax, [r15+rax]
 * 00000001800AA24E: cmp     cs:dword_1801CE318, eax
 * 00000001800AA254: jle     loc_1800AA331
 * 00000001800AA25A: lea     rcx, dword_1801CE318
 * 00000001800AA261: call    sub_18000D534
 * 00000001800AA266: cmp     cs:dword_1801CE318, r14d
 * 00000001800AA26D: jnz     loc_1800AA331
 * 00000001800AA273: lea     rax, unk_180188B20
 * 00000001800AA27A: mov     qword ptr [rbp+8C80h+var_89F0], rax
 * 00000001800AA281: lea     rax, unk_18018EF04
 * 00000001800AA288: mov     qword ptr [rbp+8C80h+var_89F0+8], rax
 * 00000001800AA28F: mov     dword ptr [rbp+8C80h+var_89E0], 5
 * 00000001800AA299: mov     dword ptr [rbp+8C80h+var_89E0+4], esi
 * 00000001800AA29F: call    sub_1800A8988
 * 00000001800AA2A4: mov     r8, rax
 * 00000001800AA2A7: mov     r9d, r12d
 * 00000001800AA2AA: mov     edx, 42h ; 'B'
 * 00000001800AA2AF: lea     rcx, [rbp+8C80h+var_32D0]
 * 00000001800AA2B6: call    sub_180075CF8
 * 00000001800AA2BB: nop
 * 00000001800AA2BC: mov     r8, rax
 * 00000001800AA2BF: mov     rdx, r13
 * 00000001800AA2C2: lea     rcx, [rbp+8C80h+var_3330]
 * 00000001800AA2C9: call    sub_18001C928
 * 00000001800AA2CE: nop
 * 00000001800AA2CF: lea     r8, aPixel; "/Pixel"
 * 00000001800AA2D6: mov     rdx, rax
 * 00000001800AA2D9: lea     rcx, [rbp+8C80h+var_6030]
 * 00000001800AA2E0: call    sub_18001C87C
 * 00000001800AA2E5: movups  xmm0, [rbp+8C80h+var_89F0]
 * 00000001800AA2EC: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA2F1: movups  xmm1, [rbp+8C80h+var_89E0]
 * 00000001800AA2F8: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA2FD: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA302: mov     rcx, rax
 * 00000001800AA305: call    sub_180075D94
 * 00000001800AA30A: nop
 * 00000001800AA30B: lea     rcx, [rbp+8C80h+var_3330]
 * 00000001800AA312: call    sub_180011E30
 * 00000001800AA317: nop
 * 00000001800AA318: lea     rcx, [rbp+8C80h+var_32D0]
 * 00000001800AA31F: call    sub_180011E30
 * 00000001800AA324: nop
 * 00000001800AA325: lea     rcx, dword_1801CE318
 * 00000001800AA32C: call    sub_18000D4CC
 * 00000001800AA331: mov     rax, [rdi+rbx*8]
 * 00000001800AA335: mov     eax, [r15+rax]
 * 00000001800AA339: cmp     cs:dword_1801CE31C, eax
 * 00000001800AA33F: jle     loc_1800AA41C
 * 00000001800AA345: lea     rcx, dword_1801CE31C
 * 00000001800AA34C: call    sub_18000D534
 * 00000001800AA351: cmp     cs:dword_1801CE31C, r14d
 * 00000001800AA358: jnz     loc_1800AA41C
 * 00000001800AA35E: lea     rax, unk_180177350
 * 00000001800AA365: mov     qword ptr [rbp+8C80h+var_89D0], rax
 * 00000001800AA36C: lea     rax, unk_18017D8DC
 * 00000001800AA373: mov     qword ptr [rbp+8C80h+var_89D0+8], rax
 * 00000001800AA37A: mov     dword ptr [rbp+8C80h+var_89C0], 5
 * 00000001800AA384: mov     dword ptr [rbp+8C80h+var_89C0+4], esi
 * 00000001800AA38A: call    sub_1800A8988
 * 00000001800AA38F: mov     r8, rax
 * 00000001800AA392: mov     r9d, r12d
 * 00000001800AA395: mov     edx, 48h ; 'H'
 * 00000001800AA39A: lea     rcx, [rbp+8C80h+var_3210]
 * 00000001800AA3A1: call    sub_180075CF8
 * 00000001800AA3A6: nop
 * 00000001800AA3A7: mov     r8, rax
 * 00000001800AA3AA: mov     rdx, r13
 * 00000001800AA3AD: lea     rcx, [rbp+8C80h+var_3270]
 * 00000001800AA3B4: call    sub_18001C928
 * 00000001800AA3B9: nop
 * 00000001800AA3BA: lea     r8, aPixel; "/Pixel"
 * 00000001800AA3C1: mov     rdx, rax
 * 00000001800AA3C4: lea     rcx, [rbp+8C80h+var_5FD0]
 * 00000001800AA3CB: call    sub_18001C87C
 * 00000001800AA3D0: movups  xmm0, [rbp+8C80h+var_89D0]
 * 00000001800AA3D7: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA3DC: movups  xmm1, [rbp+8C80h+var_89C0]
 * 00000001800AA3E3: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA3E8: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA3ED: mov     rcx, rax
 * 00000001800AA3F0: call    sub_180075D94
 * 00000001800AA3F5: nop
 * 00000001800AA3F6: lea     rcx, [rbp+8C80h+var_3270]
 * 00000001800AA3FD: call    sub_180011E30
 * 00000001800AA402: nop
 * 00000001800AA403: lea     rcx, [rbp+8C80h+var_3210]
 * 00000001800AA40A: call    sub_180011E30
 * 00000001800AA40F: nop
 * 00000001800AA410: lea     rcx, dword_1801CE31C
 * 00000001800AA417: call    sub_18000D4CC
 * 00000001800AA41C: mov     rax, [rdi+rbx*8]
 * 00000001800AA420: mov     eax, [r15+rax]
 * 00000001800AA424: cmp     cs:dword_1801CE320, eax
 * 00000001800AA42A: jle     loc_1800AA507
 * 00000001800AA430: lea     rcx, dword_1801CE320
 * 00000001800AA437: call    sub_18000D534
 * 00000001800AA43C: cmp     cs:dword_1801CE320, r14d
 * 00000001800AA443: jnz     loc_1800AA507
 * 00000001800AA449: lea     rax, unk_180177350
 * 00000001800AA450: mov     qword ptr [rbp+8C80h+var_89B0], rax
 * 00000001800AA457: lea     rax, unk_18017D8DC
 * 00000001800AA45E: mov     qword ptr [rbp+8C80h+var_89B0+8], rax
 * 00000001800AA465: mov     dword ptr [rbp+8C80h+var_89A0], 5
 * 00000001800AA46F: mov     dword ptr [rbp+8C80h+var_89A0+4], esi
 * 00000001800AA475: call    sub_1800A8988
 * 00000001800AA47A: mov     r8, rax
 * 00000001800AA47D: mov     r9d, r12d
 * 00000001800AA480: mov     edx, 4Ah ; 'J'
 * 00000001800AA485: lea     rcx, [rbp+8C80h+var_3150]
 * 00000001800AA48C: call    sub_180075CF8
 * 00000001800AA491: nop
 * 00000001800AA492: mov     r8, rax
 * 00000001800AA495: mov     rdx, r13
 * 00000001800AA498: lea     rcx, [rbp+8C80h+var_31B0]
 * 00000001800AA49F: call    sub_18001C928
 * 00000001800AA4A4: nop
 * 00000001800AA4A5: lea     r8, aPixel; "/Pixel"
 * 00000001800AA4AC: mov     rdx, rax
 * 00000001800AA4AF: lea     rcx, [rbp+8C80h+var_5F70]
 * 00000001800AA4B6: call    sub_18001C87C
 * 00000001800AA4BB: movups  xmm0, [rbp+8C80h+var_89B0]
 * 00000001800AA4C2: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA4C7: movups  xmm1, [rbp+8C80h+var_89A0]
 * 00000001800AA4CE: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA4D3: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA4D8: mov     rcx, rax
 * 00000001800AA4DB: call    sub_180075D94
 * 00000001800AA4E0: nop
 * 00000001800AA4E1: lea     rcx, [rbp+8C80h+var_31B0]
 * 00000001800AA4E8: call    sub_180011E30
 * 00000001800AA4ED: nop
 * 00000001800AA4EE: lea     rcx, [rbp+8C80h+var_3150]
 * 00000001800AA4F5: call    sub_180011E30
 * 00000001800AA4FA: nop
 * 00000001800AA4FB: lea     rcx, dword_1801CE320
 * 00000001800AA502: call    sub_18000D4CC
 * 00000001800AA507: mov     rax, [rdi+rbx*8]
 * 00000001800AA50B: mov     eax, [r15+rax]
 * 00000001800AA50F: cmp     cs:dword_1801CE324, eax
 * 00000001800AA515: jle     loc_1800AA5F2
 * 00000001800AA51B: lea     rcx, dword_1801CE324
 * 00000001800AA522: call    sub_18000D534
 * 00000001800AA527: cmp     cs:dword_1801CE324, r14d
 * 00000001800AA52E: jnz     loc_1800AA5F2
 * 00000001800AA534: lea     rax, unk_180180A90
 * 00000001800AA53B: mov     qword ptr [rbp+8C80h+var_8990], rax
 * 00000001800AA542: lea     rax, unk_180187048
 * 00000001800AA549: mov     qword ptr [rbp+8C80h+var_8990+8], rax
 * 00000001800AA550: mov     dword ptr [rbp+8C80h+var_8980], 5
 * 00000001800AA55A: mov     dword ptr [rbp+8C80h+var_8980+4], esi
 * 00000001800AA560: call    sub_1800A8988
 * 00000001800AA565: mov     r8, rax
 * 00000001800AA568: mov     r9d, r12d
 * 00000001800AA56B: mov     edx, 50h ; 'P'
 * 00000001800AA570: lea     rcx, [rbp+8C80h+var_3090]
 * 00000001800AA577: call    sub_180075CF8
 * 00000001800AA57C: nop
 * 00000001800AA57D: mov     r8, rax
 * 00000001800AA580: mov     rdx, r13
 * 00000001800AA583: lea     rcx, [rbp+8C80h+var_30F0]
 * 00000001800AA58A: call    sub_18001C928
 * 00000001800AA58F: nop
 * 00000001800AA590: lea     r8, aPixel; "/Pixel"
 * 00000001800AA597: mov     rdx, rax
 * 00000001800AA59A: lea     rcx, [rbp+8C80h+var_5F10]
 * 00000001800AA5A1: call    sub_18001C87C
 * 00000001800AA5A6: movups  xmm0, [rbp+8C80h+var_8990]
 * 00000001800AA5AD: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA5B2: movups  xmm1, [rbp+8C80h+var_8980]
 * 00000001800AA5B9: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA5BE: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA5C3: mov     rcx, rax
 * 00000001800AA5C6: call    sub_180075D94
 * 00000001800AA5CB: nop
 * 00000001800AA5CC: lea     rcx, [rbp+8C80h+var_30F0]
 * 00000001800AA5D3: call    sub_180011E30
 * 00000001800AA5D8: nop
 * 00000001800AA5D9: lea     rcx, [rbp+8C80h+var_3090]
 * 00000001800AA5E0: call    sub_180011E30
 * 00000001800AA5E5: nop
 * 00000001800AA5E6: lea     rcx, dword_1801CE324
 * 00000001800AA5ED: call    sub_18000D4CC
 * 00000001800AA5F2: mov     rax, [rdi+rbx*8]
 * 00000001800AA5F6: mov     eax, [r15+rax]
 * 00000001800AA5FA: cmp     cs:dword_1801CE328, eax
 * 00000001800AA600: jle     loc_1800AA6DD
 * 00000001800AA606: lea     rcx, dword_1801CE328
 * 00000001800AA60D: call    sub_18000D534
 * 00000001800AA612: cmp     cs:dword_1801CE328, r14d
 * 00000001800AA619: jnz     loc_1800AA6DD
 * 00000001800AA61F: lea     rax, unk_180180A90
 * 00000001800AA626: mov     qword ptr [rbp+8C80h+var_8970], rax
 * 00000001800AA62D: lea     rax, unk_180187048
 * 00000001800AA634: mov     qword ptr [rbp+8C80h+var_8970+8], rax
 * 00000001800AA63B: mov     dword ptr [rbp+8C80h+var_8960], 5
 * 00000001800AA645: mov     dword ptr [rbp+8C80h+var_8960+4], esi
 * 00000001800AA64B: call    sub_1800A8988
 * 00000001800AA650: mov     r8, rax
 * 00000001800AA653: mov     r9d, r12d
 * 00000001800AA656: mov     edx, 52h ; 'R'
 * 00000001800AA65B: lea     rcx, [rbp+8C80h+var_2FD0]
 * 00000001800AA662: call    sub_180075CF8
 * 00000001800AA667: nop
 * 00000001800AA668: mov     r8, rax
 * 00000001800AA66B: mov     rdx, r13
 * 00000001800AA66E: lea     rcx, [rbp+8C80h+var_3030]
 * 00000001800AA675: call    sub_18001C928
 * 00000001800AA67A: nop
 * 00000001800AA67B: lea     r8, aPixel; "/Pixel"
 * 00000001800AA682: mov     rdx, rax
 * 00000001800AA685: lea     rcx, [rbp+8C80h+var_5EB0]
 * 00000001800AA68C: call    sub_18001C87C
 * 00000001800AA691: movups  xmm0, [rbp+8C80h+var_8970]
 * 00000001800AA698: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA69D: movups  xmm1, [rbp+8C80h+var_8960]
 * 00000001800AA6A4: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA6A9: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA6AE: mov     rcx, rax
 * 00000001800AA6B1: call    sub_180075D94
 * 00000001800AA6B6: nop
 * 00000001800AA6B7: lea     rcx, [rbp+8C80h+var_3030]
 * 00000001800AA6BE: call    sub_180011E30
 * 00000001800AA6C3: nop
 * 00000001800AA6C4: lea     rcx, [rbp+8C80h+var_2FD0]
 * 00000001800AA6CB: call    sub_180011E30
 * 00000001800AA6D0: nop
 * 00000001800AA6D1: lea     rcx, dword_1801CE328
 * 00000001800AA6D8: call    sub_18000D4CC
 * 00000001800AA6DD: mov     rax, [rdi+rbx*8]
 * 00000001800AA6E1: mov     eax, [r15+rax]
 * 00000001800AA6E5: cmp     cs:dword_1801CE32C, eax
 * 00000001800AA6EB: jle     loc_1800AA7C8
 * 00000001800AA6F1: lea     rcx, dword_1801CE32C
 * 00000001800AA6F8: call    sub_18000D534
 * 00000001800AA6FD: cmp     cs:dword_1801CE32C, r14d
 * 00000001800AA704: jnz     loc_1800AA7C8
 * 00000001800AA70A: lea     rax, unk_18015FB10
 * 00000001800AA711: mov     qword ptr [rbp+8C80h+var_8950], rax
 * 00000001800AA718: lea     rax, unk_18016629C
 * 00000001800AA71F: mov     qword ptr [rbp+8C80h+var_8950+8], rax
 * 00000001800AA726: mov     dword ptr [rbp+8C80h+var_8940], 5
 * 00000001800AA730: mov     dword ptr [rbp+8C80h+var_8940+4], esi
 * 00000001800AA736: call    sub_1800A8988
 * 00000001800AA73B: mov     r8, rax
 * 00000001800AA73E: mov     r9d, r12d
 * 00000001800AA741: mov     edx, 58h ; 'X'
 * 00000001800AA746: lea     rcx, [rbp+8C80h+var_2F10]
 * 00000001800AA74D: call    sub_180075CF8
 * 00000001800AA752: nop
 * 00000001800AA753: mov     r8, rax
 * 00000001800AA756: mov     rdx, r13
 * 00000001800AA759: lea     rcx, [rbp+8C80h+var_2F70]
 * 00000001800AA760: call    sub_18001C928
 * 00000001800AA765: nop
 * 00000001800AA766: lea     r8, aPixel; "/Pixel"
 * 00000001800AA76D: mov     rdx, rax
 * 00000001800AA770: lea     rcx, [rbp+8C80h+var_5E50]
 * 00000001800AA777: call    sub_18001C87C
 * 00000001800AA77C: movups  xmm0, [rbp+8C80h+var_8950]
 * 00000001800AA783: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA788: movups  xmm1, [rbp+8C80h+var_8940]
 * 00000001800AA78F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA794: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA799: mov     rcx, rax
 * 00000001800AA79C: call    sub_180075D94
 * 00000001800AA7A1: nop
 * 00000001800AA7A2: lea     rcx, [rbp+8C80h+var_2F70]
 * 00000001800AA7A9: call    sub_180011E30
 * 00000001800AA7AE: nop
 * 00000001800AA7AF: lea     rcx, [rbp+8C80h+var_2F10]
 * 00000001800AA7B6: call    sub_180011E30
 * 00000001800AA7BB: nop
 * 00000001800AA7BC: lea     rcx, dword_1801CE32C
 * 00000001800AA7C3: call    sub_18000D4CC
 * 00000001800AA7C8: mov     rax, [rdi+rbx*8]
 * 00000001800AA7CC: mov     eax, [r15+rax]
 * 00000001800AA7D0: cmp     cs:dword_1801CE330, eax
 * 00000001800AA7D6: jle     loc_1800AA8B3
 * 00000001800AA7DC: lea     rcx, dword_1801CE330
 * 00000001800AA7E3: call    sub_18000D534
 * 00000001800AA7E8: cmp     cs:dword_1801CE330, r14d
 * 00000001800AA7EF: jnz     loc_1800AA8B3
 * 00000001800AA7F5: lea     rax, unk_18015FB10
 * 00000001800AA7FC: mov     qword ptr [rbp+8C80h+var_8930], rax
 * 00000001800AA803: lea     rax, unk_18016629C
 * 00000001800AA80A: mov     qword ptr [rbp+8C80h+var_8930+8], rax
 * 00000001800AA811: mov     dword ptr [rbp+8C80h+var_8920], 5
 * 00000001800AA81B: mov     dword ptr [rbp+8C80h+var_8920+4], esi
 * 00000001800AA821: call    sub_1800A8988
 * 00000001800AA826: mov     r8, rax
 * 00000001800AA829: mov     r9d, r12d
 * 00000001800AA82C: mov     edx, 5Ah ; 'Z'
 * 00000001800AA831: lea     rcx, [rbp+8C80h+var_2E50]
 * 00000001800AA838: call    sub_180075CF8
 * 00000001800AA83D: nop
 * 00000001800AA83E: mov     r8, rax
 * 00000001800AA841: mov     rdx, r13
 * 00000001800AA844: lea     rcx, [rbp+8C80h+var_2EB0]
 * 00000001800AA84B: call    sub_18001C928
 * 00000001800AA850: nop
 * 00000001800AA851: lea     r8, aPixel; "/Pixel"
 * 00000001800AA858: mov     rdx, rax
 * 00000001800AA85B: lea     rcx, [rbp+8C80h+var_6970]
 * 00000001800AA862: call    sub_18001C87C
 * 00000001800AA867: movups  xmm0, [rbp+8C80h+var_8930]
 * 00000001800AA86E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA873: movups  xmm1, [rbp+8C80h+var_8920]
 * 00000001800AA87A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA87F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA884: mov     rcx, rax
 * 00000001800AA887: call    sub_180075D94
 * 00000001800AA88C: nop
 * 00000001800AA88D: lea     rcx, [rbp+8C80h+var_2EB0]
 * 00000001800AA894: call    sub_180011E30
 * 00000001800AA899: nop
 * 00000001800AA89A: lea     rcx, [rbp+8C80h+var_2E50]
 * 00000001800AA8A1: call    sub_180011E30
 * 00000001800AA8A6: nop
 * 00000001800AA8A7: lea     rcx, dword_1801CE330
 * 00000001800AA8AE: call    sub_18000D4CC
 * 00000001800AA8B3: mov     rax, [rdi+rbx*8]
 * 00000001800AA8B7: mov     eax, [r15+rax]
 * 00000001800AA8BB: cmp     cs:dword_1801CE334, eax
 * 00000001800AA8C1: jle     loc_1800AA99E
 * 00000001800AA8C7: lea     rcx, dword_1801CE334
 * 00000001800AA8CE: call    sub_18000D534
 * 00000001800AA8D3: cmp     cs:dword_1801CE334, r14d
 * 00000001800AA8DA: jnz     loc_1800AA99E
 * 00000001800AA8E0: lea     rax, unk_180188B20
 * 00000001800AA8E7: mov     qword ptr [rbp+8C80h+var_8910], rax
 * 00000001800AA8EE: lea     rax, unk_18018EF04
 * 00000001800AA8F5: mov     qword ptr [rbp+8C80h+var_8910+8], rax
 * 00000001800AA8FC: mov     dword ptr [rbp+8C80h+var_8900], 5
 * 00000001800AA906: mov     dword ptr [rbp+8C80h+var_8900+4], esi
 * 00000001800AA90C: call    sub_1800A8988
 * 00000001800AA911: mov     r8, rax
 * 00000001800AA914: mov     r9d, r12d
 * 00000001800AA917: mov     edx, 60h ; '`'
 * 00000001800AA91C: lea     rcx, [rbp+8C80h+var_2D90]
 * 00000001800AA923: call    sub_180075CF8
 * 00000001800AA928: nop
 * 00000001800AA929: mov     r8, rax
 * 00000001800AA92C: mov     rdx, r13
 * 00000001800AA92F: lea     rcx, [rbp+8C80h+var_2DF0]
 * 00000001800AA936: call    sub_18001C928
 * 00000001800AA93B: nop
 * 00000001800AA93C: lea     r8, aPixel; "/Pixel"
 * 00000001800AA943: mov     rdx, rax
 * 00000001800AA946: lea     rcx, [rbp+8C80h+var_68F0]
 * 00000001800AA94D: call    sub_18001C87C
 * 00000001800AA952: movups  xmm0, [rbp+8C80h+var_8910]
 * 00000001800AA959: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AA95E: movups  xmm1, [rbp+8C80h+var_8900]
 * 00000001800AA965: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AA96A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AA96F: mov     rcx, rax
 * 00000001800AA972: call    sub_180075D94
 * 00000001800AA977: nop
 * 00000001800AA978: lea     rcx, [rbp+8C80h+var_2DF0]
 * 00000001800AA97F: call    sub_180011E30
 * 00000001800AA984: nop
 * 00000001800AA985: lea     rcx, [rbp+8C80h+var_2D90]
 * 00000001800AA98C: call    sub_180011E30
 * 00000001800AA991: nop
 * 00000001800AA992: lea     rcx, dword_1801CE334
 * 00000001800AA999: call    sub_18000D4CC
 * 00000001800AA99E: mov     rax, [rdi+rbx*8]
 * 00000001800AA9A2: mov     eax, [r15+rax]
 * 00000001800AA9A6: cmp     cs:dword_1801CE338, eax
 * 00000001800AA9AC: jle     loc_1800AAA89
 * 00000001800AA9B2: lea     rcx, dword_1801CE338
 * 00000001800AA9B9: call    sub_18000D534
 * 00000001800AA9BE: cmp     cs:dword_1801CE338, r14d
 * 00000001800AA9C5: jnz     loc_1800AAA89
 * 00000001800AA9CB: lea     rax, unk_180188B20
 * 00000001800AA9D2: mov     qword ptr [rbp+8C80h+var_88F0], rax
 * 00000001800AA9D9: lea     rax, unk_18018EF04
 * 00000001800AA9E0: mov     qword ptr [rbp+8C80h+var_88F0+8], rax
 * 00000001800AA9E7: mov     dword ptr [rbp+8C80h+var_88E0], 5
 * 00000001800AA9F1: mov     dword ptr [rbp+8C80h+var_88E0+4], esi
 * 00000001800AA9F7: call    sub_1800A8988
 * 00000001800AA9FC: mov     r8, rax
 * 00000001800AA9FF: mov     r9d, r12d
 * 00000001800AAA02: mov     edx, 62h ; 'b'
 * 00000001800AAA07: lea     rcx, [rbp+8C80h+var_2CD0]
 * 00000001800AAA0E: call    sub_180075CF8
 * 00000001800AAA13: nop
 * 00000001800AAA14: mov     r8, rax
 * 00000001800AAA17: mov     rdx, r13
 * 00000001800AAA1A: lea     rcx, [rbp+8C80h+var_2D30]
 * 00000001800AAA21: call    sub_18001C928
 * 00000001800AAA26: nop
 * 00000001800AAA27: lea     r8, aPixel; "/Pixel"
 * 00000001800AAA2E: mov     rdx, rax
 * 00000001800AAA31: lea     rcx, [rbp+8C80h+var_6850]
 * 00000001800AAA38: call    sub_18001C87C
 * 00000001800AAA3D: movups  xmm0, [rbp+8C80h+var_88F0]
 * 00000001800AAA44: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AAA49: movups  xmm1, [rbp+8C80h+var_88E0]
 * 00000001800AAA50: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AAA55: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AAA5A: mov     rcx, rax
 * 00000001800AAA5D: call    sub_180075D94
 * 00000001800AAA62: nop
 * 00000001800AAA63: lea     rcx, [rbp+8C80h+var_2D30]
 * 00000001800AAA6A: call    sub_180011E30
 * 00000001800AAA6F: nop
 * 00000001800AAA70: lea     rcx, [rbp+8C80h+var_2CD0]
 * 00000001800AAA77: call    sub_180011E30
 * 00000001800AAA7C: nop
 * 00000001800AAA7D: lea     rcx, dword_1801CE338
 * 00000001800AAA84: call    sub_18000D4CC
 * 00000001800AAA89: mov     rax, [rdi+rbx*8]
 * 00000001800AAA8D: mov     eax, [r15+rax]
 * 00000001800AAA91: cmp     cs:dword_1801CE33C, eax
 * 00000001800AAA97: jle     loc_1800AAB74
 * 00000001800AAA9D: lea     rcx, dword_1801CE33C
 * 00000001800AAAA4: call    sub_18000D534
 * 00000001800AAAA9: cmp     cs:dword_1801CE33C, r14d
 * 00000001800AAAB0: jnz     loc_1800AAB74
 * 00000001800AAAB6: lea     rax, unk_180177350
 * 00000001800AAABD: mov     qword ptr [rbp+8C80h+var_88D0], rax
 * 00000001800AAAC4: lea     rax, unk_18017D8DC
 * 00000001800AAACB: mov     qword ptr [rbp+8C80h+var_88D0+8], rax
 * 00000001800AAAD2: mov     dword ptr [rbp+8C80h+var_88C0], 5
 * 00000001800AAADC: mov     dword ptr [rbp+8C80h+var_88C0+4], esi
 * 00000001800AAAE2: call    sub_1800A8988
 * 00000001800AAAE7: mov     r8, rax
 * 00000001800AAAEA: mov     r9d, r12d
 * 00000001800AAAED: mov     edx, 68h ; 'h'
 * 00000001800AAAF2: lea     rcx, [rbp+8C80h+var_2C10]
 * 00000001800AAAF9: call    sub_180075CF8
 * 00000001800AAAFE: nop
 * 00000001800AAAFF: mov     r8, rax
 * 00000001800AAB02: mov     rdx, r13
 * 00000001800AAB05: lea     rcx, [rbp+8C80h+var_2C70]
 * 00000001800AAB0C: call    sub_18001C928
 * 00000001800AAB11: nop
 * 00000001800AAB12: lea     r8, aPixel; "/Pixel"
 * 00000001800AAB19: mov     rdx, rax
 * 00000001800AAB1C: lea     rcx, [rbp+8C80h+var_67D0]
 * 00000001800AAB23: call    sub_18001C87C
 * 00000001800AAB28: movups  xmm0, [rbp+8C80h+var_88D0]
 * 00000001800AAB2F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AAB34: movups  xmm1, [rbp+8C80h+var_88C0]
 * 00000001800AAB3B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AAB40: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AAB45: mov     rcx, rax
 * 00000001800AAB48: call    sub_180075D94
 * 00000001800AAB4D: nop
 * 00000001800AAB4E: lea     rcx, [rbp+8C80h+var_2C70]
 * 00000001800AAB55: call    sub_180011E30
 * 00000001800AAB5A: nop
 * 00000001800AAB5B: lea     rcx, [rbp+8C80h+var_2C10]
 * 00000001800AAB62: call    sub_180011E30
 * 00000001800AAB67: nop
 * 00000001800AAB68: lea     rcx, dword_1801CE33C
 * 00000001800AAB6F: call    sub_18000D4CC
 * 00000001800AAB74: mov     rax, [rdi+rbx*8]
 * 00000001800AAB78: mov     eax, [r15+rax]
 * 00000001800AAB7C: cmp     cs:dword_1801CE340, eax
 * 00000001800AAB82: jle     loc_1800AAC5F
 * 00000001800AAB88: lea     rcx, dword_1801CE340
 * 00000001800AAB8F: call    sub_18000D534
 * 00000001800AAB94: cmp     cs:dword_1801CE340, r14d
 * 00000001800AAB9B: jnz     loc_1800AAC5F
 * 00000001800AABA1: lea     rax, unk_180177350
 * 00000001800AABA8: mov     qword ptr [rbp+8C80h+var_88B0], rax
 * 00000001800AABAF: lea     rax, unk_18017D8DC
 * 00000001800AABB6: mov     qword ptr [rbp+8C80h+var_88B0+8], rax
 * 00000001800AABBD: mov     dword ptr [rbp+8C80h+var_88A0], 5
 * 00000001800AABC7: mov     dword ptr [rbp+8C80h+var_88A0+4], esi
 * 00000001800AABCD: call    sub_1800A8988
 * 00000001800AABD2: mov     r8, rax
 * 00000001800AABD5: mov     r9d, r12d
 * 00000001800AABD8: mov     edx, 6Ah ; 'j'
 * 00000001800AABDD: lea     rcx, [rbp+8C80h+var_2B50]
 * 00000001800AABE4: call    sub_180075CF8
 * 00000001800AABE9: nop
 * 00000001800AABEA: mov     r8, rax
 * 00000001800AABED: mov     rdx, r13
 * 00000001800AABF0: lea     rcx, [rbp+8C80h+var_2BB0]
 * 00000001800AABF7: call    sub_18001C928
 * 00000001800AABFC: nop
 * 00000001800AABFD: lea     r8, aPixel; "/Pixel"
 * 00000001800AAC04: mov     rdx, rax
 * 00000001800AAC07: lea     rcx, [rbp+8C80h+var_6730]
 * 00000001800AAC0E: call    sub_18001C87C
 * 00000001800AAC13: movups  xmm0, [rbp+8C80h+var_88B0]
 * 00000001800AAC1A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AAC1F: movups  xmm1, [rbp+8C80h+var_88A0]
 * 00000001800AAC26: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AAC2B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AAC30: mov     rcx, rax
 * 00000001800AAC33: call    sub_180075D94
 * 00000001800AAC38: nop
 * 00000001800AAC39: lea     rcx, [rbp+8C80h+var_2BB0]
 * 00000001800AAC40: call    sub_180011E30
 * 00000001800AAC45: nop
 * 00000001800AAC46: lea     rcx, [rbp+8C80h+var_2B50]
 * 00000001800AAC4D: call    sub_180011E30
 * 00000001800AAC52: nop
 * 00000001800AAC53: lea     rcx, dword_1801CE340
 * 00000001800AAC5A: call    sub_18000D4CC
 * 00000001800AAC5F: mov     rax, [rdi+rbx*8]
 * 00000001800AAC63: mov     eax, [r15+rax]
 * 00000001800AAC67: cmp     cs:dword_1801CE344, eax
 * 00000001800AAC6D: jle     loc_1800AAD4A
 * 00000001800AAC73: lea     rcx, dword_1801CE344
 * 00000001800AAC7A: call    sub_18000D534
 * 00000001800AAC7F: cmp     cs:dword_1801CE344, r14d
 * 00000001800AAC86: jnz     loc_1800AAD4A
 * 00000001800AAC8C: lea     rax, unk_180180A90
 * 00000001800AAC93: mov     qword ptr [rbp+8C80h+var_8890], rax
 * 00000001800AAC9A: lea     rax, unk_180187048
 * 00000001800AACA1: mov     qword ptr [rbp+8C80h+var_8890+8], rax
 * 00000001800AACA8: mov     dword ptr [rbp+8C80h+var_8880], 5
 * 00000001800AACB2: mov     dword ptr [rbp+8C80h+var_8880+4], esi
 * 00000001800AACB8: call    sub_1800A8988
 * 00000001800AACBD: mov     r8, rax
 * 00000001800AACC0: mov     r9d, r12d
 * 00000001800AACC3: mov     edx, 70h ; 'p'
 * 00000001800AACC8: lea     rcx, [rbp+8C80h+var_2A90]
 * 00000001800AACCF: call    sub_180075CF8
 * 00000001800AACD4: nop
 * 00000001800AACD5: mov     r8, rax
 * 00000001800AACD8: mov     rdx, r13
 * 00000001800AACDB: lea     rcx, [rbp+8C80h+var_2AF0]
 * 00000001800AACE2: call    sub_18001C928
 * 00000001800AACE7: nop
 * 00000001800AACE8: lea     r8, aPixel; "/Pixel"
 * 00000001800AACEF: mov     rdx, rax
 * 00000001800AACF2: lea     rcx, [rbp+8C80h+var_66B0]
 * 00000001800AACF9: call    sub_18001C87C
 * 00000001800AACFE: movups  xmm0, [rbp+8C80h+var_8890]
 * 00000001800AAD05: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AAD0A: movups  xmm1, [rbp+8C80h+var_8880]
 * 00000001800AAD11: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AAD16: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AAD1B: mov     rcx, rax
 * 00000001800AAD1E: call    sub_180075D94
 * 00000001800AAD23: nop
 * 00000001800AAD24: lea     rcx, [rbp+8C80h+var_2AF0]
 * 00000001800AAD2B: call    sub_180011E30
 * 00000001800AAD30: nop
 * 00000001800AAD31: lea     rcx, [rbp+8C80h+var_2A90]
 * 00000001800AAD38: call    sub_180011E30
 * 00000001800AAD3D: nop
 * 00000001800AAD3E: lea     rcx, dword_1801CE344
 * 00000001800AAD45: call    sub_18000D4CC
 * 00000001800AAD4A: mov     rax, [rdi+rbx*8]
 * 00000001800AAD4E: mov     eax, [r15+rax]
 * 00000001800AAD52: cmp     cs:dword_1801CE348, eax
 * 00000001800AAD58: jle     loc_1800AAE35
 * 00000001800AAD5E: lea     rcx, dword_1801CE348
 * 00000001800AAD65: call    sub_18000D534
 * 00000001800AAD6A: cmp     cs:dword_1801CE348, r14d
 * 00000001800AAD71: jnz     loc_1800AAE35
 * 00000001800AAD77: lea     rax, unk_180180A90
 * 00000001800AAD7E: mov     qword ptr [rbp+8C80h+var_8870], rax
 * 00000001800AAD85: lea     rax, unk_180187048
 * 00000001800AAD8C: mov     qword ptr [rbp+8C80h+var_8870+8], rax
 * 00000001800AAD93: mov     dword ptr [rbp+8C80h+var_8860], 5
 * 00000001800AAD9D: mov     dword ptr [rbp+8C80h+var_8860+4], esi
 * 00000001800AADA3: call    sub_1800A8988
 * 00000001800AADA8: mov     r8, rax
 * 00000001800AADAB: mov     r9d, r12d
 * 00000001800AADAE: mov     edx, 72h ; 'r'
 * 00000001800AADB3: lea     rcx, [rbp+8C80h+var_29D0]
 * 00000001800AADBA: call    sub_180075CF8
 * 00000001800AADBF: nop
 * 00000001800AADC0: mov     r8, rax
 * 00000001800AADC3: mov     rdx, r13
 * 00000001800AADC6: lea     rcx, [rbp+8C80h+var_2A30]
 * 00000001800AADCD: call    sub_18001C928
 * 00000001800AADD2: nop
 * 00000001800AADD3: lea     r8, aPixel; "/Pixel"
 * 00000001800AADDA: mov     rdx, rax
 * 00000001800AADDD: lea     rcx, [rbp+8C80h+var_6610]
 * 00000001800AADE4: call    sub_18001C87C
 * 00000001800AADE9: movups  xmm0, [rbp+8C80h+var_8870]
 * 00000001800AADF0: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AADF5: movups  xmm1, [rbp+8C80h+var_8860]
 * 00000001800AADFC: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AAE01: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AAE06: mov     rcx, rax
 * 00000001800AAE09: call    sub_180075D94
 * 00000001800AAE0E: nop
 * 00000001800AAE0F: lea     rcx, [rbp+8C80h+var_2A30]
 * 00000001800AAE16: call    sub_180011E30
 * 00000001800AAE1B: nop
 * 00000001800AAE1C: lea     rcx, [rbp+8C80h+var_29D0]
 * 00000001800AAE23: call    sub_180011E30
 * 00000001800AAE28: nop
 * 00000001800AAE29: lea     rcx, dword_1801CE348
 * 00000001800AAE30: call    sub_18000D4CC
 * 00000001800AAE35: mov     rax, [rdi+rbx*8]
 * 00000001800AAE39: mov     eax, [r15+rax]
 * 00000001800AAE3D: cmp     cs:dword_1801CE34C, eax
 * 00000001800AAE43: jle     loc_1800AAF20
 * 00000001800AAE49: lea     rcx, dword_1801CE34C
 * 00000001800AAE50: call    sub_18000D534
 * 00000001800AAE55: cmp     cs:dword_1801CE34C, r14d
 * 00000001800AAE5C: jnz     loc_1800AAF20
 * 00000001800AAE62: lea     rax, unk_18015FB10
 * 00000001800AAE69: mov     qword ptr [rbp+8C80h+var_8850], rax
 * 00000001800AAE70: lea     rax, unk_18016629C
 * 00000001800AAE77: mov     qword ptr [rbp+8C80h+var_8850+8], rax
 * 00000001800AAE7E: mov     dword ptr [rbp+8C80h+var_8840], 5
 * 00000001800AAE88: mov     dword ptr [rbp+8C80h+var_8840+4], esi
 * 00000001800AAE8E: call    sub_1800A8988
 * 00000001800AAE93: mov     r8, rax
 * 00000001800AAE96: mov     r9d, r12d
 * 00000001800AAE99: mov     edx, 78h ; 'x'
 * 00000001800AAE9E: lea     rcx, [rbp+8C80h+var_2910]
 * 00000001800AAEA5: call    sub_180075CF8
 * 00000001800AAEAA: nop
 * 00000001800AAEAB: mov     r8, rax
 * 00000001800AAEAE: mov     rdx, r13
 * 00000001800AAEB1: lea     rcx, [rbp+8C80h+var_2970]
 * 00000001800AAEB8: call    sub_18001C928
 * 00000001800AAEBD: nop
 * 00000001800AAEBE: lea     r8, aPixel; "/Pixel"
 * 00000001800AAEC5: mov     rdx, rax
 * 00000001800AAEC8: lea     rcx, [rbp+8C80h+var_6590]
 * 00000001800AAECF: call    sub_18001C87C
 * 00000001800AAED4: movups  xmm0, [rbp+8C80h+var_8850]
 * 00000001800AAEDB: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AAEE0: movups  xmm1, [rbp+8C80h+var_8840]
 * 00000001800AAEE7: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AAEEC: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AAEF1: mov     rcx, rax
 * 00000001800AAEF4: call    sub_180075D94
 * 00000001800AAEF9: nop
 * 00000001800AAEFA: lea     rcx, [rbp+8C80h+var_2970]
 * 00000001800AAF01: call    sub_180011E30
 * 00000001800AAF06: nop
 * 00000001800AAF07: lea     rcx, [rbp+8C80h+var_2910]
 * 00000001800AAF0E: call    sub_180011E30
 * 00000001800AAF13: nop
 * 00000001800AAF14: lea     rcx, dword_1801CE34C
 * 00000001800AAF1B: call    sub_18000D4CC
 * 00000001800AAF20: mov     rax, [rdi+rbx*8]
 * 00000001800AAF24: mov     eax, [r15+rax]
 * 00000001800AAF28: cmp     cs:dword_1801CE350, eax
 * 00000001800AAF2E: jle     loc_1800AB00B
 * 00000001800AAF34: lea     rcx, dword_1801CE350
 * 00000001800AAF3B: call    sub_18000D534
 * 00000001800AAF40: cmp     cs:dword_1801CE350, r14d
 * 00000001800AAF47: jnz     loc_1800AB00B
 * 00000001800AAF4D: lea     rax, unk_18015FB10
 * 00000001800AAF54: mov     qword ptr [rbp+8C80h+var_8830], rax
 * 00000001800AAF5B: lea     rax, unk_18016629C
 * 00000001800AAF62: mov     qword ptr [rbp+8C80h+var_8830+8], rax
 * 00000001800AAF69: mov     dword ptr [rbp+8C80h+var_8820], 5
 * 00000001800AAF73: mov     dword ptr [rbp+8C80h+var_8820+4], esi
 * 00000001800AAF79: call    sub_1800A8988
 * 00000001800AAF7E: mov     r8, rax
 * 00000001800AAF81: mov     r9d, r12d
 * 00000001800AAF84: mov     edx, 7Ah ; 'z'
 * 00000001800AAF89: lea     rcx, [rbp+8C80h+var_2850]
 * 00000001800AAF90: call    sub_180075CF8
 * 00000001800AAF95: nop
 * 00000001800AAF96: mov     r8, rax
 * 00000001800AAF99: mov     rdx, r13
 * 00000001800AAF9C: lea     rcx, [rbp+8C80h+var_28B0]
 * 00000001800AAFA3: call    sub_18001C928
 * 00000001800AAFA8: nop
 * 00000001800AAFA9: lea     r8, aPixel; "/Pixel"
 * 00000001800AAFB0: mov     rdx, rax
 * 00000001800AAFB3: lea     rcx, [rbp+8C80h+var_64F0]
 * 00000001800AAFBA: call    sub_18001C87C
 * 00000001800AAFBF: movups  xmm0, [rbp+8C80h+var_8830]
 * 00000001800AAFC6: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AAFCB: movups  xmm1, [rbp+8C80h+var_8820]
 * 00000001800AAFD2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AAFD7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AAFDC: mov     rcx, rax
 * 00000001800AAFDF: call    sub_180075D94
 * 00000001800AAFE4: nop
 * 00000001800AAFE5: lea     rcx, [rbp+8C80h+var_28B0]
 * 00000001800AAFEC: call    sub_180011E30
 * 00000001800AAFF1: nop
 * 00000001800AAFF2: lea     rcx, [rbp+8C80h+var_2850]
 * 00000001800AAFF9: call    sub_180011E30
 * 00000001800AAFFE: nop
 * 00000001800AAFFF: lea     rcx, dword_1801CE350
 * 00000001800AB006: call    sub_18000D4CC
 * 00000001800AB00B: mov     rax, [rdi+rbx*8]
 * 00000001800AB00F: mov     eax, [r15+rax]
 * 00000001800AB013: cmp     cs:dword_1801CE354, eax
 * 00000001800AB019: jle     loc_1800AB0F6
 * 00000001800AB01F: lea     rcx, dword_1801CE354
 * 00000001800AB026: call    sub_18000D534
 * 00000001800AB02B: cmp     cs:dword_1801CE354, r14d
 * 00000001800AB032: jnz     loc_1800AB0F6
 * 00000001800AB038: lea     rax, unk_180188B20
 * 00000001800AB03F: mov     qword ptr [rbp+8C80h+var_8810], rax
 * 00000001800AB046: lea     rax, unk_18018EF04
 * 00000001800AB04D: mov     qword ptr [rbp+8C80h+var_8810+8], rax
 * 00000001800AB054: mov     dword ptr [rbp+8C80h+var_8800], 5
 * 00000001800AB05E: mov     dword ptr [rbp+8C80h+var_8800+4], esi
 * 00000001800AB064: call    sub_1800A8988
 * 00000001800AB069: mov     r8, rax
 * 00000001800AB06C: mov     r9d, r12d
 * 00000001800AB06F: mov     edx, 80h
 * 00000001800AB074: lea     rcx, [rbp+8C80h+var_2790]
 * 00000001800AB07B: call    sub_180075CF8
 * 00000001800AB080: nop
 * 00000001800AB081: mov     r8, rax
 * 00000001800AB084: mov     rdx, r13
 * 00000001800AB087: lea     rcx, [rbp+8C80h+var_27F0]
 * 00000001800AB08E: call    sub_18001C928
 * 00000001800AB093: nop
 * 00000001800AB094: lea     r8, aPixel; "/Pixel"
 * 00000001800AB09B: mov     rdx, rax
 * 00000001800AB09E: lea     rcx, [rbp+8C80h+var_6470]
 * 00000001800AB0A5: call    sub_18001C87C
 * 00000001800AB0AA: movups  xmm0, [rbp+8C80h+var_8810]
 * 00000001800AB0B1: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB0B6: movups  xmm1, [rbp+8C80h+var_8800]
 * 00000001800AB0BD: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB0C2: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB0C7: mov     rcx, rax
 * 00000001800AB0CA: call    sub_180075D94
 * 00000001800AB0CF: nop
 * 00000001800AB0D0: lea     rcx, [rbp+8C80h+var_27F0]
 * 00000001800AB0D7: call    sub_180011E30
 * 00000001800AB0DC: nop
 * 00000001800AB0DD: lea     rcx, [rbp+8C80h+var_2790]
 * 00000001800AB0E4: call    sub_180011E30
 * 00000001800AB0E9: nop
 * 00000001800AB0EA: lea     rcx, dword_1801CE354
 * 00000001800AB0F1: call    sub_18000D4CC
 * 00000001800AB0F6: mov     rax, [rdi+rbx*8]
 * 00000001800AB0FA: mov     eax, [r15+rax]
 * 00000001800AB0FE: cmp     cs:dword_1801CE358, eax
 * 00000001800AB104: jle     loc_1800AB1E1
 * 00000001800AB10A: lea     rcx, dword_1801CE358
 * 00000001800AB111: call    sub_18000D534
 * 00000001800AB116: cmp     cs:dword_1801CE358, r14d
 * 00000001800AB11D: jnz     loc_1800AB1E1
 * 00000001800AB123: lea     rax, unk_180188B20
 * 00000001800AB12A: mov     qword ptr [rbp+8C80h+var_87F0], rax
 * 00000001800AB131: lea     rax, unk_18018EF04
 * 00000001800AB138: mov     qword ptr [rbp+8C80h+var_87F0+8], rax
 * 00000001800AB13F: mov     dword ptr [rbp+8C80h+var_87E0], 5
 * 00000001800AB149: mov     dword ptr [rbp+8C80h+var_87E0+4], esi
 * 00000001800AB14F: call    sub_1800A8988
 * 00000001800AB154: mov     r8, rax
 * 00000001800AB157: mov     r9d, r12d
 * 00000001800AB15A: mov     edx, 82h
 * 00000001800AB15F: lea     rcx, [rbp+8C80h+var_26D0]
 * 00000001800AB166: call    sub_180075CF8
 * 00000001800AB16B: nop
 * 00000001800AB16C: mov     r8, rax
 * 00000001800AB16F: mov     rdx, r13
 * 00000001800AB172: lea     rcx, [rbp+8C80h+var_2730]
 * 00000001800AB179: call    sub_18001C928
 * 00000001800AB17E: nop
 * 00000001800AB17F: lea     r8, aPixel; "/Pixel"
 * 00000001800AB186: mov     rdx, rax
 * 00000001800AB189: lea     rcx, [rbp+8C80h+var_63D0]
 * 00000001800AB190: call    sub_18001C87C
 * 00000001800AB195: movups  xmm0, [rbp+8C80h+var_87F0]
 * 00000001800AB19C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB1A1: movups  xmm1, [rbp+8C80h+var_87E0]
 * 00000001800AB1A8: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB1AD: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB1B2: mov     rcx, rax
 * 00000001800AB1B5: call    sub_180075D94
 * 00000001800AB1BA: nop
 * 00000001800AB1BB: lea     rcx, [rbp+8C80h+var_2730]
 * 00000001800AB1C2: call    sub_180011E30
 * 00000001800AB1C7: nop
 * 00000001800AB1C8: lea     rcx, [rbp+8C80h+var_26D0]
 * 00000001800AB1CF: call    sub_180011E30
 * 00000001800AB1D4: nop
 * 00000001800AB1D5: lea     rcx, dword_1801CE358
 * 00000001800AB1DC: call    sub_18000D4CC
 * 00000001800AB1E1: mov     rax, [rdi+rbx*8]
 * 00000001800AB1E5: mov     eax, [r15+rax]
 * 00000001800AB1E9: cmp     cs:dword_1801CE35C, eax
 * 00000001800AB1EF: jle     loc_1800AB2CC
 * 00000001800AB1F5: lea     rcx, dword_1801CE35C
 * 00000001800AB1FC: call    sub_18000D534
 * 00000001800AB201: cmp     cs:dword_1801CE35C, r14d
 * 00000001800AB208: jnz     loc_1800AB2CC
 * 00000001800AB20E: lea     rax, unk_180177350
 * 00000001800AB215: mov     qword ptr [rbp+8C80h+var_87D0], rax
 * 00000001800AB21C: lea     rax, unk_18017D8DC
 * 00000001800AB223: mov     qword ptr [rbp+8C80h+var_87D0+8], rax
 * 00000001800AB22A: mov     dword ptr [rbp+8C80h+var_87C0], 5
 * 00000001800AB234: mov     dword ptr [rbp+8C80h+var_87C0+4], esi
 * 00000001800AB23A: call    sub_1800A8988
 * 00000001800AB23F: mov     r8, rax
 * 00000001800AB242: mov     r9d, r12d
 * 00000001800AB245: mov     edx, 88h
 * 00000001800AB24A: lea     rcx, [rbp+8C80h+var_2610]
 * 00000001800AB251: call    sub_180075CF8
 * 00000001800AB256: nop
 * 00000001800AB257: mov     r8, rax
 * 00000001800AB25A: mov     rdx, r13
 * 00000001800AB25D: lea     rcx, [rbp+8C80h+var_2670]
 * 00000001800AB264: call    sub_18001C928
 * 00000001800AB269: nop
 * 00000001800AB26A: lea     r8, aPixel; "/Pixel"
 * 00000001800AB271: mov     rdx, rax
 * 00000001800AB274: lea     rcx, [rbp+8C80h+var_6350]
 * 00000001800AB27B: call    sub_18001C87C
 * 00000001800AB280: movups  xmm0, [rbp+8C80h+var_87D0]
 * 00000001800AB287: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB28C: movups  xmm1, [rbp+8C80h+var_87C0]
 * 00000001800AB293: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB298: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB29D: mov     rcx, rax
 * 00000001800AB2A0: call    sub_180075D94
 * 00000001800AB2A5: nop
 * 00000001800AB2A6: lea     rcx, [rbp+8C80h+var_2670]
 * 00000001800AB2AD: call    sub_180011E30
 * 00000001800AB2B2: nop
 * 00000001800AB2B3: lea     rcx, [rbp+8C80h+var_2610]
 * 00000001800AB2BA: call    sub_180011E30
 * 00000001800AB2BF: nop
 * 00000001800AB2C0: lea     rcx, dword_1801CE35C
 * 00000001800AB2C7: call    sub_18000D4CC
 * 00000001800AB2CC: mov     rax, [rdi+rbx*8]
 * 00000001800AB2D0: mov     eax, [r15+rax]
 * 00000001800AB2D4: cmp     cs:dword_1801CE360, eax
 * 00000001800AB2DA: jle     loc_1800AB3B7
 * 00000001800AB2E0: lea     rcx, dword_1801CE360
 * 00000001800AB2E7: call    sub_18000D534
 * 00000001800AB2EC: cmp     cs:dword_1801CE360, r14d
 * 00000001800AB2F3: jnz     loc_1800AB3B7
 * 00000001800AB2F9: lea     rax, unk_180177350
 * 00000001800AB300: mov     qword ptr [rbp+8C80h+var_87B0], rax
 * 00000001800AB307: lea     rax, unk_18017D8DC
 * 00000001800AB30E: mov     qword ptr [rbp+8C80h+var_87B0+8], rax
 * 00000001800AB315: mov     dword ptr [rbp+8C80h+var_87A0], 5
 * 00000001800AB31F: mov     dword ptr [rbp+8C80h+var_87A0+4], esi
 * 00000001800AB325: call    sub_1800A8988
 * 00000001800AB32A: mov     r8, rax
 * 00000001800AB32D: mov     r9d, r12d
 * 00000001800AB330: mov     edx, 8Ah
 * 00000001800AB335: lea     rcx, [rbp+8C80h+var_2550]
 * 00000001800AB33C: call    sub_180075CF8
 * 00000001800AB341: nop
 * 00000001800AB342: mov     r8, rax
 * 00000001800AB345: mov     rdx, r13
 * 00000001800AB348: lea     rcx, [rbp+8C80h+var_25B0]
 * 00000001800AB34F: call    sub_18001C928
 * 00000001800AB354: nop
 * 00000001800AB355: lea     r8, aPixel; "/Pixel"
 * 00000001800AB35C: mov     rdx, rax
 * 00000001800AB35F: lea     rcx, [rbp+8C80h+var_62B0]
 * 00000001800AB366: call    sub_18001C87C
 * 00000001800AB36B: movups  xmm0, [rbp+8C80h+var_87B0]
 * 00000001800AB372: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB377: movups  xmm1, [rbp+8C80h+var_87A0]
 * 00000001800AB37E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB383: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB388: mov     rcx, rax
 * 00000001800AB38B: call    sub_180075D94
 * 00000001800AB390: nop
 * 00000001800AB391: lea     rcx, [rbp+8C80h+var_25B0]
 * 00000001800AB398: call    sub_180011E30
 * 00000001800AB39D: nop
 * 00000001800AB39E: lea     rcx, [rbp+8C80h+var_2550]
 * 00000001800AB3A5: call    sub_180011E30
 * 00000001800AB3AA: nop
 * 00000001800AB3AB: lea     rcx, dword_1801CE360
 * 00000001800AB3B2: call    sub_18000D4CC
 * 00000001800AB3B7: mov     rax, [rdi+rbx*8]
 * 00000001800AB3BB: mov     eax, [r15+rax]
 * 00000001800AB3BF: cmp     cs:dword_1801CE364, eax
 * 00000001800AB3C5: jle     loc_1800AB4A2
 * 00000001800AB3CB: lea     rcx, dword_1801CE364
 * 00000001800AB3D2: call    sub_18000D534
 * 00000001800AB3D7: cmp     cs:dword_1801CE364, r14d
 * 00000001800AB3DE: jnz     loc_1800AB4A2
 * 00000001800AB3E4: lea     rax, unk_180180A90
 * 00000001800AB3EB: mov     qword ptr [rbp+8C80h+var_8790], rax
 * 00000001800AB3F2: lea     rax, unk_180187048
 * 00000001800AB3F9: mov     qword ptr [rbp+8C80h+var_8790+8], rax
 * 00000001800AB400: mov     dword ptr [rbp+8C80h+var_8780], 5
 * 00000001800AB40A: mov     dword ptr [rbp+8C80h+var_8780+4], esi
 * 00000001800AB410: call    sub_1800A8988
 * 00000001800AB415: mov     r8, rax
 * 00000001800AB418: mov     r9d, r12d
 * 00000001800AB41B: mov     edx, 90h
 * 00000001800AB420: lea     rcx, [rbp+8C80h+var_2490]
 * 00000001800AB427: call    sub_180075CF8
 * 00000001800AB42C: nop
 * 00000001800AB42D: mov     r8, rax
 * 00000001800AB430: mov     rdx, r13
 * 00000001800AB433: lea     rcx, [rbp+8C80h+var_24F0]
 * 00000001800AB43A: call    sub_18001C928
 * 00000001800AB43F: nop
 * 00000001800AB440: lea     r8, aPixel; "/Pixel"
 * 00000001800AB447: mov     rdx, rax
 * 00000001800AB44A: lea     rcx, [rbp+8C80h+var_6230]
 * 00000001800AB451: call    sub_18001C87C
 * 00000001800AB456: movups  xmm0, [rbp+8C80h+var_8790]
 * 00000001800AB45D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB462: movups  xmm1, [rbp+8C80h+var_8780]
 * 00000001800AB469: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB46E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB473: mov     rcx, rax
 * 00000001800AB476: call    sub_180075D94
 * 00000001800AB47B: nop
 * 00000001800AB47C: lea     rcx, [rbp+8C80h+var_24F0]
 * 00000001800AB483: call    sub_180011E30
 * 00000001800AB488: nop
 * 00000001800AB489: lea     rcx, [rbp+8C80h+var_2490]
 * 00000001800AB490: call    sub_180011E30
 * 00000001800AB495: nop
 * 00000001800AB496: lea     rcx, dword_1801CE364
 * 00000001800AB49D: call    sub_18000D4CC
 * 00000001800AB4A2: mov     rax, [rdi+rbx*8]
 * 00000001800AB4A6: mov     eax, [r15+rax]
 * 00000001800AB4AA: cmp     cs:dword_1801CE368, eax
 * 00000001800AB4B0: jle     loc_1800AB58D
 * 00000001800AB4B6: lea     rcx, dword_1801CE368
 * 00000001800AB4BD: call    sub_18000D534
 * 00000001800AB4C2: cmp     cs:dword_1801CE368, r14d
 * 00000001800AB4C9: jnz     loc_1800AB58D
 * 00000001800AB4CF: lea     rax, unk_180180A90
 * 00000001800AB4D6: mov     qword ptr [rbp+8C80h+var_8770], rax
 * 00000001800AB4DD: lea     rax, unk_180187048
 * 00000001800AB4E4: mov     qword ptr [rbp+8C80h+var_8770+8], rax
 * 00000001800AB4EB: mov     dword ptr [rbp+8C80h+var_8760], 5
 * 00000001800AB4F5: mov     dword ptr [rbp+8C80h+var_8760+4], esi
 * 00000001800AB4FB: call    sub_1800A8988
 * 00000001800AB500: mov     r8, rax
 * 00000001800AB503: mov     r9d, r12d
 * 00000001800AB506: mov     edx, 92h
 * 00000001800AB50B: lea     rcx, [rbp+8C80h+var_23D0]
 * 00000001800AB512: call    sub_180075CF8
 * 00000001800AB517: nop
 * 00000001800AB518: mov     r8, rax
 * 00000001800AB51B: mov     rdx, r13
 * 00000001800AB51E: lea     rcx, [rbp+8C80h+var_2430]
 * 00000001800AB525: call    sub_18001C928
 * 00000001800AB52A: nop
 * 00000001800AB52B: lea     r8, aPixel; "/Pixel"
 * 00000001800AB532: mov     rdx, rax
 * 00000001800AB535: lea     rcx, [rbp+8C80h+var_6190]
 * 00000001800AB53C: call    sub_18001C87C
 * 00000001800AB541: movups  xmm0, [rbp+8C80h+var_8770]
 * 00000001800AB548: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB54D: movups  xmm1, [rbp+8C80h+var_8760]
 * 00000001800AB554: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB559: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB55E: mov     rcx, rax
 * 00000001800AB561: call    sub_180075D94
 * 00000001800AB566: nop
 * 00000001800AB567: lea     rcx, [rbp+8C80h+var_2430]
 * 00000001800AB56E: call    sub_180011E30
 * 00000001800AB573: nop
 * 00000001800AB574: lea     rcx, [rbp+8C80h+var_23D0]
 * 00000001800AB57B: call    sub_180011E30
 * 00000001800AB580: nop
 * 00000001800AB581: lea     rcx, dword_1801CE368
 * 00000001800AB588: call    sub_18000D4CC
 * 00000001800AB58D: mov     rax, [rdi+rbx*8]
 * 00000001800AB591: mov     eax, [r15+rax]
 * 00000001800AB595: cmp     cs:dword_1801CE36C, eax
 * 00000001800AB59B: jle     loc_1800AB678
 * 00000001800AB5A1: lea     rcx, dword_1801CE36C
 * 00000001800AB5A8: call    sub_18000D534
 * 00000001800AB5AD: cmp     cs:dword_1801CE36C, r14d
 * 00000001800AB5B4: jnz     loc_1800AB678
 * 00000001800AB5BA: lea     rax, unk_18015FB10
 * 00000001800AB5C1: mov     qword ptr [rbp+8C80h+var_8750], rax
 * 00000001800AB5C8: lea     rax, unk_18016629C
 * 00000001800AB5CF: mov     qword ptr [rbp+8C80h+var_8750+8], rax
 * 00000001800AB5D6: mov     dword ptr [rbp+8C80h+var_8740], 5
 * 00000001800AB5E0: mov     dword ptr [rbp+8C80h+var_8740+4], esi
 * 00000001800AB5E6: call    sub_1800A8988
 * 00000001800AB5EB: mov     r8, rax
 * 00000001800AB5EE: mov     r9d, r12d
 * 00000001800AB5F1: mov     edx, 98h
 * 00000001800AB5F6: lea     rcx, [rbp+8C80h+var_2310]
 * 00000001800AB5FD: call    sub_180075CF8
 * 00000001800AB602: nop
 * 00000001800AB603: mov     r8, rax
 * 00000001800AB606: mov     rdx, r13
 * 00000001800AB609: lea     rcx, [rbp+8C80h+var_2370]
 * 00000001800AB610: call    sub_18001C928
 * 00000001800AB615: nop
 * 00000001800AB616: lea     r8, aPixel; "/Pixel"
 * 00000001800AB61D: mov     rdx, rax
 * 00000001800AB620: lea     rcx, [rbp+8C80h+var_6110]
 * 00000001800AB627: call    sub_18001C87C
 * 00000001800AB62C: movups  xmm0, [rbp+8C80h+var_8750]
 * 00000001800AB633: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB638: movups  xmm1, [rbp+8C80h+var_8740]
 * 00000001800AB63F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB644: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB649: mov     rcx, rax
 * 00000001800AB64C: call    sub_180075D94
 * 00000001800AB651: nop
 * 00000001800AB652: lea     rcx, [rbp+8C80h+var_2370]
 * 00000001800AB659: call    sub_180011E30
 * 00000001800AB65E: nop
 * 00000001800AB65F: lea     rcx, [rbp+8C80h+var_2310]
 * 00000001800AB666: call    sub_180011E30
 * 00000001800AB66B: nop
 * 00000001800AB66C: lea     rcx, dword_1801CE36C
 * 00000001800AB673: call    sub_18000D4CC
 * 00000001800AB678: mov     rax, [rdi+rbx*8]
 * 00000001800AB67C: mov     eax, [r15+rax]
 * 00000001800AB680: cmp     cs:dword_1801CE370, eax
 * 00000001800AB686: jle     loc_1800AB763
 * 00000001800AB68C: lea     rcx, dword_1801CE370
 * 00000001800AB693: call    sub_18000D534
 * 00000001800AB698: cmp     cs:dword_1801CE370, r14d
 * 00000001800AB69F: jnz     loc_1800AB763
 * 00000001800AB6A5: lea     rax, unk_18015FB10
 * 00000001800AB6AC: mov     qword ptr [rbp+8C80h+var_8730], rax
 * 00000001800AB6B3: lea     rax, unk_18016629C
 * 00000001800AB6BA: mov     qword ptr [rbp+8C80h+var_8730+8], rax
 * 00000001800AB6C1: mov     dword ptr [rbp+8C80h+var_8720], 5
 * 00000001800AB6CB: mov     dword ptr [rbp+8C80h+var_8720+4], esi
 * 00000001800AB6D1: call    sub_1800A8988
 * 00000001800AB6D6: mov     r8, rax
 * 00000001800AB6D9: mov     r9d, r12d
 * 00000001800AB6DC: mov     edx, 9Ah
 * 00000001800AB6E1: lea     rcx, [rbp+8C80h+var_2250]
 * 00000001800AB6E8: call    sub_180075CF8
 * 00000001800AB6ED: nop
 * 00000001800AB6EE: mov     r8, rax
 * 00000001800AB6F1: mov     rdx, r13
 * 00000001800AB6F4: lea     rcx, [rbp+8C80h+var_22B0]
 * 00000001800AB6FB: call    sub_18001C928
 * 00000001800AB700: nop
 * 00000001800AB701: lea     r8, aPixel; "/Pixel"
 * 00000001800AB708: mov     rdx, rax
 * 00000001800AB70B: lea     rcx, [rbp+8C80h+var_6070]
 * 00000001800AB712: call    sub_18001C87C
 * 00000001800AB717: movups  xmm0, [rbp+8C80h+var_8730]
 * 00000001800AB71E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB723: movups  xmm1, [rbp+8C80h+var_8720]
 * 00000001800AB72A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB72F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB734: mov     rcx, rax
 * 00000001800AB737: call    sub_180075D94
 * 00000001800AB73C: nop
 * 00000001800AB73D: lea     rcx, [rbp+8C80h+var_22B0]
 * 00000001800AB744: call    sub_180011E30
 * 00000001800AB749: nop
 * 00000001800AB74A: lea     rcx, [rbp+8C80h+var_2250]
 * 00000001800AB751: call    sub_180011E30
 * 00000001800AB756: nop
 * 00000001800AB757: lea     rcx, dword_1801CE370
 * 00000001800AB75E: call    sub_18000D4CC
 * 00000001800AB763: mov     rax, [rdi+rbx*8]
 * 00000001800AB767: mov     eax, [r15+rax]
 * 00000001800AB76B: cmp     cs:dword_1801CE374, eax
 * 00000001800AB771: jle     loc_1800AB84E
 * 00000001800AB777: lea     rcx, dword_1801CE374
 * 00000001800AB77E: call    sub_18000D534
 * 00000001800AB783: cmp     cs:dword_1801CE374, r14d
 * 00000001800AB78A: jnz     loc_1800AB84E
 * 00000001800AB790: lea     rax, unk_180188B20
 * 00000001800AB797: mov     qword ptr [rbp+8C80h+var_8710], rax
 * 00000001800AB79E: lea     rax, unk_18018EF04
 * 00000001800AB7A5: mov     qword ptr [rbp+8C80h+var_8710+8], rax
 * 00000001800AB7AC: mov     dword ptr [rbp+8C80h+var_8700], 5
 * 00000001800AB7B6: mov     dword ptr [rbp+8C80h+var_8700+4], esi
 * 00000001800AB7BC: call    sub_1800A8988
 * 00000001800AB7C1: mov     r8, rax
 * 00000001800AB7C4: mov     r9d, r12d
 * 00000001800AB7C7: mov     edx, 0A0h
 * 00000001800AB7CC: lea     rcx, [rbp+8C80h+var_2190]
 * 00000001800AB7D3: call    sub_180075CF8
 * 00000001800AB7D8: nop
 * 00000001800AB7D9: mov     r8, rax
 * 00000001800AB7DC: mov     rdx, r13
 * 00000001800AB7DF: lea     rcx, [rbp+8C80h+var_21F0]
 * 00000001800AB7E6: call    sub_18001C928
 * 00000001800AB7EB: nop
 * 00000001800AB7EC: lea     r8, aPixel; "/Pixel"
 * 00000001800AB7F3: mov     rdx, rax
 * 00000001800AB7F6: lea     rcx, [rbp+8C80h+var_5FF0]
 * 00000001800AB7FD: call    sub_18001C87C
 * 00000001800AB802: movups  xmm0, [rbp+8C80h+var_8710]
 * 00000001800AB809: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB80E: movups  xmm1, [rbp+8C80h+var_8700]
 * 00000001800AB815: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB81A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB81F: mov     rcx, rax
 * 00000001800AB822: call    sub_180075D94
 * 00000001800AB827: nop
 * 00000001800AB828: lea     rcx, [rbp+8C80h+var_21F0]
 * 00000001800AB82F: call    sub_180011E30
 * 00000001800AB834: nop
 * 00000001800AB835: lea     rcx, [rbp+8C80h+var_2190]
 * 00000001800AB83C: call    sub_180011E30
 * 00000001800AB841: nop
 * 00000001800AB842: lea     rcx, dword_1801CE374
 * 00000001800AB849: call    sub_18000D4CC
 * 00000001800AB84E: mov     rax, [rdi+rbx*8]
 * 00000001800AB852: mov     eax, [r15+rax]
 * 00000001800AB856: cmp     cs:dword_1801CE378, eax
 * 00000001800AB85C: jle     loc_1800AB939
 * 00000001800AB862: lea     rcx, dword_1801CE378
 * 00000001800AB869: call    sub_18000D534
 * 00000001800AB86E: cmp     cs:dword_1801CE378, r14d
 * 00000001800AB875: jnz     loc_1800AB939
 * 00000001800AB87B: lea     rax, unk_180188B20
 * 00000001800AB882: mov     qword ptr [rbp+8C80h+var_86F0], rax
 * 00000001800AB889: lea     rax, unk_18018EF04
 * 00000001800AB890: mov     qword ptr [rbp+8C80h+var_86F0+8], rax
 * 00000001800AB897: mov     dword ptr [rbp+8C80h+var_86E0], 5
 * 00000001800AB8A1: mov     dword ptr [rbp+8C80h+var_86E0+4], esi
 * 00000001800AB8A7: call    sub_1800A8988
 * 00000001800AB8AC: mov     r8, rax
 * 00000001800AB8AF: mov     r9d, r12d
 * 00000001800AB8B2: mov     edx, 0A2h
 * 00000001800AB8B7: lea     rcx, [rbp+8C80h+var_20D0]
 * 00000001800AB8BE: call    sub_180075CF8
 * 00000001800AB8C3: nop
 * 00000001800AB8C4: mov     r8, rax
 * 00000001800AB8C7: mov     rdx, r13
 * 00000001800AB8CA: lea     rcx, [rbp+8C80h+var_2130]
 * 00000001800AB8D1: call    sub_18001C928
 * 00000001800AB8D6: nop
 * 00000001800AB8D7: lea     r8, aPixel; "/Pixel"
 * 00000001800AB8DE: mov     rdx, rax
 * 00000001800AB8E1: lea     rcx, [rbp+8C80h+var_5F50]
 * 00000001800AB8E8: call    sub_18001C87C
 * 00000001800AB8ED: movups  xmm0, [rbp+8C80h+var_86F0]
 * 00000001800AB8F4: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB8F9: movups  xmm1, [rbp+8C80h+var_86E0]
 * 00000001800AB900: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB905: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB90A: mov     rcx, rax
 * 00000001800AB90D: call    sub_180075D94
 * 00000001800AB912: nop
 * 00000001800AB913: lea     rcx, [rbp+8C80h+var_2130]
 * 00000001800AB91A: call    sub_180011E30
 * 00000001800AB91F: nop
 * 00000001800AB920: lea     rcx, [rbp+8C80h+var_20D0]
 * 00000001800AB927: call    sub_180011E30
 * 00000001800AB92C: nop
 * 00000001800AB92D: lea     rcx, dword_1801CE378
 * 00000001800AB934: call    sub_18000D4CC
 * 00000001800AB939: mov     rax, [rdi+rbx*8]
 * 00000001800AB93D: mov     eax, [r15+rax]
 * 00000001800AB941: cmp     cs:dword_1801CE37C, eax
 * 00000001800AB947: jle     loc_1800ABA24
 * 00000001800AB94D: lea     rcx, dword_1801CE37C
 * 00000001800AB954: call    sub_18000D534
 * 00000001800AB959: cmp     cs:dword_1801CE37C, r14d
 * 00000001800AB960: jnz     loc_1800ABA24
 * 00000001800AB966: lea     rax, unk_180177350
 * 00000001800AB96D: mov     qword ptr [rbp+8C80h+var_86D0], rax
 * 00000001800AB974: lea     rax, unk_18017D8DC
 * 00000001800AB97B: mov     qword ptr [rbp+8C80h+var_86D0+8], rax
 * 00000001800AB982: mov     dword ptr [rbp+8C80h+var_86C0], 5
 * 00000001800AB98C: mov     dword ptr [rbp+8C80h+var_86C0+4], esi
 * 00000001800AB992: call    sub_1800A8988
 * 00000001800AB997: mov     r8, rax
 * 00000001800AB99A: mov     r9d, r12d
 * 00000001800AB99D: mov     edx, 0A8h
 * 00000001800AB9A2: lea     rcx, [rbp+8C80h+var_2010]
 * 00000001800AB9A9: call    sub_180075CF8
 * 00000001800AB9AE: nop
 * 00000001800AB9AF: mov     r8, rax
 * 00000001800AB9B2: mov     rdx, r13
 * 00000001800AB9B5: lea     rcx, [rbp+8C80h+var_2070]
 * 00000001800AB9BC: call    sub_18001C928
 * 00000001800AB9C1: nop
 * 00000001800AB9C2: lea     r8, aPixel; "/Pixel"
 * 00000001800AB9C9: mov     rdx, rax
 * 00000001800AB9CC: lea     rcx, [rbp+8C80h+var_5ED0]
 * 00000001800AB9D3: call    sub_18001C87C
 * 00000001800AB9D8: movups  xmm0, [rbp+8C80h+var_86D0]
 * 00000001800AB9DF: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AB9E4: movups  xmm1, [rbp+8C80h+var_86C0]
 * 00000001800AB9EB: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AB9F0: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AB9F5: mov     rcx, rax
 * 00000001800AB9F8: call    sub_180075D94
 * 00000001800AB9FD: nop
 * 00000001800AB9FE: lea     rcx, [rbp+8C80h+var_2070]
 * 00000001800ABA05: call    sub_180011E30
 * 00000001800ABA0A: nop
 * 00000001800ABA0B: lea     rcx, [rbp+8C80h+var_2010]
 * 00000001800ABA12: call    sub_180011E30
 * 00000001800ABA17: nop
 * 00000001800ABA18: lea     rcx, dword_1801CE37C
 * 00000001800ABA1F: call    sub_18000D4CC
 * 00000001800ABA24: mov     rax, [rdi+rbx*8]
 * 00000001800ABA28: mov     eax, [r15+rax]
 * 00000001800ABA2C: cmp     cs:dword_1801CE380, eax
 * 00000001800ABA32: jle     loc_1800ABB0F
 * 00000001800ABA38: lea     rcx, dword_1801CE380
 * 00000001800ABA3F: call    sub_18000D534
 * 00000001800ABA44: cmp     cs:dword_1801CE380, r14d
 * 00000001800ABA4B: jnz     loc_1800ABB0F
 * 00000001800ABA51: lea     rax, unk_180177350
 * 00000001800ABA58: mov     qword ptr [rbp+8C80h+var_86B0], rax
 * 00000001800ABA5F: lea     rax, unk_18017D8DC
 * 00000001800ABA66: mov     qword ptr [rbp+8C80h+var_86B0+8], rax
 * 00000001800ABA6D: mov     dword ptr [rbp+8C80h+var_86A0], 5
 * 00000001800ABA77: mov     dword ptr [rbp+8C80h+var_86A0+4], esi
 * 00000001800ABA7D: call    sub_1800A8988
 * 00000001800ABA82: mov     r8, rax
 * 00000001800ABA85: mov     r9d, r12d
 * 00000001800ABA88: mov     edx, 0AAh
 * 00000001800ABA8D: lea     rcx, [rbp+8C80h+var_1F50]
 * 00000001800ABA94: call    sub_180075CF8
 * 00000001800ABA99: nop
 * 00000001800ABA9A: mov     r8, rax
 * 00000001800ABA9D: mov     rdx, r13
 * 00000001800ABAA0: lea     rcx, [rbp+8C80h+var_1FB0]
 * 00000001800ABAA7: call    sub_18001C928
 * 00000001800ABAAC: nop
 * 00000001800ABAAD: lea     r8, aPixel; "/Pixel"
 * 00000001800ABAB4: mov     rdx, rax
 * 00000001800ABAB7: lea     rcx, [rbp+8C80h+var_69D0]
 * 00000001800ABABE: call    sub_18001C87C
 * 00000001800ABAC3: movups  xmm0, [rbp+8C80h+var_86B0]
 * 00000001800ABACA: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ABACF: movups  xmm1, [rbp+8C80h+var_86A0]
 * 00000001800ABAD6: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ABADB: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ABAE0: mov     rcx, rax
 * 00000001800ABAE3: call    sub_180075D94
 * 00000001800ABAE8: nop
 * 00000001800ABAE9: lea     rcx, [rbp+8C80h+var_1FB0]
 * 00000001800ABAF0: call    sub_180011E30
 * 00000001800ABAF5: nop
 * 00000001800ABAF6: lea     rcx, [rbp+8C80h+var_1F50]
 * 00000001800ABAFD: call    sub_180011E30
 * 00000001800ABB02: nop
 * 00000001800ABB03: lea     rcx, dword_1801CE380
 * 00000001800ABB0A: call    sub_18000D4CC
 * 00000001800ABB0F: mov     rax, [rdi+rbx*8]
 * 00000001800ABB13: mov     eax, [r15+rax]
 * 00000001800ABB17: cmp     cs:dword_1801CE384, eax
 * 00000001800ABB1D: jle     loc_1800ABBFA
 * 00000001800ABB23: lea     rcx, dword_1801CE384
 * 00000001800ABB2A: call    sub_18000D534
 * 00000001800ABB2F: cmp     cs:dword_1801CE384, r14d
 * 00000001800ABB36: jnz     loc_1800ABBFA
 * 00000001800ABB3C: lea     rax, unk_180180A90
 * 00000001800ABB43: mov     qword ptr [rbp+8C80h+var_8690], rax
 * 00000001800ABB4A: lea     rax, unk_180187048
 * 00000001800ABB51: mov     qword ptr [rbp+8C80h+var_8690+8], rax
 * 00000001800ABB58: mov     dword ptr [rbp+8C80h+var_8680], 5
 * 00000001800ABB62: mov     dword ptr [rbp+8C80h+var_8680+4], esi
 * 00000001800ABB68: call    sub_1800A8988
 * 00000001800ABB6D: mov     r8, rax
 * 00000001800ABB70: mov     r9d, r12d
 * 00000001800ABB73: mov     edx, 0B0h
 * 00000001800ABB78: lea     rcx, [rbp+8C80h+var_1E90]
 * 00000001800ABB7F: call    sub_180075CF8
 * 00000001800ABB84: nop
 * 00000001800ABB85: mov     r8, rax
 * 00000001800ABB88: mov     rdx, r13
 * 00000001800ABB8B: lea     rcx, [rbp+8C80h+var_1EF0]
 * 00000001800ABB92: call    sub_18001C928
 * 00000001800ABB97: nop
 * 00000001800ABB98: lea     r8, aPixel; "/Pixel"
 * 00000001800ABB9F: mov     rdx, rax
 * 00000001800ABBA2: lea     rcx, [rbp+8C80h+var_6910]
 * 00000001800ABBA9: call    sub_18001C87C
 * 00000001800ABBAE: movups  xmm0, [rbp+8C80h+var_8690]
 * 00000001800ABBB5: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ABBBA: movups  xmm1, [rbp+8C80h+var_8680]
 * 00000001800ABBC1: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ABBC6: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ABBCB: mov     rcx, rax
 * 00000001800ABBCE: call    sub_180075D94
 * 00000001800ABBD3: nop
 * 00000001800ABBD4: lea     rcx, [rbp+8C80h+var_1EF0]
 * 00000001800ABBDB: call    sub_180011E30
 * 00000001800ABBE0: nop
 * 00000001800ABBE1: lea     rcx, [rbp+8C80h+var_1E90]
 * 00000001800ABBE8: call    sub_180011E30
 * 00000001800ABBED: nop
 * 00000001800ABBEE: lea     rcx, dword_1801CE384
 * 00000001800ABBF5: call    sub_18000D4CC
 * 00000001800ABBFA: mov     rax, [rdi+rbx*8]
 * 00000001800ABBFE: mov     eax, [r15+rax]
 * 00000001800ABC02: cmp     cs:dword_1801CE388, eax
 * 00000001800ABC08: jle     loc_1800ABCE5
 * 00000001800ABC0E: lea     rcx, dword_1801CE388
 * 00000001800ABC15: call    sub_18000D534
 * 00000001800ABC1A: cmp     cs:dword_1801CE388, r14d
 * 00000001800ABC21: jnz     loc_1800ABCE5
 * 00000001800ABC27: lea     rax, unk_180180A90
 * 00000001800ABC2E: mov     qword ptr [rbp+8C80h+var_8670], rax
 * 00000001800ABC35: lea     rax, unk_180187048
 * 00000001800ABC3C: mov     qword ptr [rbp+8C80h+var_8670+8], rax
 * 00000001800ABC43: mov     dword ptr [rbp+8C80h+var_8660], 5
 * 00000001800ABC4D: mov     dword ptr [rbp+8C80h+var_8660+4], esi
 * 00000001800ABC53: call    sub_1800A8988
 * 00000001800ABC58: mov     r8, rax
 * 00000001800ABC5B: mov     r9d, r12d
 * 00000001800ABC5E: mov     edx, 0B2h
 * 00000001800ABC63: lea     rcx, [rbp+8C80h+var_1DD0]
 * 00000001800ABC6A: call    sub_180075CF8
 * 00000001800ABC6F: nop
 * 00000001800ABC70: mov     r8, rax
 * 00000001800ABC73: mov     rdx, r13
 * 00000001800ABC76: lea     rcx, [rbp+8C80h+var_1E30]
 * 00000001800ABC7D: call    sub_18001C928
 * 00000001800ABC82: nop
 * 00000001800ABC83: lea     r8, aPixel; "/Pixel"
 * 00000001800ABC8A: mov     rdx, rax
 * 00000001800ABC8D: lea     rcx, [rbp+8C80h+var_6830]
 * 00000001800ABC94: call    sub_18001C87C
 * 00000001800ABC99: movups  xmm0, [rbp+8C80h+var_8670]
 * 00000001800ABCA0: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ABCA5: movups  xmm1, [rbp+8C80h+var_8660]
 * 00000001800ABCAC: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ABCB1: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ABCB6: mov     rcx, rax
 * 00000001800ABCB9: call    sub_180075D94
 * 00000001800ABCBE: nop
 * 00000001800ABCBF: lea     rcx, [rbp+8C80h+var_1E30]
 * 00000001800ABCC6: call    sub_180011E30
 * 00000001800ABCCB: nop
 * 00000001800ABCCC: lea     rcx, [rbp+8C80h+var_1DD0]
 * 00000001800ABCD3: call    sub_180011E30
 * 00000001800ABCD8: nop
 * 00000001800ABCD9: lea     rcx, dword_1801CE388
 * 00000001800ABCE0: call    sub_18000D4CC
 * 00000001800ABCE5: mov     rax, [rdi+rbx*8]
 * 00000001800ABCE9: mov     eax, [r15+rax]
 * 00000001800ABCED: cmp     cs:dword_1801CE38C, eax
 * 00000001800ABCF3: jle     loc_1800ABDD0
 * 00000001800ABCF9: lea     rcx, dword_1801CE38C
 * 00000001800ABD00: call    sub_18000D534
 * 00000001800ABD05: cmp     cs:dword_1801CE38C, r14d
 * 00000001800ABD0C: jnz     loc_1800ABDD0
 * 00000001800ABD12: lea     rax, unk_18015FB10
 * 00000001800ABD19: mov     qword ptr [rbp+8C80h+var_8650], rax
 * 00000001800ABD20: lea     rax, unk_18016629C
 * 00000001800ABD27: mov     qword ptr [rbp+8C80h+var_8650+8], rax
 * 00000001800ABD2E: mov     dword ptr [rbp+8C80h+var_8640], 5
 * 00000001800ABD38: mov     dword ptr [rbp+8C80h+var_8640+4], esi
 * 00000001800ABD3E: call    sub_1800A8988
 * 00000001800ABD43: mov     r8, rax
 * 00000001800ABD46: mov     r9d, r12d
 * 00000001800ABD49: mov     edx, 0B8h
 * 00000001800ABD4E: lea     rcx, [rbp+8C80h+var_1D10]
 * 00000001800ABD55: call    sub_180075CF8
 * 00000001800ABD5A: nop
 * 00000001800ABD5B: mov     r8, rax
 * 00000001800ABD5E: mov     rdx, r13
 * 00000001800ABD61: lea     rcx, [rbp+8C80h+var_1D70]
 * 00000001800ABD68: call    sub_18001C928
 * 00000001800ABD6D: nop
 * 00000001800ABD6E: lea     r8, aPixel; "/Pixel"
 * 00000001800ABD75: mov     rdx, rax
 * 00000001800ABD78: lea     rcx, [rbp+8C80h+var_6770]
 * 00000001800ABD7F: call    sub_18001C87C
 * 00000001800ABD84: movups  xmm0, [rbp+8C80h+var_8650]
 * 00000001800ABD8B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ABD90: movups  xmm1, [rbp+8C80h+var_8640]
 * 00000001800ABD97: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ABD9C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ABDA1: mov     rcx, rax
 * 00000001800ABDA4: call    sub_180075D94
 * 00000001800ABDA9: nop
 * 00000001800ABDAA: lea     rcx, [rbp+8C80h+var_1D70]
 * 00000001800ABDB1: call    sub_180011E30
 * 00000001800ABDB6: nop
 * 00000001800ABDB7: lea     rcx, [rbp+8C80h+var_1D10]
 * 00000001800ABDBE: call    sub_180011E30
 * 00000001800ABDC3: nop
 * 00000001800ABDC4: lea     rcx, dword_1801CE38C
 * 00000001800ABDCB: call    sub_18000D4CC
 * 00000001800ABDD0: mov     rax, [rdi+rbx*8]
 * 00000001800ABDD4: mov     eax, [r15+rax]
 * 00000001800ABDD8: cmp     cs:dword_1801CE390, eax
 * 00000001800ABDDE: jle     loc_1800ABEBB
 * 00000001800ABDE4: lea     rcx, dword_1801CE390
 * 00000001800ABDEB: call    sub_18000D534
 * 00000001800ABDF0: cmp     cs:dword_1801CE390, r14d
 * 00000001800ABDF7: jnz     loc_1800ABEBB
 * 00000001800ABDFD: lea     rax, unk_18015FB10
 * 00000001800ABE04: mov     qword ptr [rbp+8C80h+var_8630], rax
 * 00000001800ABE0B: lea     rax, unk_18016629C
 * 00000001800ABE12: mov     qword ptr [rbp+8C80h+var_8630+8], rax
 * 00000001800ABE19: mov     dword ptr [rbp+8C80h+var_8620], 5
 * 00000001800ABE23: mov     dword ptr [rbp+8C80h+var_8620+4], esi
 * 00000001800ABE29: call    sub_1800A8988
 * 00000001800ABE2E: mov     r8, rax
 * 00000001800ABE31: mov     r9d, r12d
 * 00000001800ABE34: mov     edx, 0BAh
 * 00000001800ABE39: lea     rcx, [rbp+8C80h+var_1C50]
 * 00000001800ABE40: call    sub_180075CF8
 * 00000001800ABE45: nop
 * 00000001800ABE46: mov     r8, rax
 * 00000001800ABE49: mov     rdx, r13
 * 00000001800ABE4C: lea     rcx, [rbp+8C80h+var_1CB0]
 * 00000001800ABE53: call    sub_18001C928
 * 00000001800ABE58: nop
 * 00000001800ABE59: lea     r8, aPixel; "/Pixel"
 * 00000001800ABE60: mov     rdx, rax
 * 00000001800ABE63: lea     rcx, [rbp+8C80h+var_6670]
 * 00000001800ABE6A: call    sub_18001C87C
 * 00000001800ABE6F: movups  xmm0, [rbp+8C80h+var_8630]
 * 00000001800ABE76: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ABE7B: movups  xmm1, [rbp+8C80h+var_8620]
 * 00000001800ABE82: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ABE87: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ABE8C: mov     rcx, rax
 * 00000001800ABE8F: call    sub_180075D94
 * 00000001800ABE94: nop
 * 00000001800ABE95: lea     rcx, [rbp+8C80h+var_1CB0]
 * 00000001800ABE9C: call    sub_180011E30
 * 00000001800ABEA1: nop
 * 00000001800ABEA2: lea     rcx, [rbp+8C80h+var_1C50]
 * 00000001800ABEA9: call    sub_180011E30
 * 00000001800ABEAE: nop
 * 00000001800ABEAF: lea     rcx, dword_1801CE390
 * 00000001800ABEB6: call    sub_18000D4CC
 * 00000001800ABEBB: mov     rax, [rdi+rbx*8]
 * 00000001800ABEBF: mov     eax, [r15+rax]
 * 00000001800ABEC3: cmp     cs:dword_1801CE394, eax
 * 00000001800ABEC9: jle     loc_1800ABFA6
 * 00000001800ABECF: lea     rcx, dword_1801CE394
 * 00000001800ABED6: call    sub_18000D534
 * 00000001800ABEDB: cmp     cs:dword_1801CE394, r14d
 * 00000001800ABEE2: jnz     loc_1800ABFA6
 * 00000001800ABEE8: lea     rax, unk_180188B20
 * 00000001800ABEEF: mov     qword ptr [rbp+8C80h+var_8610], rax
 * 00000001800ABEF6: lea     rax, unk_18018EF04
 * 00000001800ABEFD: mov     qword ptr [rbp+8C80h+var_8610+8], rax
 * 00000001800ABF04: mov     dword ptr [rbp+8C80h+var_8600], 5
 * 00000001800ABF0E: mov     dword ptr [rbp+8C80h+var_8600+4], esi
 * 00000001800ABF14: call    sub_1800A8988
 * 00000001800ABF19: mov     r8, rax
 * 00000001800ABF1C: mov     r9d, r12d
 * 00000001800ABF1F: mov     edx, 0C0h
 * 00000001800ABF24: lea     rcx, [rbp+8C80h+var_1B90]
 * 00000001800ABF2B: call    sub_180075CF8
 * 00000001800ABF30: nop
 * 00000001800ABF31: mov     r8, rax
 * 00000001800ABF34: mov     rdx, r13
 * 00000001800ABF37: lea     rcx, [rbp+8C80h+var_1BF0]
 * 00000001800ABF3E: call    sub_18001C928
 * 00000001800ABF43: nop
 * 00000001800ABF44: lea     r8, aPixel; "/Pixel"
 * 00000001800ABF4B: mov     rdx, rax
 * 00000001800ABF4E: lea     rcx, [rbp+8C80h+var_65B0]
 * 00000001800ABF55: call    sub_18001C87C
 * 00000001800ABF5A: movups  xmm0, [rbp+8C80h+var_8610]
 * 00000001800ABF61: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ABF66: movups  xmm1, [rbp+8C80h+var_8600]
 * 00000001800ABF6D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ABF72: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ABF77: mov     rcx, rax
 * 00000001800ABF7A: call    sub_180075D94
 * 00000001800ABF7F: nop
 * 00000001800ABF80: lea     rcx, [rbp+8C80h+var_1BF0]
 * 00000001800ABF87: call    sub_180011E30
 * 00000001800ABF8C: nop
 * 00000001800ABF8D: lea     rcx, [rbp+8C80h+var_1B90]
 * 00000001800ABF94: call    sub_180011E30
 * 00000001800ABF99: nop
 * 00000001800ABF9A: lea     rcx, dword_1801CE394
 * 00000001800ABFA1: call    sub_18000D4CC
 * 00000001800ABFA6: mov     rax, [rdi+rbx*8]
 * 00000001800ABFAA: mov     eax, [r15+rax]
 * 00000001800ABFAE: cmp     cs:dword_1801CE398, eax
 * 00000001800ABFB4: jle     loc_1800AC091
 * 00000001800ABFBA: lea     rcx, dword_1801CE398
 * 00000001800ABFC1: call    sub_18000D534
 * 00000001800ABFC6: cmp     cs:dword_1801CE398, r14d
 * 00000001800ABFCD: jnz     loc_1800AC091
 * 00000001800ABFD3: lea     rax, unk_180188B20
 * 00000001800ABFDA: mov     qword ptr [rbp+8C80h+var_85F0], rax
 * 00000001800ABFE1: lea     rax, unk_18018EF04
 * 00000001800ABFE8: mov     qword ptr [rbp+8C80h+var_85F0+8], rax
 * 00000001800ABFEF: mov     dword ptr [rbp+8C80h+var_85E0], 5
 * 00000001800ABFF9: mov     dword ptr [rbp+8C80h+var_85E0+4], esi
 * 00000001800ABFFF: call    sub_1800A8988
 * 00000001800AC004: mov     r8, rax
 * 00000001800AC007: mov     r9d, r12d
 * 00000001800AC00A: mov     edx, 0C2h
 * 00000001800AC00F: lea     rcx, [rbp+8C80h+var_1AD0]
 * 00000001800AC016: call    sub_180075CF8
 * 00000001800AC01B: nop
 * 00000001800AC01C: mov     r8, rax
 * 00000001800AC01F: mov     rdx, r13
 * 00000001800AC022: lea     rcx, [rbp+8C80h+var_1B30]
 * 00000001800AC029: call    sub_18001C928
 * 00000001800AC02E: nop
 * 00000001800AC02F: lea     r8, aPixel; "/Pixel"
 * 00000001800AC036: mov     rdx, rax
 * 00000001800AC039: lea     rcx, [rbp+8C80h+var_64D0]
 * 00000001800AC040: call    sub_18001C87C
 * 00000001800AC045: movups  xmm0, [rbp+8C80h+var_85F0]
 * 00000001800AC04C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC051: movups  xmm1, [rbp+8C80h+var_85E0]
 * 00000001800AC058: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC05D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC062: mov     rcx, rax
 * 00000001800AC065: call    sub_180075D94
 * 00000001800AC06A: nop
 * 00000001800AC06B: lea     rcx, [rbp+8C80h+var_1B30]
 * 00000001800AC072: call    sub_180011E30
 * 00000001800AC077: nop
 * 00000001800AC078: lea     rcx, [rbp+8C80h+var_1AD0]
 * 00000001800AC07F: call    sub_180011E30
 * 00000001800AC084: nop
 * 00000001800AC085: lea     rcx, dword_1801CE398
 * 00000001800AC08C: call    sub_18000D4CC
 * 00000001800AC091: mov     rax, [rdi+rbx*8]
 * 00000001800AC095: mov     eax, [r15+rax]
 * 00000001800AC099: cmp     cs:dword_1801CE39C, eax
 * 00000001800AC09F: jle     loc_1800AC17C
 * 00000001800AC0A5: lea     rcx, dword_1801CE39C
 * 00000001800AC0AC: call    sub_18000D534
 * 00000001800AC0B1: cmp     cs:dword_1801CE39C, r14d
 * 00000001800AC0B8: jnz     loc_1800AC17C
 * 00000001800AC0BE: lea     rax, unk_180177350
 * 00000001800AC0C5: mov     qword ptr [rbp+8C80h+var_85D0], rax
 * 00000001800AC0CC: lea     rax, unk_18017D8DC
 * 00000001800AC0D3: mov     qword ptr [rbp+8C80h+var_85D0+8], rax
 * 00000001800AC0DA: mov     dword ptr [rbp+8C80h+var_85C0], 5
 * 00000001800AC0E4: mov     dword ptr [rbp+8C80h+var_85C0+4], esi
 * 00000001800AC0EA: call    sub_1800A8988
 * 00000001800AC0EF: mov     r8, rax
 * 00000001800AC0F2: mov     r9d, r12d
 * 00000001800AC0F5: mov     edx, 0C8h
 * 00000001800AC0FA: lea     rcx, [rbp+8C80h+var_1A10]
 * 00000001800AC101: call    sub_180075CF8
 * 00000001800AC106: nop
 * 00000001800AC107: mov     r8, rax
 * 00000001800AC10A: mov     rdx, r13
 * 00000001800AC10D: lea     rcx, [rbp+8C80h+var_1A70]
 * 00000001800AC114: call    sub_18001C928
 * 00000001800AC119: nop
 * 00000001800AC11A: lea     r8, aPixel; "/Pixel"
 * 00000001800AC121: mov     rdx, rax
 * 00000001800AC124: lea     rcx, [rbp+8C80h+var_6410]
 * 00000001800AC12B: call    sub_18001C87C
 * 00000001800AC130: movups  xmm0, [rbp+8C80h+var_85D0]
 * 00000001800AC137: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC13C: movups  xmm1, [rbp+8C80h+var_85C0]
 * 00000001800AC143: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC148: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC14D: mov     rcx, rax
 * 00000001800AC150: call    sub_180075D94
 * 00000001800AC155: nop
 * 00000001800AC156: lea     rcx, [rbp+8C80h+var_1A70]
 * 00000001800AC15D: call    sub_180011E30
 * 00000001800AC162: nop
 * 00000001800AC163: lea     rcx, [rbp+8C80h+var_1A10]
 * 00000001800AC16A: call    sub_180011E30
 * 00000001800AC16F: nop
 * 00000001800AC170: lea     rcx, dword_1801CE39C
 * 00000001800AC177: call    sub_18000D4CC
 * 00000001800AC17C: mov     rax, [rdi+rbx*8]
 * 00000001800AC180: mov     eax, [r15+rax]
 * 00000001800AC184: cmp     cs:dword_1801CE3A0, eax
 * 00000001800AC18A: jle     loc_1800AC267
 * 00000001800AC190: lea     rcx, dword_1801CE3A0
 * 00000001800AC197: call    sub_18000D534
 * 00000001800AC19C: cmp     cs:dword_1801CE3A0, r14d
 * 00000001800AC1A3: jnz     loc_1800AC267
 * 00000001800AC1A9: lea     rax, unk_180177350
 * 00000001800AC1B0: mov     qword ptr [rbp+8C80h+var_85B0], rax
 * 00000001800AC1B7: lea     rax, unk_18017D8DC
 * 00000001800AC1BE: mov     qword ptr [rbp+8C80h+var_85B0+8], rax
 * 00000001800AC1C5: mov     dword ptr [rbp+8C80h+var_85A0], 5
 * 00000001800AC1CF: mov     dword ptr [rbp+8C80h+var_85A0+4], esi
 * 00000001800AC1D5: call    sub_1800A8988
 * 00000001800AC1DA: mov     r8, rax
 * 00000001800AC1DD: mov     r9d, r12d
 * 00000001800AC1E0: mov     edx, 0CAh
 * 00000001800AC1E5: lea     rcx, [rbp+8C80h+var_1950]
 * 00000001800AC1EC: call    sub_180075CF8
 * 00000001800AC1F1: nop
 * 00000001800AC1F2: mov     r8, rax
 * 00000001800AC1F5: mov     rdx, r13
 * 00000001800AC1F8: lea     rcx, [rbp+8C80h+var_19B0]
 * 00000001800AC1FF: call    sub_18001C928
 * 00000001800AC204: nop
 * 00000001800AC205: lea     r8, aPixel; "/Pixel"
 * 00000001800AC20C: mov     rdx, rax
 * 00000001800AC20F: lea     rcx, [rbp+8C80h+var_6310]
 * 00000001800AC216: call    sub_18001C87C
 * 00000001800AC21B: movups  xmm0, [rbp+8C80h+var_85B0]
 * 00000001800AC222: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC227: movups  xmm1, [rbp+8C80h+var_85A0]
 * 00000001800AC22E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC233: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC238: mov     rcx, rax
 * 00000001800AC23B: call    sub_180075D94
 * 00000001800AC240: nop
 * 00000001800AC241: lea     rcx, [rbp+8C80h+var_19B0]
 * 00000001800AC248: call    sub_180011E30
 * 00000001800AC24D: nop
 * 00000001800AC24E: lea     rcx, [rbp+8C80h+var_1950]
 * 00000001800AC255: call    sub_180011E30
 * 00000001800AC25A: nop
 * 00000001800AC25B: lea     rcx, dword_1801CE3A0
 * 00000001800AC262: call    sub_18000D4CC
 * 00000001800AC267: mov     rax, [rdi+rbx*8]
 * 00000001800AC26B: mov     eax, [r15+rax]
 * 00000001800AC26F: cmp     cs:dword_1801CE3A4, eax
 * 00000001800AC275: jle     loc_1800AC352
 * 00000001800AC27B: lea     rcx, dword_1801CE3A4
 * 00000001800AC282: call    sub_18000D534
 * 00000001800AC287: cmp     cs:dword_1801CE3A4, r14d
 * 00000001800AC28E: jnz     loc_1800AC352
 * 00000001800AC294: lea     rax, unk_180180A90
 * 00000001800AC29B: mov     qword ptr [rbp+8C80h+var_8590], rax
 * 00000001800AC2A2: lea     rax, unk_180187048
 * 00000001800AC2A9: mov     qword ptr [rbp+8C80h+var_8590+8], rax
 * 00000001800AC2B0: mov     dword ptr [rbp+8C80h+var_8580], 5
 * 00000001800AC2BA: mov     dword ptr [rbp+8C80h+var_8580+4], esi
 * 00000001800AC2C0: call    sub_1800A8988
 * 00000001800AC2C5: mov     r8, rax
 * 00000001800AC2C8: mov     r9d, r12d
 * 00000001800AC2CB: mov     edx, 0D0h
 * 00000001800AC2D0: lea     rcx, [rbp+8C80h+var_1890]
 * 00000001800AC2D7: call    sub_180075CF8
 * 00000001800AC2DC: nop
 * 00000001800AC2DD: mov     r8, rax
 * 00000001800AC2E0: mov     rdx, r13
 * 00000001800AC2E3: lea     rcx, [rbp+8C80h+var_18F0]
 * 00000001800AC2EA: call    sub_18001C928
 * 00000001800AC2EF: nop
 * 00000001800AC2F0: lea     r8, aPixel; "/Pixel"
 * 00000001800AC2F7: mov     rdx, rax
 * 00000001800AC2FA: lea     rcx, [rbp+8C80h+var_6250]
 * 00000001800AC301: call    sub_18001C87C
 * 00000001800AC306: movups  xmm0, [rbp+8C80h+var_8590]
 * 00000001800AC30D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC312: movups  xmm1, [rbp+8C80h+var_8580]
 * 00000001800AC319: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC31E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC323: mov     rcx, rax
 * 00000001800AC326: call    sub_180075D94
 * 00000001800AC32B: nop
 * 00000001800AC32C: lea     rcx, [rbp+8C80h+var_18F0]
 * 00000001800AC333: call    sub_180011E30
 * 00000001800AC338: nop
 * 00000001800AC339: lea     rcx, [rbp+8C80h+var_1890]
 * 00000001800AC340: call    sub_180011E30
 * 00000001800AC345: nop
 * 00000001800AC346: lea     rcx, dword_1801CE3A4
 * 00000001800AC34D: call    sub_18000D4CC
 * 00000001800AC352: mov     rax, [rdi+rbx*8]
 * 00000001800AC356: mov     eax, [r15+rax]
 * 00000001800AC35A: cmp     cs:dword_1801CE3A8, eax
 * 00000001800AC360: jle     loc_1800AC43D
 * 00000001800AC366: lea     rcx, dword_1801CE3A8
 * 00000001800AC36D: call    sub_18000D534
 * 00000001800AC372: cmp     cs:dword_1801CE3A8, r14d
 * 00000001800AC379: jnz     loc_1800AC43D
 * 00000001800AC37F: lea     rax, unk_180180A90
 * 00000001800AC386: mov     qword ptr [rbp+8C80h+var_8570], rax
 * 00000001800AC38D: lea     rax, unk_180187048
 * 00000001800AC394: mov     qword ptr [rbp+8C80h+var_8570+8], rax
 * 00000001800AC39B: mov     dword ptr [rbp+8C80h+var_8560], 5
 * 00000001800AC3A5: mov     dword ptr [rbp+8C80h+var_8560+4], esi
 * 00000001800AC3AB: call    sub_1800A8988
 * 00000001800AC3B0: mov     r8, rax
 * 00000001800AC3B3: mov     r9d, r12d
 * 00000001800AC3B6: mov     edx, 0D2h
 * 00000001800AC3BB: lea     rcx, [rbp+8C80h+var_17D0]
 * 00000001800AC3C2: call    sub_180075CF8
 * 00000001800AC3C7: nop
 * 00000001800AC3C8: mov     r8, rax
 * 00000001800AC3CB: mov     rdx, r13
 * 00000001800AC3CE: lea     rcx, [rbp+8C80h+var_1830]
 * 00000001800AC3D5: call    sub_18001C928
 * 00000001800AC3DA: nop
 * 00000001800AC3DB: lea     r8, aPixel; "/Pixel"
 * 00000001800AC3E2: mov     rdx, rax
 * 00000001800AC3E5: lea     rcx, [rbp+8C80h+var_6170]
 * 00000001800AC3EC: call    sub_18001C87C
 * 00000001800AC3F1: movups  xmm0, [rbp+8C80h+var_8570]
 * 00000001800AC3F8: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC3FD: movups  xmm1, [rbp+8C80h+var_8560]
 * 00000001800AC404: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC409: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC40E: mov     rcx, rax
 * 00000001800AC411: call    sub_180075D94
 * 00000001800AC416: nop
 * 00000001800AC417: lea     rcx, [rbp+8C80h+var_1830]
 * 00000001800AC41E: call    sub_180011E30
 * 00000001800AC423: nop
 * 00000001800AC424: lea     rcx, [rbp+8C80h+var_17D0]
 * 00000001800AC42B: call    sub_180011E30
 * 00000001800AC430: nop
 * 00000001800AC431: lea     rcx, dword_1801CE3A8
 * 00000001800AC438: call    sub_18000D4CC
 * 00000001800AC43D: mov     rax, [rdi+rbx*8]
 * 00000001800AC441: mov     eax, [r15+rax]
 * 00000001800AC445: cmp     cs:dword_1801CE3AC, eax
 * 00000001800AC44B: jle     loc_1800AC528
 * 00000001800AC451: lea     rcx, dword_1801CE3AC
 * 00000001800AC458: call    sub_18000D534
 * 00000001800AC45D: cmp     cs:dword_1801CE3AC, r14d
 * 00000001800AC464: jnz     loc_1800AC528
 * 00000001800AC46A: lea     rax, unk_18015FB10
 * 00000001800AC471: mov     qword ptr [rbp+8C80h+var_8550], rax
 * 00000001800AC478: lea     rax, unk_18016629C
 * 00000001800AC47F: mov     qword ptr [rbp+8C80h+var_8550+8], rax
 * 00000001800AC486: mov     dword ptr [rbp+8C80h+var_8540], 5
 * 00000001800AC490: mov     dword ptr [rbp+8C80h+var_8540+4], esi
 * 00000001800AC496: call    sub_1800A8988
 * 00000001800AC49B: mov     r8, rax
 * 00000001800AC49E: mov     r9d, r12d
 * 00000001800AC4A1: mov     edx, 0D8h
 * 00000001800AC4A6: lea     rcx, [rbp+8C80h+var_1710]
 * 00000001800AC4AD: call    sub_180075CF8
 * 00000001800AC4B2: nop
 * 00000001800AC4B3: mov     r8, rax
 * 00000001800AC4B6: mov     rdx, r13
 * 00000001800AC4B9: lea     rcx, [rbp+8C80h+var_1770]
 * 00000001800AC4C0: call    sub_18001C928
 * 00000001800AC4C5: nop
 * 00000001800AC4C6: lea     r8, aPixel; "/Pixel"
 * 00000001800AC4CD: mov     rdx, rax
 * 00000001800AC4D0: lea     rcx, [rbp+8C80h+var_60B0]
 * 00000001800AC4D7: call    sub_18001C87C
 * 00000001800AC4DC: movups  xmm0, [rbp+8C80h+var_8550]
 * 00000001800AC4E3: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC4E8: movups  xmm1, [rbp+8C80h+var_8540]
 * 00000001800AC4EF: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC4F4: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC4F9: mov     rcx, rax
 * 00000001800AC4FC: call    sub_180075D94
 * 00000001800AC501: nop
 * 00000001800AC502: lea     rcx, [rbp+8C80h+var_1770]
 * 00000001800AC509: call    sub_180011E30
 * 00000001800AC50E: nop
 * 00000001800AC50F: lea     rcx, [rbp+8C80h+var_1710]
 * 00000001800AC516: call    sub_180011E30
 * 00000001800AC51B: nop
 * 00000001800AC51C: lea     rcx, dword_1801CE3AC
 * 00000001800AC523: call    sub_18000D4CC
 * 00000001800AC528: mov     rax, [rdi+rbx*8]
 * 00000001800AC52C: mov     eax, [r15+rax]
 * 00000001800AC530: cmp     cs:dword_1801CE3B0, eax
 * 00000001800AC536: jle     loc_1800AC613
 * 00000001800AC53C: lea     rcx, dword_1801CE3B0
 * 00000001800AC543: call    sub_18000D534
 * 00000001800AC548: cmp     cs:dword_1801CE3B0, r14d
 * 00000001800AC54F: jnz     loc_1800AC613
 * 00000001800AC555: lea     rax, unk_18015FB10
 * 00000001800AC55C: mov     qword ptr [rbp+8C80h+var_8530], rax
 * 00000001800AC563: lea     rax, unk_18016629C
 * 00000001800AC56A: mov     qword ptr [rbp+8C80h+var_8530+8], rax
 * 00000001800AC571: mov     dword ptr [rbp+8C80h+var_8520], 5
 * 00000001800AC57B: mov     dword ptr [rbp+8C80h+var_8520+4], esi
 * 00000001800AC581: call    sub_1800A8988
 * 00000001800AC586: mov     r8, rax
 * 00000001800AC589: mov     r9d, r12d
 * 00000001800AC58C: mov     edx, 0DAh
 * 00000001800AC591: lea     rcx, [rbp+8C80h+var_1650]
 * 00000001800AC598: call    sub_180075CF8
 * 00000001800AC59D: nop
 * 00000001800AC59E: mov     r8, rax
 * 00000001800AC5A1: mov     rdx, r13
 * 00000001800AC5A4: lea     rcx, [rbp+8C80h+var_16B0]
 * 00000001800AC5AB: call    sub_18001C928
 * 00000001800AC5B0: nop
 * 00000001800AC5B1: lea     r8, aPixel; "/Pixel"
 * 00000001800AC5B8: mov     rdx, rax
 * 00000001800AC5BB: lea     rcx, [rbp+8C80h+var_5FB0]
 * 00000001800AC5C2: call    sub_18001C87C
 * 00000001800AC5C7: movups  xmm0, [rbp+8C80h+var_8530]
 * 00000001800AC5CE: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC5D3: movups  xmm1, [rbp+8C80h+var_8520]
 * 00000001800AC5DA: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC5DF: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC5E4: mov     rcx, rax
 * 00000001800AC5E7: call    sub_180075D94
 * 00000001800AC5EC: nop
 * 00000001800AC5ED: lea     rcx, [rbp+8C80h+var_16B0]
 * 00000001800AC5F4: call    sub_180011E30
 * 00000001800AC5F9: nop
 * 00000001800AC5FA: lea     rcx, [rbp+8C80h+var_1650]
 * 00000001800AC601: call    sub_180011E30
 * 00000001800AC606: nop
 * 00000001800AC607: lea     rcx, dword_1801CE3B0
 * 00000001800AC60E: call    sub_18000D4CC
 * 00000001800AC613: mov     rax, [rdi+rbx*8]
 * 00000001800AC617: mov     eax, [r15+rax]
 * 00000001800AC61B: cmp     cs:dword_1801CE3B4, eax
 * 00000001800AC621: jle     loc_1800AC6FE
 * 00000001800AC627: lea     rcx, dword_1801CE3B4
 * 00000001800AC62E: call    sub_18000D534
 * 00000001800AC633: cmp     cs:dword_1801CE3B4, r14d
 * 00000001800AC63A: jnz     loc_1800AC6FE
 * 00000001800AC640: lea     rax, unk_180188B20
 * 00000001800AC647: mov     qword ptr [rbp+8C80h+var_8510], rax
 * 00000001800AC64E: lea     rax, unk_18018EF04
 * 00000001800AC655: mov     qword ptr [rbp+8C80h+var_8510+8], rax
 * 00000001800AC65C: mov     dword ptr [rbp+8C80h+var_8500], 5
 * 00000001800AC666: mov     dword ptr [rbp+8C80h+var_8500+4], esi
 * 00000001800AC66C: call    sub_1800A8988
 * 00000001800AC671: mov     r8, rax
 * 00000001800AC674: mov     r9d, r12d
 * 00000001800AC677: mov     edx, 0E0h
 * 00000001800AC67C: lea     rcx, [rbp+8C80h+var_1590]
 * 00000001800AC683: call    sub_180075CF8
 * 00000001800AC688: nop
 * 00000001800AC689: mov     r8, rax
 * 00000001800AC68C: mov     rdx, r13
 * 00000001800AC68F: lea     rcx, [rbp+8C80h+var_15F0]
 * 00000001800AC696: call    sub_18001C928
 * 00000001800AC69B: nop
 * 00000001800AC69C: lea     r8, aPixel; "/Pixel"
 * 00000001800AC6A3: mov     rdx, rax
 * 00000001800AC6A6: lea     rcx, [rbp+8C80h+var_5EF0]
 * 00000001800AC6AD: call    sub_18001C87C
 * 00000001800AC6B2: movups  xmm0, [rbp+8C80h+var_8510]
 * 00000001800AC6B9: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC6BE: movups  xmm1, [rbp+8C80h+var_8500]
 * 00000001800AC6C5: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC6CA: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC6CF: mov     rcx, rax
 * 00000001800AC6D2: call    sub_180075D94
 * 00000001800AC6D7: nop
 * 00000001800AC6D8: lea     rcx, [rbp+8C80h+var_15F0]
 * 00000001800AC6DF: call    sub_180011E30
 * 00000001800AC6E4: nop
 * 00000001800AC6E5: lea     rcx, [rbp+8C80h+var_1590]
 * 00000001800AC6EC: call    sub_180011E30
 * 00000001800AC6F1: nop
 * 00000001800AC6F2: lea     rcx, dword_1801CE3B4
 * 00000001800AC6F9: call    sub_18000D4CC
 * 00000001800AC6FE: mov     rax, [rdi+rbx*8]
 * 00000001800AC702: mov     eax, [r15+rax]
 * 00000001800AC706: cmp     cs:dword_1801CE3B8, eax
 * 00000001800AC70C: jle     loc_1800AC7E9
 * 00000001800AC712: lea     rcx, dword_1801CE3B8
 * 00000001800AC719: call    sub_18000D534
 * 00000001800AC71E: cmp     cs:dword_1801CE3B8, r14d
 * 00000001800AC725: jnz     loc_1800AC7E9
 * 00000001800AC72B: lea     rax, unk_180188B20
 * 00000001800AC732: mov     qword ptr [rbp+8C80h+var_84F0], rax
 * 00000001800AC739: lea     rax, unk_18018EF04
 * 00000001800AC740: mov     qword ptr [rbp+8C80h+var_84F0+8], rax
 * 00000001800AC747: mov     dword ptr [rbp+8C80h+var_84E0], 5
 * 00000001800AC751: mov     dword ptr [rbp+8C80h+var_84E0+4], esi
 * 00000001800AC757: call    sub_1800A8988
 * 00000001800AC75C: mov     r8, rax
 * 00000001800AC75F: mov     r9d, r12d
 * 00000001800AC762: mov     edx, 0E2h
 * 00000001800AC767: lea     rcx, [rbp+8C80h+var_14D0]
 * 00000001800AC76E: call    sub_180075CF8
 * 00000001800AC773: nop
 * 00000001800AC774: mov     r8, rax
 * 00000001800AC777: mov     rdx, r13
 * 00000001800AC77A: lea     rcx, [rbp+8C80h+var_1530]
 * 00000001800AC781: call    sub_18001C928
 * 00000001800AC786: nop
 * 00000001800AC787: lea     r8, aPixel; "/Pixel"
 * 00000001800AC78E: mov     rdx, rax
 * 00000001800AC791: lea     rcx, [rbp+8C80h+var_69B0]
 * 00000001800AC798: call    sub_18001C87C
 * 00000001800AC79D: movups  xmm0, [rbp+8C80h+var_84F0]
 * 00000001800AC7A4: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC7A9: movups  xmm1, [rbp+8C80h+var_84E0]
 * 00000001800AC7B0: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC7B5: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC7BA: mov     rcx, rax
 * 00000001800AC7BD: call    sub_180075D94
 * 00000001800AC7C2: nop
 * 00000001800AC7C3: lea     rcx, [rbp+8C80h+var_1530]
 * 00000001800AC7CA: call    sub_180011E30
 * 00000001800AC7CF: nop
 * 00000001800AC7D0: lea     rcx, [rbp+8C80h+var_14D0]
 * 00000001800AC7D7: call    sub_180011E30
 * 00000001800AC7DC: nop
 * 00000001800AC7DD: lea     rcx, dword_1801CE3B8
 * 00000001800AC7E4: call    sub_18000D4CC
 * 00000001800AC7E9: mov     rax, [rdi+rbx*8]
 * 00000001800AC7ED: mov     eax, [r15+rax]
 * 00000001800AC7F1: cmp     cs:dword_1801CE3BC, eax
 * 00000001800AC7F7: jle     loc_1800AC8D4
 * 00000001800AC7FD: lea     rcx, dword_1801CE3BC
 * 00000001800AC804: call    sub_18000D534
 * 00000001800AC809: cmp     cs:dword_1801CE3BC, r14d
 * 00000001800AC810: jnz     loc_1800AC8D4
 * 00000001800AC816: lea     rax, unk_180177350
 * 00000001800AC81D: mov     qword ptr [rbp+8C80h+var_84D0], rax
 * 00000001800AC824: lea     rax, unk_18017D8DC
 * 00000001800AC82B: mov     qword ptr [rbp+8C80h+var_84D0+8], rax
 * 00000001800AC832: mov     dword ptr [rbp+8C80h+var_84C0], 5
 * 00000001800AC83C: mov     dword ptr [rbp+8C80h+var_84C0+4], esi
 * 00000001800AC842: call    sub_1800A8988
 * 00000001800AC847: mov     r8, rax
 * 00000001800AC84A: mov     r9d, r12d
 * 00000001800AC84D: mov     edx, 0E8h
 * 00000001800AC852: lea     rcx, [rbp+8C80h+var_1410]
 * 00000001800AC859: call    sub_180075CF8
 * 00000001800AC85E: nop
 * 00000001800AC85F: mov     r8, rax
 * 00000001800AC862: mov     rdx, r13
 * 00000001800AC865: lea     rcx, [rbp+8C80h+var_1470]
 * 00000001800AC86C: call    sub_18001C928
 * 00000001800AC871: nop
 * 00000001800AC872: lea     r8, aPixel; "/Pixel"
 * 00000001800AC879: mov     rdx, rax
 * 00000001800AC87C: lea     rcx, [rbp+8C80h+var_6890]
 * 00000001800AC883: call    sub_18001C87C
 * 00000001800AC888: movups  xmm0, [rbp+8C80h+var_84D0]
 * 00000001800AC88F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC894: movups  xmm1, [rbp+8C80h+var_84C0]
 * 00000001800AC89B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC8A0: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC8A5: mov     rcx, rax
 * 00000001800AC8A8: call    sub_180075D94
 * 00000001800AC8AD: nop
 * 00000001800AC8AE: lea     rcx, [rbp+8C80h+var_1470]
 * 00000001800AC8B5: call    sub_180011E30
 * 00000001800AC8BA: nop
 * 00000001800AC8BB: lea     rcx, [rbp+8C80h+var_1410]
 * 00000001800AC8C2: call    sub_180011E30
 * 00000001800AC8C7: nop
 * 00000001800AC8C8: lea     rcx, dword_1801CE3BC
 * 00000001800AC8CF: call    sub_18000D4CC
 * 00000001800AC8D4: mov     rax, [rdi+rbx*8]
 * 00000001800AC8D8: mov     eax, [r15+rax]
 * 00000001800AC8DC: cmp     cs:dword_1801CE3C0, eax
 * 00000001800AC8E2: jle     loc_1800AC9BF
 * 00000001800AC8E8: lea     rcx, dword_1801CE3C0
 * 00000001800AC8EF: call    sub_18000D534
 * 00000001800AC8F4: cmp     cs:dword_1801CE3C0, r14d
 * 00000001800AC8FB: jnz     loc_1800AC9BF
 * 00000001800AC901: lea     rax, unk_180177350
 * 00000001800AC908: mov     qword ptr [rbp+8C80h+var_84B0], rax
 * 00000001800AC90F: lea     rax, unk_18017D8DC
 * 00000001800AC916: mov     qword ptr [rbp+8C80h+var_84B0+8], rax
 * 00000001800AC91D: mov     dword ptr [rbp+8C80h+var_84A0], 5
 * 00000001800AC927: mov     dword ptr [rbp+8C80h+var_84A0+4], esi
 * 00000001800AC92D: call    sub_1800A8988
 * 00000001800AC932: mov     r8, rax
 * 00000001800AC935: mov     r9d, r12d
 * 00000001800AC938: mov     edx, 0EAh
 * 00000001800AC93D: lea     rcx, [rbp+8C80h+var_1350]
 * 00000001800AC944: call    sub_180075CF8
 * 00000001800AC949: nop
 * 00000001800AC94A: mov     r8, rax
 * 00000001800AC94D: mov     rdx, r13
 * 00000001800AC950: lea     rcx, [rbp+8C80h+var_13B0]
 * 00000001800AC957: call    sub_18001C928
 * 00000001800AC95C: nop
 * 00000001800AC95D: lea     r8, aPixel; "/Pixel"
 * 00000001800AC964: mov     rdx, rax
 * 00000001800AC967: lea     rcx, [rbp+8C80h+var_6710]
 * 00000001800AC96E: call    sub_18001C87C
 * 00000001800AC973: movups  xmm0, [rbp+8C80h+var_84B0]
 * 00000001800AC97A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AC97F: movups  xmm1, [rbp+8C80h+var_84A0]
 * 00000001800AC986: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AC98B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AC990: mov     rcx, rax
 * 00000001800AC993: call    sub_180075D94
 * 00000001800AC998: nop
 * 00000001800AC999: lea     rcx, [rbp+8C80h+var_13B0]
 * 00000001800AC9A0: call    sub_180011E30
 * 00000001800AC9A5: nop
 * 00000001800AC9A6: lea     rcx, [rbp+8C80h+var_1350]
 * 00000001800AC9AD: call    sub_180011E30
 * 00000001800AC9B2: nop
 * 00000001800AC9B3: lea     rcx, dword_1801CE3C0
 * 00000001800AC9BA: call    sub_18000D4CC
 * 00000001800AC9BF: mov     rax, [rdi+rbx*8]
 * 00000001800AC9C3: mov     eax, [r15+rax]
 * 00000001800AC9C7: cmp     cs:dword_1801CE3C4, eax
 * 00000001800AC9CD: jle     loc_1800ACAAA
 * 00000001800AC9D3: lea     rcx, dword_1801CE3C4
 * 00000001800AC9DA: call    sub_18000D534
 * 00000001800AC9DF: cmp     cs:dword_1801CE3C4, r14d
 * 00000001800AC9E6: jnz     loc_1800ACAAA
 * 00000001800AC9EC: lea     rax, unk_180180A90
 * 00000001800AC9F3: mov     qword ptr [rbp+8C80h+var_8490], rax
 * 00000001800AC9FA: lea     rax, unk_180187048
 * 00000001800ACA01: mov     qword ptr [rbp+8C80h+var_8490+8], rax
 * 00000001800ACA08: mov     dword ptr [rbp+8C80h+var_8480], 5
 * 00000001800ACA12: mov     dword ptr [rbp+8C80h+var_8480+4], esi
 * 00000001800ACA18: call    sub_1800A8988
 * 00000001800ACA1D: mov     r8, rax
 * 00000001800ACA20: mov     r9d, r12d
 * 00000001800ACA23: mov     edx, 0F0h
 * 00000001800ACA28: lea     rcx, [rbp+8C80h+var_1290]
 * 00000001800ACA2F: call    sub_180075CF8
 * 00000001800ACA34: nop
 * 00000001800ACA35: mov     r8, rax
 * 00000001800ACA38: mov     rdx, r13
 * 00000001800ACA3B: lea     rcx, [rbp+8C80h+var_12F0]
 * 00000001800ACA42: call    sub_18001C928
 * 00000001800ACA47: nop
 * 00000001800ACA48: lea     r8, aPixel; "/Pixel"
 * 00000001800ACA4F: mov     rdx, rax
 * 00000001800ACA52: lea     rcx, [rbp+8C80h+var_65F0]
 * 00000001800ACA59: call    sub_18001C87C
 * 00000001800ACA5E: movups  xmm0, [rbp+8C80h+var_8490]
 * 00000001800ACA65: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ACA6A: movups  xmm1, [rbp+8C80h+var_8480]
 * 00000001800ACA71: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ACA76: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ACA7B: mov     rcx, rax
 * 00000001800ACA7E: call    sub_180075D94
 * 00000001800ACA83: nop
 * 00000001800ACA84: lea     rcx, [rbp+8C80h+var_12F0]
 * 00000001800ACA8B: call    sub_180011E30
 * 00000001800ACA90: nop
 * 00000001800ACA91: lea     rcx, [rbp+8C80h+var_1290]
 * 00000001800ACA98: call    sub_180011E30
 * 00000001800ACA9D: nop
 * 00000001800ACA9E: lea     rcx, dword_1801CE3C4
 * 00000001800ACAA5: call    sub_18000D4CC
 * 00000001800ACAAA: mov     rax, [rdi+rbx*8]
 * 00000001800ACAAE: mov     eax, [r15+rax]
 * 00000001800ACAB2: cmp     cs:dword_1801CE3C8, eax
 * 00000001800ACAB8: jle     loc_1800ACB95
 * 00000001800ACABE: lea     rcx, dword_1801CE3C8
 * 00000001800ACAC5: call    sub_18000D534
 * 00000001800ACACA: cmp     cs:dword_1801CE3C8, r14d
 * 00000001800ACAD1: jnz     loc_1800ACB95
 * 00000001800ACAD7: lea     rax, unk_180180A90
 * 00000001800ACADE: mov     qword ptr [rbp+8C80h+var_8470], rax
 * 00000001800ACAE5: lea     rax, unk_180187048
 * 00000001800ACAEC: mov     qword ptr [rbp+8C80h+var_8470+8], rax
 * 00000001800ACAF3: mov     dword ptr [rbp+8C80h+var_8460], 5
 * 00000001800ACAFD: mov     dword ptr [rbp+8C80h+var_8460+4], esi
 * 00000001800ACB03: call    sub_1800A8988
 * 00000001800ACB08: mov     r8, rax
 * 00000001800ACB0B: mov     r9d, r12d
 * 00000001800ACB0E: mov     edx, 0F2h
 * 00000001800ACB13: lea     rcx, [rbp+8C80h+var_11D0]
 * 00000001800ACB1A: call    sub_180075CF8
 * 00000001800ACB1F: nop
 * 00000001800ACB20: mov     r8, rax
 * 00000001800ACB23: mov     rdx, r13
 * 00000001800ACB26: lea     rcx, [rbp+8C80h+var_1230]
 * 00000001800ACB2D: call    sub_18001C928
 * 00000001800ACB32: nop
 * 00000001800ACB33: lea     r8, aPixel; "/Pixel"
 * 00000001800ACB3A: mov     rdx, rax
 * 00000001800ACB3D: lea     rcx, [rbp+8C80h+var_6490]
 * 00000001800ACB44: call    sub_18001C87C
 * 00000001800ACB49: movups  xmm0, [rbp+8C80h+var_8470]
 * 00000001800ACB50: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ACB55: movups  xmm1, [rbp+8C80h+var_8460]
 * 00000001800ACB5C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ACB61: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ACB66: mov     rcx, rax
 * 00000001800ACB69: call    sub_180075D94
 * 00000001800ACB6E: nop
 * 00000001800ACB6F: lea     rcx, [rbp+8C80h+var_1230]
 * 00000001800ACB76: call    sub_180011E30
 * 00000001800ACB7B: nop
 * 00000001800ACB7C: lea     rcx, [rbp+8C80h+var_11D0]
 * 00000001800ACB83: call    sub_180011E30
 * 00000001800ACB88: nop
 * 00000001800ACB89: lea     rcx, dword_1801CE3C8
 * 00000001800ACB90: call    sub_18000D4CC
 * 00000001800ACB95: mov     rax, [rdi+rbx*8]
 * 00000001800ACB99: mov     eax, [r15+rax]
 * 00000001800ACB9D: cmp     cs:dword_1801CE3CC, eax
 * 00000001800ACBA3: jle     loc_1800ACC80
 * 00000001800ACBA9: lea     rcx, dword_1801CE3CC
 * 00000001800ACBB0: call    sub_18000D534
 * 00000001800ACBB5: cmp     cs:dword_1801CE3CC, r14d
 * 00000001800ACBBC: jnz     loc_1800ACC80
 * 00000001800ACBC2: lea     rax, unk_18015FB10
 * 00000001800ACBC9: mov     qword ptr [rbp+8C80h+var_8450], rax
 * 00000001800ACBD0: lea     rax, unk_18016629C
 * 00000001800ACBD7: mov     qword ptr [rbp+8C80h+var_8450+8], rax
 * 00000001800ACBDE: mov     dword ptr [rbp+8C80h+var_8440], 5
 * 00000001800ACBE8: mov     dword ptr [rbp+8C80h+var_8440+4], esi
 * 00000001800ACBEE: call    sub_1800A8988
 * 00000001800ACBF3: mov     r8, rax
 * 00000001800ACBF6: mov     r9d, r12d
 * 00000001800ACBF9: mov     edx, 0F8h
 * 00000001800ACBFE: lea     rcx, [rbp+8C80h+var_1110]
 * 00000001800ACC05: call    sub_180075CF8
 * 00000001800ACC0A: nop
 * 00000001800ACC0B: mov     r8, rax
 * 00000001800ACC0E: mov     rdx, r13
 * 00000001800ACC11: lea     rcx, [rbp+8C80h+var_1170]
 * 00000001800ACC18: call    sub_18001C928
 * 00000001800ACC1D: nop
 * 00000001800ACC1E: lea     r8, aPixel; "/Pixel"
 * 00000001800ACC25: mov     rdx, rax
 * 00000001800ACC28: lea     rcx, [rbp+8C80h+var_6370]
 * 00000001800ACC2F: call    sub_18001C87C
 * 00000001800ACC34: movups  xmm0, [rbp+8C80h+var_8450]
 * 00000001800ACC3B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ACC40: movups  xmm1, [rbp+8C80h+var_8440]
 * 00000001800ACC47: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ACC4C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ACC51: mov     rcx, rax
 * 00000001800ACC54: call    sub_180075D94
 * 00000001800ACC59: nop
 * 00000001800ACC5A: lea     rcx, [rbp+8C80h+var_1170]
 * 00000001800ACC61: call    sub_180011E30
 * 00000001800ACC66: nop
 * 00000001800ACC67: lea     rcx, [rbp+8C80h+var_1110]
 * 00000001800ACC6E: call    sub_180011E30
 * 00000001800ACC73: nop
 * 00000001800ACC74: lea     rcx, dword_1801CE3CC
 * 00000001800ACC7B: call    sub_18000D4CC
 * 00000001800ACC80: mov     rax, [rdi+rbx*8]
 * 00000001800ACC84: mov     eax, [r15+rax]
 * 00000001800ACC88: cmp     cs:dword_1801CE3D0, eax
 * 00000001800ACC8E: jle     loc_1800ACD6B
 * 00000001800ACC94: lea     rcx, dword_1801CE3D0
 * 00000001800ACC9B: call    sub_18000D534
 * 00000001800ACCA0: cmp     cs:dword_1801CE3D0, r14d
 * 00000001800ACCA7: jnz     loc_1800ACD6B
 * 00000001800ACCAD: lea     rax, unk_18015FB10
 * 00000001800ACCB4: mov     qword ptr [rbp+8C80h+var_8430], rax
 * 00000001800ACCBB: lea     rax, unk_18016629C
 * 00000001800ACCC2: mov     qword ptr [rbp+8C80h+var_8430+8], rax
 * 00000001800ACCC9: mov     dword ptr [rbp+8C80h+var_8420], 5
 * 00000001800ACCD3: mov     dword ptr [rbp+8C80h+var_8420+4], esi
 * 00000001800ACCD9: call    sub_1800A8988
 * 00000001800ACCDE: mov     r8, rax
 * 00000001800ACCE1: mov     r9d, r12d
 * 00000001800ACCE4: mov     edx, 0FAh
 * 00000001800ACCE9: lea     rcx, [rbp+8C80h+var_1050]
 * 00000001800ACCF0: call    sub_180075CF8
 * 00000001800ACCF5: nop
 * 00000001800ACCF6: mov     r8, rax
 * 00000001800ACCF9: mov     rdx, r13
 * 00000001800ACCFC: lea     rcx, [rbp+8C80h+var_10B0]
 * 00000001800ACD03: call    sub_18001C928
 * 00000001800ACD08: nop
 * 00000001800ACD09: lea     r8, aPixel; "/Pixel"
 * 00000001800ACD10: mov     rdx, rax
 * 00000001800ACD13: lea     rcx, [rbp+8C80h+var_61F0]
 * 00000001800ACD1A: call    sub_18001C87C
 * 00000001800ACD1F: movups  xmm0, [rbp+8C80h+var_8430]
 * 00000001800ACD26: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ACD2B: movups  xmm1, [rbp+8C80h+var_8420]
 * 00000001800ACD32: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ACD37: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ACD3C: mov     rcx, rax
 * 00000001800ACD3F: call    sub_180075D94
 * 00000001800ACD44: nop
 * 00000001800ACD45: lea     rcx, [rbp+8C80h+var_10B0]
 * 00000001800ACD4C: call    sub_180011E30
 * 00000001800ACD51: nop
 * 00000001800ACD52: lea     rcx, [rbp+8C80h+var_1050]
 * 00000001800ACD59: call    sub_180011E30
 * 00000001800ACD5E: nop
 * 00000001800ACD5F: lea     rcx, dword_1801CE3D0
 * 00000001800ACD66: call    sub_18000D4CC
 * 00000001800ACD6B: mov     rax, [rdi+rbx*8]
 * 00000001800ACD6F: mov     eax, [r15+rax]
 * 00000001800ACD73: cmp     cs:dword_1801CE3D4, eax
 * 00000001800ACD79: jle     loc_1800ACE56
 * 00000001800ACD7F: lea     rcx, dword_1801CE3D4
 * 00000001800ACD86: call    sub_18000D534
 * 00000001800ACD8B: cmp     cs:dword_1801CE3D4, r14d
 * 00000001800ACD92: jnz     loc_1800ACE56
 * 00000001800ACD98: lea     rax, unk_1801560E0
 * 00000001800ACD9F: mov     qword ptr [rbp+8C80h+var_8410], rax
 * 00000001800ACDA6: lea     rax, unk_18015C80C
 * 00000001800ACDAD: mov     qword ptr [rbp+8C80h+var_8410+8], rax
 * 00000001800ACDB4: mov     dword ptr [rbp+8C80h+var_8400], 5
 * 00000001800ACDBE: mov     dword ptr [rbp+8C80h+var_8400+4], esi
 * 00000001800ACDC4: call    sub_1800A8988
 * 00000001800ACDC9: mov     r8, rax
 * 00000001800ACDCC: mov     r9d, r12d
 * 00000001800ACDCF: mov     edx, 100h
 * 00000001800ACDD4: lea     rcx, [rbp+8C80h+var_F90]
 * 00000001800ACDDB: call    sub_180075CF8
 * 00000001800ACDE0: nop
 * 00000001800ACDE1: mov     r8, rax
 * 00000001800ACDE4: mov     rdx, r13
 * 00000001800ACDE7: lea     rcx, [rbp+8C80h+var_FF0]
 * 00000001800ACDEE: call    sub_18001C928
 * 00000001800ACDF3: nop
 * 00000001800ACDF4: lea     r8, aPixel; "/Pixel"
 * 00000001800ACDFB: mov     rdx, rax
 * 00000001800ACDFE: lea     rcx, [rbp+8C80h+var_60D0]
 * 00000001800ACE05: call    sub_18001C87C
 * 00000001800ACE0A: movups  xmm0, [rbp+8C80h+var_8410]
 * 00000001800ACE11: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ACE16: movups  xmm1, [rbp+8C80h+var_8400]
 * 00000001800ACE1D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ACE22: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ACE27: mov     rcx, rax
 * 00000001800ACE2A: call    sub_180075D94
 * 00000001800ACE2F: nop
 * 00000001800ACE30: lea     rcx, [rbp+8C80h+var_FF0]
 * 00000001800ACE37: call    sub_180011E30
 * 00000001800ACE3C: nop
 * 00000001800ACE3D: lea     rcx, [rbp+8C80h+var_F90]
 * 00000001800ACE44: call    sub_180011E30
 * 00000001800ACE49: nop
 * 00000001800ACE4A: lea     rcx, dword_1801CE3D4
 * 00000001800ACE51: call    sub_18000D4CC
 * 00000001800ACE56: mov     rax, [rdi+rbx*8]
 * 00000001800ACE5A: mov     eax, [r15+rax]
 * 00000001800ACE5E: cmp     cs:dword_1801CE3D8, eax
 * 00000001800ACE64: jle     loc_1800ACF41
 * 00000001800ACE6A: lea     rcx, dword_1801CE3D8
 * 00000001800ACE71: call    sub_18000D534
 * 00000001800ACE76: cmp     cs:dword_1801CE3D8, r14d
 * 00000001800ACE7D: jnz     loc_1800ACF41
 * 00000001800ACE83: lea     rax, unk_1801560E0
 * 00000001800ACE8A: mov     qword ptr [rbp+8C80h+var_83F0], rax
 * 00000001800ACE91: lea     rax, unk_18015C80C
 * 00000001800ACE98: mov     qword ptr [rbp+8C80h+var_83F0+8], rax
 * 00000001800ACE9F: mov     dword ptr [rbp+8C80h+var_83E0], 5
 * 00000001800ACEA9: mov     dword ptr [rbp+8C80h+var_83E0+4], esi
 * 00000001800ACEAF: call    sub_1800A8988
 * 00000001800ACEB4: mov     r8, rax
 * 00000001800ACEB7: mov     r9d, r12d
 * 00000001800ACEBA: mov     edx, 102h
 * 00000001800ACEBF: lea     rcx, [rbp+8C80h+var_ED0]
 * 00000001800ACEC6: call    sub_180075CF8
 * 00000001800ACECB: nop
 * 00000001800ACECC: mov     r8, rax
 * 00000001800ACECF: mov     rdx, r13
 * 00000001800ACED2: lea     rcx, [rbp+8C80h+var_F30]
 * 00000001800ACED9: call    sub_18001C928
 * 00000001800ACEDE: nop
 * 00000001800ACEDF: lea     r8, aPixel; "/Pixel"
 * 00000001800ACEE6: mov     rdx, rax
 * 00000001800ACEE9: lea     rcx, [rbp+8C80h+var_5F90]
 * 00000001800ACEF0: call    sub_18001C87C
 * 00000001800ACEF5: movups  xmm0, [rbp+8C80h+var_83F0]
 * 00000001800ACEFC: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ACF01: movups  xmm1, [rbp+8C80h+var_83E0]
 * 00000001800ACF08: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ACF0D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ACF12: mov     rcx, rax
 * 00000001800ACF15: call    sub_180075D94
 * 00000001800ACF1A: nop
 * 00000001800ACF1B: lea     rcx, [rbp+8C80h+var_F30]
 * 00000001800ACF22: call    sub_180011E30
 * 00000001800ACF27: nop
 * 00000001800ACF28: lea     rcx, [rbp+8C80h+var_ED0]
 * 00000001800ACF2F: call    sub_180011E30
 * 00000001800ACF34: nop
 * 00000001800ACF35: lea     rcx, dword_1801CE3D8
 * 00000001800ACF3C: call    sub_18000D4CC
 * 00000001800ACF41: mov     rax, [rdi+rbx*8]
 * 00000001800ACF45: mov     eax, [r15+rax]
 * 00000001800ACF49: cmp     cs:dword_1801CE3DC, eax
 * 00000001800ACF4F: jle     loc_1800AD02C
 * 00000001800ACF55: lea     rcx, dword_1801CE3DC
 * 00000001800ACF5C: call    sub_18000D534
 * 00000001800ACF61: cmp     cs:dword_1801CE3DC, r14d
 * 00000001800ACF68: jnz     loc_1800AD02C
 * 00000001800ACF6E: lea     rax, unk_180173470
 * 00000001800ACF75: mov     qword ptr [rbp+8C80h+var_83D0], rax
 * 00000001800ACF7C: lea     rax, unk_180176950
 * 00000001800ACF83: mov     qword ptr [rbp+8C80h+var_83D0+8], rax
 * 00000001800ACF8A: mov     dword ptr [rbp+8C80h+var_83C0], 5
 * 00000001800ACF94: mov     dword ptr [rbp+8C80h+var_83C0+4], esi
 * 00000001800ACF9A: call    sub_1800A8988
 * 00000001800ACF9F: mov     r8, rax
 * 00000001800ACFA2: mov     r9d, r12d
 * 00000001800ACFA5: mov     edx, 104h
 * 00000001800ACFAA: lea     rcx, [rbp+8C80h+var_E10]
 * 00000001800ACFB1: call    sub_180075CF8
 * 00000001800ACFB6: nop
 * 00000001800ACFB7: mov     r8, rax
 * 00000001800ACFBA: mov     rdx, r13
 * 00000001800ACFBD: lea     rcx, [rbp+8C80h+var_E70]
 * 00000001800ACFC4: call    sub_18001C928
 * 00000001800ACFC9: nop
 * 00000001800ACFCA: lea     r8, aPixel; "/Pixel"
 * 00000001800ACFD1: mov     rdx, rax
 * 00000001800ACFD4: lea     rcx, [rbp+8C80h+var_5E70]
 * 00000001800ACFDB: call    sub_18001C87C
 * 00000001800ACFE0: movups  xmm0, [rbp+8C80h+var_83D0]
 * 00000001800ACFE7: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ACFEC: movups  xmm1, [rbp+8C80h+var_83C0]
 * 00000001800ACFF3: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ACFF8: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ACFFD: mov     rcx, rax
 * 00000001800AD000: call    sub_180075D94
 * 00000001800AD005: nop
 * 00000001800AD006: lea     rcx, [rbp+8C80h+var_E70]
 * 00000001800AD00D: call    sub_180011E30
 * 00000001800AD012: nop
 * 00000001800AD013: lea     rcx, [rbp+8C80h+var_E10]
 * 00000001800AD01A: call    sub_180011E30
 * 00000001800AD01F: nop
 * 00000001800AD020: lea     rcx, dword_1801CE3DC
 * 00000001800AD027: call    sub_18000D4CC
 * 00000001800AD02C: mov     rax, [rdi+rbx*8]
 * 00000001800AD030: mov     eax, [r15+rax]
 * 00000001800AD034: cmp     cs:dword_1801CE3E0, eax
 * 00000001800AD03A: jle     loc_1800AD117
 * 00000001800AD040: lea     rcx, dword_1801CE3E0
 * 00000001800AD047: call    sub_18000D534
 * 00000001800AD04C: cmp     cs:dword_1801CE3E0, r14d
 * 00000001800AD053: jnz     loc_1800AD117
 * 00000001800AD059: lea     rax, unk_180173470
 * 00000001800AD060: mov     qword ptr [rbp+8C80h+var_83B0], rax
 * 00000001800AD067: lea     rax, unk_180176950
 * 00000001800AD06E: mov     qword ptr [rbp+8C80h+var_83B0+8], rax
 * 00000001800AD075: mov     dword ptr [rbp+8C80h+var_83A0], 5
 * 00000001800AD07F: mov     dword ptr [rbp+8C80h+var_83A0+4], esi
 * 00000001800AD085: call    sub_1800A8988
 * 00000001800AD08A: mov     r8, rax
 * 00000001800AD08D: mov     r9d, r12d
 * 00000001800AD090: mov     edx, 106h
 * 00000001800AD095: lea     rcx, [rbp+8C80h+var_D50]
 * 00000001800AD09C: call    sub_180075CF8
 * 00000001800AD0A1: nop
 * 00000001800AD0A2: mov     r8, rax
 * 00000001800AD0A5: mov     rdx, r13
 * 00000001800AD0A8: lea     rcx, [rbp+8C80h+var_DB0]
 * 00000001800AD0AF: call    sub_18001C928
 * 00000001800AD0B4: nop
 * 00000001800AD0B5: lea     r8, aPixel; "/Pixel"
 * 00000001800AD0BC: mov     rdx, rax
 * 00000001800AD0BF: lea     rcx, [rbp+8C80h+var_67F0]
 * 00000001800AD0C6: call    sub_18001C87C
 * 00000001800AD0CB: movups  xmm0, [rbp+8C80h+var_83B0]
 * 00000001800AD0D2: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD0D7: movups  xmm1, [rbp+8C80h+var_83A0]
 * 00000001800AD0DE: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD0E3: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD0E8: mov     rcx, rax
 * 00000001800AD0EB: call    sub_180075D94
 * 00000001800AD0F0: nop
 * 00000001800AD0F1: lea     rcx, [rbp+8C80h+var_DB0]
 * 00000001800AD0F8: call    sub_180011E30
 * 00000001800AD0FD: nop
 * 00000001800AD0FE: lea     rcx, [rbp+8C80h+var_D50]
 * 00000001800AD105: call    sub_180011E30
 * 00000001800AD10A: nop
 * 00000001800AD10B: lea     rcx, dword_1801CE3E0
 * 00000001800AD112: call    sub_18000D4CC
 * 00000001800AD117: mov     rax, [rdi+rbx*8]
 * 00000001800AD11B: mov     eax, [r15+rax]
 * 00000001800AD11F: cmp     cs:dword_1801CE3E4, eax
 * 00000001800AD125: jle     loc_1800AD202
 * 00000001800AD12B: lea     rcx, dword_1801CE3E4
 * 00000001800AD132: call    sub_18000D534
 * 00000001800AD137: cmp     cs:dword_1801CE3E4, r14d
 * 00000001800AD13E: jnz     loc_1800AD202
 * 00000001800AD144: lea     rax, unk_1801662A0
 * 00000001800AD14B: mov     qword ptr [rbp+8C80h+var_8390], rax
 * 00000001800AD152: lea     rax, unk_18016CB5C
 * 00000001800AD159: mov     qword ptr [rbp+8C80h+var_8390+8], rax
 * 00000001800AD160: mov     dword ptr [rbp+8C80h+var_8380], 5
 * 00000001800AD16A: mov     dword ptr [rbp+8C80h+var_8380+4], esi
 * 00000001800AD170: call    sub_1800A8988
 * 00000001800AD175: mov     r8, rax
 * 00000001800AD178: mov     r9d, r12d
 * 00000001800AD17B: mov     edx, 108h
 * 00000001800AD180: lea     rcx, [rbp+8C80h+var_C90]
 * 00000001800AD187: call    sub_180075CF8
 * 00000001800AD18C: nop
 * 00000001800AD18D: mov     r8, rax
 * 00000001800AD190: mov     rdx, r13
 * 00000001800AD193: lea     rcx, [rbp+8C80h+var_CF0]
 * 00000001800AD19A: call    sub_18001C928
 * 00000001800AD19F: nop
 * 00000001800AD1A0: lea     r8, aPixel; "/Pixel"
 * 00000001800AD1A7: mov     rdx, rax
 * 00000001800AD1AA: lea     rcx, [rbp+8C80h+var_6650]
 * 00000001800AD1B1: call    sub_18001C87C
 * 00000001800AD1B6: movups  xmm0, [rbp+8C80h+var_8390]
 * 00000001800AD1BD: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD1C2: movups  xmm1, [rbp+8C80h+var_8380]
 * 00000001800AD1C9: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD1CE: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD1D3: mov     rcx, rax
 * 00000001800AD1D6: call    sub_180075D94
 * 00000001800AD1DB: nop
 * 00000001800AD1DC: lea     rcx, [rbp+8C80h+var_CF0]
 * 00000001800AD1E3: call    sub_180011E30
 * 00000001800AD1E8: nop
 * 00000001800AD1E9: lea     rcx, [rbp+8C80h+var_C90]
 * 00000001800AD1F0: call    sub_180011E30
 * 00000001800AD1F5: nop
 * 00000001800AD1F6: lea     rcx, dword_1801CE3E4
 * 00000001800AD1FD: call    sub_18000D4CC
 * 00000001800AD202: mov     rax, [rdi+rbx*8]
 * 00000001800AD206: mov     eax, [r15+rax]
 * 00000001800AD20A: cmp     cs:dword_1801CE3E8, eax
 * 00000001800AD210: jle     loc_1800AD2ED
 * 00000001800AD216: lea     rcx, dword_1801CE3E8
 * 00000001800AD21D: call    sub_18000D534
 * 00000001800AD222: cmp     cs:dword_1801CE3E8, r14d
 * 00000001800AD229: jnz     loc_1800AD2ED
 * 00000001800AD22F: lea     rax, unk_1801662A0
 * 00000001800AD236: mov     qword ptr [rbp+8C80h+var_8370], rax
 * 00000001800AD23D: lea     rax, unk_18016CB5C
 * 00000001800AD244: mov     qword ptr [rbp+8C80h+var_8370+8], rax
 * 00000001800AD24B: mov     dword ptr [rbp+8C80h+var_8360], 5
 * 00000001800AD255: mov     dword ptr [rbp+8C80h+var_8360+4], esi
 * 00000001800AD25B: call    sub_1800A8988
 * 00000001800AD260: mov     r8, rax
 * 00000001800AD263: mov     r9d, r12d
 * 00000001800AD266: mov     edx, 10Ah
 * 00000001800AD26B: lea     rcx, [rbp+8C80h+var_BD0]
 * 00000001800AD272: call    sub_180075CF8
 * 00000001800AD277: nop
 * 00000001800AD278: mov     r8, rax
 * 00000001800AD27B: mov     rdx, r13
 * 00000001800AD27E: lea     rcx, [rbp+8C80h+var_C30]
 * 00000001800AD285: call    sub_18001C928
 * 00000001800AD28A: nop
 * 00000001800AD28B: lea     r8, aPixel; "/Pixel"
 * 00000001800AD292: mov     rdx, rax
 * 00000001800AD295: lea     rcx, [rbp+8C80h+var_6430]
 * 00000001800AD29C: call    sub_18001C87C
 * 00000001800AD2A1: movups  xmm0, [rbp+8C80h+var_8370]
 * 00000001800AD2A8: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD2AD: movups  xmm1, [rbp+8C80h+var_8360]
 * 00000001800AD2B4: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD2B9: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD2BE: mov     rcx, rax
 * 00000001800AD2C1: call    sub_180075D94
 * 00000001800AD2C6: nop
 * 00000001800AD2C7: lea     rcx, [rbp+8C80h+var_C30]
 * 00000001800AD2CE: call    sub_180011E30
 * 00000001800AD2D3: nop
 * 00000001800AD2D4: lea     rcx, [rbp+8C80h+var_BD0]
 * 00000001800AD2DB: call    sub_180011E30
 * 00000001800AD2E0: nop
 * 00000001800AD2E1: lea     rcx, dword_1801CE3E8
 * 00000001800AD2E8: call    sub_18000D4CC
 * 00000001800AD2ED: mov     rax, [rdi+rbx*8]
 * 00000001800AD2F1: mov     eax, [r15+rax]
 * 00000001800AD2F5: cmp     cs:dword_1801CE3EC, eax
 * 00000001800AD2FB: jle     loc_1800AD3D8
 * 00000001800AD301: lea     rcx, dword_1801CE3EC
 * 00000001800AD308: call    sub_18000D534
 * 00000001800AD30D: cmp     cs:dword_1801CE3EC, r14d
 * 00000001800AD314: jnz     loc_1800AD3D8
 * 00000001800AD31A: lea     rax, unk_18016CB60
 * 00000001800AD321: mov     qword ptr [rbp+8C80h+var_8350], rax
 * 00000001800AD328: lea     rax, unk_180173468
 * 00000001800AD32F: mov     qword ptr [rbp+8C80h+var_8350+8], rax
 * 00000001800AD336: mov     dword ptr [rbp+8C80h+var_8340], 5
 * 00000001800AD340: mov     dword ptr [rbp+8C80h+var_8340+4], esi
 * 00000001800AD346: call    sub_1800A8988
 * 00000001800AD34B: mov     r8, rax
 * 00000001800AD34E: mov     r9d, r12d
 * 00000001800AD351: mov     edx, 110h
 * 00000001800AD356: lea     rcx, [rbp+8C80h+var_B10]
 * 00000001800AD35D: call    sub_180075CF8
 * 00000001800AD362: nop
 * 00000001800AD363: mov     r8, rax
 * 00000001800AD366: mov     rdx, r13
 * 00000001800AD369: lea     rcx, [rbp+8C80h+var_B70]
 * 00000001800AD370: call    sub_18001C928
 * 00000001800AD375: nop
 * 00000001800AD376: lea     r8, aPixel; "/Pixel"
 * 00000001800AD37D: mov     rdx, rax
 * 00000001800AD380: lea     rcx, [rbp+8C80h+var_6290]
 * 00000001800AD387: call    sub_18001C87C
 * 00000001800AD38C: movups  xmm0, [rbp+8C80h+var_8350]
 * 00000001800AD393: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD398: movups  xmm1, [rbp+8C80h+var_8340]
 * 00000001800AD39F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD3A4: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD3A9: mov     rcx, rax
 * 00000001800AD3AC: call    sub_180075D94
 * 00000001800AD3B1: nop
 * 00000001800AD3B2: lea     rcx, [rbp+8C80h+var_B70]
 * 00000001800AD3B9: call    sub_180011E30
 * 00000001800AD3BE: nop
 * 00000001800AD3BF: lea     rcx, [rbp+8C80h+var_B10]
 * 00000001800AD3C6: call    sub_180011E30
 * 00000001800AD3CB: nop
 * 00000001800AD3CC: lea     rcx, dword_1801CE3EC
 * 00000001800AD3D3: call    sub_18000D4CC
 * 00000001800AD3D8: mov     rax, [rdi+rbx*8]
 * 00000001800AD3DC: mov     eax, [r15+rax]
 * 00000001800AD3E0: cmp     cs:dword_1801CE3F0, eax
 * 00000001800AD3E6: jle     loc_1800AD4C3
 * 00000001800AD3EC: lea     rcx, dword_1801CE3F0
 * 00000001800AD3F3: call    sub_18000D534
 * 00000001800AD3F8: cmp     cs:dword_1801CE3F0, r14d
 * 00000001800AD3FF: jnz     loc_1800AD4C3
 * 00000001800AD405: lea     rax, unk_18016CB60
 * 00000001800AD40C: mov     qword ptr [rbp+8C80h+var_8330], rax
 * 00000001800AD413: lea     rax, unk_180173468
 * 00000001800AD41A: mov     qword ptr [rbp+8C80h+var_8330+8], rax
 * 00000001800AD421: mov     dword ptr [rbp+8C80h+var_8320], 5
 * 00000001800AD42B: mov     dword ptr [rbp+8C80h+var_8320+4], esi
 * 00000001800AD431: call    sub_1800A8988
 * 00000001800AD436: mov     r8, rax
 * 00000001800AD439: mov     r9d, r12d
 * 00000001800AD43C: mov     edx, 112h
 * 00000001800AD441: lea     rcx, [rbp+8C80h+var_A50]
 * 00000001800AD448: call    sub_180075CF8
 * 00000001800AD44D: nop
 * 00000001800AD44E: mov     r8, rax
 * 00000001800AD451: mov     rdx, r13
 * 00000001800AD454: lea     rcx, [rbp+8C80h+var_AB0]
 * 00000001800AD45B: call    sub_18001C928
 * 00000001800AD460: nop
 * 00000001800AD461: lea     r8, aPixel; "/Pixel"
 * 00000001800AD468: mov     rdx, rax
 * 00000001800AD46B: lea     rcx, [rbp+8C80h+var_6050]
 * 00000001800AD472: call    sub_18001C87C
 * 00000001800AD477: movups  xmm0, [rbp+8C80h+var_8330]
 * 00000001800AD47E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD483: movups  xmm1, [rbp+8C80h+var_8320]
 * 00000001800AD48A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD48F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD494: mov     rcx, rax
 * 00000001800AD497: call    sub_180075D94
 * 00000001800AD49C: nop
 * 00000001800AD49D: lea     rcx, [rbp+8C80h+var_AB0]
 * 00000001800AD4A4: call    sub_180011E30
 * 00000001800AD4A9: nop
 * 00000001800AD4AA: lea     rcx, [rbp+8C80h+var_A50]
 * 00000001800AD4B1: call    sub_180011E30
 * 00000001800AD4B6: nop
 * 00000001800AD4B7: lea     rcx, dword_1801CE3F0
 * 00000001800AD4BE: call    sub_18000D4CC
 * 00000001800AD4C3: mov     rax, [rdi+rbx*8]
 * 00000001800AD4C7: mov     eax, [r15+rax]
 * 00000001800AD4CB: cmp     cs:dword_1801CE3F4, eax
 * 00000001800AD4D1: jle     loc_1800AD5AE
 * 00000001800AD4D7: lea     rcx, dword_1801CE3F4
 * 00000001800AD4DE: call    sub_18000D534
 * 00000001800AD4E3: cmp     cs:dword_1801CE3F4, r14d
 * 00000001800AD4EA: jnz     loc_1800AD5AE
 * 00000001800AD4F0: lea     rax, unk_180150E00
 * 00000001800AD4F7: mov     qword ptr [rbp+8C80h+var_8310], rax
 * 00000001800AD4FE: lea     rax, unk_18015441C
 * 00000001800AD505: mov     qword ptr [rbp+8C80h+var_8310+8], rax
 * 00000001800AD50C: mov     dword ptr [rbp+8C80h+var_8300], 5
 * 00000001800AD516: mov     dword ptr [rbp+8C80h+var_8300+4], esi
 * 00000001800AD51C: call    sub_1800A8988
 * 00000001800AD521: mov     r8, rax
 * 00000001800AD524: mov     r9d, r12d
 * 00000001800AD527: mov     edx, 114h
 * 00000001800AD52C: lea     rcx, [rbp+8C80h+var_990]
 * 00000001800AD533: call    sub_180075CF8
 * 00000001800AD538: nop
 * 00000001800AD539: mov     r8, rax
 * 00000001800AD53C: mov     rdx, r13
 * 00000001800AD53F: lea     rcx, [rbp+8C80h+var_9F0]
 * 00000001800AD546: call    sub_18001C928
 * 00000001800AD54B: nop
 * 00000001800AD54C: lea     r8, aPixel; "/Pixel"
 * 00000001800AD553: mov     rdx, rax
 * 00000001800AD556: lea     rcx, [rbp+8C80h+var_5E90]
 * 00000001800AD55D: call    sub_18001C87C
 * 00000001800AD562: movups  xmm0, [rbp+8C80h+var_8310]
 * 00000001800AD569: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD56E: movups  xmm1, [rbp+8C80h+var_8300]
 * 00000001800AD575: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD57A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD57F: mov     rcx, rax
 * 00000001800AD582: call    sub_180075D94
 * 00000001800AD587: nop
 * 00000001800AD588: lea     rcx, [rbp+8C80h+var_9F0]
 * 00000001800AD58F: call    sub_180011E30
 * 00000001800AD594: nop
 * 00000001800AD595: lea     rcx, [rbp+8C80h+var_990]
 * 00000001800AD59C: call    sub_180011E30
 * 00000001800AD5A1: nop
 * 00000001800AD5A2: lea     rcx, dword_1801CE3F4
 * 00000001800AD5A9: call    sub_18000D4CC
 * 00000001800AD5AE: mov     rax, [rdi+rbx*8]
 * 00000001800AD5B2: mov     eax, [r15+rax]
 * 00000001800AD5B6: cmp     cs:dword_1801CE3F8, eax
 * 00000001800AD5BC: jle     loc_1800AD699
 * 00000001800AD5C2: lea     rcx, dword_1801CE3F8
 * 00000001800AD5C9: call    sub_18000D534
 * 00000001800AD5CE: cmp     cs:dword_1801CE3F8, r14d
 * 00000001800AD5D5: jnz     loc_1800AD699
 * 00000001800AD5DB: lea     rax, unk_180150E00
 * 00000001800AD5E2: mov     qword ptr [rbp+8C80h+var_82F0], rax
 * 00000001800AD5E9: lea     rax, unk_18015441C
 * 00000001800AD5F0: mov     qword ptr [rbp+8C80h+var_82F0+8], rax
 * 00000001800AD5F7: mov     dword ptr [rbp+8C80h+var_82E0], 5
 * 00000001800AD601: mov     dword ptr [rbp+8C80h+var_82E0+4], esi
 * 00000001800AD607: call    sub_1800A8988
 * 00000001800AD60C: mov     r8, rax
 * 00000001800AD60F: mov     r9d, r12d
 * 00000001800AD612: mov     edx, 116h
 * 00000001800AD617: lea     rcx, [rbp+8C80h+var_8D0]
 * 00000001800AD61E: call    sub_180075CF8
 * 00000001800AD623: nop
 * 00000001800AD624: mov     r8, rax
 * 00000001800AD627: mov     rdx, r13
 * 00000001800AD62A: lea     rcx, [rbp+8C80h+var_930]
 * 00000001800AD631: call    sub_18001C928
 * 00000001800AD636: nop
 * 00000001800AD637: lea     r8, aPixel; "/Pixel"
 * 00000001800AD63E: mov     rdx, rax
 * 00000001800AD641: lea     rcx, [rbp+8C80h+var_6790]
 * 00000001800AD648: call    sub_18001C87C
 * 00000001800AD64D: movups  xmm0, [rbp+8C80h+var_82F0]
 * 00000001800AD654: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD659: movups  xmm1, [rbp+8C80h+var_82E0]
 * 00000001800AD660: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD665: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD66A: mov     rcx, rax
 * 00000001800AD66D: call    sub_180075D94
 * 00000001800AD672: nop
 * 00000001800AD673: lea     rcx, [rbp+8C80h+var_930]
 * 00000001800AD67A: call    sub_180011E30
 * 00000001800AD67F: nop
 * 00000001800AD680: lea     rcx, [rbp+8C80h+var_8D0]
 * 00000001800AD687: call    sub_180011E30
 * 00000001800AD68C: nop
 * 00000001800AD68D: lea     rcx, dword_1801CE3F8
 * 00000001800AD694: call    sub_18000D4CC
 * 00000001800AD699: mov     rax, [rdi+rbx*8]
 * 00000001800AD69D: mov     eax, [r15+rax]
 * 00000001800AD6A1: cmp     cs:dword_1801CE3FC, eax
 * 00000001800AD6A7: jle     loc_1800AD784
 * 00000001800AD6AD: lea     rcx, dword_1801CE3FC
 * 00000001800AD6B4: call    sub_18000D534
 * 00000001800AD6B9: cmp     cs:dword_1801CE3FC, r14d
 * 00000001800AD6C0: jnz     loc_1800AD784
 * 00000001800AD6C6: lea     rax, unk_18014A340
 * 00000001800AD6CD: mov     qword ptr [rbp+8C80h+var_82D0], rax
 * 00000001800AD6D4: lea     rax, unk_180150DFC
 * 00000001800AD6DB: mov     qword ptr [rbp+8C80h+var_82D0+8], rax
 * 00000001800AD6E2: mov     dword ptr [rbp+8C80h+var_82C0], 5
 * 00000001800AD6EC: mov     dword ptr [rbp+8C80h+var_82C0+4], esi
 * 00000001800AD6F2: call    sub_1800A8988
 * 00000001800AD6F7: mov     r8, rax
 * 00000001800AD6FA: mov     r9d, r12d
 * 00000001800AD6FD: mov     edx, 118h
 * 00000001800AD702: lea     rcx, [rbp+8C80h+var_810]
 * 00000001800AD709: call    sub_180075CF8
 * 00000001800AD70E: nop
 * 00000001800AD70F: mov     r8, rax
 * 00000001800AD712: mov     rdx, r13
 * 00000001800AD715: lea     rcx, [rbp+8C80h+var_870]
 * 00000001800AD71C: call    sub_18001C928
 * 00000001800AD721: nop
 * 00000001800AD722: lea     r8, aPixel; "/Pixel"
 * 00000001800AD729: mov     rdx, rax
 * 00000001800AD72C: lea     rcx, [rbp+8C80h+var_6530]
 * 00000001800AD733: call    sub_18001C87C
 * 00000001800AD738: movups  xmm0, [rbp+8C80h+var_82D0]
 * 00000001800AD73F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD744: movups  xmm1, [rbp+8C80h+var_82C0]
 * 00000001800AD74B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD750: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD755: mov     rcx, rax
 * 00000001800AD758: call    sub_180075D94
 * 00000001800AD75D: nop
 * 00000001800AD75E: lea     rcx, [rbp+8C80h+var_870]
 * 00000001800AD765: call    sub_180011E30
 * 00000001800AD76A: nop
 * 00000001800AD76B: lea     rcx, [rbp+8C80h+var_810]
 * 00000001800AD772: call    sub_180011E30
 * 00000001800AD777: nop
 * 00000001800AD778: lea     rcx, dword_1801CE3FC
 * 00000001800AD77F: call    sub_18000D4CC
 * 00000001800AD784: mov     rax, [rdi+rbx*8]
 * 00000001800AD788: mov     eax, [r15+rax]
 * 00000001800AD78C: cmp     cs:dword_1801CE400, eax
 * 00000001800AD792: jle     loc_1800AD86F
 * 00000001800AD798: lea     rcx, dword_1801CE400
 * 00000001800AD79F: call    sub_18000D534
 * 00000001800AD7A4: cmp     cs:dword_1801CE400, r14d
 * 00000001800AD7AB: jnz     loc_1800AD86F
 * 00000001800AD7B1: lea     rax, unk_18014A340
 * 00000001800AD7B8: mov     qword ptr [rbp+8C80h+var_82B0], rax
 * 00000001800AD7BF: lea     rax, unk_180150DFC
 * 00000001800AD7C6: mov     qword ptr [rbp+8C80h+var_82B0+8], rax
 * 00000001800AD7CD: mov     dword ptr [rbp+8C80h+var_82A0], 5
 * 00000001800AD7D7: mov     dword ptr [rbp+8C80h+var_82A0+4], esi
 * 00000001800AD7DD: call    sub_1800A8988
 * 00000001800AD7E2: mov     r8, rax
 * 00000001800AD7E5: mov     r9d, r12d
 * 00000001800AD7E8: mov     edx, 11Ah
 * 00000001800AD7ED: lea     rcx, [rbp+8C80h+var_750]
 * 00000001800AD7F4: call    sub_180075CF8
 * 00000001800AD7F9: nop
 * 00000001800AD7FA: mov     r8, rax
 * 00000001800AD7FD: mov     rdx, r13
 * 00000001800AD800: lea     rcx, [rbp+8C80h+var_7B0]
 * 00000001800AD807: call    sub_18001C928
 * 00000001800AD80C: nop
 * 00000001800AD80D: lea     r8, aPixel; "/Pixel"
 * 00000001800AD814: mov     rdx, rax
 * 00000001800AD817: lea     rcx, [rbp+8C80h+var_61D0]
 * 00000001800AD81E: call    sub_18001C87C
 * 00000001800AD823: movups  xmm0, [rbp+8C80h+var_82B0]
 * 00000001800AD82A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD82F: movups  xmm1, [rbp+8C80h+var_82A0]
 * 00000001800AD836: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD83B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD840: mov     rcx, rax
 * 00000001800AD843: call    sub_180075D94
 * 00000001800AD848: nop
 * 00000001800AD849: lea     rcx, [rbp+8C80h+var_7B0]
 * 00000001800AD850: call    sub_180011E30
 * 00000001800AD855: nop
 * 00000001800AD856: lea     rcx, [rbp+8C80h+var_750]
 * 00000001800AD85D: call    sub_180011E30
 * 00000001800AD862: nop
 * 00000001800AD863: lea     rcx, dword_1801CE400
 * 00000001800AD86A: call    sub_18000D4CC
 * 00000001800AD86F: mov     rax, [rdi+rbx*8]
 * 00000001800AD873: mov     eax, [r15+rax]
 * 00000001800AD877: cmp     cs:dword_1801CE404, eax
 * 00000001800AD87D: jle     loc_1800AD95A
 * 00000001800AD883: lea     rcx, dword_1801CE404
 * 00000001800AD88A: call    sub_18000D534
 * 00000001800AD88F: cmp     cs:dword_1801CE404, r14d
 * 00000001800AD896: jnz     loc_1800AD95A
 * 00000001800AD89C: lea     rax, unk_1801560E0
 * 00000001800AD8A3: mov     qword ptr [rbp+8C80h+var_8290], rax
 * 00000001800AD8AA: lea     rax, unk_18015C80C
 * 00000001800AD8B1: mov     qword ptr [rbp+8C80h+var_8290+8], rax
 * 00000001800AD8B8: mov     dword ptr [rbp+8C80h+var_8280], 5
 * 00000001800AD8C2: mov     dword ptr [rbp+8C80h+var_8280+4], esi
 * 00000001800AD8C8: call    sub_1800A8988
 * 00000001800AD8CD: mov     r8, rax
 * 00000001800AD8D0: mov     r9d, r12d
 * 00000001800AD8D3: mov     edx, 120h
 * 00000001800AD8D8: lea     rcx, [rbp+8C80h+var_690]
 * 00000001800AD8DF: call    sub_180075CF8
 * 00000001800AD8E4: nop
 * 00000001800AD8E5: mov     r8, rax
 * 00000001800AD8E8: mov     rdx, r13
 * 00000001800AD8EB: lea     rcx, [rbp+8C80h+var_6F0]
 * 00000001800AD8F2: call    sub_18001C928
 * 00000001800AD8F7: nop
 * 00000001800AD8F8: lea     r8, aPixel; "/Pixel"
 * 00000001800AD8FF: mov     rdx, rax
 * 00000001800AD902: lea     rcx, [rbp+8C80h+var_5F30]
 * 00000001800AD909: call    sub_18001C87C
 * 00000001800AD90E: movups  xmm0, [rbp+8C80h+var_8290]
 * 00000001800AD915: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AD91A: movups  xmm1, [rbp+8C80h+var_8280]
 * 00000001800AD921: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AD926: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AD92B: mov     rcx, rax
 * 00000001800AD92E: call    sub_180075D94
 * 00000001800AD933: nop
 * 00000001800AD934: lea     rcx, [rbp+8C80h+var_6F0]
 * 00000001800AD93B: call    sub_180011E30
 * 00000001800AD940: nop
 * 00000001800AD941: lea     rcx, [rbp+8C80h+var_690]
 * 00000001800AD948: call    sub_180011E30
 * 00000001800AD94D: nop
 * 00000001800AD94E: lea     rcx, dword_1801CE404
 * 00000001800AD955: call    sub_18000D4CC
 * 00000001800AD95A: mov     rax, [rdi+rbx*8]
 * 00000001800AD95E: mov     eax, [r15+rax]
 * 00000001800AD962: cmp     cs:dword_1801CE408, eax
 * 00000001800AD968: jle     loc_1800ADA45
 * 00000001800AD96E: lea     rcx, dword_1801CE408
 * 00000001800AD975: call    sub_18000D534
 * 00000001800AD97A: cmp     cs:dword_1801CE408, r14d
 * 00000001800AD981: jnz     loc_1800ADA45
 * 00000001800AD987: lea     rax, unk_1801560E0
 * 00000001800AD98E: mov     qword ptr [rbp+8C80h+var_8270], rax
 * 00000001800AD995: lea     rax, unk_18015C80C
 * 00000001800AD99C: mov     qword ptr [rbp+8C80h+var_8270+8], rax
 * 00000001800AD9A3: mov     dword ptr [rbp+8C80h+var_8260], 5
 * 00000001800AD9AD: mov     dword ptr [rbp+8C80h+var_8260+4], esi
 * 00000001800AD9B3: call    sub_1800A8988
 * 00000001800AD9B8: mov     r8, rax
 * 00000001800AD9BB: mov     r9d, r12d
 * 00000001800AD9BE: mov     edx, 122h
 * 00000001800AD9C3: lea     rcx, [rbp+8C80h+var_5D0]
 * 00000001800AD9CA: call    sub_180075CF8
 * 00000001800AD9CF: nop
 * 00000001800AD9D0: mov     r8, rax
 * 00000001800AD9D3: mov     rdx, r13
 * 00000001800AD9D6: lea     rcx, [rbp+8C80h+var_630]
 * 00000001800AD9DD: call    sub_18001C928
 * 00000001800AD9E2: nop
 * 00000001800AD9E3: lea     r8, aPixel; "/Pixel"
 * 00000001800AD9EA: mov     rdx, rax
 * 00000001800AD9ED: lea     rcx, [rbp+8C80h+var_66D0]
 * 00000001800AD9F4: call    sub_18001C87C
 * 00000001800AD9F9: movups  xmm0, [rbp+8C80h+var_8270]
 * 00000001800ADA00: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ADA05: movups  xmm1, [rbp+8C80h+var_8260]
 * 00000001800ADA0C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ADA11: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ADA16: mov     rcx, rax
 * 00000001800ADA19: call    sub_180075D94
 * 00000001800ADA1E: nop
 * 00000001800ADA1F: lea     rcx, [rbp+8C80h+var_630]
 * 00000001800ADA26: call    sub_180011E30
 * 00000001800ADA2B: nop
 * 00000001800ADA2C: lea     rcx, [rbp+8C80h+var_5D0]
 * 00000001800ADA33: call    sub_180011E30
 * 00000001800ADA38: nop
 * 00000001800ADA39: lea     rcx, dword_1801CE408
 * 00000001800ADA40: call    sub_18000D4CC
 * 00000001800ADA45: mov     rax, [rdi+rbx*8]
 * 00000001800ADA49: mov     eax, [r15+rax]
 * 00000001800ADA4D: cmp     cs:dword_1801CE40C, eax
 * 00000001800ADA53: jle     loc_1800ADB30
 * 00000001800ADA59: lea     rcx, dword_1801CE40C
 * 00000001800ADA60: call    sub_18000D534
 * 00000001800ADA65: cmp     cs:dword_1801CE40C, r14d
 * 00000001800ADA6C: jnz     loc_1800ADB30
 * 00000001800ADA72: lea     rax, unk_1801662A0
 * 00000001800ADA79: mov     qword ptr [rbp+8C80h+var_8250], rax
 * 00000001800ADA80: lea     rax, unk_18016CB5C
 * 00000001800ADA87: mov     qword ptr [rbp+8C80h+var_8250+8], rax
 * 00000001800ADA8E: mov     dword ptr [rbp+8C80h+var_8240], 5
 * 00000001800ADA98: mov     dword ptr [rbp+8C80h+var_8240+4], esi
 * 00000001800ADA9E: call    sub_1800A8988
 * 00000001800ADAA3: mov     r8, rax
 * 00000001800ADAA6: mov     r9d, r12d
 * 00000001800ADAA9: mov     edx, 128h
 * 00000001800ADAAE: lea     rcx, [rbp+8C80h+var_510]
 * 00000001800ADAB5: call    sub_180075CF8
 * 00000001800ADABA: nop
 * 00000001800ADABB: mov     r8, rax
 * 00000001800ADABE: mov     rdx, r13
 * 00000001800ADAC1: lea     rcx, [rbp+8C80h+var_570]
 * 00000001800ADAC8: call    sub_18001C928
 * 00000001800ADACD: nop
 * 00000001800ADACE: lea     r8, aPixel; "/Pixel"
 * 00000001800ADAD5: mov     rdx, rax
 * 00000001800ADAD8: lea     rcx, [rbp+8C80h+var_62F0]
 * 00000001800ADADF: call    sub_18001C87C
 * 00000001800ADAE4: movups  xmm0, [rbp+8C80h+var_8250]
 * 00000001800ADAEB: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ADAF0: movups  xmm1, [rbp+8C80h+var_8240]
 * 00000001800ADAF7: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ADAFC: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ADB01: mov     rcx, rax
 * 00000001800ADB04: call    sub_180075D94
 * 00000001800ADB09: nop
 * 00000001800ADB0A: lea     rcx, [rbp+8C80h+var_570]
 * 00000001800ADB11: call    sub_180011E30
 * 00000001800ADB16: nop
 * 00000001800ADB17: lea     rcx, [rbp+8C80h+var_510]
 * 00000001800ADB1E: call    sub_180011E30
 * 00000001800ADB23: nop
 * 00000001800ADB24: lea     rcx, dword_1801CE40C
 * 00000001800ADB2B: call    sub_18000D4CC
 * 00000001800ADB30: mov     rax, [rdi+rbx*8]
 * 00000001800ADB34: mov     eax, [r15+rax]
 * 00000001800ADB38: cmp     cs:dword_1801CE410, eax
 * 00000001800ADB3E: jle     loc_1800ADC1B
 * 00000001800ADB44: lea     rcx, dword_1801CE410
 * 00000001800ADB4B: call    sub_18000D534
 * 00000001800ADB50: cmp     cs:dword_1801CE410, r14d
 * 00000001800ADB57: jnz     loc_1800ADC1B
 * 00000001800ADB5D: lea     rax, unk_1801662A0
 * 00000001800ADB64: mov     qword ptr [rbp+8C80h+var_8230], rax
 * 00000001800ADB6B: lea     rax, unk_18016CB5C
 * 00000001800ADB72: mov     qword ptr [rbp+8C80h+var_8230+8], rax
 * 00000001800ADB79: mov     dword ptr [rbp+8C80h+var_8220], 5
 * 00000001800ADB83: mov     dword ptr [rbp+8C80h+var_8220+4], esi
 * 00000001800ADB89: call    sub_1800A8988
 * 00000001800ADB8E: mov     r8, rax
 * 00000001800ADB91: mov     r9d, r12d
 * 00000001800ADB94: mov     edx, 12Ah
 * 00000001800ADB99: lea     rcx, [rbp+8C80h+var_450]
 * 00000001800ADBA0: call    sub_180075CF8
 * 00000001800ADBA5: nop
 * 00000001800ADBA6: mov     r8, rax
 * 00000001800ADBA9: mov     rdx, r13
 * 00000001800ADBAC: lea     rcx, [rbp+8C80h+var_4B0]
 * 00000001800ADBB3: call    sub_18001C928
 * 00000001800ADBB8: nop
 * 00000001800ADBB9: lea     r8, aPixel; "/Pixel"
 * 00000001800ADBC0: mov     rdx, rax
 * 00000001800ADBC3: lea     rcx, [rbp+8C80h+var_6950]
 * 00000001800ADBCA: call    sub_18001C87C
 * 00000001800ADBCF: movups  xmm0, [rbp+8C80h+var_8230]
 * 00000001800ADBD6: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ADBDB: movups  xmm1, [rbp+8C80h+var_8220]
 * 00000001800ADBE2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ADBE7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ADBEC: mov     rcx, rax
 * 00000001800ADBEF: call    sub_180075D94
 * 00000001800ADBF4: nop
 * 00000001800ADBF5: lea     rcx, [rbp+8C80h+var_4B0]
 * 00000001800ADBFC: call    sub_180011E30
 * 00000001800ADC01: nop
 * 00000001800ADC02: lea     rcx, [rbp+8C80h+var_450]
 * 00000001800ADC09: call    sub_180011E30
 * 00000001800ADC0E: nop
 * 00000001800ADC0F: lea     rcx, dword_1801CE410
 * 00000001800ADC16: call    sub_18000D4CC
 * 00000001800ADC1B: mov     rax, [rdi+rbx*8]
 * 00000001800ADC1F: mov     eax, [r15+rax]
 * 00000001800ADC23: cmp     cs:dword_1801CE414, eax
 * 00000001800ADC29: jle     loc_1800ADD06
 * 00000001800ADC2F: lea     rcx, dword_1801CE414
 * 00000001800ADC36: call    sub_18000D534
 * 00000001800ADC3B: cmp     cs:dword_1801CE414, r14d
 * 00000001800ADC42: jnz     loc_1800ADD06
 * 00000001800ADC48: lea     rax, unk_18016CB60
 * 00000001800ADC4F: mov     qword ptr [rbp+8C80h+var_8210], rax
 * 00000001800ADC56: lea     rax, unk_180173468
 * 00000001800ADC5D: mov     qword ptr [rbp+8C80h+var_8210+8], rax
 * 00000001800ADC64: mov     dword ptr [rbp+8C80h+var_8200], 5
 * 00000001800ADC6E: mov     dword ptr [rbp+8C80h+var_8200+4], esi
 * 00000001800ADC74: call    sub_1800A8988
 * 00000001800ADC79: mov     r8, rax
 * 00000001800ADC7C: mov     r9d, r12d
 * 00000001800ADC7F: mov     edx, 130h
 * 00000001800ADC84: lea     rcx, [rbp+8C80h+var_390]
 * 00000001800ADC8B: call    sub_180075CF8
 * 00000001800ADC90: nop
 * 00000001800ADC91: mov     r8, rax
 * 00000001800ADC94: mov     rdx, r13
 * 00000001800ADC97: lea     rcx, [rbp+8C80h+var_3F0]
 * 00000001800ADC9E: call    sub_18001C928
 * 00000001800ADCA3: nop
 * 00000001800ADCA4: lea     r8, aPixel; "/Pixel"
 * 00000001800ADCAB: mov     rdx, rax
 * 00000001800ADCAE: lea     rcx, [rbp+8C80h+var_63B0]
 * 00000001800ADCB5: call    sub_18001C87C
 * 00000001800ADCBA: movups  xmm0, [rbp+8C80h+var_8210]
 * 00000001800ADCC1: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ADCC6: movups  xmm1, [rbp+8C80h+var_8200]
 * 00000001800ADCCD: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ADCD2: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ADCD7: mov     rcx, rax
 * 00000001800ADCDA: call    sub_180075D94
 * 00000001800ADCDF: nop
 * 00000001800ADCE0: lea     rcx, [rbp+8C80h+var_3F0]
 * 00000001800ADCE7: call    sub_180011E30
 * 00000001800ADCEC: nop
 * 00000001800ADCED: lea     rcx, [rbp+8C80h+var_390]
 * 00000001800ADCF4: call    sub_180011E30
 * 00000001800ADCF9: nop
 * 00000001800ADCFA: lea     rcx, dword_1801CE414
 * 00000001800ADD01: call    sub_18000D4CC
 * 00000001800ADD06: mov     rax, [rdi+rbx*8]
 * 00000001800ADD0A: mov     eax, [r15+rax]
 * 00000001800ADD0E: cmp     cs:dword_1801CE418, eax
 * 00000001800ADD14: jle     loc_1800ADDF1
 * 00000001800ADD1A: lea     rcx, dword_1801CE418
 * 00000001800ADD21: call    sub_18000D534
 * 00000001800ADD26: cmp     cs:dword_1801CE418, r14d
 * 00000001800ADD2D: jnz     loc_1800ADDF1
 * 00000001800ADD33: lea     rax, unk_18016CB60
 * 00000001800ADD3A: mov     qword ptr [rbp+8C80h+var_81F0], rax
 * 00000001800ADD41: lea     rax, unk_180173468
 * 00000001800ADD48: mov     qword ptr [rbp+8C80h+var_81F0+8], rax
 * 00000001800ADD4F: mov     dword ptr [rbp+8C80h+var_81E0], 5
 * 00000001800ADD59: mov     dword ptr [rbp+8C80h+var_81E0+4], esi
 * 00000001800ADD5F: call    sub_1800A8988
 * 00000001800ADD64: mov     r8, rax
 * 00000001800ADD67: mov     r9d, r12d
 * 00000001800ADD6A: mov     edx, 132h
 * 00000001800ADD6F: lea     rcx, [rbp+8C80h+var_2D0]
 * 00000001800ADD76: call    sub_180075CF8
 * 00000001800ADD7B: nop
 * 00000001800ADD7C: mov     r8, rax
 * 00000001800ADD7F: mov     rdx, r13
 * 00000001800ADD82: lea     rcx, [rbp+8C80h+var_330]
 * 00000001800ADD89: call    sub_18001C928
 * 00000001800ADD8E: nop
 * 00000001800ADD8F: lea     r8, aPixel; "/Pixel"
 * 00000001800ADD96: mov     rdx, rax
 * 00000001800ADD99: lea     rcx, [rbp+8C80h+var_68B0]
 * 00000001800ADDA0: call    sub_18001C87C
 * 00000001800ADDA5: movups  xmm0, [rbp+8C80h+var_81F0]
 * 00000001800ADDAC: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ADDB1: movups  xmm1, [rbp+8C80h+var_81E0]
 * 00000001800ADDB8: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ADDBD: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ADDC2: mov     rcx, rax
 * 00000001800ADDC5: call    sub_180075D94
 * 00000001800ADDCA: nop
 * 00000001800ADDCB: lea     rcx, [rbp+8C80h+var_330]
 * 00000001800ADDD2: call    sub_180011E30
 * 00000001800ADDD7: nop
 * 00000001800ADDD8: lea     rcx, [rbp+8C80h+var_2D0]
 * 00000001800ADDDF: call    sub_180011E30
 * 00000001800ADDE4: nop
 * 00000001800ADDE5: lea     rcx, dword_1801CE418
 * 00000001800ADDEC: call    sub_18000D4CC
 * 00000001800ADDF1: mov     rax, [rdi+rbx*8]
 * 00000001800ADDF5: mov     eax, [r15+rax]
 * 00000001800ADDF9: cmp     cs:dword_1801CE41C, eax
 * 00000001800ADDFF: jle     loc_1800ADEDC
 * 00000001800ADE05: lea     rcx, dword_1801CE41C
 * 00000001800ADE0C: call    sub_18000D534
 * 00000001800ADE11: cmp     cs:dword_1801CE41C, r14d
 * 00000001800ADE18: jnz     loc_1800ADEDC
 * 00000001800ADE1E: lea     rax, unk_18014A340
 * 00000001800ADE25: mov     qword ptr [rbp+8C80h+var_81D0], rax
 * 00000001800ADE2C: lea     rax, unk_180150DFC
 * 00000001800ADE33: mov     qword ptr [rbp+8C80h+var_81D0+8], rax
 * 00000001800ADE3A: mov     dword ptr [rbp+8C80h+var_81C0], 5
 * 00000001800ADE44: mov     dword ptr [rbp+8C80h+var_81C0+4], esi
 * 00000001800ADE4A: call    sub_1800A8988
 * 00000001800ADE4F: mov     r8, rax
 * 00000001800ADE52: mov     r9d, r12d
 * 00000001800ADE55: mov     edx, 138h
 * 00000001800ADE5A: lea     rcx, [rbp+8C80h+var_210]
 * 00000001800ADE61: call    sub_180075CF8
 * 00000001800ADE66: nop
 * 00000001800ADE67: mov     r8, rax
 * 00000001800ADE6A: mov     rdx, r13
 * 00000001800ADE6D: lea     rcx, [rbp+8C80h+var_270]
 * 00000001800ADE74: call    sub_18001C928
 * 00000001800ADE79: nop
 * 00000001800ADE7A: lea     r8, aPixel; "/Pixel"
 * 00000001800ADE81: mov     rdx, rax
 * 00000001800ADE84: lea     rcx, [rbp+8C80h+var_6010]
 * 00000001800ADE8B: call    sub_18001C87C
 * 00000001800ADE90: movups  xmm0, [rbp+8C80h+var_81D0]
 * 00000001800ADE97: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ADE9C: movups  xmm1, [rbp+8C80h+var_81C0]
 * 00000001800ADEA3: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ADEA8: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ADEAD: mov     rcx, rax
 * 00000001800ADEB0: call    sub_180075D94
 * 00000001800ADEB5: nop
 * 00000001800ADEB6: lea     rcx, [rbp+8C80h+var_270]
 * 00000001800ADEBD: call    sub_180011E30
 * 00000001800ADEC2: nop
 * 00000001800ADEC3: lea     rcx, [rbp+8C80h+var_210]
 * 00000001800ADECA: call    sub_180011E30
 * 00000001800ADECF: nop
 * 00000001800ADED0: lea     rcx, dword_1801CE41C
 * 00000001800ADED7: call    sub_18000D4CC
 * 00000001800ADEDC: mov     rax, [rdi+rbx*8]
 * 00000001800ADEE0: mov     eax, [r15+rax]
 * 00000001800ADEE4: cmp     cs:dword_1801CE420, eax
 * 00000001800ADEEA: jle     loc_1800ADFC7
 * 00000001800ADEF0: lea     rcx, dword_1801CE420
 * 00000001800ADEF7: call    sub_18000D534
 * 00000001800ADEFC: cmp     cs:dword_1801CE420, r14d
 * 00000001800ADF03: jnz     loc_1800ADFC7
 * 00000001800ADF09: lea     rax, unk_18014A340
 * 00000001800ADF10: mov     qword ptr [rbp+8C80h+var_81B0], rax
 * 00000001800ADF17: lea     rax, unk_180150DFC
 * 00000001800ADF1E: mov     qword ptr [rbp+8C80h+var_81B0+8], rax
 * 00000001800ADF25: mov     dword ptr [rbp+8C80h+var_81A0], 5
 * 00000001800ADF2F: mov     dword ptr [rbp+8C80h+var_81A0+4], esi
 * 00000001800ADF35: call    sub_1800A8988
 * 00000001800ADF3A: mov     r8, rax
 * 00000001800ADF3D: mov     r9d, r12d
 * 00000001800ADF40: mov     edx, 13Ah
 * 00000001800ADF45: lea     rcx, [rbp+8C80h+var_150]
 * 00000001800ADF4C: call    sub_180075CF8
 * 00000001800ADF51: nop
 * 00000001800ADF52: mov     r8, rax
 * 00000001800ADF55: mov     rdx, r13
 * 00000001800ADF58: lea     rcx, [rbp+8C80h+var_1B0]
 * 00000001800ADF5F: call    sub_18001C928
 * 00000001800ADF64: nop
 * 00000001800ADF65: lea     r8, aPixel; "/Pixel"
 * 00000001800ADF6C: mov     rdx, rax
 * 00000001800ADF6F: lea     rcx, [rbp+8C80h+var_6550]
 * 00000001800ADF76: call    sub_18001C87C
 * 00000001800ADF7B: movups  xmm0, [rbp+8C80h+var_81B0]
 * 00000001800ADF82: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800ADF87: movups  xmm1, [rbp+8C80h+var_81A0]
 * 00000001800ADF8E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800ADF93: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800ADF98: mov     rcx, rax
 * 00000001800ADF9B: call    sub_180075D94
 * 00000001800ADFA0: nop
 * 00000001800ADFA1: lea     rcx, [rbp+8C80h+var_1B0]
 * 00000001800ADFA8: call    sub_180011E30
 * 00000001800ADFAD: nop
 * 00000001800ADFAE: lea     rcx, [rbp+8C80h+var_150]
 * 00000001800ADFB5: call    sub_180011E30
 * 00000001800ADFBA: nop
 * 00000001800ADFBB: lea     rcx, dword_1801CE420
 * 00000001800ADFC2: call    sub_18000D4CC
 * 00000001800ADFC7: mov     rax, [rdi+rbx*8]
 * 00000001800ADFCB: mov     eax, [r15+rax]
 * 00000001800ADFCF: cmp     cs:dword_1801CE424, eax
 * 00000001800ADFD5: jle     loc_1800AE0B2
 * 00000001800ADFDB: lea     rcx, dword_1801CE424
 * 00000001800ADFE2: call    sub_18000D534
 * 00000001800ADFE7: cmp     cs:dword_1801CE424, r14d
 * 00000001800ADFEE: jnz     loc_1800AE0B2
 * 00000001800ADFF4: lea     rax, unk_1801560E0
 * 00000001800ADFFB: mov     qword ptr [rbp+8C80h+var_8190], rax
 * 00000001800AE002: lea     rax, unk_18015C80C
 * 00000001800AE009: mov     qword ptr [rbp+8C80h+var_8190+8], rax
 * 00000001800AE010: mov     dword ptr [rbp+8C80h+var_8180], 5
 * 00000001800AE01A: mov     dword ptr [rbp+8C80h+var_8180+4], esi
 * 00000001800AE020: call    sub_1800A8988
 * 00000001800AE025: mov     r8, rax
 * 00000001800AE028: mov     r9d, r12d
 * 00000001800AE02B: mov     edx, 140h
 * 00000001800AE030: lea     rcx, [rbp+8C80h+var_90]
 * 00000001800AE037: call    sub_180075CF8
 * 00000001800AE03C: nop
 * 00000001800AE03D: mov     r8, rax
 * 00000001800AE040: mov     rdx, r13
 * 00000001800AE043: lea     rcx, [rbp+8C80h+var_F0]
 * 00000001800AE04A: call    sub_18001C928
 * 00000001800AE04F: nop
 * 00000001800AE050: lea     r8, aPixel; "/Pixel"
 * 00000001800AE057: mov     rdx, rax
 * 00000001800AE05A: lea     rcx, [rbp+8C80h+var_6130]
 * 00000001800AE061: call    sub_18001C87C
 * 00000001800AE066: movups  xmm0, [rbp+8C80h+var_8190]
 * 00000001800AE06D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE072: movups  xmm1, [rbp+8C80h+var_8180]
 * 00000001800AE079: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE07E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE083: mov     rcx, rax
 * 00000001800AE086: call    sub_180075D94
 * 00000001800AE08B: nop
 * 00000001800AE08C: lea     rcx, [rbp+8C80h+var_F0]
 * 00000001800AE093: call    sub_180011E30
 * 00000001800AE098: nop
 * 00000001800AE099: lea     rcx, [rbp+8C80h+var_90]
 * 00000001800AE0A0: call    sub_180011E30
 * 00000001800AE0A5: nop
 * 00000001800AE0A6: lea     rcx, dword_1801CE424
 * 00000001800AE0AD: call    sub_18000D4CC
 * 00000001800AE0B2: mov     rax, [rdi+rbx*8]
 * 00000001800AE0B6: mov     eax, [r15+rax]
 * 00000001800AE0BA: cmp     cs:dword_1801CE428, eax
 * 00000001800AE0C0: jle     loc_1800AE19D
 * 00000001800AE0C6: lea     rcx, dword_1801CE428
 * 00000001800AE0CD: call    sub_18000D534
 * 00000001800AE0D2: cmp     cs:dword_1801CE428, r14d
 * 00000001800AE0D9: jnz     loc_1800AE19D
 * 00000001800AE0DF: lea     rax, unk_1801560E0
 * 00000001800AE0E6: mov     qword ptr [rbp+8C80h+var_8170], rax
 * 00000001800AE0ED: lea     rax, unk_18015C80C
 * 00000001800AE0F4: mov     qword ptr [rbp+8C80h+var_8170+8], rax
 * 00000001800AE0FB: mov     dword ptr [rbp+8C80h+var_8160], 5
 * 00000001800AE105: mov     dword ptr [rbp+8C80h+var_8160+4], esi
 * 00000001800AE10B: call    sub_1800A8988
 * 00000001800AE110: mov     r8, rax
 * 00000001800AE113: mov     r9d, r12d
 * 00000001800AE116: mov     edx, 142h
 * 00000001800AE11B: lea     rcx, [rbp+8C80h+var_4670]
 * 00000001800AE122: call    sub_180075CF8
 * 00000001800AE127: nop
 * 00000001800AE128: mov     r8, rax
 * 00000001800AE12B: mov     rdx, r13
 * 00000001800AE12E: lea     rcx, [rbp+8C80h+var_4690]
 * 00000001800AE135: call    sub_18001C928
 * 00000001800AE13A: nop
 * 00000001800AE13B: lea     r8, aPixel; "/Pixel"
 * 00000001800AE142: mov     rdx, rax
 * 00000001800AE145: lea     rcx, [rbp+8C80h+var_5E30]
 * 00000001800AE14C: call    sub_18001C87C
 * 00000001800AE151: movups  xmm0, [rbp+8C80h+var_8170]
 * 00000001800AE158: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE15D: movups  xmm1, [rbp+8C80h+var_8160]
 * 00000001800AE164: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE169: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE16E: mov     rcx, rax
 * 00000001800AE171: call    sub_180075D94
 * 00000001800AE176: nop
 * 00000001800AE177: lea     rcx, [rbp+8C80h+var_4690]
 * 00000001800AE17E: call    sub_180011E30
 * 00000001800AE183: nop
 * 00000001800AE184: lea     rcx, [rbp+8C80h+var_4670]
 * 00000001800AE18B: call    sub_180011E30
 * 00000001800AE190: nop
 * 00000001800AE191: lea     rcx, dword_1801CE428
 * 00000001800AE198: call    sub_18000D4CC
 * 00000001800AE19D: mov     rax, [rdi+rbx*8]
 * 00000001800AE1A1: mov     eax, [r15+rax]
 * 00000001800AE1A5: cmp     cs:dword_1801CE42C, eax
 * 00000001800AE1AB: jle     loc_1800AE288
 * 00000001800AE1B1: lea     rcx, dword_1801CE42C
 * 00000001800AE1B8: call    sub_18000D534
 * 00000001800AE1BD: cmp     cs:dword_1801CE42C, r14d
 * 00000001800AE1C4: jnz     loc_1800AE288
 * 00000001800AE1CA: lea     rax, unk_1801662A0
 * 00000001800AE1D1: mov     qword ptr [rbp+8C80h+var_8150], rax
 * 00000001800AE1D8: lea     rax, unk_18016CB5C
 * 00000001800AE1DF: mov     qword ptr [rbp+8C80h+var_8150+8], rax
 * 00000001800AE1E6: mov     dword ptr [rbp+8C80h+var_8140], 5
 * 00000001800AE1F0: mov     dword ptr [rbp+8C80h+var_8140+4], esi
 * 00000001800AE1F6: call    sub_1800A8988
 * 00000001800AE1FB: mov     r8, rax
 * 00000001800AE1FE: mov     r9d, r12d
 * 00000001800AE201: mov     edx, 148h
 * 00000001800AE206: lea     rcx, [rbp+8C80h+var_4610]
 * 00000001800AE20D: call    sub_180075CF8
 * 00000001800AE212: nop
 * 00000001800AE213: mov     r8, rax
 * 00000001800AE216: mov     rdx, r13
 * 00000001800AE219: lea     rcx, [rbp+8C80h+var_4630]
 * 00000001800AE220: call    sub_18001C928
 * 00000001800AE225: nop
 * 00000001800AE226: lea     r8, aPixel; "/Pixel"
 * 00000001800AE22D: mov     rdx, rax
 * 00000001800AE230: lea     rcx, [rbp+8C80h+var_5E10]
 * 00000001800AE237: call    sub_18001C87C
 * 00000001800AE23C: movups  xmm0, [rbp+8C80h+var_8150]
 * 00000001800AE243: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE248: movups  xmm1, [rbp+8C80h+var_8140]
 * 00000001800AE24F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE254: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE259: mov     rcx, rax
 * 00000001800AE25C: call    sub_180075D94
 * 00000001800AE261: nop
 * 00000001800AE262: lea     rcx, [rbp+8C80h+var_4630]
 * 00000001800AE269: call    sub_180011E30
 * 00000001800AE26E: nop
 * 00000001800AE26F: lea     rcx, [rbp+8C80h+var_4610]
 * 00000001800AE276: call    sub_180011E30
 * 00000001800AE27B: nop
 * 00000001800AE27C: lea     rcx, dword_1801CE42C
 * 00000001800AE283: call    sub_18000D4CC
 * 00000001800AE288: mov     rax, [rdi+rbx*8]
 * 00000001800AE28C: mov     eax, [r15+rax]
 * 00000001800AE290: cmp     cs:dword_1801CE430, eax
 * 00000001800AE296: jle     loc_1800AE373
 * 00000001800AE29C: lea     rcx, dword_1801CE430
 * 00000001800AE2A3: call    sub_18000D534
 * 00000001800AE2A8: cmp     cs:dword_1801CE430, r14d
 * 00000001800AE2AF: jnz     loc_1800AE373
 * 00000001800AE2B5: lea     rax, unk_1801662A0
 * 00000001800AE2BC: mov     qword ptr [rbp+8C80h+var_8130], rax
 * 00000001800AE2C3: lea     rax, unk_18016CB5C
 * 00000001800AE2CA: mov     qword ptr [rbp+8C80h+var_8130+8], rax
 * 00000001800AE2D1: mov     dword ptr [rbp+8C80h+var_8120], 5
 * 00000001800AE2DB: mov     dword ptr [rbp+8C80h+var_8120+4], esi
 * 00000001800AE2E1: call    sub_1800A8988
 * 00000001800AE2E6: mov     r8, rax
 * 00000001800AE2E9: mov     r9d, r12d
 * 00000001800AE2EC: mov     edx, 14Ah
 * 00000001800AE2F1: lea     rcx, [rbp+8C80h+var_45B0]
 * 00000001800AE2F8: call    sub_180075CF8
 * 00000001800AE2FD: nop
 * 00000001800AE2FE: mov     r8, rax
 * 00000001800AE301: mov     rdx, r13
 * 00000001800AE304: lea     rcx, [rbp+8C80h+var_45D0]
 * 00000001800AE30B: call    sub_18001C928
 * 00000001800AE310: nop
 * 00000001800AE311: lea     r8, aPixel; "/Pixel"
 * 00000001800AE318: mov     rdx, rax
 * 00000001800AE31B: lea     rcx, [rbp+8C80h+var_5DF0]
 * 00000001800AE322: call    sub_18001C87C
 * 00000001800AE327: movups  xmm0, [rbp+8C80h+var_8130]
 * 00000001800AE32E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE333: movups  xmm1, [rbp+8C80h+var_8120]
 * 00000001800AE33A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE33F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE344: mov     rcx, rax
 * 00000001800AE347: call    sub_180075D94
 * 00000001800AE34C: nop
 * 00000001800AE34D: lea     rcx, [rbp+8C80h+var_45D0]
 * 00000001800AE354: call    sub_180011E30
 * 00000001800AE359: nop
 * 00000001800AE35A: lea     rcx, [rbp+8C80h+var_45B0]
 * 00000001800AE361: call    sub_180011E30
 * 00000001800AE366: nop
 * 00000001800AE367: lea     rcx, dword_1801CE430
 * 00000001800AE36E: call    sub_18000D4CC
 * 00000001800AE373: mov     rax, [rdi+rbx*8]
 * 00000001800AE377: mov     eax, [r15+rax]
 * 00000001800AE37B: cmp     cs:dword_1801CE434, eax
 * 00000001800AE381: jle     loc_1800AE45E
 * 00000001800AE387: lea     rcx, dword_1801CE434
 * 00000001800AE38E: call    sub_18000D534
 * 00000001800AE393: cmp     cs:dword_1801CE434, r14d
 * 00000001800AE39A: jnz     loc_1800AE45E
 * 00000001800AE3A0: lea     rax, unk_18016CB60
 * 00000001800AE3A7: mov     qword ptr [rbp+8C80h+var_8110], rax
 * 00000001800AE3AE: lea     rax, unk_180173468
 * 00000001800AE3B5: mov     qword ptr [rbp+8C80h+var_8110+8], rax
 * 00000001800AE3BC: mov     dword ptr [rbp+8C80h+var_8100], 5
 * 00000001800AE3C6: mov     dword ptr [rbp+8C80h+var_8100+4], esi
 * 00000001800AE3CC: call    sub_1800A8988
 * 00000001800AE3D1: mov     r8, rax
 * 00000001800AE3D4: mov     r9d, r12d
 * 00000001800AE3D7: mov     edx, 150h
 * 00000001800AE3DC: lea     rcx, [rbp+8C80h+var_4550]
 * 00000001800AE3E3: call    sub_180075CF8
 * 00000001800AE3E8: nop
 * 00000001800AE3E9: mov     r8, rax
 * 00000001800AE3EC: mov     rdx, r13
 * 00000001800AE3EF: lea     rcx, [rbp+8C80h+var_4570]
 * 00000001800AE3F6: call    sub_18001C928
 * 00000001800AE3FB: nop
 * 00000001800AE3FC: lea     r8, aPixel; "/Pixel"
 * 00000001800AE403: mov     rdx, rax
 * 00000001800AE406: lea     rcx, [rbp+8C80h+var_5DD0]
 * 00000001800AE40D: call    sub_18001C87C
 * 00000001800AE412: movups  xmm0, [rbp+8C80h+var_8110]
 * 00000001800AE419: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE41E: movups  xmm1, [rbp+8C80h+var_8100]
 * 00000001800AE425: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE42A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE42F: mov     rcx, rax
 * 00000001800AE432: call    sub_180075D94
 * 00000001800AE437: nop
 * 00000001800AE438: lea     rcx, [rbp+8C80h+var_4570]
 * 00000001800AE43F: call    sub_180011E30
 * 00000001800AE444: nop
 * 00000001800AE445: lea     rcx, [rbp+8C80h+var_4550]
 * 00000001800AE44C: call    sub_180011E30
 * 00000001800AE451: nop
 * 00000001800AE452: lea     rcx, dword_1801CE434
 * 00000001800AE459: call    sub_18000D4CC
 * 00000001800AE45E: mov     rax, [rdi+rbx*8]
 * 00000001800AE462: mov     eax, [r15+rax]
 * 00000001800AE466: cmp     cs:dword_1801CE438, eax
 * 00000001800AE46C: jle     loc_1800AE549
 * 00000001800AE472: lea     rcx, dword_1801CE438
 * 00000001800AE479: call    sub_18000D534
 * 00000001800AE47E: cmp     cs:dword_1801CE438, r14d
 * 00000001800AE485: jnz     loc_1800AE549
 * 00000001800AE48B: lea     rax, unk_18016CB60
 * 00000001800AE492: mov     qword ptr [rbp+8C80h+var_80F0], rax
 * 00000001800AE499: lea     rax, unk_180173468
 * 00000001800AE4A0: mov     qword ptr [rbp+8C80h+var_80F0+8], rax
 * 00000001800AE4A7: mov     dword ptr [rbp+8C80h+var_80E0], 5
 * 00000001800AE4B1: mov     dword ptr [rbp+8C80h+var_80E0+4], esi
 * 00000001800AE4B7: call    sub_1800A8988
 * 00000001800AE4BC: mov     r8, rax
 * 00000001800AE4BF: mov     r9d, r12d
 * 00000001800AE4C2: mov     edx, 152h
 * 00000001800AE4C7: lea     rcx, [rbp+8C80h+var_44F0]
 * 00000001800AE4CE: call    sub_180075CF8
 * 00000001800AE4D3: nop
 * 00000001800AE4D4: mov     r8, rax
 * 00000001800AE4D7: mov     rdx, r13
 * 00000001800AE4DA: lea     rcx, [rbp+8C80h+var_4510]
 * 00000001800AE4E1: call    sub_18001C928
 * 00000001800AE4E6: nop
 * 00000001800AE4E7: lea     r8, aPixel; "/Pixel"
 * 00000001800AE4EE: mov     rdx, rax
 * 00000001800AE4F1: lea     rcx, [rbp+8C80h+var_5DB0]
 * 00000001800AE4F8: call    sub_18001C87C
 * 00000001800AE4FD: movups  xmm0, [rbp+8C80h+var_80F0]
 * 00000001800AE504: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE509: movups  xmm1, [rbp+8C80h+var_80E0]
 * 00000001800AE510: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE515: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE51A: mov     rcx, rax
 * 00000001800AE51D: call    sub_180075D94
 * 00000001800AE522: nop
 * 00000001800AE523: lea     rcx, [rbp+8C80h+var_4510]
 * 00000001800AE52A: call    sub_180011E30
 * 00000001800AE52F: nop
 * 00000001800AE530: lea     rcx, [rbp+8C80h+var_44F0]
 * 00000001800AE537: call    sub_180011E30
 * 00000001800AE53C: nop
 * 00000001800AE53D: lea     rcx, dword_1801CE438
 * 00000001800AE544: call    sub_18000D4CC
 * 00000001800AE549: mov     rax, [rdi+rbx*8]
 * 00000001800AE54D: mov     eax, [r15+rax]
 * 00000001800AE551: cmp     cs:dword_1801CE43C, eax
 * 00000001800AE557: jle     loc_1800AE634
 * 00000001800AE55D: lea     rcx, dword_1801CE43C
 * 00000001800AE564: call    sub_18000D534
 * 00000001800AE569: cmp     cs:dword_1801CE43C, r14d
 * 00000001800AE570: jnz     loc_1800AE634
 * 00000001800AE576: lea     rax, unk_18014A340
 * 00000001800AE57D: mov     qword ptr [rbp+8C80h+var_80D0], rax
 * 00000001800AE584: lea     rax, unk_180150DFC
 * 00000001800AE58B: mov     qword ptr [rbp+8C80h+var_80D0+8], rax
 * 00000001800AE592: mov     dword ptr [rbp+8C80h+var_80C0], 5
 * 00000001800AE59C: mov     dword ptr [rbp+8C80h+var_80C0+4], esi
 * 00000001800AE5A2: call    sub_1800A8988
 * 00000001800AE5A7: mov     r8, rax
 * 00000001800AE5AA: mov     r9d, r12d
 * 00000001800AE5AD: mov     edx, 158h
 * 00000001800AE5B2: lea     rcx, [rbp+8C80h+var_4490]
 * 00000001800AE5B9: call    sub_180075CF8
 * 00000001800AE5BE: nop
 * 00000001800AE5BF: mov     r8, rax
 * 00000001800AE5C2: mov     rdx, r13
 * 00000001800AE5C5: lea     rcx, [rbp+8C80h+var_44B0]
 * 00000001800AE5CC: call    sub_18001C928
 * 00000001800AE5D1: nop
 * 00000001800AE5D2: lea     r8, aPixel; "/Pixel"
 * 00000001800AE5D9: mov     rdx, rax
 * 00000001800AE5DC: lea     rcx, [rbp+8C80h+var_5D90]
 * 00000001800AE5E3: call    sub_18001C87C
 * 00000001800AE5E8: movups  xmm0, [rbp+8C80h+var_80D0]
 * 00000001800AE5EF: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE5F4: movups  xmm1, [rbp+8C80h+var_80C0]
 * 00000001800AE5FB: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE600: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE605: mov     rcx, rax
 * 00000001800AE608: call    sub_180075D94
 * 00000001800AE60D: nop
 * 00000001800AE60E: lea     rcx, [rbp+8C80h+var_44B0]
 * 00000001800AE615: call    sub_180011E30
 * 00000001800AE61A: nop
 * 00000001800AE61B: lea     rcx, [rbp+8C80h+var_4490]
 * 00000001800AE622: call    sub_180011E30
 * 00000001800AE627: nop
 * 00000001800AE628: lea     rcx, dword_1801CE43C
 * 00000001800AE62F: call    sub_18000D4CC
 * 00000001800AE634: mov     rax, [rdi+rbx*8]
 * 00000001800AE638: mov     eax, [r15+rax]
 * 00000001800AE63C: cmp     cs:dword_1801CE440, eax
 * 00000001800AE642: jle     loc_1800AE71F
 * 00000001800AE648: lea     rcx, dword_1801CE440
 * 00000001800AE64F: call    sub_18000D534
 * 00000001800AE654: cmp     cs:dword_1801CE440, r14d
 * 00000001800AE65B: jnz     loc_1800AE71F
 * 00000001800AE661: lea     rax, unk_18014A340
 * 00000001800AE668: mov     qword ptr [rbp+8C80h+var_80B0], rax
 * 00000001800AE66F: lea     rax, unk_180150DFC
 * 00000001800AE676: mov     qword ptr [rbp+8C80h+var_80B0+8], rax
 * 00000001800AE67D: mov     dword ptr [rbp+8C80h+var_80A0], 5
 * 00000001800AE687: mov     dword ptr [rbp+8C80h+var_80A0+4], esi
 * 00000001800AE68D: call    sub_1800A8988
 * 00000001800AE692: mov     r8, rax
 * 00000001800AE695: mov     r9d, r12d
 * 00000001800AE698: mov     edx, 15Ah
 * 00000001800AE69D: lea     rcx, [rbp+8C80h+var_4430]
 * 00000001800AE6A4: call    sub_180075CF8
 * 00000001800AE6A9: nop
 * 00000001800AE6AA: mov     r8, rax
 * 00000001800AE6AD: mov     rdx, r13
 * 00000001800AE6B0: lea     rcx, [rbp+8C80h+var_4450]
 * 00000001800AE6B7: call    sub_18001C928
 * 00000001800AE6BC: nop
 * 00000001800AE6BD: lea     r8, aPixel; "/Pixel"
 * 00000001800AE6C4: mov     rdx, rax
 * 00000001800AE6C7: lea     rcx, [rbp+8C80h+var_5D70]
 * 00000001800AE6CE: call    sub_18001C87C
 * 00000001800AE6D3: movups  xmm0, [rbp+8C80h+var_80B0]
 * 00000001800AE6DA: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE6DF: movups  xmm1, [rbp+8C80h+var_80A0]
 * 00000001800AE6E6: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE6EB: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE6F0: mov     rcx, rax
 * 00000001800AE6F3: call    sub_180075D94
 * 00000001800AE6F8: nop
 * 00000001800AE6F9: lea     rcx, [rbp+8C80h+var_4450]
 * 00000001800AE700: call    sub_180011E30
 * 00000001800AE705: nop
 * 00000001800AE706: lea     rcx, [rbp+8C80h+var_4430]
 * 00000001800AE70D: call    sub_180011E30
 * 00000001800AE712: nop
 * 00000001800AE713: lea     rcx, dword_1801CE440
 * 00000001800AE71A: call    sub_18000D4CC
 * 00000001800AE71F: mov     rax, [rdi+rbx*8]
 * 00000001800AE723: mov     eax, [r15+rax]
 * 00000001800AE727: cmp     cs:dword_1801CE444, eax
 * 00000001800AE72D: jle     loc_1800AE80A
 * 00000001800AE733: lea     rcx, dword_1801CE444
 * 00000001800AE73A: call    sub_18000D534
 * 00000001800AE73F: cmp     cs:dword_1801CE444, r14d
 * 00000001800AE746: jnz     loc_1800AE80A
 * 00000001800AE74C: lea     rax, unk_1801560E0
 * 00000001800AE753: mov     qword ptr [rbp+8C80h+var_8090], rax
 * 00000001800AE75A: lea     rax, unk_18015C80C
 * 00000001800AE761: mov     qword ptr [rbp+8C80h+var_8090+8], rax
 * 00000001800AE768: mov     dword ptr [rbp+8C80h+var_8080], 5
 * 00000001800AE772: mov     dword ptr [rbp+8C80h+var_8080+4], esi
 * 00000001800AE778: call    sub_1800A8988
 * 00000001800AE77D: mov     r8, rax
 * 00000001800AE780: mov     r9d, r12d
 * 00000001800AE783: mov     edx, 160h
 * 00000001800AE788: lea     rcx, [rbp+8C80h+var_43D0]
 * 00000001800AE78F: call    sub_180075CF8
 * 00000001800AE794: nop
 * 00000001800AE795: mov     r8, rax
 * 00000001800AE798: mov     rdx, r13
 * 00000001800AE79B: lea     rcx, [rbp+8C80h+var_43F0]
 * 00000001800AE7A2: call    sub_18001C928
 * 00000001800AE7A7: nop
 * 00000001800AE7A8: lea     r8, aPixel; "/Pixel"
 * 00000001800AE7AF: mov     rdx, rax
 * 00000001800AE7B2: lea     rcx, [rbp+8C80h+var_5D50]
 * 00000001800AE7B9: call    sub_18001C87C
 * 00000001800AE7BE: movups  xmm0, [rbp+8C80h+var_8090]
 * 00000001800AE7C5: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE7CA: movups  xmm1, [rbp+8C80h+var_8080]
 * 00000001800AE7D1: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE7D6: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE7DB: mov     rcx, rax
 * 00000001800AE7DE: call    sub_180075D94
 * 00000001800AE7E3: nop
 * 00000001800AE7E4: lea     rcx, [rbp+8C80h+var_43F0]
 * 00000001800AE7EB: call    sub_180011E30
 * 00000001800AE7F0: nop
 * 00000001800AE7F1: lea     rcx, [rbp+8C80h+var_43D0]
 * 00000001800AE7F8: call    sub_180011E30
 * 00000001800AE7FD: nop
 * 00000001800AE7FE: lea     rcx, dword_1801CE444
 * 00000001800AE805: call    sub_18000D4CC
 * 00000001800AE80A: mov     rax, [rdi+rbx*8]
 * 00000001800AE80E: mov     eax, [r15+rax]
 * 00000001800AE812: cmp     cs:dword_1801CE448, eax
 * 00000001800AE818: jle     loc_1800AE8F5
 * 00000001800AE81E: lea     rcx, dword_1801CE448
 * 00000001800AE825: call    sub_18000D534
 * 00000001800AE82A: cmp     cs:dword_1801CE448, r14d
 * 00000001800AE831: jnz     loc_1800AE8F5
 * 00000001800AE837: lea     rax, unk_1801560E0
 * 00000001800AE83E: mov     qword ptr [rbp+8C80h+var_8070], rax
 * 00000001800AE845: lea     rax, unk_18015C80C
 * 00000001800AE84C: mov     qword ptr [rbp+8C80h+var_8070+8], rax
 * 00000001800AE853: mov     dword ptr [rbp+8C80h+var_8060], 5
 * 00000001800AE85D: mov     dword ptr [rbp+8C80h+var_8060+4], esi
 * 00000001800AE863: call    sub_1800A8988
 * 00000001800AE868: mov     r8, rax
 * 00000001800AE86B: mov     r9d, r12d
 * 00000001800AE86E: mov     edx, 162h
 * 00000001800AE873: lea     rcx, [rbp+8C80h+var_4370]
 * 00000001800AE87A: call    sub_180075CF8
 * 00000001800AE87F: nop
 * 00000001800AE880: mov     r8, rax
 * 00000001800AE883: mov     rdx, r13
 * 00000001800AE886: lea     rcx, [rbp+8C80h+var_4390]
 * 00000001800AE88D: call    sub_18001C928
 * 00000001800AE892: nop
 * 00000001800AE893: lea     r8, aPixel; "/Pixel"
 * 00000001800AE89A: mov     rdx, rax
 * 00000001800AE89D: lea     rcx, [rbp+8C80h+var_5D30]
 * 00000001800AE8A4: call    sub_18001C87C
 * 00000001800AE8A9: movups  xmm0, [rbp+8C80h+var_8070]
 * 00000001800AE8B0: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE8B5: movups  xmm1, [rbp+8C80h+var_8060]
 * 00000001800AE8BC: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE8C1: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE8C6: mov     rcx, rax
 * 00000001800AE8C9: call    sub_180075D94
 * 00000001800AE8CE: nop
 * 00000001800AE8CF: lea     rcx, [rbp+8C80h+var_4390]
 * 00000001800AE8D6: call    sub_180011E30
 * 00000001800AE8DB: nop
 * 00000001800AE8DC: lea     rcx, [rbp+8C80h+var_4370]
 * 00000001800AE8E3: call    sub_180011E30
 * 00000001800AE8E8: nop
 * 00000001800AE8E9: lea     rcx, dword_1801CE448
 * 00000001800AE8F0: call    sub_18000D4CC
 * 00000001800AE8F5: mov     rax, [rdi+rbx*8]
 * 00000001800AE8F9: mov     eax, [r15+rax]
 * 00000001800AE8FD: cmp     cs:dword_1801CE44C, eax
 * 00000001800AE903: jle     loc_1800AE9E0
 * 00000001800AE909: lea     rcx, dword_1801CE44C
 * 00000001800AE910: call    sub_18000D534
 * 00000001800AE915: cmp     cs:dword_1801CE44C, r14d
 * 00000001800AE91C: jnz     loc_1800AE9E0
 * 00000001800AE922: lea     rax, unk_1801662A0
 * 00000001800AE929: mov     qword ptr [rbp+8C80h+var_8050], rax
 * 00000001800AE930: lea     rax, unk_18016CB5C
 * 00000001800AE937: mov     qword ptr [rbp+8C80h+var_8050+8], rax
 * 00000001800AE93E: mov     dword ptr [rbp+8C80h+var_8040], 5
 * 00000001800AE948: mov     dword ptr [rbp+8C80h+var_8040+4], esi
 * 00000001800AE94E: call    sub_1800A8988
 * 00000001800AE953: mov     r8, rax
 * 00000001800AE956: mov     r9d, r12d
 * 00000001800AE959: mov     edx, 168h
 * 00000001800AE95E: lea     rcx, [rbp+8C80h+var_4310]
 * 00000001800AE965: call    sub_180075CF8
 * 00000001800AE96A: nop
 * 00000001800AE96B: mov     r8, rax
 * 00000001800AE96E: mov     rdx, r13
 * 00000001800AE971: lea     rcx, [rbp+8C80h+var_4330]
 * 00000001800AE978: call    sub_18001C928
 * 00000001800AE97D: nop
 * 00000001800AE97E: lea     r8, aPixel; "/Pixel"
 * 00000001800AE985: mov     rdx, rax
 * 00000001800AE988: lea     rcx, [rbp+8C80h+var_5D10]
 * 00000001800AE98F: call    sub_18001C87C
 * 00000001800AE994: movups  xmm0, [rbp+8C80h+var_8050]
 * 00000001800AE99B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AE9A0: movups  xmm1, [rbp+8C80h+var_8040]
 * 00000001800AE9A7: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AE9AC: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AE9B1: mov     rcx, rax
 * 00000001800AE9B4: call    sub_180075D94
 * 00000001800AE9B9: nop
 * 00000001800AE9BA: lea     rcx, [rbp+8C80h+var_4330]
 * 00000001800AE9C1: call    sub_180011E30
 * 00000001800AE9C6: nop
 * 00000001800AE9C7: lea     rcx, [rbp+8C80h+var_4310]
 * 00000001800AE9CE: call    sub_180011E30
 * 00000001800AE9D3: nop
 * 00000001800AE9D4: lea     rcx, dword_1801CE44C
 * 00000001800AE9DB: call    sub_18000D4CC
 * 00000001800AE9E0: mov     rax, [rdi+rbx*8]
 * 00000001800AE9E4: mov     eax, [r15+rax]
 * 00000001800AE9E8: cmp     cs:dword_1801CE450, eax
 * 00000001800AE9EE: jle     loc_1800AEACB
 * 00000001800AE9F4: lea     rcx, dword_1801CE450
 * 00000001800AE9FB: call    sub_18000D534
 * 00000001800AEA00: cmp     cs:dword_1801CE450, r14d
 * 00000001800AEA07: jnz     loc_1800AEACB
 * 00000001800AEA0D: lea     rax, unk_1801662A0
 * 00000001800AEA14: mov     qword ptr [rbp+8C80h+var_8030], rax
 * 00000001800AEA1B: lea     rax, unk_18016CB5C
 * 00000001800AEA22: mov     qword ptr [rbp+8C80h+var_8030+8], rax
 * 00000001800AEA29: mov     dword ptr [rbp+8C80h+var_8020], 5
 * 00000001800AEA33: mov     dword ptr [rbp+8C80h+var_8020+4], esi
 * 00000001800AEA39: call    sub_1800A8988
 * 00000001800AEA3E: mov     r8, rax
 * 00000001800AEA41: mov     r9d, r12d
 * 00000001800AEA44: mov     edx, 16Ah
 * 00000001800AEA49: lea     rcx, [rbp+8C80h+var_42B0]
 * 00000001800AEA50: call    sub_180075CF8
 * 00000001800AEA55: nop
 * 00000001800AEA56: mov     r8, rax
 * 00000001800AEA59: mov     rdx, r13
 * 00000001800AEA5C: lea     rcx, [rbp+8C80h+var_42D0]
 * 00000001800AEA63: call    sub_18001C928
 * 00000001800AEA68: nop
 * 00000001800AEA69: lea     r8, aPixel; "/Pixel"
 * 00000001800AEA70: mov     rdx, rax
 * 00000001800AEA73: lea     rcx, [rbp+8C80h+var_5CF0]
 * 00000001800AEA7A: call    sub_18001C87C
 * 00000001800AEA7F: movups  xmm0, [rbp+8C80h+var_8030]
 * 00000001800AEA86: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AEA8B: movups  xmm1, [rbp+8C80h+var_8020]
 * 00000001800AEA92: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AEA97: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AEA9C: mov     rcx, rax
 * 00000001800AEA9F: call    sub_180075D94
 * 00000001800AEAA4: nop
 * 00000001800AEAA5: lea     rcx, [rbp+8C80h+var_42D0]
 * 00000001800AEAAC: call    sub_180011E30
 * 00000001800AEAB1: nop
 * 00000001800AEAB2: lea     rcx, [rbp+8C80h+var_42B0]
 * 00000001800AEAB9: call    sub_180011E30
 * 00000001800AEABE: nop
 * 00000001800AEABF: lea     rcx, dword_1801CE450
 * 00000001800AEAC6: call    sub_18000D4CC
 * 00000001800AEACB: mov     rax, [rdi+rbx*8]
 * 00000001800AEACF: mov     eax, [r15+rax]
 * 00000001800AEAD3: cmp     cs:dword_1801CE454, eax
 * 00000001800AEAD9: jle     loc_1800AEBB6
 * 00000001800AEADF: lea     rcx, dword_1801CE454
 * 00000001800AEAE6: call    sub_18000D534
 * 00000001800AEAEB: cmp     cs:dword_1801CE454, r14d
 * 00000001800AEAF2: jnz     loc_1800AEBB6
 * 00000001800AEAF8: lea     rax, unk_18016CB60
 * 00000001800AEAFF: mov     qword ptr [rbp+8C80h+var_8010], rax
 * 00000001800AEB06: lea     rax, unk_180173468
 * 00000001800AEB0D: mov     qword ptr [rbp+8C80h+var_8010+8], rax
 * 00000001800AEB14: mov     dword ptr [rbp+8C80h+var_8000], 5
 * 00000001800AEB1E: mov     dword ptr [rbp+8C80h+var_8000+4], esi
 * 00000001800AEB24: call    sub_1800A8988
 * 00000001800AEB29: mov     r8, rax
 * 00000001800AEB2C: mov     r9d, r12d
 * 00000001800AEB2F: mov     edx, 170h
 * 00000001800AEB34: lea     rcx, [rbp+8C80h+var_4250]
 * 00000001800AEB3B: call    sub_180075CF8
 * 00000001800AEB40: nop
 * 00000001800AEB41: mov     r8, rax
 * 00000001800AEB44: mov     rdx, r13
 * 00000001800AEB47: lea     rcx, [rbp+8C80h+var_4270]
 * 00000001800AEB4E: call    sub_18001C928
 * 00000001800AEB53: nop
 * 00000001800AEB54: lea     r8, aPixel; "/Pixel"
 * 00000001800AEB5B: mov     rdx, rax
 * 00000001800AEB5E: lea     rcx, [rbp+8C80h+var_5CD0]
 * 00000001800AEB65: call    sub_18001C87C
 * 00000001800AEB6A: movups  xmm0, [rbp+8C80h+var_8010]
 * 00000001800AEB71: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AEB76: movups  xmm1, [rbp+8C80h+var_8000]
 * 00000001800AEB7D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AEB82: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AEB87: mov     rcx, rax
 * 00000001800AEB8A: call    sub_180075D94
 * 00000001800AEB8F: nop
 * 00000001800AEB90: lea     rcx, [rbp+8C80h+var_4270]
 * 00000001800AEB97: call    sub_180011E30
 * 00000001800AEB9C: nop
 * 00000001800AEB9D: lea     rcx, [rbp+8C80h+var_4250]
 * 00000001800AEBA4: call    sub_180011E30
 * 00000001800AEBA9: nop
 * 00000001800AEBAA: lea     rcx, dword_1801CE454
 * 00000001800AEBB1: call    sub_18000D4CC
 * 00000001800AEBB6: mov     rax, [rdi+rbx*8]
 * 00000001800AEBBA: mov     eax, [r15+rax]
 * 00000001800AEBBE: cmp     cs:dword_1801CE458, eax
 * 00000001800AEBC4: jle     loc_1800AECA1
 * 00000001800AEBCA: lea     rcx, dword_1801CE458
 * 00000001800AEBD1: call    sub_18000D534
 * 00000001800AEBD6: cmp     cs:dword_1801CE458, r14d
 * 00000001800AEBDD: jnz     loc_1800AECA1
 * 00000001800AEBE3: lea     rax, unk_18016CB60
 * 00000001800AEBEA: mov     qword ptr [rbp+8C80h+var_7FF0], rax
 * 00000001800AEBF1: lea     rax, unk_180173468
 * 00000001800AEBF8: mov     qword ptr [rbp+8C80h+var_7FF0+8], rax
 * 00000001800AEBFF: mov     dword ptr [rbp+8C80h+var_7FE0], 5
 * 00000001800AEC09: mov     dword ptr [rbp+8C80h+var_7FE0+4], esi
 * 00000001800AEC0F: call    sub_1800A8988
 * 00000001800AEC14: mov     r8, rax
 * 00000001800AEC17: mov     r9d, r12d
 * 00000001800AEC1A: mov     edx, 172h
 * 00000001800AEC1F: lea     rcx, [rbp+8C80h+var_41F0]
 * 00000001800AEC26: call    sub_180075CF8
 * 00000001800AEC2B: nop
 * 00000001800AEC2C: mov     r8, rax
 * 00000001800AEC2F: mov     rdx, r13
 * 00000001800AEC32: lea     rcx, [rbp+8C80h+var_4210]
 * 00000001800AEC39: call    sub_18001C928
 * 00000001800AEC3E: nop
 * 00000001800AEC3F: lea     r8, aPixel; "/Pixel"
 * 00000001800AEC46: mov     rdx, rax
 * 00000001800AEC49: lea     rcx, [rbp+8C80h+var_5CB0]
 * 00000001800AEC50: call    sub_18001C87C
 * 00000001800AEC55: movups  xmm0, [rbp+8C80h+var_7FF0]
 * 00000001800AEC5C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AEC61: movups  xmm1, [rbp+8C80h+var_7FE0]
 * 00000001800AEC68: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AEC6D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AEC72: mov     rcx, rax
 * 00000001800AEC75: call    sub_180075D94
 * 00000001800AEC7A: nop
 * 00000001800AEC7B: lea     rcx, [rbp+8C80h+var_4210]
 * 00000001800AEC82: call    sub_180011E30
 * 00000001800AEC87: nop
 * 00000001800AEC88: lea     rcx, [rbp+8C80h+var_41F0]
 * 00000001800AEC8F: call    sub_180011E30
 * 00000001800AEC94: nop
 * 00000001800AEC95: lea     rcx, dword_1801CE458
 * 00000001800AEC9C: call    sub_18000D4CC
 * 00000001800AECA1: mov     rax, [rdi+rbx*8]
 * 00000001800AECA5: mov     eax, [r15+rax]
 * 00000001800AECA9: cmp     cs:dword_1801CE45C, eax
 * 00000001800AECAF: jle     loc_1800AED8C
 * 00000001800AECB5: lea     rcx, dword_1801CE45C
 * 00000001800AECBC: call    sub_18000D534
 * 00000001800AECC1: cmp     cs:dword_1801CE45C, r14d
 * 00000001800AECC8: jnz     loc_1800AED8C
 * 00000001800AECCE: lea     rax, unk_18014A340
 * 00000001800AECD5: mov     qword ptr [rbp+8C80h+var_7FD0], rax
 * 00000001800AECDC: lea     rax, unk_180150DFC
 * 00000001800AECE3: mov     qword ptr [rbp+8C80h+var_7FD0+8], rax
 * 00000001800AECEA: mov     dword ptr [rbp+8C80h+var_7FC0], 5
 * 00000001800AECF4: mov     dword ptr [rbp+8C80h+var_7FC0+4], esi
 * 00000001800AECFA: call    sub_1800A8988
 * 00000001800AECFF: mov     r8, rax
 * 00000001800AED02: mov     r9d, r12d
 * 00000001800AED05: mov     edx, 178h
 * 00000001800AED0A: lea     rcx, [rbp+8C80h+var_4190]
 * 00000001800AED11: call    sub_180075CF8
 * 00000001800AED16: nop
 * 00000001800AED17: mov     r8, rax
 * 00000001800AED1A: mov     rdx, r13
 * 00000001800AED1D: lea     rcx, [rbp+8C80h+var_41B0]
 * 00000001800AED24: call    sub_18001C928
 * 00000001800AED29: nop
 * 00000001800AED2A: lea     r8, aPixel; "/Pixel"
 * 00000001800AED31: mov     rdx, rax
 * 00000001800AED34: lea     rcx, [rbp+8C80h+var_5C90]
 * 00000001800AED3B: call    sub_18001C87C
 * 00000001800AED40: movups  xmm0, [rbp+8C80h+var_7FD0]
 * 00000001800AED47: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AED4C: movups  xmm1, [rbp+8C80h+var_7FC0]
 * 00000001800AED53: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AED58: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AED5D: mov     rcx, rax
 * 00000001800AED60: call    sub_180075D94
 * 00000001800AED65: nop
 * 00000001800AED66: lea     rcx, [rbp+8C80h+var_41B0]
 * 00000001800AED6D: call    sub_180011E30
 * 00000001800AED72: nop
 * 00000001800AED73: lea     rcx, [rbp+8C80h+var_4190]
 * 00000001800AED7A: call    sub_180011E30
 * 00000001800AED7F: nop
 * 00000001800AED80: lea     rcx, dword_1801CE45C
 * 00000001800AED87: call    sub_18000D4CC
 * 00000001800AED8C: mov     rax, [rdi+rbx*8]
 * 00000001800AED90: mov     eax, [r15+rax]
 * 00000001800AED94: cmp     cs:dword_1801CE460, eax
 * 00000001800AED9A: jle     loc_1800AEE77
 * 00000001800AEDA0: lea     rcx, dword_1801CE460
 * 00000001800AEDA7: call    sub_18000D534
 * 00000001800AEDAC: cmp     cs:dword_1801CE460, r14d
 * 00000001800AEDB3: jnz     loc_1800AEE77
 * 00000001800AEDB9: lea     rax, unk_18014A340
 * 00000001800AEDC0: mov     qword ptr [rbp+8C80h+var_7FB0], rax
 * 00000001800AEDC7: lea     rax, unk_180150DFC
 * 00000001800AEDCE: mov     qword ptr [rbp+8C80h+var_7FB0+8], rax
 * 00000001800AEDD5: mov     dword ptr [rbp+8C80h+var_7FA0], 5
 * 00000001800AEDDF: mov     dword ptr [rbp+8C80h+var_7FA0+4], esi
 * 00000001800AEDE5: call    sub_1800A8988
 * 00000001800AEDEA: mov     r8, rax
 * 00000001800AEDED: mov     r9d, r12d
 * 00000001800AEDF0: mov     edx, 17Ah
 * 00000001800AEDF5: lea     rcx, [rbp+8C80h+var_4130]
 * 00000001800AEDFC: call    sub_180075CF8
 * 00000001800AEE01: nop
 * 00000001800AEE02: mov     r8, rax
 * 00000001800AEE05: mov     rdx, r13
 * 00000001800AEE08: lea     rcx, [rbp+8C80h+var_4150]
 * 00000001800AEE0F: call    sub_18001C928
 * 00000001800AEE14: nop
 * 00000001800AEE15: lea     r8, aPixel; "/Pixel"
 * 00000001800AEE1C: mov     rdx, rax
 * 00000001800AEE1F: lea     rcx, [rbp+8C80h+var_5C70]
 * 00000001800AEE26: call    sub_18001C87C
 * 00000001800AEE2B: movups  xmm0, [rbp+8C80h+var_7FB0]
 * 00000001800AEE32: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AEE37: movups  xmm1, [rbp+8C80h+var_7FA0]
 * 00000001800AEE3E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AEE43: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AEE48: mov     rcx, rax
 * 00000001800AEE4B: call    sub_180075D94
 * 00000001800AEE50: nop
 * 00000001800AEE51: lea     rcx, [rbp+8C80h+var_4150]
 * 00000001800AEE58: call    sub_180011E30
 * 00000001800AEE5D: nop
 * 00000001800AEE5E: lea     rcx, [rbp+8C80h+var_4130]
 * 00000001800AEE65: call    sub_180011E30
 * 00000001800AEE6A: nop
 * 00000001800AEE6B: lea     rcx, dword_1801CE460
 * 00000001800AEE72: call    sub_18000D4CC
 * 00000001800AEE77: mov     rax, [rdi+rbx*8]
 * 00000001800AEE7B: mov     eax, [r15+rax]
 * 00000001800AEE7F: cmp     cs:dword_1801CE464, eax
 * 00000001800AEE85: jle     loc_1800AEF62
 * 00000001800AEE8B: lea     rcx, dword_1801CE464
 * 00000001800AEE92: call    sub_18000D534
 * 00000001800AEE97: cmp     cs:dword_1801CE464, r14d
 * 00000001800AEE9E: jnz     loc_1800AEF62
 * 00000001800AEEA4: lea     rax, unk_1801560E0
 * 00000001800AEEAB: mov     qword ptr [rbp+8C80h+var_7F90], rax
 * 00000001800AEEB2: lea     rax, unk_18015C80C
 * 00000001800AEEB9: mov     qword ptr [rbp+8C80h+var_7F90+8], rax
 * 00000001800AEEC0: mov     dword ptr [rbp+8C80h+var_7F80], 5
 * 00000001800AEECA: mov     dword ptr [rbp+8C80h+var_7F80+4], esi
 * 00000001800AEED0: call    sub_1800A8988
 * 00000001800AEED5: mov     r8, rax
 * 00000001800AEED8: mov     r9d, r12d
 * 00000001800AEEDB: mov     edx, 180h
 * 00000001800AEEE0: lea     rcx, [rbp+8C80h+var_40D0]
 * 00000001800AEEE7: call    sub_180075CF8
 * 00000001800AEEEC: nop
 * 00000001800AEEED: mov     r8, rax
 * 00000001800AEEF0: mov     rdx, r13
 * 00000001800AEEF3: lea     rcx, [rbp+8C80h+var_40F0]
 * 00000001800AEEFA: call    sub_18001C928
 * 00000001800AEEFF: nop
 * 00000001800AEF00: lea     r8, aPixel; "/Pixel"
 * 00000001800AEF07: mov     rdx, rax
 * 00000001800AEF0A: lea     rcx, [rbp+8C80h+var_5C50]
 * 00000001800AEF11: call    sub_18001C87C
 * 00000001800AEF16: movups  xmm0, [rbp+8C80h+var_7F90]
 * 00000001800AEF1D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AEF22: movups  xmm1, [rbp+8C80h+var_7F80]
 * 00000001800AEF29: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AEF2E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AEF33: mov     rcx, rax
 * 00000001800AEF36: call    sub_180075D94
 * 00000001800AEF3B: nop
 * 00000001800AEF3C: lea     rcx, [rbp+8C80h+var_40F0]
 * 00000001800AEF43: call    sub_180011E30
 * 00000001800AEF48: nop
 * 00000001800AEF49: lea     rcx, [rbp+8C80h+var_40D0]
 * 00000001800AEF50: call    sub_180011E30
 * 00000001800AEF55: nop
 * 00000001800AEF56: lea     rcx, dword_1801CE464
 * 00000001800AEF5D: call    sub_18000D4CC
 * 00000001800AEF62: mov     rax, [rdi+rbx*8]
 * 00000001800AEF66: mov     eax, [r15+rax]
 * 00000001800AEF6A: cmp     cs:dword_1801CE468, eax
 * 00000001800AEF70: jle     loc_1800AF04D
 * 00000001800AEF76: lea     rcx, dword_1801CE468
 * 00000001800AEF7D: call    sub_18000D534
 * 00000001800AEF82: cmp     cs:dword_1801CE468, r14d
 * 00000001800AEF89: jnz     loc_1800AF04D
 * 00000001800AEF8F: lea     rax, unk_1801560E0
 * 00000001800AEF96: mov     qword ptr [rbp+8C80h+var_7F70], rax
 * 00000001800AEF9D: lea     rax, unk_18015C80C
 * 00000001800AEFA4: mov     qword ptr [rbp+8C80h+var_7F70+8], rax
 * 00000001800AEFAB: mov     dword ptr [rbp+8C80h+var_7F60], 5
 * 00000001800AEFB5: mov     dword ptr [rbp+8C80h+var_7F60+4], esi
 * 00000001800AEFBB: call    sub_1800A8988
 * 00000001800AEFC0: mov     r8, rax
 * 00000001800AEFC3: mov     r9d, r12d
 * 00000001800AEFC6: mov     edx, 182h
 * 00000001800AEFCB: lea     rcx, [rbp+8C80h+var_4070]
 * 00000001800AEFD2: call    sub_180075CF8
 * 00000001800AEFD7: nop
 * 00000001800AEFD8: mov     r8, rax
 * 00000001800AEFDB: mov     rdx, r13
 * 00000001800AEFDE: lea     rcx, [rbp+8C80h+var_4090]
 * 00000001800AEFE5: call    sub_18001C928
 * 00000001800AEFEA: nop
 * 00000001800AEFEB: lea     r8, aPixel; "/Pixel"
 * 00000001800AEFF2: mov     rdx, rax
 * 00000001800AEFF5: lea     rcx, [rbp+8C80h+var_5C30]
 * 00000001800AEFFC: call    sub_18001C87C
 * 00000001800AF001: movups  xmm0, [rbp+8C80h+var_7F70]
 * 00000001800AF008: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF00D: movups  xmm1, [rbp+8C80h+var_7F60]
 * 00000001800AF014: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF019: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF01E: mov     rcx, rax
 * 00000001800AF021: call    sub_180075D94
 * 00000001800AF026: nop
 * 00000001800AF027: lea     rcx, [rbp+8C80h+var_4090]
 * 00000001800AF02E: call    sub_180011E30
 * 00000001800AF033: nop
 * 00000001800AF034: lea     rcx, [rbp+8C80h+var_4070]
 * 00000001800AF03B: call    sub_180011E30
 * 00000001800AF040: nop
 * 00000001800AF041: lea     rcx, dword_1801CE468
 * 00000001800AF048: call    sub_18000D4CC
 * 00000001800AF04D: mov     rax, [rdi+rbx*8]
 * 00000001800AF051: mov     eax, [r15+rax]
 * 00000001800AF055: cmp     cs:dword_1801CE46C, eax
 * 00000001800AF05B: jle     loc_1800AF138
 * 00000001800AF061: lea     rcx, dword_1801CE46C
 * 00000001800AF068: call    sub_18000D534
 * 00000001800AF06D: cmp     cs:dword_1801CE46C, r14d
 * 00000001800AF074: jnz     loc_1800AF138
 * 00000001800AF07A: lea     rax, unk_1801662A0
 * 00000001800AF081: mov     qword ptr [rbp+8C80h+var_7F50], rax
 * 00000001800AF088: lea     rax, unk_18016CB5C
 * 00000001800AF08F: mov     qword ptr [rbp+8C80h+var_7F50+8], rax
 * 00000001800AF096: mov     dword ptr [rbp+8C80h+var_7F40], 5
 * 00000001800AF0A0: mov     dword ptr [rbp+8C80h+var_7F40+4], esi
 * 00000001800AF0A6: call    sub_1800A8988
 * 00000001800AF0AB: mov     r8, rax
 * 00000001800AF0AE: mov     r9d, r12d
 * 00000001800AF0B1: mov     edx, 188h
 * 00000001800AF0B6: lea     rcx, [rbp+8C80h+var_4010]
 * 00000001800AF0BD: call    sub_180075CF8
 * 00000001800AF0C2: nop
 * 00000001800AF0C3: mov     r8, rax
 * 00000001800AF0C6: mov     rdx, r13
 * 00000001800AF0C9: lea     rcx, [rbp+8C80h+var_4030]
 * 00000001800AF0D0: call    sub_18001C928
 * 00000001800AF0D5: nop
 * 00000001800AF0D6: lea     r8, aPixel; "/Pixel"
 * 00000001800AF0DD: mov     rdx, rax
 * 00000001800AF0E0: lea     rcx, [rbp+8C80h+var_5C10]
 * 00000001800AF0E7: call    sub_18001C87C
 * 00000001800AF0EC: movups  xmm0, [rbp+8C80h+var_7F50]
 * 00000001800AF0F3: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF0F8: movups  xmm1, [rbp+8C80h+var_7F40]
 * 00000001800AF0FF: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF104: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF109: mov     rcx, rax
 * 00000001800AF10C: call    sub_180075D94
 * 00000001800AF111: nop
 * 00000001800AF112: lea     rcx, [rbp+8C80h+var_4030]
 * 00000001800AF119: call    sub_180011E30
 * 00000001800AF11E: nop
 * 00000001800AF11F: lea     rcx, [rbp+8C80h+var_4010]
 * 00000001800AF126: call    sub_180011E30
 * 00000001800AF12B: nop
 * 00000001800AF12C: lea     rcx, dword_1801CE46C
 * 00000001800AF133: call    sub_18000D4CC
 * 00000001800AF138: mov     rax, [rdi+rbx*8]
 * 00000001800AF13C: mov     eax, [r15+rax]
 * 00000001800AF140: cmp     cs:dword_1801CE470, eax
 * 00000001800AF146: jle     loc_1800AF223
 * 00000001800AF14C: lea     rcx, dword_1801CE470
 * 00000001800AF153: call    sub_18000D534
 * 00000001800AF158: cmp     cs:dword_1801CE470, r14d
 * 00000001800AF15F: jnz     loc_1800AF223
 * 00000001800AF165: lea     rax, unk_1801662A0
 * 00000001800AF16C: mov     qword ptr [rbp+8C80h+var_7F30], rax
 * 00000001800AF173: lea     rax, unk_18016CB5C
 * 00000001800AF17A: mov     qword ptr [rbp+8C80h+var_7F30+8], rax
 * 00000001800AF181: mov     dword ptr [rbp+8C80h+var_7F20], 5
 * 00000001800AF18B: mov     dword ptr [rbp+8C80h+var_7F20+4], esi
 * 00000001800AF191: call    sub_1800A8988
 * 00000001800AF196: mov     r8, rax
 * 00000001800AF199: mov     r9d, r12d
 * 00000001800AF19C: mov     edx, 18Ah
 * 00000001800AF1A1: lea     rcx, [rbp+8C80h+var_3FB0]
 * 00000001800AF1A8: call    sub_180075CF8
 * 00000001800AF1AD: nop
 * 00000001800AF1AE: mov     r8, rax
 * 00000001800AF1B1: mov     rdx, r13
 * 00000001800AF1B4: lea     rcx, [rbp+8C80h+var_3FD0]
 * 00000001800AF1BB: call    sub_18001C928
 * 00000001800AF1C0: nop
 * 00000001800AF1C1: lea     r8, aPixel; "/Pixel"
 * 00000001800AF1C8: mov     rdx, rax
 * 00000001800AF1CB: lea     rcx, [rbp+8C80h+var_5BF0]
 * 00000001800AF1D2: call    sub_18001C87C
 * 00000001800AF1D7: movups  xmm0, [rbp+8C80h+var_7F30]
 * 00000001800AF1DE: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF1E3: movups  xmm1, [rbp+8C80h+var_7F20]
 * 00000001800AF1EA: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF1EF: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF1F4: mov     rcx, rax
 * 00000001800AF1F7: call    sub_180075D94
 * 00000001800AF1FC: nop
 * 00000001800AF1FD: lea     rcx, [rbp+8C80h+var_3FD0]
 * 00000001800AF204: call    sub_180011E30
 * 00000001800AF209: nop
 * 00000001800AF20A: lea     rcx, [rbp+8C80h+var_3FB0]
 * 00000001800AF211: call    sub_180011E30
 * 00000001800AF216: nop
 * 00000001800AF217: lea     rcx, dword_1801CE470
 * 00000001800AF21E: call    sub_18000D4CC
 * 00000001800AF223: mov     rax, [rdi+rbx*8]
 * 00000001800AF227: mov     eax, [r15+rax]
 * 00000001800AF22B: cmp     cs:dword_1801CE474, eax
 * 00000001800AF231: jle     loc_1800AF30E
 * 00000001800AF237: lea     rcx, dword_1801CE474
 * 00000001800AF23E: call    sub_18000D534
 * 00000001800AF243: cmp     cs:dword_1801CE474, r14d
 * 00000001800AF24A: jnz     loc_1800AF30E
 * 00000001800AF250: lea     rax, unk_18016CB60
 * 00000001800AF257: mov     qword ptr [rbp+8C80h+var_7F10], rax
 * 00000001800AF25E: lea     rax, unk_180173468
 * 00000001800AF265: mov     qword ptr [rbp+8C80h+var_7F10+8], rax
 * 00000001800AF26C: mov     dword ptr [rbp+8C80h+var_7F00], 5
 * 00000001800AF276: mov     dword ptr [rbp+8C80h+var_7F00+4], esi
 * 00000001800AF27C: call    sub_1800A8988
 * 00000001800AF281: mov     r8, rax
 * 00000001800AF284: mov     r9d, r12d
 * 00000001800AF287: mov     edx, 190h
 * 00000001800AF28C: lea     rcx, [rbp+8C80h+var_3F50]
 * 00000001800AF293: call    sub_180075CF8
 * 00000001800AF298: nop
 * 00000001800AF299: mov     r8, rax
 * 00000001800AF29C: mov     rdx, r13
 * 00000001800AF29F: lea     rcx, [rbp+8C80h+var_3F70]
 * 00000001800AF2A6: call    sub_18001C928
 * 00000001800AF2AB: nop
 * 00000001800AF2AC: lea     r8, aPixel; "/Pixel"
 * 00000001800AF2B3: mov     rdx, rax
 * 00000001800AF2B6: lea     rcx, [rbp+8C80h+var_5BD0]
 * 00000001800AF2BD: call    sub_18001C87C
 * 00000001800AF2C2: movups  xmm0, [rbp+8C80h+var_7F10]
 * 00000001800AF2C9: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF2CE: movups  xmm1, [rbp+8C80h+var_7F00]
 * 00000001800AF2D5: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF2DA: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF2DF: mov     rcx, rax
 * 00000001800AF2E2: call    sub_180075D94
 * 00000001800AF2E7: nop
 * 00000001800AF2E8: lea     rcx, [rbp+8C80h+var_3F70]
 * 00000001800AF2EF: call    sub_180011E30
 * 00000001800AF2F4: nop
 * 00000001800AF2F5: lea     rcx, [rbp+8C80h+var_3F50]
 * 00000001800AF2FC: call    sub_180011E30
 * 00000001800AF301: nop
 * 00000001800AF302: lea     rcx, dword_1801CE474
 * 00000001800AF309: call    sub_18000D4CC
 * 00000001800AF30E: mov     rax, [rdi+rbx*8]
 * 00000001800AF312: mov     eax, [r15+rax]
 * 00000001800AF316: cmp     cs:dword_1801CE478, eax
 * 00000001800AF31C: jle     loc_1800AF3F9
 * 00000001800AF322: lea     rcx, dword_1801CE478
 * 00000001800AF329: call    sub_18000D534
 * 00000001800AF32E: cmp     cs:dword_1801CE478, r14d
 * 00000001800AF335: jnz     loc_1800AF3F9
 * 00000001800AF33B: lea     rax, unk_18016CB60
 * 00000001800AF342: mov     qword ptr [rbp+8C80h+var_7EF0], rax
 * 00000001800AF349: lea     rax, unk_180173468
 * 00000001800AF350: mov     qword ptr [rbp+8C80h+var_7EF0+8], rax
 * 00000001800AF357: mov     dword ptr [rbp+8C80h+var_7EE0], 5
 * 00000001800AF361: mov     dword ptr [rbp+8C80h+var_7EE0+4], esi
 * 00000001800AF367: call    sub_1800A8988
 * 00000001800AF36C: mov     r8, rax
 * 00000001800AF36F: mov     r9d, r12d
 * 00000001800AF372: mov     edx, 192h
 * 00000001800AF377: lea     rcx, [rbp+8C80h+var_3EF0]
 * 00000001800AF37E: call    sub_180075CF8
 * 00000001800AF383: nop
 * 00000001800AF384: mov     r8, rax
 * 00000001800AF387: mov     rdx, r13
 * 00000001800AF38A: lea     rcx, [rbp+8C80h+var_3F10]
 * 00000001800AF391: call    sub_18001C928
 * 00000001800AF396: nop
 * 00000001800AF397: lea     r8, aPixel; "/Pixel"
 * 00000001800AF39E: mov     rdx, rax
 * 00000001800AF3A1: lea     rcx, [rbp+8C80h+var_5BB0]
 * 00000001800AF3A8: call    sub_18001C87C
 * 00000001800AF3AD: movups  xmm0, [rbp+8C80h+var_7EF0]
 * 00000001800AF3B4: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF3B9: movups  xmm1, [rbp+8C80h+var_7EE0]
 * 00000001800AF3C0: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF3C5: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF3CA: mov     rcx, rax
 * 00000001800AF3CD: call    sub_180075D94
 * 00000001800AF3D2: nop
 * 00000001800AF3D3: lea     rcx, [rbp+8C80h+var_3F10]
 * 00000001800AF3DA: call    sub_180011E30
 * 00000001800AF3DF: nop
 * 00000001800AF3E0: lea     rcx, [rbp+8C80h+var_3EF0]
 * 00000001800AF3E7: call    sub_180011E30
 * 00000001800AF3EC: nop
 * 00000001800AF3ED: lea     rcx, dword_1801CE478
 * 00000001800AF3F4: call    sub_18000D4CC
 * 00000001800AF3F9: mov     rax, [rdi+rbx*8]
 * 00000001800AF3FD: mov     eax, [r15+rax]
 * 00000001800AF401: cmp     cs:dword_1801CE47C, eax
 * 00000001800AF407: jle     loc_1800AF4E4
 * 00000001800AF40D: lea     rcx, dword_1801CE47C
 * 00000001800AF414: call    sub_18000D534
 * 00000001800AF419: cmp     cs:dword_1801CE47C, r14d
 * 00000001800AF420: jnz     loc_1800AF4E4
 * 00000001800AF426: lea     rax, unk_18014A340
 * 00000001800AF42D: mov     qword ptr [rbp+8C80h+var_7ED0], rax
 * 00000001800AF434: lea     rax, unk_180150DFC
 * 00000001800AF43B: mov     qword ptr [rbp+8C80h+var_7ED0+8], rax
 * 00000001800AF442: mov     dword ptr [rbp+8C80h+var_7EC0], 5
 * 00000001800AF44C: mov     dword ptr [rbp+8C80h+var_7EC0+4], esi
 * 00000001800AF452: call    sub_1800A8988
 * 00000001800AF457: mov     r8, rax
 * 00000001800AF45A: mov     r9d, r12d
 * 00000001800AF45D: mov     edx, 198h
 * 00000001800AF462: lea     rcx, [rbp+8C80h+var_3E90]
 * 00000001800AF469: call    sub_180075CF8
 * 00000001800AF46E: nop
 * 00000001800AF46F: mov     r8, rax
 * 00000001800AF472: mov     rdx, r13
 * 00000001800AF475: lea     rcx, [rbp+8C80h+var_3EB0]
 * 00000001800AF47C: call    sub_18001C928
 * 00000001800AF481: nop
 * 00000001800AF482: lea     r8, aPixel; "/Pixel"
 * 00000001800AF489: mov     rdx, rax
 * 00000001800AF48C: lea     rcx, [rbp+8C80h+var_5B90]
 * 00000001800AF493: call    sub_18001C87C
 * 00000001800AF498: movups  xmm0, [rbp+8C80h+var_7ED0]
 * 00000001800AF49F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF4A4: movups  xmm1, [rbp+8C80h+var_7EC0]
 * 00000001800AF4AB: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF4B0: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF4B5: mov     rcx, rax
 * 00000001800AF4B8: call    sub_180075D94
 * 00000001800AF4BD: nop
 * 00000001800AF4BE: lea     rcx, [rbp+8C80h+var_3EB0]
 * 00000001800AF4C5: call    sub_180011E30
 * 00000001800AF4CA: nop
 * 00000001800AF4CB: lea     rcx, [rbp+8C80h+var_3E90]
 * 00000001800AF4D2: call    sub_180011E30
 * 00000001800AF4D7: nop
 * 00000001800AF4D8: lea     rcx, dword_1801CE47C
 * 00000001800AF4DF: call    sub_18000D4CC
 * 00000001800AF4E4: mov     rax, [rdi+rbx*8]
 * 00000001800AF4E8: mov     eax, [r15+rax]
 * 00000001800AF4EC: cmp     cs:dword_1801CE480, eax
 * 00000001800AF4F2: jle     loc_1800AF5CF
 * 00000001800AF4F8: lea     rcx, dword_1801CE480
 * 00000001800AF4FF: call    sub_18000D534
 * 00000001800AF504: cmp     cs:dword_1801CE480, r14d
 * 00000001800AF50B: jnz     loc_1800AF5CF
 * 00000001800AF511: lea     rax, unk_18014A340
 * 00000001800AF518: mov     qword ptr [rbp+8C80h+var_7EB0], rax
 * 00000001800AF51F: lea     rax, unk_180150DFC
 * 00000001800AF526: mov     qword ptr [rbp+8C80h+var_7EB0+8], rax
 * 00000001800AF52D: mov     dword ptr [rbp+8C80h+var_7EA0], 5
 * 00000001800AF537: mov     dword ptr [rbp+8C80h+var_7EA0+4], esi
 * 00000001800AF53D: call    sub_1800A8988
 * 00000001800AF542: mov     r8, rax
 * 00000001800AF545: mov     r9d, r12d
 * 00000001800AF548: mov     edx, 19Ah
 * 00000001800AF54D: lea     rcx, [rbp+8C80h+var_3E30]
 * 00000001800AF554: call    sub_180075CF8
 * 00000001800AF559: nop
 * 00000001800AF55A: mov     r8, rax
 * 00000001800AF55D: mov     rdx, r13
 * 00000001800AF560: lea     rcx, [rbp+8C80h+var_3E50]
 * 00000001800AF567: call    sub_18001C928
 * 00000001800AF56C: nop
 * 00000001800AF56D: lea     r8, aPixel; "/Pixel"
 * 00000001800AF574: mov     rdx, rax
 * 00000001800AF577: lea     rcx, [rbp+8C80h+var_5B70]
 * 00000001800AF57E: call    sub_18001C87C
 * 00000001800AF583: movups  xmm0, [rbp+8C80h+var_7EB0]
 * 00000001800AF58A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF58F: movups  xmm1, [rbp+8C80h+var_7EA0]
 * 00000001800AF596: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF59B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF5A0: mov     rcx, rax
 * 00000001800AF5A3: call    sub_180075D94
 * 00000001800AF5A8: nop
 * 00000001800AF5A9: lea     rcx, [rbp+8C80h+var_3E50]
 * 00000001800AF5B0: call    sub_180011E30
 * 00000001800AF5B5: nop
 * 00000001800AF5B6: lea     rcx, [rbp+8C80h+var_3E30]
 * 00000001800AF5BD: call    sub_180011E30
 * 00000001800AF5C2: nop
 * 00000001800AF5C3: lea     rcx, dword_1801CE480
 * 00000001800AF5CA: call    sub_18000D4CC
 * 00000001800AF5CF: mov     rax, [rdi+rbx*8]
 * 00000001800AF5D3: mov     eax, [r15+rax]
 * 00000001800AF5D7: cmp     cs:dword_1801CE484, eax
 * 00000001800AF5DD: jle     loc_1800AF6BA
 * 00000001800AF5E3: lea     rcx, dword_1801CE484
 * 00000001800AF5EA: call    sub_18000D534
 * 00000001800AF5EF: cmp     cs:dword_1801CE484, r14d
 * 00000001800AF5F6: jnz     loc_1800AF6BA
 * 00000001800AF5FC: lea     rax, unk_1801560E0
 * 00000001800AF603: mov     qword ptr [rbp+8C80h+var_7E90], rax
 * 00000001800AF60A: lea     rax, unk_18015C80C
 * 00000001800AF611: mov     qword ptr [rbp+8C80h+var_7E90+8], rax
 * 00000001800AF618: mov     dword ptr [rbp+8C80h+var_7E80], 5
 * 00000001800AF622: mov     dword ptr [rbp+8C80h+var_7E80+4], esi
 * 00000001800AF628: call    sub_1800A8988
 * 00000001800AF62D: mov     r8, rax
 * 00000001800AF630: mov     r9d, r12d
 * 00000001800AF633: mov     edx, 1A0h
 * 00000001800AF638: lea     rcx, [rbp+8C80h+var_3DD0]
 * 00000001800AF63F: call    sub_180075CF8
 * 00000001800AF644: nop
 * 00000001800AF645: mov     r8, rax
 * 00000001800AF648: mov     rdx, r13
 * 00000001800AF64B: lea     rcx, [rbp+8C80h+var_3DF0]
 * 00000001800AF652: call    sub_18001C928
 * 00000001800AF657: nop
 * 00000001800AF658: lea     r8, aPixel; "/Pixel"
 * 00000001800AF65F: mov     rdx, rax
 * 00000001800AF662: lea     rcx, [rbp+8C80h+var_5B50]
 * 00000001800AF669: call    sub_18001C87C
 * 00000001800AF66E: movups  xmm0, [rbp+8C80h+var_7E90]
 * 00000001800AF675: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF67A: movups  xmm1, [rbp+8C80h+var_7E80]
 * 00000001800AF681: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF686: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF68B: mov     rcx, rax
 * 00000001800AF68E: call    sub_180075D94
 * 00000001800AF693: nop
 * 00000001800AF694: lea     rcx, [rbp+8C80h+var_3DF0]
 * 00000001800AF69B: call    sub_180011E30
 * 00000001800AF6A0: nop
 * 00000001800AF6A1: lea     rcx, [rbp+8C80h+var_3DD0]
 * 00000001800AF6A8: call    sub_180011E30
 * 00000001800AF6AD: nop
 * 00000001800AF6AE: lea     rcx, dword_1801CE484
 * 00000001800AF6B5: call    sub_18000D4CC
 * 00000001800AF6BA: mov     rax, [rdi+rbx*8]
 * 00000001800AF6BE: mov     eax, [r15+rax]
 * 00000001800AF6C2: cmp     cs:dword_1801CE488, eax
 * 00000001800AF6C8: jle     loc_1800AF7A5
 * 00000001800AF6CE: lea     rcx, dword_1801CE488
 * 00000001800AF6D5: call    sub_18000D534
 * 00000001800AF6DA: cmp     cs:dword_1801CE488, r14d
 * 00000001800AF6E1: jnz     loc_1800AF7A5
 * 00000001800AF6E7: lea     rax, unk_1801560E0
 * 00000001800AF6EE: mov     qword ptr [rbp+8C80h+var_7E70], rax
 * 00000001800AF6F5: lea     rax, unk_18015C80C
 * 00000001800AF6FC: mov     qword ptr [rbp+8C80h+var_7E70+8], rax
 * 00000001800AF703: mov     dword ptr [rbp+8C80h+var_7E60], 5
 * 00000001800AF70D: mov     dword ptr [rbp+8C80h+var_7E60+4], esi
 * 00000001800AF713: call    sub_1800A8988
 * 00000001800AF718: mov     r8, rax
 * 00000001800AF71B: mov     r9d, r12d
 * 00000001800AF71E: mov     edx, 1A2h
 * 00000001800AF723: lea     rcx, [rbp+8C80h+var_3D70]
 * 00000001800AF72A: call    sub_180075CF8
 * 00000001800AF72F: nop
 * 00000001800AF730: mov     r8, rax
 * 00000001800AF733: mov     rdx, r13
 * 00000001800AF736: lea     rcx, [rbp+8C80h+var_3D90]
 * 00000001800AF73D: call    sub_18001C928
 * 00000001800AF742: nop
 * 00000001800AF743: lea     r8, aPixel; "/Pixel"
 * 00000001800AF74A: mov     rdx, rax
 * 00000001800AF74D: lea     rcx, [rbp+8C80h+var_5B30]
 * 00000001800AF754: call    sub_18001C87C
 * 00000001800AF759: movups  xmm0, [rbp+8C80h+var_7E70]
 * 00000001800AF760: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF765: movups  xmm1, [rbp+8C80h+var_7E60]
 * 00000001800AF76C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF771: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF776: mov     rcx, rax
 * 00000001800AF779: call    sub_180075D94
 * 00000001800AF77E: nop
 * 00000001800AF77F: lea     rcx, [rbp+8C80h+var_3D90]
 * 00000001800AF786: call    sub_180011E30
 * 00000001800AF78B: nop
 * 00000001800AF78C: lea     rcx, [rbp+8C80h+var_3D70]
 * 00000001800AF793: call    sub_180011E30
 * 00000001800AF798: nop
 * 00000001800AF799: lea     rcx, dword_1801CE488
 * 00000001800AF7A0: call    sub_18000D4CC
 * 00000001800AF7A5: mov     rax, [rdi+rbx*8]
 * 00000001800AF7A9: mov     eax, [r15+rax]
 * 00000001800AF7AD: cmp     cs:dword_1801CE48C, eax
 * 00000001800AF7B3: jle     loc_1800AF890
 * 00000001800AF7B9: lea     rcx, dword_1801CE48C
 * 00000001800AF7C0: call    sub_18000D534
 * 00000001800AF7C5: cmp     cs:dword_1801CE48C, r14d
 * 00000001800AF7CC: jnz     loc_1800AF890
 * 00000001800AF7D2: lea     rax, unk_1801662A0
 * 00000001800AF7D9: mov     qword ptr [rbp+8C80h+var_7E50], rax
 * 00000001800AF7E0: lea     rax, unk_18016CB5C
 * 00000001800AF7E7: mov     qword ptr [rbp+8C80h+var_7E50+8], rax
 * 00000001800AF7EE: mov     dword ptr [rbp+8C80h+var_7E40], 5
 * 00000001800AF7F8: mov     dword ptr [rbp+8C80h+var_7E40+4], esi
 * 00000001800AF7FE: call    sub_1800A8988
 * 00000001800AF803: mov     r8, rax
 * 00000001800AF806: mov     r9d, r12d
 * 00000001800AF809: mov     edx, 1A8h
 * 00000001800AF80E: lea     rcx, [rbp+8C80h+var_3D10]
 * 00000001800AF815: call    sub_180075CF8
 * 00000001800AF81A: nop
 * 00000001800AF81B: mov     r8, rax
 * 00000001800AF81E: mov     rdx, r13
 * 00000001800AF821: lea     rcx, [rbp+8C80h+var_3D30]
 * 00000001800AF828: call    sub_18001C928
 * 00000001800AF82D: nop
 * 00000001800AF82E: lea     r8, aPixel; "/Pixel"
 * 00000001800AF835: mov     rdx, rax
 * 00000001800AF838: lea     rcx, [rbp+8C80h+var_5B10]
 * 00000001800AF83F: call    sub_18001C87C
 * 00000001800AF844: movups  xmm0, [rbp+8C80h+var_7E50]
 * 00000001800AF84B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF850: movups  xmm1, [rbp+8C80h+var_7E40]
 * 00000001800AF857: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF85C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF861: mov     rcx, rax
 * 00000001800AF864: call    sub_180075D94
 * 00000001800AF869: nop
 * 00000001800AF86A: lea     rcx, [rbp+8C80h+var_3D30]
 * 00000001800AF871: call    sub_180011E30
 * 00000001800AF876: nop
 * 00000001800AF877: lea     rcx, [rbp+8C80h+var_3D10]
 * 00000001800AF87E: call    sub_180011E30
 * 00000001800AF883: nop
 * 00000001800AF884: lea     rcx, dword_1801CE48C
 * 00000001800AF88B: call    sub_18000D4CC
 * 00000001800AF890: mov     rax, [rdi+rbx*8]
 * 00000001800AF894: mov     eax, [r15+rax]
 * 00000001800AF898: cmp     cs:dword_1801CE490, eax
 * 00000001800AF89E: jle     loc_1800AF97B
 * 00000001800AF8A4: lea     rcx, dword_1801CE490
 * 00000001800AF8AB: call    sub_18000D534
 * 00000001800AF8B0: cmp     cs:dword_1801CE490, r14d
 * 00000001800AF8B7: jnz     loc_1800AF97B
 * 00000001800AF8BD: lea     rax, unk_1801662A0
 * 00000001800AF8C4: mov     qword ptr [rbp+8C80h+var_7E30], rax
 * 00000001800AF8CB: lea     rax, unk_18016CB5C
 * 00000001800AF8D2: mov     qword ptr [rbp+8C80h+var_7E30+8], rax
 * 00000001800AF8D9: mov     dword ptr [rbp+8C80h+var_7E20], 5
 * 00000001800AF8E3: mov     dword ptr [rbp+8C80h+var_7E20+4], esi
 * 00000001800AF8E9: call    sub_1800A8988
 * 00000001800AF8EE: mov     r8, rax
 * 00000001800AF8F1: mov     r9d, r12d
 * 00000001800AF8F4: mov     edx, 1AAh
 * 00000001800AF8F9: lea     rcx, [rbp+8C80h+var_3CB0]
 * 00000001800AF900: call    sub_180075CF8
 * 00000001800AF905: nop
 * 00000001800AF906: mov     r8, rax
 * 00000001800AF909: mov     rdx, r13
 * 00000001800AF90C: lea     rcx, [rbp+8C80h+var_3CD0]
 * 00000001800AF913: call    sub_18001C928
 * 00000001800AF918: nop
 * 00000001800AF919: lea     r8, aPixel; "/Pixel"
 * 00000001800AF920: mov     rdx, rax
 * 00000001800AF923: lea     rcx, [rbp+8C80h+var_5AF0]
 * 00000001800AF92A: call    sub_18001C87C
 * 00000001800AF92F: movups  xmm0, [rbp+8C80h+var_7E30]
 * 00000001800AF936: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AF93B: movups  xmm1, [rbp+8C80h+var_7E20]
 * 00000001800AF942: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AF947: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AF94C: mov     rcx, rax
 * 00000001800AF94F: call    sub_180075D94
 * 00000001800AF954: nop
 * 00000001800AF955: lea     rcx, [rbp+8C80h+var_3CD0]
 * 00000001800AF95C: call    sub_180011E30
 * 00000001800AF961: nop
 * 00000001800AF962: lea     rcx, [rbp+8C80h+var_3CB0]
 * 00000001800AF969: call    sub_180011E30
 * 00000001800AF96E: nop
 * 00000001800AF96F: lea     rcx, dword_1801CE490
 * 00000001800AF976: call    sub_18000D4CC
 * 00000001800AF97B: mov     rax, [rdi+rbx*8]
 * 00000001800AF97F: mov     eax, [r15+rax]
 * 00000001800AF983: cmp     cs:dword_1801CE494, eax
 * 00000001800AF989: jle     loc_1800AFA66
 * 00000001800AF98F: lea     rcx, dword_1801CE494
 * 00000001800AF996: call    sub_18000D534
 * 00000001800AF99B: cmp     cs:dword_1801CE494, r14d
 * 00000001800AF9A2: jnz     loc_1800AFA66
 * 00000001800AF9A8: lea     rax, unk_18016CB60
 * 00000001800AF9AF: mov     qword ptr [rbp+8C80h+var_7E10], rax
 * 00000001800AF9B6: lea     rax, unk_180173468
 * 00000001800AF9BD: mov     qword ptr [rbp+8C80h+var_7E10+8], rax
 * 00000001800AF9C4: mov     dword ptr [rbp+8C80h+var_7E00], 5
 * 00000001800AF9CE: mov     dword ptr [rbp+8C80h+var_7E00+4], esi
 * 00000001800AF9D4: call    sub_1800A8988
 * 00000001800AF9D9: mov     r8, rax
 * 00000001800AF9DC: mov     r9d, r12d
 * 00000001800AF9DF: mov     edx, 1B0h
 * 00000001800AF9E4: lea     rcx, [rbp+8C80h+var_3C50]
 * 00000001800AF9EB: call    sub_180075CF8
 * 00000001800AF9F0: nop
 * 00000001800AF9F1: mov     r8, rax
 * 00000001800AF9F4: mov     rdx, r13
 * 00000001800AF9F7: lea     rcx, [rbp+8C80h+var_3C70]
 * 00000001800AF9FE: call    sub_18001C928
 * 00000001800AFA03: nop
 * 00000001800AFA04: lea     r8, aPixel; "/Pixel"
 * 00000001800AFA0B: mov     rdx, rax
 * 00000001800AFA0E: lea     rcx, [rbp+8C80h+var_5AD0]
 * 00000001800AFA15: call    sub_18001C87C
 * 00000001800AFA1A: movups  xmm0, [rbp+8C80h+var_7E10]
 * 00000001800AFA21: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AFA26: movups  xmm1, [rbp+8C80h+var_7E00]
 * 00000001800AFA2D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AFA32: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AFA37: mov     rcx, rax
 * 00000001800AFA3A: call    sub_180075D94
 * 00000001800AFA3F: nop
 * 00000001800AFA40: lea     rcx, [rbp+8C80h+var_3C70]
 * 00000001800AFA47: call    sub_180011E30
 * 00000001800AFA4C: nop
 * 00000001800AFA4D: lea     rcx, [rbp+8C80h+var_3C50]
 * 00000001800AFA54: call    sub_180011E30
 * 00000001800AFA59: nop
 * 00000001800AFA5A: lea     rcx, dword_1801CE494
 * 00000001800AFA61: call    sub_18000D4CC
 * 00000001800AFA66: mov     rax, [rdi+rbx*8]
 * 00000001800AFA6A: mov     eax, [r15+rax]
 * 00000001800AFA6E: cmp     cs:dword_1801CE498, eax
 * 00000001800AFA74: jle     loc_1800AFB51
 * 00000001800AFA7A: lea     rcx, dword_1801CE498
 * 00000001800AFA81: call    sub_18000D534
 * 00000001800AFA86: cmp     cs:dword_1801CE498, r14d
 * 00000001800AFA8D: jnz     loc_1800AFB51
 * 00000001800AFA93: lea     rax, unk_18016CB60
 * 00000001800AFA9A: mov     qword ptr [rbp+8C80h+var_7DF0], rax
 * 00000001800AFAA1: lea     rax, unk_180173468
 * 00000001800AFAA8: mov     qword ptr [rbp+8C80h+var_7DF0+8], rax
 * 00000001800AFAAF: mov     dword ptr [rbp+8C80h+var_7DE0], 5
 * 00000001800AFAB9: mov     dword ptr [rbp+8C80h+var_7DE0+4], esi
 * 00000001800AFABF: call    sub_1800A8988
 * 00000001800AFAC4: mov     r8, rax
 * 00000001800AFAC7: mov     r9d, r12d
 * 00000001800AFACA: mov     edx, 1B2h
 * 00000001800AFACF: lea     rcx, [rbp+8C80h+var_3BF0]
 * 00000001800AFAD6: call    sub_180075CF8
 * 00000001800AFADB: nop
 * 00000001800AFADC: mov     r8, rax
 * 00000001800AFADF: mov     rdx, r13
 * 00000001800AFAE2: lea     rcx, [rbp+8C80h+var_3C10]
 * 00000001800AFAE9: call    sub_18001C928
 * 00000001800AFAEE: nop
 * 00000001800AFAEF: lea     r8, aPixel; "/Pixel"
 * 00000001800AFAF6: mov     rdx, rax
 * 00000001800AFAF9: lea     rcx, [rbp+8C80h+var_5AB0]
 * 00000001800AFB00: call    sub_18001C87C
 * 00000001800AFB05: movups  xmm0, [rbp+8C80h+var_7DF0]
 * 00000001800AFB0C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AFB11: movups  xmm1, [rbp+8C80h+var_7DE0]
 * 00000001800AFB18: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AFB1D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AFB22: mov     rcx, rax
 * 00000001800AFB25: call    sub_180075D94
 * 00000001800AFB2A: nop
 * 00000001800AFB2B: lea     rcx, [rbp+8C80h+var_3C10]
 * 00000001800AFB32: call    sub_180011E30
 * 00000001800AFB37: nop
 * 00000001800AFB38: lea     rcx, [rbp+8C80h+var_3BF0]
 * 00000001800AFB3F: call    sub_180011E30
 * 00000001800AFB44: nop
 * 00000001800AFB45: lea     rcx, dword_1801CE498
 * 00000001800AFB4C: call    sub_18000D4CC
 * 00000001800AFB51: mov     rax, [rdi+rbx*8]
 * 00000001800AFB55: mov     eax, [r15+rax]
 * 00000001800AFB59: cmp     cs:dword_1801CE49C, eax
 * 00000001800AFB5F: jle     loc_1800AFC3C
 * 00000001800AFB65: lea     rcx, dword_1801CE49C
 * 00000001800AFB6C: call    sub_18000D534
 * 00000001800AFB71: cmp     cs:dword_1801CE49C, r14d
 * 00000001800AFB78: jnz     loc_1800AFC3C
 * 00000001800AFB7E: lea     rax, unk_18014A340
 * 00000001800AFB85: mov     qword ptr [rbp+8C80h+var_7DD0], rax
 * 00000001800AFB8C: lea     rax, unk_180150DFC
 * 00000001800AFB93: mov     qword ptr [rbp+8C80h+var_7DD0+8], rax
 * 00000001800AFB9A: mov     dword ptr [rbp+8C80h+var_7DC0], 5
 * 00000001800AFBA4: mov     dword ptr [rbp+8C80h+var_7DC0+4], esi
 * 00000001800AFBAA: call    sub_1800A8988
 * 00000001800AFBAF: mov     r8, rax
 * 00000001800AFBB2: mov     r9d, r12d
 * 00000001800AFBB5: mov     edx, 1B8h
 * 00000001800AFBBA: lea     rcx, [rbp+8C80h+var_3B90]
 * 00000001800AFBC1: call    sub_180075CF8
 * 00000001800AFBC6: nop
 * 00000001800AFBC7: mov     r8, rax
 * 00000001800AFBCA: mov     rdx, r13
 * 00000001800AFBCD: lea     rcx, [rbp+8C80h+var_3BB0]
 * 00000001800AFBD4: call    sub_18001C928
 * 00000001800AFBD9: nop
 * 00000001800AFBDA: lea     r8, aPixel; "/Pixel"
 * 00000001800AFBE1: mov     rdx, rax
 * 00000001800AFBE4: lea     rcx, [rbp+8C80h+var_5A90]
 * 00000001800AFBEB: call    sub_18001C87C
 * 00000001800AFBF0: movups  xmm0, [rbp+8C80h+var_7DD0]
 * 00000001800AFBF7: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AFBFC: movups  xmm1, [rbp+8C80h+var_7DC0]
 * 00000001800AFC03: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AFC08: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AFC0D: mov     rcx, rax
 * 00000001800AFC10: call    sub_180075D94
 * 00000001800AFC15: nop
 * 00000001800AFC16: lea     rcx, [rbp+8C80h+var_3BB0]
 * 00000001800AFC1D: call    sub_180011E30
 * 00000001800AFC22: nop
 * 00000001800AFC23: lea     rcx, [rbp+8C80h+var_3B90]
 * 00000001800AFC2A: call    sub_180011E30
 * 00000001800AFC2F: nop
 * 00000001800AFC30: lea     rcx, dword_1801CE49C
 * 00000001800AFC37: call    sub_18000D4CC
 * 00000001800AFC3C: mov     rax, [rdi+rbx*8]
 * 00000001800AFC40: mov     eax, [r15+rax]
 * 00000001800AFC44: cmp     cs:dword_1801CE4A0, eax
 * 00000001800AFC4A: jle     loc_1800AFD27
 * 00000001800AFC50: lea     rcx, dword_1801CE4A0
 * 00000001800AFC57: call    sub_18000D534
 * 00000001800AFC5C: cmp     cs:dword_1801CE4A0, r14d
 * 00000001800AFC63: jnz     loc_1800AFD27
 * 00000001800AFC69: lea     rax, unk_18014A340
 * 00000001800AFC70: mov     qword ptr [rbp+8C80h+var_7DB0], rax
 * 00000001800AFC77: lea     rax, unk_180150DFC
 * 00000001800AFC7E: mov     qword ptr [rbp+8C80h+var_7DB0+8], rax
 * 00000001800AFC85: mov     dword ptr [rbp+8C80h+var_7DA0], 5
 * 00000001800AFC8F: mov     dword ptr [rbp+8C80h+var_7DA0+4], esi
 * 00000001800AFC95: call    sub_1800A8988
 * 00000001800AFC9A: mov     r8, rax
 * 00000001800AFC9D: mov     r9d, r12d
 * 00000001800AFCA0: mov     edx, 1BAh
 * 00000001800AFCA5: lea     rcx, [rbp+8C80h+var_3B30]
 * 00000001800AFCAC: call    sub_180075CF8
 * 00000001800AFCB1: nop
 * 00000001800AFCB2: mov     r8, rax
 * 00000001800AFCB5: mov     rdx, r13
 * 00000001800AFCB8: lea     rcx, [rbp+8C80h+var_3B50]
 * 00000001800AFCBF: call    sub_18001C928
 * 00000001800AFCC4: nop
 * 00000001800AFCC5: lea     r8, aPixel; "/Pixel"
 * 00000001800AFCCC: mov     rdx, rax
 * 00000001800AFCCF: lea     rcx, [rbp+8C80h+var_5A70]
 * 00000001800AFCD6: call    sub_18001C87C
 * 00000001800AFCDB: movups  xmm0, [rbp+8C80h+var_7DB0]
 * 00000001800AFCE2: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AFCE7: movups  xmm1, [rbp+8C80h+var_7DA0]
 * 00000001800AFCEE: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AFCF3: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AFCF8: mov     rcx, rax
 * 00000001800AFCFB: call    sub_180075D94
 * 00000001800AFD00: nop
 * 00000001800AFD01: lea     rcx, [rbp+8C80h+var_3B50]
 * 00000001800AFD08: call    sub_180011E30
 * 00000001800AFD0D: nop
 * 00000001800AFD0E: lea     rcx, [rbp+8C80h+var_3B30]
 * 00000001800AFD15: call    sub_180011E30
 * 00000001800AFD1A: nop
 * 00000001800AFD1B: lea     rcx, dword_1801CE4A0
 * 00000001800AFD22: call    sub_18000D4CC
 * 00000001800AFD27: mov     rax, [rdi+rbx*8]
 * 00000001800AFD2B: mov     eax, [r15+rax]
 * 00000001800AFD2F: cmp     cs:dword_1801CE4A4, eax
 * 00000001800AFD35: jle     loc_1800AFE12
 * 00000001800AFD3B: lea     rcx, dword_1801CE4A4
 * 00000001800AFD42: call    sub_18000D534
 * 00000001800AFD47: cmp     cs:dword_1801CE4A4, r14d
 * 00000001800AFD4E: jnz     loc_1800AFE12
 * 00000001800AFD54: lea     rax, unk_1801560E0
 * 00000001800AFD5B: mov     qword ptr [rbp+8C80h+var_7D90], rax
 * 00000001800AFD62: lea     rax, unk_18015C80C
 * 00000001800AFD69: mov     qword ptr [rbp+8C80h+var_7D90+8], rax
 * 00000001800AFD70: mov     dword ptr [rbp+8C80h+var_7D80], 5
 * 00000001800AFD7A: mov     dword ptr [rbp+8C80h+var_7D80+4], esi
 * 00000001800AFD80: call    sub_1800A8988
 * 00000001800AFD85: mov     r8, rax
 * 00000001800AFD88: mov     r9d, r12d
 * 00000001800AFD8B: mov     edx, 1C0h
 * 00000001800AFD90: lea     rcx, [rbp+8C80h+var_3AD0]
 * 00000001800AFD97: call    sub_180075CF8
 * 00000001800AFD9C: nop
 * 00000001800AFD9D: mov     r8, rax
 * 00000001800AFDA0: mov     rdx, r13
 * 00000001800AFDA3: lea     rcx, [rbp+8C80h+var_3AF0]
 * 00000001800AFDAA: call    sub_18001C928
 * 00000001800AFDAF: nop
 * 00000001800AFDB0: lea     r8, aPixel; "/Pixel"
 * 00000001800AFDB7: mov     rdx, rax
 * 00000001800AFDBA: lea     rcx, [rbp+8C80h+var_5A50]
 * 00000001800AFDC1: call    sub_18001C87C
 * 00000001800AFDC6: movups  xmm0, [rbp+8C80h+var_7D90]
 * 00000001800AFDCD: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AFDD2: movups  xmm1, [rbp+8C80h+var_7D80]
 * 00000001800AFDD9: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AFDDE: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AFDE3: mov     rcx, rax
 * 00000001800AFDE6: call    sub_180075D94
 * 00000001800AFDEB: nop
 * 00000001800AFDEC: lea     rcx, [rbp+8C80h+var_3AF0]
 * 00000001800AFDF3: call    sub_180011E30
 * 00000001800AFDF8: nop
 * 00000001800AFDF9: lea     rcx, [rbp+8C80h+var_3AD0]
 * 00000001800AFE00: call    sub_180011E30
 * 00000001800AFE05: nop
 * 00000001800AFE06: lea     rcx, dword_1801CE4A4
 * 00000001800AFE0D: call    sub_18000D4CC
 * 00000001800AFE12: mov     rax, [rdi+rbx*8]
 * 00000001800AFE16: mov     eax, [r15+rax]
 * 00000001800AFE1A: cmp     cs:dword_1801CE4A8, eax
 * 00000001800AFE20: jle     loc_1800AFEFD
 * 00000001800AFE26: lea     rcx, dword_1801CE4A8
 * 00000001800AFE2D: call    sub_18000D534
 * 00000001800AFE32: cmp     cs:dword_1801CE4A8, r14d
 * 00000001800AFE39: jnz     loc_1800AFEFD
 * 00000001800AFE3F: lea     rax, unk_1801560E0
 * 00000001800AFE46: mov     qword ptr [rbp+8C80h+var_7D70], rax
 * 00000001800AFE4D: lea     rax, unk_18015C80C
 * 00000001800AFE54: mov     qword ptr [rbp+8C80h+var_7D70+8], rax
 * 00000001800AFE5B: mov     dword ptr [rbp+8C80h+var_7D60], 5
 * 00000001800AFE65: mov     dword ptr [rbp+8C80h+var_7D60+4], esi
 * 00000001800AFE6B: call    sub_1800A8988
 * 00000001800AFE70: mov     r8, rax
 * 00000001800AFE73: mov     r9d, r12d
 * 00000001800AFE76: mov     edx, 1C2h
 * 00000001800AFE7B: lea     rcx, [rbp+8C80h+var_3A70]
 * 00000001800AFE82: call    sub_180075CF8
 * 00000001800AFE87: nop
 * 00000001800AFE88: mov     r8, rax
 * 00000001800AFE8B: mov     rdx, r13
 * 00000001800AFE8E: lea     rcx, [rbp+8C80h+var_3A90]
 * 00000001800AFE95: call    sub_18001C928
 * 00000001800AFE9A: nop
 * 00000001800AFE9B: lea     r8, aPixel; "/Pixel"
 * 00000001800AFEA2: mov     rdx, rax
 * 00000001800AFEA5: lea     rcx, [rbp+8C80h+var_5A30]
 * 00000001800AFEAC: call    sub_18001C87C
 * 00000001800AFEB1: movups  xmm0, [rbp+8C80h+var_7D70]
 * 00000001800AFEB8: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AFEBD: movups  xmm1, [rbp+8C80h+var_7D60]
 * 00000001800AFEC4: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AFEC9: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AFECE: mov     rcx, rax
 * 00000001800AFED1: call    sub_180075D94
 * 00000001800AFED6: nop
 * 00000001800AFED7: lea     rcx, [rbp+8C80h+var_3A90]
 * 00000001800AFEDE: call    sub_180011E30
 * 00000001800AFEE3: nop
 * 00000001800AFEE4: lea     rcx, [rbp+8C80h+var_3A70]
 * 00000001800AFEEB: call    sub_180011E30
 * 00000001800AFEF0: nop
 * 00000001800AFEF1: lea     rcx, dword_1801CE4A8
 * 00000001800AFEF8: call    sub_18000D4CC
 * 00000001800AFEFD: mov     rax, [rdi+rbx*8]
 * 00000001800AFF01: mov     eax, [r15+rax]
 * 00000001800AFF05: cmp     cs:dword_1801CE4AC, eax
 * 00000001800AFF0B: jle     loc_1800AFFE8
 * 00000001800AFF11: lea     rcx, dword_1801CE4AC
 * 00000001800AFF18: call    sub_18000D534
 * 00000001800AFF1D: cmp     cs:dword_1801CE4AC, r14d
 * 00000001800AFF24: jnz     loc_1800AFFE8
 * 00000001800AFF2A: lea     rax, unk_1801662A0
 * 00000001800AFF31: mov     qword ptr [rbp+8C80h+var_7D50], rax
 * 00000001800AFF38: lea     rax, unk_18016CB5C
 * 00000001800AFF3F: mov     qword ptr [rbp+8C80h+var_7D50+8], rax
 * 00000001800AFF46: mov     dword ptr [rbp+8C80h+var_7D40], 5
 * 00000001800AFF50: mov     dword ptr [rbp+8C80h+var_7D40+4], esi
 * 00000001800AFF56: call    sub_1800A8988
 * 00000001800AFF5B: mov     r8, rax
 * 00000001800AFF5E: mov     r9d, r12d
 * 00000001800AFF61: mov     edx, 1C8h
 * 00000001800AFF66: lea     rcx, [rbp+8C80h+var_3A10]
 * 00000001800AFF6D: call    sub_180075CF8
 * 00000001800AFF72: nop
 * 00000001800AFF73: mov     r8, rax
 * 00000001800AFF76: mov     rdx, r13
 * 00000001800AFF79: lea     rcx, [rbp+8C80h+var_3A30]
 * 00000001800AFF80: call    sub_18001C928
 * 00000001800AFF85: nop
 * 00000001800AFF86: lea     r8, aPixel; "/Pixel"
 * 00000001800AFF8D: mov     rdx, rax
 * 00000001800AFF90: lea     rcx, [rbp+8C80h+var_5A10]
 * 00000001800AFF97: call    sub_18001C87C
 * 00000001800AFF9C: movups  xmm0, [rbp+8C80h+var_7D50]
 * 00000001800AFFA3: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800AFFA8: movups  xmm1, [rbp+8C80h+var_7D40]
 * 00000001800AFFAF: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800AFFB4: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800AFFB9: mov     rcx, rax
 * 00000001800AFFBC: call    sub_180075D94
 * 00000001800AFFC1: nop
 * 00000001800AFFC2: lea     rcx, [rbp+8C80h+var_3A30]
 * 00000001800AFFC9: call    sub_180011E30
 * 00000001800AFFCE: nop
 * 00000001800AFFCF: lea     rcx, [rbp+8C80h+var_3A10]
 * 00000001800AFFD6: call    sub_180011E30
 * 00000001800AFFDB: nop
 * 00000001800AFFDC: lea     rcx, dword_1801CE4AC
 * 00000001800AFFE3: call    sub_18000D4CC
 * 00000001800AFFE8: mov     rax, [rdi+rbx*8]
 * 00000001800AFFEC: mov     eax, [r15+rax]
 * 00000001800AFFF0: cmp     cs:dword_1801CE4B0, eax
 * 00000001800AFFF6: jle     loc_1800B00D3
 * 00000001800AFFFC: lea     rcx, dword_1801CE4B0
 * 00000001800B0003: call    sub_18000D534
 * 00000001800B0008: cmp     cs:dword_1801CE4B0, r14d
 * 00000001800B000F: jnz     loc_1800B00D3
 * 00000001800B0015: lea     rax, unk_1801662A0
 * 00000001800B001C: mov     qword ptr [rbp+8C80h+var_7D30], rax
 * 00000001800B0023: lea     rax, unk_18016CB5C
 * 00000001800B002A: mov     qword ptr [rbp+8C80h+var_7D30+8], rax
 * 00000001800B0031: mov     dword ptr [rbp+8C80h+var_7D20], 5
 * 00000001800B003B: mov     dword ptr [rbp+8C80h+var_7D20+4], esi
 * 00000001800B0041: call    sub_1800A8988
 * 00000001800B0046: mov     r8, rax
 * 00000001800B0049: mov     r9d, r12d
 * 00000001800B004C: mov     edx, 1CAh
 * 00000001800B0051: lea     rcx, [rbp+8C80h+var_39B0]
 * 00000001800B0058: call    sub_180075CF8
 * 00000001800B005D: nop
 * 00000001800B005E: mov     r8, rax
 * 00000001800B0061: mov     rdx, r13
 * 00000001800B0064: lea     rcx, [rbp+8C80h+var_39D0]
 * 00000001800B006B: call    sub_18001C928
 * 00000001800B0070: nop
 * 00000001800B0071: lea     r8, aPixel; "/Pixel"
 * 00000001800B0078: mov     rdx, rax
 * 00000001800B007B: lea     rcx, [rbp+8C80h+var_59F0]
 * 00000001800B0082: call    sub_18001C87C
 * 00000001800B0087: movups  xmm0, [rbp+8C80h+var_7D30]
 * 00000001800B008E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0093: movups  xmm1, [rbp+8C80h+var_7D20]
 * 00000001800B009A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B009F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B00A4: mov     rcx, rax
 * 00000001800B00A7: call    sub_180075D94
 * 00000001800B00AC: nop
 * 00000001800B00AD: lea     rcx, [rbp+8C80h+var_39D0]
 * 00000001800B00B4: call    sub_180011E30
 * 00000001800B00B9: nop
 * 00000001800B00BA: lea     rcx, [rbp+8C80h+var_39B0]
 * 00000001800B00C1: call    sub_180011E30
 * 00000001800B00C6: nop
 * 00000001800B00C7: lea     rcx, dword_1801CE4B0
 * 00000001800B00CE: call    sub_18000D4CC
 * 00000001800B00D3: mov     rax, [rdi+rbx*8]
 * 00000001800B00D7: mov     eax, [r15+rax]
 * 00000001800B00DB: cmp     cs:dword_1801CE4B4, eax
 * 00000001800B00E1: jle     loc_1800B01BE
 * 00000001800B00E7: lea     rcx, dword_1801CE4B4
 * 00000001800B00EE: call    sub_18000D534
 * 00000001800B00F3: cmp     cs:dword_1801CE4B4, r14d
 * 00000001800B00FA: jnz     loc_1800B01BE
 * 00000001800B0100: lea     rax, unk_18016CB60
 * 00000001800B0107: mov     qword ptr [rbp+8C80h+var_7D10], rax
 * 00000001800B010E: lea     rax, unk_180173468
 * 00000001800B0115: mov     qword ptr [rbp+8C80h+var_7D10+8], rax
 * 00000001800B011C: mov     dword ptr [rbp+8C80h+var_7D00], 5
 * 00000001800B0126: mov     dword ptr [rbp+8C80h+var_7D00+4], esi
 * 00000001800B012C: call    sub_1800A8988
 * 00000001800B0131: mov     r8, rax
 * 00000001800B0134: mov     r9d, r12d
 * 00000001800B0137: mov     edx, 1D0h
 * 00000001800B013C: lea     rcx, [rbp+8C80h+var_3950]
 * 00000001800B0143: call    sub_180075CF8
 * 00000001800B0148: nop
 * 00000001800B0149: mov     r8, rax
 * 00000001800B014C: mov     rdx, r13
 * 00000001800B014F: lea     rcx, [rbp+8C80h+var_3970]
 * 00000001800B0156: call    sub_18001C928
 * 00000001800B015B: nop
 * 00000001800B015C: lea     r8, aPixel; "/Pixel"
 * 00000001800B0163: mov     rdx, rax
 * 00000001800B0166: lea     rcx, [rbp+8C80h+var_59D0]
 * 00000001800B016D: call    sub_18001C87C
 * 00000001800B0172: movups  xmm0, [rbp+8C80h+var_7D10]
 * 00000001800B0179: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B017E: movups  xmm1, [rbp+8C80h+var_7D00]
 * 00000001800B0185: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B018A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B018F: mov     rcx, rax
 * 00000001800B0192: call    sub_180075D94
 * 00000001800B0197: nop
 * 00000001800B0198: lea     rcx, [rbp+8C80h+var_3970]
 * 00000001800B019F: call    sub_180011E30
 * 00000001800B01A4: nop
 * 00000001800B01A5: lea     rcx, [rbp+8C80h+var_3950]
 * 00000001800B01AC: call    sub_180011E30
 * 00000001800B01B1: nop
 * 00000001800B01B2: lea     rcx, dword_1801CE4B4
 * 00000001800B01B9: call    sub_18000D4CC
 * 00000001800B01BE: mov     rax, [rdi+rbx*8]
 * 00000001800B01C2: mov     eax, [r15+rax]
 * 00000001800B01C6: cmp     cs:dword_1801CE4B8, eax
 * 00000001800B01CC: jle     loc_1800B02A9
 * 00000001800B01D2: lea     rcx, dword_1801CE4B8
 * 00000001800B01D9: call    sub_18000D534
 * 00000001800B01DE: cmp     cs:dword_1801CE4B8, r14d
 * 00000001800B01E5: jnz     loc_1800B02A9
 * 00000001800B01EB: lea     rax, unk_18016CB60
 * 00000001800B01F2: mov     qword ptr [rbp+8C80h+var_7CF0], rax
 * 00000001800B01F9: lea     rax, unk_180173468
 * 00000001800B0200: mov     qword ptr [rbp+8C80h+var_7CF0+8], rax
 * 00000001800B0207: mov     dword ptr [rbp+8C80h+var_7CE0], 5
 * 00000001800B0211: mov     dword ptr [rbp+8C80h+var_7CE0+4], esi
 * 00000001800B0217: call    sub_1800A8988
 * 00000001800B021C: mov     r8, rax
 * 00000001800B021F: mov     r9d, r12d
 * 00000001800B0222: mov     edx, 1D2h
 * 00000001800B0227: lea     rcx, [rbp+8C80h+var_38F0]
 * 00000001800B022E: call    sub_180075CF8
 * 00000001800B0233: nop
 * 00000001800B0234: mov     r8, rax
 * 00000001800B0237: mov     rdx, r13
 * 00000001800B023A: lea     rcx, [rbp+8C80h+var_3910]
 * 00000001800B0241: call    sub_18001C928
 * 00000001800B0246: nop
 * 00000001800B0247: lea     r8, aPixel; "/Pixel"
 * 00000001800B024E: mov     rdx, rax
 * 00000001800B0251: lea     rcx, [rbp+8C80h+var_59B0]
 * 00000001800B0258: call    sub_18001C87C
 * 00000001800B025D: movups  xmm0, [rbp+8C80h+var_7CF0]
 * 00000001800B0264: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0269: movups  xmm1, [rbp+8C80h+var_7CE0]
 * 00000001800B0270: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0275: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B027A: mov     rcx, rax
 * 00000001800B027D: call    sub_180075D94
 * 00000001800B0282: nop
 * 00000001800B0283: lea     rcx, [rbp+8C80h+var_3910]
 * 00000001800B028A: call    sub_180011E30
 * 00000001800B028F: nop
 * 00000001800B0290: lea     rcx, [rbp+8C80h+var_38F0]
 * 00000001800B0297: call    sub_180011E30
 * 00000001800B029C: nop
 * 00000001800B029D: lea     rcx, dword_1801CE4B8
 * 00000001800B02A4: call    sub_18000D4CC
 * 00000001800B02A9: mov     rax, [rdi+rbx*8]
 * 00000001800B02AD: mov     eax, [r15+rax]
 * 00000001800B02B1: cmp     cs:dword_1801CE4BC, eax
 * 00000001800B02B7: jle     loc_1800B0394
 * 00000001800B02BD: lea     rcx, dword_1801CE4BC
 * 00000001800B02C4: call    sub_18000D534
 * 00000001800B02C9: cmp     cs:dword_1801CE4BC, r14d
 * 00000001800B02D0: jnz     loc_1800B0394
 * 00000001800B02D6: lea     rax, unk_18014A340
 * 00000001800B02DD: mov     qword ptr [rbp+8C80h+var_7CD0], rax
 * 00000001800B02E4: lea     rax, unk_180150DFC
 * 00000001800B02EB: mov     qword ptr [rbp+8C80h+var_7CD0+8], rax
 * 00000001800B02F2: mov     dword ptr [rbp+8C80h+var_7CC0], 5
 * 00000001800B02FC: mov     dword ptr [rbp+8C80h+var_7CC0+4], esi
 * 00000001800B0302: call    sub_1800A8988
 * 00000001800B0307: mov     r8, rax
 * 00000001800B030A: mov     r9d, r12d
 * 00000001800B030D: mov     edx, 1D8h
 * 00000001800B0312: lea     rcx, [rbp+8C80h+var_3890]
 * 00000001800B0319: call    sub_180075CF8
 * 00000001800B031E: nop
 * 00000001800B031F: mov     r8, rax
 * 00000001800B0322: mov     rdx, r13
 * 00000001800B0325: lea     rcx, [rbp+8C80h+var_38B0]
 * 00000001800B032C: call    sub_18001C928
 * 00000001800B0331: nop
 * 00000001800B0332: lea     r8, aPixel; "/Pixel"
 * 00000001800B0339: mov     rdx, rax
 * 00000001800B033C: lea     rcx, [rbp+8C80h+var_5990]
 * 00000001800B0343: call    sub_18001C87C
 * 00000001800B0348: movups  xmm0, [rbp+8C80h+var_7CD0]
 * 00000001800B034F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0354: movups  xmm1, [rbp+8C80h+var_7CC0]
 * 00000001800B035B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0360: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0365: mov     rcx, rax
 * 00000001800B0368: call    sub_180075D94
 * 00000001800B036D: nop
 * 00000001800B036E: lea     rcx, [rbp+8C80h+var_38B0]
 * 00000001800B0375: call    sub_180011E30
 * 00000001800B037A: nop
 * 00000001800B037B: lea     rcx, [rbp+8C80h+var_3890]
 * 00000001800B0382: call    sub_180011E30
 * 00000001800B0387: nop
 * 00000001800B0388: lea     rcx, dword_1801CE4BC
 * 00000001800B038F: call    sub_18000D4CC
 * 00000001800B0394: mov     rax, [rdi+rbx*8]
 * 00000001800B0398: mov     eax, [r15+rax]
 * 00000001800B039C: cmp     cs:dword_1801CE4C0, eax
 * 00000001800B03A2: jle     loc_1800B047F
 * 00000001800B03A8: lea     rcx, dword_1801CE4C0
 * 00000001800B03AF: call    sub_18000D534
 * 00000001800B03B4: cmp     cs:dword_1801CE4C0, r14d
 * 00000001800B03BB: jnz     loc_1800B047F
 * 00000001800B03C1: lea     rax, unk_18014A340
 * 00000001800B03C8: mov     qword ptr [rbp+8C80h+var_7CB0], rax
 * 00000001800B03CF: lea     rax, unk_180150DFC
 * 00000001800B03D6: mov     qword ptr [rbp+8C80h+var_7CB0+8], rax
 * 00000001800B03DD: mov     dword ptr [rbp+8C80h+var_7CA0], 5
 * 00000001800B03E7: mov     dword ptr [rbp+8C80h+var_7CA0+4], esi
 * 00000001800B03ED: call    sub_1800A8988
 * 00000001800B03F2: mov     r8, rax
 * 00000001800B03F5: mov     r9d, r12d
 * 00000001800B03F8: mov     edx, 1DAh
 * 00000001800B03FD: lea     rcx, [rbp+8C80h+var_3830]
 * 00000001800B0404: call    sub_180075CF8
 * 00000001800B0409: nop
 * 00000001800B040A: mov     r8, rax
 * 00000001800B040D: mov     rdx, r13
 * 00000001800B0410: lea     rcx, [rbp+8C80h+var_3850]
 * 00000001800B0417: call    sub_18001C928
 * 00000001800B041C: nop
 * 00000001800B041D: lea     r8, aPixel; "/Pixel"
 * 00000001800B0424: mov     rdx, rax
 * 00000001800B0427: lea     rcx, [rbp+8C80h+var_5970]
 * 00000001800B042E: call    sub_18001C87C
 * 00000001800B0433: movups  xmm0, [rbp+8C80h+var_7CB0]
 * 00000001800B043A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B043F: movups  xmm1, [rbp+8C80h+var_7CA0]
 * 00000001800B0446: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B044B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0450: mov     rcx, rax
 * 00000001800B0453: call    sub_180075D94
 * 00000001800B0458: nop
 * 00000001800B0459: lea     rcx, [rbp+8C80h+var_3850]
 * 00000001800B0460: call    sub_180011E30
 * 00000001800B0465: nop
 * 00000001800B0466: lea     rcx, [rbp+8C80h+var_3830]
 * 00000001800B046D: call    sub_180011E30
 * 00000001800B0472: nop
 * 00000001800B0473: lea     rcx, dword_1801CE4C0
 * 00000001800B047A: call    sub_18000D4CC
 * 00000001800B047F: mov     rax, [rdi+rbx*8]
 * 00000001800B0483: mov     eax, [r15+rax]
 * 00000001800B0487: cmp     cs:dword_1801CE4C4, eax
 * 00000001800B048D: jle     loc_1800B056A
 * 00000001800B0493: lea     rcx, dword_1801CE4C4
 * 00000001800B049A: call    sub_18000D534
 * 00000001800B049F: cmp     cs:dword_1801CE4C4, r14d
 * 00000001800B04A6: jnz     loc_1800B056A
 * 00000001800B04AC: lea     rax, unk_1801560E0
 * 00000001800B04B3: mov     qword ptr [rbp+8C80h+var_7C90], rax
 * 00000001800B04BA: lea     rax, unk_18015C80C
 * 00000001800B04C1: mov     qword ptr [rbp+8C80h+var_7C90+8], rax
 * 00000001800B04C8: mov     dword ptr [rbp+8C80h+var_7C80], 5
 * 00000001800B04D2: mov     dword ptr [rbp+8C80h+var_7C80+4], esi
 * 00000001800B04D8: call    sub_1800A8988
 * 00000001800B04DD: mov     r8, rax
 * 00000001800B04E0: mov     r9d, r12d
 * 00000001800B04E3: mov     edx, 1E0h
 * 00000001800B04E8: lea     rcx, [rbp+8C80h+var_37D0]
 * 00000001800B04EF: call    sub_180075CF8
 * 00000001800B04F4: nop
 * 00000001800B04F5: mov     r8, rax
 * 00000001800B04F8: mov     rdx, r13
 * 00000001800B04FB: lea     rcx, [rbp+8C80h+var_37F0]
 * 00000001800B0502: call    sub_18001C928
 * 00000001800B0507: nop
 * 00000001800B0508: lea     r8, aPixel; "/Pixel"
 * 00000001800B050F: mov     rdx, rax
 * 00000001800B0512: lea     rcx, [rbp+8C80h+var_5950]
 * 00000001800B0519: call    sub_18001C87C
 * 00000001800B051E: movups  xmm0, [rbp+8C80h+var_7C90]
 * 00000001800B0525: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B052A: movups  xmm1, [rbp+8C80h+var_7C80]
 * 00000001800B0531: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0536: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B053B: mov     rcx, rax
 * 00000001800B053E: call    sub_180075D94
 * 00000001800B0543: nop
 * 00000001800B0544: lea     rcx, [rbp+8C80h+var_37F0]
 * 00000001800B054B: call    sub_180011E30
 * 00000001800B0550: nop
 * 00000001800B0551: lea     rcx, [rbp+8C80h+var_37D0]
 * 00000001800B0558: call    sub_180011E30
 * 00000001800B055D: nop
 * 00000001800B055E: lea     rcx, dword_1801CE4C4
 * 00000001800B0565: call    sub_18000D4CC
 * 00000001800B056A: mov     rax, [rdi+rbx*8]
 * 00000001800B056E: mov     eax, [r15+rax]
 * 00000001800B0572: cmp     cs:dword_1801CE4C8, eax
 * 00000001800B0578: jle     loc_1800B0655
 * 00000001800B057E: lea     rcx, dword_1801CE4C8
 * 00000001800B0585: call    sub_18000D534
 * 00000001800B058A: cmp     cs:dword_1801CE4C8, r14d
 * 00000001800B0591: jnz     loc_1800B0655
 * 00000001800B0597: lea     rax, unk_1801560E0
 * 00000001800B059E: mov     qword ptr [rbp+8C80h+var_7C70], rax
 * 00000001800B05A5: lea     rax, unk_18015C80C
 * 00000001800B05AC: mov     qword ptr [rbp+8C80h+var_7C70+8], rax
 * 00000001800B05B3: mov     dword ptr [rbp+8C80h+var_7C60], 5
 * 00000001800B05BD: mov     dword ptr [rbp+8C80h+var_7C60+4], esi
 * 00000001800B05C3: call    sub_1800A8988
 * 00000001800B05C8: mov     r8, rax
 * 00000001800B05CB: mov     r9d, r12d
 * 00000001800B05CE: mov     edx, 1E2h
 * 00000001800B05D3: lea     rcx, [rbp+8C80h+var_3770]
 * 00000001800B05DA: call    sub_180075CF8
 * 00000001800B05DF: nop
 * 00000001800B05E0: mov     r8, rax
 * 00000001800B05E3: mov     rdx, r13
 * 00000001800B05E6: lea     rcx, [rbp+8C80h+var_3790]
 * 00000001800B05ED: call    sub_18001C928
 * 00000001800B05F2: nop
 * 00000001800B05F3: lea     r8, aPixel; "/Pixel"
 * 00000001800B05FA: mov     rdx, rax
 * 00000001800B05FD: lea     rcx, [rbp+8C80h+var_5930]
 * 00000001800B0604: call    sub_18001C87C
 * 00000001800B0609: movups  xmm0, [rbp+8C80h+var_7C70]
 * 00000001800B0610: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0615: movups  xmm1, [rbp+8C80h+var_7C60]
 * 00000001800B061C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0621: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0626: mov     rcx, rax
 * 00000001800B0629: call    sub_180075D94
 * 00000001800B062E: nop
 * 00000001800B062F: lea     rcx, [rbp+8C80h+var_3790]
 * 00000001800B0636: call    sub_180011E30
 * 00000001800B063B: nop
 * 00000001800B063C: lea     rcx, [rbp+8C80h+var_3770]
 * 00000001800B0643: call    sub_180011E30
 * 00000001800B0648: nop
 * 00000001800B0649: lea     rcx, dword_1801CE4C8
 * 00000001800B0650: call    sub_18000D4CC
 * 00000001800B0655: mov     rax, [rdi+rbx*8]
 * 00000001800B0659: mov     eax, [r15+rax]
 * 00000001800B065D: cmp     cs:dword_1801CE4CC, eax
 * 00000001800B0663: jle     loc_1800B0740
 * 00000001800B0669: lea     rcx, dword_1801CE4CC
 * 00000001800B0670: call    sub_18000D534
 * 00000001800B0675: cmp     cs:dword_1801CE4CC, r14d
 * 00000001800B067C: jnz     loc_1800B0740
 * 00000001800B0682: lea     rax, unk_1801662A0
 * 00000001800B0689: mov     qword ptr [rbp+8C80h+var_7C50], rax
 * 00000001800B0690: lea     rax, unk_18016CB5C
 * 00000001800B0697: mov     qword ptr [rbp+8C80h+var_7C50+8], rax
 * 00000001800B069E: mov     dword ptr [rbp+8C80h+var_7C40], 5
 * 00000001800B06A8: mov     dword ptr [rbp+8C80h+var_7C40+4], esi
 * 00000001800B06AE: call    sub_1800A8988
 * 00000001800B06B3: mov     r8, rax
 * 00000001800B06B6: mov     r9d, r12d
 * 00000001800B06B9: mov     edx, 1E8h
 * 00000001800B06BE: lea     rcx, [rbp+8C80h+var_3710]
 * 00000001800B06C5: call    sub_180075CF8
 * 00000001800B06CA: nop
 * 00000001800B06CB: mov     r8, rax
 * 00000001800B06CE: mov     rdx, r13
 * 00000001800B06D1: lea     rcx, [rbp+8C80h+var_3730]
 * 00000001800B06D8: call    sub_18001C928
 * 00000001800B06DD: nop
 * 00000001800B06DE: lea     r8, aPixel; "/Pixel"
 * 00000001800B06E5: mov     rdx, rax
 * 00000001800B06E8: lea     rcx, [rbp+8C80h+var_5910]
 * 00000001800B06EF: call    sub_18001C87C
 * 00000001800B06F4: movups  xmm0, [rbp+8C80h+var_7C50]
 * 00000001800B06FB: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0700: movups  xmm1, [rbp+8C80h+var_7C40]
 * 00000001800B0707: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B070C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0711: mov     rcx, rax
 * 00000001800B0714: call    sub_180075D94
 * 00000001800B0719: nop
 * 00000001800B071A: lea     rcx, [rbp+8C80h+var_3730]
 * 00000001800B0721: call    sub_180011E30
 * 00000001800B0726: nop
 * 00000001800B0727: lea     rcx, [rbp+8C80h+var_3710]
 * 00000001800B072E: call    sub_180011E30
 * 00000001800B0733: nop
 * 00000001800B0734: lea     rcx, dword_1801CE4CC
 * 00000001800B073B: call    sub_18000D4CC
 * 00000001800B0740: mov     rax, [rdi+rbx*8]
 * 00000001800B0744: mov     eax, [r15+rax]
 * 00000001800B0748: cmp     cs:dword_1801CE4D0, eax
 * 00000001800B074E: jle     loc_1800B082B
 * 00000001800B0754: lea     rcx, dword_1801CE4D0
 * 00000001800B075B: call    sub_18000D534
 * 00000001800B0760: cmp     cs:dword_1801CE4D0, r14d
 * 00000001800B0767: jnz     loc_1800B082B
 * 00000001800B076D: lea     rax, unk_1801662A0
 * 00000001800B0774: mov     qword ptr [rbp+8C80h+var_7C30], rax
 * 00000001800B077B: lea     rax, unk_18016CB5C
 * 00000001800B0782: mov     qword ptr [rbp+8C80h+var_7C30+8], rax
 * 00000001800B0789: mov     dword ptr [rbp+8C80h+var_7C20], 5
 * 00000001800B0793: mov     dword ptr [rbp+8C80h+var_7C20+4], esi
 * 00000001800B0799: call    sub_1800A8988
 * 00000001800B079E: mov     r8, rax
 * 00000001800B07A1: mov     r9d, r12d
 * 00000001800B07A4: mov     edx, 1EAh
 * 00000001800B07A9: lea     rcx, [rbp+8C80h+var_36B0]
 * 00000001800B07B0: call    sub_180075CF8
 * 00000001800B07B5: nop
 * 00000001800B07B6: mov     r8, rax
 * 00000001800B07B9: mov     rdx, r13
 * 00000001800B07BC: lea     rcx, [rbp+8C80h+var_36D0]
 * 00000001800B07C3: call    sub_18001C928
 * 00000001800B07C8: nop
 * 00000001800B07C9: lea     r8, aPixel; "/Pixel"
 * 00000001800B07D0: mov     rdx, rax
 * 00000001800B07D3: lea     rcx, [rbp+8C80h+var_58F0]
 * 00000001800B07DA: call    sub_18001C87C
 * 00000001800B07DF: movups  xmm0, [rbp+8C80h+var_7C30]
 * 00000001800B07E6: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B07EB: movups  xmm1, [rbp+8C80h+var_7C20]
 * 00000001800B07F2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B07F7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B07FC: mov     rcx, rax
 * 00000001800B07FF: call    sub_180075D94
 * 00000001800B0804: nop
 * 00000001800B0805: lea     rcx, [rbp+8C80h+var_36D0]
 * 00000001800B080C: call    sub_180011E30
 * 00000001800B0811: nop
 * 00000001800B0812: lea     rcx, [rbp+8C80h+var_36B0]
 * 00000001800B0819: call    sub_180011E30
 * 00000001800B081E: nop
 * 00000001800B081F: lea     rcx, dword_1801CE4D0
 * 00000001800B0826: call    sub_18000D4CC
 * 00000001800B082B: mov     rax, [rdi+rbx*8]
 * 00000001800B082F: mov     eax, [r15+rax]
 * 00000001800B0833: cmp     cs:dword_1801CE4D4, eax
 * 00000001800B0839: jle     loc_1800B0916
 * 00000001800B083F: lea     rcx, dword_1801CE4D4
 * 00000001800B0846: call    sub_18000D534
 * 00000001800B084B: cmp     cs:dword_1801CE4D4, r14d
 * 00000001800B0852: jnz     loc_1800B0916
 * 00000001800B0858: lea     rax, unk_18016CB60
 * 00000001800B085F: mov     qword ptr [rbp+8C80h+var_7C10], rax
 * 00000001800B0866: lea     rax, unk_180173468
 * 00000001800B086D: mov     qword ptr [rbp+8C80h+var_7C10+8], rax
 * 00000001800B0874: mov     dword ptr [rbp+8C80h+var_7C00], 5
 * 00000001800B087E: mov     dword ptr [rbp+8C80h+var_7C00+4], esi
 * 00000001800B0884: call    sub_1800A8988
 * 00000001800B0889: mov     r8, rax
 * 00000001800B088C: mov     r9d, r12d
 * 00000001800B088F: mov     edx, 1F0h
 * 00000001800B0894: lea     rcx, [rbp+8C80h+var_3650]
 * 00000001800B089B: call    sub_180075CF8
 * 00000001800B08A0: nop
 * 00000001800B08A1: mov     r8, rax
 * 00000001800B08A4: mov     rdx, r13
 * 00000001800B08A7: lea     rcx, [rbp+8C80h+var_3670]
 * 00000001800B08AE: call    sub_18001C928
 * 00000001800B08B3: nop
 * 00000001800B08B4: lea     r8, aPixel; "/Pixel"
 * 00000001800B08BB: mov     rdx, rax
 * 00000001800B08BE: lea     rcx, [rbp+8C80h+var_58D0]
 * 00000001800B08C5: call    sub_18001C87C
 * 00000001800B08CA: movups  xmm0, [rbp+8C80h+var_7C10]
 * 00000001800B08D1: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B08D6: movups  xmm1, [rbp+8C80h+var_7C00]
 * 00000001800B08DD: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B08E2: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B08E7: mov     rcx, rax
 * 00000001800B08EA: call    sub_180075D94
 * 00000001800B08EF: nop
 * 00000001800B08F0: lea     rcx, [rbp+8C80h+var_3670]
 * 00000001800B08F7: call    sub_180011E30
 * 00000001800B08FC: nop
 * 00000001800B08FD: lea     rcx, [rbp+8C80h+var_3650]
 * 00000001800B0904: call    sub_180011E30
 * 00000001800B0909: nop
 * 00000001800B090A: lea     rcx, dword_1801CE4D4
 * 00000001800B0911: call    sub_18000D4CC
 * 00000001800B0916: mov     rax, [rdi+rbx*8]
 * 00000001800B091A: mov     eax, [r15+rax]
 * 00000001800B091E: cmp     cs:dword_1801CE4D8, eax
 * 00000001800B0924: jle     loc_1800B0A01
 * 00000001800B092A: lea     rcx, dword_1801CE4D8
 * 00000001800B0931: call    sub_18000D534
 * 00000001800B0936: cmp     cs:dword_1801CE4D8, r14d
 * 00000001800B093D: jnz     loc_1800B0A01
 * 00000001800B0943: lea     rax, unk_18016CB60
 * 00000001800B094A: mov     qword ptr [rbp+8C80h+var_7BF0], rax
 * 00000001800B0951: lea     rax, unk_180173468
 * 00000001800B0958: mov     qword ptr [rbp+8C80h+var_7BF0+8], rax
 * 00000001800B095F: mov     dword ptr [rbp+8C80h+var_7BE0], 5
 * 00000001800B0969: mov     dword ptr [rbp+8C80h+var_7BE0+4], esi
 * 00000001800B096F: call    sub_1800A8988
 * 00000001800B0974: mov     r8, rax
 * 00000001800B0977: mov     r9d, r12d
 * 00000001800B097A: mov     edx, 1F2h
 * 00000001800B097F: lea     rcx, [rbp+8C80h+var_35F0]
 * 00000001800B0986: call    sub_180075CF8
 * 00000001800B098B: nop
 * 00000001800B098C: mov     r8, rax
 * 00000001800B098F: mov     rdx, r13
 * 00000001800B0992: lea     rcx, [rbp+8C80h+var_3610]
 * 00000001800B0999: call    sub_18001C928
 * 00000001800B099E: nop
 * 00000001800B099F: lea     r8, aPixel; "/Pixel"
 * 00000001800B09A6: mov     rdx, rax
 * 00000001800B09A9: lea     rcx, [rbp+8C80h+var_58B0]
 * 00000001800B09B0: call    sub_18001C87C
 * 00000001800B09B5: movups  xmm0, [rbp+8C80h+var_7BF0]
 * 00000001800B09BC: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B09C1: movups  xmm1, [rbp+8C80h+var_7BE0]
 * 00000001800B09C8: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B09CD: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B09D2: mov     rcx, rax
 * 00000001800B09D5: call    sub_180075D94
 * 00000001800B09DA: nop
 * 00000001800B09DB: lea     rcx, [rbp+8C80h+var_3610]
 * 00000001800B09E2: call    sub_180011E30
 * 00000001800B09E7: nop
 * 00000001800B09E8: lea     rcx, [rbp+8C80h+var_35F0]
 * 00000001800B09EF: call    sub_180011E30
 * 00000001800B09F4: nop
 * 00000001800B09F5: lea     rcx, dword_1801CE4D8
 * 00000001800B09FC: call    sub_18000D4CC
 * 00000001800B0A01: mov     rax, [rdi+rbx*8]
 * 00000001800B0A05: mov     eax, [r15+rax]
 * 00000001800B0A09: cmp     cs:dword_1801CE4DC, eax
 * 00000001800B0A0F: jle     loc_1800B0AEC
 * 00000001800B0A15: lea     rcx, dword_1801CE4DC
 * 00000001800B0A1C: call    sub_18000D534
 * 00000001800B0A21: cmp     cs:dword_1801CE4DC, r14d
 * 00000001800B0A28: jnz     loc_1800B0AEC
 * 00000001800B0A2E: lea     rax, unk_18014A340
 * 00000001800B0A35: mov     qword ptr [rbp+8C80h+var_7BD0], rax
 * 00000001800B0A3C: lea     rax, unk_180150DFC
 * 00000001800B0A43: mov     qword ptr [rbp+8C80h+var_7BD0+8], rax
 * 00000001800B0A4A: mov     dword ptr [rbp+8C80h+var_7BC0], 5
 * 00000001800B0A54: mov     dword ptr [rbp+8C80h+var_7BC0+4], esi
 * 00000001800B0A5A: call    sub_1800A8988
 * 00000001800B0A5F: mov     r8, rax
 * 00000001800B0A62: mov     r9d, r12d
 * 00000001800B0A65: mov     edx, 1F8h
 * 00000001800B0A6A: lea     rcx, [rbp+8C80h+var_3590]
 * 00000001800B0A71: call    sub_180075CF8
 * 00000001800B0A76: nop
 * 00000001800B0A77: mov     r8, rax
 * 00000001800B0A7A: mov     rdx, r13
 * 00000001800B0A7D: lea     rcx, [rbp+8C80h+var_35B0]
 * 00000001800B0A84: call    sub_18001C928
 * 00000001800B0A89: nop
 * 00000001800B0A8A: lea     r8, aPixel; "/Pixel"
 * 00000001800B0A91: mov     rdx, rax
 * 00000001800B0A94: lea     rcx, [rbp+8C80h+var_5890]
 * 00000001800B0A9B: call    sub_18001C87C
 * 00000001800B0AA0: movups  xmm0, [rbp+8C80h+var_7BD0]
 * 00000001800B0AA7: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0AAC: movups  xmm1, [rbp+8C80h+var_7BC0]
 * 00000001800B0AB3: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0AB8: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0ABD: mov     rcx, rax
 * 00000001800B0AC0: call    sub_180075D94
 * 00000001800B0AC5: nop
 * 00000001800B0AC6: lea     rcx, [rbp+8C80h+var_35B0]
 * 00000001800B0ACD: call    sub_180011E30
 * 00000001800B0AD2: nop
 * 00000001800B0AD3: lea     rcx, [rbp+8C80h+var_3590]
 * 00000001800B0ADA: call    sub_180011E30
 * 00000001800B0ADF: nop
 * 00000001800B0AE0: lea     rcx, dword_1801CE4DC
 * 00000001800B0AE7: call    sub_18000D4CC
 * 00000001800B0AEC: mov     rax, [rdi+rbx*8]
 * 00000001800B0AF0: mov     eax, [r15+rax]
 * 00000001800B0AF4: cmp     cs:dword_1801CE4E0, eax
 * 00000001800B0AFA: jle     loc_1800B0BD7
 * 00000001800B0B00: lea     rcx, dword_1801CE4E0
 * 00000001800B0B07: call    sub_18000D534
 * 00000001800B0B0C: cmp     cs:dword_1801CE4E0, r14d
 * 00000001800B0B13: jnz     loc_1800B0BD7
 * 00000001800B0B19: lea     rax, unk_18014A340
 * 00000001800B0B20: mov     qword ptr [rbp+8C80h+var_7BB0], rax
 * 00000001800B0B27: lea     rax, unk_180150DFC
 * 00000001800B0B2E: mov     qword ptr [rbp+8C80h+var_7BB0+8], rax
 * 00000001800B0B35: mov     dword ptr [rbp+8C80h+var_7BA0], 5
 * 00000001800B0B3F: mov     dword ptr [rbp+8C80h+var_7BA0+4], esi
 * 00000001800B0B45: call    sub_1800A8988
 * 00000001800B0B4A: mov     r8, rax
 * 00000001800B0B4D: mov     r9d, r12d
 * 00000001800B0B50: mov     edx, 1FAh
 * 00000001800B0B55: lea     rcx, [rbp+8C80h+var_3530]
 * 00000001800B0B5C: call    sub_180075CF8
 * 00000001800B0B61: nop
 * 00000001800B0B62: mov     r8, rax
 * 00000001800B0B65: mov     rdx, r13
 * 00000001800B0B68: lea     rcx, [rbp+8C80h+var_3550]
 * 00000001800B0B6F: call    sub_18001C928
 * 00000001800B0B74: nop
 * 00000001800B0B75: lea     r8, aPixel; "/Pixel"
 * 00000001800B0B7C: mov     rdx, rax
 * 00000001800B0B7F: lea     rcx, [rbp+8C80h+var_5870]
 * 00000001800B0B86: call    sub_18001C87C
 * 00000001800B0B8B: movups  xmm0, [rbp+8C80h+var_7BB0]
 * 00000001800B0B92: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0B97: movups  xmm1, [rbp+8C80h+var_7BA0]
 * 00000001800B0B9E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0BA3: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0BA8: mov     rcx, rax
 * 00000001800B0BAB: call    sub_180075D94
 * 00000001800B0BB0: nop
 * 00000001800B0BB1: lea     rcx, [rbp+8C80h+var_3550]
 * 00000001800B0BB8: call    sub_180011E30
 * 00000001800B0BBD: nop
 * 00000001800B0BBE: lea     rcx, [rbp+8C80h+var_3530]
 * 00000001800B0BC5: call    sub_180011E30
 * 00000001800B0BCA: nop
 * 00000001800B0BCB: lea     rcx, dword_1801CE4E0
 * 00000001800B0BD2: call    sub_18000D4CC
 * 00000001800B0BD7: mov     rax, [rdi+rbx*8]
 * 00000001800B0BDB: mov     eax, [r15+rax]
 * 00000001800B0BDF: cmp     cs:dword_1801CE4E4, eax
 * 00000001800B0BE5: jle     loc_1800B0CBB
 * 00000001800B0BEB: lea     rcx, dword_1801CE4E4
 * 00000001800B0BF2: call    sub_18000D534
 * 00000001800B0BF7: cmp     cs:dword_1801CE4E4, r14d
 * 00000001800B0BFE: jnz     loc_1800B0CBB
 * 00000001800B0C04: lea     rax, unk_180154B30
 * 00000001800B0C0B: mov     qword ptr [rbp+8C80h+var_7B90], rax
 * 00000001800B0C12: lea     rax, unk_180155B48
 * 00000001800B0C19: mov     qword ptr [rbp+8C80h+var_7B90+8], rax
 * 00000001800B0C20: mov     dword ptr [rbp+8C80h+var_7B80], esi
 * 00000001800B0C26: mov     dword ptr [rbp+8C80h+var_7B80+4], esi
 * 00000001800B0C2C: call    sub_1800A8988
 * 00000001800B0C31: mov     r8, rax
 * 00000001800B0C34: mov     r9d, r12d
 * 00000001800B0C37: xor     edx, edx
 * 00000001800B0C39: lea     rcx, [rbp+8C80h+var_34D0]
 * 00000001800B0C40: call    sub_180075CF8
 * 00000001800B0C45: nop
 * 00000001800B0C46: mov     r8, rax
 * 00000001800B0C49: mov     rdx, r13
 * 00000001800B0C4C: lea     rcx, [rbp+8C80h+var_34F0]
 * 00000001800B0C53: call    sub_18001C928
 * 00000001800B0C58: nop
 * 00000001800B0C59: lea     r8, aVertex; "/Vertex"
 * 00000001800B0C60: mov     rdx, rax
 * 00000001800B0C63: lea     rcx, [rbp+8C80h+var_5850]
 * 00000001800B0C6A: call    sub_18001C87C
 * 00000001800B0C6F: movups  xmm0, [rbp+8C80h+var_7B90]
 * 00000001800B0C76: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0C7B: movups  xmm1, [rbp+8C80h+var_7B80]
 * 00000001800B0C82: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0C87: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0C8C: mov     rcx, rax
 * 00000001800B0C8F: call    sub_180075D94
 * 00000001800B0C94: nop
 * 00000001800B0C95: lea     rcx, [rbp+8C80h+var_34F0]
 * 00000001800B0C9C: call    sub_180011E30
 * 00000001800B0CA1: nop
 * 00000001800B0CA2: lea     rcx, [rbp+8C80h+var_34D0]
 * 00000001800B0CA9: call    sub_180011E30
 * 00000001800B0CAE: nop
 * 00000001800B0CAF: lea     rcx, dword_1801CE4E4
 * 00000001800B0CB6: call    sub_18000D4CC
 * 00000001800B0CBB: mov     rax, [rdi+rbx*8]
 * 00000001800B0CBF: mov     eax, [r15+rax]
 * 00000001800B0CC3: cmp     cs:dword_1801CE4E8, eax
 * 00000001800B0CC9: jle     loc_1800B0DA0
 * 00000001800B0CCF: lea     rcx, dword_1801CE4E8
 * 00000001800B0CD6: call    sub_18000D534
 * 00000001800B0CDB: cmp     cs:dword_1801CE4E8, r14d
 * 00000001800B0CE2: jnz     loc_1800B0DA0
 * 00000001800B0CE8: lea     rax, unk_180155B50
 * 00000001800B0CEF: mov     qword ptr [rbp+8C80h+var_7B70], rax
 * 00000001800B0CF6: lea     rax, unk_1801560D4
 * 00000001800B0CFD: mov     qword ptr [rbp+8C80h+var_7B70+8], rax
 * 00000001800B0D04: mov     dword ptr [rbp+8C80h+var_7B60], esi
 * 00000001800B0D0A: mov     dword ptr [rbp+8C80h+var_7B60+4], esi
 * 00000001800B0D10: call    sub_1800A8988
 * 00000001800B0D15: mov     r8, rax
 * 00000001800B0D18: mov     r9d, r12d
 * 00000001800B0D1B: mov     rdx, rsi
 * 00000001800B0D1E: lea     rcx, [rbp+8C80h+var_3470]
 * 00000001800B0D25: call    sub_180075CF8
 * 00000001800B0D2A: nop
 * 00000001800B0D2B: mov     r8, rax
 * 00000001800B0D2E: mov     rdx, r13
 * 00000001800B0D31: lea     rcx, [rbp+8C80h+var_3490]
 * 00000001800B0D38: call    sub_18001C928
 * 00000001800B0D3D: nop
 * 00000001800B0D3E: lea     r8, aVertex; "/Vertex"
 * 00000001800B0D45: mov     rdx, rax
 * 00000001800B0D48: lea     rcx, [rbp+8C80h+var_5830]
 * 00000001800B0D4F: call    sub_18001C87C
 * 00000001800B0D54: movups  xmm0, [rbp+8C80h+var_7B70]
 * 00000001800B0D5B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0D60: movups  xmm1, [rbp+8C80h+var_7B60]
 * 00000001800B0D67: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0D6C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0D71: mov     rcx, rax
 * 00000001800B0D74: call    sub_180075D94
 * 00000001800B0D79: nop
 * 00000001800B0D7A: lea     rcx, [rbp+8C80h+var_3490]
 * 00000001800B0D81: call    sub_180011E30
 * 00000001800B0D86: nop
 * 00000001800B0D87: lea     rcx, [rbp+8C80h+var_3470]
 * 00000001800B0D8E: call    sub_180011E30
 * 00000001800B0D93: nop
 * 00000001800B0D94: lea     rcx, dword_1801CE4E8
 * 00000001800B0D9B: call    sub_18000D4CC
 * 00000001800B0DA0: mov     rax, [rdi+rbx*8]
 * 00000001800B0DA4: mov     ecx, [r15+rax]
 * 00000001800B0DA8: cmp     cs:dword_1801CE4EC, ecx
 * 00000001800B0DAE: jle     loc_1800B0E87
 * 00000001800B0DB4: lea     rcx, dword_1801CE4EC
 * 00000001800B0DBB: call    sub_18000D534
 * 00000001800B0DC0: cmp     cs:dword_1801CE4EC, r14d
 * 00000001800B0DC7: jnz     loc_1800B0E87
 * 00000001800B0DCD: lea     rax, unk_180154B30
 * 00000001800B0DD4: mov     qword ptr [rbp+8C80h+var_7B50], rax
 * 00000001800B0DDB: lea     rax, unk_180155B48
 * 00000001800B0DE2: mov     qword ptr [rbp+8C80h+var_7B50+8], rax
 * 00000001800B0DE9: mov     dword ptr [rbp+8C80h+var_7B40], esi
 * 00000001800B0DEF: mov     dword ptr [rbp+8C80h+var_7B40+4], esi
 * 00000001800B0DF5: call    sub_1800A8988
 * 00000001800B0DFA: mov     r8, rax
 * 00000001800B0DFD: mov     r9d, r12d
 * 00000001800B0E00: mov     edx, 2
 * 00000001800B0E05: lea     rcx, [rbp+8C80h+var_3410]
 * 00000001800B0E0C: call    sub_180075CF8
 * 00000001800B0E11: nop
 * 00000001800B0E12: mov     r8, rax
 * 00000001800B0E15: mov     rdx, r13
 * 00000001800B0E18: lea     rcx, [rbp+8C80h+var_3430]
 * 00000001800B0E1F: call    sub_18001C928
 * 00000001800B0E24: nop
 * 00000001800B0E25: lea     r8, aVertex; "/Vertex"
 * 00000001800B0E2C: mov     rdx, rax
 * 00000001800B0E2F: lea     rcx, [rbp+8C80h+var_5810]
 * 00000001800B0E36: call    sub_18001C87C
 * 00000001800B0E3B: movups  xmm0, [rbp+8C80h+var_7B50]
 * 00000001800B0E42: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0E47: movups  xmm1, [rbp+8C80h+var_7B40]
 * 00000001800B0E4E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0E53: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0E58: mov     rcx, rax
 * 00000001800B0E5B: call    sub_180075D94
 * 00000001800B0E60: nop
 * 00000001800B0E61: lea     rcx, [rbp+8C80h+var_3430]
 * 00000001800B0E68: call    sub_180011E30
 * 00000001800B0E6D: nop
 * 00000001800B0E6E: lea     rcx, [rbp+8C80h+var_3410]
 * 00000001800B0E75: call    sub_180011E30
 * 00000001800B0E7A: nop
 * 00000001800B0E7B: lea     rcx, dword_1801CE4EC
 * 00000001800B0E82: call    sub_18000D4CC
 * 00000001800B0E87: mov     rax, [rdi+rbx*8]
 * 00000001800B0E8B: mov     ecx, [r15+rax]
 * 00000001800B0E8F: cmp     cs:dword_1801CE4F0, ecx
 * 00000001800B0E95: jle     loc_1800B0F6E
 * 00000001800B0E9B: lea     rcx, dword_1801CE4F0
 * 00000001800B0EA2: call    sub_18000D534
 * 00000001800B0EA7: cmp     cs:dword_1801CE4F0, r14d
 * 00000001800B0EAE: jnz     loc_1800B0F6E
 * 00000001800B0EB4: lea     rax, unk_180154B30
 * 00000001800B0EBB: mov     qword ptr [rbp+8C80h+var_7B30], rax
 * 00000001800B0EC2: lea     rax, unk_180155B48
 * 00000001800B0EC9: mov     qword ptr [rbp+8C80h+var_7B30+8], rax
 * 00000001800B0ED0: mov     dword ptr [rbp+8C80h+var_7B20], esi
 * 00000001800B0ED6: mov     dword ptr [rbp+8C80h+var_7B20+4], esi
 * 00000001800B0EDC: call    sub_1800A8988
 * 00000001800B0EE1: mov     r8, rax
 * 00000001800B0EE4: mov     r9d, r12d
 * 00000001800B0EE7: mov     edx, 4
 * 00000001800B0EEC: lea     rcx, [rbp+8C80h+var_33B0]
 * 00000001800B0EF3: call    sub_180075CF8
 * 00000001800B0EF8: nop
 * 00000001800B0EF9: mov     r8, rax
 * 00000001800B0EFC: mov     rdx, r13
 * 00000001800B0EFF: lea     rcx, [rbp+8C80h+var_33D0]
 * 00000001800B0F06: call    sub_18001C928
 * 00000001800B0F0B: nop
 * 00000001800B0F0C: lea     r8, aVertex; "/Vertex"
 * 00000001800B0F13: mov     rdx, rax
 * 00000001800B0F16: lea     rcx, [rbp+8C80h+var_57F0]
 * 00000001800B0F1D: call    sub_18001C87C
 * 00000001800B0F22: movups  xmm0, [rbp+8C80h+var_7B30]
 * 00000001800B0F29: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B0F2E: movups  xmm1, [rbp+8C80h+var_7B20]
 * 00000001800B0F35: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B0F3A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B0F3F: mov     rcx, rax
 * 00000001800B0F42: call    sub_180075D94
 * 00000001800B0F47: nop
 * 00000001800B0F48: lea     rcx, [rbp+8C80h+var_33D0]
 * 00000001800B0F4F: call    sub_180011E30
 * 00000001800B0F54: nop
 * 00000001800B0F55: lea     rcx, [rbp+8C80h+var_33B0]
 * 00000001800B0F5C: call    sub_180011E30
 * 00000001800B0F61: nop
 * 00000001800B0F62: lea     rcx, dword_1801CE4F0
 * 00000001800B0F69: call    sub_18000D4CC
 * 00000001800B0F6E: mov     rax, [rdi+rbx*8]
 * 00000001800B0F72: mov     ecx, [r15+rax]
 * 00000001800B0F76: cmp     cs:dword_1801CE4F4, ecx
 * 00000001800B0F7C: jle     loc_1800B1055
 * 00000001800B0F82: lea     rcx, dword_1801CE4F4
 * 00000001800B0F89: call    sub_18000D534
 * 00000001800B0F8E: cmp     cs:dword_1801CE4F4, r14d
 * 00000001800B0F95: jnz     loc_1800B1055
 * 00000001800B0F9B: lea     rax, unk_180155B50
 * 00000001800B0FA2: mov     qword ptr [rbp+8C80h+var_7B10], rax
 * 00000001800B0FA9: lea     rax, unk_1801560D4
 * 00000001800B0FB0: mov     qword ptr [rbp+8C80h+var_7B10+8], rax
 * 00000001800B0FB7: mov     dword ptr [rbp+8C80h+var_7B00], esi
 * 00000001800B0FBD: mov     dword ptr [rbp+8C80h+var_7B00+4], esi
 * 00000001800B0FC3: call    sub_1800A8988
 * 00000001800B0FC8: mov     r8, rax
 * 00000001800B0FCB: mov     r9d, r12d
 * 00000001800B0FCE: mov     edx, 5
 * 00000001800B0FD3: lea     rcx, [rbp+8C80h+var_3350]
 * 00000001800B0FDA: call    sub_180075CF8
 * 00000001800B0FDF: nop
 * 00000001800B0FE0: mov     r8, rax
 * 00000001800B0FE3: mov     rdx, r13
 * 00000001800B0FE6: lea     rcx, [rbp+8C80h+var_3370]
 * 00000001800B0FED: call    sub_18001C928
 * 00000001800B0FF2: nop
 * 00000001800B0FF3: lea     r8, aVertex; "/Vertex"
 * 00000001800B0FFA: mov     rdx, rax
 * 00000001800B0FFD: lea     rcx, [rbp+8C80h+var_57D0]
 * 00000001800B1004: call    sub_18001C87C
 * 00000001800B1009: movups  xmm0, [rbp+8C80h+var_7B10]
 * 00000001800B1010: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1015: movups  xmm1, [rbp+8C80h+var_7B00]
 * 00000001800B101C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1021: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1026: mov     rcx, rax
 * 00000001800B1029: call    sub_180075D94
 * 00000001800B102E: nop
 * 00000001800B102F: lea     rcx, [rbp+8C80h+var_3370]
 * 00000001800B1036: call    sub_180011E30
 * 00000001800B103B: nop
 * 00000001800B103C: lea     rcx, [rbp+8C80h+var_3350]
 * 00000001800B1043: call    sub_180011E30
 * 00000001800B1048: nop
 * 00000001800B1049: lea     rcx, dword_1801CE4F4
 * 00000001800B1050: call    sub_18000D4CC
 * 00000001800B1055: mov     rax, [rdi+rbx*8]
 * 00000001800B1059: mov     ecx, [r15+rax]
 * 00000001800B105D: cmp     cs:dword_1801CE4F8, ecx
 * 00000001800B1063: jle     loc_1800B113C
 * 00000001800B1069: lea     rcx, dword_1801CE4F8
 * 00000001800B1070: call    sub_18000D534
 * 00000001800B1075: cmp     cs:dword_1801CE4F8, r14d
 * 00000001800B107C: jnz     loc_1800B113C
 * 00000001800B1082: lea     rax, unk_180154B30
 * 00000001800B1089: mov     qword ptr [rbp+8C80h+var_7AF0], rax
 * 00000001800B1090: lea     rax, unk_180155B48
 * 00000001800B1097: mov     qword ptr [rbp+8C80h+var_7AF0+8], rax
 * 00000001800B109E: mov     dword ptr [rbp+8C80h+var_7AE0], esi
 * 00000001800B10A4: mov     dword ptr [rbp+8C80h+var_7AE0+4], esi
 * 00000001800B10AA: call    sub_1800A8988
 * 00000001800B10AF: mov     r8, rax
 * 00000001800B10B2: mov     r9d, r12d
 * 00000001800B10B5: mov     edx, 6
 * 00000001800B10BA: lea     rcx, [rbp+8C80h+var_32F0]
 * 00000001800B10C1: call    sub_180075CF8
 * 00000001800B10C6: nop
 * 00000001800B10C7: mov     r8, rax
 * 00000001800B10CA: mov     rdx, r13
 * 00000001800B10CD: lea     rcx, [rbp+8C80h+var_3310]
 * 00000001800B10D4: call    sub_18001C928
 * 00000001800B10D9: nop
 * 00000001800B10DA: lea     r8, aVertex; "/Vertex"
 * 00000001800B10E1: mov     rdx, rax
 * 00000001800B10E4: lea     rcx, [rbp+8C80h+var_57B0]
 * 00000001800B10EB: call    sub_18001C87C
 * 00000001800B10F0: movups  xmm0, [rbp+8C80h+var_7AF0]
 * 00000001800B10F7: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B10FC: movups  xmm1, [rbp+8C80h+var_7AE0]
 * 00000001800B1103: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1108: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B110D: mov     rcx, rax
 * 00000001800B1110: call    sub_180075D94
 * 00000001800B1115: nop
 * 00000001800B1116: lea     rcx, [rbp+8C80h+var_3310]
 * 00000001800B111D: call    sub_180011E30
 * 00000001800B1122: nop
 * 00000001800B1123: lea     rcx, [rbp+8C80h+var_32F0]
 * 00000001800B112A: call    sub_180011E30
 * 00000001800B112F: nop
 * 00000001800B1130: lea     rcx, dword_1801CE4F8
 * 00000001800B1137: call    sub_18000D4CC
 * 00000001800B113C: mov     rax, [rdi+rbx*8]
 * 00000001800B1140: mov     ecx, [r15+rax]
 * 00000001800B1144: cmp     cs:dword_1801CE4FC, ecx
 * 00000001800B114A: jle     loc_1800B1223
 * 00000001800B1150: lea     rcx, dword_1801CE4FC
 * 00000001800B1157: call    sub_18000D534
 * 00000001800B115C: cmp     cs:dword_1801CE4FC, r14d
 * 00000001800B1163: jnz     loc_1800B1223
 * 00000001800B1169: lea     rax, unk_180154B30
 * 00000001800B1170: mov     qword ptr [rbp+8C80h+var_7AD0], rax
 * 00000001800B1177: lea     rax, unk_180155B48
 * 00000001800B117E: mov     qword ptr [rbp+8C80h+var_7AD0+8], rax
 * 00000001800B1185: mov     dword ptr [rbp+8C80h+var_7AC0], esi
 * 00000001800B118B: mov     dword ptr [rbp+8C80h+var_7AC0+4], esi
 * 00000001800B1191: call    sub_1800A8988
 * 00000001800B1196: mov     r8, rax
 * 00000001800B1199: mov     r9d, r12d
 * 00000001800B119C: mov     edx, 8
 * 00000001800B11A1: lea     rcx, [rbp+8C80h+var_3290]
 * 00000001800B11A8: call    sub_180075CF8
 * 00000001800B11AD: nop
 * 00000001800B11AE: mov     r8, rax
 * 00000001800B11B1: mov     rdx, r13
 * 00000001800B11B4: lea     rcx, [rbp+8C80h+var_32B0]
 * 00000001800B11BB: call    sub_18001C928
 * 00000001800B11C0: nop
 * 00000001800B11C1: lea     r8, aVertex; "/Vertex"
 * 00000001800B11C8: mov     rdx, rax
 * 00000001800B11CB: lea     rcx, [rbp+8C80h+var_5790]
 * 00000001800B11D2: call    sub_18001C87C
 * 00000001800B11D7: movups  xmm0, [rbp+8C80h+var_7AD0]
 * 00000001800B11DE: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B11E3: movups  xmm1, [rbp+8C80h+var_7AC0]
 * 00000001800B11EA: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B11EF: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B11F4: mov     rcx, rax
 * 00000001800B11F7: call    sub_180075D94
 * 00000001800B11FC: nop
 * 00000001800B11FD: lea     rcx, [rbp+8C80h+var_32B0]
 * 00000001800B1204: call    sub_180011E30
 * 00000001800B1209: nop
 * 00000001800B120A: lea     rcx, [rbp+8C80h+var_3290]
 * 00000001800B1211: call    sub_180011E30
 * 00000001800B1216: nop
 * 00000001800B1217: lea     rcx, dword_1801CE4FC
 * 00000001800B121E: call    sub_18000D4CC
 * 00000001800B1223: mov     rax, [rdi+rbx*8]
 * 00000001800B1227: mov     ecx, [r15+rax]
 * 00000001800B122B: cmp     cs:dword_1801CE500, ecx
 * 00000001800B1231: jle     loc_1800B1308
 * 00000001800B1237: lea     rcx, dword_1801CE500
 * 00000001800B123E: call    sub_18000D534
 * 00000001800B1243: cmp     cs:dword_1801CE500, r14d
 * 00000001800B124A: jnz     loc_1800B1308
 * 00000001800B1250: lea     rax, unk_180154420
 * 00000001800B1257: mov     qword ptr [rbp+8C80h+var_7AB0], rax
 * 00000001800B125E: lea     rax, unk_180154B2C
 * 00000001800B1265: mov     qword ptr [rbp+8C80h+var_7AB0+8], rax
 * 00000001800B126C: mov     dword ptr [rbp+8C80h+var_7AA0], esi
 * 00000001800B1272: mov     dword ptr [rbp+8C80h+var_7AA0+4], esi
 * 00000001800B1278: call    sub_1800A8988
 * 00000001800B127D: mov     r8, rax
 * 00000001800B1280: mov     r9d, r12d
 * 00000001800B1283: mov     rdx, r12
 * 00000001800B1286: lea     rcx, [rbp+8C80h+var_3230]
 * 00000001800B128D: call    sub_180075CF8
 * 00000001800B1292: nop
 * 00000001800B1293: mov     r8, rax
 * 00000001800B1296: mov     rdx, r13
 * 00000001800B1299: lea     rcx, [rbp+8C80h+var_3250]
 * 00000001800B12A0: call    sub_18001C928
 * 00000001800B12A5: nop
 * 00000001800B12A6: lea     r8, aVertex; "/Vertex"
 * 00000001800B12AD: mov     rdx, rax
 * 00000001800B12B0: lea     rcx, [rbp+8C80h+var_5770]
 * 00000001800B12B7: call    sub_18001C87C
 * 00000001800B12BC: movups  xmm0, [rbp+8C80h+var_7AB0]
 * 00000001800B12C3: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B12C8: movups  xmm1, [rbp+8C80h+var_7AA0]
 * 00000001800B12CF: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B12D4: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B12D9: mov     rcx, rax
 * 00000001800B12DC: call    sub_180075D94
 * 00000001800B12E1: nop
 * 00000001800B12E2: lea     rcx, [rbp+8C80h+var_3250]
 * 00000001800B12E9: call    sub_180011E30
 * 00000001800B12EE: nop
 * 00000001800B12EF: lea     rcx, [rbp+8C80h+var_3230]
 * 00000001800B12F6: call    sub_180011E30
 * 00000001800B12FB: nop
 * 00000001800B12FC: lea     rcx, dword_1801CE500
 * 00000001800B1303: call    sub_18000D4CC
 * 00000001800B1308: mov     rax, [rdi+rbx*8]
 * 00000001800B130C: mov     ecx, [r15+rax]
 * 00000001800B1310: cmp     cs:dword_1801CE504, ecx
 * 00000001800B1316: jle     loc_1800B13EF
 * 00000001800B131C: lea     rcx, dword_1801CE504
 * 00000001800B1323: call    sub_18000D534
 * 00000001800B1328: cmp     cs:dword_1801CE504, r14d
 * 00000001800B132F: jnz     loc_1800B13EF
 * 00000001800B1335: lea     rax, unk_180154B30
 * 00000001800B133C: mov     qword ptr [rbp+8C80h+var_7A90], rax
 * 00000001800B1343: lea     rax, unk_180155B48
 * 00000001800B134A: mov     qword ptr [rbp+8C80h+var_7A90+8], rax
 * 00000001800B1351: mov     dword ptr [rbp+8C80h+var_7A80], esi
 * 00000001800B1357: mov     dword ptr [rbp+8C80h+var_7A80+4], esi
 * 00000001800B135D: call    sub_1800A8988
 * 00000001800B1362: mov     r8, rax
 * 00000001800B1365: mov     r9d, r12d
 * 00000001800B1368: mov     edx, 0Ah
 * 00000001800B136D: lea     rcx, [rbp+8C80h+var_31D0]
 * 00000001800B1374: call    sub_180075CF8
 * 00000001800B1379: nop
 * 00000001800B137A: mov     r8, rax
 * 00000001800B137D: mov     rdx, r13
 * 00000001800B1380: lea     rcx, [rbp+8C80h+var_31F0]
 * 00000001800B1387: call    sub_18001C928
 * 00000001800B138C: nop
 * 00000001800B138D: lea     r8, aVertex; "/Vertex"
 * 00000001800B1394: mov     rdx, rax
 * 00000001800B1397: lea     rcx, [rbp+8C80h+var_5750]
 * 00000001800B139E: call    sub_18001C87C
 * 00000001800B13A3: movups  xmm0, [rbp+8C80h+var_7A90]
 * 00000001800B13AA: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B13AF: movups  xmm1, [rbp+8C80h+var_7A80]
 * 00000001800B13B6: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B13BB: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B13C0: mov     rcx, rax
 * 00000001800B13C3: call    sub_180075D94
 * 00000001800B13C8: nop
 * 00000001800B13C9: lea     rcx, [rbp+8C80h+var_31F0]
 * 00000001800B13D0: call    sub_180011E30
 * 00000001800B13D5: nop
 * 00000001800B13D6: lea     rcx, [rbp+8C80h+var_31D0]
 * 00000001800B13DD: call    sub_180011E30
 * 00000001800B13E2: nop
 * 00000001800B13E3: lea     rcx, dword_1801CE504
 * 00000001800B13EA: call    sub_18000D4CC
 * 00000001800B13EF: mov     rax, [rdi+rbx*8]
 * 00000001800B13F3: mov     ecx, [r15+rax]
 * 00000001800B13F7: cmp     cs:dword_1801CE508, ecx
 * 00000001800B13FD: jle     loc_1800B14D6
 * 00000001800B1403: lea     rcx, dword_1801CE508
 * 00000001800B140A: call    sub_18000D534
 * 00000001800B140F: cmp     cs:dword_1801CE508, r14d
 * 00000001800B1416: jnz     loc_1800B14D6
 * 00000001800B141C: lea     rax, unk_180154B30
 * 00000001800B1423: mov     qword ptr [rbp+8C80h+var_7A70], rax
 * 00000001800B142A: lea     rax, unk_180155B48
 * 00000001800B1431: mov     qword ptr [rbp+8C80h+var_7A70+8], rax
 * 00000001800B1438: mov     dword ptr [rbp+8C80h+var_7A60], esi
 * 00000001800B143E: mov     dword ptr [rbp+8C80h+var_7A60+4], esi
 * 00000001800B1444: call    sub_1800A8988
 * 00000001800B1449: mov     r8, rax
 * 00000001800B144C: mov     r9d, r12d
 * 00000001800B144F: mov     edx, 10h
 * 00000001800B1454: lea     rcx, [rbp+8C80h+var_3170]
 * 00000001800B145B: call    sub_180075CF8
 * 00000001800B1460: nop
 * 00000001800B1461: mov     r8, rax
 * 00000001800B1464: mov     rdx, r13
 * 00000001800B1467: lea     rcx, [rbp+8C80h+var_3190]
 * 00000001800B146E: call    sub_18001C928
 * 00000001800B1473: nop
 * 00000001800B1474: lea     r8, aVertex; "/Vertex"
 * 00000001800B147B: mov     rdx, rax
 * 00000001800B147E: lea     rcx, [rbp+8C80h+var_5730]
 * 00000001800B1485: call    sub_18001C87C
 * 00000001800B148A: movups  xmm0, [rbp+8C80h+var_7A70]
 * 00000001800B1491: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1496: movups  xmm1, [rbp+8C80h+var_7A60]
 * 00000001800B149D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B14A2: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B14A7: mov     rcx, rax
 * 00000001800B14AA: call    sub_180075D94
 * 00000001800B14AF: nop
 * 00000001800B14B0: lea     rcx, [rbp+8C80h+var_3190]
 * 00000001800B14B7: call    sub_180011E30
 * 00000001800B14BC: nop
 * 00000001800B14BD: lea     rcx, [rbp+8C80h+var_3170]
 * 00000001800B14C4: call    sub_180011E30
 * 00000001800B14C9: nop
 * 00000001800B14CA: lea     rcx, dword_1801CE508
 * 00000001800B14D1: call    sub_18000D4CC
 * 00000001800B14D6: mov     rax, [rdi+rbx*8]
 * 00000001800B14DA: mov     ecx, [r15+rax]
 * 00000001800B14DE: cmp     cs:dword_1801CE50C, ecx
 * 00000001800B14E4: jle     loc_1800B15BD
 * 00000001800B14EA: lea     rcx, dword_1801CE50C
 * 00000001800B14F1: call    sub_18000D534
 * 00000001800B14F6: cmp     cs:dword_1801CE50C, r14d
 * 00000001800B14FD: jnz     loc_1800B15BD
 * 00000001800B1503: lea     rax, unk_180154B30
 * 00000001800B150A: mov     qword ptr [rbp+8C80h+var_7A50], rax
 * 00000001800B1511: lea     rax, unk_180155B48
 * 00000001800B1518: mov     qword ptr [rbp+8C80h+var_7A50+8], rax
 * 00000001800B151F: mov     dword ptr [rbp+8C80h+var_7A40], esi
 * 00000001800B1525: mov     dword ptr [rbp+8C80h+var_7A40+4], esi
 * 00000001800B152B: call    sub_1800A8988
 * 00000001800B1530: mov     r8, rax
 * 00000001800B1533: mov     r9d, r12d
 * 00000001800B1536: mov     edx, 12h
 * 00000001800B153B: lea     rcx, [rbp+8C80h+var_3110]
 * 00000001800B1542: call    sub_180075CF8
 * 00000001800B1547: nop
 * 00000001800B1548: mov     r8, rax
 * 00000001800B154B: mov     rdx, r13
 * 00000001800B154E: lea     rcx, [rbp+8C80h+var_3130]
 * 00000001800B1555: call    sub_18001C928
 * 00000001800B155A: nop
 * 00000001800B155B: lea     r8, aVertex; "/Vertex"
 * 00000001800B1562: mov     rdx, rax
 * 00000001800B1565: lea     rcx, [rbp+8C80h+var_5710]
 * 00000001800B156C: call    sub_18001C87C
 * 00000001800B1571: movups  xmm0, [rbp+8C80h+var_7A50]
 * 00000001800B1578: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B157D: movups  xmm1, [rbp+8C80h+var_7A40]
 * 00000001800B1584: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1589: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B158E: mov     rcx, rax
 * 00000001800B1591: call    sub_180075D94
 * 00000001800B1596: nop
 * 00000001800B1597: lea     rcx, [rbp+8C80h+var_3130]
 * 00000001800B159E: call    sub_180011E30
 * 00000001800B15A3: nop
 * 00000001800B15A4: lea     rcx, [rbp+8C80h+var_3110]
 * 00000001800B15AB: call    sub_180011E30
 * 00000001800B15B0: nop
 * 00000001800B15B1: lea     rcx, dword_1801CE50C
 * 00000001800B15B8: call    sub_18000D4CC
 * 00000001800B15BD: mov     rax, [rdi+rbx*8]
 * 00000001800B15C1: mov     ecx, [r15+rax]
 * 00000001800B15C5: cmp     cs:dword_1801CE510, ecx
 * 00000001800B15CB: jle     loc_1800B16A4
 * 00000001800B15D1: lea     rcx, dword_1801CE510
 * 00000001800B15D8: call    sub_18000D534
 * 00000001800B15DD: cmp     cs:dword_1801CE510, r14d
 * 00000001800B15E4: jnz     loc_1800B16A4
 * 00000001800B15EA: lea     rax, unk_180154B30
 * 00000001800B15F1: mov     qword ptr [rbp+8C80h+var_7A30], rax
 * 00000001800B15F8: lea     rax, unk_180155B48
 * 00000001800B15FF: mov     qword ptr [rbp+8C80h+var_7A30+8], rax
 * 00000001800B1606: mov     dword ptr [rbp+8C80h+var_7A20], esi
 * 00000001800B160C: mov     dword ptr [rbp+8C80h+var_7A20+4], esi
 * 00000001800B1612: call    sub_1800A8988
 * 00000001800B1617: mov     r8, rax
 * 00000001800B161A: mov     r9d, r12d
 * 00000001800B161D: mov     edx, 14h
 * 00000001800B1622: lea     rcx, [rbp+8C80h+var_30B0]
 * 00000001800B1629: call    sub_180075CF8
 * 00000001800B162E: nop
 * 00000001800B162F: mov     r8, rax
 * 00000001800B1632: mov     rdx, r13
 * 00000001800B1635: lea     rcx, [rbp+8C80h+var_30D0]
 * 00000001800B163C: call    sub_18001C928
 * 00000001800B1641: nop
 * 00000001800B1642: lea     r8, aVertex; "/Vertex"
 * 00000001800B1649: mov     rdx, rax
 * 00000001800B164C: lea     rcx, [rbp+8C80h+var_56F0]
 * 00000001800B1653: call    sub_18001C87C
 * 00000001800B1658: movups  xmm0, [rbp+8C80h+var_7A30]
 * 00000001800B165F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1664: movups  xmm1, [rbp+8C80h+var_7A20]
 * 00000001800B166B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1670: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1675: mov     rcx, rax
 * 00000001800B1678: call    sub_180075D94
 * 00000001800B167D: nop
 * 00000001800B167E: lea     rcx, [rbp+8C80h+var_30D0]
 * 00000001800B1685: call    sub_180011E30
 * 00000001800B168A: nop
 * 00000001800B168B: lea     rcx, [rbp+8C80h+var_30B0]
 * 00000001800B1692: call    sub_180011E30
 * 00000001800B1697: nop
 * 00000001800B1698: lea     rcx, dword_1801CE510
 * 00000001800B169F: call    sub_18000D4CC
 * 00000001800B16A4: mov     rax, [rdi+rbx*8]
 * 00000001800B16A8: mov     ecx, [r15+rax]
 * 00000001800B16AC: cmp     cs:dword_1801CE514, ecx
 * 00000001800B16B2: jle     loc_1800B178B
 * 00000001800B16B8: lea     rcx, dword_1801CE514
 * 00000001800B16BF: call    sub_18000D534
 * 00000001800B16C4: cmp     cs:dword_1801CE514, r14d
 * 00000001800B16CB: jnz     loc_1800B178B
 * 00000001800B16D1: lea     rax, unk_180154B30
 * 00000001800B16D8: mov     qword ptr [rbp+8C80h+var_7A10], rax
 * 00000001800B16DF: lea     rax, unk_180155B48
 * 00000001800B16E6: mov     qword ptr [rbp+8C80h+var_7A10+8], rax
 * 00000001800B16ED: mov     dword ptr [rbp+8C80h+var_7A00], esi
 * 00000001800B16F3: mov     dword ptr [rbp+8C80h+var_7A00+4], esi
 * 00000001800B16F9: call    sub_1800A8988
 * 00000001800B16FE: mov     r8, rax
 * 00000001800B1701: mov     r9d, r12d
 * 00000001800B1704: mov     edx, 16h
 * 00000001800B1709: lea     rcx, [rbp+8C80h+var_3050]
 * 00000001800B1710: call    sub_180075CF8
 * 00000001800B1715: nop
 * 00000001800B1716: mov     r8, rax
 * 00000001800B1719: mov     rdx, r13
 * 00000001800B171C: lea     rcx, [rbp+8C80h+var_3070]
 * 00000001800B1723: call    sub_18001C928
 * 00000001800B1728: nop
 * 00000001800B1729: lea     r8, aVertex; "/Vertex"
 * 00000001800B1730: mov     rdx, rax
 * 00000001800B1733: lea     rcx, [rbp+8C80h+var_56D0]
 * 00000001800B173A: call    sub_18001C87C
 * 00000001800B173F: movups  xmm0, [rbp+8C80h+var_7A10]
 * 00000001800B1746: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B174B: movups  xmm1, [rbp+8C80h+var_7A00]
 * 00000001800B1752: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1757: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B175C: mov     rcx, rax
 * 00000001800B175F: call    sub_180075D94
 * 00000001800B1764: nop
 * 00000001800B1765: lea     rcx, [rbp+8C80h+var_3070]
 * 00000001800B176C: call    sub_180011E30
 * 00000001800B1771: nop
 * 00000001800B1772: lea     rcx, [rbp+8C80h+var_3050]
 * 00000001800B1779: call    sub_180011E30
 * 00000001800B177E: nop
 * 00000001800B177F: lea     rcx, dword_1801CE514
 * 00000001800B1786: call    sub_18000D4CC
 * 00000001800B178B: mov     rax, [rdi+rbx*8]
 * 00000001800B178F: mov     ecx, [r15+rax]
 * 00000001800B1793: cmp     cs:dword_1801CE518, ecx
 * 00000001800B1799: jle     loc_1800B1872
 * 00000001800B179F: lea     rcx, dword_1801CE518
 * 00000001800B17A6: call    sub_18000D534
 * 00000001800B17AB: cmp     cs:dword_1801CE518, r14d
 * 00000001800B17B2: jnz     loc_1800B1872
 * 00000001800B17B8: lea     rax, unk_180154B30
 * 00000001800B17BF: mov     qword ptr [rbp+8C80h+var_79F0], rax
 * 00000001800B17C6: lea     rax, unk_180155B48
 * 00000001800B17CD: mov     qword ptr [rbp+8C80h+var_79F0+8], rax
 * 00000001800B17D4: mov     dword ptr [rbp+8C80h+var_79E0], esi
 * 00000001800B17DA: mov     dword ptr [rbp+8C80h+var_79E0+4], esi
 * 00000001800B17E0: call    sub_1800A8988
 * 00000001800B17E5: mov     r8, rax
 * 00000001800B17E8: mov     r9d, r12d
 * 00000001800B17EB: mov     edx, 18h
 * 00000001800B17F0: lea     rcx, [rbp+8C80h+var_2FF0]
 * 00000001800B17F7: call    sub_180075CF8
 * 00000001800B17FC: nop
 * 00000001800B17FD: mov     r8, rax
 * 00000001800B1800: mov     rdx, r13
 * 00000001800B1803: lea     rcx, [rbp+8C80h+var_3010]
 * 00000001800B180A: call    sub_18001C928
 * 00000001800B180F: nop
 * 00000001800B1810: lea     r8, aVertex; "/Vertex"
 * 00000001800B1817: mov     rdx, rax
 * 00000001800B181A: lea     rcx, [rbp+8C80h+var_56B0]
 * 00000001800B1821: call    sub_18001C87C
 * 00000001800B1826: movups  xmm0, [rbp+8C80h+var_79F0]
 * 00000001800B182D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1832: movups  xmm1, [rbp+8C80h+var_79E0]
 * 00000001800B1839: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B183E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1843: mov     rcx, rax
 * 00000001800B1846: call    sub_180075D94
 * 00000001800B184B: nop
 * 00000001800B184C: lea     rcx, [rbp+8C80h+var_3010]
 * 00000001800B1853: call    sub_180011E30
 * 00000001800B1858: nop
 * 00000001800B1859: lea     rcx, [rbp+8C80h+var_2FF0]
 * 00000001800B1860: call    sub_180011E30
 * 00000001800B1865: nop
 * 00000001800B1866: lea     rcx, dword_1801CE518
 * 00000001800B186D: call    sub_18000D4CC
 * 00000001800B1872: mov     rax, [rdi+rbx*8]
 * 00000001800B1876: mov     ecx, [r15+rax]
 * 00000001800B187A: cmp     cs:dword_1801CE51C, ecx
 * 00000001800B1880: jle     loc_1800B1959
 * 00000001800B1886: lea     rcx, dword_1801CE51C
 * 00000001800B188D: call    sub_18000D534
 * 00000001800B1892: cmp     cs:dword_1801CE51C, r14d
 * 00000001800B1899: jnz     loc_1800B1959
 * 00000001800B189F: lea     rax, unk_180154B30
 * 00000001800B18A6: mov     qword ptr [rbp+8C80h+var_79D0], rax
 * 00000001800B18AD: lea     rax, unk_180155B48
 * 00000001800B18B4: mov     qword ptr [rbp+8C80h+var_79D0+8], rax
 * 00000001800B18BB: mov     dword ptr [rbp+8C80h+var_79C0], esi
 * 00000001800B18C1: mov     dword ptr [rbp+8C80h+var_79C0+4], esi
 * 00000001800B18C7: call    sub_1800A8988
 * 00000001800B18CC: mov     r8, rax
 * 00000001800B18CF: mov     r9d, r12d
 * 00000001800B18D2: mov     edx, 1Ah
 * 00000001800B18D7: lea     rcx, [rbp+8C80h+var_2F90]
 * 00000001800B18DE: call    sub_180075CF8
 * 00000001800B18E3: nop
 * 00000001800B18E4: mov     r8, rax
 * 00000001800B18E7: mov     rdx, r13
 * 00000001800B18EA: lea     rcx, [rbp+8C80h+var_2FB0]
 * 00000001800B18F1: call    sub_18001C928
 * 00000001800B18F6: nop
 * 00000001800B18F7: lea     r8, aVertex; "/Vertex"
 * 00000001800B18FE: mov     rdx, rax
 * 00000001800B1901: lea     rcx, [rbp+8C80h+var_5690]
 * 00000001800B1908: call    sub_18001C87C
 * 00000001800B190D: movups  xmm0, [rbp+8C80h+var_79D0]
 * 00000001800B1914: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1919: movups  xmm1, [rbp+8C80h+var_79C0]
 * 00000001800B1920: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1925: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B192A: mov     rcx, rax
 * 00000001800B192D: call    sub_180075D94
 * 00000001800B1932: nop
 * 00000001800B1933: lea     rcx, [rbp+8C80h+var_2FB0]
 * 00000001800B193A: call    sub_180011E30
 * 00000001800B193F: nop
 * 00000001800B1940: lea     rcx, [rbp+8C80h+var_2F90]
 * 00000001800B1947: call    sub_180011E30
 * 00000001800B194C: nop
 * 00000001800B194D: lea     rcx, dword_1801CE51C
 * 00000001800B1954: call    sub_18000D4CC
 * 00000001800B1959: mov     rax, [rdi+rbx*8]
 * 00000001800B195D: mov     eax, [r15+rax]
 * 00000001800B1961: cmp     cs:dword_1801CE520, eax
 * 00000001800B1967: jle     loc_1800B1A40
 * 00000001800B196D: lea     rcx, dword_1801CE520
 * 00000001800B1974: call    sub_18000D534
 * 00000001800B1979: cmp     cs:dword_1801CE520, r14d
 * 00000001800B1980: jnz     loc_1800B1A40
 * 00000001800B1986: lea     rax, unk_180145E80
 * 00000001800B198D: mov     qword ptr [rbp+8C80h+var_79B0], rax
 * 00000001800B1994: lea     rax, unk_180147898
 * 00000001800B199B: mov     qword ptr [rbp+8C80h+var_79B0+8], rax
 * 00000001800B19A2: mov     dword ptr [rbp+8C80h+var_79A0], esi
 * 00000001800B19A8: mov     dword ptr [rbp+8C80h+var_79A0+4], esi
 * 00000001800B19AE: call    sub_1800A8988
 * 00000001800B19B3: mov     r8, rax
 * 00000001800B19B6: mov     r9d, r12d
 * 00000001800B19B9: mov     edx, 20h ; ' '
 * 00000001800B19BE: lea     rcx, [rbp+8C80h+var_2F30]
 * 00000001800B19C5: call    sub_180075CF8
 * 00000001800B19CA: nop
 * 00000001800B19CB: mov     r8, rax
 * 00000001800B19CE: mov     rdx, r13
 * 00000001800B19D1: lea     rcx, [rbp+8C80h+var_2F50]
 * 00000001800B19D8: call    sub_18001C928
 * 00000001800B19DD: nop
 * 00000001800B19DE: lea     r8, aVertex; "/Vertex"
 * 00000001800B19E5: mov     rdx, rax
 * 00000001800B19E8: lea     rcx, [rbp+8C80h+var_5670]
 * 00000001800B19EF: call    sub_18001C87C
 * 00000001800B19F4: movups  xmm0, [rbp+8C80h+var_79B0]
 * 00000001800B19FB: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1A00: movups  xmm1, [rbp+8C80h+var_79A0]
 * 00000001800B1A07: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1A0C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1A11: mov     rcx, rax
 * 00000001800B1A14: call    sub_180075D94
 * 00000001800B1A19: nop
 * 00000001800B1A1A: lea     rcx, [rbp+8C80h+var_2F50]
 * 00000001800B1A21: call    sub_180011E30
 * 00000001800B1A26: nop
 * 00000001800B1A27: lea     rcx, [rbp+8C80h+var_2F30]
 * 00000001800B1A2E: call    sub_180011E30
 * 00000001800B1A33: nop
 * 00000001800B1A34: lea     rcx, dword_1801CE520
 * 00000001800B1A3B: call    sub_18000D4CC
 * 00000001800B1A40: mov     rax, [rdi+rbx*8]
 * 00000001800B1A44: mov     ecx, [r15+rax]
 * 00000001800B1A48: cmp     cs:dword_1801CE524, ecx
 * 00000001800B1A4E: jle     loc_1800B1B27
 * 00000001800B1A54: lea     rcx, dword_1801CE524
 * 00000001800B1A5B: call    sub_18000D534
 * 00000001800B1A60: cmp     cs:dword_1801CE524, r14d
 * 00000001800B1A67: jnz     loc_1800B1B27
 * 00000001800B1A6D: lea     rax, unk_180144990
 * 00000001800B1A74: mov     qword ptr [rbp+8C80h+var_7990], rax
 * 00000001800B1A7B: lea     rax, unk_180145338
 * 00000001800B1A82: mov     qword ptr [rbp+8C80h+var_7990+8], rax
 * 00000001800B1A89: mov     dword ptr [rbp+8C80h+var_7980], esi
 * 00000001800B1A8F: mov     dword ptr [rbp+8C80h+var_7980+4], esi
 * 00000001800B1A95: call    sub_1800A8988
 * 00000001800B1A9A: mov     r8, rax
 * 00000001800B1A9D: mov     r9d, r12d
 * 00000001800B1AA0: mov     edx, 21h ; '!'
 * 00000001800B1AA5: lea     rcx, [rbp+8C80h+var_2ED0]
 * 00000001800B1AAC: call    sub_180075CF8
 * 00000001800B1AB1: nop
 * 00000001800B1AB2: mov     r8, rax
 * 00000001800B1AB5: mov     rdx, r13
 * 00000001800B1AB8: lea     rcx, [rbp+8C80h+var_2EF0]
 * 00000001800B1ABF: call    sub_18001C928
 * 00000001800B1AC4: nop
 * 00000001800B1AC5: lea     r8, aVertex; "/Vertex"
 * 00000001800B1ACC: mov     rdx, rax
 * 00000001800B1ACF: lea     rcx, [rbp+8C80h+var_5650]
 * 00000001800B1AD6: call    sub_18001C87C
 * 00000001800B1ADB: movups  xmm0, [rbp+8C80h+var_7990]
 * 00000001800B1AE2: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1AE7: movups  xmm1, [rbp+8C80h+var_7980]
 * 00000001800B1AEE: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1AF3: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1AF8: mov     rcx, rax
 * 00000001800B1AFB: call    sub_180075D94
 * 00000001800B1B00: nop
 * 00000001800B1B01: lea     rcx, [rbp+8C80h+var_2EF0]
 * 00000001800B1B08: call    sub_180011E30
 * 00000001800B1B0D: nop
 * 00000001800B1B0E: lea     rcx, [rbp+8C80h+var_2ED0]
 * 00000001800B1B15: call    sub_180011E30
 * 00000001800B1B1A: nop
 * 00000001800B1B1B: lea     rcx, dword_1801CE524
 * 00000001800B1B22: call    sub_18000D4CC
 * 00000001800B1B27: mov     rax, [rdi+rbx*8]
 * 00000001800B1B2B: mov     ecx, [r15+rax]
 * 00000001800B1B2F: cmp     cs:dword_1801CE528, ecx
 * 00000001800B1B35: jle     loc_1800B1C0E
 * 00000001800B1B3B: lea     rcx, dword_1801CE528
 * 00000001800B1B42: call    sub_18000D534
 * 00000001800B1B47: cmp     cs:dword_1801CE528, r14d
 * 00000001800B1B4E: jnz     loc_1800B1C0E
 * 00000001800B1B54: lea     rax, unk_180145E80
 * 00000001800B1B5B: mov     qword ptr [rbp+8C80h+var_7970], rax
 * 00000001800B1B62: lea     rax, unk_180147898
 * 00000001800B1B69: mov     qword ptr [rbp+8C80h+var_7970+8], rax
 * 00000001800B1B70: mov     dword ptr [rbp+8C80h+var_7960], esi
 * 00000001800B1B76: mov     dword ptr [rbp+8C80h+var_7960+4], esi
 * 00000001800B1B7C: call    sub_1800A8988
 * 00000001800B1B81: mov     r8, rax
 * 00000001800B1B84: mov     r9d, r12d
 * 00000001800B1B87: mov     edx, 22h ; '"'
 * 00000001800B1B8C: lea     rcx, [rbp+8C80h+var_2E70]
 * 00000001800B1B93: call    sub_180075CF8
 * 00000001800B1B98: nop
 * 00000001800B1B99: mov     r8, rax
 * 00000001800B1B9C: mov     rdx, r13
 * 00000001800B1B9F: lea     rcx, [rbp+8C80h+var_2E90]
 * 00000001800B1BA6: call    sub_18001C928
 * 00000001800B1BAB: nop
 * 00000001800B1BAC: lea     r8, aVertex; "/Vertex"
 * 00000001800B1BB3: mov     rdx, rax
 * 00000001800B1BB6: lea     rcx, [rbp+8C80h+var_5630]
 * 00000001800B1BBD: call    sub_18001C87C
 * 00000001800B1BC2: movups  xmm0, [rbp+8C80h+var_7970]
 * 00000001800B1BC9: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1BCE: movups  xmm1, [rbp+8C80h+var_7960]
 * 00000001800B1BD5: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1BDA: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1BDF: mov     rcx, rax
 * 00000001800B1BE2: call    sub_180075D94
 * 00000001800B1BE7: nop
 * 00000001800B1BE8: lea     rcx, [rbp+8C80h+var_2E90]
 * 00000001800B1BEF: call    sub_180011E30
 * 00000001800B1BF4: nop
 * 00000001800B1BF5: lea     rcx, [rbp+8C80h+var_2E70]
 * 00000001800B1BFC: call    sub_180011E30
 * 00000001800B1C01: nop
 * 00000001800B1C02: lea     rcx, dword_1801CE528
 * 00000001800B1C09: call    sub_18000D4CC
 * 00000001800B1C0E: mov     rax, [rdi+rbx*8]
 * 00000001800B1C12: mov     ecx, [r15+rax]
 * 00000001800B1C16: cmp     cs:dword_1801CE52C, ecx
 * 00000001800B1C1C: jle     loc_1800B1CF5
 * 00000001800B1C22: lea     rcx, dword_1801CE52C
 * 00000001800B1C29: call    sub_18000D534
 * 00000001800B1C2E: cmp     cs:dword_1801CE52C, r14d
 * 00000001800B1C35: jnz     loc_1800B1CF5
 * 00000001800B1C3B: lea     rax, unk_180145E80
 * 00000001800B1C42: mov     qword ptr [rbp+8C80h+var_7950], rax
 * 00000001800B1C49: lea     rax, unk_180147898
 * 00000001800B1C50: mov     qword ptr [rbp+8C80h+var_7950+8], rax
 * 00000001800B1C57: mov     dword ptr [rbp+8C80h+var_7940], esi
 * 00000001800B1C5D: mov     dword ptr [rbp+8C80h+var_7940+4], esi
 * 00000001800B1C63: call    sub_1800A8988
 * 00000001800B1C68: mov     r8, rax
 * 00000001800B1C6B: mov     r9d, r12d
 * 00000001800B1C6E: mov     edx, 28h ; '('
 * 00000001800B1C73: lea     rcx, [rbp+8C80h+var_2E10]
 * 00000001800B1C7A: call    sub_180075CF8
 * 00000001800B1C7F: nop
 * 00000001800B1C80: mov     r8, rax
 * 00000001800B1C83: mov     rdx, r13
 * 00000001800B1C86: lea     rcx, [rbp+8C80h+var_2E30]
 * 00000001800B1C8D: call    sub_18001C928
 * 00000001800B1C92: nop
 * 00000001800B1C93: lea     r8, aVertex; "/Vertex"
 * 00000001800B1C9A: mov     rdx, rax
 * 00000001800B1C9D: lea     rcx, [rbp+8C80h+var_5610]
 * 00000001800B1CA4: call    sub_18001C87C
 * 00000001800B1CA9: movups  xmm0, [rbp+8C80h+var_7950]
 * 00000001800B1CB0: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1CB5: movups  xmm1, [rbp+8C80h+var_7940]
 * 00000001800B1CBC: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1CC1: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1CC6: mov     rcx, rax
 * 00000001800B1CC9: call    sub_180075D94
 * 00000001800B1CCE: nop
 * 00000001800B1CCF: lea     rcx, [rbp+8C80h+var_2E30]
 * 00000001800B1CD6: call    sub_180011E30
 * 00000001800B1CDB: nop
 * 00000001800B1CDC: lea     rcx, [rbp+8C80h+var_2E10]
 * 00000001800B1CE3: call    sub_180011E30
 * 00000001800B1CE8: nop
 * 00000001800B1CE9: lea     rcx, dword_1801CE52C
 * 00000001800B1CF0: call    sub_18000D4CC
 * 00000001800B1CF5: mov     rax, [rdi+rbx*8]
 * 00000001800B1CF9: mov     ecx, [r15+rax]
 * 00000001800B1CFD: cmp     cs:dword_1801CE530, ecx
 * 00000001800B1D03: jle     loc_1800B1DDC
 * 00000001800B1D09: lea     rcx, dword_1801CE530
 * 00000001800B1D10: call    sub_18000D534
 * 00000001800B1D15: cmp     cs:dword_1801CE530, r14d
 * 00000001800B1D1C: jnz     loc_1800B1DDC
 * 00000001800B1D22: lea     rax, unk_180145340
 * 00000001800B1D29: mov     qword ptr [rbp+8C80h+var_7930], rax
 * 00000001800B1D30: lea     rax, unk_180145E7C
 * 00000001800B1D37: mov     qword ptr [rbp+8C80h+var_7930+8], rax
 * 00000001800B1D3E: mov     dword ptr [rbp+8C80h+var_7920], esi
 * 00000001800B1D44: mov     dword ptr [rbp+8C80h+var_7920+4], esi
 * 00000001800B1D4A: call    sub_1800A8988
 * 00000001800B1D4F: mov     r8, rax
 * 00000001800B1D52: mov     r9d, r12d
 * 00000001800B1D55: mov     edx, 29h ; ')'
 * 00000001800B1D5A: lea     rcx, [rbp+8C80h+var_2DB0]
 * 00000001800B1D61: call    sub_180075CF8
 * 00000001800B1D66: nop
 * 00000001800B1D67: mov     r8, rax
 * 00000001800B1D6A: mov     rdx, r13
 * 00000001800B1D6D: lea     rcx, [rbp+8C80h+var_2DD0]
 * 00000001800B1D74: call    sub_18001C928
 * 00000001800B1D79: nop
 * 00000001800B1D7A: lea     r8, aVertex; "/Vertex"
 * 00000001800B1D81: mov     rdx, rax
 * 00000001800B1D84: lea     rcx, [rbp+8C80h+var_55F0]
 * 00000001800B1D8B: call    sub_18001C87C
 * 00000001800B1D90: movups  xmm0, [rbp+8C80h+var_7930]
 * 00000001800B1D97: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1D9C: movups  xmm1, [rbp+8C80h+var_7920]
 * 00000001800B1DA3: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1DA8: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1DAD: mov     rcx, rax
 * 00000001800B1DB0: call    sub_180075D94
 * 00000001800B1DB5: nop
 * 00000001800B1DB6: lea     rcx, [rbp+8C80h+var_2DD0]
 * 00000001800B1DBD: call    sub_180011E30
 * 00000001800B1DC2: nop
 * 00000001800B1DC3: lea     rcx, [rbp+8C80h+var_2DB0]
 * 00000001800B1DCA: call    sub_180011E30
 * 00000001800B1DCF: nop
 * 00000001800B1DD0: lea     rcx, dword_1801CE530
 * 00000001800B1DD7: call    sub_18000D4CC
 * 00000001800B1DDC: mov     rax, [rdi+rbx*8]
 * 00000001800B1DE0: mov     ecx, [r15+rax]
 * 00000001800B1DE4: cmp     cs:dword_1801CE534, ecx
 * 00000001800B1DEA: jle     loc_1800B1EC3
 * 00000001800B1DF0: lea     rcx, dword_1801CE534
 * 00000001800B1DF7: call    sub_18000D534
 * 00000001800B1DFC: cmp     cs:dword_1801CE534, r14d
 * 00000001800B1E03: jnz     loc_1800B1EC3
 * 00000001800B1E09: lea     rax, unk_180145E80
 * 00000001800B1E10: mov     qword ptr [rbp+8C80h+var_7910], rax
 * 00000001800B1E17: lea     rax, unk_180147898
 * 00000001800B1E1E: mov     qword ptr [rbp+8C80h+var_7910+8], rax
 * 00000001800B1E25: mov     dword ptr [rbp+8C80h+var_7900], esi
 * 00000001800B1E2B: mov     dword ptr [rbp+8C80h+var_7900+4], esi
 * 00000001800B1E31: call    sub_1800A8988
 * 00000001800B1E36: mov     r8, rax
 * 00000001800B1E39: mov     r9d, r12d
 * 00000001800B1E3C: mov     edx, 2Ah ; '*'
 * 00000001800B1E41: lea     rcx, [rbp+8C80h+var_2D50]
 * 00000001800B1E48: call    sub_180075CF8
 * 00000001800B1E4D: nop
 * 00000001800B1E4E: mov     r8, rax
 * 00000001800B1E51: mov     rdx, r13
 * 00000001800B1E54: lea     rcx, [rbp+8C80h+var_2D70]
 * 00000001800B1E5B: call    sub_18001C928
 * 00000001800B1E60: nop
 * 00000001800B1E61: lea     r8, aVertex; "/Vertex"
 * 00000001800B1E68: mov     rdx, rax
 * 00000001800B1E6B: lea     rcx, [rbp+8C80h+var_55D0]
 * 00000001800B1E72: call    sub_18001C87C
 * 00000001800B1E77: movups  xmm0, [rbp+8C80h+var_7910]
 * 00000001800B1E7E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1E83: movups  xmm1, [rbp+8C80h+var_7900]
 * 00000001800B1E8A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1E8F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1E94: mov     rcx, rax
 * 00000001800B1E97: call    sub_180075D94
 * 00000001800B1E9C: nop
 * 00000001800B1E9D: lea     rcx, [rbp+8C80h+var_2D70]
 * 00000001800B1EA4: call    sub_180011E30
 * 00000001800B1EA9: nop
 * 00000001800B1EAA: lea     rcx, [rbp+8C80h+var_2D50]
 * 00000001800B1EB1: call    sub_180011E30
 * 00000001800B1EB6: nop
 * 00000001800B1EB7: lea     rcx, dword_1801CE534
 * 00000001800B1EBE: call    sub_18000D4CC
 * 00000001800B1EC3: mov     rax, [rdi+rbx*8]
 * 00000001800B1EC7: mov     ecx, [r15+rax]
 * 00000001800B1ECB: cmp     cs:dword_1801CE538, ecx
 * 00000001800B1ED1: jle     loc_1800B1FAA
 * 00000001800B1ED7: lea     rcx, dword_1801CE538
 * 00000001800B1EDE: call    sub_18000D534
 * 00000001800B1EE3: cmp     cs:dword_1801CE538, r14d
 * 00000001800B1EEA: jnz     loc_1800B1FAA
 * 00000001800B1EF0: lea     rax, unk_180145E80
 * 00000001800B1EF7: mov     qword ptr [rbp+8C80h+var_78F0], rax
 * 00000001800B1EFE: lea     rax, unk_180147898
 * 00000001800B1F05: mov     qword ptr [rbp+8C80h+var_78F0+8], rax
 * 00000001800B1F0C: mov     dword ptr [rbp+8C80h+var_78E0], esi
 * 00000001800B1F12: mov     dword ptr [rbp+8C80h+var_78E0+4], esi
 * 00000001800B1F18: call    sub_1800A8988
 * 00000001800B1F1D: mov     r8, rax
 * 00000001800B1F20: mov     r9d, r12d
 * 00000001800B1F23: mov     edx, 30h ; '0'
 * 00000001800B1F28: lea     rcx, [rbp+8C80h+var_2CF0]
 * 00000001800B1F2F: call    sub_180075CF8
 * 00000001800B1F34: nop
 * 00000001800B1F35: mov     r8, rax
 * 00000001800B1F38: mov     rdx, r13
 * 00000001800B1F3B: lea     rcx, [rbp+8C80h+var_2D10]
 * 00000001800B1F42: call    sub_18001C928
 * 00000001800B1F47: nop
 * 00000001800B1F48: lea     r8, aVertex; "/Vertex"
 * 00000001800B1F4F: mov     rdx, rax
 * 00000001800B1F52: lea     rcx, [rbp+8C80h+var_55B0]
 * 00000001800B1F59: call    sub_18001C87C
 * 00000001800B1F5E: movups  xmm0, [rbp+8C80h+var_78F0]
 * 00000001800B1F65: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B1F6A: movups  xmm1, [rbp+8C80h+var_78E0]
 * 00000001800B1F71: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B1F76: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B1F7B: mov     rcx, rax
 * 00000001800B1F7E: call    sub_180075D94
 * 00000001800B1F83: nop
 * 00000001800B1F84: lea     rcx, [rbp+8C80h+var_2D10]
 * 00000001800B1F8B: call    sub_180011E30
 * 00000001800B1F90: nop
 * 00000001800B1F91: lea     rcx, [rbp+8C80h+var_2CF0]
 * 00000001800B1F98: call    sub_180011E30
 * 00000001800B1F9D: nop
 * 00000001800B1F9E: lea     rcx, dword_1801CE538
 * 00000001800B1FA5: call    sub_18000D4CC
 * 00000001800B1FAA: mov     rax, [rdi+rbx*8]
 * 00000001800B1FAE: mov     ecx, [r15+rax]
 * 00000001800B1FB2: cmp     cs:dword_1801CE53C, ecx
 * 00000001800B1FB8: jle     loc_1800B2091
 * 00000001800B1FBE: lea     rcx, dword_1801CE53C
 * 00000001800B1FC5: call    sub_18000D534
 * 00000001800B1FCA: cmp     cs:dword_1801CE53C, r14d
 * 00000001800B1FD1: jnz     loc_1800B2091
 * 00000001800B1FD7: lea     rax, unk_180145E80
 * 00000001800B1FDE: mov     qword ptr [rbp+8C80h+var_78D0], rax
 * 00000001800B1FE5: lea     rax, unk_180147898
 * 00000001800B1FEC: mov     qword ptr [rbp+8C80h+var_78D0+8], rax
 * 00000001800B1FF3: mov     dword ptr [rbp+8C80h+var_78C0], esi
 * 00000001800B1FF9: mov     dword ptr [rbp+8C80h+var_78C0+4], esi
 * 00000001800B1FFF: call    sub_1800A8988
 * 00000001800B2004: mov     r8, rax
 * 00000001800B2007: mov     r9d, r12d
 * 00000001800B200A: mov     edx, 32h ; '2'
 * 00000001800B200F: lea     rcx, [rbp+8C80h+var_2C90]
 * 00000001800B2016: call    sub_180075CF8
 * 00000001800B201B: nop
 * 00000001800B201C: mov     r8, rax
 * 00000001800B201F: mov     rdx, r13
 * 00000001800B2022: lea     rcx, [rbp+8C80h+var_2CB0]
 * 00000001800B2029: call    sub_18001C928
 * 00000001800B202E: nop
 * 00000001800B202F: lea     r8, aVertex; "/Vertex"
 * 00000001800B2036: mov     rdx, rax
 * 00000001800B2039: lea     rcx, [rbp+8C80h+var_5590]
 * 00000001800B2040: call    sub_18001C87C
 * 00000001800B2045: movups  xmm0, [rbp+8C80h+var_78D0]
 * 00000001800B204C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2051: movups  xmm1, [rbp+8C80h+var_78C0]
 * 00000001800B2058: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B205D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2062: mov     rcx, rax
 * 00000001800B2065: call    sub_180075D94
 * 00000001800B206A: nop
 * 00000001800B206B: lea     rcx, [rbp+8C80h+var_2CB0]
 * 00000001800B2072: call    sub_180011E30
 * 00000001800B2077: nop
 * 00000001800B2078: lea     rcx, [rbp+8C80h+var_2C90]
 * 00000001800B207F: call    sub_180011E30
 * 00000001800B2084: nop
 * 00000001800B2085: lea     rcx, dword_1801CE53C
 * 00000001800B208C: call    sub_18000D4CC
 * 00000001800B2091: mov     rax, [rdi+rbx*8]
 * 00000001800B2095: mov     ecx, [r15+rax]
 * 00000001800B2099: cmp     cs:dword_1801CE540, ecx
 * 00000001800B209F: jle     loc_1800B2178
 * 00000001800B20A5: lea     rcx, dword_1801CE540
 * 00000001800B20AC: call    sub_18000D534
 * 00000001800B20B1: cmp     cs:dword_1801CE540, r14d
 * 00000001800B20B8: jnz     loc_1800B2178
 * 00000001800B20BE: lea     rax, unk_180145E80
 * 00000001800B20C5: mov     qword ptr [rbp+8C80h+var_78B0], rax
 * 00000001800B20CC: lea     rax, unk_180147898
 * 00000001800B20D3: mov     qword ptr [rbp+8C80h+var_78B0+8], rax
 * 00000001800B20DA: mov     dword ptr [rbp+8C80h+var_78A0], esi
 * 00000001800B20E0: mov     dword ptr [rbp+8C80h+var_78A0+4], esi
 * 00000001800B20E6: call    sub_1800A8988
 * 00000001800B20EB: mov     r8, rax
 * 00000001800B20EE: mov     r9d, r12d
 * 00000001800B20F1: mov     edx, 38h ; '8'
 * 00000001800B20F6: lea     rcx, [rbp+8C80h+var_2C30]
 * 00000001800B20FD: call    sub_180075CF8
 * 00000001800B2102: nop
 * 00000001800B2103: mov     r8, rax
 * 00000001800B2106: mov     rdx, r13
 * 00000001800B2109: lea     rcx, [rbp+8C80h+var_2C50]
 * 00000001800B2110: call    sub_18001C928
 * 00000001800B2115: nop
 * 00000001800B2116: lea     r8, aVertex; "/Vertex"
 * 00000001800B211D: mov     rdx, rax
 * 00000001800B2120: lea     rcx, [rbp+8C80h+var_5570]
 * 00000001800B2127: call    sub_18001C87C
 * 00000001800B212C: movups  xmm0, [rbp+8C80h+var_78B0]
 * 00000001800B2133: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2138: movups  xmm1, [rbp+8C80h+var_78A0]
 * 00000001800B213F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2144: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2149: mov     rcx, rax
 * 00000001800B214C: call    sub_180075D94
 * 00000001800B2151: nop
 * 00000001800B2152: lea     rcx, [rbp+8C80h+var_2C50]
 * 00000001800B2159: call    sub_180011E30
 * 00000001800B215E: nop
 * 00000001800B215F: lea     rcx, [rbp+8C80h+var_2C30]
 * 00000001800B2166: call    sub_180011E30
 * 00000001800B216B: nop
 * 00000001800B216C: lea     rcx, dword_1801CE540
 * 00000001800B2173: call    sub_18000D4CC
 * 00000001800B2178: mov     rax, [rdi+rbx*8]
 * 00000001800B217C: mov     ecx, [r15+rax]
 * 00000001800B2180: cmp     cs:dword_1801CE544, ecx
 * 00000001800B2186: jle     loc_1800B225F
 * 00000001800B218C: lea     rcx, dword_1801CE544
 * 00000001800B2193: call    sub_18000D534
 * 00000001800B2198: cmp     cs:dword_1801CE544, r14d
 * 00000001800B219F: jnz     loc_1800B225F
 * 00000001800B21A5: lea     rax, unk_180145E80
 * 00000001800B21AC: mov     qword ptr [rbp+8C80h+var_7890], rax
 * 00000001800B21B3: lea     rax, unk_180147898
 * 00000001800B21BA: mov     qword ptr [rbp+8C80h+var_7890+8], rax
 * 00000001800B21C1: mov     dword ptr [rbp+8C80h+var_7880], esi
 * 00000001800B21C7: mov     dword ptr [rbp+8C80h+var_7880+4], esi
 * 00000001800B21CD: call    sub_1800A8988
 * 00000001800B21D2: mov     r8, rax
 * 00000001800B21D5: mov     r9d, r12d
 * 00000001800B21D8: mov     edx, 3Ah ; ':'
 * 00000001800B21DD: lea     rcx, [rbp+8C80h+var_2BD0]
 * 00000001800B21E4: call    sub_180075CF8
 * 00000001800B21E9: nop
 * 00000001800B21EA: mov     r8, rax
 * 00000001800B21ED: mov     rdx, r13
 * 00000001800B21F0: lea     rcx, [rbp+8C80h+var_2BF0]
 * 00000001800B21F7: call    sub_18001C928
 * 00000001800B21FC: nop
 * 00000001800B21FD: lea     r8, aVertex; "/Vertex"
 * 00000001800B2204: mov     rdx, rax
 * 00000001800B2207: lea     rcx, [rbp+8C80h+var_5550]
 * 00000001800B220E: call    sub_18001C87C
 * 00000001800B2213: movups  xmm0, [rbp+8C80h+var_7890]
 * 00000001800B221A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B221F: movups  xmm1, [rbp+8C80h+var_7880]
 * 00000001800B2226: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B222B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2230: mov     rcx, rax
 * 00000001800B2233: call    sub_180075D94
 * 00000001800B2238: nop
 * 00000001800B2239: lea     rcx, [rbp+8C80h+var_2BF0]
 * 00000001800B2240: call    sub_180011E30
 * 00000001800B2245: nop
 * 00000001800B2246: lea     rcx, [rbp+8C80h+var_2BD0]
 * 00000001800B224D: call    sub_180011E30
 * 00000001800B2252: nop
 * 00000001800B2253: lea     rcx, dword_1801CE544
 * 00000001800B225A: call    sub_18000D4CC
 * 00000001800B225F: mov     rax, [rdi+rbx*8]
 * 00000001800B2263: mov     eax, [r15+rax]
 * 00000001800B2267: cmp     cs:dword_1801CE548, eax
 * 00000001800B226D: jle     loc_1800B2346
 * 00000001800B2273: lea     rcx, dword_1801CE548
 * 00000001800B227A: call    sub_18000D534
 * 00000001800B227F: cmp     cs:dword_1801CE548, r14d
 * 00000001800B2286: jnz     loc_1800B2346
 * 00000001800B228C: lea     rax, unk_1801492F0
 * 00000001800B2293: mov     qword ptr [rbp+8C80h+var_7870], rax
 * 00000001800B229A: lea     rax, unk_18014A340
 * 00000001800B22A1: mov     qword ptr [rbp+8C80h+var_7870+8], rax
 * 00000001800B22A8: mov     dword ptr [rbp+8C80h+var_7860], esi
 * 00000001800B22AE: mov     dword ptr [rbp+8C80h+var_7860+4], esi
 * 00000001800B22B4: call    sub_1800A8988
 * 00000001800B22B9: mov     r8, rax
 * 00000001800B22BC: mov     r9d, r12d
 * 00000001800B22BF: mov     edx, 40h ; '@'
 * 00000001800B22C4: lea     rcx, [rbp+8C80h+var_2B70]
 * 00000001800B22CB: call    sub_180075CF8
 * 00000001800B22D0: nop
 * 00000001800B22D1: mov     r8, rax
 * 00000001800B22D4: mov     rdx, r13
 * 00000001800B22D7: lea     rcx, [rbp+8C80h+var_2B90]
 * 00000001800B22DE: call    sub_18001C928
 * 00000001800B22E3: nop
 * 00000001800B22E4: lea     r8, aVertex; "/Vertex"
 * 00000001800B22EB: mov     rdx, rax
 * 00000001800B22EE: lea     rcx, [rbp+8C80h+var_5530]
 * 00000001800B22F5: call    sub_18001C87C
 * 00000001800B22FA: movups  xmm0, [rbp+8C80h+var_7870]
 * 00000001800B2301: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2306: movups  xmm1, [rbp+8C80h+var_7860]
 * 00000001800B230D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2312: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2317: mov     rcx, rax
 * 00000001800B231A: call    sub_180075D94
 * 00000001800B231F: nop
 * 00000001800B2320: lea     rcx, [rbp+8C80h+var_2B90]
 * 00000001800B2327: call    sub_180011E30
 * 00000001800B232C: nop
 * 00000001800B232D: lea     rcx, [rbp+8C80h+var_2B70]
 * 00000001800B2334: call    sub_180011E30
 * 00000001800B2339: nop
 * 00000001800B233A: lea     rcx, dword_1801CE548
 * 00000001800B2341: call    sub_18000D4CC
 * 00000001800B2346: mov     rax, [rdi+rbx*8]
 * 00000001800B234A: mov     ecx, [r15+rax]
 * 00000001800B234E: cmp     cs:dword_1801CE54C, ecx
 * 00000001800B2354: jle     loc_1800B242D
 * 00000001800B235A: lea     rcx, dword_1801CE54C
 * 00000001800B2361: call    sub_18000D534
 * 00000001800B2366: cmp     cs:dword_1801CE54C, r14d
 * 00000001800B236D: jnz     loc_1800B242D
 * 00000001800B2373: lea     rax, unk_1801492F0
 * 00000001800B237A: mov     qword ptr [rbp+8C80h+var_7850], rax
 * 00000001800B2381: lea     rax, unk_18014A340
 * 00000001800B2388: mov     qword ptr [rbp+8C80h+var_7850+8], rax
 * 00000001800B238F: mov     dword ptr [rbp+8C80h+var_7840], esi
 * 00000001800B2395: mov     dword ptr [rbp+8C80h+var_7840+4], esi
 * 00000001800B239B: call    sub_1800A8988
 * 00000001800B23A0: mov     r8, rax
 * 00000001800B23A3: mov     r9d, r12d
 * 00000001800B23A6: mov     edx, 42h ; 'B'
 * 00000001800B23AB: lea     rcx, [rbp+8C80h+var_2B10]
 * 00000001800B23B2: call    sub_180075CF8
 * 00000001800B23B7: nop
 * 00000001800B23B8: mov     r8, rax
 * 00000001800B23BB: mov     rdx, r13
 * 00000001800B23BE: lea     rcx, [rbp+8C80h+var_2B30]
 * 00000001800B23C5: call    sub_18001C928
 * 00000001800B23CA: nop
 * 00000001800B23CB: lea     r8, aVertex; "/Vertex"
 * 00000001800B23D2: mov     rdx, rax
 * 00000001800B23D5: lea     rcx, [rbp+8C80h+var_5510]
 * 00000001800B23DC: call    sub_18001C87C
 * 00000001800B23E1: movups  xmm0, [rbp+8C80h+var_7850]
 * 00000001800B23E8: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B23ED: movups  xmm1, [rbp+8C80h+var_7840]
 * 00000001800B23F4: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B23F9: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B23FE: mov     rcx, rax
 * 00000001800B2401: call    sub_180075D94
 * 00000001800B2406: nop
 * 00000001800B2407: lea     rcx, [rbp+8C80h+var_2B30]
 * 00000001800B240E: call    sub_180011E30
 * 00000001800B2413: nop
 * 00000001800B2414: lea     rcx, [rbp+8C80h+var_2B10]
 * 00000001800B241B: call    sub_180011E30
 * 00000001800B2420: nop
 * 00000001800B2421: lea     rcx, dword_1801CE54C
 * 00000001800B2428: call    sub_18000D4CC
 * 00000001800B242D: mov     rax, [rdi+rbx*8]
 * 00000001800B2431: mov     ecx, [r15+rax]
 * 00000001800B2435: cmp     cs:dword_1801CE550, ecx
 * 00000001800B243B: jle     loc_1800B2514
 * 00000001800B2441: lea     rcx, dword_1801CE550
 * 00000001800B2448: call    sub_18000D534
 * 00000001800B244D: cmp     cs:dword_1801CE550, r14d
 * 00000001800B2454: jnz     loc_1800B2514
 * 00000001800B245A: lea     rax, unk_1801492F0
 * 00000001800B2461: mov     qword ptr [rbp+8C80h+var_7830], rax
 * 00000001800B2468: lea     rax, unk_18014A340
 * 00000001800B246F: mov     qword ptr [rbp+8C80h+var_7830+8], rax
 * 00000001800B2476: mov     dword ptr [rbp+8C80h+var_7820], esi
 * 00000001800B247C: mov     dword ptr [rbp+8C80h+var_7820+4], esi
 * 00000001800B2482: call    sub_1800A8988
 * 00000001800B2487: mov     r8, rax
 * 00000001800B248A: mov     r9d, r12d
 * 00000001800B248D: mov     edx, 48h ; 'H'
 * 00000001800B2492: lea     rcx, [rbp+8C80h+var_2AB0]
 * 00000001800B2499: call    sub_180075CF8
 * 00000001800B249E: nop
 * 00000001800B249F: mov     r8, rax
 * 00000001800B24A2: mov     rdx, r13
 * 00000001800B24A5: lea     rcx, [rbp+8C80h+var_2AD0]
 * 00000001800B24AC: call    sub_18001C928
 * 00000001800B24B1: nop
 * 00000001800B24B2: lea     r8, aVertex; "/Vertex"
 * 00000001800B24B9: mov     rdx, rax
 * 00000001800B24BC: lea     rcx, [rbp+8C80h+var_54F0]
 * 00000001800B24C3: call    sub_18001C87C
 * 00000001800B24C8: movups  xmm0, [rbp+8C80h+var_7830]
 * 00000001800B24CF: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B24D4: movups  xmm1, [rbp+8C80h+var_7820]
 * 00000001800B24DB: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B24E0: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B24E5: mov     rcx, rax
 * 00000001800B24E8: call    sub_180075D94
 * 00000001800B24ED: nop
 * 00000001800B24EE: lea     rcx, [rbp+8C80h+var_2AD0]
 * 00000001800B24F5: call    sub_180011E30
 * 00000001800B24FA: nop
 * 00000001800B24FB: lea     rcx, [rbp+8C80h+var_2AB0]
 * 00000001800B2502: call    sub_180011E30
 * 00000001800B2507: nop
 * 00000001800B2508: lea     rcx, dword_1801CE550
 * 00000001800B250F: call    sub_18000D4CC
 * 00000001800B2514: mov     rax, [rdi+rbx*8]
 * 00000001800B2518: mov     ecx, [r15+rax]
 * 00000001800B251C: cmp     cs:dword_1801CE554, ecx
 * 00000001800B2522: jle     loc_1800B25FB
 * 00000001800B2528: lea     rcx, dword_1801CE554
 * 00000001800B252F: call    sub_18000D534
 * 00000001800B2534: cmp     cs:dword_1801CE554, r14d
 * 00000001800B253B: jnz     loc_1800B25FB
 * 00000001800B2541: lea     rax, unk_1801492F0
 * 00000001800B2548: mov     qword ptr [rbp+8C80h+var_7810], rax
 * 00000001800B254F: lea     rax, unk_18014A340
 * 00000001800B2556: mov     qword ptr [rbp+8C80h+var_7810+8], rax
 * 00000001800B255D: mov     dword ptr [rbp+8C80h+var_7800], esi
 * 00000001800B2563: mov     dword ptr [rbp+8C80h+var_7800+4], esi
 * 00000001800B2569: call    sub_1800A8988
 * 00000001800B256E: mov     r8, rax
 * 00000001800B2571: mov     r9d, r12d
 * 00000001800B2574: mov     edx, 4Ah ; 'J'
 * 00000001800B2579: lea     rcx, [rbp+8C80h+var_2A50]
 * 00000001800B2580: call    sub_180075CF8
 * 00000001800B2585: nop
 * 00000001800B2586: mov     r8, rax
 * 00000001800B2589: mov     rdx, r13
 * 00000001800B258C: lea     rcx, [rbp+8C80h+var_2A70]
 * 00000001800B2593: call    sub_18001C928
 * 00000001800B2598: nop
 * 00000001800B2599: lea     r8, aVertex; "/Vertex"
 * 00000001800B25A0: mov     rdx, rax
 * 00000001800B25A3: lea     rcx, [rbp+8C80h+var_54D0]
 * 00000001800B25AA: call    sub_18001C87C
 * 00000001800B25AF: movups  xmm0, [rbp+8C80h+var_7810]
 * 00000001800B25B6: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B25BB: movups  xmm1, [rbp+8C80h+var_7800]
 * 00000001800B25C2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B25C7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B25CC: mov     rcx, rax
 * 00000001800B25CF: call    sub_180075D94
 * 00000001800B25D4: nop
 * 00000001800B25D5: lea     rcx, [rbp+8C80h+var_2A70]
 * 00000001800B25DC: call    sub_180011E30
 * 00000001800B25E1: nop
 * 00000001800B25E2: lea     rcx, [rbp+8C80h+var_2A50]
 * 00000001800B25E9: call    sub_180011E30
 * 00000001800B25EE: nop
 * 00000001800B25EF: lea     rcx, dword_1801CE554
 * 00000001800B25F6: call    sub_18000D4CC
 * 00000001800B25FB: mov     rax, [rdi+rbx*8]
 * 00000001800B25FF: mov     ecx, [r15+rax]
 * 00000001800B2603: cmp     cs:dword_1801CE558, ecx
 * 00000001800B2609: jle     loc_1800B26E2
 * 00000001800B260F: lea     rcx, dword_1801CE558
 * 00000001800B2616: call    sub_18000D534
 * 00000001800B261B: cmp     cs:dword_1801CE558, r14d
 * 00000001800B2622: jnz     loc_1800B26E2
 * 00000001800B2628: lea     rax, unk_1801492F0
 * 00000001800B262F: mov     qword ptr [rbp+8C80h+var_77F0], rax
 * 00000001800B2636: lea     rax, unk_18014A340
 * 00000001800B263D: mov     qword ptr [rbp+8C80h+var_77F0+8], rax
 * 00000001800B2644: mov     dword ptr [rbp+8C80h+var_77E0], esi
 * 00000001800B264A: mov     dword ptr [rbp+8C80h+var_77E0+4], esi
 * 00000001800B2650: call    sub_1800A8988
 * 00000001800B2655: mov     r8, rax
 * 00000001800B2658: mov     r9d, r12d
 * 00000001800B265B: mov     edx, 50h ; 'P'
 * 00000001800B2660: lea     rcx, [rbp+8C80h+var_29F0]
 * 00000001800B2667: call    sub_180075CF8
 * 00000001800B266C: nop
 * 00000001800B266D: mov     r8, rax
 * 00000001800B2670: mov     rdx, r13
 * 00000001800B2673: lea     rcx, [rbp+8C80h+var_2A10]
 * 00000001800B267A: call    sub_18001C928
 * 00000001800B267F: nop
 * 00000001800B2680: lea     r8, aVertex; "/Vertex"
 * 00000001800B2687: mov     rdx, rax
 * 00000001800B268A: lea     rcx, [rbp+8C80h+var_54B0]
 * 00000001800B2691: call    sub_18001C87C
 * 00000001800B2696: movups  xmm0, [rbp+8C80h+var_77F0]
 * 00000001800B269D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B26A2: movups  xmm1, [rbp+8C80h+var_77E0]
 * 00000001800B26A9: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B26AE: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B26B3: mov     rcx, rax
 * 00000001800B26B6: call    sub_180075D94
 * 00000001800B26BB: nop
 * 00000001800B26BC: lea     rcx, [rbp+8C80h+var_2A10]
 * 00000001800B26C3: call    sub_180011E30
 * 00000001800B26C8: nop
 * 00000001800B26C9: lea     rcx, [rbp+8C80h+var_29F0]
 * 00000001800B26D0: call    sub_180011E30
 * 00000001800B26D5: nop
 * 00000001800B26D6: lea     rcx, dword_1801CE558
 * 00000001800B26DD: call    sub_18000D4CC
 * 00000001800B26E2: mov     rax, [rdi+rbx*8]
 * 00000001800B26E6: mov     ecx, [r15+rax]
 * 00000001800B26EA: cmp     cs:dword_1801CE55C, ecx
 * 00000001800B26F0: jle     loc_1800B27C9
 * 00000001800B26F6: lea     rcx, dword_1801CE55C
 * 00000001800B26FD: call    sub_18000D534
 * 00000001800B2702: cmp     cs:dword_1801CE55C, r14d
 * 00000001800B2709: jnz     loc_1800B27C9
 * 00000001800B270F: lea     rax, unk_1801492F0
 * 00000001800B2716: mov     qword ptr [rbp+8C80h+var_77D0], rax
 * 00000001800B271D: lea     rax, unk_18014A340
 * 00000001800B2724: mov     qword ptr [rbp+8C80h+var_77D0+8], rax
 * 00000001800B272B: mov     dword ptr [rbp+8C80h+var_77C0], esi
 * 00000001800B2731: mov     dword ptr [rbp+8C80h+var_77C0+4], esi
 * 00000001800B2737: call    sub_1800A8988
 * 00000001800B273C: mov     r8, rax
 * 00000001800B273F: mov     r9d, r12d
 * 00000001800B2742: mov     edx, 52h ; 'R'
 * 00000001800B2747: lea     rcx, [rbp+8C80h+var_2990]
 * 00000001800B274E: call    sub_180075CF8
 * 00000001800B2753: nop
 * 00000001800B2754: mov     r8, rax
 * 00000001800B2757: mov     rdx, r13
 * 00000001800B275A: lea     rcx, [rbp+8C80h+var_29B0]
 * 00000001800B2761: call    sub_18001C928
 * 00000001800B2766: nop
 * 00000001800B2767: lea     r8, aVertex; "/Vertex"
 * 00000001800B276E: mov     rdx, rax
 * 00000001800B2771: lea     rcx, [rbp+8C80h+var_5490]
 * 00000001800B2778: call    sub_18001C87C
 * 00000001800B277D: movups  xmm0, [rbp+8C80h+var_77D0]
 * 00000001800B2784: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2789: movups  xmm1, [rbp+8C80h+var_77C0]
 * 00000001800B2790: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2795: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B279A: mov     rcx, rax
 * 00000001800B279D: call    sub_180075D94
 * 00000001800B27A2: nop
 * 00000001800B27A3: lea     rcx, [rbp+8C80h+var_29B0]
 * 00000001800B27AA: call    sub_180011E30
 * 00000001800B27AF: nop
 * 00000001800B27B0: lea     rcx, [rbp+8C80h+var_2990]
 * 00000001800B27B7: call    sub_180011E30
 * 00000001800B27BC: nop
 * 00000001800B27BD: lea     rcx, dword_1801CE55C
 * 00000001800B27C4: call    sub_18000D4CC
 * 00000001800B27C9: mov     rax, [rdi+rbx*8]
 * 00000001800B27CD: mov     ecx, [r15+rax]
 * 00000001800B27D1: cmp     cs:dword_1801CE560, ecx
 * 00000001800B27D7: jle     loc_1800B28B0
 * 00000001800B27DD: lea     rcx, dword_1801CE560
 * 00000001800B27E4: call    sub_18000D534
 * 00000001800B27E9: cmp     cs:dword_1801CE560, r14d
 * 00000001800B27F0: jnz     loc_1800B28B0
 * 00000001800B27F6: lea     rax, unk_1801492F0
 * 00000001800B27FD: mov     qword ptr [rbp+8C80h+var_77B0], rax
 * 00000001800B2804: lea     rax, unk_18014A340
 * 00000001800B280B: mov     qword ptr [rbp+8C80h+var_77B0+8], rax
 * 00000001800B2812: mov     dword ptr [rbp+8C80h+var_77A0], esi
 * 00000001800B2818: mov     dword ptr [rbp+8C80h+var_77A0+4], esi
 * 00000001800B281E: call    sub_1800A8988
 * 00000001800B2823: mov     r8, rax
 * 00000001800B2826: mov     r9d, r12d
 * 00000001800B2829: mov     edx, 58h ; 'X'
 * 00000001800B282E: lea     rcx, [rbp+8C80h+var_2930]
 * 00000001800B2835: call    sub_180075CF8
 * 00000001800B283A: nop
 * 00000001800B283B: mov     r8, rax
 * 00000001800B283E: mov     rdx, r13
 * 00000001800B2841: lea     rcx, [rbp+8C80h+var_2950]
 * 00000001800B2848: call    sub_18001C928
 * 00000001800B284D: nop
 * 00000001800B284E: lea     r8, aVertex; "/Vertex"
 * 00000001800B2855: mov     rdx, rax
 * 00000001800B2858: lea     rcx, [rbp+8C80h+var_5470]
 * 00000001800B285F: call    sub_18001C87C
 * 00000001800B2864: movups  xmm0, [rbp+8C80h+var_77B0]
 * 00000001800B286B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2870: movups  xmm1, [rbp+8C80h+var_77A0]
 * 00000001800B2877: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B287C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2881: mov     rcx, rax
 * 00000001800B2884: call    sub_180075D94
 * 00000001800B2889: nop
 * 00000001800B288A: lea     rcx, [rbp+8C80h+var_2950]
 * 00000001800B2891: call    sub_180011E30
 * 00000001800B2896: nop
 * 00000001800B2897: lea     rcx, [rbp+8C80h+var_2930]
 * 00000001800B289E: call    sub_180011E30
 * 00000001800B28A3: nop
 * 00000001800B28A4: lea     rcx, dword_1801CE560
 * 00000001800B28AB: call    sub_18000D4CC
 * 00000001800B28B0: mov     rax, [rdi+rbx*8]
 * 00000001800B28B4: mov     ecx, [r15+rax]
 * 00000001800B28B8: cmp     cs:dword_1801CE564, ecx
 * 00000001800B28BE: jle     loc_1800B2997
 * 00000001800B28C4: lea     rcx, dword_1801CE564
 * 00000001800B28CB: call    sub_18000D534
 * 00000001800B28D0: cmp     cs:dword_1801CE564, r14d
 * 00000001800B28D7: jnz     loc_1800B2997
 * 00000001800B28DD: lea     rax, unk_1801492F0
 * 00000001800B28E4: mov     qword ptr [rbp+8C80h+var_7790], rax
 * 00000001800B28EB: lea     rax, unk_18014A340
 * 00000001800B28F2: mov     qword ptr [rbp+8C80h+var_7790+8], rax
 * 00000001800B28F9: mov     dword ptr [rbp+8C80h+var_7780], esi
 * 00000001800B28FF: mov     dword ptr [rbp+8C80h+var_7780+4], esi
 * 00000001800B2905: call    sub_1800A8988
 * 00000001800B290A: mov     r8, rax
 * 00000001800B290D: mov     r9d, r12d
 * 00000001800B2910: mov     edx, 5Ah ; 'Z'
 * 00000001800B2915: lea     rcx, [rbp+8C80h+var_28D0]
 * 00000001800B291C: call    sub_180075CF8
 * 00000001800B2921: nop
 * 00000001800B2922: mov     r8, rax
 * 00000001800B2925: mov     rdx, r13
 * 00000001800B2928: lea     rcx, [rbp+8C80h+var_28F0]
 * 00000001800B292F: call    sub_18001C928
 * 00000001800B2934: nop
 * 00000001800B2935: lea     r8, aVertex; "/Vertex"
 * 00000001800B293C: mov     rdx, rax
 * 00000001800B293F: lea     rcx, [rbp+8C80h+var_5450]
 * 00000001800B2946: call    sub_18001C87C
 * 00000001800B294B: movups  xmm0, [rbp+8C80h+var_7790]
 * 00000001800B2952: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2957: movups  xmm1, [rbp+8C80h+var_7780]
 * 00000001800B295E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2963: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2968: mov     rcx, rax
 * 00000001800B296B: call    sub_180075D94
 * 00000001800B2970: nop
 * 00000001800B2971: lea     rcx, [rbp+8C80h+var_28F0]
 * 00000001800B2978: call    sub_180011E30
 * 00000001800B297D: nop
 * 00000001800B297E: lea     rcx, [rbp+8C80h+var_28D0]
 * 00000001800B2985: call    sub_180011E30
 * 00000001800B298A: nop
 * 00000001800B298B: lea     rcx, dword_1801CE564
 * 00000001800B2992: call    sub_18000D4CC
 * 00000001800B2997: mov     rax, [rdi+rbx*8]
 * 00000001800B299B: mov     eax, [r15+rax]
 * 00000001800B299F: cmp     cs:dword_1801CE568, eax
 * 00000001800B29A5: jle     loc_1800B2A7E
 * 00000001800B29AB: lea     rcx, dword_1801CE568
 * 00000001800B29B2: call    sub_18000D534
 * 00000001800B29B7: cmp     cs:dword_1801CE568, r14d
 * 00000001800B29BE: jnz     loc_1800B2A7E
 * 00000001800B29C4: lea     rax, unk_1801478A0
 * 00000001800B29CB: mov     qword ptr [rbp+8C80h+var_7770], rax
 * 00000001800B29D2: lea     rax, unk_1801492F0
 * 00000001800B29D9: mov     qword ptr [rbp+8C80h+var_7770+8], rax
 * 00000001800B29E0: mov     dword ptr [rbp+8C80h+var_7760], esi
 * 00000001800B29E6: mov     dword ptr [rbp+8C80h+var_7760+4], esi
 * 00000001800B29EC: call    sub_1800A8988
 * 00000001800B29F1: mov     r8, rax
 * 00000001800B29F4: mov     r9d, r12d
 * 00000001800B29F7: mov     edx, 60h ; '`'
 * 00000001800B29FC: lea     rcx, [rbp+8C80h+var_2870]
 * 00000001800B2A03: call    sub_180075CF8
 * 00000001800B2A08: nop
 * 00000001800B2A09: mov     r8, rax
 * 00000001800B2A0C: mov     rdx, r13
 * 00000001800B2A0F: lea     rcx, [rbp+8C80h+var_2890]
 * 00000001800B2A16: call    sub_18001C928
 * 00000001800B2A1B: nop
 * 00000001800B2A1C: lea     r8, aVertex; "/Vertex"
 * 00000001800B2A23: mov     rdx, rax
 * 00000001800B2A26: lea     rcx, [rbp+8C80h+var_5430]
 * 00000001800B2A2D: call    sub_18001C87C
 * 00000001800B2A32: movups  xmm0, [rbp+8C80h+var_7770]
 * 00000001800B2A39: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2A3E: movups  xmm1, [rbp+8C80h+var_7760]
 * 00000001800B2A45: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2A4A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2A4F: mov     rcx, rax
 * 00000001800B2A52: call    sub_180075D94
 * 00000001800B2A57: nop
 * 00000001800B2A58: lea     rcx, [rbp+8C80h+var_2890]
 * 00000001800B2A5F: call    sub_180011E30
 * 00000001800B2A64: nop
 * 00000001800B2A65: lea     rcx, [rbp+8C80h+var_2870]
 * 00000001800B2A6C: call    sub_180011E30
 * 00000001800B2A71: nop
 * 00000001800B2A72: lea     rcx, dword_1801CE568
 * 00000001800B2A79: call    sub_18000D4CC
 * 00000001800B2A7E: mov     rax, [rdi+rbx*8]
 * 00000001800B2A82: mov     ecx, [r15+rax]
 * 00000001800B2A86: cmp     cs:dword_1801CE56C, ecx
 * 00000001800B2A8C: jle     loc_1800B2B65
 * 00000001800B2A92: lea     rcx, dword_1801CE56C
 * 00000001800B2A99: call    sub_18000D534
 * 00000001800B2A9E: cmp     cs:dword_1801CE56C, r14d
 * 00000001800B2AA5: jnz     loc_1800B2B65
 * 00000001800B2AAB: lea     rax, unk_1801478A0
 * 00000001800B2AB2: mov     qword ptr [rbp+8C80h+var_7750], rax
 * 00000001800B2AB9: lea     rax, unk_1801492F0
 * 00000001800B2AC0: mov     qword ptr [rbp+8C80h+var_7750+8], rax
 * 00000001800B2AC7: mov     dword ptr [rbp+8C80h+var_7740], esi
 * 00000001800B2ACD: mov     dword ptr [rbp+8C80h+var_7740+4], esi
 * 00000001800B2AD3: call    sub_1800A8988
 * 00000001800B2AD8: mov     r8, rax
 * 00000001800B2ADB: mov     r9d, r12d
 * 00000001800B2ADE: mov     edx, 62h ; 'b'
 * 00000001800B2AE3: lea     rcx, [rbp+8C80h+var_2810]
 * 00000001800B2AEA: call    sub_180075CF8
 * 00000001800B2AEF: nop
 * 00000001800B2AF0: mov     r8, rax
 * 00000001800B2AF3: mov     rdx, r13
 * 00000001800B2AF6: lea     rcx, [rbp+8C80h+var_2830]
 * 00000001800B2AFD: call    sub_18001C928
 * 00000001800B2B02: nop
 * 00000001800B2B03: lea     r8, aVertex; "/Vertex"
 * 00000001800B2B0A: mov     rdx, rax
 * 00000001800B2B0D: lea     rcx, [rbp+8C80h+var_5410]
 * 00000001800B2B14: call    sub_18001C87C
 * 00000001800B2B19: movups  xmm0, [rbp+8C80h+var_7750]
 * 00000001800B2B20: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2B25: movups  xmm1, [rbp+8C80h+var_7740]
 * 00000001800B2B2C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2B31: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2B36: mov     rcx, rax
 * 00000001800B2B39: call    sub_180075D94
 * 00000001800B2B3E: nop
 * 00000001800B2B3F: lea     rcx, [rbp+8C80h+var_2830]
 * 00000001800B2B46: call    sub_180011E30
 * 00000001800B2B4B: nop
 * 00000001800B2B4C: lea     rcx, [rbp+8C80h+var_2810]
 * 00000001800B2B53: call    sub_180011E30
 * 00000001800B2B58: nop
 * 00000001800B2B59: lea     rcx, dword_1801CE56C
 * 00000001800B2B60: call    sub_18000D4CC
 * 00000001800B2B65: mov     rax, [rdi+rbx*8]
 * 00000001800B2B69: mov     ecx, [r15+rax]
 * 00000001800B2B6D: cmp     cs:dword_1801CE570, ecx
 * 00000001800B2B73: jle     loc_1800B2C4C
 * 00000001800B2B79: lea     rcx, dword_1801CE570
 * 00000001800B2B80: call    sub_18000D534
 * 00000001800B2B85: cmp     cs:dword_1801CE570, r14d
 * 00000001800B2B8C: jnz     loc_1800B2C4C
 * 00000001800B2B92: lea     rax, unk_1801478A0
 * 00000001800B2B99: mov     qword ptr [rbp+8C80h+var_7730], rax
 * 00000001800B2BA0: lea     rax, unk_1801492F0
 * 00000001800B2BA7: mov     qword ptr [rbp+8C80h+var_7730+8], rax
 * 00000001800B2BAE: mov     dword ptr [rbp+8C80h+var_7720], esi
 * 00000001800B2BB4: mov     dword ptr [rbp+8C80h+var_7720+4], esi
 * 00000001800B2BBA: call    sub_1800A8988
 * 00000001800B2BBF: mov     r8, rax
 * 00000001800B2BC2: mov     r9d, r12d
 * 00000001800B2BC5: mov     edx, 68h ; 'h'
 * 00000001800B2BCA: lea     rcx, [rbp+8C80h+var_27B0]
 * 00000001800B2BD1: call    sub_180075CF8
 * 00000001800B2BD6: nop
 * 00000001800B2BD7: mov     r8, rax
 * 00000001800B2BDA: mov     rdx, r13
 * 00000001800B2BDD: lea     rcx, [rbp+8C80h+var_27D0]
 * 00000001800B2BE4: call    sub_18001C928
 * 00000001800B2BE9: nop
 * 00000001800B2BEA: lea     r8, aVertex; "/Vertex"
 * 00000001800B2BF1: mov     rdx, rax
 * 00000001800B2BF4: lea     rcx, [rbp+8C80h+var_53F0]
 * 00000001800B2BFB: call    sub_18001C87C
 * 00000001800B2C00: movups  xmm0, [rbp+8C80h+var_7730]
 * 00000001800B2C07: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2C0C: movups  xmm1, [rbp+8C80h+var_7720]
 * 00000001800B2C13: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2C18: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2C1D: mov     rcx, rax
 * 00000001800B2C20: call    sub_180075D94
 * 00000001800B2C25: nop
 * 00000001800B2C26: lea     rcx, [rbp+8C80h+var_27D0]
 * 00000001800B2C2D: call    sub_180011E30
 * 00000001800B2C32: nop
 * 00000001800B2C33: lea     rcx, [rbp+8C80h+var_27B0]
 * 00000001800B2C3A: call    sub_180011E30
 * 00000001800B2C3F: nop
 * 00000001800B2C40: lea     rcx, dword_1801CE570
 * 00000001800B2C47: call    sub_18000D4CC
 * 00000001800B2C4C: mov     rax, [rdi+rbx*8]
 * 00000001800B2C50: mov     ecx, [r15+rax]
 * 00000001800B2C54: cmp     cs:dword_1801CE574, ecx
 * 00000001800B2C5A: jle     loc_1800B2D33
 * 00000001800B2C60: lea     rcx, dword_1801CE574
 * 00000001800B2C67: call    sub_18000D534
 * 00000001800B2C6C: cmp     cs:dword_1801CE574, r14d
 * 00000001800B2C73: jnz     loc_1800B2D33
 * 00000001800B2C79: lea     rax, unk_1801478A0
 * 00000001800B2C80: mov     qword ptr [rbp+8C80h+var_7710], rax
 * 00000001800B2C87: lea     rax, unk_1801492F0
 * 00000001800B2C8E: mov     qword ptr [rbp+8C80h+var_7710+8], rax
 * 00000001800B2C95: mov     dword ptr [rbp+8C80h+var_7700], esi
 * 00000001800B2C9B: mov     dword ptr [rbp+8C80h+var_7700+4], esi
 * 00000001800B2CA1: call    sub_1800A8988
 * 00000001800B2CA6: mov     r8, rax
 * 00000001800B2CA9: mov     r9d, r12d
 * 00000001800B2CAC: mov     edx, 6Ah ; 'j'
 * 00000001800B2CB1: lea     rcx, [rbp+8C80h+var_2750]
 * 00000001800B2CB8: call    sub_180075CF8
 * 00000001800B2CBD: nop
 * 00000001800B2CBE: mov     r8, rax
 * 00000001800B2CC1: mov     rdx, r13
 * 00000001800B2CC4: lea     rcx, [rbp+8C80h+var_2770]
 * 00000001800B2CCB: call    sub_18001C928
 * 00000001800B2CD0: nop
 * 00000001800B2CD1: lea     r8, aVertex; "/Vertex"
 * 00000001800B2CD8: mov     rdx, rax
 * 00000001800B2CDB: lea     rcx, [rbp+8C80h+var_53D0]
 * 00000001800B2CE2: call    sub_18001C87C
 * 00000001800B2CE7: movups  xmm0, [rbp+8C80h+var_7710]
 * 00000001800B2CEE: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2CF3: movups  xmm1, [rbp+8C80h+var_7700]
 * 00000001800B2CFA: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2CFF: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2D04: mov     rcx, rax
 * 00000001800B2D07: call    sub_180075D94
 * 00000001800B2D0C: nop
 * 00000001800B2D0D: lea     rcx, [rbp+8C80h+var_2770]
 * 00000001800B2D14: call    sub_180011E30
 * 00000001800B2D19: nop
 * 00000001800B2D1A: lea     rcx, [rbp+8C80h+var_2750]
 * 00000001800B2D21: call    sub_180011E30
 * 00000001800B2D26: nop
 * 00000001800B2D27: lea     rcx, dword_1801CE574
 * 00000001800B2D2E: call    sub_18000D4CC
 * 00000001800B2D33: mov     rax, [rdi+rbx*8]
 * 00000001800B2D37: mov     ecx, [r15+rax]
 * 00000001800B2D3B: cmp     cs:dword_1801CE578, ecx
 * 00000001800B2D41: jle     loc_1800B2E1A
 * 00000001800B2D47: lea     rcx, dword_1801CE578
 * 00000001800B2D4E: call    sub_18000D534
 * 00000001800B2D53: cmp     cs:dword_1801CE578, r14d
 * 00000001800B2D5A: jnz     loc_1800B2E1A
 * 00000001800B2D60: lea     rax, unk_1801478A0
 * 00000001800B2D67: mov     qword ptr [rbp+8C80h+var_76F0], rax
 * 00000001800B2D6E: lea     rax, unk_1801492F0
 * 00000001800B2D75: mov     qword ptr [rbp+8C80h+var_76F0+8], rax
 * 00000001800B2D7C: mov     dword ptr [rbp+8C80h+var_76E0], esi
 * 00000001800B2D82: mov     dword ptr [rbp+8C80h+var_76E0+4], esi
 * 00000001800B2D88: call    sub_1800A8988
 * 00000001800B2D8D: mov     r8, rax
 * 00000001800B2D90: mov     r9d, r12d
 * 00000001800B2D93: mov     edx, 70h ; 'p'
 * 00000001800B2D98: lea     rcx, [rbp+8C80h+var_26F0]
 * 00000001800B2D9F: call    sub_180075CF8
 * 00000001800B2DA4: nop
 * 00000001800B2DA5: mov     r8, rax
 * 00000001800B2DA8: mov     rdx, r13
 * 00000001800B2DAB: lea     rcx, [rbp+8C80h+var_2710]
 * 00000001800B2DB2: call    sub_18001C928
 * 00000001800B2DB7: nop
 * 00000001800B2DB8: lea     r8, aVertex; "/Vertex"
 * 00000001800B2DBF: mov     rdx, rax
 * 00000001800B2DC2: lea     rcx, [rbp+8C80h+var_53B0]
 * 00000001800B2DC9: call    sub_18001C87C
 * 00000001800B2DCE: movups  xmm0, [rbp+8C80h+var_76F0]
 * 00000001800B2DD5: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2DDA: movups  xmm1, [rbp+8C80h+var_76E0]
 * 00000001800B2DE1: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2DE6: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2DEB: mov     rcx, rax
 * 00000001800B2DEE: call    sub_180075D94
 * 00000001800B2DF3: nop
 * 00000001800B2DF4: lea     rcx, [rbp+8C80h+var_2710]
 * 00000001800B2DFB: call    sub_180011E30
 * 00000001800B2E00: nop
 * 00000001800B2E01: lea     rcx, [rbp+8C80h+var_26F0]
 * 00000001800B2E08: call    sub_180011E30
 * 00000001800B2E0D: nop
 * 00000001800B2E0E: lea     rcx, dword_1801CE578
 * 00000001800B2E15: call    sub_18000D4CC
 * 00000001800B2E1A: mov     rax, [rdi+rbx*8]
 * 00000001800B2E1E: mov     ecx, [r15+rax]
 * 00000001800B2E22: cmp     cs:dword_1801CE57C, ecx
 * 00000001800B2E28: jle     loc_1800B2F01
 * 00000001800B2E2E: lea     rcx, dword_1801CE57C
 * 00000001800B2E35: call    sub_18000D534
 * 00000001800B2E3A: cmp     cs:dword_1801CE57C, r14d
 * 00000001800B2E41: jnz     loc_1800B2F01
 * 00000001800B2E47: lea     rax, unk_1801478A0
 * 00000001800B2E4E: mov     qword ptr [rbp+8C80h+var_76D0], rax
 * 00000001800B2E55: lea     rax, unk_1801492F0
 * 00000001800B2E5C: mov     qword ptr [rbp+8C80h+var_76D0+8], rax
 * 00000001800B2E63: mov     dword ptr [rbp+8C80h+var_76C0], esi
 * 00000001800B2E69: mov     dword ptr [rbp+8C80h+var_76C0+4], esi
 * 00000001800B2E6F: call    sub_1800A8988
 * 00000001800B2E74: mov     r8, rax
 * 00000001800B2E77: mov     r9d, r12d
 * 00000001800B2E7A: mov     edx, 72h ; 'r'
 * 00000001800B2E7F: lea     rcx, [rbp+8C80h+var_2690]
 * 00000001800B2E86: call    sub_180075CF8
 * 00000001800B2E8B: nop
 * 00000001800B2E8C: mov     r8, rax
 * 00000001800B2E8F: mov     rdx, r13
 * 00000001800B2E92: lea     rcx, [rbp+8C80h+var_26B0]
 * 00000001800B2E99: call    sub_18001C928
 * 00000001800B2E9E: nop
 * 00000001800B2E9F: lea     r8, aVertex; "/Vertex"
 * 00000001800B2EA6: mov     rdx, rax
 * 00000001800B2EA9: lea     rcx, [rbp+8C80h+var_5390]
 * 00000001800B2EB0: call    sub_18001C87C
 * 00000001800B2EB5: movups  xmm0, [rbp+8C80h+var_76D0]
 * 00000001800B2EBC: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2EC1: movups  xmm1, [rbp+8C80h+var_76C0]
 * 00000001800B2EC8: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2ECD: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2ED2: mov     rcx, rax
 * 00000001800B2ED5: call    sub_180075D94
 * 00000001800B2EDA: nop
 * 00000001800B2EDB: lea     rcx, [rbp+8C80h+var_26B0]
 * 00000001800B2EE2: call    sub_180011E30
 * 00000001800B2EE7: nop
 * 00000001800B2EE8: lea     rcx, [rbp+8C80h+var_2690]
 * 00000001800B2EEF: call    sub_180011E30
 * 00000001800B2EF4: nop
 * 00000001800B2EF5: lea     rcx, dword_1801CE57C
 * 00000001800B2EFC: call    sub_18000D4CC
 * 00000001800B2F01: mov     rax, [rdi+rbx*8]
 * 00000001800B2F05: mov     ecx, [r15+rax]
 * 00000001800B2F09: cmp     cs:dword_1801CE580, ecx
 * 00000001800B2F0F: jle     loc_1800B2FE8
 * 00000001800B2F15: lea     rcx, dword_1801CE580
 * 00000001800B2F1C: call    sub_18000D534
 * 00000001800B2F21: cmp     cs:dword_1801CE580, r14d
 * 00000001800B2F28: jnz     loc_1800B2FE8
 * 00000001800B2F2E: lea     rax, unk_1801478A0
 * 00000001800B2F35: mov     qword ptr [rbp+8C80h+var_76B0], rax
 * 00000001800B2F3C: lea     rax, unk_1801492F0
 * 00000001800B2F43: mov     qword ptr [rbp+8C80h+var_76B0+8], rax
 * 00000001800B2F4A: mov     dword ptr [rbp+8C80h+var_76A0], esi
 * 00000001800B2F50: mov     dword ptr [rbp+8C80h+var_76A0+4], esi
 * 00000001800B2F56: call    sub_1800A8988
 * 00000001800B2F5B: mov     r8, rax
 * 00000001800B2F5E: mov     r9d, r12d
 * 00000001800B2F61: mov     edx, 78h ; 'x'
 * 00000001800B2F66: lea     rcx, [rbp+8C80h+var_2630]
 * 00000001800B2F6D: call    sub_180075CF8
 * 00000001800B2F72: nop
 * 00000001800B2F73: mov     r8, rax
 * 00000001800B2F76: mov     rdx, r13
 * 00000001800B2F79: lea     rcx, [rbp+8C80h+var_2650]
 * 00000001800B2F80: call    sub_18001C928
 * 00000001800B2F85: nop
 * 00000001800B2F86: lea     r8, aVertex; "/Vertex"
 * 00000001800B2F8D: mov     rdx, rax
 * 00000001800B2F90: lea     rcx, [rbp+8C80h+var_5370]
 * 00000001800B2F97: call    sub_18001C87C
 * 00000001800B2F9C: movups  xmm0, [rbp+8C80h+var_76B0]
 * 00000001800B2FA3: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B2FA8: movups  xmm1, [rbp+8C80h+var_76A0]
 * 00000001800B2FAF: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B2FB4: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B2FB9: mov     rcx, rax
 * 00000001800B2FBC: call    sub_180075D94
 * 00000001800B2FC1: nop
 * 00000001800B2FC2: lea     rcx, [rbp+8C80h+var_2650]
 * 00000001800B2FC9: call    sub_180011E30
 * 00000001800B2FCE: nop
 * 00000001800B2FCF: lea     rcx, [rbp+8C80h+var_2630]
 * 00000001800B2FD6: call    sub_180011E30
 * 00000001800B2FDB: nop
 * 00000001800B2FDC: lea     rcx, dword_1801CE580
 * 00000001800B2FE3: call    sub_18000D4CC
 * 00000001800B2FE8: mov     rax, [rdi+rbx*8]
 * 00000001800B2FEC: mov     ecx, [r15+rax]
 * 00000001800B2FF0: cmp     cs:dword_1801CE584, ecx
 * 00000001800B2FF6: jle     loc_1800B30CF
 * 00000001800B2FFC: lea     rcx, dword_1801CE584
 * 00000001800B3003: call    sub_18000D534
 * 00000001800B3008: cmp     cs:dword_1801CE584, r14d
 * 00000001800B300F: jnz     loc_1800B30CF
 * 00000001800B3015: lea     rax, unk_1801478A0
 * 00000001800B301C: mov     qword ptr [rbp+8C80h+var_7690], rax
 * 00000001800B3023: lea     rax, unk_1801492F0
 * 00000001800B302A: mov     qword ptr [rbp+8C80h+var_7690+8], rax
 * 00000001800B3031: mov     dword ptr [rbp+8C80h+var_7680], esi
 * 00000001800B3037: mov     dword ptr [rbp+8C80h+var_7680+4], esi
 * 00000001800B303D: call    sub_1800A8988
 * 00000001800B3042: mov     r8, rax
 * 00000001800B3045: mov     r9d, r12d
 * 00000001800B3048: mov     edx, 7Ah ; 'z'
 * 00000001800B304D: lea     rcx, [rbp+8C80h+var_25D0]
 * 00000001800B3054: call    sub_180075CF8
 * 00000001800B3059: nop
 * 00000001800B305A: mov     r8, rax
 * 00000001800B305D: mov     rdx, r13
 * 00000001800B3060: lea     rcx, [rbp+8C80h+var_25F0]
 * 00000001800B3067: call    sub_18001C928
 * 00000001800B306C: nop
 * 00000001800B306D: lea     r8, aVertex; "/Vertex"
 * 00000001800B3074: mov     rdx, rax
 * 00000001800B3077: lea     rcx, [rbp+8C80h+var_5350]
 * 00000001800B307E: call    sub_18001C87C
 * 00000001800B3083: movups  xmm0, [rbp+8C80h+var_7690]
 * 00000001800B308A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B308F: movups  xmm1, [rbp+8C80h+var_7680]
 * 00000001800B3096: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B309B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B30A0: mov     rcx, rax
 * 00000001800B30A3: call    sub_180075D94
 * 00000001800B30A8: nop
 * 00000001800B30A9: lea     rcx, [rbp+8C80h+var_25F0]
 * 00000001800B30B0: call    sub_180011E30
 * 00000001800B30B5: nop
 * 00000001800B30B6: lea     rcx, [rbp+8C80h+var_25D0]
 * 00000001800B30BD: call    sub_180011E30
 * 00000001800B30C2: nop
 * 00000001800B30C3: lea     rcx, dword_1801CE584
 * 00000001800B30CA: call    sub_18000D4CC
 * 00000001800B30CF: mov     rax, [rdi+rbx*8]
 * 00000001800B30D3: mov     ecx, [r15+rax]
 * 00000001800B30D7: cmp     cs:dword_1801CE588, ecx
 * 00000001800B30DD: jle     loc_1800B31B6
 * 00000001800B30E3: lea     rcx, dword_1801CE588
 * 00000001800B30EA: call    sub_18000D534
 * 00000001800B30EF: cmp     cs:dword_1801CE588, r14d
 * 00000001800B30F6: jnz     loc_1800B31B6
 * 00000001800B30FC: lea     rax, unk_1801492F0
 * 00000001800B3103: mov     qword ptr [rbp+8C80h+var_7670], rax
 * 00000001800B310A: lea     rax, unk_18014A340
 * 00000001800B3111: mov     qword ptr [rbp+8C80h+var_7670+8], rax
 * 00000001800B3118: mov     dword ptr [rbp+8C80h+var_7660], esi
 * 00000001800B311E: mov     dword ptr [rbp+8C80h+var_7660+4], esi
 * 00000001800B3124: call    sub_1800A8988
 * 00000001800B3129: mov     r8, rax
 * 00000001800B312C: mov     r9d, r12d
 * 00000001800B312F: mov     edx, 80h
 * 00000001800B3134: lea     rcx, [rbp+8C80h+var_2570]
 * 00000001800B313B: call    sub_180075CF8
 * 00000001800B3140: nop
 * 00000001800B3141: mov     r8, rax
 * 00000001800B3144: mov     rdx, r13
 * 00000001800B3147: lea     rcx, [rbp+8C80h+var_2590]
 * 00000001800B314E: call    sub_18001C928
 * 00000001800B3153: nop
 * 00000001800B3154: lea     r8, aVertex; "/Vertex"
 * 00000001800B315B: mov     rdx, rax
 * 00000001800B315E: lea     rcx, [rbp+8C80h+var_5330]
 * 00000001800B3165: call    sub_18001C87C
 * 00000001800B316A: movups  xmm0, [rbp+8C80h+var_7670]
 * 00000001800B3171: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3176: movups  xmm1, [rbp+8C80h+var_7660]
 * 00000001800B317D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3182: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3187: mov     rcx, rax
 * 00000001800B318A: call    sub_180075D94
 * 00000001800B318F: nop
 * 00000001800B3190: lea     rcx, [rbp+8C80h+var_2590]
 * 00000001800B3197: call    sub_180011E30
 * 00000001800B319C: nop
 * 00000001800B319D: lea     rcx, [rbp+8C80h+var_2570]
 * 00000001800B31A4: call    sub_180011E30
 * 00000001800B31A9: nop
 * 00000001800B31AA: lea     rcx, dword_1801CE588
 * 00000001800B31B1: call    sub_18000D4CC
 * 00000001800B31B6: mov     rax, [rdi+rbx*8]
 * 00000001800B31BA: mov     ecx, [r15+rax]
 * 00000001800B31BE: cmp     cs:dword_1801CE58C, ecx
 * 00000001800B31C4: jle     loc_1800B329D
 * 00000001800B31CA: lea     rcx, dword_1801CE58C
 * 00000001800B31D1: call    sub_18000D534
 * 00000001800B31D6: cmp     cs:dword_1801CE58C, r14d
 * 00000001800B31DD: jnz     loc_1800B329D
 * 00000001800B31E3: lea     rax, unk_1801492F0
 * 00000001800B31EA: mov     qword ptr [rbp+8C80h+var_7650], rax
 * 00000001800B31F1: lea     rax, unk_18014A340
 * 00000001800B31F8: mov     qword ptr [rbp+8C80h+var_7650+8], rax
 * 00000001800B31FF: mov     dword ptr [rbp+8C80h+var_7640], esi
 * 00000001800B3205: mov     dword ptr [rbp+8C80h+var_7640+4], esi
 * 00000001800B320B: call    sub_1800A8988
 * 00000001800B3210: mov     r8, rax
 * 00000001800B3213: mov     r9d, r12d
 * 00000001800B3216: mov     edx, 82h
 * 00000001800B321B: lea     rcx, [rbp+8C80h+var_2510]
 * 00000001800B3222: call    sub_180075CF8
 * 00000001800B3227: nop
 * 00000001800B3228: mov     r8, rax
 * 00000001800B322B: mov     rdx, r13
 * 00000001800B322E: lea     rcx, [rbp+8C80h+var_2530]
 * 00000001800B3235: call    sub_18001C928
 * 00000001800B323A: nop
 * 00000001800B323B: lea     r8, aVertex; "/Vertex"
 * 00000001800B3242: mov     rdx, rax
 * 00000001800B3245: lea     rcx, [rbp+8C80h+var_5310]
 * 00000001800B324C: call    sub_18001C87C
 * 00000001800B3251: movups  xmm0, [rbp+8C80h+var_7650]
 * 00000001800B3258: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B325D: movups  xmm1, [rbp+8C80h+var_7640]
 * 00000001800B3264: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3269: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B326E: mov     rcx, rax
 * 00000001800B3271: call    sub_180075D94
 * 00000001800B3276: nop
 * 00000001800B3277: lea     rcx, [rbp+8C80h+var_2530]
 * 00000001800B327E: call    sub_180011E30
 * 00000001800B3283: nop
 * 00000001800B3284: lea     rcx, [rbp+8C80h+var_2510]
 * 00000001800B328B: call    sub_180011E30
 * 00000001800B3290: nop
 * 00000001800B3291: lea     rcx, dword_1801CE58C
 * 00000001800B3298: call    sub_18000D4CC
 * 00000001800B329D: mov     rax, [rdi+rbx*8]
 * 00000001800B32A1: mov     ecx, [r15+rax]
 * 00000001800B32A5: cmp     cs:dword_1801CE590, ecx
 * 00000001800B32AB: jle     loc_1800B3384
 * 00000001800B32B1: lea     rcx, dword_1801CE590
 * 00000001800B32B8: call    sub_18000D534
 * 00000001800B32BD: cmp     cs:dword_1801CE590, r14d
 * 00000001800B32C4: jnz     loc_1800B3384
 * 00000001800B32CA: lea     rax, unk_1801492F0
 * 00000001800B32D1: mov     qword ptr [rbp+8C80h+var_7630], rax
 * 00000001800B32D8: lea     rax, unk_18014A340
 * 00000001800B32DF: mov     qword ptr [rbp+8C80h+var_7630+8], rax
 * 00000001800B32E6: mov     dword ptr [rbp+8C80h+var_7620], esi
 * 00000001800B32EC: mov     dword ptr [rbp+8C80h+var_7620+4], esi
 * 00000001800B32F2: call    sub_1800A8988
 * 00000001800B32F7: mov     r8, rax
 * 00000001800B32FA: mov     r9d, r12d
 * 00000001800B32FD: mov     edx, 88h
 * 00000001800B3302: lea     rcx, [rbp+8C80h+var_24B0]
 * 00000001800B3309: call    sub_180075CF8
 * 00000001800B330E: nop
 * 00000001800B330F: mov     r8, rax
 * 00000001800B3312: mov     rdx, r13
 * 00000001800B3315: lea     rcx, [rbp+8C80h+var_24D0]
 * 00000001800B331C: call    sub_18001C928
 * 00000001800B3321: nop
 * 00000001800B3322: lea     r8, aVertex; "/Vertex"
 * 00000001800B3329: mov     rdx, rax
 * 00000001800B332C: lea     rcx, [rbp+8C80h+var_52F0]
 * 00000001800B3333: call    sub_18001C87C
 * 00000001800B3338: movups  xmm0, [rbp+8C80h+var_7630]
 * 00000001800B333F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3344: movups  xmm1, [rbp+8C80h+var_7620]
 * 00000001800B334B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3350: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3355: mov     rcx, rax
 * 00000001800B3358: call    sub_180075D94
 * 00000001800B335D: nop
 * 00000001800B335E: lea     rcx, [rbp+8C80h+var_24D0]
 * 00000001800B3365: call    sub_180011E30
 * 00000001800B336A: nop
 * 00000001800B336B: lea     rcx, [rbp+8C80h+var_24B0]
 * 00000001800B3372: call    sub_180011E30
 * 00000001800B3377: nop
 * 00000001800B3378: lea     rcx, dword_1801CE590
 * 00000001800B337F: call    sub_18000D4CC
 * 00000001800B3384: mov     rax, [rdi+rbx*8]
 * 00000001800B3388: mov     ecx, [r15+rax]
 * 00000001800B338C: cmp     cs:dword_1801CE594, ecx
 * 00000001800B3392: jle     loc_1800B346B
 * 00000001800B3398: lea     rcx, dword_1801CE594
 * 00000001800B339F: call    sub_18000D534
 * 00000001800B33A4: cmp     cs:dword_1801CE594, r14d
 * 00000001800B33AB: jnz     loc_1800B346B
 * 00000001800B33B1: lea     rax, unk_1801492F0
 * 00000001800B33B8: mov     qword ptr [rbp+8C80h+var_7610], rax
 * 00000001800B33BF: lea     rax, unk_18014A340
 * 00000001800B33C6: mov     qword ptr [rbp+8C80h+var_7610+8], rax
 * 00000001800B33CD: mov     dword ptr [rbp+8C80h+var_7600], esi
 * 00000001800B33D3: mov     dword ptr [rbp+8C80h+var_7600+4], esi
 * 00000001800B33D9: call    sub_1800A8988
 * 00000001800B33DE: mov     r8, rax
 * 00000001800B33E1: mov     r9d, r12d
 * 00000001800B33E4: mov     edx, 8Ah
 * 00000001800B33E9: lea     rcx, [rbp+8C80h+var_2450]
 * 00000001800B33F0: call    sub_180075CF8
 * 00000001800B33F5: nop
 * 00000001800B33F6: mov     r8, rax
 * 00000001800B33F9: mov     rdx, r13
 * 00000001800B33FC: lea     rcx, [rbp+8C80h+var_2470]
 * 00000001800B3403: call    sub_18001C928
 * 00000001800B3408: nop
 * 00000001800B3409: lea     r8, aVertex; "/Vertex"
 * 00000001800B3410: mov     rdx, rax
 * 00000001800B3413: lea     rcx, [rbp+8C80h+var_52D0]
 * 00000001800B341A: call    sub_18001C87C
 * 00000001800B341F: movups  xmm0, [rbp+8C80h+var_7610]
 * 00000001800B3426: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B342B: movups  xmm1, [rbp+8C80h+var_7600]
 * 00000001800B3432: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3437: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B343C: mov     rcx, rax
 * 00000001800B343F: call    sub_180075D94
 * 00000001800B3444: nop
 * 00000001800B3445: lea     rcx, [rbp+8C80h+var_2470]
 * 00000001800B344C: call    sub_180011E30
 * 00000001800B3451: nop
 * 00000001800B3452: lea     rcx, [rbp+8C80h+var_2450]
 * 00000001800B3459: call    sub_180011E30
 * 00000001800B345E: nop
 * 00000001800B345F: lea     rcx, dword_1801CE594
 * 00000001800B3466: call    sub_18000D4CC
 * 00000001800B346B: mov     rax, [rdi+rbx*8]
 * 00000001800B346F: mov     ecx, [r15+rax]
 * 00000001800B3473: cmp     cs:dword_1801CE598, ecx
 * 00000001800B3479: jle     loc_1800B3552
 * 00000001800B347F: lea     rcx, dword_1801CE598
 * 00000001800B3486: call    sub_18000D534
 * 00000001800B348B: cmp     cs:dword_1801CE598, r14d
 * 00000001800B3492: jnz     loc_1800B3552
 * 00000001800B3498: lea     rax, unk_1801492F0
 * 00000001800B349F: mov     qword ptr [rbp+8C80h+var_75F0], rax
 * 00000001800B34A6: lea     rax, unk_18014A340
 * 00000001800B34AD: mov     qword ptr [rbp+8C80h+var_75F0+8], rax
 * 00000001800B34B4: mov     dword ptr [rbp+8C80h+var_75E0], esi
 * 00000001800B34BA: mov     dword ptr [rbp+8C80h+var_75E0+4], esi
 * 00000001800B34C0: call    sub_1800A8988
 * 00000001800B34C5: mov     r8, rax
 * 00000001800B34C8: mov     r9d, r12d
 * 00000001800B34CB: mov     edx, 90h
 * 00000001800B34D0: lea     rcx, [rbp+8C80h+var_23F0]
 * 00000001800B34D7: call    sub_180075CF8
 * 00000001800B34DC: nop
 * 00000001800B34DD: mov     r8, rax
 * 00000001800B34E0: mov     rdx, r13
 * 00000001800B34E3: lea     rcx, [rbp+8C80h+var_2410]
 * 00000001800B34EA: call    sub_18001C928
 * 00000001800B34EF: nop
 * 00000001800B34F0: lea     r8, aVertex; "/Vertex"
 * 00000001800B34F7: mov     rdx, rax
 * 00000001800B34FA: lea     rcx, [rbp+8C80h+var_52B0]
 * 00000001800B3501: call    sub_18001C87C
 * 00000001800B3506: movups  xmm0, [rbp+8C80h+var_75F0]
 * 00000001800B350D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3512: movups  xmm1, [rbp+8C80h+var_75E0]
 * 00000001800B3519: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B351E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3523: mov     rcx, rax
 * 00000001800B3526: call    sub_180075D94
 * 00000001800B352B: nop
 * 00000001800B352C: lea     rcx, [rbp+8C80h+var_2410]
 * 00000001800B3533: call    sub_180011E30
 * 00000001800B3538: nop
 * 00000001800B3539: lea     rcx, [rbp+8C80h+var_23F0]
 * 00000001800B3540: call    sub_180011E30
 * 00000001800B3545: nop
 * 00000001800B3546: lea     rcx, dword_1801CE598
 * 00000001800B354D: call    sub_18000D4CC
 * 00000001800B3552: mov     rax, [rdi+rbx*8]
 * 00000001800B3556: mov     ecx, [r15+rax]
 * 00000001800B355A: cmp     cs:dword_1801CE59C, ecx
 * 00000001800B3560: jle     loc_1800B3639
 * 00000001800B3566: lea     rcx, dword_1801CE59C
 * 00000001800B356D: call    sub_18000D534
 * 00000001800B3572: cmp     cs:dword_1801CE59C, r14d
 * 00000001800B3579: jnz     loc_1800B3639
 * 00000001800B357F: lea     rax, unk_1801492F0
 * 00000001800B3586: mov     qword ptr [rbp+8C80h+var_75D0], rax
 * 00000001800B358D: lea     rax, unk_18014A340
 * 00000001800B3594: mov     qword ptr [rbp+8C80h+var_75D0+8], rax
 * 00000001800B359B: mov     dword ptr [rbp+8C80h+var_75C0], esi
 * 00000001800B35A1: mov     dword ptr [rbp+8C80h+var_75C0+4], esi
 * 00000001800B35A7: call    sub_1800A8988
 * 00000001800B35AC: mov     r8, rax
 * 00000001800B35AF: mov     r9d, r12d
 * 00000001800B35B2: mov     edx, 92h
 * 00000001800B35B7: lea     rcx, [rbp+8C80h+var_2390]
 * 00000001800B35BE: call    sub_180075CF8
 * 00000001800B35C3: nop
 * 00000001800B35C4: mov     r8, rax
 * 00000001800B35C7: mov     rdx, r13
 * 00000001800B35CA: lea     rcx, [rbp+8C80h+var_23B0]
 * 00000001800B35D1: call    sub_18001C928
 * 00000001800B35D6: nop
 * 00000001800B35D7: lea     r8, aVertex; "/Vertex"
 * 00000001800B35DE: mov     rdx, rax
 * 00000001800B35E1: lea     rcx, [rbp+8C80h+var_5290]
 * 00000001800B35E8: call    sub_18001C87C
 * 00000001800B35ED: movups  xmm0, [rbp+8C80h+var_75D0]
 * 00000001800B35F4: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B35F9: movups  xmm1, [rbp+8C80h+var_75C0]
 * 00000001800B3600: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3605: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B360A: mov     rcx, rax
 * 00000001800B360D: call    sub_180075D94
 * 00000001800B3612: nop
 * 00000001800B3613: lea     rcx, [rbp+8C80h+var_23B0]
 * 00000001800B361A: call    sub_180011E30
 * 00000001800B361F: nop
 * 00000001800B3620: lea     rcx, [rbp+8C80h+var_2390]
 * 00000001800B3627: call    sub_180011E30
 * 00000001800B362C: nop
 * 00000001800B362D: lea     rcx, dword_1801CE59C
 * 00000001800B3634: call    sub_18000D4CC
 * 00000001800B3639: mov     rax, [rdi+rbx*8]
 * 00000001800B363D: mov     ecx, [r15+rax]
 * 00000001800B3641: cmp     cs:dword_1801CE5A0, ecx
 * 00000001800B3647: jle     loc_1800B3720
 * 00000001800B364D: lea     rcx, dword_1801CE5A0
 * 00000001800B3654: call    sub_18000D534
 * 00000001800B3659: cmp     cs:dword_1801CE5A0, r14d
 * 00000001800B3660: jnz     loc_1800B3720
 * 00000001800B3666: lea     rax, unk_1801492F0
 * 00000001800B366D: mov     qword ptr [rbp+8C80h+var_75B0], rax
 * 00000001800B3674: lea     rax, unk_18014A340
 * 00000001800B367B: mov     qword ptr [rbp+8C80h+var_75B0+8], rax
 * 00000001800B3682: mov     dword ptr [rbp+8C80h+var_75A0], esi
 * 00000001800B3688: mov     dword ptr [rbp+8C80h+var_75A0+4], esi
 * 00000001800B368E: call    sub_1800A8988
 * 00000001800B3693: mov     r8, rax
 * 00000001800B3696: mov     r9d, r12d
 * 00000001800B3699: mov     edx, 98h
 * 00000001800B369E: lea     rcx, [rbp+8C80h+var_2330]
 * 00000001800B36A5: call    sub_180075CF8
 * 00000001800B36AA: nop
 * 00000001800B36AB: mov     r8, rax
 * 00000001800B36AE: mov     rdx, r13
 * 00000001800B36B1: lea     rcx, [rbp+8C80h+var_2350]
 * 00000001800B36B8: call    sub_18001C928
 * 00000001800B36BD: nop
 * 00000001800B36BE: lea     r8, aVertex; "/Vertex"
 * 00000001800B36C5: mov     rdx, rax
 * 00000001800B36C8: lea     rcx, [rbp+8C80h+var_5270]
 * 00000001800B36CF: call    sub_18001C87C
 * 00000001800B36D4: movups  xmm0, [rbp+8C80h+var_75B0]
 * 00000001800B36DB: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B36E0: movups  xmm1, [rbp+8C80h+var_75A0]
 * 00000001800B36E7: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B36EC: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B36F1: mov     rcx, rax
 * 00000001800B36F4: call    sub_180075D94
 * 00000001800B36F9: nop
 * 00000001800B36FA: lea     rcx, [rbp+8C80h+var_2350]
 * 00000001800B3701: call    sub_180011E30
 * 00000001800B3706: nop
 * 00000001800B3707: lea     rcx, [rbp+8C80h+var_2330]
 * 00000001800B370E: call    sub_180011E30
 * 00000001800B3713: nop
 * 00000001800B3714: lea     rcx, dword_1801CE5A0
 * 00000001800B371B: call    sub_18000D4CC
 * 00000001800B3720: mov     rax, [rdi+rbx*8]
 * 00000001800B3724: mov     ecx, [r15+rax]
 * 00000001800B3728: cmp     cs:dword_1801CE5A4, ecx
 * 00000001800B372E: jle     loc_1800B3807
 * 00000001800B3734: lea     rcx, dword_1801CE5A4
 * 00000001800B373B: call    sub_18000D534
 * 00000001800B3740: cmp     cs:dword_1801CE5A4, r14d
 * 00000001800B3747: jnz     loc_1800B3807
 * 00000001800B374D: lea     rax, unk_1801492F0
 * 00000001800B3754: mov     qword ptr [rbp+8C80h+var_7590], rax
 * 00000001800B375B: lea     rax, unk_18014A340
 * 00000001800B3762: mov     qword ptr [rbp+8C80h+var_7590+8], rax
 * 00000001800B3769: mov     dword ptr [rbp+8C80h+var_7580], esi
 * 00000001800B376F: mov     dword ptr [rbp+8C80h+var_7580+4], esi
 * 00000001800B3775: call    sub_1800A8988
 * 00000001800B377A: mov     r8, rax
 * 00000001800B377D: mov     r9d, r12d
 * 00000001800B3780: mov     edx, 9Ah
 * 00000001800B3785: lea     rcx, [rbp+8C80h+var_22D0]
 * 00000001800B378C: call    sub_180075CF8
 * 00000001800B3791: nop
 * 00000001800B3792: mov     r8, rax
 * 00000001800B3795: mov     rdx, r13
 * 00000001800B3798: lea     rcx, [rbp+8C80h+var_22F0]
 * 00000001800B379F: call    sub_18001C928
 * 00000001800B37A4: nop
 * 00000001800B37A5: lea     r8, aVertex; "/Vertex"
 * 00000001800B37AC: mov     rdx, rax
 * 00000001800B37AF: lea     rcx, [rbp+8C80h+var_5250]
 * 00000001800B37B6: call    sub_18001C87C
 * 00000001800B37BB: movups  xmm0, [rbp+8C80h+var_7590]
 * 00000001800B37C2: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B37C7: movups  xmm1, [rbp+8C80h+var_7580]
 * 00000001800B37CE: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B37D3: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B37D8: mov     rcx, rax
 * 00000001800B37DB: call    sub_180075D94
 * 00000001800B37E0: nop
 * 00000001800B37E1: lea     rcx, [rbp+8C80h+var_22F0]
 * 00000001800B37E8: call    sub_180011E30
 * 00000001800B37ED: nop
 * 00000001800B37EE: lea     rcx, [rbp+8C80h+var_22D0]
 * 00000001800B37F5: call    sub_180011E30
 * 00000001800B37FA: nop
 * 00000001800B37FB: lea     rcx, dword_1801CE5A4
 * 00000001800B3802: call    sub_18000D4CC
 * 00000001800B3807: mov     rax, [rdi+rbx*8]
 * 00000001800B380B: mov     ecx, [r15+rax]
 * 00000001800B380F: cmp     cs:dword_1801CE5A8, ecx
 * 00000001800B3815: jle     loc_1800B38EE
 * 00000001800B381B: lea     rcx, dword_1801CE5A8
 * 00000001800B3822: call    sub_18000D534
 * 00000001800B3827: cmp     cs:dword_1801CE5A8, r14d
 * 00000001800B382E: jnz     loc_1800B38EE
 * 00000001800B3834: lea     rax, unk_1801478A0
 * 00000001800B383B: mov     qword ptr [rbp+8C80h+var_7570], rax
 * 00000001800B3842: lea     rax, unk_1801492F0
 * 00000001800B3849: mov     qword ptr [rbp+8C80h+var_7570+8], rax
 * 00000001800B3850: mov     dword ptr [rbp+8C80h+var_7560], esi
 * 00000001800B3856: mov     dword ptr [rbp+8C80h+var_7560+4], esi
 * 00000001800B385C: call    sub_1800A8988
 * 00000001800B3861: mov     r8, rax
 * 00000001800B3864: mov     r9d, r12d
 * 00000001800B3867: mov     edx, 0A0h
 * 00000001800B386C: lea     rcx, [rbp+8C80h+var_2270]
 * 00000001800B3873: call    sub_180075CF8
 * 00000001800B3878: nop
 * 00000001800B3879: mov     r8, rax
 * 00000001800B387C: mov     rdx, r13
 * 00000001800B387F: lea     rcx, [rbp+8C80h+var_2290]
 * 00000001800B3886: call    sub_18001C928
 * 00000001800B388B: nop
 * 00000001800B388C: lea     r8, aVertex; "/Vertex"
 * 00000001800B3893: mov     rdx, rax
 * 00000001800B3896: lea     rcx, [rbp+8C80h+var_5230]
 * 00000001800B389D: call    sub_18001C87C
 * 00000001800B38A2: movups  xmm0, [rbp+8C80h+var_7570]
 * 00000001800B38A9: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B38AE: movups  xmm1, [rbp+8C80h+var_7560]
 * 00000001800B38B5: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B38BA: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B38BF: mov     rcx, rax
 * 00000001800B38C2: call    sub_180075D94
 * 00000001800B38C7: nop
 * 00000001800B38C8: lea     rcx, [rbp+8C80h+var_2290]
 * 00000001800B38CF: call    sub_180011E30
 * 00000001800B38D4: nop
 * 00000001800B38D5: lea     rcx, [rbp+8C80h+var_2270]
 * 00000001800B38DC: call    sub_180011E30
 * 00000001800B38E1: nop
 * 00000001800B38E2: lea     rcx, dword_1801CE5A8
 * 00000001800B38E9: call    sub_18000D4CC
 * 00000001800B38EE: mov     rax, [rdi+rbx*8]
 * 00000001800B38F2: mov     ecx, [r15+rax]
 * 00000001800B38F6: cmp     cs:dword_1801CE5AC, ecx
 * 00000001800B38FC: jle     loc_1800B39D5
 * 00000001800B3902: lea     rcx, dword_1801CE5AC
 * 00000001800B3909: call    sub_18000D534
 * 00000001800B390E: cmp     cs:dword_1801CE5AC, r14d
 * 00000001800B3915: jnz     loc_1800B39D5
 * 00000001800B391B: lea     rax, unk_1801478A0
 * 00000001800B3922: mov     qword ptr [rbp+8C80h+var_7550], rax
 * 00000001800B3929: lea     rax, unk_1801492F0
 * 00000001800B3930: mov     qword ptr [rbp+8C80h+var_7550+8], rax
 * 00000001800B3937: mov     dword ptr [rbp+8C80h+var_7540], esi
 * 00000001800B393D: mov     dword ptr [rbp+8C80h+var_7540+4], esi
 * 00000001800B3943: call    sub_1800A8988
 * 00000001800B3948: mov     r8, rax
 * 00000001800B394B: mov     r9d, r12d
 * 00000001800B394E: mov     edx, 0A2h
 * 00000001800B3953: lea     rcx, [rbp+8C80h+var_2210]
 * 00000001800B395A: call    sub_180075CF8
 * 00000001800B395F: nop
 * 00000001800B3960: mov     r8, rax
 * 00000001800B3963: mov     rdx, r13
 * 00000001800B3966: lea     rcx, [rbp+8C80h+var_2230]
 * 00000001800B396D: call    sub_18001C928
 * 00000001800B3972: nop
 * 00000001800B3973: lea     r8, aVertex; "/Vertex"
 * 00000001800B397A: mov     rdx, rax
 * 00000001800B397D: lea     rcx, [rbp+8C80h+var_5210]
 * 00000001800B3984: call    sub_18001C87C
 * 00000001800B3989: movups  xmm0, [rbp+8C80h+var_7550]
 * 00000001800B3990: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3995: movups  xmm1, [rbp+8C80h+var_7540]
 * 00000001800B399C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B39A1: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B39A6: mov     rcx, rax
 * 00000001800B39A9: call    sub_180075D94
 * 00000001800B39AE: nop
 * 00000001800B39AF: lea     rcx, [rbp+8C80h+var_2230]
 * 00000001800B39B6: call    sub_180011E30
 * 00000001800B39BB: nop
 * 00000001800B39BC: lea     rcx, [rbp+8C80h+var_2210]
 * 00000001800B39C3: call    sub_180011E30
 * 00000001800B39C8: nop
 * 00000001800B39C9: lea     rcx, dword_1801CE5AC
 * 00000001800B39D0: call    sub_18000D4CC
 * 00000001800B39D5: mov     rax, [rdi+rbx*8]
 * 00000001800B39D9: mov     ecx, [r15+rax]
 * 00000001800B39DD: cmp     cs:dword_1801CE5B0, ecx
 * 00000001800B39E3: jle     loc_1800B3ABC
 * 00000001800B39E9: lea     rcx, dword_1801CE5B0
 * 00000001800B39F0: call    sub_18000D534
 * 00000001800B39F5: cmp     cs:dword_1801CE5B0, r14d
 * 00000001800B39FC: jnz     loc_1800B3ABC
 * 00000001800B3A02: lea     rax, unk_1801478A0
 * 00000001800B3A09: mov     qword ptr [rbp+8C80h+var_7530], rax
 * 00000001800B3A10: lea     rax, unk_1801492F0
 * 00000001800B3A17: mov     qword ptr [rbp+8C80h+var_7530+8], rax
 * 00000001800B3A1E: mov     dword ptr [rbp+8C80h+var_7520], esi
 * 00000001800B3A24: mov     dword ptr [rbp+8C80h+var_7520+4], esi
 * 00000001800B3A2A: call    sub_1800A8988
 * 00000001800B3A2F: mov     r8, rax
 * 00000001800B3A32: mov     r9d, r12d
 * 00000001800B3A35: mov     edx, 0A8h
 * 00000001800B3A3A: lea     rcx, [rbp+8C80h+var_21B0]
 * 00000001800B3A41: call    sub_180075CF8
 * 00000001800B3A46: nop
 * 00000001800B3A47: mov     r8, rax
 * 00000001800B3A4A: mov     rdx, r13
 * 00000001800B3A4D: lea     rcx, [rbp+8C80h+var_21D0]
 * 00000001800B3A54: call    sub_18001C928
 * 00000001800B3A59: nop
 * 00000001800B3A5A: lea     r8, aVertex; "/Vertex"
 * 00000001800B3A61: mov     rdx, rax
 * 00000001800B3A64: lea     rcx, [rbp+8C80h+var_51F0]
 * 00000001800B3A6B: call    sub_18001C87C
 * 00000001800B3A70: movups  xmm0, [rbp+8C80h+var_7530]
 * 00000001800B3A77: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3A7C: movups  xmm1, [rbp+8C80h+var_7520]
 * 00000001800B3A83: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3A88: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3A8D: mov     rcx, rax
 * 00000001800B3A90: call    sub_180075D94
 * 00000001800B3A95: nop
 * 00000001800B3A96: lea     rcx, [rbp+8C80h+var_21D0]
 * 00000001800B3A9D: call    sub_180011E30
 * 00000001800B3AA2: nop
 * 00000001800B3AA3: lea     rcx, [rbp+8C80h+var_21B0]
 * 00000001800B3AAA: call    sub_180011E30
 * 00000001800B3AAF: nop
 * 00000001800B3AB0: lea     rcx, dword_1801CE5B0
 * 00000001800B3AB7: call    sub_18000D4CC
 * 00000001800B3ABC: mov     rax, [rdi+rbx*8]
 * 00000001800B3AC0: mov     ecx, [r15+rax]
 * 00000001800B3AC4: cmp     cs:dword_1801CE5B4, ecx
 * 00000001800B3ACA: jle     loc_1800B3BA3
 * 00000001800B3AD0: lea     rcx, dword_1801CE5B4
 * 00000001800B3AD7: call    sub_18000D534
 * 00000001800B3ADC: cmp     cs:dword_1801CE5B4, r14d
 * 00000001800B3AE3: jnz     loc_1800B3BA3
 * 00000001800B3AE9: lea     rax, unk_1801478A0
 * 00000001800B3AF0: mov     qword ptr [rbp+8C80h+var_7510], rax
 * 00000001800B3AF7: lea     rax, unk_1801492F0
 * 00000001800B3AFE: mov     qword ptr [rbp+8C80h+var_7510+8], rax
 * 00000001800B3B05: mov     dword ptr [rbp+8C80h+var_7500], esi
 * 00000001800B3B0B: mov     dword ptr [rbp+8C80h+var_7500+4], esi
 * 00000001800B3B11: call    sub_1800A8988
 * 00000001800B3B16: mov     r8, rax
 * 00000001800B3B19: mov     r9d, r12d
 * 00000001800B3B1C: mov     edx, 0AAh
 * 00000001800B3B21: lea     rcx, [rbp+8C80h+var_2150]
 * 00000001800B3B28: call    sub_180075CF8
 * 00000001800B3B2D: nop
 * 00000001800B3B2E: mov     r8, rax
 * 00000001800B3B31: mov     rdx, r13
 * 00000001800B3B34: lea     rcx, [rbp+8C80h+var_2170]
 * 00000001800B3B3B: call    sub_18001C928
 * 00000001800B3B40: nop
 * 00000001800B3B41: lea     r8, aVertex; "/Vertex"
 * 00000001800B3B48: mov     rdx, rax
 * 00000001800B3B4B: lea     rcx, [rbp+8C80h+var_51D0]
 * 00000001800B3B52: call    sub_18001C87C
 * 00000001800B3B57: movups  xmm0, [rbp+8C80h+var_7510]
 * 00000001800B3B5E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3B63: movups  xmm1, [rbp+8C80h+var_7500]
 * 00000001800B3B6A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3B6F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3B74: mov     rcx, rax
 * 00000001800B3B77: call    sub_180075D94
 * 00000001800B3B7C: nop
 * 00000001800B3B7D: lea     rcx, [rbp+8C80h+var_2170]
 * 00000001800B3B84: call    sub_180011E30
 * 00000001800B3B89: nop
 * 00000001800B3B8A: lea     rcx, [rbp+8C80h+var_2150]
 * 00000001800B3B91: call    sub_180011E30
 * 00000001800B3B96: nop
 * 00000001800B3B97: lea     rcx, dword_1801CE5B4
 * 00000001800B3B9E: call    sub_18000D4CC
 * 00000001800B3BA3: mov     rax, [rdi+rbx*8]
 * 00000001800B3BA7: mov     ecx, [r15+rax]
 * 00000001800B3BAB: cmp     cs:dword_1801CE5B8, ecx
 * 00000001800B3BB1: jle     loc_1800B3C8A
 * 00000001800B3BB7: lea     rcx, dword_1801CE5B8
 * 00000001800B3BBE: call    sub_18000D534
 * 00000001800B3BC3: cmp     cs:dword_1801CE5B8, r14d
 * 00000001800B3BCA: jnz     loc_1800B3C8A
 * 00000001800B3BD0: lea     rax, unk_1801478A0
 * 00000001800B3BD7: mov     qword ptr [rbp+8C80h+var_74F0], rax
 * 00000001800B3BDE: lea     rax, unk_1801492F0
 * 00000001800B3BE5: mov     qword ptr [rbp+8C80h+var_74F0+8], rax
 * 00000001800B3BEC: mov     dword ptr [rbp+8C80h+var_74E0], esi
 * 00000001800B3BF2: mov     dword ptr [rbp+8C80h+var_74E0+4], esi
 * 00000001800B3BF8: call    sub_1800A8988
 * 00000001800B3BFD: mov     r8, rax
 * 00000001800B3C00: mov     r9d, r12d
 * 00000001800B3C03: mov     edx, 0B0h
 * 00000001800B3C08: lea     rcx, [rbp+8C80h+var_20F0]
 * 00000001800B3C0F: call    sub_180075CF8
 * 00000001800B3C14: nop
 * 00000001800B3C15: mov     r8, rax
 * 00000001800B3C18: mov     rdx, r13
 * 00000001800B3C1B: lea     rcx, [rbp+8C80h+var_2110]
 * 00000001800B3C22: call    sub_18001C928
 * 00000001800B3C27: nop
 * 00000001800B3C28: lea     r8, aVertex; "/Vertex"
 * 00000001800B3C2F: mov     rdx, rax
 * 00000001800B3C32: lea     rcx, [rbp+8C80h+var_51B0]
 * 00000001800B3C39: call    sub_18001C87C
 * 00000001800B3C3E: movups  xmm0, [rbp+8C80h+var_74F0]
 * 00000001800B3C45: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3C4A: movups  xmm1, [rbp+8C80h+var_74E0]
 * 00000001800B3C51: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3C56: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3C5B: mov     rcx, rax
 * 00000001800B3C5E: call    sub_180075D94
 * 00000001800B3C63: nop
 * 00000001800B3C64: lea     rcx, [rbp+8C80h+var_2110]
 * 00000001800B3C6B: call    sub_180011E30
 * 00000001800B3C70: nop
 * 00000001800B3C71: lea     rcx, [rbp+8C80h+var_20F0]
 * 00000001800B3C78: call    sub_180011E30
 * 00000001800B3C7D: nop
 * 00000001800B3C7E: lea     rcx, dword_1801CE5B8
 * 00000001800B3C85: call    sub_18000D4CC
 * 00000001800B3C8A: mov     rax, [rdi+rbx*8]
 * 00000001800B3C8E: mov     ecx, [r15+rax]
 * 00000001800B3C92: cmp     cs:dword_1801CE5BC, ecx
 * 00000001800B3C98: jle     loc_1800B3D71
 * 00000001800B3C9E: lea     rcx, dword_1801CE5BC
 * 00000001800B3CA5: call    sub_18000D534
 * 00000001800B3CAA: cmp     cs:dword_1801CE5BC, r14d
 * 00000001800B3CB1: jnz     loc_1800B3D71
 * 00000001800B3CB7: lea     rax, unk_1801478A0
 * 00000001800B3CBE: mov     qword ptr [rbp+8C80h+var_74D0], rax
 * 00000001800B3CC5: lea     rax, unk_1801492F0
 * 00000001800B3CCC: mov     qword ptr [rbp+8C80h+var_74D0+8], rax
 * 00000001800B3CD3: mov     dword ptr [rbp+8C80h+var_74C0], esi
 * 00000001800B3CD9: mov     dword ptr [rbp+8C80h+var_74C0+4], esi
 * 00000001800B3CDF: call    sub_1800A8988
 * 00000001800B3CE4: mov     r8, rax
 * 00000001800B3CE7: mov     r9d, r12d
 * 00000001800B3CEA: mov     edx, 0B2h
 * 00000001800B3CEF: lea     rcx, [rbp+8C80h+var_2090]
 * 00000001800B3CF6: call    sub_180075CF8
 * 00000001800B3CFB: nop
 * 00000001800B3CFC: mov     r8, rax
 * 00000001800B3CFF: mov     rdx, r13
 * 00000001800B3D02: lea     rcx, [rbp+8C80h+var_20B0]
 * 00000001800B3D09: call    sub_18001C928
 * 00000001800B3D0E: nop
 * 00000001800B3D0F: lea     r8, aVertex; "/Vertex"
 * 00000001800B3D16: mov     rdx, rax
 * 00000001800B3D19: lea     rcx, [rbp+8C80h+var_5190]
 * 00000001800B3D20: call    sub_18001C87C
 * 00000001800B3D25: movups  xmm0, [rbp+8C80h+var_74D0]
 * 00000001800B3D2C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3D31: movups  xmm1, [rbp+8C80h+var_74C0]
 * 00000001800B3D38: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3D3D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3D42: mov     rcx, rax
 * 00000001800B3D45: call    sub_180075D94
 * 00000001800B3D4A: nop
 * 00000001800B3D4B: lea     rcx, [rbp+8C80h+var_20B0]
 * 00000001800B3D52: call    sub_180011E30
 * 00000001800B3D57: nop
 * 00000001800B3D58: lea     rcx, [rbp+8C80h+var_2090]
 * 00000001800B3D5F: call    sub_180011E30
 * 00000001800B3D64: nop
 * 00000001800B3D65: lea     rcx, dword_1801CE5BC
 * 00000001800B3D6C: call    sub_18000D4CC
 * 00000001800B3D71: mov     rax, [rdi+rbx*8]
 * 00000001800B3D75: mov     ecx, [r15+rax]
 * 00000001800B3D79: cmp     cs:dword_1801CE5C0, ecx
 * 00000001800B3D7F: jle     loc_1800B3E58
 * 00000001800B3D85: lea     rcx, dword_1801CE5C0
 * 00000001800B3D8C: call    sub_18000D534
 * 00000001800B3D91: cmp     cs:dword_1801CE5C0, r14d
 * 00000001800B3D98: jnz     loc_1800B3E58
 * 00000001800B3D9E: lea     rax, unk_1801478A0
 * 00000001800B3DA5: mov     qword ptr [rbp+8C80h+var_74B0], rax
 * 00000001800B3DAC: lea     rax, unk_1801492F0
 * 00000001800B3DB3: mov     qword ptr [rbp+8C80h+var_74B0+8], rax
 * 00000001800B3DBA: mov     dword ptr [rbp+8C80h+var_74A0], esi
 * 00000001800B3DC0: mov     dword ptr [rbp+8C80h+var_74A0+4], esi
 * 00000001800B3DC6: call    sub_1800A8988
 * 00000001800B3DCB: mov     r8, rax
 * 00000001800B3DCE: mov     r9d, r12d
 * 00000001800B3DD1: mov     edx, 0B8h
 * 00000001800B3DD6: lea     rcx, [rbp+8C80h+var_2030]
 * 00000001800B3DDD: call    sub_180075CF8
 * 00000001800B3DE2: nop
 * 00000001800B3DE3: mov     r8, rax
 * 00000001800B3DE6: mov     rdx, r13
 * 00000001800B3DE9: lea     rcx, [rbp+8C80h+var_2050]
 * 00000001800B3DF0: call    sub_18001C928
 * 00000001800B3DF5: nop
 * 00000001800B3DF6: lea     r8, aVertex; "/Vertex"
 * 00000001800B3DFD: mov     rdx, rax
 * 00000001800B3E00: lea     rcx, [rbp+8C80h+var_5170]
 * 00000001800B3E07: call    sub_18001C87C
 * 00000001800B3E0C: movups  xmm0, [rbp+8C80h+var_74B0]
 * 00000001800B3E13: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3E18: movups  xmm1, [rbp+8C80h+var_74A0]
 * 00000001800B3E1F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3E24: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3E29: mov     rcx, rax
 * 00000001800B3E2C: call    sub_180075D94
 * 00000001800B3E31: nop
 * 00000001800B3E32: lea     rcx, [rbp+8C80h+var_2050]
 * 00000001800B3E39: call    sub_180011E30
 * 00000001800B3E3E: nop
 * 00000001800B3E3F: lea     rcx, [rbp+8C80h+var_2030]
 * 00000001800B3E46: call    sub_180011E30
 * 00000001800B3E4B: nop
 * 00000001800B3E4C: lea     rcx, dword_1801CE5C0
 * 00000001800B3E53: call    sub_18000D4CC
 * 00000001800B3E58: mov     rax, [rdi+rbx*8]
 * 00000001800B3E5C: mov     ecx, [r15+rax]
 * 00000001800B3E60: cmp     cs:dword_1801CE5C4, ecx
 * 00000001800B3E66: jle     loc_1800B3F3F
 * 00000001800B3E6C: lea     rcx, dword_1801CE5C4
 * 00000001800B3E73: call    sub_18000D534
 * 00000001800B3E78: cmp     cs:dword_1801CE5C4, r14d
 * 00000001800B3E7F: jnz     loc_1800B3F3F
 * 00000001800B3E85: lea     rax, unk_1801478A0
 * 00000001800B3E8C: mov     qword ptr [rbp+8C80h+var_7490], rax
 * 00000001800B3E93: lea     rax, unk_1801492F0
 * 00000001800B3E9A: mov     qword ptr [rbp+8C80h+var_7490+8], rax
 * 00000001800B3EA1: mov     dword ptr [rbp+8C80h+var_7480], esi
 * 00000001800B3EA7: mov     dword ptr [rbp+8C80h+var_7480+4], esi
 * 00000001800B3EAD: call    sub_1800A8988
 * 00000001800B3EB2: mov     r8, rax
 * 00000001800B3EB5: mov     r9d, r12d
 * 00000001800B3EB8: mov     edx, 0BAh
 * 00000001800B3EBD: lea     rcx, [rbp+8C80h+var_1FD0]
 * 00000001800B3EC4: call    sub_180075CF8
 * 00000001800B3EC9: nop
 * 00000001800B3ECA: mov     r8, rax
 * 00000001800B3ECD: mov     rdx, r13
 * 00000001800B3ED0: lea     rcx, [rbp+8C80h+var_1FF0]
 * 00000001800B3ED7: call    sub_18001C928
 * 00000001800B3EDC: nop
 * 00000001800B3EDD: lea     r8, aVertex; "/Vertex"
 * 00000001800B3EE4: mov     rdx, rax
 * 00000001800B3EE7: lea     rcx, [rbp+8C80h+var_5150]
 * 00000001800B3EEE: call    sub_18001C87C
 * 00000001800B3EF3: movups  xmm0, [rbp+8C80h+var_7490]
 * 00000001800B3EFA: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3EFF: movups  xmm1, [rbp+8C80h+var_7480]
 * 00000001800B3F06: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3F0B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3F10: mov     rcx, rax
 * 00000001800B3F13: call    sub_180075D94
 * 00000001800B3F18: nop
 * 00000001800B3F19: lea     rcx, [rbp+8C80h+var_1FF0]
 * 00000001800B3F20: call    sub_180011E30
 * 00000001800B3F25: nop
 * 00000001800B3F26: lea     rcx, [rbp+8C80h+var_1FD0]
 * 00000001800B3F2D: call    sub_180011E30
 * 00000001800B3F32: nop
 * 00000001800B3F33: lea     rcx, dword_1801CE5C4
 * 00000001800B3F3A: call    sub_18000D4CC
 * 00000001800B3F3F: mov     rax, [rdi+rbx*8]
 * 00000001800B3F43: mov     ecx, [r15+rax]
 * 00000001800B3F47: cmp     cs:dword_1801CE5C8, ecx
 * 00000001800B3F4D: jle     loc_1800B4026
 * 00000001800B3F53: lea     rcx, dword_1801CE5C8
 * 00000001800B3F5A: call    sub_18000D534
 * 00000001800B3F5F: cmp     cs:dword_1801CE5C8, r14d
 * 00000001800B3F66: jnz     loc_1800B4026
 * 00000001800B3F6C: lea     rax, unk_1801492F0
 * 00000001800B3F73: mov     qword ptr [rbp+8C80h+var_7470], rax
 * 00000001800B3F7A: lea     rax, unk_18014A340
 * 00000001800B3F81: mov     qword ptr [rbp+8C80h+var_7470+8], rax
 * 00000001800B3F88: mov     dword ptr [rbp+8C80h+var_7460], esi
 * 00000001800B3F8E: mov     dword ptr [rbp+8C80h+var_7460+4], esi
 * 00000001800B3F94: call    sub_1800A8988
 * 00000001800B3F99: mov     r8, rax
 * 00000001800B3F9C: mov     r9d, r12d
 * 00000001800B3F9F: mov     edx, 0C0h
 * 00000001800B3FA4: lea     rcx, [rbp+8C80h+var_1F70]
 * 00000001800B3FAB: call    sub_180075CF8
 * 00000001800B3FB0: nop
 * 00000001800B3FB1: mov     r8, rax
 * 00000001800B3FB4: mov     rdx, r13
 * 00000001800B3FB7: lea     rcx, [rbp+8C80h+var_1F90]
 * 00000001800B3FBE: call    sub_18001C928
 * 00000001800B3FC3: nop
 * 00000001800B3FC4: lea     r8, aVertex; "/Vertex"
 * 00000001800B3FCB: mov     rdx, rax
 * 00000001800B3FCE: lea     rcx, [rbp+8C80h+var_5130]
 * 00000001800B3FD5: call    sub_18001C87C
 * 00000001800B3FDA: movups  xmm0, [rbp+8C80h+var_7470]
 * 00000001800B3FE1: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B3FE6: movups  xmm1, [rbp+8C80h+var_7460]
 * 00000001800B3FED: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B3FF2: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B3FF7: mov     rcx, rax
 * 00000001800B3FFA: call    sub_180075D94
 * 00000001800B3FFF: nop
 * 00000001800B4000: lea     rcx, [rbp+8C80h+var_1F90]
 * 00000001800B4007: call    sub_180011E30
 * 00000001800B400C: nop
 * 00000001800B400D: lea     rcx, [rbp+8C80h+var_1F70]
 * 00000001800B4014: call    sub_180011E30
 * 00000001800B4019: nop
 * 00000001800B401A: lea     rcx, dword_1801CE5C8
 * 00000001800B4021: call    sub_18000D4CC
 * 00000001800B4026: mov     rax, [rdi+rbx*8]
 * 00000001800B402A: mov     ecx, [r15+rax]
 * 00000001800B402E: cmp     cs:dword_1801CE5CC, ecx
 * 00000001800B4034: jle     loc_1800B410D
 * 00000001800B403A: lea     rcx, dword_1801CE5CC
 * 00000001800B4041: call    sub_18000D534
 * 00000001800B4046: cmp     cs:dword_1801CE5CC, r14d
 * 00000001800B404D: jnz     loc_1800B410D
 * 00000001800B4053: lea     rax, unk_1801492F0
 * 00000001800B405A: mov     qword ptr [rbp+8C80h+var_7450], rax
 * 00000001800B4061: lea     rax, unk_18014A340
 * 00000001800B4068: mov     qword ptr [rbp+8C80h+var_7450+8], rax
 * 00000001800B406F: mov     dword ptr [rbp+8C80h+var_7440], esi
 * 00000001800B4075: mov     dword ptr [rbp+8C80h+var_7440+4], esi
 * 00000001800B407B: call    sub_1800A8988
 * 00000001800B4080: mov     r8, rax
 * 00000001800B4083: mov     r9d, r12d
 * 00000001800B4086: mov     edx, 0C2h
 * 00000001800B408B: lea     rcx, [rbp+8C80h+var_1F10]
 * 00000001800B4092: call    sub_180075CF8
 * 00000001800B4097: nop
 * 00000001800B4098: mov     r8, rax
 * 00000001800B409B: mov     rdx, r13
 * 00000001800B409E: lea     rcx, [rbp+8C80h+var_1F30]
 * 00000001800B40A5: call    sub_18001C928
 * 00000001800B40AA: nop
 * 00000001800B40AB: lea     r8, aVertex; "/Vertex"
 * 00000001800B40B2: mov     rdx, rax
 * 00000001800B40B5: lea     rcx, [rbp+8C80h+var_5110]
 * 00000001800B40BC: call    sub_18001C87C
 * 00000001800B40C1: movups  xmm0, [rbp+8C80h+var_7450]
 * 00000001800B40C8: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B40CD: movups  xmm1, [rbp+8C80h+var_7440]
 * 00000001800B40D4: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B40D9: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B40DE: mov     rcx, rax
 * 00000001800B40E1: call    sub_180075D94
 * 00000001800B40E6: nop
 * 00000001800B40E7: lea     rcx, [rbp+8C80h+var_1F30]
 * 00000001800B40EE: call    sub_180011E30
 * 00000001800B40F3: nop
 * 00000001800B40F4: lea     rcx, [rbp+8C80h+var_1F10]
 * 00000001800B40FB: call    sub_180011E30
 * 00000001800B4100: nop
 * 00000001800B4101: lea     rcx, dword_1801CE5CC
 * 00000001800B4108: call    sub_18000D4CC
 * 00000001800B410D: mov     rax, [rdi+rbx*8]
 * 00000001800B4111: mov     ecx, [r15+rax]
 * 00000001800B4115: cmp     cs:dword_1801CE5D0, ecx
 * 00000001800B411B: jle     loc_1800B41F4
 * 00000001800B4121: lea     rcx, dword_1801CE5D0
 * 00000001800B4128: call    sub_18000D534
 * 00000001800B412D: cmp     cs:dword_1801CE5D0, r14d
 * 00000001800B4134: jnz     loc_1800B41F4
 * 00000001800B413A: lea     rax, unk_1801492F0
 * 00000001800B4141: mov     qword ptr [rbp+8C80h+var_7430], rax
 * 00000001800B4148: lea     rax, unk_18014A340
 * 00000001800B414F: mov     qword ptr [rbp+8C80h+var_7430+8], rax
 * 00000001800B4156: mov     dword ptr [rbp+8C80h+var_7420], esi
 * 00000001800B415C: mov     dword ptr [rbp+8C80h+var_7420+4], esi
 * 00000001800B4162: call    sub_1800A8988
 * 00000001800B4167: mov     r8, rax
 * 00000001800B416A: mov     r9d, r12d
 * 00000001800B416D: mov     edx, 0C8h
 * 00000001800B4172: lea     rcx, [rbp+8C80h+var_1EB0]
 * 00000001800B4179: call    sub_180075CF8
 * 00000001800B417E: nop
 * 00000001800B417F: mov     r8, rax
 * 00000001800B4182: mov     rdx, r13
 * 00000001800B4185: lea     rcx, [rbp+8C80h+var_1ED0]
 * 00000001800B418C: call    sub_18001C928
 * 00000001800B4191: nop
 * 00000001800B4192: lea     r8, aVertex; "/Vertex"
 * 00000001800B4199: mov     rdx, rax
 * 00000001800B419C: lea     rcx, [rbp+8C80h+var_50F0]
 * 00000001800B41A3: call    sub_18001C87C
 * 00000001800B41A8: movups  xmm0, [rbp+8C80h+var_7430]
 * 00000001800B41AF: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B41B4: movups  xmm1, [rbp+8C80h+var_7420]
 * 00000001800B41BB: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B41C0: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B41C5: mov     rcx, rax
 * 00000001800B41C8: call    sub_180075D94
 * 00000001800B41CD: nop
 * 00000001800B41CE: lea     rcx, [rbp+8C80h+var_1ED0]
 * 00000001800B41D5: call    sub_180011E30
 * 00000001800B41DA: nop
 * 00000001800B41DB: lea     rcx, [rbp+8C80h+var_1EB0]
 * 00000001800B41E2: call    sub_180011E30
 * 00000001800B41E7: nop
 * 00000001800B41E8: lea     rcx, dword_1801CE5D0
 * 00000001800B41EF: call    sub_18000D4CC
 * 00000001800B41F4: mov     rax, [rdi+rbx*8]
 * 00000001800B41F8: mov     ecx, [r15+rax]
 * 00000001800B41FC: cmp     cs:dword_1801CE5D4, ecx
 * 00000001800B4202: jle     loc_1800B42DB
 * 00000001800B4208: lea     rcx, dword_1801CE5D4
 * 00000001800B420F: call    sub_18000D534
 * 00000001800B4214: cmp     cs:dword_1801CE5D4, r14d
 * 00000001800B421B: jnz     loc_1800B42DB
 * 00000001800B4221: lea     rax, unk_1801492F0
 * 00000001800B4228: mov     qword ptr [rbp+8C80h+var_7410], rax
 * 00000001800B422F: lea     rax, unk_18014A340
 * 00000001800B4236: mov     qword ptr [rbp+8C80h+var_7410+8], rax
 * 00000001800B423D: mov     dword ptr [rbp+8C80h+var_7400], esi
 * 00000001800B4243: mov     dword ptr [rbp+8C80h+var_7400+4], esi
 * 00000001800B4249: call    sub_1800A8988
 * 00000001800B424E: mov     r8, rax
 * 00000001800B4251: mov     r9d, r12d
 * 00000001800B4254: mov     edx, 0CAh
 * 00000001800B4259: lea     rcx, [rbp+8C80h+var_1E50]
 * 00000001800B4260: call    sub_180075CF8
 * 00000001800B4265: nop
 * 00000001800B4266: mov     r8, rax
 * 00000001800B4269: mov     rdx, r13
 * 00000001800B426C: lea     rcx, [rbp+8C80h+var_1E70]
 * 00000001800B4273: call    sub_18001C928
 * 00000001800B4278: nop
 * 00000001800B4279: lea     r8, aVertex; "/Vertex"
 * 00000001800B4280: mov     rdx, rax
 * 00000001800B4283: lea     rcx, [rbp+8C80h+var_50D0]
 * 00000001800B428A: call    sub_18001C87C
 * 00000001800B428F: movups  xmm0, [rbp+8C80h+var_7410]
 * 00000001800B4296: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B429B: movups  xmm1, [rbp+8C80h+var_7400]
 * 00000001800B42A2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B42A7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B42AC: mov     rcx, rax
 * 00000001800B42AF: call    sub_180075D94
 * 00000001800B42B4: nop
 * 00000001800B42B5: lea     rcx, [rbp+8C80h+var_1E70]
 * 00000001800B42BC: call    sub_180011E30
 * 00000001800B42C1: nop
 * 00000001800B42C2: lea     rcx, [rbp+8C80h+var_1E50]
 * 00000001800B42C9: call    sub_180011E30
 * 00000001800B42CE: nop
 * 00000001800B42CF: lea     rcx, dword_1801CE5D4
 * 00000001800B42D6: call    sub_18000D4CC
 * 00000001800B42DB: mov     rax, [rdi+rbx*8]
 * 00000001800B42DF: mov     ecx, [r15+rax]
 * 00000001800B42E3: cmp     cs:dword_1801CE5D8, ecx
 * 00000001800B42E9: jle     loc_1800B43C2
 * 00000001800B42EF: lea     rcx, dword_1801CE5D8
 * 00000001800B42F6: call    sub_18000D534
 * 00000001800B42FB: cmp     cs:dword_1801CE5D8, r14d
 * 00000001800B4302: jnz     loc_1800B43C2
 * 00000001800B4308: lea     rax, unk_1801492F0
 * 00000001800B430F: mov     qword ptr [rbp+8C80h+var_73F0], rax
 * 00000001800B4316: lea     rax, unk_18014A340
 * 00000001800B431D: mov     qword ptr [rbp+8C80h+var_73F0+8], rax
 * 00000001800B4324: mov     dword ptr [rbp+8C80h+var_73E0], esi
 * 00000001800B432A: mov     dword ptr [rbp+8C80h+var_73E0+4], esi
 * 00000001800B4330: call    sub_1800A8988
 * 00000001800B4335: mov     r8, rax
 * 00000001800B4338: mov     r9d, r12d
 * 00000001800B433B: mov     edx, 0D0h
 * 00000001800B4340: lea     rcx, [rbp+8C80h+var_1DF0]
 * 00000001800B4347: call    sub_180075CF8
 * 00000001800B434C: nop
 * 00000001800B434D: mov     r8, rax
 * 00000001800B4350: mov     rdx, r13
 * 00000001800B4353: lea     rcx, [rbp+8C80h+var_1E10]
 * 00000001800B435A: call    sub_18001C928
 * 00000001800B435F: nop
 * 00000001800B4360: lea     r8, aVertex; "/Vertex"
 * 00000001800B4367: mov     rdx, rax
 * 00000001800B436A: lea     rcx, [rbp+8C80h+var_50B0]
 * 00000001800B4371: call    sub_18001C87C
 * 00000001800B4376: movups  xmm0, [rbp+8C80h+var_73F0]
 * 00000001800B437D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4382: movups  xmm1, [rbp+8C80h+var_73E0]
 * 00000001800B4389: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B438E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4393: mov     rcx, rax
 * 00000001800B4396: call    sub_180075D94
 * 00000001800B439B: nop
 * 00000001800B439C: lea     rcx, [rbp+8C80h+var_1E10]
 * 00000001800B43A3: call    sub_180011E30
 * 00000001800B43A8: nop
 * 00000001800B43A9: lea     rcx, [rbp+8C80h+var_1DF0]
 * 00000001800B43B0: call    sub_180011E30
 * 00000001800B43B5: nop
 * 00000001800B43B6: lea     rcx, dword_1801CE5D8
 * 00000001800B43BD: call    sub_18000D4CC
 * 00000001800B43C2: mov     rax, [rdi+rbx*8]
 * 00000001800B43C6: mov     ecx, [r15+rax]
 * 00000001800B43CA: cmp     cs:dword_1801CE5DC, ecx
 * 00000001800B43D0: jle     loc_1800B44A9
 * 00000001800B43D6: lea     rcx, dword_1801CE5DC
 * 00000001800B43DD: call    sub_18000D534
 * 00000001800B43E2: cmp     cs:dword_1801CE5DC, r14d
 * 00000001800B43E9: jnz     loc_1800B44A9
 * 00000001800B43EF: lea     rax, unk_1801492F0
 * 00000001800B43F6: mov     qword ptr [rbp+8C80h+var_73D0], rax
 * 00000001800B43FD: lea     rax, unk_18014A340
 * 00000001800B4404: mov     qword ptr [rbp+8C80h+var_73D0+8], rax
 * 00000001800B440B: mov     dword ptr [rbp+8C80h+var_73C0], esi
 * 00000001800B4411: mov     dword ptr [rbp+8C80h+var_73C0+4], esi
 * 00000001800B4417: call    sub_1800A8988
 * 00000001800B441C: mov     r8, rax
 * 00000001800B441F: mov     r9d, r12d
 * 00000001800B4422: mov     edx, 0D2h
 * 00000001800B4427: lea     rcx, [rbp+8C80h+var_1D90]
 * 00000001800B442E: call    sub_180075CF8
 * 00000001800B4433: nop
 * 00000001800B4434: mov     r8, rax
 * 00000001800B4437: mov     rdx, r13
 * 00000001800B443A: lea     rcx, [rbp+8C80h+var_1DB0]
 * 00000001800B4441: call    sub_18001C928
 * 00000001800B4446: nop
 * 00000001800B4447: lea     r8, aVertex; "/Vertex"
 * 00000001800B444E: mov     rdx, rax
 * 00000001800B4451: lea     rcx, [rbp+8C80h+var_5090]
 * 00000001800B4458: call    sub_18001C87C
 * 00000001800B445D: movups  xmm0, [rbp+8C80h+var_73D0]
 * 00000001800B4464: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4469: movups  xmm1, [rbp+8C80h+var_73C0]
 * 00000001800B4470: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4475: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B447A: mov     rcx, rax
 * 00000001800B447D: call    sub_180075D94
 * 00000001800B4482: nop
 * 00000001800B4483: lea     rcx, [rbp+8C80h+var_1DB0]
 * 00000001800B448A: call    sub_180011E30
 * 00000001800B448F: nop
 * 00000001800B4490: lea     rcx, [rbp+8C80h+var_1D90]
 * 00000001800B4497: call    sub_180011E30
 * 00000001800B449C: nop
 * 00000001800B449D: lea     rcx, dword_1801CE5DC
 * 00000001800B44A4: call    sub_18000D4CC
 * 00000001800B44A9: mov     rax, [rdi+rbx*8]
 * 00000001800B44AD: mov     ecx, [r15+rax]
 * 00000001800B44B1: cmp     cs:dword_1801CE5E0, ecx
 * 00000001800B44B7: jle     loc_1800B4590
 * 00000001800B44BD: lea     rcx, dword_1801CE5E0
 * 00000001800B44C4: call    sub_18000D534
 * 00000001800B44C9: cmp     cs:dword_1801CE5E0, r14d
 * 00000001800B44D0: jnz     loc_1800B4590
 * 00000001800B44D6: lea     rax, unk_1801492F0
 * 00000001800B44DD: mov     qword ptr [rbp+8C80h+var_73B0], rax
 * 00000001800B44E4: lea     rax, unk_18014A340
 * 00000001800B44EB: mov     qword ptr [rbp+8C80h+var_73B0+8], rax
 * 00000001800B44F2: mov     dword ptr [rbp+8C80h+var_73A0], esi
 * 00000001800B44F8: mov     dword ptr [rbp+8C80h+var_73A0+4], esi
 * 00000001800B44FE: call    sub_1800A8988
 * 00000001800B4503: mov     r8, rax
 * 00000001800B4506: mov     r9d, r12d
 * 00000001800B4509: mov     edx, 0D8h
 * 00000001800B450E: lea     rcx, [rbp+8C80h+var_1D30]
 * 00000001800B4515: call    sub_180075CF8
 * 00000001800B451A: nop
 * 00000001800B451B: mov     r8, rax
 * 00000001800B451E: mov     rdx, r13
 * 00000001800B4521: lea     rcx, [rbp+8C80h+var_1D50]
 * 00000001800B4528: call    sub_18001C928
 * 00000001800B452D: nop
 * 00000001800B452E: lea     r8, aVertex; "/Vertex"
 * 00000001800B4535: mov     rdx, rax
 * 00000001800B4538: lea     rcx, [rbp+8C80h+var_5070]
 * 00000001800B453F: call    sub_18001C87C
 * 00000001800B4544: movups  xmm0, [rbp+8C80h+var_73B0]
 * 00000001800B454B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4550: movups  xmm1, [rbp+8C80h+var_73A0]
 * 00000001800B4557: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B455C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4561: mov     rcx, rax
 * 00000001800B4564: call    sub_180075D94
 * 00000001800B4569: nop
 * 00000001800B456A: lea     rcx, [rbp+8C80h+var_1D50]
 * 00000001800B4571: call    sub_180011E30
 * 00000001800B4576: nop
 * 00000001800B4577: lea     rcx, [rbp+8C80h+var_1D30]
 * 00000001800B457E: call    sub_180011E30
 * 00000001800B4583: nop
 * 00000001800B4584: lea     rcx, dword_1801CE5E0
 * 00000001800B458B: call    sub_18000D4CC
 * 00000001800B4590: mov     rax, [rdi+rbx*8]
 * 00000001800B4594: mov     ecx, [r15+rax]
 * 00000001800B4598: cmp     cs:dword_1801CE5E4, ecx
 * 00000001800B459E: jle     loc_1800B4677
 * 00000001800B45A4: lea     rcx, dword_1801CE5E4
 * 00000001800B45AB: call    sub_18000D534
 * 00000001800B45B0: cmp     cs:dword_1801CE5E4, r14d
 * 00000001800B45B7: jnz     loc_1800B4677
 * 00000001800B45BD: lea     rax, unk_1801492F0
 * 00000001800B45C4: mov     qword ptr [rbp+8C80h+var_7390], rax
 * 00000001800B45CB: lea     rax, unk_18014A340
 * 00000001800B45D2: mov     qword ptr [rbp+8C80h+var_7390+8], rax
 * 00000001800B45D9: mov     dword ptr [rbp+8C80h+var_7380], esi
 * 00000001800B45DF: mov     dword ptr [rbp+8C80h+var_7380+4], esi
 * 00000001800B45E5: call    sub_1800A8988
 * 00000001800B45EA: mov     r8, rax
 * 00000001800B45ED: mov     r9d, r12d
 * 00000001800B45F0: mov     edx, 0DAh
 * 00000001800B45F5: lea     rcx, [rbp+8C80h+var_1CD0]
 * 00000001800B45FC: call    sub_180075CF8
 * 00000001800B4601: nop
 * 00000001800B4602: mov     r8, rax
 * 00000001800B4605: mov     rdx, r13
 * 00000001800B4608: lea     rcx, [rbp+8C80h+var_1CF0]
 * 00000001800B460F: call    sub_18001C928
 * 00000001800B4614: nop
 * 00000001800B4615: lea     r8, aVertex; "/Vertex"
 * 00000001800B461C: mov     rdx, rax
 * 00000001800B461F: lea     rcx, [rbp+8C80h+var_5050]
 * 00000001800B4626: call    sub_18001C87C
 * 00000001800B462B: movups  xmm0, [rbp+8C80h+var_7390]
 * 00000001800B4632: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4637: movups  xmm1, [rbp+8C80h+var_7380]
 * 00000001800B463E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4643: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4648: mov     rcx, rax
 * 00000001800B464B: call    sub_180075D94
 * 00000001800B4650: nop
 * 00000001800B4651: lea     rcx, [rbp+8C80h+var_1CF0]
 * 00000001800B4658: call    sub_180011E30
 * 00000001800B465D: nop
 * 00000001800B465E: lea     rcx, [rbp+8C80h+var_1CD0]
 * 00000001800B4665: call    sub_180011E30
 * 00000001800B466A: nop
 * 00000001800B466B: lea     rcx, dword_1801CE5E4
 * 00000001800B4672: call    sub_18000D4CC
 * 00000001800B4677: mov     rax, [rdi+rbx*8]
 * 00000001800B467B: mov     ecx, [r15+rax]
 * 00000001800B467F: cmp     cs:dword_1801CE5E8, ecx
 * 00000001800B4685: jle     loc_1800B475E
 * 00000001800B468B: lea     rcx, dword_1801CE5E8
 * 00000001800B4692: call    sub_18000D534
 * 00000001800B4697: cmp     cs:dword_1801CE5E8, r14d
 * 00000001800B469E: jnz     loc_1800B475E
 * 00000001800B46A4: lea     rax, unk_1801478A0
 * 00000001800B46AB: mov     qword ptr [rbp+8C80h+var_7370], rax
 * 00000001800B46B2: lea     rax, unk_1801492F0
 * 00000001800B46B9: mov     qword ptr [rbp+8C80h+var_7370+8], rax
 * 00000001800B46C0: mov     dword ptr [rbp+8C80h+var_7360], esi
 * 00000001800B46C6: mov     dword ptr [rbp+8C80h+var_7360+4], esi
 * 00000001800B46CC: call    sub_1800A8988
 * 00000001800B46D1: mov     r8, rax
 * 00000001800B46D4: mov     r9d, r12d
 * 00000001800B46D7: mov     edx, 0E0h
 * 00000001800B46DC: lea     rcx, [rbp+8C80h+var_1C70]
 * 00000001800B46E3: call    sub_180075CF8
 * 00000001800B46E8: nop
 * 00000001800B46E9: mov     r8, rax
 * 00000001800B46EC: mov     rdx, r13
 * 00000001800B46EF: lea     rcx, [rbp+8C80h+var_1C90]
 * 00000001800B46F6: call    sub_18001C928
 * 00000001800B46FB: nop
 * 00000001800B46FC: lea     r8, aVertex; "/Vertex"
 * 00000001800B4703: mov     rdx, rax
 * 00000001800B4706: lea     rcx, [rbp+8C80h+var_5030]
 * 00000001800B470D: call    sub_18001C87C
 * 00000001800B4712: movups  xmm0, [rbp+8C80h+var_7370]
 * 00000001800B4719: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B471E: movups  xmm1, [rbp+8C80h+var_7360]
 * 00000001800B4725: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B472A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B472F: mov     rcx, rax
 * 00000001800B4732: call    sub_180075D94
 * 00000001800B4737: nop
 * 00000001800B4738: lea     rcx, [rbp+8C80h+var_1C90]
 * 00000001800B473F: call    sub_180011E30
 * 00000001800B4744: nop
 * 00000001800B4745: lea     rcx, [rbp+8C80h+var_1C70]
 * 00000001800B474C: call    sub_180011E30
 * 00000001800B4751: nop
 * 00000001800B4752: lea     rcx, dword_1801CE5E8
 * 00000001800B4759: call    sub_18000D4CC
 * 00000001800B475E: mov     rax, [rdi+rbx*8]
 * 00000001800B4762: mov     ecx, [r15+rax]
 * 00000001800B4766: cmp     cs:dword_1801CE5EC, ecx
 * 00000001800B476C: jle     loc_1800B4845
 * 00000001800B4772: lea     rcx, dword_1801CE5EC
 * 00000001800B4779: call    sub_18000D534
 * 00000001800B477E: cmp     cs:dword_1801CE5EC, r14d
 * 00000001800B4785: jnz     loc_1800B4845
 * 00000001800B478B: lea     rax, unk_1801478A0
 * 00000001800B4792: mov     qword ptr [rbp+8C80h+var_7350], rax
 * 00000001800B4799: lea     rax, unk_1801492F0
 * 00000001800B47A0: mov     qword ptr [rbp+8C80h+var_7350+8], rax
 * 00000001800B47A7: mov     dword ptr [rbp+8C80h+var_7340], esi
 * 00000001800B47AD: mov     dword ptr [rbp+8C80h+var_7340+4], esi
 * 00000001800B47B3: call    sub_1800A8988
 * 00000001800B47B8: mov     r8, rax
 * 00000001800B47BB: mov     r9d, r12d
 * 00000001800B47BE: mov     edx, 0E2h
 * 00000001800B47C3: lea     rcx, [rbp+8C80h+var_1C10]
 * 00000001800B47CA: call    sub_180075CF8
 * 00000001800B47CF: nop
 * 00000001800B47D0: mov     r8, rax
 * 00000001800B47D3: mov     rdx, r13
 * 00000001800B47D6: lea     rcx, [rbp+8C80h+var_1C30]
 * 00000001800B47DD: call    sub_18001C928
 * 00000001800B47E2: nop
 * 00000001800B47E3: lea     r8, aVertex; "/Vertex"
 * 00000001800B47EA: mov     rdx, rax
 * 00000001800B47ED: lea     rcx, [rbp+8C80h+var_5010]
 * 00000001800B47F4: call    sub_18001C87C
 * 00000001800B47F9: movups  xmm0, [rbp+8C80h+var_7350]
 * 00000001800B4800: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4805: movups  xmm1, [rbp+8C80h+var_7340]
 * 00000001800B480C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4811: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4816: mov     rcx, rax
 * 00000001800B4819: call    sub_180075D94
 * 00000001800B481E: nop
 * 00000001800B481F: lea     rcx, [rbp+8C80h+var_1C30]
 * 00000001800B4826: call    sub_180011E30
 * 00000001800B482B: nop
 * 00000001800B482C: lea     rcx, [rbp+8C80h+var_1C10]
 * 00000001800B4833: call    sub_180011E30
 * 00000001800B4838: nop
 * 00000001800B4839: lea     rcx, dword_1801CE5EC
 * 00000001800B4840: call    sub_18000D4CC
 * 00000001800B4845: mov     rax, [rdi+rbx*8]
 * 00000001800B4849: mov     ecx, [r15+rax]
 * 00000001800B484D: cmp     cs:dword_1801CE5F0, ecx
 * 00000001800B4853: jle     loc_1800B492C
 * 00000001800B4859: lea     rcx, dword_1801CE5F0
 * 00000001800B4860: call    sub_18000D534
 * 00000001800B4865: cmp     cs:dword_1801CE5F0, r14d
 * 00000001800B486C: jnz     loc_1800B492C
 * 00000001800B4872: lea     rax, unk_1801478A0
 * 00000001800B4879: mov     qword ptr [rbp+8C80h+var_7330], rax
 * 00000001800B4880: lea     rax, unk_1801492F0
 * 00000001800B4887: mov     qword ptr [rbp+8C80h+var_7330+8], rax
 * 00000001800B488E: mov     dword ptr [rbp+8C80h+var_7320], esi
 * 00000001800B4894: mov     dword ptr [rbp+8C80h+var_7320+4], esi
 * 00000001800B489A: call    sub_1800A8988
 * 00000001800B489F: mov     r8, rax
 * 00000001800B48A2: mov     r9d, r12d
 * 00000001800B48A5: mov     edx, 0E8h
 * 00000001800B48AA: lea     rcx, [rbp+8C80h+var_1BB0]
 * 00000001800B48B1: call    sub_180075CF8
 * 00000001800B48B6: nop
 * 00000001800B48B7: mov     r8, rax
 * 00000001800B48BA: mov     rdx, r13
 * 00000001800B48BD: lea     rcx, [rbp+8C80h+var_1BD0]
 * 00000001800B48C4: call    sub_18001C928
 * 00000001800B48C9: nop
 * 00000001800B48CA: lea     r8, aVertex; "/Vertex"
 * 00000001800B48D1: mov     rdx, rax
 * 00000001800B48D4: lea     rcx, [rbp+8C80h+var_4FF0]
 * 00000001800B48DB: call    sub_18001C87C
 * 00000001800B48E0: movups  xmm0, [rbp+8C80h+var_7330]
 * 00000001800B48E7: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B48EC: movups  xmm1, [rbp+8C80h+var_7320]
 * 00000001800B48F3: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B48F8: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B48FD: mov     rcx, rax
 * 00000001800B4900: call    sub_180075D94
 * 00000001800B4905: nop
 * 00000001800B4906: lea     rcx, [rbp+8C80h+var_1BD0]
 * 00000001800B490D: call    sub_180011E30
 * 00000001800B4912: nop
 * 00000001800B4913: lea     rcx, [rbp+8C80h+var_1BB0]
 * 00000001800B491A: call    sub_180011E30
 * 00000001800B491F: nop
 * 00000001800B4920: lea     rcx, dword_1801CE5F0
 * 00000001800B4927: call    sub_18000D4CC
 * 00000001800B492C: mov     rax, [rdi+rbx*8]
 * 00000001800B4930: mov     ecx, [r15+rax]
 * 00000001800B4934: cmp     cs:dword_1801CE5F4, ecx
 * 00000001800B493A: jle     loc_1800B4A13
 * 00000001800B4940: lea     rcx, dword_1801CE5F4
 * 00000001800B4947: call    sub_18000D534
 * 00000001800B494C: cmp     cs:dword_1801CE5F4, r14d
 * 00000001800B4953: jnz     loc_1800B4A13
 * 00000001800B4959: lea     rax, unk_1801478A0
 * 00000001800B4960: mov     qword ptr [rbp+8C80h+var_7310], rax
 * 00000001800B4967: lea     rax, unk_1801492F0
 * 00000001800B496E: mov     qword ptr [rbp+8C80h+var_7310+8], rax
 * 00000001800B4975: mov     dword ptr [rbp+8C80h+var_7300], esi
 * 00000001800B497B: mov     dword ptr [rbp+8C80h+var_7300+4], esi
 * 00000001800B4981: call    sub_1800A8988
 * 00000001800B4986: mov     r8, rax
 * 00000001800B4989: mov     r9d, r12d
 * 00000001800B498C: mov     edx, 0EAh
 * 00000001800B4991: lea     rcx, [rbp+8C80h+var_1B50]
 * 00000001800B4998: call    sub_180075CF8
 * 00000001800B499D: nop
 * 00000001800B499E: mov     r8, rax
 * 00000001800B49A1: mov     rdx, r13
 * 00000001800B49A4: lea     rcx, [rbp+8C80h+var_1B70]
 * 00000001800B49AB: call    sub_18001C928
 * 00000001800B49B0: nop
 * 00000001800B49B1: lea     r8, aVertex; "/Vertex"
 * 00000001800B49B8: mov     rdx, rax
 * 00000001800B49BB: lea     rcx, [rbp+8C80h+var_4FD0]
 * 00000001800B49C2: call    sub_18001C87C
 * 00000001800B49C7: movups  xmm0, [rbp+8C80h+var_7310]
 * 00000001800B49CE: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B49D3: movups  xmm1, [rbp+8C80h+var_7300]
 * 00000001800B49DA: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B49DF: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B49E4: mov     rcx, rax
 * 00000001800B49E7: call    sub_180075D94
 * 00000001800B49EC: nop
 * 00000001800B49ED: lea     rcx, [rbp+8C80h+var_1B70]
 * 00000001800B49F4: call    sub_180011E30
 * 00000001800B49F9: nop
 * 00000001800B49FA: lea     rcx, [rbp+8C80h+var_1B50]
 * 00000001800B4A01: call    sub_180011E30
 * 00000001800B4A06: nop
 * 00000001800B4A07: lea     rcx, dword_1801CE5F4
 * 00000001800B4A0E: call    sub_18000D4CC
 * 00000001800B4A13: mov     rax, [rdi+rbx*8]
 * 00000001800B4A17: mov     ecx, [r15+rax]
 * 00000001800B4A1B: cmp     cs:dword_1801CE5F8, ecx
 * 00000001800B4A21: jle     loc_1800B4AFA
 * 00000001800B4A27: lea     rcx, dword_1801CE5F8
 * 00000001800B4A2E: call    sub_18000D534
 * 00000001800B4A33: cmp     cs:dword_1801CE5F8, r14d
 * 00000001800B4A3A: jnz     loc_1800B4AFA
 * 00000001800B4A40: lea     rax, unk_1801478A0
 * 00000001800B4A47: mov     qword ptr [rbp+8C80h+var_72F0], rax
 * 00000001800B4A4E: lea     rax, unk_1801492F0
 * 00000001800B4A55: mov     qword ptr [rbp+8C80h+var_72F0+8], rax
 * 00000001800B4A5C: mov     dword ptr [rbp+8C80h+var_72E0], esi
 * 00000001800B4A62: mov     dword ptr [rbp+8C80h+var_72E0+4], esi
 * 00000001800B4A68: call    sub_1800A8988
 * 00000001800B4A6D: mov     r8, rax
 * 00000001800B4A70: mov     r9d, r12d
 * 00000001800B4A73: mov     edx, 0F0h
 * 00000001800B4A78: lea     rcx, [rbp+8C80h+var_1AF0]
 * 00000001800B4A7F: call    sub_180075CF8
 * 00000001800B4A84: nop
 * 00000001800B4A85: mov     r8, rax
 * 00000001800B4A88: mov     rdx, r13
 * 00000001800B4A8B: lea     rcx, [rbp+8C80h+var_1B10]
 * 00000001800B4A92: call    sub_18001C928
 * 00000001800B4A97: nop
 * 00000001800B4A98: lea     r8, aVertex; "/Vertex"
 * 00000001800B4A9F: mov     rdx, rax
 * 00000001800B4AA2: lea     rcx, [rbp+8C80h+var_4FB0]
 * 00000001800B4AA9: call    sub_18001C87C
 * 00000001800B4AAE: movups  xmm0, [rbp+8C80h+var_72F0]
 * 00000001800B4AB5: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4ABA: movups  xmm1, [rbp+8C80h+var_72E0]
 * 00000001800B4AC1: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4AC6: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4ACB: mov     rcx, rax
 * 00000001800B4ACE: call    sub_180075D94
 * 00000001800B4AD3: nop
 * 00000001800B4AD4: lea     rcx, [rbp+8C80h+var_1B10]
 * 00000001800B4ADB: call    sub_180011E30
 * 00000001800B4AE0: nop
 * 00000001800B4AE1: lea     rcx, [rbp+8C80h+var_1AF0]
 * 00000001800B4AE8: call    sub_180011E30
 * 00000001800B4AED: nop
 * 00000001800B4AEE: lea     rcx, dword_1801CE5F8
 * 00000001800B4AF5: call    sub_18000D4CC
 * 00000001800B4AFA: mov     rax, [rdi+rbx*8]
 * 00000001800B4AFE: mov     ecx, [r15+rax]
 * 00000001800B4B02: cmp     cs:dword_1801CE5FC, ecx
 * 00000001800B4B08: jle     loc_1800B4BE1
 * 00000001800B4B0E: lea     rcx, dword_1801CE5FC
 * 00000001800B4B15: call    sub_18000D534
 * 00000001800B4B1A: cmp     cs:dword_1801CE5FC, r14d
 * 00000001800B4B21: jnz     loc_1800B4BE1
 * 00000001800B4B27: lea     rax, unk_1801478A0
 * 00000001800B4B2E: mov     qword ptr [rbp+8C80h+var_72D0], rax
 * 00000001800B4B35: lea     rax, unk_1801492F0
 * 00000001800B4B3C: mov     qword ptr [rbp+8C80h+var_72D0+8], rax
 * 00000001800B4B43: mov     dword ptr [rbp+8C80h+var_72C0], esi
 * 00000001800B4B49: mov     dword ptr [rbp+8C80h+var_72C0+4], esi
 * 00000001800B4B4F: call    sub_1800A8988
 * 00000001800B4B54: mov     r8, rax
 * 00000001800B4B57: mov     r9d, r12d
 * 00000001800B4B5A: mov     edx, 0F2h
 * 00000001800B4B5F: lea     rcx, [rbp+8C80h+var_1A90]
 * 00000001800B4B66: call    sub_180075CF8
 * 00000001800B4B6B: nop
 * 00000001800B4B6C: mov     r8, rax
 * 00000001800B4B6F: mov     rdx, r13
 * 00000001800B4B72: lea     rcx, [rbp+8C80h+var_1AB0]
 * 00000001800B4B79: call    sub_18001C928
 * 00000001800B4B7E: nop
 * 00000001800B4B7F: lea     r8, aVertex; "/Vertex"
 * 00000001800B4B86: mov     rdx, rax
 * 00000001800B4B89: lea     rcx, [rbp+8C80h+var_4F90]
 * 00000001800B4B90: call    sub_18001C87C
 * 00000001800B4B95: movups  xmm0, [rbp+8C80h+var_72D0]
 * 00000001800B4B9C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4BA1: movups  xmm1, [rbp+8C80h+var_72C0]
 * 00000001800B4BA8: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4BAD: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4BB2: mov     rcx, rax
 * 00000001800B4BB5: call    sub_180075D94
 * 00000001800B4BBA: nop
 * 00000001800B4BBB: lea     rcx, [rbp+8C80h+var_1AB0]
 * 00000001800B4BC2: call    sub_180011E30
 * 00000001800B4BC7: nop
 * 00000001800B4BC8: lea     rcx, [rbp+8C80h+var_1A90]
 * 00000001800B4BCF: call    sub_180011E30
 * 00000001800B4BD4: nop
 * 00000001800B4BD5: lea     rcx, dword_1801CE5FC
 * 00000001800B4BDC: call    sub_18000D4CC
 * 00000001800B4BE1: mov     rax, [rdi+rbx*8]
 * 00000001800B4BE5: mov     ecx, [r15+rax]
 * 00000001800B4BE9: cmp     cs:dword_1801CE600, ecx
 * 00000001800B4BEF: jle     loc_1800B4CC8
 * 00000001800B4BF5: lea     rcx, dword_1801CE600
 * 00000001800B4BFC: call    sub_18000D534
 * 00000001800B4C01: cmp     cs:dword_1801CE600, r14d
 * 00000001800B4C08: jnz     loc_1800B4CC8
 * 00000001800B4C0E: lea     rax, unk_1801478A0
 * 00000001800B4C15: mov     qword ptr [rbp+8C80h+var_6A10], rax
 * 00000001800B4C1C: lea     rax, unk_1801492F0
 * 00000001800B4C23: mov     qword ptr [rbp+8C80h+var_6A10+8], rax
 * 00000001800B4C2A: mov     dword ptr [rbp+8C80h+var_6A00], esi
 * 00000001800B4C30: mov     dword ptr [rbp+8C80h+var_6A00+4], esi
 * 00000001800B4C36: call    sub_1800A8988
 * 00000001800B4C3B: mov     r8, rax
 * 00000001800B4C3E: mov     r9d, r12d
 * 00000001800B4C41: mov     edx, 0F8h
 * 00000001800B4C46: lea     rcx, [rbp+8C80h+var_1A30]
 * 00000001800B4C4D: call    sub_180075CF8
 * 00000001800B4C52: nop
 * 00000001800B4C53: mov     r8, rax
 * 00000001800B4C56: mov     rdx, r13
 * 00000001800B4C59: lea     rcx, [rbp+8C80h+var_1A50]
 * 00000001800B4C60: call    sub_18001C928
 * 00000001800B4C65: nop
 * 00000001800B4C66: lea     r8, aVertex; "/Vertex"
 * 00000001800B4C6D: mov     rdx, rax
 * 00000001800B4C70: lea     rcx, [rbp+8C80h+var_4F70]
 * 00000001800B4C77: call    sub_18001C87C
 * 00000001800B4C7C: movups  xmm0, [rbp+8C80h+var_6A10]
 * 00000001800B4C83: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4C88: movups  xmm1, [rbp+8C80h+var_6A00]
 * 00000001800B4C8F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4C94: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4C99: mov     rcx, rax
 * 00000001800B4C9C: call    sub_180075D94
 * 00000001800B4CA1: nop
 * 00000001800B4CA2: lea     rcx, [rbp+8C80h+var_1A50]
 * 00000001800B4CA9: call    sub_180011E30
 * 00000001800B4CAE: nop
 * 00000001800B4CAF: lea     rcx, [rbp+8C80h+var_1A30]
 * 00000001800B4CB6: call    sub_180011E30
 * 00000001800B4CBB: nop
 * 00000001800B4CBC: lea     rcx, dword_1801CE600
 * 00000001800B4CC3: call    sub_18000D4CC
 * 00000001800B4CC8: mov     rax, [rdi+rbx*8]
 * 00000001800B4CCC: mov     ecx, [r15+rax]
 * 00000001800B4CD0: cmp     cs:dword_1801CE604, ecx
 * 00000001800B4CD6: jle     loc_1800B4DAF
 * 00000001800B4CDC: lea     rcx, dword_1801CE604
 * 00000001800B4CE3: call    sub_18000D534
 * 00000001800B4CE8: cmp     cs:dword_1801CE604, r14d
 * 00000001800B4CEF: jnz     loc_1800B4DAF
 * 00000001800B4CF5: lea     rax, unk_1801478A0
 * 00000001800B4CFC: mov     qword ptr [rbp+8C80h+var_72B0], rax
 * 00000001800B4D03: lea     rax, unk_1801492F0
 * 00000001800B4D0A: mov     qword ptr [rbp+8C80h+var_72B0+8], rax
 * 00000001800B4D11: mov     dword ptr [rbp+8C80h+var_72A0], esi
 * 00000001800B4D17: mov     dword ptr [rbp+8C80h+var_72A0+4], esi
 * 00000001800B4D1D: call    sub_1800A8988
 * 00000001800B4D22: mov     r8, rax
 * 00000001800B4D25: mov     r9d, r12d
 * 00000001800B4D28: mov     edx, 0FAh
 * 00000001800B4D2D: lea     rcx, [rbp+8C80h+var_19D0]
 * 00000001800B4D34: call    sub_180075CF8
 * 00000001800B4D39: nop
 * 00000001800B4D3A: mov     r8, rax
 * 00000001800B4D3D: mov     rdx, r13
 * 00000001800B4D40: lea     rcx, [rbp+8C80h+var_19F0]
 * 00000001800B4D47: call    sub_18001C928
 * 00000001800B4D4C: nop
 * 00000001800B4D4D: lea     r8, aVertex; "/Vertex"
 * 00000001800B4D54: mov     rdx, rax
 * 00000001800B4D57: lea     rcx, [rbp+8C80h+var_4F50]
 * 00000001800B4D5E: call    sub_18001C87C
 * 00000001800B4D63: movups  xmm0, [rbp+8C80h+var_72B0]
 * 00000001800B4D6A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4D6F: movups  xmm1, [rbp+8C80h+var_72A0]
 * 00000001800B4D76: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4D7B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4D80: mov     rcx, rax
 * 00000001800B4D83: call    sub_180075D94
 * 00000001800B4D88: nop
 * 00000001800B4D89: lea     rcx, [rbp+8C80h+var_19F0]
 * 00000001800B4D90: call    sub_180011E30
 * 00000001800B4D95: nop
 * 00000001800B4D96: lea     rcx, [rbp+8C80h+var_19D0]
 * 00000001800B4D9D: call    sub_180011E30
 * 00000001800B4DA2: nop
 * 00000001800B4DA3: lea     rcx, dword_1801CE604
 * 00000001800B4DAA: call    sub_18000D4CC
 * 00000001800B4DAF: mov     rax, [rdi+rbx*8]
 * 00000001800B4DB3: mov     ecx, [r15+rax]
 * 00000001800B4DB7: cmp     cs:dword_1801CE608, ecx
 * 00000001800B4DBD: jle     loc_1800B4E96
 * 00000001800B4DC3: lea     rcx, dword_1801CE608
 * 00000001800B4DCA: call    sub_18000D534
 * 00000001800B4DCF: cmp     cs:dword_1801CE608, r14d
 * 00000001800B4DD6: jnz     loc_1800B4E96
 * 00000001800B4DDC: lea     rax, unk_180154B30
 * 00000001800B4DE3: mov     qword ptr [rbp+8C80h+var_7290], rax
 * 00000001800B4DEA: lea     rax, unk_180155B48
 * 00000001800B4DF1: mov     qword ptr [rbp+8C80h+var_7290+8], rax
 * 00000001800B4DF8: mov     dword ptr [rbp+8C80h+var_7280], esi
 * 00000001800B4DFE: mov     dword ptr [rbp+8C80h+var_7280+4], esi
 * 00000001800B4E04: call    sub_1800A8988
 * 00000001800B4E09: mov     r8, rax
 * 00000001800B4E0C: mov     r9d, r12d
 * 00000001800B4E0F: mov     edx, 100h
 * 00000001800B4E14: lea     rcx, [rbp+8C80h+var_1970]
 * 00000001800B4E1B: call    sub_180075CF8
 * 00000001800B4E20: nop
 * 00000001800B4E21: mov     r8, rax
 * 00000001800B4E24: mov     rdx, r13
 * 00000001800B4E27: lea     rcx, [rbp+8C80h+var_1990]
 * 00000001800B4E2E: call    sub_18001C928
 * 00000001800B4E33: nop
 * 00000001800B4E34: lea     r8, aVertex; "/Vertex"
 * 00000001800B4E3B: mov     rdx, rax
 * 00000001800B4E3E: lea     rcx, [rbp+8C80h+var_4F30]
 * 00000001800B4E45: call    sub_18001C87C
 * 00000001800B4E4A: movups  xmm0, [rbp+8C80h+var_7290]
 * 00000001800B4E51: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4E56: movups  xmm1, [rbp+8C80h+var_7280]
 * 00000001800B4E5D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4E62: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4E67: mov     rcx, rax
 * 00000001800B4E6A: call    sub_180075D94
 * 00000001800B4E6F: nop
 * 00000001800B4E70: lea     rcx, [rbp+8C80h+var_1990]
 * 00000001800B4E77: call    sub_180011E30
 * 00000001800B4E7C: nop
 * 00000001800B4E7D: lea     rcx, [rbp+8C80h+var_1970]
 * 00000001800B4E84: call    sub_180011E30
 * 00000001800B4E89: nop
 * 00000001800B4E8A: lea     rcx, dword_1801CE608
 * 00000001800B4E91: call    sub_18000D4CC
 * 00000001800B4E96: mov     rax, [rdi+rbx*8]
 * 00000001800B4E9A: mov     ecx, [r15+rax]
 * 00000001800B4E9E: cmp     cs:dword_1801CE60C, ecx
 * 00000001800B4EA4: jle     loc_1800B4F7D
 * 00000001800B4EAA: lea     rcx, dword_1801CE60C
 * 00000001800B4EB1: call    sub_18000D534
 * 00000001800B4EB6: cmp     cs:dword_1801CE60C, r14d
 * 00000001800B4EBD: jnz     loc_1800B4F7D
 * 00000001800B4EC3: lea     rax, unk_180154B30
 * 00000001800B4ECA: mov     qword ptr [rbp+8C80h+var_7270], rax
 * 00000001800B4ED1: lea     rax, unk_180155B48
 * 00000001800B4ED8: mov     qword ptr [rbp+8C80h+var_7270+8], rax
 * 00000001800B4EDF: mov     dword ptr [rbp+8C80h+var_7260], esi
 * 00000001800B4EE5: mov     dword ptr [rbp+8C80h+var_7260+4], esi
 * 00000001800B4EEB: call    sub_1800A8988
 * 00000001800B4EF0: mov     r8, rax
 * 00000001800B4EF3: mov     r9d, r12d
 * 00000001800B4EF6: mov     edx, 102h
 * 00000001800B4EFB: lea     rcx, [rbp+8C80h+var_1910]
 * 00000001800B4F02: call    sub_180075CF8
 * 00000001800B4F07: nop
 * 00000001800B4F08: mov     r8, rax
 * 00000001800B4F0B: mov     rdx, r13
 * 00000001800B4F0E: lea     rcx, [rbp+8C80h+var_1930]
 * 00000001800B4F15: call    sub_18001C928
 * 00000001800B4F1A: nop
 * 00000001800B4F1B: lea     r8, aVertex; "/Vertex"
 * 00000001800B4F22: mov     rdx, rax
 * 00000001800B4F25: lea     rcx, [rbp+8C80h+var_4F10]
 * 00000001800B4F2C: call    sub_18001C87C
 * 00000001800B4F31: movups  xmm0, [rbp+8C80h+var_7270]
 * 00000001800B4F38: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B4F3D: movups  xmm1, [rbp+8C80h+var_7260]
 * 00000001800B4F44: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B4F49: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B4F4E: mov     rcx, rax
 * 00000001800B4F51: call    sub_180075D94
 * 00000001800B4F56: nop
 * 00000001800B4F57: lea     rcx, [rbp+8C80h+var_1930]
 * 00000001800B4F5E: call    sub_180011E30
 * 00000001800B4F63: nop
 * 00000001800B4F64: lea     rcx, [rbp+8C80h+var_1910]
 * 00000001800B4F6B: call    sub_180011E30
 * 00000001800B4F70: nop
 * 00000001800B4F71: lea     rcx, dword_1801CE60C
 * 00000001800B4F78: call    sub_18000D4CC
 * 00000001800B4F7D: mov     rax, [rdi+rbx*8]
 * 00000001800B4F81: mov     ecx, [r15+rax]
 * 00000001800B4F85: cmp     cs:dword_1801CE610, ecx
 * 00000001800B4F8B: jle     loc_1800B5064
 * 00000001800B4F91: lea     rcx, dword_1801CE610
 * 00000001800B4F98: call    sub_18000D534
 * 00000001800B4F9D: cmp     cs:dword_1801CE610, r14d
 * 00000001800B4FA4: jnz     loc_1800B5064
 * 00000001800B4FAA: lea     rax, unk_180154B30
 * 00000001800B4FB1: mov     qword ptr [rbp+8C80h+var_7250], rax
 * 00000001800B4FB8: lea     rax, unk_180155B48
 * 00000001800B4FBF: mov     qword ptr [rbp+8C80h+var_7250+8], rax
 * 00000001800B4FC6: mov     dword ptr [rbp+8C80h+var_7240], esi
 * 00000001800B4FCC: mov     dword ptr [rbp+8C80h+var_7240+4], esi
 * 00000001800B4FD2: call    sub_1800A8988
 * 00000001800B4FD7: mov     r8, rax
 * 00000001800B4FDA: mov     r9d, r12d
 * 00000001800B4FDD: mov     edx, 104h
 * 00000001800B4FE2: lea     rcx, [rbp+8C80h+var_18B0]
 * 00000001800B4FE9: call    sub_180075CF8
 * 00000001800B4FEE: nop
 * 00000001800B4FEF: mov     r8, rax
 * 00000001800B4FF2: mov     rdx, r13
 * 00000001800B4FF5: lea     rcx, [rbp+8C80h+var_18D0]
 * 00000001800B4FFC: call    sub_18001C928
 * 00000001800B5001: nop
 * 00000001800B5002: lea     r8, aVertex; "/Vertex"
 * 00000001800B5009: mov     rdx, rax
 * 00000001800B500C: lea     rcx, [rbp+8C80h+var_4EF0]
 * 00000001800B5013: call    sub_18001C87C
 * 00000001800B5018: movups  xmm0, [rbp+8C80h+var_7250]
 * 00000001800B501F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5024: movups  xmm1, [rbp+8C80h+var_7240]
 * 00000001800B502B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5030: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5035: mov     rcx, rax
 * 00000001800B5038: call    sub_180075D94
 * 00000001800B503D: nop
 * 00000001800B503E: lea     rcx, [rbp+8C80h+var_18D0]
 * 00000001800B5045: call    sub_180011E30
 * 00000001800B504A: nop
 * 00000001800B504B: lea     rcx, [rbp+8C80h+var_18B0]
 * 00000001800B5052: call    sub_180011E30
 * 00000001800B5057: nop
 * 00000001800B5058: lea     rcx, dword_1801CE610
 * 00000001800B505F: call    sub_18000D4CC
 * 00000001800B5064: mov     rax, [rdi+rbx*8]
 * 00000001800B5068: mov     ecx, [r15+rax]
 * 00000001800B506C: cmp     cs:dword_1801CE614, ecx
 * 00000001800B5072: jle     loc_1800B514B
 * 00000001800B5078: lea     rcx, dword_1801CE614
 * 00000001800B507F: call    sub_18000D534
 * 00000001800B5084: cmp     cs:dword_1801CE614, r14d
 * 00000001800B508B: jnz     loc_1800B514B
 * 00000001800B5091: lea     rax, unk_180154B30
 * 00000001800B5098: mov     qword ptr [rbp+8C80h+var_7230], rax
 * 00000001800B509F: lea     rax, unk_180155B48
 * 00000001800B50A6: mov     qword ptr [rbp+8C80h+var_7230+8], rax
 * 00000001800B50AD: mov     dword ptr [rbp+8C80h+var_7220], esi
 * 00000001800B50B3: mov     dword ptr [rbp+8C80h+var_7220+4], esi
 * 00000001800B50B9: call    sub_1800A8988
 * 00000001800B50BE: mov     r8, rax
 * 00000001800B50C1: mov     r9d, r12d
 * 00000001800B50C4: mov     edx, 106h
 * 00000001800B50C9: lea     rcx, [rbp+8C80h+var_1850]
 * 00000001800B50D0: call    sub_180075CF8
 * 00000001800B50D5: nop
 * 00000001800B50D6: mov     r8, rax
 * 00000001800B50D9: mov     rdx, r13
 * 00000001800B50DC: lea     rcx, [rbp+8C80h+var_1870]
 * 00000001800B50E3: call    sub_18001C928
 * 00000001800B50E8: nop
 * 00000001800B50E9: lea     r8, aVertex; "/Vertex"
 * 00000001800B50F0: mov     rdx, rax
 * 00000001800B50F3: lea     rcx, [rbp+8C80h+var_4ED0]
 * 00000001800B50FA: call    sub_18001C87C
 * 00000001800B50FF: movups  xmm0, [rbp+8C80h+var_7230]
 * 00000001800B5106: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B510B: movups  xmm1, [rbp+8C80h+var_7220]
 * 00000001800B5112: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5117: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B511C: mov     rcx, rax
 * 00000001800B511F: call    sub_180075D94
 * 00000001800B5124: nop
 * 00000001800B5125: lea     rcx, [rbp+8C80h+var_1870]
 * 00000001800B512C: call    sub_180011E30
 * 00000001800B5131: nop
 * 00000001800B5132: lea     rcx, [rbp+8C80h+var_1850]
 * 00000001800B5139: call    sub_180011E30
 * 00000001800B513E: nop
 * 00000001800B513F: lea     rcx, dword_1801CE614
 * 00000001800B5146: call    sub_18000D4CC
 * 00000001800B514B: mov     rax, [rdi+rbx*8]
 * 00000001800B514F: mov     ecx, [r15+rax]
 * 00000001800B5153: cmp     cs:dword_1801CE618, ecx
 * 00000001800B5159: jle     loc_1800B5232
 * 00000001800B515F: lea     rcx, dword_1801CE618
 * 00000001800B5166: call    sub_18000D534
 * 00000001800B516B: cmp     cs:dword_1801CE618, r14d
 * 00000001800B5172: jnz     loc_1800B5232
 * 00000001800B5178: lea     rax, unk_180154B30
 * 00000001800B517F: mov     qword ptr [rbp+8C80h+var_7210], rax
 * 00000001800B5186: lea     rax, unk_180155B48
 * 00000001800B518D: mov     qword ptr [rbp+8C80h+var_7210+8], rax
 * 00000001800B5194: mov     dword ptr [rbp+8C80h+var_7200], esi
 * 00000001800B519A: mov     dword ptr [rbp+8C80h+var_7200+4], esi
 * 00000001800B51A0: call    sub_1800A8988
 * 00000001800B51A5: mov     r8, rax
 * 00000001800B51A8: mov     r9d, r12d
 * 00000001800B51AB: mov     edx, 108h
 * 00000001800B51B0: lea     rcx, [rbp+8C80h+var_17F0]
 * 00000001800B51B7: call    sub_180075CF8
 * 00000001800B51BC: nop
 * 00000001800B51BD: mov     r8, rax
 * 00000001800B51C0: mov     rdx, r13
 * 00000001800B51C3: lea     rcx, [rbp+8C80h+var_1810]
 * 00000001800B51CA: call    sub_18001C928
 * 00000001800B51CF: nop
 * 00000001800B51D0: lea     r8, aVertex; "/Vertex"
 * 00000001800B51D7: mov     rdx, rax
 * 00000001800B51DA: lea     rcx, [rbp+8C80h+var_4EB0]
 * 00000001800B51E1: call    sub_18001C87C
 * 00000001800B51E6: movups  xmm0, [rbp+8C80h+var_7210]
 * 00000001800B51ED: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B51F2: movups  xmm1, [rbp+8C80h+var_7200]
 * 00000001800B51F9: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B51FE: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5203: mov     rcx, rax
 * 00000001800B5206: call    sub_180075D94
 * 00000001800B520B: nop
 * 00000001800B520C: lea     rcx, [rbp+8C80h+var_1810]
 * 00000001800B5213: call    sub_180011E30
 * 00000001800B5218: nop
 * 00000001800B5219: lea     rcx, [rbp+8C80h+var_17F0]
 * 00000001800B5220: call    sub_180011E30
 * 00000001800B5225: nop
 * 00000001800B5226: lea     rcx, dword_1801CE618
 * 00000001800B522D: call    sub_18000D4CC
 * 00000001800B5232: mov     rax, [rdi+rbx*8]
 * 00000001800B5236: mov     ecx, [r15+rax]
 * 00000001800B523A: cmp     cs:dword_1801CE61C, ecx
 * 00000001800B5240: jle     loc_1800B5319
 * 00000001800B5246: lea     rcx, dword_1801CE61C
 * 00000001800B524D: call    sub_18000D534
 * 00000001800B5252: cmp     cs:dword_1801CE61C, r14d
 * 00000001800B5259: jnz     loc_1800B5319
 * 00000001800B525F: lea     rax, unk_180154B30
 * 00000001800B5266: mov     qword ptr [rbp+8C80h+var_71F0], rax
 * 00000001800B526D: lea     rax, unk_180155B48
 * 00000001800B5274: mov     qword ptr [rbp+8C80h+var_71F0+8], rax
 * 00000001800B527B: mov     dword ptr [rbp+8C80h+var_71E0], esi
 * 00000001800B5281: mov     dword ptr [rbp+8C80h+var_71E0+4], esi
 * 00000001800B5287: call    sub_1800A8988
 * 00000001800B528C: mov     r8, rax
 * 00000001800B528F: mov     r9d, r12d
 * 00000001800B5292: mov     edx, 10Ah
 * 00000001800B5297: lea     rcx, [rbp+8C80h+var_1790]
 * 00000001800B529E: call    sub_180075CF8
 * 00000001800B52A3: nop
 * 00000001800B52A4: mov     r8, rax
 * 00000001800B52A7: mov     rdx, r13
 * 00000001800B52AA: lea     rcx, [rbp+8C80h+var_17B0]
 * 00000001800B52B1: call    sub_18001C928
 * 00000001800B52B6: nop
 * 00000001800B52B7: lea     r8, aVertex; "/Vertex"
 * 00000001800B52BE: mov     rdx, rax
 * 00000001800B52C1: lea     rcx, [rbp+8C80h+var_4E90]
 * 00000001800B52C8: call    sub_18001C87C
 * 00000001800B52CD: movups  xmm0, [rbp+8C80h+var_71F0]
 * 00000001800B52D4: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B52D9: movups  xmm1, [rbp+8C80h+var_71E0]
 * 00000001800B52E0: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B52E5: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B52EA: mov     rcx, rax
 * 00000001800B52ED: call    sub_180075D94
 * 00000001800B52F2: nop
 * 00000001800B52F3: lea     rcx, [rbp+8C80h+var_17B0]
 * 00000001800B52FA: call    sub_180011E30
 * 00000001800B52FF: nop
 * 00000001800B5300: lea     rcx, [rbp+8C80h+var_1790]
 * 00000001800B5307: call    sub_180011E30
 * 00000001800B530C: nop
 * 00000001800B530D: lea     rcx, dword_1801CE61C
 * 00000001800B5314: call    sub_18000D4CC
 * 00000001800B5319: mov     rax, [rdi+rbx*8]
 * 00000001800B531D: mov     ecx, [r15+rax]
 * 00000001800B5321: cmp     cs:dword_1801CE620, ecx
 * 00000001800B5327: jle     loc_1800B5400
 * 00000001800B532D: lea     rcx, dword_1801CE620
 * 00000001800B5334: call    sub_18000D534
 * 00000001800B5339: cmp     cs:dword_1801CE620, r14d
 * 00000001800B5340: jnz     loc_1800B5400
 * 00000001800B5346: lea     rax, unk_180154B30
 * 00000001800B534D: mov     qword ptr [rbp+8C80h+var_71D0], rax
 * 00000001800B5354: lea     rax, unk_180155B48
 * 00000001800B535B: mov     qword ptr [rbp+8C80h+var_71D0+8], rax
 * 00000001800B5362: mov     dword ptr [rbp+8C80h+var_71C0], esi
 * 00000001800B5368: mov     dword ptr [rbp+8C80h+var_71C0+4], esi
 * 00000001800B536E: call    sub_1800A8988
 * 00000001800B5373: mov     r8, rax
 * 00000001800B5376: mov     r9d, r12d
 * 00000001800B5379: mov     edx, 110h
 * 00000001800B537E: lea     rcx, [rbp+8C80h+var_1730]
 * 00000001800B5385: call    sub_180075CF8
 * 00000001800B538A: nop
 * 00000001800B538B: mov     r8, rax
 * 00000001800B538E: mov     rdx, r13
 * 00000001800B5391: lea     rcx, [rbp+8C80h+var_1750]
 * 00000001800B5398: call    sub_18001C928
 * 00000001800B539D: nop
 * 00000001800B539E: lea     r8, aVertex; "/Vertex"
 * 00000001800B53A5: mov     rdx, rax
 * 00000001800B53A8: lea     rcx, [rbp+8C80h+var_4E70]
 * 00000001800B53AF: call    sub_18001C87C
 * 00000001800B53B4: movups  xmm0, [rbp+8C80h+var_71D0]
 * 00000001800B53BB: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B53C0: movups  xmm1, [rbp+8C80h+var_71C0]
 * 00000001800B53C7: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B53CC: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B53D1: mov     rcx, rax
 * 00000001800B53D4: call    sub_180075D94
 * 00000001800B53D9: nop
 * 00000001800B53DA: lea     rcx, [rbp+8C80h+var_1750]
 * 00000001800B53E1: call    sub_180011E30
 * 00000001800B53E6: nop
 * 00000001800B53E7: lea     rcx, [rbp+8C80h+var_1730]
 * 00000001800B53EE: call    sub_180011E30
 * 00000001800B53F3: nop
 * 00000001800B53F4: lea     rcx, dword_1801CE620
 * 00000001800B53FB: call    sub_18000D4CC
 * 00000001800B5400: mov     rax, [rdi+rbx*8]
 * 00000001800B5404: mov     ecx, [r15+rax]
 * 00000001800B5408: cmp     cs:dword_1801CE624, ecx
 * 00000001800B540E: jle     loc_1800B54E7
 * 00000001800B5414: lea     rcx, dword_1801CE624
 * 00000001800B541B: call    sub_18000D534
 * 00000001800B5420: cmp     cs:dword_1801CE624, r14d
 * 00000001800B5427: jnz     loc_1800B54E7
 * 00000001800B542D: lea     rax, unk_180154B30
 * 00000001800B5434: mov     qword ptr [rbp+8C80h+var_71B0], rax
 * 00000001800B543B: lea     rax, unk_180155B48
 * 00000001800B5442: mov     qword ptr [rbp+8C80h+var_71B0+8], rax
 * 00000001800B5449: mov     dword ptr [rbp+8C80h+var_71A0], esi
 * 00000001800B544F: mov     dword ptr [rbp+8C80h+var_71A0+4], esi
 * 00000001800B5455: call    sub_1800A8988
 * 00000001800B545A: mov     r8, rax
 * 00000001800B545D: mov     r9d, r12d
 * 00000001800B5460: mov     edx, 112h
 * 00000001800B5465: lea     rcx, [rbp+8C80h+var_16D0]
 * 00000001800B546C: call    sub_180075CF8
 * 00000001800B5471: nop
 * 00000001800B5472: mov     r8, rax
 * 00000001800B5475: mov     rdx, r13
 * 00000001800B5478: lea     rcx, [rbp+8C80h+var_16F0]
 * 00000001800B547F: call    sub_18001C928
 * 00000001800B5484: nop
 * 00000001800B5485: lea     r8, aVertex; "/Vertex"
 * 00000001800B548C: mov     rdx, rax
 * 00000001800B548F: lea     rcx, [rbp+8C80h+var_4E50]
 * 00000001800B5496: call    sub_18001C87C
 * 00000001800B549B: movups  xmm0, [rbp+8C80h+var_71B0]
 * 00000001800B54A2: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B54A7: movups  xmm1, [rbp+8C80h+var_71A0]
 * 00000001800B54AE: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B54B3: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B54B8: mov     rcx, rax
 * 00000001800B54BB: call    sub_180075D94
 * 00000001800B54C0: nop
 * 00000001800B54C1: lea     rcx, [rbp+8C80h+var_16F0]
 * 00000001800B54C8: call    sub_180011E30
 * 00000001800B54CD: nop
 * 00000001800B54CE: lea     rcx, [rbp+8C80h+var_16D0]
 * 00000001800B54D5: call    sub_180011E30
 * 00000001800B54DA: nop
 * 00000001800B54DB: lea     rcx, dword_1801CE624
 * 00000001800B54E2: call    sub_18000D4CC
 * 00000001800B54E7: mov     rax, [rdi+rbx*8]
 * 00000001800B54EB: mov     ecx, [r15+rax]
 * 00000001800B54EF: cmp     cs:dword_1801CE628, ecx
 * 00000001800B54F5: jle     loc_1800B55CE
 * 00000001800B54FB: lea     rcx, dword_1801CE628
 * 00000001800B5502: call    sub_18000D534
 * 00000001800B5507: cmp     cs:dword_1801CE628, r14d
 * 00000001800B550E: jnz     loc_1800B55CE
 * 00000001800B5514: lea     rax, unk_180154B30
 * 00000001800B551B: mov     qword ptr [rbp+8C80h+var_7190], rax
 * 00000001800B5522: lea     rax, unk_180155B48
 * 00000001800B5529: mov     qword ptr [rbp+8C80h+var_7190+8], rax
 * 00000001800B5530: mov     dword ptr [rbp+8C80h+var_7180], esi
 * 00000001800B5536: mov     dword ptr [rbp+8C80h+var_7180+4], esi
 * 00000001800B553C: call    sub_1800A8988
 * 00000001800B5541: mov     r8, rax
 * 00000001800B5544: mov     r9d, r12d
 * 00000001800B5547: mov     edx, 114h
 * 00000001800B554C: lea     rcx, [rbp+8C80h+var_1670]
 * 00000001800B5553: call    sub_180075CF8
 * 00000001800B5558: nop
 * 00000001800B5559: mov     r8, rax
 * 00000001800B555C: mov     rdx, r13
 * 00000001800B555F: lea     rcx, [rbp+8C80h+var_1690]
 * 00000001800B5566: call    sub_18001C928
 * 00000001800B556B: nop
 * 00000001800B556C: lea     r8, aVertex; "/Vertex"
 * 00000001800B5573: mov     rdx, rax
 * 00000001800B5576: lea     rcx, [rbp+8C80h+var_4E30]
 * 00000001800B557D: call    sub_18001C87C
 * 00000001800B5582: movups  xmm0, [rbp+8C80h+var_7190]
 * 00000001800B5589: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B558E: movups  xmm1, [rbp+8C80h+var_7180]
 * 00000001800B5595: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B559A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B559F: mov     rcx, rax
 * 00000001800B55A2: call    sub_180075D94
 * 00000001800B55A7: nop
 * 00000001800B55A8: lea     rcx, [rbp+8C80h+var_1690]
 * 00000001800B55AF: call    sub_180011E30
 * 00000001800B55B4: nop
 * 00000001800B55B5: lea     rcx, [rbp+8C80h+var_1670]
 * 00000001800B55BC: call    sub_180011E30
 * 00000001800B55C1: nop
 * 00000001800B55C2: lea     rcx, dword_1801CE628
 * 00000001800B55C9: call    sub_18000D4CC
 * 00000001800B55CE: mov     rax, [rdi+rbx*8]
 * 00000001800B55D2: mov     ecx, [r15+rax]
 * 00000001800B55D6: cmp     cs:dword_1801CE62C, ecx
 * 00000001800B55DC: jle     loc_1800B56B5
 * 00000001800B55E2: lea     rcx, dword_1801CE62C
 * 00000001800B55E9: call    sub_18000D534
 * 00000001800B55EE: cmp     cs:dword_1801CE62C, r14d
 * 00000001800B55F5: jnz     loc_1800B56B5
 * 00000001800B55FB: lea     rax, unk_180154B30
 * 00000001800B5602: mov     qword ptr [rbp+8C80h+var_7170], rax
 * 00000001800B5609: lea     rax, unk_180155B48
 * 00000001800B5610: mov     qword ptr [rbp+8C80h+var_7170+8], rax
 * 00000001800B5617: mov     dword ptr [rbp+8C80h+var_7160], esi
 * 00000001800B561D: mov     dword ptr [rbp+8C80h+var_7160+4], esi
 * 00000001800B5623: call    sub_1800A8988
 * 00000001800B5628: mov     r8, rax
 * 00000001800B562B: mov     r9d, r12d
 * 00000001800B562E: mov     edx, 116h
 * 00000001800B5633: lea     rcx, [rbp+8C80h+var_1610]
 * 00000001800B563A: call    sub_180075CF8
 * 00000001800B563F: nop
 * 00000001800B5640: mov     r8, rax
 * 00000001800B5643: mov     rdx, r13
 * 00000001800B5646: lea     rcx, [rbp+8C80h+var_1630]
 * 00000001800B564D: call    sub_18001C928
 * 00000001800B5652: nop
 * 00000001800B5653: lea     r8, aVertex; "/Vertex"
 * 00000001800B565A: mov     rdx, rax
 * 00000001800B565D: lea     rcx, [rbp+8C80h+var_4E10]
 * 00000001800B5664: call    sub_18001C87C
 * 00000001800B5669: movups  xmm0, [rbp+8C80h+var_7170]
 * 00000001800B5670: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5675: movups  xmm1, [rbp+8C80h+var_7160]
 * 00000001800B567C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5681: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5686: mov     rcx, rax
 * 00000001800B5689: call    sub_180075D94
 * 00000001800B568E: nop
 * 00000001800B568F: lea     rcx, [rbp+8C80h+var_1630]
 * 00000001800B5696: call    sub_180011E30
 * 00000001800B569B: nop
 * 00000001800B569C: lea     rcx, [rbp+8C80h+var_1610]
 * 00000001800B56A3: call    sub_180011E30
 * 00000001800B56A8: nop
 * 00000001800B56A9: lea     rcx, dword_1801CE62C
 * 00000001800B56B0: call    sub_18000D4CC
 * 00000001800B56B5: mov     rax, [rdi+rbx*8]
 * 00000001800B56B9: mov     ecx, [r15+rax]
 * 00000001800B56BD: cmp     cs:dword_1801CE630, ecx
 * 00000001800B56C3: jle     loc_1800B579C
 * 00000001800B56C9: lea     rcx, dword_1801CE630
 * 00000001800B56D0: call    sub_18000D534
 * 00000001800B56D5: cmp     cs:dword_1801CE630, r14d
 * 00000001800B56DC: jnz     loc_1800B579C
 * 00000001800B56E2: lea     rax, unk_180154B30
 * 00000001800B56E9: mov     qword ptr [rbp+8C80h+var_7150], rax
 * 00000001800B56F0: lea     rax, unk_180155B48
 * 00000001800B56F7: mov     qword ptr [rbp+8C80h+var_7150+8], rax
 * 00000001800B56FE: mov     dword ptr [rbp+8C80h+var_7140], esi
 * 00000001800B5704: mov     dword ptr [rbp+8C80h+var_7140+4], esi
 * 00000001800B570A: call    sub_1800A8988
 * 00000001800B570F: mov     r8, rax
 * 00000001800B5712: mov     r9d, r12d
 * 00000001800B5715: mov     edx, 118h
 * 00000001800B571A: lea     rcx, [rbp+8C80h+var_15B0]
 * 00000001800B5721: call    sub_180075CF8
 * 00000001800B5726: nop
 * 00000001800B5727: mov     r8, rax
 * 00000001800B572A: mov     rdx, r13
 * 00000001800B572D: lea     rcx, [rbp+8C80h+var_15D0]
 * 00000001800B5734: call    sub_18001C928
 * 00000001800B5739: nop
 * 00000001800B573A: lea     r8, aVertex; "/Vertex"
 * 00000001800B5741: mov     rdx, rax
 * 00000001800B5744: lea     rcx, [rbp+8C80h+var_4DF0]
 * 00000001800B574B: call    sub_18001C87C
 * 00000001800B5750: movups  xmm0, [rbp+8C80h+var_7150]
 * 00000001800B5757: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B575C: movups  xmm1, [rbp+8C80h+var_7140]
 * 00000001800B5763: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5768: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B576D: mov     rcx, rax
 * 00000001800B5770: call    sub_180075D94
 * 00000001800B5775: nop
 * 00000001800B5776: lea     rcx, [rbp+8C80h+var_15D0]
 * 00000001800B577D: call    sub_180011E30
 * 00000001800B5782: nop
 * 00000001800B5783: lea     rcx, [rbp+8C80h+var_15B0]
 * 00000001800B578A: call    sub_180011E30
 * 00000001800B578F: nop
 * 00000001800B5790: lea     rcx, dword_1801CE630
 * 00000001800B5797: call    sub_18000D4CC
 * 00000001800B579C: mov     rax, [rdi+rbx*8]
 * 00000001800B57A0: mov     ecx, [r15+rax]
 * 00000001800B57A4: cmp     cs:dword_1801CE634, ecx
 * 00000001800B57AA: jle     loc_1800B5883
 * 00000001800B57B0: lea     rcx, dword_1801CE634
 * 00000001800B57B7: call    sub_18000D534
 * 00000001800B57BC: cmp     cs:dword_1801CE634, r14d
 * 00000001800B57C3: jnz     loc_1800B5883
 * 00000001800B57C9: lea     rax, unk_180154B30
 * 00000001800B57D0: mov     qword ptr [rbp+8C80h+var_7130], rax
 * 00000001800B57D7: lea     rax, unk_180155B48
 * 00000001800B57DE: mov     qword ptr [rbp+8C80h+var_7130+8], rax
 * 00000001800B57E5: mov     dword ptr [rbp+8C80h+var_7120], esi
 * 00000001800B57EB: mov     dword ptr [rbp+8C80h+var_7120+4], esi
 * 00000001800B57F1: call    sub_1800A8988
 * 00000001800B57F6: mov     r8, rax
 * 00000001800B57F9: mov     r9d, r12d
 * 00000001800B57FC: mov     edx, 11Ah
 * 00000001800B5801: lea     rcx, [rbp+8C80h+var_1550]
 * 00000001800B5808: call    sub_180075CF8
 * 00000001800B580D: nop
 * 00000001800B580E: mov     r8, rax
 * 00000001800B5811: mov     rdx, r13
 * 00000001800B5814: lea     rcx, [rbp+8C80h+var_1570]
 * 00000001800B581B: call    sub_18001C928
 * 00000001800B5820: nop
 * 00000001800B5821: lea     r8, aVertex; "/Vertex"
 * 00000001800B5828: mov     rdx, rax
 * 00000001800B582B: lea     rcx, [rbp+8C80h+var_4DD0]
 * 00000001800B5832: call    sub_18001C87C
 * 00000001800B5837: movups  xmm0, [rbp+8C80h+var_7130]
 * 00000001800B583E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5843: movups  xmm1, [rbp+8C80h+var_7120]
 * 00000001800B584A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B584F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5854: mov     rcx, rax
 * 00000001800B5857: call    sub_180075D94
 * 00000001800B585C: nop
 * 00000001800B585D: lea     rcx, [rbp+8C80h+var_1570]
 * 00000001800B5864: call    sub_180011E30
 * 00000001800B5869: nop
 * 00000001800B586A: lea     rcx, [rbp+8C80h+var_1550]
 * 00000001800B5871: call    sub_180011E30
 * 00000001800B5876: nop
 * 00000001800B5877: lea     rcx, dword_1801CE634
 * 00000001800B587E: call    sub_18000D4CC
 * 00000001800B5883: mov     rax, [rdi+rbx*8]
 * 00000001800B5887: mov     ecx, [r15+rax]
 * 00000001800B588B: cmp     cs:dword_1801CE638, ecx
 * 00000001800B5891: jle     loc_1800B596A
 * 00000001800B5897: lea     rcx, dword_1801CE638
 * 00000001800B589E: call    sub_18000D534
 * 00000001800B58A3: cmp     cs:dword_1801CE638, r14d
 * 00000001800B58AA: jnz     loc_1800B596A
 * 00000001800B58B0: lea     rax, unk_180145E80
 * 00000001800B58B7: mov     qword ptr [rbp+8C80h+var_7110], rax
 * 00000001800B58BE: lea     rax, unk_180147898
 * 00000001800B58C5: mov     qword ptr [rbp+8C80h+var_7110+8], rax
 * 00000001800B58CC: mov     dword ptr [rbp+8C80h+var_7100], esi
 * 00000001800B58D2: mov     dword ptr [rbp+8C80h+var_7100+4], esi
 * 00000001800B58D8: call    sub_1800A8988
 * 00000001800B58DD: mov     r8, rax
 * 00000001800B58E0: mov     r9d, r12d
 * 00000001800B58E3: mov     edx, 120h
 * 00000001800B58E8: lea     rcx, [rbp+8C80h+var_14F0]
 * 00000001800B58EF: call    sub_180075CF8
 * 00000001800B58F4: nop
 * 00000001800B58F5: mov     r8, rax
 * 00000001800B58F8: mov     rdx, r13
 * 00000001800B58FB: lea     rcx, [rbp+8C80h+var_1510]
 * 00000001800B5902: call    sub_18001C928
 * 00000001800B5907: nop
 * 00000001800B5908: lea     r8, aVertex; "/Vertex"
 * 00000001800B590F: mov     rdx, rax
 * 00000001800B5912: lea     rcx, [rbp+8C80h+var_4DB0]
 * 00000001800B5919: call    sub_18001C87C
 * 00000001800B591E: movups  xmm0, [rbp+8C80h+var_7110]
 * 00000001800B5925: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B592A: movups  xmm1, [rbp+8C80h+var_7100]
 * 00000001800B5931: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5936: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B593B: mov     rcx, rax
 * 00000001800B593E: call    sub_180075D94
 * 00000001800B5943: nop
 * 00000001800B5944: lea     rcx, [rbp+8C80h+var_1510]
 * 00000001800B594B: call    sub_180011E30
 * 00000001800B5950: nop
 * 00000001800B5951: lea     rcx, [rbp+8C80h+var_14F0]
 * 00000001800B5958: call    sub_180011E30
 * 00000001800B595D: nop
 * 00000001800B595E: lea     rcx, dword_1801CE638
 * 00000001800B5965: call    sub_18000D4CC
 * 00000001800B596A: mov     rax, [rdi+rbx*8]
 * 00000001800B596E: mov     ecx, [r15+rax]
 * 00000001800B5972: cmp     cs:dword_1801CE63C, ecx
 * 00000001800B5978: jle     loc_1800B5A51
 * 00000001800B597E: lea     rcx, dword_1801CE63C
 * 00000001800B5985: call    sub_18000D534
 * 00000001800B598A: cmp     cs:dword_1801CE63C, r14d
 * 00000001800B5991: jnz     loc_1800B5A51
 * 00000001800B5997: lea     rax, unk_180145E80
 * 00000001800B599E: mov     qword ptr [rbp+8C80h+var_70F0], rax
 * 00000001800B59A5: lea     rax, unk_180147898
 * 00000001800B59AC: mov     qword ptr [rbp+8C80h+var_70F0+8], rax
 * 00000001800B59B3: mov     dword ptr [rbp+8C80h+var_70E0], esi
 * 00000001800B59B9: mov     dword ptr [rbp+8C80h+var_70E0+4], esi
 * 00000001800B59BF: call    sub_1800A8988
 * 00000001800B59C4: mov     r8, rax
 * 00000001800B59C7: mov     r9d, r12d
 * 00000001800B59CA: mov     edx, 122h
 * 00000001800B59CF: lea     rcx, [rbp+8C80h+var_1490]
 * 00000001800B59D6: call    sub_180075CF8
 * 00000001800B59DB: nop
 * 00000001800B59DC: mov     r8, rax
 * 00000001800B59DF: mov     rdx, r13
 * 00000001800B59E2: lea     rcx, [rbp+8C80h+var_14B0]
 * 00000001800B59E9: call    sub_18001C928
 * 00000001800B59EE: nop
 * 00000001800B59EF: lea     r8, aVertex; "/Vertex"
 * 00000001800B59F6: mov     rdx, rax
 * 00000001800B59F9: lea     rcx, [rbp+8C80h+var_4D90]
 * 00000001800B5A00: call    sub_18001C87C
 * 00000001800B5A05: movups  xmm0, [rbp+8C80h+var_70F0]
 * 00000001800B5A0C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5A11: movups  xmm1, [rbp+8C80h+var_70E0]
 * 00000001800B5A18: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5A1D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5A22: mov     rcx, rax
 * 00000001800B5A25: call    sub_180075D94
 * 00000001800B5A2A: nop
 * 00000001800B5A2B: lea     rcx, [rbp+8C80h+var_14B0]
 * 00000001800B5A32: call    sub_180011E30
 * 00000001800B5A37: nop
 * 00000001800B5A38: lea     rcx, [rbp+8C80h+var_1490]
 * 00000001800B5A3F: call    sub_180011E30
 * 00000001800B5A44: nop
 * 00000001800B5A45: lea     rcx, dword_1801CE63C
 * 00000001800B5A4C: call    sub_18000D4CC
 * 00000001800B5A51: mov     rax, [rdi+rbx*8]
 * 00000001800B5A55: mov     ecx, [r15+rax]
 * 00000001800B5A59: cmp     cs:dword_1801CE640, ecx
 * 00000001800B5A5F: jle     loc_1800B5B38
 * 00000001800B5A65: lea     rcx, dword_1801CE640
 * 00000001800B5A6C: call    sub_18000D534
 * 00000001800B5A71: cmp     cs:dword_1801CE640, r14d
 * 00000001800B5A78: jnz     loc_1800B5B38
 * 00000001800B5A7E: lea     rax, unk_180145E80
 * 00000001800B5A85: mov     qword ptr [rbp+8C80h+var_70D0], rax
 * 00000001800B5A8C: lea     rax, unk_180147898
 * 00000001800B5A93: mov     qword ptr [rbp+8C80h+var_70D0+8], rax
 * 00000001800B5A9A: mov     dword ptr [rbp+8C80h+var_70C0], esi
 * 00000001800B5AA0: mov     dword ptr [rbp+8C80h+var_70C0+4], esi
 * 00000001800B5AA6: call    sub_1800A8988
 * 00000001800B5AAB: mov     r8, rax
 * 00000001800B5AAE: mov     r9d, r12d
 * 00000001800B5AB1: mov     edx, 128h
 * 00000001800B5AB6: lea     rcx, [rbp+8C80h+var_1430]
 * 00000001800B5ABD: call    sub_180075CF8
 * 00000001800B5AC2: nop
 * 00000001800B5AC3: mov     r8, rax
 * 00000001800B5AC6: mov     rdx, r13
 * 00000001800B5AC9: lea     rcx, [rbp+8C80h+var_1450]
 * 00000001800B5AD0: call    sub_18001C928
 * 00000001800B5AD5: nop
 * 00000001800B5AD6: lea     r8, aVertex; "/Vertex"
 * 00000001800B5ADD: mov     rdx, rax
 * 00000001800B5AE0: lea     rcx, [rbp+8C80h+var_4D70]
 * 00000001800B5AE7: call    sub_18001C87C
 * 00000001800B5AEC: movups  xmm0, [rbp+8C80h+var_70D0]
 * 00000001800B5AF3: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5AF8: movups  xmm1, [rbp+8C80h+var_70C0]
 * 00000001800B5AFF: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5B04: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5B09: mov     rcx, rax
 * 00000001800B5B0C: call    sub_180075D94
 * 00000001800B5B11: nop
 * 00000001800B5B12: lea     rcx, [rbp+8C80h+var_1450]
 * 00000001800B5B19: call    sub_180011E30
 * 00000001800B5B1E: nop
 * 00000001800B5B1F: lea     rcx, [rbp+8C80h+var_1430]
 * 00000001800B5B26: call    sub_180011E30
 * 00000001800B5B2B: nop
 * 00000001800B5B2C: lea     rcx, dword_1801CE640
 * 00000001800B5B33: call    sub_18000D4CC
 * 00000001800B5B38: mov     rax, [rdi+rbx*8]
 * 00000001800B5B3C: mov     ecx, [r15+rax]
 * 00000001800B5B40: cmp     cs:dword_1801CE644, ecx
 * 00000001800B5B46: jle     loc_1800B5C1F
 * 00000001800B5B4C: lea     rcx, dword_1801CE644
 * 00000001800B5B53: call    sub_18000D534
 * 00000001800B5B58: cmp     cs:dword_1801CE644, r14d
 * 00000001800B5B5F: jnz     loc_1800B5C1F
 * 00000001800B5B65: lea     rax, unk_180145E80
 * 00000001800B5B6C: mov     qword ptr [rbp+8C80h+var_70B0], rax
 * 00000001800B5B73: lea     rax, unk_180147898
 * 00000001800B5B7A: mov     qword ptr [rbp+8C80h+var_70B0+8], rax
 * 00000001800B5B81: mov     dword ptr [rbp+8C80h+var_70A0], esi
 * 00000001800B5B87: mov     dword ptr [rbp+8C80h+var_70A0+4], esi
 * 00000001800B5B8D: call    sub_1800A8988
 * 00000001800B5B92: mov     r8, rax
 * 00000001800B5B95: mov     r9d, r12d
 * 00000001800B5B98: mov     edx, 12Ah
 * 00000001800B5B9D: lea     rcx, [rbp+8C80h+var_13D0]
 * 00000001800B5BA4: call    sub_180075CF8
 * 00000001800B5BA9: nop
 * 00000001800B5BAA: mov     r8, rax
 * 00000001800B5BAD: mov     rdx, r13
 * 00000001800B5BB0: lea     rcx, [rbp+8C80h+var_13F0]
 * 00000001800B5BB7: call    sub_18001C928
 * 00000001800B5BBC: nop
 * 00000001800B5BBD: lea     r8, aVertex; "/Vertex"
 * 00000001800B5BC4: mov     rdx, rax
 * 00000001800B5BC7: lea     rcx, [rbp+8C80h+var_4D50]
 * 00000001800B5BCE: call    sub_18001C87C
 * 00000001800B5BD3: movups  xmm0, [rbp+8C80h+var_70B0]
 * 00000001800B5BDA: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5BDF: movups  xmm1, [rbp+8C80h+var_70A0]
 * 00000001800B5BE6: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5BEB: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5BF0: mov     rcx, rax
 * 00000001800B5BF3: call    sub_180075D94
 * 00000001800B5BF8: nop
 * 00000001800B5BF9: lea     rcx, [rbp+8C80h+var_13F0]
 * 00000001800B5C00: call    sub_180011E30
 * 00000001800B5C05: nop
 * 00000001800B5C06: lea     rcx, [rbp+8C80h+var_13D0]
 * 00000001800B5C0D: call    sub_180011E30
 * 00000001800B5C12: nop
 * 00000001800B5C13: lea     rcx, dword_1801CE644
 * 00000001800B5C1A: call    sub_18000D4CC
 * 00000001800B5C1F: mov     rax, [rdi+rbx*8]
 * 00000001800B5C23: mov     ecx, [r15+rax]
 * 00000001800B5C27: cmp     cs:dword_1801CE648, ecx
 * 00000001800B5C2D: jle     loc_1800B5D06
 * 00000001800B5C33: lea     rcx, dword_1801CE648
 * 00000001800B5C3A: call    sub_18000D534
 * 00000001800B5C3F: cmp     cs:dword_1801CE648, r14d
 * 00000001800B5C46: jnz     loc_1800B5D06
 * 00000001800B5C4C: lea     rax, unk_180145E80
 * 00000001800B5C53: mov     qword ptr [rbp+8C80h+var_7090], rax
 * 00000001800B5C5A: lea     rax, unk_180147898
 * 00000001800B5C61: mov     qword ptr [rbp+8C80h+var_7090+8], rax
 * 00000001800B5C68: mov     dword ptr [rbp+8C80h+var_7080], esi
 * 00000001800B5C6E: mov     dword ptr [rbp+8C80h+var_7080+4], esi
 * 00000001800B5C74: call    sub_1800A8988
 * 00000001800B5C79: mov     r8, rax
 * 00000001800B5C7C: mov     r9d, r12d
 * 00000001800B5C7F: mov     edx, 130h
 * 00000001800B5C84: lea     rcx, [rbp+8C80h+var_1370]
 * 00000001800B5C8B: call    sub_180075CF8
 * 00000001800B5C90: nop
 * 00000001800B5C91: mov     r8, rax
 * 00000001800B5C94: mov     rdx, r13
 * 00000001800B5C97: lea     rcx, [rbp+8C80h+var_1390]
 * 00000001800B5C9E: call    sub_18001C928
 * 00000001800B5CA3: nop
 * 00000001800B5CA4: lea     r8, aVertex; "/Vertex"
 * 00000001800B5CAB: mov     rdx, rax
 * 00000001800B5CAE: lea     rcx, [rbp+8C80h+var_4D30]
 * 00000001800B5CB5: call    sub_18001C87C
 * 00000001800B5CBA: movups  xmm0, [rbp+8C80h+var_7090]
 * 00000001800B5CC1: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5CC6: movups  xmm1, [rbp+8C80h+var_7080]
 * 00000001800B5CCD: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5CD2: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5CD7: mov     rcx, rax
 * 00000001800B5CDA: call    sub_180075D94
 * 00000001800B5CDF: nop
 * 00000001800B5CE0: lea     rcx, [rbp+8C80h+var_1390]
 * 00000001800B5CE7: call    sub_180011E30
 * 00000001800B5CEC: nop
 * 00000001800B5CED: lea     rcx, [rbp+8C80h+var_1370]
 * 00000001800B5CF4: call    sub_180011E30
 * 00000001800B5CF9: nop
 * 00000001800B5CFA: lea     rcx, dword_1801CE648
 * 00000001800B5D01: call    sub_18000D4CC
 * 00000001800B5D06: mov     rax, [rdi+rbx*8]
 * 00000001800B5D0A: mov     ecx, [r15+rax]
 * 00000001800B5D0E: cmp     cs:dword_1801CE64C, ecx
 * 00000001800B5D14: jle     loc_1800B5DED
 * 00000001800B5D1A: lea     rcx, dword_1801CE64C
 * 00000001800B5D21: call    sub_18000D534
 * 00000001800B5D26: cmp     cs:dword_1801CE64C, r14d
 * 00000001800B5D2D: jnz     loc_1800B5DED
 * 00000001800B5D33: lea     rax, unk_180145E80
 * 00000001800B5D3A: mov     qword ptr [rbp+8C80h+var_7070], rax
 * 00000001800B5D41: lea     rax, unk_180147898
 * 00000001800B5D48: mov     qword ptr [rbp+8C80h+var_7070+8], rax
 * 00000001800B5D4F: mov     dword ptr [rbp+8C80h+var_7060], esi
 * 00000001800B5D55: mov     dword ptr [rbp+8C80h+var_7060+4], esi
 * 00000001800B5D5B: call    sub_1800A8988
 * 00000001800B5D60: mov     r8, rax
 * 00000001800B5D63: mov     r9d, r12d
 * 00000001800B5D66: mov     edx, 132h
 * 00000001800B5D6B: lea     rcx, [rbp+8C80h+var_1310]
 * 00000001800B5D72: call    sub_180075CF8
 * 00000001800B5D77: nop
 * 00000001800B5D78: mov     r8, rax
 * 00000001800B5D7B: mov     rdx, r13
 * 00000001800B5D7E: lea     rcx, [rbp+8C80h+var_1330]
 * 00000001800B5D85: call    sub_18001C928
 * 00000001800B5D8A: nop
 * 00000001800B5D8B: lea     r8, aVertex; "/Vertex"
 * 00000001800B5D92: mov     rdx, rax
 * 00000001800B5D95: lea     rcx, [rbp+8C80h+var_4D10]
 * 00000001800B5D9C: call    sub_18001C87C
 * 00000001800B5DA1: movups  xmm0, [rbp+8C80h+var_7070]
 * 00000001800B5DA8: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5DAD: movups  xmm1, [rbp+8C80h+var_7060]
 * 00000001800B5DB4: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5DB9: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5DBE: mov     rcx, rax
 * 00000001800B5DC1: call    sub_180075D94
 * 00000001800B5DC6: nop
 * 00000001800B5DC7: lea     rcx, [rbp+8C80h+var_1330]
 * 00000001800B5DCE: call    sub_180011E30
 * 00000001800B5DD3: nop
 * 00000001800B5DD4: lea     rcx, [rbp+8C80h+var_1310]
 * 00000001800B5DDB: call    sub_180011E30
 * 00000001800B5DE0: nop
 * 00000001800B5DE1: lea     rcx, dword_1801CE64C
 * 00000001800B5DE8: call    sub_18000D4CC
 * 00000001800B5DED: mov     rax, [rdi+rbx*8]
 * 00000001800B5DF1: mov     ecx, [r15+rax]
 * 00000001800B5DF5: cmp     cs:dword_1801CE650, ecx
 * 00000001800B5DFB: jle     loc_1800B5ED4
 * 00000001800B5E01: lea     rcx, dword_1801CE650
 * 00000001800B5E08: call    sub_18000D534
 * 00000001800B5E0D: cmp     cs:dword_1801CE650, r14d
 * 00000001800B5E14: jnz     loc_1800B5ED4
 * 00000001800B5E1A: lea     rax, unk_180145E80
 * 00000001800B5E21: mov     qword ptr [rbp+8C80h+var_7050], rax
 * 00000001800B5E28: lea     rax, unk_180147898
 * 00000001800B5E2F: mov     qword ptr [rbp+8C80h+var_7050+8], rax
 * 00000001800B5E36: mov     dword ptr [rbp+8C80h+var_7040], esi
 * 00000001800B5E3C: mov     dword ptr [rbp+8C80h+var_7040+4], esi
 * 00000001800B5E42: call    sub_1800A8988
 * 00000001800B5E47: mov     r8, rax
 * 00000001800B5E4A: mov     r9d, r12d
 * 00000001800B5E4D: mov     edx, 138h
 * 00000001800B5E52: lea     rcx, [rbp+8C80h+var_12B0]
 * 00000001800B5E59: call    sub_180075CF8
 * 00000001800B5E5E: nop
 * 00000001800B5E5F: mov     r8, rax
 * 00000001800B5E62: mov     rdx, r13
 * 00000001800B5E65: lea     rcx, [rbp+8C80h+var_12D0]
 * 00000001800B5E6C: call    sub_18001C928
 * 00000001800B5E71: nop
 * 00000001800B5E72: lea     r8, aVertex; "/Vertex"
 * 00000001800B5E79: mov     rdx, rax
 * 00000001800B5E7C: lea     rcx, [rbp+8C80h+var_4CF0]
 * 00000001800B5E83: call    sub_18001C87C
 * 00000001800B5E88: movups  xmm0, [rbp+8C80h+var_7050]
 * 00000001800B5E8F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5E94: movups  xmm1, [rbp+8C80h+var_7040]
 * 00000001800B5E9B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5EA0: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5EA5: mov     rcx, rax
 * 00000001800B5EA8: call    sub_180075D94
 * 00000001800B5EAD: nop
 * 00000001800B5EAE: lea     rcx, [rbp+8C80h+var_12D0]
 * 00000001800B5EB5: call    sub_180011E30
 * 00000001800B5EBA: nop
 * 00000001800B5EBB: lea     rcx, [rbp+8C80h+var_12B0]
 * 00000001800B5EC2: call    sub_180011E30
 * 00000001800B5EC7: nop
 * 00000001800B5EC8: lea     rcx, dword_1801CE650
 * 00000001800B5ECF: call    sub_18000D4CC
 * 00000001800B5ED4: mov     rax, [rdi+rbx*8]
 * 00000001800B5ED8: mov     ecx, [r15+rax]
 * 00000001800B5EDC: cmp     cs:dword_1801CE654, ecx
 * 00000001800B5EE2: jle     loc_1800B5FBB
 * 00000001800B5EE8: lea     rcx, dword_1801CE654
 * 00000001800B5EEF: call    sub_18000D534
 * 00000001800B5EF4: cmp     cs:dword_1801CE654, r14d
 * 00000001800B5EFB: jnz     loc_1800B5FBB
 * 00000001800B5F01: lea     rax, unk_180145E80
 * 00000001800B5F08: mov     qword ptr [rbp+8C80h+var_7030], rax
 * 00000001800B5F0F: lea     rax, unk_180147898
 * 00000001800B5F16: mov     qword ptr [rbp+8C80h+var_7030+8], rax
 * 00000001800B5F1D: mov     dword ptr [rbp+8C80h+var_7020], esi
 * 00000001800B5F23: mov     dword ptr [rbp+8C80h+var_7020+4], esi
 * 00000001800B5F29: call    sub_1800A8988
 * 00000001800B5F2E: mov     r8, rax
 * 00000001800B5F31: mov     r9d, r12d
 * 00000001800B5F34: mov     edx, 13Ah
 * 00000001800B5F39: lea     rcx, [rbp+8C80h+var_1250]
 * 00000001800B5F40: call    sub_180075CF8
 * 00000001800B5F45: nop
 * 00000001800B5F46: mov     r8, rax
 * 00000001800B5F49: mov     rdx, r13
 * 00000001800B5F4C: lea     rcx, [rbp+8C80h+var_1270]
 * 00000001800B5F53: call    sub_18001C928
 * 00000001800B5F58: nop
 * 00000001800B5F59: lea     r8, aVertex; "/Vertex"
 * 00000001800B5F60: mov     rdx, rax
 * 00000001800B5F63: lea     rcx, [rbp+8C80h+var_4CD0]
 * 00000001800B5F6A: call    sub_18001C87C
 * 00000001800B5F6F: movups  xmm0, [rbp+8C80h+var_7030]
 * 00000001800B5F76: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B5F7B: movups  xmm1, [rbp+8C80h+var_7020]
 * 00000001800B5F82: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B5F87: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B5F8C: mov     rcx, rax
 * 00000001800B5F8F: call    sub_180075D94
 * 00000001800B5F94: nop
 * 00000001800B5F95: lea     rcx, [rbp+8C80h+var_1270]
 * 00000001800B5F9C: call    sub_180011E30
 * 00000001800B5FA1: nop
 * 00000001800B5FA2: lea     rcx, [rbp+8C80h+var_1250]
 * 00000001800B5FA9: call    sub_180011E30
 * 00000001800B5FAE: nop
 * 00000001800B5FAF: lea     rcx, dword_1801CE654
 * 00000001800B5FB6: call    sub_18000D4CC
 * 00000001800B5FBB: mov     rax, [rdi+rbx*8]
 * 00000001800B5FBF: mov     ecx, [r15+rax]
 * 00000001800B5FC3: cmp     cs:dword_1801CE658, ecx
 * 00000001800B5FC9: jle     loc_1800B60A2
 * 00000001800B5FCF: lea     rcx, dword_1801CE658
 * 00000001800B5FD6: call    sub_18000D534
 * 00000001800B5FDB: cmp     cs:dword_1801CE658, r14d
 * 00000001800B5FE2: jnz     loc_1800B60A2
 * 00000001800B5FE8: lea     rax, unk_1801492F0
 * 00000001800B5FEF: mov     qword ptr [rbp+8C80h+var_7010], rax
 * 00000001800B5FF6: lea     rax, unk_18014A340
 * 00000001800B5FFD: mov     qword ptr [rbp+8C80h+var_7010+8], rax
 * 00000001800B6004: mov     dword ptr [rbp+8C80h+var_7000], esi
 * 00000001800B600A: mov     dword ptr [rbp+8C80h+var_7000+4], esi
 * 00000001800B6010: call    sub_1800A8988
 * 00000001800B6015: mov     r8, rax
 * 00000001800B6018: mov     r9d, r12d
 * 00000001800B601B: mov     edx, 140h
 * 00000001800B6020: lea     rcx, [rbp+8C80h+var_11F0]
 * 00000001800B6027: call    sub_180075CF8
 * 00000001800B602C: nop
 * 00000001800B602D: mov     r8, rax
 * 00000001800B6030: mov     rdx, r13
 * 00000001800B6033: lea     rcx, [rbp+8C80h+var_1210]
 * 00000001800B603A: call    sub_18001C928
 * 00000001800B603F: nop
 * 00000001800B6040: lea     r8, aVertex; "/Vertex"
 * 00000001800B6047: mov     rdx, rax
 * 00000001800B604A: lea     rcx, [rbp+8C80h+var_4CB0]
 * 00000001800B6051: call    sub_18001C87C
 * 00000001800B6056: movups  xmm0, [rbp+8C80h+var_7010]
 * 00000001800B605D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6062: movups  xmm1, [rbp+8C80h+var_7000]
 * 00000001800B6069: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B606E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6073: mov     rcx, rax
 * 00000001800B6076: call    sub_180075D94
 * 00000001800B607B: nop
 * 00000001800B607C: lea     rcx, [rbp+8C80h+var_1210]
 * 00000001800B6083: call    sub_180011E30
 * 00000001800B6088: nop
 * 00000001800B6089: lea     rcx, [rbp+8C80h+var_11F0]
 * 00000001800B6090: call    sub_180011E30
 * 00000001800B6095: nop
 * 00000001800B6096: lea     rcx, dword_1801CE658
 * 00000001800B609D: call    sub_18000D4CC
 * 00000001800B60A2: mov     rax, [rdi+rbx*8]
 * 00000001800B60A6: mov     ecx, [r15+rax]
 * 00000001800B60AA: cmp     cs:dword_1801CE65C, ecx
 * 00000001800B60B0: jle     loc_1800B6189
 * 00000001800B60B6: lea     rcx, dword_1801CE65C
 * 00000001800B60BD: call    sub_18000D534
 * 00000001800B60C2: cmp     cs:dword_1801CE65C, r14d
 * 00000001800B60C9: jnz     loc_1800B6189
 * 00000001800B60CF: lea     rax, unk_1801492F0
 * 00000001800B60D6: mov     qword ptr [rbp+8C80h+var_6FF0], rax
 * 00000001800B60DD: lea     rax, unk_18014A340
 * 00000001800B60E4: mov     qword ptr [rbp+8C80h+var_6FF0+8], rax
 * 00000001800B60EB: mov     dword ptr [rbp+8C80h+var_6FE0], esi
 * 00000001800B60F1: mov     dword ptr [rbp+8C80h+var_6FE0+4], esi
 * 00000001800B60F7: call    sub_1800A8988
 * 00000001800B60FC: mov     r8, rax
 * 00000001800B60FF: mov     r9d, r12d
 * 00000001800B6102: mov     edx, 142h
 * 00000001800B6107: lea     rcx, [rbp+8C80h+var_1190]
 * 00000001800B610E: call    sub_180075CF8
 * 00000001800B6113: nop
 * 00000001800B6114: mov     r8, rax
 * 00000001800B6117: mov     rdx, r13
 * 00000001800B611A: lea     rcx, [rbp+8C80h+var_11B0]
 * 00000001800B6121: call    sub_18001C928
 * 00000001800B6126: nop
 * 00000001800B6127: lea     r8, aVertex; "/Vertex"
 * 00000001800B612E: mov     rdx, rax
 * 00000001800B6131: lea     rcx, [rbp+8C80h+var_4C90]
 * 00000001800B6138: call    sub_18001C87C
 * 00000001800B613D: movups  xmm0, [rbp+8C80h+var_6FF0]
 * 00000001800B6144: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6149: movups  xmm1, [rbp+8C80h+var_6FE0]
 * 00000001800B6150: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6155: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B615A: mov     rcx, rax
 * 00000001800B615D: call    sub_180075D94
 * 00000001800B6162: nop
 * 00000001800B6163: lea     rcx, [rbp+8C80h+var_11B0]
 * 00000001800B616A: call    sub_180011E30
 * 00000001800B616F: nop
 * 00000001800B6170: lea     rcx, [rbp+8C80h+var_1190]
 * 00000001800B6177: call    sub_180011E30
 * 00000001800B617C: nop
 * 00000001800B617D: lea     rcx, dword_1801CE65C
 * 00000001800B6184: call    sub_18000D4CC
 * 00000001800B6189: mov     rax, [rdi+rbx*8]
 * 00000001800B618D: mov     ecx, [r15+rax]
 * 00000001800B6191: cmp     cs:dword_1801CE660, ecx
 * 00000001800B6197: jle     loc_1800B6270
 * 00000001800B619D: lea     rcx, dword_1801CE660
 * 00000001800B61A4: call    sub_18000D534
 * 00000001800B61A9: cmp     cs:dword_1801CE660, r14d
 * 00000001800B61B0: jnz     loc_1800B6270
 * 00000001800B61B6: lea     rax, unk_1801492F0
 * 00000001800B61BD: mov     qword ptr [rbp+8C80h+var_6FD0], rax
 * 00000001800B61C4: lea     rax, unk_18014A340
 * 00000001800B61CB: mov     qword ptr [rbp+8C80h+var_6FD0+8], rax
 * 00000001800B61D2: mov     dword ptr [rbp+8C80h+var_6FC0], esi
 * 00000001800B61D8: mov     dword ptr [rbp+8C80h+var_6FC0+4], esi
 * 00000001800B61DE: call    sub_1800A8988
 * 00000001800B61E3: mov     r8, rax
 * 00000001800B61E6: mov     r9d, r12d
 * 00000001800B61E9: mov     edx, 148h
 * 00000001800B61EE: lea     rcx, [rbp+8C80h+var_1130]
 * 00000001800B61F5: call    sub_180075CF8
 * 00000001800B61FA: nop
 * 00000001800B61FB: mov     r8, rax
 * 00000001800B61FE: mov     rdx, r13
 * 00000001800B6201: lea     rcx, [rbp+8C80h+var_1150]
 * 00000001800B6208: call    sub_18001C928
 * 00000001800B620D: nop
 * 00000001800B620E: lea     r8, aVertex; "/Vertex"
 * 00000001800B6215: mov     rdx, rax
 * 00000001800B6218: lea     rcx, [rbp+8C80h+var_4C70]
 * 00000001800B621F: call    sub_18001C87C
 * 00000001800B6224: movups  xmm0, [rbp+8C80h+var_6FD0]
 * 00000001800B622B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6230: movups  xmm1, [rbp+8C80h+var_6FC0]
 * 00000001800B6237: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B623C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6241: mov     rcx, rax
 * 00000001800B6244: call    sub_180075D94
 * 00000001800B6249: nop
 * 00000001800B624A: lea     rcx, [rbp+8C80h+var_1150]
 * 00000001800B6251: call    sub_180011E30
 * 00000001800B6256: nop
 * 00000001800B6257: lea     rcx, [rbp+8C80h+var_1130]
 * 00000001800B625E: call    sub_180011E30
 * 00000001800B6263: nop
 * 00000001800B6264: lea     rcx, dword_1801CE660
 * 00000001800B626B: call    sub_18000D4CC
 * 00000001800B6270: mov     rax, [rdi+rbx*8]
 * 00000001800B6274: mov     ecx, [r15+rax]
 * 00000001800B6278: cmp     cs:dword_1801CE664, ecx
 * 00000001800B627E: jle     loc_1800B6357
 * 00000001800B6284: lea     rcx, dword_1801CE664
 * 00000001800B628B: call    sub_18000D534
 * 00000001800B6290: cmp     cs:dword_1801CE664, r14d
 * 00000001800B6297: jnz     loc_1800B6357
 * 00000001800B629D: lea     rax, unk_1801492F0
 * 00000001800B62A4: mov     qword ptr [rbp+8C80h+var_6FB0], rax
 * 00000001800B62AB: lea     rax, unk_18014A340
 * 00000001800B62B2: mov     qword ptr [rbp+8C80h+var_6FB0+8], rax
 * 00000001800B62B9: mov     dword ptr [rbp+8C80h+var_6FA0], esi
 * 00000001800B62BF: mov     dword ptr [rbp+8C80h+var_6FA0+4], esi
 * 00000001800B62C5: call    sub_1800A8988
 * 00000001800B62CA: mov     r8, rax
 * 00000001800B62CD: mov     r9d, r12d
 * 00000001800B62D0: mov     edx, 14Ah
 * 00000001800B62D5: lea     rcx, [rbp+8C80h+var_10D0]
 * 00000001800B62DC: call    sub_180075CF8
 * 00000001800B62E1: nop
 * 00000001800B62E2: mov     r8, rax
 * 00000001800B62E5: mov     rdx, r13
 * 00000001800B62E8: lea     rcx, [rbp+8C80h+var_10F0]
 * 00000001800B62EF: call    sub_18001C928
 * 00000001800B62F4: nop
 * 00000001800B62F5: lea     r8, aVertex; "/Vertex"
 * 00000001800B62FC: mov     rdx, rax
 * 00000001800B62FF: lea     rcx, [rbp+8C80h+var_4C50]
 * 00000001800B6306: call    sub_18001C87C
 * 00000001800B630B: movups  xmm0, [rbp+8C80h+var_6FB0]
 * 00000001800B6312: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6317: movups  xmm1, [rbp+8C80h+var_6FA0]
 * 00000001800B631E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6323: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6328: mov     rcx, rax
 * 00000001800B632B: call    sub_180075D94
 * 00000001800B6330: nop
 * 00000001800B6331: lea     rcx, [rbp+8C80h+var_10F0]
 * 00000001800B6338: call    sub_180011E30
 * 00000001800B633D: nop
 * 00000001800B633E: lea     rcx, [rbp+8C80h+var_10D0]
 * 00000001800B6345: call    sub_180011E30
 * 00000001800B634A: nop
 * 00000001800B634B: lea     rcx, dword_1801CE664
 * 00000001800B6352: call    sub_18000D4CC
 * 00000001800B6357: mov     rax, [rdi+rbx*8]
 * 00000001800B635B: mov     ecx, [r15+rax]
 * 00000001800B635F: cmp     cs:dword_1801CE668, ecx
 * 00000001800B6365: jle     loc_1800B643E
 * 00000001800B636B: lea     rcx, dword_1801CE668
 * 00000001800B6372: call    sub_18000D534
 * 00000001800B6377: cmp     cs:dword_1801CE668, r14d
 * 00000001800B637E: jnz     loc_1800B643E
 * 00000001800B6384: lea     rax, unk_1801492F0
 * 00000001800B638B: mov     qword ptr [rbp+8C80h+var_6F90], rax
 * 00000001800B6392: lea     rax, unk_18014A340
 * 00000001800B6399: mov     qword ptr [rbp+8C80h+var_6F90+8], rax
 * 00000001800B63A0: mov     dword ptr [rbp+8C80h+var_6F80], esi
 * 00000001800B63A6: mov     dword ptr [rbp+8C80h+var_6F80+4], esi
 * 00000001800B63AC: call    sub_1800A8988
 * 00000001800B63B1: mov     r8, rax
 * 00000001800B63B4: mov     r9d, r12d
 * 00000001800B63B7: mov     edx, 150h
 * 00000001800B63BC: lea     rcx, [rbp+8C80h+var_1070]
 * 00000001800B63C3: call    sub_180075CF8
 * 00000001800B63C8: nop
 * 00000001800B63C9: mov     r8, rax
 * 00000001800B63CC: mov     rdx, r13
 * 00000001800B63CF: lea     rcx, [rbp+8C80h+var_1090]
 * 00000001800B63D6: call    sub_18001C928
 * 00000001800B63DB: nop
 * 00000001800B63DC: lea     r8, aVertex; "/Vertex"
 * 00000001800B63E3: mov     rdx, rax
 * 00000001800B63E6: lea     rcx, [rbp+8C80h+var_4C30]
 * 00000001800B63ED: call    sub_18001C87C
 * 00000001800B63F2: movups  xmm0, [rbp+8C80h+var_6F90]
 * 00000001800B63F9: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B63FE: movups  xmm1, [rbp+8C80h+var_6F80]
 * 00000001800B6405: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B640A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B640F: mov     rcx, rax
 * 00000001800B6412: call    sub_180075D94
 * 00000001800B6417: nop
 * 00000001800B6418: lea     rcx, [rbp+8C80h+var_1090]
 * 00000001800B641F: call    sub_180011E30
 * 00000001800B6424: nop
 * 00000001800B6425: lea     rcx, [rbp+8C80h+var_1070]
 * 00000001800B642C: call    sub_180011E30
 * 00000001800B6431: nop
 * 00000001800B6432: lea     rcx, dword_1801CE668
 * 00000001800B6439: call    sub_18000D4CC
 * 00000001800B643E: mov     rax, [rdi+rbx*8]
 * 00000001800B6442: mov     ecx, [r15+rax]
 * 00000001800B6446: cmp     cs:dword_1801CE66C, ecx
 * 00000001800B644C: jle     loc_1800B6525
 * 00000001800B6452: lea     rcx, dword_1801CE66C
 * 00000001800B6459: call    sub_18000D534
 * 00000001800B645E: cmp     cs:dword_1801CE66C, r14d
 * 00000001800B6465: jnz     loc_1800B6525
 * 00000001800B646B: lea     rax, unk_1801492F0
 * 00000001800B6472: mov     qword ptr [rbp+8C80h+var_6F70], rax
 * 00000001800B6479: lea     rax, unk_18014A340
 * 00000001800B6480: mov     qword ptr [rbp+8C80h+var_6F70+8], rax
 * 00000001800B6487: mov     dword ptr [rbp+8C80h+var_6F60], esi
 * 00000001800B648D: mov     dword ptr [rbp+8C80h+var_6F60+4], esi
 * 00000001800B6493: call    sub_1800A8988
 * 00000001800B6498: mov     r8, rax
 * 00000001800B649B: mov     r9d, r12d
 * 00000001800B649E: mov     edx, 152h
 * 00000001800B64A3: lea     rcx, [rbp+8C80h+var_1010]
 * 00000001800B64AA: call    sub_180075CF8
 * 00000001800B64AF: nop
 * 00000001800B64B0: mov     r8, rax
 * 00000001800B64B3: mov     rdx, r13
 * 00000001800B64B6: lea     rcx, [rbp+8C80h+var_1030]
 * 00000001800B64BD: call    sub_18001C928
 * 00000001800B64C2: nop
 * 00000001800B64C3: lea     r8, aVertex; "/Vertex"
 * 00000001800B64CA: mov     rdx, rax
 * 00000001800B64CD: lea     rcx, [rbp+8C80h+var_4C10]
 * 00000001800B64D4: call    sub_18001C87C
 * 00000001800B64D9: movups  xmm0, [rbp+8C80h+var_6F70]
 * 00000001800B64E0: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B64E5: movups  xmm1, [rbp+8C80h+var_6F60]
 * 00000001800B64EC: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B64F1: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B64F6: mov     rcx, rax
 * 00000001800B64F9: call    sub_180075D94
 * 00000001800B64FE: nop
 * 00000001800B64FF: lea     rcx, [rbp+8C80h+var_1030]
 * 00000001800B6506: call    sub_180011E30
 * 00000001800B650B: nop
 * 00000001800B650C: lea     rcx, [rbp+8C80h+var_1010]
 * 00000001800B6513: call    sub_180011E30
 * 00000001800B6518: nop
 * 00000001800B6519: lea     rcx, dword_1801CE66C
 * 00000001800B6520: call    sub_18000D4CC
 * 00000001800B6525: mov     rax, [rdi+rbx*8]
 * 00000001800B6529: mov     ecx, [r15+rax]
 * 00000001800B652D: cmp     cs:dword_1801CE670, ecx
 * 00000001800B6533: jle     loc_1800B660C
 * 00000001800B6539: lea     rcx, dword_1801CE670
 * 00000001800B6540: call    sub_18000D534
 * 00000001800B6545: cmp     cs:dword_1801CE670, r14d
 * 00000001800B654C: jnz     loc_1800B660C
 * 00000001800B6552: lea     rax, unk_1801492F0
 * 00000001800B6559: mov     qword ptr [rbp+8C80h+var_6F50], rax
 * 00000001800B6560: lea     rax, unk_18014A340
 * 00000001800B6567: mov     qword ptr [rbp+8C80h+var_6F50+8], rax
 * 00000001800B656E: mov     dword ptr [rbp+8C80h+var_6F40], esi
 * 00000001800B6574: mov     dword ptr [rbp+8C80h+var_6F40+4], esi
 * 00000001800B657A: call    sub_1800A8988
 * 00000001800B657F: mov     r8, rax
 * 00000001800B6582: mov     r9d, r12d
 * 00000001800B6585: mov     edx, 158h
 * 00000001800B658A: lea     rcx, [rbp+8C80h+var_FB0]
 * 00000001800B6591: call    sub_180075CF8
 * 00000001800B6596: nop
 * 00000001800B6597: mov     r8, rax
 * 00000001800B659A: mov     rdx, r13
 * 00000001800B659D: lea     rcx, [rbp+8C80h+var_FD0]
 * 00000001800B65A4: call    sub_18001C928
 * 00000001800B65A9: nop
 * 00000001800B65AA: lea     r8, aVertex; "/Vertex"
 * 00000001800B65B1: mov     rdx, rax
 * 00000001800B65B4: lea     rcx, [rbp+8C80h+var_4BF0]
 * 00000001800B65BB: call    sub_18001C87C
 * 00000001800B65C0: movups  xmm0, [rbp+8C80h+var_6F50]
 * 00000001800B65C7: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B65CC: movups  xmm1, [rbp+8C80h+var_6F40]
 * 00000001800B65D3: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B65D8: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B65DD: mov     rcx, rax
 * 00000001800B65E0: call    sub_180075D94
 * 00000001800B65E5: nop
 * 00000001800B65E6: lea     rcx, [rbp+8C80h+var_FD0]
 * 00000001800B65ED: call    sub_180011E30
 * 00000001800B65F2: nop
 * 00000001800B65F3: lea     rcx, [rbp+8C80h+var_FB0]
 * 00000001800B65FA: call    sub_180011E30
 * 00000001800B65FF: nop
 * 00000001800B6600: lea     rcx, dword_1801CE670
 * 00000001800B6607: call    sub_18000D4CC
 * 00000001800B660C: mov     rax, [rdi+rbx*8]
 * 00000001800B6610: mov     ecx, [r15+rax]
 * 00000001800B6614: cmp     cs:dword_1801CE674, ecx
 * 00000001800B661A: jle     loc_1800B66F3
 * 00000001800B6620: lea     rcx, dword_1801CE674
 * 00000001800B6627: call    sub_18000D534
 * 00000001800B662C: cmp     cs:dword_1801CE674, r14d
 * 00000001800B6633: jnz     loc_1800B66F3
 * 00000001800B6639: lea     rax, unk_1801492F0
 * 00000001800B6640: mov     qword ptr [rbp+8C80h+var_6F30], rax
 * 00000001800B6647: lea     rax, unk_18014A340
 * 00000001800B664E: mov     qword ptr [rbp+8C80h+var_6F30+8], rax
 * 00000001800B6655: mov     dword ptr [rbp+8C80h+var_6F20], esi
 * 00000001800B665B: mov     dword ptr [rbp+8C80h+var_6F20+4], esi
 * 00000001800B6661: call    sub_1800A8988
 * 00000001800B6666: mov     r8, rax
 * 00000001800B6669: mov     r9d, r12d
 * 00000001800B666C: mov     edx, 15Ah
 * 00000001800B6671: lea     rcx, [rbp+8C80h+var_F50]
 * 00000001800B6678: call    sub_180075CF8
 * 00000001800B667D: nop
 * 00000001800B667E: mov     r8, rax
 * 00000001800B6681: mov     rdx, r13
 * 00000001800B6684: lea     rcx, [rbp+8C80h+var_F70]
 * 00000001800B668B: call    sub_18001C928
 * 00000001800B6690: nop
 * 00000001800B6691: lea     r8, aVertex; "/Vertex"
 * 00000001800B6698: mov     rdx, rax
 * 00000001800B669B: lea     rcx, [rbp+8C80h+var_4BD0]
 * 00000001800B66A2: call    sub_18001C87C
 * 00000001800B66A7: movups  xmm0, [rbp+8C80h+var_6F30]
 * 00000001800B66AE: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B66B3: movups  xmm1, [rbp+8C80h+var_6F20]
 * 00000001800B66BA: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B66BF: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B66C4: mov     rcx, rax
 * 00000001800B66C7: call    sub_180075D94
 * 00000001800B66CC: nop
 * 00000001800B66CD: lea     rcx, [rbp+8C80h+var_F70]
 * 00000001800B66D4: call    sub_180011E30
 * 00000001800B66D9: nop
 * 00000001800B66DA: lea     rcx, [rbp+8C80h+var_F50]
 * 00000001800B66E1: call    sub_180011E30
 * 00000001800B66E6: nop
 * 00000001800B66E7: lea     rcx, dword_1801CE674
 * 00000001800B66EE: call    sub_18000D4CC
 * 00000001800B66F3: mov     rax, [rdi+rbx*8]
 * 00000001800B66F7: mov     ecx, [r15+rax]
 * 00000001800B66FB: cmp     cs:dword_1801CE678, ecx
 * 00000001800B6701: jle     loc_1800B67DA
 * 00000001800B6707: lea     rcx, dword_1801CE678
 * 00000001800B670E: call    sub_18000D534
 * 00000001800B6713: cmp     cs:dword_1801CE678, r14d
 * 00000001800B671A: jnz     loc_1800B67DA
 * 00000001800B6720: lea     rax, unk_1801478A0
 * 00000001800B6727: mov     qword ptr [rbp+8C80h+var_6F10], rax
 * 00000001800B672E: lea     rax, unk_1801492F0
 * 00000001800B6735: mov     qword ptr [rbp+8C80h+var_6F10+8], rax
 * 00000001800B673C: mov     dword ptr [rbp+8C80h+var_6F00], esi
 * 00000001800B6742: mov     dword ptr [rbp+8C80h+var_6F00+4], esi
 * 00000001800B6748: call    sub_1800A8988
 * 00000001800B674D: mov     r8, rax
 * 00000001800B6750: mov     r9d, r12d
 * 00000001800B6753: mov     edx, 160h
 * 00000001800B6758: lea     rcx, [rbp+8C80h+var_EF0]
 * 00000001800B675F: call    sub_180075CF8
 * 00000001800B6764: nop
 * 00000001800B6765: mov     r8, rax
 * 00000001800B6768: mov     rdx, r13
 * 00000001800B676B: lea     rcx, [rbp+8C80h+var_F10]
 * 00000001800B6772: call    sub_18001C928
 * 00000001800B6777: nop
 * 00000001800B6778: lea     r8, aVertex; "/Vertex"
 * 00000001800B677F: mov     rdx, rax
 * 00000001800B6782: lea     rcx, [rbp+8C80h+var_4BB0]
 * 00000001800B6789: call    sub_18001C87C
 * 00000001800B678E: movups  xmm0, [rbp+8C80h+var_6F10]
 * 00000001800B6795: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B679A: movups  xmm1, [rbp+8C80h+var_6F00]
 * 00000001800B67A1: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B67A6: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B67AB: mov     rcx, rax
 * 00000001800B67AE: call    sub_180075D94
 * 00000001800B67B3: nop
 * 00000001800B67B4: lea     rcx, [rbp+8C80h+var_F10]
 * 00000001800B67BB: call    sub_180011E30
 * 00000001800B67C0: nop
 * 00000001800B67C1: lea     rcx, [rbp+8C80h+var_EF0]
 * 00000001800B67C8: call    sub_180011E30
 * 00000001800B67CD: nop
 * 00000001800B67CE: lea     rcx, dword_1801CE678
 * 00000001800B67D5: call    sub_18000D4CC
 * 00000001800B67DA: mov     rax, [rdi+rbx*8]
 * 00000001800B67DE: mov     ecx, [r15+rax]
 * 00000001800B67E2: cmp     cs:dword_1801CE67C, ecx
 * 00000001800B67E8: jle     loc_1800B68C1
 * 00000001800B67EE: lea     rcx, dword_1801CE67C
 * 00000001800B67F5: call    sub_18000D534
 * 00000001800B67FA: cmp     cs:dword_1801CE67C, r14d
 * 00000001800B6801: jnz     loc_1800B68C1
 * 00000001800B6807: lea     rax, unk_1801478A0
 * 00000001800B680E: mov     qword ptr [rbp+8C80h+var_6EF0], rax
 * 00000001800B6815: lea     rax, unk_1801492F0
 * 00000001800B681C: mov     qword ptr [rbp+8C80h+var_6EF0+8], rax
 * 00000001800B6823: mov     dword ptr [rbp+8C80h+var_6EE0], esi
 * 00000001800B6829: mov     dword ptr [rbp+8C80h+var_6EE0+4], esi
 * 00000001800B682F: call    sub_1800A8988
 * 00000001800B6834: mov     r8, rax
 * 00000001800B6837: mov     r9d, r12d
 * 00000001800B683A: mov     edx, 162h
 * 00000001800B683F: lea     rcx, [rbp+8C80h+var_E90]
 * 00000001800B6846: call    sub_180075CF8
 * 00000001800B684B: nop
 * 00000001800B684C: mov     r8, rax
 * 00000001800B684F: mov     rdx, r13
 * 00000001800B6852: lea     rcx, [rbp+8C80h+var_EB0]
 * 00000001800B6859: call    sub_18001C928
 * 00000001800B685E: nop
 * 00000001800B685F: lea     r8, aVertex; "/Vertex"
 * 00000001800B6866: mov     rdx, rax
 * 00000001800B6869: lea     rcx, [rbp+8C80h+var_4B90]
 * 00000001800B6870: call    sub_18001C87C
 * 00000001800B6875: movups  xmm0, [rbp+8C80h+var_6EF0]
 * 00000001800B687C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6881: movups  xmm1, [rbp+8C80h+var_6EE0]
 * 00000001800B6888: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B688D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6892: mov     rcx, rax
 * 00000001800B6895: call    sub_180075D94
 * 00000001800B689A: nop
 * 00000001800B689B: lea     rcx, [rbp+8C80h+var_EB0]
 * 00000001800B68A2: call    sub_180011E30
 * 00000001800B68A7: nop
 * 00000001800B68A8: lea     rcx, [rbp+8C80h+var_E90]
 * 00000001800B68AF: call    sub_180011E30
 * 00000001800B68B4: nop
 * 00000001800B68B5: lea     rcx, dword_1801CE67C
 * 00000001800B68BC: call    sub_18000D4CC
 * 00000001800B68C1: mov     rax, [rdi+rbx*8]
 * 00000001800B68C5: mov     ecx, [r15+rax]
 * 00000001800B68C9: cmp     cs:dword_1801CE680, ecx
 * 00000001800B68CF: jle     loc_1800B69A8
 * 00000001800B68D5: lea     rcx, dword_1801CE680
 * 00000001800B68DC: call    sub_18000D534
 * 00000001800B68E1: cmp     cs:dword_1801CE680, r14d
 * 00000001800B68E8: jnz     loc_1800B69A8
 * 00000001800B68EE: lea     rax, unk_1801478A0
 * 00000001800B68F5: mov     qword ptr [rbp+8C80h+var_6ED0], rax
 * 00000001800B68FC: lea     rax, unk_1801492F0
 * 00000001800B6903: mov     qword ptr [rbp+8C80h+var_6ED0+8], rax
 * 00000001800B690A: mov     dword ptr [rbp+8C80h+var_6EC0], esi
 * 00000001800B6910: mov     dword ptr [rbp+8C80h+var_6EC0+4], esi
 * 00000001800B6916: call    sub_1800A8988
 * 00000001800B691B: mov     r8, rax
 * 00000001800B691E: mov     r9d, r12d
 * 00000001800B6921: mov     edx, 168h
 * 00000001800B6926: lea     rcx, [rbp+8C80h+var_E30]
 * 00000001800B692D: call    sub_180075CF8
 * 00000001800B6932: nop
 * 00000001800B6933: mov     r8, rax
 * 00000001800B6936: mov     rdx, r13
 * 00000001800B6939: lea     rcx, [rbp+8C80h+var_E50]
 * 00000001800B6940: call    sub_18001C928
 * 00000001800B6945: nop
 * 00000001800B6946: lea     r8, aVertex; "/Vertex"
 * 00000001800B694D: mov     rdx, rax
 * 00000001800B6950: lea     rcx, [rbp+8C80h+var_4B70]
 * 00000001800B6957: call    sub_18001C87C
 * 00000001800B695C: movups  xmm0, [rbp+8C80h+var_6ED0]
 * 00000001800B6963: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6968: movups  xmm1, [rbp+8C80h+var_6EC0]
 * 00000001800B696F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6974: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6979: mov     rcx, rax
 * 00000001800B697C: call    sub_180075D94
 * 00000001800B6981: nop
 * 00000001800B6982: lea     rcx, [rbp+8C80h+var_E50]
 * 00000001800B6989: call    sub_180011E30
 * 00000001800B698E: nop
 * 00000001800B698F: lea     rcx, [rbp+8C80h+var_E30]
 * 00000001800B6996: call    sub_180011E30
 * 00000001800B699B: nop
 * 00000001800B699C: lea     rcx, dword_1801CE680
 * 00000001800B69A3: call    sub_18000D4CC
 * 00000001800B69A8: mov     rax, [rdi+rbx*8]
 * 00000001800B69AC: mov     ecx, [r15+rax]
 * 00000001800B69B0: cmp     cs:dword_1801CE684, ecx
 * 00000001800B69B6: jle     loc_1800B6A8F
 * 00000001800B69BC: lea     rcx, dword_1801CE684
 * 00000001800B69C3: call    sub_18000D534
 * 00000001800B69C8: cmp     cs:dword_1801CE684, r14d
 * 00000001800B69CF: jnz     loc_1800B6A8F
 * 00000001800B69D5: lea     rax, unk_1801478A0
 * 00000001800B69DC: mov     qword ptr [rbp+8C80h+var_6EB0], rax
 * 00000001800B69E3: lea     rax, unk_1801492F0
 * 00000001800B69EA: mov     qword ptr [rbp+8C80h+var_6EB0+8], rax
 * 00000001800B69F1: mov     dword ptr [rbp+8C80h+var_6EA0], esi
 * 00000001800B69F7: mov     dword ptr [rbp+8C80h+var_6EA0+4], esi
 * 00000001800B69FD: call    sub_1800A8988
 * 00000001800B6A02: mov     r8, rax
 * 00000001800B6A05: mov     r9d, r12d
 * 00000001800B6A08: mov     edx, 16Ah
 * 00000001800B6A0D: lea     rcx, [rbp+8C80h+var_DD0]
 * 00000001800B6A14: call    sub_180075CF8
 * 00000001800B6A19: nop
 * 00000001800B6A1A: mov     r8, rax
 * 00000001800B6A1D: mov     rdx, r13
 * 00000001800B6A20: lea     rcx, [rbp+8C80h+var_DF0]
 * 00000001800B6A27: call    sub_18001C928
 * 00000001800B6A2C: nop
 * 00000001800B6A2D: lea     r8, aVertex; "/Vertex"
 * 00000001800B6A34: mov     rdx, rax
 * 00000001800B6A37: lea     rcx, [rbp+8C80h+var_4B50]
 * 00000001800B6A3E: call    sub_18001C87C
 * 00000001800B6A43: movups  xmm0, [rbp+8C80h+var_6EB0]
 * 00000001800B6A4A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6A4F: movups  xmm1, [rbp+8C80h+var_6EA0]
 * 00000001800B6A56: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6A5B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6A60: mov     rcx, rax
 * 00000001800B6A63: call    sub_180075D94
 * 00000001800B6A68: nop
 * 00000001800B6A69: lea     rcx, [rbp+8C80h+var_DF0]
 * 00000001800B6A70: call    sub_180011E30
 * 00000001800B6A75: nop
 * 00000001800B6A76: lea     rcx, [rbp+8C80h+var_DD0]
 * 00000001800B6A7D: call    sub_180011E30
 * 00000001800B6A82: nop
 * 00000001800B6A83: lea     rcx, dword_1801CE684
 * 00000001800B6A8A: call    sub_18000D4CC
 * 00000001800B6A8F: mov     rax, [rdi+rbx*8]
 * 00000001800B6A93: mov     ecx, [r15+rax]
 * 00000001800B6A97: cmp     cs:dword_1801CE688, ecx
 * 00000001800B6A9D: jle     loc_1800B6B76
 * 00000001800B6AA3: lea     rcx, dword_1801CE688
 * 00000001800B6AAA: call    sub_18000D534
 * 00000001800B6AAF: cmp     cs:dword_1801CE688, r14d
 * 00000001800B6AB6: jnz     loc_1800B6B76
 * 00000001800B6ABC: lea     rax, unk_1801478A0
 * 00000001800B6AC3: mov     qword ptr [rbp+8C80h+var_6E90], rax
 * 00000001800B6ACA: lea     rax, unk_1801492F0
 * 00000001800B6AD1: mov     qword ptr [rbp+8C80h+var_6E90+8], rax
 * 00000001800B6AD8: mov     dword ptr [rbp+8C80h+var_6E80], esi
 * 00000001800B6ADE: mov     dword ptr [rbp+8C80h+var_6E80+4], esi
 * 00000001800B6AE4: call    sub_1800A8988
 * 00000001800B6AE9: mov     r8, rax
 * 00000001800B6AEC: mov     r9d, r12d
 * 00000001800B6AEF: mov     edx, 170h
 * 00000001800B6AF4: lea     rcx, [rbp+8C80h+var_D70]
 * 00000001800B6AFB: call    sub_180075CF8
 * 00000001800B6B00: nop
 * 00000001800B6B01: mov     r8, rax
 * 00000001800B6B04: mov     rdx, r13
 * 00000001800B6B07: lea     rcx, [rbp+8C80h+var_D90]
 * 00000001800B6B0E: call    sub_18001C928
 * 00000001800B6B13: nop
 * 00000001800B6B14: lea     r8, aVertex; "/Vertex"
 * 00000001800B6B1B: mov     rdx, rax
 * 00000001800B6B1E: lea     rcx, [rbp+8C80h+var_4B30]
 * 00000001800B6B25: call    sub_18001C87C
 * 00000001800B6B2A: movups  xmm0, [rbp+8C80h+var_6E90]
 * 00000001800B6B31: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6B36: movups  xmm1, [rbp+8C80h+var_6E80]
 * 00000001800B6B3D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6B42: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6B47: mov     rcx, rax
 * 00000001800B6B4A: call    sub_180075D94
 * 00000001800B6B4F: nop
 * 00000001800B6B50: lea     rcx, [rbp+8C80h+var_D90]
 * 00000001800B6B57: call    sub_180011E30
 * 00000001800B6B5C: nop
 * 00000001800B6B5D: lea     rcx, [rbp+8C80h+var_D70]
 * 00000001800B6B64: call    sub_180011E30
 * 00000001800B6B69: nop
 * 00000001800B6B6A: lea     rcx, dword_1801CE688
 * 00000001800B6B71: call    sub_18000D4CC
 * 00000001800B6B76: mov     rax, [rdi+rbx*8]
 * 00000001800B6B7A: mov     ecx, [r15+rax]
 * 00000001800B6B7E: cmp     cs:dword_1801CE68C, ecx
 * 00000001800B6B84: jle     loc_1800B6C5D
 * 00000001800B6B8A: lea     rcx, dword_1801CE68C
 * 00000001800B6B91: call    sub_18000D534
 * 00000001800B6B96: cmp     cs:dword_1801CE68C, r14d
 * 00000001800B6B9D: jnz     loc_1800B6C5D
 * 00000001800B6BA3: lea     rax, unk_1801478A0
 * 00000001800B6BAA: mov     qword ptr [rbp+8C80h+var_6E70], rax
 * 00000001800B6BB1: lea     rax, unk_1801492F0
 * 00000001800B6BB8: mov     qword ptr [rbp+8C80h+var_6E70+8], rax
 * 00000001800B6BBF: mov     dword ptr [rbp+8C80h+var_6E60], esi
 * 00000001800B6BC5: mov     dword ptr [rbp+8C80h+var_6E60+4], esi
 * 00000001800B6BCB: call    sub_1800A8988
 * 00000001800B6BD0: mov     r8, rax
 * 00000001800B6BD3: mov     r9d, r12d
 * 00000001800B6BD6: mov     edx, 172h
 * 00000001800B6BDB: lea     rcx, [rbp+8C80h+var_D10]
 * 00000001800B6BE2: call    sub_180075CF8
 * 00000001800B6BE7: nop
 * 00000001800B6BE8: mov     r8, rax
 * 00000001800B6BEB: mov     rdx, r13
 * 00000001800B6BEE: lea     rcx, [rbp+8C80h+var_D30]
 * 00000001800B6BF5: call    sub_18001C928
 * 00000001800B6BFA: nop
 * 00000001800B6BFB: lea     r8, aVertex; "/Vertex"
 * 00000001800B6C02: mov     rdx, rax
 * 00000001800B6C05: lea     rcx, [rbp+8C80h+var_4B10]
 * 00000001800B6C0C: call    sub_18001C87C
 * 00000001800B6C11: movups  xmm0, [rbp+8C80h+var_6E70]
 * 00000001800B6C18: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6C1D: movups  xmm1, [rbp+8C80h+var_6E60]
 * 00000001800B6C24: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6C29: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6C2E: mov     rcx, rax
 * 00000001800B6C31: call    sub_180075D94
 * 00000001800B6C36: nop
 * 00000001800B6C37: lea     rcx, [rbp+8C80h+var_D30]
 * 00000001800B6C3E: call    sub_180011E30
 * 00000001800B6C43: nop
 * 00000001800B6C44: lea     rcx, [rbp+8C80h+var_D10]
 * 00000001800B6C4B: call    sub_180011E30
 * 00000001800B6C50: nop
 * 00000001800B6C51: lea     rcx, dword_1801CE68C
 * 00000001800B6C58: call    sub_18000D4CC
 * 00000001800B6C5D: mov     rax, [rdi+rbx*8]
 * 00000001800B6C61: mov     ecx, [r15+rax]
 * 00000001800B6C65: cmp     cs:dword_1801CE690, ecx
 * 00000001800B6C6B: jle     loc_1800B6D44
 * 00000001800B6C71: lea     rcx, dword_1801CE690
 * 00000001800B6C78: call    sub_18000D534
 * 00000001800B6C7D: cmp     cs:dword_1801CE690, r14d
 * 00000001800B6C84: jnz     loc_1800B6D44
 * 00000001800B6C8A: lea     rax, unk_1801478A0
 * 00000001800B6C91: mov     qword ptr [rbp+8C80h+var_6E50], rax
 * 00000001800B6C98: lea     rax, unk_1801492F0
 * 00000001800B6C9F: mov     qword ptr [rbp+8C80h+var_6E50+8], rax
 * 00000001800B6CA6: mov     dword ptr [rbp+8C80h+var_6E40], esi
 * 00000001800B6CAC: mov     dword ptr [rbp+8C80h+var_6E40+4], esi
 * 00000001800B6CB2: call    sub_1800A8988
 * 00000001800B6CB7: mov     r8, rax
 * 00000001800B6CBA: mov     r9d, r12d
 * 00000001800B6CBD: mov     edx, 178h
 * 00000001800B6CC2: lea     rcx, [rbp+8C80h+var_CB0]
 * 00000001800B6CC9: call    sub_180075CF8
 * 00000001800B6CCE: nop
 * 00000001800B6CCF: mov     r8, rax
 * 00000001800B6CD2: mov     rdx, r13
 * 00000001800B6CD5: lea     rcx, [rbp+8C80h+var_CD0]
 * 00000001800B6CDC: call    sub_18001C928
 * 00000001800B6CE1: nop
 * 00000001800B6CE2: lea     r8, aVertex; "/Vertex"
 * 00000001800B6CE9: mov     rdx, rax
 * 00000001800B6CEC: lea     rcx, [rbp+8C80h+var_4AF0]
 * 00000001800B6CF3: call    sub_18001C87C
 * 00000001800B6CF8: movups  xmm0, [rbp+8C80h+var_6E50]
 * 00000001800B6CFF: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6D04: movups  xmm1, [rbp+8C80h+var_6E40]
 * 00000001800B6D0B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6D10: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6D15: mov     rcx, rax
 * 00000001800B6D18: call    sub_180075D94
 * 00000001800B6D1D: nop
 * 00000001800B6D1E: lea     rcx, [rbp+8C80h+var_CD0]
 * 00000001800B6D25: call    sub_180011E30
 * 00000001800B6D2A: nop
 * 00000001800B6D2B: lea     rcx, [rbp+8C80h+var_CB0]
 * 00000001800B6D32: call    sub_180011E30
 * 00000001800B6D37: nop
 * 00000001800B6D38: lea     rcx, dword_1801CE690
 * 00000001800B6D3F: call    sub_18000D4CC
 * 00000001800B6D44: mov     rax, [rdi+rbx*8]
 * 00000001800B6D48: mov     ecx, [r15+rax]
 * 00000001800B6D4C: cmp     cs:dword_1801CE694, ecx
 * 00000001800B6D52: jle     loc_1800B6E2B
 * 00000001800B6D58: lea     rcx, dword_1801CE694
 * 00000001800B6D5F: call    sub_18000D534
 * 00000001800B6D64: cmp     cs:dword_1801CE694, r14d
 * 00000001800B6D6B: jnz     loc_1800B6E2B
 * 00000001800B6D71: lea     rax, unk_1801478A0
 * 00000001800B6D78: mov     qword ptr [rbp+8C80h+var_6E30], rax
 * 00000001800B6D7F: lea     rax, unk_1801492F0
 * 00000001800B6D86: mov     qword ptr [rbp+8C80h+var_6E30+8], rax
 * 00000001800B6D8D: mov     dword ptr [rbp+8C80h+var_6E20], esi
 * 00000001800B6D93: mov     dword ptr [rbp+8C80h+var_6E20+4], esi
 * 00000001800B6D99: call    sub_1800A8988
 * 00000001800B6D9E: mov     r8, rax
 * 00000001800B6DA1: mov     r9d, r12d
 * 00000001800B6DA4: mov     edx, 17Ah
 * 00000001800B6DA9: lea     rcx, [rbp+8C80h+var_C50]
 * 00000001800B6DB0: call    sub_180075CF8
 * 00000001800B6DB5: nop
 * 00000001800B6DB6: mov     r8, rax
 * 00000001800B6DB9: mov     rdx, r13
 * 00000001800B6DBC: lea     rcx, [rbp+8C80h+var_C70]
 * 00000001800B6DC3: call    sub_18001C928
 * 00000001800B6DC8: nop
 * 00000001800B6DC9: lea     r8, aVertex; "/Vertex"
 * 00000001800B6DD0: mov     rdx, rax
 * 00000001800B6DD3: lea     rcx, [rbp+8C80h+var_4AD0]
 * 00000001800B6DDA: call    sub_18001C87C
 * 00000001800B6DDF: movups  xmm0, [rbp+8C80h+var_6E30]
 * 00000001800B6DE6: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6DEB: movups  xmm1, [rbp+8C80h+var_6E20]
 * 00000001800B6DF2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6DF7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6DFC: mov     rcx, rax
 * 00000001800B6DFF: call    sub_180075D94
 * 00000001800B6E04: nop
 * 00000001800B6E05: lea     rcx, [rbp+8C80h+var_C70]
 * 00000001800B6E0C: call    sub_180011E30
 * 00000001800B6E11: nop
 * 00000001800B6E12: lea     rcx, [rbp+8C80h+var_C50]
 * 00000001800B6E19: call    sub_180011E30
 * 00000001800B6E1E: nop
 * 00000001800B6E1F: lea     rcx, dword_1801CE694
 * 00000001800B6E26: call    sub_18000D4CC
 * 00000001800B6E2B: mov     rax, [rdi+rbx*8]
 * 00000001800B6E2F: mov     ecx, [r15+rax]
 * 00000001800B6E33: cmp     cs:dword_1801CE698, ecx
 * 00000001800B6E39: jle     loc_1800B6F12
 * 00000001800B6E3F: lea     rcx, dword_1801CE698
 * 00000001800B6E46: call    sub_18000D534
 * 00000001800B6E4B: cmp     cs:dword_1801CE698, r14d
 * 00000001800B6E52: jnz     loc_1800B6F12
 * 00000001800B6E58: lea     rax, unk_1801492F0
 * 00000001800B6E5F: mov     qword ptr [rbp+8C80h+var_6E10], rax
 * 00000001800B6E66: lea     rax, unk_18014A340
 * 00000001800B6E6D: mov     qword ptr [rbp+8C80h+var_6E10+8], rax
 * 00000001800B6E74: mov     dword ptr [rbp+8C80h+var_6E00], esi
 * 00000001800B6E7A: mov     dword ptr [rbp+8C80h+var_6E00+4], esi
 * 00000001800B6E80: call    sub_1800A8988
 * 00000001800B6E85: mov     r8, rax
 * 00000001800B6E88: mov     r9d, r12d
 * 00000001800B6E8B: mov     edx, 180h
 * 00000001800B6E90: lea     rcx, [rbp+8C80h+var_BF0]
 * 00000001800B6E97: call    sub_180075CF8
 * 00000001800B6E9C: nop
 * 00000001800B6E9D: mov     r8, rax
 * 00000001800B6EA0: mov     rdx, r13
 * 00000001800B6EA3: lea     rcx, [rbp+8C80h+var_C10]
 * 00000001800B6EAA: call    sub_18001C928
 * 00000001800B6EAF: nop
 * 00000001800B6EB0: lea     r8, aVertex; "/Vertex"
 * 00000001800B6EB7: mov     rdx, rax
 * 00000001800B6EBA: lea     rcx, [rbp+8C80h+var_4AB0]
 * 00000001800B6EC1: call    sub_18001C87C
 * 00000001800B6EC6: movups  xmm0, [rbp+8C80h+var_6E10]
 * 00000001800B6ECD: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6ED2: movups  xmm1, [rbp+8C80h+var_6E00]
 * 00000001800B6ED9: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6EDE: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6EE3: mov     rcx, rax
 * 00000001800B6EE6: call    sub_180075D94
 * 00000001800B6EEB: nop
 * 00000001800B6EEC: lea     rcx, [rbp+8C80h+var_C10]
 * 00000001800B6EF3: call    sub_180011E30
 * 00000001800B6EF8: nop
 * 00000001800B6EF9: lea     rcx, [rbp+8C80h+var_BF0]
 * 00000001800B6F00: call    sub_180011E30
 * 00000001800B6F05: nop
 * 00000001800B6F06: lea     rcx, dword_1801CE698
 * 00000001800B6F0D: call    sub_18000D4CC
 * 00000001800B6F12: mov     rax, [rdi+rbx*8]
 * 00000001800B6F16: mov     ecx, [r15+rax]
 * 00000001800B6F1A: cmp     cs:dword_1801CE69C, ecx
 * 00000001800B6F20: jle     loc_1800B6FF9
 * 00000001800B6F26: lea     rcx, dword_1801CE69C
 * 00000001800B6F2D: call    sub_18000D534
 * 00000001800B6F32: cmp     cs:dword_1801CE69C, r14d
 * 00000001800B6F39: jnz     loc_1800B6FF9
 * 00000001800B6F3F: lea     rax, unk_1801492F0
 * 00000001800B6F46: mov     qword ptr [rbp+8C80h+var_6DF0], rax
 * 00000001800B6F4D: lea     rax, unk_18014A340
 * 00000001800B6F54: mov     qword ptr [rbp+8C80h+var_6DF0+8], rax
 * 00000001800B6F5B: mov     dword ptr [rbp+8C80h+var_6DE0], esi
 * 00000001800B6F61: mov     dword ptr [rbp+8C80h+var_6DE0+4], esi
 * 00000001800B6F67: call    sub_1800A8988
 * 00000001800B6F6C: mov     r8, rax
 * 00000001800B6F6F: mov     r9d, r12d
 * 00000001800B6F72: mov     edx, 182h
 * 00000001800B6F77: lea     rcx, [rbp+8C80h+var_B90]
 * 00000001800B6F7E: call    sub_180075CF8
 * 00000001800B6F83: nop
 * 00000001800B6F84: mov     r8, rax
 * 00000001800B6F87: mov     rdx, r13
 * 00000001800B6F8A: lea     rcx, [rbp+8C80h+var_BB0]
 * 00000001800B6F91: call    sub_18001C928
 * 00000001800B6F96: nop
 * 00000001800B6F97: lea     r8, aVertex; "/Vertex"
 * 00000001800B6F9E: mov     rdx, rax
 * 00000001800B6FA1: lea     rcx, [rbp+8C80h+var_4A90]
 * 00000001800B6FA8: call    sub_18001C87C
 * 00000001800B6FAD: movups  xmm0, [rbp+8C80h+var_6DF0]
 * 00000001800B6FB4: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B6FB9: movups  xmm1, [rbp+8C80h+var_6DE0]
 * 00000001800B6FC0: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B6FC5: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B6FCA: mov     rcx, rax
 * 00000001800B6FCD: call    sub_180075D94
 * 00000001800B6FD2: nop
 * 00000001800B6FD3: lea     rcx, [rbp+8C80h+var_BB0]
 * 00000001800B6FDA: call    sub_180011E30
 * 00000001800B6FDF: nop
 * 00000001800B6FE0: lea     rcx, [rbp+8C80h+var_B90]
 * 00000001800B6FE7: call    sub_180011E30
 * 00000001800B6FEC: nop
 * 00000001800B6FED: lea     rcx, dword_1801CE69C
 * 00000001800B6FF4: call    sub_18000D4CC
 * 00000001800B6FF9: mov     rax, [rdi+rbx*8]
 * 00000001800B6FFD: mov     ecx, [r15+rax]
 * 00000001800B7001: cmp     cs:dword_1801CE6A0, ecx
 * 00000001800B7007: jle     loc_1800B70E0
 * 00000001800B700D: lea     rcx, dword_1801CE6A0
 * 00000001800B7014: call    sub_18000D534
 * 00000001800B7019: cmp     cs:dword_1801CE6A0, r14d
 * 00000001800B7020: jnz     loc_1800B70E0
 * 00000001800B7026: lea     rax, unk_1801492F0
 * 00000001800B702D: mov     qword ptr [rbp+8C80h+var_6DD0], rax
 * 00000001800B7034: lea     rax, unk_18014A340
 * 00000001800B703B: mov     qword ptr [rbp+8C80h+var_6DD0+8], rax
 * 00000001800B7042: mov     dword ptr [rbp+8C80h+var_6DC0], esi
 * 00000001800B7048: mov     dword ptr [rbp+8C80h+var_6DC0+4], esi
 * 00000001800B704E: call    sub_1800A8988
 * 00000001800B7053: mov     r8, rax
 * 00000001800B7056: mov     r9d, r12d
 * 00000001800B7059: mov     edx, 188h
 * 00000001800B705E: lea     rcx, [rbp+8C80h+var_B30]
 * 00000001800B7065: call    sub_180075CF8
 * 00000001800B706A: nop
 * 00000001800B706B: mov     r8, rax
 * 00000001800B706E: mov     rdx, r13
 * 00000001800B7071: lea     rcx, [rbp+8C80h+var_B50]
 * 00000001800B7078: call    sub_18001C928
 * 00000001800B707D: nop
 * 00000001800B707E: lea     r8, aVertex; "/Vertex"
 * 00000001800B7085: mov     rdx, rax
 * 00000001800B7088: lea     rcx, [rbp+8C80h+var_4A70]
 * 00000001800B708F: call    sub_18001C87C
 * 00000001800B7094: movups  xmm0, [rbp+8C80h+var_6DD0]
 * 00000001800B709B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B70A0: movups  xmm1, [rbp+8C80h+var_6DC0]
 * 00000001800B70A7: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B70AC: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B70B1: mov     rcx, rax
 * 00000001800B70B4: call    sub_180075D94
 * 00000001800B70B9: nop
 * 00000001800B70BA: lea     rcx, [rbp+8C80h+var_B50]
 * 00000001800B70C1: call    sub_180011E30
 * 00000001800B70C6: nop
 * 00000001800B70C7: lea     rcx, [rbp+8C80h+var_B30]
 * 00000001800B70CE: call    sub_180011E30
 * 00000001800B70D3: nop
 * 00000001800B70D4: lea     rcx, dword_1801CE6A0
 * 00000001800B70DB: call    sub_18000D4CC
 * 00000001800B70E0: mov     rax, [rdi+rbx*8]
 * 00000001800B70E4: mov     ecx, [r15+rax]
 * 00000001800B70E8: cmp     cs:dword_1801CE6A4, ecx
 * 00000001800B70EE: jle     loc_1800B71C7
 * 00000001800B70F4: lea     rcx, dword_1801CE6A4
 * 00000001800B70FB: call    sub_18000D534
 * 00000001800B7100: cmp     cs:dword_1801CE6A4, r14d
 * 00000001800B7107: jnz     loc_1800B71C7
 * 00000001800B710D: lea     rax, unk_1801492F0
 * 00000001800B7114: mov     qword ptr [rbp+8C80h+var_6DB0], rax
 * 00000001800B711B: lea     rax, unk_18014A340
 * 00000001800B7122: mov     qword ptr [rbp+8C80h+var_6DB0+8], rax
 * 00000001800B7129: mov     dword ptr [rbp+8C80h+var_6DA0], esi
 * 00000001800B712F: mov     dword ptr [rbp+8C80h+var_6DA0+4], esi
 * 00000001800B7135: call    sub_1800A8988
 * 00000001800B713A: mov     r8, rax
 * 00000001800B713D: mov     r9d, r12d
 * 00000001800B7140: mov     edx, 18Ah
 * 00000001800B7145: lea     rcx, [rbp+8C80h+var_AD0]
 * 00000001800B714C: call    sub_180075CF8
 * 00000001800B7151: nop
 * 00000001800B7152: mov     r8, rax
 * 00000001800B7155: mov     rdx, r13
 * 00000001800B7158: lea     rcx, [rbp+8C80h+var_AF0]
 * 00000001800B715F: call    sub_18001C928
 * 00000001800B7164: nop
 * 00000001800B7165: lea     r8, aVertex; "/Vertex"
 * 00000001800B716C: mov     rdx, rax
 * 00000001800B716F: lea     rcx, [rbp+8C80h+var_4A50]
 * 00000001800B7176: call    sub_18001C87C
 * 00000001800B717B: movups  xmm0, [rbp+8C80h+var_6DB0]
 * 00000001800B7182: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7187: movups  xmm1, [rbp+8C80h+var_6DA0]
 * 00000001800B718E: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7193: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7198: mov     rcx, rax
 * 00000001800B719B: call    sub_180075D94
 * 00000001800B71A0: nop
 * 00000001800B71A1: lea     rcx, [rbp+8C80h+var_AF0]
 * 00000001800B71A8: call    sub_180011E30
 * 00000001800B71AD: nop
 * 00000001800B71AE: lea     rcx, [rbp+8C80h+var_AD0]
 * 00000001800B71B5: call    sub_180011E30
 * 00000001800B71BA: nop
 * 00000001800B71BB: lea     rcx, dword_1801CE6A4
 * 00000001800B71C2: call    sub_18000D4CC
 * 00000001800B71C7: mov     rax, [rdi+rbx*8]
 * 00000001800B71CB: mov     ecx, [r15+rax]
 * 00000001800B71CF: cmp     cs:dword_1801CE6A8, ecx
 * 00000001800B71D5: jle     loc_1800B72AE
 * 00000001800B71DB: lea     rcx, dword_1801CE6A8
 * 00000001800B71E2: call    sub_18000D534
 * 00000001800B71E7: cmp     cs:dword_1801CE6A8, r14d
 * 00000001800B71EE: jnz     loc_1800B72AE
 * 00000001800B71F4: lea     rax, unk_1801492F0
 * 00000001800B71FB: mov     qword ptr [rbp+8C80h+var_6D90], rax
 * 00000001800B7202: lea     rax, unk_18014A340
 * 00000001800B7209: mov     qword ptr [rbp+8C80h+var_6D90+8], rax
 * 00000001800B7210: mov     dword ptr [rbp+8C80h+var_6D80], esi
 * 00000001800B7216: mov     dword ptr [rbp+8C80h+var_6D80+4], esi
 * 00000001800B721C: call    sub_1800A8988
 * 00000001800B7221: mov     r8, rax
 * 00000001800B7224: mov     r9d, r12d
 * 00000001800B7227: mov     edx, 190h
 * 00000001800B722C: lea     rcx, [rbp+8C80h+var_A70]
 * 00000001800B7233: call    sub_180075CF8
 * 00000001800B7238: nop
 * 00000001800B7239: mov     r8, rax
 * 00000001800B723C: mov     rdx, r13
 * 00000001800B723F: lea     rcx, [rbp+8C80h+var_A90]
 * 00000001800B7246: call    sub_18001C928
 * 00000001800B724B: nop
 * 00000001800B724C: lea     r8, aVertex; "/Vertex"
 * 00000001800B7253: mov     rdx, rax
 * 00000001800B7256: lea     rcx, [rbp+8C80h+var_4A30]
 * 00000001800B725D: call    sub_18001C87C
 * 00000001800B7262: movups  xmm0, [rbp+8C80h+var_6D90]
 * 00000001800B7269: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B726E: movups  xmm1, [rbp+8C80h+var_6D80]
 * 00000001800B7275: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B727A: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B727F: mov     rcx, rax
 * 00000001800B7282: call    sub_180075D94
 * 00000001800B7287: nop
 * 00000001800B7288: lea     rcx, [rbp+8C80h+var_A90]
 * 00000001800B728F: call    sub_180011E30
 * 00000001800B7294: nop
 * 00000001800B7295: lea     rcx, [rbp+8C80h+var_A70]
 * 00000001800B729C: call    sub_180011E30
 * 00000001800B72A1: nop
 * 00000001800B72A2: lea     rcx, dword_1801CE6A8
 * 00000001800B72A9: call    sub_18000D4CC
 * 00000001800B72AE: mov     rax, [rdi+rbx*8]
 * 00000001800B72B2: mov     ecx, [r15+rax]
 * 00000001800B72B6: cmp     cs:dword_1801CE6AC, ecx
 * 00000001800B72BC: jle     loc_1800B7395
 * 00000001800B72C2: lea     rcx, dword_1801CE6AC
 * 00000001800B72C9: call    sub_18000D534
 * 00000001800B72CE: cmp     cs:dword_1801CE6AC, r14d
 * 00000001800B72D5: jnz     loc_1800B7395
 * 00000001800B72DB: lea     rax, unk_1801492F0
 * 00000001800B72E2: mov     qword ptr [rbp+8C80h+var_6D70], rax
 * 00000001800B72E9: lea     rax, unk_18014A340
 * 00000001800B72F0: mov     qword ptr [rbp+8C80h+var_6D70+8], rax
 * 00000001800B72F7: mov     dword ptr [rbp+8C80h+var_6D60], esi
 * 00000001800B72FD: mov     dword ptr [rbp+8C80h+var_6D60+4], esi
 * 00000001800B7303: call    sub_1800A8988
 * 00000001800B7308: mov     r8, rax
 * 00000001800B730B: mov     r9d, r12d
 * 00000001800B730E: mov     edx, 192h
 * 00000001800B7313: lea     rcx, [rbp+8C80h+var_A10]
 * 00000001800B731A: call    sub_180075CF8
 * 00000001800B731F: nop
 * 00000001800B7320: mov     r8, rax
 * 00000001800B7323: mov     rdx, r13
 * 00000001800B7326: lea     rcx, [rbp+8C80h+var_A30]
 * 00000001800B732D: call    sub_18001C928
 * 00000001800B7332: nop
 * 00000001800B7333: lea     r8, aVertex; "/Vertex"
 * 00000001800B733A: mov     rdx, rax
 * 00000001800B733D: lea     rcx, [rbp+8C80h+var_4A10]
 * 00000001800B7344: call    sub_18001C87C
 * 00000001800B7349: movups  xmm0, [rbp+8C80h+var_6D70]
 * 00000001800B7350: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7355: movups  xmm1, [rbp+8C80h+var_6D60]
 * 00000001800B735C: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7361: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7366: mov     rcx, rax
 * 00000001800B7369: call    sub_180075D94
 * 00000001800B736E: nop
 * 00000001800B736F: lea     rcx, [rbp+8C80h+var_A30]
 * 00000001800B7376: call    sub_180011E30
 * 00000001800B737B: nop
 * 00000001800B737C: lea     rcx, [rbp+8C80h+var_A10]
 * 00000001800B7383: call    sub_180011E30
 * 00000001800B7388: nop
 * 00000001800B7389: lea     rcx, dword_1801CE6AC
 * 00000001800B7390: call    sub_18000D4CC
 * 00000001800B7395: mov     rax, [rdi+rbx*8]
 * 00000001800B7399: mov     ecx, [r15+rax]
 * 00000001800B739D: cmp     cs:dword_1801CE6B0, ecx
 * 00000001800B73A3: jle     loc_1800B747C
 * 00000001800B73A9: lea     rcx, dword_1801CE6B0
 * 00000001800B73B0: call    sub_18000D534
 * 00000001800B73B5: cmp     cs:dword_1801CE6B0, r14d
 * 00000001800B73BC: jnz     loc_1800B747C
 * 00000001800B73C2: lea     rax, unk_1801492F0
 * 00000001800B73C9: mov     qword ptr [rbp+8C80h+var_6D50], rax
 * 00000001800B73D0: lea     rax, unk_18014A340
 * 00000001800B73D7: mov     qword ptr [rbp+8C80h+var_6D50+8], rax
 * 00000001800B73DE: mov     dword ptr [rbp+8C80h+var_6D40], esi
 * 00000001800B73E4: mov     dword ptr [rbp+8C80h+var_6D40+4], esi
 * 00000001800B73EA: call    sub_1800A8988
 * 00000001800B73EF: mov     r8, rax
 * 00000001800B73F2: mov     r9d, r12d
 * 00000001800B73F5: mov     edx, 198h
 * 00000001800B73FA: lea     rcx, [rbp+8C80h+var_9B0]
 * 00000001800B7401: call    sub_180075CF8
 * 00000001800B7406: nop
 * 00000001800B7407: mov     r8, rax
 * 00000001800B740A: mov     rdx, r13
 * 00000001800B740D: lea     rcx, [rbp+8C80h+var_9D0]
 * 00000001800B7414: call    sub_18001C928
 * 00000001800B7419: nop
 * 00000001800B741A: lea     r8, aVertex; "/Vertex"
 * 00000001800B7421: mov     rdx, rax
 * 00000001800B7424: lea     rcx, [rbp+8C80h+var_49F0]
 * 00000001800B742B: call    sub_18001C87C
 * 00000001800B7430: movups  xmm0, [rbp+8C80h+var_6D50]
 * 00000001800B7437: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B743C: movups  xmm1, [rbp+8C80h+var_6D40]
 * 00000001800B7443: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7448: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B744D: mov     rcx, rax
 * 00000001800B7450: call    sub_180075D94
 * 00000001800B7455: nop
 * 00000001800B7456: lea     rcx, [rbp+8C80h+var_9D0]
 * 00000001800B745D: call    sub_180011E30
 * 00000001800B7462: nop
 * 00000001800B7463: lea     rcx, [rbp+8C80h+var_9B0]
 * 00000001800B746A: call    sub_180011E30
 * 00000001800B746F: nop
 * 00000001800B7470: lea     rcx, dword_1801CE6B0
 * 00000001800B7477: call    sub_18000D4CC
 * 00000001800B747C: mov     rax, [rdi+rbx*8]
 * 00000001800B7480: mov     ecx, [r15+rax]
 * 00000001800B7484: cmp     cs:dword_1801CE6B4, ecx
 * 00000001800B748A: jle     loc_1800B7563
 * 00000001800B7490: lea     rcx, dword_1801CE6B4
 * 00000001800B7497: call    sub_18000D534
 * 00000001800B749C: cmp     cs:dword_1801CE6B4, r14d
 * 00000001800B74A3: jnz     loc_1800B7563
 * 00000001800B74A9: lea     rax, unk_1801492F0
 * 00000001800B74B0: mov     qword ptr [rbp+8C80h+var_6D30], rax
 * 00000001800B74B7: lea     rax, unk_18014A340
 * 00000001800B74BE: mov     qword ptr [rbp+8C80h+var_6D30+8], rax
 * 00000001800B74C5: mov     dword ptr [rbp+8C80h+var_6D20], esi
 * 00000001800B74CB: mov     dword ptr [rbp+8C80h+var_6D20+4], esi
 * 00000001800B74D1: call    sub_1800A8988
 * 00000001800B74D6: mov     r8, rax
 * 00000001800B74D9: mov     r9d, r12d
 * 00000001800B74DC: mov     edx, 19Ah
 * 00000001800B74E1: lea     rcx, [rbp+8C80h+var_950]
 * 00000001800B74E8: call    sub_180075CF8
 * 00000001800B74ED: nop
 * 00000001800B74EE: mov     r8, rax
 * 00000001800B74F1: mov     rdx, r13
 * 00000001800B74F4: lea     rcx, [rbp+8C80h+var_970]
 * 00000001800B74FB: call    sub_18001C928
 * 00000001800B7500: nop
 * 00000001800B7501: lea     r8, aVertex; "/Vertex"
 * 00000001800B7508: mov     rdx, rax
 * 00000001800B750B: lea     rcx, [rbp+8C80h+var_49D0]
 * 00000001800B7512: call    sub_18001C87C
 * 00000001800B7517: movups  xmm0, [rbp+8C80h+var_6D30]
 * 00000001800B751E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7523: movups  xmm1, [rbp+8C80h+var_6D20]
 * 00000001800B752A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B752F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7534: mov     rcx, rax
 * 00000001800B7537: call    sub_180075D94
 * 00000001800B753C: nop
 * 00000001800B753D: lea     rcx, [rbp+8C80h+var_970]
 * 00000001800B7544: call    sub_180011E30
 * 00000001800B7549: nop
 * 00000001800B754A: lea     rcx, [rbp+8C80h+var_950]
 * 00000001800B7551: call    sub_180011E30
 * 00000001800B7556: nop
 * 00000001800B7557: lea     rcx, dword_1801CE6B4
 * 00000001800B755E: call    sub_18000D4CC
 * 00000001800B7563: mov     rax, [rdi+rbx*8]
 * 00000001800B7567: mov     ecx, [r15+rax]
 * 00000001800B756B: cmp     cs:dword_1801CE6B8, ecx
 * 00000001800B7571: jle     loc_1800B764A
 * 00000001800B7577: lea     rcx, dword_1801CE6B8
 * 00000001800B757E: call    sub_18000D534
 * 00000001800B7583: cmp     cs:dword_1801CE6B8, r14d
 * 00000001800B758A: jnz     loc_1800B764A
 * 00000001800B7590: lea     rax, unk_1801478A0
 * 00000001800B7597: mov     qword ptr [rbp+8C80h+var_6D10], rax
 * 00000001800B759E: lea     rax, unk_1801492F0
 * 00000001800B75A5: mov     qword ptr [rbp+8C80h+var_6D10+8], rax
 * 00000001800B75AC: mov     dword ptr [rbp+8C80h+var_6D00], esi
 * 00000001800B75B2: mov     dword ptr [rbp+8C80h+var_6D00+4], esi
 * 00000001800B75B8: call    sub_1800A8988
 * 00000001800B75BD: mov     r8, rax
 * 00000001800B75C0: mov     r9d, r12d
 * 00000001800B75C3: mov     edx, 1A0h
 * 00000001800B75C8: lea     rcx, [rbp+8C80h+var_8F0]
 * 00000001800B75CF: call    sub_180075CF8
 * 00000001800B75D4: nop
 * 00000001800B75D5: mov     r8, rax
 * 00000001800B75D8: mov     rdx, r13
 * 00000001800B75DB: lea     rcx, [rbp+8C80h+var_910]
 * 00000001800B75E2: call    sub_18001C928
 * 00000001800B75E7: nop
 * 00000001800B75E8: lea     r8, aVertex; "/Vertex"
 * 00000001800B75EF: mov     rdx, rax
 * 00000001800B75F2: lea     rcx, [rbp+8C80h+var_49B0]
 * 00000001800B75F9: call    sub_18001C87C
 * 00000001800B75FE: movups  xmm0, [rbp+8C80h+var_6D10]
 * 00000001800B7605: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B760A: movups  xmm1, [rbp+8C80h+var_6D00]
 * 00000001800B7611: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7616: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B761B: mov     rcx, rax
 * 00000001800B761E: call    sub_180075D94
 * 00000001800B7623: nop
 * 00000001800B7624: lea     rcx, [rbp+8C80h+var_910]
 * 00000001800B762B: call    sub_180011E30
 * 00000001800B7630: nop
 * 00000001800B7631: lea     rcx, [rbp+8C80h+var_8F0]
 * 00000001800B7638: call    sub_180011E30
 * 00000001800B763D: nop
 * 00000001800B763E: lea     rcx, dword_1801CE6B8
 * 00000001800B7645: call    sub_18000D4CC
 * 00000001800B764A: mov     rax, [rdi+rbx*8]
 * 00000001800B764E: mov     ecx, [r15+rax]
 * 00000001800B7652: cmp     cs:dword_1801CE6BC, ecx
 * 00000001800B7658: jle     loc_1800B7731
 * 00000001800B765E: lea     rcx, dword_1801CE6BC
 * 00000001800B7665: call    sub_18000D534
 * 00000001800B766A: cmp     cs:dword_1801CE6BC, r14d
 * 00000001800B7671: jnz     loc_1800B7731
 * 00000001800B7677: lea     rax, unk_1801478A0
 * 00000001800B767E: mov     qword ptr [rbp+8C80h+var_6CF0], rax
 * 00000001800B7685: lea     rax, unk_1801492F0
 * 00000001800B768C: mov     qword ptr [rbp+8C80h+var_6CF0+8], rax
 * 00000001800B7693: mov     dword ptr [rbp+8C80h+var_6CE0], esi
 * 00000001800B7699: mov     dword ptr [rbp+8C80h+var_6CE0+4], esi
 * 00000001800B769F: call    sub_1800A8988
 * 00000001800B76A4: mov     r8, rax
 * 00000001800B76A7: mov     r9d, r12d
 * 00000001800B76AA: mov     edx, 1A2h
 * 00000001800B76AF: lea     rcx, [rbp+8C80h+var_890]
 * 00000001800B76B6: call    sub_180075CF8
 * 00000001800B76BB: nop
 * 00000001800B76BC: mov     r8, rax
 * 00000001800B76BF: mov     rdx, r13
 * 00000001800B76C2: lea     rcx, [rbp+8C80h+var_8B0]
 * 00000001800B76C9: call    sub_18001C928
 * 00000001800B76CE: nop
 * 00000001800B76CF: lea     r8, aVertex; "/Vertex"
 * 00000001800B76D6: mov     rdx, rax
 * 00000001800B76D9: lea     rcx, [rbp+8C80h+var_4990]
 * 00000001800B76E0: call    sub_18001C87C
 * 00000001800B76E5: movups  xmm0, [rbp+8C80h+var_6CF0]
 * 00000001800B76EC: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B76F1: movups  xmm1, [rbp+8C80h+var_6CE0]
 * 00000001800B76F8: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B76FD: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7702: mov     rcx, rax
 * 00000001800B7705: call    sub_180075D94
 * 00000001800B770A: nop
 * 00000001800B770B: lea     rcx, [rbp+8C80h+var_8B0]
 * 00000001800B7712: call    sub_180011E30
 * 00000001800B7717: nop
 * 00000001800B7718: lea     rcx, [rbp+8C80h+var_890]
 * 00000001800B771F: call    sub_180011E30
 * 00000001800B7724: nop
 * 00000001800B7725: lea     rcx, dword_1801CE6BC
 * 00000001800B772C: call    sub_18000D4CC
 * 00000001800B7731: mov     rax, [rdi+rbx*8]
 * 00000001800B7735: mov     ecx, [r15+rax]
 * 00000001800B7739: cmp     cs:dword_1801CE6C0, ecx
 * 00000001800B773F: jle     loc_1800B7818
 * 00000001800B7745: lea     rcx, dword_1801CE6C0
 * 00000001800B774C: call    sub_18000D534
 * 00000001800B7751: cmp     cs:dword_1801CE6C0, r14d
 * 00000001800B7758: jnz     loc_1800B7818
 * 00000001800B775E: lea     rax, unk_1801478A0
 * 00000001800B7765: mov     qword ptr [rbp+8C80h+var_6CD0], rax
 * 00000001800B776C: lea     rax, unk_1801492F0
 * 00000001800B7773: mov     qword ptr [rbp+8C80h+var_6CD0+8], rax
 * 00000001800B777A: mov     dword ptr [rbp+8C80h+var_6CC0], esi
 * 00000001800B7780: mov     dword ptr [rbp+8C80h+var_6CC0+4], esi
 * 00000001800B7786: call    sub_1800A8988
 * 00000001800B778B: mov     r8, rax
 * 00000001800B778E: mov     r9d, r12d
 * 00000001800B7791: mov     edx, 1A8h
 * 00000001800B7796: lea     rcx, [rbp+8C80h+var_830]
 * 00000001800B779D: call    sub_180075CF8
 * 00000001800B77A2: nop
 * 00000001800B77A3: mov     r8, rax
 * 00000001800B77A6: mov     rdx, r13
 * 00000001800B77A9: lea     rcx, [rbp+8C80h+var_850]
 * 00000001800B77B0: call    sub_18001C928
 * 00000001800B77B5: nop
 * 00000001800B77B6: lea     r8, aVertex; "/Vertex"
 * 00000001800B77BD: mov     rdx, rax
 * 00000001800B77C0: lea     rcx, [rbp+8C80h+var_4970]
 * 00000001800B77C7: call    sub_18001C87C
 * 00000001800B77CC: movups  xmm0, [rbp+8C80h+var_6CD0]
 * 00000001800B77D3: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B77D8: movups  xmm1, [rbp+8C80h+var_6CC0]
 * 00000001800B77DF: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B77E4: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B77E9: mov     rcx, rax
 * 00000001800B77EC: call    sub_180075D94
 * 00000001800B77F1: nop
 * 00000001800B77F2: lea     rcx, [rbp+8C80h+var_850]
 * 00000001800B77F9: call    sub_180011E30
 * 00000001800B77FE: nop
 * 00000001800B77FF: lea     rcx, [rbp+8C80h+var_830]
 * 00000001800B7806: call    sub_180011E30
 * 00000001800B780B: nop
 * 00000001800B780C: lea     rcx, dword_1801CE6C0
 * 00000001800B7813: call    sub_18000D4CC
 * 00000001800B7818: mov     rax, [rdi+rbx*8]
 * 00000001800B781C: mov     ecx, [r15+rax]
 * 00000001800B7820: cmp     cs:dword_1801CE6C4, ecx
 * 00000001800B7826: jle     loc_1800B78FF
 * 00000001800B782C: lea     rcx, dword_1801CE6C4
 * 00000001800B7833: call    sub_18000D534
 * 00000001800B7838: cmp     cs:dword_1801CE6C4, r14d
 * 00000001800B783F: jnz     loc_1800B78FF
 * 00000001800B7845: lea     rax, unk_1801478A0
 * 00000001800B784C: mov     qword ptr [rbp+8C80h+var_6CB0], rax
 * 00000001800B7853: lea     rax, unk_1801492F0
 * 00000001800B785A: mov     qword ptr [rbp+8C80h+var_6CB0+8], rax
 * 00000001800B7861: mov     dword ptr [rbp+8C80h+var_6CA0], esi
 * 00000001800B7867: mov     dword ptr [rbp+8C80h+var_6CA0+4], esi
 * 00000001800B786D: call    sub_1800A8988
 * 00000001800B7872: mov     r8, rax
 * 00000001800B7875: mov     r9d, r12d
 * 00000001800B7878: mov     edx, 1AAh
 * 00000001800B787D: lea     rcx, [rbp+8C80h+var_7D0]
 * 00000001800B7884: call    sub_180075CF8
 * 00000001800B7889: nop
 * 00000001800B788A: mov     r8, rax
 * 00000001800B788D: mov     rdx, r13
 * 00000001800B7890: lea     rcx, [rbp+8C80h+var_7F0]
 * 00000001800B7897: call    sub_18001C928
 * 00000001800B789C: nop
 * 00000001800B789D: lea     r8, aVertex; "/Vertex"
 * 00000001800B78A4: mov     rdx, rax
 * 00000001800B78A7: lea     rcx, [rbp+8C80h+var_4950]
 * 00000001800B78AE: call    sub_18001C87C
 * 00000001800B78B3: movups  xmm0, [rbp+8C80h+var_6CB0]
 * 00000001800B78BA: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B78BF: movups  xmm1, [rbp+8C80h+var_6CA0]
 * 00000001800B78C6: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B78CB: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B78D0: mov     rcx, rax
 * 00000001800B78D3: call    sub_180075D94
 * 00000001800B78D8: nop
 * 00000001800B78D9: lea     rcx, [rbp+8C80h+var_7F0]
 * 00000001800B78E0: call    sub_180011E30
 * 00000001800B78E5: nop
 * 00000001800B78E6: lea     rcx, [rbp+8C80h+var_7D0]
 * 00000001800B78ED: call    sub_180011E30
 * 00000001800B78F2: nop
 * 00000001800B78F3: lea     rcx, dword_1801CE6C4
 * 00000001800B78FA: call    sub_18000D4CC
 * 00000001800B78FF: mov     rax, [rdi+rbx*8]
 * 00000001800B7903: mov     ecx, [r15+rax]
 * 00000001800B7907: cmp     cs:dword_1801CE6C8, ecx
 * 00000001800B790D: jle     loc_1800B79E6
 * 00000001800B7913: lea     rcx, dword_1801CE6C8
 * 00000001800B791A: call    sub_18000D534
 * 00000001800B791F: cmp     cs:dword_1801CE6C8, r14d
 * 00000001800B7926: jnz     loc_1800B79E6
 * 00000001800B792C: lea     rax, unk_1801478A0
 * 00000001800B7933: mov     qword ptr [rbp+8C80h+var_6C90], rax
 * 00000001800B793A: lea     rax, unk_1801492F0
 * 00000001800B7941: mov     qword ptr [rbp+8C80h+var_6C90+8], rax
 * 00000001800B7948: mov     dword ptr [rbp+8C80h+var_6C80], esi
 * 00000001800B794E: mov     dword ptr [rbp+8C80h+var_6C80+4], esi
 * 00000001800B7954: call    sub_1800A8988
 * 00000001800B7959: mov     r8, rax
 * 00000001800B795C: mov     r9d, r12d
 * 00000001800B795F: mov     edx, 1B0h
 * 00000001800B7964: lea     rcx, [rbp+8C80h+var_770]
 * 00000001800B796B: call    sub_180075CF8
 * 00000001800B7970: nop
 * 00000001800B7971: mov     r8, rax
 * 00000001800B7974: mov     rdx, r13
 * 00000001800B7977: lea     rcx, [rbp+8C80h+var_790]
 * 00000001800B797E: call    sub_18001C928
 * 00000001800B7983: nop
 * 00000001800B7984: lea     r8, aVertex; "/Vertex"
 * 00000001800B798B: mov     rdx, rax
 * 00000001800B798E: lea     rcx, [rbp+8C80h+var_4930]
 * 00000001800B7995: call    sub_18001C87C
 * 00000001800B799A: movups  xmm0, [rbp+8C80h+var_6C90]
 * 00000001800B79A1: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B79A6: movups  xmm1, [rbp+8C80h+var_6C80]
 * 00000001800B79AD: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B79B2: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B79B7: mov     rcx, rax
 * 00000001800B79BA: call    sub_180075D94
 * 00000001800B79BF: nop
 * 00000001800B79C0: lea     rcx, [rbp+8C80h+var_790]
 * 00000001800B79C7: call    sub_180011E30
 * 00000001800B79CC: nop
 * 00000001800B79CD: lea     rcx, [rbp+8C80h+var_770]
 * 00000001800B79D4: call    sub_180011E30
 * 00000001800B79D9: nop
 * 00000001800B79DA: lea     rcx, dword_1801CE6C8
 * 00000001800B79E1: call    sub_18000D4CC
 * 00000001800B79E6: mov     rax, [rdi+rbx*8]
 * 00000001800B79EA: mov     ecx, [r15+rax]
 * 00000001800B79EE: cmp     cs:dword_1801CE6CC, ecx
 * 00000001800B79F4: jle     loc_1800B7ACD
 * 00000001800B79FA: lea     rcx, dword_1801CE6CC
 * 00000001800B7A01: call    sub_18000D534
 * 00000001800B7A06: cmp     cs:dword_1801CE6CC, r14d
 * 00000001800B7A0D: jnz     loc_1800B7ACD
 * 00000001800B7A13: lea     rax, unk_1801478A0
 * 00000001800B7A1A: mov     qword ptr [rbp+8C80h+var_6C70], rax
 * 00000001800B7A21: lea     rax, unk_1801492F0
 * 00000001800B7A28: mov     qword ptr [rbp+8C80h+var_6C70+8], rax
 * 00000001800B7A2F: mov     dword ptr [rbp+8C80h+var_6C60], esi
 * 00000001800B7A35: mov     dword ptr [rbp+8C80h+var_6C60+4], esi
 * 00000001800B7A3B: call    sub_1800A8988
 * 00000001800B7A40: mov     r8, rax
 * 00000001800B7A43: mov     r9d, r12d
 * 00000001800B7A46: mov     edx, 1B2h
 * 00000001800B7A4B: lea     rcx, [rbp+8C80h+var_710]
 * 00000001800B7A52: call    sub_180075CF8
 * 00000001800B7A57: nop
 * 00000001800B7A58: mov     r8, rax
 * 00000001800B7A5B: mov     rdx, r13
 * 00000001800B7A5E: lea     rcx, [rbp+8C80h+var_730]
 * 00000001800B7A65: call    sub_18001C928
 * 00000001800B7A6A: nop
 * 00000001800B7A6B: lea     r8, aVertex; "/Vertex"
 * 00000001800B7A72: mov     rdx, rax
 * 00000001800B7A75: lea     rcx, [rbp+8C80h+var_4910]
 * 00000001800B7A7C: call    sub_18001C87C
 * 00000001800B7A81: movups  xmm0, [rbp+8C80h+var_6C70]
 * 00000001800B7A88: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7A8D: movups  xmm1, [rbp+8C80h+var_6C60]
 * 00000001800B7A94: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7A99: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7A9E: mov     rcx, rax
 * 00000001800B7AA1: call    sub_180075D94
 * 00000001800B7AA6: nop
 * 00000001800B7AA7: lea     rcx, [rbp+8C80h+var_730]
 * 00000001800B7AAE: call    sub_180011E30
 * 00000001800B7AB3: nop
 * 00000001800B7AB4: lea     rcx, [rbp+8C80h+var_710]
 * 00000001800B7ABB: call    sub_180011E30
 * 00000001800B7AC0: nop
 * 00000001800B7AC1: lea     rcx, dword_1801CE6CC
 * 00000001800B7AC8: call    sub_18000D4CC
 * 00000001800B7ACD: mov     rax, [rdi+rbx*8]
 * 00000001800B7AD1: mov     ecx, [r15+rax]
 * 00000001800B7AD5: cmp     cs:dword_1801CE6D0, ecx
 * 00000001800B7ADB: jle     loc_1800B7BB4
 * 00000001800B7AE1: lea     rcx, dword_1801CE6D0
 * 00000001800B7AE8: call    sub_18000D534
 * 00000001800B7AED: cmp     cs:dword_1801CE6D0, r14d
 * 00000001800B7AF4: jnz     loc_1800B7BB4
 * 00000001800B7AFA: lea     rax, unk_1801478A0
 * 00000001800B7B01: mov     qword ptr [rbp+8C80h+var_6C50], rax
 * 00000001800B7B08: lea     rax, unk_1801492F0
 * 00000001800B7B0F: mov     qword ptr [rbp+8C80h+var_6C50+8], rax
 * 00000001800B7B16: mov     dword ptr [rbp+8C80h+var_6C40], esi
 * 00000001800B7B1C: mov     dword ptr [rbp+8C80h+var_6C40+4], esi
 * 00000001800B7B22: call    sub_1800A8988
 * 00000001800B7B27: mov     r8, rax
 * 00000001800B7B2A: mov     r9d, r12d
 * 00000001800B7B2D: mov     edx, 1B8h
 * 00000001800B7B32: lea     rcx, [rbp+8C80h+var_6B0]
 * 00000001800B7B39: call    sub_180075CF8
 * 00000001800B7B3E: nop
 * 00000001800B7B3F: mov     r8, rax
 * 00000001800B7B42: mov     rdx, r13
 * 00000001800B7B45: lea     rcx, [rbp+8C80h+var_6D0]
 * 00000001800B7B4C: call    sub_18001C928
 * 00000001800B7B51: nop
 * 00000001800B7B52: lea     r8, aVertex; "/Vertex"
 * 00000001800B7B59: mov     rdx, rax
 * 00000001800B7B5C: lea     rcx, [rbp+8C80h+var_48F0]
 * 00000001800B7B63: call    sub_18001C87C
 * 00000001800B7B68: movups  xmm0, [rbp+8C80h+var_6C50]
 * 00000001800B7B6F: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7B74: movups  xmm1, [rbp+8C80h+var_6C40]
 * 00000001800B7B7B: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7B80: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7B85: mov     rcx, rax
 * 00000001800B7B88: call    sub_180075D94
 * 00000001800B7B8D: nop
 * 00000001800B7B8E: lea     rcx, [rbp+8C80h+var_6D0]
 * 00000001800B7B95: call    sub_180011E30
 * 00000001800B7B9A: nop
 * 00000001800B7B9B: lea     rcx, [rbp+8C80h+var_6B0]
 * 00000001800B7BA2: call    sub_180011E30
 * 00000001800B7BA7: nop
 * 00000001800B7BA8: lea     rcx, dword_1801CE6D0
 * 00000001800B7BAF: call    sub_18000D4CC
 * 00000001800B7BB4: mov     rax, [rdi+rbx*8]
 * 00000001800B7BB8: mov     ecx, [r15+rax]
 * 00000001800B7BBC: cmp     cs:dword_1801CE6D4, ecx
 * 00000001800B7BC2: jle     loc_1800B7C9B
 * 00000001800B7BC8: lea     rcx, dword_1801CE6D4
 * 00000001800B7BCF: call    sub_18000D534
 * 00000001800B7BD4: cmp     cs:dword_1801CE6D4, r14d
 * 00000001800B7BDB: jnz     loc_1800B7C9B
 * 00000001800B7BE1: lea     rax, unk_1801478A0
 * 00000001800B7BE8: mov     qword ptr [rbp+8C80h+var_6C30], rax
 * 00000001800B7BEF: lea     rax, unk_1801492F0
 * 00000001800B7BF6: mov     qword ptr [rbp+8C80h+var_6C30+8], rax
 * 00000001800B7BFD: mov     dword ptr [rbp+8C80h+var_6C20], esi
 * 00000001800B7C03: mov     dword ptr [rbp+8C80h+var_6C20+4], esi
 * 00000001800B7C09: call    sub_1800A8988
 * 00000001800B7C0E: mov     r8, rax
 * 00000001800B7C11: mov     r9d, r12d
 * 00000001800B7C14: mov     edx, 1BAh
 * 00000001800B7C19: lea     rcx, [rbp+8C80h+var_650]
 * 00000001800B7C20: call    sub_180075CF8
 * 00000001800B7C25: nop
 * 00000001800B7C26: mov     r8, rax
 * 00000001800B7C29: mov     rdx, r13
 * 00000001800B7C2C: lea     rcx, [rbp+8C80h+var_670]
 * 00000001800B7C33: call    sub_18001C928
 * 00000001800B7C38: nop
 * 00000001800B7C39: lea     r8, aVertex; "/Vertex"
 * 00000001800B7C40: mov     rdx, rax
 * 00000001800B7C43: lea     rcx, [rbp+8C80h+var_48D0]
 * 00000001800B7C4A: call    sub_18001C87C
 * 00000001800B7C4F: movups  xmm0, [rbp+8C80h+var_6C30]
 * 00000001800B7C56: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7C5B: movups  xmm1, [rbp+8C80h+var_6C20]
 * 00000001800B7C62: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7C67: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7C6C: mov     rcx, rax
 * 00000001800B7C6F: call    sub_180075D94
 * 00000001800B7C74: nop
 * 00000001800B7C75: lea     rcx, [rbp+8C80h+var_670]
 * 00000001800B7C7C: call    sub_180011E30
 * 00000001800B7C81: nop
 * 00000001800B7C82: lea     rcx, [rbp+8C80h+var_650]
 * 00000001800B7C89: call    sub_180011E30
 * 00000001800B7C8E: nop
 * 00000001800B7C8F: lea     rcx, dword_1801CE6D4
 * 00000001800B7C96: call    sub_18000D4CC
 * 00000001800B7C9B: mov     rax, [rdi+rbx*8]
 * 00000001800B7C9F: mov     ecx, [r15+rax]
 * 00000001800B7CA3: cmp     cs:dword_1801CE6D8, ecx
 * 00000001800B7CA9: jle     loc_1800B7D82
 * 00000001800B7CAF: lea     rcx, dword_1801CE6D8
 * 00000001800B7CB6: call    sub_18000D534
 * 00000001800B7CBB: cmp     cs:dword_1801CE6D8, r14d
 * 00000001800B7CC2: jnz     loc_1800B7D82
 * 00000001800B7CC8: lea     rax, unk_1801492F0
 * 00000001800B7CCF: mov     qword ptr [rbp+8C80h+var_6C10], rax
 * 00000001800B7CD6: lea     rax, unk_18014A340
 * 00000001800B7CDD: mov     qword ptr [rbp+8C80h+var_6C10+8], rax
 * 00000001800B7CE4: mov     dword ptr [rbp+8C80h+var_6C00], esi
 * 00000001800B7CEA: mov     dword ptr [rbp+8C80h+var_6C00+4], esi
 * 00000001800B7CF0: call    sub_1800A8988
 * 00000001800B7CF5: mov     r8, rax
 * 00000001800B7CF8: mov     r9d, r12d
 * 00000001800B7CFB: mov     edx, 1C0h
 * 00000001800B7D00: lea     rcx, [rbp+8C80h+var_5F0]
 * 00000001800B7D07: call    sub_180075CF8
 * 00000001800B7D0C: nop
 * 00000001800B7D0D: mov     r8, rax
 * 00000001800B7D10: mov     rdx, r13
 * 00000001800B7D13: lea     rcx, [rbp+8C80h+var_610]
 * 00000001800B7D1A: call    sub_18001C928
 * 00000001800B7D1F: nop
 * 00000001800B7D20: lea     r8, aVertex; "/Vertex"
 * 00000001800B7D27: mov     rdx, rax
 * 00000001800B7D2A: lea     rcx, [rbp+8C80h+var_48B0]
 * 00000001800B7D31: call    sub_18001C87C
 * 00000001800B7D36: movups  xmm0, [rbp+8C80h+var_6C10]
 * 00000001800B7D3D: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7D42: movups  xmm1, [rbp+8C80h+var_6C00]
 * 00000001800B7D49: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7D4E: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7D53: mov     rcx, rax
 * 00000001800B7D56: call    sub_180075D94
 * 00000001800B7D5B: nop
 * 00000001800B7D5C: lea     rcx, [rbp+8C80h+var_610]
 * 00000001800B7D63: call    sub_180011E30
 * 00000001800B7D68: nop
 * 00000001800B7D69: lea     rcx, [rbp+8C80h+var_5F0]
 * 00000001800B7D70: call    sub_180011E30
 * 00000001800B7D75: nop
 * 00000001800B7D76: lea     rcx, dword_1801CE6D8
 * 00000001800B7D7D: call    sub_18000D4CC
 * 00000001800B7D82: mov     rax, [rdi+rbx*8]
 * 00000001800B7D86: mov     ecx, [r15+rax]
 * 00000001800B7D8A: cmp     cs:dword_1801CE6DC, ecx
 * 00000001800B7D90: jle     loc_1800B7E69
 * 00000001800B7D96: lea     rcx, dword_1801CE6DC
 * 00000001800B7D9D: call    sub_18000D534
 * 00000001800B7DA2: cmp     cs:dword_1801CE6DC, r14d
 * 00000001800B7DA9: jnz     loc_1800B7E69
 * 00000001800B7DAF: lea     rax, unk_1801492F0
 * 00000001800B7DB6: mov     qword ptr [rbp+8C80h+var_6BF0], rax
 * 00000001800B7DBD: lea     rax, unk_18014A340
 * 00000001800B7DC4: mov     qword ptr [rbp+8C80h+var_6BF0+8], rax
 * 00000001800B7DCB: mov     dword ptr [rbp+8C80h+var_6BE0], esi
 * 00000001800B7DD1: mov     dword ptr [rbp+8C80h+var_6BE0+4], esi
 * 00000001800B7DD7: call    sub_1800A8988
 * 00000001800B7DDC: mov     r8, rax
 * 00000001800B7DDF: mov     r9d, r12d
 * 00000001800B7DE2: mov     edx, 1C2h
 * 00000001800B7DE7: lea     rcx, [rbp+8C80h+var_590]
 * 00000001800B7DEE: call    sub_180075CF8
 * 00000001800B7DF3: nop
 * 00000001800B7DF4: mov     r8, rax
 * 00000001800B7DF7: mov     rdx, r13
 * 00000001800B7DFA: lea     rcx, [rbp+8C80h+var_5B0]
 * 00000001800B7E01: call    sub_18001C928
 * 00000001800B7E06: nop
 * 00000001800B7E07: lea     r8, aVertex; "/Vertex"
 * 00000001800B7E0E: mov     rdx, rax
 * 00000001800B7E11: lea     rcx, [rbp+8C80h+var_4890]
 * 00000001800B7E18: call    sub_18001C87C
 * 00000001800B7E1D: movups  xmm0, [rbp+8C80h+var_6BF0]
 * 00000001800B7E24: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7E29: movups  xmm1, [rbp+8C80h+var_6BE0]
 * 00000001800B7E30: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7E35: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7E3A: mov     rcx, rax
 * 00000001800B7E3D: call    sub_180075D94
 * 00000001800B7E42: nop
 * 00000001800B7E43: lea     rcx, [rbp+8C80h+var_5B0]
 * 00000001800B7E4A: call    sub_180011E30
 * 00000001800B7E4F: nop
 * 00000001800B7E50: lea     rcx, [rbp+8C80h+var_590]
 * 00000001800B7E57: call    sub_180011E30
 * 00000001800B7E5C: nop
 * 00000001800B7E5D: lea     rcx, dword_1801CE6DC
 * 00000001800B7E64: call    sub_18000D4CC
 * 00000001800B7E69: mov     rax, [rdi+rbx*8]
 * 00000001800B7E6D: mov     ecx, [r15+rax]
 * 00000001800B7E71: cmp     cs:dword_1801CE6E0, ecx
 * 00000001800B7E77: jle     loc_1800B7F50
 * 00000001800B7E7D: lea     rcx, dword_1801CE6E0
 * 00000001800B7E84: call    sub_18000D534
 * 00000001800B7E89: cmp     cs:dword_1801CE6E0, r14d
 * 00000001800B7E90: jnz     loc_1800B7F50
 * 00000001800B7E96: lea     rax, unk_1801492F0
 * 00000001800B7E9D: mov     qword ptr [rbp+8C80h+var_6BD0], rax
 * 00000001800B7EA4: lea     rax, unk_18014A340
 * 00000001800B7EAB: mov     qword ptr [rbp+8C80h+var_6BD0+8], rax
 * 00000001800B7EB2: mov     dword ptr [rbp+8C80h+var_6BC0], esi
 * 00000001800B7EB8: mov     dword ptr [rbp+8C80h+var_6BC0+4], esi
 * 00000001800B7EBE: call    sub_1800A8988
 * 00000001800B7EC3: mov     r8, rax
 * 00000001800B7EC6: mov     r9d, r12d
 * 00000001800B7EC9: mov     edx, 1C8h
 * 00000001800B7ECE: lea     rcx, [rbp+8C80h+var_530]
 * 00000001800B7ED5: call    sub_180075CF8
 * 00000001800B7EDA: nop
 * 00000001800B7EDB: mov     r8, rax
 * 00000001800B7EDE: mov     rdx, r13
 * 00000001800B7EE1: lea     rcx, [rbp+8C80h+var_550]
 * 00000001800B7EE8: call    sub_18001C928
 * 00000001800B7EED: nop
 * 00000001800B7EEE: lea     r8, aVertex; "/Vertex"
 * 00000001800B7EF5: mov     rdx, rax
 * 00000001800B7EF8: lea     rcx, [rbp+8C80h+var_4870]
 * 00000001800B7EFF: call    sub_18001C87C
 * 00000001800B7F04: movups  xmm0, [rbp+8C80h+var_6BD0]
 * 00000001800B7F0B: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7F10: movups  xmm1, [rbp+8C80h+var_6BC0]
 * 00000001800B7F17: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B7F1C: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B7F21: mov     rcx, rax
 * 00000001800B7F24: call    sub_180075D94
 * 00000001800B7F29: nop
 * 00000001800B7F2A: lea     rcx, [rbp+8C80h+var_550]
 * 00000001800B7F31: call    sub_180011E30
 * 00000001800B7F36: nop
 * 00000001800B7F37: lea     rcx, [rbp+8C80h+var_530]
 * 00000001800B7F3E: call    sub_180011E30
 * 00000001800B7F43: nop
 * 00000001800B7F44: lea     rcx, dword_1801CE6E0
 * 00000001800B7F4B: call    sub_18000D4CC
 * 00000001800B7F50: mov     rax, [rdi+rbx*8]
 * 00000001800B7F54: mov     ecx, [r15+rax]
 * 00000001800B7F58: cmp     cs:dword_1801CE6E4, ecx
 * 00000001800B7F5E: jle     loc_1800B8037
 * 00000001800B7F64: lea     rcx, dword_1801CE6E4
 * 00000001800B7F6B: call    sub_18000D534
 * 00000001800B7F70: cmp     cs:dword_1801CE6E4, r14d
 * 00000001800B7F77: jnz     loc_1800B8037
 * 00000001800B7F7D: lea     rax, unk_1801492F0
 * 00000001800B7F84: mov     qword ptr [rbp+8C80h+var_6BB0], rax
 * 00000001800B7F8B: lea     rax, unk_18014A340
 * 00000001800B7F92: mov     qword ptr [rbp+8C80h+var_6BB0+8], rax
 * 00000001800B7F99: mov     dword ptr [rbp+8C80h+var_6BA0], esi
 * 00000001800B7F9F: mov     dword ptr [rbp+8C80h+var_6BA0+4], esi
 * 00000001800B7FA5: call    sub_1800A8988
 * 00000001800B7FAA: mov     r8, rax
 * 00000001800B7FAD: mov     r9d, r12d
 * 00000001800B7FB0: mov     edx, 1CAh
 * 00000001800B7FB5: lea     rcx, [rbp+8C80h+var_4D0]
 * 00000001800B7FBC: call    sub_180075CF8
 * 00000001800B7FC1: nop
 * 00000001800B7FC2: mov     r8, rax
 * 00000001800B7FC5: mov     rdx, r13
 * 00000001800B7FC8: lea     rcx, [rbp+8C80h+var_4F0]
 * 00000001800B7FCF: call    sub_18001C928
 * 00000001800B7FD4: nop
 * 00000001800B7FD5: lea     r8, aVertex; "/Vertex"
 * 00000001800B7FDC: mov     rdx, rax
 * 00000001800B7FDF: lea     rcx, [rbp+8C80h+var_4850]
 * 00000001800B7FE6: call    sub_18001C87C
 * 00000001800B7FEB: movups  xmm0, [rbp+8C80h+var_6BB0]
 * 00000001800B7FF2: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B7FF7: movups  xmm1, [rbp+8C80h+var_6BA0]
 * 00000001800B7FFE: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B8003: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B8008: mov     rcx, rax
 * 00000001800B800B: call    sub_180075D94
 * 00000001800B8010: nop
 * 00000001800B8011: lea     rcx, [rbp+8C80h+var_4F0]
 * 00000001800B8018: call    sub_180011E30
 * 00000001800B801D: nop
 * 00000001800B801E: lea     rcx, [rbp+8C80h+var_4D0]
 * 00000001800B8025: call    sub_180011E30
 * 00000001800B802A: nop
 * 00000001800B802B: lea     rcx, dword_1801CE6E4
 * 00000001800B8032: call    sub_18000D4CC
 * 00000001800B8037: mov     rax, [rdi+rbx*8]
 * 00000001800B803B: mov     ecx, [r15+rax]
 * 00000001800B803F: cmp     cs:dword_1801CE6E8, ecx
 * 00000001800B8045: jle     loc_1800B811E
 * 00000001800B804B: lea     rcx, dword_1801CE6E8
 * 00000001800B8052: call    sub_18000D534
 * 00000001800B8057: cmp     cs:dword_1801CE6E8, r14d
 * 00000001800B805E: jnz     loc_1800B811E
 * 00000001800B8064: lea     rax, unk_1801492F0
 * 00000001800B806B: mov     qword ptr [rbp+8C80h+var_6B90], rax
 * 00000001800B8072: lea     rax, unk_18014A340
 * 00000001800B8079: mov     qword ptr [rbp+8C80h+var_6B90+8], rax
 * 00000001800B8080: mov     dword ptr [rbp+8C80h+var_6B80], esi
 * 00000001800B8086: mov     dword ptr [rbp+8C80h+var_6B80+4], esi
 * 00000001800B808C: call    sub_1800A8988
 * 00000001800B8091: mov     r8, rax
 * 00000001800B8094: mov     r9d, r12d
 * 00000001800B8097: mov     edx, 1D0h
 * 00000001800B809C: lea     rcx, [rbp+8C80h+var_470]
 * 00000001800B80A3: call    sub_180075CF8
 * 00000001800B80A8: nop
 * 00000001800B80A9: mov     r8, rax
 * 00000001800B80AC: mov     rdx, r13
 * 00000001800B80AF: lea     rcx, [rbp+8C80h+var_490]
 * 00000001800B80B6: call    sub_18001C928
 * 00000001800B80BB: nop
 * 00000001800B80BC: lea     r8, aVertex; "/Vertex"
 * 00000001800B80C3: mov     rdx, rax
 * 00000001800B80C6: lea     rcx, [rbp+8C80h+var_4830]
 * 00000001800B80CD: call    sub_18001C87C
 * 00000001800B80D2: movups  xmm0, [rbp+8C80h+var_6B90]
 * 00000001800B80D9: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B80DE: movups  xmm1, [rbp+8C80h+var_6B80]
 * 00000001800B80E5: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B80EA: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B80EF: mov     rcx, rax
 * 00000001800B80F2: call    sub_180075D94
 * 00000001800B80F7: nop
 * 00000001800B80F8: lea     rcx, [rbp+8C80h+var_490]
 * 00000001800B80FF: call    sub_180011E30
 * 00000001800B8104: nop
 * 00000001800B8105: lea     rcx, [rbp+8C80h+var_470]
 * 00000001800B810C: call    sub_180011E30
 * 00000001800B8111: nop
 * 00000001800B8112: lea     rcx, dword_1801CE6E8
 * 00000001800B8119: call    sub_18000D4CC
 * 00000001800B811E: mov     rax, [rdi+rbx*8]
 * 00000001800B8122: mov     ecx, [r15+rax]
 * 00000001800B8126: cmp     cs:dword_1801CE6EC, ecx
 * 00000001800B812C: jle     loc_1800B8205
 * 00000001800B8132: lea     rcx, dword_1801CE6EC
 * 00000001800B8139: call    sub_18000D534
 * 00000001800B813E: cmp     cs:dword_1801CE6EC, r14d
 * 00000001800B8145: jnz     loc_1800B8205
 * 00000001800B814B: lea     rax, unk_1801492F0
 * 00000001800B8152: mov     qword ptr [rbp+8C80h+var_6B70], rax
 * 00000001800B8159: lea     rax, unk_18014A340
 * 00000001800B8160: mov     qword ptr [rbp+8C80h+var_6B70+8], rax
 * 00000001800B8167: mov     dword ptr [rbp+8C80h+var_6B60], esi
 * 00000001800B816D: mov     dword ptr [rbp+8C80h+var_6B60+4], esi
 * 00000001800B8173: call    sub_1800A8988
 * 00000001800B8178: mov     r8, rax
 * 00000001800B817B: mov     r9d, r12d
 * 00000001800B817E: mov     edx, 1D2h
 * 00000001800B8183: lea     rcx, [rbp+8C80h+var_410]
 * 00000001800B818A: call    sub_180075CF8
 * 00000001800B818F: nop
 * 00000001800B8190: mov     r8, rax
 * 00000001800B8193: mov     rdx, r13
 * 00000001800B8196: lea     rcx, [rbp+8C80h+var_430]
 * 00000001800B819D: call    sub_18001C928
 * 00000001800B81A2: nop
 * 00000001800B81A3: lea     r8, aVertex; "/Vertex"
 * 00000001800B81AA: mov     rdx, rax
 * 00000001800B81AD: lea     rcx, [rbp+8C80h+var_4810]
 * 00000001800B81B4: call    sub_18001C87C
 * 00000001800B81B9: movups  xmm0, [rbp+8C80h+var_6B70]
 * 00000001800B81C0: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B81C5: movups  xmm1, [rbp+8C80h+var_6B60]
 * 00000001800B81CC: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B81D1: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B81D6: mov     rcx, rax
 * 00000001800B81D9: call    sub_180075D94
 * 00000001800B81DE: nop
 * 00000001800B81DF: lea     rcx, [rbp+8C80h+var_430]
 * 00000001800B81E6: call    sub_180011E30
 * 00000001800B81EB: nop
 * 00000001800B81EC: lea     rcx, [rbp+8C80h+var_410]
 * 00000001800B81F3: call    sub_180011E30
 * 00000001800B81F8: nop
 * 00000001800B81F9: lea     rcx, dword_1801CE6EC
 * 00000001800B8200: call    sub_18000D4CC
 * 00000001800B8205: mov     rax, [rdi+rbx*8]
 * 00000001800B8209: mov     ecx, [r15+rax]
 * 00000001800B820D: cmp     cs:dword_1801CE6F0, ecx
 * 00000001800B8213: jle     loc_1800B82EC
 * 00000001800B8219: lea     rcx, dword_1801CE6F0
 * 00000001800B8220: call    sub_18000D534
 * 00000001800B8225: cmp     cs:dword_1801CE6F0, r14d
 * 00000001800B822C: jnz     loc_1800B82EC
 * 00000001800B8232: lea     rax, unk_1801492F0
 * 00000001800B8239: mov     qword ptr [rbp+8C80h+var_6B50], rax
 * 00000001800B8240: lea     rax, unk_18014A340
 * 00000001800B8247: mov     qword ptr [rbp+8C80h+var_6B50+8], rax
 * 00000001800B824E: mov     dword ptr [rbp+8C80h+var_6B40], esi
 * 00000001800B8254: mov     dword ptr [rbp+8C80h+var_6B40+4], esi
 * 00000001800B825A: call    sub_1800A8988
 * 00000001800B825F: mov     r8, rax
 * 00000001800B8262: mov     r9d, r12d
 * 00000001800B8265: mov     edx, 1D8h
 * 00000001800B826A: lea     rcx, [rbp+8C80h+var_3B0]
 * 00000001800B8271: call    sub_180075CF8
 * 00000001800B8276: nop
 * 00000001800B8277: mov     r8, rax
 * 00000001800B827A: mov     rdx, r13
 * 00000001800B827D: lea     rcx, [rbp+8C80h+var_3D0]
 * 00000001800B8284: call    sub_18001C928
 * 00000001800B8289: nop
 * 00000001800B828A: lea     r8, aVertex; "/Vertex"
 * 00000001800B8291: mov     rdx, rax
 * 00000001800B8294: lea     rcx, [rbp+8C80h+var_47F0]
 * 00000001800B829B: call    sub_18001C87C
 * 00000001800B82A0: movups  xmm0, [rbp+8C80h+var_6B50]
 * 00000001800B82A7: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B82AC: movups  xmm1, [rbp+8C80h+var_6B40]
 * 00000001800B82B3: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B82B8: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B82BD: mov     rcx, rax
 * 00000001800B82C0: call    sub_180075D94
 * 00000001800B82C5: nop
 * 00000001800B82C6: lea     rcx, [rbp+8C80h+var_3D0]
 * 00000001800B82CD: call    sub_180011E30
 * 00000001800B82D2: nop
 * 00000001800B82D3: lea     rcx, [rbp+8C80h+var_3B0]
 * 00000001800B82DA: call    sub_180011E30
 * 00000001800B82DF: nop
 * 00000001800B82E0: lea     rcx, dword_1801CE6F0
 * 00000001800B82E7: call    sub_18000D4CC
 * 00000001800B82EC: mov     rax, [rdi+rbx*8]
 * 00000001800B82F0: mov     ecx, [r15+rax]
 * 00000001800B82F4: cmp     cs:dword_1801CE6F4, ecx
 * 00000001800B82FA: jle     loc_1800B83D3
 * 00000001800B8300: lea     rcx, dword_1801CE6F4
 * 00000001800B8307: call    sub_18000D534
 * 00000001800B830C: cmp     cs:dword_1801CE6F4, r14d
 * 00000001800B8313: jnz     loc_1800B83D3
 * 00000001800B8319: lea     rax, unk_1801492F0
 * 00000001800B8320: mov     qword ptr [rbp+8C80h+var_6B30], rax
 * 00000001800B8327: lea     rax, unk_18014A340
 * 00000001800B832E: mov     qword ptr [rbp+8C80h+var_6B30+8], rax
 * 00000001800B8335: mov     dword ptr [rbp+8C80h+var_6B20], esi
 * 00000001800B833B: mov     dword ptr [rbp+8C80h+var_6B20+4], esi
 * 00000001800B8341: call    sub_1800A8988
 * 00000001800B8346: mov     r8, rax
 * 00000001800B8349: mov     r9d, r12d
 * 00000001800B834C: mov     edx, 1DAh
 * 00000001800B8351: lea     rcx, [rbp+8C80h+var_350]
 * 00000001800B8358: call    sub_180075CF8
 * 00000001800B835D: nop
 * 00000001800B835E: mov     r8, rax
 * 00000001800B8361: mov     rdx, r13
 * 00000001800B8364: lea     rcx, [rbp+8C80h+var_370]
 * 00000001800B836B: call    sub_18001C928
 * 00000001800B8370: nop
 * 00000001800B8371: lea     r8, aVertex; "/Vertex"
 * 00000001800B8378: mov     rdx, rax
 * 00000001800B837B: lea     rcx, [rbp+8C80h+var_47D0]
 * 00000001800B8382: call    sub_18001C87C
 * 00000001800B8387: movups  xmm0, [rbp+8C80h+var_6B30]
 * 00000001800B838E: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B8393: movups  xmm1, [rbp+8C80h+var_6B20]
 * 00000001800B839A: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B839F: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B83A4: mov     rcx, rax
 * 00000001800B83A7: call    sub_180075D94
 * 00000001800B83AC: nop
 * 00000001800B83AD: lea     rcx, [rbp+8C80h+var_370]
 * 00000001800B83B4: call    sub_180011E30
 * 00000001800B83B9: nop
 * 00000001800B83BA: lea     rcx, [rbp+8C80h+var_350]
 * 00000001800B83C1: call    sub_180011E30
 * 00000001800B83C6: nop
 * 00000001800B83C7: lea     rcx, dword_1801CE6F4
 * 00000001800B83CE: call    sub_18000D4CC
 * 00000001800B83D3: mov     rax, [rdi+rbx*8]
 * 00000001800B83D7: mov     ecx, [r15+rax]
 * 00000001800B83DB: cmp     cs:dword_1801CE6F8, ecx
 * 00000001800B83E1: jle     loc_1800B84BA
 * 00000001800B83E7: lea     rcx, dword_1801CE6F8
 * 00000001800B83EE: call    sub_18000D534
 * 00000001800B83F3: cmp     cs:dword_1801CE6F8, r14d
 * 00000001800B83FA: jnz     loc_1800B84BA
 * 00000001800B8400: lea     rax, unk_1801478A0
 * 00000001800B8407: mov     qword ptr [rbp+8C80h+var_6B10], rax
 * 00000001800B840E: lea     rax, unk_1801492F0
 * 00000001800B8415: mov     qword ptr [rbp+8C80h+var_6B10+8], rax
 * 00000001800B841C: mov     dword ptr [rbp+8C80h+var_6B00], esi
 * 00000001800B8422: mov     dword ptr [rbp+8C80h+var_6B00+4], esi
 * 00000001800B8428: call    sub_1800A8988
 * 00000001800B842D: mov     r8, rax
 * 00000001800B8430: mov     r9d, r12d
 * 00000001800B8433: mov     edx, 1E0h
 * 00000001800B8438: lea     rcx, [rbp+8C80h+var_2F0]
 * 00000001800B843F: call    sub_180075CF8
 * 00000001800B8444: nop
 * 00000001800B8445: mov     r8, rax
 * 00000001800B8448: mov     rdx, r13
 * 00000001800B844B: lea     rcx, [rbp+8C80h+var_310]
 * 00000001800B8452: call    sub_18001C928
 * 00000001800B8457: nop
 * 00000001800B8458: lea     r8, aVertex; "/Vertex"
 * 00000001800B845F: mov     rdx, rax
 * 00000001800B8462: lea     rcx, [rbp+8C80h+var_47B0]
 * 00000001800B8469: call    sub_18001C87C
 * 00000001800B846E: movups  xmm0, [rbp+8C80h+var_6B10]
 * 00000001800B8475: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B847A: movups  xmm1, [rbp+8C80h+var_6B00]
 * 00000001800B8481: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B8486: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B848B: mov     rcx, rax
 * 00000001800B848E: call    sub_180075D94
 * 00000001800B8493: nop
 * 00000001800B8494: lea     rcx, [rbp+8C80h+var_310]
 * 00000001800B849B: call    sub_180011E30
 * 00000001800B84A0: nop
 * 00000001800B84A1: lea     rcx, [rbp+8C80h+var_2F0]
 * 00000001800B84A8: call    sub_180011E30
 * 00000001800B84AD: nop
 * 00000001800B84AE: lea     rcx, dword_1801CE6F8
 * 00000001800B84B5: call    sub_18000D4CC
 * 00000001800B84BA: mov     rax, [rdi+rbx*8]
 * 00000001800B84BE: mov     ecx, [r15+rax]
 * 00000001800B84C2: cmp     cs:dword_1801CE6FC, ecx
 * 00000001800B84C8: jle     loc_1800B85A1
 * 00000001800B84CE: lea     rcx, dword_1801CE6FC
 * 00000001800B84D5: call    sub_18000D534
 * 00000001800B84DA: cmp     cs:dword_1801CE6FC, r14d
 * 00000001800B84E1: jnz     loc_1800B85A1
 * 00000001800B84E7: lea     rax, unk_1801478A0
 * 00000001800B84EE: mov     qword ptr [rbp+8C80h+var_6AF0], rax
 * 00000001800B84F5: lea     rax, unk_1801492F0
 * 00000001800B84FC: mov     qword ptr [rbp+8C80h+var_6AF0+8], rax
 * 00000001800B8503: mov     dword ptr [rbp+8C80h+var_6AE0], esi
 * 00000001800B8509: mov     dword ptr [rbp+8C80h+var_6AE0+4], esi
 * 00000001800B850F: call    sub_1800A8988
 * 00000001800B8514: mov     r8, rax
 * 00000001800B8517: mov     r9d, r12d
 * 00000001800B851A: mov     edx, 1E2h
 * 00000001800B851F: lea     rcx, [rbp+8C80h+var_290]
 * 00000001800B8526: call    sub_180075CF8
 * 00000001800B852B: nop
 * 00000001800B852C: mov     r8, rax
 * 00000001800B852F: mov     rdx, r13
 * 00000001800B8532: lea     rcx, [rbp+8C80h+var_2B0]
 * 00000001800B8539: call    sub_18001C928
 * 00000001800B853E: nop
 * 00000001800B853F: lea     r8, aVertex; "/Vertex"
 * 00000001800B8546: mov     rdx, rax
 * 00000001800B8549: lea     rcx, [rbp+8C80h+var_4790]
 * 00000001800B8550: call    sub_18001C87C
 * 00000001800B8555: movups  xmm0, [rbp+8C80h+var_6AF0]
 * 00000001800B855C: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B8561: movups  xmm1, [rbp+8C80h+var_6AE0]
 * 00000001800B8568: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B856D: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B8572: mov     rcx, rax
 * 00000001800B8575: call    sub_180075D94
 * 00000001800B857A: nop
 * 00000001800B857B: lea     rcx, [rbp+8C80h+var_2B0]
 * 00000001800B8582: call    sub_180011E30
 * 00000001800B8587: nop
 * 00000001800B8588: lea     rcx, [rbp+8C80h+var_290]
 * 00000001800B858F: call    sub_180011E30
 * 00000001800B8594: nop
 * 00000001800B8595: lea     rcx, dword_1801CE6FC
 * 00000001800B859C: call    sub_18000D4CC
 * 00000001800B85A1: mov     rax, [rdi+rbx*8]
 * 00000001800B85A5: mov     ecx, [r15+rax]
 * 00000001800B85A9: cmp     cs:dword_1801CE700, ecx
 * 00000001800B85AF: jle     loc_1800B8688
 * 00000001800B85B5: lea     rcx, dword_1801CE700
 * 00000001800B85BC: call    sub_18000D534
 * 00000001800B85C1: cmp     cs:dword_1801CE700, r14d
 * 00000001800B85C8: jnz     loc_1800B8688
 * 00000001800B85CE: lea     rax, unk_1801478A0
 * 00000001800B85D5: mov     qword ptr [rbp+8C80h+var_6AD0], rax
 * 00000001800B85DC: lea     rax, unk_1801492F0
 * 00000001800B85E3: mov     qword ptr [rbp+8C80h+var_6AD0+8], rax
 * 00000001800B85EA: mov     dword ptr [rbp+8C80h+var_6AC0], esi
 * 00000001800B85F0: mov     dword ptr [rbp+8C80h+var_6AC0+4], esi
 * 00000001800B85F6: call    sub_1800A8988
 * 00000001800B85FB: mov     r8, rax
 * 00000001800B85FE: mov     r9d, r12d
 * 00000001800B8601: mov     edx, 1E8h
 * 00000001800B8606: lea     rcx, [rbp+8C80h+var_230]
 * 00000001800B860D: call    sub_180075CF8
 * 00000001800B8612: nop
 * 00000001800B8613: mov     r8, rax
 * 00000001800B8616: mov     rdx, r13
 * 00000001800B8619: lea     rcx, [rbp+8C80h+var_250]
 * 00000001800B8620: call    sub_18001C928
 * 00000001800B8625: nop
 * 00000001800B8626: lea     r8, aVertex; "/Vertex"
 * 00000001800B862D: mov     rdx, rax
 * 00000001800B8630: lea     rcx, [rbp+8C80h+var_4770]
 * 00000001800B8637: call    sub_18001C87C
 * 00000001800B863C: movups  xmm0, [rbp+8C80h+var_6AD0]
 * 00000001800B8643: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B8648: movups  xmm1, [rbp+8C80h+var_6AC0]
 * 00000001800B864F: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B8654: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B8659: mov     rcx, rax
 * 00000001800B865C: call    sub_180075D94
 * 00000001800B8661: nop
 * 00000001800B8662: lea     rcx, [rbp+8C80h+var_250]
 * 00000001800B8669: call    sub_180011E30
 * 00000001800B866E: nop
 * 00000001800B866F: lea     rcx, [rbp+8C80h+var_230]
 * 00000001800B8676: call    sub_180011E30
 * 00000001800B867B: nop
 * 00000001800B867C: lea     rcx, dword_1801CE700
 * 00000001800B8683: call    sub_18000D4CC
 * 00000001800B8688: mov     rax, [rdi+rbx*8]
 * 00000001800B868C: mov     ecx, [r15+rax]
 * 00000001800B8690: cmp     cs:dword_1801CE704, ecx
 * 00000001800B8696: jle     loc_1800B876F
 * 00000001800B869C: lea     rcx, dword_1801CE704
 * 00000001800B86A3: call    sub_18000D534
 * 00000001800B86A8: cmp     cs:dword_1801CE704, r14d
 * 00000001800B86AF: jnz     loc_1800B876F
 * 00000001800B86B5: lea     rax, unk_1801478A0
 * 00000001800B86BC: mov     qword ptr [rbp+8C80h+var_6AB0], rax
 * 00000001800B86C3: lea     rax, unk_1801492F0
 * 00000001800B86CA: mov     qword ptr [rbp+8C80h+var_6AB0+8], rax
 * 00000001800B86D1: mov     dword ptr [rbp+8C80h+var_6AA0], esi
 * 00000001800B86D7: mov     dword ptr [rbp+8C80h+var_6AA0+4], esi
 * 00000001800B86DD: call    sub_1800A8988
 * 00000001800B86E2: mov     r8, rax
 * 00000001800B86E5: mov     r9d, r12d
 * 00000001800B86E8: mov     edx, 1EAh
 * 00000001800B86ED: lea     rcx, [rbp+8C80h+var_1D0]
 * 00000001800B86F4: call    sub_180075CF8
 * 00000001800B86F9: nop
 * 00000001800B86FA: mov     r8, rax
 * 00000001800B86FD: mov     rdx, r13
 * 00000001800B8700: lea     rcx, [rbp+8C80h+var_1F0]
 * 00000001800B8707: call    sub_18001C928
 * 00000001800B870C: nop
 * 00000001800B870D: lea     r8, aVertex; "/Vertex"
 * 00000001800B8714: mov     rdx, rax
 * 00000001800B8717: lea     rcx, [rbp+8C80h+var_4750]
 * 00000001800B871E: call    sub_18001C87C
 * 00000001800B8723: movups  xmm0, [rbp+8C80h+var_6AB0]
 * 00000001800B872A: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B872F: movups  xmm1, [rbp+8C80h+var_6AA0]
 * 00000001800B8736: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B873B: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B8740: mov     rcx, rax
 * 00000001800B8743: call    sub_180075D94
 * 00000001800B8748: nop
 * 00000001800B8749: lea     rcx, [rbp+8C80h+var_1F0]
 * 00000001800B8750: call    sub_180011E30
 * 00000001800B8755: nop
 * 00000001800B8756: lea     rcx, [rbp+8C80h+var_1D0]
 * 00000001800B875D: call    sub_180011E30
 * 00000001800B8762: nop
 * 00000001800B8763: lea     rcx, dword_1801CE704
 * 00000001800B876A: call    sub_18000D4CC
 * 00000001800B876F: mov     rax, [rdi+rbx*8]
 * 00000001800B8773: mov     ecx, [r15+rax]
 * 00000001800B8777: cmp     cs:dword_1801CE708, ecx
 * 00000001800B877D: jle     loc_1800B8856
 * 00000001800B8783: lea     rcx, dword_1801CE708
 * 00000001800B878A: call    sub_18000D534
 * 00000001800B878F: cmp     cs:dword_1801CE708, r14d
 * 00000001800B8796: jnz     loc_1800B8856
 * 00000001800B879C: lea     rax, unk_1801478A0
 * 00000001800B87A3: mov     qword ptr [rbp+8C80h+var_6A90], rax
 * 00000001800B87AA: lea     rax, unk_1801492F0
 * 00000001800B87B1: mov     qword ptr [rbp+8C80h+var_6A90+8], rax
 * 00000001800B87B8: mov     dword ptr [rbp+8C80h+var_6A80], esi
 * 00000001800B87BE: mov     dword ptr [rbp+8C80h+var_6A80+4], esi
 * 00000001800B87C4: call    sub_1800A8988
 * 00000001800B87C9: mov     r8, rax
 * 00000001800B87CC: mov     r9d, r12d
 * 00000001800B87CF: mov     edx, 1F0h
 * 00000001800B87D4: lea     rcx, [rbp+8C80h+var_170]
 * 00000001800B87DB: call    sub_180075CF8
 * 00000001800B87E0: nop
 * 00000001800B87E1: mov     r8, rax
 * 00000001800B87E4: mov     rdx, r13
 * 00000001800B87E7: lea     rcx, [rbp+8C80h+var_190]
 * 00000001800B87EE: call    sub_18001C928
 * 00000001800B87F3: nop
 * 00000001800B87F4: lea     r8, aVertex; "/Vertex"
 * 00000001800B87FB: mov     rdx, rax
 * 00000001800B87FE: lea     rcx, [rbp+8C80h+var_4730]
 * 00000001800B8805: call    sub_18001C87C
 * 00000001800B880A: movups  xmm0, [rbp+8C80h+var_6A90]
 * 00000001800B8811: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B8816: movups  xmm1, [rbp+8C80h+var_6A80]
 * 00000001800B881D: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B8822: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B8827: mov     rcx, rax
 * 00000001800B882A: call    sub_180075D94
 * 00000001800B882F: nop
 * 00000001800B8830: lea     rcx, [rbp+8C80h+var_190]
 * 00000001800B8837: call    sub_180011E30
 * 00000001800B883C: nop
 * 00000001800B883D: lea     rcx, [rbp+8C80h+var_170]
 * 00000001800B8844: call    sub_180011E30
 * 00000001800B8849: nop
 * 00000001800B884A: lea     rcx, dword_1801CE708
 * 00000001800B8851: call    sub_18000D4CC
 * 00000001800B8856: mov     rax, [rdi+rbx*8]
 * 00000001800B885A: mov     ecx, [r15+rax]
 * 00000001800B885E: cmp     cs:dword_1801CE70C, ecx
 * 00000001800B8864: jle     loc_1800B893D
 * 00000001800B886A: lea     rcx, dword_1801CE70C
 * 00000001800B8871: call    sub_18000D534
 * 00000001800B8876: cmp     cs:dword_1801CE70C, r14d
 * 00000001800B887D: jnz     loc_1800B893D
 * 00000001800B8883: lea     rax, unk_1801478A0
 * 00000001800B888A: mov     qword ptr [rbp+8C80h+var_6A70], rax
 * 00000001800B8891: lea     rax, unk_1801492F0
 * 00000001800B8898: mov     qword ptr [rbp+8C80h+var_6A70+8], rax
 * 00000001800B889F: mov     dword ptr [rbp+8C80h+var_6A60], esi
 * 00000001800B88A5: mov     dword ptr [rbp+8C80h+var_6A60+4], esi
 * 00000001800B88AB: call    sub_1800A8988
 * 00000001800B88B0: mov     r8, rax
 * 00000001800B88B3: mov     r9d, r12d
 * 00000001800B88B6: mov     edx, 1F2h
 * 00000001800B88BB: lea     rcx, [rbp+8C80h+var_110]
 * 00000001800B88C2: call    sub_180075CF8
 * 00000001800B88C7: nop
 * 00000001800B88C8: mov     r8, rax
 * 00000001800B88CB: mov     rdx, r13
 * 00000001800B88CE: lea     rcx, [rbp+8C80h+var_130]
 * 00000001800B88D5: call    sub_18001C928
 * 00000001800B88DA: nop
 * 00000001800B88DB: lea     r8, aVertex; "/Vertex"
 * 00000001800B88E2: mov     rdx, rax
 * 00000001800B88E5: lea     rcx, [rbp+8C80h+var_4710]
 * 00000001800B88EC: call    sub_18001C87C
 * 00000001800B88F1: movups  xmm0, [rbp+8C80h+var_6A70]
 * 00000001800B88F8: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B88FD: movups  xmm1, [rbp+8C80h+var_6A60]
 * 00000001800B8904: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B8909: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B890E: mov     rcx, rax
 * 00000001800B8911: call    sub_180075D94
 * 00000001800B8916: nop
 * 00000001800B8917: lea     rcx, [rbp+8C80h+var_130]
 * 00000001800B891E: call    sub_180011E30
 * 00000001800B8923: nop
 * 00000001800B8924: lea     rcx, [rbp+8C80h+var_110]
 * 00000001800B892B: call    sub_180011E30
 * 00000001800B8930: nop
 * 00000001800B8931: lea     rcx, dword_1801CE70C
 * 00000001800B8938: call    sub_18000D4CC
 * 00000001800B893D: mov     rax, [rdi+rbx*8]
 * 00000001800B8941: mov     ecx, [r15+rax]
 * 00000001800B8945: cmp     cs:dword_1801CE710, ecx
 * 00000001800B894B: jle     loc_1800B8A24
 * 00000001800B8951: lea     rcx, dword_1801CE710
 * 00000001800B8958: call    sub_18000D534
 * 00000001800B895D: cmp     cs:dword_1801CE710, r14d
 * 00000001800B8964: jnz     loc_1800B8A24
 * 00000001800B896A: lea     rax, unk_1801478A0
 * 00000001800B8971: mov     qword ptr [rbp+8C80h+var_6A50], rax
 * 00000001800B8978: lea     rax, unk_1801492F0
 * 00000001800B897F: mov     qword ptr [rbp+8C80h+var_6A50+8], rax
 * 00000001800B8986: mov     dword ptr [rbp+8C80h+var_6A40], esi
 * 00000001800B898C: mov     dword ptr [rbp+8C80h+var_6A40+4], esi
 * 00000001800B8992: call    sub_1800A8988
 * 00000001800B8997: mov     r8, rax
 * 00000001800B899A: mov     r9d, r12d
 * 00000001800B899D: mov     edx, 1F8h
 * 00000001800B89A2: lea     rcx, [rbp+8C80h+var_B0]
 * 00000001800B89A9: call    sub_180075CF8
 * 00000001800B89AE: nop
 * 00000001800B89AF: mov     r8, rax
 * 00000001800B89B2: mov     rdx, r13
 * 00000001800B89B5: lea     rcx, [rbp+8C80h+var_D0]
 * 00000001800B89BC: call    sub_18001C928
 * 00000001800B89C1: nop
 * 00000001800B89C2: lea     r8, aVertex; "/Vertex"
 * 00000001800B89C9: mov     rdx, rax
 * 00000001800B89CC: lea     rcx, [rbp+8C80h+var_46F0]
 * 00000001800B89D3: call    sub_18001C87C
 * 00000001800B89D8: movups  xmm0, [rbp+8C80h+var_6A50]
 * 00000001800B89DF: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B89E4: movups  xmm1, [rbp+8C80h+var_6A40]
 * 00000001800B89EB: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B89F0: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B89F5: mov     rcx, rax
 * 00000001800B89F8: call    sub_180075D94
 * 00000001800B89FD: nop
 * 00000001800B89FE: lea     rcx, [rbp+8C80h+var_D0]
 * 00000001800B8A05: call    sub_180011E30
 * 00000001800B8A0A: nop
 * 00000001800B8A0B: lea     rcx, [rbp+8C80h+var_B0]
 * 00000001800B8A12: call    sub_180011E30
 * 00000001800B8A17: nop
 * 00000001800B8A18: lea     rcx, dword_1801CE710
 * 00000001800B8A1F: call    sub_18000D4CC
 * 00000001800B8A24: mov     rax, [rdi+rbx*8]
 * 00000001800B8A28: mov     ecx, [r15+rax]
 * 00000001800B8A2C: cmp     cs:dword_1801CE714, ecx
 * 00000001800B8A32: jle     loc_1800B8B0B
 * 00000001800B8A38: lea     rcx, dword_1801CE714
 * 00000001800B8A3F: call    sub_18000D534
 * 00000001800B8A44: cmp     cs:dword_1801CE714, r14d
 * 00000001800B8A4B: jnz     loc_1800B8B0B
 * 00000001800B8A51: lea     rax, unk_1801478A0
 * 00000001800B8A58: mov     qword ptr [rbp+8C80h+var_6A30], rax
 * 00000001800B8A5F: lea     rax, unk_1801492F0
 * 00000001800B8A66: mov     qword ptr [rbp+8C80h+var_6A30+8], rax
 * 00000001800B8A6D: mov     dword ptr [rbp+8C80h+var_6A20], esi
 * 00000001800B8A73: mov     dword ptr [rbp+8C80h+var_6A20+4], esi
 * 00000001800B8A79: call    sub_1800A8988
 * 00000001800B8A7E: mov     r8, rax
 * 00000001800B8A81: mov     r9d, r12d
 * 00000001800B8A84: mov     edx, 1FAh
 * 00000001800B8A89: lea     rcx, [rbp+8C80h+var_50]
 * 00000001800B8A90: call    sub_180075CF8
 * 00000001800B8A95: nop
 * 00000001800B8A96: mov     r8, rax
 * 00000001800B8A99: mov     rdx, r13
 * 00000001800B8A9C: lea     rcx, [rbp+8C80h+var_70]
 * 00000001800B8AA3: call    sub_18001C928
 * 00000001800B8AA8: nop
 * 00000001800B8AA9: lea     r8, aVertex; "/Vertex"
 * 00000001800B8AB0: mov     rdx, rax
 * 00000001800B8AB3: lea     rcx, [rbp+8C80h+var_46D0]
 * 00000001800B8ABA: call    sub_18001C87C
 * 00000001800B8ABF: movups  xmm0, [rbp+8C80h+var_6A30]
 * 00000001800B8AC6: movaps  [rsp+8D80h+var_8D58+8], xmm0
 * 00000001800B8ACB: movups  xmm1, [rbp+8C80h+var_6A20]
 * 00000001800B8AD2: movaps  [rsp+8D80h+var_8D48+8], xmm1
 * 00000001800B8AD7: lea     rdx, [rsp+8D80h+var_8D58+8]
 * 00000001800B8ADC: mov     rcx, rax
 * 00000001800B8ADF: call    sub_180075D94
 * 00000001800B8AE4: nop
 * 00000001800B8AE5: lea     rcx, [rbp+8C80h+var_70]
 * 00000001800B8AEC: call    sub_180011E30
 * 00000001800B8AF1: nop
 * 00000001800B8AF2: lea     rcx, [rbp+8C80h+var_50]
 * 00000001800B8AF9: call    sub_180011E30
 * 00000001800B8AFE: nop
 * 00000001800B8AFF: lea     rcx, dword_1801CE714
 * 00000001800B8B06: call    sub_18000D4CC
 * 00000001800B8B0B: xor     eax, eax
 * 00000001800B8B0D: mov     rcx, [rbp+8C80h+var_30]
 * 00000001800B8B14: xor     rcx, rsp; StackCookie
 * 00000001800B8B17: call    __security_check_cookie
 * 00000001800B8B1C: lea     r11, [rsp+8D80h+var_20]
 * 00000001800B8B24: mov     rbx, [r11+30h]
 * 00000001800B8B28: mov     rsi, [r11+38h]
 * 00000001800B8B2C: mov     rdi, [r11+40h]
 * 00000001800B8B30: mov     rsp, r11
 * 00000001800B8B33: pop     r15
 * 00000001800B8B35: pop     r14
 * 00000001800B8B37: pop     r13
 * 00000001800B8B39: pop     r12
 * 00000001800B8B3B: pop     rbp
 * 00000001800B8B3C: retn
 */
