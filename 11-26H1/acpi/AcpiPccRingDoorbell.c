/*
 * XREFs of AcpiPccRingDoorbell @ 0x140065000
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x140064B50 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     AcpiPccLockSubspace @ 0x14004B9A0 (AcpiPccLockSubspace.c)
 *     AcpiPccUpdateSciRefCount @ 0x14004D418 (AcpiPccUpdateSciRefCount.c)
 *     AcpiPccUpdateDoorbellRegister @ 0x1400517FC (AcpiPccUpdateDoorbellRegister.c)
 *     AcpiPccLinkInterrupt @ 0x1400654F4 (AcpiPccLinkInterrupt.c)
 *     AcpiPccUpdateCommandCompleteStatus @ 0x140065688 (AcpiPccUpdateCommandCompleteStatus.c)
 */

/*
 * Hex-Rays decompilation failed for AcpiPccRingDoorbell @ 0x140065000
 * Reason: Hex-Rays returned no pseudocode for 0x140065000
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140065000: push    rbx
 * 0000000140065002: sub     rsp, 20h
 * 0000000140065006: mov     rbx, rdx
 * 0000000140065009: mov     [rsp+28h+arg_8], 0
 * 000000014006500E: mov     rcx, rbx
 * 0000000140065011: lea     rdx, [rsp+28h+arg_8]
 * 0000000140065016: call    AcpiPccLockSubspace
 * 000000014006501B: mov     ecx, [rbx+8]
 * 000000014006501E: mov     edx, ecx
 * 0000000140065020: shr     edx, 1
 * 0000000140065022: mov     eax, edx
 * 0000000140065024: mov     dword ptr [rbx+308h], 0
 * 000000014006502E: and     eax, 0Fh
 * 0000000140065031: cmp     eax, 7
 * 0000000140065034: jz      short loc_140065040
 * 0000000140065036: add     eax, 0FFFFFFF7h
 * 0000000140065039: test    eax, 0FFFFFFFDh
 * 000000014006503E: jnz     short loc_140065051
 * 0000000140065040: lea     eax, ds:0FFFFFFFFFFFFFFFEh[rdx*2]
 * 0000000140065047: xor     eax, ecx
 * 0000000140065049: and     eax, 1Eh
 * 000000014006504C: xor     eax, ecx
 * 000000014006504E: mov     [rbx+8], eax
 * 0000000140065051: mov     eax, 1
 * 0000000140065056: mov     dl, 1
 * 0000000140065058: xchg    eax, [rbx+230h]
 * 000000014006505E: mov     rcx, rbx
 * 0000000140065061: call    AcpiPccUpdateSciRefCount
 * 0000000140065066: cmp     byte ptr [rbx], 3
 * 0000000140065069: jnz     short loc_14006509C
 * 000000014006506B: call    AcpiPccLinkInterrupt
 * 0000000140065070: cmp     eax, 1
 * 0000000140065073: jnz     short loc_140065094
 * 0000000140065075: mov     rcx, [rbx+0D0h]; Interrupt
 * 000000014006507C: lea     rdx, AcpiPccRingDoorbellCriticalSection; SynchronizeRoutine
 * 0000000140065083: mov     r8, rbx; SynchronizeContext
 * 0000000140065086: call    cs:__imp_KeSynchronizeExecution
 * 000000014006508D: nop     dword ptr [rax+rax+00h]
 * 0000000140065092: jmp     short loc_1400650A4
 * 0000000140065094: mov     rcx, rbx
 * 0000000140065097: call    AcpiPccUpdateCommandCompleteStatus
 * 000000014006509C: mov     rcx, rbx
 * 000000014006509F: call    AcpiPccUpdateDoorbellRegister
 * 00000001400650A4: mov     dl, [rsp+28h+arg_8]
 * 00000001400650A8: mov     rcx, rbx
 * 00000001400650AB: call    AcpiPccUnlockSubspace
 * 00000001400650B0: mov     eax, [rbx+18h]
 * 00000001400650B3: lea     rcx, [rbx+238h]
 * 00000001400650BA: imul    rdx, rax, -0Ah
 * 00000001400650BE: xor     r9d, r9d
 * 00000001400650C1: xor     r8d, r8d
 * 00000001400650C4: call    cs:__imp_KeSetTimer2
 * 00000001400650CB: nop     dword ptr [rax+rax+00h]
 * 00000001400650D0: add     rsp, 20h
 * 00000001400650D4: pop     rbx
 * 00000001400650D5: retn
 */
