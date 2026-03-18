/*
 * XREFs of PfProcessCreateNotification @ 0x1409E9D20
 * Callers:
 *     PspNotifyThreadCreation @ 0x1409EAC38 (PspNotifyThreadCreation.c)
 * Callees:
 *     PfpPartitionFromParent @ 0x1404A2E00 (PfpPartitionFromParent.c)
 *     PfCalculateProcessHash @ 0x1409E9560 (PfCalculateProcessHash.c)
 *     PfSnBeginAppLaunch @ 0x1409E9DD0 (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x140A94254 (PfCheckDeprioritizeImage.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  PVOID P; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
    return 3221225659LL;
  v3 = PfpPartitionFromParent(*(_QWORD *)(a1 + 1880));
  P = 0LL;
  if ( v3 && (*(_DWORD *)(v3 + 72) & 1) != 0 || (stru_140E66B30.Padding[1] & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (unsigned __int64)&P + 1);
    if ( (stru_140E66B30.Padding[1] & 1) != 0 && *(_DWORD *)(a1 + 900) && (unsigned int)PfCheckDeprioritizeImage() )
      _InterlockedOr((volatile signed __int32 *)(a1 + 500), 0x4000u);
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
