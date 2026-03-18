/*
 * XREFs of ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1403AB360
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  char *v5; // r8
  char *v6; // rdx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  char v16; // [rsp+30h] [rbp-10h]

  v14 = -1;
  v15 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 6022;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v14, 6022);
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      if ( *((_DWORD *)a2 - 4) == 305419896 )
      {
        v5 = (char *)*((_QWORD *)a2 - 1);
        if ( v5 )
        {
          v6 = 0LL;
          v7 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
          if ( v7 != (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
            v6 = (char *)v7 - 8;
          while ( v6 )
          {
            if ( v6 == v5 )
              goto LABEL_14;
            v11 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v6 + 1);
            v6 = (char *)v11 - 8;
            if ( v11 == (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
              v6 = 0LL;
          }
          WdLogSingleEntry2(2LL, a2 - 4, this);
          WdLogGlobalForLineNumber = 2144;
          v8 = -1071774928;
        }
        else
        {
LABEL_14:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)a2 + 44));
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2 - 4);
          v8 = 0;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2128;
        v8 = -1071774951;
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
      if ( v16 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
      }
      return v8;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2627;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
      if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2613;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
    if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
    return 3223192345LL;
  }
}
