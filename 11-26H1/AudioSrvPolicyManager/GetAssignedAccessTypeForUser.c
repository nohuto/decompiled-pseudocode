/*
 * XREFs of GetAssignedAccessTypeForUser @ 0x18000B648
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000CDE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@SA?AV?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@XZ @ 0x180016344 (-CreateInstance@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@SA-AV-$unique_p.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x180016868 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180017240 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180017320 (--3@YAXPEAX@Z.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180021B5C (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180021CE0 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180021E60 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     ??1?$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004B114 (--1-$com_ptr_t@UIAssignedAccessConfiguration@AssignedAccess@Internal@Windows@@Uerr_returncode_po.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x18004B2B0 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x18004B558 (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser(
        unsigned __int16 *a1,
        __int64 a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  __int64 v5; // rcx
  void *v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int AssignedAccessTypeForUserWithoutGroup; // eax
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 *v13; // [rsp+28h] [rbp-20h]
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v16; // [rsp+68h] [rbp+20h] BYREF

  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::CreateInstance(&v16);
  v6 = v16;
  if ( v16 )
  {
    *(_QWORD *)v12 = v16;
    v13 = a1;
    if ( !(unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
                             v5,
                             v12)
      && !(unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
                             v8,
                             v6)
      && !(unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___(
                             v9,
                             v6) )
    {
      *(_DWORD *)a3 = 0;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v6);
      operator delete(v6);
      return 0LL;
    }
    Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v14);
    AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
                                              (Windows::Internal::AssignedAccess::AAManagerHelper *)v14,
                                              a1,
                                              a3);
    v7 = AssignedAccessTypeForUserWithoutGroup;
    if ( AssignedAccessTypeForUserWithoutGroup >= 0 )
      v7 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
        (const char *)(unsigned int)AssignedAccessTypeForUserWithoutGroup,
        v12[0]);
    wil::com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,wil::err_returncode_policy>(v14);
    wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(&v16);
  }
  else
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (unsigned int)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)0x8000FFFFLL,
      v12[0]);
  }
  return v7;
}
