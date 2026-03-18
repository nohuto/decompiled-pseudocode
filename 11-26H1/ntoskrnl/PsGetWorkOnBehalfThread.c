/*
 * XREFs of PsGetWorkOnBehalfThread @ 0x14045F7E0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407C0410 (NtAlpcImpersonateClientContainerOfPort.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140A59C70 (AlpcpCaptureWorkOnBehalfAttribute.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 */

PVOID __fastcall PsGetWorkOnBehalfThread(struct _KTHREAD *a1, _DWORD *a2)
{
  PVOID result; // rax
  KIRQL v5; // al
  PVOID Object; // rbx
  KIRQL v7; // si

  result = a1[1].WaitBlock[1].Object;
  *a2 = 0;
  if ( result && a1 != KeGetCurrentThread() )
  {
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.CurrentRunTime);
    Object = a1[1].WaitBlock[1].Object;
    v7 = v5;
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x746C6644u);
      *a2 = 1;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.CurrentRunTime, v7);
    return Object;
  }
  return result;
}
