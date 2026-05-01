/*
 * XREFs of ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x1802144F4
 * Callers:
 *     GetAssignedAccessTypeForUser_0 @ 0x1800F6824 (GetAssignedAccessTypeForUser_0.c)
 *     ?CreateInstance@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800F6960 (-CreateInstance@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@SA-AV-$unique_p.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(
        void **a1)
{
  void *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v1);
    operator delete(v1);
  }
}
