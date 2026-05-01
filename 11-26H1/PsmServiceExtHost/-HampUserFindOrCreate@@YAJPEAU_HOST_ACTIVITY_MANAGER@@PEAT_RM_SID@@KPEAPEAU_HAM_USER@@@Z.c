/*
 * XREFs of ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x18003738C
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800371B8 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180036818 (-HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z.c)
 *     ?HampSessionCompareById@@YAJPEAX0@Z @ 0x180038C60 (-HampSessionCompareById@@YAJPEAX0@Z.c)
 *     ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x180038C80 (-HampUserCompareByIdentity@@YAJPEAX0@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180049814 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z @ 0x18005F71C (-HampUserInitialize@@YAXPEAU_HAM_SESSION@@PEAT_RM_SID@@PEAU_HAM_USER@@@Z.c)
 */

__int64 __fastcall HampUserFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        union _RM_SID *a2,
        unsigned int a3,
        struct _HAM_USER **a4)
{
  unsigned __int64 v4; // r13
  struct _HAM_RC_TREE_NODE *v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  int v9; // ebp
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // ebp
  union _RM_SID *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // rax
  struct _HAM_USER **v17; // rcx
  int v18; // ebx
  int v20; // eax
  struct _HAM_RC_TREE_NODE *v21; // rdi
  struct _HAM_USER *Heap; // rax
  struct _HAM_RC_TREE_NODE *v23; // [rsp+30h] [rbp-58h] BYREF
  struct _HAM_RC_TREE_NODE *v24; // [rsp+38h] [rbp-50h] BYREF
  struct _HAM_RC_TREE_NODE *v25; // [rsp+40h] [rbp-48h] BYREF
  struct _HAM_RC_TREE_NODE *v26; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v25 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v7 = (unsigned __int64)a1 + 392;
  v26 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352);
  RtlAcquireSRWLockShared((char *)a1 + 408);
  v8 = *(_QWORD *)v7;
  v9 = *(_BYTE *)(v7 + 8) & 1;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
  {
    if ( v8 )
    {
      v8 ^= v7;
      goto LABEL_9;
    }
    goto LABEL_40;
  }
LABEL_9:
  while ( v8 )
  {
    v10 = HampSessionCompareById((void *)v4, (void *)v8);
    if ( v10 < 0 )
    {
      v11 = *(_QWORD *)v8;
    }
    else
    {
      if ( v10 <= 0 )
        break;
      v11 = *(_QWORD *)(v8 + 8);
    }
    if ( v9 && v11 )
      v8 ^= v11;
    else
      v8 = v11;
  }
  if ( v8 )
  {
    if ( !*(_QWORD *)(v8 + 24) )
    {
LABEL_40:
      v8 = 0LL;
      goto LABEL_13;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
      __fastfail(0xEu);
  }
LABEL_13:
  RtlReleaseSRWLockShared(v7 + 16);
  if ( v8 )
  {
    v5 = (struct _HAM_RC_TREE_NODE *)v8;
  }
  else
  {
    v20 = HampSessionCreate(a1, v4, &v23);
    v21 = v23;
    v18 = v20;
    if ( v20 >= 0 )
    {
      HamRcNodeFindOrInsertChild(
        v26,
        (void *)v4,
        (__int64 (__fastcall *)(void *, unsigned __int64))HampSessionCompareById,
        v23,
        &v24);
      v5 = v24;
      if ( v24 == v21 )
      {
        v5 = v21;
        v21 = 0LL;
      }
      v18 = 0;
    }
    if ( v21 )
      CemRcObjectDereference(v21);
    if ( v18 < 0 )
      goto LABEL_35;
  }
  RtlAcquireSRWLockShared((char *)v5 + 56);
  v12 = *((_QWORD *)v5 + 5);
  v13 = *((_BYTE *)v5 + 48) & 1;
  if ( (*((_BYTE *)v5 + 48) & 1) == 0 )
    goto LABEL_16;
  if ( v12 )
  {
    v12 ^= (unsigned __int64)v5 + 40;
LABEL_16:
    v14 = a2;
    while ( v12 )
    {
      v15 = HampUserCompareByIdentity(a2, (void *)v12);
      if ( v15 < 0 )
      {
        v16 = *(_QWORD *)v12;
      }
      else
      {
        if ( v15 <= 0 )
        {
          if ( *(_QWORD *)(v12 + 24) )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
              __fastfail(0xEu);
          }
          else
          {
            v12 = 0LL;
          }
          goto LABEL_31;
        }
        v16 = *(_QWORD *)(v12 + 8);
      }
      if ( v13 && v16 )
        v12 ^= v16;
      else
        v12 = v16;
    }
    goto LABEL_31;
  }
  v14 = a2;
LABEL_31:
  RtlReleaseSRWLockShared((char *)v5 + 56);
  if ( v12 )
  {
    v17 = a4;
    goto LABEL_33;
  }
  Heap = (struct _HAM_USER *)HampAllocateHeap(0xC8uLL);
  v12 = (unsigned __int64)Heap;
  if ( Heap )
  {
    HampUserInitialize(v5, v14, Heap);
    v6 = v12;
    HamRcNodeFindOrInsertChild(
      v5,
      v14,
      (__int64 (__fastcall *)(void *, unsigned __int64))HampUserCompareByIdentity,
      (struct _HAM_RC_TREE_NODE *)v12,
      &v25);
    v17 = a4;
    if ( v25 != (struct _HAM_RC_TREE_NODE *)v12 )
    {
      *a4 = v25;
      goto LABEL_34;
    }
    v6 = 0LL;
LABEL_33:
    *v17 = (struct _HAM_USER *)v12;
LABEL_34:
    v18 = 0;
    goto LABEL_35;
  }
  v18 = -1073741801;
LABEL_35:
  if ( v5 )
    CemRcObjectDereference(v5);
  if ( v6 )
    CemRcObjectDereference(v6);
  return (unsigned int)v18;
}
