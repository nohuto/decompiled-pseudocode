/*
 * XREFs of NvmeCallMiniportAdapterControl @ 0x140078740
 * Callers:
 *     NvmeCallMiniportAdapterControlSafe @ 0x140078794 (NvmeCallMiniportAdapterControlSafe.c)
 *     NvmeIsAdapterControlSupported @ 0x1400787E0 (NvmeIsAdapterControlSupported.c)
 *     NvmeAdapterStopAdapter @ 0x1400DF15C (NvmeAdapterStopAdapter.c)
 *     NvmeAdapterSendPowerToMiniport @ 0x140126054 (NvmeAdapterSendPowerToMiniport.c)
 *     NvmeAdapterFilterResourceRequirementsIrp @ 0x140199CA8 (NvmeAdapterFilterResourceRequirementsIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeCallMiniportAdapterControl(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(__int64); // rax
  int v4; // eax

  v1 = 0;
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v2 )
    return 3221225659LL;
  v4 = v2(*(_QWORD *)(a1 + 240) + 16LL);
  if ( v4 )
  {
    v1 = -1073741823;
    if ( v4 == 2 )
      return (unsigned int)-2147483631;
  }
  return v1;
}
