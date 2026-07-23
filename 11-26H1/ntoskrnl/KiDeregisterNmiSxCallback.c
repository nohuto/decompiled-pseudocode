/*
 * XREFs of KiDeregisterNmiSxCallback @ 0x1405E7918
 * Callers:
 *     KeDeregisterNmiCallback @ 0x1405E7240 (KeDeregisterNmiCallback.c)
 *     DifKeDeregisterNmiCallbackWrapper @ 0x1406649D0 (DifKeDeregisterNmiCallbackWrapper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1405F9488 (KiSetSystemAffinityThreadToProcessor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiDeregisterNmiSxCallback(PVOID a1)
{
  int v2; // esi
  KIRQL v3; // al
  PVOID *v4; // rbx
  PVOID *v5; // r8
  unsigned int v7; // edi
  _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  PreviousAffinity = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
  v4 = (PVOID *)KiNmiCallbackListHead;
  v5 = &KiNmiCallbackListHead;
  while ( 1 )
  {
    if ( !v4 )
    {
      KeReleaseSpinLock(&KiNmiCallbackListLock, v3);
      return 3221225480LL;
    }
    if ( v4[3] == a1 )
      break;
    v5 = v4;
    v4 = (PVOID *)*v4;
  }
  *v5 = *v4;
  KeReleaseSpinLock(&KiNmiCallbackListLock, v3);
  v7 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      if ( v2 )
      {
        KiSetSystemAffinityThreadToProcessor(v7, 0LL);
      }
      else
      {
        KiSetSystemAffinityThreadToProcessor(v7, &PreviousAffinity);
        v2 = 1;
      }
      ++v7;
    }
    while ( v7 < (unsigned int)KeNumberProcessors_0 );
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  ExFreePoolWithTag(v4, 0x494D4E4Bu);
  return 0LL;
}
