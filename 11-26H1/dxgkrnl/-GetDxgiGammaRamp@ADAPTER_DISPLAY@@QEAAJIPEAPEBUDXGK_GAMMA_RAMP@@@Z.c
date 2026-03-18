/*
 * XREFs of ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403D0C7C
 * Callers:
 *     ?GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403D0C50 (-GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1400072D4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1400A0890 (ColorSpaceTransformInitIdentityTransform.c)
 *     ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1401A119C (-AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUS.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDxgiGammaRamp(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        const struct DXGK_GAMMA_RAMP **a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  __int64 v7; // rcx
  int SourceConnectedToTargetInClientVidPn; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  struct DXGK_GAMMA_ADJUSTMENT *v13; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  int inited; // eax
  ADAPTER_DISPLAY *v18; // rcx
  __int64 v19; // [rsp+28h] [rbp-50h]
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF

  v4 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7983;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 7983LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7984;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != ppDxgiGammaRamp", 7984LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v7 + 2488) )
  {
    v20 = 0;
    SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn((_QWORD *)v7, v4, &v20);
    if ( SourceConnectedToTargetInClientVidPn < 0 )
    {
      WdLogSingleEntry2(2LL, v4, *((_QWORD *)this + 2));
      v19 = *((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 8003;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Could not find SourceID for TargetId 0x%I64x on adapter 0x%I64x!",
        v4,
        v19,
        0LL,
        0LL,
        0LL);
      return (unsigned int)SourceConnectedToTargetInClientVidPn;
    }
    if ( v20 == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8006;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
        8006LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = *((_QWORD *)this + 16);
    v10 = 4024LL * v20;
    if ( *(_DWORD *)(v10 + v9 + 736) == 1 && (v11 = *(_QWORD *)(v10 + v9 + 744)) != 0 )
    {
      v12 = *(_QWORD *)(v10 + v9 + 744);
    }
    else
    {
      v11 = *(_QWORD *)(v10 + v9 + 728);
      v12 = v11;
      if ( !v11 )
      {
LABEL_15:
        *a3 = (const struct DXGK_GAMMA_RAMP *)v6;
        return (unsigned int)SourceConnectedToTargetInClientVidPn;
      }
    }
    v13 = *(struct DXGK_GAMMA_ADJUSTMENT **)(v11 + 8LL * v20 + 1704);
    v6 = *(_QWORD *)(v12 + 8LL * v20 + 1576);
    if ( !v13 )
    {
      if ( v6 )
        _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      goto LABEL_15;
    }
    v15 = *(_QWORD *)(v12 + 8LL * v20 + 1576);
    if ( v6 && *(_DWORD *)(v6 + 16) == 1 )
      v15 = 0LL;
    v16 = operator new(0x30uLL, 0x4B677844u, 256LL);
    v6 = v16;
    if ( !v16 )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 8041;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)-1073741801;
    }
    *(_WORD *)(v16 + 40) = 0;
    *(_QWORD *)v16 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v16 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v16 + 8) = 1;
    *(_DWORD *)(v16 + 16) = 1;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    if ( v15 )
    {
      inited = DXGK_GAMMA_RAMP::Initialize(
                 (DXGK_GAMMA_RAMP *)v16,
                 (enum _D3DDDI_GAMMARAMP_TYPE)*(_DWORD *)(v15 + 16),
                 *(const void **)(v15 + 32));
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = DXGK_GAMMA_RAMP::Initialize(
                                               (DXGK_GAMMA_RAMP *)v16,
                                               D3DDDI_GAMMARAMP_RGB256x3x16,
                                               0LL);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_32;
      inited = ColorSpaceTransformInitIdentityTransform((v6 + 16) & -(__int64)(v6 != 0));
    }
    SourceConnectedToTargetInClientVidPn = inited;
    if ( inited >= 0 )
    {
      SourceConnectedToTargetInClientVidPn = ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
                                               v18,
                                               (const struct DXGK_GAMMA_RAMP *)v15,
                                               (struct DXGK_GAMMA_RAMP *)v6,
                                               v13);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_15;
    }
LABEL_32:
    ReferenceCounted::Release((ReferenceCounted *)v6);
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return 0LL;
}
