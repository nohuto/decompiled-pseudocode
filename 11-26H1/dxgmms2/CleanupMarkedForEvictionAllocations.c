/*
 * XREFs of CleanupMarkedForEvictionAllocations @ 0x14010E4A0
 * Callers:
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NXZ @ 0x14010E360 (-CleanupMarkedForEvictionAllocations@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NXZ.c)
 * Callees:
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x14010E890 (-CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ.c)
 */

char __fastcall CleanupMarkedForEvictionAllocations(__int64 a1)
{
  char v2; // di
  unsigned __int16 i; // bx
  __int64 v4; // rcx

  v2 = 0;
  for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 136); ++i )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * i);
    if ( *(_DWORD *)(v4 + 108) != 1 && *(_QWORD *)(v4 + 264) != v4 + 264 )
      v2 |= VIDMM_SEGMENT::CleanupMarkedForEvictionAllocations((VIDMM_SEGMENT *)v4) != 0;
  }
  return v2;
}
