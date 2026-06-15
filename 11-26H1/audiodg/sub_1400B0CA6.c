/*
 * XREFs of sub_1400B0CA6 @ 0x1400B0CA6
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004EEE4 @ 0x14004EEE4 (sub_14004EEE4.c)
 */

__int64 __fastcall sub_1400B0CA6(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 80) = sub_14004EEE4(
                           *(_QWORD *)(a2 + 72),
                           179,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp");
  return 0LL;
}
