/*
 * XREFs of ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAJPEAPEAUD3D12Resources@CD3DDevice@@@Z @ 0x1801DB624
 * Callers:
 *     ?GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z @ 0x1802185CC (-GetHighPriorityComputeCommandQueueNoRef@CD3DDevice@@QEAAJPEAPEAUID3D12CommandQueue@@@Z.c)
 *     ?ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ @ 0x180295650 (-ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ.c)
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z @ 0x180298078 (-ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z.c)
 *     ?TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ @ 0x1802982AC (-TryGetInkDevice@CD3DDevice@@QEAAPEAUID3D12Device@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncTask<CD3DDevice::D3D12Resources>::WaitForResult(__int64 a1, _QWORD *a2)
{
  WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)a1, 0);
  *a2 = a1 + 72;
  return *(unsigned int *)(a1 + 96);
}
