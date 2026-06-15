/*
 * XREFs of sub_1400263C8 @ 0x1400263C8
 * Callers:
 *     sub_14002633C @ 0x14002633C (sub_14002633C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 */

__int64 __fastcall sub_1400263C8(__int64 a1, unsigned int *a2)
{
  size_t v4; // rsi
  void *v5; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 4LL * a2[6] + 32;
  v5 = (void *)sub_1400499B8(v4, &unk_1400C75FC);
  *(_QWORD *)(a1 + 16) = v5;
  if ( v5 )
  {
    memcpy(v5, a2, v4);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      124,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp",
      -2147024882);
    return 2147942414LL;
  }
}
