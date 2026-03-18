/*
 * XREFs of ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58
 * Callers:
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x140260A88 (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1400673B8 (Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetAddress@MonitorDisplayPortState@DxgMonitor@@QEBA?AU_DXGKARG_GETDPADDRESS@@XZ @ 0x14006D554 (-GetAddress@MonitorDisplayPortState@DxgMonitor@@QEBA-AU_DXGKARG_GETDPADDRESS@@XZ.c)
 *     ?IsAddressValid@MonitorDisplayPortState@DxgMonitor@@QEBA_NXZ @ 0x14006DD5C (-IsAddressValid@MonitorDisplayPortState@DxgMonitor@@QEBA_NXZ.c)
 *     Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400989A8 (Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATION@@I@Z @ 0x14018B6F0 (-SerializeModesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORSOURCEMODESET_SERIALIZATIO.c)
 *     ?GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x14018B818 (-GetModesSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 *     ?_SupportSyncLockIdentical@DXGMONITOR@@QEBA_NXZ @ 0x1401954FC (-_SupportSyncLockIdentical@DXGMONITOR@@QEBA_NXZ.c)
 *     ?SerializeToBuffer@MonitorDescriptorState@DxgMonitor@@QEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALIZATION@@I@Z @ 0x14027A928 (-SerializeToBuffer@MonitorDescriptorState@DxgMonitor@@QEBAXPEAU_DMM_MONITORDESCRIPTORSET_SERIALI.c)
 *     ?GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x14027B64C (-GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ.c)
 *     ?SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESET_SERIALIZATION@@I@Z @ 0x14027B694 (-SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESE.c)
 *     ?GetExternalBrightnessPolicy@MonitorColorState@DxgMonitor@@QEBAXAEA_N0AEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x14027C1F0 (-GetExternalBrightnessPolicy@MonitorColorState@DxgMonitor@@QEBAXAEA_N0AEAW4_DISPLAYCONFIG_EXTERN.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1402ACB84 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1402DAD90 (-DmmIsHdrAllowedOnTarget@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362A3C (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLI_ea_140362A3C.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x140362FC8 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0348 (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DXGMONITOR *this,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  bool v3; // r13
  unsigned int ModesSerializationSizeInBytes; // eax
  __int64 v8; // r14
  unsigned int FrequencyRangeSerializationSizeInBytes; // eax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned __int64 v14; // rcx
  __int16 v15; // cx
  __int16 v16; // ax
  __int16 v17; // r8
  bool IsAddressValid; // al
  __int16 v19; // dx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  char v24; // cl
  char v25; // bl
  char v26; // r15
  int v27; // eax
  unsigned int v28; // edx
  char v29; // r14
  __int64 v30; // rax
  int CurrentWireFormatAndColorSpace; // eax
  bool IsHdrAllowedOnTarget; // al
  __int64 v33; // rcx
  bool v34; // zf
  int v35; // r14d
  char v36; // dl
  char v37; // r8
  int v38; // ecx
  DxgMonitor::MonitorColorState *v39; // rbx
  bool v40; // al
  int v41; // eax
  bool v42; // cl
  __int64 v43; // rbx
  __int64 v44; // rbx
  __int64 result; // rax
  unsigned int v46; // [rsp+30h] [rbp-48h]
  unsigned int v47; // [rsp+34h] [rbp-44h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v48; // [rsp+38h] [rbp-40h] BYREF
  _DXGK_MONITORLINKINFO v49; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v50[13]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v51; // [rsp+5Dh] [rbp-1Bh]
  int v52; // [rsp+65h] [rbp-13h]
  __int16 v53; // [rsp+69h] [rbp-Fh]
  char v54; // [rsp+6Bh] [rbp-Dh]
  unsigned int v55; // [rsp+C0h] [rbp+48h] BYREF
  _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v56; // [rsp+C8h] [rbp+50h] BYREF
  int v57; // [rsp+D0h] [rbp+58h] BYREF
  int v58; // [rsp+D8h] [rbp+60h] BYREF

  v3 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3248;
  }
  ModesSerializationSizeInBytes = DxgMonitor::MonitorModes::GetModesSerializationSizeInBytes(*((PERESOURCE *)this + 29));
  v8 = ModesSerializationSizeInBytes;
  v46 = ModesSerializationSizeInBytes;
  FrequencyRangeSerializationSizeInBytes = DxgMonitor::MonitorModes::GetFrequencyRangeSerializationSizeInBytes(*((DxgMonitor::MonitorModes **)this + 29));
  v10 = FrequencyRangeSerializationSizeInBytes;
  v47 = FrequencyRangeSerializationSizeInBytes;
  v11 = *(_QWORD *)(*((_QWORD *)this + 27) + 128LL);
  if ( v11 && (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11)) != 0 )
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  else
    v13 = 0;
  v14 = v8 + v13 + v10 + 88;
  if ( a3 && v14 <= *a2 )
  {
    *(_DWORD *)a3 = v14;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 45);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 81);
    *((_BYTE *)a3 + 12) = *((_DWORD *)this + 70) != 1;
    *((_BYTE *)a3 + 13) = *(_BYTE *)(*((_QWORD *)this + 29) + 116LL) != 0;
    v15 = *((_WORD *)a3 + 7) & 0xFFFE | DXGMONITOR::_SupportSyncLockIdentical(this);
    *((_WORD *)a3 + 7) = v15;
    v16 = v15 & 0xFFFD | (*((_DWORD *)this + 84) >> 1) & 2;
    *((_WORD *)a3 + 7) = v16;
    v17 = v16 & 0xFFFB | (2 * (*((_WORD *)this + 168) & 2));
    *((_WORD *)a3 + 7) = v17;
    *((_WORD *)a3 + 7) = v17 & 0xFFEF | (*(_BYTE *)(*((_QWORD *)this + 33) + 8LL) != 0 ? 0x10 : 0);
    IsAddressValid = DxgMonitor::MonitorDisplayPortState::IsAddressValid(*((DxgMonitor::MonitorDisplayPortState **)this
                                                                         + 34));
    *((_WORD *)a3 + 7) = v19 & 0xFFF7 | (8 * IsAddressValid);
    *((_DWORD *)a3 + 4) = *(_DWORD *)(*((_QWORD *)this + 29) + 112LL);
    v20 = *(_QWORD *)(*((_QWORD *)this + 25) + 8LL);
    if ( v20 )
      v21 = *(_DWORD *)(*(_QWORD *)(v20 + 64) + 284LL);
    else
      v21 = 0;
    *((_DWORD *)a3 + 5) = v21;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 70);
    if ( DxgMonitor::MonitorDisplayPortState::IsAddressValid(*((DxgMonitor::MonitorDisplayPortState **)this + 34)) )
    {
      DxgMonitor::MonitorDisplayPortState::GetAddress(v22, (__int64)v50);
      v23 = v52;
      v24 = v50[12];
      *(_QWORD *)((char *)a3 + 41) = v51;
      *(_DWORD *)((char *)a3 + 49) = v23;
      *(_WORD *)((char *)a3 + 53) = v53;
      *((_BYTE *)a3 + 55) = v54;
      *((_BYTE *)a3 + 40) = v24;
    }
    if ( (unsigned int)Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline() )
    {
      v57 = 0;
      v25 = 0;
      *(_QWORD *)&v49.UsageHints.0 = 0LL;
      v56 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
      v49.DitheringSupport.Value = 0;
      v58 = 0;
      v26 = 0;
      LOBYTE(v55) = 0;
      if ( (int)DXGMONITOR::_GetLinkInfo(this, &v49) < 0 )
      {
        v27 = 1;
        v57 = 1;
      }
      else
      {
        DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
          *((DxgMonitor::MonitorColorState **)this + 28),
          &v49,
          (union MONITOR_AND_LINK_HDR_CAPS *)&v56,
          (enum MonitorAndLinkHDRIncapableReason *)&v57);
        DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(
          *((DxgMonitor::MonitorColorState **)this + 28),
          &v49,
          (bool *)&v55,
          (enum MonitorAndLinkWCGIncapableReason *)&v58);
        v25 = v56;
        v26 = v55;
        v27 = v58;
      }
      v28 = *((_DWORD *)this + 45);
      v58 = v27;
      v29 = 0;
      v30 = *((_QWORD *)this + 21);
      v56 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
      v55 = 0;
      if ( (int)DmmGetSourceConnectedToTargetInClientVidPn(*(void *const *)(*(_QWORD *)(v30 + 24) + 16LL), v28, &v55) >= 0 )
      {
        CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(
                                           *(void **)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL),
                                           v55,
                                           *((_DWORD *)this + 45),
                                           &v48,
                                           &v56);
        if ( CurrentWireFormatAndColorSpace < 0 )
        {
          WdLogSingleEntry2(3LL, *((unsigned int *)this + 45), CurrentWireFormatAndColorSpace);
          WdLogGlobalForLineNumber = 3350;
        }
        else
        {
          if ( v56 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
            || v56 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_HDR10PLUS )
          {
            v29 = 1;
          }
          v3 = v56 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG;
        }
      }
      IsHdrAllowedOnTarget = DmmIsHdrAllowedOnTarget(
                               *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL),
                               *((_DWORD *)this + 45));
      v33 = *((_QWORD *)this + 28);
      v34 = v29 == 0;
      v35 = 2;
      v36 = *(_BYTE *)(v33 + 457);
      v37 = *(_BYTE *)(v33 + 456);
      if ( v34 )
        v38 = v3;
      else
        v38 = 2;
      *((_DWORD *)a3 + 14) = v38;
      *((_BYTE *)a3 + 60) = !IsHdrAllowedOnTarget;
      LOBYTE(v55) = 0;
      *((_BYTE *)a3 + 61) = v25 & 1;
      LOBYTE(v56) = 0;
      *((_BYTE *)a3 + 62) = v37 != 0;
      *((_BYTE *)a3 + 63) = v26 != 0;
      *((_BYTE *)a3 + 64) = v36 != 0;
      *((_DWORD *)a3 + 17) = v57;
      *((_DWORD *)a3 + 18) = v58;
      v57 = 0;
      v40 = 0;
      if ( (unsigned int)Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline() )
      {
        v39 = (DxgMonitor::MonitorColorState *)*((_QWORD *)this + 28);
        DxgMonitor::MonitorColorState::GetExternalBrightnessPolicy(
          v39,
          (bool *)&v55,
          (bool *)&v56,
          (enum _DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT *)&v57);
        v35 = *((_DWORD *)v39 + 131);
        if ( (_BYTE)v55 || (_BYTE)v56 )
          v40 = 1;
      }
      LODWORD(v10) = v47;
      *((_BYTE *)a3 + 76) = v40;
      *((_BYTE *)a3 + 77) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL)
                                                                          + 16LL)
                                                              + 216LL)
                                                  + 64LL)
                                      + 3128LL) != 0LL;
      v41 = v57;
      v42 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 2488LL) & 0x10) != 0;
      *((_DWORD *)a3 + 21) = v35;
      LODWORD(v8) = v46;
      *((_BYTE *)a3 + 78) = v42;
      *((_DWORD *)a3 + 20) = v41;
    }
    DxgMonitor::MonitorModes::SerializeModesToBuffer(
      *((PERESOURCE *)this + 29),
      (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + 88),
      v8);
    *((_DWORD *)a3 + 6) = 88;
    v43 = (unsigned int)v8 + 88LL;
    DxgMonitor::MonitorModes::SerializeFrequencyRangesToBuffer(
      *((DxgMonitor::MonitorModes **)this + 29),
      (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + v43),
      v10);
    *((_DWORD *)a3 + 7) = v43;
    v44 = (unsigned int)v10 + v43;
    DxgMonitor::MonitorDescriptorState::SerializeToBuffer(
      *((DxgMonitor::MonitorDescriptorState **)this + 27),
      (struct _DMM_MONITOR_SERIALIZATION *)((char *)a3 + v44),
      v13);
    result = 0LL;
    *((_DWORD *)a3 + 8) = v44;
  }
  else
  {
    *a2 = v14;
    return 3221225507LL;
  }
  return result;
}
