/*
 * XREFs of ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x140383C90
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x14038275C (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ??8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z @ 0x140039608 (--8@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@0@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x14003B508 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1400468D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z @ 0x140046C5C (-GetTargetFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z @ 0x14004BD5C (-GetSourceFromId@DMMVIDPN@@QEAAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14006E29C (-FindBestMatch@DMMVIDPNTARGETMODESET@@QEBAPEBVDMMVIDPNTARGETMODE@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1402DB240 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DC840 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x140384408 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PinModalityOnPathInVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *a3)
{
  DMMVIDPN *Container; // rax
  __int64 v7; // r14
  __int64 v8; // r12
  int v9; // edx
  DMMVIDPNTARGET *SourceFromId; // rax
  DMMVIDPNSOURCEMODE **v11; // rbx
  int *v12; // rsi
  unsigned int v13; // edx
  int NumPathsFromSource; // eax
  unsigned int v15; // r15d
  DMMVIDPNSOURCEMODE *v17; // rbp
  struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v19; // rax
  unsigned int v20; // ebx
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  const struct DMMVIDPNSOURCEMODE *v22; // rbp
  int v23; // eax
  DMMVIDPNTARGET *TargetFromId; // rax
  struct DMMVIDPNTARGETMODESET *v25; // rbx
  const struct DMMVIDPNTARGETMODE *v26; // rsi
  int v27; // eax
  unsigned int v28; // r8d
  int v29; // eax
  unsigned __int64 v30; // [rsp+70h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v31; // [rsp+78h] [rbp+10h] BYREF
  DMMVIDPN *v32; // [rsp+80h] [rbp+18h]

  if ( !DXGFASTMUTEX::IsOwner((VIDPN_MGR *)((char *)this + 40)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8285;
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8288;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8289;
  }
  Container = (DMMVIDPN *)ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v7 = *(unsigned int *)a3;
  v8 = *((unsigned int *)a3 + 1);
  v9 = *(_DWORD *)a3;
  v32 = Container;
  SourceFromId = DMMVIDPN::GetSourceFromId(Container, v9);
  v31 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(SourceFromId);
  v30 = 0LL;
  v11 = (DMMVIDPNSOURCEMODE **)v31;
  v12 = (int *)((char *)a3 + 368);
  NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v13, &v30);
  v15 = NumPathsFromSource;
  if ( NumPathsFromSource >= 0 )
  {
    if ( !v30 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8329;
    }
    v17 = v11[18];
    if ( v17 )
    {
      GraphicsInfo = (struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)DMMVIDPNSOURCEMODE::GetGraphicsInfo(v11[18]);
      if ( !operator==(GraphicsInfo, (_DWORD *)a3 + 92) )
      {
        v19 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v17);
        WdLogSingleEntry3(2LL, v19, (char *)a3 + 368, v7);
        WdLogGlobalForLineNumber = 8345;
        v20 = -1071774960;
LABEL_20:
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, 0LL);
        return v20;
      }
    }
    else
    {
      BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                    (DMMVIDPNSOURCEMODESET *)v11,
                    *v12,
                    *((_DWORD *)a3 + 93),
                    (enum _D3DDDIFORMAT)*((_DWORD *)a3 + 97),
                    (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*((_DWORD *)a3 + 91));
      v22 = BestMatch;
      if ( !BestMatch )
      {
        WdLogSingleEntry3(2LL, (unsigned int)*v12, *((unsigned int *)a3 + 93), *((int *)a3 + 97));
        WdLogGlobalForLineNumber = 8371;
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 11));
        return 3223192326LL;
      }
      v23 = VIDPN_MGR::PinVidPnSourceMode(this, (struct DMMVIDPNSOURCEMODESET *const)v11, *((_DWORD *)BestMatch + 6), 1);
      v20 = v23;
      if ( v23 < 0 )
      {
        WdLogSingleEntry3(2LL, v22, v7, v23);
        WdLogGlobalForLineNumber = 8386;
        goto LABEL_20;
      }
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v31, 0LL);
    TargetFromId = DMMVIDPN::GetTargetFromId(v32, v8);
    v30 = (unsigned __int64)DMMVIDPNTARGET::AcquireCofuncModeSetRef(TargetFromId);
    v25 = (struct DMMVIDPNTARGETMODESET *)v30;
    v26 = DMMVIDPNTARGETMODESET::FindBestMatch(
            (DMMVIDPNTARGETMODESET *)v30,
            (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)((char *)a3 + 408));
    if ( v26 )
    {
      v27 = *((_DWORD *)a3 + 120);
      v28 = *((_DWORD *)v26 + 6);
      *((_DWORD *)v26 + 34) = *((_DWORD *)a3 + 121);
      *((_DWORD *)v26 + 33) = v27;
      v29 = VIDPN_MGR::PinVidPnTargetMode(this, v25, v28, 1);
      v20 = v29;
      if ( v29 >= 0 )
      {
        v20 = 0;
      }
      else
      {
        WdLogSingleEntry3(2LL, v26, v8, v29);
        WdLogGlobalForLineNumber = 8434;
      }
    }
    else
    {
      WdLogSingleEntry4(
        2LL,
        *((unsigned int *)a3 + 105),
        *((unsigned int *)a3 + 106),
        *((unsigned int *)a3 + 107),
        *((unsigned int *)a3 + 108));
      WdLogGlobalForLineNumber = 8416;
      v20 = -1071774970;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v30, 0LL);
    return v20;
  }
  WdLogSingleEntry3(2LL, (unsigned int)v7, a2, NumPathsFromSource);
  WdLogGlobalForLineNumber = 8323;
  if ( v11 )
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 11));
  return v15;
}
