/*
 * XREFs of TcglibpGetSecretProtection @ 0x140135688
 * Callers:
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 * Callees:
 *     TcglibEalLogCommand @ 0x14008D2D8 (TcglibEalLogCommand.c)
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 *     TcglibpCallMethod @ 0x140133D2C (TcglibpCallMethod.c)
 *     TcglibpGetTableColumnData @ 0x140134100 (TcglibpGetTableColumnData.c)
 */

__int64 __fastcall TcglibpGetSecretProtection(int **a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int *v7; // rcx
  _DWORD v8[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h]
  __int64 v10; // [rsp+60h] [rbp-10h]
  __int64 v11; // [rsp+B0h] [rbp+40h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  result = TcglibpGetTableColumnData((__int64)a1, a2, 0x80200000001LL, 0xAu, (__int64)&v11, 8, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = 1LL;
    v8[0] = 3;
    v8[1] = 3;
    v9 = 0LL;
    TcglibReverseBytes((char *)&v11, 8u);
    v7 = *a1;
    v11 &= 0xFFFFFFFF00000000uLL;
    TcglibEalLogCommand(v7, "GetSecretProtection", (v11 != 0x80500000000LL) + 29, 22, 0LL, 0LL);
    return TcglibpCallMethod(
             (__int64)a1,
             a2,
             (v11 != 0x80500000000LL) + 0x1D0000001DLL,
             0x600000016LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))GenGetTableColumnParams,
             (__int64)v8,
             0LL,
             0LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ParseSecretProtection,
             (__int64)a3);
  }
  return result;
}
