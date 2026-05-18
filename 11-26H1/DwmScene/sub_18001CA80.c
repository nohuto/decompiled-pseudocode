/*
 * XREFs of sub_18001CA80 @ 0x18001CA80
 * Callers:
 *     sub_18001C9FC @ 0x18001C9FC (sub_18001C9FC.c)
 *     sub_18001CA80 @ 0x18001CA80 (sub_18001CA80.c)
 * Callees:
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18001CA80 @ 0x18001CA80 (sub_18001CA80.c)
 *     sub_18001D460 @ 0x18001D460 (sub_18001D460.c)
 *     sub_18001D5A4 @ 0x18001D5A4 (sub_18001D5A4.c)
 *     sub_18001D5EC @ 0x18001D5EC (sub_18001D5EC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001CA80(__int64 *a1, __int64 a2, __int64 a3)
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
    v7 = sub_18001C514(104LL);
    sub_18001D460(v7 + 32, a2 + 32);
    *(_QWORD *)v7 = v6;
    *(_QWORD *)(v7 + 8) = v6;
    *(_QWORD *)(v7 + 16) = v6;
    *(_WORD *)(v7 + 24) = 0;
    v10 = 0LL;
    sub_18001D5A4(&v9);
    v6 = v7;
    *(_QWORD *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 24) = *(_BYTE *)(a2 + 24);
    v9 = a1;
    v10 = a1;
    v11 = v7;
    *(_QWORD *)v7 = sub_18001CA80(a1, *(_QWORD *)a2, v7);
    *(_QWORD *)(v7 + 16) = sub_18001CA80(a1, *(_QWORD *)(a2 + 16), v7);
    v9 = 0LL;
    sub_18001D5EC(&v9);
  }
  return v6;
}
