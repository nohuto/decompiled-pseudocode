/*
 * XREFs of ?_FindInsertPos@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBU_RM_PSM_HOST_INFO@@@Z @ 0x18001B238
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001A85C (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAXXZ @ 0x18001B928 (-_InitBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfS.c)
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180028630 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005C470 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ?_AllocBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashBucket@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@_K@Z @ 0x18006EA04 (-_AllocBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnf.c)
 */

__int64 __fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_FindInsertPos(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v14; // rax
  _QWORD *v15; // r14
  __int128 v16; // [rsp+20h] [rbp-20h]
  unsigned __int8 v17; // [rsp+30h] [rbp-10h]

  *(_OWORD *)a2 = 0LL;
  v3 = a1;
  *(_QWORD *)(a2 + 16) = 0LL;
  LOBYTE(a1) = *(_BYTE *)(a1 + 32);
  v5 = 8LL << a1;
  v7 = utl::hash<_RM_PSM_HOST_INFO>::operator()(a1, a3);
  v8 = *(_QWORD *)(v3 + 16);
  v9 = v7;
  v10 = v7 & (v5 - 1);
  if ( v8 )
  {
    v11 = 2 * v10;
    v12 = *(_QWORD **)(v8 + 8 * v11);
    if ( v12 )
    {
      v15 = **(_QWORD ***)(v8 + 8 * v11 + 8);
      while ( v12 != v15 )
      {
        if ( v12[2] >= v9 )
        {
          if ( v12[2] > v9 )
            break;
          if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v8, a3, v12 + 3) )
          {
            *(_QWORD *)&v16 = v12;
            v17 = 2;
            goto LABEL_5;
          }
        }
        v12 = (_QWORD *)*v12;
      }
      *(_QWORD *)&v16 = v12;
      goto LABEL_4;
    }
  }
  else
  {
    v14 = utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_AllocBuckets(
            0LL,
            v5);
    *(_QWORD *)(v3 + 16) = v14;
    if ( !v14 )
    {
      *(_QWORD *)&v16 = 0LL;
      v17 = 1;
      goto LABEL_5;
    }
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InitBuckets(v3);
  }
  *(_QWORD *)&v16 = 0LL;
LABEL_4:
  v17 = 0;
LABEL_5:
  *((_QWORD *)&v16 + 1) = v9;
  *(_OWORD *)a2 = v16;
  *(_QWORD *)(a2 + 16) = v17;
  return a2;
}
