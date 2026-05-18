/*
 * XREFs of sub_180098BB8 @ 0x180098BB8
 * Callers:
 *     sub_18002C790 @ 0x18002C790 (sub_18002C790.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_18002A8A0 @ 0x18002A8A0 (sub_18002A8A0.c)
 *     sub_18002B27C @ 0x18002B27C (sub_18002B27C.c)
 *     sub_180098010 @ 0x180098010 (sub_180098010.c)
 *     sub_1800990DC @ 0x1800990DC (sub_1800990DC.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180098BB8(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  _BYTE v5[136]; // [rsp+20h] [rbp-B8h] BYREF
  void *v6[6]; // [rsp+A8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v8; // [rsp+E8h] [rbp+10h]
  char v9; // [rsp+F0h] [rbp+18h] BYREF

  v8 = a1;
  sub_180029674(a1);
  sub_18002B27C((__int64)v5);
  v2 = **(_QWORD **)(a1 + 48);
LABEL_2:
  v7 = v2;
  while ( v2 != *(_QWORD *)(a1 + 48) )
  {
    if ( (unsigned int)sub_18009A710(*(_QWORD *)(a1 + 16 * (*(_QWORD *)(v2 + 32) + 4LL)), v5, 0LL) == 3 )
    {
      sub_180098010(a1 + 8, (_QWORD *)(v2 + 32));
      v2 = *(_QWORD *)sub_1800990DC(a1 + 48, &v9, v2);
      goto LABEL_2;
    }
    sub_18001D6F4(&v7, v3);
    v2 = v7;
  }
  sub_18002A8A0(v6, (__int64)v6);
  return sub_1800297F4(a1);
}
