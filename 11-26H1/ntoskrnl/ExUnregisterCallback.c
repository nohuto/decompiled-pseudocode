/*
 * XREFs of ExUnregisterCallback @ 0x1404E6530
 * Callers:
 *     IopCleanupNotifications @ 0x1404DE388 (IopCleanupNotifications.c)
 *     DifExUnregisterCallbackWrapper @ 0x140658C80 (DifExUnregisterCallbackWrapper.c)
 *     IoRegisterContainerNotification @ 0x140799D90 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x14079A070 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x1407BD310 (KeDeregisterProcessorChangeCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BD330 (KeRegisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x140815800 (SeUnregisterImageVerificationCallback.c)
 *     IoUnregisterBootDriverCallback @ 0x140CC9E80 (IoUnregisterBootDriverCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CDB990 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // rdx
  PVOID *v5; // rax

  v1 = (KSPIN_LOCK *)*((_QWORD *)CallbackRegistration + 2);
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
    if ( !*((_DWORD *)CallbackRegistration + 10) )
      break;
    *((_BYTE *)CallbackRegistration + 44) = 1;
    KeResetEvent(&word_140EFF2A0);
    KeReleaseSpinLock(v1 + 1, v3);
    KeWaitForSingleObject(&word_140EFF2A0, Executive, 0, 0, 0LL);
  }
  v4 = *(_QWORD **)CallbackRegistration;
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration
    || (v5 = (PVOID *)*((_QWORD *)CallbackRegistration + 1), *v5 != CallbackRegistration) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  v4[1] = v5;
  KeReleaseSpinLock(v1 + 1, v3);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
}
