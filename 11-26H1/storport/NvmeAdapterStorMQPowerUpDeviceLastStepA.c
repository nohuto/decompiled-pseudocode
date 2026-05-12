/*
 * XREFs of NvmeAdapterStorMQPowerUpDeviceLastStepA @ 0x140126DA8
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x140124E40 (NvmeAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     NvmeControllerPowerUp @ 0x1400F8B94 (NvmeControllerPowerUp.c)
 *     NvmeControllerSetStorMQProperty @ 0x1400FAC28 (NvmeControllerSetStorMQProperty.c)
 */

void __fastcall NvmeAdapterStorMQPowerUpDeviceLastStepA(__int64 a1)
{
  struct _ERESOURCE *v2; // rbp
  __int64 *v3; // rdi
  __int64 *i; // rbx

  KeEnterCriticalRegion();
  v2 = (struct _ERESOURCE *)(a1 + 1192);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
  v3 = (__int64 *)(a1 + 1304);
  for ( i = *(__int64 **)(a1 + 1304); i != v3; i = (__int64 *)*i )
  {
    if ( (int)NvmeControllerPowerUp((union _SLIST_HEADER *)i - 7) < 0 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)*((int *)i + 216), 5, 1);
      NvmeControllerSetStorMQProperty((__int64)(i - 14), 0x80000009, 4LL, 1);
      *((_DWORD *)i + 270) = 46;
    }
  }
  ExReleaseResourceLite(v2);
  KeLeaveCriticalRegion();
}
