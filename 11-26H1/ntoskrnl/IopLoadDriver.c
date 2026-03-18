/*
 * XREFs of IopLoadDriver @ 0x140A26FC4
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140916458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadUnloadDriver @ 0x140A264F0 (IopLoadUnloadDriver.c)
 *     IopInitializeSystemDrivers @ 0x140D04488 (IopInitializeSystemDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     VfDifCaptureDriverEntry @ 0x1403B7900 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403B796C (VfDifCaptureIoCallbacks.c)
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceObject @ 0x140493A8C (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTrace @ 0x140493DF8 (PnpDiagnosticTrace.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404E091C (PnpDiagnosticTraceObjectWithStatus.c)
 *     IopResurrectDriver @ 0x1404E7AF8 (IopResurrectDriver.c)
 *     HeadlessKernelAddLogEntry @ 0x1404EDA18 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     wcsrchr @ 0x140538350 (wcsrchr.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IopCheckIfNotNativeDriver @ 0x140794428 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x140795180 (IopLogBlockedDriverEvent.c)
 *     CmBootLastKnownGood @ 0x14084AE28 (CmBootLastKnownGood.c)
 *     MmFreeDriverInitialization @ 0x1408646A4 (MmFreeDriverInitialization.c)
 *     NtQueryValueKey @ 0x1408F2A10 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1408FCDF0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     NtQueryObject @ 0x1409FC830 (NtQueryObject.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A129AC (IopGetDriverNameFromKeyNode.c)
 *     IopReadyDeviceObjects @ 0x140A25474 (IopReadyDeviceObjects.c)
 *     EtwTiLogDriverObjectLoad @ 0x140A2549C (EtwTiLogDriverObjectLoad.c)
 *     PnpCallDriverEntry @ 0x140A262DC (PnpCallDriverEntry.c)
 *     KseShimDriverIoCallbacks @ 0x140A26360 (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x140A266A4 (PnpPrepareDriverLoading.c)
 *     MmLoadSystemImageEx @ 0x140A269D4 (MmLoadSystemImageEx.c)
 *     IopBootLog @ 0x140A27974 (IopBootLog.c)
 *     IopBuildFullDriverPath @ 0x140A27A4C (IopBuildFullDriverPath.c)
 *     MmUnloadSystemImage @ 0x140AC7670 (MmUnloadSystemImage.c)
 *     ObMakeTemporaryObject @ 0x140B01A40 (ObMakeTemporaryObject.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
 *     IopSafebootDriverLoad @ 0x140B5C94C (IopSafebootDriverLoad.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  int v4; // esi
  unsigned __int16 *Pool2; // r13
  int v8; // r12d
  int Key; // eax
  int DriverNameFromKeyNode; // ebx
  wchar_t *v11; // rax
  wchar_t *v12; // rdi
  unsigned int Length; // ebx
  size_t v14; // r8
  wchar_t *v15; // rax
  int v16; // eax
  _DWORD *v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // rax
  const signed __int16 *v20; // rdx
  __int64 v21; // rax
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
  int v39; // eax
  PVOID v40; // rdi
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID *Objecta; // [rsp+20h] [rbp-E0h]
  __int16 v43; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v45; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v46; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  int v49; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v51; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING Destination; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING Source; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v55; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v56; // [rsp+D0h] [rbp-30h] BYREF
  int *v57; // [rsp+E0h] [rbp-20h]
  __int128 v58; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v59; // [rsp+F8h] [rbp-8h]
  __int128 v60; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  wchar_t *v62; // [rsp+130h] [rbp+30h]
  int v63; // [rsp+138h] [rbp+38h]
  int v64; // [rsp+13Ch] [rbp+3Ch]
  int *v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  unsigned int *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  wchar_t *v69; // [rsp+160h] [rbp+60h]
  int v70; // [rsp+168h] [rbp+68h]
  int v71; // [rsp+16Ch] [rbp+6Ch]
  PVOID *p_P; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]

  v57 = a4;
  v4 = a3;
  LODWORD(v48) = 0;
  v55 = 0LL;
  *(_QWORD *)&v60 = 0LL;
  DWORD2(v60) = 0;
  P = 0LL;
  v52 = 0LL;
  Pool2 = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  v8 = 0;
  v46 = 0;
  v51 = 0LL;
  *a4 = 0;
  Source = 0LL;
  v49 = 0;
  v58 = 0LL;
  LOBYTE(v43) = 0;
  v59 = 0LL;
  Destination = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v51, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&Destination, 0LL);
  Key = NtQueryKey(KeyHandle, 0, 0LL, 0, (unsigned int *)&v48);
  if ( Key != -2147483643 && Key != -1073741789 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_43;
  }
  Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    goto LABEL_73;
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, 0, (unsigned __int64)Pool2, v48, (unsigned int *)&v48);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v11 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v51.Buffer = v11;
    v12 = v11;
    if ( !v11 )
    {
LABEL_73:
      DriverNameFromKeyNode = -1073741670;
      goto LABEL_43;
    }
    v14 = *((unsigned int *)Pool2 + 3);
    v51.Length = Pool2[6];
    Length = v51.Length;
    v51.MaximumLength = v51.Length + 2;
    memmove(v11, Pool2 + 8, v14);
    v12[(unsigned __int64)Length >> 1] = 0;
    DriverNameFromKeyNode = IopBuildFullDriverPath(&v51, KeyHandle, &DestinationString);
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
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, &v51.Length);
      if ( a2 )
      {
        if ( (_DWORD)InitSafeBootMode )
        {
          v45 = 0;
          v56 = 0LL;
          RtlInitUnicodeString(&v56, L"Group");
          memset_0(&UserData, 0, 0x4CuLL);
          LODWORD(Object) = 76;
          v39 = NtQueryValueKey(
                  KeyHandle,
                  (unsigned int *)&v56.Length,
                  2LL,
                  (unsigned __int64)&UserData,
                  (size_t)Object,
                  &v45);
          if ( v39 < 0
            || (v56.Length = LOWORD(UserData.Size) - 2,
                v56.MaximumLength = LOWORD(UserData.Size) - 2,
                v56.Buffer = (wchar_t *)&UserData.Reserved,
                !(unsigned __int8)IopSafebootDriverLoad(&v56)) )
          {
            if ( !(unsigned __int8)IopSafebootDriverLoad(&Source) )
            {
              IopBootLog(&Source);
              DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Source, &v56);
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
        LODWORD(v58) = 48;
        *((_QWORD *)&v58 + 1) = 0LL;
        *(_QWORD *)&v59 = &Destination;
        DWORD2(v59) = IopCaseInsensitive != 0 ? 592 : 528;
        v60 = 0LL;
        ExAcquireResourceExclusiveLite((PERESOURCE)&IopSessionNotificationLock.ApcStateFill[16], 1u);
        v16 = MmLoadSystemImageEx((__int64)&DestinationString, 0LL, 0LL, 0, 0, (__int64 *)&v55, &v52);
        DriverNameFromKeyNode = v16;
        if ( v16 >= 0 )
        {
          v17 = RtlImageNtHeader(v52);
          v8 = *((unsigned __int16 *)v17 + 35) | (*((unsigned __int16 *)v17 + 34) << 16);
          DriverNameFromKeyNode = PnpPrepareDriverLoading((__int64)&v51, KeyHandle, v52, v4, &v49, (bool *)&v43);
          if ( DriverNameFromKeyNode >= 0 )
          {
            DriverNameFromKeyNode = ObCreateObjectEx(
                                      KeGetCurrentThread()->PreviousMode,
                                      IoDriverObjectType,
                                      (__int64)&v58,
                                      0,
                                      (__int64)Objecta,
                                      424,
                                      0,
                                      0,
                                      &P,
                                      0LL);
            if ( DriverNameFromKeyNode >= 0 )
            {
              v18 = P;
              memset_0(P, 0, 0x1A8uLL);
              v18[6] = v18 + 42;
              v18[42] = v18;
              v19 = 0LL;
              do
              {
                v18[v19 + 14] = IopInvalidDeviceRequest;
                v19 = v46 + 1;
                v46 = v19;
              }
              while ( (unsigned int)v19 <= 0x1B );
              *(_DWORD *)v18 = 22020100;
              v20 = (const signed __int16 *)RtlImageNtHeader(v52);
              v21 = v52 + *((unsigned int *)v20 + 10);
              v8 = *((unsigned __int16 *)v20 + 35) | (*((unsigned __int16 *)v20 + 34) << 16);
              if ( !_bittest16(v20 + 47, 0xDu) )
                *((_DWORD *)v18 + 4) |= 2u;
              v18[11] = v21;
              v18[5] = v55;
              v18[3] = v52;
              *((_DWORD *)v18 + 8) = *((_DWORD *)v20 + 20);
              DriverNameFromKeyNode = ObInsertObjectEx((char *)v18, 0LL, 1u, 0, 0, 0LL, &Handle);
              ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.ApcStateFill[16]);
              if ( DriverNameFromKeyNode >= 0 )
              {
                PreviousMode = KeGetCurrentThread()->PreviousMode;
                P = 0LL;
                v23 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, PreviousMode, &P, 0LL);
                if ( v23 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)Handle, v23, (ULONG_PTR)P, 0LL);
                ZwClose(Handle);
                v24 = P;
                *((_QWORD *)P + 9) = &PspSiloMonitorLock.648;
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
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v26, 0x1000u, &v46);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v24);
                    ObfDereferenceObject(v24);
                    ExFreePoolWithTag(v26, 0);
                  }
                  else
                  {
                    Buffer = v51.Buffer;
                    if ( v51.Buffer )
                    {
                      MaximumLength = v51.MaximumLength;
                      *(_QWORD *)(*((_QWORD *)v24 + 6) + 32LL) = ExAllocatePool2(0x40uLL);
                      v37 = *((_QWORD *)v24 + 6);
                      if ( *(_QWORD *)(v37 + 32) )
                      {
                        *(_WORD *)(v37 + 26) = MaximumLength;
                        *(_WORD *)(*((_QWORD *)v24 + 6) + 24LL) = v51.Length;
                        memmove(*(void **)(*((_QWORD *)v24 + 6) + 32LL), Buffer, MaximumLength);
                      }
                    }
                    if ( (v49 & 1) != 0 )
                      *((_DWORD *)v24 + 4) |= 0x100u;
                    if ( (_BYTE)v43 )
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
                    v46 = 0;
                    v30 = 0;
                    *v57 = DriverNameFromKeyNode;
                    if ( DriverNameFromKeyNode < 0 )
                      DriverNameFromKeyNode = -1073740955;
                    v31 = 0LL;
                    do
                    {
                      if ( !*((_QWORD *)v24 + v31 + 14) )
                      {
                        *((_QWORD *)v24 + v30 + 14) = IopInvalidDeviceRequest;
                        v29 = v46;
                      }
                      v46 = ++v29;
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
          MmUnloadSystemImage(v55);
LABEL_69:
          ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.ApcStateFill[16]);
LABEL_70:
          IopBootLog(&DestinationString);
          goto LABEL_43;
        }
        if ( v16 == -1073741554 )
        {
          v32 = IoDriverObjectType;
          CurrentSilo = PsGetCurrentSilo();
          DriverNameFromKeyNode = ObOpenObjectByNameEx(
                                    (__int64)&v58,
                                    (__int64)v32,
                                    0,
                                    0LL,
                                    0,
                                    0LL,
                                    (__int64)CurrentSilo,
                                    &Handle);
          if ( DriverNameFromKeyNode < 0 )
          {
            ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.ApcStateFill[16]);
            IopBootLog(&DestinationString);
            if ( DriverNameFromKeyNode == -1073741772 )
              DriverNameFromKeyNode = -1073740914;
            goto LABEL_43;
          }
          P = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &P, 0LL);
          ZwClose(Handle);
          if ( DriverNameFromKeyNode < 0 )
            goto LABEL_69;
          DriverNameFromKeyNode = IopResurrectDriver((__int64)P);
          ObfDereferenceObject(P);
        }
        else if ( IopCheckIfNotNativeDriver(v16, (__int64)&DestinationString) == 1 )
        {
          DriverNameFromKeyNode = ((_BYTE)v4 != 0) - 1073740949;
          IopLogBlockedDriverEvent((__int64)&DestinationString, v38, DriverNameFromKeyNode);
        }
        ExReleaseResourceLite((PERESOURCE)&IopSessionNotificationLock.ApcStateFill[16]);
        IopBootLog(&DestinationString);
      }
    }
  }
LABEL_43:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741218 && DriverNameFromKeyNode != -1073740948 )
  {
    P = 0LL;
    if ( DriverNameFromKeyNode != -1073741554 )
    {
      PnpDriverLoadingFailed(KeyHandle, 0LL);
      if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(KeyHandle, L"ErrorControl", 0, &P) >= 0 )
      {
        v40 = P;
        if ( *((_DWORD *)P + 3) )
          CmBootLastKnownGood(
            *(_DWORD *)((char *)P + *((unsigned int *)P + 2)),
            (unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL),
            (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
            DriverNameFromKeyNode);
        ExFreePoolWithTag(v40, 0);
      }
    }
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v51.Buffer )
  {
    v43 = v51.Length >> 1;
    UserData.Ptr = (ULONGLONG)&v43;
    v63 = v51.Length;
    v65 = &v49;
    LODWORD(P) = v8;
    v49 = DriverNameFromKeyNode;
    *(_QWORD *)&UserData.Size = 2LL;
    v62 = v51.Buffer;
    v64 = 0;
    v66 = 4LL;
    if ( Destination.Buffer )
      v34 = Destination.Length >> 1;
    else
      v34 = 0;
    LOWORD(v45) = v34;
    v67 = &v45;
    v70 = 2 * v34;
    v69 = Destination.Buffer;
    p_P = &P;
    v68 = 2LL;
    v71 = 0;
    v73 = 4LL;
    PnpDiagnosticTrace(&KMPnPEvt_DriverLoad_Stop, 6u, &UserData);
    ExFreePoolWithTag(v51.Buffer, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
