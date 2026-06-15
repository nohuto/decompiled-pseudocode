/*
 * XREFs of sub_14009D620 @ 0x14009D620
 * Callers:
 *     sub_1400A3810 @ 0x1400A3810 (sub_1400A3810.c)
 *     sub_1400A3A70 @ 0x1400A3A70 (sub_1400A3A70.c)
 *     sub_1400A4438 @ 0x1400A4438 (sub_1400A4438.c)
 *     sub_1400A47BC @ 0x1400A47BC (sub_1400A47BC.c)
 *     sub_1400A9A10 @ 0x1400A9A10 (sub_1400A9A10.c)
 *     sub_1400A9B50 @ 0x1400A9B50 (sub_1400A9B50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14009D620(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  result = RtlConvertHostPerfCounterToPerfCounter(v3, -1LL, &v3);
  if ( !(_DWORD)result )
    *a1 = v3;
  return result;
}
