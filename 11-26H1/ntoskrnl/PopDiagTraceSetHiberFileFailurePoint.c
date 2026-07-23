/*
 * XREFs of PopDiagTraceSetHiberFileFailurePoint @ 0x1407D7B20
 * Callers:
 *     PopSetHiberFileType @ 0x14077A2FC (PopSetHiberFileType.c)
 *     PopSetHiberFileSize @ 0x1407D3928 (PopSetHiberFileSize.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSetHiberFileFailurePoint(int a1, int a2)
{
  int v3; // [rsp+30h] [rbp-49h] BYREF
  int v4; // [rsp+34h] [rbp-45h] BYREF
  int v5; // [rsp+38h] [rbp-41h] BYREF
  __int64 v6; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-31h] BYREF
  int *v8; // [rsp+58h] [rbp-21h]
  __int64 v9; // [rsp+60h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+70h] [rbp-9h] BYREF
  int *v11; // [rsp+90h] [rbp+17h]
  __int64 v12; // [rsp+98h] [rbp+1Fh]
  int *v13; // [rsp+A0h] [rbp+27h]
  __int64 v14; // [rsp+A8h] [rbp+2Fh]
  __int64 *v15; // [rsp+B0h] [rbp+37h]
  __int64 v16; // [rsp+B8h] [rbp+3Fh]
  int v17; // [rsp+E0h] [rbp+67h] BYREF

  v17 = a1;
  v3 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SET_HIBER_FILE_FAILURE) )
  {
    UserData.Ptr = (ULONGLONG)&v17;
    v3 = a2;
    v8 = &v3;
    *(_QWORD *)&UserData.Size = 4LL;
    v9 = 4LL;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SET_HIBER_FILE_FAILURE, 0LL, 2u, &UserData);
  }
  if ( (unsigned int)dword_140E07560 > 5 && tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL) )
  {
    v4 = v17;
    v12 = 4LL;
    v11 = &v4;
    v5 = a2;
    v13 = &v5;
    v14 = 4LL;
    v15 = &v6;
    v6 = 0x1000000LL;
    v16 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07560, (unsigned __int8 *)byte_14004A325, 0LL, 0LL, 5u, &v10);
  }
}
