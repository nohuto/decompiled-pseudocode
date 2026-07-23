/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x1404A8AF4
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140A69154 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x1404A8B64 (MiTranslateWsType.c)
 */

__int64 __fastcall MmGetWorkingSetLeafSize(int a1)
{
  __int64 v1; // rax
  char *v3; // rax

  if ( a1 == 1 )
  {
    v1 = *(_QWORD *)(stru_140E2ED08.ThreadLock
                   + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( !*(_BYTE *)(v1 + 22300) )
      return 0LL;
    v3 = (char *)(v1 + 22592);
    if ( !v3 )
      return 0LL;
  }
  else
  {
    v3 = (char *)&unk_140E36E40 + 320 * (int)MiTranslateWsType();
  }
  return *((_QWORD *)v3 + 17);
}
