/*
 * XREFs of _PnpGetObjectProperty @ 0x1408CB8A0
 * Callers:
 *     PiRebalanceOptOut @ 0x1405A5CD4 (PiRebalanceOptOut.c)
 *     PipGetDeviceObjectLocation @ 0x14070F924 (PipGetDeviceObjectLocation.c)
 *     PnpLogDeviceRequiresReboot @ 0x14071727C (PnpLogDeviceRequiresReboot.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407178C8 (PnpUpdateRebootRequiredReason.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14071A968 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListInitEnumCallback @ 0x14071AF00 (PiDmListInitEnumCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14071BA00 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x14071DF38 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14071E164 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14072ACC4 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14072BA90 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbRegisterNode @ 0x14072C178 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodes @ 0x14072D82C (PiDrvDbSetupNodes.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x14080A140 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14080E910 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14080F344 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PnpAssignResourcesToDevices @ 0x14082FAA0 (PnpAssignResourcesToDevices.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PiAuditDeviceStart @ 0x1408320C8 (PiAuditDeviceStart.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408369DC (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1408914DC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C7ED0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE630 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceParent @ 0x1409322F8 (_CmGetDeviceParent.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x14094E3B0 (PiDevCfgCopyObjectProperties.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140954E84 (PnpGetDeviceInterfacePropertyData.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     IoGetDeviceInterfaceAlias @ 0x140956090 (IoGetDeviceInterfaceAlias.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140956A68 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IopGetDeviceInterfaces @ 0x1409572B8 (IopGetDeviceInterfaces.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140967900 (PiUEventProcessBroadcastNotifications.c)
 *     IopProcessSetInterfaceState @ 0x140968508 (IopProcessSetInterfaceState.c)
 *     PiUEventCacheObjectProperties @ 0x14096DA18 (PiUEventCacheObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     _CmDeleteDeviceWorker @ 0x14099FA74 (_CmDeleteDeviceWorker.c)
 *     PnpGetDevicePropertyData @ 0x1409A2540 (PnpGetDevicePropertyData.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1409A8AF8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409A913C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409AB44C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409AD6E4 (PnpCallDriverQueryServiceHelper.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140A00B50 (PiPnpRtlServiceFilterCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A44F60 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140A45108 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x140A45C04 (_CmQueryDevicePanelPldProperty.c)
 *     PiDcHandleDeviceEvent @ 0x140A45E74 (PiDcHandleDeviceEvent.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A46EA4 (PpForEachDeviceInstanceDriver.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A68DF8 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcHandleInterfaceEvent @ 0x140A69D4C (PiDcHandleInterfaceEvent.c)
 *     PiAuditDeviceOperation @ 0x140A6D2A8 (PiAuditDeviceOperation.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A71990 (_CmMatchLastKnownParentCallback.c)
 *     PiUEventDeviceNeedsInstall @ 0x140A72BF8 (PiUEventDeviceNeedsInstall.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A776C0 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140A7AA64 (PiDevCfgQueryDriverConfiguration.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7D238 (_CmGetDeviceCompoundFiltersWorker.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A9989C (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140AA9E98 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140AAC3E0 (PnpGetDeviceInstancePropertyData.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB15A4 (_CmGetParentDeviceContainerId.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB53E8 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140AB8AB0 (IopDeviceObjectFromSymbolicName.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABBD2C (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x14042CC40 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C86C0 (_PnpRegQueryValueIndirect.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA500 (_PnpDispatchDeviceInterface.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     _PnpDispatchDevice @ 0x1408CB4B0 (_PnpDispatchDevice.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     DrvDbDispatchDriverPackage @ 0x1409303A0 (DrvDbDispatchDriverPackage.c)
 *     _PnpValidatePropertyData @ 0x1409548B4 (_PnpValidatePropertyData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        _QWORD *a1,
        const WCHAR *a2,
        unsigned int a3,
        void *a4,
        const WCHAR *a5,
        __int64 a6,
        _DWORD *a7,
        void *a8,
        ULONG a9,
        __int64 a10,
        int a11)
{
  _DWORD *v11; // r14
  __int64 v12; // r15
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r12
  int v17; // eax
  _DWORD *v19; // r9
  void *v20; // rdx
  ULONG v21; // ebx
  __int64 (__fastcall *v22)(_DWORD, _DWORD, _DWORD, _DWORD, __int64); // rax
  _DWORD *v23; // rbx
  int v24; // eax
  int v25; // esi
  int v26; // eax
  const WCHAR *v27; // rax
  __int64 v28; // rcx
  wchar_t *v29; // rax
  wchar_t *Pool2; // rbx
  unsigned int v31; // edi
  int v32; // edi
  __int64 v33; // rax
  ULONG *v34; // r15
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *); // r10
  ULONG v37; // r14d
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  __int64 v41; // [rsp+90h] [rbp-80h] BYREF
  _DWORD *v42; // [rsp+98h] [rbp-78h]
  _DWORD *v43; // [rsp+A0h] [rbp-70h]
  ULONG v44; // [rsp+A8h] [rbp-68h] BYREF
  ULONG v45; // [rsp+ACh] [rbp-64h]
  unsigned int v46; // [rsp+B0h] [rbp-60h]
  HANDLE v47; // [rsp+B8h] [rbp-58h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+C0h] [rbp-50h]
  HANDLE v49; // [rsp+C8h] [rbp-48h]
  const WCHAR *v50; // [rsp+D0h] [rbp-40h]
  __int64 v51; // [rsp+D8h] [rbp-38h]
  HANDLE Handle; // [rsp+E0h] [rbp-30h] BYREF
  const WCHAR *v53; // [rsp+E8h] [rbp-28h]
  _QWORD v54[2]; // [rsp+F0h] [rbp-20h] BYREF
  HANDLE v55; // [rsp+100h] [rbp-10h]
  const WCHAR *v56; // [rsp+108h] [rbp-8h]
  __int64 v57; // [rsp+110h] [rbp+0h]
  __int64 v58; // [rsp+118h] [rbp+8h]
  void *v59; // [rsp+120h] [rbp+10h]
  ULONG v60; // [rsp+128h] [rbp+18h]
  int v61; // [rsp+12Ch] [rbp+1Ch]
  __int64 v62; // [rsp+130h] [rbp+20h]
  int v63; // [rsp+138h] [rbp+28h]
  int v64; // [rsp+13Ch] [rbp+2Ch]
  __int64 v65[5]; // [rsp+140h] [rbp+30h] BYREF
  ULONG v66; // [rsp+168h] [rbp+58h]
  _DWORD *v67; // [rsp+170h] [rbp+60h]
  int v68; // [rsp+178h] [rbp+68h]
  wchar_t pszDest[48]; // [rsp+180h] [rbp+70h] BYREF
  wchar_t P[64]; // [rsp+1E0h] [rbp+D0h] BYREF

  v11 = a7;
  v12 = 0LL;
  v56 = a5;
  v15 = (int)a3;
  v16 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))a1[61];
  v53 = a2;
  v60 = a9;
  v46 = a3;
  v42 = a7;
  v54[0] = 0LL;
  v54[1] = 0LL;
  v61 = 0;
  v64 = 0;
  v55 = a4;
  v57 = a6;
  v58 = (__int64)a7;
  v59 = a8;
  v62 = a10;
  v63 = a11;
  if ( v16 )
  {
    if ( v16 == PiPnpRtlObjectActionCallback )
      v17 = PiPnpRtlObjectActionCallback(a1, a2, a3, 8LL, 1, v54);
    else
      v17 = guard_dispatch_icall_no_overrides(a1);
    if ( v17 == -1073741822 )
    {
      v16 = 0LL;
    }
    else
    {
      if ( v17 == -1073741536 )
        return LODWORD(v54[0]);
      if ( v17 )
        return 3221225701LL;
    }
    v11 = (_DWORD *)v58;
    v42 = (_DWORD *)v58;
  }
  v19 = (_DWORD *)v62;
  v20 = v59;
  v51 = v57;
  HIDWORD(v41) = v63;
  v50 = v56;
  v49 = v55;
  v43 = (_DWORD *)v62;
  v45 = v60;
  SecurityDescriptor = v59;
  Handle = 0LL;
  if ( !(_WORD)v63 )
  {
    if ( v59 )
    {
      v21 = v60;
      if ( !v60 )
        v20 = 0LL;
      SecurityDescriptor = v20;
    }
    else
    {
      v21 = 0;
      v45 = 0;
    }
    *v11 = 0;
    *v19 = 0;
    memset_0(v65, 0, 0x40uLL);
    if ( (unsigned int)(v15 - 1) > 0xA )
    {
LABEL_62:
      v25 = -1073741811;
    }
    else
    {
      v22 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))a1[v15 + 37];
      if ( v22 )
      {
        v65[0] = (__int64)v49;
        v65[2] = v51;
        v65[4] = (__int64)SecurityDescriptor;
        v68 = HIDWORD(v41);
        v66 = v21;
        v23 = v43;
        v65[1] = (__int64)v50;
        v65[3] = (__int64)v11;
        v67 = v43;
        if ( (char *)v22 == (char *)PnpDispatchDevice )
        {
          v24 = PnpDispatchDevice((__int64)a1, a2, (unsigned int)v15, 8, v65);
        }
        else if ( (char *)v22 == (char *)PnpDispatchDeviceInterface )
        {
          v24 = PnpDispatchDeviceInterface((__int64)a1, (__int64)a2, (unsigned int)v15, 8, v65);
        }
        else if ( v22 == DrvDbDispatchDriverPackage )
        {
          v24 = DrvDbDispatchDriverPackage((_DWORD)a1, (_DWORD)a2, v15, 8, (__int64)v65);
        }
        else
        {
          v24 = guard_dispatch_icall_no_overrides(a1);
        }
        v25 = v24;
        if ( v24 != -1073741802 )
          goto LABEL_19;
        if ( v49 )
          goto LABEL_33;
        v25 = PnpOpenObjectRegKey((__int64)a1, (__int64)v53, v15, 33554433, 0, (__int64)&Handle);
        if ( v25 >= 0 )
        {
          v49 = Handle;
LABEL_33:
          v27 = v50;
          *v11 = 0;
          v47 = 0LL;
          HIDWORD(v41) = 0;
          v44 = 0;
          LOBYTE(v41) = 0;
          *v23 = 0;
          if ( v27 )
          {
            v35 = 85LL;
            while ( *v27 )
            {
              ++v27;
              if ( !--v35 )
                goto LABEL_62;
            }
          }
          v25 = RtlStringCchPrintfExW(
                  pszDest,
                  0x30uLL,
                  0LL,
                  0LL,
                  0x800u,
                  L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
                  *(_DWORD *)v51,
                  *(unsigned __int16 *)(v51 + 4),
                  *(unsigned __int16 *)(v51 + 6),
                  *(unsigned __int8 *)(v51 + 8),
                  *(unsigned __int8 *)(v51 + 9),
                  *(unsigned __int8 *)(v51 + 10),
                  *(unsigned __int8 *)(v51 + 11),
                  *(unsigned __int8 *)(v51 + 12),
                  *(unsigned __int8 *)(v51 + 13),
                  *(unsigned __int8 *)(v51 + 14),
                  *(unsigned __int8 *)(v51 + 15),
                  *(_DWORD *)(v51 + 16),
                  v41);
          if ( v25 < 0 )
            goto LABEL_51;
          v47 = 0LL;
          v28 = 512LL;
          v29 = pszDest;
          while ( *v29 )
          {
            ++v29;
            if ( !--v28 )
            {
              v25 = -1073741811;
              goto LABEL_51;
            }
          }
          if ( (unsigned __int64)(512 - v28) >= 0x30 )
          {
            v31 = 512 - v28 + 12;
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
            {
              v25 = -1073741801;
              goto LABEL_51;
            }
          }
          else
          {
            Pool2 = P;
            v31 = 59;
          }
          v32 = RtlStringCchPrintfExW(Pool2, v31, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", pszDest);
          if ( v32 >= 0 )
          {
            v33 = a1[28];
            if ( v33 )
              v12 = *(_QWORD *)(v33 + 8);
            v32 = RegRtlOpenKeyTransacted((__int64)v49, Pool2, 0, 1u, &v47, v12);
            if ( v32 == -1073741444 )
              v32 = -1073741772;
          }
          if ( Pool2 && Pool2 != P )
            ExFreePoolWithTag(Pool2, 0);
          if ( v32 == -1073741772 )
            goto LABEL_50;
          v25 = v32;
          if ( v32 < 0 )
            goto LABEL_51;
          v36 = (__int64 (__fastcall *)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *))a1[65];
          v37 = v45;
          v44 = v45;
          if ( !v36 || v36 == PnpRegQueryValueIndirect )
            v38 = PnpRegQueryValueIndirect(
                    (__int64)a1,
                    v47,
                    v50,
                    (int *)&v41 + 1,
                    SecurityDescriptor,
                    &v44,
                    (bool *)&v41);
          else
            v38 = guard_dispatch_icall_no_overrides(a1);
          v39 = v38;
          if ( v38 == -1073741772 || v38 == -1073741444 )
          {
LABEL_50:
            v25 = -1073741275;
          }
          else if ( !v38 || v38 == -1073741789 )
          {
            v40 = WORD2(v41);
            *v42 = WORD2(v41);
            if ( v40 != 1 )
            {
              v34 = v43;
              *v43 = v44;
              if ( v39 || !v37 )
                v25 = -1073741789;
              goto LABEL_52;
            }
          }
          else
          {
            v25 = v38;
          }
LABEL_51:
          v34 = v43;
LABEL_52:
          if ( v47 )
            ZwClose(v47);
          if ( v25 >= 0 )
            v25 = PnpValidatePropertyData(SecurityDescriptor, *v34);
        }
      }
      else
      {
        v25 = -1073741822;
      }
    }
LABEL_19:
    if ( Handle )
      ZwClose(Handle);
    LODWORD(v15) = v46;
    goto LABEL_22;
  }
  v25 = -1073741811;
LABEL_22:
  if ( v16 )
  {
    LODWORD(v54[0]) = v25;
    v26 = v16 == PiPnpRtlObjectActionCallback
        ? PiPnpRtlObjectActionCallback(a1, v53, (unsigned int)v15, 8LL, 2, v54)
        : guard_dispatch_icall_no_overrides(a1);
    if ( v26 != -1073741822 )
    {
      if ( v26 == -1073741536 )
        return LODWORD(v54[0]);
      if ( v26 )
        return 3221225701LL;
    }
  }
  return (unsigned int)v25;
}
