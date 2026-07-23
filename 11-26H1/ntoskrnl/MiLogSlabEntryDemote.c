/*
 * XREFs of MiLogSlabEntryDemote @ 0x14070C538
 * Callers:
 *     MiDemoteSlabEntry @ 0x1402A97C4 (MiDemoteSlabEntry.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiLogSlabEntryDemote()
{
  __int64 v0; // r8
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // rcx
  int v4; // eax
  int v5; // [rsp+20h] [rbp-89h]
  int v6; // [rsp+28h] [rbp-81h]
  char v7; // [rsp+40h] [rbp-69h] BYREF
  int v8; // [rsp+44h] [rbp-65h] BYREF
  __int64 v9; // [rsp+48h] [rbp-61h] BYREF
  __int64 v10; // [rsp+50h] [rbp-59h] BYREF
  __int64 v11; // [rsp+58h] [rbp-51h] BYREF
  __int64 v12; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+70h] [rbp-39h] BYREF
  char *v14; // [rsp+90h] [rbp-19h]
  __int64 v15; // [rsp+98h] [rbp-11h]
  int *v16; // [rsp+A0h] [rbp-9h]
  __int64 v17; // [rsp+A8h] [rbp-1h]
  __int64 *v18; // [rsp+B0h] [rbp+7h]
  __int64 v19; // [rsp+B8h] [rbp+Fh]
  __int64 *v20; // [rsp+C0h] [rbp+17h]
  __int64 v21; // [rsp+C8h] [rbp+1Fh]
  __int64 *v22; // [rsp+D0h] [rbp+27h]
  __int64 v23; // [rsp+D8h] [rbp+2Fh]
  __int64 *v24; // [rsp+E0h] [rbp+37h]
  __int64 v25; // [rsp+E8h] [rbp+3Fh]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 1024LL) )
  {
    v3 = *(_QWORD *)(v2 + 56);
    v7 = *(_BYTE *)(v3 + 128);
    v14 = &v7;
    v15 = 1LL;
    v4 = (*(unsigned __int16 *)(v3 + 136) >> 3) & 3;
    v19 = 8LL;
    v8 = v4;
    v16 = &v8;
    v9 = *(unsigned int *)(v2 + 84);
    v18 = &v9;
    v20 = &v10;
    v11 = *(_QWORD *)(v2 + 40);
    v22 = &v11;
    v12 = *(_QWORD *)(v2 + 48);
    v24 = &v12;
    v21 = 8LL;
    v23 = 8LL;
    v25 = 8LL;
    v17 = 4LL;
    v10 = v0;
    tlgWriteEx_EtwWriteEx(v1, (unsigned __int8 *)&word_14005A636, v0, 1u, v5, v6, 8u, &v13);
  }
}
