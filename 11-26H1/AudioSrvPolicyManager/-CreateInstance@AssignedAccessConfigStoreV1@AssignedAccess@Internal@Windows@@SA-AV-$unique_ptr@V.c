/*
 * XREFs of ?CreateInstance@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreBase@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x1800222C4
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180021B5C (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180021CE0 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180021E60 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 * Callees:
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x1800221A0 (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@@Z @ 0x18002238C (-reset@-$unique_ptr@VAssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@U-$default_del.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::CreateInstance(__int64 a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx
  unsigned __int8 (*v5)(void); // rax
  void (__fastcall ***v7)(_QWORD, __int64); // [rsp+30h] [rbp+8h] BYREF

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v4 = v3;
  if ( v3 )
  {
    v7 = (void (__fastcall ***)(_QWORD, __int64))v3;
    *v3 = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable';
    v5 = (unsigned __int8 (*)(void))*(&Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::`vftable' + 5);
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    if ( v5() )
      goto LABEL_3;
  }
  else
  {
    v7 = 0LL;
  }
  wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0>>::reset(&v7);
LABEL_3:
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(a1, (__int64 *)&v7);
  if ( v7 )
    (**v7)(v7, 1LL);
  return a1;
}
