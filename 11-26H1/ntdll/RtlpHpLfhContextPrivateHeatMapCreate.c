/*
 * XREFs of RtlpHpLfhContextPrivateHeatMapCreate @ 0x18007219C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhContextMetadataFree @ 0x180063B00 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x18007225C (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x1800723C0 (RtlpHpEnvTlsSetValue.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

_DWORD *__fastcall RtlpHpLfhContextPrivateHeatMapCreate(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  _DWORD *v5; // rax
  unsigned __int64 v6; // rsi

  if ( (*(_BYTE *)(a1 + 80) & 1) == 0 )
    return (_DWORD *)(a1 + 192);
  v5 = (_DWORD *)RtlpHpLfhContextMetadataAllocate(a1, 1LL);
  v3 = v5;
  v6 = (unsigned __int64)v5;
  if ( !v5 )
    return (_DWORD *)(a1 + 192);
  memset_thunk_772440563353939046(v5, 0, 0x100uLL);
  v3[63] = MEMORY[0x7FFE0008] >> 20;
  WORD1(a2) = ((unsigned __int64)v3 - a1) >> 6;
  if ( (int)RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 84), a2) < 0 )
  {
    v3 = (_DWORD *)(a1 + 192);
    RtlpHpLfhContextMetadataFree((_RTL_SRWLOCK *)a1, v6, 1);
  }
  return v3;
}
