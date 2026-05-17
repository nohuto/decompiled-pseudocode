/*
 * XREFs of RtlpHpLfhContextPrivateHeatMapCreate @ 0x180093238
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800932F8 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x18009345C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextMetadataFree @ 0x180096160 (RtlpHpLfhContextMetadataFree.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall RtlpHpLfhContextPrivateHeatMapCreate(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  _DWORD *v5; // rax
  void *v6; // rsi
  __int64 v7; // r8

  if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
    return (_DWORD *)(a1 + 192);
  v5 = (_DWORD *)RtlpHpLfhContextMetadataAllocate(a1, 1LL);
  v3 = v5;
  v6 = v5;
  if ( !v5 )
    return (_DWORD *)(a1 + 192);
  memset_thunk_772440563353939046(v5, 0, 0x100uLL);
  v3[63] = MEMORY[0x7FFE0008] >> 20;
  WORD1(a2) = ((unsigned __int64)v3 - a1) >> 6;
  if ( (int)RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 84), a2, v7) < 0 )
  {
    v3 = (_DWORD *)(a1 + 192);
    RtlpHpLfhContextMetadataFree(a1, v6, 1LL);
  }
  return v3;
}
