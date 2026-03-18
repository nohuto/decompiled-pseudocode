/*
 * XREFs of NtMapCMFModule @ 0x1408446A0
 * Callers:
 *     DifNtMapCMFModuleWrapper @ 0x14067B4E0 (DifNtMapCMFModuleWrapper.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x140431900 (ExConvertExclusiveToSharedLite.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     MiRemoveFromSystemSpace @ 0x14048FFF8 (MiRemoveFromSystemSpace.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     CMFCheckAccess @ 0x140842C28 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x1408434C8 (CMFFlushHitsFile.c)
 *     CMFRegisterEventTime @ 0x140843BB0 (CMFRegisterEventTime.c)
 *     CMFUnmapModules @ 0x14084441C (CMFUnmapModules.c)
 *     MmMapViewInSessionSpace @ 0x1409B7230 (MmMapViewInSessionSpace.c)
 *     MmMapViewOfSection @ 0x1409C1F50 (MmMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x140AE5278 (MUIInitializeResourceLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtMapCMFModule(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        PVOID *a6)
{
  __int64 v6; // r12
  int v8; // r14d
  unsigned int v9; // r13d
  unsigned int v10; // edi
  int v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v13; // eax
  unsigned int v14; // eax
  _DWORD *v15; // r8
  struct _KTHREAD *v16; // rax
  unsigned int v17; // ebx
  int v18; // ecx
  int v19; // ebx
  PVOID *v20; // r12
  PVOID v21; // rax
  void *Pool2; // rax
  NTSTATUS v23; // eax
  signed __int64 v24; // r15
  signed __int64 v25; // rbx
  __int64 ULong64FromUser; // rax
  int ULongFromUser; // eax
  int v28; // eax
  int v29; // eax
  KPROCESSOR_MODE PreviousMode; // [rsp+58h] [rbp-110h]
  PVOID MappedBase; // [rsp+60h] [rbp-108h] BYREF
  int v33; // [rsp+68h] [rbp-100h]
  unsigned int v34; // [rsp+6Ch] [rbp-FCh]
  unsigned int v35; // [rsp+70h] [rbp-F8h]
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-F0h] BYREF
  unsigned int v37; // [rsp+80h] [rbp-E8h]
  int v38; // [rsp+84h] [rbp-E4h]
  __int64 v39; // [rsp+88h] [rbp-E0h] BYREF
  signed __int64 v40; // [rsp+90h] [rbp-D8h]
  unsigned int v41; // [rsp+98h] [rbp-D0h]
  PVOID *v42; // [rsp+A0h] [rbp-C8h]
  HANDLE Handle; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-B8h] BYREF
  __int128 v45; // [rsp+C0h] [rbp-A8h]
  __int128 v46; // [rsp+D0h] [rbp-98h]
  __int64 v47; // [rsp+E0h] [rbp-88h]
  __int128 v48; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v49; // [rsp+F8h] [rbp-70h]
  __int128 v50; // [rsp+108h] [rbp-60h]
  struct _KEVENT Event; // [rsp+118h] [rbp-50h] BYREF

  v6 = a2;
  v48 = 0LL;
  v49 = 0LL;
  *(_QWORD *)&v50 = 0LL;
  DWORD2(v50) = 0;
  v39 = 0LL;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  v8 = 0;
  v33 = 0;
  v9 = 0;
  v34 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || (_DWORD)InitSafeBootMode )
  {
    v10 = -1073741823;
    goto LABEL_102;
  }
  if ( (a1 & 0xFFE0FE81) != 0 )
    goto LABEL_5;
  v10 = MUIInitializeResourceLock(&CMFLock);
  if ( (v10 & 0xC0000000) == 0xC0000000 )
    goto LABEL_102;
  if ( (a1 & 0x20000) != 0 )
  {
    if ( (a1 & 0x180000) != 0 && (a1 & 0x40000) != 0 || (a1 & 0x180000) == 0x180000 )
    {
LABEL_5:
      v10 = -1073741811;
      goto LABEL_102;
    }
    v11 = a1 & 0x1C0000;
    if ( v11 == (CMFFlagsCache & 0x1C0000) )
      goto LABEL_11;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(CMFLock, 1u);
    if ( v11 != (CMFFlagsCache & 0x1C0000) )
    {
      if ( CMFDirectorySectionPointer )
      {
        if ( !v11 )
        {
          v10 = -1073741637;
LABEL_29:
          ExReleaseResourceLite(CMFLock);
          KeLeaveCriticalRegion();
          goto LABEL_102;
        }
        if ( CMFDirectorySectionPointer )
        {
          v13 = 0x80000000;
          v41 = 0x80000000;
          if ( (CMFFlagsCache & 0x1C0000) != 0 )
            v13 = -1073741824;
          v41 = v13;
          v10 = CMFCheckAccess((__int64)CMFDirectorySectionPointer, v13, PreviousMode);
          if ( (v10 & 0xC0000000) == 0xC0000000 )
            goto LABEL_29;
        }
      }
      v14 = v11 | CMFFlagsCache & 0xFFE3FFFF;
      CMFFlagsCache = v14;
      if ( CMFDirectorySectionPointer && (v14 & 0x180000) != 0 )
      {
        MappedBase = 0LL;
        ViewSize = 104LL;
        v39 = 0LL;
        if ( MmMapViewInSessionSpace(CMFDirectorySectionPointer, &MappedBase, &ViewSize) >= 0 )
        {
          v15 = MappedBase;
          if ( MappedBase )
          {
            if ( ViewSize >= 0x68 )
            {
              *((_DWORD *)MappedBase + 12) &= 0xFFE3FFFF;
              v15[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
              v15 = MappedBase;
            }
            MiRemoveFromSystemSpace((ULONG_PTR)v15);
            MappedBase = 0LL;
          }
        }
        CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
        CMFRegisterEventTime(4u);
      }
    }
    v10 = 0;
    goto LABEL_29;
  }
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  ExAcquireResourceSharedLite(CMFLock, 1u);
  if ( CMFFlagsCache )
  {
    if ( (CMFFlagsCache & 0xF) != 0 )
      v17 = CMFFlagsCache & 0xF | a1 & 0xFFFFFFF0;
    else
      v17 = a1 | 1;
    if ( (CMFFlagsCache & 0x100000) == 0 )
    {
      v18 = 0x80000;
      if ( (CMFFlagsCache & 0x80000) != 0 )
      {
        if ( (v17 & 0x130) == 0x20 && (v17 & 0x10000) == 0 )
          goto LABEL_36;
      }
      else
      {
        v18 = 0x40000;
        if ( (CMFFlagsCache & 0x40000) == 0 )
          goto LABEL_45;
      }
      v17 |= v18;
      goto LABEL_45;
    }
    if ( (v17 & 0x10000) == 0 )
    {
LABEL_36:
      v10 = -1073741672;
      goto LABEL_92;
    }
    v17 |= 0x100000u;
  }
  else
  {
    v17 = a1 | 1;
  }
LABEL_45:
  v9 = v17 & 0xFFFFFECF;
  v35 = v9;
  v34 = v17 & 0xFFFFFECF;
  v19 = v17 & 0x130;
  v38 = (v9 & 0x40) != 0 ? 4 : 2;
  v37 = (v9 & 0x40) != 0 ? -1073741824 : 0x80000000;
  v8 = 10000;
  v33 = 10000;
  switch ( v19 )
  {
    case 16:
      if ( (unsigned int)CMFCacheIndex < 0x2710 )
      {
        v8 = CMFCacheIndex;
        v33 = CMFCacheIndex;
LABEL_53:
        LODWORD(v40) = (v9 & 2) != 0;
        v20 = &CMFDirectorySectionPointer;
        v42 = &CMFDirectorySectionPointer;
        v21 = CMFDirectorySectionPointer;
        break;
      }
      if ( (unsigned int)v6 < 0x2710 )
      {
        v8 = v6;
        v33 = v6;
        goto LABEL_53;
      }
      if ( CMFFirstAccess )
      {
        CMFRegisterEventTime(1u);
        CMFFirstAccess = 0;
      }
LABEL_51:
      v10 = -1073741811;
      goto LABEL_92;
    case 32:
      if ( (unsigned int)v6 >= 0x1E || CMFCacheIndex == 10000 )
        goto LABEL_51;
      v8 = CMFCacheIndex;
      v33 = CMFCacheIndex;
      if ( !CMFSegmentSectionPointer )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        MappedBase = Pool2;
        if ( !Pool2 )
        {
          v10 = -1073741801;
          goto LABEL_92;
        }
        memset_0(Pool2, 0, 0xF0uLL);
        v40 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CMFSegmentSectionPointer,
                (signed __int64)MappedBase,
                0LL);
        if ( v40 )
          ExFreePoolWithTag(MappedBase, 0);
        MappedBase = 0LL;
      }
      LODWORD(v40) = (v9 & 4) != 0;
      v20 = (PVOID *)((char *)CMFSegmentSectionPointer + 8 * v6);
      v42 = v20;
      v21 = *v20;
      break;
    case 256:
      v8 = CMFCacheIndex;
      v33 = CMFCacheIndex;
      LODWORD(v40) = (v9 & 8) != 0;
      v20 = &CMFHitsSectionPointer;
      v42 = &CMFHitsSectionPointer;
      if ( CMFHitsSectionPointer )
        goto LABEL_82;
      CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
      v21 = 0LL;
      break;
    default:
      goto LABEL_51;
  }
  if ( !v21 )
  {
    ExReleaseResourceLite(CMFLock);
    ExAcquireResourceExclusiveLite(CMFLock, 1u);
    if ( ((CMFFlagsCache ^ v9) & 0x1C0000) != 0 )
    {
      if ( (CMFFlagsCache & 0x180000) != 0 )
      {
        v10 = -1073741823;
        v9 = v35;
        goto LABEL_92;
      }
      v20 = v42;
    }
    if ( *v20 )
    {
      v9 = v35;
    }
    else
    {
      LODWORD(v44) = 0x8000000;
      *(_QWORD *)((char *)&v44 + 4) = __PAIR64__(v37, v8);
      BYTE12(v44) = v40;
      v9 = v35;
      *((_QWORD *)&v45 + 1) = __PAIR64__(a2, v35);
      LODWORD(v46) = v38;
      *((_QWORD *)&v46 + 1) = v20;
      LODWORD(v47) = v19;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *(_QWORD *)&v45 = &Event;
      LODWORD(v48) = 48;
      *((_QWORD *)&v48 + 1) = 0LL;
      DWORD2(v49) = 512;
      *(_QWORD *)&v49 = 0LL;
      v50 = 0LL;
      v10 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, &v48, 0LL, 0LL, CMFSystemThreadRoutine, &v44, 0LL, 0LL);
      if ( (v10 & 0xC0000000) == 0xC0000000 )
        goto LABEL_92;
      ZwClose(Handle);
      v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v23;
      if ( v23 )
      {
        if ( v23 >= 0 )
          v10 = -1073741823;
        goto LABEL_92;
      }
      v9 = DWORD2(v45);
      v34 = DWORD2(v45);
      v10 = DWORD1(v46);
      if ( (DWORD1(v46) & 0xC0000000) == 0xC0000000 )
        goto LABEL_92;
      if ( v19 == 16 )
        CMFRegisterEventTime(2u);
    }
    ExConvertExclusiveToSharedLite(CMFLock);
  }
LABEL_82:
  MappedBase = 0LL;
  ViewSize = 0LL;
  v39 = 0LL;
  if ( a6 )
  {
    if ( v19 == 256 || (v10 = CMFCheckAccess((__int64)*v20, v37, PreviousMode), (v10 & 0xC0000000) != 0xC0000000) )
    {
      v10 = MmMapViewOfSection(
              (unsigned int)*v20,
              KeGetCurrentThread()->ApcState.Process,
              (unsigned int)&MappedBase,
              0,
              0LL,
              (__int64)&v39,
              (__int64)&ViewSize,
              1,
              0x400000,
              v38);
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
        MappedBase = 0LL;
      }
      else if ( v19 == 256 )
      {
        v24 = CMFHitsLastFlushTime;
        v25 = MEMORY[0xFFFFF78000000014];
        if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL
          && v24 == _InterlockedCompareExchange64(
                      &CMFHitsLastFlushTime,
                      MEMORY[0xFFFFF78000000014],
                      CMFHitsLastFlushTime)
          && (int)CMFFlushHitsFile(MappedBase, ViewSize) < 0 )
        {
          _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v24, v25);
        }
      }
    }
  }
LABEL_92:
  ExReleaseResourceLite(CMFLock);
  KeLeaveCriticalRegion();
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    if ( a6 )
    {
      ULong64FromUser = RtlReadULong64FromUser(a6);
      RtlWriteULong64ToUser(a6, ULong64FromUser);
      *a6 = MappedBase;
      MappedBase = 0LL;
    }
    if ( a5 )
    {
      ULongFromUser = RtlReadULongFromUser(a5);
      RtlWriteULongToUser(a5, ULongFromUser);
      *a5 = ViewSize;
    }
    if ( a3 )
    {
      v28 = RtlReadULongFromUser(a3);
      RtlWriteULongToUser(a3, v28);
      *a3 = v8;
    }
    if ( a4 )
    {
      v29 = RtlReadULongFromUser(a4);
      RtlWriteULongToUser(a4, v29);
      *a4 = v9;
    }
LABEL_11:
    v10 = 0;
  }
LABEL_102:
  if ( MappedBase )
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, MappedBase, 0LL, 0LL);
  return v10;
}
