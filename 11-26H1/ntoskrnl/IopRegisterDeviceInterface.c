/*
 * XREFs of IopRegisterDeviceInterface @ 0x1409A9840
 * Callers:
 *     PiCMRegisterDeviceInterface @ 0x14094D1B4 (PiCMRegisterDeviceInterface.c)
 *     IoRegisterDeviceInterface @ 0x1409AB500 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140A47C2C (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmValidateDeviceInterfaceName @ 0x140960DB0 (_CmValidateDeviceInterfaceName.c)
 *     _CmGetDeviceInterfaceName @ 0x140963098 (_CmGetDeviceInterfaceName.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     PiDmObjectAcquireSharedLock @ 0x140967DB8 (PiDmObjectAcquireSharedLock.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409A9DA0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409A9E30 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409AA00C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1409AA1E0 (PiDmLookupObject.c)
 *     PiDmListAddObject @ 0x1409AA3C0 (PiDmListAddObject.c)
 *     _PnpStringFromGuid @ 0x1409B134C (_PnpStringFromGuid.c)
 *     _CmDeleteDeviceInterface @ 0x1409B846C (_CmDeleteDeviceInterface.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     _CmCreateDeviceInterface @ 0x140AF4EDC (_CmCreateDeviceInterface.c)
 *     PipCheckForDenyExecute @ 0x140B04190 (PipCheckForDenyExecute.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(
        const wchar_t *a1,
        __int64 a2,
        const wchar_t *a3,
        char a4,
        PVOID *a5,
        _DWORD *a6)
{
  PVOID *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned int *v9; // r15
  int DeviceInterfaceName; // edi
  wchar_t *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r13
  PVOID v15; // rbx
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KLOCK_ENTRIES *v20; // r9
  int v21; // r12d
  int v22; // eax
  int v23; // eax
  HANDLE v24; // r12
  unsigned int *v25; // rbx
  __int64 v27; // rax
  PVOID v28; // rbx
  __int64 v29; // rax
  int v30; // edi
  wchar_t *v31; // rax
  size_t v32; // [rsp+30h] [rbp-D0h]
  size_t v33; // [rsp+30h] [rbp-D0h]
  char v34; // [rsp+60h] [rbp-A0h] BYREF
  char v35; // [rsp+61h] [rbp-9Fh]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch] BYREF
  int v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  PVOID v43; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v45; // [rsp+A8h] [rbp-58h] BYREF
  __int128 Source2; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v48[80]; // [rsp+110h] [rbp+10h] BYREF

  v6 = a5;
  v38 = a1;
  v35 = a4;
  *a5 = 0LL;
  v7 = 0LL;
  v42 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v43 = 0LL;
  LOBYTE(v39) = 0;
  v45 = 0LL;
  v34 = 0;
  P = 0LL;
  v41 = 0;
  v40 = 0;
  Source2 = 0LL;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_59;
  v37 = 512;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  *a5 = Pool2;
  if ( !Pool2 )
    goto LABEL_58;
  LODWORD(v32) = 512;
  DeviceInterfaceName = CmGetDeviceInterfaceName((__int64)&v37, Str2, v38, a3, 0, Pool2, v32, &v37);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v30 = v37;
  v31 = (wchar_t *)ExAllocatePool2(0x100uLL);
  *a5 = v31;
  if ( !v31 )
  {
LABEL_58:
    DeviceInterfaceName = -1073741670;
    goto LABEL_59;
  }
  LODWORD(v33) = v30;
  DeviceInterfaceName = CmGetDeviceInterfaceName((__int64)&v37, Str2, v38, a3, 0, v31, v33, &v37);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
  {
LABEL_59:
    v24 = Handle;
    goto LABEL_26;
  }
  if ( a6 )
    *a6 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v14 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v15 = *a5;
  v16 = 0;
  PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
  v17 = PiDmLookupObject(&PiDmDeviceInterfaceManager, v15);
  v8 = v17;
  if ( v17 )
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
  else
    v16 = -1073741772;
  PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
  if ( v16 >= 0 )
  {
    PiDmObjectAcquireSharedLock((signed __int64 *)v8, v18, v19, v20);
    v21 = *(_DWORD *)(v8 + 32) & 1;
    CmpUnlockSiloKeyLockTracker((struct _KTHREAD *)v8);
  }
  else
  {
    LOBYTE(v21) = v39;
  }
  v22 = PiDmAddCacheReferenceForObject(4LL, Str2, &P);
  v9 = (unsigned int *)P;
  DeviceInterfaceName = v22;
  if ( v22 < 0 )
    goto LABEL_52;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1LL, v38, &v43);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_52;
  DeviceInterfaceName = PnpGetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)v38,
                          1,
                          0LL,
                          0LL,
                          (__int64)&DEVPKEY_Device_ContainerId,
                          &v41,
                          (__int64)&Source2,
                          0x10u,
                          (__int64)&v40,
                          0);
  if ( DeviceInterfaceName == -1073741275 )
  {
    Source2 = 0LL;
  }
  else if ( DeviceInterfaceName < 0 )
  {
LABEL_52:
    v24 = Handle;
    goto LABEL_25;
  }
  if ( RtlCompareMemory(&NullGuid, &Source2, 0x10uLL) != 16 )
  {
    DeviceInterfaceName = PnpStringFromGuid(&Source2, v48);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_52;
    v23 = PiDmAddCacheReferenceForObject(5LL, v48, &v42);
    v7 = v42;
    DeviceInterfaceName = v23;
    if ( v23 < 0 )
      goto LABEL_52;
  }
  if ( !(_BYTE)v21 )
  {
    DeviceInterfaceName = PiPnpRtlBeginOperation(&v45);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_52;
    DeviceInterfaceName = CmCreateDeviceInterface(
                            PiPnpRtlCtx,
                            (unsigned int)*a5,
                            2,
                            (unsigned int)&Handle,
                            (__int64)&v34,
                            0);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_52;
  }
  if ( !v8 )
  {
    v28 = *a5;
    DeviceInterfaceName = 0;
    PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
    v29 = PiDmLookupObject(&PiDmDeviceInterfaceManager, v28);
    v8 = v29;
    if ( v29 )
      _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    else
      DeviceInterfaceName = -1073741772;
    PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
    if ( DeviceInterfaceName < 0 )
      goto LABEL_52;
  }
  PiDmListAddObject(0LL, v9, v8, 0LL);
  do
    ++v14;
  while ( v38[v14] );
  v24 = Handle;
  DeviceInterfaceName = PnpSetObjectProperty(
                          PiPnpRtlCtx,
                          (unsigned int)*a5,
                          3,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstanceId,
                          18,
                          (__int64)v38,
                          2 * (int)v14 + 2,
                          v34 != 0 ? 0x20000 : 0);
  if ( DeviceInterfaceName >= 0 )
  {
    PiDmListAddObject(1LL, v43, v8, 0LL);
    if ( v7 )
      PiDmListAddObject(2LL, v7, v8, 0LL);
  }
  else if ( v34 )
  {
    CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
  }
LABEL_25:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( DeviceInterfaceName < 0 )
  {
LABEL_26:
    if ( !*a5 )
      goto LABEL_27;
    ExFreePoolWithTag(*a5, 0);
    v27 = 0LL;
    goto LABEL_46;
  }
  if ( !v35 )
  {
    v6 = (PVOID *)*a5;
    DeviceInterfaceName = CmValidateDeviceInterfaceName(0LL, (const WCHAR *)*a5);
    if ( DeviceInterfaceName >= 0 )
    {
      v27 = 0x5C003F003F005CLL;
LABEL_46:
      *v6 = (PVOID)v27;
    }
  }
LABEL_27:
  if ( v24 )
    ZwClose(v24);
  if ( v45 )
    PiPnpRtlEndOperation((char *)v45);
  if ( v8 )
    PiDmObjectRelease((unsigned int *)v8);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(v9[7], *((_QWORD *)v9 + 2));
    PiDmObjectRelease(v9);
  }
  v25 = (unsigned int *)v43;
  if ( v43 )
  {
    PiDmRemoveCacheReferenceForObject(*((unsigned int *)v43 + 7), *((_QWORD *)v43 + 2));
    PiDmObjectRelease(v25);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(*(unsigned int *)(v7 + 28), *(_QWORD *)(v7 + 16));
    PiDmObjectRelease((unsigned int *)v7);
  }
  return (unsigned int)DeviceInterfaceName;
}
