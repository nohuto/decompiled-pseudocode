/*
 * XREFs of sub_18008D6E4 @ 0x18008D6E4
 * Callers:
 *     sub_18008DBE8 @ 0x18008DBE8 (sub_18008DBE8.c)
 * Callees:
 *     sub_18008CC50 @ 0x18008CC50 (sub_18008CC50.c)
 */

char *__fastcall sub_18008D6E4(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == *(_QWORD *)(a1 + 16) )
    return sub_18008CC50((void **)a1, v4, a2, a3);
  v5 = *a3;
  *(_DWORD *)v4 = *a2;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v6 + 16;
  return (char *)v6;
}
