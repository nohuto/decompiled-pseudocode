/*
 * XREFs of MiSetExclusionWalkBounds @ 0x14048868C
 * Callers:
 *     MiInitializeWalkBounds @ 0x140328810 (MiInitializeWalkBounds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSetExclusionWalkBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r11
  __int64 v7; // rax

  v5 = a3 + a4;
  if ( a3 == a1 )
  {
    *a5 = v5;
    v7 = a2 + a3 - 1;
  }
  else
  {
    *a5 = a1;
    if ( v5 != a1 + a2 )
    {
      a5[2] = v5;
      a5[1] = a3 - 1;
      a5[3] = a1 + a2 - 1;
      return 2LL;
    }
    v7 = a1 - a4 + a2 - 1;
  }
  a5[1] = v7;
  return 1LL;
}
