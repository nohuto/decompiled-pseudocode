/*
 * XREFs of ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18005D4BC
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall RmpResourceSetIsCommitSaveEligible(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  return ((*((_BYTE *)a1 + 40) & 0x10) != 0 || *(_DWORD *)a1 == 13 || ((*(_DWORD *)a1 - 36) & 0xFFFFFFFB) == 0)
      && (*((_BYTE *)a1 + 42) & 0x40) == 0;
}
