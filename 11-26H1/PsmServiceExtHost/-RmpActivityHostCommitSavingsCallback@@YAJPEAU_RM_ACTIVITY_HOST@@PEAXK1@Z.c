/*
 * XREFs of ?RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180083700
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostCommitSavingsCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, int *a4)
{
  int v4; // edi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v11; // [rsp+30h] [rbp-69h] BYREF
  int v12; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-61h] BYREF
  __int64 v14; // [rsp+40h] [rbp-59h] BYREF
  _OWORD ProcessInformation[2]; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v17; // [rsp+90h] [rbp-9h]
  __int64 v18; // [rsp+98h] [rbp-1h]
  __int64 *v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  bool *v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  int *v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]

  v4 = *a4;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  LODWORD(ProcessInformation[0]) = 3;
  DWORD1(ProcessInformation[0]) = v4 != 0;
  v7 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, ProcessInformation, 0x20u);
  if ( (unsigned int)dword_1800E1278 > 4 && tlgKeywordOn((__int64)&dword_1800E1278, 17LL) )
  {
    v14 = *((_QWORD *)a1 + 4);
    v24 = v9;
    v23 = &v12;
    v11 = v4 != 0;
    v18 = v9;
    v21 = &v11;
    v12 = a3;
    v19 = &v14;
    v13 = v7;
    v17 = &v13;
    v22 = 1LL;
    v20 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v8, byte_1800D1F08, 0LL, 0LL, 6u, &v16);
  }
  return v7;
}
