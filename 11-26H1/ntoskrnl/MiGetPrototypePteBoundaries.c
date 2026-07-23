/*
 * XREFs of MiGetPrototypePteBoundaries @ 0x140714CA0
 * Callers:
 *     MiMakeTransitionHeatBatch @ 0x140503EE0 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiObtainProtoBaseFromNode @ 0x140443F40 (MiObtainProtoBaseFromNode.c)
 */

__int64 __fastcall MiGetPrototypePteBoundaries(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  _QWORD *CycleTime; // r10
  unsigned __int64 v6; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
  CycleTime = (_QWORD *)stru_140E2D2D0.CycleTime;
  if ( stru_140E2D2D0.CycleTime )
  {
    do
    {
      v8 = 0LL;
      v6 = MiObtainProtoBaseFromNode(CycleTime, &v8);
      if ( a1 < v6 )
      {
        CycleTime = (_QWORD *)*CycleTime;
      }
      else
      {
        if ( a1 < v6 + 8 * v8 )
          break;
        CycleTime = (_QWORD *)CycleTime[1];
      }
    }
    while ( CycleTime );
    if ( CycleTime )
      v3 = MiObtainProtoBaseFromNode(CycleTime, a2);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
  return v3;
}
