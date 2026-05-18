/*
 * XREFs of sub_1800847C8 @ 0x1800847C8
 * Callers:
 *     sub_180084B68 @ 0x180084B68 (sub_180084B68.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 */

char __fastcall sub_1800847C8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  char v6; // si
  __int64 v7; // r9
  const void *v8; // rax
  const void *v9; // r8

  v3 = a3 + 32;
  v4 = a1 - a3;
  v6 = 0;
  while ( v3 + v4 - 32 != a2 )
  {
    sub_1800148EC(v3 - 32);
    v8 = (const void *)sub_1800148EC(v7);
    if ( !sub_18001CFB0(v8, *(_QWORD *)(v4 + v3 - 16), v9, *(_QWORD *)(v3 - 16))
      || *(_DWORD *)(v4 + v3) != *(_DWORD *)v3
      || *(_DWORD *)(v4 + v3 + 4) != *(_DWORD *)(v3 + 4)
      || *(_BYTE *)(v4 + v3 + 8) != *(_BYTE *)(v3 + 8)
      || *(_DWORD *)(v4 + v3 + 12) != *(_DWORD *)(v3 + 12) )
    {
      return v6;
    }
    v3 += 48LL;
  }
  return 1;
}
