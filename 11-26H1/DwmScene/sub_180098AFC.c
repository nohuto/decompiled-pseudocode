/*
 * XREFs of sub_180098AFC @ 0x180098AFC
 * Callers:
 *     sub_180035030 @ 0x180035030 (sub_180035030.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180029674 @ 0x180029674 (sub_180029674.c)
 *     sub_1800297F4 @ 0x1800297F4 (sub_1800297F4.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_18009B084 @ 0x18009B084 (sub_18009B084.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180098AFC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+40h] [rbp-38h] BYREF

  sub_180029674(a1);
  sub_180098A18(a1, (__int64)v11, a2);
  if ( v11[0] )
  {
    v7 = *(_QWORD *)(a1 + 16 * (v12 + 4));
    v8 = sub_180012C40(&v13, a4);
    v9 = sub_1800181BC(v14, (__int64)&unk_1801CD958);
    sub_18009B084(v7, v9, v8);
    sub_1800297F4(a1);
    return 1;
  }
  else
  {
    sub_1800297F4(a1);
    return 0;
  }
}
