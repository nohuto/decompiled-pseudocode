/*
 * XREFs of MiLogOutswappedProcessCommitRelease @ 0x1406E9314
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1406E9CDC (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void MiLogOutswappedProcessCommitRelease()
{
  __int64 v0; // r11
  __int64 v1; // r11
  int v2; // ecx
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // [rsp+20h] [rbp-59h]
  int v7; // [rsp+28h] [rbp-51h]
  int v8; // [rsp+40h] [rbp-39h] BYREF
  __int64 v9; // [rsp+48h] [rbp-31h] BYREF
  __int64 v10; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-19h] BYREF
  char v12[16]; // [rsp+80h] [rbp+7h] BYREF
  int *v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  __int64 *v15; // [rsp+A0h] [rbp+27h]
  __int64 v16; // [rsp+A8h] [rbp+2Fh]
  __int64 *v17; // [rsp+B0h] [rbp+37h]
  __int64 v18; // [rsp+B8h] [rbp+3Fh]

  if ( *(_DWORD *)stru_140E366D8.FirstArgument > 5u && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 4LL) )
  {
    tlgCreate1Sz_char((__int64)v12, (const CHAR *)(v0 + 824));
    v2 = *(_DWORD *)(v1 + 464);
    v13 = &v8;
    v8 = v2;
    v15 = &v9;
    v10 = v3;
    v17 = &v10;
    v14 = 4LL;
    v9 = v4;
    v16 = 8LL;
    v18 = 8LL;
    tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&dword_14005879C, v4, 1u, v6, v7, 6u, &v11);
  }
}
