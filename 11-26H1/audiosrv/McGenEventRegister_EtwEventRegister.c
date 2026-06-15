/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180153470
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180152F9C (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180153470
 * Reason: Hex-Rays returned no pseudocode for 0x180153470
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180153470: sub     rsp, 28h
 * 0000000180153474: xor     eax, eax
 * 0000000180153476: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 000000018015347D: jnz     short loc_1801534A3
 * 000000018015347F: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 0000000180153486: mov     r9, r8
 * 0000000180153489: lea     rdx, McGenControlCallbackV2
 * 0000000180153490: lea     rcx, AUDIO_EVENT_PROVIDER
 * 0000000180153497: call    cs:__imp_EtwEventRegister
 * 000000018015349E: nop     dword ptr [rax+rax+00h]
 * 00000001801534A3: add     rsp, 28h
 * 00000001801534A7: retn
 */
