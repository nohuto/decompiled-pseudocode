/*
 * XREFs of ??1CLoginTransition@@QEAA@XZ @ 0x1800BA448
 * Callers:
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800E2B2C (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x180022AEC (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 */

void __fastcall CLoginTransition::~CLoginTransition(CLoginTransition *this)
{
  *(_QWORD *)this = &CLoginTransition::`vftable';
  CLoginTransition::StopAnimation(this);
}
