/*
 * XREFs of ExUnregisterCallback @ 0x1404ECF50
 * Callers:
 *     IopCleanupNotifications @ 0x1404E4DE8 (IopCleanupNotifications.c)
 *     DifExUnregisterCallbackWrapper @ 0x1406550A0 (DifExUnregisterCallbackWrapper.c)
 *     IoRegisterContainerNotification @ 0x140797260 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140797540 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x1407BA2B0 (KeDeregisterProcessorChangeCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BA2D0 (KeRegisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x14080FD70 (SeUnregisterImageVerificationCallback.c)
 *     IoUnregisterBootDriverCallback @ 0x140CC3DA0 (IoUnregisterBootDriverCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CD55F0 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
    KeResetEvent(&word_140EFEF60);
    KeReleaseSpinLock(v1 + 1, v3);
    KeWaitForSingleObject(&word_140EFEF60, Executive, 0, 0, 0LL);
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
