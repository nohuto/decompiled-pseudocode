/*
 * XREFs of sub_18007544C @ 0x18007544C
 * Callers:
 *     sub_180075CD0 @ 0x180075CD0 (sub_180075CD0.c)
 * Callees:
 *     sub_18001DEF0 @ 0x18001DEF0 (sub_18001DEF0.c)
 *     sub_180075508 @ 0x180075508 (sub_180075508.c)
 *     sub_180075564 @ 0x180075564 (sub_180075564.c)
 *     sub_180075A38 @ 0x180075A38 (sub_180075A38.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18007544C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // rcx
  __int64 i; // rax
  __int64 *v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v11 = a1;
  v12 = a1;
  v4 = sub_180075508(a1, a2);
  *a1 = v4;
  *(_QWORD *)(*a1 + 8) = sub_180075564(a1, *(_QWORD *)(*a2 + 8LL), v4);
  a1[1] = a2[1];
  v5 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v5 + 25) )
  {
    *(_QWORD *)*a1 = *a1;
    *(_QWORD *)(*a1 + 16) = *a1;
  }
  else
  {
    v6 = sub_18001DEF0((_QWORD *)v5);
    *v7 = v6;
    v8 = *(_QWORD *)(*a1 + 8);
    for ( i = *(_QWORD *)(v8 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
      v8 = i;
    *(_QWORD *)(*a1 + 16) = v8;
  }
  v12 = 0LL;
  sub_180075A38(&v11);
  return a1;
}
