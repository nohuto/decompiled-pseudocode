/*
 * XREFs of sub_18004048C @ 0x18004048C
 * Callers:
 *     sub_18003F6D8 @ 0x18003F6D8 (sub_18003F6D8.c)
 *     sub_1800407E0 @ 0x1800407E0 (sub_1800407E0.c)
 *     sub_180040D64 @ 0x180040D64 (sub_180040D64.c)
 *     sub_180063580 @ 0x180063580 (sub_180063580.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_180029E54 @ 0x180029E54 (sub_180029E54.c)
 *     sub_18003B850 @ 0x18003B850 (sub_18003B850.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18004048C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  bool v10; // bp
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  _BYTE v15[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = (__int64)a3;
  sub_180029E54(a1 + 16);
  sub_18003B850(*a3, &v13);
  v6 = **(_QWORD **)(a1 + 88);
  v17 = v6;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = (_QWORD *)(v6 + 64);
    v8 = (_QWORD *)sub_18004068C(*(_QWORD *)(v6 + 64), v15);
    v10 = *v8 == v13;
    if ( v16 )
      sub_180010EC8(v16);
    if ( v10 )
    {
      sub_180012C40(a2, v7);
      goto LABEL_9;
    }
    sub_18001D6F4(&v17, v9);
    v6 = v17;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_9:
  if ( v14 )
    sub_180010EC8(v14);
  v11 = a3[1];
  if ( v11 )
    sub_180010EC8(v11);
  return a2;
}
