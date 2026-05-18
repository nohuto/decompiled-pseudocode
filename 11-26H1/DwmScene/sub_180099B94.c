/*
 * XREFs of sub_180099B94 @ 0x180099B94
 * Callers:
 *     sub_180099990 @ 0x180099990 (sub_180099990.c)
 *     sub_180099A9C @ 0x180099A9C (sub_180099A9C.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 */

_QWORD *__fastcall sub_180099B94(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *v5; // r9
  __int64 *v6; // rbx
  const void *v7; // rax
  const void *v8; // r8
  int v9; // eax
  int v10; // eax

  v5 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  v6 = v5;
  a2[1] = 0LL;
  for ( a2[2] = *(_QWORD *)a1; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
  {
    *a2 = v6;
    sub_1800148EC((__int64)(v6 + 4));
    v7 = (const void *)sub_1800148EC(a3);
    LOBYTE(v9) = sub_18001CF60(v7, *(_QWORD *)(a3 + 16), v8, v6[6]);
    if ( v9 >= 0 )
    {
      v6 += 2;
      v10 = 0;
    }
    else
    {
      a2[2] = v6;
      v10 = 1;
    }
    *((_DWORD *)a2 + 2) = v10;
  }
  return a2;
}
