/*
 * XREFs of TtmiLogExitProximity @ 0x1407EF2A4
 * Callers:
 *     TtmpExitProximity @ 0x1407F2298 (TtmpExitProximity.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogExitProximity(int a1, int a2, char a3)
{
  _UNKNOWN **v3; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v11; // [rsp+38h] [rbp-29h] BYREF
  int SessionId; // [rsp+3Ch] [rbp-25h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+44h] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-19h] BYREF
  int *p_SessionId; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  int *v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  int *v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  char *v22; // [rsp+98h] [rbp+37h]
  __int64 v23; // [rsp+A0h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  v3 = &retaddr;
  if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v3 )
    {
      SessionId = TtmiGetSessionId(v8, v7, v9);
      v17 = 4LL;
      p_SessionId = &SessionId;
      v13 = a1;
      v18 = &v13;
      v19 = 4LL;
      v20 = &v14;
      v14 = a2;
      v22 = &v11;
      v21 = 4LL;
      v11 = a3;
      v23 = 1LL;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD68B8,
                     (unsigned __int8 *)&dword_140052ED4,
                     0LL,
                     0LL,
                     6u,
                     &v15);
    }
  }
  return (char)v3;
}
