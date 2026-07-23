/*
 * XREFs of TtmiLogDeviceInputNotified @ 0x1407EEC58
 * Callers:
 *     TtmNotifyDeviceInput @ 0x1407EAA40 (TtmNotifyDeviceInput.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogDeviceInputNotified(int a1, __int64 a2, int a3, char a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  char v15; // [rsp+38h] [rbp-79h] BYREF
  char v16; // [rsp+39h] [rbp-78h] BYREF
  char v17; // [rsp+3Ah] [rbp-77h] BYREF
  int SessionId; // [rsp+3Ch] [rbp-75h] BYREF
  int v19; // [rsp+40h] [rbp-71h] BYREF
  int v20; // [rsp+44h] [rbp-6Dh] BYREF
  __int64 v21; // [rsp+48h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+58h] [rbp-59h] BYREF
  int *p_SessionId; // [rsp+78h] [rbp-39h]
  __int64 v24; // [rsp+80h] [rbp-31h]
  int *v25; // [rsp+88h] [rbp-29h]
  __int64 v26; // [rsp+90h] [rbp-21h]
  __int64 *v27; // [rsp+98h] [rbp-19h]
  __int64 v28; // [rsp+A0h] [rbp-11h]
  int *v29; // [rsp+A8h] [rbp-9h]
  __int64 v30; // [rsp+B0h] [rbp-1h]
  char *v31; // [rsp+B8h] [rbp+7h]
  __int64 v32; // [rsp+C0h] [rbp+Fh]
  char *v33; // [rsp+C8h] [rbp+17h]
  __int64 v34; // [rsp+D0h] [rbp+1Fh]
  char *v35; // [rsp+D8h] [rbp+27h]
  __int64 v36; // [rsp+E0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+4Fh] BYREF

  v6 = &retaddr;
  if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v6 )
    {
      SessionId = TtmiGetSessionId(v12, v11, v13);
      v24 = 4LL;
      p_SessionId = &SessionId;
      v19 = a1;
      v25 = &v19;
      v26 = 4LL;
      v27 = &v21;
      v21 = a2;
      v29 = &v20;
      v31 = &v15;
      v16 = a5;
      v33 = &v16;
      v17 = a6;
      v35 = &v17;
      v28 = 8LL;
      v20 = a3;
      v30 = 4LL;
      v15 = a4;
      v32 = 1LL;
      v34 = 1LL;
      v36 = 1LL;
      LOBYTE(v6) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD68B8,
                     (unsigned __int8 *)&dword_14005274C,
                     0LL,
                     0LL,
                     9u,
                     &v22);
    }
  }
  return (char)v6;
}
