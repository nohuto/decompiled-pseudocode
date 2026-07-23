/*
 * XREFs of VhdiMountVhdFile @ 0x1408AC820
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x1408AC5BC (VhdiAutoAttachOneVhd.c)
 *     VhdInitialize @ 0x140D08C34 (VhdInitialize.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026A6C0 (IoBuildDeviceIoControlRequest.c)
 *     IoGetRelatedDeviceObject @ 0x14026BFA0 (IoGetRelatedDeviceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     wcscat_s @ 0x14053EEE0 (wcscat_s.c)
 *     wcsncat_s @ 0x14053F010 (wcsncat_s.c)
 *     Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline @ 0x140723720 (Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 *     IoGetDeviceInterfaces @ 0x140A30A80 (IoGetDeviceInterfaces.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VhdiMountVhdFile(wchar_t *Src, unsigned int a2, int a3, char a4, _QWORD *a5)
{
  unsigned int v6; // r15d
  PZZWSTR v7; // r14
  unsigned int *v8; // rdi
  _DWORD *OutputBuffer; // r13
  NTSTATUS DeviceObjectPointer; // ebx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 Pool2; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  size_t v17; // r8
  unsigned int v18; // r15d
  IRP *v19; // rax
  char *v20; // rbx
  unsigned int v21; // r15d
  __int128 v22; // xmm0
  NTSTATUS v23; // eax
  PDEVICE_OBJECT v24; // r12
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  PIRP v26; // rax
  __int64 v27; // rax
  PIRP v28; // rax
  PZZWSTR SymbolicLinkList; // [rsp+68h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+7Ch] [rbp-84h]
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-68h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h]
  PFILE_OBJECT FileObject; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING v42; // [rsp+100h] [rbp+0h] BYREF
  __int128 v43; // [rsp+110h] [rbp+10h] BYREF
  __int128 v44; // [rsp+120h] [rbp+20h]
  _BYTE v45[32]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v46; // [rsp+150h] [rbp+50h]
  __int128 v47; // [rsp+160h] [rbp+60h]
  __int128 v48; // [rsp+170h] [rbp+70h]
  int v49; // [rsp+180h] [rbp+80h]
  __int128 InputBuffer; // [rsp+190h] [rbp+90h] BYREF
  __int128 v51; // [rsp+1A0h] [rbp+A0h]
  __int128 v52; // [rsp+1B0h] [rbp+B0h]
  __int64 v53; // [rsp+1C0h] [rbp+C0h]
  _DWORD EaBuffer[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v55; // [rsp+1D8h] [rbp+D8h]
  GUID v56; // [rsp+1E0h] [rbp+E0h]
  __int128 v57; // [rsp+1F0h] [rbp+F0h]
  __int128 v58; // [rsp+200h] [rbp+100h]
  __int128 v59; // [rsp+210h] [rbp+110h]
  __int128 v60; // [rsp+220h] [rbp+120h]
  int v61; // [rsp+230h] [rbp+130h]
  int v62; // [rsp+234h] [rbp+134h]

  v34 = a3;
  v33 = a2;
  FileHandle = 0LL;
  DeviceObject = 0LL;
  v6 = a2;
  v7 = 0LL;
  v53 = 0LL;
  v8 = 0LL;
  Object = 0LL;
  OutputBuffer = 0LL;
  SymbolicLinkList = 0LL;
  FileObject = 0LL;
  DestinationString = 0LL;
  memset(&Event, 0, sizeof(Event));
  v42 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  InputBuffer = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( !Src || (unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() && !v6 )
  {
    DeviceObjectPointer = -1073741811;
    goto LABEL_50;
  }
  memset_0(v45, 0, 0x54uLL);
  DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE, 0LL, 0, &SymbolicLinkList);
  v7 = SymbolicLinkList;
  DeviceObjectPointer = DeviceInterfaces;
  if ( DeviceInterfaces >= 0 )
  {
    if ( !*SymbolicLinkList )
    {
      DeviceObjectPointer = -1073741275;
      goto LABEL_50;
    }
    RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
    DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x10000000u, &FileObject, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
    {
      v12 = -1LL;
      if ( !(unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( Src[v13] );
        v6 = 2 * v13;
      }
      v14 = v6 + 2;
      LODWORD(SymbolicLinkList) = v14 + 32;
      Pool2 = ExAllocatePool2(0x40uLL);
      v8 = (unsigned int *)Pool2;
      if ( !Pool2 )
        goto LABEL_14;
      *(_QWORD *)Pool2 = 1LL;
      *(_DWORD *)(Pool2 + 24) = 32;
      *(_OWORD *)(Pool2 + 8) = CPER_EMPTY_GUID;
      *(_DWORD *)(Pool2 + 28) = v14;
      IsEnabledDeviceUsageNoInline = Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline();
      v17 = v33;
      if ( !IsEnabledDeviceUsageNoInline )
        v17 = v14;
      memmove((char *)v8 + v8[6], Src, v17);
      v18 = v14 + 514;
      OutputBuffer = (_DWORD *)ExAllocatePool2(0x40uLL);
      if ( !OutputBuffer )
      {
LABEL_14:
        DeviceObjectPointer = -1073741801;
        goto LABEL_50;
      }
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v19 = IoBuildDeviceIoControlRequest(
              0x2D592Cu,
              DeviceObject,
              v8,
              (ULONG)SymbolicLinkList,
              OutputBuffer,
              v18 + 28,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v19 )
        goto LABEL_19;
      DeviceObjectPointer = IofCallDriver(DeviceObject, v19);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( DeviceObjectPointer >= 0 )
      {
        v20 = (char *)OutputBuffer + (unsigned int)OutputBuffer[5];
        if ( *(_WORD *)v20 == 92 && *((_WORD *)v20 + 1) == 92 && *((_WORD *)v20 + 2) == 46 && *((_WORD *)v20 + 3) == 92 )
          *(_DWORD *)(v20 + 2) = 4128831;
        v21 = v18 >> 1;
        do
          ++v12;
        while ( *(_WORD *)&v20[2 * v12] );
        if ( *(_WORD *)&v20[2 * v12 - 2] != 92 && *Src != 92 )
          wcscat_s((wchar_t *)v20, v21, L"\\");
        if ( (unsigned int)Feature_VhdBootAttachNullTerminate__private_IsEnabledDeviceUsageNoInline() )
          wcsncat_s((wchar_t *)v20, v21, Src, (unsigned __int64)v33 >> 1);
        else
          wcscat_s((wchar_t *)v20, v21, Src);
        RtlInitUnicodeString(&v42, (PCWSTR)v20);
        ObjectAttributes.ObjectName = &v42;
        ObjectAttributes.Length = 48;
        v62 = 0;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Attributes = 512;
        DWORD1(v46) = 84;
        v55 = 0x4B534454524956LL;
        EaBuffer[0] = 0;
        EaBuffer[1] = 5506944;
        v22 = *(_OWORD *)OutputBuffer;
        LODWORD(v46) = OutputBuffer[4];
        DWORD2(v46) = a4 != 0 ? 4 : 0;
        v57 = v22;
        DWORD1(v47) = 2;
        v61 = v49;
        v58 = v46;
        v56 = GUID_DEVINTERFACE_SURFACE_VIRTUAL_DRIVE;
        v59 = v47;
        v60 = v48;
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
          v23 = ObReferenceObjectByHandle(FileHandle, 0xC0100000, 0LL, 0, (PVOID *)&DeviceObject, 0LL);
          v24 = DeviceObject;
          DeviceObjectPointer = v23;
          Object = DeviceObject;
          if ( v23 >= 0 )
          {
            RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)DeviceObject);
            if ( !a5 )
              goto LABEL_47;
            v43 = 0LL;
            v44 = 0LL;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            LODWORD(SymbolicLinkList) = 14;
            v26 = IoBuildDeviceIoControlRequest(
                    0x2D1940u,
                    RelatedDeviceObject,
                    &SymbolicLinkList,
                    4u,
                    &v43,
                    0x20u,
                    0,
                    &Event,
                    &IoStatusBlock);
            if ( !v26 )
              goto LABEL_19;
            v26->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v24;
            DeviceObjectPointer = IofCallDriver(RelatedDeviceObject, v26);
            if ( DeviceObjectPointer == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              DeviceObjectPointer = IoStatusBlock.Status;
            }
            if ( DeviceObjectPointer >= 0 )
            {
              v27 = *a5 - *((_QWORD *)&v43 + 1);
              if ( *a5 == *((_QWORD *)&v43 + 1) )
                v27 = a5[1] - v44;
              if ( v27 )
              {
                DeviceObjectPointer = -1069940684;
                goto LABEL_50;
              }
LABEL_47:
              v53 = 0LL;
              HIDWORD(InputBuffer) = 0;
              LODWORD(InputBuffer) = 1;
              *(_QWORD *)((char *)&InputBuffer + 4) = v34 | 4u;
              v51 = 0LL;
              v52 = 0LL;
              KeInitializeEvent(&Event, SynchronizationEvent, 0);
              v28 = IoBuildDeviceIoControlRequest(
                      0x2D191Cu,
                      RelatedDeviceObject,
                      &InputBuffer,
                      0x38u,
                      0LL,
                      0,
                      0,
                      &Event,
                      &IoStatusBlock);
              if ( v28 )
              {
                v28->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v24;
                DeviceObjectPointer = IofCallDriver(RelatedDeviceObject, v28);
                if ( DeviceObjectPointer == 259 )
                {
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  DeviceObjectPointer = IoStatusBlock.Status;
                }
                goto LABEL_50;
              }
LABEL_19:
              DeviceObjectPointer = -1073741670;
            }
          }
        }
      }
    }
  }
LABEL_50:
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
