/*
 * XREFs of NvmeAdapterFirmwareUpdateIdentifyWorker @ 0x1400D8BF0
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerGetCommandEffectsLog @ 0x1400CDF84 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400CE1CC (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400CE71C (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400F3F00 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerIdentify @ 0x1400F5094 (NvmeControllerIdentify.c)
 */

void __fastcall NvmeAdapterFirmwareUpdateIdentifyWorker(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v4; // rax

  NvmeControllerIdentify(Context, Context, IoWorkItem);
  NvmeControllerGetIoCommandSetIdentify(Context);
  NvmeControllerGetCommandEffectsLog((union _SLIST_HEADER *)Context, 1);
  NvmeControllerGetSupportedLogPagesLog((union _SLIST_HEADER *)Context, 1);
  NvmeControllerGetFeatureIdentifiersSupportedLog((union _SLIST_HEADER *)Context, 1);
  v4 = *((_QWORD *)Context + 74);
  if ( v4 )
    *(_QWORD *)(Context + 841) = *(_QWORD *)(v4 + 64);
}
