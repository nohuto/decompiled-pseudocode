/*
 * XREFs of ??1?$queue@UpositioningOperationInfo@@V?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x1802D16DC
 * Callers:
 *     _FullScreenPositioner::FullScreenPositioner_::_1_::dtor$8 @ 0x1806BA81B (_FullScreenPositioner--FullScreenPositioner_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::queue<positioningOperationInfo>::~queue<positioningOperationInfo,std::deque<positioningOperationInfo>>(
        void **a1)
{
  std::deque<positioningOperationInfo>::~deque<positioningOperationInfo>(a1);
}
