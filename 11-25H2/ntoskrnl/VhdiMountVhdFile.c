/*
 * XREFs of VhdiMountVhdFile @ 0x14081A2D0
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x14081A06C (VhdiAutoAttachOneVhd.c)
 *     VhdInitialize @ 0x140C4BF5C (VhdInitialize.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1402D49E0 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     wcscat_s @ 0x140501FC0 (wcscat_s.c)
 *     wcsncat_s @ 0x1405020F0 (wcsncat_s.c)
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x14069646C (Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateFile @ 0x14069BBE0 (ZwCreateFile.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoGetDeviceObjectPointer @ 0x140822F90 (IoGetDeviceObjectPointer.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     IoGetDeviceInterfaces @ 0x140956550 (IoGetDeviceInterfaces.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VhdiMountVhdFile(wchar_t *Src, unsigned int a2, int a3, char a4, _QWORD *a5)
{
  PZZWSTR v7; // r15
  unsigned int *v8; // rdi
  _DWORD *OutputBuffer; // r13
  NTSTATUS DeviceObjectPointer; // ebx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v12; // r12
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // esi
  __int64 Pool2; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  size_t v18; // r8
  unsigned int v19; // esi
  IRP *v20; // rax
  char *v21; // rbx
  unsigned int v22; // esi
  __int128 v23; // xmm0
  NTSTATUS v24; // eax
  PDEVICE_OBJECT v25; // r12
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  PIRP v27; // rax
  __int64 v28; // rax
  PIRP v29; // rax
  PZZWSTR SymbolicLinkList; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+7Ch] [rbp-84h]
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h]
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v43; // [rsp+100h] [rbp+0h] BYREF
  __int128 v44; // [rsp+110h] [rbp+10h] BYREF
  __int128 v45; // [rsp+120h] [rbp+20h]
  _BYTE v46[32]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v47; // [rsp+150h] [rbp+50h]
  __int128 v48; // [rsp+160h] [rbp+60h]
  __int128 v49; // [rsp+170h] [rbp+70h]
  int v50; // [rsp+180h] [rbp+80h]
  __int128 InputBuffer; // [rsp+190h] [rbp+90h] BYREF
  __int128 v52; // [rsp+1A0h] [rbp+A0h]
  __int128 v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1C0h] [rbp+C0h]
  _DWORD EaBuffer[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  GUID v57; // [rsp+1E0h] [rbp+E0h]
  __int128 v58; // [rsp+1F0h] [rbp+F0h]
  __int128 v59; // [rsp+200h] [rbp+100h]
  __int128 v60; // [rsp+210h] [rbp+110h]
  __int128 v61; // [rsp+220h] [rbp+120h]
  int v62; // [rsp+230h] [rbp+130h]
  int v63; // [rsp+234h] [rbp+134h]

  v35 = a3;
  v34 = a2;
  FileHandle = 0LL;
  DeviceObject = 0LL;
  v7 = 0LL;
  v54 = 0LL;
  v8 = 0LL;
  Object = 0LL;
  OutputBuffer = 0LL;
  SymbolicLinkList = 0LL;
  FileObject = 0LL;
  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  v43 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  InputBuffer = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( !Src || (unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() && !a2 )
  {
    DeviceObjectPointer = -1073741811;
    goto LABEL_51;
  }
  memset_0(v46, 0, 0x54uLL);
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE, 0LL, 0, &SymbolicLinkList);
  v7 = SymbolicLinkList;
  DeviceObjectPointer = DeviceInterfaces;
  if ( DeviceInterfaces >= 0 )
  {
    if ( !*SymbolicLinkList )
    {
      DeviceObjectPointer = -1073741275;
      goto LABEL_51;
    }
    RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
      v12 = -1LL;
      if ( (unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() )
      {
        v13 = a2;
      }
      else
      {
        v14 = -1LL;
        do
          ++v14;
        while ( Src[v14] );
        v13 = 2 * v14;
      }
      v15 = v13 + 2;
      LODWORD(SymbolicLinkList) = v13 + 34;
      Pool2 = ExAllocatePool2(0x40uLL);
      v8 = (unsigned int *)Pool2;
      if ( !Pool2 )
        goto LABEL_15;
      *(_QWORD *)Pool2 = 1LL;
      *(_DWORD *)(Pool2 + 24) = 32;
      *(GUID *)(Pool2 + 8) = CPER_EMPTY_GUID;
      *(_DWORD *)(Pool2 + 28) = v15;
      IsEnabledDeviceUsageNoInline = Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline();
      v18 = v34;
      if ( !IsEnabledDeviceUsageNoInline )
        v18 = v15;
      memmove((char *)v8 + v8[6], Src, v18);
      v19 = v15 + 514;
      OutputBuffer = (_DWORD *)ExAllocatePool2(0x40uLL);
      if ( !OutputBuffer )
      {
LABEL_15:
        DeviceObjectPointer = -1073741801;
        goto LABEL_51;
      }
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v20 = IoBuildDeviceIoControlRequest(
              0x2D592Cu,
              DeviceObject,
              v8,
              (ULONG)SymbolicLinkList,
              OutputBuffer,
              v19 + 28,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v20 )
        goto LABEL_20;
      DeviceObjectPointer = IofCallDriver(DeviceObject, v20);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer >= 0 )
      {
        v21 = (char *)OutputBuffer + (unsigned int)OutputBuffer[5];
        if ( *(_WORD *)v21 == 92 && *((_WORD *)v21 + 1) == 92 && *((_WORD *)v21 + 2) == 46 && *((_WORD *)v21 + 3) == 92 )
          *(_DWORD *)(v21 + 2) = 4128831;
        v22 = v19 >> 1;
        do
          ++v12;
        while ( *(_WORD *)&v21[2 * v12] );
        if ( *(_WORD *)&v21[2 * v12 - 2] != 92 && *Src != 92 )
          wcscat_s((wchar_t *)v21, v22, L"\\");
        if ( (unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() )
          wcsncat_s((wchar_t *)v21, v22, Src, (unsigned __int64)v34 >> 1);
        else
          wcscat_s((wchar_t *)v21, v22, Src);
        RtlInitUnicodeString(&v43, (PCWSTR)v21);
        ObjectAttributes.ObjectName = &v43;
        ObjectAttributes.Length = 48;
        v63 = 0;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Attributes = 512;
        DWORD1(v47) = 84;
        v56 = 0x4B534454524956LL;
        EaBuffer[0] = 0;
        EaBuffer[1] = 5506944;
        v23 = *(_OWORD *)OutputBuffer;
        LODWORD(v47) = OutputBuffer[4];
        DWORD2(v47) = a4 != 0 ? 4 : 0;
        v58 = v23;
        DWORD1(v48) = 2;
        v62 = v50;
        v59 = v47;
        v57 = GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE;
        v60 = v48;
        v61 = v49;
        DeviceObjectPointer = ZwCreateFile(
                                &FileHandle,
                                0x80000000,
                                &ObjectAttributes,
                                &IoStatusBlock,
                                0LL,
                                0x80u,
                                1u,
                                2u,
                                0,
                                EaBuffer,
                                0x67u);
        if ( DeviceObjectPointer >= 0 )
        {
          DeviceObject = 0LL;
          v24 = ObReferenceObjectByHandle(FileHandle, 0xC0100000, 0LL, 0, (PVOID *)&DeviceObject, 0LL);
          v25 = DeviceObject;
          DeviceObjectPointer = v24;
          Object = DeviceObject;
          if ( v24 >= 0 )
          {
            RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)DeviceObject);
            if ( !a5 )
              goto LABEL_48;
            v44 = 0LL;
            v45 = 0LL;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            LODWORD(SymbolicLinkList) = 14;
            v27 = IoBuildDeviceIoControlRequest(
                    0x2D1940u,
                    RelatedDeviceObject,
                    &SymbolicLinkList,
                    4u,
                    &v44,
                    0x20u,
                    0,
                    &Event,
                    &IoStatusBlock);
            if ( !v27 )
              goto LABEL_20;
            v27->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v25;
            DeviceObjectPointer = IofCallDriver(RelatedDeviceObject, v27);
            if ( DeviceObjectPointer == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              DeviceObjectPointer = IoStatusBlock.Status;
            }
            if ( DeviceObjectPointer >= 0 )
            {
              v28 = *a5 - *((_QWORD *)&v44 + 1);
              if ( *a5 == *((_QWORD *)&v44 + 1) )
                v28 = a5[1] - v45;
              if ( v28 )
              {
                DeviceObjectPointer = -1069940684;
                goto LABEL_51;
              }
LABEL_48:
              v54 = 0LL;
              HIDWORD(InputBuffer) = 0;
              LODWORD(InputBuffer) = 1;
              *(_QWORD *)((char *)&InputBuffer + 4) = v35 | 4u;
              v52 = 0LL;
              v53 = 0LL;
              KeInitializeEvent(&Event, SynchronizationEvent, 0);
              v29 = IoBuildDeviceIoControlRequest(
                      0x2D191Cu,
                      RelatedDeviceObject,
                      &InputBuffer,
                      0x38u,
                      0LL,
                      0,
                      0,
                      &Event,
                      &IoStatusBlock);
              if ( v29 )
              {
                v29->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v25;
                DeviceObjectPointer = IofCallDriver(RelatedDeviceObject, v29);
                if ( DeviceObjectPointer == 259 )
                {
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  DeviceObjectPointer = IoStatusBlock.Status;
                }
                goto LABEL_51;
              }
LABEL_20:
              DeviceObjectPointer = -1073741670;
            }
          }
        }
      }
    }
  }
LABEL_51:
  if ( a4 )
  {
    if ( DeviceObjectPointer < 0 )
      KeBugCheckEx(0x12Fu, 5uLL, DeviceObjectPointer, 0LL, 0LL);
  }
  else
  {
    ZwClose(FileHandle);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x42646856u);
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x42646856u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)DeviceObjectPointer;
}
