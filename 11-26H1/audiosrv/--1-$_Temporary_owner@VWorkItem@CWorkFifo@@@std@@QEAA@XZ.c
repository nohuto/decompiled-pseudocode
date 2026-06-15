/*
 * XREFs of ??1?$_Temporary_owner@VWorkItem@CWorkFifo@@@std@@QEAA@XZ @ 0x1801246F0
 * Callers:
 *     ??$?0VWorkItem@CWorkFifo@@$0A@@?$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFifo@@@Z @ 0x1801241A8 (--$-0VWorkItem@CWorkFifo@@$0A@@-$shared_ptr@VWorkItem@CWorkFifo@@@std@@QEAA@PEAVWorkItem@CWorkFi.c)
 * Callees:
 *     ??_GWorkItem@CWorkFifo@@QEAAPEAXI@Z @ 0x1801249BC (--_GWorkItem@CWorkFifo@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Temporary_owner<CWorkFifo::WorkItem>::~_Temporary_owner<CWorkFifo::WorkItem>(
        CWorkFifo::WorkItem **a1,
        unsigned int a2)
{
  CWorkFifo::WorkItem *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return CWorkFifo::WorkItem::`scalar deleting destructor'(v2, a2);
  return result;
}
