/*
 * XREFs of ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1403AADD0
 * Callers:
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027AF14 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027B3D0 (-_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1403AAB80 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1400072D4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x140007470 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14002DDD0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ColorSpaceTransformConvert @ 0x140045540 (ColorSpaceTransformConvert.c)
 *     ColorSpaceTransformCombine @ 0x14004E56C (ColorSpaceTransformCombine.c)
 *     ?put@?$auto_rc@$$CBUDXGK_GAMMA_RAMP@@@@QEAAPEAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x140059CB0 (-put@-$auto_rc@$$CBUDXGK_GAMMA_RAMP@@@@QEAAPEAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1403AB1A8 (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(
        DxgMonitor::MonitorGammaState *this,
        const void **a2,
        struct DXGK_GAMMA_RAMP **a3)
{
  char v6; // r14
  __int64 (__fastcall ***v7)(_QWORD, _QWORD *); // rdi
  __int64 (__fastcall *v8)(_QWORD, _QWORD *); // rbx
  _QWORD *v9; // rax
  int MostCapableColorSpaceTransform; // ebx
  __int64 v11; // rax
  DXGK_GAMMA_RAMP *v12; // rdi
  ReferenceCounted *v13; // rcx
  _DWORD *v14; // rbx
  int v16; // r14d
  enum _D3DDDI_GAMMARAMP_TYPE v17; // [rsp+60h] [rbp+40h] BYREF
  ReferenceCounted *v18; // [rsp+70h] [rbp+50h] BYREF
  ReferenceCounted *v19; // [rsp+78h] [rbp+58h] BYREF

  v6 = 1;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 353;
  }
  *a3 = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))*((_QWORD *)this + 1);
  v18 = 0LL;
  v8 = **v7;
  v9 = auto_rc<DXGK_GAMMA_RAMP const>::put(&v18);
  MostCapableColorSpaceTransform = v8(v7, v9);
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL);
    v13 = v18;
    WdLogGlobalForLineNumber = 364;
LABEL_14:
    if ( !v13 )
      return (unsigned int)MostCapableColorSpaceTransform;
LABEL_28:
    ReferenceCounted::Release(v13);
    return (unsigned int)MostCapableColorSpaceTransform;
  }
  v11 = operator new(0x30uLL, 0x4D677844u, 256LL);
  v12 = (DXGK_GAMMA_RAMP *)v11;
  if ( v11 )
  {
    *(_WORD *)(v11 + 40) = 0;
    *(_QWORD *)v11 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_DWORD *)(v11 + 8) = 1;
    *(_QWORD *)v11 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v11 + 16) = 1;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    v19 = (ReferenceCounted *)v11;
    v17 = D3DDDI_GAMMARAMP_UNINITIALIZED;
    MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v17);
    if ( MostCapableColorSpaceTransform < 0 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 380;
      goto LABEL_25;
    }
    v13 = v18;
    if ( v17 < D3DDDI_GAMMARAMP_MATRIX_3x4 || !v18 || *((_DWORD *)v18 + 4) != 3 )
      v6 = 0;
    if ( !a2 )
    {
      if ( !v18 )
        goto LABEL_13;
      if ( v6 )
      {
        MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(v12, v17, 0LL);
        if ( MostCapableColorSpaceTransform >= 0 )
        {
          MostCapableColorSpaceTransform = ColorSpaceTransformConvert(
                                             (const struct _D3DKMDT_GAMMA_RAMP *)(((unsigned __int64)v18 + 16) & -(__int64)(v18 != 0LL)),
                                             (struct _D3DKMDT_GAMMA_RAMP *)(((unsigned __int64)v12 + 16) & -(__int64)(v12 != 0LL)));
          if ( MostCapableColorSpaceTransform >= 0 )
            goto LABEL_12;
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 409;
        }
        else
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 403;
        }
      }
      else
      {
        MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(
                                           v12,
                                           (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v18 + 16));
        if ( MostCapableColorSpaceTransform >= 0 )
          goto LABEL_12;
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 419;
      }
LABEL_32:
      if ( v18 )
        ReferenceCounted::Release(v18);
      v18 = 0LL;
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v19, 0LL);
      return (unsigned int)MostCapableColorSpaceTransform;
    }
    v14 = a2 + 2;
    if ( !v18 )
    {
      MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(v12, (const struct _D3DKMDT_GAMMA_RAMP *)(a2 + 2));
      if ( MostCapableColorSpaceTransform >= 0 )
      {
LABEL_12:
        v13 = v18;
LABEL_13:
        *a3 = v12;
        goto LABEL_14;
      }
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 465;
LABEL_25:
      if ( v18 )
        ReferenceCounted::Release(v18);
      v18 = 0LL;
      v13 = v12;
      goto LABEL_28;
    }
    if ( *v14 != 4 && *v14 != 5 )
    {
      MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(
                                         v12,
                                         (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v18 + 16));
      if ( MostCapableColorSpaceTransform >= 0 )
        goto LABEL_12;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 453;
      goto LABEL_32;
    }
    v16 = DXGK_GAMMA_RAMP::Initialize(v12, (const struct _D3DKMDT_GAMMA_RAMP *)(a2 + 2));
    if ( v16 >= 0 )
    {
      MostCapableColorSpaceTransform = ColorSpaceTransformCombine(
                                         a2 + 2,
                                         (int *)v18 + 4,
                                         ((unsigned __int64)v12 + 16) & -(__int64)(v12 != 0LL));
      if ( MostCapableColorSpaceTransform >= 0 )
        goto LABEL_12;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 441;
      goto LABEL_32;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 433;
    if ( v18 )
      ReferenceCounted::Release(v18);
    v18 = 0LL;
    auto_rc<DXGK_GAMMA_RAMP>::reset(&v19, 0LL);
    return (unsigned int)v16;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 372;
    if ( v18 )
      ReferenceCounted::Release(v18);
    return 3221225495LL;
  }
}
