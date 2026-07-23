/*
 * XREFs of RtlpHpVaMgrRangeSplit @ 0x18006FC10
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x18006F4F4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x18006F7E8 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVaMgrRangeSplit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned __int16 v4; // r8
  unsigned __int64 v5; // r11

  v3 = a2 + 32 * a3;
  *(_WORD *)(v3 + 24) = *(_WORD *)(a2 + 24) - a3;
  *(_WORD *)(v3 + 26) = a3;
  *(_WORD *)(a2 + 24) = a3;
  *(_BYTE *)v3 &= ~2u;
  *(_BYTE *)v3 |= 1u;
  v4 = *(_WORD *)(v3 + 24);
  *(_OWORD *)(v3 + 8) = *(_OWORD *)(a2 + 8);
  v5 = v3 + 32LL * v4;
  if ( v5 < 32LL * *(unsigned __int16 *)(a1 + 40) + (a2 & ~(32 * (unsigned __int64)*(unsigned __int16 *)(a1 + 40) - 1)) )
    *(_WORD *)(v5 + 26) = v4;
  return v3;
}
