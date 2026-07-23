/*
 * XREFs of TtmiLogCalloutWatchdogCrashSkipped @ 0x1407EE3C0
 * Callers:
 *     TtmpCalloutWatchdogCallback @ 0x1407EB3F0 (TtmpCalloutWatchdogCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogCalloutWatchdogCrashSkipped(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _UNKNOWN **v6; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int SessionId; // [rsp+38h] [rbp-89h] BYREF
  int v16; // [rsp+3Ch] [rbp-85h] BYREF
  int v17; // [rsp+40h] [rbp-81h] BYREF
  __int64 v18; // [rsp+48h] [rbp-79h] BYREF
  __int64 v19; // [rsp+50h] [rbp-71h] BYREF
  __int64 v20; // [rsp+58h] [rbp-69h] BYREF
  __int64 v21; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+68h] [rbp-59h] BYREF
  int *p_SessionId; // [rsp+88h] [rbp-39h]
  __int64 v24; // [rsp+90h] [rbp-31h]
  int *v25; // [rsp+98h] [rbp-29h]
  __int64 v26; // [rsp+A0h] [rbp-21h]
  int *v27; // [rsp+A8h] [rbp-19h]
  __int64 v28; // [rsp+B0h] [rbp-11h]
  __int64 *v29; // [rsp+B8h] [rbp-9h]
  __int64 v30; // [rsp+C0h] [rbp-1h]
  __int64 *v31; // [rsp+C8h] [rbp+7h]
  __int64 v32; // [rsp+D0h] [rbp+Fh]
  __int64 *v33; // [rsp+D8h] [rbp+17h]
  __int64 v34; // [rsp+E0h] [rbp+1Fh]
  __int64 *v35; // [rsp+E8h] [rbp+27h]
  __int64 v36; // [rsp+F0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+4Fh] BYREF

  v6 = &retaddr;
  if ( (unsigned int)dword_140FD6880 > 5 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140FD6880, 0x400000000001LL);
    if ( (_BYTE)v6 )
    {
      SessionId = TtmiGetSessionId(v12, v11, v13);
      v24 = 4LL;
      p_SessionId = &SessionId;
      v16 = a1;
      v25 = &v16;
      v26 = 4LL;
      v27 = &v17;
      v17 = a2;
      v29 = &v18;
      v31 = &v19;
      v20 = a5;
      v33 = &v20;
      v21 = a6;
      v35 = &v21;
      v28 = 4LL;
      v18 = a3;
      v30 = 8LL;
      v19 = a4;
      v32 = 8LL;
      v34 = 8LL;
      v36 = 8LL;
      LOBYTE(v6) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD6880,
                     (unsigned __int8 *)byte_140051E65,
                     0LL,
                     0LL,
                     9u,
                     &v22);
    }
  }
  return (char)v6;
}
