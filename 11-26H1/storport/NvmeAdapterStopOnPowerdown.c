/*
 * XREFs of NvmeAdapterStopOnPowerdown @ 0x140126C80
 * Callers:
 *     NvmeAdapterPowerDownDevice @ 0x140124260 (NvmeAdapterPowerDownDevice.c)
 * Callees:
 *     GetNvmeAdapter @ 0x140072360 (GetNvmeAdapter.c)
 *     NvmeControllerPowerDown @ 0x1400F7FE8 (NvmeControllerPowerDown.c)
 *     NvmeAdapterDevicePowerStopAdapter @ 0x140123208 (NvmeAdapterDevicePowerStopAdapter.c)
 */

void __fastcall NvmeAdapterStopOnPowerdown(__int64 a1, IRP *a2)
{
  _DWORD *NvmeAdapter; // rax
  IRP *v4; // rdx
  __int64 v5; // rbx

  NvmeAdapter = GetNvmeAdapter(a1);
  v5 = (__int64)NvmeAdapter;
  if ( (*(_DWORD *)(*((_QWORD *)NvmeAdapter + 50) + 184LL) & 0x40000000) != 0 )
  {
    NvmeControllerPowerDown(*((_QWORD *)NvmeAdapter + 144));
    v4 = a2;
LABEL_3:
    NvmeAdapterDevicePowerStopAdapter(v5, v4);
    return;
  }
  if ( (NvmeAdapter[104] & 0x40) == 0 )
    goto LABEL_3;
  IoQueueWorkItem(
    *((PIO_WORKITEM *)NvmeAdapter + 166),
    (PIO_WORKITEM_ROUTINE)NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine,
    NormalWorkQueue,
    a2);
}
