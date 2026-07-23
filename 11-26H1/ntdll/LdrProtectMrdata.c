/*
 * XREFs of LdrProtectMrdata @ 0x180078D20
 * Callers:
 *     RtlpCallVectoredHandlers @ 0x180037510 (RtlpCallVectoredHandlers.c)
 *     RtlpAddVectoredHandler @ 0x180077074 (RtlpAddVectoredHandler.c)
 *     RtlAddGrowableFunctionTable @ 0x1800788F0 (RtlAddGrowableFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x180078C94 (RtlInsertInvertedFunctionTable.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800792EC (LdrEnsureMrdataHeapExists.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800796A0 (RtlDeleteGrowableFunctionTable.c)
 *     LdrpLoadWow64 @ 0x18007DAB0 (LdrpLoadWow64.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CA290 (RtlInstallFunctionTableCallback.c)
 *     LdrpInitializeProcess @ 0x1800CD028 (LdrpInitializeProcess.c)
 *     RtlDeleteFunctionTable @ 0x1800D7FF0 (RtlDeleteFunctionTable.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1800D86C0 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpRemoveVectoredHandler @ 0x1800DFA80 (RtlpRemoveVectoredHandler.c)
 *     RtlInitializeHistoryTable @ 0x1800E33FC (RtlInitializeHistoryTable.c)
 *     RtlAddFunctionTable @ 0x1800E3560 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x1800F8890 (RtlSetProtectedPolicy.c)
 *     LdrpInitializeCfgScpHelpers @ 0x1800FEC0C (LdrpInitializeCfgScpHelpers.c)
 *     AVrfInitializeVerifier @ 0x180115BD0 (AVrfInitializeVerifier.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 *     LdrpGetShimEngineInterface @ 0x18011D844 (LdrpGetShimEngineInterface.c)
 *     RtlInitializeNtUserPfn @ 0x18013A4B0 (RtlInitializeNtUserPfn.c)
 *     RtlResetNtUserPfn @ 0x18013A5E0 (RtlResetNtUserPfn.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180016380 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     LdrpChangeMrdataProtection @ 0x180078DF0 (LdrpChangeMrdataProtection.c)
 */

void __fastcall LdrProtectMrdata(int a1)
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
    RtlpAcquireSRWLockExclusiveContended(
      (volatile signed __int64 *)&LdrpMrdataLock,
      (unsigned __int64)SchedulerSharedDataSlot);
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
    goto LABEL_10;
  }
  if ( !LdrpMrdataUnprotected )
    goto LABEL_15;
  --LdrpMrdataUnprotected;
  if ( v5 == 1 )
    LdrpChangeMrdataProtection(2LL);
LABEL_10:
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
