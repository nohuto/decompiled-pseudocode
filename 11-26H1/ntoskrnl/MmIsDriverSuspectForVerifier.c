/*
 * XREFs of MmIsDriverSuspectForVerifier @ 0x140C271B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ViIsDriverSuspectForVerifier @ 0x140C27D68 (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 */

__int64 __fastcall MmIsDriverSuspectForVerifier(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int IsDriverSuspectForVerifier; // eax
  unsigned int v3; // ebx

  if ( !(_DWORD)VfRuleClasses )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 40);
  if ( !v1 )
    return 0LL;
  VfDriverLock(a1);
  IsDriverSuspectForVerifier = ViIsDriverSuspectForVerifier(v1);
  ViDriversLoadLockOwner = 0LL;
  v3 = IsDriverSuspectForVerifier;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v3;
}
