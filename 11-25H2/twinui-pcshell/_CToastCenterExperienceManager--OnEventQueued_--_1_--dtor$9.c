/*
 * XREFs of _CToastCenterExperienceManager::OnEventQueued_::_1_::dtor$9 @ 0x1806A5BB1
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1802D0768 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall CToastCenterExperienceManager::OnEventQueued_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~4u;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference((Microsoft::WRL::Wrappers::HStringReference *)(a2 + 152));
  }
}
