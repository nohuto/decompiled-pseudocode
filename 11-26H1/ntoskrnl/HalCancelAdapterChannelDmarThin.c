/*
 * XREFs of HalCancelAdapterChannelDmarThin @ 0x14050C960
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeAdapterChannelV3 @ 0x140437640 (IoFreeAdapterChannelV3.c)
 *     HalpDmaRemoveAdapterFromMasterQueue @ 0x14057B3B4 (HalpDmaRemoveAdapterFromMasterQueue.c)
 *     HalpDmaRemoveFromEmergencyLogicalAddressQueue @ 0x14057B45C (HalpDmaRemoveFromEmergencyLogicalAddressQueue.c)
 *     HalpDmaRemoveWcb @ 0x14057B4F4 (HalpDmaRemoveWcb.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x14058F264 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall HalCancelAdapterChannelDmarThin(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rdi
  char v6; // bl

  _m_prefetchw((const void *)(a3 + 8));
  v4 = _InterlockedOr((volatile signed __int32 *)(a3 + 8), 2u);
  if ( (v4 & 1) != 0 || (v4 & 4) == 0 )
    return 0;
  v5 = *(_QWORD *)(a3 + 88);
  if ( !v5 )
  {
    if ( (unsigned __int8)HalpDmaRemoveWcb(a1, a3 + 16) )
      return 1;
    if ( (unsigned __int8)HalpDmaRemoveFromEmergencyLogicalAddressQueue(a1, a1 + 600)
      || (unsigned __int8)HalpDmaRemoveAdapterFromMasterQueue(a1)
      || !*(_BYTE *)(a1 + 441) && (unsigned __int8)HalpDmaRemoveAdapterFromChannelQueue(a1) )
    {
      *(_DWORD *)(a1 + 248) = 0;
      IoFreeAdapterChannelV3(a1);
      return 1;
    }
    return 0;
  }
  v6 = HalpDmaRemoveFromEmergencyLogicalAddressQueue(a1, *(_QWORD *)(a3 + 88));
  if ( v6 )
  {
    if ( *(_BYTE *)(v5 + 97) )
      ExFreePoolWithTag(*(PVOID *)(v5 + 80), 0);
  }
  return v6;
}
