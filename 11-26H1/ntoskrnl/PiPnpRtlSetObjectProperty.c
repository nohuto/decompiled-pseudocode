/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x140A18C74
 * Callers:
 *     PiDqIrpPropertySet @ 0x14094E168 (PiDqIrpPropertySet.c)
 *     PiCMSetObjectProperty @ 0x14094E4C8 (PiCMSetObjectProperty.c)
 *     PiSwPropertySet @ 0x140A17FD4 (PiSwPropertySet.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x140A18148 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpSetDevicePropertyData @ 0x140A18AE4 (PnpSetDevicePropertyData.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140A46258 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x140B0F6C0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1407B8054 (PiAuditDeviceEnableDisableRequest.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1409FE320 (SeAuditingWithTokenForSubcategory.c)
 *     _CmUpdateDevicePanelInterface @ 0x140A151A0 (_CmUpdateDevicePanelInterface.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x140A19290 (_CmIsRootEnumeratedDevice.c)
 *     PiAuditDeviceOperation @ 0x140B15BF8 (PiAuditDeviceOperation.c)
 *     _CmSplitDevicePanelId @ 0x140B5FC88 (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        char *a4,
        __int64 a5,
        _QWORD *Buf1,
        int a7,
        STRSAFE_PCNZWCH pszSrc,
        unsigned int a9,
        int a10)
{
  unsigned int v11; // r12d
  int v13; // r13d
  unsigned int i; // edx
  __int64 v15; // r8
  int v16; // ebx
  unsigned int v17; // ebx
  int v18; // eax
  __int64 v19; // r14
  int v20; // eax
  int v21; // ebx
  int v22; // esi
  int v23; // eax
  __int64 v25; // rcx
  unsigned int j; // edx
  __int64 *v27; // r8
  __int64 v28; // rcx
  struct _KTHREAD *CurrentThread; // rax
  bool v30; // zf
  struct _KTHREAD *v31; // rax
  struct _KTHREAD *v32; // rax
  char v33; // [rsp+60h] [rbp-81h]
  char v34; // [rsp+61h] [rbp-80h]
  int v35; // [rsp+64h] [rbp-7Dh] BYREF
  int v36; // [rsp+68h] [rbp-79h] BYREF
  int v37; // [rsp+6Ch] [rbp-75h] BYREF
  int v38; // [rsp+70h] [rbp-71h] BYREF
  int v39; // [rsp+74h] [rbp-6Dh] BYREF
  int v40; // [rsp+78h] [rbp-69h]
  char *v41; // [rsp+80h] [rbp-61h]
  __int64 v42; // [rsp+88h] [rbp-59h]
  int v43; // [rsp+90h] [rbp-51h]
  int v44; // [rsp+94h] [rbp-4Dh]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-49h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-39h]
  GUID Buf2; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-21h] BYREF

  v42 = a1;
  v41 = a4;
  v46 = a5;
  v11 = 5;
  v44 = 0;
  v43 = 0;
  v13 = 0;
  v35 = 0;
  v39 = 0;
  v37 = 0;
  v40 = 0;
  v36 = 0;
  v38 = 0;
  v34 = 0;
  v33 = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  v48 = 0LL;
  switch ( a3 )
  {
    case 1:
      for ( i = 0; i < 0x11; ++i )
      {
        v15 = *((_QWORD *)&PiPnpRtlDeviceReadOnlyProps + i);
        if ( *((_DWORD *)Buf1 + 4) == *(_DWORD *)(v15 + 16) )
        {
          v25 = *Buf1 - *(_QWORD *)v15;
          if ( *Buf1 == *(_QWORD *)v15 )
            v25 = Buf1[1] - *(_QWORD *)(v15 + 8);
          if ( !v25 )
            return (unsigned int)-1073741790;
        }
      }
      v16 = *((_DWORD *)Buf1 + 4);
      if ( v16 == 12 )
      {
        if ( !memcmp(Buf1, &DEVPKEY_Device_ConfigFlags, 0x10uLL) )
        {
          if ( !pszSrc )
            return (unsigned int)-1073741811;
          v17 = a9;
          v30 = a9 == 4;
LABEL_68:
          if ( v30 )
          {
LABEL_15:
            v18 = *((_DWORD *)Buf1 + 4);
            if ( v18 == 10 )
            {
              if ( !memcmp(Buf1, &DEVPKEY_Device_ClassGuid, 0x10uLL) )
              {
                CurrentThread = KeGetCurrentThread();
                --CurrentThread->KernelApcDisable;
                ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
                v34 = 1;
              }
            }
            else if ( v18 == 12 )
            {
              if ( !memcmp(Buf1, &DEVPKEY_Device_ConfigFlags, 0x10uLL) )
              {
                v31 = KeGetCurrentThread();
                --v31->KernelApcDisable;
                ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
                v34 = 1;
                if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
                {
                  v33 = 1;
                  v35 = 4;
                  if ( (int)CmGetDeviceRegProp(
                              v42,
                              (__int64)a2,
                              (__int64)v41,
                              0xBu,
                              (__int64)&v39,
                              (__int64)&v37,
                              (__int64)&v35,
                              0) < 0
                    || v35 != 4
                    || v39 != 4 )
                  {
                    v37 = 0;
                  }
                  v40 = *(_DWORD *)pszSrc;
                }
              }
            }
            else if ( v18 == 5 && !memcmp(Buf1, DEVPKEY_Device_InstallError, 0x10uLL) )
            {
              v32 = KeGetCurrentThread();
              --v32->KernelApcDisable;
              ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
              v34 = 1;
              if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
              {
                v35 = 4;
                v33 = 1;
                if ( (int)PnpGetObjectProperty(
                            v42,
                            (__int64)a2,
                            1,
                            v41,
                            0LL,
                            (__int64)DEVPKEY_Device_InstallError,
                            &v36,
                            (__int64)&v38,
                            4u,
                            (__int64)&v35,
                            0) < 0
                  || v35 != 4
                  || v36 != 23 )
                {
                  v38 = 0;
                }
                if ( v17 == 4 && a7 == 23 )
                  v13 = *(_DWORD *)pszSrc;
              }
            }
            break;
          }
          return (unsigned int)-1073741811;
        }
      }
      else
      {
        if ( v16 == 3 && !memcmp(Buf1, &DEVPKEY_Device_HardwareIds, 0x10uLL) )
        {
LABEL_32:
          if ( !(unsigned __int8)CmIsRootEnumeratedDevice(a2) )
            return (unsigned int)-1073741790;
          goto LABEL_14;
        }
        if ( v16 == 4 )
        {
          if ( !memcmp(Buf1, &DEVPKEY_Device_CompatibleIds, 0x10uLL) )
            goto LABEL_32;
        }
        else if ( v16 == 2 && !memcmp(Buf1, DEVPKEY_Device_PanelId, 0x10uLL) )
        {
          if ( !pszSrc )
            return (unsigned int)-1073741811;
          v17 = a9;
          if ( a9 < 2
            || a7 != 18
            || pszSrc[((unsigned __int64)a9 >> 1) - 1]
            || (int)CmSplitDevicePanelId(pszSrc, &Buf2) < 0
            || (int)PnpGetObjectProperty(
                      v42,
                      (__int64)a2,
                      1,
                      v41,
                      0LL,
                      (__int64)&DEVPKEY_Device_ContainerId,
                      &v36,
                      (__int64)&v48,
                      0x10u,
                      (__int64)&v35,
                      0) < 0
            || v36 != 13
            || v35 != 16 )
          {
            return (unsigned int)-1073741811;
          }
          v30 = memcmp(&v48, &Buf2, 0x10uLL) == 0;
          goto LABEL_68;
        }
      }
LABEL_14:
      v17 = a9;
      goto LABEL_15;
    case 3:
      if ( *((_DWORD *)Buf1 + 4) == 256 && !memcmp(Buf1, &DEVPKEY_Device_InstanceId, 0x10uLL) )
        return (unsigned int)-1073741790;
      break;
    case 5:
      for ( j = 0; j < 5; ++j )
      {
        v27 = (__int64 *)PiPnpRtlContainerReadOnlyProps[j];
        if ( *((_DWORD *)Buf1 + 4) == *((_DWORD *)v27 + 4) )
        {
          v28 = *Buf1 - *v27;
          if ( *Buf1 == *v27 )
            v28 = Buf1[1] - v27[1];
          if ( !v28 )
            return (unsigned int)-1073741790;
        }
      }
      if ( *((_DWORD *)Buf1 + 4) == 105 && !memcmp(Buf1, &DEVPKEY_DeviceContainer_ConfigFlags, 0x10uLL) && a7 != 7 )
        return (unsigned int)-1073741811;
      break;
  }
  v19 = v42;
  v20 = PnpSetObjectProperty(v42, (_DWORD)a2, a3, v46, (__int64)Buf1, a7, (__int64)pszSrc, a9, a10);
  v21 = v20;
  v22 = a3 - 1;
  if ( v22 )
  {
    if ( v22 == 2
      && v20 >= 0
      && *((_DWORD *)Buf1 + 4) == 9
      && !memcmp(Buf1, &DEVPKEY_Device_PhysicalDeviceLocation, 0x10uLL) )
    {
      CmUpdateDevicePanelInterface(v19, (__int64)a2, v41);
    }
    goto LABEL_28;
  }
  v23 = *((_DWORD *)Buf1 + 4);
  if ( v23 == 12 )
  {
    if ( !memcmp(Buf1, &DEVPKEY_Device_ConfigFlags, 0x10uLL) && v33 && SeAuditingWithTokenForSubcategory(138, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      PiAuditDeviceEnableDisableRequest((__int64)&DestinationString, v37, v40, v21 >= 0);
    }
    goto LABEL_28;
  }
  if ( v23 == 5
    && !memcmp(Buf1, DEVPKEY_Device_InstallError, 0x10uLL)
    && v33
    && SeAuditingWithTokenForSubcategory(138, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( v38 == -536870328 )
    {
      if ( v13 == -536870328 )
        goto LABEL_28;
      v11 = 6;
    }
    else if ( v13 != -536870328 )
    {
      goto LABEL_28;
    }
    PiAuditDeviceOperation(&DestinationString, v11, v21 >= 0);
  }
LABEL_28:
  if ( v34 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v21;
}
