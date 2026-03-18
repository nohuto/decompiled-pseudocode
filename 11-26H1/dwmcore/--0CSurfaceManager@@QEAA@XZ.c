/*
 * XREFs of ??0CSurfaceManager@@QEAA@XZ @ 0x180207DCC
 * Callers:
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x180207D4C (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

CSurfaceManager *__fastcall CSurfaceManager::CSurfaceManager(CSurfaceManager *this)
{
  CSurfaceManager *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 24),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 12) = 0LL;
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 144) = 0;
  return result;
}
