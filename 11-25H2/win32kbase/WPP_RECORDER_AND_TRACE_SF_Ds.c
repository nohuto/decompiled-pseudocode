/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1401AD818
 * Callers:
 *     Win32JobObject::_anonymous_namespace_::SetRestrictedFlags @ 0x1401AD3F8 (Win32JobObject--_anonymous_namespace_--SetRestrictedFlags.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1401AD818
 * Reason: Hex-Rays returned no pseudocode for 0x1401AD818
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401AD818: mov     rax, rsp
 * 00000001401AD81B: mov     [rax+8], rbx
 * 00000001401AD81F: mov     [rax+10h], rbp
 * 00000001401AD823: mov     [rax+18h], rsi
 * 00000001401AD827: mov     [rax+20h], rdi
 * 00000001401AD82B: push    r13
 * 00000001401AD82D: sub     rsp, 50h
 * 00000001401AD831: mov     rdi, [rsp+58h+arg_48]
 * 00000001401AD839: lea     r13, aNull; "NULL"
 * 00000001401AD840: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001401AD844: mov     sil, r8b
 * 00000001401AD847: mov     rbp, r9
 * 00000001401AD84A: mov     r11, rcx
 * 00000001401AD84D: lea     r8d, [rbx+0Eh]
 * 00000001401AD851: test    dl, dl
 * 00000001401AD853: jz      short loc_1401AD8C7
 * 00000001401AD855: mov     r10, cs:pfnWppTraceMessage
 * 00000001401AD85C: test    rdi, rdi
 * 00000001401AD85F: jz      short loc_1401AD872
 * 00000001401AD861: mov     rax, rbx
 * 00000001401AD864: inc     rax
 * 00000001401AD867: cmp     byte ptr [rdi+rax], 0
 * 00000001401AD86B: jnz     short loc_1401AD864
 * 00000001401AD86D: inc     rax
 * 00000001401AD870: jmp     short loc_1401AD877
 * 00000001401AD872: mov     eax, 5
 * 00000001401AD877: test    rdi, rdi
 * 00000001401AD87A: mov     r9d, r8d
 * 00000001401AD87D: mov     rcx, rdi
 * 00000001401AD880: lea     r8, WPP_24285db1a4f43635ee6b597c88f141a8_Traceguids
 * 00000001401AD887: cmovz   rcx, r13
 * 00000001401AD88B: mov     edx, 2Bh ; '+'
 * 00000001401AD890: and     [rsp+58h+var_18], 0
 * 00000001401AD896: mov     [rsp+58h+var_20], rax
 * 00000001401AD89B: lea     rax, [rsp+58h+arg_40]
 * 00000001401AD8A3: mov     [rsp+58h+var_28], rcx
 * 00000001401AD8A8: mov     rcx, r11
 * 00000001401AD8AB: mov     [rsp+58h+var_30], 4
 * 00000001401AD8B4: mov     [rsp+58h+var_38], rax
 * 00000001401AD8B9: mov     rax, r10
 * 00000001401AD8BC: call    _guard_dispatch_icall
 * 00000001401AD8C1: mov     r8d, 0Dh
 * 00000001401AD8C7: test    sil, sil
 * 00000001401AD8CA: jz      short loc_1401AD936
 * 00000001401AD8CC: test    rdi, rdi
 * 00000001401AD8CF: jz      short loc_1401AD8DF
 * 00000001401AD8D1: inc     rbx
 * 00000001401AD8D4: cmp     byte ptr [rdi+rbx], 0
 * 00000001401AD8D8: jnz     short loc_1401AD8D1
 * 00000001401AD8DA: inc     rbx
 * 00000001401AD8DD: jmp     short loc_1401AD8E4
 * 00000001401AD8DF: mov     ebx, 5
 * 00000001401AD8E4: test    rdi, rdi
 * 00000001401AD8E7: lea     rax, [rsp+58h+arg_40]
 * 00000001401AD8EF: mov     edx, 4
 * 00000001401AD8F4: lea     r9, WPP_24285db1a4f43635ee6b597c88f141a8_Traceguids
 * 00000001401AD8FB: cmovz   rdi, r13
 * 00000001401AD8FF: mov     rcx, rbp
 * 00000001401AD902: and     [rsp+58h+var_10], 0
 * 00000001401AD908: mov     [rsp+58h+var_18], rbx
 * 00000001401AD90D: mov     [rsp+58h+var_20], rdi
 * 00000001401AD912: mov     [rsp+58h+var_28], 4
 * 00000001401AD91B: mov     [rsp+58h+var_30], rax
 * 00000001401AD920: mov     word ptr [rsp+58h+var_38], r8w
 * 00000001401AD926: lea     r8d, [rdx+0Ah]
 * 00000001401AD92A: call    cs:__imp_WppAutoLogTrace
 * 00000001401AD931: nop     dword ptr [rax+rax+00h]
 * 00000001401AD936: mov     rbx, [rsp+58h+arg_0]
 * 00000001401AD93B: mov     rbp, [rsp+58h+arg_8]
 * 00000001401AD940: mov     rsi, [rsp+58h+arg_10]
 * 00000001401AD945: mov     rdi, [rsp+58h+arg_18]
 * 00000001401AD94A: add     rsp, 50h
 * 00000001401AD94E: pop     r13
 * 00000001401AD950: retn
 */
