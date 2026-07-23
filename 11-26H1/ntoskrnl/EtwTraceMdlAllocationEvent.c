/*
 * XREFs of EtwTraceMdlAllocationEvent @ 0x1404C4A08
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     EtwpGetDurationSince @ 0x14034B238 (EtwpGetDurationSince.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceMdlAllocationEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  BOOLEAN result; // al
  _QWORD v13[6]; // [rsp+40h] [rbp-39h] BYREF
  int v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+74h] [rbp-5h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-1h] BYREF

  result = EtwEventEnabled(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
             &KERNEL_MEM_EVENT_MDL_ALLOCATION);
  if ( result )
  {
    v13[0] = EtwpGetDurationSince(a8);
    v14 = a6;
    v15 = a7;
    v13[1] = a5;
    UserData.Ptr = (ULONGLONG)v13;
    v13[5] = a1;
    v13[2] = a2;
    v13[3] = a3;
    v13[4] = a4;
    *(_QWORD *)&UserData.Size = 56LL;
    return EtwWriteEx(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
             &KERNEL_MEM_EVENT_MDL_ALLOCATION,
             0LL,
             1u,
             0LL,
             0LL,
             1u,
             &UserData);
  }
  return result;
}
