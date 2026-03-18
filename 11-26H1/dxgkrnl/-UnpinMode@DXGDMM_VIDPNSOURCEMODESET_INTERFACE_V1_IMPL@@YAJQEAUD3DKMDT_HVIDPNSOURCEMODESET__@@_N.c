/*
 * XREFs of ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1403F8790
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x140046910 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x140061458 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2)
{
  char v2; // r14
  DMMVIDPNSOURCEMODESET *v4; // rax
  __int64 v5; // rdx
  DMMVIDPNSOURCEMODESET *v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 Container; // rsi
  VIDPN_MGR *v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  char v24; // [rsp+40h] [rbp-10h]
  DXGK_ENUM_PIVOT v25; // [rsp+80h] [rbp+30h] BYREF

  v2 = (char)a2;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 6008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 6008);
  v4 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  v6 = v4;
  if ( v4 )
  {
    v7 = DMMVIDPNSOURCEMODESET::UnpinMode(v4, v5);
    v10 = v7;
    if ( v7 < 0 )
    {
      v18 = WdLogNewEntry5_WdTrace(v9, v8);
      *(_QWORD *)(v18 + 24) = this;
      *(_QWORD *)(v18 + 32) = v10;
      WdLogGlobalForLineNumber = 704;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
      return (unsigned int)v10;
    }
    else
    {
      v11 = *((_QWORD *)v6 + 14);
      if ( !v11 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 719;
      }
      if ( !*(_QWORD *)(v11 + 40) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v11 + 40) + 64LL);
      v13 = *(VIDPN_MGR **)(Container + 48);
      v25.VidPnSourceId = *(_DWORD *)(v11 + 24);
      v25.VidPnTargetId = -1;
      v14 = VIDPN_MGR::FormalizeVidPnChange(
              v13,
              (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
              4,
              v2,
              &v25);
      v15 = v14;
      if ( v14 >= 0 )
      {
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
        if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry3(2LL, *(unsigned int *)(v11 + 24), Container, v14);
        WdLogGlobalForLineNumber = 739;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
        if ( v24 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
        }
        return v15;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 691;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
    return 3223192328LL;
  }
}
