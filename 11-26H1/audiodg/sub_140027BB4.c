/*
 * XREFs of sub_140027BB4 @ 0x140027BB4
 * Callers:
 *     sub_140027AE0 @ 0x140027AE0 (sub_140027AE0.c)
 * Callees:
 *     sub_140027C70 @ 0x140027C70 (sub_140027C70.c)
 *     sub_140027D7C @ 0x140027D7C (sub_140027D7C.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 *     sub_1400474D4 @ 0x1400474D4 (sub_1400474D4.c)
 *     sub_140048584 @ 0x140048584 (sub_140048584.c)
 *     sub_140058C44 @ 0x140058C44 (sub_140058C44.c)
 */

__int64 __fastcall sub_140027BB4(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9

  v3 = (int)a3;
  if ( !a3 )
    return sub_1400474D4();
  if ( !a2 )
    sub_14004639C(2147942487LL, 0LL);
  v6 = (a2 - *a1) >> 1;
  v7 = *(unsigned int *)(*a1 - 16);
  if ( (((*(_DWORD *)(*a1 - 12) - a3) | (1 - *(_DWORD *)(*a1 - 8))) & 0x80000000) != 0 )
    sub_140027D7C(a1, a3);
  v8 = *a1;
  v9 = 2 * v3;
  v10 = 2 * v3;
  if ( v6 <= v7 )
    sub_140048584(v8, v9, v8 + 2 * v6, v10);
  else
    sub_140058C44(v8, v9, a2, v10);
  return sub_140027C70(a1, (unsigned int)v3);
}
