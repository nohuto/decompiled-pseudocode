/*
 * XREFs of sub_140037724 @ 0x140037724
 * Callers:
 *     sub_140007B90 @ 0x140007B90 (sub_140007B90.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 *     sub_1400373B0 @ 0x1400373B0 (sub_1400373B0.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_140037724(_QWORD *a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  if ( InitOnceExecuteOnce(&stru_1400E8950, sub_14005BDD0, 0LL, 0LL) )
  {
    *a1 = qword_1400E9858;
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      39,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiohistorybuffermanager.cpp",
      -2147024882);
    return 2147942414LL;
  }
}
