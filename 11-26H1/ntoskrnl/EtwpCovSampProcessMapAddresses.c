/*
 * XREFs of EtwpCovSampProcessMapAddresses @ 0x14093F580
 * Callers:
 *     EtwpCovSampContextAddAddresses @ 0x14093F0AC (EtwpCovSampContextAddAddresses.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  volatile signed __int32 *v29; // rax
  __int64 result; // rax
  unsigned __int64 *v31; // r9
  unsigned __int64 v32; // r8
  _DWORD *v33; // rdx
  unsigned __int64 v34; // [rsp+20h] [rbp-48h]
  int v35; // [rsp+70h] [rbp+8h]

  v7 = a7;
  v8 = a2;
  *a7 = 0;
  v10 = (unsigned __int64 *)(a1 + 8);
  v11 = (unsigned int)a4;
  v35 = MEMORY[0xFFFFF78000000320];
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
  v34 = 0LL;
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
        v32 = v19[1];
        if ( v32 )
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
    v17 = v34;
LABEL_16:
    v16 = a6;
LABEL_17:
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= v11 )
      goto LABEL_18;
  }
  v31 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 16LL * v24);
  v32 = v31[1];
  v17 = *v31 - *(_QWORD *)(v32 + 40);
  v34 = v17;
  if ( v21 < v17 )
    goto LABEL_16;
  v19 = v31;
  v16 = a6;
LABEL_29:
  *(_DWORD *)(v32 + 136) = v35;
  if ( !*(_DWORD *)(v32 + 132) )
    _InterlockedExchange((volatile __int32 *)(v32 + 132), 1);
  v33 = (_DWORD *)(a5 + 8 * v18);
  v18 = (unsigned int)(v18 + 1);
  *v33 = *(_DWORD *)(v32 + 124);
  v33[1] = v21 - v17;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27);
  }
  if ( a1 == v8 + 1248 )
  {
    v28 = 1140LL;
    v29 = (volatile signed __int32 *)(v8 + 1136);
  }
  else
  {
    v28 = 1132LL;
    v29 = (volatile signed __int32 *)(v8 + 1128);
  }
  _InterlockedAdd(v29, v11);
  result = (unsigned int)*v7;
  _InterlockedAdd((volatile signed __int32 *)(v8 + v28), result);
  return result;
}
