/*
 * XREFs of IopProcessSetInterfaceState @ 0x1409A91A0
 * Callers:
 *     IoSetDeviceInterfaceState @ 0x1409AA7B0 (IoSetDeviceInterfaceState.c)
 *     IopDoDeferredSetInterfaceState @ 0x140B0C470 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1407298C0 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14072A6E0 (ZwOpenSymbolicLinkObject.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IoGetDeviceProperty @ 0x1409556D0 (IoGetDeviceProperty.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140962ED4 (_CmGetDeviceInterfaceClassGuid.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1409A9DA0 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1409A9E30 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireSharedLock @ 0x1409AA00C (PiDmObjectManagerAcquireSharedLock.c)
 *     PiDmLookupObject @ 0x1409AA1E0 (PiDmLookupObject.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409AA448 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpSetDeviceClassChange @ 0x1409AA9B0 (PnpSetDeviceClassChange.c)
 *     _PnpRaiseNtPlugPlayInterfacePropertyChangeEvent @ 0x1409AB44C (_PnpRaiseNtPlugPlayInterfacePropertyChangeEvent.c)
 *     PipCanEnableInterfaces @ 0x1409AB49C (PipCanEnableInterfaces.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     PiDeferSetInterfaceState @ 0x140B20204 (PiDeferSetInterfaceState.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140B3BB84 (PiRemoveDeferredSetInterfaceState.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(unsigned __int16 *a1, unsigned __int8 a2, char a3)
{
  WCHAR *v4; // r12
  void *v5; // r15
  struct _KTHREAD *v6; // rdi
  struct _DEVICE_OBJECT *v7; // r13
  const WCHAR *v8; // rsi
  const WCHAR *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  WCHAR *Pool2; // rax
  const WCHAR *v13; // rbx
  int DeviceInterfaceClassGuid; // ebx
  __int64 v15; // rax
  int ObjectProperty; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  GUID *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  struct _KLOCK_ENTRIES *v27; // r9
  void *InitialStack; // rcx
  struct _DEVICE_OBJECT *v29; // rax
  __int64 v30; // rdx
  PVOID DeviceNode; // r8
  NTSTATUS DeviceProperty; // eax
  char v33; // [rsp+68h] [rbp-A0h]
  __int16 v34; // [rsp+69h] [rbp-9Fh]
  ULONG BufferLength; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v37; // [rsp+70h] [rbp-98h] BYREF
  struct _KTHREAD *v38; // [rsp+78h] [rbp-90h] BYREF
  const WCHAR *v39; // [rsp+80h] [rbp-88h]
  WCHAR *v40; // [rsp+88h] [rbp-80h]
  struct _DEVICE_OBJECT *v41; // [rsp+90h] [rbp-78h]
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v44; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-10h] BYREF

  v34 = a2;
  BufferLength = 0;
  v38 = 0LL;
  v4 = 0LL;
  v37 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v33 = 0;
  v8 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)P = 0LL;
  v46 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v44 = 0LL;
  if ( !a1 )
    goto LABEL_28;
  v9 = (const WCHAR *)*((_QWORD *)a1 + 1);
  if ( !v9 )
    goto LABEL_28;
  v10 = *a1;
  if ( !(_WORD)v10 )
    goto LABEL_28;
  v11 = a1[1];
  if ( (unsigned __int16)v11 < 2u )
    goto LABEL_12;
  if ( (unsigned __int16)v10 > (unsigned __int16)v11 )
  {
LABEL_28:
    DeviceInterfaceClassGuid = -1073741811;
    goto LABEL_17;
  }
  if ( *v9
    && ((_WORD)v10 != (_WORD)v11 || v9[((unsigned __int64)*a1 >> 1) - 1])
    && (v10 > v11 - 2 || v9[(v10 >> 1) - 1] && v9[v10 >> 1]) )
  {
    Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    if ( !Pool2 )
      goto LABEL_75;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    v8 = v13;
    v9 = 0LL;
    v13[(unsigned __int64)*a1 >> 1] = 0;
  }
  else
  {
    v8 = v9;
  }
LABEL_12:
  v39 = v8;
  DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid((__int64)v9, v8, (__int64)&v46);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  DeviceInterfaceClassGuid = IopBuildGlobalSymbolicLinkString(a1, P);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  v15 = ExAllocatePool2(0x100uLL);
  v40 = (WCHAR *)v15;
  v4 = (WCHAR *)v15;
  if ( !v15 )
  {
LABEL_75:
    DeviceInterfaceClassGuid = -1073741670;
    goto LABEL_17;
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)v8,
                     3,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     &v37,
                     v15,
                     0x190u,
                     (__int64)&v37 + 4,
                     0);
  DeviceInterfaceClassGuid = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_32;
  if ( ObjectProperty < 0 )
    goto LABEL_17;
  if ( (_DWORD)v37 != 18 )
    goto LABEL_32;
  DeviceInterfaceClassGuid = RtlInitUnicodeStringEx(&v44, v4);
  if ( DeviceInterfaceClassGuid < 0 )
    goto LABEL_17;
  v29 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&v44, 0x49706E50u);
  LOBYTE(v30) = v34;
  v41 = v29;
  v7 = v29;
  if ( !v29 )
  {
    if ( !(_BYTE)v34 )
    {
      DeviceNode = 0LL;
      goto LABEL_61;
    }
    goto LABEL_32;
  }
  DeviceNode = v29->DeviceObjectExtension->DeviceNode;
  if ( (_BYTE)v34 )
  {
    if ( (unsigned __int8)PipCanEnableInterfaces(v29->DeviceObjectExtension->DeviceNode, v30, DeviceNode) )
    {
      LOBYTE(v30) = v34;
      goto LABEL_61;
    }
LABEL_32:
    DeviceInterfaceClassGuid = -1073741808;
    goto LABEL_17;
  }
LABEL_61:
  if ( a3 && DeviceNode && (v7->DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
  {
    if ( (_BYTE)v30 )
      DeviceInterfaceClassGuid = PiDeferSetInterfaceState(DeviceNode, a1);
    else
      PiRemoveDeferredSetInterfaceState(DeviceNode, a1);
  }
  else
  {
    if ( (_BYTE)v30 )
    {
      BufferLength = 512;
      while ( 1 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = (void *)ExAllocatePool2(0x100uLL);
        if ( !v5 )
          goto LABEL_75;
        DeviceProperty = IoGetDeviceProperty(
                           v7,
                           DevicePropertyPhysicalDeviceObjectName,
                           BufferLength,
                           v5,
                           &BufferLength);
        DeviceInterfaceClassGuid = DeviceProperty;
        if ( DeviceProperty != -1073741789 )
        {
          if ( DeviceProperty < 0 )
            goto LABEL_17;
          if ( !BufferLength )
            goto LABEL_17;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v5);
          v18 = PiDmAddCacheReferenceForObject(3LL, v8, &v38);
          v6 = v38;
          DeviceInterfaceClassGuid = v18;
          if ( v18 < 0 )
            goto LABEL_17;
          KsepCacheLock((unsigned __int64 *)v38, v19, v20, v21);
          if ( (v6->QuantumTarget & 1) == 0 )
          {
            DeviceInterfaceClassGuid = -1073741772;
            goto LABEL_53;
          }
          if ( v6->InitialStack )
          {
            DeviceInterfaceClassGuid = 0x40000000;
            goto LABEL_53;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          DeviceInterfaceClassGuid = ZwOpenSymbolicLinkObject(&v6->InitialStack, 0xF0001u, &ObjectAttributes);
          if ( DeviceInterfaceClassGuid == -1073741772 )
            DeviceInterfaceClassGuid = ZwCreateSymbolicLinkObject(
                                         &v6->InitialStack,
                                         0xF0001u,
                                         &ObjectAttributes,
                                         &DestinationString);
          if ( DeviceInterfaceClassGuid >= 0 )
            HIBYTE(v34) = 1;
          goto LABEL_41;
        }
      }
    }
    DeviceInterfaceClassGuid = 0;
    PiDmObjectManagerAcquireSharedLock(&PiDmDeviceInterfaceManager);
    v24 = PiDmLookupObject(&PiDmDeviceInterfaceManager, v8);
    v6 = (struct _KTHREAD *)v24;
    if ( v24 )
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    else
      DeviceInterfaceClassGuid = -1073741772;
    PiDmObjectManagerReleaseLock(&PiDmDeviceInterfaceManager);
    if ( DeviceInterfaceClassGuid >= 0 )
    {
      KsepCacheLock((unsigned __int64 *)v6, v25, v26, v27);
      InitialStack = v6->InitialStack;
      if ( InitialStack )
      {
        ZwClose(InitialStack);
        v6->InitialStack = 0LL;
        HIBYTE(v34) = 1;
LABEL_53:
        v33 = 1;
      }
      else
      {
        DeviceInterfaceClassGuid = -1073741772;
      }
LABEL_41:
      CmpUnlockSiloKeyLockTracker(v6);
      v4 = v40;
      v7 = v41;
      v8 = v39;
      if ( HIBYTE(v34) )
      {
        v22 = &GUID_DEVICE_INTERFACE_ARRIVAL;
        if ( !(_BYTE)v34 )
          v22 = &GUID_DEVICE_INTERFACE_REMOVAL;
        PnpSetDeviceClassChange(v22, &v46, a1);
        PnpRaiseNtPlugPlayInterfacePropertyChangeEvent(v23, v8);
      }
      if ( v33 )
        PiDmRemoveCacheReferenceForObject(3LL, v8);
    }
  }
LABEL_17:
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  PnpUnicodeStringToWstrFree(v8, a1);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x49706E50u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
    PiDmObjectRelease((unsigned int *)v6);
  return (unsigned int)DeviceInterfaceClassGuid;
}
