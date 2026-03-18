/*
 * XREFs of PpmParkParkingAvailable @ 0x140A9D5A0
 * Callers:
 *     PpmParkRegisterParking @ 0x14060FE58 (PpmParkRegisterParking.c)
 *     PpmParkApplyForcedMask @ 0x1407DD1D8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407DD3EC (PpmParkClearForcedMask.c)
 *     PpmCheckReInit @ 0x140A9D410 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

unsigned __int8 PpmParkParkingAvailable()
{
  unsigned __int8 v0; // dl
  unsigned int i; // r8d
  __int64 v2; // r10
  unsigned __int16 j; // cx
  unsigned __int16 k; // cx
  unsigned __int8 result; // al
  unsigned int m; // ecx
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int16 v9; // di
  unsigned __int16 v10; // bx
  __int64 v11; // rbx
  unsigned __int16 n; // r9

  if ( PopModernStandbyStateNotify.SystemCallNumber == 1
    && KeGetCurrentPrcb()->LogicalProcessorsPerCore == *(unsigned __int16 *)(*(_QWORD *)((char *)&PopModernStandbyStateNotify.116
                                                                                       + 4)
                                                                           + 8LL) )
  {
    return 0;
  }
  v0 = 0;
  for ( i = 0; i < PopModernStandbyStateNotify.SystemCallNumber; ++i )
  {
    v2 = 1264LL * i;
    if ( *(_WORD *)(v2 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1136)
      || *(_WORD *)(v2 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1140) )
    {
LABEL_15:
      v0 = 1;
      break;
    }
    for ( j = 0; j < *(_WORD *)(v2 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 280); ++j )
    {
      if ( *(_QWORD *)(v2 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 8LL * j + 288) )
        goto LABEL_15;
    }
    for ( k = 0; k < PpmPerfCoreParkingMask.Count; ++k )
    {
      if ( PpmPerfCoreParkingMask.Bitmap[k] )
        goto LABEL_15;
    }
    for ( m = 0; m < *(unsigned __int8 *)(v2 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 10); ++m )
    {
      v7 = 624LL * m;
      v8 = *(_QWORD *)(v2 + *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1256);
      v9 = *(_WORD *)(v7 + v8);
      if ( v9 )
      {
        v10 = *(_WORD *)(v7 + v8 + 4);
        if ( *(_WORD *)(v7 + v8 + 2) < v10 || v10 < v9 )
        {
          v0 = 1;
          break;
        }
        v11 = v7 + v8;
        for ( n = 0; n < *(_WORD *)(v11 + 288); ++n )
        {
          if ( *(_QWORD *)(v11 + 8LL * n + 296) )
          {
            v0 = 1;
            break;
          }
        }
      }
    }
  }
  result = v0;
  PopModernStandbyStateNotify.ReadyTime = v0;
  return result;
}
