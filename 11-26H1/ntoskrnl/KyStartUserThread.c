/*
 * XREFs of KyStartUserThread @ 0x14072DB60
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x14072DB60 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x14072DEE0 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x14072DB60
 * Reason: Hex-Rays returned no pseudocode for 0x14072DB60
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072DB60: sub     rsp, 8
 * 000000014072DB64: push    rbp
 * 000000014072DB65: sub     rsp, 158h
 * 000000014072DB6C: lea     rbp, [rsp+80h]
 * 000000014072DB74: mov     [rbp+0E8h+var_138], rax
 * 000000014072DB78: mov     [rbp+0E8h+var_130], rcx
 * 000000014072DB7C: mov     [rbp+0E8h+var_128], rdx
 * 000000014072DB80: mov     [rbp+0E8h+var_120], r8
 * 000000014072DB84: mov     [rbp+0E8h+var_118], r9
 * 000000014072DB88: mov     [rbp+0E8h+var_110], r10
 * 000000014072DB8C: mov     [rbp+0E8h+var_108], r11
 * 000000014072DB90: test    [rbp+0E8h+arg_0], 1
 * 000000014072DB97: jnz     short loc_14072DBD1
 * 000000014072DB99: xor     edx, edx
 * 000000014072DB9B: rdsspq  rdx
 * 000000014072DBA0: mov     [rbp+0E8h+var_90], rdx
 * 000000014072DBA4: lfence
 * 000000014072DBA7: test    byte ptr gs:898h, 1
 * 000000014072DBB0: jnz     short loc_14072DBBA
 * 000000014072DBB2: lfence
 * 000000014072DBB5: jmp     loc_14072DE42
 * 000000014072DBBA: movzx   eax, word ptr gs:8A6h
 * 000000014072DBC3: mov     ecx, 48h ; 'H'
 * 000000014072DBC8: xor     edx, edx
 * 000000014072DBCA: wrmsr
 * 000000014072DBCC: jmp     loc_14072DE42
 * 000000014072DBD1: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072DBD8: jnz     short loc_14072DBDD
 * 000000014072DBDA: swapgs
 * 000000014072DBDD: lfence
 * 000000014072DBE0: mov     rcx, gs:9D68h
 * 000000014072DBE9: test    rcx, rcx
 * 000000014072DBEC: jz      short loc_14072DC0D
 * 000000014072DBEE: rdsspq  rdx
 * 000000014072DBF3: mov     r10, gs:9D60h
 * 000000014072DBFC: add     r10, 8
 * 000000014072DC00: cmp     rdx, r10
 * 000000014072DC03: jnz     short loc_14072DC0D
 * 000000014072DC05: rstorssp qword ptr [rcx]
 * 000000014072DC09: saveprevssp
 * 000000014072DC0D: mov     r10, gs:188h
 * 000000014072DC16: mov     rcx, gs:188h
 * 000000014072DC1F: mov     rcx, [rcx+220h]
 * 000000014072DC26: mov     rcx, [rcx+760h]
 * 000000014072DC2D: mov     gs:890h, rcx
 * 000000014072DC36: mov     cx, gs:8A2h
 * 000000014072DC3F: mov     gs:8A4h, cx
 * 000000014072DC48: mov     cl, gs:898h
 * 000000014072DC50: mov     gs:89Ah, cl
 * 000000014072DC58: movzx   eax, word ptr gs:8A8h
 * 000000014072DC61: cmp     gs:8A6h, ax
 * 000000014072DC6A: jz      short loc_14072DC7E
 * 000000014072DC6C: mov     gs:8A6h, ax
 * 000000014072DC75: mov     ecx, 48h ; 'H'
 * 000000014072DC7A: xor     edx, edx
 * 000000014072DC7C: wrmsr
 * 000000014072DC7E: movzx   edx, byte ptr gs:898h
 * 000000014072DC87: test    edx, 8
 * 000000014072DC8D: jz      short loc_14072DCA6
 * 000000014072DC8F: mov     eax, 1
 * 000000014072DC94: xor     edx, edx
 * 000000014072DC96: mov     ecx, 49h ; 'I'
 * 000000014072DC9B: wrmsr
 * 000000014072DC9D: movzx   edx, byte ptr gs:898h
 * 000000014072DCA6: test    edx, 2
 * 000000014072DCAC: jz      loc_14072DDE9
 * 000000014072DCB2: call    loc_14072DDC5
 * 000000014072DCB7: add     rsp, 8
 * 000000014072DCBB: call    loc_14072DDCE
 * 000000014072DCC0: add     rsp, 8
 * 000000014072DCC4: call    loc_14072DCB7
 * 000000014072DCC9: add     rsp, 8
 * 000000014072DCCD: call    loc_14072DCC0
 * 000000014072DCD2: add     rsp, 8
 * 000000014072DCD6: call    loc_14072DCC9
 * 000000014072DCDB: add     rsp, 8
 * 000000014072DCDF: call    loc_14072DCD2
 * 000000014072DCE4: add     rsp, 8
 * 000000014072DCE8: call    loc_14072DCDB
 * 000000014072DCED: add     rsp, 8
 * 000000014072DCF1: call    loc_14072DCE4
 * 000000014072DCF6: add     rsp, 8
 * 000000014072DCFA: call    loc_14072DCED
 * 000000014072DCFF: add     rsp, 8
 * 000000014072DD03: call    loc_14072DCF6
 * 000000014072DD08: add     rsp, 8
 * 000000014072DD0C: call    loc_14072DCFF
 * 000000014072DD11: add     rsp, 8
 * 000000014072DD15: call    loc_14072DD08
 * 000000014072DD1A: add     rsp, 8
 * 000000014072DD1E: call    loc_14072DD11
 * 000000014072DD23: add     rsp, 8
 * 000000014072DD27: call    loc_14072DD1A
 * 000000014072DD2C: add     rsp, 8
 * 000000014072DD30: call    loc_14072DD23
 * 000000014072DD35: add     rsp, 8
 * 000000014072DD39: call    loc_14072DD2C
 * 000000014072DD3E: add     rsp, 8
 * 000000014072DD42: call    loc_14072DD35
 * 000000014072DD47: add     rsp, 8
 * 000000014072DD4B: call    loc_14072DD3E
 * 000000014072DD50: add     rsp, 8
 * 000000014072DD54: call    loc_14072DD47
 * 000000014072DD59: add     rsp, 8
 * 000000014072DD5D: call    loc_14072DD50
 * 000000014072DD62: add     rsp, 8
 * 000000014072DD66: call    loc_14072DD59
 * 000000014072DD6B: add     rsp, 8
 * 000000014072DD6F: call    loc_14072DD62
 * 000000014072DD74: add     rsp, 8
 * 000000014072DD78: call    loc_14072DD6B
 * 000000014072DD7D: add     rsp, 8
 * 000000014072DD81: call    loc_14072DD74
 * 000000014072DD86: add     rsp, 8
 * 000000014072DD8A: call    loc_14072DD7D
 * 000000014072DD8F: add     rsp, 8
 * 000000014072DD93: call    loc_14072DD86
 * 000000014072DD98: add     rsp, 8
 * 000000014072DD9C: call    loc_14072DD8F
 * 000000014072DDA1: add     rsp, 8
 * 000000014072DDA5: call    loc_14072DD98
 * 000000014072DDAA: add     rsp, 8
 * 000000014072DDAE: call    loc_14072DDA1
 * 000000014072DDB3: add     rsp, 8
 * 000000014072DDB7: call    loc_14072DDAA
 * 000000014072DDBC: add     rsp, 8
 * 000000014072DDC0: call    loc_14072DDB3
 * 000000014072DDC5: add     rsp, 8
 * 000000014072DDC9: call    loc_14072DDBC
 * 000000014072DDCE: add     rsp, 8
 * 000000014072DDD2: mov     eax, 0DADAh
 * 000000014072DDD7: test    byte ptr gs:89Ch, 8
 * 000000014072DDE0: jz      short loc_14072DDE9
 * 000000014072DDE2: mov     al, 20h ; ' '
 * 000000014072DDE4: incsspq rax
 * 000000014072DDE9: test    edx, 80h
 * 000000014072DDEF: jz      short loc_14072DDF9
 * 000000014072DDF1: lfence
 * 000000014072DDF4: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072DDF9: lfence
 * 000000014072DDFC: mov     byte ptr gs:89Eh, 0
 * 000000014072DE05: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072DE0C: jz      short loc_14072DE2D
 * 000000014072DE0E: mov     ecx, 6A7h
 * 000000014072DE13: rdmsr
 * 000000014072DE15: cmp     edx, 0
 * 000000014072DE18: jz      short loc_14072DE2D
 * 000000014072DE1A: mov     ecx, edx
 * 000000014072DE1C: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072DE22: cmp     edx, ecx
 * 000000014072DE24: jz      short loc_14072DE2D
 * 000000014072DE26: mov     ecx, 6A7h
 * 000000014072DE2B: wrmsr
 * 000000014072DE2D: test    byte ptr [r10+3], 3
 * 000000014072DE32: mov     [rbp+0E8h+var_68], 0
 * 000000014072DE3B: jz      short loc_14072DE42
 * 000000014072DE3D: call    KiSaveDebugRegisterState
 * 000000014072DE42: cld
 * 000000014072DE43: stmxcsr [rbp+0E8h+var_13C]
 * 000000014072DE47: ldmxcsr dword ptr gs:180h
 * 000000014072DE50: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014072DE54: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014072DE58: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014072DE5C: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014072DE60: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014072DE64: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014072DE68: test    [rbp+0E8h+arg_0], 1
 * 000000014072DE6F: jz      short KyStartUserThreadDispatchTrap
 * 000000014072DE71: mov     r10, gs:188h
 * 000000014072DE7A: test    byte ptr [r10+3], 80h
 * 000000014072DE7F: jz      short KyStartUserThreadDispatchTrap
 * 000000014072DE81: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072DE86: mov     [rbp+0E8h+var_13D], 1
 * 000000014072DE8A: test    byte ptr cs:KiTrapFeatures, 8
 * 000000014072DE91: jz      short loc_14072DEB4
 * 000000014072DE93: test    [rbp+0E8h+arg_0], 1
 * 000000014072DE9A: jnz     short loc_14072DEB1
 * 000000014072DE9C: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072DEA3: jz      short loc_14072DEB4
 * 000000014072DEA5: test    [rbp+0E8h+arg_8], 40000h
 * 000000014072DEAF: jz      short loc_14072DEB4
 * 000000014072DEB1: stac
 * 000000014072DEB4: test    [rbp+0E8h+arg_8], 200h
 * 000000014072DEBE: jz      short loc_14072DEC1
 * 000000014072DEC0: sti
 * 000000014072DEC1: call    KxStartUserThread
 * 000000014072DEC6: nop     word ptr [rax+rax+00000000h]
 * 000000014072DED0: nop
 * 000000014072DED1: retn
 */
