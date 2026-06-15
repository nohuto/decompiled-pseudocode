/*
 * XREFs of sub_1400B168E @ 0x1400B168E
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B168E(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 48) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 40),
                           50,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp");
  return 0LL;
}
