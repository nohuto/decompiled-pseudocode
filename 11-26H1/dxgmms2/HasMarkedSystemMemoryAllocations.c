/*
 * XREFs of HasMarkedSystemMemoryAllocations @ 0x1401152F8
 * Callers:
 *     ?HasMarkedSystemMemoryAllocations@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBA_NXZ @ 0x1401152E0 (-HasMarkedSystemMemoryAllocations@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall HasMarkedSystemMemoryAllocations(__int64 a1)
{
  unsigned __int16 i; // r8
  __int64 v2; // rax

  for ( i = 0; (unsigned int)i < *(_DWORD *)(a1 + 136); ++i )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * i);
    if ( *(_DWORD *)(v2 + 108) != 1 && *(_QWORD *)(v2 + 264) != v2 + 264 )
      return 1;
  }
  return 0;
}
