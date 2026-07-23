/*
 * XREFs of PfSnAltProfileFindByScenarioId @ 0x1409D2894
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByScenarioId @ 0x1409D2930 (PfSnAltProfileTreeCompareByScenarioId.c)
 */

unsigned __int64 __fastcall PfSnAltProfileFindByScenarioId(wchar_t *Str2)
{
  unsigned __int64 Blink; // rbx
  int v3; // edi
  int v4; // eax
  unsigned __int64 v5; // rax

  Blink = (unsigned __int64)stru_140E67200.WaitBlock[1].WaitListEntry.Blink;
  if ( (stru_140E67200.WaitBlock[1].WaitType & 1) != 0 && stru_140E67200.WaitBlock[1].WaitListEntry.Blink )
    Blink = (unsigned __int64)&stru_140E67200.WaitBlock[1].WaitListEntry.Blink ^ (unsigned __int64)stru_140E67200.WaitBlock[1].WaitListEntry.Blink;
  v3 = stru_140E67200.WaitBlock[1].WaitType & 1;
  if ( !Blink )
    return 0LL;
  do
  {
    v4 = PfSnAltProfileTreeCompareByScenarioId(Str2);
    if ( v4 < 0 )
    {
      v5 = *(_QWORD *)Blink;
    }
    else
    {
      if ( v4 <= 0 )
        return (Blink - 24) & -(__int64)(Blink != 0);
      v5 = *(_QWORD *)(Blink + 8);
    }
    if ( v3 && v5 )
      Blink ^= v5;
    else
      Blink = v5;
  }
  while ( Blink );
  return (Blink - 24) & -(__int64)(Blink != 0);
}
