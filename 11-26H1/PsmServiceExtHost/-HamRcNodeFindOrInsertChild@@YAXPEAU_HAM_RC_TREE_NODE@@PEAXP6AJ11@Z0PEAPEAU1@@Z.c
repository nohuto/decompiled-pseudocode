/*
 * XREFs of ?HamRcNodeFindOrInsertChild@@YAXPEAU_HAM_RC_TREE_NODE@@PEAXP6AJ11@Z0PEAPEAU1@@Z @ 0x180036818
 * Callers:
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180035880 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x1800371B8 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x18003738C (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APPLICATION@@@Z @ 0x180037690 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@KPEAPEAU_HAM_APP.c)
 *     ?HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x18004975C (-HampSessionFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HamRcNodeFindOrInsertChild(
        struct _HAM_RC_TREE_NODE *a1,
        void *a2,
        __int64 (__fastcall *a3)(void *, unsigned __int64),
        struct _HAM_RC_TREE_NODE *a4,
        struct _HAM_RC_TREE_NODE **a5)
{
  unsigned __int64 v5; // rsi
  __int64 v9; // r8
  struct _HAM_RC_TREE_NODE *v10; // rbx
  unsigned __int64 v11; // rdi
  int v12; // ebp
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  int v16; // ebp
  unsigned __int64 v17; // rax

  v5 = (unsigned __int64)a1 + 40;
  RtlAcquireSRWLockExclusive((char *)a1 + 56);
  v10 = 0LL;
  while ( 1 )
  {
    if ( *((_QWORD *)a4 + 2) != -1LL )
      NT_ASSERT("!CempRcObjectIsInserted(ObjectToInsert)");
    if ( !*((_QWORD *)a4 + 3) )
      NT_ASSERT("!CemRcObjectIsRundownInProgress(ObjectToInsert)");
    if ( (*(_BYTE *)(v5 + 40) & 1) != 0 )
      NT_ASSERT("!Table->IsRunningDown");
    v11 = *(_QWORD *)v5;
    v12 = *(_BYTE *)(v5 + 8) & 1;
    if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
      break;
LABEL_13:
    while ( v11 )
    {
      v13 = a3(a2, v11);
      if ( v13 < 0 )
      {
        v14 = *(_QWORD *)v11;
      }
      else
      {
        if ( v13 <= 0 )
          break;
        v14 = *(_QWORD *)(v11 + 8);
      }
      if ( v12 && v14 )
        v11 ^= v14;
      else
        v11 = v14;
    }
    if ( !v11 )
      goto LABEL_15;
    if ( *(_QWORD *)(v11 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
        __fastfail(0xEu);
      RtlReleaseSRWLockExclusive(v5 + 16);
      goto LABEL_35;
    }
    RtlSleepConditionVariableSRW(v5 + 32, v5 + 16, 0LL, 0LL);
  }
  if ( v11 )
  {
    v11 ^= v5;
    goto LABEL_13;
  }
LABEL_15:
  v15 = *(_QWORD *)v5;
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    if ( v15 )
      v15 ^= v5;
    else
      v15 = 0LL;
  }
  LOBYTE(v9) = 0;
  v16 = *(_BYTE *)(v5 + 8) & 1;
  if ( v15 )
  {
    while ( 1 )
    {
      if ( ((int (__fastcall *)(void *, unsigned __int64, __int64))a3)(a2, v15, v9) < 0 )
      {
        v17 = *(_QWORD *)v15;
        if ( v16 )
        {
          if ( !v17 )
          {
LABEL_38:
            LOBYTE(v9) = 0;
            break;
          }
          v17 ^= v15;
        }
        if ( !v17 )
          goto LABEL_38;
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          if ( !v17 )
          {
LABEL_25:
            LOBYTE(v9) = 1;
            break;
          }
          v17 ^= v15;
        }
        if ( !v17 )
          goto LABEL_25;
      }
      v15 = v17;
    }
  }
  RtlRbInsertNodeEx(v5, v15, v9, a4);
  *(_QWORD *)(v5 + 40) ^= (*(_QWORD *)(v5 + 40) ^ (*(_QWORD *)(v5 + 40) + 2LL)) & 0xFFFFFFFFFFFFFFFEuLL;
  RtlReleaseSRWLockExclusive(v5 + 16);
  RtlWakeAllConditionVariable(v5 + 32);
  v11 = (unsigned __int64)a4;
  if ( a4 )
LABEL_35:
    v10 = (struct _HAM_RC_TREE_NODE *)v11;
  *a5 = v10;
}
