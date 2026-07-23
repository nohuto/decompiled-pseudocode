/*
 * XREFs of MiScheduleZeroPageThreads @ 0x1402A7444
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIsCalibrationWorthwhile @ 0x1404C4720 (MiIsCalibrationWorthwhile.c)
 *     MiReduceZeroingThreads @ 0x1405211AC (MiReduceZeroingThreads.c)
 */

LARGE_INTEGER __fastcall MiScheduleZeroPageThreads(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  LARGE_INTEGER result; // rax
  unsigned __int64 QuadPart; // r14
  unsigned int v5; // ebx
  __int64 v6; // rsi
  KIRQL v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // rdi
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  unsigned int *v12; // rcx
  int IsCalibrationWorthwhile; // eax
  ULONG LowPart; // ecx
  char v15; // al
  int v16; // eax
  LARGE_INTEGER v17; // rax
  volatile LONG *v18; // rcx
  volatile LONG *SpinLock; // [rsp+20h] [rbp-58h]
  struct _KEVENT *v20; // [rsp+28h] [rbp-50h]
  LARGE_INTEGER v22; // [rsp+88h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+18h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h]

  v1 = a1;
  v2 = 0LL;
  v22.QuadPart = 0LL;
  result = KeQueryPerformanceCounter(&v22);
  QuadPart = result.QuadPart;
  if ( v22.QuadPart != 10000000 )
  {
    result.QuadPart = 10000000 * result.QuadPart / v22.QuadPart;
    QuadPart = (__int64)(10000000 * QuadPart) / v22.QuadPart;
  }
  v5 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v1 + 16) + 56320LL * v5;
      if ( !*(_QWORD *)(v6 + 13888) && !*(_QWORD *)(v6 + 13904) )
        goto LABEL_47;
      v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 14200));
      v8 = *(_QWORD *)(v6 + 14192);
      v20 = (struct _KEVENT *)v8;
      if ( v8 )
      {
        if ( *(_QWORD *)(v6 + 14208) )
          break;
      }
      if ( *(_QWORD *)(v6 + 13888) >= 0x2000uLL || *(_QWORD *)(v6 + 13904) )
        KeSetEvent((PRKEVENT)(v1 + 136), 0, 0);
      v18 = (volatile LONG *)(v6 + 14200);
      if ( v7 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v18);
      else
        ExReleaseSpinLockExclusive(v18, v7);
LABEL_47:
      result.QuadPart = (unsigned __int16)KeNumberNodes;
      if ( ++v5 >= (unsigned __int16)KeNumberNodes )
        return result;
    }
    v9 = (_DWORD *)(v8 + 564);
    v22.LowPart = 0;
    v24 = 0LL;
    v10 = 0LL;
    while ( !*(v9 - 50) )
    {
LABEL_34:
      ++v2;
      v9 += 126;
      v10 += 168LL;
      v24 = v2;
      if ( v10 >= 504 )
      {
        SpinLock = (volatile LONG *)(v6 + 14200);
        v2 = 0LL;
        if ( v22.LowPart )
          KeSetEvent(v20 + 7, 0, 0);
        if ( v7 == 17 )
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        else
          ExReleaseSpinLockExclusive(SpinLock, v7);
        v1 = a1;
        goto LABEL_47;
      }
    }
    v11 = *(_QWORD *)(v9 - 69);
    if ( QuadPart < v11 )
    {
      QuadPart = *(_QWORD *)(v9 - 69);
LABEL_13:
      ++*v9;
LABEL_33:
      v2 = v24;
      goto LABEL_34;
    }
    if ( QuadPart <= v11 )
      goto LABEL_13;
    if ( QuadPart - v11 < 0x9C400 )
    {
      ++v9[1];
      goto LABEL_33;
    }
    v12 = (unsigned int *)(v10 + *(_QWORD *)(384LL * v5 + qword_140E2D838 + 376) + 128LL);
    IsCalibrationWorthwhile = MiIsCalibrationWorthwhile(v12, *v12, v5, 0LL);
    LowPart = v22.LowPart;
    if ( IsCalibrationWorthwhile )
      LowPart = 1;
    v15 = *(_BYTE *)(v6 + 14216);
    v22.LowPart = LowPart;
    if ( !v15 )
    {
      ++*(v9 - 1);
      goto LABEL_33;
    }
    if ( !*((_BYTE *)v9 - 300) || !v24 )
      goto LABEL_33;
    if ( v11 != *(_QWORD *)(v9 - 69) )
    {
      ++v9[2];
      goto LABEL_33;
    }
    PerformanceFrequency.LowPart = 0;
    v16 = MiReduceZeroingThreads(v9 - 83, 0LL, &PerformanceFrequency);
    if ( v16 != 8 )
    {
      if ( v16 == 6 )
      {
        ++v9[3];
LABEL_29:
        PerformanceFrequency.QuadPart = 0LL;
        v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
        if ( PerformanceFrequency.QuadPart != 10000000 )
          v17.QuadPart = 10000000 * v17.QuadPart / PerformanceFrequency.QuadPart;
        *(LARGE_INTEGER *)(v9 - 69) = v17;
        goto LABEL_33;
      }
      if ( v16 != 5 )
      {
        ++v9[5];
        goto LABEL_29;
      }
    }
    ++v9[4];
    goto LABEL_29;
  }
  return result;
}
