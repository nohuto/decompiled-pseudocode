/*
 * XREFs of KiVmbusInterrupt3 @ 0x14072DB10
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140C5A1C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140422100 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x140446060 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140533CB0 (KiSaveDebugRegisterState.c)
 *     KeWakeProcessor @ 0x1405F0F90 (KeWakeProcessor.c)
 *     KiVmbusInterrupt3 @ 0x14072DB10 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x14073CF80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x14072DB10
 * Reason: Hex-Rays returned no pseudocode for 0x14072DB10
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072DB10: push    4
 * 000000014072DB12: push    rbp
 * 000000014072DB13: sub     rsp, 158h
 * 000000014072DB1A: lea     rbp, [rsp+168h+var_E8]
 * 000000014072DB22: mov     [rbp+0D0h], rsi
 * 000000014072DB29: mov     [rbp-50h], rax
 * 000000014072DB2D: mov     [rbp-48h], rcx
 * 000000014072DB31: mov     [rbp-40h], rdx
 * 000000014072DB35: mov     [rbp-38h], r8
 * 000000014072DB39: mov     [rbp-30h], r9
 * 000000014072DB3D: mov     [rbp-28h], r10
 * 000000014072DB41: mov     [rbp-20h], r11
 * 000000014072DB45: test    byte ptr [rbp+0F0h], 1
 * 000000014072DB4C: jnz     short loc_14072DB86
 * 000000014072DB4E: xor     edx, edx
 * 000000014072DB50: rdsspq  rdx
 * 000000014072DB55: mov     [rbp+58h], rdx
 * 000000014072DB59: lfence
 * 000000014072DB5C: test    byte ptr gs:898h, 1
 * 000000014072DB65: jnz     short loc_14072DB6F
 * 000000014072DB67: lfence
 * 000000014072DB6A: jmp     loc_14072DDF7
 * 000000014072DB6F: movzx   eax, word ptr gs:8A6h
 * 000000014072DB78: mov     ecx, 48h ; 'H'
 * 000000014072DB7D: xor     edx, edx
 * 000000014072DB7F: wrmsr
 * 000000014072DB81: jmp     loc_14072DDF7
 * 000000014072DB86: test    byte ptr cs:KiTrapFeatures, 1
 * 000000014072DB8D: jnz     short loc_14072DB92
 * 000000014072DB8F: swapgs
 * 000000014072DB92: lfence
 * 000000014072DB95: mov     rcx, gs:9D68h
 * 000000014072DB9E: test    rcx, rcx
 * 000000014072DBA1: jz      short loc_14072DBC2
 * 000000014072DBA3: rdsspq  rdx
 * 000000014072DBA8: mov     r10, gs:9D60h
 * 000000014072DBB1: add     r10, 8
 * 000000014072DBB5: cmp     rdx, r10
 * 000000014072DBB8: jnz     short loc_14072DBC2
 * 000000014072DBBA: rstorssp qword ptr [rcx]
 * 000000014072DBBE: saveprevssp
 * 000000014072DBC2: mov     r10, gs:188h
 * 000000014072DBCB: mov     rcx, gs:188h
 * 000000014072DBD4: mov     rcx, [rcx+220h]
 * 000000014072DBDB: mov     rcx, [rcx+760h]
 * 000000014072DBE2: mov     gs:890h, rcx
 * 000000014072DBEB: mov     cx, gs:8A2h
 * 000000014072DBF4: mov     gs:8A4h, cx
 * 000000014072DBFD: mov     cl, gs:898h
 * 000000014072DC05: mov     gs:89Ah, cl
 * 000000014072DC0D: movzx   eax, word ptr gs:8A8h
 * 000000014072DC16: cmp     gs:8A6h, ax
 * 000000014072DC1F: jz      short loc_14072DC33
 * 000000014072DC21: mov     gs:8A6h, ax
 * 000000014072DC2A: mov     ecx, 48h ; 'H'
 * 000000014072DC2F: xor     edx, edx
 * 000000014072DC31: wrmsr
 * 000000014072DC33: movzx   edx, byte ptr gs:898h
 * 000000014072DC3C: test    edx, 8
 * 000000014072DC42: jz      short loc_14072DC5B
 * 000000014072DC44: mov     eax, 1
 * 000000014072DC49: xor     edx, edx
 * 000000014072DC4B: mov     ecx, 49h ; 'I'
 * 000000014072DC50: wrmsr
 * 000000014072DC52: movzx   edx, byte ptr gs:898h
 * 000000014072DC5B: test    edx, 2
 * 000000014072DC61: jz      loc_14072DD9E
 * 000000014072DC67: call    loc_14072DD7A
 * 000000014072DC6C: add     rsp, 8
 * 000000014072DC70: call    loc_14072DD83
 * 000000014072DC75: add     rsp, 8
 * 000000014072DC79: call    loc_14072DC6C
 * 000000014072DC7E: add     rsp, 8
 * 000000014072DC82: call    loc_14072DC75
 * 000000014072DC87: add     rsp, 8
 * 000000014072DC8B: call    loc_14072DC7E
 * 000000014072DC90: add     rsp, 8
 * 000000014072DC94: call    loc_14072DC87
 * 000000014072DC99: add     rsp, 8
 * 000000014072DC9D: call    loc_14072DC90
 * 000000014072DCA2: add     rsp, 8
 * 000000014072DCA6: call    loc_14072DC99
 * 000000014072DCAB: add     rsp, 8
 * 000000014072DCAF: call    loc_14072DCA2
 * 000000014072DCB4: add     rsp, 8
 * 000000014072DCB8: call    loc_14072DCAB
 * 000000014072DCBD: add     rsp, 8
 * 000000014072DCC1: call    loc_14072DCB4
 * 000000014072DCC6: add     rsp, 8
 * 000000014072DCCA: call    loc_14072DCBD
 * 000000014072DCCF: add     rsp, 8
 * 000000014072DCD3: call    loc_14072DCC6
 * 000000014072DCD8: add     rsp, 8
 * 000000014072DCDC: call    loc_14072DCCF
 * 000000014072DCE1: add     rsp, 8
 * 000000014072DCE5: call    loc_14072DCD8
 * 000000014072DCEA: add     rsp, 8
 * 000000014072DCEE: call    loc_14072DCE1
 * 000000014072DCF3: add     rsp, 8
 * 000000014072DCF7: call    loc_14072DCEA
 * 000000014072DCFC: add     rsp, 8
 * 000000014072DD00: call    loc_14072DCF3
 * 000000014072DD05: add     rsp, 8
 * 000000014072DD09: call    loc_14072DCFC
 * 000000014072DD0E: add     rsp, 8
 * 000000014072DD12: call    loc_14072DD05
 * 000000014072DD17: add     rsp, 8
 * 000000014072DD1B: call    loc_14072DD0E
 * 000000014072DD20: add     rsp, 8
 * 000000014072DD24: call    loc_14072DD17
 * 000000014072DD29: add     rsp, 8
 * 000000014072DD2D: call    loc_14072DD20
 * 000000014072DD32: add     rsp, 8
 * 000000014072DD36: call    loc_14072DD29
 * 000000014072DD3B: add     rsp, 8
 * 000000014072DD3F: call    loc_14072DD32
 * 000000014072DD44: add     rsp, 8
 * 000000014072DD48: call    loc_14072DD3B
 * 000000014072DD4D: add     rsp, 8
 * 000000014072DD51: call    loc_14072DD44
 * 000000014072DD56: add     rsp, 8
 * 000000014072DD5A: call    loc_14072DD4D
 * 000000014072DD5F: add     rsp, 8
 * 000000014072DD63: call    loc_14072DD56
 * 000000014072DD68: add     rsp, 8
 * 000000014072DD6C: call    loc_14072DD5F
 * 000000014072DD71: add     rsp, 8
 * 000000014072DD75: call    loc_14072DD68
 * 000000014072DD7A: add     rsp, 8
 * 000000014072DD7E: call    loc_14072DD71
 * 000000014072DD83: add     rsp, 8
 * 000000014072DD87: mov     eax, 0DADAh
 * 000000014072DD8C: test    byte ptr gs:89Ch, 8
 * 000000014072DD95: jz      short loc_14072DD9E
 * 000000014072DD97: mov     al, 20h ; ' '
 * 000000014072DD99: incsspq rax
 * 000000014072DD9E: test    edx, 80h
 * 000000014072DDA4: jz      short loc_14072DDAE
 * 000000014072DDA6: lfence
 * 000000014072DDA9: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014072DDAE: lfence
 * 000000014072DDB1: mov     byte ptr gs:89Eh, 0
 * 000000014072DDBA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014072DDC1: jz      short loc_14072DDE2
 * 000000014072DDC3: mov     ecx, 6A7h
 * 000000014072DDC8: rdmsr
 * 000000014072DDCA: cmp     edx, 0
 * 000000014072DDCD: jz      short loc_14072DDE2
 * 000000014072DDCF: mov     ecx, edx
 * 000000014072DDD1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014072DDD7: cmp     edx, ecx
 * 000000014072DDD9: jz      short loc_14072DDE2
 * 000000014072DDDB: mov     ecx, 6A7h
 * 000000014072DDE0: wrmsr
 * 000000014072DDE2: test    byte ptr [r10+3], 3
 * 000000014072DDE7: mov     word ptr [rbp+80h], 0
 * 000000014072DDF0: jz      short loc_14072DDF7
 * 000000014072DDF2: call    KiSaveDebugRegisterState
 * 000000014072DDF7: cld
 * 000000014072DDF8: stmxcsr dword ptr [rbp-54h]
 * 000000014072DDFC: ldmxcsr dword ptr gs:180h
 * 000000014072DE05: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014072DE09: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014072DE0D: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014072DE11: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014072DE15: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014072DE19: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014072DE1D: test    byte ptr [rbp+0F0h], 1
 * 000000014072DE24: jz      short KiVmbusInterrupt3DispatchTrap
 * 000000014072DE26: mov     r10, gs:188h
 * 000000014072DE2F: test    byte ptr [r10+3], 80h
 * 000000014072DE34: jz      short KiVmbusInterrupt3DispatchTrap
 * 000000014072DE36: call    KiSynchronizeUserIsolationDomainExit
 * 000000014072DE3B: test    byte ptr cs:KiTrapFeatures, 2
 * 000000014072DE42: jz      short loc_14072DE4B
 * 000000014072DE44: mov     [rbp+0D0h], rsi
 * 000000014072DE4B: mov     byte ptr [rbp-55h], 0
 * 000000014072DE4F: cmp     byte ptr gs:87DAh, 0
 * 000000014072DE58: jz      short loc_14072DE5F
 * 000000014072DE5A: call    KeWakeProcessor
 * 000000014072DE5F: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014072DE66: cmp     rax, [rbp+0E8h]
 * 000000014072DE6D: jnb     short loc_14072DE88
 * 000000014072DE6F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014072DE76: cmp     rax, [rbp+0E8h]
 * 000000014072DE7D: jb      short loc_14072DE88
 * 000000014072DE7F: lea     rcx, [rbp-80h]
 * 000000014072DE83: call    KiCheckForSListAddress
 * 000000014072DE88: xor     esi, esi
 * 000000014072DE8A: inc     dword ptr gs:87C0h
 * 000000014072DE92: jmp     KiVmbusInterruptDispatch
 */
