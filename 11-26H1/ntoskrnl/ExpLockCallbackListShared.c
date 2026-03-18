/*
 * XREFs of ExpLockCallbackListShared @ 0x1404DE3FC
 * Callers:
 *     ExpGetNextCallback @ 0x140AFA0E0 (ExpGetNextCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall ExpLockCallbackListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v4; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v4 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140EFEF90, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140EFEF90, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140EFEF90.Header.Lock, 0, v4, &stru_140EFEF90);
  if ( v4 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v4 + 33) |= 2u;
    else
      *((_BYTE *)v4 + 10) = 1;
  }
  return result;
}
