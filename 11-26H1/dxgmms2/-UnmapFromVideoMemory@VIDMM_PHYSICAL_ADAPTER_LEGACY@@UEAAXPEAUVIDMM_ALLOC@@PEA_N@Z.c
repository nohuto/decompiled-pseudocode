/*
 * XREFs of ?UnmapFromVideoMemory@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x14011DDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::UnmapFromVideoMemory(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_ALLOC *a2,
        bool *a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(***(_QWORD ***)a2 + 144LL);
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 36) != -1 )
      *a3 = 1;
  }
}
