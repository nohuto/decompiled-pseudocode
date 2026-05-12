/*
 * XREFs of TcglibpGetTableColumns @ 0x140134170
 * Callers:
 *     TcglibpGetTableColumnData @ 0x140134100 (TcglibpGetTableColumnData.c)
 *     TcglibpGetLockingInfoTable @ 0x140134CDC (TcglibpGetLockingInfoTable.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpGetTableColumns(int **a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  TcglibEalLogCommand(*a1, "GetTableColumns", a3, 22, *a4, a4[1]);
  return TcglibpCallMethod(
           (__int64)a1,
           a2,
           a3,
           0x600000016LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenGetTableColumnParams,
           (__int64)a4,
           0LL,
           0LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ParseGetTableColumnData,
           (__int64)a4);
}
