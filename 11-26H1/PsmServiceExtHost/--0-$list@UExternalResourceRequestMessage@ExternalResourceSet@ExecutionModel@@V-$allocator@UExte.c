/*
 * XREFs of ??0?$list@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@V?$allocator@UExternalResourceRequestMessage@ExternalResourceSet@ExecutionModel@@@utl@@@utl@@QEAA@XZ @ 0x18002BE20
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18002B6A0 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18002BC08 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ @ 0x18002C54C (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18002E4E8 (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>::list<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage,utl::allocator<ExecutionModel::ExternalResourceSet::ExternalResourceRequestMessage>>(
        _QWORD *a1)
{
  _QWORD *result; // rax

  *a1 = a1;
  result = a1;
  a1[1] = a1;
  a1[2] = 0LL;
  return result;
}
