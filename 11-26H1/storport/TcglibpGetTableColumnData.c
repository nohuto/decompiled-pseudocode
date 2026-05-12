/*
 * XREFs of TcglibpGetTableColumnData @ 0x140134100
 * Callers:
 *     TcglibActivateLockingSpEx @ 0x140130754 (TcglibActivateLockingSpEx.c)
 *     TcglibGetMsid @ 0x1401311AC (TcglibGetMsid.c)
 *     TcglibSetSidPin @ 0x140131C64 (TcglibSetSidPin.c)
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 *     TcglibpGetSecretProtection @ 0x140135688 (TcglibpGetSecretProtection.c)
 * Callees:
 *     TcglibpGetTableColumns @ 0x140134170 (TcglibpGetTableColumns.c)
 */

__int64 __fastcall TcglibpGetTableColumnData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  __int64 result; // rax
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
  v8[0] = a4;
  v8[1] = a4;
  v9 = &v11;
  v10 = 1LL;
  v16 = 0;
  v12 = 4;
  v13 = 8;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *))TcglibpGetTableColumns)(a1, a2, a3, v8);
  if ( a7 )
    *a7 = v15;
  return result;
}
