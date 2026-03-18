/*
 * XREFs of ?GetTopology@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@PEAPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x14039DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::GetTopology(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ **a3,
        const struct _DXGK_VIDPNTOPOLOGY_INTERFACE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h]
  char v17; // [rsp+30h] [rbp-10h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 7042;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 7042);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v9[3] = this;
  v9[4] = a2;
  v9[5] = a3;
  WdLogGlobalForLineNumber = 3283;
  if ( a2 )
  {
    if ( a3 )
    {
      *(_QWORD *)a2 = 0LL;
      *a3 = 0LL;
      if ( this && *((_DWORD *)this + 16) == 1833172997 )
      {
        v10 = *(struct D3DKMDT_HVIDPNTOPOLOGY__ **)(*((_QWORD *)this + 6) + 424LL);
        *(_QWORD *)a2 = ((unsigned __int64)this + 96) & -(__int64)((DXGK_VIDPN_INTERFACE_V1_IMPL *)((char *)this + 289) != 0LL);
        *a3 = v10;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
        if ( v17 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
        }
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3317;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
        if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
        return 3223192323LL;
      }
    }
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 3298;
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 3290;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
  return 3221225485LL;
}
