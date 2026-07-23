/*
 * XREFs of MiStoreLogWriteIssueFailure @ 0x140532610
 * Callers:
 *     MiStoreWriteModifiedPagePostIssue @ 0x140401104 (MiStoreWriteModifiedPagePostIssue.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogWriteIssueFailure(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // edx
  __int64 *v6; // r8
  int v7; // r9d
  __int64 v8; // r10
  int v9; // r11d
  int v10; // [rsp+20h] [rbp-71h]
  int v11; // [rsp+28h] [rbp-69h]
  int v12; // [rsp+40h] [rbp-51h] BYREF
  int v13; // [rsp+44h] [rbp-4Dh] BYREF
  int v14; // [rsp+48h] [rbp-49h] BYREF
  __int64 v15; // [rsp+50h] [rbp-41h] BYREF
  __int64 v16; // [rsp+58h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-31h] BYREF
  int *v18; // [rsp+80h] [rbp-11h]
  __int64 v19; // [rsp+88h] [rbp-9h]
  __int64 *v20; // [rsp+90h] [rbp-1h]
  __int64 v21; // [rsp+98h] [rbp+7h]
  __int64 *v22; // [rsp+A0h] [rbp+Fh]
  __int64 v23; // [rsp+A8h] [rbp+17h]
  int *v24; // [rsp+B0h] [rbp+1Fh]
  __int64 v25; // [rsp+B8h] [rbp+27h]
  int *v26; // [rsp+C0h] [rbp+2Fh]
  __int64 v27; // [rsp+C8h] [rbp+37h]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 2LL) )
  {
    v13 = v7;
    v18 = &v12;
    v15 = *v6;
    v12 = v9;
    v20 = &v15;
    v16 = v6[1];
    v22 = &v16;
    v24 = &v13;
    v14 = a5;
    v26 = &v14;
    v19 = 4LL;
    v21 = 8LL;
    v23 = 8LL;
    v25 = 4LL;
    v27 = 4LL;
    tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&byte_14005B1DB, (__int64)v6, v5 - 1, v10, v11, 7u, &v17);
  }
}
