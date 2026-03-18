/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18023E170
 * Callers:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18014ACF0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D4930 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x18002E388 (McTemplateU0qq_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x180134CBC (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     ?AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ @ 0x180194BF8 (-AnyDesktopPlaneScaling@COverlayContext@@QEBA_NXZ.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x1801D4AF4 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@IEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18023B14C (-EnsureIndependentFlipState@COverlayContext@@IEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ @ 0x1802516BC (-DisableIndependentFlip@CDirectFlipInfo@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(COverlayContext *this)
{
  CDirectFlipInfo *v2; // rcx
  struct COverlayContext::OverlayPlaneInfo *v3; // rbx
  struct COverlayContext::OverlayPlaneInfo *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  bool v9; // cc
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, __int64 *); // rax
  struct _LUID *v12; // rax
  _DWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF

  v2 = (CDirectFlipInfo *)*((_QWORD *)this + 2411);
  if ( v2 )
    CDirectFlipInfo::DisableIndependentFlip(v2);
  v3 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1586);
  v4 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 1587);
  while ( v3 != v4 )
  {
    COverlayContext::EnsureIndependentFlipState(this, v3, 0);
    v3 = (struct COverlayContext::OverlayPlaneInfo *)((char *)v3 + 392);
  }
  if ( !CDeviceManager::s_bXbox )
    *((_QWORD *)this + 2413) = GetCurrentFrameId();
  v5 = *((_QWORD *)this + 7);
  *((_BYTE *)this + 19356) = 1;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 280LL))(v5);
  v7 = (*(__int64 (__fastcall **)(__int64, COverlayContext *))(*(_QWORD *)v6 + 360LL))(v6, this);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x6FAu, 0LL);
  }
  else
  {
    v9 = *((_DWORD *)this + 4824) < 2100;
    *((_BYTE *)this + 45) = 0;
    v10 = *(_QWORD *)v6;
    if ( v9 )
    {
      if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(v10 + 40))(v6) + 904) == 4098 )
        *((_BYTE *)this + 45) = 1;
    }
    else
    {
      v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(v10 + 232);
      v17 = 0;
      v12 = (struct _LUID *)v11(v6, &v18);
      if ( (int)CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v17, *v12) >= 0 )
      {
        v14[0] = v17;
        v15 = &v18;
        v18 = 0LL;
        v16 = 8LL;
        v14[1] = 74;
        if ( (int)D3DKMTQueryAdapterInfo(v14) >= 0 )
          *((_BYTE *)this + 45) = (v18 & 2) != 0;
      }
      CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v17);
    }
    if ( CCommonRegistryData::m_dwOverlayTestMode == 5 )
    {
      *(_QWORD *)this = 1LL;
      *((_DWORD *)this + 2) = 0;
    }
    if ( *((_QWORD *)this + 1587) != *((_QWORD *)this + 1586) || COverlayContext::AnyDesktopPlaneScaling(this) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL) + 48LL))(*((_QWORD *)this + 7) + 8LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0qq_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_OVERLAY_GETCAPS,
        *(unsigned int *)this,
        *((_DWORD *)this + 3));
  }
  return v8;
}
