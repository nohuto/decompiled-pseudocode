/*
 * XREFs of ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1402E1A70
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x140046264 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x14004B4A4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1402E1E54 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h]
  char v25; // [rsp+30h] [rbp-40h]
  __int128 v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-28h]
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h]
  __int64 v30; // [rsp+B0h] [rbp+40h] BYREF

  v23 = -1;
  v24 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 6011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 6011);
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v7 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v7 )
    {
      v8 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
      if ( v8 && *(_DWORD *)v8 == 305419896 )
      {
        v11 = *(_QWORD *)(v8 + 8);
        if ( !v11 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1085;
        }
        if ( DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::ContainsByReference(
               v7 + 32,
               v11) )
        {
          DWORD2(v26) = 0;
          *(_QWORD *)&v26 = DMMVIDPNTARGETMODESET::GetNextMode;
          HIDWORD(v26) = HIDWORD(v24);
          v27 = v11;
          v28 = v26;
          v30 = 0LL;
          v29 = v11;
          v12 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v7,
                  &v28,
                  &v30);
          v15 = v12;
          if ( v12 == -1071774902 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = v7;
            WdLogGlobalForLineNumber = 1111;
            if ( v30 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1114;
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
            if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v18, (__int64)&EventProfilerExit);
            return 1075708748LL;
          }
          else if ( v12 < 0 )
          {
            WdLogSingleEntry2(7LL, v8, v7);
            WdLogGlobalForLineNumber = 1122;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
            if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
            return v15;
          }
          else
          {
            v16 = v30;
            if ( !v30 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1128;
            }
            *(_QWORD *)&a3->Id = v16;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
            if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit);
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v8, v7);
          WdLogGlobalForLineNumber = 1092;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
          if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
          return 3223192368LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1073;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
        if ( v25 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v9, (__int64)&EventProfilerExit);
        }
        return 3223192337LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1060;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
      if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
      return 3223192329LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    WdLogGlobalForLineNumber = 1039;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
