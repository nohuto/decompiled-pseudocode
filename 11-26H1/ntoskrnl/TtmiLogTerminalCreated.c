/*
 * XREFs of TtmiLogTerminalCreated @ 0x1407F0998
 * Callers:
 *     TtmiCreateTerminal @ 0x1407F15A8 (TtmiCreateTerminal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

void __fastcall TtmiLogTerminalCreated(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int SessionId; // [rsp+30h] [rbp-19h] BYREF
  int v8; // [rsp+34h] [rbp-15h] BYREF
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+40h] [rbp-9h] BYREF
  int *p_SessionId; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  __int64 *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140FD68B8 > 5 && tlgKeywordOn((__int64)&dword_140FD68B8, 1LL) )
  {
    SessionId = TtmiGetSessionId(v5, v4, v6);
    v12 = 4LL;
    p_SessionId = &SessionId;
    v8 = a2;
    v13 = &v8;
    v14 = 4LL;
    v15 = &v9;
    v9 = a1;
    v16 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD68B8, (unsigned __int8 *)byte_140052C49, 0LL, 0LL, 5u, &v10);
  }
}
