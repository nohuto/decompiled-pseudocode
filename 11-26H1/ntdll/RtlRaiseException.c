/*
 * XREFs of RtlRaiseException @ 0x180040C10
 * Callers:
 *     RtlGetActiveActivationContext @ 0x180011D20 (RtlGetActiveActivationContext.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x180012110 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlpReAllocateHeapInternal @ 0x18001AED0 (RtlpReAllocateHeapInternal.c)
 *     LdrpLoadForwardedDll @ 0x18003A500 (LdrpLoadForwardedDll.c)
 *     TppCallbackEpilog @ 0x18003FD40 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180040250 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpTpImpersonate @ 0x1800671C8 (RtlpTpImpersonate.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     RtlReportFatalFailure @ 0x180070DE8 (RtlReportFatalFailure.c)
 *     RtlpPossibleDeadlock @ 0x18007BA50 (RtlpPossibleDeadlock.c)
 *     TpCheckTerminateWorker @ 0x180086AD0 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContext @ 0x180088D10 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180088F70 (RtlpFreeActivationContextStackFrame.c)
 *     PssNtValidateDescriptor @ 0x1800B5C90 (PssNtValidateDescriptor.c)
 *     TppRaiseHandleStatus @ 0x1800C9DE8 (TppRaiseHandleStatus.c)
 *     LdrpAllocateModuleEntry @ 0x1800D1C60 (LdrpAllocateModuleEntry.c)
 *     vDbgPrintExWithPrefixInternalHelper @ 0x1800DE744 (vDbgPrintExWithPrefixInternalHelper.c)
 *     RtlpAllocateHeapRaiseException @ 0x180113150 (RtlpAllocateHeapRaiseException.c)
 *     RaiseException @ 0x180130AC0 (RaiseException.c)
 *     _raise_exc_ex @ 0x180131070 (_raise_exc_ex.c)
 *     KiRaiseUserExceptionDispatcher @ 0x180163030 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x1801635B0 (RtlRaiseExceptionForReturnAddressHijack.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x18004AEA0 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x18004C680 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1800B4070 (RtlVirtualUnwind.c)
 *     RtlGetExtendedContextLength3 @ 0x1800B42A0 (RtlGetExtendedContextLength3.c)
 *     RtlInitializeExtendedContext2 @ 0x1800B4540 (RtlInitializeExtendedContext2.c)
 *     RtlpCaptureContext2 @ 0x180126E00 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x180126F90 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x180127560 (RtlpGuardSynchronizeRestorePc.c)
 *     ZwRaiseException @ 0x180161DD0 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180163610 (_alloca_probe.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  void *v7; // rsp
  unsigned int v8; // ebx
  ULONG64 v9; // r14
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v10; // rax
  __int64 v11; // r8
  PEXCEPTION_RECORD v12; // rcx
  unsigned __int64 v13; // rbx
  ULONG64 v14; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v15; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp+0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+60h] [rbp+20h] BYREF
  ULONG64 v21; // [rsp+138h] [rbp+F8h]

  v17 = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  memset_thunk_772440563353939046(HistoryTable.Entry, 0, 0xC0uLL);
  ExceptionRecord->ExceptionFlags |= 0x80u;
  v2 = 1048587;
  v3 = 0LL;
  if ( !NtCurrentPeb()->BeingDebugged || (((unsigned __int64)qword_1801E3508 >> 60) & 3) == 1 )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v2 = 1048651;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v13 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
        if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800LL) != 0
          && (((unsigned __int64)qword_1801E3508 >> 60) & 3) != 1 )
        {
          v13 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x7FFFFFFFFFFFF7FFLL | 0x8000000000000000uLL;
        }
        v3 = v13 & 0xFFFFFFFFFFF9FFFFuLL;
      }
    }
  }
  RtlGetExtendedContextLength3(v2, &v17, v3, 2147353560LL);
  v4 = v17 + 15LL;
  if ( v4 <= v17 )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = alloca(v5);
  v7 = alloca(v5);
  v8 = RtlInitializeExtendedContext2(&ImageBase, v2, &v17, v3);
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
  v12 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    LOBYTE(v11) = 1;
LABEL_16:
    v8 = ZwRaiseException(v12, &ImageBase, v11);
    goto LABEL_17;
  }
  if ( !(unsigned __int8)RtlDispatchException(ExceptionRecord, &ImageBase) )
  {
    v11 = 0LL;
    v12 = ExceptionRecord;
    goto LABEL_16;
  }
  RtlRestoreContext((PCONTEXT)&ImageBase, ExceptionRecord);
}
