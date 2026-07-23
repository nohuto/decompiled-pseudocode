/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x140AA1A08
 * Callers:
 *     IopGetRootDevices @ 0x140AA1748 (IopGetRootDevices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x1404E1FF0 (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A811C (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407AC750 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407B06DC (IopCreateRootEnumeratedDeviceObject.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1409ABBD8 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PpDeviceRegistration @ 0x1409B4D7C (PpDeviceRegistration.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA0C1C (PnpGetDeviceResourcesFromRegistry.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x140AA1B44 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AE8284 (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF95E0 (PnpIsDeviceInstanceEnabled.c)
 *     PipAllocateDeviceNode @ 0x140B15754 (PipAllocateDeviceNode.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140B1B6A4 (PnpClearDeviceTemporaryProperties.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B2BAF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDevCfgProcessDevice @ 0x140B466DC (PpDevCfgProcessDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // ebx
  struct _DEVICE_OBJECT *v7; // rax
  __int64 v8; // rdx
  void *v9; // rcx
  unsigned int v11; // ebx
  void *Pool2; // rax
  void *v13; // rsi
  int v14; // ebx
  int DeviceInstancePath; // esi
  struct _DEVICE_OBJECT *v16; // r14
  PDEVICE_OBJECT v17; // rcx
  char *v18; // rbx
  int DeviceRegProp; // eax
  __int16 v20; // ax
  int FailedInstallProblemStatus; // r8d
  int v22; // edx
  PVOID v23; // r15
  int v24; // r15d
  __int64 v25; // rdx
  int v26; // eax
  PVOID v27; // r15
  int v28; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-10h] BYREF
  PVOID v32; // [rsp+58h] [rbp-8h] BYREF
  int v33; // [rsp+B0h] [rbp+50h] BYREF
  int v34; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v34 = 0;
  v29 = 0;
  v32 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v14 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v14 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v11 = 8 * v6 + 1024;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( !Pool2 )
    {
      *(_DWORD *)a3 = -1073741670;
      return 0LL;
    }
    memmove(Pool2, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v11 >> 3;
    *(_QWORD *)(a3 + 16) = v13;
  }
  v7 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)SourceString, 0x746C6644u);
  DeviceObject = v7;
  if ( !v7 )
  {
    DeviceInstancePath = IopCreateRootEnumeratedDeviceObject(&DeviceObject);
    if ( DeviceInstancePath >= 0 )
    {
      v16 = DeviceObject;
      v17 = DeviceObject;
      DeviceObject->Flags |= 0x1000u;
      v17->DeviceObjectExtension->ExtensionFlags |= 0x10u;
      if ( (unsigned int)PipAllocateDeviceNode(v17, &v32) == -1073740946 || (v18 = (char *)v32) == 0LL )
      {
        IoDeleteDevice(v16);
        DeviceInstancePath = -1073741670;
      }
      else
      {
        DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v32, SourceString->Length + 2);
        if ( DeviceInstancePath >= 0 )
        {
          RtlCopyUnicodeString((PUNICODE_STRING)(v18 + 40), SourceString);
          PipSetDevNodeFlags((__int64)v18, 0x11u);
          PipSetDevNodeState((__int64)v18, 772);
          PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v18);
          PsReferenceSiloContext(v16);
          v33 = 0;
          v28 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *((_QWORD *)v18 + 6),
                            (__int64)KeyHandle,
                            0xBu,
                            (__int64)&v34,
                            (__int64)&v33,
                            (__int64)&v28,
                            0);
          if ( DeviceRegProp < 0 )
          {
            FailedInstallProblemStatus = -1073741275;
            if ( DeviceRegProp == -1073741275 )
            {
              v22 = 1;
              goto LABEL_36;
            }
          }
          else
          {
            if ( v34 == 4 && v28 == 4 )
            {
              v20 = v33;
            }
            else
            {
              v20 = 0;
              v33 = 0;
            }
            if ( (v20 & 0x20) != 0 )
            {
              FailedInstallProblemStatus = 0;
              v22 = 18;
LABEL_36:
              PipSetDevNodeProblem((__int64)v18, v22, FailedInstallProblemStatus);
              goto LABEL_37;
            }
            if ( (v20 & 0x2000) != 0 )
            {
              FailedInstallProblemStatus = 0;
              v22 = 16;
              goto LABEL_36;
            }
            if ( (v20 & 0x40) != 0 )
            {
              FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*((_QWORD *)v18 + 6), (int)KeyHandle);
              v22 = 28;
              goto LABEL_36;
            }
          }
LABEL_37:
          if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
          {
            v23 = P;
            if ( *((_DWORD *)P + 1) == 4
              && *((_DWORD *)P + 3) >= 4u
              && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            {
              PipSetDevNodeFlags((__int64)v18, 0x100u);
            }
            ExFreePoolWithTag(v23, 0);
          }
          PnpQueryAndSaveDeviceNodeCapabilities((__int64)v18);
          if ( (*((_DWORD *)v18 + 140) & 0x4000) != 0
            && ((*((_DWORD *)v18 + 99) & 0x2000) == 0 || *((_DWORD *)v18 + 101) != 1) )
          {
            PipClearDevNodeProblem((__int64)v18);
            PipSetDevNodeProblem((__int64)v18, 29, 0);
          }
          v24 = *((_DWORD *)v18 + 99) & 0x6000;
          if ( PnpBootMode )
          {
            *((_DWORD *)v18 + 176) |= 0x1000u;
            v29 = 2;
          }
          PnpClearDeviceTemporaryProperties(*((_QWORD *)v18 + 6), KeyHandle);
          if ( (*((_DWORD *)v18 + 140) & 0x4000) == 0 && (v33 & 1) == 0 )
          {
            if ( v24 )
              PpDevCfgProcessDevice(v18, KeyHandle, v29);
            else
              PpDevCfgProcessDeviceOperations(v18, KeyHandle);
          }
          if ( (*((_DWORD *)v18 + 99) & 0x2000) == 0 || (v26 = *((_DWORD *)v18 + 101), v26 != 22) && v26 != 29 )
          {
            if ( !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v18 + 40, 1LL) )
            {
              PipClearDevNodeProblem((__int64)v18);
              PipSetDevNodeProblem((__int64)v18, 22, 0);
            }
          }
          LOBYTE(v25) = 1;
          PpDeviceRegistration((__int64)(v18 + 40), v25, (__int64)(v18 + 56), 0);
          PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v18 + 4), v18 + 40);
          v32 = 0LL;
          if ( (int)PnpGetDeviceResourcesFromRegistry((__int64)v16, 0, 4, &v32, &v29) >= 0 )
          {
            v27 = v32;
            if ( v32 )
            {
              if ( (int)guard_dispatch_icall_no_overrides(4LL, *((_QWORD *)v18 + 4)) >= 0 )
                PipSetDevNodeFlags((__int64)v18, 0x40u);
              ExFreePoolWithTag(v27, 0);
            }
          }
          PsReferenceSiloContext(v16);
          *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v16;
          goto LABEL_6;
        }
        IoDeleteDevice(v16);
      }
    }
    *(_DWORD *)a3 = DeviceInstancePath;
    return 0LL;
  }
  if ( (unsigned __int8)IopIsRootEnumeratedDeviceObjectActive(v7, v7) )
  {
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v8;
LABEL_6:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  ObfDereferenceObject(v9);
  return 1LL;
}
