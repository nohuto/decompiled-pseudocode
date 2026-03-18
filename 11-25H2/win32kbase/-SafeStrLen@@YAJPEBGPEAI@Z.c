/*
 * XREFs of ?SafeStrLen@@YAJPEBGPEAI@Z @ 0x14015D860
 * Callers:
 *     ?PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z @ 0x1400FCD28 (-PrepareArray@SendProcessor@Calling@CoreMessaging@@AEAAJPEBXIIIIHPEAI@Z.c)
 *     ?MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z @ 0x140242AAC (-MarshalStringArray@SendProcessor@Calling@CoreMessaging@@AEAAXPEAHPEBXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeStrLen(const unsigned __int16 *a1, unsigned int *a2)
{
  unsigned __int64 v2; // rax

  v2 = -1LL;
  do
    ++v2;
  while ( a1[v2] );
  if ( v2 > 0x3FFFFFFE )
    return 2147942934LL;
  *a2 = v2;
  return 0LL;
}
