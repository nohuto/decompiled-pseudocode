/*
 * XREFs of CcDereferenceFileOffset @ 0x1404F3290
 * Callers:
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 * Callees:
 *     CcAcquireBcbLockAndVacbLock @ 0x1402E0E50 (CcAcquireBcbLockAndVacbLock.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x1402E0ED0 (CcReleaseBcbLockAndVacbLock.c)
 *     CcSetVacbLargeOffset @ 0x1402E1620 (CcSetVacbLargeOffset.c)
 */

void __fastcall CcDereferenceFileOffset(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    CcAcquireBcbLockAndVacbLock(1, a1, a3, a4);
    if ( *(__int64 *)(a1 + 32) > 0x2000000 )
      CcSetVacbLargeOffset(a1, a2, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
    CcReleaseBcbLockAndVacbLock(1, a1);
  }
}
