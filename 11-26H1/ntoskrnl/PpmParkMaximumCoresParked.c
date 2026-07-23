/*
 * XREFs of PpmParkMaximumCoresParked @ 0x1404A03F8
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1404A02A0 (PpmCheckMakeupSkippedChecks.c)
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
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v3 = 0;
    v4 = 1264LL * i;
    while ( v3 < *(unsigned __int8 *)(v4 + PpmParkNodes + 10) )
    {
      if ( *(_WORD *)(624LL * v3 + *(_QWORD *)(v4 + PpmParkNodes + 1256) + 10) > *(_WORD *)(624LL * v3
                                                                                          + *(_QWORD *)(v4 + PpmParkNodes + 1256)
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
