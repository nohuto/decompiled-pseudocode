/*
 * XREFs of PopAllocateHiberContext @ 0x140B75B48
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     RtlSetAllBits @ 0x1403EE130 (RtlSetAllBits.c)
 *     RtlClearAllBits @ 0x140478400 (RtlClearAllBits.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1406032D4 (PopInternalAddToDumpFile.c)
 *     Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledDeviceUsageNoInline @ 0x140609BD8 (Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvlAllocateHibernateResources @ 0x140775C6C (HvlAllocateHibernateResources.c)
 *     BiOpenStoreWithHash @ 0x140776404 (BiOpenStoreWithHash.c)
 *     VslAllocateSecureHibernateResources @ 0x140794A70 (VslAllocateSecureHibernateResources.c)
 *     BcdCloseStore @ 0x1409A1068 (BcdCloseStore.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     PopFreeHiberContext @ 0x140B1CE40 (PopFreeHiberContext.c)
 *     PopHiberInitializeResources @ 0x140B2C534 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x140B2C8F0 (MmMarkHiberRange.c)
 *     PopBcdSetPendingResume @ 0x140B4E554 (PopBcdSetPendingResume.c)
 *     PopLoadResumeContext @ 0x140B59F44 (PopLoadResumeContext.c)
 *     IoGetDumpStack @ 0x140B6307C (IoGetDumpStack.c)
 *     MmLockPreChargedPagedPool @ 0x140B635B0 (MmLockPreChargedPagedPool.c)
 *     PopBcdEstablishResumeObject @ 0x140B6BBB0 (PopBcdEstablishResumeObject.c)
 *     BcdForciblyUnloadStore @ 0x140B6D9BC (BcdForciblyUnloadStore.c)
 *     BgkResumePrepare @ 0x140BF744C (BgkResumePrepare.c)
 *     PopDiscardRange @ 0x140C0BDA8 (PopDiscardRange.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 *     PopGetHwConfigurationSignature @ 0x140C0EC5C (PopGetHwConfigurationSignature.c)
 *     PopGetBitlockerKeyLocation @ 0x140C0EEC0 (PopGetBitlockerKeyLocation.c)
 *     PopAllocatePages @ 0x140C0FF38 (PopAllocatePages.c)
 */

__int64 __fastcall PopAllocateHiberContext(_DWORD *a1)
{
  int DumpStack; // edi
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  ULONG_PTR *v6; // r12
  ULONG_PTR v7; // r15
  char v8; // cl
  char v9; // r8
  __int16 v10; // dx
  char v11; // cl
  __int64 v12; // r8
  __int16 v13; // dx
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // r8
  HANDLE v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int v26; // eax
  bool v27; // zf
  unsigned int v28; // edx
  unsigned int v29; // ecx
  __int64 Pages; // rax
  __int64 **v31; // r13
  __int64 *i; // rdi
  int v33; // eax
  __int64 v34; // rax
  PVOID *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  PVOID *v40; // rdi
  __int64 v41; // r14
  unsigned __int64 v43; // [rsp+30h] [rbp-10h] BYREF
  __int16 SystemInformation; // [rsp+88h] [rbp+48h] BYREF
  HANDLE BcdObjectHandle; // [rsp+90h] [rbp+50h] BYREF
  HANDLE BcdStoreHandle; // [rsp+98h] [rbp+58h] BYREF

  BcdStoreHandle = 0LL;
  v43 = 0LL;
  SystemInformation = 0;
  if ( dword_140F10454 != 5 )
    return 0;
  v3 = (char *)MemoryMap;
  BcdObjectHandle = 0LL;
  qword_140F10470 = (ULONG_PTR)MemoryMap;
  memset_0(MemoryMap, 0, 0x1F0uLL);
  if ( (unsigned int)Feature_Servicing_ARM64_LLVMHibernate__private_IsEnabledDeviceUsageNoInline() )
    v3[493] = 1;
  MmLockPreChargedPagedPool((unsigned __int64)qword_140F10930);
  dword_140E67720 = 0;
  *((_OWORD *)v3 + 2) = xmmword_140F10950;
  *((_OWORD *)v3 + 4) = xmmword_140F10960;
  *((_QWORD *)v3 + 27) = qword_140F10940;
  *((_QWORD *)v3 + 44) = qword_140F109A0;
  *((_QWORD *)v3 + 29) = qword_140F10980;
  *((_QWORD *)v3 + 30) = qword_140F109B0;
  *((_QWORD *)v3 + 31) = qword_140F109A8;
  *((_OWORD *)v3 + 3) = xmmword_140F10970;
  *((_QWORD *)v3 + 11) = v3 + 80;
  *((_QWORD *)v3 + 10) = v3 + 80;
  if ( !FileObject )
  {
    DumpStack = -1073741809;
    *a1 = 10;
    v5 = 42LL;
LABEL_56:
    PopCheckpointSystemSleep(v5);
    goto LABEL_57;
  }
  v6 = (ULONG_PTR *)(v3 + 184);
  DumpStack = IoGetDumpStack(v4, (__int64)(v3 + 184));
  if ( DumpStack < 0 )
  {
    *a1 = 11;
    v5 = 43LL;
    goto LABEL_56;
  }
  v7 = *v6;
  v8 = 0;
  if ( dword_140F1042C < 0 && dword_140F10434 == 2 )
    v8 = 2;
  v9 = v8 | 1;
  v10 = __readcr4();
  v11 = v8 | 9;
  if ( (v10 & 0x1000) == 0 )
    v11 = v9;
  v12 = *((_QWORD *)v3 + 29);
  *v3 = v11;
  v13 = qword_140F10948;
  v14 = qword_140F10948 & 0xFFFFFFFFFFFFF000uLL;
  v15 = qword_140F10948;
  *(_QWORD *)v12 = 0LL;
  *(_WORD *)(v12 + 10) = 0;
  *(_QWORD *)(v12 + 32) = v14;
  *(_DWORD *)(v12 + 44) = v13 & 0xFFF;
  *(_WORD *)(v12 + 8) = 8 * ((((unsigned __int64)(v15 & 0xFFF) + 102399) >> 12) + 6);
  *(_DWORD *)(v12 + 40) = 98304;
  MmBuildMdlForNonPagedPool(*((PMDL *)v3 + 29));
  v16 = *((_QWORD *)v3 + 30);
  if ( v16 )
  {
    v17 = qword_140F109A8;
    v18 = qword_140F109A8;
    *(_QWORD *)v16 = 0LL;
    *(_WORD *)(v16 + 10) = 0;
    *(_DWORD *)(v16 + 40) = 4096;
    *(_WORD *)(v16 + 8) = 8 * (((unsigned __int16)((v18 & 0xFFF) + 0x1FFF) >> 12) + 6);
    *(_QWORD *)(v16 + 32) = v17 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(v16 + 44) = v17 & 0xFFF;
    MmBuildMdlForNonPagedPool(*((PMDL *)v3 + 30));
  }
  DumpStack = PopLoadResumeContext((__int64)v3);
  if ( DumpStack < 0 )
  {
    *a1 = 12;
    v5 = 44LL;
    goto LABEL_56;
  }
  DumpStack = BiOpenStoreWithHash(v19, 2u, v20, (__int64)&BcdStoreHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 13;
    v5 = 45LL;
    goto LABEL_56;
  }
  v21 = BcdStoreHandle;
  DumpStack = PopBcdEstablishResumeObject(BcdStoreHandle, &BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 14;
    BcdCloseStore(v21);
    v5 = 46LL;
    goto LABEL_56;
  }
  DumpStack = PopBcdSetPendingResume(v21, v22, v23, (__int64)BcdObjectHandle);
  BcdCloseObject(BcdObjectHandle);
  if ( DumpStack < 0 )
  {
    *a1 = 15;
    BcdCloseStore(v21);
    v5 = 47LL;
    goto LABEL_56;
  }
  BcdForciblyUnloadStore(v21);
  RtlClearAllBits((PRTL_BITMAP)v3 + 3);
  RtlSetAllBits((PRTL_BITMAP)v3 + 4);
  RtlSetAllBits((PRTL_BITMAP)v3 + 2);
  *((_DWORD *)v3 + 121) = PopGetHwConfigurationSignature(v3 + 480);
  PopHiberInitializeResources(v3);
  if ( (int)PopGetBitlockerKeyLocation(&v43) >= 0 )
  {
    v24 = v43 >> 12;
    *((_QWORD *)v3 + 43) = v43 >> 12;
    PopDiscardRange(v3, v24, 4LL);
  }
  if ( !KdPitchDebugger || KdEventLoggingEnabled )
  {
    PoSetHiberRange(v3, 2u, &KdTimerDifference, 0LL, 0x20676244u);
    PoSetHiberRange(v3, 2u, &KdDebuggerLock, 0LL, 0x20676244u);
  }
  MmMarkHiberRange((__int64)v3, xmmword_140F10908);
  guard_dispatch_icall_no_overrides((__int64)v3, v25);
  v26 = (unsigned int)((*((_DWORD *)v3 + 8) >> 3) + 4095) >> 12;
  v27 = *((_QWORD *)v3 + 34) == 0LL;
  v28 = v26;
  *((_DWORD *)v3 + 42) = v26;
  if ( !v27 )
  {
    v29 = *((_DWORD *)v3 + 70);
    if ( v29 > v26 )
    {
      *((_DWORD *)v3 + 42) = v29;
      v28 = v29;
    }
  }
  Pages = PopAllocatePages(v28);
  DumpStack = *((_DWORD *)v3 + 51);
  *((_QWORD *)v3 + 20) = Pages;
  if ( DumpStack < 0 )
  {
    *a1 = 16;
    v5 = 48LL;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(*v6 + 280) )
  {
    v31 = (__int64 **)(*(_QWORD *)(*v6 + 272) + 40LL);
    for ( i = *v31; i != (__int64 *)v31; i = (__int64 *)*i )
    {
      v33 = *((_DWORD *)i + 16);
      if ( v33 )
      {
        if ( (v33 & 0xFFF) != 0 )
        {
          PopInternalAddToDumpFile((__int64)(i - 1), 0x70u, 0LL);
          PopInternalAddToDumpFile((__int64)v3, 0x1F0u, 0LL);
          PopCheckpointSystemSleep(49LL);
          KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v7, (ULONG_PTR)v3);
        }
        v34 = 2LL;
        v35 = (PVOID *)(i + 9);
        BcdObjectHandle = (HANDLE)2;
        do
        {
          if ( *v35 )
          {
            PoSetHiberRange(v3, 0x8000u, *v35, *((unsigned int *)i + 16), 0x66756263u);
            v34 = (__int64)BcdObjectHandle;
          }
          ++v35;
          BcdObjectHandle = (HANDLE)--v34;
        }
        while ( v34 );
      }
    }
  }
  else
  {
    v36 = PopAllocatePages(16LL);
    *(_QWORD *)(v7 + 8) = v36;
    if ( !v36 )
    {
      DumpStack = *((_DWORD *)v3 + 51);
      *a1 = 17;
      PopCheckpointSystemSleep(50LL);
      if ( DumpStack >= 0 )
        return (unsigned int)DumpStack;
LABEL_57:
      PopFreeHiberContext(v38, v37, v39);
      return (unsigned int)DumpStack;
    }
    PoSetHiberRange(v3, 0x8000u, (PVOID)(v36 + 0x2000), 0xE000uLL, 0x6D656D44u);
    if ( (*(_DWORD *)(v7 + 112) & 0xFFF) != 0 )
    {
      PopInternalAddToDumpFile(v7, 0x108u, 0LL);
      PopInternalAddToDumpFile((__int64)v3, 0x1F0u, 0LL);
      PopCheckpointSystemSleep(51LL);
      KeBugCheckEx(0xA0u, 0x102uLL, 0xAuLL, v7, (ULONG_PTR)v3);
    }
    v40 = (PVOID *)(v7 + 16);
    v41 = 2LL;
    do
    {
      if ( *v40 )
        PoSetHiberRange(v3, 0x8000u, *v40, *(unsigned int *)(v7 + 112), 0x66756263u);
      ++v40;
      --v41;
    }
    while ( v41 );
  }
  if ( VslVsmEnabled )
  {
    v3[488] = 1;
    DumpStack = VslAllocateSecureHibernateResources(v3, (PVOID *)v3 + 33, (ULONG_PTR *)v3 + 32);
    if ( DumpStack < 0 )
    {
      *a1 = 19;
      v5 = 53LL;
      goto LABEL_56;
    }
  }
  else
  {
    v3[488] = 0;
  }
  if ( ZwQuerySystemInformation(SystemSecureBootInformation, &SystemInformation, 2u, 0LL) >= 0 )
    v3[489] = SystemInformation;
  if ( (int)BgkResumePrepare(v3) >= 0 )
    PopBgkResumePrepared = 1;
  *((_DWORD *)v3 + 52) = *((_DWORD *)v3 + 72) - 1;
  HvlAllocateHibernateResources(0LL);
  return 0;
}
