/*
 * XREFs of Isoch_DoesStageContainDequeuePointer @ 0x140015740
 * Callers:
 *     Isoch_FindTrbMatch @ 0x1400154F0 (Isoch_FindTrbMatch.c)
 * Callees:
 *     TR_DoesSegmentContainDequeuePointer @ 0x1400157C4 (TR_DoesSegmentContainDequeuePointer.c)
 */

bool __fastcall Isoch_DoesStageContainDequeuePointer(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // r9
  _QWORD *v4; // rbx
  __int64 i; // rdx

  v2 = (_QWORD *)(a1 + 24);
  v3 = a2;
  v4 = *(_QWORD **)(a1 + 24);
  for ( i = *(unsigned int *)(a1 + 88); ; i = 0LL )
  {
    if ( v2 == v4 )
      return (unsigned __int8)TR_DoesSegmentContainDequeuePointer(
                                *(_QWORD *)(a1 + 96),
                                i,
                                *(unsigned int *)(a1 + 104),
                                v3) != 0;
    if ( (unsigned __int8)TR_DoesSegmentContainDequeuePointer(v4, i, 0xFFFFFFFFLL, v3) )
      break;
    v4 = (_QWORD *)*v4;
  }
  return 1;
}
