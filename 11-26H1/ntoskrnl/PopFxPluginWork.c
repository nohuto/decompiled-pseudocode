/*
 * XREFs of PopFxPluginWork @ 0x140A8FBC0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWorkPool @ 0x140397FE8 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxPluginWork(__int64 *a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  do
  {
    if ( (__int64 *)(*a1 + 8 * (v1 + 4 * v1 + 13)) == a1 )
      break;
    v1 = (unsigned int)(v1 + 1);
  }
  while ( (unsigned int)v1 < 4 );
  return PopFxProcessWorkPool(*a1, v1 + 1);
}
