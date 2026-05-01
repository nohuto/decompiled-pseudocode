/*
 * XREFs of ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800371B8
 * Callers:
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x1800181B0 (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 * Callees:
 *     ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x180036008 (-HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180036818 (-HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x18003738C (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180038D00 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     CemRcObjectDereference @ 0x180038DE0 (CemRcObjectDereference.c)
 */

__int64 __fastcall HampPkgFindOrCreate(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_PACKAGE_INFO *a2,
        struct _HAM_PACKAGE **a3)
{
  unsigned __int64 v5; // rsi
  int v6; // eax
  struct _HAM_USER *v7; // r14
  unsigned int v8; // ebx
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // rax
  struct _HAM_PACKAGE *Heap; // rax
  struct _HAM_USER *v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0LL;
  v16 = 0LL;
  v6 = HampUserFindOrCreate(a1, (struct _HAM_PACKAGE_INFO *)((char *)a2 + 132), *((_DWORD *)a2 + 50), &v16);
  v7 = v16;
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_23;
  v9 = (unsigned __int64 *)((char *)v16 + 40);
  RtlAcquireSRWLockShared((char *)v16 + 56);
  v10 = *v9;
  v11 = *((_BYTE *)v7 + 48) & 1;
  if ( (*((_BYTE *)v7 + 48) & 1) == 0 )
    goto LABEL_10;
  if ( !v10 )
    goto LABEL_28;
  v10 ^= (unsigned __int64)v9;
LABEL_10:
  while ( v10 )
  {
    v12 = HampPkgCompareByIdentity(a2, (void *)v10);
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
  if ( !v10 )
    goto LABEL_14;
  if ( *(_QWORD *)(v10 + 24) )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 24)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
LABEL_28:
    v10 = 0LL;
  }
LABEL_14:
  RtlReleaseSRWLockShared((char *)v7 + 56);
  if ( v10 )
    goto LABEL_15;
  Heap = (struct _HAM_PACKAGE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x160uLL);
  v10 = (unsigned __int64)Heap;
  if ( Heap )
  {
    HampPkgInitialize(v7, a2, Heap);
    v5 = v10;
    v16 = 0LL;
    HamRcNodeFindOrInsertChild(
      v7,
      (void *)(v10 + 96),
      (__int64 (__fastcall *)(void *, unsigned __int64))HampPkgCompareByIdentity,
      (struct _HAM_RC_TREE_NODE *)v10,
      &v16);
    if ( !v16 || (struct _HAM_USER *)v10 != v16 )
    {
      *a3 = v16;
      goto LABEL_22;
    }
    v5 = 0LL;
LABEL_15:
    *a3 = (struct _HAM_PACKAGE *)v10;
LABEL_22:
    v8 = 0;
    goto LABEL_23;
  }
  v8 = -1073741801;
LABEL_23:
  if ( v7 )
    CemRcObjectDereference(v7);
  if ( v5 )
    CemRcObjectDereference(v5);
  return v8;
}
