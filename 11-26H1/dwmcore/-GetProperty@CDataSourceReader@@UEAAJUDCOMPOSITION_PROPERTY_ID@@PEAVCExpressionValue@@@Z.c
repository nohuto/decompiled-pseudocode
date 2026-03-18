/*
 * XREFs of ?GetProperty@CDataSourceReader@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801D1EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1UDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180207808 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1UDCOMPOSITION_PROPERTY_ID@.c)
 */

__int64 __fastcall CDataSourceReader::GetProperty(__int64 a1, int a2, __int64 a3)
{
  if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
    return DataProviderManager::GetPropertyValue(
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6392LL),
             a1,
             *(_QWORD *)(a1 + 72),
             *(_QWORD *)(a1 + 80),
             a2,
             a3);
  else
    return 2147500037LL;
}
