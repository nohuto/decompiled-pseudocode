/*
 * XREFs of MiMarkSharedImageCfgBits @ 0x140999108
 * Callers:
 *     MiCommitVadCfgBits @ 0x140998F08 (MiCommitVadCfgBits.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiSetProtectionOnSection @ 0x1402E6E60 (MiSetProtectionOnSection.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiIsCfgBitMapPageShared @ 0x140319EF0 (MiIsCfgBitMapPageShared.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiGetControlAreaLoadConfig @ 0x14048F4E4 (MiGetControlAreaLoadConfig.c)
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiMarkSharedImageCfgBits(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 ControlAreaLoadConfig; // rax
  _QWORD *v5; // r8
  __int64 v6; // r12
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbx
  __int64 v14; // r8
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rbx
  int IsCfgBitMapPageShared; // eax
  __int64 v19; // rsi
  int v20; // ebp
  unsigned int v22; // r8d
  unsigned int v23; // eax
  int v24[2]; // [rsp+50h] [rbp-78h]
  _KPROCESS *Process; // [rsp+58h] [rbp-70h]
  __int64 v26[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+70h] [rbp-58h]
  int v28; // [rsp+78h] [rbp-50h]
  int v30; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+E0h] [rbp+18h]
  int v32; // [rsp+E8h] [rbp+20h] BYREF

  v31 = a3;
  v3 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig(**(_QWORD **)(a3 + 80));
  v6 = v5[2];
  *(_QWORD *)v24 = *(_QWORD *)(ControlAreaLoadConfig + 8);
  v7 = (unsigned __int64 *)(v6 + 40);
  v8 = *v5
     + (((*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 6) & 0x3FFFFFFFFFFFFFFLL);
  v9 = ((((*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) << 12) | 0xFFF)
      - ((*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12)
      + 1) >> 6;
  v11 = (AutoBoost *)KeAbPreAcquire(v6 + 40, 0LL, 0LL, v10);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 40), 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v11, (__int64)v7);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  if ( (unsigned int)MiVadDeleted(v6) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((unsigned __int64)v7);
    return 3221225738LL;
  }
  v15 = v9 + v8;
  v27 = 0LL;
  v16 = (v9 + v8 - 1) | 0xFFF;
  v28 = 0;
  v17 = v8 & 0xFFFFFFFFFFFFF000uLL;
  *(_OWORD *)v26 = 0LL;
  while ( v17 <= v16 )
  {
    IsCfgBitMapPageShared = MiIsCfgBitMapPageShared(v17, v6, v14);
    if ( IsCfgBitMapPageShared == 3 )
    {
      v19 = v16;
      if ( (v17 | 0x1FFFFF) <= v16 )
        v19 = v17 | 0x1FFFFF;
      goto LABEL_12;
    }
    if ( IsCfgBitMapPageShared == 2 )
    {
      v19 = v17 | 0xFFF;
LABEL_12:
      v20 = MiSetProtectionOnSection((__int64)Process, v6, v17, v19, 2, 0, &v32, &v30);
      if ( v20 < 0 )
        goto LABEL_19;
      v17 = v19 - 4095;
LABEL_14:
      v3 = v31;
      goto LABEL_15;
    }
    if ( IsCfgBitMapPageShared != 1 )
    {
      v22 = v17 < v8 ? v8 - v17 : 0;
      if ( v17 + 4096 <= v15 )
      {
        v23 = 4096 - v22;
      }
      else
      {
        v23 = v15 - v22 - v17;
        if ( (_DWORD)v15 - v22 == (_DWORD)v17 )
          break;
      }
      v20 = MiCopyToCfgBitMap(
              a1,
              v24[0],
              v22,
              0,
              (void *)(v17 + v22),
              v6,
              ((unsigned int)v17 + v22 - (_DWORD)v8) >> 1 << 7,
              (__int64)v26,
              v23,
              v3);
      if ( v20 < 0 )
        goto LABEL_19;
      goto LABEL_14;
    }
LABEL_15:
    v17 += 4096LL;
  }
  v20 = 0;
LABEL_19:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
  KeAbPostRelease(v6 + 40);
  return (unsigned int)v20;
}
