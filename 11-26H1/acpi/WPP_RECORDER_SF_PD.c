/*
 * XREFs of WPP_RECORDER_SF_PD @ 0x140066970
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x140037F90 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PD @ 0x140066970
 * Reason: Hex-Rays returned no pseudocode for 0x140066970
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140066970: mov     r11, rsp
 * 0000000140066973: mov     [r11+8], rbx
 * 0000000140066977: push    rbp
 * 0000000140066978: sub     rsp, 60h
 * 000000014006697C: mov     rbx, rcx
 * 000000014006697F: mov     [rsp+68h+var_18], 0C000009Ah
 * 0000000140066987: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014006698E: mov     ebp, 16h
 * 0000000140066993: test    dword ptr [rcx+2Ch], 100000h
 * 000000014006699A: jz      short loc_1400669E7
 * 000000014006699C: cmp     byte ptr [rcx+29h], 2
 * 00000001400669A0: jb      short loc_1400669E7
 * 00000001400669A2: mov     rax, cs:pfnWppTraceMessage
 * 00000001400669A9: lea     rdx, [r11-18h]
 * 00000001400669AD: mov     rcx, [rcx+18h]
 * 00000001400669B1: lea     r8, WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids
 * 00000001400669B8: mov     qword ptr [r11-28h], 0
 * 00000001400669C0: mov     r9d, ebp
 * 00000001400669C3: mov     qword ptr [r11-30h], 4
 * 00000001400669CB: mov     [r11-38h], rdx
 * 00000001400669CF: lea     rdx, [r11+30h]
 * 00000001400669D3: mov     qword ptr [r11-40h], 8
 * 00000001400669DB: mov     [r11-48h], rdx
 * 00000001400669DF: lea     edx, [rbp+15h]
 * 00000001400669E2: call    _guard_dispatch_icall
 * 00000001400669E7: mov     [rsp+68h+var_20], 0
 * 00000001400669F0: lea     rax, [rsp+68h+var_18]
 * 00000001400669F5: mov     [rsp+68h+var_28], 4
 * 00000001400669FE: lea     r9, WPP_ddc14e6fd4133db509d0c44d0c15805e_Traceguids
 * 0000000140066A05: mov     [rsp+68h+var_30], rax
 * 0000000140066A0A: mov     edx, 2
 * 0000000140066A0F: lea     rax, [rsp+68h+arg_28]
 * 0000000140066A17: mov     [rsp+68h+var_38], 8
 * 0000000140066A20: mov     [rsp+68h+var_40], rax
 * 0000000140066A25: mov     rcx, rbx
 * 0000000140066A28: mov     [rsp+68h+var_48], bp
 * 0000000140066A2D: lea     r8d, [rdx+13h]
 * 0000000140066A31: call    cs:__imp_WppAutoLogTrace
 * 0000000140066A38: nop     dword ptr [rax+rax+00h]
 * 0000000140066A3D: mov     rbx, [rsp+68h+arg_0]
 * 0000000140066A42: add     rsp, 60h
 * 0000000140066A46: pop     rbp
 * 0000000140066A47: retn
 */
