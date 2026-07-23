/*
 * XREFs of PiControlGetPropertyData @ 0x140A93360
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1409675B8 (PiControlCopyUserModeCallersBuffer.c)
 *     PnpGetDeviceDependencyList @ 0x1409B2710 (PnpGetDeviceDependencyList.c)
 *     PiControlGetDevicePowerData @ 0x140A93788 (PiControlGetDevicePowerData.c)
 *     PiControlGetDeviceStack @ 0x140A93A48 (PiControlGetDeviceStack.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140A93DA4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlGetPropertyData(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  wchar_t *v7; // rdi
  void *v8; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  struct _DEVICE_OBJECT *v11; // r13
  __int64 DeviceNode; // rbx
  int v13; // eax
  unsigned int *v14; // rsi
  ULONG v15; // r14d
  unsigned int v16; // eax
  unsigned int v17; // eax
  DEVICE_REGISTRY_PROPERTY v18; // edx
  NTSTATUS DeviceStack; // eax
  int DeviceDependencyList; // ebx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  void *v26; // rcx
  int v27; // eax
  void *Pool2; // rax
  wchar_t *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // edx
  unsigned int v38; // edx
  int DeviceRegProp; // eax
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v41; // [rsp+88h] [rbp+38h] BYREF

  v4 = *a2;
  v41 = 0;
  v7 = 0LL;
  *(_OWORD *)P = 0LL;
  WORD1(P[0]) = v4;
  LOWORD(P[0]) = v4;
  if ( (_WORD)v4 && (unsigned __int16)v4 <= 0x190u && (v4 & 1) == 0 )
  {
    v8 = (void *)*((_QWORD *)a2 + 1);
    if ( a4 )
    {
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      P[1] = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      DeviceDependencyList = PiControlCopyUserModeCallersBuffer(Pool2, v8, v4, 2, a4, 1);
      if ( DeviceDependencyList < 0 )
      {
        v29 = (wchar_t *)P[1];
LABEL_41:
        ExFreePoolWithTag(v29, 0);
        return (unsigned int)DeviceDependencyList;
      }
    }
    else
    {
      P[1] = *((PVOID *)a2 + 1);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    v11 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)P, 0x43706E50u);
    if ( a4 && P[1] )
      ExFreePoolWithTag(P[1], 0);
    if ( !v11 || (DeviceNode = (__int64)v11->DeviceObjectExtension->DeviceNode) == 0 )
    {
      DeviceDependencyList = -1073741810;
      goto LABEL_21;
    }
    v13 = *(_DWORD *)(DeviceNode + 300);
    if ( v13 == 790 || v13 == 789 )
    {
      DeviceDependencyList = -1073741738;
      goto LABEL_21;
    }
    v14 = (unsigned int *)(a2 + 16);
    v15 = *((_DWORD *)a2 + 8);
    if ( v15 )
    {
      if ( a4 )
      {
        v7 = (wchar_t *)ExAllocatePool2(0x101uLL);
        if ( !v7 )
        {
          DeviceDependencyList = -1073741670;
          goto LABEL_21;
        }
      }
      else
      {
        v7 = (wchar_t *)*((_QWORD *)a2 + 3);
      }
    }
    v16 = *((_DWORD *)a2 + 4);
    if ( v16 > 8 )
    {
      v22 = v16 - 10;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( !v23 )
        {
          v18 = DevicePropertyInstallState;
          goto LABEL_18;
        }
        v24 = v23 - 2;
        if ( !v24 )
        {
          *v14 = 4;
          if ( v15 < 4 )
          {
            DeviceDependencyList = -1073741789;
            goto LABEL_21;
          }
          v25 = *(_DWORD *)(DeviceNode + 684);
          DeviceDependencyList = 0;
          *(_DWORD *)v7 = v25;
          goto LABEL_30;
        }
        v35 = v24 - 1;
        if ( !v35 )
        {
          DeviceStack = PiControlGetDeviceStack(DeviceNode, v15, v7, a2 + 16);
          goto LABEL_19;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_86;
          v37 = 1;
        }
        else
        {
          v37 = 0;
        }
        DeviceDependencyList = PnpGetDeviceDependencyList(DeviceNode, v37, v7, v15 >> 1, (unsigned int *)a2 + 8);
        v38 = 2 * *v14;
        *v14 = v38;
        if ( (int)(DeviceDependencyList + 0x80000000) >= 0 && DeviceDependencyList != -1073741789 )
          goto LABEL_21;
        if ( v38 <= 2 )
        {
          DeviceDependencyList = -1073741772;
          *v14 = 0;
        }
      }
      else
      {
        if ( v15 < 4 )
        {
          DeviceDependencyList = -1073741789;
        }
        else
        {
          PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0LL, v7);
          DeviceDependencyList = 0;
        }
        *v14 = 4;
      }
    }
    else
    {
      if ( v16 == 8 )
      {
        v18 = DevicePropertyAddress;
        goto LABEL_18;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
        v18 = DevicePropertyPhysicalDeviceObjectName;
LABEL_18:
        DeviceStack = IoGetDeviceProperty(v11, v18, v15, v7, (PULONG)a2 + 8);
LABEL_19:
        DeviceDependencyList = DeviceStack;
        goto LABEL_20;
      }
      v30 = v17 - 1;
      if ( !v30 )
      {
        v18 = DevicePropertyBusTypeGuid;
        goto LABEL_18;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        v18 = DevicePropertyLegacyBusType;
        goto LABEL_18;
      }
      v32 = v31 - 1;
      if ( !v32 )
      {
        v18 = DevicePropertyBusNumber;
        goto LABEL_18;
      }
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( !v34 )
        {
          v18 = DevicePropertyRemovalPolicy;
          goto LABEL_18;
        }
        if ( v34 == 1 )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(DeviceNode + 48),
                            0LL,
                            0x22u,
                            (__int64)&v41,
                            (__int64)v7,
                            (__int64)(a2 + 16),
                            0);
          DeviceDependencyList = DeviceRegProp;
          if ( DeviceRegProp >= 0 )
          {
            if ( v41 != 4 )
            {
              DeviceDependencyList = -1073741584;
              goto LABEL_21;
            }
            goto LABEL_30;
          }
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_21;
          DeviceDependencyList = -1073741772;
          goto LABEL_20;
        }
LABEL_86:
        DeviceDependencyList = -1073741811;
        goto LABEL_21;
      }
      DeviceDependencyList = PiControlGetDevicePowerData(DeviceNode, v10, v15, v7, a2 + 16);
      if ( DeviceDependencyList == -2147483643 )
        DeviceDependencyList = -1073741789;
    }
LABEL_20:
    if ( DeviceDependencyList < 0 )
    {
LABEL_21:
      ExReleaseResourceLite(&IopDeviceTreeLock);
      KeLeaveCriticalRegion();
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x43706E50u);
      if ( !a4 || !v7 )
        return (unsigned int)DeviceDependencyList;
      v29 = v7;
      goto LABEL_41;
    }
LABEL_30:
    if ( a4 )
    {
      if ( v15 )
      {
        v26 = (void *)*((_QWORD *)a2 + 3);
        if ( v26 )
        {
          v27 = PiControlCopyUserModeCallersBuffer(v26, v7, v15, 1, a4, 0);
          if ( v27 < 0 )
            DeviceDependencyList = v27;
        }
      }
      else
      {
        *((_QWORD *)a2 + 3) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)a2 + 3) = v7;
    }
    goto LABEL_21;
  }
  return 3221225485LL;
}
