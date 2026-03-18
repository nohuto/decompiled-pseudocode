/*
 * XREFs of ?shrink_to_fit@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@QEAAXXZ @ 0x18022EB54
 * Callers:
 *     ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x18022E760 (-RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ.c)
 *     ??1CDataSourceReader@@UEAA@XZ @ 0x180266A0C (--1CDataSourceReader@@UEAA@XZ.c)
 * Callees:
 *     ??$_Reallocate@$00@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXAEA_K@Z @ 0x18010169C (--$_Reallocate@$00@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@st.c)
 */

void __fastcall std::vector<CDataSourceReader *>::shrink_to_fit(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[1];
  if ( v1 != a1[2] )
  {
    if ( *a1 == v1 )
    {
      std::vector<CDataSourceReader *>::_Tidy((__int64)a1);
    }
    else
    {
      v2 = (v1 - *a1) >> 3;
      std::vector<CDataSourceReader *>::_Reallocate<1>((__int64)a1, (unsigned __int64 *)&v2);
    }
  }
}
