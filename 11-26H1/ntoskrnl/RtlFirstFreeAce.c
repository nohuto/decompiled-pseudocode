/*
 * XREFs of RtlFirstFreeAce @ 0x140A47520
 * Callers:
 *     RtlAddAccessFilterAce @ 0x140803130 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140803440 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140803804 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408181E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x14081840C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140818554 (SddlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFirstFreeAce(__int64 a1, unsigned __int64 *a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r11

  v2 = 0;
  v3 = a1 + 8;
  *a2 = 0LL;
  v4 = a1 + *(unsigned __int16 *)(a1 + 2);
  while ( v2 < *(unsigned __int16 *)(a1 + 4) )
  {
    if ( v3 >= v4 )
      return 0;
    ++v2;
    v3 += *(unsigned __int16 *)(v3 + 2);
  }
  if ( v3 <= v4 )
    *a2 = v3;
  return 1;
}
