/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180021CE0
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18000B648 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x18002201C (-CreateInstance@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800220D0 (-CreateInstance@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800222C4 (-CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA-AV-$unique_ptr@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
        void (__fastcall ***a1)(_QWORD, __int64),
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, __int64); // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rbx
  void (__fastcall ***v5)(_QWORD, __int64); // rdi
  char *v7; // r15
  __int64 v8; // r12
  unsigned int v9; // r14d
  _QWORD v10[3]; // [rsp+20h] [rbp-58h] BYREF
  char v11; // [rsp+38h] [rbp-40h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64); // [rsp+80h] [rbp+8h] BYREF
  void (__fastcall ***v13)(_QWORD, __int64); // [rsp+90h] [rbp+18h] BYREF
  void (__fastcall ***v14)(_QWORD, __int64); // [rsp+98h] [rbp+20h] BYREF

  v12 = a1;
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::CreateInstance(&v14);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(&v12);
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV2::CreateInstance(&v13);
  v3 = v14;
  v4 = v12;
  v5 = v13;
  if ( v14 && v12 && v13 )
  {
    v10[0] = v14;
    v7 = (char *)v10;
    v10[1] = v12;
    v10[2] = v13;
    while ( 1 )
    {
      if ( v7 == &v11 )
      {
        (**v5)(v5, 1LL);
        (**v4)(v4, 1LL);
        goto LABEL_7;
      }
      v8 = *(_QWORD *)v7;
      v9 = *(_DWORD *)(a2 + 24);
      if ( v9 <= (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 32LL))(*(_QWORD *)v7) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8) )
          break;
      }
      v7 += 8;
    }
    (**v5)(v5, 1LL);
    (**v4)(v4, 1LL);
    (**v3)(v3, 1LL);
    return 1;
  }
  else
  {
    if ( v13 )
      (**v13)(v13, 1LL);
    if ( v4 )
      (**v4)(v4, 1LL);
    if ( v3 )
LABEL_7:
      (**v3)(v3, 1LL);
    return 0;
  }
}
