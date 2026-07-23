/*
 * XREFs of EtwTraceWorkingSetInSwapStoreFail @ 0x140AECBD8
 * Callers:
 *     MiInSwapStoreWorker @ 0x140AECA90 (MiInSwapStoreWorker.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceWorkingSetInSwapStoreFail(PEPROCESS Process, int a2)
{
  BOOLEAN result; // al
  unsigned int ProcessId; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  int *v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  result = EtwProviderEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink, 0, 0x80uLL);
  if ( result )
  {
    ProcessId = (unsigned int)PsGetProcessId(Process);
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&ProcessId;
    v7 = 4LL;
    v6 = &v8;
    return EtwWrite(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
             &KERNEL_MEM_EVENT_WS_INSWAP_STORE_FAIL,
             0LL,
             2u,
             &UserData);
  }
  return result;
}
