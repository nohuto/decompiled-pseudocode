/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x1408C2B20
 * Callers:
 *     CmDeleteLayeredKey @ 0x14043F510 (CmDeleteLayeredKey.c)
 *     CmpDrainDelayDerefContext @ 0x14043F920 (CmpDrainDelayDerefContext.c)
 *     CmpRemoveHiveFromNamespace @ 0x1404C6120 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteKey @ 0x1408C1360 (CmDeleteKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpLockHashEntryExclusiveByKcb(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 *v7; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rsi
  __int64 result; // rax
  int v12; // ett

  v5 = *(_QWORD *)(BugCheckParameter4 + 32);
  v6 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9)));
  v7 = (unsigned __int64 *)(*(_QWORD *)(v5 + 1648) + 24
                                                   * ((unsigned int)(*(_DWORD *)(v5 + 1656) - 1) & (v6 ^ (v6 >> 9))));
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v7[1] = (unsigned __int64)KeGetCurrentThread();
  _m_prefetchw((const void *)(v5 + 4240));
  LODWORD(result) = *(_DWORD *)(v5 + 4240);
  do
  {
    if ( !(_DWORD)result )
      KeBugCheckEx(0x51u, 0x17uLL, v5, 8uLL, BugCheckParameter4);
    v12 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 4240), result + 1, result);
  }
  while ( v12 != (_DWORD)result );
  return result;
}
