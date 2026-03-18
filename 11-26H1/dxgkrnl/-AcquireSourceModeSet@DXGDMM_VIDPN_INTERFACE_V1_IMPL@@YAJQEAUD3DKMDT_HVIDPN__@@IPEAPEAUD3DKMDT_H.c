/*
 * XREFs of ?AcquireSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1403D8800
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x14004A25C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004BD5C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004CF80 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct DMMVIDPNTARGETMODESET **a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // edx
  DMMVIDPN *v11; // r11
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v12; // rdi
  DMMVIDPNTARGET *SourceFromId; // rax
  __int64 v14; // r11
  struct DMMVIDPNTARGETMODESET *v15; // rax
  struct DMMVIDPNTARGETMODESET *v16; // rbx
  __int64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-20h] BYREF
  __int64 v25; // [rsp+28h] [rbp-18h]
  char v26; // [rsp+30h] [rbp-10h]

  v4 = (unsigned int)a2;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v26 = 1;
    v24 = 6034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v24, 6034);
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
          WdLogGlobalForLineNumber = 4201;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
          if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
          return 3223192387LL;
        }
        else if ( DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v8 + 96), v4) )
        {
          v12 = *(struct D3DKMDT_HVIDPNSOURCEMODESET__ **)(v9 + 496);
          SourceFromId = DMMVIDPN::GetSourceFromId(v11, v10);
          if ( SourceFromId )
          {
            v15 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
            v16 = v15;
            if ( v15 )
            {
              if ( v15 == (struct DMMVIDPNTARGETMODESET *)-137LL )
                v16 = 0LL;
            }
            else
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 4252;
            }
            *a3 = v16;
            *a4 = v12;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
            if ( v26 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
            }
            return 0LL;
          }
          else
          {
            WdLogSingleEntry2(2LL, v4, v14);
            WdLogGlobalForLineNumber = 4240;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
            if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
            return 3223192324LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v4, v11);
          WdLogGlobalForLineNumber = 4211;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
          if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
          return 3223192377LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 4190;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
        if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
        return 3223192323LL;
      }
    }
    WdLogSingleEntry3(2LL, 0LL, v4, this);
    WdLogGlobalForLineNumber = 4169;
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v4, this);
    WdLogGlobalForLineNumber = 4160;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
