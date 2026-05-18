/*
 * XREFs of sub_18003E908 @ 0x18003E908
 * Callers:
 *     sub_18003E5C0 @ 0x18003E5C0 (sub_18003E5C0.c)
 *     sub_18003E864 @ 0x18003E864 (sub_18003E864.c)
 *     sub_18003EA84 @ 0x18003EA84 (sub_18003EA84.c)
 *     sub_1800D21F4 @ 0x1800D21F4 (sub_1800D21F4.c)
 *     sub_1800D2404 @ 0x1800D2404 (sub_1800D2404.c)
 *     sub_1800D3050 @ 0x1800D3050 (sub_1800D3050.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F008 @ 0x18001F008 (sub_18001F008.c)
 */

_QWORD *__fastcall sub_18003E908(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  v6 = v5;
  a2[1] = 0LL;
  for ( a2[2] = *(_QWORD *)a1; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
  {
    *a2 = v6;
    sub_1800141BC(a3);
    v7 = sub_1800141BC((__int64)(v6 + 4));
    LOBYTE(v9) = sub_18001F008(v7, v6[6], v8, *(_QWORD *)(a3 + 16));
    if ( v9 >= 0 )
    {
      a2[2] = v6;
      v10 = 1;
    }
    else
    {
      v6 += 2;
      v10 = 0;
    }
    *((_DWORD *)a2 + 2) = v10;
  }
  return a2;
}
