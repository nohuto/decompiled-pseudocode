/*
 * XREFs of ??1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ @ 0x1800172C8
 * Callers:
 *     ??_GAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x180017290 (--_GAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x180025700 (--_GAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::~AssignedAccessConfigStoreV1(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase::`vftable';
}
