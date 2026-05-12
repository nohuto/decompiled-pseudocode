/*
 * XREFs of RaMiniportSaveFeatureList @ 0x14005BFD8
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall RaMiniportSaveFeatureList(__int64 a1, unsigned int a2, const void *a3)
{
  _OWORD *v6; // rcx

  if ( *(_DWORD *)(a1 + 392) )
    return 3221225659LL;
  if ( a2 <= 0x10 )
  {
    v6 = (_OWORD *)(a1 + 396);
    *v6 = 0LL;
    memmove(v6, a3, a2);
    *(_DWORD *)(a1 + 392) = a2;
  }
  *(_DWORD *)(a1 + 248) &= 0xFFFFFFCF;
  return 0LL;
}
