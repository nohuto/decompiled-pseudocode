/*
 * XREFs of UcOnUnexpectedCodePath @ 0x180157830
 * Callers:
 *     RtlLogUnexpectedCodepath @ 0x180148AA0 (RtlLogUnexpectedCodepath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 *     _tlgKeywordOn @ 0x1800EB8E8 (_tlgKeywordOn.c)
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 *     RtlCaptureContext @ 0x180126D40 (RtlCaptureContext.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180157B98 (UcpFindOrCreateTelemetryRecord.c)
 *     UcpRetrieveCurrentConfigSettings @ 0x180157D34 (UcpRetrieveCurrentConfigSettings.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall UcOnUnexpectedCodePath(unsigned int *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // edi
  void *UniqueThread; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  void *v20; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-A8h]
  unsigned int v22; // [rsp+64h] [rbp-A4h]
  unsigned int v23; // [rsp+68h] [rbp-A0h]
  int v24; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v25[4]; // [rsp+78h] [rbp-90h] BYREF
  void *v26; // [rsp+88h] [rbp-80h]
  int v27; // [rsp+90h] [rbp-78h]
  __int64 *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  unsigned int *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  unsigned int *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  struct _CONTEXT ContextRecord; // [rsp+118h] [rbp+10h] BYREF
  void *retaddr; // [rsp+610h] [rbp+508h]

  v20 = retaddr;
  v21 = *a1;
  v22 = a1[1];
  v2 = a1[2];
  v24 = 0;
  v23 = v2;
  v4 = RtlRunOnceExecuteOnce(
         &UcpInitOnUnexpectedCodePathOnce,
         (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))UcpInitOnUnexpectedCodePathOnceCallBack,
         0LL,
         0LL);
  if ( v4 >= 0 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    if ( UcpLockOwningThreadHandle && UniqueThread == (void *)UcpLockOwningThreadHandle )
      return 3221225485LL;
    RtlAcquireSRWLockExclusive(&UcpExclusiveLock, v3);
    UcpLockOwningThreadHandle = (__int64)UniqueThread;
    LOWORD(v14) = 0;
    UcpRetrieveCurrentConfigSettings(a1, &v14, (char *)&v14 + 1);
    v7 = UcpFindOrCreateTelemetryRecord(&v20);
    v8 = v7;
    if ( v7 )
    {
      ++*(_DWORD *)(v7 + 16);
      ++*(_DWORD *)(v7 + 20);
      v9 = (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24);
      if ( (unsigned __int64)(unsigned int)v9 - *(_QWORD *)(v8 + 8) > 0xEA60 )
      {
        *(_QWORD *)(v8 + 8) = v9;
        v10 = *(_DWORD *)(v8 + 16);
        UcpLockOwningThreadHandle = 0LL;
        RtlReleaseSRWLockExclusive(&UcpExclusiveLock);
        if ( !(_BYTE)v14 )
        {
          if ( (unsigned int)dword_1801C56C8 > 4 && tlgKeywordOn((__int64)&dword_1801C56C8, 0x400000000000LL) )
          {
            v19 = *a1;
            v28 = &v19;
            v15 = a1[1];
            v30 = &v15;
            v16 = a1[2];
            v32 = &v16;
            v34 = &v17;
            v36 = &v18;
            v29 = 8LL;
            v31 = v13;
            v33 = v13;
            v17 = v10;
            v35 = v13;
            LODWORD(v18) = 0;
            v37 = v13;
            tlgWriteTransfer_EtwEventWriteTransfer(v11, byte_18019BFBF, v12, v13, 7, (__int64)v25);
          }
          *(_DWORD *)(v8 + 16) = 0;
        }
        if ( BYTE1(v14) == 1 )
        {
          memset_thunk_772440563353939046(v25, 0, 0x98uLL);
          v26 = retaddr;
          v28 = (__int64 *)*a1;
          v29 = a1[1];
          v30 = (unsigned int *)a1[2];
          v25[0] = 514;
          v27 = 3;
          memset_thunk_772440563353939046(&ContextRecord, 0, 0x4D0uLL);
          RtlCaptureContext(&ContextRecord);
          return (unsigned int)RtlReportException(v25, &ContextRecord, 15LL);
        }
        return (unsigned int)v4;
      }
      v4 = 0;
    }
    else
    {
      v4 = -1073741801;
    }
    UcpLockOwningThreadHandle = 0LL;
    RtlReleaseSRWLockExclusive(&UcpExclusiveLock);
  }
  return (unsigned int)v4;
}
