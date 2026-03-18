/*
 * XREFs of _anonymous_namespace_::ScrubDelegateThread @ 0x1400B9694
 * Callers:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1400B8E08 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401D9420 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 * Callees:
 *     <none>
 */

void __fastcall anonymous_namespace_::ScrubDelegateThread(__int64 a1)
{
  bool v1; // zf

  *(_QWORD *)(a1 + 1360) &= ~0x2000uLL;
  v1 = (*(_QWORD *)(a1 + 1360) & 0x1000000LL) == 0;
  *(_QWORD *)(a1 + 1464) = 0LL;
  *(_QWORD *)(a1 + 1472) = 0LL;
  if ( v1 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 520), 0xFFFFFFBF);
}
