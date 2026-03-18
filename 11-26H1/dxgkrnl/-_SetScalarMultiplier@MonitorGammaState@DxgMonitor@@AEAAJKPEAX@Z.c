/*
 * XREFs of ?_SetScalarMultiplier@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027B3D0
 * Callers:
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027ADFC (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14002DDD0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??4?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAAEAV0@AEAV0@@Z @ 0x14002E0D0 (--4-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x14005D53C (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1403AADD0 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_SetScalarMultiplier(
        DxgMonitor::MonitorGammaState *this,
        unsigned int a2,
        float *a3)
{
  unsigned int v6; // edi
  const struct DXGK_GAMMA_RAMP *v7; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  struct DXGK_GAMMA_RAMP **v10; // rax
  __int64 v11; // rax
  ReferenceCounted *v12; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-8h] BYREF
  ReferenceCounted *v14; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 < 4 )
    return 3221225507LL;
  v6 = 0;
  if ( !a3 )
    return 3221225485LL;
  if ( !*((_BYTE *)this + 80) )
    return 3221225659LL;
  if ( *((float *)this + 21) > *a3 || *a3 > *((float *)this + 22) )
    return 3221225485LL;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v13, (DxgMonitor::MonitorGammaState *)((char *)this + 152));
  *((float *)this + 50) = *a3;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v13);
  v7 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v13, (DxgMonitor::MonitorGammaState *)((char *)this + 96));
  v8 = *((_QWORD *)this + 18);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 16) != 4 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 207;
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v13);
      v9 = -1073741811;
LABEL_15:
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v14, 0LL);
      auto_rc<DXGK_GAMMA_RAMP>::reset(&v12, 0LL);
      return (unsigned int)v9;
    }
    *(_DWORD *)(*(_QWORD *)(v8 + 32) + 48LL) = *((_DWORD *)this + 50);
    auto_rc<DXGK_GAMMA_RAMP>::operator=(&v12, (ReferenceCounted **)this + 18);
    v7 = v12;
  }
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v13);
  if ( v7 )
  {
    v10 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v14);
    v9 = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(this, v7, v10);
    if ( v9 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 221;
      goto LABEL_15;
    }
    if ( !v14 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 224;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
    v6 = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v11 + 96LL))(v11, v14);
  }
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v14, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v12, 0LL);
  return v6;
}
