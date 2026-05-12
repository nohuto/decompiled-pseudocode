/*
 * XREFs of sub_140131B14 @ 0x140131B14
 * Callers:
 *     sub_1401319E0 @ 0x1401319E0 (sub_1401319E0.c)
 *     sub_140131CA0 @ 0x140131CA0 (sub_140131CA0.c)
 *     sub_140133728 @ 0x140133728 (sub_140133728.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140131B14(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 3LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 4LL;
  if ( v2 == 1 )
    return 5LL;
  return 0LL;
}
