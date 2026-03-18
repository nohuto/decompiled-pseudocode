/*
 * XREFs of DpiAcpiCallAcpiEventHandler @ 0x14005A5C8
 * Callers:
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x14005A540 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x14005A570 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     DpiTryLidStateRecovery @ 0x1400858F4 (DpiTryLidStateRecovery.c)
 *     DpiAcpiDockEventCallback @ 0x140252C40 (DpiAcpiDockEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiAcpiCallAcpiEventHandler(PVOID Object, int a2, int a3, __int64 a4)
{
  int v7; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v10; // rax

  v7 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 40LL, 1953656900LL);
  if ( Pool2 )
  {
    ObfReferenceObject(Object);
    Pool2[2] = Object;
    *((_DWORD *)Pool2 + 6) = a2;
    *((_DWORD *)Pool2 + 7) = a3;
    Pool2[4] = a4;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_140168F60);
    qword_140168F98 = (__int64)KeGetCurrentThread();
    if ( a2 == 2 && a3 == 4 )
    {
      ++dword_140168FB0;
      KeClearEvent(&Event);
    }
    v10 = (_QWORD *)qword_140168FA8;
    if ( *(__int64 **)qword_140168FA8 != &qword_140168FA0 )
      __fastfail(3u);
    *Pool2 = &qword_140168FA0;
    Pool2[1] = v10;
    *v10 = Pool2;
    qword_140168FA8 = (__int64)Pool2;
    if ( !IoWorkItem )
    {
      IoWorkItem = IoAllocateWorkItem(g_pDriverObject);
      if ( IoWorkItem )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 139;
        IoQueueWorkItemEx(IoWorkItem, DpiAcpiHandleAcpiEventWork, DelayedWorkQueue, 0LL);
      }
      else
      {
        KeSetEvent(&Event, 0, 0);
        v7 = -1073741670;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 133;
      }
    }
    qword_140168F98 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_140168F60);
    if ( v7 < 0 )
      ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    v7 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 94;
  }
  return (unsigned int)v7;
}
