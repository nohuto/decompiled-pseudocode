/*
 * XREFs of ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x140133B00
 * Callers:
 *     HmgSwapLockedHandleContents @ 0x14002EEE0 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HANDLELOCK::ShareCount(HANDLELOCK *this)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 8LL) + 96LL))(
                             *(_QWORD *)(*((_QWORD *)this + 2) + 8LL),
                             **(unsigned int **)this)
                         + 8);
}
