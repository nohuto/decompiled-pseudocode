/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x140ABCE74
 * Callers:
 *     EtwpAddLogHeader @ 0x140A11F48 (EtwpAddLogHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140A14478 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // r14d
  char v5; // r12
  __int64 v7; // r13
  unsigned __int64 *v8; // rdi
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbx
  __int64 *v12; // r15
  __int64 *v13; // rsi
  int v14; // r12d
  __int64 v15; // r8
  int v17; // r9d
  unsigned int v18; // r13d
  __int64 v19; // rcx
  _DWORD *v20; // rdi
  char *v21; // rdi
  __int64 v22; // rbx
  int v24; // [rsp+70h] [rbp+18h]

  v4 = a3 - *(_DWORD *)(a2 + 48);
  v5 = (char)a4;
  v24 = (unsigned __int8)a4 & 2;
  v7 = a1;
  if ( ((unsigned __int8)a4 & 2) != 0 )
  {
    v8 = (unsigned __int64 *)(a1 + 688);
    v9 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, v9, (__int64)v8);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
  }
  v12 = (__int64 *)(v7 + 1304);
  v13 = *(__int64 **)(v7 + 1304);
  if ( v13 != (__int64 *)(v7 + 1304) )
  {
    v14 = v5 & 4;
    while ( 1 )
    {
      v15 = *(unsigned int *)((char *)v13 + (v14 != 0 ? 4 : 0) + 20);
      if ( (_DWORD)v15 )
      {
        v17 = 16 * v15 + 20 + *((_DWORD *)v13 + 4);
        v18 = (v17 + 7) & 0xFFFFFFF8;
        if ( v18 > v4
          || (v19 = *(unsigned int *)(a2 + 48),
              *(_DWORD *)(a2 + 48) = v19 + v18,
              *(_WORD *)(v19 + a2 + 4) = v17,
              *(_DWORD *)(v19 + a2) = -1072627710,
              *(_WORD *)(v19 + a2 + 6) = 67,
              *(_QWORD *)(v19 + a2 + 8) = *(_QWORD *)(a2 + 88),
              (v20 = (_DWORD *)(v19 + a2 + 16)) == 0LL) )
        {
LABEL_11:
          v7 = a1;
          break;
        }
        *v20 = v15;
        v21 = (char *)(v20 + 1);
        v22 = 16 * v15;
        memmove(v21, (char *)&v13[2 * (unsigned int)(*((_DWORD *)v13 + 5) - v15) + 3] + 4, 16 * v15);
        memmove(&v21[v22], (char *)&v13[2 * *((unsigned int *)v13 + 5) + 3] + 4, *((unsigned int *)v13 + 4));
        if ( v14 )
          *((_DWORD *)v13 + 6) = 0;
        v4 -= v18;
      }
      v13 = (__int64 *)*v13;
      if ( v13 == v12 )
        goto LABEL_11;
    }
  }
  if ( v24 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 688));
    KeAbPostRelease(v7 + 688);
  }
  return 0LL;
}
