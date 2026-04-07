/*
 * XREFs of ?_IsKnownClockId@CAnimationClockCoordinator@@AEAA_NU_GUID@@@Z @ 0x18003FA24
 * Callers:
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x18003F510 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAnimationClockCoordinator::_IsKnownClockId(CAnimationClockCoordinator *this, struct _GUID *a2)
{
  char v2; // r9
  unsigned int i; // r10d
  __int64 v5; // rcx
  unsigned __int64 v6; // rax

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * i);
    v6 = *(_QWORD *)(v5 + 120) - *(_QWORD *)&a2->Data1;
    if ( !v6 )
      v6 = _mm_srli_si128(*(__m128i *)(v5 + 120), 8).m128i_u64[0] - *(_QWORD *)a2->Data4;
    if ( !v6 )
      return *(_DWORD *)(v5 + 80) != 7;
  }
  return v2;
}
