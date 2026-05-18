/*
 * XREFs of sub_180052774 @ 0x180052774
 * Callers:
 *     sub_180052864 @ 0x180052864 (sub_180052864.c)
 * Callees:
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_1800277A0 @ 0x1800277A0 (sub_1800277A0.c)
 *     sub_1800287AC @ 0x1800287AC (sub_1800287AC.c)
 *     sub_180052820 @ 0x180052820 (sub_180052820.c)
 */

__int64 __fastcall sub_180052774(_QWORD *a1, __int64 *a2)
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
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  v5 = *a2;
  v14 = *a2;
  v6 = 0LL;
  while ( v5 != v4 )
  {
    ++v6;
    sub_18001D6F4(&v14, (__int64)a2);
    v5 = v14;
  }
  v7 = (_QWORD *)*a1;
  v14 = v2;
  if ( v2 == *v7 && *(_BYTE *)(v4 + 25) )
  {
    sub_180052820(a1);
  }
  else
  {
    while ( v2 != v4 )
    {
      sub_18001D6F4(&v14, (__int64)a2);
      v15 = v9;
      sub_18001D6F4(&v15, v10);
      v12 = sub_1800287AC(a1, v11);
      sub_1800277A0(v13, v12);
      v2 = v14;
    }
  }
  return v6;
}
