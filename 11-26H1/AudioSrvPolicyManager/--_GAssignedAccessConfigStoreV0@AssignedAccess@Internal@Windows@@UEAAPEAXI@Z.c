/*
 * XREFs of ??_GAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x180017290
 * Callers:
 *     <none>
 * Callees:
 *     ??1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ @ 0x1800172C8 (--1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::`scalar deleting destructor'(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *this,
        char a2)
{
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::~AssignedAccessConfigStoreV1(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
