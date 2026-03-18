/*
 * XREFs of DxgkConvertDisplayConfigToDevMode @ 0x1402D6D90
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ConvertDisplayConfigToDmmRotation@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_ROTATION@@W41@@Z @ 0x140062170 (-ConvertDisplayConfigToDmmRotation@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4DISPLAYCONFIG_.c)
 *     DxgkConvertDisplayConfigCScalingToDdiScaling @ 0x1402D6FF0 (DxgkConvertDisplayConfigCScalingToDdiScaling.c)
 *     ?PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@QEAU_devicemodeW@@@Z @ 0x1402D733C (-PopulatePublicGdiDisplayModeInfo@VIDPN_MGR@@SAJ_K000W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402D925C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DxgkConvertDisplayConfigToDevMode(__int64 a1, struct _devicemodeW *a2)
{
  UINT *v4; // rax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v5; // r15d
  UINT v6; // eax
  unsigned int v7; // r14d
  __int64 v8; // rcx
  int v9; // esi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v10; // eax
  int *v11; // rcx
  char v12; // dl
  int v13; // edx
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  char v19; // [rsp+60h] [rbp-10h]
  struct _D3DDDI_RATIONAL v20; // [rsp+90h] [rbp+20h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2178;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v17, 2178);
  if ( (*(_QWORD *)a1 & 0x100001030387LL) == 0x100001030387LL )
  {
    v4 = (UINT *)(a1 + 200);
    v5 = *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 196) == -2 && *v4 == -2 )
    {
      v7 = 64;
    }
    else
    {
      v6 = *v4;
      v20.Numerator = *(_DWORD *)(a1 + 196);
      v20.Denominator = v6;
      v7 = DmmMapVSyncFromRationalToInteger(&v20, v5, 0LL);
    }
    v8 = *(unsigned int *)(a1 + 112);
    v20.Numerator = 0;
    v9 = DxgkConvertDisplayConfigCScalingToDdiScaling(v8, a1 + 16, &v20);
    if ( v9 >= 0 )
    {
      v10 = (unsigned int)ConvertDisplayConfigToDmmRotation(*(_DWORD *)(a1 + 104));
      v11 = (int *)(a1 + 124);
      if ( v12 )
      {
        v13 = *v11;
        v11 = (int *)(a1 + 128);
      }
      else
      {
        v13 = *(_DWORD *)(a1 + 128);
      }
      v9 = VIDPN_MGR::PopulatePublicGdiDisplayModeInfo(
             0x20uLL,
             *v11,
             v13,
             v7,
             v5,
             v10,
             (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v20.Numerator,
             a2);
      if ( v9 >= 0 )
      {
        a2->dmFields |= 0x20u;
        a2->dmPosition.x = *(_DWORD *)(a1 + 116);
        a2->dmPosition.y = *(_DWORD *)(a1 + 120);
      }
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    }
    return (unsigned int)v9;
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1775;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"An invalid path was passed to DxgkConvertDisplayConfigToDevMode, missing required flags.",
      1775LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    return 3221225485LL;
  }
}
