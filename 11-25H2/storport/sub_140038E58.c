/*
 * XREFs of sub_140038E58 @ 0x140038E58
 * Callers:
 *     sub_140038CC0 @ 0x140038CC0 (sub_140038CC0.c)
 *     Callback @ 0x140045BD0 (Callback.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140038E58(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 500LL;
  if ( v1 == 1 )
    return 100LL;
  return 50LL;
}
