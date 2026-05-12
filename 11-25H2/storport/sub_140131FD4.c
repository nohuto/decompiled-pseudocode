/*
 * XREFs of sub_140131FD4 @ 0x140131FD4
 * Callers:
 *     sub_1401319E0 @ 0x1401319E0 (sub_1401319E0.c)
 *     sub_140133728 @ 0x140133728 (sub_140133728.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140131FD4(int a1, char a2)
{
  int v2; // ecx

  if ( (unsigned int)(a1 - 3) <= 3 )
    return 3LL;
  if ( !a2 )
  {
    if ( a1 )
    {
      v2 = a1 - 1;
      if ( v2 )
        return v2 == 1;
    }
  }
  return 2LL;
}
