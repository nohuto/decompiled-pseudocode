/*
 * XREFs of IsVirtualizationDisabledForTarget @ 0x1402CACB0
 * Callers:
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x14026A6F0 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x14026B150 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x14026BCB4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403200E0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x140349A8C (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1403F22B4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x1400985E4 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall IsVirtualizationDisabledForTarget(__int64 a1, int a2, bool *a3, bool *a4, bool *a5)
{
  __int64 v7; // rbx
  unsigned int v8; // edx
  MONITOR_MGR *v9; // r10
  __int64 v10; // rbp
  bool v11; // r15
  bool v12; // al
  bool v14; // al
  struct DXGMONITOR *v15; // rdx
  void *v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-30h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  if ( !a1 || a2 == -1 || !a3 || !a4 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 3160);
  if ( !v7 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10231;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The selected adapter is render-only",
      10231LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( *(_QWORD *)(v7 + 112) )
  {
    v16 = retaddr;
    v17 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v16);
    MONITOR_MGR::_GetMonitorInstance(v9, v8, 1u, (struct MONITOR_REF_ACCESSOR *)&v16);
    v10 = v17;
    v18 = v17;
    if ( v17 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v10 + 40), 1u);
    }
    v19[0] = retaddr;
    v19[1] = v10;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v19);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v16);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v18, v15);
    v10 = v18;
  }
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 + 280) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5280;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(v10 + 240) + 16LL) || (*(_BYTE *)(v10 + 176) & 0x40) != 0;
    ExReleaseResourceLite((PERESOURCE)(v10 + 40));
    KeLeaveCriticalRegion();
    v18 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
    if ( v18 )
    {
      ExReleaseResourceLite((PERESOURCE)(v18 + 40));
      KeLeaveCriticalRegion();
    }
    if ( v11 )
    {
      *a3 = 1;
      v12 = 1;
      goto LABEL_20;
    }
  }
  else
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
    if ( v18 )
    {
      ExReleaseResourceLite((PERESOURCE)(v18 + 40));
      KeLeaveCriticalRegion();
    }
  }
  *a3 = *(_BYTE *)(v7 + 289) == 0;
  v12 = *(_BYTE *)(v7 + 290) == 0;
LABEL_20:
  *a4 = v12;
  if ( a5 )
  {
    v14 = *a3 || (*(_DWORD *)(v7 + 24) & 0x20) == 0;
    *a5 = v14;
  }
  return 0LL;
}
