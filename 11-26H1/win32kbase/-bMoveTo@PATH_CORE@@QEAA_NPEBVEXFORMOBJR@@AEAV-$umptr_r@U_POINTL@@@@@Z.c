/*
 * XREFs of ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1400C1780
 * Callers:
 *     <none>
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?bMoveTo@PATH_CORE@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1400C1780
 * Reason: Hex-Rays returned no pseudocode for 0x1400C1780
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400C1780: mov     [rsp+arg_0], rbx
 * 00000001400C1785: push    rdi
 * 00000001400C1786: sub     rsp, 20h
 * 00000001400C178A: mov     [rsp+28h+arg_8], 0
 * 00000001400C1793: mov     rbx, r8
 * 00000001400C1796: mov     rax, rdx
 * 00000001400C1799: mov     rdi, rcx
 * 00000001400C179C: test    rdx, rdx
 * 00000001400C179F: jnz     short loc_1400C17D9
 * 00000001400C17A1: lea     r8d, [rdx+1]
 * 00000001400C17A5: mov     rcx, rbx
 * 00000001400C17A8: lea     rdx, [rsp+28h+arg_8]
 * 00000001400C17AD: call    ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z; umptr_r<_POINTL>::read<_POINTFIX>(_POINTFIX *,unsigned __int64,__int64)
 * 00000001400C17B2: cmp     byte ptr [rbx+19h], 0
 * 00000001400C17B6: jnz     short loc_1400C17F3
 * 00000001400C17B8: cmp     byte ptr [rbx+18h], 0
 * 00000001400C17BC: jnz     short loc_1400C17F3
 * 00000001400C17BE: mov     rcx, [rsp+28h+arg_8]
 * 00000001400C17C3: mov     al, 1
 * 00000001400C17C5: or      dword ptr [rdi+30h], 5
 * 00000001400C17C9: mov     [rdi+28h], rcx
 * 00000001400C17CD: mov     rbx, [rsp+28h+arg_0]
 * 00000001400C17D2: add     rsp, 20h
 * 00000001400C17D6: pop     rdi
 * 00000001400C17D7: retn
 * 00000001400C17D9: mov     r9d, 1
 * 00000001400C17DF: lea     r8, [rsp+28h+arg_8]
 * 00000001400C17E4: mov     rdx, rbx
 * 00000001400C17E7: mov     rcx, rax
 * 00000001400C17EA: call    ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z; EXFORMOBJR::bXformRound(umptr_r<_POINTL> &,_POINTFIX *,unsigned __int64)
 * 00000001400C17EF: test    al, al
 * 00000001400C17F1: jnz     short loc_1400C17B2
 * 00000001400C17F3: xor     al, al
 * 00000001400C17F5: jmp     short loc_1400C17CD
 */
