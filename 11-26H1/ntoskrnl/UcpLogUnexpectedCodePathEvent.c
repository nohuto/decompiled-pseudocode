/*
 * XREFs of UcpLogUnexpectedCodePathEvent @ 0x140717B14
 * Callers:
 *     UcInitialize @ 0x14071752C (UcInitialize.c)
 *     UcpLogEventGenerateDump @ 0x140717A38 (UcpLogEventGenerateDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void UcpLogUnexpectedCodePathEvent()
{
  unsigned int *v0; // r8
  int v1; // r9d
  unsigned __int8 CurrentIrql; // al
  unsigned int v3; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v4; // [rsp+34h] [rbp-55h] BYREF
  int v5; // [rsp+38h] [rbp-51h] BYREF
  int v6; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  __int64 *v12; // [rsp+80h] [rbp-9h]
  __int64 v13; // [rsp+88h] [rbp-1h]
  unsigned int *v14; // [rsp+90h] [rbp+7h]
  __int64 v15; // [rsp+98h] [rbp+Fh]
  unsigned int *v16; // [rsp+A0h] [rbp+17h]
  __int64 v17; // [rsp+A8h] [rbp+1Fh]
  int *v18; // [rsp+B0h] [rbp+27h]
  __int64 v19; // [rsp+B8h] [rbp+2Fh]
  int *v20; // [rsp+C0h] [rbp+37h]
  __int64 v21; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_140E0A020 > 4 && tlgKeywordOn((__int64)&dword_140E0A020, 0x400000000000LL) )
  {
    v7 = 0x2000000LL;
    v10 = &v7;
    v8 = *v0;
    v12 = &v8;
    v3 = v0[1];
    v14 = &v3;
    v4 = v0[2];
    v16 = &v4;
    v18 = &v5;
    v11 = 8LL;
    v13 = 8LL;
    v15 = 4LL;
    v17 = 4LL;
    v5 = v1;
    v19 = 4LL;
    CurrentIrql = KeGetCurrentIrql();
    v6 = CurrentIrql;
    v20 = &v6;
    v21 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A020, (unsigned __int8 *)byte_14005B573, 0LL, 0LL, v11, &v9);
  }
}
