/*
 * XREFs of ResFwFindMessage @ 0x140C50D2C
 * Callers:
 *     BcpFindMessage @ 0x140D146E4 (BcpFindMessage.c)
 * Callees:
 *     RtlFindMessage @ 0x140A86CF0 (RtlFindMessage.c)
 */

unsigned __int16 *__fastcall ResFwFindMessage(unsigned int a1)
{
  unsigned __int16 *v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( *(_QWORD *)&gLoadedDiffHivesLock.AffinityPrimaryGroup
    && **(_QWORD **)&gLoadedDiffHivesLock.AffinityPrimaryGroup
    && (int)RtlFindMessage(**(_QWORD **)&gLoadedDiffHivesLock.AffinityPrimaryGroup, 0xBu, 0, a1, &v2) >= 0
    && (v2[1] & 1) != 0 )
  {
    return v2 + 2;
  }
  else
  {
    return 0LL;
  }
}
