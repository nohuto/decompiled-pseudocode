/*
 * XREFs of MmShutdownSystem @ 0x140C06930
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiTrimAllSystemPagableMemory @ 0x14044EF98 (MiTrimAllSystemPagableMemory.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 */

char __fastcall MmShutdownSystem(int a1)
{
  char *v2; // rbx
  __int64 v3; // rdi

  if ( !a1 )
    return MiShutdownSystem();
  if ( a1 == 1 )
  {
    if ( HIDWORD(stru_140E2ED08.RelativeTimerBias) < 2 )
    {
      HIDWORD(stru_140E2ED08.RelativeTimerBias) = 2;
      if ( (PopShutdownCleanly & 2) != 0 )
      {
        MiTrimAllSystemPagableMemory(1);
        if ( Count )
        {
          v2 = (char *)&unk_140E3D560;
          v3 = Count;
          do
          {
            if ( (*(_WORD *)(*(_QWORD *)v2 + 172LL) & 0x840) == 0 )
              ObfDereferenceObjectWithTag(*(PVOID *)(*(_QWORD *)v2 + 24LL), 0x66506D4Du);
            v2 += 8;
            --v3;
          }
          while ( v3 );
        }
      }
    }
  }
  else if ( HIDWORD(stru_140E2ED08.RelativeTimerBias) < 3 )
  {
    HIDWORD(stru_140E2ED08.RelativeTimerBias) = 3;
  }
  return 1;
}
