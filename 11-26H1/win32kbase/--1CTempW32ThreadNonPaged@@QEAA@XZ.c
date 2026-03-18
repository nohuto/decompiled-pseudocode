/*
 * XREFs of ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4
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
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x14009124C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     UserDeleteW32Thread @ 0x140091290 (UserDeleteW32Thread.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140091444 (GreIsCurrentProcessSystemCritical.c)
 */

void __fastcall CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  _QWORD *v1; // rdi
  void *v2; // rsi
  void *ThreadWin32Thread; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( *((_BYTE *)this + 248) )
  {
    PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, this);
  }
  else
  {
    v1 = *(_QWORD **)this;
    if ( *(_QWORD *)this )
    {
      v2 = (void *)*v1;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 92, 0xFFFFFFFF) == 1 )
      {
        if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0
          && (unsigned int)GreIsCurrentProcessSystemCritical() )
        {
          ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v2);
          PsSetThreadWin32Thread(*v1, 0LL, ThreadWin32Thread);
          GreDeleteFastMutex((char *)v1, v4, v5, v6);
          ExFreePoolWithTag(ThreadWin32Thread, 0);
        }
        else
        {
          UserDeleteW32Thread(v1);
        }
      }
      ObfDereferenceObject(v2);
    }
  }
}
