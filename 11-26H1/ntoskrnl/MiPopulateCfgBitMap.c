/*
 * XREFs of MiPopulateCfgBitMap @ 0x1409993B4
 * Callers:
 *     MiProcessPatchImageCfg @ 0x14087A0F8 (MiProcessPatchImageCfg.c)
 *     MiCommitVadCfgBits @ 0x140998F08 (MiCommitVadCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x14099B254 (MiMarkPrivateImageCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x140AA27E4 (MiCfgMarkValidEntries.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r13d
  int v8; // r12d
  __int128 *v9; // rsi
  __int64 v10; // rbp
  volatile signed __int64 *v11; // rbx
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rdi
  int v15; // r8d
  unsigned int v16; // edi
  __int64 v18; // [rsp+50h] [rbp-78h]
  int v19; // [rsp+60h] [rbp-68h]
  __int128 v20; // [rsp+68h] [rbp-60h] BYREF
  __int64 v21; // [rsp+78h] [rbp-50h]
  int v22; // [rsp+80h] [rbp-48h]

  v7 = (int)a1;
  v8 = (int)a4;
  v21 = 0LL;
  v22 = 0;
  v18 = *a1;
  v19 = a2;
  v20 = 0LL;
  if ( a2 <= 1 || (_DWORD)a4 )
    v9 = 0LL;
  else
    v9 = &v20;
  v10 = a1[2];
  v11 = (volatile signed __int64 *)(v10 + 40);
  v12 = (AutoBoost *)KeAbPreAcquire(v10 + 40, 0LL, 0LL, a4);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 40), v12, v10 + 40);
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, v13);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  if ( (unsigned int)MiVadDeleted(v10) )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
    v16 = -1073741558;
  }
  else
  {
    v16 = MiCopyToCfgBitMap(v7, v19, v15, v8, (void *)((a5 >> 6) + v18), v10, 0, (__int64)v9, (a6 - a5) >> 6, a7);
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 40));
  }
  KeAbPostRelease(v10 + 40);
  return v16;
}
