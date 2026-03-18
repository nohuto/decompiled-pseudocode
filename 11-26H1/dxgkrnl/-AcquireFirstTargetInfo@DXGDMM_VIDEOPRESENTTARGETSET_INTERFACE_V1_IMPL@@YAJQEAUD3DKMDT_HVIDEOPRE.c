/*
 * XREFs of ?AcquireFirstTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1402611E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@@SAPEAVDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@@Z @ 0x140097064 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDEOPRESENTTARGETSET@@PEAUD3DKMDT_HVIDEOPRESENTTARGETSET_.c)
 *     ??$AcquireDdiEnumeratorCachedTargetInfo@V?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENTTARGETSET@@@KM_STL@@PEAPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x14025F84C (--$AcquireDdiEnumeratorCachedTargetInfo@V-$mem_fun_t@PEAVDMMVIDEOPRESENTTARGET@@VDMMVIDEOPRESENT.c)
 */

__int64 __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        const struct _D3DKMDT_VIDEO_PRESENT_TARGET **a3)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct DMMVIDEOPRESENTTARGET *(__fastcall *v14)(DMMVIDEOPRESENTTARGETSET *); // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+28h] [rbp-28h]
  int v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  char v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+68h] [rbp+18h] BYREF

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 6045;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 6045);
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v7 = ExposedViaHandle<DMMVIDEOPRESENTTARGETSET,D3DKMDT_HVIDEOPRESENTTARGETSET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v15 = 0;
      v14 = DMMVIDEOPRESENTTARGETSET::GetFirstTarget;
      v19 = 0LL;
      v9 = DMMVIDEOPRESENTTARGETSET::AcquireDdiEnumeratorCachedTargetInfo<KM_STL::mem_fun_t<DMMVIDEOPRESENTTARGET *,DMMVIDEOPRESENTTARGETSET>>(
             v7,
             (__int64)&v14,
             &v19);
      if ( v9 == -1071774971 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 5553;
        if ( v19 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5556;
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
        if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
        return 1075708747LL;
      }
      else if ( v9 >= 0 )
      {
        v12 = v19;
        if ( !v19 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 5570;
        }
        *(_QWORD *)a2 = v12;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
        if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5564;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
        if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, (__int64)&EventProfilerExit);
        return (unsigned int)v9;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5534;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
      if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
      return 3223192342LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 5517;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
    }
    return 3221225485LL;
  }
}
