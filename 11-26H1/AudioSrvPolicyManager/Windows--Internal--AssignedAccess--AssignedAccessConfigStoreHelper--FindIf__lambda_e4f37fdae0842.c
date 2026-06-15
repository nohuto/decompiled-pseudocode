/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180021B5C
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000B648 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18002201C (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800220D0 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800222C4 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
        __int64 a1,
        _QWORD *a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rdi
  char *v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebp
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall ***v11)(_QWORD, __int64); // [rsp+28h] [rbp-50h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+30h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  char v14; // [rsp+50h] [rbp-28h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v10);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v11);
  v3 = v12;
  v4 = v10;
  v5 = v11;
  if ( v12 && v10 && v11 )
  {
    v13[0] = v12;
    v6 = (char *)v13;
    v13[1] = v10;
    v13[2] = v11;
    while ( v6 != &v14 )
    {
      v7 = *(_QWORD *)v6;
      v8 = *(_DWORD *)(*a2 + 24LL);
      if ( v8 <= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 32LL))(*(_QWORD *)v6)
        && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 8LL))(v7, a2[1]) )
      {
        (**v5)(v5, 1LL);
        (**v4)(v4, 1LL);
        (**v3)(v3, 1LL);
        return 1;
      }
      v6 += 8;
    }
    (**v5)(v5, 1LL);
    (**v4)(v4, 1LL);
  }
  else
  {
    if ( v11 )
      (**v11)(v11, 1LL);
    if ( v4 )
      (**v4)(v4, 1LL);
    if ( !v3 )
      return 0;
  }
  (**v3)(v3, 1LL);
  return 0;
}
