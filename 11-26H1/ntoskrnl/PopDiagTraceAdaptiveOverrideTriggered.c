/*
 * XREFs of PopDiagTraceAdaptiveOverrideTriggered @ 0x1407D5A74
 * Callers:
 *     PopAdaptiveConsoleSessionOverrideTrigger @ 0x1407E2184 (PopAdaptiveConsoleSessionOverrideTrigger.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void PopDiagTraceAdaptiveOverrideTriggered()
{
  int v0; // r8d
  int v1; // r9d
  int v2; // r10d
  __int64 v3; // r11
  int v4; // [rsp+30h] [rbp-69h] BYREF
  int v5; // [rsp+34h] [rbp-65h] BYREF
  int v6; // [rsp+38h] [rbp-61h] BYREF
  __int64 v7; // [rsp+40h] [rbp-59h] BYREF
  __int64 v8; // [rsp+48h] [rbp-51h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v11; // [rsp+80h] [rbp-19h]
  __int64 v12; // [rsp+88h] [rbp-11h]
  __int64 *v13; // [rsp+90h] [rbp-9h]
  __int64 v14; // [rsp+98h] [rbp-1h]
  int *v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  int *v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  int *v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]
  __int64 *v21; // [rsp+D0h] [rbp+37h]
  __int64 v22; // [rsp+D8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v7 = v3;
    v11 = &v7;
    v12 = 8LL;
    v5 = v0;
    v13 = &v8;
    v8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v15 = &v4;
    v6 = v1;
    v17 = &v5;
    v14 = 8LL;
    v19 = &v6;
    v4 = v2;
    v21 = &v9;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    v9 = 0x1000000LL;
    v22 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004D5BD, 0LL, 0LL, 8u, &v10);
  }
}
