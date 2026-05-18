/*
 * XREFs of sub_180032FE0 @ 0x180032FE0
 * Callers:
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180016D44 @ 0x180016D44 (sub_180016D44.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_180016F1C @ 0x180016F1C (sub_180016F1C.c)
 *     sub_1800248CC @ 0x1800248CC (sub_1800248CC.c)
 *     sub_180042378 @ 0x180042378 (sub_180042378.c)
 *     sub_180045EBC @ 0x180045EBC (sub_180045EBC.c)
 *     sub_180045FCC @ 0x180045FCC (sub_180045FCC.c)
 *     sub_18004B7F4 @ 0x18004B7F4 (sub_18004B7F4.c)
 *     sub_18004B8C0 @ 0x18004B8C0 (sub_18004B8C0.c)
 *     sub_18004B98C @ 0x18004B98C (sub_18004B98C.c)
 *     sub_18004BA58 @ 0x18004BA58 (sub_18004BA58.c)
 *     sub_18004BB24 @ 0x18004BB24 (sub_18004BB24.c)
 *     sub_18005BE04 @ 0x18005BE04 (sub_18005BE04.c)
 *     sub_18007D290 @ 0x18007D290 (sub_18007D290.c)
 *     sub_18007F854 @ 0x18007F854 (sub_18007F854.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180033F34 @ 0x180033F34 (sub_180033F34.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_180032FE0(__int64 a1, __int64 a2, int a3)
{
  void (__fastcall *v5)(__int64, __int64); // rbx
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)(a2 + 72) = a1;
  if ( (*(_BYTE *)(a2 + 40) & 1) != 0 )
  {
    if ( a3 == 1 )
    {
      v5 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
      v6 = sub_180033F34(a1, v7, 0LL);
      v5(a2, v6);
      if ( v8 )
        sub_180010EC8(v8);
    }
    if ( !*(_DWORD *)(a1 + 552) )
      sub_180029310(a2, 8, 1);
  }
}
