/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x140353424
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x1403518C8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x140353358 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     RtlpCSparseBitmapUnlock @ 0x140353ACC (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140353B34 (RtlpCSparseBitmapWaitOnAddress.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x140354454 (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int8 v6; // cf
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  bool v10; // zf
  unsigned __int8 CurrentIrql; // di
  volatile LONG *v12; // rcx
  KIRQL v13; // al
  int v14; // edi
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v18; // rax
  volatile unsigned __int8 *v19; // rdx
  _BYTE *v20; // rdi
  unsigned int v21; // r9d
  _QWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v23; // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp+48h] BYREF

  v25 = a2;
  v22[0] = 0LL;
  v4 = a2 >> 15;
  v6 = _bittest64((const signed __int64 *)(a1 + 56), a2 >> 15);
  v24 = 0LL;
  v8 = a2;
  v9 = a1;
  if ( !v6 )
  {
    v22[0] = *(_QWORD *)a1 + (v4 << 12);
    v24 = 4096LL;
    v14 = RtlpHpEnvAllocVA((unsigned int)v22, (unsigned int)&v24, 0, 1073745920, 4);
    if ( v14 < 0 )
      return (unsigned int)v14;
    _interlockedbittestandset64((volatile signed __int32 *)(v9 + 56), v4);
  }
  v10 = *(_BYTE *)(v9 + 48) == 0;
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = v9;
  if ( v10 )
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v23) = -1;
    --CurrentThread->SpecialApcDisable;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    LOBYTE(v23) = CurrentIrql;
  }
  *(_OWORD *)&a4->Thread = v23;
  while ( 1 )
  {
    v12 = (volatile LONG *)(v9 + 24);
    if ( *(_BYTE *)(v9 + 48) )
    {
      v13 = ExAcquireSpinLockShared(v12);
    }
    else
    {
      v18 = KeGetCurrentThread();
      --v18->SpecialApcDisable;
      v20 = (_BYTE *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 24), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v9 + 24), 0, (LegacyAutoBoost *)v20, (struct _KTHREAD *)(v9 + 24));
      if ( v20 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v19) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v20 + 33), v19, 1u, v21);
        }
        else
        {
          v20[10] = 1;
        }
      }
      v13 = -1;
    }
    *(_BYTE *)(a3 + 4) = v13;
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = v9;
    if ( *(_QWORD *)(v9 + 32) != v8 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpCSparseBitmapWaitOnAddress(v9 + 32, &v25, v16, v9);
  }
  if ( !_bittest64(*(const signed __int64 **)v9, v8) )
  {
    v22[0] = *(_QWORD *)(v9 + 8) + (v8 << 12);
    v24 = 4096LL;
    v14 = RtlpHpEnvAllocVA((unsigned int)v22, (unsigned int)&v24, 0, 1073745920, 4);
    if ( v14 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      v23 = *(_OWORD *)&a4->Thread;
      RtlCSparseBitmapLeaveLockingRegion(&v23);
      return (unsigned int)v14;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)v9, v8);
  }
  return 0;
}
