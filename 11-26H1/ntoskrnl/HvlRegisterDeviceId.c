/*
 * XREFs of HvlRegisterDeviceId @ 0x1405C05C0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvStatusIsInsufficientMemory @ 0x1402F4C78 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1402F4CA0 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcpiDeviceIdToHv @ 0x1405C0F94 (HvlpAcpiDeviceIdToHv.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

/*
 * Hex-Rays decompilation failed for HvlRegisterDeviceId @ 0x1405C05C0
 * Reason: Hex-Rays returned no pseudocode for 0x1405C05C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405C05C0: mov     [rsp+arg_8], rbx
 * 00000001405C05C5: mov     [rsp+arg_10], rbp
 * 00000001405C05CA: push    rsi
 * 00000001405C05CB: push    rdi
 * 00000001405C05CC: push    r14
 * 00000001405C05CE: sub     rsp, 40h
 * 00000001405C05D2: xor     eax, eax
 * 00000001405C05D4: xorps   xmm0, xmm0
 * 00000001405C05D7: mov     [rsp+58h+var_28], rax
 * 00000001405C05DC: mov     r14, rdx
 * 00000001405C05DF: mov     dword ptr [rsp+58h+var_20], eax
 * 00000001405C05E3: mov     rsi, rcx
 * 00000001405C05E6: mov     eax, [rcx]
 * 00000001405C05E8: movups  [rsp+58h+var_38], xmm0
 * 00000001405C05ED: cmp     eax, 1
 * 00000001405C05F0: jnz     short loc_1405C05F6
 * 00000001405C05F2: xor     edi, edi
 * 00000001405C05F4: jmp     short loc_1405C0616
 * 00000001405C05F6: cmp     eax, 2
 * 00000001405C05F9: jnz     loc_1405C0711
 * 00000001405C05FF: mov     rax, [rcx+8]
 * 00000001405C0603: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001405C0607: inc     rdi
 * 00000001405C060A: cmp     byte ptr [rax+rdi], 0
 * 00000001405C060E: jnz     short loc_1405C0607
 * 00000001405C0610: add     edi, 8
 * 00000001405C0613: and     edi, 0FFFFFFF8h
 * 00000001405C0616: mov     ebp, edi
 * 00000001405C0618: add     rbp, 28h ; '('
 * 00000001405C061C: cmp     rbp, 1000h
 * 00000001405C0623: jbe     short loc_1405C062F
 * 00000001405C0625: mov     eax, 0C000000Dh
 * 00000001405C062A: jmp     loc_1405C0716
 * 00000001405C062F: mov     ecx, 82h
 * 00000001405C0634: mov     eax, edi
 * 00000001405C0636: shl     eax, 0Eh
 * 00000001405C0639: and     eax, 3FE0000h
 * 00000001405C063E: mov     [rsp+58h+arg_0], rcx
 * 00000001405C0643: or      eax, ecx
 * 00000001405C0645: mov     dword ptr [rsp+58h+arg_0], eax
 * 00000001405C0649: xor     r9d, r9d
 * 00000001405C064C: lea     rcx, [rsp+58h+var_38]
 * 00000001405C0651: xor     r8d, r8d
 * 00000001405C0654: lea     edx, [r9+1]
 * 00000001405C0658: call    HvlpAcquireHypercallPage
 * 00000001405C065D: mov     r8, rbp; Size
 * 00000001405C0660: xor     edx, edx; Val
 * 00000001405C0662: mov     rcx, rax; void *
 * 00000001405C0665: mov     rbx, rax
 * 00000001405C0668: call    memset_0
 * 00000001405C066D: mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
 * 00000001405C0674: lea     rdx, [rbx+8]
 * 00000001405C0678: cmp     dword ptr [rsi], 1
 * 00000001405C067B: jnz     short loc_1405C06B1
 * 00000001405C067D: mov     rax, 4000000000000000h
 * 00000001405C0687: mov     [rdx], rax
 * 00000001405C068A: movzx   ecx, word ptr [rsi+8]
 * 00000001405C068E: mov     [rbx+0Ah], cx
 * 00000001405C0692: movzx   eax, word ptr [rsi+0Ch]
 * 00000001405C0696: mov     [rdx], ax
 * 00000001405C0699: movzx   eax, word ptr [rbx+0Eh]
 * 00000001405C069D: movzx   ecx, ax
 * 00000001405C06A0: xor     cx, [rsi+0Ah]
 * 00000001405C06A4: and     cx, 3
 * 00000001405C06A8: xor     cx, ax
 * 00000001405C06AB: mov     [rbx+0Eh], cx
 * 00000001405C06AF: jmp     short loc_1405C06C0
 * 00000001405C06B1: lea     r8, [rbx+28h]
 * 00000001405C06B5: mov     r9d, edi
 * 00000001405C06B8: mov     rcx, rsi
 * 00000001405C06BB: call    HvlpAcpiDeviceIdToHv
 * 00000001405C06C0: mov     rdx, [rsp+58h+var_20]
 * 00000001405C06C5: xor     r8d, r8d
 * 00000001405C06C8: mov     rcx, [rsp+58h+arg_0]
 * 00000001405C06CD: or      dword ptr [rbx+10h], 1
 * 00000001405C06D1: mov     [rbx+18h], r14
 * 00000001405C06D5: call    HvcallInitiateHypercall
 * 00000001405C06DA: lea     rcx, [rsp+58h+var_38]
 * 00000001405C06DF: mov     rbx, rax
 * 00000001405C06E2: call    HvlpReleaseHypercallPage
 * 00000001405C06E7: movzx   ecx, bx
 * 00000001405C06EA: call    HvlpHvStatusIsInsufficientMemory
 * 00000001405C06EF: movzx   ecx, bx
 * 00000001405C06F2: test    al, al
 * 00000001405C06F4: jz      short loc_1405C070A
 * 00000001405C06F6: call    HvlpHandleInsufficientMemory
 * 00000001405C06FB: test    eax, eax
 * 00000001405C06FD: jns     loc_1405C0649
 * 00000001405C0703: mov     eax, 0C000009Ah
 * 00000001405C0708: jmp     short loc_1405C0716
 * 00000001405C070A: call    HvlpHvToNtStatus
 * 00000001405C070F: jmp     short loc_1405C0716
 * 00000001405C0711: mov     eax, 0C00000BBh
 * 00000001405C0716: mov     rbx, [rsp+58h+arg_8]
 * 00000001405C071B: mov     rbp, [rsp+58h+arg_10]
 * 00000001405C0720: add     rsp, 40h
 * 00000001405C0724: pop     r14
 * 00000001405C0726: pop     rdi
 * 00000001405C0727: pop     rsi
 * 00000001405C0728: retn
 */
