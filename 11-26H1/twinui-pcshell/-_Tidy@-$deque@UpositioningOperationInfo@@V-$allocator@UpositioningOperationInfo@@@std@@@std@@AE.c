/*
 * XREFs of ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@AEAAXXZ @ 0x1802C2764
 * Callers:
 *     ??1?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@QEAA@XZ @ 0x1802C2734 (--1-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std@@QEAA@X.c)
 * Callees:
 *     ??1positioningOperationInfo@@QEAA@XZ @ 0x18031F62C (--1positioningOperationInfo@@QEAA@XZ.c)
 *     ?_Reset_map@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@AEAAXXZ @ 0x1803219D4 (-_Reset_map@-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@st.c)
 */

void __fastcall std::deque<positioningOperationInfo>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    positioningOperationInfo::~positioningOperationInfo(*(positioningOperationInfo **)(a1[1]
                                                                                     + 8
                                                                                     * ((a1[2] - 1LL) & (v2 - 1 + a1[3]))));
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  if ( a1[1] )
    std::deque<positioningOperationInfo>::_Reset_map(a1);
}
