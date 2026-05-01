/*
 * XREFs of ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180059FDC
 * Callers:
 *     ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180059D8C (-HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800353F4 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800367A0 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z @ 0x180036BD0 (-HamRcNodeFindChild@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@PEAXP6AJ11@Z@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 */

__int64 __fastcall HampHostIdStoreFindIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  struct _HAM_RC_TREE_NODE *v6; // rdi
  struct _HAM_RC_TREE_NODE *v7; // rbp
  struct _HAM_RC_TREE_NODE *v8; // r14
  struct _HAM_RC_TREE_NODE *v9; // rsi
  struct _HAM_RC_TREE_NODE *Child; // rax
  struct _HAM_RC_TREE_NODE *v11; // rax
  struct _HAM_RC_TREE_NODE *v12; // rax
  struct _HAM_RC_TREE_NODE *v13; // rax
  unsigned int v14; // ebx

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  HampHostIdStoreAcquireLockShared(a1);
  Child = HamRcNodeFindChild(
            (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
            (void *)*((unsigned int *)a2 + 133),
            (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareSessionByKey);
  if ( Child
    && (v6 = Child,
        (v11 = HamRcNodeFindChild(
                 Child,
                 (char *)a2 + 464,
                 (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareUserByKey)) != 0LL)
    && (v7 = v11,
        (v12 = HamRcNodeFindChild(
                 v11,
                 a2,
                 (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareApplicationByKey)) != 0LL)
    && (v8 = v12,
        (v13 = HamRcNodeFindChild(v12, a2, (__int64 (__fastcall *)(void *, __int64))HampHostIdStoreCompareLeafByKey)) != 0LL) )
  {
    v9 = v13;
    v14 = 0;
    *a3 = *((_QWORD *)v13 + 11);
  }
  else
  {
    v14 = -1073741275;
  }
  HampHostIdStoreReleaseLockShared(a1);
  if ( v9 )
    CemRcObjectDereference(v9);
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v7 )
    CemRcObjectDereference(v7);
  if ( v6 )
    CemRcObjectDereference(v6);
  return v14;
}
