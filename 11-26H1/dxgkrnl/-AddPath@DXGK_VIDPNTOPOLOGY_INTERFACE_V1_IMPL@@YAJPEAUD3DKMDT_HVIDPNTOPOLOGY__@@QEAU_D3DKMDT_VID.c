/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140265CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x14004A7AC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140053050 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x140264C80 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402A90C0 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140395424 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v9; // rax
  DMMVIDPNTOPOLOGY *v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  char v24; // [rsp+40h] [rbp-10h]
  struct DMMVIDPNPRESENTPATH *v25; // [rsp+88h] [rbp+38h] BYREF
  struct DMMVIDPNPRESENTPATH *v26; // [rsp+90h] [rbp+40h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 7041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v22, 7041);
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 2993;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerExit);
    }
    return 3223192345LL;
  }
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
  v9[3] = *(_DWORD *)a2;
  v9[4] = *((unsigned int *)a2 + 1);
  v9[5] = a2;
  v9[6] = this;
  WdLogGlobalForLineNumber = 2999;
  v10 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3010;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
    return 3223192320LL;
  }
  if ( !*((_DWORD *)a2 + 16) )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3021;
    *((_DWORD *)a2 + 16) = 255;
  }
  if ( !*((_DWORD *)a2 + 17) )
  {
    WdLogSingleEntry3(3LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), this);
    WdLogGlobalForLineNumber = 3033;
    memset(a2 + 19, 0, 0x100uLL);
    *((_DWORD *)a2 + 83) = 0;
    *((_DWORD *)a2 + 83) |= 1u;
    *(_QWORD *)(a2 + 17) = 1LL;
  }
  if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
  {
    WdLogSingleEntry4(3LL, *((int *)a2 + 84), *(_DWORD *)a2, *((unsigned int *)a2 + 1), this);
    WdLogGlobalForLineNumber = 3063;
    *((_DWORD *)a2 + 84) = 1;
    *((_QWORD *)a2 + 43) = 0LL;
    *((_QWORD *)a2 + 44) = 0LL;
  }
  v25 = 0LL;
  v26 = 0LL;
  v12 = DMMVIDPNTOPOLOGY::CreateNewPath(v10, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v26);
  v15 = v12;
  if ( v12 == -1071774970 )
  {
    WdLogSingleEntry3(2LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), -1071774970LL);
    WdLogGlobalForLineNumber = 3090;
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    return 3223192326LL;
  }
  if ( v12 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13);
    v17[3] = *(_DWORD *)a2;
    v17[4] = *((unsigned int *)a2 + 1);
    v17[5] = v15;
    WdLogGlobalForLineNumber = 3097;
    goto LABEL_30;
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))&v25,
    (__int64 (__fastcall ***)(_QWORD, __int64))v26);
  v19 = DMMVIDPNTOPOLOGY::AddPath(v10, v25, D3DKMDT_MCC_ENFORCE);
  LODWORD(v15) = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry4(7LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), v10, v19);
    WdLogGlobalForLineNumber = 3112;
LABEL_30:
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
    return (unsigned int)v15;
  }
  v25 = 0LL;
  v20 = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v10, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))&v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
  return v20;
}
