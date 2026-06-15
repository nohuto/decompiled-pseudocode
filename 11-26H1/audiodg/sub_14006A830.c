/*
 * XREFs of sub_14006A830 @ 0x14006A830
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_14006A97C @ 0x14006A97C (sub_14006A97C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14006A830(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
