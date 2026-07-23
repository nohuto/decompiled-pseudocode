/*
 * XREFs of IopDumpTraceInitializeCrashDumpFailure @ 0x1405CBBA0
 * Callers:
 *     IopInitializeCrashDump @ 0x1407960C8 (IopInitializeCrashDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     IopDumpIsTracingEnabled @ 0x14052F1A4 (IopDumpIsTracingEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall IopDumpTraceInitializeCrashDumpFailure(int a1)
{
  char result; // al
  int v2; // [rsp+40h] [rbp-19h] BYREF
  __int64 v3; // [rsp+48h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v6; // [rsp+80h] [rbp+27h]
  __int64 v7; // [rsp+88h] [rbp+2Fh]
  int *v8; // [rsp+90h] [rbp+37h]
  __int64 v9; // [rsp+98h] [rbp+3Fh]
  int v10; // [rsp+C0h] [rbp+67h] BYREF

  v10 = a1;
  result = IopDumpIsTracingEnabled();
  if ( result )
  {
    UserData.Ptr = (ULONGLONG)&v10;
    *(_QWORD *)&UserData.Size = 4LL;
    result = EtwWriteEx(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_INITIALIZE_FAILED, 0LL, 0, 0LL, 0LL, 1u, &UserData);
  }
  if ( (unsigned int)dword_140E06CD8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140E06CD8, 0x400000000000LL);
    if ( result )
    {
      v3 = 0x1000000LL;
      v6 = &v3;
      v2 = v10;
      v7 = 8LL;
      v8 = &v2;
      v9 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer(
               (__int64)&dword_140E06CD8,
               (unsigned __int8 *)byte_1400472CB,
               0LL,
               0LL,
               4u,
               &v5);
    }
  }
  return result;
}
