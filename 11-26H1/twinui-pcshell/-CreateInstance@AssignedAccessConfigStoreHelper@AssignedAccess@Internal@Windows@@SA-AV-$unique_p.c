/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800F6960
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1800F6824 (GetAssignedAccessTypeForUser_0.c)
 * Callees:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x1800F6F98 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x1802144F4 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper **__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::CreateInstance(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper **a1)
{
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *v2; // rax

  v2 = (Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)operator new(0x20uLL);
  *((_QWORD *)v2 + 3) = 0LL;
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *a1 = v2;
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize(v2) )
    wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(a1);
  return a1;
}
