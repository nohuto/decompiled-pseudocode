/*
 * XREFs of sub_14008A0B0 @ 0x14008A0B0
 * Callers:
 *     sub_140088088 @ 0x140088088 (sub_140088088.c)
 *     sub_14008BEA0 @ 0x14008BEA0 (sub_14008BEA0.c)
 *     sub_14008BF58 @ 0x14008BF58 (sub_14008BF58.c)
 *     sub_14008C0D8 @ 0x14008C0D8 (sub_14008C0D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14008A0B0(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 3221225659LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3221225485LL;
  v3 = v2 - 1;
  if ( v3 && (unsigned int)(v3 - 1) >= 2 )
    return 3221225473LL;
  else
    return 3221225860LL;
}
