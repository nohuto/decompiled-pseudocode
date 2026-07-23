/*
 * XREFs of EtwpCovSampContextCleanup @ 0x140B229A0
 * Callers:
 *     EtwpCoverageSamplerCleanup @ 0x140837324 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x140A329F4 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampProcessCleanup @ 0x140A33ED0 (EtwpCovSampProcessCleanup.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampContextCleanup(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v3; // r9
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rsi
  char v7; // r10
  _QWORD **v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r9
  _QWORD *i; // r8
  _QWORD **v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // r9
  _QWORD *j; // r8
  _QWORD *v18; // rsi
  void *v19; // rcx
  __int64 v20; // rdx

  EtwpCovSampProcessCleanup((PVOID **)(a1 + 1248), 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (AutoBoost *)KeAbPreAcquire(a1 + 1176, 0LL, 0LL, v3);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1176), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1176), v4, a1 + 1176);
  v7 = 1;
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  *(_QWORD *)(a1 + 1184) = KeGetCurrentThread();
  v8 = *(_QWORD ***)(a1 + 1200);
  v9 = v8;
  while ( v9 )
  {
    v10 = (_QWORD *)*v9;
    v9 = v10;
    if ( ((unsigned __int8)v10 & (unsigned __int8)v7) != 0 )
      break;
LABEL_14:
    if ( !v10 )
      goto LABEL_23;
    v11 = v9;
    for ( i = v8; ((unsigned __int8)*i & (unsigned __int8)v7) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v9 )
      {
        *i = *v9;
        --*(_DWORD *)(a1 + 1192);
        *v9 |= 0x8000000000000002uLL;
        v9 = i;
        goto LABEL_19;
      }
    }
    v11 = 0LL;
LABEL_19:
    *v11 = 0LL;
  }
  for ( ++v8;
        (unsigned __int64)v8 < *(_QWORD *)(a1 + 1200) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 1196) >> 5);
        ++v8 )
  {
    v9 = *v8;
    if ( ((unsigned __int8)*v8 & (unsigned __int8)v7) == 0 )
    {
      v10 = *v8;
      goto LABEL_14;
    }
  }
LABEL_23:
  v13 = *(_QWORD ***)(a1 + 1216);
  v14 = v13;
  while ( v14 )
  {
    v15 = (_QWORD *)*v14;
    v14 = v15;
    if ( ((unsigned __int8)v15 & (unsigned __int8)v7) != 0 )
      break;
LABEL_30:
    if ( !v15 )
      goto LABEL_38;
    v16 = v14;
    for ( j = v13; ((unsigned __int8)*j & (unsigned __int8)v7) == 0; j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v14 )
      {
        *j = *v14;
        --*(_DWORD *)(a1 + 1208);
        *v14 |= 0x8000000000000002uLL;
        v14 = j;
        goto LABEL_35;
      }
    }
    v16 = 0LL;
LABEL_35:
    *v16 = 0LL;
  }
  for ( ++v13;
        (unsigned __int64)v13 < *(_QWORD *)(a1 + 1216) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 1212) >> 5);
        ++v13 )
  {
    v14 = *v13;
    if ( ((unsigned __int8)*v13 & (unsigned __int8)v7) == 0 )
    {
      v15 = *v13;
      goto LABEL_30;
    }
  }
LABEL_38:
  v18 = (_QWORD *)(a1 + 1224);
  while ( (_QWORD *)*v18 != v18 )
  {
    v20 = *v18 - 72LL;
    *(_DWORD *)(v20 + 132) = 0;
    EtwpCovSampContextRemoveAndFreeModule(a1, (__int64 *)v20);
  }
  v19 = *(void **)(a1 + 1200);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x56777445u);
  *(_QWORD *)(a1 + 1184) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1176));
  KeAbPostRelease(a1 + 1176);
  KeLeaveCriticalRegion();
}
