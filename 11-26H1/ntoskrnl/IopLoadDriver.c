/*
 * XREFs of IopLoadDriver @ 0x140A3A064
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140970EC4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x140A39590 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140D0A758 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     VfDifCaptureDriverEntry @ 0x1403C1800 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403C186C (VfDifCaptureIoCallbacks.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceObject @ 0x14048D5DC (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTrace @ 0x14048D948 (PnpDiagnosticTrace.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404D9FFC (PnpDiagnosticTraceObjectWithStatus.c)
 *     IopResurrectDriver @ 0x1404E0EB8 (IopResurrectDriver.c)
 *     HeadlessKernelAddLogEntry @ 0x1404E6FF8 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     wcsrchr @ 0x14053A7D0 (wcsrchr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopCheckIfNotNativeDriver @ 0x140796F58 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x140797CB0 (IopLogBlockedDriverEvent.c)
 *     CmBootLastKnownGood @ 0x140851138 (CmBootLastKnownGood.c)
 *     MmFreeDriverInitialization @ 0x14086AA84 (MmFreeDriverInitialization.c)
 *     NtQueryValueKey @ 0x1408F8FD0 (NtQueryValueKey.c)
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     NtQueryObject @ 0x140921430 (NtQueryObject.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x14092CD80 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     IopReadyDeviceObjects @ 0x140A38514 (IopReadyDeviceObjects.c)
 *     EtwTiLogDriverObjectLoad @ 0x140A3853C (EtwTiLogDriverObjectLoad.c)
 *     PnpCallDriverEntry @ 0x140A3937C (PnpCallDriverEntry.c)
 *     KseShimDriverIoCallbacks @ 0x140A39400 (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x140A39744 (PnpPrepareDriverLoading.c)
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     IopBootLog @ 0x140A3AA14 (IopBootLog.c)
 *     IopBuildFullDriverPath @ 0x140A3AAEC (IopBuildFullDriverPath.c)
 *     MmUnloadSystemImage @ 0x140AC9260 (MmUnloadSystemImage.c)
 *     ObMakeTemporaryObject @ 0x140B03770 (ObMakeTemporaryObject.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140B5F86C (IopSafebootDriverLoad.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  int v4; // esi
  unsigned __int16 *Pool2; // r13
  int v8; // r12d
  NTSTATUS v9; // eax
  int DriverNameFromKeyNode; // ebx
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  unsigned int v13; // ebx
  size_t v14; // r8
  wchar_t *v15; // rax
  int v16; // eax
  PIMAGE_NT_HEADERS v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rax
  PIMAGE_NT_HEADERS v20; // rdx
  char *v21; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v23; // eax
  PVOID v24; // rdi
  __int64 v25; // rax
  void *v26; // r14
  wchar_t *Buffer; // rsi
  __int64 v28; // rdx
  ULONG v29; // ecx
  ULONG v30; // edx
  __int64 v31; // rax
  POBJECT_TYPE v32; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  unsigned __int16 v34; // ax
  unsigned int MaximumLength; // ebx
  __int64 v37; // rax
  __int64 v38; // rdx
  PVOID v39; // rdi
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  __int16 v41; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v43; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  ULONG Length; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v49; // [rsp+90h] [rbp-70h] BYREF
  PVOID BaseOfImage; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v53; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  int *v55; // [rsp+E0h] [rbp-20h]
  __int128 v56; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v57; // [rsp+F8h] [rbp-8h]
  __int128 v58; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR KeyValueInformation; // [rsp+120h] [rbp+20h] BYREF
  wchar_t *v60; // [rsp+130h] [rbp+30h]
  int v61; // [rsp+138h] [rbp+38h]
  int v62; // [rsp+13Ch] [rbp+3Ch]
  int *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  ULONG *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  wchar_t *v67; // [rsp+160h] [rbp+60h]
  int v68; // [rsp+168h] [rbp+68h]
  int v69; // [rsp+16Ch] [rbp+6Ch]
  PVOID *p_Object; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]

  v55 = a4;
  v4 = a3;
  Length = 0;
  v53 = 0LL;
  *(_QWORD *)&v58 = 0LL;
  DWORD2(v58) = 0;
  Object = 0LL;
  BaseOfImage = 0LL;
  Pool2 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  v8 = 0;
  ReturnLength = 0;
  v49 = 0LL;
  *a4 = 0;
  Source = 0LL;
  v47 = 0;
  v56 = 0LL;
  LOBYTE(v41) = 0;
  v57 = 0LL;
  Destination = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v49, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  v9 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v9 != -2147483643 && v9 != -1073741789 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_43;
  }
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    goto LABEL_73;
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, Pool2, Length, &Length);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v11 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v49.Buffer = v11;
    v12 = v11;
    if ( !v11 )
    {
LABEL_73:
      DriverNameFromKeyNode = -1073741670;
      goto LABEL_43;
    }
    v14 = *((unsigned int *)Pool2 + 3);
    v49.Length = Pool2[6];
    v13 = v49.Length;
    v49.MaximumLength = v49.Length + 2;
    memmove(v11, Pool2 + 8, v14);
    v12[(unsigned __int64)v13 >> 1] = 0;
    DriverNameFromKeyNode = IopBuildFullDriverPath(&v49, KeyHandle, &DestinationString);
    if ( DriverNameFromKeyNode >= 0 )
    {
      v15 = wcsrchr(DestinationString.Buffer, 0x5Cu);
      if ( v15 )
      {
        Source.Buffer = v15 + 1;
        RtlInitUnicodeString(&Source, v15 + 1);
      }
      else
      {
        Source.Buffer = DestinationString.Buffer;
        Source.Length = DestinationString.Length;
        Source.MaximumLength = DestinationString.MaximumLength;
      }
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v49.Length);
      if ( a2 )
      {
        if ( InitSafeBootMode )
        {
          v43 = 0;
          ValueName = 0LL;
          RtlInitUnicodeString(&ValueName, L"Group");
          memset_0(&KeyValueInformation, 0, 0x4CuLL);
          if ( NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x4Cu, &v43) < 0
            || (ValueName.Length = LOWORD(KeyValueInformation.Size) - 2,
                ValueName.MaximumLength = LOWORD(KeyValueInformation.Size) - 2,
                ValueName.Buffer = (wchar_t *)&KeyValueInformation.Reserved,
                !(unsigned __int8)IopSafebootDriverLoad(&ValueName)) )
          {
            if ( !(unsigned __int8)IopSafebootDriverLoad(&Source) )
            {
              IopBootLog(&Source);
              DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Source, &ValueName);
              HeadlessKernelAddLogEntry();
              ObCloseHandle(KeyHandle, 0);
              return 3221226335LL;
            }
          }
        }
      }
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        LODWORD(v56) = 48;
        *((_QWORD *)&v56 + 1) = 0LL;
        *(_QWORD *)&v57 = &Destination;
        DWORD2(v57) = IopCaseInsensitive != 0 ? 592 : 528;
        v58 = 0LL;
        ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
        v16 = MmLoadSystemImageEx((__int64)&DestinationString, 0LL, 0LL, 0, 0, (__int64 *)&v53, &BaseOfImage);
        DriverNameFromKeyNode = v16;
        if ( v16 >= 0 )
        {
          v17 = RtlImageNtHeader(BaseOfImage);
          v8 = v17->OptionalHeader.MinorImageVersion | (v17->OptionalHeader.MajorImageVersion << 16);
          DriverNameFromKeyNode = PnpPrepareDriverLoading((__int64)&v49, KeyHandle, BaseOfImage, v4, &v47, (bool *)&v41);
          if ( DriverNameFromKeyNode >= 0 )
          {
            DriverNameFromKeyNode = ObCreateObjectEx(
                                      KeGetCurrentThread()->PreviousMode,
                                      IoDriverObjectType,
                                      (__int64)&v56,
                                      0,
                                      (__int64)ResultLength,
                                      424,
                                      0,
                                      0,
                                      &Object,
                                      0LL);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v18 = Object;
              memset_0(Object, 0, 0x1A8uLL);
              v18[6] = v18 + 42;
              v18[42] = v18;
              v19 = 0LL;
              do
              {
                v18[v19 + 14] = IopInvalidDeviceRequest;
                v19 = ReturnLength + 1;
                ReturnLength = v19;
              }
              while ( (unsigned int)v19 <= 0x1B );
              *(_DWORD *)v18 = 22020100;
              v20 = RtlImageNtHeader(BaseOfImage);
              v21 = (char *)BaseOfImage + v20->OptionalHeader.AddressOfEntryPoint;
              v8 = v20->OptionalHeader.MinorImageVersion | (v20->OptionalHeader.MajorImageVersion << 16);
              if ( !_bittest16((const signed __int16 *)&v20->OptionalHeader.DllCharacteristics, 0xDu) )
                *((_DWORD *)v18 + 4) |= 2u;
              v18[11] = v21;
              v18[5] = v53;
              v18[3] = BaseOfImage;
              *((_DWORD *)v18 + 8) = v20->OptionalHeader.SizeOfImage;
              DriverNameFromKeyNode = ObInsertObjectEx((char *)v18, 0LL, 1, 0, 0, 0LL, &Handle);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode >= 0 )
              {
                PreviousMode = KeGetCurrentThread()->PreviousMode;
                Object = 0LL;
                v23 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, PreviousMode, &Object, 0LL);
                if ( v23 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)Handle, v23, (ULONG_PTR)Object, 0LL);
                ZwClose(Handle);
                v24 = Object;
                *((_QWORD *)Object + 9) = &PspSiloMonitorLock.SavedApcState.Process;
                v25 = ExAllocatePool2(0x40uLL);
                *((_QWORD *)v24 + 8) = v25;
                if ( v25 )
                {
                  *((_WORD *)v24 + 29) = Destination.MaximumLength;
                  *((_WORD *)v24 + 28) = Destination.Length;
                  memmove(*((void **)v24 + 8), Destination.Buffer, Destination.MaximumLength);
                }
                v26 = (void *)ExAllocatePool2(0x40uLL);
                if ( v26 )
                {
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v26, 0x1000u, &ReturnLength);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v24);
                    ObfDereferenceObject(v24);
                    ExFreePoolWithTag(v26, 0);
                  }
                  else
                  {
                    Buffer = v49.Buffer;
                    if ( v49.Buffer )
                    {
                      MaximumLength = v49.MaximumLength;
                      *(_QWORD *)(*((_QWORD *)v24 + 6) + 32LL) = ExAllocatePool2(0x40uLL);
                      v37 = *((_QWORD *)v24 + 6);
                      if ( *(_QWORD *)(v37 + 32) )
                      {
                        *(_WORD *)(v37 + 26) = MaximumLength;
                        *(_WORD *)(*((_QWORD *)v24 + 6) + 24LL) = v49.Length;
                        memmove(*(void **)(*((_QWORD *)v24 + 6) + 32LL), Buffer, MaximumLength);
                      }
                    }
                    if ( (v47 & 1) != 0 )
                      *((_DWORD *)v24 + 4) |= 0x100u;
                    if ( (_BYTE)v41 )
                      *((_DWORD *)v24 + 4) |= 0x1000u;
                    PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v26);
                    VfDifCaptureDriverEntry((__int64)v24);
                    DriverNameFromKeyNode = PnpCallDriverEntry((__int64)v24, (__int64)v26);
                    if ( DriverNameFromKeyNode >= 0 )
                    {
                      VfDifCaptureIoCallbacks((__int64)v24);
                      KseShimDriverIoCallbacks((__int64 *)v24, v28, (const void **)&DestinationString);
                    }
                    PnpDiagnosticTraceObjectWithStatus(
                      &KMPnPEvt_DriverInit_Stop,
                      (unsigned __int16 *)v26,
                      DriverNameFromKeyNode);
                    v29 = 0;
                    ReturnLength = 0;
                    v30 = 0;
                    *v55 = DriverNameFromKeyNode;
                    if ( DriverNameFromKeyNode < 0 )
                      DriverNameFromKeyNode = -1073740955;
                    v31 = 0LL;
                    do
                    {
                      if ( !*((_QWORD *)v24 + v31 + 14) )
                      {
                        *((_QWORD *)v24 + v30 + 14) = IopInvalidDeviceRequest;
                        v29 = ReturnLength;
                      }
                      ReturnLength = ++v29;
                      v30 = v29;
                      v31 = v29;
                    }
                    while ( v29 <= 0x1B );
                    ExFreePoolWithTag(v26, 0);
                    if ( DriverNameFromKeyNode >= 0 )
                    {
                      IopBootLog(&DestinationString);
                      MmFreeDriverInitialization();
                    }
                    ObMakeTemporaryObject(v24);
                    ObfDereferenceObject(v24);
                  }
                  goto LABEL_43;
                }
                ObMakeTemporaryObject(v24);
                ObfDereferenceObject(v24);
                goto LABEL_73;
              }
              goto LABEL_70;
            }
          }
          MmUnloadSystemImage(v53);
LABEL_69:
          ExReleaseResourceLite(&IopDriverLoadResource);
LABEL_70:
          IopBootLog(&DestinationString);
          goto LABEL_43;
        }
        if ( v16 == -1073741554 )
        {
          v32 = IoDriverObjectType;
          CurrentSilo = PsGetCurrentSilo();
          DriverNameFromKeyNode = ObOpenObjectByNameEx(
                                    (__int64)&v56,
                                    (__int64)v32,
                                    0,
                                    0LL,
                                    0,
                                    0LL,
                                    (__int64)CurrentSilo,
                                    &Handle);
          if ( DriverNameFromKeyNode < 0 )
          {
            ExReleaseResourceLite(&IopDriverLoadResource);
            IopBootLog(&DestinationString);
            if ( DriverNameFromKeyNode == -1073741772 )
              DriverNameFromKeyNode = -1073740914;
            goto LABEL_43;
          }
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL);
          ZwClose(Handle);
          if ( DriverNameFromKeyNode < 0 )
            goto LABEL_69;
          DriverNameFromKeyNode = IopResurrectDriver((__int64)Object);
          ObfDereferenceObject(Object);
        }
        else if ( IopCheckIfNotNativeDriver(v16, (__int64)&DestinationString) == 1 )
        {
          DriverNameFromKeyNode = ((_BYTE)v4 != 0) - 1073740949;
          IopLogBlockedDriverEvent((__int64)&DestinationString, v38, DriverNameFromKeyNode);
        }
        ExReleaseResourceLite(&IopDriverLoadResource);
        IopBootLog(&DestinationString);
      }
    }
  }
LABEL_43:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741218 && DriverNameFromKeyNode != -1073740948 )
  {
    Object = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(KeyHandle, 0LL);
      if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(KeyHandle, L"ErrorControl", 0, &Object) >= 0 )
      {
        v39 = Object;
        if ( *((_DWORD *)Object + 3) )
          CmBootLastKnownGood(
            *(_DWORD *)((char *)Object + *((unsigned int *)Object + 2)),
            (unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL),
            (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
            DriverNameFromKeyNode);
        ExFreePoolWithTag(v39, 0);
      }
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v49.Buffer )
  {
    v41 = v49.Length >> 1;
    KeyValueInformation.Ptr = (ULONGLONG)&v41;
    v61 = v49.Length;
    v63 = &v47;
    LODWORD(Object) = v8;
    v47 = DriverNameFromKeyNode;
    *(_QWORD *)&KeyValueInformation.Size = 2LL;
    v60 = v49.Buffer;
    v62 = 0;
    v64 = 4LL;
    if ( Destination.Buffer )
      v34 = Destination.Length >> 1;
    else
      v34 = 0;
    LOWORD(v43) = v34;
    v65 = &v43;
    v68 = 2 * v34;
    v67 = Destination.Buffer;
    p_Object = &Object;
    v66 = 2LL;
    v69 = 0;
    v71 = 4LL;
    PnpDiagnosticTrace(&KMPnPEvt_DriverLoad_Stop, 6u, &KeyValueInformation);
    ExFreePoolWithTag(v49.Buffer, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
