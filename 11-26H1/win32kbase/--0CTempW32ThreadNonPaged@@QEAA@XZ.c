/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8
 * Callers:
 *     rimDeviceResetApc @ 0x1400599D0 (rimDeviceResetApc.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14008FA40 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x14008FAD4 (RIMDeviceNotifyUsingAsyncInputWork.c)
 *     _lambda_f6639040149d830ab05feaa79928b51c_::operator() @ 0x140090498 (_lambda_f6639040149d830ab05feaa79928b51c_--operator().c)
 *     Win32kBaseVideoPortCallout @ 0x1400904D0 (Win32kBaseVideoPortCallout.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x140090DC8 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 *     ProcessFreezeChangeNotify @ 0x14014C310 (ProcessFreezeChangeNotify.c)
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x140178390 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401CEE80 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401CF664 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401CF7AC (-Terminated@Win32JobObject@@YAXK@Z.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401DA6F4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 *     W32pLkmdDataCollectionCallback @ 0x1401ECA50 (W32pLkmdDataCollectionCallback.c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  PVOID **CurrentThreadWin32Thread; // rax
  PVOID **v5; // rsi
  __int64 v6; // rcx
  PVOID *v7; // rbx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  memset(this, 0, 0xF8uLL);
  *((_BYTE *)this + 248) = 0;
  CurrentThreadWin32Thread = (PVOID **)PsGetCurrentThreadWin32Thread(v3, v2);
  v5 = CurrentThreadWin32Thread;
  if ( CurrentThreadWin32Thread )
  {
    if ( *CurrentThreadWin32Thread )
    {
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v6),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        if ( *((_DWORD *)*v5 + 92) )
        {
          *(_QWORD *)this = *v5;
          v7 = *v5;
          ObfReferenceObject(**v5);
          if ( _InterlockedIncrement((volatile signed __int32 *)v7 + 92) <= 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 101LL);
        }
      }
    }
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 32);
    ExInitializeFastOwnerEntry((char *)this + 104);
    ExInitializeFastOwnerEntry((char *)this + 176);
    *((_DWORD *)this + 6) |= 1u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    *((_BYTE *)this + 248) = 1;
  }
  return this;
}
