/*
 * XREFs of RtlImageNtHeader @ 0x1800CC790
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall RtlImageNtHeader(unsigned __int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v2);
  return v2;
}
