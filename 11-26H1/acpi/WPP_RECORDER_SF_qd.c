/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x14003D714
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x140034DD0 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004D1AC (AcpiConvertMethodArgumentsToObjData.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x14004E18C (OSNotifyDeviceWakeByInterrupt.c)
 *     AcpiSetupNativeMethodContext @ 0x1400545E0 (AcpiSetupNativeMethodContext.c)
 *     AcpiAllocateNativeMethodOutputBuffer @ 0x140065CC0 (AcpiAllocateNativeMethodOutputBuffer.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1400661C8 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     ACPIRootDeviceDiscoverDeviceCompletion @ 0x140068D40 (ACPIRootDeviceDiscoverDeviceCompletion.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1400AFA38 (AcpiExternalTranslateBiosToNtResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400B51C0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPILoadTableCheckSum @ 0x1400DD30C (ACPILoadTableCheckSum.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x14003D714
 * Reason: Hex-Rays returned no pseudocode for 0x14003D714
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014003D714: mov     [rsp+arg_0], rbx
 * 000000014003D719: mov     [rsp+arg_8], rbp
 * 000000014003D71E: mov     [rsp+arg_10], rsi
 * 000000014003D723: push    rdi
 * 000000014003D724: push    r14
 * 000000014003D726: push    r15
 * 000000014003D728: sub     rsp, 50h
 * 000000014003D72C: mov     r14d, r8d
 * 000000014003D72F: mov     r15, rcx
 * 000000014003D732: mov     edi, r8d
 * 000000014003D735: shr     rdi, 10h
 * 000000014003D739: movzx   esi, dl
 * 000000014003D73C: lea     ebx, [r14-1]
 * 000000014003D740: movzx   ebp, r9w
 * 000000014003D744: mov     r10d, ebx
 * 000000014003D747: and     ebx, 1Fh
 * 000000014003D74A: shr     r10, 5
 * 000000014003D74E: lea     rax, [rdi+rdi*4]
 * 000000014003D752: and     r10d, 7FFh
 * 000000014003D759: mov     edx, ebx
 * 000000014003D75B: mov     ebx, 4
 * 000000014003D760: lea     r11, [r10+rax*4]
 * 000000014003D764: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014003D76B: mov     eax, [r10+r11*4+2Ch]
 * 000000014003D770: bt      eax, edx
 * 000000014003D773: jnb     short loc_14003D7D3
 * 000000014003D775: lea     rcx, [rdi+rdi*4]
 * 000000014003D779: add     rcx, rcx
 * 000000014003D77C: cmp     [r10+rcx*8+29h], sil
 * 000000014003D781: jb      short loc_14003D7D3
 * 000000014003D783: mov     rax, cs:pfnWppTraceMessage
 * 000000014003D78A: lea     rdx, [rsp+68h+arg_30]
 * 000000014003D792: mov     r8, [rsp+68h+arg_20]
 * 000000014003D79A: mov     r9d, ebp
 * 000000014003D79D: mov     rcx, [r10+rcx*8+18h]
 * 000000014003D7A2: mov     [rsp+68h+var_28], 0
 * 000000014003D7AB: mov     [rsp+68h+var_30], rbx
 * 000000014003D7B0: mov     [rsp+68h+var_38], rdx
 * 000000014003D7B5: lea     rdx, [rsp+68h+arg_28]
 * 000000014003D7BD: mov     [rsp+68h+var_40], 8
 * 000000014003D7C6: mov     [rsp+68h+var_48], rdx
 * 000000014003D7CB: lea     edx, [rbx+27h]
 * 000000014003D7CE: call    _guard_dispatch_icall
 * 000000014003D7D3: mov     r9, [rsp+68h+arg_20]
 * 000000014003D7DB: lea     rax, [rsp+68h+arg_30]
 * 000000014003D7E3: mov     [rsp+68h+var_20], 0
 * 000000014003D7EC: mov     r8d, r14d
 * 000000014003D7EF: mov     [rsp+68h+var_28], rbx
 * 000000014003D7F4: mov     edx, esi
 * 000000014003D7F6: mov     [rsp+68h+var_30], rax
 * 000000014003D7FB: mov     rcx, r15
 * 000000014003D7FE: lea     rax, [rsp+68h+arg_28]
 * 000000014003D806: mov     [rsp+68h+var_38], 8
 * 000000014003D80F: mov     [rsp+68h+var_40], rax
 * 000000014003D814: mov     word ptr [rsp+68h+var_48], bp
 * 000000014003D819: call    cs:__imp_WppAutoLogTrace
 * 000000014003D820: nop     dword ptr [rax+rax+00h]
 * 000000014003D825: lea     r11, [rsp+68h+var_18]
 * 000000014003D82A: mov     rbx, [r11+20h]
 * 000000014003D82E: mov     rbp, [r11+28h]
 * 000000014003D832: mov     rsi, [r11+30h]
 * 000000014003D836: mov     rsp, r11
 * 000000014003D839: pop     r15
 * 000000014003D83B: pop     r14
 * 000000014003D83D: pop     rdi
 * 000000014003D83E: retn
 */
