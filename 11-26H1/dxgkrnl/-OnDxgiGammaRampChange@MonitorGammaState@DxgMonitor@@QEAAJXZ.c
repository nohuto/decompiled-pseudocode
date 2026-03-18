/*
 * XREFs of ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1403AAB80
 * Callers:
 *     ?MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z @ 0x1403AA994 (-MonitorNotifyDXGIGammaRampChange@@YAJPEAXI@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x140007470 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x14005D53C (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1403AADD0 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1403AB1A8 (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::OnDxgiGammaRampChange(DxgMonitor::MonitorGammaState *this)
{
  const struct DXGK_GAMMA_RAMP *v1; // rbx
  int MostCapableColorSpaceTransform; // esi
  __int64 v4; // rax
  struct DXGK_GAMMA_RAMP **v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  ReferenceCounted *v9; // rcx
  enum _D3DDDI_GAMMARAMP_TYPE v10; // [rsp+48h] [rbp+28h] BYREF
  ReferenceCounted *v11; // [rsp+50h] [rbp+30h] BYREF

  v1 = 0LL;
  v10 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v11 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v10);
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL);
    v9 = v11;
    WdLogGlobalForLineNumber = 683;
    if ( v11 )
LABEL_18:
      ReferenceCounted::Release(v9);
    return (unsigned int)MostCapableColorSpaceTransform;
  }
  if ( !*((_QWORD *)this + 18) )
  {
LABEL_5:
    v5 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v11);
    MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(this, v1, v5);
    if ( MostCapableColorSpaceTransform >= 0 )
    {
      if ( !v11 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 718;
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v7 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v6 + 96LL))(v6, v11);
      if ( v11 )
        ReferenceCounted::Release(v11);
      v11 = 0LL;
      if ( v1 )
        ReferenceCounted::Release(v1);
      return v7;
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 713;
    if ( v11 )
      ReferenceCounted::Release(v11);
    v11 = 0LL;
    if ( v1 )
    {
      v9 = v1;
      goto LABEL_18;
    }
    return (unsigned int)MostCapableColorSpaceTransform;
  }
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v10, (DxgMonitor::MonitorGammaState *)((char *)this + 96));
  v4 = operator new(0x30uLL, 0x4D677844u, 256LL);
  v1 = (const struct DXGK_GAMMA_RAMP *)v4;
  if ( v4 )
  {
    *(_WORD *)(v4 + 40) = 0;
    *(_QWORD *)v4 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v4 + 16) = 1;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    DXGK_GAMMA_RAMP::Initialize(
      (DXGK_GAMMA_RAMP *)v4,
      (const struct _D3DKMDT_GAMMA_RAMP *)(*((_QWORD *)this + 18) + 16LL));
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v10);
    goto LABEL_5;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 699;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v10);
  if ( v11 )
    ReferenceCounted::Release(v11);
  return 3221225495LL;
}
