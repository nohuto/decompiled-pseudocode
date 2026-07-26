/*
 * XREFs of NdisCmAddPartyComplete @ 0x1400D47C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D58B0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __stdcall NdisCmAddPartyComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisPartyHandle,
        NDIS_HANDLE CallMgrPartyContext,
        PCO_CALL_PARAMETERS CallParameters)
{
  struct _NDIS_CO_VC_PTR_BLOCK *v6; // rax
  void *v8; // rdx
  _NDIS_CO_AF_BLOCK *AfBlock; // rax

  if ( !Status )
    *((_QWORD *)NdisPartyHandle + 1) = CallMgrPartyContext;
  v6 = *(struct _NDIS_CO_VC_PTR_BLOCK **)NdisPartyHandle;
  v8 = (void *)*((_QWORD *)NdisPartyHandle + 2);
  AfBlock = v6->AfBlock;
  if ( AfBlock->ClMajorNdisVersion >= 6 )
    AfBlock->ClientChars.ClAddPartyCompleteHandler(Status, v8, NdisPartyHandle, CallParameters);
  else
    AfBlock->ClientEntries.ClAddPartyCompleteHandler(Status, v8, NdisPartyHandle, CallParameters);
  if ( Status )
  {
    ndisDereferenceVcPtr(*(struct _NDIS_CO_VC_PTR_BLOCK **)NdisPartyHandle);
    ExFreePoolWithTag(NdisPartyHandle, 0);
  }
}
