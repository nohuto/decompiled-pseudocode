/*
 * XREFs of NvmeControllerStop @ 0x1400FADAC
 * Callers:
 *     NvmeAdapterStop @ 0x1400DEC40 (NvmeAdapterStop.c)
 * Callees:
 *     Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline @ 0x1400B2790 (Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline.c)
 *     NvmeControllerAdminQueuesFreeResources @ 0x1400F03B8 (NvmeControllerAdminQueuesFreeResources.c)
 *     NvmeControllerDeleteAsyncEventContext @ 0x1400F27CC (NvmeControllerDeleteAsyncEventContext.c)
 *     NvmeControllerIoQueuesDeletion @ 0x1400F6E60 (NvmeControllerIoQueuesDeletion.c)
 *     NvmeControllerIoQueuesFreeResources @ 0x1400F6F30 (NvmeControllerIoQueuesFreeResources.c)
 *     NvmeControllerPowerUninitialize @ 0x1400F8984 (NvmeControllerPowerUninitialize.c)
 *     NvmeFreeHostMemoryBuffer @ 0x1400FE828 (NvmeFreeHostMemoryBuffer.c)
 */

__int64 __fastcall NvmeControllerStop(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v5; // rdx
  int v6; // r8d

  v2 = NvmeControllerIoQueuesDeletion(a1);
  if ( !(unsigned int)Feature_FixDeviceStopRestartForAzureStorageRepaveNode__private_IsEnabledDeviceUsageNoInline() )
    NvmeControllerPowerUninitialize(a1);
  if ( *(_QWORD *)(a1 + 1200) )
    NvmeFreeHostMemoryBuffer(a1);
  NvmeControllerIoQueuesFreeResources(a1, v3, v4);
  NvmeControllerAdminQueuesFreeResources(a1, v5, v6);
  NvmeControllerDeleteAsyncEventContext(a1);
  return v2;
}
