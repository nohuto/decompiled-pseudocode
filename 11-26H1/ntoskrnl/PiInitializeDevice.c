/*
 * XREFs of PiInitializeDevice @ 0x1407B6748
 * Callers:
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x1404E1FF0 (PpDevNodeInsertIntoTree.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A811C (PnpAllocateDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407AC750 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407B06DC (IopCreateRootEnumeratedDeviceObject.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1409ABBD8 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpSetPlugPlayEvent @ 0x1409ABCFC (PnpSetPlugPlayEvent.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PnpConcatenateUnicodeStrings @ 0x1409B1D9C (PnpConcatenateUnicodeStrings.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140A69BB0 (PnpUnicodeStringToWstr.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     PipAllocateDeviceNode @ 0x140B15754 (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B2BAF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiInitializeDevice(const UNICODE_STRING *a1)
{
  __int64 v2; // r14
  WCHAR *Pool2; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _DEVICE_OBJECT *v5; // rax
  struct _DEVICE_OBJECT *v6; // rsi
  int DeviceInstancePath; // ebx
  int v8; // eax
  __int64 v9; // rdx
  unsigned __int16 Length; // r15
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  __int16 v15; // ax
  __int64 FailedInstallProblemStatus; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  PDEVICE_OBJECT v21; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  __int64 v23; // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h] BYREF
  PVOID P; // [rsp+60h] [rbp-9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  int v28; // [rsp+D8h] [rbp+6Fh] BYREF
  int v29; // [rsp+E0h] [rbp+77h] BYREF
  int v30; // [rsp+E8h] [rbp+7Fh] BYREF

  v30 = 0;
  v2 = 0LL;
  v28 = 0;
  Pool2 = 0LL;
  v29 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  Handle = 0LL;
  PpDevNodeLockTree(1LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v5 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(a1, 1131441744LL);
  v21 = v5;
  v6 = v5;
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x43706E50u);
    DeviceInstancePath = 0;
LABEL_10:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    goto LABEL_11;
  }
  v8 = PnpUnicodeStringToWstr(&v23, 0LL, a1);
  v2 = v23;
  DeviceInstancePath = v8;
  if ( v8 < 0
    || (DeviceInstancePath = PiPnpRtlBeginOperation(&P, v9), DeviceInstancePath < 0)
    || (DeviceInstancePath = CmOpenDeviceRegKey(PiPnpRtlCtx, v2, 16, 0, 983103, 0, (__int64)&Handle, 0LL),
        DeviceInstancePath < 0) )
  {
LABEL_8:
    if ( v6 )
      IoDeleteDevice(v6);
    goto LABEL_10;
  }
  *(_DWORD *)&DestinationString.Length = 0;
  v28 = 512;
  DestinationString.Buffer = 0LL;
  Length = 0;
  Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
  {
    DeviceInstancePath = -1073741670;
    goto LABEL_8;
  }
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v2, (_DWORD)Handle, 5, (__int64)&v29, (__int64)Pool2, (__int64)&v28, 0) >= 0
    && v29 == 1
    && v28 )
  {
    if ( RtlInitUnicodeStringEx(&DestinationString, Pool2) >= 0 )
    {
      Length = DestinationString.Length;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 0;
      Length = 0;
      DestinationString.Buffer = 0LL;
    }
  }
  v12 = IopCreateRootEnumeratedDeviceObject(&v21);
  v6 = v21;
  DeviceInstancePath = v12;
  if ( v12 < 0 )
    goto LABEL_8;
  v21->Flags |= 0x1000u;
  v13 = PipAllocateDeviceNode(v6, &v24);
  v14 = v24;
  if ( !v24 )
  {
    if ( v13 == -1073740946 )
      v13 = -1073741670;
    DeviceInstancePath = v13;
    if ( v13 >= 0 )
      goto LABEL_10;
    goto LABEL_8;
  }
  PipSetDevNodeFlags(v24, 17LL);
  PipSetDevNodeState(v14, 772);
  v28 = 4;
  if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v2, (_DWORD)Handle, 11, (__int64)&v29, (__int64)&v30, (__int64)&v28, 0) >= 0 )
  {
    if ( v29 == 4 && v28 == 4 )
    {
      v15 = v30;
    }
    else
    {
      v15 = 0;
      v30 = 0;
    }
    if ( (v15 & 0x20) != 0 )
    {
      FailedInstallProblemStatus = 0LL;
      v17 = 18LL;
LABEL_43:
      PipSetDevNodeProblem(v14, v17, FailedInstallProblemStatus);
      goto LABEL_44;
    }
    if ( (v15 & 0x2000) != 0 )
    {
      FailedInstallProblemStatus = 0LL;
      v17 = 16LL;
      goto LABEL_43;
    }
    if ( (v15 & 0x40) != 0 )
    {
      FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(v2, (int)Handle);
      v17 = 28LL;
      goto LABEL_43;
    }
  }
LABEL_44:
  DeviceInstancePath = PnpAllocateDeviceInstancePath(v14, a1->Length + 2);
  if ( DeviceInstancePath < 0 )
    goto LABEL_8;
  RtlCopyUnicodeString((PUNICODE_STRING)(v14 + 40), a1);
  if ( !Length || (int)PnpConcatenateUnicodeStrings((PUNICODE_STRING)(v14 + 56), &DestinationString) < 0 )
  {
    *(_DWORD *)(v14 + 56) = 0;
    *(_QWORD *)(v14 + 64) = 0LL;
  }
  DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(v14 + 32), v14 + 40);
  if ( DeviceInstancePath < 0 )
    goto LABEL_8;
  PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, v14);
  PsReferenceSiloContext(v6);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  PnpQueryAndSaveDeviceNodeCapabilities(v14);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v18, *(_QWORD *)(v14 + 48), 1LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, *(_QWORD *)(v14 + 48), 14LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v20, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(v14 + 32));
LABEL_11:
  PpDevNodeUnlockTree(1LL);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation(P);
  if ( v2 )
    PnpUnicodeStringToWstrFree(v2, a1);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)DeviceInstancePath;
}
