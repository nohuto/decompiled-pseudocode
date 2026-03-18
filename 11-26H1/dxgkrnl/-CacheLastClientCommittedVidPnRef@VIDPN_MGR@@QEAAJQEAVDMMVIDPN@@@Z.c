/*
 * XREFs of ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1402D6908
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x14025A990 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x14025E8CC (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4CC4 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14002C164 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14002C1A0 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14002D768 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14002DC2C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x14003B5AC (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x14004B460 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x14004C270 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?Remove@?$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z @ 0x140050688 (-Remove@-$Set@VDMMVIDPN@@@@QEAAPEAVDMMVIDPN@@QEBV2@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140053EAC (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x1400542F0 (-DivideAndRound@@YA_K_K0@Z.c)
 *     DpiMiracastHandleDisplayConfigChange @ 0x140087DD0 (DpiMiracastHandleDisplayConfigChange.c)
 *     ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x140193238 (-GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ.c)
 *     ?SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1402D6CC0 (-SetPrimaryPath@ADAPTER_DISPLAY@@QEAAXIIW4_DXGK_PRIMARY_TARGET_TYPE@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1402DB730 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CacheLastClientCommittedVidPnRef(VIDPN_MGR *this, struct DMMVIDPN *const a2)
{
  int v4; // r13d
  int v6; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPath; // rbx
  char *v8; // rdx
  char *v9; // rbx
  struct DMMVIDPN *v10; // rcx
  __int64 v11; // rax
  int v12; // edi
  unsigned int v13; // ebx
  __int64 v14; // rdi
  unsigned int PathSourceFromTarget; // eax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rax
  char *v21; // r14
  bool v22; // zf
  UINT cx; // r15d
  UINT cy; // r12d
  char *v25; // rax
  struct DMMVIDPNTARGETMODESET *v26; // rax
  DMMVIDPNSOURCEMODE *v27; // r14
  __int64 v28; // rcx
  unsigned __int64 PresentationVSync; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  struct DMMVIDPNTARGETMODESET *v31; // [rsp+70h] [rbp+8h] BYREF
  struct DMMVIDPNTARGETMODESET *v32; // [rsp+78h] [rbp+10h] BYREF

  _InterlockedAdd((volatile signed __int32 *)a2 + 8, 1u);
  v4 = 0;
  if ( Set<DMMVIDPN>::Remove((__int64)this + 136, (__int64)a2) )
  {
    if ( !*((_QWORD *)this + 1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 432LL) = *((_QWORD *)a2 + 17);
    if ( *((_QWORD *)a2 + 17) )
    {
      v6 = *((_DWORD *)this + 138);
      if ( v6 != -1 && DMMVIDPNTOPOLOGY::IsTargetInTopology((struct DMMVIDPN *const)((char *)a2 + 96), v6) )
      {
        if ( !*((_QWORD *)this + 1) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 68;
        }
        v13 = *((_DWORD *)this + 138);
        v14 = *((_QWORD *)this + 1);
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((struct DMMVIDPN *const)((char *)a2 + 96), v13);
        v16 = 0LL;
        v17 = v13;
        v18 = PathSourceFromTarget;
        v19 = v14;
        goto LABEL_23;
      }
      MostImportantPath = DMMVIDPNTOPOLOGY::GetMostImportantPath((struct DMMVIDPN *const)((char *)a2 + 96));
      if ( !MostImportantPath )
        goto LABEL_10;
      if ( !*((_QWORD *)this + 1) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v16 = 2LL;
      v17 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 12) + 24LL);
      v18 = *(unsigned int *)(*((_QWORD *)MostImportantPath + 11) + 24LL);
    }
    else
    {
      if ( !*((_QWORD *)this + 1) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 68;
      }
      v17 = 0xFFFFFFFFLL;
      v16 = 3LL;
      v18 = 0xFFFFFFFFLL;
    }
    v19 = *((_QWORD *)this + 1);
LABEL_23:
    ADAPTER_DISPLAY::SetPrimaryPath(v19, v18, v17, v16);
LABEL_10:
    v8 = (char *)a2 + 120;
    v9 = 0LL;
    v10 = (struct DMMVIDPN *)*((_QWORD *)a2 + 15);
    if ( v10 != (struct DMMVIDPN *const)((char *)a2 + 120) )
      v9 = (char *)v10 - 8;
    v11 = *((_QWORD *)a2 + 17);
    if ( v11 == 1 )
    {
      if ( !v9 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5779;
      }
      v12 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 12) + 96LL) + 84LL) == 15 )
        v12 = 8;
    }
    else
    {
      if ( v11 != 2 )
      {
        while ( v9 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 12) + 96LL) + 84LL) == 15 )
          {
            v12 = 1;
            cy = 0;
            cx = 0;
            goto LABEL_51;
          }
          v25 = (char *)*((_QWORD *)v9 + 1);
          v9 = v25 - 8;
          if ( v25 == v8 )
            v9 = 0LL;
        }
        goto LABEL_18;
      }
      v20 = (char *)*((_QWORD *)v9 + 1);
      v21 = v20 - 8;
      if ( v20 == v8 )
        v21 = 0LL;
      if ( !v21 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5789;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 12) + 96LL) + 84LL) == 15 )
      {
        v22 = *((_QWORD *)v9 + 11) == *((_QWORD *)v21 + 11);
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v21 + 12) + 96LL) + 84LL) != 15 )
        {
LABEL_18:
          auto_rc<DMMVIDPN>::reset((__int64 *)this + 16, (__int64)a2);
          return 0LL;
        }
        v22 = *((_QWORD *)v9 + 11) == *((_QWORD *)v21 + 11);
        v9 = v21;
      }
      v12 = 2;
      if ( !v22 )
        v12 = 4;
    }
    if ( v12 )
    {
      cx = 0;
      cy = 0;
      if ( !v9 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 5825;
      }
LABEL_51:
      v26 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v9 + 11));
      v32 = v26;
      v27 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v26 + 18);
      if ( v27 && *((_DWORD *)v27 + 18) != 2 )
      {
        cx = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*((DMMVIDPNSOURCEMODE **)v26 + 18))->PrimSurfSize.cx;
        cy = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v27)->PrimSurfSize.cy;
      }
      v31 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)v9 + 12));
      v28 = *((_QWORD *)v31 + 18);
      if ( v28 )
      {
        PresentationVSync = (unsigned __int64)DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v28 + 72));
        v4 = DivideAndRound((unsigned int)PresentationVSync, HIDWORD(PresentationVSync));
      }
      ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
      DpiMiracastHandleDisplayConfigChange(*((_QWORD *)ContainingAdapter + 27), v12, cx, cy, v4);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v31, 0LL);
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v32, 0LL);
    }
    goto LABEL_18;
  }
  WdLogSingleEntry2(2LL, a2, this);
  WdLogGlobalForLineNumber = 5733;
  if ( a2 )
    ReferenceCounted::Release((struct DMMVIDPN *const)((char *)a2 + 24));
  return 3223192323LL;
}
