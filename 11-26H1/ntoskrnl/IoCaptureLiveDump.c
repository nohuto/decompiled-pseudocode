/*
 * XREFs of IoCaptureLiveDump @ 0x14050BFCC
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1405B6A88 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140B413AC (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IopLiveDumpWriteDumpFile @ 0x140345D88 (IopLiveDumpWriteDumpFile.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     SecureDump_GetSecureDumpSettings @ 0x140511FA4 (SecureDump_GetSecureDumpSettings.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405CF1A8 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpCaptureDumpStart @ 0x1405D0E70 (IopLiveDumpCaptureDumpStart.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1405D0EE0 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpInitRegistrySettings @ 0x1405D2760 (IopLiveDumpInitRegistrySettings.c)
 *     IopLiveDumpOpenVMMemoryPartition @ 0x1405D3420 (IopLiveDumpOpenVMMemoryPartition.c)
 *     IopLiveDumpReleaseResources @ 0x1405D3E34 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1405D49D4 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405D4B5C (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpValidateParameters @ 0x1405D55AC (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x1405D583C (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     IopLiveDumpTraceIoCaptureLiveDumpEntry @ 0x1405DA340 (IopLiveDumpTraceIoCaptureLiveDumpEntry.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405DA3E0 (IopLiveDumpTraceNoArgs.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IoCreateNotificationEvent @ 0x140B01E70 (IoCreateNotificationEvent.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoCaptureLiveDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _KEVENT *a5,
        __int64 a6,
        unsigned int **a7)
{
  HANDLE v7; // rdi
  void *v8; // rsi
  unsigned __int64 v9; // r13
  unsigned int *Pool2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int *v14; // r14
  int SecureDumpSettings; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  PKEVENT v21; // rax
  HANDLE v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rax
  _BYTE *v25; // rcx
  unsigned int v26; // eax
  __int64 MillisecondCounter; // r15
  int v28; // eax
  __int64 v29; // rsi
  __int64 v30; // rax
  struct _KEVENT *v31; // rcx
  void *v32; // rsi
  int v33; // ecx
  const GUID *v34; // r9
  const GUID *v35; // r8
  char v37; // [rsp+30h] [rbp-D0h] BYREF
  bool v38; // [rsp+31h] [rbp-CFh] BYREF
  bool v39; // [rsp+32h] [rbp-CEh] BYREF
  char v40; // [rsp+33h] [rbp-CDh] BYREF
  HANDLE v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  PKEVENT v43; // [rsp+48h] [rbp-B8h] BYREF
  PKEVENT v44; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-A8h]
  HANDLE v46; // [rsp+60h] [rbp-A0h]
  HANDLE v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  __int64 v50; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  HANDLE EventHandle; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v54; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v55; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  PKEVENT *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  PKEVENT *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  HANDLE *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  PKEVENT *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  __int64 *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  __int64 *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  __int64 *v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  PKEVENT *v76; // [rsp+190h] [rbp+90h]
  __int64 v77; // [rsp+198h] [rbp+98h]
  char *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  bool *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  bool *v82; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  HANDLE *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  char *v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]

  v46 = 0LL;
  v47 = 0LL;
  v7 = 0LL;
  v50 = a4;
  v8 = 0LL;
  v49 = a3;
  v9 = 0LL;
  v48 = a2;
  Pool2 = 0LL;
  v45 = a1;
  Handle = 0LL;
  EventHandle = 0LL;
  v41 = 0LL;
  v54 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  DestinationString = 0LL;
  v55 = 0LL;
  if ( !ForceDumpDisabled && AllowLiveDump )
  {
    if ( ExtraDumpContextEnabled )
      IopLiveDumpTraceIoCaptureLiveDumpEntry(a1, a2, a3, a4, (__int64)a5);
    KeQueryPerformanceCounter(&PerformanceFrequency);
    IopLiveDumpGetMillisecondCounter(1);
    if ( BufferChunkSizeInBytes != MEMORY[0xFFFFF78000000244] )
    {
      BufferChunkSizeInBytes = MEMORY[0xFFFFF78000000244];
      BufferChunkSizeInPages = MEMORY[0xFFFFF78000000244] >> 12;
    }
    IopLiveDumpCaptureDumpStart(a6);
    if ( a7 )
      *a7 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v37 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
    if ( v37 != 1 )
    {
      v14 = (int *)(a6 + 24);
      SecureDumpSettings = -1073741267;
LABEL_38:
      if ( IptInterface )
      {
        guard_dispatch_icall_no_overrides(0LL, v12);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 88));
        IptInterface = 0LL;
      }
      if ( Handle )
        ZwClose(Handle);
      if ( v8 )
        ZwClose(v8);
      if ( v46 )
        ZwClose(v46);
      if ( (*v14 & 0x10) != 0
        && SecureDumpSettings == -1073741248
        && (unsigned __int8)IopLiveDumpIsTracingEnabled(v13, v12) == 1 )
      {
        IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT);
      }
      if ( v37 )
      {
        IopLiveDumpContext = 0LL;
        ExReleaseResourceLite(&IopLiveDumpLock);
      }
      KeLeaveCriticalRegion();
      if ( SecureDumpSettings >= 0 )
      {
        SecureDumpSettings = SecureDump_GetSecureDumpSettings(Pool2 + 246);
        if ( SecureDumpSettings >= 0 )
        {
          if ( !*v25 || (v26 = Pool2[248]) != 0 && *((_BYTE *)Pool2 + 985) && Pool2[247] == 4096 && (v26 & 0xFFF) == 0 )
          {
            if ( (Pool2[10] & 8) != 0 )
            {
              SecureDumpSettings = -1073741802;
              *a7 = Pool2;
            }
            else
            {
              IopLiveDumpTraceNoArgs(LIVEDUMP_EVENT_WRITE_DUMPDATA_TO_FILE_START);
              MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
              if ( *((_QWORD *)Pool2 + 24) || *((_QWORD *)Pool2 + 25) )
                v28 = IopLiveDumpWriteDumpFileWithExtraPages((__int64)Pool2);
              else
                v28 = IopLiveDumpWriteDumpFile((__int64)Pool2);
              SecureDumpSettings = v28;
              v29 = IopLiveDumpGetMillisecondCounter(0);
              if ( (unsigned int)dword_140E06D90 > 5 && tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL) )
              {
                v42 = 0x1000000LL;
                v57 = &v42;
                v30 = *((_QWORD *)Pool2 + 70);
                v58 = 8LL;
                v60 = 8LL;
                v62 = 8LL;
                v31 = *(struct _KEVENT **)(v30 + 4000);
                v59 = &v44;
                v44 = v31;
                v43 = (PKEVENT)(v29 - MillisecondCounter);
                v61 = &v43;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_140E06D90,
                  (unsigned __int8 *)word_140047F82,
                  (const GUID *)(Pool2 + 242),
                  (const GUID *)(Pool2 + 238),
                  5u,
                  v56);
              }
              IopLiveDumpTraceDumpFileWriteEnd(Pool2, v29 - MillisecondCounter, 0LL, (unsigned int)SecureDumpSettings);
              if ( SecureDumpSettings >= 0 && (Pool2[20] & 2) != 0 )
                SecureDumpSettings = 261;
            }
          }
          else
          {
            SecureDumpSettings = -1073741823;
          }
        }
      }
      v32 = (void *)IopLiveDumpGetMillisecondCounter(0);
      IopLiveDumpTraceInterfaceEnd(Pool2, 0LL, (unsigned int)SecureDumpSettings, v32);
      if ( (unsigned int)dword_140E06D90 > 5 && tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL) )
      {
        v33 = *v14;
        v64 = &v42;
        v42 = 0x1000000LL;
        v66 = &v41;
        v44 = (PKEVENT)v45;
        v65 = 8LL;
        v68 = &v44;
        v70 = &v48;
        v72 = &v49;
        v74 = &v50;
        v43 = a5;
        v76 = &v43;
        LODWORD(v41) = SecureDumpSettings;
        v37 = (v33 & 8) != 0;
        v78 = &v37;
        v38 = (v33 & 0x10) != 0;
        v67 = 4LL;
        v80 = &v38;
        v82 = &v39;
        v84 = &v47;
        v40 = IOSpaceEnabled;
        v86 = &v40;
        v69 = 8LL;
        v71 = 8LL;
        v73 = 8LL;
        v75 = 8LL;
        v77 = 8LL;
        v79 = 1LL;
        v81 = 1LL;
        v39 = (v33 & 0x20) != 0;
        v83 = 1LL;
        v47 = v32;
        v85 = 8LL;
        v87 = 1LL;
        if ( Pool2 )
        {
          v34 = (const GUID *)(Pool2 + 238);
          v35 = (const GUID *)(Pool2 + 242);
        }
        else
        {
          v34 = (const GUID *)&v55;
          v35 = (const GUID *)&v55;
        }
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E06D90,
          (unsigned __int8 *)&dword_140047E7C,
          v35,
          v34,
          0xEu,
          &v63);
      }
      if ( Pool2 )
      {
        if ( (Pool2[10] & 8) == 0 )
          EtwActivityIdControl(2u, (LPGUID)(Pool2 + 238));
        if ( SecureDumpSettings != -1073741802 )
        {
          IopLiveDumpReleaseResources(Pool2);
          ExFreePoolWithTag(Pool2, 0x706D644Cu);
        }
      }
      return (unsigned int)SecureDumpSettings;
    }
    v9 = KiSupervisorStateExtensionHost;
    if ( KiSupervisorStateExtensionHost )
    {
      IptInterface = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)KiSupervisorStateExtensionHost);
      if ( IptInterface )
      {
        LOBYTE(v17) = 1;
        guard_dispatch_icall_no_overrides(v17, v16);
        if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v19, v18) )
        {
          guard_dispatch_icall_no_overrides(0LL, v20);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v9 + 88));
          IptInterface = 0LL;
        }
      }
      v9 &= -(__int64)(IptInterface != 0);
    }
    if ( (*(_DWORD *)(a6 + 24) & 0x10) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition");
      v43 = IoCreateNotificationEvent(&DestinationString, &EventHandle);
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition");
      v44 = IoCreateNotificationEvent(&DestinationString, &v54);
      RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\HighCommitCondition");
      v21 = IoCreateNotificationEvent(&DestinationString, &v47);
      v7 = EventHandle;
      v22 = v54;
      v42 = (__int64)v21;
      v46 = v47;
      Handle = EventHandle;
      v41 = v54;
    }
    else
    {
      v22 = v41;
    }
    Pool2 = (unsigned int *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v23 = v45;
      Pool2[20] &= 0xFFFFFFF3;
      *Pool2 = v23;
      *((_QWORD *)Pool2 + 1) = v48;
      *((_QWORD *)Pool2 + 2) = v49;
      *((_QWORD *)Pool2 + 3) = v50;
      *((_QWORD *)Pool2 + 4) = a5;
      *((_QWORD *)Pool2 + 115) = v46;
      *((_QWORD *)Pool2 + 116) = v43;
      *((_QWORD *)Pool2 + 117) = v44;
      v24 = v42;
      *((_QWORD *)Pool2 + 113) = v7;
      *((_QWORD *)Pool2 + 118) = v24;
      IopLiveDumpContext = (__int64)Pool2;
      Handle = 0LL;
      *((_QWORD *)Pool2 + 114) = v22;
      v41 = 0LL;
      v46 = 0LL;
      *((_QWORD *)Pool2 + 137) = 0LL;
      *((_QWORD *)Pool2 + 138) = 0LL;
      IopLiveDumpInitRegistrySettings(Pool2);
      if ( AllowLiveDump && ((Pool2[20] & 0x200) == 0 || *((_QWORD *)Pool2 + 143)) )
      {
        EtwActivityIdControl(5u, (LPGUID)(Pool2 + 238));
        EtwActivityIdControl(1u, (LPGUID)(Pool2 + 242));
        if ( (unsigned int)dword_140E06D90 > 5 && tlgKeywordOn((__int64)&dword_140E06D90, 0x400000000000LL) )
        {
          v42 = 0x1000000LL;
          v57 = &v42;
          v58 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E06D90,
            (unsigned __int8 *)byte_140047E49,
            (const GUID *)(Pool2 + 242),
            (const GUID *)(Pool2 + 238),
            3u,
            v56);
        }
        SecureDumpSettings = IopLiveDumpValidateParameters(Pool2, a6);
        v14 = (int *)(a6 + 24);
        if ( SecureDumpSettings >= 0 )
        {
          if ( (Pool2[10] & 4) != 0 )
            Pool2[20] |= 0x18000u;
          *((_QWORD *)Pool2 + 151) = Pool2 + 300;
          *((_QWORD *)Pool2 + 150) = Pool2 + 300;
          if ( (Pool2[10] & 8) == 0 || a7 )
          {
            IopLiveDumpOpenVMMemoryPartition(Pool2);
            SecureDumpSettings = IopLiveDumpAllocAndInitResources(Pool2);
            if ( SecureDumpSettings >= 0 )
              SecureDumpSettings = IopLiveDumpCaptureMemoryPages(Pool2);
          }
          else
          {
            SecureDumpSettings = -1073741811;
          }
        }
        goto LABEL_37;
      }
      SecureDumpSettings = -1073741811;
    }
    else
    {
      SecureDumpSettings = -1073741670;
    }
    v14 = (int *)(a6 + 24);
LABEL_37:
    v8 = v41;
    goto LABEL_38;
  }
  if ( a7 )
    *a7 = 0LL;
  return 3221225659LL;
}
