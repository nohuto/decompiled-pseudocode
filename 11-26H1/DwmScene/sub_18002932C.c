/*
 * XREFs of sub_18002932C @ 0x18002932C
 * Callers:
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 *     sub_1800293DC @ 0x1800293DC (sub_1800293DC.c)
 */

__int64 __fastcall sub_18002932C(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 *v12; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v13 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    sub_18001D6F4(&v13, (__int64)a2);
    v5 = v13;
  }
  v7 = (_QWORD *)*a1;
  v13 = v2;
  if ( v2 == *v7 && *(_BYTE *)(v4 + 25) )
  {
    sub_1800293DC(a1);
  }
  else
  {
    while ( v2 != v4 )
    {
      sub_18001D6F4(&v13, (__int64)a2);
      v14 = v9;
      sub_18001D6F4(&v14, v10);
      v12 = sub_1800287AC(a1, v11);
      sub_18000E26C(v12, 0x28uLL);
      v2 = v13;
    }
  }
  return v6;
}
