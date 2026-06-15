/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18006AC44
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18006AB40 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?ReloadVolumeState@CVolumeHardware@@MEAAXXZ @ 0x180119550 (-ReloadVolumeState@CVolumeHardware@@MEAAXXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18006ADB4 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dg @ 0x1800CFC84 (WPP_SF_dg.c)
 *     WPP_SF_qD @ 0x1800CFEB4 (WPP_SF_qD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // edi
  unsigned int i; // esi
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  float v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 32) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids,
        this,
        *((_DWORD *)this + 29));
    }
    for ( i = 0; i < *((_DWORD *)this + 29); ++i )
    {
      v4 = *((_QWORD *)this + 32);
      v7 = 0.0;
      v1 = (*(__int64 (__fastcall **)(__int64, _QWORD, float *))(*(_QWORD *)v4 + 40LL))(v4, i, &v7);
      if ( v1 < 0 )
        goto LABEL_13;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_d2cd8b4ef06a3deb09d49ba9c3c05c3d_Traceguids, i, v7);
      }
      if ( (unsigned __int64)i >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v5 = (unsigned __int64)i << 6;
      *(float *)(v5 + *((_QWORD *)this + 10) + 4) = fmaxf(
                                                      fminf(v7, *(float *)(v5 + *((_QWORD *)this + 10) + 20)),
                                                      *(float *)(v5 + *((_QWORD *)this + 10) + 8));
    }
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  }
  else
  {
    v1 = -2147418113;
LABEL_13:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::ReadChannelLevelsFromHardware", 1558, v1);
  }
  return (unsigned int)v1;
}
