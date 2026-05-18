/*
 * XREFs of sub_1800CDFC0 @ 0x1800CDFC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18002C424 @ 0x18002C424 (sub_18002C424.c)
 *     sub_18002C530 @ 0x18002C530 (sub_18002C530.c)
 *     sub_180051E20 @ 0x180051E20 (sub_180051E20.c)
 */

__int64 *__fastcall sub_1800CDFC0(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  *(_DWORD *)(a1 + 568) = a2;
  v4 = a3;
  v5 = sub_180051E20((__int64 *)(a1 + 552), (__int64)&v11, &v12);
  v4 *= 48LL;
  v6 = *(_QWORD *)v5;
  v7 = sub_180012C40(v10, (_QWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 40LL) + v4 + 64));
  sub_18002C530(a1, v7);
  v8 = sub_180012C40(v10, (_QWORD *)(*(_QWORD *)(v6 + 40) + v4 + 80));
  return sub_18002C424(a1, v8);
}
