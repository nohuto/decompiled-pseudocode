/*
 * XREFs of TtmiLogDeviceArrivalNotified @ 0x1407EE51C
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407EA680 (TtmNotifyDeviceArrival.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogDeviceArrivalNotified(int a1, __int64 a2, int a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int SessionId; // [rsp+38h] [rbp-61h] BYREF
  int v15; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v16; // [rsp+40h] [rbp-59h] BYREF
  int v17; // [rsp+44h] [rbp-55h] BYREF
  int v18; // [rsp+48h] [rbp-51h] BYREF
  __int64 v19; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+58h] [rbp-41h] BYREF
  int *p_SessionId; // [rsp+78h] [rbp-21h]
  __int64 v22; // [rsp+80h] [rbp-19h]
  int *v23; // [rsp+88h] [rbp-11h]
  __int64 v24; // [rsp+90h] [rbp-9h]
  __int64 *v25; // [rsp+98h] [rbp-1h]
  __int64 v26; // [rsp+A0h] [rbp+7h]
  int *v27; // [rsp+A8h] [rbp+Fh]
  __int64 v28; // [rsp+B0h] [rbp+17h]
  int *v29; // [rsp+B8h] [rbp+1Fh]
  __int64 v30; // [rsp+C0h] [rbp+27h]
  int *v31; // [rsp+C8h] [rbp+2Fh]
  __int64 v32; // [rsp+D0h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v5 )
    {
      SessionId = TtmiGetSessionId(v11, v10, v12);
      v22 = 4LL;
      v26 = 8LL;
      p_SessionId = &SessionId;
      v15 = a1;
      v23 = &v15;
      v24 = 4LL;
      v25 = &v19;
      v27 = &v16;
      v29 = &v17;
      v18 = a5;
      v31 = &v18;
      v19 = a2;
      v16 = a3;
      v28 = 4LL;
      v17 = a4;
      v30 = 4LL;
      v32 = 4LL;
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD68B8,
                     (unsigned __int8 *)&word_1400521D6,
                     0LL,
                     0LL,
                     8u,
                     &v20);
    }
  }
  return (char)v5;
}
