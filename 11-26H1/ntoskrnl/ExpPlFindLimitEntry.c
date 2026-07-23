/*
 * XREFs of ExpPlFindLimitEntry @ 0x1404D05D0
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x14034CAE0 (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1403CA7E4 (ExpInsertPoolTrackerExpansion.c)
 *     ExPoolQueryLimits @ 0x1405127B0 (ExPoolQueryLimits.c)
 *     ExAllocateHeapSpecialPool @ 0x1405140E8 (ExAllocateHeapSpecialPool.c)
 *     ExpTrackTableInsertLimit @ 0x1406D0D90 (ExpTrackTableInsertLimit.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpPlFindLimitEntry(int a1)
{
  __int64 v1; // r10
  __int64 v2; // r8
  _QWORD *v3; // rcx
  _QWORD *result; // rax

  v1 = -1LL << (stru_140E285C0.RealtimePriorityFloor & 0x1F);
  v2 = (unsigned int)v1 & a1;
  if ( (unsigned int)stru_140E285C0.RealtimePriorityFloor >> 5 )
  {
    v3 = (char *)stru_140E285C0.KernelShadowStack
       + 8
       * ((((unsigned int)stru_140E285C0.RealtimePriorityFloor >> 5) - 1) & (HIBYTE(v2)
                                                                           - 877075889
                                                                           + 442596621 * (unsigned __int8)v2
                                                                           + 37
                                                                           * (BYTE6(v2)
                                                                            + 37
                                                                            * (BYTE5(v2)
                                                                             + 37
                                                                             * (BYTE4(v2)
                                                                              + 37
                                                                              * (BYTE3(v2)
                                                                               + 37 * (BYTE2(v2) + 37 * BYTE1(v2))))))));
    while ( 1 )
    {
      result = (_QWORD *)*v3;
      v3 = result;
      if ( ((unsigned __int8)result & 1) != 0 )
        break;
      if ( v2 == (v1 & result[1]) )
        return result;
    }
  }
  return 0LL;
}
