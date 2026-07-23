/*
 * XREFs of PopTracePowerButtonSuppressionOptedIn @ 0x140CD8BF4
 * Callers:
 *     PopPowerButtonSuppressionInit @ 0x140CD931C (PopPowerButtonSuppressionInit.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopTracePowerButtonSuppressionOptedIn(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  char v5; // r8
  char v6; // r9
  char v7; // r10
  char v8; // [rsp+30h] [rbp-61h] BYREF
  char v9; // [rsp+31h] [rbp-60h] BYREF
  char v10; // [rsp+32h] [rbp-5Fh] BYREF
  int v11; // [rsp+34h] [rbp-5Dh] BYREF
  int v12; // [rsp+38h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-41h] BYREF
  char *v15; // [rsp+70h] [rbp-21h]
  __int64 v16; // [rsp+78h] [rbp-19h]
  int *v17; // [rsp+80h] [rbp-11h]
  __int64 v18; // [rsp+88h] [rbp-9h]
  char *v19; // [rsp+90h] [rbp-1h]
  __int64 v20; // [rsp+98h] [rbp+7h]
  char *v21; // [rsp+A0h] [rbp+Fh]
  __int64 v22; // [rsp+A8h] [rbp+17h]
  int *v23; // [rsp+B0h] [rbp+1Fh]
  __int64 v24; // [rsp+B8h] [rbp+27h]
  __int64 *v25; // [rsp+C0h] [rbp+2Fh]
  __int64 v26; // [rsp+C8h] [rbp+37h]

  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v9 = v5;
    v15 = &v8;
    v11 = PopEnablePowerButtonSuppressionOverride;
    v10 = v6;
    v17 = &v11;
    v26 = 8LL;
    v19 = &v9;
    v21 = &v10;
    v12 = a5;
    v23 = &v12;
    v25 = &v13;
    v8 = v7;
    v16 = 1LL;
    v18 = 4LL;
    v20 = 1LL;
    v22 = 1LL;
    v24 = 4LL;
    v13 = 0x1000000LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004AE9D, 0LL, 0LL, 8u, &v14);
  }
}
