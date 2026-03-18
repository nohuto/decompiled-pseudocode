/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1402644C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14004A7AC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1402A6EE8 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1402A76C8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1402A7894 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140384650 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 Container; // rdi
  struct DXGADAPTER *ContainingAdapter; // r15
  __int64 v17; // r8
  ADAPTER_DISPLAY *v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+50h] [rbp-1h]
  char v25; // [rsp+58h] [rbp+7h]
  _DXGKARG_ENUMVIDPNCOFUNCMODALITY v26; // [rsp+60h] [rbp+Fh] BYREF
  _BYTE v27[32]; // [rsp+78h] [rbp+27h] BYREF

  v2 = (unsigned int)a2;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 6025;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 6025);
  v4 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v6 = v4;
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2901;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    }
    return 3223192320LL;
  }
  if ( ((unsigned __int16)((2 << *(_BYTE *)(v4 + 76)) - 1) & *(_WORD *)(v4 + 78)) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2910;
  }
  LOBYTE(v5) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(&v26, v6 + 56, v5);
  v9 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v6, v2);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
    v13[3] = v6;
    v13[4] = v2;
    v13[5] = v12;
    WdLogGlobalForLineNumber = 2923;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    return (unsigned int)v12;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v26);
  if ( *(_QWORD *)(v6 + 24) != v6 + 24 )
  {
    Container = ContainedBy<DMMVIDPN>::GetContainer(v6 + 160);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(Container + 48));
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(ContainingAdapter) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2943;
    }
    if ( ((unsigned __int16)((2 << *(_BYTE *)(v6 + 76)) - 1) & *(_WORD *)(v6 + 78)) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2951;
    }
    LOBYTE(v17) = 3;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(v27, v6 + 56, v17);
    *((_DWORD *)&v26.EnumPivot + 2) = 0;
    v26.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
    v26.EnumPivot.VidPnSourceId = -1;
    v26.hConstrainingVidPn = (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88));
    v18 = (ADAPTER_DISPLAY *)*((_QWORD *)ContainingAdapter + 395);
    v26.EnumPivot.VidPnTargetId = -1;
    v19 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v18, &v26);
    v20 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry3(2LL, Container, v2, v19);
      WdLogGlobalForLineNumber = 2975;
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v27);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
      return v20;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v27);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
  return 0LL;
}
