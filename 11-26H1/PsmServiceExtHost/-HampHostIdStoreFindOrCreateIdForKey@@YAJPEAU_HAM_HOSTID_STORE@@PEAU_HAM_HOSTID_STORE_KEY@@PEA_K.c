/*
 * XREFs of ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180035880
 * Callers:
 *     ?HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18003546C (-HamSrvFindOrCreateHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D2C (-HampHostIdStoreAcquireLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180033D9C (-HampHostIdStoreReleaseLockExclusive@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800353F4 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z @ 0x180035F40 (-HampHostIdStoreCompareSessionByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z @ 0x180035F60 (-HampHostIdStoreCompareUserByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z @ 0x180035FD0 (-HampHostIdStoreCompareLeafByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z @ 0x180035FF0 (-HampHostIdStoreCompareApplicationByKey@@YAJPEAX0@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800367A0 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180036818 (-HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampHostIdStoreSessionInitialize@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@@Z @ 0x1800493A8 (-HampHostIdStoreSessionInitialize@@YAXPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM.c)
 *     ?HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_ENTRY@@@Z @ 0x18005F348 (-HampHostIdStoreLeafInitialize@@YAXPEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 *     ?HampHostIdStoreUserInitialize@@YAXPEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_USER_ENTRY@@@Z @ 0x18005F7C8 (-HampHostIdStoreUserInitialize@@YAXPEAU_HAM_HOSTID_STORE_SESSION_ENTRY@@PEAU_HAM_HOSTID_STORE_KE.c)
 *     ?HampHostIdStoreApplicationInitialize@@YAXPEAU_HAM_HOSTID_STORE_USER_ENTRY@@PEAU_HAM_HOSTID_STORE_KEY@@PEAU_HAM_HOSTID_STORE_APPLICATION_ENTRY@@@Z @ 0x18005F854 (-HampHostIdStoreApplicationInitialize@@YAXPEAU_HAM_HOSTID_STORE_USER_ENTRY@@PEAU_HAM_HOSTID_STOR.c)
 */

__int64 __fastcall HampHostIdStoreFindOrCreateIdForKey(
        struct _HAM_HOSTID_STORE *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  void *v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // rax
  struct _HAM_HOSTID_STORE_KEY *v14; // r13
  int v15; // ebp
  int v16; // eax
  unsigned __int64 v17; // rax
  char IsDynamicKey; // r12
  int v19; // ebp
  int v20; // eax
  unsigned __int64 v21; // rax
  struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *v22; // rax
  int v23; // ebp
  int v24; // eax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // ebp
  __int64 v28; // rcx
  struct _HAM_HOSTID_ENTRY *v30; // rax
  struct _HAM_RC_TREE_NODE *v31; // rbp
  struct _HAM_HOSTID_STORE_SESSION_ENTRY *Heap; // rax
  struct _HAM_HOSTID_STORE_USER_ENTRY *v33; // rax
  struct _HAM_RC_TREE_NODE *v37; // [rsp+A8h] [rbp+20h] BYREF

  v37 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  HampHostIdStoreAcquireLockShared(a1);
  v8 = (void *)*((unsigned int *)a2 + 133);
  v9 = (unsigned __int64)a1 + 56;
  RtlAcquireSRWLockShared((char *)a1 + 72);
  v10 = *((_QWORD *)a1 + 7);
  v11 = *((_BYTE *)a1 + 64) & 1;
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
  {
    if ( v10 )
    {
      v10 ^= v9;
      goto LABEL_9;
    }
    goto LABEL_88;
  }
LABEL_9:
  while ( v10 )
  {
    v12 = HampHostIdStoreCompareSessionByKey(v8, (void *)v10);
    if ( v12 < 0 )
    {
      v13 = *(_QWORD *)v10;
    }
    else
    {
      if ( v12 <= 0 )
        break;
      v13 = *(_QWORD *)(v10 + 8);
    }
    if ( v11 && v13 )
      v10 ^= v13;
    else
      v10 = v13;
  }
  if ( v10 )
  {
    if ( !*(_QWORD *)(v10 + 24) )
    {
LABEL_88:
      v10 = 0LL;
      goto LABEL_13;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_13:
  RtlReleaseSRWLockShared(v9 + 16);
  if ( v10 )
  {
    v14 = a2;
  }
  else
  {
    Heap = (struct _HAM_HOSTID_STORE_SESSION_ENTRY *)HampAllocateHeap(0x60uLL);
    v10 = (unsigned __int64)Heap;
    if ( !Heap )
    {
      v27 = -1073741801;
      goto LABEL_69;
    }
    v14 = a2;
    HampHostIdStoreSessionInitialize(a1, a2, Heap);
    HamRcNodeFindOrInsertChild(
      (struct _HAM_HOSTID_STORE *)((char *)a1 + 16),
      (void *)*((unsigned int *)a2 + 133),
      (int (*)(void *, void *))HampHostIdStoreCompareSessionByKey,
      (struct _HAM_RC_TREE_NODE *)v10,
      &v37);
    if ( v37 != (struct _HAM_RC_TREE_NODE *)v10 )
    {
      CemRcObjectDereference(v10);
      v10 = (unsigned __int64)v37;
    }
  }
  RtlAcquireSRWLockShared(v10 + 56);
  v6 = *(_QWORD *)(v10 + 40);
  v15 = *(_BYTE *)(v10 + 48) & 1;
  if ( (*(_BYTE *)(v10 + 48) & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_102;
    v6 ^= v10 + 40;
  }
  if ( v6 )
  {
    v5 = 0LL;
    do
    {
      v16 = HampHostIdStoreCompareUserByKey((char *)v14 + 464, (void *)v6);
      if ( v16 < 0 )
      {
        v17 = *(_QWORD *)v6;
      }
      else
      {
        if ( v16 <= 0 )
          break;
        v17 = *(_QWORD *)(v6 + 8);
      }
      if ( v15 && v17 )
        v6 ^= v17;
      else
        v6 = v17;
    }
    while ( v6 );
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_27;
      }
LABEL_102:
      v6 = 0LL;
    }
  }
LABEL_27:
  RtlReleaseSRWLockShared(v10 + 56);
  if ( !v6 )
  {
    v33 = (struct _HAM_HOSTID_STORE_USER_ENTRY *)HampAllocateHeap(0xA0uLL);
    v6 = (unsigned __int64)v33;
    if ( !v33 )
      goto LABEL_103;
    HampHostIdStoreUserInitialize((struct _HAM_HOSTID_STORE_SESSION_ENTRY *)v10, v14, v33);
    HamRcNodeFindOrInsertChild(
      (struct _HAM_RC_TREE_NODE *)v10,
      (char *)v14 + 464,
      (int (*)(void *, void *))HampHostIdStoreCompareUserByKey,
      (struct _HAM_RC_TREE_NODE *)v6,
      &v37);
    if ( v37 != (struct _HAM_RC_TREE_NODE *)v6 )
    {
      CemRcObjectDereference(v6);
      v6 = (unsigned __int64)v37;
    }
  }
  IsDynamicKey = PsmIsDynamicKey(v14);
  if ( !IsDynamicKey )
  {
    RtlAcquireSRWLockShared(v6 + 56);
    v4 = *(_QWORD *)(v6 + 40);
    v19 = *(_BYTE *)(v6 + 48) & 1;
    if ( (*(_BYTE *)(v6 + 48) & 1) != 0 )
    {
      if ( !v4 )
        goto LABEL_106;
      v4 ^= v6 + 40;
    }
    if ( !v4 )
      goto LABEL_41;
    v5 = 0LL;
    do
    {
      v20 = HampHostIdStoreCompareApplicationByKey(a2, (void *)v4);
      if ( v20 < 0 )
      {
        v21 = *(_QWORD *)v4;
      }
      else
      {
        if ( v20 <= 0 )
          break;
        v21 = *(_QWORD *)(v4 + 8);
      }
      if ( v19 && v21 )
        v4 ^= v21;
      else
        v4 = v21;
    }
    while ( v4 );
    if ( !v4 )
    {
LABEL_41:
      RtlReleaseSRWLockShared(v6 + 56);
      v14 = a2;
      if ( v4 )
        goto LABEL_46;
      goto LABEL_42;
    }
    if ( *(_QWORD *)(v4 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
        __fastfail(0xEu);
      goto LABEL_41;
    }
LABEL_106:
    v4 = 0LL;
    goto LABEL_41;
  }
LABEL_42:
  v22 = (struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *)HampAllocateHeap(0x228uLL);
  v4 = (unsigned __int64)v22;
  if ( v22 )
  {
    HampHostIdStoreApplicationInitialize((struct _HAM_HOSTID_STORE_USER_ENTRY *)v6, v14, v22);
    HamRcNodeFindOrInsertChild(
      (struct _HAM_RC_TREE_NODE *)v6,
      v14,
      (int (*)(void *, void *))HampHostIdStoreCompareApplicationByKey,
      (struct _HAM_RC_TREE_NODE *)v4,
      &v37);
    if ( v37 != (struct _HAM_RC_TREE_NODE *)v4 )
    {
      CemRcObjectDereference(v4);
      v4 = (unsigned __int64)v37;
    }
    if ( IsDynamicKey )
    {
LABEL_84:
      v30 = (struct _HAM_HOSTID_ENTRY *)HampAllocateHeap(0x270uLL);
      v5 = (unsigned __int64)v30;
      v31 = v30;
      if ( v30 )
      {
        HampHostIdStoreLeafInitialize((struct _HAM_HOSTID_STORE_APPLICATION_ENTRY *)v4, v14, v30);
        HamRcNodeFindOrInsertChild(
          (struct _HAM_RC_TREE_NODE *)v4,
          v14,
          (int (*)(void *, void *))HampHostIdStoreCompareLeafByKey,
          (struct _HAM_RC_TREE_NODE *)v5,
          &v37);
        if ( v37 == (struct _HAM_RC_TREE_NODE *)v5 )
        {
          v5 = 0LL;
        }
        else
        {
          CemRcObjectDereference(v5);
          v5 = (unsigned __int64)v37;
          v31 = v37;
        }
        v26 = *((_QWORD *)v31 + 11);
        goto LABEL_68;
      }
      goto LABEL_103;
    }
LABEL_46:
    RtlAcquireSRWLockShared(v4 + 56);
    v5 = *(_QWORD *)(v4 + 40);
    v23 = *(_BYTE *)(v4 + 48) & 1;
    if ( (*(_BYTE *)(v4 + 48) & 1) != 0 )
    {
      if ( v5 )
      {
        v5 ^= v4 + 40;
        goto LABEL_62;
      }
    }
    else
    {
LABEL_62:
      while ( v5 )
      {
        v24 = HampHostIdStoreCompareLeafByKey(v14, (void *)v5);
        if ( v24 < 0 )
        {
          v25 = *(_QWORD *)v5;
        }
        else
        {
          if ( v24 <= 0 )
            break;
          v25 = *(_QWORD *)(v5 + 8);
        }
        if ( v23 && v25 )
          v5 ^= v25;
        else
          v5 = v25;
      }
      if ( !v5 )
      {
LABEL_66:
        RtlReleaseSRWLockShared(v4 + 56);
        if ( v5 )
        {
          v26 = *(_QWORD *)(v5 + 88);
LABEL_68:
          v27 = 0;
          *a3 = v26;
          goto LABEL_69;
        }
        goto LABEL_84;
      }
      if ( *(_QWORD *)(v5 + 24) )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_66;
      }
    }
    v5 = 0LL;
    goto LABEL_66;
  }
LABEL_103:
  v27 = -1073741801;
LABEL_69:
  HampHostIdStoreReleaseLockShared(a1);
  if ( v5 )
  {
    HampHostIdStoreAcquireLockExclusive(a1);
    v28 = *(_QWORD *)(v5 + 616);
    if ( v28 )
    {
      TpWaitForTimer(v28, 1LL);
      TpReleaseTimer(*(_QWORD *)(v5 + 616));
      *(_QWORD *)(v5 + 616) = 0LL;
    }
    if ( *(_WORD *)(v5 + 608) )
    {
      *(_WORD *)(v5 + 608) = 0;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    HampHostIdStoreReleaseLockExclusive(a1);
    CemRcObjectDereference(v5);
  }
  if ( v4 )
    CemRcObjectDereference(v4);
  if ( v6 )
    CemRcObjectDereference(v6);
  if ( v10 )
    CemRcObjectDereference(v10);
  return v27;
}
