/*
 * XREFs of ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1402A9B30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14002C69C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14004A7AC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x140058868 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentScaling(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        unsigned int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a5)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v13; // r13d
  int v14; // eax
  __int64 v15; // r15
  __int64 Container; // rax
  int v17; // eax
  unsigned int v18; // r14d
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h]
  char v31; // [rsp+68h] [rbp-8h]

  v5 = a4;
  v6 = a3;
  v8 = (unsigned int)a2;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 6026;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 6026);
  v9 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v28 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v5 == 254 )
    {
      WdLogSingleEntry4(2LL, 254LL, v8, v6, this);
      WdLogGlobalForLineNumber = 3068;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
      return 3223192389LL;
    }
    else
    {
      v10 = v9 + 24;
      v11 = 0LL;
      v12 = *(_QWORD *)(v9 + 24);
      if ( v12 != v9 + 24 )
        v11 = v12 - 8;
      while ( v11
           && (*(_DWORD *)(*(_QWORD *)(v11 + 88) + 24LL) != (_DWORD)v8
            || *(_DWORD *)(*(_QWORD *)(v11 + 96) + 24LL) != (_DWORD)v6) )
      {
        v21 = *(_QWORD *)(v11 + 8);
        v11 = v21 - 8;
        if ( v21 == v10 )
          v11 = 0LL;
      }
      if ( v11 )
      {
        v13 = *(_DWORD *)(v11 + 112);
        v14 = DMMVIDPNPRESENTPATH::PinContentScaling(
                (DMMVIDPNPRESENTPATH *)v11,
                (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v5);
        v15 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry4(2LL, v5, v8, v6, v14);
          WdLogGlobalForLineNumber = 3098;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to pin scaling transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
            v5,
            v8,
            v6,
            v15,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
          if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
          return (unsigned int)v15;
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer(v28 + 160);
          LODWORD(v28) = v8;
          HIDWORD(v28) = v6;
          v17 = VIDPN_MGR::FormalizeVidPnChange(
                  *(VIDPN_MGR **)(Container + 48),
                  (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
                  7,
                  a5,
                  (DXGK_ENUM_PIVOT *)&v28);
          v18 = v17;
          if ( v17 < 0 )
          {
            if ( v17 == -1071774970 )
            {
              WdLogSingleEntry3(3LL, v8, v6, v5);
              WdLogGlobalForLineNumber = 3129;
            }
            else
            {
              WdLogSingleEntry4(2LL, v5, v8, v6, v17);
              WdLogGlobalForLineNumber = 3134;
            }
            if ( v13 == D3DKMDT_VPPS_UNPINNED )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentScaling((DMMVIDPNPRESENTPATH *)v11, v26) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 3143;
              }
            }
            else if ( (int)DMMVIDPNPRESENTPATH::PinContentScaling((DMMVIDPNPRESENTPATH *)v11, v13) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3150;
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
            if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit);
            return v18;
          }
          else
          {
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
            if ( v31 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
            }
            return 0LL;
          }
        }
      }
      else
      {
        WdLogSingleEntry3(3LL, v8, v6, this);
        WdLogGlobalForLineNumber = 3081;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
        if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
        return 3223192359LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3059;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    return 3223192320LL;
  }
}
