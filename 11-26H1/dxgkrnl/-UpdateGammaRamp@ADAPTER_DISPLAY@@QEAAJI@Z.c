/*
 * XREFs of ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403AA144
 * Callers:
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1401A4314 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ @ 0x14031E4B8 (-ReleasePendingVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140360580 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1403A90F8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1403A9C48 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z @ 0x14042B790 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140430DD8 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1400072D4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1400A0890 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1401A119C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1402DC2EC (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14030EB8C (-ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x14030ECA4 (-SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z.c)
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1403AA994 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGammaRamp(DXGADAPTER **this, unsigned int a2)
{
  __int64 v2; // r12
  DXGADAPTER *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  char v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v13; // r8
  unsigned int v14; // r15d
  struct DXGK_GAMMA_ADJUSTMENT *v15; // r15
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v20; // rcx
  unsigned int v21; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7644;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 7644LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this[2] + 622) )
  {
    v4 = this[16];
    v5 = 4024 * v2;
    if ( *((_DWORD *)v4 + 1006 * v2 + 184) == 1 && (v6 = *(_QWORD *)((char *)v4 + v5 + 744)) != 0
      || (v6 = *(_QWORD *)((char *)v4 + v5 + 728), v7 = 0LL, v6) )
    {
      v15 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v6 + 8 * v2 + 1704);
      v7 = *(_QWORD *)(v6 + 8 * v2 + 1576);
      if ( v15 )
      {
        v17 = *(_QWORD *)(v6 + 8 * v2 + 1576);
        if ( v7 && *(_DWORD *)(v7 + 16) == 1 )
          v17 = 0LL;
        v18 = operator new(0x30uLL, 0x4B677844u, 256LL);
        v7 = v18;
        if ( !v18 )
        {
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 7693;
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
            v6,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v11) = -1073741801;
          return (unsigned int)v11;
        }
        *(_WORD *)(v18 + 40) = 0;
        *(_QWORD *)v18 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
        *(_QWORD *)v18 = &DXGK_GAMMA_RAMP::`vftable';
        *(_DWORD *)(v18 + 8) = 1;
        *(_DWORD *)(v18 + 16) = 1;
        *(_QWORD *)(v18 + 24) = 0LL;
        *(_QWORD *)(v18 + 32) = 0LL;
        if ( v17 )
        {
          inited = DXGK_GAMMA_RAMP::Initialize(
                     (DXGK_GAMMA_RAMP *)v18,
                     (enum _D3DDDI_GAMMARAMP_TYPE)*(_DWORD *)(v17 + 16),
                     *(const void **)(v17 + 32));
        }
        else
        {
          LODWORD(v11) = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v18, D3DDDI_GAMMARAMP_RGB256x3x16, 0LL);
          if ( (int)v11 < 0 )
            goto LABEL_42;
          inited = ColorSpaceTransformInitIdentityTransform(v7 + 16);
        }
        LODWORD(v11) = inited;
        if ( inited < 0 )
          goto LABEL_42;
        LODWORD(v11) = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                         v20,
                         (const struct DXGK_GAMMA_RAMP *)v17,
                         (struct DXGK_GAMMA_RAMP *)v7,
                         v15);
        if ( (int)v11 < 0 )
          goto LABEL_42;
      }
      else if ( v7 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      }
    }
    v8 = 0;
    if ( *((_BYTE *)this + 291) )
    {
      if ( DXGADAPTER::IsFullWDDMAdapter(this[2]) )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(v9 + 3168) + 756LL);
        if ( !_bittest(&v10, v2) )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7759;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"IsCoreResourceExclusiveOwner()",
              7759LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          LODWORD(v11) = ADAPTER_RENDER::SuspendScheduler(*((DXGADAPTER ***)this[2] + 396), 0, 0LL);
          if ( (int)v11 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 7767;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to suspend scheduler for setting gammaramp in adapter 0x%I64x",
              (__int64)this,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_13;
          }
          v8 = 1;
        }
      }
    }
    LODWORD(v11) = DmmUpdateGammaRampOnVidPnSource(this[2], v2, (const struct DXGK_GAMMA_RAMP *)v7);
    v21 = 0;
    v13 = 0LL;
    v14 = 1;
    while ( (int)DmmEnumClientVidPnPathTargetsFromSource(this[2], v2, v13, &v21) >= 0 && v21 != -1 )
    {
      v16 = MonitorNotifyDXGIGammaRampChange(this[2], v21);
      v11 = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 7798;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
          v11,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v13 = v14++;
    }
    if ( v8 )
      ADAPTER_RENDER::ResumeScheduler(*((ADAPTER_RENDER **)this[2] + 396), 0, 0);
LABEL_13:
    if ( !v7 )
      return (unsigned int)v11;
LABEL_42:
    ReferenceCounted::Release((ReferenceCounted *)v7);
    return (unsigned int)v11;
  }
  return 0LL;
}
