/*
 * XREFs of PopDiagTraceAdaptiveBootOverridePrepared @ 0x1407D581C
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140613D24 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceAdaptiveBootOverridePrepared(int a1, char a2, int a3)
{
  _UNKNOWN **v3; // rax
  char v6; // [rsp+38h] [rbp-69h] BYREF
  BOOL v7; // [rsp+3Ch] [rbp-65h] BYREF
  int v8; // [rsp+40h] [rbp-61h] BYREF
  int v9; // [rsp+44h] [rbp-5Dh] BYREF
  __int64 v10; // [rsp+48h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-51h] BYREF
  BOOL *v12; // [rsp+60h] [rbp-41h]
  __int64 v13; // [rsp+68h] [rbp-39h]
  int *v14; // [rsp+70h] [rbp-31h]
  __int64 v15; // [rsp+78h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+88h] [rbp-19h] BYREF
  int *v17; // [rsp+A8h] [rbp+7h]
  __int64 v18; // [rsp+B0h] [rbp+Fh]
  char *v19; // [rsp+B8h] [rbp+17h]
  __int64 v20; // [rsp+C0h] [rbp+1Fh]
  int *v21; // [rsp+C8h] [rbp+27h]
  __int64 v22; // [rsp+D0h] [rbp+2Fh]
  __int64 *v23; // [rsp+D8h] [rbp+37h]
  __int64 v24; // [rsp+E0h] [rbp+3Fh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF
  int v26; // [rsp+108h] [rbp+67h] BYREF
  int v27; // [rsp+118h] [rbp+77h] BYREF

  v3 = &retaddr;
  v27 = a3;
  v26 = a1;
  v7 = 0;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_INITIATED_REBOOT_PREPARE);
    if ( (_BYTE)v3 )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v13 = 4LL;
      v15 = 4LL;
      v7 = a2 != 0;
      UserData.Ptr = (ULONGLONG)&v26;
      v12 = &v7;
      v14 = &v27;
      LOBYTE(v3) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_INITIATED_REBOOT_PREPARE, 0LL, 3u, &UserData);
    }
  }
  if ( (unsigned int)dword_140E07560 > 5 )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)&dword_140E07560, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      v8 = v26;
      v18 = 4LL;
      v17 = &v8;
      v6 = a2;
      v19 = &v6;
      v9 = v27;
      v21 = &v9;
      v23 = &v10;
      v20 = 1LL;
      v22 = 4LL;
      v10 = 0x1000000LL;
      v24 = 8LL;
      LOBYTE(v3) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_140E07560,
                     (unsigned __int8 *)byte_14004D503,
                     0LL,
                     0LL,
                     6u,
                     &v16);
    }
  }
  return (char)v3;
}
