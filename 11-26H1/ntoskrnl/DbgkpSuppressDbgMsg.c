/*
 * XREFs of DbgkpSuppressDbgMsg @ 0x14078D460
 * Callers:
 *     DbgkMapViewOfSection @ 0x1409947C4 (DbgkMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     DbgkUnMapViewOfSection @ 0x140995428 (DbgkUnMapViewOfSection.c)
 * Callees:
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 */

__int64 __fastcall DbgkpSuppressDbgMsg(__int64 a1)
{
  unsigned int v2; // ebx
  _KPROCESS *Process; // rcx
  __int16 v4; // ax
  bool v5; // al

  v2 = 0;
  if ( (RtlReadUShortFromUser((unsigned __int16 *)(a1 + 6126)) & 0x80u) == 0LL )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].ReadyTime )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].ReadyTime )
      {
        v4 = WORD2(Process[3].PerProcessorCycleTimes);
        v5 = v4 == 332 || v4 == 452;
        if ( v5 && (RtlReadUShortFromUser((unsigned __int16 *)(a1 + 12234)) & 0x80u) != 0LL )
          return 1;
      }
    }
  }
  else
  {
    return 1;
  }
  return v2;
}
