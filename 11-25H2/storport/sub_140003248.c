/*
 * XREFs of sub_140003248 @ 0x140003248
 * Callers:
 *     sub_140003400 @ 0x140003400 (sub_140003400.c)
 * Callees:
 *     sub_140002CB8 @ 0x140002CB8 (sub_140002CB8.c)
 */

__int64 __fastcall sub_140003248(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  const wchar_t *v3; // r9
  int v5; // [rsp+80h] [rbp-68h]

  if ( (byte_1401694F5 & 0x40) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = (const wchar_t *)&unk_140149394;
    if ( *(_QWORD *)(v2 + 5080) )
      v3 = *(const wchar_t **)(v2 + 5080);
    sub_140002CB8(
      a1 + 242,
      a1 + 177,
      *(_BYTE *)(a1 + 506) & 1,
      *(_DWORD *)(v2 + 56),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      v2 + 5064,
      *(_DWORD *)(a1 + 3432),
      *(const wchar_t **)(v2 + 4720),
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      v3,
      *(_BYTE *)(a1 + 506) & 1,
      v5,
      *(_DWORD *)(a2 + 12),
      *(_DWORD *)(a2 + 16),
      *(_BYTE *)(a2 + 5),
      *(_BYTE *)a2,
      *(_BYTE *)(a2 + 1),
      *(_BYTE *)(a2 + 2),
      *(_BYTE *)(a2 + 3),
      *(_BYTE *)(a2 + 4),
      *(_DWORD *)(a2 + 8),
      *(_DWORD *)(a2 + 20),
      *(_QWORD *)(a2 + 24));
  }
  return 0LL;
}
