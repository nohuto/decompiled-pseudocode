/*
 * XREFs of sub_18005C0DC @ 0x18005C0DC
 * Callers:
 *     sub_18005BCA4 @ 0x18005BCA4 (sub_18005BCA4.c)
 *     sub_18005C0DC @ 0x18005C0DC (sub_18005C0DC.c)
 * Callees:
 *     sub_18005BF04 @ 0x18005BF04 (sub_18005BF04.c)
 *     sub_18005C0DC @ 0x18005C0DC (sub_18005C0DC.c)
 *     sub_18005CC48 @ 0x18005CC48 (sub_18005CC48.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005C0DC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v6 = sub_18005BF04(a1, a2 + 32);
    *(_QWORD *)(v6 + 8) = a3;
    *(_BYTE *)(v6 + 24) = *(_BYTE *)(a2 + 24);
    v8[0] = a1;
    v8[1] = a1;
    v8[2] = v6;
    *(_QWORD *)v6 = sub_18005C0DC(a1, *(_QWORD *)a2, v6);
    *(_QWORD *)(v6 + 16) = sub_18005C0DC(a1, *(_QWORD *)(a2 + 16), v6);
    v8[0] = 0LL;
    sub_18005CC48(v8);
  }
  return v6;
}
