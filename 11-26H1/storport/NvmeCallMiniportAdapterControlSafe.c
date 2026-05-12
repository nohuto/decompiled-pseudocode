/*
 * XREFs of NvmeCallMiniportAdapterControlSafe @ 0x140078794
 * Callers:
 *     NvmeAdapterSendControlAddSubsystemPort @ 0x1400DC8B0 (NvmeAdapterSendControlAddSubsystemPort.c)
 *     NvmeAdapterSendControlRemoveSubsystemPort @ 0x1400DCAB8 (NvmeAdapterSendControlRemoveSubsystemPort.c)
 *     NvmeAdapterStartMiniport @ 0x1400DE784 (NvmeAdapterStartMiniport.c)
 *     NvmeAdapterSendControlRemoveNvmeController @ 0x1400ED1FC (NvmeAdapterSendControlRemoveNvmeController.c)
 *     NvmeAdapterSendControlAddNvmeController @ 0x1401A10DC (NvmeAdapterSendControlAddNvmeController.c)
 *     NvmeAdapterSendControlUpdateNvmeController @ 0x1401A133C (NvmeAdapterSendControlUpdateNvmeController.c)
 * Callees:
 *     NvmeCallMiniportAdapterControl @ 0x140078740 (NvmeCallMiniportAdapterControl.c)
 *     NvmeIsAdapterControlSupported @ 0x1400787E0 (NvmeIsAdapterControlSupported.c)
 */

__int64 __fastcall NvmeCallMiniportAdapterControlSafe(__int64 a1)
{
  if ( (unsigned __int8)NvmeIsAdapterControlSupported() )
    return NvmeCallMiniportAdapterControl(a1);
  else
    return 3221225659LL;
}
