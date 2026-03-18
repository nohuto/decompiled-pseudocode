/*
 * XREFs of ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1403CF140
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x140046C5C (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14004A25C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004C270 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct DMMVIDPNTARGETMODESET **a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // edx
  DMMVIDPN *v11; // r11
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v12; // rdi
  DMMVIDPNTARGET *TargetFromId; // rax
  struct DMMVIDPNTARGETMODESET *v14; // rax
  struct DMMVIDPNTARGETMODESET *v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-20h] BYREF
  __int64 v24; // [rsp+28h] [rbp-18h]
  char v25; // [rsp+30h] [rbp-10h]

  v4 = (unsigned int)a2;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 6036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 6036);
  if ( a3 )
  {
    if ( a4 )
    {
      *a3 = 0LL;
      *a4 = 0LL;
      v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 48);
        if ( *(_QWORD *)(v9 + 128) == v8 )
        {
          WdLogSingleEntry2(2LL, v4, v8);
          WdLogGlobalForLineNumber = 4467;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
          if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
          return 3223192387LL;
        }
        else if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v8 + 96), v4) )
        {
          v12 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v9 + 504);
          TargetFromId = DMMVIDPN::GetTargetFromId(v11, v10);
          if ( TargetFromId )
          {
            v14 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(TargetFromId);
            v15 = v14;
            if ( v14 )
            {
              if ( v14 == (struct DMMVIDPNTARGETMODESET *)-137LL )
                v15 = 0LL;
            }
            else
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4518;
            }
            *a3 = v15;
            *a4 = v12;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
            if ( v25 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
            }
            return 0LL;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 4506;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
            if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
            return 3223192325LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v4, v11);
          WdLogGlobalForLineNumber = 4477;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
          if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
          return 3223192384LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4456;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
        if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
        return 3223192323LL;
      }
    }
    WdLogSingleEntry3(2LL, 0LL, v4, this);
    WdLogGlobalForLineNumber = 4435;
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v4, this);
    WdLogGlobalForLineNumber = 4426;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
