/*
 * XREFs of NvmeAdapterDeleteAsyncCallbacks @ 0x1400D47B0
 * Callers:
 *     NvmeAdapterReleaseResources @ 0x14019DE88 (NvmeAdapterReleaseResources.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019F188 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     NvmeAdapterDisConnectMSIInterrupt @ 0x140199660 (NvmeAdapterDisConnectMSIInterrupt.c)
 *     NvmeAdapterDisConnectNonMSIInterrupt @ 0x1401996B4 (NvmeAdapterDisConnectNonMSIInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for NvmeAdapterDeleteAsyncCallbacks @ 0x1400D47B0
 * Reason: Hex-Rays returned no pseudocode for 0x1400D47B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400D47B0: push    rbx
 * 00000001400D47B2: sub     rsp, 20h
 * 00000001400D47B6: mov     eax, [rcx+90h]
 * 00000001400D47BC: mov     rbx, rcx
 * 00000001400D47BF: bt      rax, 0Bh
 * 00000001400D47C4: jnb     short loc_1400D47E5
 * 00000001400D47C6: call    NvmeAdapterDisConnectMSIInterrupt
 * 00000001400D47CB: mov     rax, [rbx+258h]
 * 00000001400D47D2: btr     qword ptr [rbx+90h], 0Bh
 * 00000001400D47DB: mov     qword ptr [rax+78h], 0
 * 00000001400D47E3: jmp     short loc_1400D47FC
 * 00000001400D47E5: mov     rax, [rcx+258h]
 * 00000001400D47EC: test    rax, rax
 * 00000001400D47EF: jz      short loc_1400D47FC
 * 00000001400D47F1: cmp     qword ptr [rax], 0
 * 00000001400D47F5: jz      short loc_1400D47FC
 * 00000001400D47F7: call    NvmeAdapterDisConnectNonMSIInterrupt
 * 00000001400D47FC: mov     rax, [rbx+0A0h]
 * 00000001400D4803: mov     rcx, [rax+118h]; Handle
 * 00000001400D480A: test    rcx, rcx
 * 00000001400D480D: jz      short loc_1400D482D
 * 00000001400D480F: call    cs:__imp_PoUnregisterPowerSettingCallback
 * 00000001400D4816: nop     dword ptr [rax+rax+00h]
 * 00000001400D481B: mov     rax, [rbx+0A0h]
 * 00000001400D4822: mov     qword ptr [rax+118h], 0
 * 00000001400D482D: mov     rax, [rbx+0A0h]
 * 00000001400D4834: mov     rcx, [rax+120h]
 * 00000001400D483B: test    rcx, rcx
 * 00000001400D483E: jz      short loc_1400D485E
 * 00000001400D4840: call    cs:__imp_PoUnregisterCoalescingCallback
 * 00000001400D4847: nop     dword ptr [rax+rax+00h]
 * 00000001400D484C: mov     rax, [rbx+0A0h]
 * 00000001400D4853: mov     qword ptr [rax+120h], 0
 * 00000001400D485E: mov     rax, [rbx+0A0h]
 * 00000001400D4865: mov     rcx, [rax+128h]; Handle
 * 00000001400D486C: test    rcx, rcx
 * 00000001400D486F: jz      short loc_1400D488F
 * 00000001400D4871: call    cs:__imp_PoUnregisterPowerSettingCallback
 * 00000001400D4878: nop     dword ptr [rax+rax+00h]
 * 00000001400D487D: mov     rax, [rbx+0A0h]
 * 00000001400D4884: mov     qword ptr [rax+128h], 0
 * 00000001400D488F: mov     rax, [rbx+0A0h]
 * 00000001400D4896: mov     rcx, [rax+130h]; Handle
 * 00000001400D489D: test    rcx, rcx
 * 00000001400D48A0: jz      short loc_1400D48C0
 * 00000001400D48A2: call    cs:__imp_PoUnregisterPowerSettingCallback
 * 00000001400D48A9: nop     dword ptr [rax+rax+00h]
 * 00000001400D48AE: mov     rax, [rbx+0A0h]
 * 00000001400D48B5: mov     qword ptr [rax+130h], 0
 * 00000001400D48C0: mov     rcx, [rbx+0A0h]
 * 00000001400D48C7: mov     eax, [rcx+0B0h]
 * 00000001400D48CD: bt      eax, 10h
 * 00000001400D48D1: jnb     short loc_1400D4913
 * 00000001400D48D3: btr     eax, 10h
 * 00000001400D48D7: xor     edx, edx; Enable
 * 00000001400D48D9: mov     [rcx+0B0h], eax
 * 00000001400D48DF: mov     rcx, [rbx+0A0h]
 * 00000001400D48E6: add     rcx, 140h; SymbolicLinkName
 * 00000001400D48ED: call    cs:__imp_IoSetDeviceInterfaceState
 * 00000001400D48F4: nop     dword ptr [rax+rax+00h]
 * 00000001400D48F9: mov     rcx, [rbx+0A0h]
 * 00000001400D4900: add     rcx, 140h; UnicodeString
 * 00000001400D4907: call    cs:__imp_RtlFreeUnicodeString
 * 00000001400D490E: nop     dword ptr [rax+rax+00h]
 * 00000001400D4913: add     rsp, 20h
 * 00000001400D4917: pop     rbx
 * 00000001400D4918: retn
 */
