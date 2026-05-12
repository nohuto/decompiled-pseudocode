/*
 * XREFs of TcglibpSetTableColumns @ 0x14013435C
 * Callers:
 *     TcglibpSetBand @ 0x140132FE4 (TcglibpSetBand.c)
 *     TcglibpSetBandLocation @ 0x14013328C (TcglibpSetBandLocation.c)
 *     TcglibpSetTableColumnData @ 0x1401342FC (TcglibpSetTableColumnData.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpSetTableColumns(int **a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  TcglibEalLogCommand(*a1, "SetTableColumns", a3, 23, *a4, a4[1]);
  return TcglibpCallMethod(
           (__int64)a1,
           a2,
           a3,
           0x600000017LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenSetTableColumnParams,
           (__int64)a4,
           0LL,
           0LL,
           0LL,
           0LL);
}
