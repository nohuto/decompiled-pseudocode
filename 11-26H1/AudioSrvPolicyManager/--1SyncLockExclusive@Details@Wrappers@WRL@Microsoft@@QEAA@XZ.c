/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18002AA64
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$13 @ 0x18004BFB0 (_CApplicationManager--RpcGetProcess_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
