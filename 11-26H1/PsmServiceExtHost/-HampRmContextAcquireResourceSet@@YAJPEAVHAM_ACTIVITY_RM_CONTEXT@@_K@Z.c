/*
 * XREFs of ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18002BE64
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180012138 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180028550 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800285D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800299BC (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18002B3F0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x18002C000 (-RmpActivityPropertiesToResourceSetInfo@ExecutionModel@@YAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_Re.c)
 *     ?RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18002C22C (-RmpResourceSetInfoIsValid@@YAKPEBU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x180080FF0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampRmContextAcquireResourceSet(struct HAM_ACTIVITY_RM_CONTEXT *a1, __int64 a2)
{
  __int64 v4; // rbx
  struct ExecutionModel::_ResourceSetInfo *v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  struct _RM_SERVICE_GLOBALS *v9; // rbx
  struct _RM_ACTIVITY_HOST *v10; // r14
  int v11; // ebx
  unsigned int v12; // ebx
  struct ExecutionModel::ResourceSet *v14; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v15[16]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v16; // [rsp+58h] [rbp-B0h]
  int v17; // [rsp+B0h] [rbp-58h]
  __int64 v18; // [rsp+B8h] [rbp-50h]
  int v19; // [rsp+1BCh] [rbp+B4h]

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v15);
  v4 = *((_QWORD *)a1 + 1);
  ExecutionModel::RmpActivityPropertiesToResourceSetInfo(
    (ExecutionModel *)(v4 + 112),
    (struct _HAM_ACTIVITY_PROPERTIES *)v15,
    v5);
  v19 &= ~0x40000u;
  v17 = 1;
  v18 = a2;
  v6 = HamObjectIdGenerate(1);
  *((_QWORD *)a1 + 2) = v6;
  v7 = v6;
  v8 = *(_QWORD *)(v4 + 80);
  v9 = RmSvcGlobals;
  v14 = 0LL;
  v10 = (struct _RM_ACTIVITY_HOST *)((v8 - 56) & -(__int64)(v8 != 0));
  if ( RmpResourceSetInfoIsValid((const struct ExecutionModel::_ResourceSetInfo *)v15) )
  {
    if ( (v16 & 0x200) != 0 && (*((_BYTE *)v9 + 620) & 8) == 0 || (v16 & 0x500) == 0x400 )
    {
      v11 = -805306129;
    }
    else if ( v7 == -1LL )
    {
      v11 = -805306118;
    }
    else
    {
      RmpAcquireGlobalLock();
      v11 = ExecutionModel::ResourceManager::AcquireResourceSet(
              *((ExecutionModel::ResourceManager **)v9 + 443),
              (const struct ExecutionModel::_ResourceSetInfo *)v15,
              v10,
              a1,
              v7,
              &v14);
      if ( v11 >= 0 )
        v11 = 0;
      RmpReleaseGlobalLock();
      if ( v14 )
        (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    v11 = -805306128;
  }
  if ( v11 < 0 )
  {
    v12 = v11 | 0xC0000000;
    *((_QWORD *)a1 + 2) = -1LL;
  }
  else
  {
    return 0;
  }
  return v12;
}
