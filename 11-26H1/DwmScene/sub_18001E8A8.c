/*
 * XREFs of sub_18001E8A8 @ 0x18001E8A8
 * Callers:
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DD44 @ 0x18001DD44 (sub_18001DD44.c)
 */

__int64 __fastcall sub_18001E8A8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbx
  char *v6; // rax
  unsigned __int64 v7; // rbx

  sub_18001DD44(a1, 0LL);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 < a3 )
    a3 = *(_QWORD *)(a1 + 16);
  v6 = (char *)sub_1800148EC(a1);
  v7 = v5 - a3;
  memmove(v6, &v6[a3], v7 + 1);
  *(_QWORD *)(a1 + 16) = v7;
  return a1;
}
