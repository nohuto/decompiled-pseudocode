/*
 * XREFs of TcglibpActivateLockingSp @ 0x1401345C4
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x140130754 (TcglibActivateLockingSpEx.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 */

__int64 __fastcall TcglibpActivateLockingSp(int **a1, __int64 a2, int a3)
{
  int v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = a3;
  TcglibEalLogCommand(*a1, "ActivateLockingSp", 2, 3, 0LL, 0LL);
  return TcglibpCallMethod(
           (__int64)a1,
           a2,
           0x20500000002LL,
           0x600000203LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenActivateParams,
           (__int64)&v6,
           0LL,
           0LL,
           0LL,
           0LL);
}
