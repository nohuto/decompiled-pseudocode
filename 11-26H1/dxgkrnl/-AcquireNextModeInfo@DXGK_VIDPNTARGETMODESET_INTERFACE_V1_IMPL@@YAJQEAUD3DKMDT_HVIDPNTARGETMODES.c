/*
 * XREFs of ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x1402E1650
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAAEQEBVDMMVIDPNTARGETMODE@@@Z @ 0x140046264 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@V.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x14004B4A4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1402E1E54 (--$AcquireDdiEnumeratorCachedModeInfo@V-$binder2nd@V-$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVID.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // esi
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-50h] BYREF
  __int64 v28; // [rsp+28h] [rbp-48h]
  char v29; // [rsp+30h] [rbp-40h]
  __int128 v30; // [rsp+38h] [rbp-38h]
  __int64 v31; // [rsp+48h] [rbp-28h]
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h]
  __int64 v34; // [rsp+A0h] [rbp+30h] BYREF

  _InterlockedAdd((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 31, 1u);
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 7010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v7, (__int64)&EventProfilerEnter);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v27, 7010);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = a2;
  v10[4] = this;
  v10[5] = a3;
  WdLogGlobalForLineNumber = 1049;
  if ( a3 )
  {
    *(_QWORD *)&a3->Id = 0LL;
    v11 = ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle((__int64)this);
    if ( v11 )
    {
      v12 = (unsigned __int64)(a2 - 4) & -(__int64)(a2 != 0LL);
      if ( v12 && *(_DWORD *)v12 == 305419896 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( !v13 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1101;
        }
        if ( DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::ContainsByReference(
               v11 + 32,
               v13) )
        {
          DWORD2(v30) = 0;
          *(_QWORD *)&v30 = DMMVIDPNTARGETMODESET::GetNextMode;
          HIDWORD(v30) = HIDWORD(v28);
          v31 = v13;
          v32 = v30;
          v34 = 0LL;
          v33 = v13;
          v14 = DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
                  v11,
                  &v32,
                  &v34);
          v17 = v14;
          if ( v14 == -1071774902 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15) + 24) = v11;
            WdLogGlobalForLineNumber = 1127;
            if ( v34 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1130;
            }
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
            if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
            return 1075708748LL;
          }
          else if ( v14 < 0 )
          {
            WdLogSingleEntry3(2LL, v12, v11, v14);
            WdLogGlobalForLineNumber = 1138;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
            if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
            return v17;
          }
          else
          {
            v18 = v34;
            if ( !v34 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 1144;
            }
            *(_QWORD *)&a3->Id = v18;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
            if ( v29 )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                McTemplateK0q_EtwWriteTransfer(v19, (__int64)&EventProfilerExit);
            }
            return 0LL;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v12, v11);
          WdLogGlobalForLineNumber = 1108;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
          if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v23, (__int64)&EventProfilerExit);
          return 3223192368LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1090;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
        if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
        return 3223192337LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1077;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, (__int64)&EventProfilerExit);
      return 3223192329LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, a2, this);
    WdLogGlobalForLineNumber = 1056;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
