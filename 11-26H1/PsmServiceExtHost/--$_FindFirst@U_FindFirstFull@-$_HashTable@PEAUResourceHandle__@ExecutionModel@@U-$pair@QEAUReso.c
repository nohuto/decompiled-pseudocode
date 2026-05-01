/*
 * XREFs of ??$_FindFirst@U_FindFirstFull@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@PEAUResourceHandle__@ExecutionModel@@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEBA?AU_FindFirstFull@01@AEBQEAUResourceHandle__@ExecutionModel@@@Z @ 0x18002D1C8
 * Callers:
 *     ??$_EraseImpl@PEAUResourceHandle__@ExecutionModel@@@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAA_KAEBQEAUResourceHandle__@ExecutionModel@@@Z @ 0x18002D12C (--$_EraseImpl@PEAUResourceHandle__@ExecutionModel@@@-$_HashTable@PEAUResourceHandle__@ExecutionM.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FindFirst<utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FindFirstFull,ExecutionModel::ResourceHandle__ *>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // r9

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v5 = *a3;
    v6 = (0xC4CEB9FE1A85EC53uLL
        * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL
                                                                             * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) ^ ((0xC4CEB9FE1A85EC53uLL * ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) ^ ((0xFF51AFD7ED558CCDuLL * (*a3 ^ ((unsigned __int64)*a3 >> 33))) >> 33))) >> 33);
    v7 = *(_QWORD **)(v3 + 16 * (v6 & ((8LL << *(_BYTE *)(a1 + 32)) - 1)));
    if ( v7 )
    {
      v8 = **(_QWORD ***)(v3 + 16 * (v6 & ((8LL << *(_BYTE *)(a1 + 32)) - 1)) + 8);
      while ( v7 != v8 )
      {
        if ( v7[2] >= v6 )
        {
          if ( v7[2] > v6 )
            break;
          if ( v5 == v7[3] )
          {
            *a2 = v7;
            a2[1] = v6;
            return a2;
          }
        }
        v7 = (_QWORD *)*v7;
      }
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  return a2;
}
