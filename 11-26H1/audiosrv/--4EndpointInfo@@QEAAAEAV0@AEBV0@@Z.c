/*
 * XREFs of ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800F0DE0
 * Callers:
 *     ??0EndpointInfo@@QEAA@AEBV0@@Z @ 0x1800F0654 (--0EndpointInfo@@QEAA@AEBV0@@Z.c)
 *     ??0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z @ 0x1800F0700 (--0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z.c)
 *     ??4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z @ 0x1800F0EC4 (--4ResourceHandleInfo@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800F26C4 (-DoReacquireResourceGroup@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@U_TopologyInfo@@U?$default_delete@U_TopologyInfo@@@std@@@std@@@0@@Z @ 0x1800F002C (--$_Destroy_range@V-$allocator@V-$unique_ptr@U_TopologyInfo@@U-$default_delete@U_TopologyInfo@@@.c)
 *     ?AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV?$vector@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@U_ConnectorInfo@@U?$default_delete@U_ConnectorInfo@@@std@@@std@@@2@@std@@AEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@1@Z @ 0x1800F1B60 (-AddExtendedTopologyInfo@EndpointInfo@@AEAAJAEAV-$vector@V-$unique_ptr@U_ConnectorInfo@@U-$defau.c)
 *     ?SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z @ 0x1800F53F0 (-SetEndpointInfo@EndpointInfo@@QEAAJPEBG00K@Z.c)
 */

EndpointInfo *__fastcall EndpointInfo::operator=(EndpointInfo *this, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const unsigned __int16 *v6; // r9
  const unsigned __int16 *v7; // r8
  const unsigned __int16 *v8; // rdx
  int v9; // eax
  _QWORD *v10; // rsi
  _QWORD *i; // rbx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 14);
  v5 = *((_QWORD *)this + 13);
  if ( v5 != v4 )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<_TopologyInfo>>>(v5, v4);
    *((_QWORD *)this + 14) = *((_QWORD *)this + 13);
  }
  v6 = (const unsigned __int16 *)(a2 + 64);
  if ( *(_QWORD *)(a2 + 88) > 7uLL )
    v6 = *(const unsigned __int16 **)v6;
  v7 = (const unsigned __int16 *)(a2 + 32);
  if ( *(_QWORD *)(a2 + 56) > 7uLL )
    v7 = *(const unsigned __int16 **)v7;
  v8 = (const unsigned __int16 *)a2;
  if ( *(_QWORD *)(a2 + 24) > 7uLL )
    v8 = *(const unsigned __int16 **)a2;
  v9 = EndpointInfo::SetEndpointInfo(this, v8, v7, v6, *(_DWORD *)(a2 + 96));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      340LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\ConstraintModel\\Lib\\ConstraintModelTypes.h",
      (const char *)(unsigned int)v9);
  v10 = *(_QWORD **)(a2 + 112);
  for ( i = *(_QWORD **)(a2 + 104); i != v10; ++i )
  {
    v12 = EndpointInfo::AddExtendedTopologyInfo(this, *i, *i + 24LL, *i + 48LL);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        345LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\ConstraintModel\\Lib\\ConstraintModelTypes.h",
        (const char *)(unsigned int)v12);
  }
  return this;
}
