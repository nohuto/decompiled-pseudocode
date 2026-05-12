/*
 * XREFs of sub_1400CC090 @ 0x1400CC090
 * Callers:
 *     sub_140191720 @ 0x140191720 (sub_140191720.c)
 *     sub_1401929D8 @ 0x1401929D8 (sub_1401929D8.c)
 * Callees:
 *     sub_14018CF90 @ 0x14018CF90 (sub_14018CF90.c)
 *     sub_14018CFE0 @ 0x14018CFE0 (sub_14018CFE0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1400CC090 @ 0x1400CC090
 * Reason: Hex-Rays returned no pseudocode for 0x1400CC090
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400CC090: push    rbx
 * 00000001400CC092: sub     rsp, 20h
 * 00000001400CC096: mov     eax, [rcx+90h]
 * 00000001400CC09C: mov     rbx, rcx
 * 00000001400CC09F: bt      rax, 0Bh
 * 00000001400CC0A4: jnb     short loc_1400CC0C2
 * 00000001400CC0A6: call    sub_14018CF90
 * 00000001400CC0AB: mov     rax, [rbx+248h]
 * 00000001400CC0B2: btr     qword ptr [rbx+90h], 0Bh
 * 00000001400CC0BB: and     qword ptr [rax+78h], 0
 * 00000001400CC0C0: jmp     short loc_1400CC0D9
 * 00000001400CC0C2: mov     rax, [rcx+248h]
 * 00000001400CC0C9: test    rax, rax
 * 00000001400CC0CC: jz      short loc_1400CC0D9
 * 00000001400CC0CE: cmp     qword ptr [rax], 0
 * 00000001400CC0D2: jz      short loc_1400CC0D9
 * 00000001400CC0D4: call    sub_14018CFE0
 * 00000001400CC0D9: mov     rax, [rbx+0A0h]
 * 00000001400CC0E0: mov     rcx, [rax+118h]; Handle
 * 00000001400CC0E7: test    rcx, rcx
 * 00000001400CC0EA: jz      short loc_1400CC107
 * 00000001400CC0EC: call    cs:PoUnregisterPowerSettingCallback
 * 00000001400CC0F3: nop     dword ptr [rax+rax+00h]
 * 00000001400CC0F8: mov     rax, [rbx+0A0h]
 * 00000001400CC0FF: and     qword ptr [rax+118h], 0
 * 00000001400CC107: mov     rax, [rbx+0A0h]
 * 00000001400CC10E: mov     rcx, [rax+120h]
 * 00000001400CC115: test    rcx, rcx
 * 00000001400CC118: jz      short loc_1400CC135
 * 00000001400CC11A: call    cs:PoUnregisterCoalescingCallback
 * 00000001400CC121: nop     dword ptr [rax+rax+00h]
 * 00000001400CC126: mov     rax, [rbx+0A0h]
 * 00000001400CC12D: and     qword ptr [rax+120h], 0
 * 00000001400CC135: mov     rax, [rbx+0A0h]
 * 00000001400CC13C: mov     rcx, [rax+128h]; Handle
 * 00000001400CC143: test    rcx, rcx
 * 00000001400CC146: jz      short loc_1400CC163
 * 00000001400CC148: call    cs:PoUnregisterPowerSettingCallback
 * 00000001400CC14F: nop     dword ptr [rax+rax+00h]
 * 00000001400CC154: mov     rax, [rbx+0A0h]
 * 00000001400CC15B: and     qword ptr [rax+128h], 0
 * 00000001400CC163: mov     rax, [rbx+0A0h]
 * 00000001400CC16A: mov     rcx, [rax+130h]; Handle
 * 00000001400CC171: test    rcx, rcx
 * 00000001400CC174: jz      short loc_1400CC191
 * 00000001400CC176: call    cs:PoUnregisterPowerSettingCallback
 * 00000001400CC17D: nop     dword ptr [rax+rax+00h]
 * 00000001400CC182: mov     rax, [rbx+0A0h]
 * 00000001400CC189: and     qword ptr [rax+130h], 0
 * 00000001400CC191: mov     rcx, [rbx+0A0h]
 * 00000001400CC198: mov     eax, [rcx+0B0h]
 * 00000001400CC19E: bt      eax, 10h
 * 00000001400CC1A2: jnb     short loc_1400CC1E4
 * 00000001400CC1A4: btr     eax, 10h
 * 00000001400CC1A8: xor     edx, edx; Enable
 * 00000001400CC1AA: mov     [rcx+0B0h], eax
 * 00000001400CC1B0: mov     rcx, [rbx+0A0h]
 * 00000001400CC1B7: add     rcx, 140h; SymbolicLinkName
 * 00000001400CC1BE: call    cs:IoSetDeviceInterfaceState
 * 00000001400CC1C5: nop     dword ptr [rax+rax+00h]
 * 00000001400CC1CA: mov     rcx, [rbx+0A0h]
 * 00000001400CC1D1: add     rcx, 140h; UnicodeString
 * 00000001400CC1D8: call    cs:RtlFreeUnicodeString
 * 00000001400CC1DF: nop     dword ptr [rax+rax+00h]
 * 00000001400CC1E4: add     rsp, 20h
 * 00000001400CC1E8: pop     rbx
 * 00000001400CC1E9: retn
 */
