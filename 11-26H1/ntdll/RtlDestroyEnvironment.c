/*
 * XREFs of RtlDestroyEnvironment @ 0x18009F030
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 */

__int64 __fastcall RtlDestroyEnvironment(__int64 a1)
{
  RtlpSysVolFree(a1);
  return 0LL;
}
