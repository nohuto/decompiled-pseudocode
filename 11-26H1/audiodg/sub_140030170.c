/*
 * XREFs of sub_140030170 @ 0x140030170
 * Callers:
 *     sub_1400AA0F0 @ 0x1400AA0F0 (sub_1400AA0F0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140030170(volatile signed __int32 *a1, signed __int32 *a2, signed __int32 a3)
{
  signed __int32 v3; // eax
  signed __int32 v4; // ett

  v4 = *a2;
  v3 = _InterlockedCompareExchange(a1, a3, *a2);
  if ( v4 == v3 )
    return 1;
  *a2 = v3;
  return 0;
}
