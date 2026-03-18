/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x14038C7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@?$Set@VDMMVIDPNSOURCEMODE@@@@SAPEAV12@QEBVDMMVIDPNSOURCEMODE@@@Z @ 0x1400462B4 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_SOURCE_MODE@@@-$Set@VDMMVIDPNSOURCEMODE@@@@SAPEA.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x140096638 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // zf
  struct DMMVIDPNTARGETMODE *PinnedMode; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  DMMVIDPNSOURCEMODE *v13; // rdi
  __int64 Instance; // rsi
  int v15; // edx
  __int64 v16; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct DMMVIDPNTARGETMODE *(__fastcall *v24)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-30h] BYREF
  int v25; // [rsp+28h] [rbp-28h]
  int v26; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27; // [rsp+38h] [rbp-18h]
  char v28; // [rsp+40h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 24);
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v26, 7003);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = a2;
  WdLogGlobalForLineNumber = 363;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
    {
      v9 = *((_BYTE *)this + 136) == 0;
      v24 = DMMVIDPNTARGETMODESET::GetPinnedMode;
      v25 = 0;
      if ( v9 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 500;
        v21 = -1071774944;
LABEL_28:
        WdLogSingleEntry2(2LL, this, v21);
        WdLogGlobalForLineNumber = 417;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
        if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
        return (unsigned int)v21;
      }
      PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(this);
      v13 = PinnedMode;
      if ( PinnedMode )
      {
        Instance = Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance((__int64)PinnedMode);
        if ( Instance )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          *(_DWORD *)(Instance + 16) = *((_DWORD *)v13 + 6);
          v15 = *((_DWORD *)v13 + 18);
          *(_DWORD *)(Instance + 20) = v15;
          if ( v15 != 1 )
          {
            if ( v15 == 2 )
            {
              *(enum _D3DKMDT_TEXT_RENDERING_FORMAT *)(Instance + 24) = *DMMVIDPNSOURCEMODE::GetTextInfo(v13);
              goto LABEL_13;
            }
            if ( (unsigned int)(v15 - 3) >= 2 )
            {
              if ( (unsigned int)(v15 - 1) <= 3 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 579;
              }
              goto LABEL_13;
            }
          }
          *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(Instance + 24) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v13);
LABEL_13:
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          if ( Instance == -16 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 423;
          }
          *(_QWORD *)a2 = Instance + 16;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
          if ( v28 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
          }
          return 0LL;
        }
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 538;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v21 = -1073741801;
        goto LABEL_28;
      }
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = &v24;
      WdLogGlobalForLineNumber = 519;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(&v24, v19) + 24) = this;
      WdLogGlobalForLineNumber = 406;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
      return 1075708679LL;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 387;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
      return 3223192328LL;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    WdLogGlobalForLineNumber = 370;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
