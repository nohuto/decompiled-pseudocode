/*
 * XREFs of PpmParkMaximumCoresParked @ 0x1404A6D68
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1404A6C10 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmParkMaximumCoresParked()
{
  char v0; // r10
  unsigned __int16 i; // r8
  unsigned int v3; // r9d
  __int64 v4; // r11

  v0 = 1;
  for ( i = 0; i < PopModernStandbyStateNotify.SystemCallNumber; ++i )
  {
    v3 = 0;
    v4 = 1264LL * i;
    while ( v3 < *(unsigned __int8 *)(v4 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 10) )
    {
      if ( *(_WORD *)(624LL * v3
                    + *(_QWORD *)(v4 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1256)
                    + 10) > *(_WORD *)(624LL * v3
                                     + *(_QWORD *)(v4 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1256)
                                     + 2) )
      {
        v0 = 0;
        break;
      }
      ++v3;
    }
  }
  return v0;
}
