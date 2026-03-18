/*
 * XREFs of ?SetSegmentPowerState@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXII_N@Z @ 0x14004AE60
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1400379E0 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::SetSegmentPowerState(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        unsigned int a2,
        int a3,
        char a4)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(*((_QWORD *)this + 219) + 8LL * a2);
  if ( a3 == *(_DWORD *)(v4 + 400) )
  {
    *(_BYTE *)(v4 + 404) = a4;
    if ( !a4 )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*(VIDMM_GLOBAL **)(v4 + 8), (struct VIDMM_SEGMENT *)v4);
  }
}
