/*
 * XREFs of FsRtlAcquireAutoExpandPushLockShared @ 0x14030C010
 * Callers:
 *     FsRtlLookupPerStreamContextInternal @ 0x14030BEF0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlLookupPerFileContext @ 0x140468BE0 (FsRtlLookupPerFileContext.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 */

__int64 __fastcall FsRtlAcquireAutoExpandPushLockShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v6; // rax
  int v7; // ecx
  LegacyAutoBoost *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 result; // rax
  signed __int64 *v12; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire(a1, 0LL, 0LL, a4);
  v7 = *(_DWORD *)(a1 + 8);
  v8 = v6;
  if ( (v7 & 1) != 0 )
  {
    v12 = (signed __int64 *)ExSaDecodeHandle(v7 & 0xFFFFFFF8);
    if ( _InterlockedCompareExchange64(v12, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v12, 0, v8, (struct _KTHREAD *)a1);
    v9 = (__int64)v12;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v6, (struct _KTHREAD *)a1);
    v9 = a1 | 1;
  }
  v10 = v9 | 2;
  if ( !v8 )
    return v10;
  result = v10;
  if ( (KiAbpGlobalState & 1) != 0 )
    *((_BYTE *)v8 + 33) |= 2u;
  else
    *((_BYTE *)v8 + 10) = 1;
  return result;
}
