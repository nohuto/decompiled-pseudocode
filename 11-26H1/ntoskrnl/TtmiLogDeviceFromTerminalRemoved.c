/*
 * XREFs of TtmiLogDeviceFromTerminalRemoved @ 0x1407EEB38
 * Callers:
 *     TtmiEvacuateDevices @ 0x1407EAD10 (TtmiEvacuateDevices.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogDeviceFromTerminalRemoved(int a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int SessionId; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  int v15; // [rsp+40h] [rbp-41h] BYREF
  int v16; // [rsp+44h] [rbp-3Dh] BYREF
  __int64 v17; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-29h] BYREF
  int *p_SessionId; // [rsp+78h] [rbp-9h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  int *v21; // [rsp+88h] [rbp+7h]
  __int64 v22; // [rsp+90h] [rbp+Fh]
  int *v23; // [rsp+98h] [rbp+17h]
  __int64 v24; // [rsp+A0h] [rbp+1Fh]
  __int64 *v25; // [rsp+A8h] [rbp+27h]
  __int64 v26; // [rsp+B0h] [rbp+2Fh]
  int *v27; // [rsp+B8h] [rbp+37h]
  __int64 v28; // [rsp+C0h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+5Fh] BYREF

  v4 = &retaddr;
  if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v4 )
    {
      SessionId = TtmiGetSessionId(v10, v9, v11);
      v20 = 4LL;
      p_SessionId = &SessionId;
      v14 = a1;
      v21 = &v14;
      v22 = 4LL;
      v23 = &v15;
      v15 = a2;
      v25 = &v17;
      v27 = &v16;
      v24 = 4LL;
      v17 = a3;
      v26 = 8LL;
      v16 = a4;
      v28 = 4LL;
      LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD68B8,
                     (unsigned __int8 *)&byte_140053137,
                     0LL,
                     0LL,
                     7u,
                     &v18);
    }
  }
  return (char)v4;
}
