/*
 * XREFs of ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x180088CF8
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180022C80 (CempQueryUnbiasedInterruptTimeMs64.c)
 */

void __fastcall ExecutionModel::ResourceSet::CheckUpdatePendStats(ExecutionModel::ResourceSet *this, int a2)
{
  int v2; // eax

  if ( a2 )
  {
    v2 = *((_DWORD *)this + 333);
    if ( (v2 & 0x10) == 0 )
    {
      *((_DWORD *)this + 333) = v2 | 0x10;
      *((_DWORD *)this + 433) = CempQueryUnbiasedInterruptTimeMs64();
    }
  }
}
