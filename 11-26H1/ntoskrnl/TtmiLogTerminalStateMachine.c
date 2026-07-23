/*
 * XREFs of TtmiLogTerminalStateMachine @ 0x1407F1320
 * Callers:
 *     TtmpUpdateTerminalState @ 0x1407F2640 (TtmpUpdateTerminalState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 */

char __fastcall TtmiLogTerminalStateMachine(int a1, int *a2, int *a3)
{
  _UNKNOWN **v3; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  char v11; // [rsp+38h] [rbp-D0h] BYREF
  char v12; // [rsp+39h] [rbp-CFh] BYREF
  char v13; // [rsp+3Ah] [rbp-CEh] BYREF
  int SessionId; // [rsp+3Ch] [rbp-CCh] BYREF
  int v15; // [rsp+40h] [rbp-C8h] BYREF
  int v16; // [rsp+44h] [rbp-C4h] BYREF
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  int v18; // [rsp+4Ch] [rbp-BCh] BYREF
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+88h] [rbp-80h] BYREF
  int *p_SessionId; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  __int64 *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  __int64 *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int64 *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  char *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  char *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  int *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  int *v48; // [rsp+148h] [rbp+40h]
  __int64 v49; // [rsp+150h] [rbp+48h]
  int *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  char *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  int *v54; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]
  __int64 *v56; // [rsp+188h] [rbp+80h]
  __int64 v57; // [rsp+190h] [rbp+88h]
  __int64 *v58; // [rsp+198h] [rbp+90h]
  __int64 v59; // [rsp+1A0h] [rbp+98h]
  _UNKNOWN *retaddr; // [rsp+1C0h] [rbp+B8h] BYREF

  v3 = &retaddr;
  if ( (unsigned int)dword_140FD68B8 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140FD68B8, 1LL);
    if ( (_BYTE)v3 )
    {
      SessionId = TtmiGetSessionId(v8, v7, v9);
      p_SessionId = &SessionId;
      v30 = &v15;
      v16 = *a2;
      v32 = &v16;
      v21 = *((_QWORD *)a2 + 1);
      v34 = &v21;
      v22 = *((_QWORD *)a2 + 2);
      v36 = &v22;
      v23 = *((_QWORD *)a2 + 3);
      v38 = &v23;
      v24 = *((_QWORD *)a2 + 4);
      v40 = &v24;
      v11 = *((_BYTE *)a2 + 40);
      v42 = &v11;
      v12 = *((_BYTE *)a2 + 41);
      v44 = &v12;
      v17 = a2[11];
      v46 = &v17;
      v18 = a2[12];
      v48 = &v18;
      v19 = *a3;
      v50 = &v19;
      v13 = *((_BYTE *)a3 + 4);
      v52 = &v13;
      v20 = a3[2];
      v54 = &v20;
      v25 = *((_QWORD *)a3 + 2);
      v56 = &v25;
      v26 = *((_QWORD *)a3 + 3);
      v58 = &v26;
      v29 = 4LL;
      v15 = a1;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 8LL;
      v37 = 8LL;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 1LL;
      v45 = 1LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v53 = 1LL;
      v55 = 4LL;
      v57 = 8LL;
      v59 = 8LL;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140FD68B8,
                     (unsigned __int8 *)word_140052CDA,
                     0LL,
                     0LL,
                     0x12u,
                     &v27);
    }
  }
  return (char)v3;
}
