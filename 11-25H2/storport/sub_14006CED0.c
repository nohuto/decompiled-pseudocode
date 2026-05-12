/*
 * XREFs of sub_14006CED0 @ 0x14006CED0
 * Callers:
 *     sub_1400281F4 @ 0x1400281F4 (sub_1400281F4.c)
 *     sub_1400977C0 @ 0x1400977C0 (sub_1400977C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14006CED0(int *a1, int a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = *a1;
  v3 = *a1 | 1;
  *a1 = v3;
  if ( a2 )
  {
    if ( a2 == 1 )
      *a1 = v2 | 3;
  }
  else
  {
    *a1 = v3 | 4;
  }
  return 0LL;
}
