/*
 * XREFs of PfProcessCreateNotification @ 0x1409D1270
 * Callers:
 *     PspNotifyThreadCreation @ 0x1409E7408 (PspNotifyThreadCreation.c)
 * Callees:
 *     PfpPartitionFromParent @ 0x14049C820 (PfpPartitionFromParent.c)
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x1409D2980 (PfCalculateProcessHash.c)
 *     PfCheckDeprioritizeImage @ 0x140A98DA4 (PfCheckDeprioritizeImage.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  PVOID P; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return 3221225659LL;
  v3 = PfpPartitionFromParent(*(_QWORD *)(a1 + 1880));
  P = 0LL;
  if ( v3 && (*(_DWORD *)(v3 + 72) & 1) != 0 || (stru_140E66D40.Padding[1] & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (stru_140E66D40.Padding[1] & 1) != 0 && *(_DWORD *)(a1 + 900) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
