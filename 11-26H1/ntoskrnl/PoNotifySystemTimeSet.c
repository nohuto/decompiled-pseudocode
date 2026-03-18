/*
 * XREFs of PoNotifySystemTimeSet @ 0x14043919C
 * Callers:
 *     ExpRefreshSystemTime @ 0x140836324 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1408366B0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140C09314 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     PpmConvertTime @ 0x1403E63D0 (PpmConvertTime.c)
 *     PopCheckForWork @ 0x1404385D4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 *     ExNotifyWithProcessing @ 0x140439330 (ExNotifyWithProcessing.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceSystemTimeChange @ 0x140C099D4 (EtwTraceSystemTimeChange.c)
 *     PopSstDiagAddResumeTimestampAdjustment @ 0x140C0C520 (PopSstDiagAddResumeTimestampAdjustment.c)
 */

__int64 __fastcall PoNotifySystemTimeSet(void **a1, __int64 *a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  __int64 result; // rax
  int v8; // ebp
  struct _SINGLE_LIST_ENTRY **v11; // r11
  void *v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // bl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v8 = ExpRealTimeIsUniversal;
  v11 = (struct _SINGLE_LIST_ENTRY **)a2;
  if ( a3 == 2 )
  {
    result = *a2;
    v13 = *a1;
    if ( (__int64)v13 > *a2 )
    {
      v14 = PpmConvertTime((unsigned __int64)v13 - result, 0x989680uLL, PopQpcFrequency);
      result = PopSstDiagAddResumeTimestampAdjustment(v14);
    }
  }
  if ( LOBYTE(PsAltSystemCallRegistrationLock.TrapFrame) )
  {
    stru_140F12D20.SchedulerSharedSystemSlot = *a1;
    stru_140F12D20.PropagateBoostsEntry.Next = *v11;
    EtwTraceSystemTimeChange((_DWORD)a1, (_DWORD)v11, a3, a4, a5, v8, a7);
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v15) = 2;
      LOBYTE(v16) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v16, v15);
    }
    ExNotifyWithProcessing(ExCbSetSystemTime, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
