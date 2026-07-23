/*
 * XREFs of CcPrepareMdlWrite @ 0x1404C7470
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x140790650 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     CcForceWriteThrough @ 0x140223A00 (CcForceWriteThrough.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1402C86B0 (CcMapAndRead.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     CcIncrementOpenCount @ 0x140494A80 (CcIncrementOpenCount.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v5; // r12d
  unsigned int v7; // r13d
  char *SharedCacheMap; // rsi
  LONGLONG QuadPart; // rbx
  LONGLONG v10; // r14
  LONGLONG v11; // rdi
  LONGLONG v12; // rcx
  unsigned int v13; // r15d
  int v14; // edi
  signed __int64 v15; // rbx
  __int64 v16; // r9
  __int64 Mdl; // rdi
  char v18; // bl
  NTSTATUS v19; // eax
  __int64 v20; // rbx
  struct _KEVENT *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  PIO_STATUS_BLOCK v24; // rdx
  __int64 VirtualAddress; // [rsp+48h] [rbp-A0h]
  __int64 v26; // [rsp+50h] [rbp-98h] BYREF
  __int64 v27; // [rsp+58h] [rbp-90h]
  char *v28; // [rsp+60h] [rbp-88h]
  __int128 v29; // [rsp+70h] [rbp-78h]
  LONGLONG v30; // [rsp+80h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-60h] BYREF
  __int128 v32[4]; // [rsp+A0h] [rbp-48h] BYREF
  ULONG v33; // [rsp+F0h] [rbp+8h] BYREF
  PLARGE_INTEGER v34; // [rsp+F8h] [rbp+10h]
  ULONG v35; // [rsp+100h] [rbp+18h]
  PMDL *v36; // [rsp+108h] [rbp+20h]

  v36 = MdlChain;
  v34 = FileOffset;
  v5 = Length;
  v27 = 0LL;
  v7 = 0;
  v26 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  v28 = SharedCacheMap;
  if ( (FileObject->Flags & 0x10) == 0
    && (unsigned __int8)CcForceWriteThrough((__int64)FileObject, Length, (__int64)SharedCacheMap, 0) )
  {
    RtlRaiseStatus(-1073741670);
  }
  QuadPart = FileOffset->QuadPart;
  v10 = QuadPart;
  v11 = QuadPart;
  while ( v5 )
  {
    v33 = 0;
    v30 = 0LL;
    VirtualAddress = CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v26, (struct _KLOCK_ENTRIES *)&v33, 0, 0);
    v12 = v10;
    v13 = v33;
    if ( v33 > v5 )
    {
      v13 = v5;
      v33 = v5;
      v12 = v11;
    }
    v10 = v12 + v13;
    v30 = v10;
    v14 = 2;
    if ( (QuadPart & 0xFFF) == 0 && v13 >= 0x1000 )
      v14 = 3;
    if ( (v10 & 0xFFF) == 0 )
      v14 |= 4u;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    v15 = *((_QWORD *)SharedCacheMap + 6) - (QuadPart & 0xFFFFFFFFFFFFF000uLL);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    if ( v15 <= 0 )
    {
      v14 |= 7u;
    }
    else if ( (unsigned int)v15 <= 0x1000 && !HIDWORD(v15) )
    {
      v14 |= 6u;
    }
    CcMapAndRead(v13, v14, 1, VirtualAddress);
    Mdl = IopAllocateMdl(VirtualAddress, v13, 0, v16, 0LL, 0);
    v27 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    v18 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    v29 = 2uLL;
    v32[0] = 2uLL;
    v19 = MiProbeAndLockPages(Mdl, v32);
    if ( v19 < 0 )
      RtlRaiseStatus(v19);
    BYTE5(KeGetCurrentThread()[1].Queue) = v18 - 2;
    ExAcquireFastMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    if ( v10 > *((_QWORD *)SharedCacheMap + 6) )
      *((_QWORD *)SharedCacheMap + 6) = v10;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(SharedCacheMap + 288));
    v20 = *(_QWORD *)(v26 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v26 + 16)) )
    {
      v21 = *(struct _KEVENT **)(v20 + 192);
      if ( v21 )
        KeSetEvent(v21, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v20 + 552));
    }
    v26 = 0LL;
    v22 = *v36;
    if ( *v36 )
    {
      while ( *v22 )
        v22 = (_QWORD *)*v22;
      *v22 = Mdl;
    }
    else
    {
      *v36 = (PMDL)Mdl;
    }
    v27 = 0LL;
    QuadPart = v10;
    v11 = v10;
    v7 += v13;
    v5 -= v13;
    v35 = v5;
  }
  v23 = *((_QWORD *)SharedCacheMap + 67);
  v24 = IoStatus;
  IoStatus->Status = 0;
  v24->Information = v7;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v23 + 768), &LockHandle);
  ++*((_DWORD *)SharedCacheMap + 1);
  ++*((_DWORD *)SharedCacheMap + 136);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
