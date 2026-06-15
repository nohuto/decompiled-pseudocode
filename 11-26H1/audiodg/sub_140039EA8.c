/*
 * XREFs of sub_140039EA8 @ 0x140039EA8
 * Callers:
 *     sub_140016BCC @ 0x140016BCC (sub_140016BCC.c)
 *     sub_140039E0C @ 0x140039E0C (sub_140039E0C.c)
 *     sub_14007574C @ 0x14007574C (sub_14007574C.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 __fastcall sub_140039EA8(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-28h]

  v3 = a1;
  if ( a1 )
    result = RtlDestroyMemoryBlockLookaside();
  else
    result = 0LL;
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000EE40(a1, a2, a3, 4, v3, 0, 0, 0, v5, 0, result);
  return result;
}
