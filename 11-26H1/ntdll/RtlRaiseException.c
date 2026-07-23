/*
 * XREFs of RtlRaiseException @ 0x18002B180
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180005FB0 (RtlpReAllocateHeapInternal.c)
 *     LdrpLoadForwardedDll @ 0x180024A70 (LdrpLoadForwardedDll.c)
 *     TppCallbackEpilog @ 0x18002A2B0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18002A7C0 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlGetActiveActivationContext @ 0x18005D450 (RtlGetActiveActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18005D840 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlpPossibleDeadlock @ 0x18006A270 (RtlpPossibleDeadlock.c)
 *     TpCheckTerminateWorker @ 0x18007DE70 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x180080110 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180080370 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpTpImpersonate @ 0x180087618 (RtlpTpImpersonate.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     RtlReportFatalFailure @ 0x180091238 (RtlReportFatalFailure.c)
 *     PssNtValidateDescriptor @ 0x1800B31B0 (PssNtValidateDescriptor.c)
 *     TppRaiseHandleStatus @ 0x1800C7568 (TppRaiseHandleStatus.c)
 *     LdrpAllocateModuleEntry @ 0x1800CF3D0 (LdrpAllocateModuleEntry.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DB6B4 (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlpAllocateHeapRaiseException @ 0x180112C00 (RtlpAllocateHeapRaiseException.c)
 *     RaiseException @ 0x180130830 (RaiseException.c)
 *     _raise_exc_ex @ 0x180130DE0 (_raise_exc_ex.c)
 *     KiRaiseUserExceptionDispatcher @ 0x180162F30 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x1801634B0 (RtlRaiseExceptionForReturnAddressHijack.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x180035420 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1800B1590 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength3 @ 0x1800B17C0 (RtlGetExtendedContextLength3.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B1A60 (RtlInitializeExtendedContext2.c)
 *     RtlpCaptureContext2 @ 0x180126B70 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x180126D00 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1801272D0 (RtlpGuardSynchronizeRestorePc.c)
 *     ZwRaiseException @ 0x180161CD0 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163510 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  ULONG v2; // r14d
  ULONG64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  void *v7; // rsp
  NTSTATUS v8; // ebx
  ULONG64 v9; // r14
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v10; // rax
  EXCEPTION_RECORD *v11; // rcx
  unsigned __int64 v12; // rbx
  BOOLEAN v13; // r8
  ULONG64 v14; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v15; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+0h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+60h] [rbp+20h] BYREF
  ULONG64 v21; // [rsp+138h] [rbp+F8h]

  LODWORD(ContextEx) = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  memset_thunk_772440563353939046(HistoryTable.Entry, 0, 0xC0uLL);
  ExceptionRecord->ExceptionFlags |= 0x80u;
  v2 = 1048587;
  v3 = 0LL;
  if ( !NtCurrentPeb()->BeingDebugged || ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1 )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v2 = 1048651;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v12 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
        if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL) != 0
          && ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) != 1 )
        {
          v12 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x7FFFFFFFFFFFF7FFLL | 0x8000000000000000uLL;
        }
        v3 = v12 & 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  RtlGetExtendedContextLength3(v2, &ContextEx, v3, 2147353560LL);
  v4 = (unsigned int)ContextEx + 15LL;
  if ( v4 <= (unsigned int)ContextEx )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = alloca(v5);
  v7 = alloca(v5);
  v8 = RtlInitializeExtendedContext2((PCONTEXT)&ImageBase, v2, &ContextEx, v3);
  RtlpCaptureContext2(&ImageBase);
  v9 = v21;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  v10 = RtlLookupFunctionEntry(v21, &ImageBase, &HistoryTable);
  if ( !v10 )
LABEL_17:
    RtlRaiseStatus(v8);
  RtlVirtualUnwind(0, ImageBase, v9, v10, (PCONTEXT)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  if ( ExceptionRecord->ExceptionCode == -2147483597 )
  {
    v14 = v21;
    v15 = RtlLookupFunctionEntry(v21, &ImageBase, &HistoryTable);
    if ( v15 )
      RtlVirtualUnwind(0, ImageBase, v14, v15, (PCONTEXT)&ImageBase, &HandlerData, &EstablisherFrame, 0LL);
  }
  ExceptionRecord->ExceptionAddress = (void *)v21;
  RtlpGuardSynchronizeRestorePc(v21);
  v11 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v13 = 1;
LABEL_16:
    v8 = ZwRaiseException(v11, (PCONTEXT)&ImageBase, v13);
    goto LABEL_17;
  }
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ImageBase) )
  {
    v13 = 0;
    v11 = ExceptionRecord;
    goto LABEL_16;
  }
  RtlRestoreContext((PCONTEXT)&ImageBase, ExceptionRecord);
}
