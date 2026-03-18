/*
 * XREFs of ExpLockCallbackListExclusive @ 0x14050528C
 * Callers:
 *     ExpDeleteCallback @ 0x14083A830 (ExpDeleteCallback.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 */

unsigned __int64 __fastcall ExpLockCallbackListExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((__int64)&stru_140EFEF90, 0LL, 0LL, a4);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140EFEF90, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(
               (unsigned __int64 *)&stru_140EFEF90,
               (AutoBoost *)result,
               (__int64)&stru_140EFEF90);
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
