/*
 * XREFs of ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180036228
 * Callers:
 *     ?HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z @ 0x180049354 (-HampHostIdStoreInvalidateForSession@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_SESSION@@@Z.c)
 *     ?HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z @ 0x18006654C (-HampHostIdStoreInvalidateForPackage@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z @ 0x18007EAE8 (-HampHostIdStoreInvalidateForApplication@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18007F2AC (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x180036BD0 (-HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampHostIdStoreEnumerateMatchingEntries(
        struct _HAM_HOSTID_STORE *a1,
        unsigned int *a2,
        union _RM_SID *a3,
        struct _RM_PSM_KEY *a4,
        unsigned int (*a5)(struct _HAM_HOSTID_ENTRY *, void *),
        void *a6)
{
  struct _HAM_RC_TREE_NODE *v6; // rdi
  struct _HAM_RC_TREE_NODE *v7; // rsi
  struct _HAM_RC_TREE_NODE *v9; // rbp
  struct _HAM_RC_TREE_NODE *v10; // r14
  struct _HAM_RC_TREE_NODE *v11; // rbx
  unsigned int v14; // edx
  struct _HAM_RC_TREE_NODE *Child; // rax
  struct _HAM_RC_TREE_NODE *v16; // rax
  struct _HAM_RC_TREE_NODE *v17; // rax
  struct _HAM_RC_TREE_NODE *i; // rax

  v6 = 0LL;
  v7 = (struct _HAM_HOSTID_STORE *)((char *)a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v14 = 4;
  if ( a2 )
  {
    Child = HamRcNodeFindChild(
              (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
              (void *)*a2,
              (int (*)(void *, void *))HampHostIdStoreCompareSessionByKey);
    v9 = Child;
    if ( !Child )
      return;
    v7 = Child;
    v14 = 3;
  }
  if ( a3 )
  {
    v16 = HamRcNodeFindChild(v9, a3, (int (*)(void *, void *))HampHostIdStoreCompareUserByKey);
    v6 = v16;
    if ( !v16 )
      goto LABEL_15;
    v7 = v16;
    v14 = 2;
  }
  if ( !a4 )
  {
LABEL_10:
    for ( i = HamRcNodeGetFirst(v7, v14); ; i = HamRcNodeGetSuccessor(v7, v11) )
    {
      v11 = i;
      if ( !i || !((unsigned int (__fastcall *)(struct _HAM_RC_TREE_NODE *, void *))a5)(i, a6) )
        break;
    }
    if ( v10 )
      CemRcObjectDereference(v10);
    goto LABEL_15;
  }
  v17 = HamRcNodeFindChild(v6, a4, (int (*)(void *, void *))HampHostIdStoreCompareApplicationByKey);
  v10 = v17;
  if ( v17 )
  {
    v7 = v17;
    v14 = 1;
    goto LABEL_10;
  }
LABEL_15:
  if ( v9 )
    CemRcObjectDereference(v9);
  if ( v6 )
    CemRcObjectDereference(v6);
  if ( v11 )
    CemRcObjectDereference(v11);
}
