/*
 * XREFs of ?HampHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEAU_RM_PSM_KEY@@PEAT_RM_SID@@K_K@Z @ 0x180036658
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800611CC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800353F4 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800367A0 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z @ 0x180036B90 (-HampHostIdStoreReferenceHostIdCallback@@YAKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z.c)
 *     ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x180036BD0 (-HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 */

struct _HAM_HOSTID_ENTRY *__fastcall HampHostIdStoreReferenceId(
        struct _HAM_HOSTID_STORE *a1,
        struct _RM_PSM_KEY *a2,
        union _RM_SID *a3,
        void *a4,
        unsigned __int64 a5)
{
  unsigned int v7; // ebx
  struct _HAM_RC_TREE_NODE *v9; // rsi
  struct _HAM_RC_TREE_NODE *v10; // rbp
  struct _HAM_RC_TREE_NODE *v11; // rdi
  struct _HAM_RC_TREE_NODE *Child; // rax
  struct _HAM_RC_TREE_NODE *v13; // r14
  unsigned int v14; // edx
  struct _HAM_RC_TREE_NODE *v15; // rbx
  struct _HAM_RC_TREE_NODE *v16; // rax
  struct _HAM_RC_TREE_NODE *v17; // rax
  struct _HAM_HOSTID_ENTRY *i; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]

  v20 = a5;
  v7 = (unsigned int)a4;
  v21 = 0LL;
  HampHostIdStoreAcquireLockShared(a1);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Child = HamRcNodeFindChild(
            (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
            (void *)v7,
            (int (*)(void *, void *))HampHostIdStoreCompareSessionByKey);
  v13 = Child;
  if ( !Child )
    goto LABEL_17;
  v14 = 3;
  v15 = Child;
  if ( a3 )
  {
    v16 = HamRcNodeFindChild(Child, a3, (int (*)(void *, void *))HampHostIdStoreCompareUserByKey);
    v9 = v16;
    if ( !v16 )
      goto LABEL_13;
    v15 = v16;
    v14 = 2;
  }
  if ( !a2 )
  {
LABEL_8:
    for ( i = HamRcNodeGetFirst(v15, v14); ; i = HamRcNodeGetSuccessor(v15, v11) )
    {
      v11 = i;
      if ( !i || !HampHostIdStoreReferenceHostIdCallback(i, &v20) )
        break;
    }
    if ( v10 )
      CemRcObjectDereference(v10);
    goto LABEL_13;
  }
  v17 = HamRcNodeFindChild(v9, a2, (int (*)(void *, void *))HampHostIdStoreCompareApplicationByKey);
  v10 = v17;
  if ( v17 )
  {
    v15 = v17;
    v14 = 1;
    goto LABEL_8;
  }
LABEL_13:
  CemRcObjectDereference(v13);
  if ( v9 )
    CemRcObjectDereference(v9);
  if ( v11 )
    CemRcObjectDereference(v11);
LABEL_17:
  HampHostIdStoreReleaseLockShared(a1);
  return (struct _HAM_HOSTID_ENTRY *)v21;
}
