/*
 * XREFs of RtlpDynamicEnforcedAddressRangesTreeCompare @ 0x14080F2D0
 * Callers:
 *     RtlAddDynamicEnforcedAddressRange @ 0x14080F0E4 (RtlAddDynamicEnforcedAddressRange.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x14080F220 (RtlRemoveDynamicEnforcedAddressRange.c)
 *     RtlFindDynamicEnforcedAddressInRanges @ 0x140A35C54 (RtlFindDynamicEnforcedAddressInRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpDynamicEnforcedAddressRangesTreeCompare(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a2 + 24);
  if ( v2 + *(_QWORD *)(a1 + 32) > v3 )
    return v2 >= v3 + *(_QWORD *)(a2 + 32);
  else
    return 0xFFFFFFFFLL;
}
