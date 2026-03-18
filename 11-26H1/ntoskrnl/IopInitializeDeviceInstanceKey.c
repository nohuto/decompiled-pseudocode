/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x140AA0078
 * Callers:
 *     IopGetRootDevices @ 0x140A9FDB8 (IopGetRootDevices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x1404E8C30 (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A55DC (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407A9AD4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407AD67C (IopCreateRootEnumeratedDeviceObject.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140908B88 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PpDeviceRegistration @ 0x140912C9C (PpDeviceRegistration.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x140AA01B4 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140AA5A24 (PnpGetDeviceResourcesFromRegistry.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AD10DC (PpDevCfgProcessDeviceOperations.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF6F40 (PnpIsDeviceInstanceEnabled.c)
 *     PipAllocateDeviceNode @ 0x140B13C94 (PipAllocateDeviceNode.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140B19254 (PnpClearDeviceTemporaryProperties.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B29A70 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDevCfgProcessDevice @ 0x140B4491C (PpDevCfgProcessDevice.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v22; // rdx
  PVOID v23; // r15
  __int64 v24; // rdx
  int v25; // r15d
  __int64 v26; // rdx
  int v27; // eax
  PVOID v28; // r15
  int v29; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-10h] BYREF
  PVOID v33; // [rsp+58h] [rbp-8h] BYREF
  int v34; // [rsp+B0h] [rbp+50h] BYREF
  int v35; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v35 = 0;
  v30 = 0;
  v33 = 0LL;
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
      if ( (unsigned int)PipAllocateDeviceNode(v17, &v33) == -1073740946 || (v18 = (char *)v33) == 0LL )
      {
        IoDeleteDevice(v16);
        DeviceInstancePath = -1073741670;
      }
      else
      {
        DeviceInstancePath = PnpAllocateDeviceInstancePath((__int64)v33, SourceString->Length + 2);
        if ( DeviceInstancePath >= 0 )
        {
          RtlCopyUnicodeString((PUNICODE_STRING)(v18 + 40), SourceString);
          PipSetDevNodeFlags((__int64)v18, 0x11u);
          PipSetDevNodeState((__int64)v18, 772);
          PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v18);
          PsReferenceSiloContext(v16);
          v34 = 0;
          v29 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *((_QWORD *)v18 + 6),
                            (__int64)KeyHandle,
                            0xBu,
                            (__int64)&v35,
                            (__int64)&v34,
                            (__int64)&v29,
                            0);
          if ( DeviceRegProp < 0 )
          {
            FailedInstallProblemStatus = -1073741275;
            if ( DeviceRegProp == -1073741275 )
            {
              v22 = 1LL;
              goto LABEL_36;
            }
          }
          else
          {
            if ( v35 == 4 && v29 == 4 )
            {
              v20 = v34;
            }
            else
            {
              v20 = 0;
              v34 = 0;
            }
            if ( (v20 & 0x20) != 0 )
            {
              FailedInstallProblemStatus = 0;
              v22 = 18LL;
LABEL_36:
              PipSetDevNodeProblem((__int64)v18, v22, FailedInstallProblemStatus);
              goto LABEL_37;
            }
            if ( (v20 & 0x2000) != 0 )
            {
              FailedInstallProblemStatus = 0;
              v22 = 16LL;
              goto LABEL_36;
            }
            if ( (v20 & 0x40) != 0 )
            {
              FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(*((_QWORD *)v18 + 6), (int)KeyHandle);
              v22 = 28LL;
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
            PipClearDevNodeProblem((__int64)v18, v24);
            PipSetDevNodeProblem((__int64)v18, 29LL, 0);
          }
          v25 = *((_DWORD *)v18 + 99) & 0x6000;
          if ( PnpBootMode )
          {
            *((_DWORD *)v18 + 176) |= 0x1000u;
            v30 = 2;
          }
          PnpClearDeviceTemporaryProperties(*((_QWORD *)v18 + 6), KeyHandle);
          if ( (*((_DWORD *)v18 + 140) & 0x4000) == 0 && (v34 & 1) == 0 )
          {
            if ( v25 )
              PpDevCfgProcessDevice(v18, KeyHandle, v30);
            else
              PpDevCfgProcessDeviceOperations(v18, KeyHandle);
          }
          if ( (*((_DWORD *)v18 + 99) & 0x2000) == 0 || (v27 = *((_DWORD *)v18 + 101), v27 != 22) && v27 != 29 )
          {
            if ( !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v18 + 40, 1LL) )
            {
              PipClearDevNodeProblem((__int64)v18, v26);
              PipSetDevNodeProblem((__int64)v18, 22LL, 0);
            }
          }
          LOBYTE(v26) = 1;
          PpDeviceRegistration((__int64)(v18 + 40), v26, (__int64)(v18 + 56), 0);
          PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v18 + 4), v18 + 40);
          v33 = 0LL;
          if ( (int)PnpGetDeviceResourcesFromRegistry((_DWORD)v16, 0, 4, (unsigned int)&v33, (__int64)&v30) >= 0 )
          {
            v28 = v33;
            if ( v33 )
            {
              if ( (int)guard_dispatch_icall_no_overrides(4LL, *((_QWORD *)v18 + 4)) >= 0 )
                PipSetDevNodeFlags((__int64)v18, 0x40u);
              ExFreePoolWithTag(v28, 0);
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
