/*
 * XREFs of ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE120
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x14026BB04 (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x14026C394 (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1403495F4 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE090 (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1402ABFFC (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1402AC310 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x14041E798 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyInheritScope(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // rax
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // di
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned int i; // ebp
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v15; // r8
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  CCD_TOPOLOGY::Clear(this);
  v4 = *((_QWORD *)a2 + 8);
  v5 = 0;
  if ( v4 )
  {
    v6 = *(_WORD *)(v4 + 20);
    v7 = v6;
  }
  else
  {
    v7 = 0LL;
    v6 = 0;
  }
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(this, v7) >= v6 )
  {
    LODWORD(v10) = 0;
    for ( i = 0; ; ++i )
    {
      v12 = *((_QWORD *)a2 + 8);
      v13 = v12 ? *(_WORD *)(v12 + 20) : 0;
      if ( i >= v13 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
      v16 = CCD_TOPOLOGY::AddPathDescriptor(this, PathDescriptor, v15);
      v10 = v16;
      if ( v16 < 0 )
      {
        v17 = *((_QWORD *)a2 + 8);
        if ( v17 )
          v5 = *(_WORD *)(v17 + 20);
        WdLogSingleEntry4(1LL, v10, i, this, v5);
        WdLogGlobalForLineNumber = 170;
        return (unsigned int)v10;
      }
    }
    v18 = *((_QWORD *)this + 8);
    if ( v18 )
    {
      v19 = *((_QWORD *)a2 + 8);
      if ( v19 )
      {
        *(_OWORD *)v18 = *(_OWORD *)v19;
        *(_DWORD *)(v18 + 16) = *(_DWORD *)(v19 + 16);
      }
    }
    return (unsigned int)v10;
  }
  else
  {
    v8 = *((_QWORD *)a2 + 8);
    if ( v8 )
      v5 = *(_WORD *)(v8 + 20);
    WdLogSingleEntry2(6LL, this, v5);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 154;
  }
  return result;
}
