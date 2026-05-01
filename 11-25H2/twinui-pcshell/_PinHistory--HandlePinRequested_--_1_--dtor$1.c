/*
 * XREFs of _PinHistory::HandlePinRequested_::_1_::dtor$1 @ 0x1806D6186
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PinHistory::HandlePinRequested_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 176));
}
