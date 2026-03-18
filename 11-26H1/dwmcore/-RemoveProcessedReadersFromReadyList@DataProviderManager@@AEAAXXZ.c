/*
 * XREFs of ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x18022E760
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801D6D1C (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x18022E55C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 */

void __fastcall DataProviderManager::RemoveProcessedReadersFromReadyList(DataProviderManager *this)
{
  char *v1; // rbx
  char *v2; // rcx
  char *i; // r8
  char *j; // rax

  v1 = (char *)this + 104;
  v2 = (char *)*((_QWORD *)this + 14);
  for ( i = *(char **)v1; i != v2 && (*(_BYTE *)(*(_QWORD *)i + 88LL) & 2) != 0; i += 8 )
    ;
  if ( i != v2 )
  {
    for ( j = i + 8; j != v2; j += 8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)j + 88LL) & 2) != 0 )
      {
        *(_QWORD *)i = *(_QWORD *)j;
        i += 8;
      }
    }
    if ( i != v2 )
      *((_QWORD *)v1 + 1) = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
                              v2,
                              *((_QWORD *)v1 + 1),
                              i);
  }
  std::vector<CDataSourceReader *>::shrink_to_fit(v1);
}
