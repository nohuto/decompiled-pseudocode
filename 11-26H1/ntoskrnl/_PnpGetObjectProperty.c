/*
 * XREFs of _PnpGetObjectProperty @ 0x14095ED60
 * Callers:
 *     PiRebalanceOptOut @ 0x1405DFB18 (PiRebalanceOptOut.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14077F604 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipGetDeviceObjectLocation @ 0x14079FCD4 (PipGetDeviceObjectLocation.c)
 *     PnpLogDeviceRequiresReboot @ 0x1407A728C (PnpLogDeviceRequiresReboot.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407A76B0 (PnpUpdateRebootRequiredReason.c)
 *     PiDmListInitEnumCallback @ 0x1407AA160 (PiDmListInitEnumCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1407AA960 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x1407AC524 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407AC750 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1407B8734 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x1407B9500 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodes @ 0x1407BB288 (PiDrvDbSetupNodes.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x14089DE70 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140952480 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x14095276C (_CmGetDeviceParent.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14095394C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceRegPropWorker @ 0x140956E10 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14095DDC0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14095F698 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopGetDeviceInterfaces @ 0x14095FCD0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectActionCallback @ 0x140965980 (PiPnpRtlObjectActionCallback.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140970C4C (PnpCallDriverQueryServiceHelper.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409731E4 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1409A8BF4 (PiUEventProcessBroadcastNotifications.c)
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 *     IopRegisterDeviceInterface @ 0x1409A9840 (IopRegisterDeviceInterface.c)
 *     PiAuditDeviceStart @ 0x1409AD34C (PiAuditDeviceStart.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1409AF85C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409B50C0 (PpForEachDeviceInstanceDriver.c)
 *     _CmDeleteDeviceWorker @ 0x1409B70E4 (_CmDeleteDeviceWorker.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A151A0 (_CmUpdateDevicePanelInterface.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140A156F0 (_CmQueryDevicePanelPldProperty.c)
 *     _CmUpdateDevicePanel @ 0x140A16A1C (_CmUpdateDevicePanel.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140A17914 (PnpGetDeviceInterfacePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x140A18390 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140A46258 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A88DA0 (PiPnpRtlServiceFilterCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140A9BD2C (IopDeviceObjectFromSymbolicName.c)
 *     PnpGetDevicePropertyData @ 0x140A9C6C0 (PnpGetDevicePropertyData.c)
 *     PnpAssignResourcesToDevices @ 0x140AA03DC (PnpAssignResourcesToDevices.c)
 *     PiUEventCacheObjectProperties @ 0x140AA6D44 (PiUEventCacheObjectProperties.c)
 *     PiDcHandleDeviceEvent @ 0x140AD3C20 (PiDcHandleDeviceEvent.c)
 *     PiDevCfgFindDeviceDriver @ 0x140AE6D34 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AEA1C8 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140B054E0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcHandleInterfaceEvent @ 0x140B06A60 (PiDcHandleInterfaceEvent.c)
 *     PiDcContainerRequiresConfiguration @ 0x140B06B60 (PiDcContainerRequiresConfiguration.c)
 *     _CmMatchLastKnownParentCallback @ 0x140B100D0 (_CmMatchLastKnownParentCallback.c)
 *     PiUEventDeviceNeedsInstall @ 0x140B10E18 (PiUEventDeviceNeedsInstall.c)
 *     PiAuditDeviceOperation @ 0x140B15BF8 (PiAuditDeviceOperation.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140B20F30 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140B24BE8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetParentDeviceContainerId @ 0x140B2E0A8 (_CmGetParentDeviceContainerId.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140B312E0 (PnpGetDeviceInstancePropertyData.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140B37308 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140B3CD40 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140B43844 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6E20C (PiCMUnregisterDeviceInterface.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140B71FC0 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpValidatePropertyData @ 0x140A19604 (_PnpValidatePropertyData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
