/*
 * XREFs of ?RegulateCloneGroupIdForNewPath@CCD_TOPOLOGY@@QEAAXI@Z @ 0x140268F9C
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x14026A6F0 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026B150 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

void __fastcall CCD_TOPOLOGY::RegulateCloneGroupIdForNewPath(CCD_TOPOLOGY *this, unsigned int a2)
{
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v8; // rdi
  __int64 v9; // r8
  unsigned int i; // edx

  *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46) = -1;
  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, a2);
  *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    LOWORD(v5) = *(_WORD *)(v5 + 20);
  LODWORD(v6) = (unsigned __int16)v5;
  while ( (_DWORD)v6 )
  {
    v7 = v6 - 1;
    v6 = (unsigned int)(v6 - 1);
    v8 = CCD_TOPOLOGY::GetPathDescriptor(this, v7);
    if ( (*(_QWORD *)v8 & 0x4000000000000LL) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4716;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPath->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_CLONE_GROUP_VALID",
        4716LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = *((_QWORD *)this + 8);
    for ( i = 0; i < *(unsigned __int16 *)(v9 + 20); ++i )
    {
      if ( *(_DWORD *)(296LL * i + v9 + 240) == *(_DWORD *)(296 * v6 + v9 + 240) )
        goto LABEL_11;
    }
    i = -559038737;
LABEL_11:
    *((_DWORD *)v8 + 46) = i | 0xFE550000;
  }
}
