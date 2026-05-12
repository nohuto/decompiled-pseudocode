/*
 * XREFs of RaUnitSendInstanceCounters @ 0x140039378
 * Callers:
 *     RaUnitWriteIoCounterSetCallback @ 0x140039160 (RaUnitWriteIoCounterSetCallback.c)
 *     RaUnitQueueCounterSetCallback @ 0x140039200 (RaUnitQueueCounterSetCallback.c)
 *     RaUnitReadIoCounterSetCallback @ 0x140039240 (RaUnitReadIoCounterSetCallback.c)
 *     RaUnitTransferIoCounterSetCallback @ 0x1400392E0 (RaUnitTransferIoCounterSetCallback.c)
 * Callees:
 *     RaGetUnitPerfCounterIdString @ 0x140039668 (RaGetUnitPerfCounterIdString.c)
 *     RaidGetPortData @ 0x140039F08 (RaidGetPortData.c)
 *     RaUnitGetInstances @ 0x140039F84 (RaUnitGetInstances.c)
 *     RaidReleasePortData @ 0x14003A14C (RaidReleasePortData.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 RaUnitSendInstanceCounters(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64, _QWORD, char *),
        void (__fastcall *a6)(_QWORD, PVOID *, _QWORD, __int64),
        ...)
{
  int Instances; // ebx
  __int64 v7; // r12
  int v8; // r13d
  unsigned int v10; // esi
  __int64 PortData; // rax
  __int64 v12; // r14
  __int64 Pool2; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  KSPIN_LOCK *i; // rbx
  __int64 *v17; // rax
  _QWORD *v18; // r14
  __int64 v19; // r15
  __int64 v20; // rdi
  unsigned __int64 v21; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // r9
  unsigned int v25; // [rsp+38h] [rbp-69h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-61h]
  PVOID P[3]; // [rsp+48h] [rbp-59h] BYREF
  struct _KLOCK_QUEUE_HANDLE v28; // [rsp+60h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+78h] [rbp-29h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-11h] BYREF
  unsigned int v33; // [rsp+110h] [rbp+6Fh]
  va_list va; // [rsp+128h] [rbp+87h] BYREF

  va_start(va, a6);
  v33 = a4;
  Instances = 0;
  v26 = 0LL;
  v7 = a2;
  v8 = a1;
  *(_OWORD *)P = 0LL;
  if ( (unsigned int)(a1 - 2) <= 1 )
  {
    v10 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    v25 = 0;
    memset(&v29, 0, sizeof(v29));
    memset(&v28, 0, sizeof(v28));
    PortData = RaidGetPortData(a1, a2, a3, a4);
    v12 = PortData;
    if ( PortData )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PortData + 24), &LockHandle);
      v15 = *(_QWORD **)(v12 + 8);
      if ( v15 != (_QWORD *)(v12 + 8) )
      {
        do
        {
          KeAcquireInStackQueuedSpinLock(v15 + 7, &v29);
          for ( i = (KSPIN_LOCK *)v15[4]; i != v15 + 4; i = (KSPIN_LOCK *)*i )
          {
            if ( *((_DWORD *)i - 16) == 1094997074
              && ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[34]) )
            {
              KeAcquireInStackQueuedSpinLock(i + 9, &v28);
              v17 = (__int64 *)i[10];
              if ( v17 != (__int64 *)(i + 10) )
              {
                do
                {
                  v17 = (__int64 *)*v17;
                  ++v10;
                }
                while ( v17 != (__int64 *)(i + 10) );
                v25 = v10;
              }
              KeReleaseInStackQueuedSpinLock(&v28);
              ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[34]);
            }
          }
          KeReleaseInStackQueuedSpinLock(&v29);
          v15 = (_QWORD *)*v15;
        }
        while ( v15 != (_QWORD *)(v12 + 8) );
        v7 = a2;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      RaidReleasePortData(v12);
    }
    Instances = 0;
    if ( v10 )
    {
      Pool2 = ExAllocatePool2(64LL, 8LL * v10, 1700028754LL);
      v26 = (_QWORD *)Pool2;
      v14 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        Instances = RaUnitGetInstances(Pool2, &v25);
        if ( Instances >= 0 && v25 )
        {
          v18 = v14;
          v19 = v25;
          v25 = 0;
          do
          {
            v20 = *v18;
            if ( (int)RaGetUnitPerfCounterIdString(*v18, P) >= 0 )
            {
              if ( v8 == 2 )
              {
                v24 = 0LL;
              }
              else
              {
                a5(v20, a3, v33, va);
                v24 = a3;
              }
              a6(*(_QWORD *)(v7 + 24), P, *(unsigned int *)(v20 + 3584), v24);
            }
            if ( P[1] )
            {
              ExFreePoolWithTag(P[1], 0x49446152u);
              *(_OWORD *)P = 0LL;
            }
            v21 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
            v22 = *(_DWORD *)(v21 + *(_QWORD *)(v20 + 40));
            while ( (v22 & 1) == 0 )
            {
              v23 = v22;
              v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + *(_QWORD *)(v20 + 40)), v22 - 2, v22);
              if ( v23 == v22 )
                goto LABEL_29;
            }
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 1032), 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)(v20 + 520), 0, 0);
LABEL_29:
            ++v18;
            --v19;
          }
          while ( v19 );
          Instances = v25;
          v14 = v26;
        }
        ExFreePoolWithTag(v14, 0x65546152u);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)Instances;
}
