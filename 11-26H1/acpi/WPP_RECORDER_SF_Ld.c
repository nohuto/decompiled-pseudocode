/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1400688FC
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1400C89FC (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1400688FC
 * Reason: Hex-Rays returned no pseudocode for 0x1400688FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400688FC: mov     r11, rsp
 * 00000001400688FF: mov     [r11+8], rbx
 * 0000000140068903: mov     [r11+10h], rsi
 * 0000000140068907: push    rdi
 * 0000000140068908: sub     rsp, 50h
 * 000000014006890C: mov     rbx, rcx
 * 000000014006890F: mov     esi, 21h ; '!'
 * 0000000140068914: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014006891B: lea     edi, [rsi-1Dh]
 * 000000014006891E: test    dword ptr [rcx+2Ch], 400h
 * 0000000140068925: jz      short loc_14006896A
 * 0000000140068927: cmp     byte ptr [rcx+29h], 2
 * 000000014006892B: jb      short loc_14006896A
 * 000000014006892D: mov     rax, cs:pfnWppTraceMessage
 * 0000000140068934: lea     rdx, [r11+38h]
 * 0000000140068938: mov     rcx, [rcx+18h]
 * 000000014006893C: lea     r8, WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids
 * 0000000140068943: mov     qword ptr [r11-18h], 0
 * 000000014006894B: mov     r9d, esi
 * 000000014006894E: mov     [r11-20h], rdi
 * 0000000140068952: mov     [r11-28h], rdx
 * 0000000140068956: lea     rdx, [r11+30h]
 * 000000014006895A: mov     [r11-30h], rdi
 * 000000014006895E: mov     [r11-38h], rdx
 * 0000000140068962: lea     edx, [rsi+0Ah]
 * 0000000140068965: call    _guard_dispatch_icall
 * 000000014006896A: mov     [rsp+58h+var_10], 0
 * 0000000140068973: lea     rax, [rsp+58h+arg_30]
 * 000000014006897B: mov     [rsp+58h+var_18], rdi
 * 0000000140068980: lea     r9, WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids
 * 0000000140068987: mov     [rsp+58h+var_20], rax
 * 000000014006898C: mov     edx, 2
 * 0000000140068991: lea     rax, [rsp+58h+arg_28]
 * 0000000140068999: mov     [rsp+58h+var_28], rdi
 * 000000014006899E: mov     [rsp+58h+var_30], rax
 * 00000001400689A3: mov     rcx, rbx
 * 00000001400689A6: mov     [rsp+58h+var_38], si
 * 00000001400689AB: lea     r8d, [rdx+9]
 * 00000001400689AF: call    cs:__imp_WppAutoLogTrace
 * 00000001400689B6: nop     dword ptr [rax+rax+00h]
 * 00000001400689BB: mov     rbx, [rsp+58h+arg_0]
 * 00000001400689C0: mov     rsi, [rsp+58h+arg_8]
 * 00000001400689C5: add     rsp, 50h
 * 00000001400689C9: pop     rdi
 * 00000001400689CA: retn
 */
