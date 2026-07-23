/*
 * XREFs of MiLogContinueTrim @ 0x1406FC9F0
 * Callers:
 *     MiPartitionTrimmedEnough @ 0x1404BB97C (MiPartitionTrimmedEnough.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiLogContinueTrim()
{
  __int64 v0; // r8
  ULONG v1; // r9d
  __int64 v2; // r10
  unsigned __int16 *v3; // r11
  int v4; // [rsp+20h] [rbp-89h]
  int v5; // [rsp+28h] [rbp-81h]
  int v6; // [rsp+40h] [rbp-69h] BYREF
  int v7; // [rsp+44h] [rbp-65h] BYREF
  __int64 v8; // [rsp+48h] [rbp-61h] BYREF
  __int64 v9; // [rsp+50h] [rbp-59h] BYREF
  __int64 v10; // [rsp+58h] [rbp-51h] BYREF
  __int64 v11; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+70h] [rbp-39h] BYREF
  int *v13; // [rsp+90h] [rbp-19h]
  __int64 v14; // [rsp+98h] [rbp-11h]
  int *v15; // [rsp+A0h] [rbp-9h]
  __int64 v16; // [rsp+A8h] [rbp-1h]
  __int64 *v17; // [rsp+B0h] [rbp+7h]
  __int64 v18; // [rsp+B8h] [rbp+Fh]
  __int64 *v19; // [rsp+C0h] [rbp+17h]
  __int64 v20; // [rsp+C8h] [rbp+1Fh]
  __int64 *v21; // [rsp+D0h] [rbp+27h]
  __int64 v22; // [rsp+D8h] [rbp+2Fh]
  __int64 *v23; // [rsp+E0h] [rbp+37h]
  __int64 v24; // [rsp+E8h] [rbp+3Fh]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1LL) )
  {
    v6 = *v3;
    v18 = v1 + 7;
    v13 = &v6;
    v7 = *(unsigned __int8 *)(v0 + 24);
    v15 = &v7;
    v8 = *(_QWORD *)(v0 + 16);
    v17 = &v8;
    v9 = *(_QWORD *)(v0 + 56);
    v19 = &v9;
    v10 = *(_QWORD *)(v0 + 48);
    v21 = &v10;
    v11 = *((_QWORD *)v3 + 2808);
    v23 = &v11;
    v20 = v18;
    v22 = v18;
    v24 = v18;
    v14 = 4LL;
    v16 = 4LL;
    tlgWriteEx_EtwWriteEx(v2, (unsigned __int8 *)&word_140058D4E, v0, v1, v4, v5, v1 + 7, &v12);
  }
}
