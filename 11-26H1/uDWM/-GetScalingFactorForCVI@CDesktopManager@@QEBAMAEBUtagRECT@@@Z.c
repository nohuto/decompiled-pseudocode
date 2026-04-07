/*
 * XREFs of ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180061344
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180034AB8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z @ 0x180088260 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJAEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800D0460 (-Initialize@CTransitionWindowSnapshot@@MEAAJAEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800612C8 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x1800614B8 (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180061530 (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 *     _o_sqrtf_0 @ 0x18008EF00 (_o_sqrtf_0.c)
 */

float __fastcall CDesktopManager::GetScalingFactorForCVI(CDesktopManager *this, const struct tagRECT *a2)
{
  float v3; // xmm6_4
  int v5; // eax
  int v6; // ecx
  int v7; // r9d
  int v8; // eax
  int v9; // r8d
  HMONITOR v11; // rbx
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+40h] [rbp-28h]
  enum DEVICE_SCALE_FACTOR v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = FLOAT_1_0;
  if ( !CDesktopManager::_IsMultiMon(this) )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 102) - *((_DWORD *)this + 100) >= 0 )
      v5 = *((_DWORD *)this + 102) - *((_DWORD *)this + 100);
    v6 = 0;
    if ( *((_DWORD *)this + 101) - *((_DWORD *)this + 99) >= 0 )
      v6 = *((_DWORD *)this + 101) - *((_DWORD *)this + 99);
    v7 = 0;
    v8 = v6 * v5 / 2;
    if ( a2->bottom - a2->top >= 0 )
      v7 = a2->bottom - a2->top;
    v9 = 0;
    if ( a2->right - a2->left >= 0 )
      v9 = a2->right - a2->left;
    if ( v9 * v7 > v8 )
    {
      v11 = MonitorFromRect((LPCRECT)((char *)this + 396), 2u);
      v14 = 0;
      v15 = DEVICE_SCALE_FACTOR_INVALID;
      v12 = 0LL;
      v13 = 0LL;
      if ( (int)GetScalingInfoForMonitor(v11, (struct SCALINGINFO *)&v12) >= 0
        && o_sqrtf_0((float)(DWORD1(v13) * DWORD1(v13)) + (float)(v13 * v13)) < 292.1
        && (int)GetScaleFactorForMonitorImp(v11, &v15) >= 0 )
      {
        if ( v15 < SCALE_180_PERCENT )
        {
          if ( v15 >= SCALE_140_PERCENT )
            return FLOAT_0_75;
        }
        else
        {
          return FLOAT_0_5;
        }
      }
    }
  }
  return v3;
}
