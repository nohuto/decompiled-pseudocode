/*
 * XREFs of HvlRegisterDeviceId @ 0x1405BDD50
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032B890 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032B970 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032BB00 (HvcallInitiateHypercall.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1403E7D98 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1403E7DC0 (HvlpHvToNtStatus.c)
 *     HvlpHandleInsufficientMemory @ 0x140531314 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcpiDeviceIdToHv @ 0x1405BE724 (HvlpAcpiDeviceIdToHv.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

/*
 * Hex-Rays decompilation failed for HvlRegisterDeviceId @ 0x1405BDD50
 * Reason: Hex-Rays returned no pseudocode for 0x1405BDD50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405BDD50: mov     [rsp+arg_8], rbx
 * 00000001405BDD55: mov     [rsp+arg_10], rbp
 * 00000001405BDD5A: push    rsi
 * 00000001405BDD5B: push    rdi
 * 00000001405BDD5C: push    r14
 * 00000001405BDD5E: sub     rsp, 40h
 * 00000001405BDD62: xor     eax, eax
 * 00000001405BDD64: xorps   xmm0, xmm0
 * 00000001405BDD67: mov     [rsp+58h+var_28], rax
 * 00000001405BDD6C: mov     r14, rdx
 * 00000001405BDD6F: mov     dword ptr [rsp+58h+var_20], eax
 * 00000001405BDD73: mov     rsi, rcx
 * 00000001405BDD76: mov     eax, [rcx]
 * 00000001405BDD78: movups  [rsp+58h+var_38], xmm0
 * 00000001405BDD7D: cmp     eax, 1
 * 00000001405BDD80: jnz     short loc_1405BDD86
 * 00000001405BDD82: xor     edi, edi
 * 00000001405BDD84: jmp     short loc_1405BDDA6
 * 00000001405BDD86: cmp     eax, 2
 * 00000001405BDD89: jnz     loc_1405BDEA1
 * 00000001405BDD8F: mov     rax, [rcx+8]
 * 00000001405BDD93: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001405BDD97: inc     rdi
 * 00000001405BDD9A: cmp     byte ptr [rax+rdi], 0
 * 00000001405BDD9E: jnz     short loc_1405BDD97
 * 00000001405BDDA0: add     edi, 8
 * 00000001405BDDA3: and     edi, 0FFFFFFF8h
 * 00000001405BDDA6: mov     ebp, edi
 * 00000001405BDDA8: add     rbp, 28h ; '('
 * 00000001405BDDAC: cmp     rbp, 1000h
 * 00000001405BDDB3: jbe     short loc_1405BDDBF
 * 00000001405BDDB5: mov     eax, 0C000000Dh
 * 00000001405BDDBA: jmp     loc_1405BDEA6
 * 00000001405BDDBF: mov     ecx, 82h
 * 00000001405BDDC4: mov     eax, edi
 * 00000001405BDDC6: shl     eax, 0Eh
 * 00000001405BDDC9: and     eax, 3FE0000h
 * 00000001405BDDCE: mov     [rsp+58h+arg_0], rcx
 * 00000001405BDDD3: or      eax, ecx
 * 00000001405BDDD5: mov     dword ptr [rsp+58h+arg_0], eax
 * 00000001405BDDD9: xor     r9d, r9d
 * 00000001405BDDDC: lea     rcx, [rsp+58h+var_38]
 * 00000001405BDDE1: xor     r8d, r8d
 * 00000001405BDDE4: lea     edx, [r9+1]
 * 00000001405BDDE8: call    HvlpAcquireHypercallPage
 * 00000001405BDDED: mov     r8, rbp; Size
 * 00000001405BDDF0: xor     edx, edx; Val
 * 00000001405BDDF2: mov     rcx, rax; void *
 * 00000001405BDDF5: mov     rbx, rax
 * 00000001405BDDF8: call    memset_0
 * 00000001405BDDFD: mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
 * 00000001405BDE04: lea     rdx, [rbx+8]
 * 00000001405BDE08: cmp     dword ptr [rsi], 1
 * 00000001405BDE0B: jnz     short loc_1405BDE41
 * 00000001405BDE0D: mov     rax, 4000000000000000h
 * 00000001405BDE17: mov     [rdx], rax
 * 00000001405BDE1A: movzx   ecx, word ptr [rsi+8]
 * 00000001405BDE1E: mov     [rbx+0Ah], cx
 * 00000001405BDE22: movzx   eax, word ptr [rsi+0Ch]
 * 00000001405BDE26: mov     [rdx], ax
 * 00000001405BDE29: movzx   eax, word ptr [rbx+0Eh]
 * 00000001405BDE2D: movzx   ecx, ax
 * 00000001405BDE30: xor     cx, [rsi+0Ah]
 * 00000001405BDE34: and     cx, 3
 * 00000001405BDE38: xor     cx, ax
 * 00000001405BDE3B: mov     [rbx+0Eh], cx
 * 00000001405BDE3F: jmp     short loc_1405BDE50
 * 00000001405BDE41: lea     r8, [rbx+28h]
 * 00000001405BDE45: mov     r9d, edi
 * 00000001405BDE48: mov     rcx, rsi
 * 00000001405BDE4B: call    HvlpAcpiDeviceIdToHv
 * 00000001405BDE50: mov     rdx, [rsp+58h+var_20]
 * 00000001405BDE55: xor     r8d, r8d
 * 00000001405BDE58: mov     rcx, [rsp+58h+arg_0]
 * 00000001405BDE5D: or      dword ptr [rbx+10h], 1
 * 00000001405BDE61: mov     [rbx+18h], r14
 * 00000001405BDE65: call    HvcallInitiateHypercall
 * 00000001405BDE6A: lea     rcx, [rsp+58h+var_38]
 * 00000001405BDE6F: mov     rbx, rax
 * 00000001405BDE72: call    HvlpReleaseHypercallPage
 * 00000001405BDE77: movzx   ecx, bx
 * 00000001405BDE7A: call    HvlpHvStatusIsInsufficientMemory
 * 00000001405BDE7F: movzx   ecx, bx
 * 00000001405BDE82: test    al, al
 * 00000001405BDE84: jz      short loc_1405BDE9A
 * 00000001405BDE86: call    HvlpHandleInsufficientMemory
 * 00000001405BDE8B: test    eax, eax
 * 00000001405BDE8D: jns     loc_1405BDDD9
 * 00000001405BDE93: mov     eax, 0C000009Ah
 * 00000001405BDE98: jmp     short loc_1405BDEA6
 * 00000001405BDE9A: call    HvlpHvToNtStatus
 * 00000001405BDE9F: jmp     short loc_1405BDEA6
 * 00000001405BDEA1: mov     eax, 0C00000BBh
 * 00000001405BDEA6: mov     rbx, [rsp+58h+arg_8]
 * 00000001405BDEAB: mov     rbp, [rsp+58h+arg_10]
 * 00000001405BDEB0: add     rsp, 40h
 * 00000001405BDEB4: pop     r14
 * 00000001405BDEB6: pop     rdi
 * 00000001405BDEB7: pop     rsi
 * 00000001405BDEB8: retn
 */
