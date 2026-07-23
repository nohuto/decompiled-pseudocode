/*
 * XREFs of CcFlushCachePostProcessOneRange @ 0x14039BBBC
 * Callers:
 *     CcWriteBehindInternal @ 0x140386430 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x1405B62C4 (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcPostDeferredWrites @ 0x14039D37C (CcPostDeferredWrites.c)
 *     CcReleaseByteRangeFromWrite @ 0x1404668F0 (CcReleaseByteRangeFromWrite.c)
 *     CcIsFatalWriteError @ 0x140467230 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x1404A3858 (CcPerfLogFlushSection.c)
 */

bool __fastcall CcFlushCachePostProcessOneRange(__int64 *a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  char v3; // r15
  _QWORD *v5; // r13
  unsigned int v6; // esi
  __int64 v7; // rbp
  char v8; // r12
  int *v9; // r14
  bool v10; // al
  __int64 v11; // r8
  __int64 v13; // rax
  signed __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  int v17; // esi
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  char v21; // al
  int v22; // ecx
  int v23; // [rsp+20h] [rbp-98h]
  __int64 v24; // [rsp+30h] [rbp-88h] BYREF
  __int64 v25; // [rsp+38h] [rbp-80h]
  __int64 v26; // [rsp+40h] [rbp-78h]
  _QWORD *v27; // [rsp+48h] [rbp-70h]
  __int64 v28; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  int v30; // [rsp+D0h] [rbp+18h]
  unsigned int v31; // [rsp+D8h] [rbp+20h]

  v1 = *a1;
  v2 = *((_DWORD *)a1 + 15) == 0;
  v3 = *((_BYTE *)a1 + 133);
  v5 = (_QWORD *)a1[12];
  v6 = *((_DWORD *)a1 + 26);
  v7 = a1[2];
  v8 = *((_BYTE *)a1 + 132);
  v9 = (int *)a1[14];
  v28 = a1[1];
  v26 = a1[3];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v25 = v1;
  v27 = v5;
  v31 = v6;
  if ( !v2 )
    goto LABEL_8;
  if ( *v9 < 0 )
  {
    v15 = a1[5];
    v16 = *((_DWORD *)a1 + 12);
    v24 = v15;
    v30 = v16;
    if ( !(unsigned __int8)CcIsFatalWriteError(v7) )
    {
      v1 = v25;
      *((_DWORD *)a1 + 16) = 1;
      goto LABEL_8;
    }
    v17 = v30;
    while ( 1 )
    {
      if ( (xmmword_140FC0C10 & 0x20000) != 0 )
        CcPerfLogFlushSection(a1[22], v7, (unsigned int)&v24, 4096, *((_DWORD *)a1 + 14));
      v18 = v26;
      *v9 = v8 != 0 ? 0x80000016 : 0;
      v19 = MmFlushSection(v18, &v24, 4096LL, 0LL, v9, *((_DWORD *)a1 + 14));
      if ( v19 >= 0 )
        goto LABEL_40;
      v20 = *v9;
      if ( v8 )
      {
        if ( v20 == -2147483626 )
          goto LABEL_39;
      }
      else if ( !v20 )
      {
LABEL_39:
        *v9 = v19;
      }
LABEL_40:
      if ( *v9 < 0 )
      {
        v21 = CcIsFatalWriteError(v7);
        v22 = *((_DWORD *)a1 + 32);
        if ( !v21 )
          *((_DWORD *)a1 + 16) = 1;
        if ( !v22 )
          *((_DWORD *)a1 + 32) = *v9;
      }
      else
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v25 + 768), &LockHandle);
        *(_DWORD *)(v7 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      v15 += 4096LL;
      v24 = v15;
      v17 -= 4096;
      if ( !v17 )
      {
        v6 = v31;
        v5 = v27;
        v1 = v25;
        goto LABEL_8;
      }
    }
  }
  if ( (*(_DWORD *)(v7 + 152) & 0x400) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    *(_DWORD *)(v7 + 152) |= 0x400u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( v8 )
  {
    __incgsdword(0x896Cu);
    __addgsdword(0x8970u, (unsigned int)(*((_DWORD *)a1 + 12) + 4095) >> 12);
  }
  *((_DWORD *)a1 + 62) += (unsigned int)(*((_DWORD *)a1 + 12) + 4095) >> 12;
LABEL_8:
  v10 = *((_DWORD *)a1 + 15) || *((_DWORD *)a1 + 16);
  LOBYTE(v23) = v10;
  CcReleaseByteRangeFromWrite(v7, a1 + 5, *((unsigned int *)a1 + 12), a1[15], v23);
  v11 = *((unsigned int *)a1 + 12);
  *((_DWORD *)a1 + 13) += v11;
  a1[28] += v11;
  if ( *((_DWORD *)a1 + 13) >= 0x40000u && *(_QWORD *)a1[23] != a1[23] )
  {
    CcPostDeferredWrites(v1, v28);
    *((_DWORD *)a1 + 13) = 0;
  }
  if ( v8 && !v3 )
  {
    v13 = *(_QWORD *)a1[23] == a1[23]
        ? LODWORD(EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Flink) / 0xA
        : LODWORD(EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Flink);
    a1[20] = a1[19] + v13;
    if ( MEMORY[0xFFFFF78000000320] > a1[20] )
    {
      *((_QWORD *)v9 + 1) = 35422LL;
      return 0;
    }
  }
  if ( v5 )
  {
    v14 = a1[5] + *((unsigned int *)a1 + 12);
    a1[5] = v14;
    if ( *v5 + v6 <= v14 )
      return 0;
    *((_DWORD *)a1 + 12) = *(_DWORD *)v5 + v6 - v14;
    a1[4] = v14;
  }
  if ( !*((_BYTE *)a1 + 201) )
    return 1;
  a1[26] += *((unsigned int *)a1 + 12);
  return (unsigned __int64)a1[28] >> 12 < a1[27];
}
