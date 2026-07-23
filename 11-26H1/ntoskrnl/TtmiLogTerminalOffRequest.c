/*
 * XREFs of TtmiLogTerminalOffRequest @ 0x1407F0EC0
 * Callers:
 *     TtmiSetPendingOnOffRequest @ 0x1407F1ED4 (TtmiSetPendingOnOffRequest.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogTerminalOffRequest(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int SessionId; // [rsp+38h] [rbp-39h] BYREF
  int v11; // [rsp+3Ch] [rbp-35h] BYREF
  int v12; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-29h] BYREF
  int *p_SessionId; // [rsp+68h] [rbp-9h]
  __int64 v15; // [rsp+70h] [rbp-1h]
  int *v16; // [rsp+78h] [rbp+7h]
  __int64 v17; // [rsp+80h] [rbp+Fh]
  int *v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+90h] [rbp+1Fh]
  __int64 *v20; // [rsp+98h] [rbp+27h]
  __int64 v21; // [rsp+A0h] [rbp+2Fh]
  int *v22; // [rsp+A8h] [rbp+37h]
  __int64 v23; // [rsp+B0h] [rbp+3Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v25; // [rsp+E8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v25 = a3;
  if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v3 )
    {
      SessionId = TtmiGetSessionId(v7, v6, v8);
      v15 = 4LL;
      p_SessionId = &SessionId;
      v11 = a1;
      v16 = &v11;
      v17 = 4LL;
      v18 = &v12;
      v12 = a2;
      v20 = &v23;
      v22 = &v25;
      v19 = 4LL;
      v21 = 2LL;
      v23 = 4LL;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD68B8,
                     (unsigned __int8 *)byte_140052187,
                     0LL,
                     0LL,
                     7u,
                     &v13);
    }
  }
  return (char)v3;
}
