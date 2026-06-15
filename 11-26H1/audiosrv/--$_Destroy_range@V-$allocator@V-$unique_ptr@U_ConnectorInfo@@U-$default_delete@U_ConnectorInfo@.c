/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@0@@Z @ 0x1800EFFF4
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@0@@Z @ 0x1800F0460 (--$_Uninitialized_move@PEAV-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@@@std.c)
 *     ??1?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800F0A34 (--1-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@@@std@@@std@@V-$all.c)
 *     ??1_Reallocation_guard@?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800F0CC0 (--1_Reallocation_guard@-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo.c)
 *     ??1_TopologyInfo@@QEAA@XZ @ 0x1800F0D38 (--1_TopologyInfo@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@2@_K1@Z @ 0x1800F5854 (-_Change_array@-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@@@std@@.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x1801591BC (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     ??1?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@QEAA@XZ @ 0x1800F09D4 (--1-$unique_ptr@U_ConnectorInfo@@U-$default_delete@U_ConnectorInfo@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<_ConnectorInfo>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<_ConnectorInfo>::~unique_ptr<_ConnectorInfo>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
