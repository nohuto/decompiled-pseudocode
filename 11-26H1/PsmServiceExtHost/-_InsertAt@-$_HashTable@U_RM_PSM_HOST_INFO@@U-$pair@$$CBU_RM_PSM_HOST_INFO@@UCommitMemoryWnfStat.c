/*
 * XREFs of ?_InsertAt@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@3@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@utl@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@2@@2@AEBU_InsertPosResult@12@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@UCommitMemoryWnfStates@ResourceManager@ExecutionModel@@@utl@@@2@@Z @ 0x18001AC80
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18001A85C (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?_Rehash@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA_NE@Z @ 0x18001B82C (-_Rehash@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Executio.c)
 */

_QWORD *__fastcall utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,ExecutionModel::ResourceManager::CommitMemoryWnfStates>>,0>::_InsertAt(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  _QWORD *v7; // r10
  _QWORD *v8; // rcx

  v4 = *a3;
  v7 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16 * (a3[1] & ((8LL << *(_BYTE *)(a1 + 32)) - 1)));
  if ( !*a3 )
  {
    *v7 = a4;
    v4 = a1;
LABEL_3:
    v7[1] = a4;
    goto LABEL_4;
  }
  if ( *v7 == v4 )
  {
    *v7 = a4;
  }
  else if ( *(_QWORD *)v7[1] == v4 )
  {
    goto LABEL_3;
  }
LABEL_4:
  a4[2] = a3[1];
  v8 = *(_QWORD **)(v4 + 8);
  a4[1] = v8;
  *a4 = v4;
  *a2 = a4;
  *v8 = a4;
  *(_QWORD *)(v4 + 8) = a4;
  ++*(_QWORD *)(a1 + 24);
  LOBYTE(v8) = *(_BYTE *)(a1 + 32);
  if ( (unsigned __int64)*(unsigned __int8 *)(a1 + 33) < *(_QWORD *)(a1 + 24) >> (char)v8 )
    utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_Rehash(
      a1,
      (unsigned int)((_DWORD)v8 + 1));
  return a2;
}
