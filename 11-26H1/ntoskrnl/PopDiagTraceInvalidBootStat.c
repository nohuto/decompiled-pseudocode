/*
 * XREFs of PopDiagTraceInvalidBootStat @ 0x140CD8ACC
 * Callers:
 *     PopCheckShutdownMarker @ 0x140CD620C (PopCheckShutdownMarker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceInvalidBootStat(int a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r10d
  int v4; // r8d
  char v5; // r9
  int v6; // r11d
  char v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  int v10; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v11; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+70h] [rbp-9h]
  __int64 v14; // [rsp+78h] [rbp-1h]
  int *v15; // [rsp+80h] [rbp+7h]
  __int64 v16; // [rsp+88h] [rbp+Fh]
  int *v17; // [rsp+90h] [rbp+17h]
  __int64 v18; // [rsp+98h] [rbp+1Fh]
  char *v19; // [rsp+A0h] [rbp+27h]
  __int64 v20; // [rsp+A8h] [rbp+2Fh]
  __int64 *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]

  if ( dword_140E07560
    && tlgKeywordOn((__int64)&dword_140E07560, 0x800000000000LL)
    && v3 > 5
    && tlgKeywordOn((__int64)&dword_140E07560, v2) )
  {
    v10 = v4;
    v13 = &v8;
    v7 = v5;
    v15 = &v9;
    v8 = a1;
    v17 = &v10;
    v14 = 4LL;
    v19 = &v7;
    v9 = v6;
    v21 = &v11;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 1LL;
    v11 = 0x1000000LL;
    v22 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004C79D, 0LL, 0LL, 7u, &v12);
  }
}
