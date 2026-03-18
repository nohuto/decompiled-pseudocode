/*
 * XREFs of _PnpGetObjectProperty @ 0x14099E300
 * Callers:
 *     PiRebalanceOptOut @ 0x1405DD1A8 (PiRebalanceOptOut.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14077CB10 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipGetDeviceObjectLocation @ 0x14079D194 (PipGetDeviceObjectLocation.c)
 *     PnpLogDeviceRequiresReboot @ 0x1407A474C (PnpLogDeviceRequiresReboot.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407A4B70 (PnpUpdateRebootRequiredReason.c)
 *     PiDmListInitEnumCallback @ 0x1407A75B0 (PiDmListInitEnumCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407A7DB0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x1407A98A8 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407A9AD4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1407B56D4 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B64A0 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbRegisterNode @ 0x1407B6B90 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodes @ 0x1407B8228 (PiDrvDbSetupNodes.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x140897A70 (_CmGetContainerBooleanPropertyCallback.c)
 *     PiAuditDeviceOperation @ 0x140905C30 (PiAuditDeviceOperation.c)
 *     PiAuditDeviceStart @ 0x140907780 (PiAuditDeviceStart.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x14090D72C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PpForEachDeviceInstanceDriver @ 0x140912FE0 (PpForEachDeviceInstanceDriver.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409161E0 (PnpCallDriverQueryServiceHelper.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x140918784 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14098B138 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x14098BB38 (PiDevCfgCopyObjectProperties.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140991A20 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x140991D0C (_CmGetDeviceParent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceRegPropWorker @ 0x1409963B0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14099D360 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14099EC38 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopGetDeviceInterfaces @ 0x14099F270 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectActionCallback @ 0x1409A4F20 (PiPnpRtlObjectActionCallback.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1409D7D04 (PiUEventProcessBroadcastNotifications.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1409D8950 (IopRegisterDeviceInterface.c)
 *     _CmUpdateDevicePanel @ 0x1409D97C8 (_CmUpdateDevicePanel.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1409DA6C4 (PnpGetDeviceInterfacePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     PiUEventCacheObjectProperties @ 0x1409DDD60 (PiUEventCacheObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A731C8 (PiDevCfgCopyDeviceKey.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A82F30 (PiPnpRtlServiceFilterCallback.c)
 *     _CmDeleteDeviceWorker @ 0x140A8A2C4 (_CmDeleteDeviceWorker.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140A97BAC (IopDeviceObjectFromSymbolicName.c)
 *     PnpGetDevicePropertyData @ 0x140A98540 (PnpGetDevicePropertyData.c)
 *     PnpAssignResourcesToDevices @ 0x140AA51E4 (PnpAssignResourcesToDevices.c)
 *     PiDevCfgFindDeviceDriver @ 0x140ACF544 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgProcessDevice @ 0x140AD089C (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AD2A4C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AD2E94 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDcHandleDeviceEvent @ 0x140AD7178 (PiDcHandleDeviceEvent.c)
 *     _CmUpdateDevicePanelInterface @ 0x140AF175C (_CmUpdateDevicePanelInterface.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140AF1950 (_CmQueryDevicePanelPldProperty.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140B038D0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcHandleInterfaceEvent @ 0x140B04E50 (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x140B04F50 (PiDcContainerRequiresConfiguration.c)
 *     _CmMatchLastKnownParentCallback @ 0x140B0E8A0 (_CmMatchLastKnownParentCallback.c)
 *     PiUEventDeviceNeedsInstall @ 0x140B0F5E8 (PiUEventDeviceNeedsInstall.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B1EEB0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140B227E8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetParentDeviceContainerId @ 0x140B2C028 (_CmGetParentDeviceContainerId.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140B2F500 (PnpGetDeviceInstancePropertyData.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B32ACC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B350F8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140B3AAC0 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140B41834 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6B110 (PiCMUnregisterDeviceInterface.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140B6EA80 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14044E030 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 *     _PnpOpenObjectRegKey @ 0x14099E110 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x1409DC3B4 (_PnpValidatePropertyData.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        __int64 a8,
        ULONG a9,
        __int64 a10,
        int a11)
{
  __int64 v11; // r15
  _DWORD *v12; // rdi
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rsi
  int v17; // eax
  int v19; // edx
  _DWORD *v20; // r9
  const wchar_t *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r10
  char *v24; // r11
  ULONG v25; // ebx
  int v26; // ebx
  int v27; // eax
  _WORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  wchar_t *v31; // rax
  const wchar_t *v32; // r14
  wchar_t *Pool2; // rbx
  unsigned int v34; // edi
  int v35; // esi
  __int64 v36; // rax
  ULONG *v37; // r15
  int v38; // eax
  _DWORD *v39; // [rsp+98h] [rbp-78h]
  ULONG *v40; // [rsp+A0h] [rbp-70h]
  ULONG v41; // [rsp+ACh] [rbp-64h]
  STRSAFE_PCUNZWCH psz; // [rsp+B0h] [rbp-60h]
  HANDLE v43; // [rsp+C0h] [rbp-50h] BYREF
  char *v44; // [rsp+C8h] [rbp-48h]
  HANDLE Handle; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-38h]
  _WORD *v47; // [rsp+E0h] [rbp-30h]
  __int64 v48; // [rsp+E8h] [rbp-28h]
  __int64 v49; // [rsp+F0h] [rbp-20h]
  __int64 v50; // [rsp+F8h] [rbp-18h]
  char *v51; // [rsp+100h] [rbp-10h]
  __int64 v52; // [rsp+108h] [rbp-8h]
  __int64 v53; // [rsp+110h] [rbp+0h]
  __int64 v54; // [rsp+118h] [rbp+8h]
  __int64 v55; // [rsp+120h] [rbp+10h]
  ULONG v56; // [rsp+128h] [rbp+18h]
  int v57; // [rsp+12Ch] [rbp+1Ch]
  __int64 v58; // [rsp+130h] [rbp+20h]
  int v59; // [rsp+138h] [rbp+28h]
  int v60; // [rsp+13Ch] [rbp+2Ch]
  wchar_t pszDest[4]; // [rsp+140h] [rbp+30h] BYREF
  __int64 v62; // [rsp+148h] [rbp+38h]
  __int64 v63; // [rsp+150h] [rbp+40h]
  _DWORD *v64; // [rsp+158h] [rbp+48h]
  const wchar_t *v65; // [rsp+160h] [rbp+50h]
  ULONG v66; // [rsp+168h] [rbp+58h]
  int v67; // [rsp+16Ch] [rbp+5Ch]
  _DWORD *v68; // [rsp+170h] [rbp+60h]
  int v69; // [rsp+178h] [rbp+68h]
  int v70; // [rsp+17Ch] [rbp+6Ch]
  wchar_t P[64]; // [rsp+1A0h] [rbp+90h] BYREF

  v11 = 0LL;
  v12 = a7;
  v14 = a2;
  v52 = a5;
  v15 = *(_QWORD *)(a1 + 488);
  v16 = a3;
  v48 = a2;
  v56 = a9;
  v39 = a7;
  v49 = 0LL;
  v50 = 0LL;
  v57 = 0;
  v60 = 0;
  v51 = a4;
  v53 = a6;
  v54 = (__int64)a7;
  v55 = a8;
  v58 = a10;
  v59 = a11;
  if ( v15 )
  {
    v17 = guard_dispatch_icall_no_overrides(a1, a2);
    if ( v17 == -1073741822 )
    {
      v15 = 0LL;
    }
    else
    {
      if ( v17 == -1073741536 )
        return (unsigned int)v49;
      if ( v17 )
        return 3221225701LL;
    }
    v12 = (_DWORD *)v54;
    v39 = (_DWORD *)v54;
  }
  v19 = v59;
  v20 = (_DWORD *)v58;
  v21 = (const wchar_t *)v55;
  v22 = v53;
  v23 = v52;
  v24 = v51;
  v25 = v56;
  v40 = (ULONG *)v58;
  v41 = v56;
  psz = (STRSAFE_PCUNZWCH)v55;
  v46 = v53;
  v47 = (_WORD *)v52;
  v44 = v51;
  Handle = 0LL;
  if ( (_WORD)v59 )
  {
    v26 = -1073741811;
  }
  else
  {
    if ( v55 )
    {
      if ( !v56 )
        v21 = 0LL;
      psz = v21;
    }
    else
    {
      v25 = 0;
      v41 = 0;
    }
    *v12 = 0;
    *v20 = 0;
    v67 = 0;
    v70 = 0;
    if ( (unsigned int)(v16 - 1) > 0xA )
    {
LABEL_28:
      v26 = -1073741811;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(a1 + 8 * v16 + 296) )
    {
      v63 = v22;
      v65 = v21;
      v68 = v20;
      v69 = v19;
      *(_QWORD *)pszDest = v24;
      v62 = v23;
      v64 = v12;
      v66 = v25;
      v26 = guard_dispatch_icall_no_overrides(a1, v14);
      if ( v26 != -1073741802 )
      {
LABEL_15:
        if ( Handle )
          ZwClose(Handle);
        v14 = v48;
        goto LABEL_18;
      }
      if ( !v44 )
      {
        v26 = PnpOpenObjectRegKey(a1, v14, v16, 33554433, 0, (__int64)&Handle);
        if ( v26 < 0 )
          goto LABEL_15;
        v44 = (char *)Handle;
      }
      *v12 = 0;
      v43 = 0LL;
      *v40 = 0;
      v28 = v47;
      if ( v47 )
      {
        v29 = 85LL;
        while ( *v28 )
        {
          ++v28;
          if ( !--v29 )
            goto LABEL_28;
        }
      }
      v26 = RtlStringCchPrintfExW(
              pszDest,
              0x30uLL,
              0LL,
              0LL,
              0x800u,
              L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
              *(_DWORD *)v46,
              *(unsigned __int16 *)(v46 + 4),
              *(unsigned __int16 *)(v46 + 6),
              *(unsigned __int8 *)(v46 + 8),
              *(unsigned __int8 *)(v46 + 9),
              *(unsigned __int8 *)(v46 + 10),
              *(unsigned __int8 *)(v46 + 11),
              *(unsigned __int8 *)(v46 + 12),
              *(unsigned __int8 *)(v46 + 13),
              *(unsigned __int8 *)(v46 + 14),
              *(unsigned __int8 *)(v46 + 15),
              *(_DWORD *)(v46 + 16),
              0);
      if ( v26 < 0 )
      {
LABEL_34:
        v32 = psz;
      }
      else
      {
        v43 = 0LL;
        v30 = 512LL;
        v31 = pszDest;
        while ( *v31 )
        {
          ++v31;
          if ( !--v30 )
          {
            v26 = -1073741811;
            goto LABEL_34;
          }
        }
        if ( (unsigned __int64)(512 - v30) >= 0x30 )
        {
          v34 = 512 - v30 + 12;
          Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
          {
            v32 = psz;
            v26 = -1073741801;
            goto LABEL_47;
          }
        }
        else
        {
          Pool2 = P;
          v34 = 59;
        }
        v35 = RtlStringCchPrintfExW(Pool2, v34, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", pszDest);
        if ( v35 >= 0 )
        {
          v36 = *(_QWORD *)(a1 + 224);
          if ( v36 )
            v11 = *(_QWORD *)(v36 + 8);
          v35 = RegRtlOpenKeyTransacted(v44, Pool2, 0, 1u, &v43, v11);
          if ( v35 == -1073741444 )
            v35 = -1073741772;
        }
        if ( Pool2 && Pool2 != P )
          ExFreePoolWithTag(Pool2, 0);
        v32 = psz;
        if ( v35 == -1073741772 )
          goto LABEL_46;
        v26 = v35;
        if ( v35 < 0 )
          goto LABEL_47;
        v38 = guard_dispatch_icall_no_overrides(a1, (__int64)v43);
        if ( v38 == -1073741772 || v38 == -1073741444 )
        {
LABEL_46:
          v26 = -1073741275;
        }
        else
        {
          if ( !v38 || v38 == -1073741789 )
          {
            *v39 = 0;
            v37 = v40;
            *v40 = v41;
            if ( v38 || !v41 )
              v26 = -1073741789;
            goto LABEL_48;
          }
          v26 = v38;
        }
      }
LABEL_47:
      v37 = v40;
LABEL_48:
      if ( v43 )
        ZwClose(v43);
      if ( v26 >= 0 )
        v26 = PnpValidatePropertyData(v32, *v37);
      goto LABEL_15;
    }
    v26 = -1073741822;
  }
LABEL_18:
  if ( !v15 )
    return (unsigned int)v26;
  LODWORD(v49) = v26;
  v27 = guard_dispatch_icall_no_overrides(a1, v14);
  if ( v27 == -1073741822 )
    return (unsigned int)v26;
  if ( v27 != -1073741536 )
  {
    if ( v27 )
      return 3221225701LL;
    return (unsigned int)v26;
  }
  return (unsigned int)v49;
}
