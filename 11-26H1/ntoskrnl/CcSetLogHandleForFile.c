/*
 * XREFs of CcSetLogHandleForFile @ 0x1405B44D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __stdcall CcSetLogHandleForFile(PFILE_OBJECT FileObject, PVOID LogHandle, PFLUSH_TO_LSN FlushToLsnRoutine)
{
  char *SharedCacheMap; // rbx
  _QWORD *v6; // rdi
  bool v7; // zf
  char **v8; // rdx
  PVOID *v9; // rax
  char **v10; // rdx
  PVOID *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 **v15; // rdx
  __int64 *v16; // rcx
  _QWORD *v17; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !*((_DWORD *)SharedCacheMap + 1) )
    KeBugCheckEx(0x34u, 0x17EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*((_DWORD *)SharedCacheMap + 38) & 0x1000000) != 0 )
    KeBugCheckEx(0x34u, 0x184uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (_QWORD *)*((_QWORD *)SharedCacheMap + 67);
  KeAcquireInStackQueuedSpinLock(v6 + 96, &LockHandle);
  v7 = *((_QWORD *)SharedCacheMap + 31) == 0LL;
  *((_QWORD *)SharedCacheMap + 32) = FlushToLsnRoutine;
  if ( !v7 )
  {
    v8 = (char **)*((_QWORD *)SharedCacheMap + 15);
    if ( v8[1] != SharedCacheMap + 120 )
      goto LABEL_21;
    v9 = (PVOID *)*((_QWORD *)SharedCacheMap + 16);
    if ( *v9 != SharedCacheMap + 120 )
      goto LABEL_21;
    v7 = CcEnablePerVolumeLazyWriter == 0;
    *v9 = v8;
    v8[1] = (char *)v9;
    if ( !v7 )
    {
      v10 = (char **)*((_QWORD *)SharedCacheMap + 73);
      if ( v10[1] != SharedCacheMap + 584 )
        goto LABEL_21;
      v11 = (PVOID *)*((_QWORD *)SharedCacheMap + 74);
      if ( *v11 != SharedCacheMap + 584 )
        goto LABEL_21;
      *v11 = v10;
      v10[1] = (char *)v11;
    }
  }
  if ( LogHandle )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x2000000u;
    v12 = SharedCacheMap + 120;
    if ( !*((_DWORD *)SharedCacheMap + 28) )
    {
      v17 = (_QWORD *)v6[83];
      if ( (_QWORD *)*v17 != v6 + 82 )
        goto LABEL_21;
      v7 = CcEnablePerVolumeLazyWriter == 0;
      *v12 = v6 + 82;
      *((_QWORD *)SharedCacheMap + 16) = v17;
      *v17 = v12;
      v6[83] = v12;
      if ( v7 )
        goto LABEL_17;
      v14 = *((_QWORD *)SharedCacheMap + 75) + 624LL;
      goto LABEL_15;
    }
    v13 = (_QWORD *)v6[91];
    if ( (_QWORD *)*v13 != v6 + 90 )
      goto LABEL_21;
    v7 = CcEnablePerVolumeLazyWriter == 0;
    *v12 = v6 + 90;
    *((_QWORD *)SharedCacheMap + 16) = v13;
    *v13 = v12;
    v6[91] = v12;
    if ( !v7 )
    {
      v14 = *((_QWORD *)SharedCacheMap + 75) + 688LL;
LABEL_15:
      v15 = *(__int64 ***)(v14 + 8);
      v16 = (__int64 *)(SharedCacheMap + 584);
      if ( *v15 == (__int64 *)v14 )
      {
        *v16 = v14;
        *((_QWORD *)SharedCacheMap + 74) = v15;
        *v15 = v16;
        *(_QWORD *)(v14 + 8) = v16;
        goto LABEL_17;
      }
LABEL_21:
      __fastfail(3u);
    }
  }
LABEL_17:
  *((_QWORD *)SharedCacheMap + 31) = LogHandle;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
