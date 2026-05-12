/*
 * XREFs of TcglibpSetTableColumnData @ 0x1401342FC
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x140130754 (TcglibActivateLockingSpEx.c)
 *     TcglibpSetPin @ 0x1401357F0 (TcglibpSetPin.c)
 * Callees:
 *     TcglibpSetTableColumns @ 0x14013435C (TcglibpSetTableColumns.c)
 */

__int64 __fastcall TcglibpSetTableColumnData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7)
{
  _DWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-38h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+44h] [rbp-1Ch]
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  v11 = a4;
  v14 = a5;
  v15 = a6;
  v16 = a7;
  v8[0] = a4;
  v8[1] = a4;
  v9 = &v11;
  v10 = 1LL;
  v12 = 4;
  v13 = 8;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *))TcglibpSetTableColumns)(a1, a2, a3, v8);
}
