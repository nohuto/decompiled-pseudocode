/*
 * XREFs of EtwpCovSampProcessMapAddresses @ 0x140A32690
 * Callers:
 *     EtwpCovSampContextAddAddresses @ 0x140A321BC (EtwpCovSampContextAddAddresses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall EtwpCovSampProcessMapAddresses(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  _DWORD *v7; // r12
  __int64 v8; // rsi
  unsigned __int64 *v10; // rdi
  unsigned int v11; // r13d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // rbx
  unsigned int v16; // r9d
  unsigned __int64 v17; // r10
  __int64 v18; // r14
  unsigned __int64 *v19; // r15
  __int64 v20; // rdi
  unsigned __int64 v21; // r11
  unsigned int v22; // esi
  int v23; // r9d
  unsigned int v24; // r10d
  int v25; // r8d
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rax
  __int64 result; // rax
  unsigned __int64 *v29; // r9
  unsigned __int64 v30; // r8
  _DWORD *v31; // rdx
  unsigned __int64 v32; // [rsp+20h] [rbp-48h]
  int v33; // [rsp+70h] [rbp+8h]

  v7 = a7;
  v8 = a2;
  *a7 = 0;
  v10 = (unsigned __int64 *)(a1 + 8);
  v11 = (unsigned int)a4;
  v33 = MEMORY[0xFFFFF78000000320];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (AutoBoost *)KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    ExfAcquirePushLockExclusiveEx(v10, v13, (__int64)v10);
  if ( v15 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v15, v14);
    else
      *((_BYTE *)v15 + 10) = 1;
  }
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( v8 != *(_QWORD *)a1 )
    goto LABEL_20;
  v16 = a6;
  if ( !a6 )
    goto LABEL_20;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v32 = 0LL;
  v20 = 0LL;
  if ( !v11 )
    goto LABEL_19;
  while ( 1 )
  {
    v21 = *(_QWORD *)(a3 + 8 * v20);
    if ( v19 )
    {
      if ( v21 < v17 || v21 >= *v19 )
      {
        v19 = 0LL;
      }
      else
      {
        v30 = v19[1];
        if ( v30 )
          goto LABEL_29;
      }
    }
    v22 = *(_DWORD *)(a1 + 32);
    v23 = -1;
    v24 = v22;
    if ( v22 )
    {
      do
      {
        v25 = (int)(v24 - v23) / 2 + v23;
        if ( v21 >= *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v25) )
        {
          v23 += (int)(v24 - v23) / 2;
          v25 = v24;
        }
        v24 = v25;
      }
      while ( v23 + 1 != v25 );
    }
    if ( v24 < v22 )
      break;
    v17 = v32;
LABEL_16:
    v16 = a6;
LABEL_17:
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= v11 )
      goto LABEL_18;
  }
  v29 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 16LL * v24);
  v30 = v29[1];
  v17 = *v29 - *(_QWORD *)(v30 + 40);
  v32 = v17;
  if ( v21 < v17 )
    goto LABEL_16;
  v19 = v29;
  v16 = a6;
LABEL_29:
  *(_DWORD *)(v30 + 136) = v33;
  if ( !*(_DWORD *)(v30 + 132) )
    _InterlockedExchange((volatile __int32 *)(v30 + 132), 1);
  v31 = (_DWORD *)(a5 + 8 * v18);
  v18 = (unsigned int)(v18 + 1);
  *v31 = *(_DWORD *)(v30 + 124);
  v31[1] = v21 - v17;
  if ( (unsigned int)v18 < v16 )
    goto LABEL_17;
LABEL_18:
  v7 = a7;
  v8 = a2;
LABEL_19:
  v10 = (unsigned __int64 *)(a1 + 8);
  *v7 = v18;
LABEL_20:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((unsigned __int64)v10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a1 == v8 + 1248 )
  {
    v26 = 1140LL;
    v27 = (volatile signed __int32 *)(v8 + 1136);
  }
  else
  {
    v26 = 1132LL;
    v27 = (volatile signed __int32 *)(v8 + 1128);
  }
  _InterlockedAdd(v27, v11);
  result = (unsigned int)*v7;
  _InterlockedAdd((volatile signed __int32 *)(v8 + v26), result);
  return result;
}
