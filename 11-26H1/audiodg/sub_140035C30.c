/*
 * XREFs of sub_140035C30 @ 0x140035C30
 * Callers:
 *     sub_1400359C4 @ 0x1400359C4 (sub_1400359C4.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003FC00 @ 0x14003FC00 (sub_14003FC00.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 */

__int64 __fastcall sub_140035C30(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = sub_1400499B8(4LL * *(unsigned int *)(a2 + 48) + 32, &unk_1400C75FC);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v4 )
  {
    sub_14003FC00(v4, a2);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      147,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      -2147024882);
    return 2147942414LL;
  }
}
