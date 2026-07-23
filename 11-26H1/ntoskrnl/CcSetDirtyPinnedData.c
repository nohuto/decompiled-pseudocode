/*
 * XREFs of CcSetDirtyPinnedData @ 0x14039F000
 * Callers:
 *     CcZeroDataInCache @ 0x1403A0CB8 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1404668F0 (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1404A3690 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140AC4F70 (CcPreparePinWrite.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14039EDC8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x14039FBB0 (CcChargeDirtyPages.c)
 *     CcScheduleLazyWriteScan @ 0x1403E3830 (CcScheduleLazyWriteScan.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  char *v2; // r8
  __int16 v3; // ax
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rsi
  LONGLONG v10; // rcx
  LONGLONG QuadPart; // rdx
  LONGLONG v12; // rax
  LONGLONG v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned int v17; // r15d
  unsigned __int64 v18; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+90h] [rbp+8h]

  v2 = (char *)BcbVoid;
  v3 = *(_WORD *)BcbVoid;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xF35uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v19[0] = BcbVoid;
  v5 = v19;
  v19[1] = 0LL;
  if ( v3 == 762 )
  {
    BcbVoid = (PVOID)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)(v2 + 16);
  }
  v6 = *((_QWORD *)BcbVoid + 22);
  v21 = *(_QWORD *)(v6 + 536);
  if ( CcEnablePerVolumeLazyWriter )
    v7 = *(_QWORD *)(v6 + 600);
  else
    v7 = 0LL;
  if ( (*(_DWORD *)(v6 + 152) & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v6 + 248) + 136LL) == -1LL )
    *(_QWORD *)(*(_QWORD *)(v6 + 248) + 136LL) = MEMORY[0xFFFFF78000000320];
  if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
  {
    while ( 1 )
    {
      v8 = *v5;
      if ( !*v5 )
        return;
      ++v5;
      v19[0] = v8;
      if ( (v8 & 1) != 0 )
        KeBugCheckEx(0x34u, 0xF97uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v9 = *(_QWORD *)(v8 + 176);
      ExAcquireFastMutex((PKGUARDED_MUTEX)(v9 + 288));
      if ( !*(_BYTE *)(v8 + 2) )
      {
        v16 = *(_DWORD *)(v8 + 4) >> 12;
        *(_BYTE *)(v8 + 2) = 1;
        if ( Lsn )
        {
          *(LARGE_INTEGER *)(v8 + 40) = *Lsn;
          *(LARGE_INTEGER *)(v8 + 48) = *Lsn;
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v21 + 768), &LockHandle);
        if ( !*(_DWORD *)(v9 + 112) && (*(_DWORD *)(v9 + 152) & 2) == 0 )
        {
          CcScheduleLazyWriteScan(v21, v7, 0LL, 0LL);
          CcInsertIntoDirtySharedCacheMapList(v9);
        }
        CcChargeDirtyPages(v9, 0LL, 0LL, v16);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( (*(_DWORD *)(v9 + 152) & 0x10000000) != 0 )
        {
          v17 = v16 << 12;
          v18 = KeGetCurrentThread()->Process[3].Padding[4];
          if ( v18 )
          {
            if ( v17 )
              _InterlockedAdd64((volatile signed __int64 *)(v18 + 8), v17);
            _InterlockedIncrement64((volatile signed __int64 *)(v18 + 24));
          }
        }
      }
      if ( Lsn )
        break;
LABEL_24:
      v15 = *(_QWORD *)(v8 + 32);
      if ( v15 > *(_QWORD *)(v9 + 48) )
        *(_QWORD *)(v9 + 48) = v15;
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 288));
    }
    v10 = *(_QWORD *)(v8 + 40);
    QuadPart = Lsn->QuadPart;
    if ( !v10 || (v12 = Lsn->QuadPart, QuadPart < v10) )
    {
      *(_QWORD *)(v8 + 40) = QuadPart;
      QuadPart = Lsn->QuadPart;
      v12 = Lsn->QuadPart;
    }
    v13 = *(_QWORD *)(v8 + 48);
    v14 = v13 == 0;
    if ( v13 )
    {
      if ( v12 <= v13 )
      {
LABEL_22:
        if ( Lsn->QuadPart > *(_QWORD *)(v9 + 264) )
          *(LARGE_INTEGER *)(v9 + 264) = *Lsn;
        goto LABEL_24;
      }
      v14 = v13 == 0;
    }
    if ( v14 )
      v12 = QuadPart;
    *(_QWORD *)(v8 + 48) = v12;
    goto LABEL_22;
  }
  CcSetDirtyInMask(v6, v2 + 8, *((unsigned int *)v2 + 1), 0LL);
}
