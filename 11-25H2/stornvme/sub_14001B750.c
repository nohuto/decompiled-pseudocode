/*
 * XREFs of sub_14001B750 @ 0x14001B750
 * Callers:
 *     sub_14001BE44 @ 0x14001BE44 (sub_14001BE44.c)
 *     sub_14001D49C @ 0x14001D49C (sub_14001D49C.c)
 *     sub_14001DD70 @ 0x14001DD70 (sub_14001DD70.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sub_14001B750(unsigned __int16 *a1)
{
  int v1; // edx
  __int16 result; // ax
  int v3; // r8d

  v1 = a1[165];
  result = 0;
  v3 = a1[117];
  if ( (unsigned __int16)v1 > (unsigned __int16)v3 )
    return (v1 - v3 - 1) / a1[166] + 1;
  return result;
}
