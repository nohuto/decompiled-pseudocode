/*
 * XREFs of sub_180097B68 @ 0x180097B68
 * Callers:
 *     sub_180097BF8 @ 0x180097BF8 (sub_180097BF8.c)
 * Callees:
 *     sub_1800978E8 @ 0x1800978E8 (sub_1800978E8.c)
 *     sub_180097AD8 @ 0x180097AD8 (sub_180097AD8.c)
 */

__int64 __fastcall sub_180097B68(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 *a4, __int64 *a5)
{
  __int64 v6; // rdx
  __int64 v8; // rcx

  v6 = a1[1];
  if ( v6 == a1[2] )
    return sub_1800978E8(a1, v6, (int)a2, a3, (__int64)a4, (__int64)a5);
  sub_180097AD8((__int64)a1, v6, a2, a3, a4, a5);
  v8 = a1[1];
  a1[1] = v8 + 56;
  return v8;
}
