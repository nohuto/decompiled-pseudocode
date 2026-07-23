/*
 * XREFs of TtmpWnfInactivityTimeoutCallback @ 0x1407F27F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     TtmiLogInactivityTimoutUpdate @ 0x1407EF454 (TtmiLogInactivityTimoutUpdate.c)
 *     TtmiResetInactivityTimer @ 0x1407F1B44 (TtmiResetInactivityTimer.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 */

__int64 __fastcall TtmpWnfInactivityTimeoutCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  int v6; // [rsp+20h] [rbp-18h] BYREF
  int v7[5]; // [rsp+24h] [rbp-14h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  v7[0] = 0;
  v6 = 4;
  v4 = ExQueryWnfStateData(a1, &v8, v7, &v6);
  if ( v4 >= 0 )
  {
    if ( v6 == 4 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)&PsAltSystemCallRegistrationLock.QueuedScb, 1u);
      PsAltSystemCallRegistrationLock.OtherOperationCount = -(__int64)(unsigned int)(10000 * v7[0]);
      TtmiLogInactivityTimoutUpdate(v7[0]);
      ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.QueuedScb);
      TtmiResetInactivityTimer(13);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
