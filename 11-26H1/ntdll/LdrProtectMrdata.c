/*
 * XREFs of LdrProtectMrdata @ 0x180081980
 * Callers:
 *     RtlpCallVectoredHandlers @ 0x18004CF90 (RtlpCallVectoredHandlers.c)
 *     RtlpRemoveVectoredHandler @ 0x18007E530 (RtlpRemoveVectoredHandler.c)
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x180081550 (RtlAddGrowableFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800818F4 (RtlInsertInvertedFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081F4C (LdrEnsureMrdataHeapExists.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180082300 (RtlDeleteGrowableFunctionTable.c)
 *     LdrpLoadWow64 @ 0x180086710 (LdrpLoadWow64.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CCB20 (RtlInstallFunctionTableCallback.c)
 *     LdrpInitializeProcess @ 0x1800CF8B8 (LdrpInitializeProcess.c)
 *     RtlDeleteFunctionTable @ 0x1800DB030 (RtlDeleteFunctionTable.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1800DB700 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlInitializeHistoryTable @ 0x1800E554C (RtlInitializeHistoryTable.c)
 *     RtlAddFunctionTable @ 0x1800E56B0 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F9120 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FF4BC (LdrpInitializeCfgScpHelpers.c)
 *     AVrfInitializeVerifier @ 0x1801163F0 (AVrfInitializeVerifier.c)
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 *     LdrpGetShimEngineInterface @ 0x18011DA94 (LdrpGetShimEngineInterface.c)
 *     RtlInitializeNtUserPfn @ 0x18013A740 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18013A870 (RtlResetNtUserPfn.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18002B280 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x180081A50 (LdrpChangeMrdataProtection.c)
 */

struct _TEB *__fastcall LdrProtectMrdata(int a1)
{
  _QWORD *SchedulerSharedDataSlot; // rdx
  __int64 i; // rax
  int v5; // ebx

  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        SchedulerSharedDataSlot[i] = &LdrpMrdataLock;
        break;
      }
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&LdrpMrdataLock, 0LL) )
    RtlpAcquireSRWLockExclusiveContended(&LdrpMrdataLock, (__int64)SchedulerSharedDataSlot);
  v5 = LdrpMrdataUnprotected;
  if ( !a1 )
  {
    if ( LdrpMrdataUnprotected )
    {
      if ( LdrpMrdataUnprotected == -1 )
      {
LABEL_15:
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
    }
    else
    {
      LdrpChangeMrdataProtection(4LL);
    }
    LdrpMrdataUnprotected = v5 + 1;
    return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( !LdrpMrdataUnprotected )
    goto LABEL_15;
  --LdrpMrdataUnprotected;
  if ( v5 == 1 )
    LdrpChangeMrdataProtection(2LL);
  return RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
