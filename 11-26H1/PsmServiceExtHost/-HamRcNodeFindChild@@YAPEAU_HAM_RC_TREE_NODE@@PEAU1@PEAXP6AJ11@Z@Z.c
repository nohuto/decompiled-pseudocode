/*
 * XREFs of ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x180036BD0
 * Callers:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180036228 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180036658 (-HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PE.c)
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180036CE4 (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x1800434B4 (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180059FDC (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeFindChild(
        struct _HAM_RC_TREE_NODE *a1,
        void *a2,
        __int64 (__fastcall *a3)(void *, __int64))
{
  unsigned __int64 v3; // r15
  __int64 v6; // rbx
  int v7; // r14d
  int v8; // eax
  __int64 v9; // rax

  v3 = (unsigned __int64)a1 + 40;
  RtlAcquireSRWLockShared((char *)a1 + 56);
  v6 = *(_QWORD *)v3;
  v7 = *(_BYTE *)(v3 + 8) & 1;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_8;
    v6 ^= v3;
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
    RtlReleaseSRWLockShared(v3 + 16);
    return 0LL;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared(v3 + 16);
  return (struct _HAM_RC_TREE_NODE *)v6;
}
