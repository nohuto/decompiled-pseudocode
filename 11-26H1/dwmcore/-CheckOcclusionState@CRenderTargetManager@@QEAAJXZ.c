/*
 * XREFs of ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180031700
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180031B70 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x180031D40 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x18014ABB0 (-AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?UpdateFastestMonitor@CRenderTargetManager@@AEAA_NXZ @ 0x1801B3CCC (-UpdateFastestMonitor@CRenderTargetManager@@AEAA_NXZ.c)
 *     ?UpdatePrimaryMonitor@CRenderTargetManager@@AEAA_NXZ @ 0x1801C795C (-UpdatePrimaryMonitor@CRenderTargetManager@@AEAA_NXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ @ 0x1801CD4D0 (-UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1801D200C (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetManager::CheckOcclusionState(CRenderTargetManager *this, __int64 a2, __int64 a3)
{
  int v3; // r12d
  __int64 v5; // r13
  unsigned __int8 v6; // r14
  struct IRenderTarget **v7; // rdi
  struct IRenderTarget **i; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 *v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  CComposition *v15; // rcx
  char v16; // bl
  unsigned __int8 CompositorClockBoost; // al
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // bp
  __int64 v22; // r15
  int v23; // eax
  int v24; // ebp
  _QWORD *v25; // rbx
  _QWORD *v26; // rdi
  int v27; // eax
  int v28; // ebp
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0;
  v5 = 0LL;
  v6 = *((_BYTE *)this + 754);
  if ( v6 )
    *((_BYTE *)this + 754) = 0;
  v7 = (struct IRenderTarget **)*((_QWORD *)this + 18);
  for ( i = (struct IRenderTarget **)*((_QWORD *)this + 17); i != v7; ++i )
    CRenderTargetManager::AddRenderTarget(this, *i);
  v9 = *((_QWORD *)this + 17);
  if ( v9 != *((_QWORD *)this + 18) )
    *((_QWORD *)this + 18) = v9;
  v10 = 0LL;
  if ( g_pComposition )
    v10 = *((_QWORD *)g_pComposition + 110);
  *((_QWORD *)this + 92) = v10;
  *((_BYTE *)this + 753) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start,
      a3,
      1u,
      &v29);
  *((_BYTE *)this + 744) = 1;
  v11 = (__int64 *)*((_QWORD *)this + 3);
  v12 = (__int64 *)*((_QWORD *)this + 4);
  while ( v11 != v12 )
  {
    v22 = *v11;
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*v11 + 8) + 56LL))(*v11 + 8, v6);
    v24 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x3Au, 0LL);
      if ( v3 >= 0 )
        v3 = v24;
LABEL_34:
      ++v11;
    }
    else
    {
      if ( v23 != 142213121 )
      {
        *((_BYTE *)this + 753) = 0;
        goto LABEL_34;
      }
      v5 ^= v22;
      ++v11;
    }
  }
  v13 = (_QWORD *)*((_QWORD *)this + 10);
  v14 = (_QWORD *)*((_QWORD *)this + 11);
  while ( v13 != v14 )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v13 + 56LL))(*v13, 0LL);
    v28 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x4Au, 0LL);
      if ( v3 >= 0 )
        v3 = v28;
    }
    else if ( v27 != 142213121 )
    {
      *((_BYTE *)this + 753) = 0;
    }
    ++v13;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  v16 = CCommonRegistryData::m_dwOverlayTestMode == 5;
  if ( *((_BYTE *)this + 745) || *((_BYTE *)this + 746) || *((_BYTE *)this + 756) != v16 )
  {
    CRenderTargetManager::UpdateMPOCaps(this);
    *((_BYTE *)this + 756) = v16;
  }
  if ( *((_BYTE *)this + 745) || *((_BYTE *)this + 747) || !*(_QWORD *)this )
  {
    (*(void (__fastcall **)(CComposition *))(*(_QWORD *)g_pComposition + 72LL))(g_pComposition);
    if ( CRenderTargetManager::UpdatePrimaryMonitor(this) && !CCommonRegistryData::m_compositorClockPolicy )
      *((_BYTE *)g_pComposition + 6460) = 1;
  }
  CompositorClockBoost = CComposition::GetCompositorClockBoost(v15);
  v20 = CompositorClockBoost;
  if ( *((_BYTE *)this + 749) || CompositorClockBoost != *((_BYTE *)this + 755) )
  {
    if ( *(_DWORD *)(v19 + 6484) && (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
      McTemplateU0t_EventWriteTransfer(
        Microsoft_Windows_Dwm_Compositor_Context,
        &ClockBoostChanged,
        CompositorClockBoost);
    *((_BYTE *)this + 744) = 1;
    v25 = (_QWORD *)*((_QWORD *)this + 3);
    v26 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v25 != v26 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v25 + 192LL))(*v25, v20);
      ++v25;
    }
    CRenderTargetManager::EndTargetEnumeration(this);
    *((_BYTE *)this + 749) = 0;
    *((_BYTE *)this + 755) = v20;
  }
  else if ( !*((_BYTE *)this + 745) && !*((_BYTE *)this + 750) && !*((_BYTE *)this + 748) && *((_QWORD *)this + 1) )
  {
    goto LABEL_26;
  }
  if ( CRenderTargetManager::UpdateFastestMonitor(this) && CCommonRegistryData::m_compositorClockPolicy == 1 )
    *((_BYTE *)g_pComposition + 6460) = 1;
LABEL_26:
  if ( v5 != *((_QWORD *)this + 88) )
  {
    *((_QWORD *)this + 88) = v5;
    CRenderTargetManager::NotifyTargetsOfOcclusionChange(this);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop,
      v18,
      1u,
      &v29);
  return (unsigned int)v3;
}
