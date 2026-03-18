/*
 * XREFs of DpiRequestIoPowerState @ 0x1403BE7FC
 * Callers:
 *     DpiFdoExcludeAdapterAccess @ 0x140241720 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x140242E80 (DpiFdoHandleStopDevice.c)
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 *     DpiFdoResetFdo @ 0x140424504 (DpiFdoResetFdo.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x140053EDC (-DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiRequestIoPowerState(__int64 a1, LONG a2, __int64 a3, int a4, _OWORD *a5)
{
  __int64 v5; // rdi
  unsigned int v8; // ebx
  struct _KEVENT v10[4]; // [rsp+30h] [rbp-41h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  memset(v10, 0, sizeof(v10));
  v10[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0xB74727044LL;
  v10[1].Header.LockNV = a2;
  v10[1].Header.WaitListHead.Flink = 0LL;
  LODWORD(v10[1].Header.WaitListHead.Blink) = a4;
  if ( a5 )
    *(_OWORD *)&v10[3].Header.SignalState = *a5;
  KeInitializeEvent(&v10[2], SynchronizationEvent, 0);
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 4432));
  DpiInsertEntryToPowerActionQueue((KSPIN_LOCK *)v5, (struct _DPI_POWER_ACTION *)v10);
  KeSetEvent((PRKEVENT)(v5 + 4072), 0, 0);
  if ( a2 == 7 )
  {
    v8 = KeWaitForSingleObject(*(PVOID *)(v5 + 4064), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v5 + 4064));
  }
  else
  {
    v8 = KeWaitForSingleObject(&v10[2], Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 4432));
  if ( v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2978;
  }
  else
  {
    return (unsigned int)v10[3].Header.Lock;
  }
  return v8;
}
