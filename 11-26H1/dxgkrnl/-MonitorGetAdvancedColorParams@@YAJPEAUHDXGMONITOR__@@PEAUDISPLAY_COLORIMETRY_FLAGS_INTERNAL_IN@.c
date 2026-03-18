/*
 * XREFs of ?MonitorGetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN@@PEAUDISPLAY_COLORIMETRY_INTERNAL@@PEAUDISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT@@@Z @ 0x1403D3F84
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x140437F40 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline @ 0x140056424 (Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MonitorGetSupportedHDRFlavors@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026F308 (-MonitorGetSupportedHDRFlavors@@YAJPEAUHDXGMONITOR__@@PEAW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 */

__int64 __fastcall MonitorGetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_IN *a2,
        struct DISPLAY_COLORIMETRY_INTERNAL *a3,
        struct DISPLAY_COLORIMETRY_FLAGS_INTERNAL_OUT *a4)
{
  __int64 v8; // rbp
  __int64 v9; // r10
  char v10; // r9
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  bool v14; // al
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // ebx
  int v22; // eax
  _QWORD v23[7]; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+60h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v23, (__int64)a1);
  v8 = v23[0];
  if ( v23[0] )
  {
    v9 = *(_QWORD *)(v23[0] + 224LL);
    if ( *((_BYTE *)a2 + 1) )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v9 + 416);
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v9 + 424);
      *((_QWORD *)a3 + 2) = *(_QWORD *)(v9 + 432);
      *((_QWORD *)a3 + 3) = *(_QWORD *)(v9 + 440);
      *((_DWORD *)a3 + 8) = *(_DWORD *)(v9 + 448);
      v22 = *(_DWORD *)(v9 + 452);
      *((_DWORD *)a3 + 9) = v22;
      *((_DWORD *)a3 + 10) = v22;
      *(_WORD *)a4 = 0;
      *((_BYTE *)a4 + 5) = 0;
      if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline() )
        *((_BYTE *)a4 + 6) = 0;
    }
    else
    {
      v10 = *(_BYTE *)a2;
      *(_QWORD *)a3 = *(_QWORD *)(v9 + 240);
      *((_QWORD *)a3 + 1) = *(_QWORD *)(v9 + 248);
      *((_QWORD *)a3 + 2) = *(_QWORD *)(v9 + 256);
      *((_QWORD *)a3 + 3) = *(_QWORD *)(v9 + 264);
      v11 = *(_DWORD *)((v10 != 0 ? 0x10 : 0) + v9 + 368);
      v12 = *(_DWORD *)((v10 != 0 ? 0x10 : 0) + v9 + 372);
      *((_DWORD *)a3 + 8) = *(_DWORD *)((v10 != 0 ? 0x10 : 0) + v9 + 364);
      *((_DWORD *)a3 + 9) = v11;
      *((_DWORD *)a3 + 10) = v12;
      v13 = *(_DWORD *)(v9 + 392);
      *(_BYTE *)a4 = 0;
      v14 = v13 == 1 || (unsigned int)(v13 - 2) <= 1;
      v15 = *(_QWORD *)(v9 + 112);
      *((_BYTE *)a4 + 1) = v14;
      *((_BYTE *)a4 + 4) = *(_BYTE *)(v9 + 120);
      *((_BYTE *)a4 + 2) = BYTE6(v15) != 0;
      v16 = *(_BYTE *)(v9 + 413) == 0;
      *((_BYTE *)a4 + 3) = HIBYTE(v15) != 0;
      *((_BYTE *)a4 + 5) = !v16;
      if ( (unsigned int)Feature_DolbyVisionAndUpdatedHdrUx__private_IsEnabledDeviceUsageNoInline()
        && *((_BYTE *)a4 + 5) )
      {
        v24 = 0;
        MonitorGetSupportedHDRFlavors(a1, (enum _DISPLAYCONFIG_HDR_FLAVOR *)&v24);
        *((_BYTE *)a4 + 5) = (v24 & 2) != 0;
      }
    }
    v17 = *(_QWORD *)(v8 + 224);
    v18 = *(_DWORD *)(v17 + 472);
    if ( v18 )
      v19 = v18 / 0x3E8;
    else
      v19 = *(_DWORD *)(v17 + 368) / 0x2710u;
    *((_DWORD *)a3 + 11) = v19;
    v20 = 0;
  }
  else
  {
    v20 = -1073741275;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3737;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v23);
  return v20;
}
