/*
 * XREFs of ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x140195C60
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14004A7AC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x140264F7C (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::FindFirstAvailableTarget(
        __int64 a1,
        unsigned int a2,
        int a3,
        _DWORD *a4)
{
  __int64 v5; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rsi
  __int64 v14; // rcx
  int FirstAvailableTarget; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h]
  char v24; // [rsp+50h] [rbp-10h]
  int v25; // [rsp+98h] [rbp+38h] BYREF

  v5 = a3;
  v7 = a2;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 6031;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 6031);
  if ( a4 )
  {
    *a4 = -1;
    if ( (_DWORD)v5 )
    {
      v11 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(a1);
      v13 = v11;
      if ( v11 )
      {
        v25 = v12;
        FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
                                 v11,
                                 (unsigned int)v7,
                                 (unsigned int)v5,
                                 &v25,
                                 0LL,
                                 0LL,
                                 0LL);
        v18 = FirstAvailableTarget;
        if ( FirstAvailableTarget >= 0 )
        {
          *a4 = v25;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
          if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
          return 0LL;
        }
        else
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
          v19[3] = v13;
          v19[4] = v7;
          v19[5] = v5;
          v19[6] = v18;
          WdLogGlobalForLineNumber = 3780;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
          if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
          return (unsigned int)v18;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3763;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
        if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
        return 3223192320LL;
      }
    }
    else
    {
      WdLogSingleEntry4(2LL, 0LL, a4, a1, v7);
      WdLogGlobalForLineNumber = 3749;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
      return 3223192367LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a1, v7);
    WdLogGlobalForLineNumber = 3736;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
