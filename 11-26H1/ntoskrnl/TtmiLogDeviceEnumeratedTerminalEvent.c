/*
 * XREFs of TtmiLogDeviceEnumeratedTerminalEvent @ 0x1407EEA08
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1407EB890 (TtmpPublishDeviceEvent.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogDeviceEnumeratedTerminalEvent(int a1, int a2, int a3, int a4, const WCHAR *a5)
{
  _UNKNOWN **v5; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int SessionId; // [rsp+38h] [rbp-71h] BYREF
  int v15; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v16; // [rsp+40h] [rbp-69h] BYREF
  int v17; // [rsp+44h] [rbp-65h] BYREF
  int v18; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+58h] [rbp-51h] BYREF
  int *p_SessionId; // [rsp+78h] [rbp-31h]
  __int64 v21; // [rsp+80h] [rbp-29h]
  int *v22; // [rsp+88h] [rbp-21h]
  __int64 v23; // [rsp+90h] [rbp-19h]
  int *v24; // [rsp+98h] [rbp-11h]
  __int64 v25; // [rsp+A0h] [rbp-9h]
  int *v26; // [rsp+A8h] [rbp-1h]
  __int64 v27; // [rsp+B0h] [rbp+7h]
  int *v28; // [rsp+B8h] [rbp+Fh]
  __int64 v29; // [rsp+C0h] [rbp+17h]
  _BYTE v30[16]; // [rsp+C8h] [rbp+1Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v5 )
    {
      SessionId = TtmiGetSessionId(v11, v10, v12);
      v21 = 4LL;
      p_SessionId = &SessionId;
      v15 = a1;
      v22 = &v15;
      v24 = &v16;
      v26 = &v17;
      v28 = &v18;
      v23 = 4LL;
      v16 = a2;
      v25 = 4LL;
      v17 = a3;
      v27 = 4LL;
      v18 = a4;
      v29 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v30, a5);
      LOBYTE(v5) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD68B8,
                     (unsigned __int8 *)byte_140053421,
                     0LL,
                     0LL,
                     8u,
                     &v19);
    }
  }
  return (char)v5;
}
