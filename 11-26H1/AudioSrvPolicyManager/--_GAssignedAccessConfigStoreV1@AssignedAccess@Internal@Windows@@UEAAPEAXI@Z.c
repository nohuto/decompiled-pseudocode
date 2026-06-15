/*
 * XREFs of ??_GAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x180025700
 * Callers:
 *     <none>
 * Callees:
 *     ??1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ @ 0x1800172C8 (--1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ.c)
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`scalar deleting destructor'(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::~AssignedAccessConfigStoreV1(this);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
