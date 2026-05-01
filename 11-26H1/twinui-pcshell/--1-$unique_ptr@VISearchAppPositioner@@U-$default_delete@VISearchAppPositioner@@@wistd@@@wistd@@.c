/*
 * XREFs of ??1?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@wistd@@QEAA@XZ @ 0x1801F7C94
 * Callers:
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800F6D9C (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800F6E6C (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800F7D34 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     _Microsoft::WRL::Details::Make_CImmersiveShellCreationBehavior__::_1_::dtor$4 @ 0x1806DF0AB (_Microsoft--WRL--Details--Make_CImmersiveShellCreationBehavior__--_1_--dtor$4.c)
 *     _CreateSearchAppPositioner_::_1_::dtor$0 @ 0x1806E7F11 (_CreateSearchAppPositioner_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806E83B3 (_UndockedSearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _UndockedSearchAppExperienceManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1806E83C5 (_UndockedSearchAppExperienceManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wistd::unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>::~unique_ptr<ISearchAppPositioner,wistd::default_delete<ISearchAppPositioner>>(
        __int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
