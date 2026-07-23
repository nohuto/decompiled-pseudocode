/*
 * XREFs of IopInitializeBootDrivers @ 0x140CC5374
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpDiagnosticTrace @ 0x14048D948 (PnpDiagnosticTrace.c)
 *     PnpUnlockDeviceActionQueue @ 0x1404D0F6C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1404D1004 (PnpLockDeviceActionQueue.c)
 *     HeadlessKernelAddLogEntry @ 0x1404E6FF8 (HeadlessKernelAddLogEntry.c)
 *     McTemplateK0dzd_EtwWriteTransfer @ 0x1405DA558 (McTemplateK0dzd_EtwWriteTransfer.c)
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14077CA20 (PnpWaitForEmptyDeviceEventQueue.c)
 *     IoMountBootLayer @ 0x140796AB0 (IoMountBootLayer.c)
 *     PipHardwareConfigGetIndex @ 0x14079E55C (PipHardwareConfigGetIndex.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A6AB8 (PipApplyFunctionToServiceInstances.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AFEB0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     _PnpCtxRegSetValue @ 0x1409AD0CC (_PnpCtxRegSetValue.c)
 *     IopOpenRegistryKeyEx @ 0x1409DC0A0 (IopOpenRegistryKeyEx.c)
 *     RtlCompareUnicodeString @ 0x1409DE5A0 (RtlCompareUnicodeString.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PiCreateDriverRedirectedStateKey @ 0x140A11A78 (PiCreateDriverRedirectedStateKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x140A11B9C (IopGetDriverNameFromKeyNode.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140A69BB0 (PnpUnicodeStringToWstr.c)
 *     _PnpCtxRegCloseKey @ 0x140A9E908 (_PnpCtxRegCloseKey.c)
 *     _PnpCtxRegCreateKey @ 0x140AED690 (_PnpCtxRegCreateKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140C8617C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     IopCreateArcNames @ 0x140CC25A0 (IopCreateArcNames.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140CC468C (IopCallBootDriverReinitializationRoutines.c)
 *     PipGetDriverTagPriority @ 0x140CC7994 (PipGetDriverTagPriority.c)
 *     PipLookupGroupName @ 0x140CC8510 (PipLookupGroupName.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140CC96B0 (PipUnloadEarlyLaunchDrivers.c)
 *     PipWaitCriticalDevices @ 0x140CC9754 (PipWaitCriticalDevices.c)
 *     PnpWaitForDevicesToStart @ 0x140CC9A9C (PnpWaitForDevicesToStart.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140CC9C90 (PiCreateDriverDataDirectoryRoot.c)
 *     IopAllocateLegacyBootResources @ 0x140CCB498 (IopAllocateLegacyBootResources.c)
 *     VhdAutoAttachVirtualDisks @ 0x140D089A4 (VhdAutoAttachVirtualDisks.c)
 *     VhdInitialize @ 0x140D08C34 (VhdInitialize.c)
 *     RamdiskInitialize @ 0x140D0A0B4 (RamdiskInitialize.c)
 *     PipInitializeCoreDriversAndElam @ 0x140D0B1AC (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140D0B5E4 (PipInitializeDriverDependentDLLs.c)
 *     PnpInitializeBootStartDriver @ 0x140D0EFCC (PnpInitializeBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140D10DDC (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x140D116F4 (PipCheckDependencies.c)
 */

__int64 __fastcall IopInitializeBootDrivers(__int64 a1)
{
  NTSTATUS RegistryValue; // ebx
  __int64 result; // rax
  _QWORD *v4; // r14
  int GroupOrderIndex; // eax
  char *v6; // r8
  unsigned int v7; // r9d
  unsigned __int16 i; // dx
  __int64 v9; // rcx
  char *v10; // rcx
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // di
  __int64 v13; // rsi
  UNICODE_STRING *v14; // rsi
  UNICODE_STRING *v15; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v17; // rdi
  unsigned int v18; // ebx
  unsigned __int16 DriverTagPriority; // ax
  __int64 **v20; // r8
  __int64 *j; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned __int16 v24; // r15
  __int64 v25; // r12
  __int64 v26; // rdi
  _QWORD *k; // rbx
  _QWORD *v28; // rsi
  __int64 v29; // rax
  int started; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  char v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  NTSTATUS v36; // edx
  unsigned __int16 m; // r15
  __int64 v38; // r13
  _QWORD *v39; // rcx
  __int64 *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rdi
  ULONG v43; // edx
  PVOID v44; // r14
  void *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned __int16 *v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  PVOID v52; // r12
  __int64 dwFlags; // [rsp+20h] [rbp-E0h]
  void *v54; // [rsp+30h] [rbp-D0h]
  __int64 v55; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int Index; // [rsp+50h] [rbp-B0h]
  int v59; // [rsp+54h] [rbp-ACh] BYREF
  int v60; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  void *v62; // [rsp+68h] [rbp-98h]
  void *v63; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v64; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING Destination; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v67[2]; // [rsp+A8h] [rbp-58h] BYREF
  const wchar_t *v68; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING String1; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-38h] BYREF
  int v71; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING String2; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t pszDest[64]; // [rsp+F0h] [rbp-10h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v60 = 0;
  Handle = 0LL;
  P = 0LL;
  *(_DWORD *)(&v64.MaximumLength + 1) = 0;
  v67[1] = 0;
  String2 = 0LL;
  v63 = 0LL;
  String1 = 0LL;
  v62 = 0LL;
  v59 = 0;
  DestinationString = 0LL;
  v71 = 0;
  v70 = 0LL;
  Object = 0LL;
  PnpDiagnosticTrace(&KMPnPEvt_BootStart_Start, 0, 0LL);
  PnpDriverImageLoadPolicy = 3;
  v64.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies\\EarlyLaunch";
  *(_DWORD *)&v64.Length = 8388734;
  if ( IopOpenRegistryKeyEx(&Handle, 0LL, &v64, 0x20019u) >= 0
    || (*(_DWORD *)&v64.Length = 8257660,
        v64.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\EarlyLaunch",
        IopOpenRegistryKeyEx(&Handle, 0LL, &v64, 0x20019u) >= 0) )
  {
    RegistryValue = IopGetRegistryValue(Handle, L"DriverLoadPolicy", 0, &P);
    ZwClose(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
        PnpDriverImageLoadPolicy = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
  }
  if ( PnpDriverImageLoadPolicy == 8 )
  {
    PnpDriverImageLoadPolicy = 0;
  }
  else if ( (PnpDriverImageLoadPolicy & 0xFFFFFFF8) != 0 )
  {
    PnpDriverImageLoadPolicy = 3;
  }
  PipInitializeCoreDriversAndElam(a1);
  v67[0] = 2097182;
  v68 = L"\\FileSystem\\RAW";
  *(_DWORD *)&Destination.Length = 0x20000;
  Destination.Buffer = (wchar_t *)&word_140D138C0;
  result = PnpInitializeBootStartDriver(
             (unsigned int)v67,
             (unsigned int)&Destination,
             (unsigned int)RawInitialize,
             0,
             0,
             0);
  v4 = Object;
  if ( !Object )
  {
    LODWORD(IopInitFailCode) = 30;
    return result;
  }
  GroupOrderIndex = (unsigned __int16)PpInitGetGroupOrderIndex(0LL);
  IopGroupIndex = GroupOrderIndex;
  Index = 0xFFFF;
  if ( (unsigned __int16)GroupOrderIndex == 0xFFFF )
  {
    HeadlessKernelAddLogEntry();
    result = 3221226021LL;
    LODWORD(IopInitFailCode) = 31;
    return result;
  }
  IopGroupTable = (PVOID)ExAllocatePool2(256LL, 16LL * (unsigned __int16)GroupOrderIndex, 0x6E697050u);
  v6 = (char *)IopGroupTable;
  if ( !IopGroupTable )
  {
    HeadlessKernelAddLogEntry();
    result = 3221225626LL;
    LODWORD(IopInitFailCode) = 32;
    return result;
  }
  v7 = IopGroupIndex;
  for ( i = 0; i < v7; *(_QWORD *)v10 = v10 )
  {
    v9 = i++;
    v10 = &v6[16 * v9];
    *((_QWORD *)v10 + 1) = v10;
  }
  PipInitializeDriverDependentDLLs(2LL, a1, v6);
  RtlInitUnicodeString(&DestinationString, L"System Reserved");
  RtlInitUnicodeString(&String2, L"Boot Bus Extender");
  v11 = 0;
  v12 = 0;
  if ( PiInitGroupOrderTableCount )
  {
    while ( 1 )
    {
      v13 = 16LL * v12;
      if ( RtlCompareUnicodeString((PCUNICODE_STRING)((char *)PiInitGroupOrderTable + v13), &DestinationString, 1u) )
      {
        if ( RtlCompareUnicodeString((PCUNICODE_STRING)((char *)PiInitGroupOrderTable + v13), &String2, 1u) )
          goto LABEL_25;
        LOWORD(Index) = v12;
      }
      ++v11;
LABEL_25:
      if ( v11 < 2u && ++v12 < (unsigned __int16)PiInitGroupOrderTableCount )
        continue;
      v4 = Object;
      break;
    }
  }
  v14 = *(UNICODE_STRING **)(a1 + 48);
  while ( v14 != (UNICODE_STRING *)(a1 + 48) )
  {
    v15 = v14;
    v14 = *(UNICODE_STRING **)&v14->Length;
    if ( SLODWORD(v15[3].Buffer) >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 0x30uLL, 0x6E697050u);
      v17 = Pool2;
      if ( Pool2 )
      {
        Pool2[1] = Pool2;
        *Pool2 = Pool2;
        Pool2[3] = v15;
        if ( IopOpenRegistryKeyEx(&Handle, 0LL, v15 + 2, 0x20019u) >= 0 )
        {
          v17[4] = Handle;
          v18 = (unsigned __int16)PpInitGetGroupOrderIndex(Handle);
          DriverTagPriority = PipGetDriverTagPriority(Handle);
          *((_WORD *)v17 + 22) = DriverTagPriority;
          v20 = (__int64 **)((char *)IopGroupTable + 16 * v18);
          for ( j = *v20; j != (__int64 *)v20 && *((_WORD *)j + 22) <= DriverTagPriority; j = (__int64 *)*j )
            ;
          v22 = (__int64 *)j[1];
          v23 = *v22;
          if ( *(__int64 **)(*v22 + 8) != v22 )
LABEL_127:
            __fastfail(3u);
          *v17 = v23;
          v17[1] = v22;
          *(_QWORD *)(v23 + 8) = v17;
          *v22 = (__int64)v17;
        }
        else
        {
          ExFreePoolWithTag(v17, 0);
        }
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(1);
  v24 = 0;
LABEL_41:
  if ( v24 < (unsigned int)IopGroupIndex )
  {
    v25 = 16LL * v24;
    v26 = 0LL;
    for ( k = *(_QWORD **)((char *)IopGroupTable + v25); ; k = (_QWORD *)*k )
    {
      if ( k == (_QWORD *)((char *)IopGroupTable + v25) )
      {
        if ( v24 == (_WORD)Index )
        {
          IopAllocateLegacyBootResources(0LL, 0LL);
          IopBootConfigsReserved = 1;
          IopAllocateBootResourcesRoutine = (__int64)IopAllocateBootResources;
        }
        ++v24;
        goto LABEL_41;
      }
      Handle = (HANDLE)k[4];
      v28 = (_QWORD *)k[3];
      Object = v28;
      v29 = v28[6];
      *((_BYTE *)k + 47) = 1;
      *(_QWORD *)&DestinationString.Length = v29;
      if ( (int)IopGetDriverNameFromKeyNode(Handle, &Destination) < 0 )
      {
        *((_BYTE *)k + 46) = 1;
        goto LABEL_61;
      }
      if ( IopGetRegistryValue(Handle, L"Group", 0, &P) >= 0 )
      {
        v28 = P;
        if ( *((_DWORD *)P + 3) )
        {
          String1.Length = *((_WORD *)P + 6);
          String1.MaximumLength = String1.Length;
          String1.Buffer = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
          v26 = PipLookupGroupName(&String1);
        }
        ExFreePoolWithTag(v28, 0);
        LODWORD(v28) = (_DWORD)Object;
      }
      v4 = 0LL;
      if ( !(unsigned int)PipCheckDependencies(Handle) )
        goto LABEL_59;
      v4 = (_QWORD *)k[2];
      Object = v4;
      if ( !v4 && !*((_BYTE *)k + 46) )
      {
        started = PnpInitializeBootStartDriver(
                    (unsigned int)&Destination,
                    (int)v28 + 32,
                    *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 56LL),
                    *(_DWORD *)&DestinationString.Length,
                    0,
                    1);
        v4 = Object;
        *((_DWORD *)k + 10) = started;
        if ( !v4 )
          goto LABEL_59;
        ObfReferenceObjectWithTag(v4, 0x746C6644u);
      }
      if ( v4 )
      {
        if ( v26 )
          ++*(_DWORD *)(v26 + 28);
        k[2] = v4;
        goto LABEL_60;
      }
LABEL_59:
      *((_BYTE *)k + 46) = 1;
LABEL_60:
      ExFreePoolWithTag(Destination.Buffer, 0);
      v26 = 0LL;
LABEL_61:
      if ( !*((_BYTE *)k + 46) )
      {
        PnpLockDeviceActionQueue();
        PipApplyFunctionToServiceInstances(v31, v4[6] + 24LL, v32, v33, dwFlags, (__int64)v4, v54);
        PnpUnlockDeviceActionQueue();
        PnpWaitForEmptyDeviceActionQueue();
        PnpRequestDeviceAction(0LL, 7u, 0, 0LL, 0LL, 0LL, 0LL);
      }
      if ( PnpWaitForEmptyDeviceEventQueue() < 0 )
      {
        HeadlessKernelAddLogEntry();
        LODWORD(IopInitFailCode) = 33;
        return 3221226621LL;
      }
    }
  }
  PnpNotifyEarlyLaunchStatusUpdate(2);
  PipUnloadEarlyLaunchDrivers(a1);
  PnPBootDriversLoaded = 1;
  PnpRequestDeviceAction(0LL, 0, 0, 0LL, 0LL, 0LL, 0LL);
  if ( !(unsigned int)PnpWaitForDevicesToStart() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 34;
    return 3221226621LL;
  }
  if ( IopCallBootDriverReinitializationRoutines() && !(unsigned int)PnpWaitForDevicesToStart() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 35;
    return 3221226621LL;
  }
  if ( (int)RamdiskInitialize(0LL, a1, &v70) < 0 )
    goto LABEL_130;
  if ( !(unsigned int)PnpWaitForDevicesToStart() )
  {
    HeadlessKernelAddLogEntry();
    LODWORD(IopInitFailCode) = 36;
    return 3221226621LL;
  }
  result = RamdiskInitialize(1LL, a1, &v70);
  if ( (int)result >= 0 )
  {
LABEL_130:
    if ( (int)VhdInitialize(a1) >= 0 && !(unsigned int)PnpWaitForDevicesToStart() )
    {
      HeadlessKernelAddLogEntry();
      LODWORD(IopInitFailCode) = 37;
      return 3221226621LL;
    }
    IoMountBootLayer(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 4392LL), 0LL, 0LL);
    result = IopCreateArcNames(a1);
    if ( (int)result >= 0 )
    {
      PnpBootDeviceWait(a1, 1, (__int64)IopMarkBootPartition, 0LL);
      PnPBootDriversInitialized = 1;
      VhdAutoAttachVirtualDisks();
      result = PipWaitCriticalDevices(a1);
      if ( (int)result >= 0 )
      {
        LOBYTE(v34) = HIDWORD(WheapPfaLock.KernelStack) != 0;
        result = ExpInitializeStateSeparationCreateOsRoots(v34);
        if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741637 )
        {
          result = PiCreateDriverDataDirectoryRoot();
          if ( (int)result >= 0 )
          {
            pszDest[0] = 0;
            Index = PipHardwareConfigGetIndex(v35, (__int64)&v60);
            v36 = Index;
            if ( Index >= 0 )
            {
              LODWORD(v55) = v60;
              v36 = RtlStringCchPrintfExW(pszDest, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v55, &Object);
              Index = v36;
            }
            for ( m = 0; m < (unsigned int)IopGroupIndex; ++m )
            {
              v38 = 16LL * m;
              while ( 1 )
              {
                v39 = (char *)IopGroupTable + v38;
                v40 = *(__int64 **)((char *)IopGroupTable + v38);
                if ( v40 == (__int64 *)((char *)IopGroupTable + v38) )
                  break;
                if ( (_QWORD *)v40[1] != v39 )
                  goto LABEL_127;
                v41 = *v40;
                if ( *(__int64 **)(*v40 + 8) != v40 )
                  goto LABEL_127;
                *v39 = v41;
                *(_QWORD *)(v41 + 8) = v39;
                v42 = v40[2];
                if ( v36 >= 0
                  && !*((_BYTE *)v40 + 46)
                  && !*(_QWORD *)(v42 + 8)
                  && *(_QWORD *)(*(_QWORD *)(v42 + 48) + 8LL)
                  && (*(_DWORD *)(v42 + 16) & 0x408) == 0
                  && IopGetRegistryValue((HANDLE)v40[4], L"Start", 0, &P) >= 0 )
                {
                  v44 = P;
                  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
                  {
                    v59 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
                    if ( !v59 )
                    {
                      v59 = 3;
                      if ( (int)PiCreateDriverRedirectedStateKey(
                                  (UNICODE_STRING *)(*(_QWORD *)(v42 + 48) + 24LL),
                                  v43,
                                  &v63) >= 0 )
                      {
                        v45 = v63;
                      }
                      else
                      {
                        v45 = (void *)v40[4];
                        v63 = v45;
                      }
                      if ( (int)PnpCtxRegCreateKey(*(__int64 *)&PiPnpRtlCtx, (int)v45, (int)L"StartOverride", 0, 2, 0LL) >= 0 )
                      {
                        PnpCtxRegSetValue(v46, v62, (__int64)pszDest, 4LL, (__int64)&v59, 4u);
                        PnpCtxRegCloseKey(v47, v62);
                        v62 = 0LL;
                        if ( (byte_140EF412B & 2) != 0 )
                        {
                          v48 = (unsigned __int16 *)(*(_QWORD *)(v42 + 48) + 24LL);
                          Object = 0LL;
                          if ( (int)PnpUnicodeStringToWstr(&Object, 0LL, v48) >= 0 )
                          {
                            v52 = Object;
                            if ( (byte_140EF412B & 2) != 0 )
                              McTemplateK0dzd_EtwWriteTransfer(v50, v49, v51, v60, (const wchar_t *)Object, v59);
                            PnpUnicodeStringToWstrFree(v52, *(_QWORD *)(v42 + 48) + 24LL);
                          }
                        }
                      }
                      if ( v45 != (void *)v40[4] )
                      {
                        ZwClose(v45);
                        v63 = 0LL;
                      }
                    }
                  }
                  ExFreePoolWithTag(v44, 0);
                }
                if ( v42 )
                  ObfDereferenceObjectWithTag((PVOID)v42, 0x746C6644u);
                if ( *((_BYTE *)v40 + 46) )
                  *(_DWORD *)(*(_QWORD *)(v40[3] + 48) + 104LL) |= 0x20000u;
                ZwClose((HANDLE)v40[4]);
                ExFreePoolWithTag(v40, 0);
                v36 = Index;
              }
            }
            ExFreePoolWithTag(IopGroupTable, 0);
            PnpUnusedBootDriversCleanedUp = 1;
            PnpDiagnosticTrace(&KMPnPEvt_BootStart_Stop, 0, 0LL);
            return 0LL;
          }
          else
          {
            LODWORD(IopInitFailCode) = 43;
          }
        }
        else
        {
          LODWORD(IopInitFailCode) = 45;
        }
      }
      else
      {
        LODWORD(IopInitFailCode) = 42;
      }
    }
    else
    {
      LODWORD(IopInitFailCode) = 39;
    }
  }
  else
  {
    LODWORD(IopInitFailCode) = 46;
  }
  return result;
}
