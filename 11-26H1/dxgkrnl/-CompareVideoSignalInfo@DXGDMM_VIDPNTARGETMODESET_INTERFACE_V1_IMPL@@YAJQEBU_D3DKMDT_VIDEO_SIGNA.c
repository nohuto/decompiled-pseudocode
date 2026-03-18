/*
 * XREFs of ?CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0QEAE@Z @ 0x140262590
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a3,
        unsigned __int8 *const a4)
{
  __int64 v7; // rcx
  __int64 v9; // rcx
  struct _D3DKMDT_VIDEO_SIGNAL_INFO::$9963842E1DCCBF6730749724D5C7309E::$4FDCBBA05DCC0CCF44951C2FDAA549A2 AdditionalSignalInfo; // edx
  __int64 v11; // rcx
  int v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h]
  char v14; // [rsp+30h] [rbp-10h]

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 6014);
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1390;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
  LOBYTE(a3->VideoStandard) = 0;
  if ( !this )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1403;
    goto LABEL_14;
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1411;
LABEL_14:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
    return 3223192337LL;
  }
  if ( *((_DWORD *)this + 3) == a2->ActiveSize.cx
    && *((_DWORD *)this + 4) == a2->ActiveSize.cy
    && *((_DWORD *)this + 5) == a2->VSyncFreq.Numerator
    && *((_DWORD *)this + 6) == a2->VSyncFreq.Denominator )
  {
    AdditionalSignalInfo = a2->AdditionalSignalInfo;
    if ( ((*(_BYTE *)&AdditionalSignalInfo ^ *((_BYTE *)this + 48)) & 7) == 0
      && ((*(_WORD *)&AdditionalSignalInfo ^ (unsigned __int16)*((_DWORD *)this + 12)) & 0x1F8) == 0 )
    {
      LOBYTE(a3->VideoStandard) = 1;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
  return 0LL;
}
