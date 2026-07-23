/*
 * XREFs of ExpLockCallbackListExclusive @ 0x1404FEBCC
 * Callers:
 *     ExpDeleteCallback @ 0x140840A70 (ExpDeleteCallback.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 */

unsigned __int64 __fastcall ExpLockCallbackListExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((__int64)&stru_140EFF2C0, 0LL, 0LL, a4);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140EFF2C0, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(
               (unsigned __int64 *)&stru_140EFF2C0,
               (AutoBoost *)result,
               (__int64)&stru_140EFF2C0);
  if ( v5 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v5 + 33) |= 2u;
    else
      *(_BYTE *)(v5 + 10) = 1;
  }
  return result;
}
