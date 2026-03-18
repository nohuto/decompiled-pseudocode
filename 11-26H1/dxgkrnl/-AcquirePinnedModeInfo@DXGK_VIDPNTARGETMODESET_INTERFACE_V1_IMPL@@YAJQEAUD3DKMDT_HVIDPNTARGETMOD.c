/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1402E2060
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x14004A2E8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1402E269C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DMMVIDPNTARGETMODE *PinnedMode; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDPNTARGETMODE *v12; // rsi
  __int64 Instance; // rdi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct DMMVIDPNTARGETMODE *(__fastcall *v26)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v27; // [rsp+28h] [rbp-28h]
  int v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h]
  char v30; // [rsp+40h] [rbp-10h]

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 28, 1u);
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 7011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerEnter);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 7011);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = a2;
  WdLogGlobalForLineNumber = 1185;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173005 )
    {
      v27 = 0;
      v26 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      if ( !*((_BYTE *)this + 136) )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 638;
        v23 = -1071774944;
LABEL_36:
        WdLogSingleEntry2(2LL, this, v23);
        WdLogGlobalForLineNumber = 1239;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
        return (unsigned int)v23;
      }
      PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(this);
      v12 = PinnedMode;
      if ( PinnedMode )
      {
        Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance((__int64)PinnedMode);
        if ( Instance )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          v14 = Instance + 16;
          *(_DWORD *)v14 = *((_DWORD *)v12 + 6);
          *(_OWORD *)(v14 + 8) = *(_OWORD *)((char *)v12 + 72);
          *(_OWORD *)(v14 + 24) = *(_OWORD *)((char *)v12 + 88);
          *(_OWORD *)(v14 + 40) = *(_OWORD *)((char *)v12 + 104);
          *(_QWORD *)(v14 + 56) = *((_QWORD *)v12 + 15);
          *(_DWORD *)(v14 + 64) = *((_DWORD *)v12 + 32);
          if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(v12) )
          {
            *(_QWORD *)(v14 + 68) = *((_QWORD *)v12 + 18);
          }
          else
          {
            v15 = *((_QWORD *)this + 14);
            if ( !*(_QWORD *)(v15 + 40) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 68;
            }
            v16 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v15 + 40) + 64LL) + 48);
            if ( !*(_QWORD *)(v16 + 8) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 68;
            }
            if ( (*(_DWORD *)(*(_QWORD *)(v16 + 8) + 24LL) & 0x20) != 0 )
              v17 = -2;
            else
              v17 = -1;
            *(_DWORD *)(v14 + 72) = v17;
            *(_DWORD *)(v14 + 68) = v17;
          }
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          if ( !v14 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 1245;
          }
          *(_QWORD *)a2 = v14;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
          if ( v30 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
          }
          return 0LL;
        }
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 676;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v23 = -1073741801;
        goto LABEL_36;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v11, v10) + 24) = &v26;
      WdLogGlobalForLineNumber = 657;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(&v26, v21) + 24) = this;
      WdLogGlobalForLineNumber = 1228;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
      return 1075708679LL;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1209;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
      return 3223192329LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 1192;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
