/*
 * XREFs of ??1CLoginTransition@@QEAA@XZ @ 0x1800B9D38
 * Callers:
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800DF85C (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180037ECC (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 */

void __fastcall CLoginTransition::~CLoginTransition(CLoginTransition *this)
{
  *(_QWORD *)this = &CLoginTransition::`vftable';
  CLoginTransition::StopAnimation(this);
}
