/*
 * XREFs of NvmeNamespaceDirectedPowerUpCompletion @ 0x140127C60
 * Callers:
 *     <none>
 * Callees:
 *     RaFlushDFxQueue @ 0x1400731D4 (RaFlushDFxQueue.c)
 */

void __fastcall NvmeNamespaceDirectedPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context)
{
  *(_DWORD *)(*((_QWORD *)Context + 16) + 80LL) &= ~2u;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)Context + 16) + 8LL) + 41LL) = 0;
  if ( *(_QWORD *)(*((_QWORD *)Context + 16) + 104LL) != *((_QWORD *)Context + 16) + 104LL )
    RaFlushDFxQueue(*((struct _DEVICE_OBJECT **)Context + 1));
}
