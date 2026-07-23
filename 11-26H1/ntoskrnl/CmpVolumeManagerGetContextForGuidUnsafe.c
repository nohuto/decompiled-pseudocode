/*
 * XREFs of CmpVolumeManagerGetContextForGuidUnsafe @ 0x140AED84C
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CmpVolumeManagerGetContextForGuidUnsafe(__int64 a1, _QWORD *a2)
{
  int *v2; // r8
  __int64 *v3; // r9
  __int64 v4; // rcx

  v2 = *(int **)&KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor;
  v3 = 0LL;
  while ( v2 != &KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor )
  {
    v4 = *((_QWORD *)v2 + 4) - *a2;
    if ( !v4 )
      v4 = *((_QWORD *)v2 + 5) - a2[1];
    if ( !v4 )
    {
      v3 = (__int64 *)v2;
      if ( v2 && _InterlockedIncrement64((volatile signed __int64 *)v2 + 3) <= 1 )
        __fastfail(0xEu);
      return v3;
    }
    v2 = *(int **)v2;
  }
  return v3;
}
