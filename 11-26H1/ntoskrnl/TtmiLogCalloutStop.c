/*
 * XREFs of TtmiLogCalloutStop @ 0x1407EE1A4
 * Callers:
 *     TtmpStopCallout @ 0x1407EBDA4 (TtmpStopCallout.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogCalloutStop(int a1, int a2, unsigned __int64 a3, int a4, int a5, unsigned __int64 a6)
{
  _UNKNOWN **v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int8 *v14; // rdx
  int *v15; // rcx
  unsigned __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+38h] [rbp-99h] BYREF
  int v22; // [rsp+3Ch] [rbp-95h] BYREF
  int v23; // [rsp+40h] [rbp-91h] BYREF
  int SessionId; // [rsp+44h] [rbp-8Dh] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+58h] [rbp-79h] BYREF
  int *p_SessionId; // [rsp+78h] [rbp-59h]
  __int64 v29; // [rsp+80h] [rbp-51h]
  int *v30; // [rsp+88h] [rbp-49h]
  __int64 v31; // [rsp+90h] [rbp-41h]
  int *v32; // [rsp+98h] [rbp-39h]
  __int64 v33; // [rsp+A0h] [rbp-31h]
  unsigned __int64 *v34; // [rsp+A8h] [rbp-29h]
  __int64 v35; // [rsp+B0h] [rbp-21h]
  __int64 *v36; // [rsp+B8h] [rbp-19h]
  __int64 v37; // [rsp+C0h] [rbp-11h]
  int *v38; // [rsp+C8h] [rbp-9h]
  __int64 v39; // [rsp+D0h] [rbp-1h] BYREF
  int *v40; // [rsp+D8h] [rbp+7h]
  __int64 v41; // [rsp+E0h] [rbp+Fh]
  unsigned __int64 *v42; // [rsp+E8h] [rbp+17h]
  __int64 v43; // [rsp+F0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+4Fh] BYREF
  int v45; // [rsp+140h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v45 = a4;
  v7 = a6;
  if ( a6 > 0x1312D00 )
  {
    if ( (unsigned int)dword_140FD6880 > 5 )
    {
      LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140FD6880, 0x400000000001LL);
      if ( (_BYTE)v6 )
      {
        SessionId = TtmiGetSessionId(v18, v17, v19);
        v14 = (unsigned __int8 *)&word_140053036;
        v23 = a1;
        p_SessionId = &SessionId;
        v15 = &dword_140FD6880;
        v22 = a2;
        v30 = &v23;
        v32 = &v22;
        v34 = &v26;
        v36 = &v39;
        v38 = &v45;
        v21 = a5;
        v40 = &v21;
        v16 = &v25;
        v26 = a3;
        v25 = v7;
        goto LABEL_8;
      }
    }
  }
  else if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v6 )
    {
      v21 = TtmiGetSessionId(v12, v11, v13);
      v14 = (unsigned __int8 *)&dword_140052B24;
      v22 = a1;
      p_SessionId = &v21;
      v15 = &dword_140FD68B8;
      v23 = a2;
      v30 = &v22;
      v32 = &v23;
      v34 = &v25;
      v36 = &v39;
      v38 = &v45;
      SessionId = a5;
      v40 = &SessionId;
      v16 = &v26;
      v25 = a3;
      v26 = v7;
LABEL_8:
      v42 = v16;
      v31 = 4LL;
      v29 = 4LL;
      v33 = 4LL;
      v35 = 8LL;
      v37 = 2LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 8LL;
      LOBYTE(v6) = tlgWriteTransfer_EtwWriteTransfer((__int64)v15, v14, 0LL, 0LL, 0xAu, &v27);
    }
  }
  return (char)v6;
}
