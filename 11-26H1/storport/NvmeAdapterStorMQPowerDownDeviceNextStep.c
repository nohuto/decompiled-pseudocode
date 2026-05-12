/*
 * XREFs of NvmeAdapterStorMQPowerDownDeviceNextStep @ 0x140126D00
 * Callers:
 *     NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine @ 0x1401244B0 (NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine.c)
 * Callees:
 *     NvmeControllerPowerDown @ 0x1400F7FE8 (NvmeControllerPowerDown.c)
 */

void __fastcall NvmeAdapterStorMQPowerDownDeviceNextStep(__int64 a1)
{
  struct _ERESOURCE *v2; // rbp
  __int64 *v3; // rsi
  __int64 *i; // rbx

  KeEnterCriticalRegion();
  v2 = (struct _ERESOURCE *)(a1 + 1192);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
  v3 = (__int64 *)(a1 + 1304);
  for ( i = *(__int64 **)(a1 + 1304); i != v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 216) == 2 && (int)NvmeControllerPowerDown((__int64)(i - 14)) < 0 )
      *((_DWORD *)i + 270) = 45;
  }
  ExReleaseResourceLite(v2);
  KeLeaveCriticalRegion();
}
