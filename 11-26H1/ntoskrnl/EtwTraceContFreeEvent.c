/*
 * XREFs of EtwTraceContFreeEvent @ 0x14034741C
 * Callers:
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTraceContFreeEvent(__int64 a1, __int64 a2)
{
  BOOLEAN result; // al
  _QWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-28h] BYREF

  result = EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink, &KERNEL_MEM_EVENT_CONT_FREE);
  if ( result )
  {
    v5[0] = a1;
    UserData.Ptr = (ULONGLONG)v5;
    v5[1] = a2;
    *(_QWORD *)&UserData.Size = 16LL;
    return EtwWriteEx(
             (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[1].Flink,
             &KERNEL_MEM_EVENT_CONT_FREE,
             0LL,
             1u,
             0LL,
             0LL,
             1u,
             &UserData);
  }
  return result;
}
