/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14037C360
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char *v8; // r9
  char *v9; // r8
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v10; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  char v19; // [rsp+30h] [rbp-10h]

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 7004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 7004);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = a2;
  *(_QWORD *)(v7 + 32) = this;
  WdLogGlobalForLineNumber = 463;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
    {
      if ( *((_DWORD *)a2 - 4) == 305419896 )
      {
        v8 = (char *)*((_QWORD *)a2 - 1);
        if ( v8 )
        {
          v9 = 0LL;
          v10 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
          if ( v10 != (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
            v9 = (char *)v10 - 8;
          while ( v9 )
          {
            if ( v9 == v8 )
              goto LABEL_23;
            v11 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)v9 + 1);
            v9 = (char *)v11 - 8;
            if ( v11 == (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) )
              v9 = 0LL;
          }
          WdLogSingleEntry2(2LL, a2 - 4, this);
          WdLogGlobalForLineNumber = 692;
          v12 = -1071774928;
        }
        else
        {
LABEL_23:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a2 - 4);
          v12 = 0;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 676;
        v12 = -1071774960;
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
      return v12;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 483;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
      if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
      return 3223192328LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 469;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
    return 3223192336LL;
  }
}
