/*
 * XREFs of PopPepSurprisePowerOn @ 0x1403C145C
 * Callers:
 *     PoFxNotifySurprisePowerOn @ 0x1403C1310 (PoFxNotifySurprisePowerOn.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1403B9720 (PopPepTriggerActivity.c)
 *     PopPepReleaseActivityLink @ 0x1403BAB90 (PopPepReleaseActivityLink.c)
 *     PopPepPromoteActivities @ 0x1403BACA0 (PopPepPromoteActivities.c)
 *     PopPepRequestWork @ 0x1403BB1C8 (PopPepRequestWork.c)
 *     PopPepLockActivityLink @ 0x1403BD780 (PopPepLockActivityLink.c)
 */

void __fastcall PopPepSurprisePowerOn(__int64 a1)
{
  char v2; // si
  unsigned int v3; // ebx
  KIRQL v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v2 = PopPepLockActivityLink(a1, 0LL, 6u, 0, &v4);
  if ( !*(_DWORD *)(a1 + 140) && !*(_BYTE *)(a1 + 136) && !**(_DWORD **)(a1 + 72) )
  {
    v3 = *(_DWORD *)(a1 + 120);
    PopPepTriggerActivity(a1, 0LL, 0, 0);
    PopPepPromoteActivities(a1, 0LL, 1);
    PopPepRequestWork(a1, v3, *(_DWORD *)(a1 + 120));
  }
  PopPepReleaseActivityLink(a1, 0LL, v2, v4);
}
