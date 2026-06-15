/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180016344
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000B648 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x1800163AC (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x180016868 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 */

Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper **__fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::CreateInstance(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper **a1)
{
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *v2; // rax

  v2 = (Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)operator new(0x20uLL);
  if ( v2 )
  {
    *((_QWORD *)v2 + 3) = 0LL;
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *((_QWORD *)v2 + 2) = 0LL;
    *a1 = v2;
    if ( Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize(v2) )
      return a1;
  }
  else
  {
    *a1 = 0LL;
  }
  wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(a1);
  return a1;
}
