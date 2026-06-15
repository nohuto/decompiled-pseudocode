/*
 * XREFs of sub_140036400 @ 0x140036400
 * Callers:
 *     sub_140036240 @ 0x140036240 (sub_140036240.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 */

__int64 __fastcall sub_140036400(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = sub_140049338(16LL, &unk_1400C75FC);
  if ( v4 )
  {
    *(_QWORD *)v4 = a2;
    *(_BYTE *)(v4 + 8) = 0;
    *a1 = v4;
    return 0LL;
  }
  else
  {
    *a1 = 0LL;
    sub_14000C2A8((int)retaddr, 1192, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", -2147024882);
    return 2147942414LL;
  }
}
