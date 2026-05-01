/*
 * XREFs of ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C
 * Callers:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180036228 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180036658 (-HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PE.c)
 *     ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x180036A4C (-HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180036CE4 (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x18003AE2C (-HampPkgComputeStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003B01C (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x1800434B4 (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 *     ?HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BB90 (-HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BE98 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     CemRcTableGetNext @ 0x18003BDF0 (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18003C4D4 (CemRcTableGetFirst.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetFirst(struct _HAM_RC_TREE_NODE *a1, int a2)
{
  unsigned __int64 v2; // rbx
  char *v4; // rdi
  __int64 v5; // rax
  struct _HAM_RC_TREE_NODE *First; // rbx
  struct _HAM_RC_TREE_NODE **v8; // rcx
  struct _HAM_RC_TREE_NODE *v9; // rax
  struct _HAM_RC_TREE_NODE *i; // rcx
  struct _HAM_RC_TREE_NODE *j; // rax
  struct _HAM_RC_TREE_NODE *v12; // rdi

  v2 = (unsigned __int64)a1 + 40;
  if ( a2 == 1 )
  {
    v4 = (char *)a1 + 56;
    RtlAcquireSRWLockShared((char *)a1 + 56);
    v5 = *(_QWORD *)(v2 + 8);
    if ( (v5 & 1) != 0 )
    {
      if ( v5 == 1 )
        First = 0LL;
      else
        First = (struct _HAM_RC_TREE_NODE *)(v5 ^ (v2 | 1));
    }
    else
    {
      First = *(struct _HAM_RC_TREE_NODE **)(v2 + 8);
    }
    while ( First )
    {
      if ( *((_QWORD *)First + 3) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)First + 3) <= 1 )
          __fastfail(0xEu);
        break;
      }
      v8 = (struct _HAM_RC_TREE_NODE **)*((_QWORD *)First + 1);
      v9 = First;
      if ( v8 )
      {
        First = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)First + 1);
        for ( i = *v8; i; i = *(struct _HAM_RC_TREE_NODE **)i )
          First = i;
      }
      else
      {
        while ( 1 )
        {
          First = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)First + 2) & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !First || *(struct _HAM_RC_TREE_NODE **)First == v9 )
            break;
          v9 = First;
        }
      }
    }
    RtlReleaseSRWLockShared(v4);
  }
  else
  {
    for ( j = (struct _HAM_RC_TREE_NODE *)CemRcTableGetFirst((char *)a1 + 40);
          ;
          j = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(v12) )
    {
      v12 = j;
      if ( !j )
        break;
      First = HamRcNodeGetFirst(j, a2 - 1);
      if ( First )
      {
        CemRcObjectDereference(v12);
        return First;
      }
    }
    return 0LL;
  }
  return First;
}
