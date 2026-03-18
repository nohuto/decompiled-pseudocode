/*
 * XREFs of MiLogResetPagesCommitRelease @ 0x1406E473C
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x1406E4EA0 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x1403EEB48 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404E33C4 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void MiLogResetPagesCommitRelease()
{
  __int64 v0; // r9
  __int64 v1; // r9
  int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // [rsp+20h] [rbp-59h]
  int v6; // [rsp+28h] [rbp-51h]
  int v7; // [rsp+40h] [rbp-39h] BYREF
  __int64 v8; // [rsp+48h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-19h] BYREF
  char v11[16]; // [rsp+80h] [rbp+7h] BYREF
  int *v12; // [rsp+90h] [rbp+17h]
  __int64 v13; // [rsp+98h] [rbp+1Fh]
  __int64 *v14; // [rsp+A0h] [rbp+27h]
  __int64 v15; // [rsp+A8h] [rbp+2Fh]
  __int64 *v16; // [rsp+B0h] [rbp+37h]
  __int64 v17; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)stru_140E36558.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 4LL) )
  {
    tlgCreate1Sz_char((__int64)v11, (const CHAR *)(v0 + 824));
    v2 = *(_DWORD *)(v1 + 464);
    v12 = &v7;
    v7 = v2;
    v14 = &v8;
    v9 = *(_QWORD *)(v1 + 1224);
    v16 = &v9;
    v13 = 4LL;
    v8 = v3;
    v15 = 8LL;
    v17 = 8LL;
    tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&word_14005780E, v3, 1u, v5, v6, 6u, &v10);
  }
}
