/*
 * XREFs of IoCreateDevice @ 0x1409FEBC0
 * Callers:
 *     DifIoCreateDeviceWrapper @ 0x14065A660 (DifIoCreateDeviceWrapper.c)
 *     HalpAddDevice @ 0x140781BF0 (HalpAddDevice.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407AD67C (IopCreateRootEnumeratedDeviceObject.c)
 *     VRegSetup @ 0x1408A5210 (VRegSetup.c)
 *     RawMountVolume @ 0x140A35E6C (RawMountVolume.c)
 *     PiSwGetChildPdo @ 0x140A7AAD4 (PiSwGetChildPdo.c)
 *     IoCreateDeviceSecure @ 0x140AF8350 (IoCreateDeviceSecure.c)
 *     VfFilterAttach @ 0x140C3BD80 (VfFilterAttach.c)
 *     ViDdiDriverEntry @ 0x140C43060 (ViDdiDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PiDaDriverEntry @ 0x140CC6B60 (PiDaDriverEntry.c)
 *     RawInitialize @ 0x140CD9A40 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140CE01C0 (WmipDriverEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     IopInsertRemoveDevice @ 0x1404380FC (IopInsertRemoveDevice.c)
 *     RtlGetNtProductType @ 0x140450F70 (RtlGetNtProductType.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     KeInitializeDeviceQueue @ 0x1404ED660 (KeInitializeDeviceQueue.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1409FF1D0 (IopCreateSecurityDescriptorPerType.c)
 *     EtwTiLogDeviceObjectLoadUnload @ 0x1409FF3B8 (EtwTiLogDeviceObjectLoadUnload.c)
 *     AstLogDeviceCreated @ 0x1409FF51C (AstLogDeviceCreated.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     PoVolumeDevice @ 0x140B52CC8 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x140B63D74 (IopCreateVpb.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoCreateDevice(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  ACL *v7; // rbx
  ULONG v8; // esi
  unsigned __int64 v10; // rdi
  ULONG v11; // ecx
  PVOID v12; // r14
  __int64 v13; // rdx
  __int16 v14; // r13
  ACL *v15; // r15
  int v16; // eax
  ACL *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // esi
  NTSTATUS inserted; // ebx
  char *v21; // rdx
  ULONG v22; // edx
  __int16 v23; // cx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  char *v26; // rcx
  PDRIVER_OBJECT v27; // rdi
  bool v29; // zf
  USHORT AclSize; // si
  unsigned __int8 *UserAffinity; // rax
  ACL *Pool2; // rax
  unsigned __int8 *StateSaveArea; // rax
  int v34; // r9d
  void *Src; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v39; // [rsp+68h] [rbp-98h]
  ULONG v40; // [rsp+6Ch] [rbp-94h]
  ULONG v41; // [rsp+70h] [rbp-90h]
  ULONG v42; // [rsp+74h] [rbp-8Ch]
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  PDEVICE_OBJECT *v44; // [rsp+80h] [rbp-80h]
  __int128 v45; // [rsp+88h] [rbp-78h] BYREF
  __int128 v46; // [rsp+98h] [rbp-68h]
  ACL *v47; // [rsp+A8h] [rbp-58h]
  ACL *v48; // [rsp+B0h] [rbp-50h]
  PDRIVER_OBJECT v49; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[20]; // [rsp+F8h] [rbp-8h] BYREF

  v7 = 0LL;
  LOBYTE(v8) = DeviceCharacteristics;
  v49 = DriverObject;
  v44 = DeviceObject;
  v10 = DeviceType;
  v47 = 0LL;
  LODWORD(v48) = 0;
  v40 = DeviceExtensionSize;
  v41 = DeviceCharacteristics;
  v11 = 8 - (DeviceExtensionSize & 7);
  Object = 0LL;
  Handle = 0LL;
  v45 = 0LL;
  if ( (DeviceExtensionSize & 7) == 0 )
    v11 = DeviceExtensionSize & 7;
  P = 0LL;
  v42 = DeviceCharacteristics & 0x80;
  v39 = DeviceExtensionSize + v11;
  v12 = 0LL;
  v46 = 0LL;
  DestinationString = 0LL;
  v13 = 4LL;
  v14 = 0;
  if ( (DeviceCharacteristics & 0x80) == 0 )
    goto LABEL_5;
  while ( 1 )
  {
    RtlStringCchPrintfW(
      pszDest,
      0x11uLL,
      L"\\Device\\%08lx",
      (unsigned int)_InterlockedIncrement((_DWORD *)&IopSessionNotificationLock.SuspendEvent.Header.WaitListHead.Blink + 1));
    RtlInitUnicodeString(&DestinationString, pszDest);
    v13 = 4LL;
    DeviceName = &DestinationString;
LABEL_5:
    v15 = 0LL;
    if ( (unsigned int)v10 <= 0x12 )
    {
      if ( (_DWORD)v10 == 18 )
        goto LABEL_7;
      if ( (_DWORD)v10 != 2 )
      {
        if ( (_DWORD)v10 == 3 )
          goto LABEL_7;
        if ( (_DWORD)v10 != 7 )
        {
          if ( (_DWORD)v10 == 8 )
            goto LABEL_7;
          v29 = (_DWORD)v10 == 9;
          goto LABEL_84;
        }
      }
      if ( (_DWORD)v10 != 2 && (v8 & 1) == 0 )
      {
LABEL_7:
        v13 = 2LL;
        goto LABEL_8;
      }
      v37 = 0;
      AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
      if ( !RtlGetNtProductType(&v37) )
        goto LABEL_9;
      if ( v37 == 1 )
      {
        UserAffinity = (unsigned __int8 *)RtlpBootStatHandleLock.UserAffinity;
      }
      else
      {
        if ( (_DWORD)v10 != 2 )
          goto LABEL_89;
        UserAffinity = (unsigned __int8 *)RtlpBootStatHandleLock.StateSaveArea;
      }
      AclSize += 4 * (UserAffinity[1] + 4);
LABEL_89:
      Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
      v7 = Pool2;
      if ( !Pool2 )
      {
LABEL_9:
        v17 = v7;
        goto LABEL_10;
      }
      memmove(Pool2, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
      v29 = v37 == 1;
      v7->AclSize = AclSize;
      if ( v29 )
      {
        StateSaveArea = (unsigned __int8 *)RtlpBootStatHandleLock.UserAffinity;
        v34 = -1073676288;
      }
      else
      {
        if ( (_DWORD)v10 != 2 )
        {
LABEL_95:
          RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
          RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
          v15 = v7;
          v7 = 0LL;
          goto LABEL_48;
        }
        StateSaveArea = (unsigned __int8 *)RtlpBootStatHandleLock.StateSaveArea;
        v34 = 0x80000000;
      }
      RtlpAddKnownAce((char *)v7, 2u, 0, v34, StateSaveArea, 0);
      goto LABEL_95;
    }
    if ( (_DWORD)v10 == 32 || (_DWORD)v10 == 20 || (_DWORD)v10 == 36 || (_DWORD)v10 == 45 )
      goto LABEL_7;
    v29 = (_DWORD)v10 == 53;
LABEL_84:
    if ( v29 )
      goto LABEL_7;
LABEL_8:
    v16 = IopCreateSecurityDescriptorPerType(SecurityDescriptor, v13, &P, 0LL);
    v12 = P;
    if ( v16 < 0 )
      goto LABEL_9;
LABEL_48:
    v17 = (ACL *)SecurityDescriptor;
LABEL_10:
    if ( (_DWORD)v10 == 3 )
    {
      v14 = 2048;
    }
    else if ( (_DWORD)v10 == 7 || (_DWORD)v10 == 8 || (_DWORD)v10 == 36 )
    {
      v14 = 512;
    }
    LODWORD(v45) = 48;
    *((_QWORD *)&v45 + 1) = v7;
    *(_QWORD *)&v46 = DeviceName;
    v47 = v17;
    v18 = IopCaseInsensitive != 0 ? 576 : 512;
    v48 = v7;
    DWORD2(v46) = IopCaseInsensitive != 0 ? 576 : 512;
    if ( Exclusive != (_BYTE)v7 )
    {
      v18 = (unsigned int)v18 | 0x20;
      DWORD2(v46) = v18;
    }
    if ( DeviceName )
    {
      v18 = (unsigned int)v18 | 0x10;
      DWORD2(v46) = v18;
    }
    v19 = v39 + 448;
    if ( v39 >= 0xFFFFFE40 )
    {
      inserted = -1073741811;
LABEL_40:
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( inserted >= 0 )
      {
        LOBYTE(v18) = 1;
        EtwTiLogDeviceObjectLoadUnload(v18, *((_QWORD *)Object + 1) + 56LL, DeviceName);
      }
      *v44 = (PDEVICE_OBJECT)Object;
      return inserted;
    }
    inserted = ObCreateObjectEx(
                 0,
                 (_DWORD *)IoDeviceObjectType,
                 (__int64)&v45,
                 0,
                 (__int64)Src,
                 v39 + 448,
                 (int)v7,
                 (int)v7,
                 &Object,
                 (__int64)v7);
    if ( inserted < 0 )
      goto LABEL_40;
    memset_0(Object, 0, v19);
    v8 = v41;
    v21 = (char *)Object + v39 + 336;
    *((_QWORD *)v21 + 1) = Object;
    *((_QWORD *)Object + 39) = v21;
    *(_DWORD *)v21 = 13;
    *((_QWORD *)v21 + 11) = 0LL;
    *((_DWORD *)v21 + 4) = 0;
    *((_QWORD *)v21 + 3) = 0LL;
    v22 = v40;
    v23 = v40 + 336;
    *(_WORD *)Object = 3;
    *((_WORD *)Object + 1) = v23;
    *((_DWORD *)Object + 18) = v10;
    *((_DWORD *)Object + 13) = v8;
    if ( (unsigned int)v10 <= 0x24 )
    {
      v24 = 0x1080000084LL;
      if ( _bittest64(&v24, v10) )
        break;
    }
LABEL_22:
    *((_DWORD *)Object + 38) = 0;
    *((_WORD *)Object + 152) = v14;
    *((_DWORD *)Object + 12) = 128;
    if ( Exclusive )
      *((_DWORD *)Object + 12) |= 8u;
    if ( DeviceName )
      *((_DWORD *)Object + 12) |= 0x40u;
    if ( v22 )
      *((_QWORD *)Object + 8) = (char *)Object + 336;
    else
      *((_QWORD *)Object + 8) = 0LL;
    *((_BYTE *)Object + 76) = 1;
    if ( (_DWORD)v10 == 3 || (_DWORD)v10 == 8 || (_DWORD)v10 == 9 || (_DWORD)v10 == 20 || (_DWORD)v10 == 32 )
    {
      v25 = (char *)Object + 80;
      *((_QWORD *)Object + 11) = (char *)Object + 80;
      *v25 = v25;
    }
    else
    {
      KeInitializeDeviceQueue((PKDEVICE_QUEUE)Object + 4);
    }
    v26 = (char *)Object;
    if ( (*((_DWORD *)Object + 13) & 0x40001) == 0 )
    {
      *(_DWORD *)(*((_QWORD *)Object + 39) + 32LL) |= 0x800u;
      v26 = (char *)Object;
    }
    inserted = ObInsertObjectEx(v26, 0LL, 3u, 1, 0, (__int64)&Object, &Handle);
    if ( inserted >= 0 )
    {
      AstLogDeviceCreated(Object, (unsigned int)v10, v8);
      v27 = v49;
      PsReferenceSiloContext(v49);
      *((_QWORD *)Object + 1) = v27;
      IopInsertRemoveDevice((__int64)v27, (__int64)Object, 1);
      if ( *((_QWORD *)Object + 7) )
        PoVolumeDevice();
      ObCloseHandle(Handle, 0);
      goto LABEL_40;
    }
    if ( inserted != -1073741771 || !v42 )
    {
      Object = 0LL;
      goto LABEL_40;
    }
    v7 = 0LL;
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      v12 = 0LL;
      P = 0LL;
    }
  }
  inserted = IopCreateVpb(Object);
  if ( inserted >= 0 )
  {
    KeInitializeEvent((PRKEVENT)((char *)Object + 280), SynchronizationEvent, 1u);
    v22 = v40;
    goto LABEL_22;
  }
  ObfDereferenceObject(Object);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  *v44 = 0LL;
  return inserted;
}
