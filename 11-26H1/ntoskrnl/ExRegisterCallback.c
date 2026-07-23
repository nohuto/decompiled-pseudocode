/*
 * XREFs of ExRegisterCallback @ 0x1404E9CF0
 * Callers:
 *     HvlPhase2Initialize @ 0x1405BB378 (HvlPhase2Initialize.c)
 *     DifExRegisterCallbackWrapper @ 0x1406572F0 (DifExRegisterCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x1407883A0 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x140788BE8 (HalpMiscInitializeKsr.c)
 *     IoRegisterContainerNotification @ 0x140799D90 (IoRegisterContainerNotification.c)
 *     IoRegisterBootDriverCallback @ 0x1407A46F0 (IoRegisterBootDriverCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BD330 (KeRegisterProcessorChangeCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x140815770 (SeRegisterImageVerificationCallback.c)
 *     PiCslInitialize @ 0x140CCD6B0 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140CCD930 (PiKsrNotifyInitialize.c)
 *     PopSetupKsrCallbacks @ 0x140CD7A4C (PopSetupKsrCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140CDB714 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CDB990 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140CDDA0C (SshpAlpcInitialize.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 *     EtwpInitializeKsrSupport @ 0x140CE850C (EtwpInitializeKsrSupport.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExRegisterCallback(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  char v9; // si
  KIRQL v10; // dl
  _QWORD *v11; // rax
  _QWORD *v12; // rcx

  ObfReferenceObjectWithTag(CallbackObject, 0x746C6644u);
  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 32) = CallbackContext;
    v9 = 0;
    *(_QWORD *)(Pool2 + 16) = CallbackObject;
    *(_QWORD *)(Pool2 + 24) = CallbackFunction;
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_BYTE *)(Pool2 + 44) = 0;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
    v11 = (_QWORD *)((char *)CallbackObject + 16);
    if ( *((_BYTE *)CallbackObject + 32) || (_QWORD *)*v11 == v11 )
    {
      v12 = (_QWORD *)*((_QWORD *)CallbackObject + 3);
      v9 = 1;
      if ( (_QWORD *)*v12 != v11 )
        __fastfail(3u);
      *v7 = v11;
      v7[1] = v12;
      *v12 = v7;
      *((_QWORD *)CallbackObject + 3) = v7;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)CallbackObject + 1, v10);
    if ( !v9 )
    {
      ExFreePoolWithTag(v7, 0);
      ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
      return 0LL;
    }
    return v7;
  }
  else
  {
    ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
    return 0LL;
  }
}
