/*
 * XREFs of ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1400C10E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1400C1800 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 *     ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1400C2360 (-bXformRound@EXFORMOBJR@@QEBA_NAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@AEAV?$umptr_r@U_POINTL@@@@@Z @ 0x1400C10E0
 * Reason: Hex-Rays returned no pseudocode for 0x1400C10E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400C10E0: mov     r11, rsp
 * 00000001400C10E3: mov     [r11+10h], rbx
 * 00000001400C10E7: mov     [r11+18h], rsi
 * 00000001400C10EB: push    rdi
 * 00000001400C10EC: sub     rsp, 20h
 * 00000001400C10F0: mov     rsi, [rcx+8]
 * 00000001400C10F4: xor     ebx, ebx
 * 00000001400C10F6: mov     rdi, r8
 * 00000001400C10F9: mov     rax, rdx
 * 00000001400C10FC: test    rsi, rsi
 * 00000001400C10FF: jz      short loc_1400C1146
 * 00000001400C1101: mov     [r11+8], rbx
 * 00000001400C1105: test    rax, rax
 * 00000001400C1108: jnz     short loc_1400C114A
 * 00000001400C110A: lea     r8d, [rdx+1]
 * 00000001400C110E: mov     rcx, rdi
 * 00000001400C1111: lea     rdx, [r11+8]
 * 00000001400C1115: call    ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z; umptr_r<_POINTL>::read<_POINTFIX>(_POINTFIX *,unsigned __int64,__int64)
 * 00000001400C111A: cmp     [rdi+19h], bl
 * 00000001400C111D: jnz     short loc_1400C1133
 * 00000001400C111F: cmp     [rdi+18h], bl
 * 00000001400C1122: jnz     short loc_1400C1133
 * 00000001400C1124: mov     rax, [rsp+28h+arg_0]
 * 00000001400C1129: mov     bl, 1
 * 00000001400C112B: or      dword ptr [rsi+48h], 5
 * 00000001400C112F: mov     [rsi+40h], rax
 * 00000001400C1133: mov     al, bl
 * 00000001400C1135: mov     rbx, [rsp+28h+arg_8]
 * 00000001400C113A: mov     rsi, [rsp+28h+arg_10]
 * 00000001400C113F: add     rsp, 20h
 * 00000001400C1143: pop     rdi
 * 00000001400C1144: retn
 * 00000001400C1146: xor     al, al
 * 00000001400C1148: jmp     short loc_1400C1135
 * 00000001400C114A: mov     r9d, 1
 * 00000001400C1150: lea     r8, [rsp+28h+arg_0]
 * 00000001400C1155: mov     rdx, rdi
 * 00000001400C1158: mov     rcx, rax
 * 00000001400C115B: call    ?bXformRound@EXFORMOBJR@@QEBA_NAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z; EXFORMOBJR::bXformRound(umptr_r<_POINTL> &,_POINTFIX *,unsigned __int64)
 * 00000001400C1160: test    al, al
 * 00000001400C1162: jnz     short loc_1400C111A
 * 00000001400C1164: jmp     short loc_1400C1133
 */
