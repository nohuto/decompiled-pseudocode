/*
 * XREFs of PoNotifySystemTimeSet @ 0x140427DFC
 * Callers:
 *     ExpRefreshSystemTime @ 0x14083C564 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14083C8F0 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140C0F524 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     PpmConvertTime @ 0x1402F32B0 (PpmConvertTime.c)
 *     PopCheckForWork @ 0x1404274F4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 *     ExNotifyWithProcessing @ 0x140427F90 (ExNotifyWithProcessing.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceSystemTimeChange @ 0x140C0FBE4 (EtwTraceSystemTimeChange.c)
 *     PopSstDiagAddResumeTimestampAdjustment @ 0x140C12730 (PopSstDiagAddResumeTimestampAdjustment.c)
 */

__int64 __fastcall PoNotifySystemTimeSet(__int64 *a1, __int64 *a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  __int64 result; // rax
  int v8; // ebp
  __int64 *v11; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 CurrentIrql; // bl
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v8 = ExpRealTimeIsUniversal;
  v11 = a2;
  if ( a3 == 2 )
  {
    result = *a2;
    v13 = *a1;
    if ( v13 > *a2 )
    {
      v14 = PpmConvertTime(v13 - result, 0x989680uLL, PopQpcFrequency);
      result = PopSstDiagAddResumeTimestampAdjustment(v14);
    }
  }
  if ( BYTE1(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) )
  {
    PopTimeChangeInfo = *a1;
    qword_140F13398 = *v11;
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
    ExNotifyWithProcessing(ExpSysDbgLock.Header.WaitListHead.Blink, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
