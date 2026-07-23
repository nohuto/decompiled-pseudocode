/*
 * XREFs of EtwTraceWorkingSetSwap @ 0x140AF673C
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403FE41C (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1404CF090 (MmInSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140880B10 (MiInSwapSharedWorkingSetWorker.c)
 *     MmInSwapVirtualAddresses @ 0x140AF6684 (MmInSwapVirtualAddresses.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceWorkingSetSwap(PEPROCESS Process, char a2, __int64 a3)
{
  BOOLEAN result; // al
  ULONG v7; // r9d
  __int64 *v8; // rdx
  unsigned int ProcessId; // [rsp+38h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  __int64 v11; // [rsp+58h] [rbp-9h]
  __int64 v12; // [rsp+60h] [rbp-1h]
  __int64 v13; // [rsp+68h] [rbp+7h]
  __int64 v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  __int64 v17; // [rsp+88h] [rbp+27h]
  __int64 v18; // [rsp+90h] [rbp+2Fh]
  __int64 v19; // [rsp+98h] [rbp+37h]
  __int64 v20; // [rsp+A0h] [rbp+3Fh]

  result = EtwProviderEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink, 0, 0x80uLL);
  if ( result )
  {
    ProcessId = (unsigned int)PsGetProcessId(Process);
    *(_QWORD *)&UserData.Size = 4LL;
    v7 = 2;
    v12 = 4LL;
    UserData.Ptr = (ULONGLONG)&ProcessId;
    if ( (a2 & 2) != 0 )
    {
      v11 = a3;
      v8 = KERNEL_MEM_EVENT_WS_INSWAP_START;
      if ( (a2 & 1) == 0 )
        v8 = (__int64 *)&KERNEL_MEM_EVENT_WS_OUTSWAP_START;
    }
    else
    {
      v11 = a3 + 32;
      if ( (a2 & 1) != 0 )
      {
        v8 = KERNEL_MEM_EVENT_WS_INSWAP_STOP;
      }
      else
      {
        v13 = a3;
        v15 = a3 + 8;
        v8 = KERNEL_MEM_EVENT_WS_OUTSWAP_STOP;
        v14 = 8LL;
        v17 = a3 + 16;
        v7 = 6;
        v16 = 8LL;
        v19 = a3 + 24;
        v18 = 8LL;
        v20 = 8LL;
      }
    }
    return EtwWrite(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
             (PCEVENT_DESCRIPTOR)v8,
             0LL,
             v7,
             &UserData);
  }
  return result;
}
