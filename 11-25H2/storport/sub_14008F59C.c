/*
 * XREFs of sub_14008F59C @ 0x14008F59C
 * Callers:
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_1400A070C @ 0x1400A070C (sub_1400A070C.c)
 *     sub_1400D7E90 @ 0x1400D7E90 (sub_1400D7E90.c)
 *     sub_14010FEF0 @ 0x14010FEF0 (sub_14010FEF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14008F59C(_DWORD *a1, unsigned int *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned int v7; // edx
  __int64 result; // rax

  v4 = 84LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = (unsigned int)(a1[9] + a1[13]);
  if ( v5 > 0x54 )
    v4 = (unsigned int)v5;
  v6 = (unsigned int)(a1[8] + a1[12]);
  if ( v6 <= v4 )
    v6 = (unsigned int)v4;
  v7 = a1[7] + a1[11];
  if ( v7 <= v6 )
    v7 = v6;
  result = 0LL;
  *a2 = v7;
  return result;
}
