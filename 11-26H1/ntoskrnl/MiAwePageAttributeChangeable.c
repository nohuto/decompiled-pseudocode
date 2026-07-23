/*
 * XREFs of MiAwePageAttributeChangeable @ 0x1407057D4
 * Callers:
 *     MiResolveAwePageConflict @ 0x1407076B4 (MiResolveAwePageConflict.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAwePageAttributeChangeable(__int64 a1, __int64 a2)
{
  return (unsigned __int16)*(_DWORD *)(a2 + 32) <= 2u
      && (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0;
}
