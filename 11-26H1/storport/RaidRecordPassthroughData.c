/*
 * XREFs of RaidRecordPassthroughData @ 0x140042980
 * Callers:
 *     RaidAdapterPassThrough @ 0x1401B3090 (RaidAdapterPassThrough.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RaidRecordPassthroughData(unsigned __int8 a1)
{
  unsigned __int64 result; // rax

  result = (unsigned __int64)a1 >> 5;
  g_RaidPassthroughCdbs[result] |= 1 << a1;
  return result;
}
