/*
 * XREFs of ?AcquireTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140388E44
 * Callers:
 *     ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140388DF0 (-AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVI.c)
 *     ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x140388E20 (-AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVI.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSetImpl(
        DXGK_VIDPN_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPN__ *const a2,
        int a3,
        __int64 *a4,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a5)
{
  __int64 v5; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  char *v12; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h]
  char v29; // [rsp+30h] [rbp-10h]

  v5 = (unsigned int)a2;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 7048);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
  v11[3] = this;
  v11[4] = v5;
  v11[5] = a4;
  v11[6] = a5;
  WdLogGlobalForLineNumber = 3934;
  if ( !a4 )
  {
    WdLogSingleEntry3(2LL, 0LL, v5, this);
    WdLogGlobalForLineNumber = 3942;
LABEL_41:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  if ( !a5 )
  {
    WdLogSingleEntry3(2LL, 0LL, v5, this);
    WdLogGlobalForLineNumber = 3951;
    goto LABEL_41;
  }
  *a4 = 0LL;
  *a5 = 0LL;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
  {
    v12 = 0LL;
    v13 = this[15];
    if ( v13 != (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) )
      v12 = (char *)v13 - 8;
    while ( v12 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v12 + 12) + 24LL) == (_DWORD)v5 )
        goto LABEL_13;
      v21 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v12 + 1);
      v12 = (char *)v21 - 8;
      if ( v21 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) )
        v12 = 0LL;
    }
    WdLogSingleEntry2(2LL, v5, this);
    WdLogGlobalForLineNumber = 3985;
LABEL_13:
    v14 = 440LL;
    if ( a3 != 1 )
      v14 = 448LL;
    v15 = (_QWORD *)((char *)this[39] + 24);
    v16 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)((char *)this[6] + v14);
    if ( (_QWORD *)*v15 == v15 || (v17 = *v15 - 8LL, *v15 == 8LL) )
    {
LABEL_17:
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 4012;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      }
      return 3223192325LL;
    }
    while ( *(_DWORD *)(v17 + 24) != (_DWORD)v5 )
    {
      v22 = *(_QWORD **)(v17 + 8);
      v17 = (__int64)(v22 - 1);
      if ( v22 == v15 )
        v17 = 0LL;
      if ( !v17 )
        goto LABEL_17;
    }
    v23 = *(_QWORD *)(v17 + 104);
    if ( v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 96));
      v24 = *(_QWORD *)(v17 + 104);
      if ( v24 )
        goto LABEL_35;
    }
    else
    {
      v24 = 0LL;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4021;
LABEL_35:
    *a4 = v24 & -(__int64)(v24 != -137);
    *a5 = v16;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
    return 0LL;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 3973;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
  return 3223192323LL;
}
