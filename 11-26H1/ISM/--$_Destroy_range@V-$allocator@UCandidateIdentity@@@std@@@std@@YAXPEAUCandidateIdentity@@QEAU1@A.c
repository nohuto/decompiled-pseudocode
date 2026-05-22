/*
 * XREFs of ??$_Destroy_range@V?$allocator@UCandidateIdentity@@@std@@@std@@YAXPEAUCandidateIdentity@@QEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801AD5DC
 * Callers:
 *     ??$_Uninitialized_move@PEAUCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@YAPEAUCandidateIdentity@@QEAU1@0PEAU1@AEAV?$allocator@UCandidateIdentity@@@0@@Z @ 0x1801ADA44 (--$_Uninitialized_move@PEAUCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@YAPEA.c)
 *     ??1_Reallocation_guard@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA@XZ @ 0x1801ADD74 (--1_Reallocation_guard@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@.c)
 *     ?ClearHitTestContext@Edges@@QEAAXPEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801AE18C (-ClearHitTestContext@Edges@@QEAAXPEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIden.c)
 *     ?_Change_array@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQEAUCandidateIdentity@@_K1@Z @ 0x1801AF11C (-_Change_array@-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@std@@@std@@AEAAXQE.c)
 * Callees:
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801ADF24 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::_Destroy_range<std::allocator<CandidateIdentity>>(CandidateIdentity *this, CandidateIdentity *a2)
{
  CandidateIdentity *v3; // rbx
  void *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = CandidateIdentity::`scalar deleting destructor'(v3, 0);
      v3 = (CandidateIdentity *)((char *)v3 + 40);
    }
    while ( v3 != a2 );
  }
  return result;
}
