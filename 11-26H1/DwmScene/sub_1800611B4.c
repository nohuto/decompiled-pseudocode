/*
 * XREFs of sub_1800611B4 @ 0x1800611B4
 * Callers:
 *     sub_18006A3E0 @ 0x18006A3E0 (sub_18006A3E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 *     sub_18001FC54 @ 0x18001FC54 (sub_18001FC54.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800611B4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r10
  bool v8; // bl
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // r10
  _BYTE v26[16]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+30h] [rbp-58h]
  _BYTE v28[32]; // [rsp+40h] [rbp-48h] BYREF

  sub_18001E58C((__int64)v26, (__int64)L"Model.");
  v4 = sub_18001FC54(a2, (__int64)v28, 0LL, v27);
  sub_1800141BC(v4);
  v5 = sub_1800141BC((__int64)v26);
  v8 = sub_18001F05C(v7, v6, v5, v27);
  sub_180014244((__int64)v28);
  if ( v8 )
    *(_BYTE *)(*(_QWORD *)a1 + 1465LL) = 1;
  sub_1800141BC(a2);
  v9 = sub_1800141BC((__int64)&unk_1801C9A18);
  if ( sub_18001F05C(v10, *(_QWORD *)(a2 + 16), v9, qword_1801C9A28) )
    *(_BYTE *)(*(_QWORD *)a1 + 1466LL) = 1;
  sub_1800141BC(a2);
  v11 = sub_1800141BC((__int64)&unk_1801C9A78);
  if ( sub_18001F05C(v12, *(_QWORD *)(a2 + 16), v11, qword_1801C9A88)
    || (sub_1800141BC(a2),
        v13 = sub_1800141BC((__int64)&unk_1801C9A98),
        sub_18001F05C(v14, *(_QWORD *)(a2 + 16), v13, qword_1801C9AA8))
    || (sub_1800141BC(a2),
        v15 = sub_1800141BC((__int64)&unk_1801C9AB8),
        sub_18001F05C(v16, *(_QWORD *)(a2 + 16), v15, qword_1801C9AC8)) )
  {
    *(_BYTE *)(*(_QWORD *)a1 + 1467LL) = 1;
  }
  sub_1800141BC(a2);
  v17 = sub_1800141BC((__int64)&unk_1801C9B38);
  if ( sub_18001F05C(v18, *(_QWORD *)(a2 + 16), v17, qword_1801C9B48)
    || (sub_1800141BC(a2),
        v19 = sub_1800141BC((__int64)&unk_1801C9AD8),
        sub_18001F05C(v20, *(_QWORD *)(a2 + 16), v19, qword_1801C9AE8))
    || (sub_1800141BC(a2),
        v21 = sub_1800141BC((__int64)&unk_1801C9AF8),
        sub_18001F05C(v22, *(_QWORD *)(a2 + 16), v21, qword_1801C9B08))
    || (sub_1800141BC(a2),
        v23 = sub_1800141BC((__int64)&unk_1801C9B18),
        sub_18001F05C(v24, *(_QWORD *)(a2 + 16), v23, qword_1801C9B28)) )
  {
    *(_BYTE *)(*(_QWORD *)a1 + 1468LL) = 1;
  }
  return sub_180014244((__int64)v26);
}
