/*
 * XREFs of PspSetCreateProcessNotifyRoutine @ 0x140B2F01C
 * Callers:
 *     PsSetCreateProcessNotifyRoutine @ 0x1408026F0 (PsSetCreateProcessNotifyRoutine.c)
 *     PsSetCreateProcessNotifyRoutineEx @ 0x140802710 (PsSetCreateProcessNotifyRoutineEx.c)
 *     PsSetCreateProcessNotifyRoutineEx2 @ 0x140802730 (PsSetCreateProcessNotifyRoutineEx2.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14029AFF0 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExDereferenceCallBackBlock @ 0x140424890 (ExDereferenceCallBackBlock.c)
 *     ExCompareExchangeCallBack @ 0x14045C5C4 (ExCompareExchangeCallBack.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14050DCC0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     ExAllocateCallBack @ 0x140B32EE4 (ExAllocateCallBack.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspSetCreateProcessNotifyRoutine(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 i; // r15
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rdi
  int v10; // edx
  struct _EX_RUNDOWN_REF *v11; // rdi
  volatile signed __int32 *v12; // rax
  __int64 v13; // rdx
  __int64 j; // rbx

  v2 = (unsigned int)a2;
  v3 = a2 & 2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x40 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2);
        return 3221225594LL;
      }
      v7 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, a2);
      v8 = v7;
      if ( v7 )
      {
        LODWORD(v2) = v2 & 0xFFFFFFFE;
        if ( v7[1].Count == a1
          && LODWORD(v7[2].Count) == (_DWORD)v2
          && ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, 0LL, (__int64)v7) )
        {
          v12 = (volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[48];
          if ( v3 )
            v12 = (volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[44];
          _InterlockedDecrement(v12);
          ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v8);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v13);
          ExWaitForRundownProtectionRelease(v8);
          ExFreePoolWithTag(v8, 0);
          return 0LL;
        }
        ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + i, v8);
      }
    }
  }
  if ( (a2 & 2) != 0 )
    v10 = 32;
  else
    v10 = 0;
  if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(a1, v10) )
    return 3221225506LL;
  v11 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, v2);
  if ( !v11 )
    return 3221225626LL;
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= 0x40 )
    {
      ExFreePoolWithTag(v11, 0);
      return 3221225485LL;
    }
    if ( ExCompareExchangeCallBack((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + j, v11, 0LL) )
      break;
  }
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[44]);
    if ( (PspNotifyEnableMask & 4) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 2u);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)&PspSiloMonitorLock.SchedulerApcFill5[48]);
    if ( (PspNotifyEnableMask & 2) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 1u);
  }
  return 0LL;
}
