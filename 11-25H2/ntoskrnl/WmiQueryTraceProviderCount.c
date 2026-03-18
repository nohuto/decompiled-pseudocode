/*
 * XREFs of WmiQueryTraceProviderCount @ 0x140497D78
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x1408D9CA0 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 */

__int64 WmiQueryTraceProviderCount()
{
  unsigned int v0; // ebx
  KIRQL v1; // al
  int *i; // r8
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v1 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  for ( i = (int *)WmipInUseRegEntryHead; i != (int *)&WmipInUseRegEntryHead; i = *(int **)i )
  {
    if ( ((i[12] >> 4) & 0x400000) != 0 && (i[12] & 0x40000000) != 0 )
    {
      if ( *((_QWORD *)i + 2) )
        ++v0;
    }
  }
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v1);
  KeReleaseMutantEx((ULONG_PTR)&WmipSMMutex, 1u, 4, &v4);
  return v0;
}
