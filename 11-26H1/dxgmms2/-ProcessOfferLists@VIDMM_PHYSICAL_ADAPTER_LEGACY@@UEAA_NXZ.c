/*
 * XREFs of ?ProcessOfferLists@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NXZ @ 0x14010E300
 * Callers:
 *     <none>
 * Callees:
 *     TrimSegmentOfferLists @ 0x1400B292C (TrimSegmentOfferLists.c)
 *     ProcessSystemMemoryOfferList @ 0x14010E534 (ProcessSystemMemoryOfferList.c)
 */

bool __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::ProcessOfferLists(VIDMM_PHYSICAL_ADAPTER_LEGACY *this)
{
  __int64 v1; // rsi
  char v2; // di

  v1 = *((_QWORD *)this + 7);
  v2 = 0;
  if ( *((VIDMM_PHYSICAL_ADAPTER_LEGACY **)this + 234) != (VIDMM_PHYSICAL_ADAPTER_LEGACY *)((char *)this + 1872) )
    v2 = ProcessSystemMemoryOfferList();
  if ( (*(_DWORD *)(v1 + 6984) & 0x8000) != 0 )
    TrimSegmentOfferLists((__int64)this);
  return v2;
}
