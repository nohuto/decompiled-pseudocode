/*
 * XREFs of sub_180039A04 @ 0x180039A04
 * Callers:
 *     sub_180039A04 @ 0x180039A04 (sub_180039A04.c)
 *     sub_18003AB58 @ 0x18003AB58 (sub_18003AB58.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180030BD8 @ 0x180030BD8 (sub_180030BD8.c)
 *     sub_1800313A0 @ 0x1800313A0 (sub_1800313A0.c)
 *     sub_180039A04 @ 0x180039A04 (sub_180039A04.c)
 *     sub_18003A8A0 @ 0x18003A8A0 (sub_18003A8A0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180039A04(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v9 = a1;
    v7 = sub_18001C514(96LL);
    sub_180030BD8((_QWORD *)(v7 + 32), a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v10 = 0LL;
    sub_1800313A0((__int64)&v9);
    v6 = v7;
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    v9 = a1;
    v10 = a1;
    v11 = v7;
    *(_QWORD *)v7 = sub_180039A04(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_180039A04(a1, *(_QWORD *)(a2 + 16), v7);
    v9 = 0LL;
    sub_18003A8A0(&v9);
  }
  return v6;
}
