/*
 * XREFs of TcglibpSetPin @ 0x1401357F0
 * Callers:
 *     TcglibSetAdmin1Pin @ 0x14013148C (TcglibSetAdmin1Pin.c)
 *     TcglibSetBandPin @ 0x140131AF8 (TcglibSetBandPin.c)
 *     TcglibSetSidPin @ 0x140131C64 (TcglibSetSidPin.c)
 * Callees:
 *     TcglibpSetTableColumnData @ 0x1401342FC (TcglibpSetTableColumnData.c)
 */

__int64 __fastcall TcglibpSetPin(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  if ( (unsigned int)*a4 <= 0x20 )
    return TcglibpSetTableColumnData(a1, a2, a3, 3u, (__int64)(a4 + 1), *a4, 15);
  else
    return 3221225485LL;
}
