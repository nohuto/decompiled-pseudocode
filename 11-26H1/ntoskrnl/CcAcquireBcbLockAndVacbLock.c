/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1402C2C60
 * Callers:
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceFileOffset @ 0x1404EC870 (CcDereferenceFileOffset.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 */

unsigned __int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx

  if ( a1 )
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 288));
  v5 = (unsigned __int64 *)(a2 + 104);
  result = KeAbPreAcquire((__int64)v5, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v5, (AutoBoost *)result, (__int64)v5);
  if ( v7 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v7 + 33) |= 2u;
    else
      *(_BYTE *)(v7 + 10) = 1;
  }
  return result;
}
