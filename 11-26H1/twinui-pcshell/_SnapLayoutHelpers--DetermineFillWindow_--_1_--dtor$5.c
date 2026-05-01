/*
 * XREFs of _SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor$5 @ 0x1806F8B3B
 * Callers:
 *     <none>
 * Callees:
 *     ??1FillCandidate@SnapLayoutHelpers@@QEAA@XZ @ 0x1802C0C58 (--1FillCandidate@SnapLayoutHelpers@@QEAA@XZ.c)
 */

void __fastcall SnapLayoutHelpers::DetermineFillWindow_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 264) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 264) &= ~1u;
    SnapLayoutHelpers::FillCandidate::~FillCandidate((__int64 *)(a2 + 64));
  }
}
