/*
 * XREFs of CrmLogStateMonitorStart @ 0x18006EC1C
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void CrmLogStateMonitorStart()
{
  int v0; // r9d
  __int64 v1; // r10
  int v2; // r8d
  int v3; // [rsp+30h] [rbp-39h] BYREF
  int v4; // [rsp+34h] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-29h] BYREF
  UUID *v6; // [rsp+60h] [rbp-9h]
  __int64 v7; // [rsp+68h] [rbp-1h]
  int *v8; // [rsp+70h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+Fh]
  _DWORD *v10; // [rsp+80h] [rbp+17h]
  __int64 v11; // [rsp+88h] [rbp+1Fh]
  __int64 v12; // [rsp+90h] [rbp+27h]
  _DWORD v13[2]; // [rsp+98h] [rbp+2Fh] BYREF
  int *v14; // [rsp+A0h] [rbp+37h]
  __int64 v15; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)dword_1800E12E8 > 5 && tlgKeywordOn((__int64)&dword_1800E12E8, 8LL) )
  {
    v7 = 16LL;
    v6 = &Uuid;
    v3 = v0;
    v8 = &v3;
    v10 = v13;
    v9 = 4LL;
    v11 = 2LL;
    v12 = v1;
    v13[0] = (unsigned __int16)CrmStateMonitorStateSizeGet(v0);
    v14 = &v4;
    v4 = v2;
    v13[1] = 0;
    v15 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E12E8, byte_1800CC6AA, 0LL, 0LL, 7u, &v5);
  }
}
