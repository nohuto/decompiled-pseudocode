/*
 * XREFs of TtmiLogCalloutStart @ 0x1407EE084
 * Callers:
 *     TtmpStartCallout @ 0x1407EBC1C (TtmpStartCallout.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogCalloutStart(int a1, __int64 a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int SessionId; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  int v14; // [rsp+40h] [rbp-51h] BYREF
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+58h] [rbp-39h] BYREF
  int *p_SessionId; // [rsp+78h] [rbp-19h]
  __int64 v18; // [rsp+80h] [rbp-11h]
  int *v19; // [rsp+88h] [rbp-9h]
  __int64 v20; // [rsp+90h] [rbp-1h]
  __int64 *v21; // [rsp+98h] [rbp+7h]
  __int64 v22; // [rsp+A0h] [rbp+Fh]
  _QWORD *v23; // [rsp+A8h] [rbp+17h]
  __int64 v24; // [rsp+B0h] [rbp+1Fh]
  int *v25; // [rsp+B8h] [rbp+27h]
  _QWORD v26[3]; // [rsp+C0h] [rbp+2Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF
  int v28; // [rsp+108h] [rbp+77h] BYREF

  v4 = &retaddr;
  v28 = a3;
  if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v4 )
    {
      SessionId = TtmiGetSessionId(v9, v8, v10);
      v18 = 4LL;
      v22 = 8LL;
      p_SessionId = &SessionId;
      v13 = a1;
      v19 = &v13;
      v20 = 4LL;
      v21 = &v15;
      v23 = v26;
      v25 = &v28;
      v26[1] = &v14;
      v15 = a2;
      v24 = 2LL;
      v26[0] = 4LL;
      v14 = a4;
      v26[2] = 4LL;
      LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD68B8,
                     (unsigned __int8 *)byte_140052405,
                     0LL,
                     0LL,
                     8u,
                     &v16);
    }
  }
  return (char)v4;
}
