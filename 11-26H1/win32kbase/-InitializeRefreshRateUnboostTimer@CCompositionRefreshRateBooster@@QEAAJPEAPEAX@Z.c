/*
 * XREFs of ?InitializeRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAJPEAPEAX@Z @ 0x140182258
 * Callers:
 *     ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1401820FC (-InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CCompositionRefreshRateBooster::InitializeRefreshRateUnboostTimer(
        CCompositionRefreshRateBooster *this,
        void **a2)
{
  struct _OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&v3.Length = 48LL;
  v3.RootDirectory = 0LL;
  v3.ObjectName = 0LL;
  *(_QWORD *)&v3.Attributes = 512LL;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  return ZwCreateTimer(a2, 0x1F0003u, &v3, SynchronizationTimer);
}
