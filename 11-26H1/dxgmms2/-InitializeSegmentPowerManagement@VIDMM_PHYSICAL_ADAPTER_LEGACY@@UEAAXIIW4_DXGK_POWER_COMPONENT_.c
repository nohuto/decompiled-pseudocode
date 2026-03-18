/*
 * XREFs of ?InitializeSegmentPowerManagement@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1400B2620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::InitializeSegmentPowerManagement(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        unsigned int a2,
        int a3,
        enum _DXGK_POWER_COMPONENT_TYPE a4)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)(*((_QWORD *)this + 219) + 8LL * a2);
  if ( a4 == DXGK_POWER_COMPONENT_MEMORY )
  {
    if ( *(_DWORD *)(v4 + 108) == 1 )
      *(_DWORD *)(v4 + 400) = a3;
  }
  else if ( a4 == DXGK_POWER_COMPONENT_MEMORY_REFRESH )
  {
    *(_DWORD *)(*(_QWORD *)(v4 + 8) + 40280LL) = a3;
  }
}
