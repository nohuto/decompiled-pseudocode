/*
 * XREFs of sub_140075610 @ 0x140075610
 * Callers:
 *     sub_14000C7BC @ 0x14000C7BC (sub_14000C7BC.c)
 *     sub_14000DF30 @ 0x14000DF30 (sub_14000DF30.c)
 *     sub_140038070 @ 0x140038070 (sub_140038070.c)
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_14003E994 @ 0x14003E994 (sub_14003E994.c)
 */

__int64 __fastcall sub_140075610(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // si
  __int64 v9; // [rsp+40h] [rbp-28h]

  result = ((__int64 (*)(void))RtlExtendMemoryBlockLookaside)();
  v8 = result;
  if ( (_DWORD)result == -1073741663 )
  {
    result = sub_14003E994(a2);
    if ( (int)result >= 0 )
    {
      result = RtlExtendMemoryBlockLookaside(a1, a2);
      v8 = result;
    }
  }
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000EE40(v6, v5, v7, 5, a1, a2, 0, 0, v9, 0, v8);
  return result;
}
