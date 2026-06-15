/*
 * XREFs of ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180017240
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000B648 (GetAssignedAccessTypeForUser.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x180016868 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 *     _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x180016C00 (_lambda_715f26a8cf03ec1bdf3d6747fabae5e9_--operator().c)
 *     _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x180016E10 (_lambda_7a32b90734f372e87ecd5e5e89c702f7_--operator().c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001700C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
