/*
 * XREFs of CemRcTableFind @ 0x1800150B0
 * Callers:
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180014E84 (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180015080 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180019D3C (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18003EF68 (-HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x180074F20 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CemRcTableFind(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 v6; // rbx
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rax

  RtlAcquireSRWLockShared(a1 + 16);
  v6 = *(_QWORD *)a1;
  v7 = *(_BYTE *)(a1 + 8) & 1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_8;
    v6 ^= a1;
  }
  if ( !v6 )
    goto LABEL_8;
  while ( 1 )
  {
    v8 = a3(a2, v6);
    if ( v8 >= 0 )
      break;
    v9 = *(_QWORD *)v6;
    if ( v7 && v9 )
    {
      v6 ^= v9;
      goto LABEL_7;
    }
LABEL_6:
    v6 = v9;
LABEL_7:
    if ( !v6 )
      goto LABEL_8;
  }
  if ( v8 > 0 )
  {
    v9 = *(_QWORD *)(v6 + 8);
    if ( v7 && v9 )
    {
      v6 ^= v9;
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(v6 + 24) )
  {
LABEL_8:
    v6 = 0LL;
    goto LABEL_9;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_9:
  RtlReleaseSRWLockShared(a1 + 16);
  return v6;
}
