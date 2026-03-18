/*
 * XREFs of ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1403CFC40
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14002DE54 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14004A7AC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x14004B63C (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x14005E5B0 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1402A890C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::PinPathContentRotation(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        unsigned int a3,
        int a4,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a5)
{
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v8; // rsi
  DMMVIDPNTOPOLOGY *v9; // rax
  struct DMMVIDPNPRESENTPATH *Path; // rax
  DMMVIDPNPRESENTPATH *v11; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // r13d
  int v13; // eax
  __int64 v14; // r15
  __int64 Container; // rax
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  DMMVIDPNTOPOLOGY *v26; // [rsp+50h] [rbp-20h] BYREF
  int v27; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]
  char v29; // [rsp+68h] [rbp-8h]

  v5 = a4;
  v6 = a3;
  v8 = (unsigned int)a2;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 6028;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 6028);
  v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  v26 = v9;
  if ( v9 )
  {
    if ( (_DWORD)v5 == 254 )
    {
      WdLogSingleEntry4(2LL, 254LL, v8, v6, this);
      WdLogGlobalForLineNumber = 3361;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
      return 3223192389LL;
    }
    else
    {
      Path = DMMVIDPNTOPOLOGY::FindPath(v9, v8, v6);
      v11 = Path;
      if ( Path )
      {
        v12 = *((_DWORD *)Path + 29);
        v13 = DMMVIDPNPRESENTPATH::PinContentRotation(Path, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v5);
        v14 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry4(2LL, v5, v8, v6, v13);
          WdLogGlobalForLineNumber = 3391;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to pin rotation transformation 0x%I64x on present path (0x%I64x,0x%I64x) (status = 0x%I64x)",
            v5,
            v8,
            v6,
            v14,
            0LL);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
          if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
          return (unsigned int)v14;
        }
        else
        {
          Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)v26 + 160);
          LODWORD(v26) = v8;
          HIDWORD(v26) = v6;
          v16 = VIDPN_MGR::FormalizeVidPnChange(
                  *(VIDPN_MGR **)(Container + 48),
                  (struct D3DKMDT_HVIDPN__ *)(Container & -(__int64)(Container != -88)),
                  9,
                  a5,
                  (DXGK_ENUM_PIVOT *)&v26);
          v17 = v16;
          if ( v16 < 0 )
          {
            if ( v16 == -1071774970 )
            {
              WdLogSingleEntry3(3LL, v8, v6, v5);
              WdLogGlobalForLineNumber = 3422;
            }
            else
            {
              WdLogSingleEntry4(2LL, v5, v8, v6, v16);
              WdLogGlobalForLineNumber = 3427;
            }
            if ( v12 == D3DKMDT_VPPR_UNPINNED )
            {
              if ( (int)DMMVIDPNPRESENTPATH::UnpinContentRotation(v11, v24) < 0 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 3435;
              }
            }
            else if ( (int)DMMVIDPNPRESENTPATH::PinContentRotation(v11, v12) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 3441;
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
            if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
            return v17;
          }
          else
          {
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
            if ( v29 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
            }
            return 0LL;
          }
        }
      }
      else
      {
        WdLogSingleEntry3(3LL, v8, v6, this);
        WdLogGlobalForLineNumber = 3374;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
        return 3223192359LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3352;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    return 3223192320LL;
  }
}
