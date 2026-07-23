/*
 * XREFs of CcFlushCacheOneRange @ 0x14039BEE0
 * Callers:
 *     CcWriteBehindInternal @ 0x140386430 (CcWriteBehindInternal.c)
 *     CcWriteBehindAsync @ 0x1403879F4 (CcWriteBehindAsync.c)
 *     CcFlushCachePriv @ 0x14039A060 (CcFlushCachePriv.c)
 *     CcWriteBehindAsyncFlushOneRange @ 0x1405B62C4 (CcWriteBehindAsyncFlushOneRange.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall CcFlushCacheOneRange(__int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // r15
  bool v5; // zf
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned int v11; // r13d
  LegacyAutoBoost *v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int16 v17; // ax
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rtt
  BOOL v21; // eax
  __int64 v22; // rsi
  struct _KEVENT *v23; // rcx
  unsigned int v24; // eax
  int v25; // esi
  int v26; // ebp
  __int64 v27; // r14
  ULONG_PTR v28; // rax
  int v29; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // r8d
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  int v36; // ecx
  char v37; // [rsp+30h] [rbp-B8h]
  char v38; // [rsp+31h] [rbp-B7h]
  unsigned int v39; // [rsp+34h] [rbp-B4h]
  unsigned int v40; // [rsp+38h] [rbp-B0h]
  int *v41; // [rsp+40h] [rbp-A8h]
  __int64 v42; // [rsp+48h] [rbp-A0h]
  __int64 v43; // [rsp+50h] [rbp-98h]
  __int64 v44; // [rsp+58h] [rbp-90h]
  __int64 v45; // [rsp+60h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v47[2]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp-58h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-48h]
  int v50; // [rsp+A8h] [rbp-40h]
  int v51; // [rsp+ACh] [rbp-3Ch]

  v4 = a1[2];
  v5 = *((_BYTE *)a1 + 200) == 0;
  v7 = -1073741823;
  v44 = *a1;
  v45 = a1[1];
  v37 = *((_BYTE *)a1 + 132);
  v38 = *((_BYTE *)a1 + 133);
  v42 = a1[9];
  v41 = (int *)a1[14];
  v43 = a1[3];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v5 && !*((_BYTE *)a1 + 201) )
  {
    a1[26] = a1[5];
    *((_BYTE *)a1 + 201) = 1;
  }
  v8 = *((unsigned int *)a1 + 12);
  *((_DWORD *)a1 + 15) = 0;
  v39 = v8;
  do
  {
    v9 = 0LL;
    v10 = a1[5] + *((unsigned int *)a1 + 12) - v8;
    v40 = (*((_DWORD *)a1 + 10) + *((_DWORD *)a1 + 12) - v8) & 0x3FFFF;
    v11 = 0x40000 - v40;
    v12 = (LegacyAutoBoost *)KeAbPreAcquire(v4 + 104, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 104), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v4 + 104), 0, v12, (struct _KTHREAD *)(v4 + 104));
    if ( v12 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v12 + 33) |= 2u;
      else
        *((_BYTE *)v12 + 10) = 1;
    }
    v13 = *(_QWORD *)(v4 + 32);
    v14 = *(_QWORD *)(v4 + 88);
    if ( v13 > 0x2000000 )
    {
      v31 = 25;
      v32 = 0;
      do
      {
        v33 = v31;
        v31 += 7;
        ++v32;
      }
      while ( v13 > 1LL << v31 );
      v15 = *(_QWORD *)(v14 + 8 * (v10 >> v33));
      if ( !v15 )
        goto LABEL_15;
      do
      {
        if ( !v32 )
          break;
        v34 = 1LL << v33;
        v33 -= 7;
        v10 &= v34 - 1;
        --v32;
        v15 = *(_QWORD *)(v15 + 8 * (v10 >> v33));
      }
      while ( v15 );
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 8 * ((unsigned __int64)(unsigned int)v10 >> 18));
    }
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      v17 = _InterlockedIncrement((volatile signed __int32 *)(v15 + 16));
      if ( !v17 )
        KeBugCheckEx(0x34u, 0xBDCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( v17 == 1 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 552));
      v9 = *(_QWORD *)v15 + v40;
    }
LABEL_15:
    _m_prefetchw((const void *)(v4 + 104));
    v18 = *(_QWORD *)(v4 + 104);
    v19 = v18 - 16;
    if ( (v18 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v19 = 0LL;
    if ( (v18 & 2) != 0
      || (v20 = *(_QWORD *)(v4 + 104),
          v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 104), v19, v18)) )
    {
      ExfReleasePushLock((_QWORD *)(v4 + 104));
    }
    KeAbPostRelease(v4 + 104);
    if ( v9 )
    {
      if ( v11 > v39 )
        v11 = v39;
      v21 = ((unsigned __int8)MmSetAddressRangeModifiedEx(v9, v11) || *((_DWORD *)a1 + 15))
         && a1[5] + *((unsigned int *)a1 + 12) < *(_QWORD *)(v4 + 40)
         && (*(_DWORD *)(v4 + 276) & 0xF) != 0
         && v37
         && !v38
         && (*(_DWORD *)(v4 + 152) & 0x200) == 0
         && !*(_BYTE *)a1[24];
      *((_DWORD *)a1 + 15) = v21;
      v22 = *(_QWORD *)(v15 + 8);
      if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v15 + 16)) )
      {
        v23 = *(struct _KEVENT **)(v22 + 192);
        if ( v23 )
          KeSetEvent(v23, 0, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v22 + 552));
      }
      v24 = v39;
    }
    else
    {
      v24 = v39;
      if ( v11 > v39 )
        v11 = v39;
    }
    v8 = v24 - v11;
    v39 = v8;
  }
  while ( (_DWORD)v8 );
  __addgsdword(0x8968u, *((_DWORD *)a1 + 15));
  if ( *((_DWORD *)a1 + 15) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v44 + 768), &LockHandle);
    v35 = (unsigned __int64)*((unsigned int *)a1 + 12) >> 12;
    if ( CcEnablePerVolumeLazyWriter )
      *(_QWORD *)(v45 + 1096) += v35;
    else
      *(_QWORD *)(v44 + 1160) += v35;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    if ( (xmmword_140FC0C10 & 0x20000) != 0 )
    {
      v25 = *((_DWORD *)a1 + 14);
      v26 = *((_DWORD *)a1 + 12);
      v27 = a1[22];
      v28 = CcReferenceSharedCacheMapFileObject(v4);
      v48[1] = *(_QWORD *)(v28 + 24);
      ObFastDereferenceObjectDeferDelete((signed __int64 *)(v4 + 96), v28, 0x63536343u);
      if ( a1 == (__int64 *)-40LL )
        v49 = 0LL;
      else
        v49 = a1[5];
      v48[0] = v27;
      v47[0] = v48;
      v50 = v26;
      v51 = v25;
      v47[1] = 32LL;
      EtwTraceKernelEvent((int)v47, 1, 0x80020000, 5642, 5249282);
    }
    *v41 = v37 != 0 ? 0x80000016 : 0;
    v29 = MmFlushSection(v43, a1 + 5, *((unsigned int *)a1 + 12), v42, v41, *((_DWORD *)a1 + 14));
    v7 = v29;
    if ( v29 < 0 )
    {
      v36 = *v41;
      if ( v37 )
      {
        if ( v36 != -2147483626 )
          return v7;
      }
      else if ( v36 )
      {
        return v7;
      }
      *v41 = v29;
    }
  }
  return v7;
}
