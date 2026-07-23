/*
 * XREFs of WmiQueryTraceProviderCount @ 0x1404D14C0
 * Callers:
 *     EtwpUpdateFileInfoDriverState @ 0x140B13914 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 */

__int64 WmiQueryTraceProviderCount()
{
  unsigned int v0; // ebx
  KIRQL v1; // al
  _DWORD *v2; // r8
  LONG v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v1 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  v2 = WmipInUseRegEntryHead;
  if ( WmipInUseRegEntryHead != (_UNKNOWN *)&WmipInUseRegEntryHead )
  {
    do
    {
      if ( (v2[12] & 0x44000000) == 0x44000000 && *((_QWORD *)v2 + 2) )
        ++v0;
      v2 = *(_DWORD **)v2;
    }
    while ( v2 != (_DWORD *)&WmipInUseRegEntryHead );
  }
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v1);
  KeReleaseMutantEx((struct _KTHREAD *)&WmipSMMutex, 1LL, 4LL, &v4);
  return v0;
}
