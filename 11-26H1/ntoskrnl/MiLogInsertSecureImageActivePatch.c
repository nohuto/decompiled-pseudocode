/*
 * XREFs of MiLogInsertSecureImageActivePatch @ 0x1408790B0
 * Callers:
 *     MmInsertSecureImageActivePatch @ 0x14087AF00 (MmInsertSecureImageActivePatch.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiLogInsertSecureImageActivePatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  int v10; // r11d
  int v11; // [rsp+20h] [rbp-A1h]
  int v12; // [rsp+28h] [rbp-99h]
  int v13; // [rsp+40h] [rbp-81h] BYREF
  int v14; // [rsp+44h] [rbp-7Dh] BYREF
  int v15; // [rsp+48h] [rbp-79h] BYREF
  int v16; // [rsp+4Ch] [rbp-75h] BYREF
  int v17; // [rsp+50h] [rbp-71h] BYREF
  int v18; // [rsp+54h] [rbp-6Dh] BYREF
  __int64 v19; // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-61h] BYREF
  int *v21; // [rsp+80h] [rbp-41h]
  __int64 v22; // [rsp+88h] [rbp-39h]
  int *v23; // [rsp+90h] [rbp-31h]
  __int64 v24; // [rsp+98h] [rbp-29h]
  int *v25; // [rsp+A0h] [rbp-21h]
  __int64 v26; // [rsp+A8h] [rbp-19h]
  int *v27; // [rsp+B0h] [rbp-11h]
  __int64 v28; // [rsp+B8h] [rbp-9h]
  int *v29; // [rsp+C0h] [rbp-1h]
  __int64 v30; // [rsp+C8h] [rbp+7h]
  int *v31; // [rsp+D0h] [rbp+Fh]
  __int64 v32; // [rsp+D8h] [rbp+17h]
  __int64 *v33; // [rsp+E0h] [rbp+1Fh]
  __int64 v34; // [rsp+E8h] [rbp+27h]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000020LL) )
  {
    v13 = a7;
    v16 = v8;
    v21 = &v13;
    v22 = 4LL;
    v23 = &v14;
    v25 = &v15;
    v27 = &v16;
    v17 = a5;
    v29 = &v17;
    v18 = a6;
    v31 = &v18;
    v19 = 2164260864LL;
    v33 = &v19;
    v14 = v10;
    v24 = 4LL;
    v15 = v7;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 8LL;
    tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&byte_140059903, v7, 1u, v11, v12, 9u, &v20);
  }
}
