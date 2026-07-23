/*
 * XREFs of MmStoreLogRegionInPageError @ 0x14070FEB8
 * Callers:
 *     ?StRegionAccessExceptionFilter@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAJ@Z @ 0x140642260 (-StRegionAccessExceptionFilter@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_EXCEPTION_POINTERS@@PEAU_ST_DATA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MmStoreLogRegionInPageError()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+20h] [rbp-B8h]
  int v3; // [rsp+28h] [rbp-B0h]
  int v4; // [rsp+40h] [rbp-98h] BYREF
  __int64 v5; // [rsp+48h] [rbp-90h] BYREF
  __int64 v6; // [rsp+50h] [rbp-88h] BYREF
  __int64 v7; // [rsp+58h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+60h] [rbp-78h] BYREF
  int *v9; // [rsp+80h] [rbp-58h]
  __int64 v10; // [rsp+88h] [rbp-50h]
  __int64 *v11; // [rsp+90h] [rbp-48h]
  __int64 v12; // [rsp+98h] [rbp-40h]
  __int64 *v13; // [rsp+A0h] [rbp-38h]
  __int64 v14; // [rsp+A8h] [rbp-30h]
  __int64 *v15; // [rsp+B0h] [rbp-28h]
  __int64 v16; // [rsp+B8h] [rbp-20h]

  if ( stru_140E366D8.FirstArgument
    && *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000002LL) )
  {
    v4 = *(_DWORD *)(v1 + 48);
    v10 = 4LL;
    v9 = &v4;
    v5 = *(_QWORD *)(v1 + 32);
    v11 = &v5;
    v6 = *(_QWORD *)(v1 + 40);
    v13 = &v6;
    v15 = &v7;
    v12 = 8LL;
    v14 = 8LL;
    v7 = 0x1000000LL;
    v16 = 8LL;
    tlgWriteEx_EtwWriteEx(v0, (unsigned __int8 *)&word_14005B2B2, v0, 1u, v2, v3, 6u, &v8);
  }
}
