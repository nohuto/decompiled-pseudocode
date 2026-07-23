/*
 * XREFs of PspSelectVsmEnclaveByNumber @ 0x140A96B1C
 * Callers:
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PspSelectVsmEnclaveByNumber(__int64 a1, __int64 a2, __int64 *a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rbx
  __int64 v9; // rsi
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  signed __int64 v12; // r11
  __int64 v13; // r10
  int v14; // r9d
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v19; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 1624);
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1624, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v11, (struct _KTHREAD *)v5);
  v12 = 1LL;
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v13 = *(_QWORD *)(a1 + 1608);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 4) >> 5;
    v15 = -1LL << (*(_BYTE *)(v13 + 4) & 0x1F);
    v16 = a2 & v15;
    if ( v14 )
    {
      v19 = a2 & v15;
      v17 = *(_QWORD *)(v13 + 8)
          + 8LL
          * ((v14 - 1) & (HIBYTE(v19)
                        - 877075889
                        + 442596621 * (unsigned __int8)v16
                        + 37
                        * (BYTE6(v19)
                         + 37
                         * (BYTE5(v19)
                          + 37 * (BYTE4(v19) + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (unsigned int)BYTE1(v19))))))));
      while ( 1 )
      {
        v17 = *(_QWORD *)v17;
        if ( ((unsigned __int8)v17 & (unsigned __int8)v12) != 0 )
          break;
        if ( v16 == (v15 & *(_QWORD *)(v17 + 8)) )
          goto LABEL_11;
      }
    }
    v17 = 0LL;
LABEL_11:
    if ( v17 )
    {
      v9 = v17;
      if ( *(_DWORD *)(v17 + 40) )
      {
        if ( v12 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 16), v12) <= v12 )
          __fastfail(0xEu);
      }
      else
      {
        v9 = 0LL;
      }
    }
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  if ( !v9 )
    return 3221225480LL;
  *a3 = v9;
  return 0LL;
}
