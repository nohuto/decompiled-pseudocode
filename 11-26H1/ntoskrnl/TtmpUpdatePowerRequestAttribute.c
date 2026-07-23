/*
 * XREFs of TtmpUpdatePowerRequestAttribute @ 0x1407ED534
 * Callers:
 *     TtmNotifySessionPowerRequestPresent @ 0x1407EC118 (TtmNotifySessionPowerRequestPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmpFindPowerRequestEntryById @ 0x1407ECA54 (TtmpFindPowerRequestEntryById.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
 */

char __fastcall TtmpUpdatePowerRequestAttribute(unsigned int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  char v8; // bl
  int v9; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v8 = 0;
  v9 = TtmpAcquireSessionById(&v11, a1);
  if ( v9 >= 0 )
  {
    if ( TtmpFindPowerRequestEntryById(v11, a2, &v12)
      && *(_DWORD *)(v12 + 20) == a3
      && *(_QWORD *)(v12 + 24) == a4
      && !*(_DWORD *)(v12 + 40) )
    {
      v8 = 1;
      *(_QWORD *)(v12 + 32) = a5;
    }
  }
  else
  {
    TtmiLogError("TtmpUpdatePowerRequestAttribute", 3491LL, (unsigned int)v9, 0xFFFFFFFFLL);
  }
  if ( v11 )
  {
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  return v8;
}
