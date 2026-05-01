/*
 * XREFs of ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30
 * Callers:
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180036228 (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180036658 (-HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PE.c)
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x180036CE4 (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 *     ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x18003AE2C (-HampPkgComputeStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003B01C (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     ?HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z @ 0x18003C024 (-HampPkgGetNextApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU1@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003CB1C (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003CBCC (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampPkgGetStateSnapshot@@YA?AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z @ 0x18003D130 (-HampPkgGetStateSnapshot@@YA-AT_HAM_STATE_SNAPSHOT@@PEAU_HAM_PACKAGE@@PEBG@Z.c)
 *     ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x1800434B4 (-HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z.c)
 *     ?HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BB90 (-HampManagerCleanup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BE98 (-HampManagerLogCaptureState@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableGetNext @ 0x18003BDF0 (CemRcTableGetNext.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _HAM_RC_TREE_NODE *__fastcall HamRcNodeGetSuccessor(struct _HAM_RC_TREE_NODE *a1, struct _HAM_RC_TREE_NODE *a2)
{
  struct _HAM_RC_TREE_NODE *v2; // rbx
  struct _HAM_RC_TREE_NODE *result; // rax
  struct _HAM_RC_TREE_NODE *v5; // rbx
  struct _HAM_RC_TREE_NODE *First; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  unsigned __int64 v9; // rsi
  signed __int64 v10; // rax
  bool v11; // cc
  signed __int64 v12; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rax

  v2 = (struct _HAM_RC_TREE_NODE *)(*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v2 == (struct _HAM_RC_TREE_NODE *)((char *)a1 + 40) )
  {
    result = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(a2);
    if ( !result )
      return 0LL;
  }
  else
  {
    v5 = (struct _HAM_RC_TREE_NODE *)((char *)v2 - 40);
    if ( _InterlockedIncrement64((volatile signed __int64 *)v5 + 3) <= 1 )
      __fastfail(0xEu);
    result = (struct _HAM_RC_TREE_NODE *)CemRcTableGetNext(a2);
    First = result;
    if ( result )
    {
      if ( v5 )
      {
LABEL_8:
        _m_prefetchw((char *)v5 + 24);
        v7 = *((_QWORD *)v5 + 3);
        while ( v7 - 1 > 0 )
        {
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 3, v7 - 1, v7);
          if ( v8 == v7 )
            return First;
        }
        if ( v7 != 1 )
          __fastfail(0xEu);
        v9 = *((_QWORD *)v5 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( *((_QWORD *)v5 + 2) == -1LL )
        {
          if ( _InterlockedDecrement64((volatile signed __int64 *)v5 + 3) <= -1 )
            __fastfail(0xEu);
          (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v9 + 24))(v5);
          return First;
        }
        else
        {
          RtlAcquireSRWLockExclusive(v9 + 16);
          v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v11 = v10 <= 1;
          v12 = v10 - 1;
          if ( v11 )
          {
            if ( v12 )
              __fastfail(0xEu);
            RtlReleaseSRWLockExclusive(v9 + 16);
            (*(void (__fastcall **)(struct _HAM_RC_TREE_NODE *))(v9 + 24))(v5);
            return First;
          }
          else
          {
            RtlReleaseSRWLockExclusive(v9 + 16);
            return First;
          }
        }
      }
    }
    else
    {
      while ( 1 )
      {
        Successor = HamRcNodeGetSuccessor(a1, v5);
        v5 = Successor;
        if ( !Successor )
          return 0LL;
        First = HamRcNodeGetFirst(Successor, 1);
        if ( First )
          goto LABEL_8;
      }
    }
  }
  return result;
}
