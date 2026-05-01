/*
 * XREFs of ?_FindInsertPos@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU_InsertPosResult@12@AEBQEAUResourceHandle__@ExecutionModel@@@Z @ 0x18002DAA8
 * Callers:
 *     ?_EmplaceImpl@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@2@@utl@@_N@2@PEAU?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18002D9AC (-_EmplaceImpl@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 * Callees:
 *     ?_InitBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAXXZ @ 0x18001B928 (-_InitBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfS.c)
 *     ?_AllocBuckets@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAAPEAU?$_HashBucket@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@_K@Z @ 0x18006EA04 (-_AllocBuckets@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnf.c)
 */

__int64 __fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FindInsertPos(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v3; // r9
  char v6; // cl
  __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rcx
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-20h]
  unsigned __int8 v15; // [rsp+30h] [rbp-10h]

  v3 = *a3;
  v6 = *(_BYTE *)(a1 + 32);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 8LL << v6;
  v9 = 0xC4CEB9FE1A85EC53uLL
     * ((0xFF51AFD7ED558CCDuLL * (v3 ^ (v3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (v3 ^ (v3 >> 33))) >> 33));
  v10 = v9 ^ (v9 >> 33);
  if ( v7 )
  {
    v11 = *(_QWORD **)(v7 + 16 * (v10 & (v8 - 1)));
    if ( v11 )
    {
      while ( v11 != **(_QWORD ***)(v7 + 16 * (v10 & (v8 - 1)) + 8) )
      {
        if ( v11[2] >= v10 )
        {
          if ( v11[2] > v10 )
            break;
          if ( v3 == v11[3] )
          {
            *(_QWORD *)&v14 = v11;
            v15 = 2;
            goto LABEL_5;
          }
        }
        v11 = (_QWORD *)*v11;
      }
      *(_QWORD *)&v14 = v11;
      goto LABEL_4;
    }
  }
  else
  {
    v13 = utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_AllocBuckets(
            v9,
            v8);
    *(_QWORD *)(a1 + 16) = v13;
    if ( !v13 )
    {
      *(_QWORD *)&v14 = 0LL;
      v15 = 1;
      goto LABEL_5;
    }
    utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InitBuckets(a1);
  }
  *(_QWORD *)&v14 = 0LL;
LABEL_4:
  v15 = 0;
LABEL_5:
  *((_QWORD *)&v14 + 1) = v10;
  *(_OWORD *)a2 = v14;
  *(_QWORD *)(a2 + 16) = v15;
  return a2;
}
