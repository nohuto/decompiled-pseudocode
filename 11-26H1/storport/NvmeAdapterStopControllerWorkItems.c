/*
 * XREFs of NvmeAdapterStopControllerWorkItems @ 0x1400EE650
 * Callers:
 *     NvmeAdapterNvmeControllerRebuildAssociationWork @ 0x1400EADE0 (NvmeAdapterNvmeControllerRebuildAssociationWork.c)
 *     NvmeAdapterStopFabricNvmeControllerOperations @ 0x1400EE7B4 (NvmeAdapterStopFabricNvmeControllerOperations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeAdapterStopControllerWorkItems(__int64 a1, char a2)
{
  __int64 v3; // rax
  struct _KTIMER *v5; // rdi
  struct _KEVENT *v6; // rsi
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 136) | 0x400LL;
  *(_QWORD *)(a1 + 136) = v3;
  if ( a2 )
    *(_QWORD *)(a1 + 136) = v3 | 0x800;
  v5 = (struct _KTIMER *)(a1 + 280);
  v6 = (struct _KEVENT *)(a1 + 184);
  if ( !KeCancelTimer((PKTIMER)(a1 + 280)) )
  {
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    KeCancelTimer(v5);
  }
  KeSetEvent(v6, 0, 0);
  if ( !KeCancelTimer((PKTIMER)(a1 + 408)) )
  {
    KeWaitForSingleObject((PVOID)(a1 + 208), Executive, 0, 0, 0LL);
    KeCancelTimer((PKTIMER)(a1 + 408));
  }
  KeSetEvent((PRKEVENT)(a1 + 208), 0, 0);
  if ( a2 )
    KeWaitForSingleObject((PVOID)(a1 + 232), Executive, 0, 0, 0LL);
  result = *(_QWORD *)(a1 + 136);
  if ( (result & 0x800) == 0 )
  {
    result &= ~0x400uLL;
    *(_QWORD *)(a1 + 136) = result;
  }
  return result;
}
