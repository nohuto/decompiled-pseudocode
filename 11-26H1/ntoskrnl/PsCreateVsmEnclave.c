/*
 * XREFs of PsCreateVsmEnclave @ 0x1407754E8
 * Callers:
 *     MiCreateVsmEnclave @ 0x14087C860 (MiCreateVsmEnclave.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     PspVsmEnclaveHashAllocator @ 0x1407759A8 (PspVsmEnclaveHashAllocator.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 *     VslCreateEnclave @ 0x140B3BF58 (VslCreateEnclave.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsCreateVsmEnclave(
        __int64 a1,
        int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        char a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  int v10; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v13; // rsi
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rdi
  char *Pool2; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // r14
  int Enclave; // edi
  struct _KLOCK_ENTRIES *v24; // r9
  signed __int64 v25; // rax
  struct _KTHREAD *v26; // rax
  AutoBoost *v27; // rax
  void *v28; // rdx
  AutoBoost *v29; // rdi
  __int64 v30; // rbp
  int v31; // esi
  __int64 v32; // rsi
  char *v33; // r8
  char v34; // cl
  unsigned __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // r9
  __int64 v38; // r13
  _QWORD *v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // [rsp+50h] [rbp-38h]
  __int64 v46; // [rsp+50h] [rbp-38h]

  v10 = a2;
  if ( !a5 && !*(_QWORD *)(a1 + 1608) )
  {
    CurrentThread = KeGetCurrentThread();
    v13 = (unsigned __int64 *)(a1 + 1624);
    --CurrentThread->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire(a1 + 1624, 0LL, 0LL, a4);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      ExfAcquirePushLockExclusiveEx(v13, v14, (__int64)v13);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    if ( !*(_QWORD *)(a1 + 1608) )
    {
      Pool2 = (char *)ExAllocatePool2(0x101uLL);
      if ( Pool2 )
      {
        v18 = ExAllocatePool2(0x101uLL);
        *(_QWORD *)(a1 + 1608) = v18;
        if ( v18 )
        {
          *(_DWORD *)v18 = 0;
          *(_QWORD *)(v18 + 8) = Pool2;
          *(_DWORD *)(v18 + 4) = 128;
          v19 = v18 | 1;
          if ( (Pool2 + 32 >= Pool2 ? 4 : 0) != 0 )
            memset64(Pool2, v19, Pool2 + 32 >= Pool2 ? 4 : 0);
        }
        else
        {
          ExFreePoolWithTag(Pool2, 0);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    KeAbPostRelease((unsigned __int64)v13);
    KeLeaveCriticalRegion();
    if ( !*(_QWORD *)(a1 + 1608) )
      return 3221225626LL;
    v10 = a2;
  }
  v20 = ExAllocatePool2(0x41uLL);
  v21 = (char *)v20;
  if ( !v20 )
    return 3221225626LL;
  Enclave = VslCreateEnclave(v20, a1, v10, a3, (__int64)a4, a6, a7, a5, v20 + 24);
  if ( Enclave >= 0 )
  {
    *((_QWORD *)v21 + 2) = 1LL;
    v21[76] = a5;
    *((_QWORD *)v21 + 4) = a3;
    *((_QWORD *)v21 + 14) = 0LL;
    *((_QWORD *)v21 + 13) = 0LL;
    *((_QWORD *)v21 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)(v21 + 80), NotificationEvent, 0);
    if ( !a5 )
    {
      if ( !*((_QWORD *)v21 + 1) )
      {
        do
        {
          v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1616), 1uLL);
          *((_QWORD *)v21 + 1) = v25 + 1;
        }
        while ( v25 == -1 );
      }
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v27 = (AutoBoost *)KeAbPreAcquire(a1 + 1624, 0LL, 0LL, v24);
      v29 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1624), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1624), v27, a1 + 1624);
      if ( v29 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v29, v28);
        else
          *((_BYTE *)v29 + 10) = 1;
      }
      v30 = *(_QWORD *)(a1 + 1608);
      v31 = *(_DWORD *)(v30 + 4) >> 5;
      if ( *(_DWORD *)v30 >= (unsigned int)(4 * v31) )
      {
        v32 = (unsigned int)(2 * v31);
        if ( (unsigned int)v32 < 4 )
          v32 = 4LL;
        v33 = (char *)PspVsmEnclaveHashAllocator(8LL * (unsigned int)v32, 0LL);
        if ( v33 )
        {
          if ( (((_DWORD)v32 - 1) & (unsigned int)v32) != 0 )
          {
            v34 = -1;
            do
            {
              ++v34;
              LODWORD(v32) = (unsigned int)v32 >> 1;
            }
            while ( (_DWORD)v32 );
            v32 = (unsigned int)(1 << v34);
          }
          if ( (unsigned int)v32 > 0x4000000 )
            v32 = 0x4000000LL;
          v35 = (unsigned int)v32;
          if ( v33 > &v33[8 * v32] )
            v35 = 0LL;
          if ( v35 )
            memset64(v33, v30 | 1, v35);
          v36 = 0;
          v37 = -1LL << (*(_BYTE *)(v30 + 4) & 0x1F);
          if ( (*(_DWORD *)(v30 + 4) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v38 = *(_QWORD *)(v30 + 8);
              while ( 1 )
              {
                v39 = *(_QWORD **)(v38 + 8LL * v36);
                if ( ((unsigned __int8)v39 & 1) != 0 )
                  break;
                *(_QWORD *)(v38 + 8LL * v36) = *v39;
                v45 = v37 & v39[1];
                v40 = ((_DWORD)v32 - 1) & (HIBYTE(v45)
                                         + 37
                                         * (BYTE6(v45)
                                          + 37
                                          * (BYTE5(v45)
                                           + 37
                                           * (BYTE4(v45)
                                            + 37
                                            * (BYTE3(v45)
                                             + 374026047
                                             + 37
                                             * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * (unsigned int)(unsigned __int8)v45)))))));
                *v39 = *(_QWORD *)&v33[8 * v40];
                *(_QWORD *)&v33[8 * v40] = v39;
              }
              ++v36;
            }
            while ( v36 < *(_DWORD *)(v30 + 4) >> 5 );
          }
          v41 = *(_QWORD *)(v30 + 8);
          *(_QWORD *)(v30 + 8) = v33;
          *(_DWORD *)(v30 + 4) = (32 * v32) | *(_DWORD *)(v30 + 4) & 0x1F;
          if ( v41 )
            PspUserApcKernelRoutine(v41);
        }
      }
      v42 = *(_QWORD *)(a1 + 1608);
      v46 = *((_QWORD *)v21 + 1) & (-1LL << (*(_DWORD *)(v42 + 4) & 0x1F));
      v43 = *(_QWORD *)(v42 + 8);
      v44 = ((*(_DWORD *)(v42 + 4) >> 5) - 1) & (HIBYTE(v46)
                                               + 37
                                               * (BYTE6(v46)
                                                + 37
                                                * (BYTE5(v46)
                                                 + 37
                                                 * (BYTE4(v46)
                                                  + 37
                                                  * (BYTE3(v46)
                                                   + 374026047
                                                   + 37
                                                   * (BYTE2(v46)
                                                    + 37 * (BYTE1(v46) + 37 * (unsigned int)(unsigned __int8)v46)))))));
      *(_QWORD *)v21 = *(_QWORD *)(v43 + 8 * v44);
      *(_QWORD *)(v43 + 8 * v44) = v21;
      ++*(_DWORD *)v42;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1624), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1624));
      KeAbPostRelease(a1 + 1624);
      KeLeaveCriticalRegion();
    }
    *a8 = v21;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v21, 0);
    return (unsigned int)Enclave;
  }
}
