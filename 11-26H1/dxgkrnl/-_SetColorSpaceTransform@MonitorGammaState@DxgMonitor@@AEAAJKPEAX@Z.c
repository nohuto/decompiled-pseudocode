/*
 * XREFs of ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14027AF14
 * Callers:
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027ADFC (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1400072D4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1400076D4 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14002DDD0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??4?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAAEAV0@AEAV0@@Z @ 0x14002E0D0 (--4-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAAEAV0@AEAV0@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ColorSpaceTransformConvert @ 0x140045540 (ColorSpaceTransformConvert.c)
 *     ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x14005D53C (-put@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x140076FC4 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1403AADD0 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1403AB1A8 (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEBAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 *     ?_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z @ 0x1403EA298 (-_IsWireFormatMatch@MonitorGammaState@DxgMonitor@@AEAA_NAEBU_OUTPUT_WIRE_FORMAT@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(
        ReferenceCounted **this,
        unsigned int a2,
        int *a3)
{
  int MostCapableColorSpaceTransform; // ebx
  int v7; // eax
  enum _D3DDDI_GAMMARAMP_TYPE v8; // r15d
  enum _D3DDDI_GAMMARAMP_TYPE v9; // eax
  __int64 v10; // rax
  void **v11; // rbx
  int v12; // r15d
  enum _D3DDDI_GAMMARAMP_TYPE v13; // r13d
  char *v14; // r12
  _DWORD *v15; // r14
  __int64 v16; // rax
  ReferenceCounted *v17; // rdx
  ReferenceCounted *v18; // rdx
  struct DXGK_GAMMA_RAMP **v19; // rax
  float v20; // xmm1_4
  __int64 v21; // rax
  DXGK_GAMMA_RAMP *v23; // [rsp+20h] [rbp-20h] BYREF
  struct _D3DKMDT_GAMMA_RAMP v24; // [rsp+28h] [rbp-18h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v25; // [rsp+90h] [rbp+50h] BYREF
  ReferenceCounted *v26; // [rsp+98h] [rbp+58h] BYREF

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 481;
  }
  v25 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v23 = 0LL;
  v26 = 0LL;
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(
                                     (DxgMonitor::MonitorGammaState *)this,
                                     &v25);
  if ( MostCapableColorSpaceTransform < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 490;
    goto LABEL_55;
  }
  if ( a2 < 0x18040 )
  {
    MostCapableColorSpaceTransform = -1073741789;
    goto LABEL_55;
  }
  if ( (*(unsigned int (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 112LL))(*this) != *a3 )
  {
    v7 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 112LL))(*this);
    WdLogSingleEntry2(3LL, *a3, v7);
    WdLogGlobalForLineNumber = 508;
LABEL_9:
    MostCapableColorSpaceTransform = -1073741811;
    goto LABEL_55;
  }
  if ( !DxgMonitor::MonitorGammaState::_IsWireFormatMatch(
          (DxgMonitor::MonitorGammaState *)this,
          (const struct _OUTPUT_WIRE_FORMAT *)(a3 + 1)) )
  {
    WdLogSingleEntry2(3LL, a3[1], (unsigned int)a3[2]);
    WdLogGlobalForLineNumber = 519;
    goto LABEL_9;
  }
  v8 = v25;
  v9 = a3[3];
  if ( v25 < D3DDDI_GAMMARAMP_MATRIX_3x4 && v9 != v25 && (v25 == D3DDDI_GAMMARAMP_DXGI_1 || v9 > v25) )
  {
    WdLogSingleEntry2(3LL, a3[3], v25);
    WdLogGlobalForLineNumber = 527;
    goto LABEL_9;
  }
  v10 = operator new(0x30uLL, 0x4D677844u, 256LL);
  if ( v10 )
  {
    *(_WORD *)(v10 + 40) = 0;
    *(_QWORD *)v10 = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
    *(_QWORD *)v10 = &DXGK_GAMMA_RAMP::`vftable';
    *(_DWORD *)(v10 + 8) = 1;
    *(_DWORD *)(v10 + 16) = 1;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v23, (ReferenceCounted *)v10);
  v11 = (void **)v23;
  if ( !v23 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 535;
    MostCapableColorSpaceTransform = -1073741801;
    goto LABEL_55;
  }
  v12 = DXGK_GAMMA_RAMP::Initialize(v23, v8, 0LL);
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 542;
LABEL_24:
    MostCapableColorSpaceTransform = v12;
    goto LABEL_55;
  }
  v13 = a3[3];
  *(_QWORD *)&v24.Type = (unsigned int)v13;
  v24.DataSize = GetSizeFromGammaRampType(v13);
  v14 = (char *)(a3 + 4);
  v24.Data.pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)(a3 + 4);
  v15 = v11 + 2;
  v12 = ColorSpaceTransformConvert(
          &v24,
          (struct _D3DKMDT_GAMMA_RAMP *)((unsigned __int64)(v11 + 2) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64)));
  if ( v12 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 561;
    goto LABEL_24;
  }
  v16 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 32LL))(*this);
  if ( (*(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16) & 0x400000) != 0 && *v15 == 2 )
  {
    *((_WORD *)v11[4] + 255) ^= *((_BYTE *)this + 204) == 0;
    *((_BYTE *)this + 204) = *((_BYTE *)this + 204) == 0;
  }
  if ( *v15 == 4 && v13 == (D3DDDI_GAMMARAMP_MATRIX_3x4|D3DDDI_GAMMARAMP_DEFAULT) )
  {
    if ( !*((_DWORD *)v14 + 12289) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v25, (struct DXGFASTMUTEX *)(this + 12));
      v17 = this[18];
      if ( v17 && *((_DWORD *)v17 + 4) == 4 )
      {
        memmove(v11[4], *((const void **)v17 + 4), 0x30uLL);
        *((_DWORD *)v11[4] + 12) = *(_DWORD *)(*((_QWORD *)this[18] + 4) + 48LL);
      }
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v25);
    }
    if ( !*((_DWORD *)v14 + 12299) )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v25, (struct DXGFASTMUTEX *)(this + 12));
      v18 = this[18];
      if ( v18 && *((_DWORD *)v18 + 4) == 4 )
        memmove((char *)v11[4] + 52, (const void *)(*((_QWORD *)v18 + 4) + 52LL), 0xC000uLL);
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v25);
    }
  }
  v19 = (struct DXGK_GAMMA_RAMP **)auto_rc<DXGK_GAMMA_RAMP>::put(&v26);
  MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(
                                     (DxgMonitor::MonitorGammaState *)this,
                                     (const struct DXGK_GAMMA_RAMP *)v11,
                                     v19);
  if ( MostCapableColorSpaceTransform >= 0 )
  {
    if ( !v26 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 619;
    }
    if ( (unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline()
      && *((_DWORD *)v26 + 4) == 4 )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v25, (struct DXGFASTMUTEX *)(this + 19));
      v20 = *((float *)this + 50);
      if ( v20 >= *((float *)this + 21) && *((float *)this + 22) >= v20 )
        *(float *)(*((_QWORD *)v26 + 4) + 48LL) = v20;
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v25);
    }
    v21 = (*(__int64 (__fastcall **)(ReferenceCounted *))(*(_QWORD *)*this + 24LL))(*this);
    MostCapableColorSpaceTransform = (*(__int64 (__fastcall **)(__int64, ReferenceCounted *))(*(_QWORD *)v21 + 96LL))(
                                       v21,
                                       v26);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v25, (struct DXGFASTMUTEX *)(this + 12));
    if ( MostCapableColorSpaceTransform >= 0 )
      auto_rc<DXGK_GAMMA_RAMP>::operator=(this + 18, &v23);
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v25);
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 614;
  }
LABEL_55:
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v26, 0LL);
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v23, 0LL);
  return (unsigned int)MostCapableColorSpaceTransform;
}
