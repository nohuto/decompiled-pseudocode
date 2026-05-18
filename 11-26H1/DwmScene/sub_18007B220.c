/*
 * XREFs of sub_18007B220 @ 0x18007B220
 * Callers:
 *     sub_18007AEA8 @ 0x18007AEA8 (sub_18007AEA8.c)
 * Callees:
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 *     sub_18007B348 @ 0x18007B348 (sub_18007B348.c)
 */

__int64 __fastcall sub_18007B220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // r8

  v4 = a1;
  for ( i = a2; v4 != i; v4 = v6 + 40 )
  {
    sub_18007B348(a1, a3, v4, i);
    a3 += 40LL;
  }
  sub_18007ACE8(a3, a3);
  return a3;
}
