/*
 * XREFs of ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1403857C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x140385C18 (--$AcquireDdiEnumeratorCachedPathInfo@V-$binder2nd@V-$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireNextPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rcx
  char *v15; // r8
  char *v16; // rdx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // [rsp+20h] [rbp-50h] BYREF
  __int64 v30; // [rsp+28h] [rbp-48h]
  char v31; // [rsp+30h] [rbp-40h]
  __int128 v32; // [rsp+38h] [rbp-38h]
  __int64 v33; // [rsp+48h] [rbp-28h]
  __int128 v34; // [rsp+50h] [rbp-20h] BYREF
  char *v35; // [rsp+60h] [rbp-10h]
  __int64 v36; // [rsp+A0h] [rbp+30h] BYREF

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 33, 1u);
  v29 = -1;
  v30 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 7037;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerEnter);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v29, 7037);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = a2;
  v10[4] = this;
  v10[5] = a3;
  WdLogGlobalForLineNumber = 2557;
  if ( a3 )
  {
    *(_QWORD *)&a3->VidPnSourceId = 0LL;
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v11 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
      if ( v11 && *(_DWORD *)v11 == 305419896 )
      {
        v15 = *(char **)(v11 + 8);
        if ( v15 )
        {
          v16 = 0LL;
          v17 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
          if ( v17 != (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
            v16 = (char *)v17 - 8;
          while ( v16 )
          {
            if ( v16 == v15 )
            {
              v33 = *(_QWORD *)(v11 + 8);
              *(_QWORD *)&v32 = DMMVIDPNTOPOLOGY::GetNextPath;
              HIDWORD(v32) = HIDWORD(v30);
              DWORD2(v32) = 0;
              v36 = 0LL;
              v35 = v15;
              v34 = v32;
              v18 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
                      this,
                      &v34,
                      &v36,
                      1LL);
              v21 = v18;
              if ( v18 == -1071774937 )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19) + 24) = this;
                WdLogGlobalForLineNumber = 2636;
                if ( v36 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 2639;
                }
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
                if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
                return 1075708748LL;
              }
              else if ( v18 < 0 )
              {
                WdLogSingleEntry3(2LL, v11, this, v18);
                WdLogGlobalForLineNumber = 2648;
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
                if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v27, (__int64)&EventProfilerExit);
                return v21;
              }
              else
              {
                v23 = v36;
                if ( !v36 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 2654;
                }
                *(_QWORD *)&a3->VidPnSourceId = v23;
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
                if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
                return 0LL;
              }
            }
            v25 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v16 + 1);
            v16 = (char *)v25 - 8;
            if ( v25 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
              v16 = 0LL;
          }
        }
        else
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2611;
        }
        WdLogSingleEntry2(2LL, v11, this);
        WdLogGlobalForLineNumber = 2618;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
        if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
        return 3223192368LL;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2598;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
        if ( v31 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
        }
        return 3223192345LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2585;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
      if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
      return 3223192320LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    WdLogGlobalForLineNumber = 2564;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
