/*
 * XREFs of ?AcquireSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x14038B480
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL **this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ **a4)
{
  __int64 v4; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  char *v11; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // r8
  struct D3DKMDT_HVIDPNSOURCEMODESET__ *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v20; // rax
  DXGK_VIDPN_INTERFACE_V1_IMPL *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 v26; // [rsp+28h] [rbp-18h]
  char v27; // [rsp+30h] [rbp-10h]

  v4 = (unsigned int)a2;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 7043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 7043);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = this;
  v10[4] = v4;
  v10[5] = a3;
  v10[6] = a4;
  WdLogGlobalForLineNumber = 3379;
  if ( !a3 )
  {
    WdLogSingleEntry3(2LL, 0LL, v4, this);
    WdLogGlobalForLineNumber = 3387;
    goto LABEL_36;
  }
  if ( !a4 )
  {
    WdLogSingleEntry3(2LL, 0LL, v4, this);
    WdLogGlobalForLineNumber = 3396;
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  if ( this && *((_DWORD *)this + 16) == 1833172997 )
  {
    v11 = 0LL;
    v12 = this[15];
    if ( v12 != (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) )
      v11 = (char *)v12 - 8;
    while ( v11 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v11 + 11) + 24LL) == (_DWORD)v4 )
        goto LABEL_13;
      v21 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)v11 + 1);
      v11 = (char *)v21 - 8;
      if ( v21 == (DXGK_VIDPN_INTERFACE_V1_IMPL *)(this + 15) )
        v11 = 0LL;
    }
    WdLogSingleEntry2(2LL, v4, this);
    WdLogGlobalForLineNumber = 3429;
LABEL_13:
    v13 = 0LL;
    v14 = (_QWORD *)((char *)this[38] + 24);
    v15 = (struct D3DKMDT_HVIDPNSOURCEMODESET__ *)*((_QWORD *)this[6] + 54);
    if ( (_QWORD *)*v14 != v14 )
      v13 = *v14 - 8LL;
    while ( v13 )
    {
      if ( *(_DWORD *)(v13 + 24) == (_DWORD)v4 )
      {
        v16 = *(_QWORD *)(v13 + 104);
        if ( v16 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
          v17 = *(_QWORD *)(v13 + 104);
          if ( v17 )
          {
LABEL_19:
            *a3 = v17 & -(__int64)(v17 != -137);
            *a4 = v15;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
            if ( v27 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
            }
            return 0LL;
          }
        }
        else
        {
          v17 = 0LL;
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3465;
        goto LABEL_19;
      }
      v20 = *(_QWORD **)(v13 + 8);
      v13 = (__int64)(v20 - 1);
      if ( v20 == v14 )
        v13 = 0LL;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3456;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return 3223192324LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3417;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
    return 3223192323LL;
  }
}
