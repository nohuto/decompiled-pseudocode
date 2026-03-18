/*
 * XREFs of MiWakePageZeroing @ 0x14028E71C
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14028C8F4 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertHugeRangeInList @ 0x14048E66C (MiInsertHugeRangeInList.c)
 * Callees:
 *     MiPeriodicZeroingNeeded @ 0x1402A64FC (MiPeriodicZeroingNeeded.c)
 *     MiImmediateZeroingNeeded @ 0x1402DEC2C (MiImmediateZeroingNeeded.c)
 *     MiResumeBackgroundZeroing @ 0x14051F69C (MiResumeBackgroundZeroing.c)
 */

void __fastcall MiWakePageZeroing(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax

  if ( a2 )
  {
    v3 = 1;
    v4 = a2 + 56320;
    v5 = a2;
  }
  else
  {
    v3 = 0;
    v5 = *(_QWORD *)(a1 + 16);
    v4 = v5 + 56320LL * (unsigned __int16)KeNumberNodes;
  }
  while ( v5 < v4 )
  {
    if ( !*(_BYTE *)(v5 + 14216) )
    {
      if ( a2 )
        v6 = MiImmediateZeroingNeeded(v5);
      else
        v6 = MiPeriodicZeroingNeeded(v5);
      MiResumeBackgroundZeroing(v5, v6, v3);
    }
    v5 += 56320LL;
  }
}
