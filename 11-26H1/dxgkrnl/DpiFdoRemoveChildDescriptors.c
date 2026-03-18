/*
 * XREFs of DpiFdoRemoveChildDescriptors @ 0x140245DB0
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 *     DpiFdoHandleRemoveDevice @ 0x14041A370 (DpiFdoHandleRemoveDevice.c)
 *     DpiFdoEnumChildDevices @ 0x1404290E4 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     DpiFdoRemoveChildDescriptor @ 0x140245D68 (DpiFdoRemoveChildDescriptor.c)
 */

void __fastcall DpiFdoRemoveChildDescriptors(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *i; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3440), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3544), Executive, 0, 0, 0LL);
  for ( i = (_QWORD *)(v1 + 3600); (_QWORD *)*i != i; DpiFdoRemoveChildDescriptor(v1, (_QWORD *)(*i - 32LL)) )
    ;
  KeReleaseMutex((PRKMUTEX)(v1 + 3544), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3440));
  KeLeaveCriticalRegion();
}
