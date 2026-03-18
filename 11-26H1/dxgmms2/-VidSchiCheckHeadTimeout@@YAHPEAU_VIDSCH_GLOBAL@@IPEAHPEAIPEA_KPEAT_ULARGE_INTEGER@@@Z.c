/*
 * XREFs of ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x14000EE00
 * Callers:
 *     VidSchiCheckFlipQueueTimeout @ 0x14000ECF0 (VidSchiCheckFlipQueueTimeout.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x1400496F4 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 *     McTemplateK0pqqx_EtwWriteTransfer @ 0x14004B9FC (McTemplateK0pqqx_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiCheckHeadTimeout(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        union _ULARGE_INTEGER *a6)
{
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rbx
  unsigned int v10; // esi
  unsigned int *v11; // r13
  unsigned __int64 v12; // r8
  int i; // r15d
  __int64 v14; // rcx
  union _ULARGE_INTEGER **v15; // rcx
  union _ULARGE_INTEGER *v16; // r12
  LARGE_INTEGER PerformanceCounter; // rbx
  union _ULARGE_INTEGER *v18; // r13
  DWORD HighPart; // eax
  LARGE_INTEGER QuadPart; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  bool v24; // zf
  char v25; // si
  int *v26; // r14
  DWORD LowPart; // eax
  _DWORD *v28; // rcx
  unsigned int v29; // r9d
  char v30; // cl
  int v31; // eax
  char j; // r10
  unsigned __int64 v33; // rcx
  DWORD v34; // edx
  unsigned __int64 v35; // rcx
  unsigned __int64 *v36; // rcx
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rsi
  union _ULARGE_INTEGER v39; // rbx
  __int64 v40; // rax
  union _ULARGE_INTEGER v41; // rdx
  int v42; // eax
  __int64 v43; // [rsp+40h] [rbp-59h]
  _QWORD *v44; // [rsp+48h] [rbp-51h]
  struct _VIDSCH_GLOBAL *v45; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v46[2]; // [rsp+58h] [rbp-41h] BYREF
  char v47; // [rsp+68h] [rbp-31h]
  int v48; // [rsp+6Ch] [rbp-2Dh]
  char *v49; // [rsp+70h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-21h] BYREF
  __int16 v51; // [rsp+90h] [rbp-9h]
  unsigned __int64 v52; // [rsp+F0h] [rbp+57h] BYREF
  unsigned int v53; // [rsp+F8h] [rbp+5Fh]
  int *v54; // [rsp+100h] [rbp+67h]
  unsigned int *v55; // [rsp+108h] [rbp+6Fh]

  v55 = a4;
  v54 = a3;
  v53 = a2;
  v7 = a2 + 431LL;
  v8 = *((_QWORD *)a1 + v7);
  v9 = (_QWORD *)((char *)a1 + 8 * v7);
  v43 = v8;
  v10 = 0;
  v44 = v9;
  v11 = a4;
  v49 = (char *)a1 + 2016;
  v51 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 252, &LockHandle);
  LOBYTE(v51) = 1;
  v45 = a1;
  v46[1] = v46;
  v46[0] = v46;
  v47 = 0;
  v48 = 2;
  if ( *(int *)(v8 + 4) >= 4 || *((_BYTE *)a1 + 164) )
  {
    for ( i = -1; ; ++i )
    {
      if ( i == *((_DWORD *)a1 + 40) )
      {
LABEL_17:
        HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v45);
        if ( (_BYTE)v51 )
        {
          if ( HIBYTE(v51) )
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          else
            KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        return v10;
      }
      v14 = *v9;
      v15 = (union _ULARGE_INTEGER **)(i == -1 ? v14 + 32 : v14 + 8LL * i + 40);
      v16 = *v15;
      if ( *v15 )
        break;
LABEL_8:
      v11 = v55;
    }
    if ( (v16->LowPart & 1) != 0 )
    {
      if ( a6 )
        *a6 = v16[3];
      v36 = a5;
      *v54 = i;
      *v36 = v16[4].QuadPart;
      *v11 = v16[5].LowPart;
      HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v45);
      AcquireSpinLock::Release((AcquireSpinLock *)&v49);
      return 1LL;
    }
    if ( *((_BYTE *)a1 + 67) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v16[1] = (union _ULARGE_INTEGER)PerformanceCounter.QuadPart;
    }
    else
    {
      PerformanceCounter.QuadPart = MEMORY[0xFFFFF78000000320];
      v16[1].QuadPart = MEMORY[0xFFFFF78000000320];
    }
    if ( !*(_DWORD *)(v8 + 3236) )
      goto LABEL_15;
    v18 = &v16[175 * v16[8].HighPart + 15];
    HighPart = v18[131].HighPart;
    if ( HighPart != 15 && HighPart != 5 )
      goto LABEL_15;
    QuadPart = (LARGE_INTEGER)v18[166].QuadPart;
    if ( QuadPart.QuadPart <= v18[138].QuadPart )
      QuadPart = (LARGE_INTEGER)v18[138].QuadPart;
    if ( PerformanceCounter.QuadPart <= (unsigned __int64)QuadPart.QuadPart )
    {
LABEL_16:
      v9 = v44;
      goto LABEL_8;
    }
    v22 = PerformanceCounter.QuadPart - QuadPart.QuadPart;
    if ( *((_BYTE *)a1 + 67) )
    {
      v35 = *((_QWORD *)a1 + 363);
      v52 = 0LL;
      if ( is_mul_ok(v22, 0x989680uLL) )
      {
        v23 = v22 * (unsigned __int128)0x989680uLL / v35;
      }
      else
      {
        v12 = v22 / v35;
        v23 = 10000000 * (v22 / v35) + 10000000 * (v22 % v35) / v35;
      }
    }
    else
    {
      v23 = v22 * KeQueryTimeIncrement();
    }
    if ( v23 <= 10000000 * (unsigned __int64)g_TdrConfig[1]
      || (v24 = *((_BYTE *)a1 + 67) == 0, v25 = v53, LOBYTE(v52) = 0, !v24)
      && (*((_BYTE *)a1 + 3284) & 8) == 0
      && (VidSchiObserveHwFlipQueueUpdates((struct HwQueueStagingList *)&v45, a1, v53, 0LL, (bool *)&v52), (_BYTE)v52) )
    {
LABEL_15:
      v10 = v16->LowPart & 1;
      if ( v10 )
        goto LABEL_17;
      goto LABEL_16;
    }
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 444LL) & 0x200) == 0 )
    {
LABEL_30:
      v16->LowPart |= 1u;
      v26 = v54;
      v16[2].QuadPart = v22;
      v16[3] = v18[138];
      LowPart = v18[144].LowPart;
      v28 = (_DWORD *)v18[149].QuadPart;
      *v26 = i;
      if ( (LowPart & 0x10) != 0 )
        v29 = ((unsigned __int16)*v28 | (unsigned __int16)(*v28 >> 10)) & 0x3FF;
      else
        v29 = (1 << *((_DWORD *)a1 + 40)) - 1;
      v8 = v43;
      v30 = -1;
      v24 = !_BitScanForward((unsigned int *)&v31, v29);
      v16[4].QuadPart = 0LL;
      if ( !v24 )
        v30 = v31;
      v16[5].LowPart = 0;
      for ( j = 0; ; ++j )
      {
        LODWORD(v52) = 0;
        if ( !v29 )
          break;
        v12 = v18[149].QuadPart;
        v40 = j * ((8 * *(_DWORD *)(v12 + 8) + 231) & 0xFFFFFFF8);
        v41 = *(union _ULARGE_INTEGER *)(v40 + v12 + 32);
        if ( v41.QuadPart )
        {
          v16[4] = v41;
          v16[5].LowPart = *(_DWORD *)(v40 + v12 + 24);
          break;
        }
        v42 = 1 << v30;
        v30 = -1;
        v29 &= ~v42;
        v24 = !_BitScanForward((unsigned int *)&v42, v29);
        if ( !v24 )
          v30 = v42;
      }
      v24 = (byte_14008A204 & 0x20) == 0;
      v33 = v16[4].QuadPart;
      v34 = v16[5].LowPart;
      *a5 = v33;
      *v55 = v34;
      if ( !v24 )
        McTemplateK0pqqx_EtwWriteTransfer(v33, v34, v12, *((_QWORD *)a1 + 2), v25, v34, v33);
      if ( a6 )
        *a6 = v16[3];
      goto LABEL_15;
    }
    v37 = __rdtsc();
    v38 = __readmsr(0x400000F6u);
    v52 = 10 * (v37 - v38) / *((unsigned int *)KeGetCurrentPrcb() + 17);
    WdLogSingleEntry3(8LL, v38, v37, v52);
    WdLogGlobalForLineNumber = 4732;
    if ( v38 <= v37 && v52 > 10000000 * (unsigned __int64)g_TdrConfig[1] )
    {
      if ( ++v16[5].HighPart >= 2 )
      {
        v25 = v53;
        goto LABEL_30;
      }
      v39.QuadPart = MEMORY[0xFFFFF78000000320];
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry4)(
        3LL,
        v16[5].HighPart,
        2LL,
        (union _ULARGE_INTEGER)v18[138].QuadPart,
        MEMORY[0xFFFFF78000000320]);
      v18[138] = v39;
      v16[6].QuadPart = (ULONGLONG)v18;
      WdLogGlobalForLineNumber = 5483;
    }
    v8 = v43;
    goto LABEL_15;
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v45);
  if ( (_BYTE)v51 )
  {
    if ( HIBYTE(v51) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return 0LL;
}
