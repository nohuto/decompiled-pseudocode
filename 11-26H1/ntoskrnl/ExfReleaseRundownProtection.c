/*
 * XREFs of ExfReleaseRundownProtection @ 0x1402657E0
 * Callers:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 */

void __stdcall ExfReleaseRundownProtection(PEX_RUNDOWN_REF RunRef)
{
  unsigned __int64 Count; // r8
  bool v2; // zf
  signed __int64 v3; // rax
  unsigned __int64 v4; // r8

  _m_prefetchw(RunRef);
  Count = RunRef->Count;
  while ( (Count & 1) == 0 )
  {
    v3 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, Count - 2, Count);
    v2 = Count == v3;
    Count = v3;
    if ( v2 )
      return;
  }
  v4 = Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) == 1
    && !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 32), 0) )
  {
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
  }
}
