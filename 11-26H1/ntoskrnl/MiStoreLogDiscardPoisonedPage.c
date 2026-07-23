/*
 * XREFs of MiStoreLogDiscardPoisonedPage @ 0x14070F668
 * Callers:
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogDiscardPoisonedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int16 *v9; // r11
  int v10; // [rsp+20h] [rbp-99h]
  int v11; // [rsp+28h] [rbp-91h]
  int v12; // [rsp+40h] [rbp-79h] BYREF
  int v13; // [rsp+44h] [rbp-75h] BYREF
  int v14; // [rsp+48h] [rbp-71h] BYREF
  __int64 v15; // [rsp+50h] [rbp-69h] BYREF
  __int64 v16; // [rsp+58h] [rbp-61h] BYREF
  __int64 v17; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-49h] BYREF
  int *v19; // [rsp+90h] [rbp-29h]
  __int64 v20; // [rsp+98h] [rbp-21h]
  int *v21; // [rsp+A0h] [rbp-19h]
  __int64 v22; // [rsp+A8h] [rbp-11h]
  __int64 *v23; // [rsp+B0h] [rbp-9h]
  __int64 v24; // [rsp+B8h] [rbp-1h]
  __int64 *v25; // [rsp+C0h] [rbp+7h]
  __int64 v26; // [rsp+C8h] [rbp+Fh]
  int *v27; // [rsp+D0h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+1Fh]
  __int64 *v29; // [rsp+E0h] [rbp+27h]
  __int64 v30; // [rsp+E8h] [rbp+2Fh]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u
    && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000000002LL) )
  {
    v12 = a6;
    v16 = v7;
    v19 = &v12;
    v13 = a5;
    v24 = 8LL;
    v21 = &v13;
    v23 = &v15;
    v25 = &v16;
    v14 = *v9;
    v27 = &v14;
    v29 = &v17;
    v26 = 8LL;
    v30 = 8LL;
    v20 = 4LL;
    v22 = 4LL;
    v15 = v6;
    v28 = 4LL;
    v17 = 0x1000000LL;
    tlgWriteEx_EtwWriteEx(v8, (unsigned __int8 *)&unk_14005B068, v6, 1u, v10, v11, 8u, &v18);
  }
}
